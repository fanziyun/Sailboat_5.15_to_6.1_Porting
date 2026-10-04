// decompiled from migt by radare2+r2ghidra (pdg); repaired by ko_repair

// ===== sym.__cfi_check @ 0x08002000 (size 1636) =====



//WARNING: Switch with 1 destination removed at 0x08004d5c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x199c66976d43c92e) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 < -0x54909f7036e85493) {
                if (arg1 < -0x576fba69a538e3dd) {
                    if (arg1 == -0x7ea227012187e65a) {
                        pcVar2 = sym.update_frame_ravg.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x5c7fa406e14fe9d2) goto code_r0x08004d1c;
                        pcVar2 = sym.skip_walt_window_update.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt;
                    }
                }
                else {
                    if (arg1 != -0x576fba69a538e3dd) {
                        if (arg1 != -0x550b9e52359ac614) goto code_r0x08004d1c;
                        pcVar2 = sym.do_ceiling_limit.43230158a3451c0555eac76e849387b0.cfi_jt;
                        goto code_r0x08002594;
                    }
                    pcVar2 = sym.migt_hook.cfi_jt;
                }
            }
            else if (arg1 < -0x2ee0710dce68437c) {
                if (arg1 == -0x54909f7036e85493) {
                    pcVar2 = sym.mi_rwsem_write_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt;
                    goto code_r0x080025b0;
                }
                if (arg1 != -0x410a65462fa38697) goto code_r0x08004d1c;
                pcVar2 = sym.cmp.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt;
            }
            else if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != -0x11a95c0029f9571f) goto code_r0x08004d1c;
                pcVar2 = sym.game_dequeue_hooks.f20cf08a5c0af60561839b6a406a0d16.cfi_jt;
            }
        }
        else if (arg1 < 0x7ff5a213d37b1a6) {
            if (arg1 < 0x2b3a43e29242445) {
                if (arg1 == -0x8dc801903aca538) {
                    if ((pcVar1 + -0x8002800 >> 3 | pcVar1 << 0x3d) < 8) {
                        return;
                    }
                    goto code_r0x08004d1c;
                }
                if (arg1 != -0x890743871a4a53) goto code_r0x08004d1c;
                pcVar2 = sym.migt_ioctl.43230158a3451c0555eac76e849387b0.cfi_jt;
            }
            else {
                if (arg1 == 0x2b3a43e29242445) {
                    pcVar2 = sym.init_module.cfi_jt;
                    goto code_r0x0800262c;
                }
                if (arg1 != 0x67d1ea186e9428c) goto code_r0x08004d1c;
                pcVar2 = sym.android_rvh_cpufreq_transition.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt;
            }
        }
        else if (arg1 < 0xd79d9ca61ae319a) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.seq_read.cfi_jt;
            }
            else {
                if (arg1 != 0xd1d8d35e67b4003) goto code_r0x08004d1c;
                pcVar2 = sym.find_energy_hook.43230158a3451c0555eac76e849387b0.cfi_jt;
            }
        }
        else if (arg1 == 0xd79d9ca61ae319a) {
            pcVar2 = sym.set_next_freq.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt;
        }
        else {
            if (arg1 != 0x18928d58faff3b35) goto code_r0x08004d1c;
            pcVar2 = sym.mi_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 < 0x379d36f049eb9a81) {
            if (arg1 < 0x3020da4bfb511f2a) {
                if (arg1 == 0x199c66976d43c92e) {
                    pcVar2 = sym.set_migt_freq.43230158a3451c0555eac76e849387b0.cfi_jt;
                    goto code_r0x080025b0;
                }
                if (arg1 != 0x2bcb77f4d94771ee) goto code_r0x08004d1c;
                pcVar2 = sym.game_set_cid.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt;
            }
            else if (arg1 == 0x3020da4bfb511f2a) {
                pcVar2 = sym.mi_rt_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt;
            }
            else {
                if (arg1 != 0x321969b888d4949e) goto code_r0x08004d1c;
                pcVar2 = sym.seq_lseek.cfi_jt;
            }
        }
        else {
            if (0x3d66494c8ff65010 < arg1) {
                if (arg1 == 0x3d66494c8ff65011) {
                    pcVar2 = sym.__typeid__ZTSFiP9ctl_tableiPvPmPxE_global_addr;
code_r0x0800262c:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08004d1c;
                }
                if (arg1 != 0x4a220a35dbe7fc62) goto code_r0x08004d1c;
                pcVar2 = sym.get_flw_enable.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt;
code_r0x080025b0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08004d1c;
            }
            if (arg1 == 0x379d36f049eb9a81) {
                pcVar2 = sym.migt_mmap.43230158a3451c0555eac76e849387b0.cfi_jt;
            }
            else {
                if (arg1 != 0x39e63916c3db07da) goto code_r0x08004d1c;
                pcVar2 = sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x5ce2e1368c17a281) {
        if (arg1 < 0x5553dbe82c8014c7) {
            if (arg1 == 0x5233d5bc7887ae44) {
                pcVar2 = sym.exec_buckets_show.43230158a3451c0555eac76e849387b0.cfi_jt;
code_r0x08002594:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x08004d1c;
            }
            if (arg1 != 0x544af760e34e6c4f) goto code_r0x08004d1c;
            pcVar2 = sym.render_clain_flw.f20cf08a5c0af60561839b6a406a0d16.cfi_jt;
        }
        else {
            if (arg1 != 0x5553dbe82c8014c7) {
                if (arg1 != 0x57dc70dafcff701b) goto code_r0x08004d1c;
                pcVar2 = sym.glk_irq_work.cfi_jt;
                goto code_r0x080025b0;
            }
            pcVar2 = sym.walt_get_indicies_hook.43230158a3451c0555eac76e849387b0.cfi_jt;
        }
    }
    else if (arg1 < 0x737a1841ea9b412b) {
        if (arg1 == 0x5ce2e1368c17a281) {
            pcVar2 = sym.get_gt_task.cfi_jt;
        }
        else {
            if (arg1 != 0x641d19c7be126e92) goto code_r0x08004d1c;
            pcVar2 = sym.migt_hardwork.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt;
        }
    }
    else if (arg1 == 0x737a1841ea9b412b) {
        pcVar2 = sym.mi_mutex_wait_finish_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt;
    }
    else {
        if (arg1 != 0x7d57972cd3914fb1) {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004d1c;
            pcVar2 = sym.migt_sched_exit.cfi_jt;
            goto code_r0x0800262c;
        }
        pcVar2 = sym.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004d1c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004d70);
    (*pcVar1)();
}




// ===== sym.mi_mutex_wait_finish_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt @ 0x08002670 (size 8) =====



void sym.mi_mutex_wait_finish_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t arg1;
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.frame_load_enable(param_1);
    if (((uVar2 & 1) != 0) && (arg1 = sp_el0, arg1 != 0)) {
        __rcu_read_lock();
        iVar3 = get_mi_task_struct(param_2);
        if ((iVar3 != 0) && ((iVar3 != -0xe8 && ((*(iVar3 + 0xed) >> 2 & 1) != 0)))) {
            sym.set_flw_flag(param_2,0,0x400);
            iVar3 = get_mi_task_struct(arg1);
            if ((iVar3 != 0) && ((iVar3 != -0xe8 && ((*(iVar3 + 0xed) >> 3 & 1) != 0)))) {
                sym.set_flw_flag(param_2,0x900,0x200);
                sym.set_flw_flag(arg1,0x200,0x800);
                sym.game_update_lock_time(arg1);
            }
        }
        __rcu_read_unlock();
        if (((*0x8022000 == 10) && (iVar1 = sym.game_super_task(param_2), iVar1 != 0)) &&
           (uVar2 = sym.is_render_thread(param_2), (uVar2 & 1) != 0)) {
            dump_stack();
        }
    }
    return;
}




// ===== sym.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x08002678 (size 8) =====



int sym.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong *in_x18;
    uint32_t *unaff_x20;
    uint32_t *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
        *unaff_x20 = extraout_w8;
        if (uVar2 < extraout_w8) {
            do {
                puVar6 = uVar2;
                iVar4 = cpufreq_cpu_get(puVar6);
                if (iVar4 == 0) {
                    _printk(0x8001821,"migt_freq_qos_init",puVar6);
                    iVar3 = -0xb;
code_r0x08003f34:
                    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
                    *puVar6 = extraout_w8_01;
                    if (extraout_w8_01 <= uVar2) {
                        return iVar3;
                    }
                    while (uVar7 = uVar2, uVar2 < 0x20) {
                        iVar4 = *(__per_cpu_offset + uVar7 * 8);
                        if (((iVar4 != -0x800dff0) && (*(iVar4 + 0x800e020) != 0)) &&
                           (*(iVar4 + 0x800e020) < 0xfffffffffffff001)) {
                            freq_qos_remove_request();
                            iVar4 = *(__per_cpu_offset + uVar7 * 8);
                        }
                        if (((iVar4 != -0x800e038) && (*(iVar4 + 0x800e068) != 0)) &&
                           (*(iVar4 + 0x800e068) < 0xfffffffffffff001)) {
                            freq_qos_remove_request();
                        }
                        uVar2 = cpumask_next(uVar7,__cpu_present_mask);
                        ___cpu_present_mask = extraout_w8_02;
                        if (extraout_w8_02 <= uVar2) {
                            return iVar3;
                        }
                    }
code_r0x08003fcc:
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8003fd0);
                    (*pcVar1)();
                }
                _segment.ehdr = _segment.ehdr & (*(iVar4 + 8) ^ 0xffffffff);
                if (0x1f < uVar2) goto code_r0x08003fcc;
                iVar3 = freq_qos_add_request(iVar4 + 0xa0,obj.qos_req_min + *(__per_cpu_offset + puVar6 * 8),1,0);
                if (iVar3 < 0) {
                    uVar5 = 0x800135e;
code_r0x08003f1c:
                    _printk(uVar5,"migt_freq_qos_init",iVar3);
                    cpufreq_cpu_put(iVar4);
                    goto code_r0x08003f34;
                }
                iVar3 = freq_qos_add_request
                                  (iVar4 + 0xa0,obj.qos_req_max + *(__per_cpu_offset + uVar2 * 8),2,0x7fffffff);
                if (iVar3 < 0) {
                    uVar5 = 0x80012b1;
                    goto code_r0x08003f1c;
                }
                cpufreq_cpu_put(iVar4);
                uVar2 = cpumask_next(uVar2,__cpu_present_mask);
                *puVar6 = extraout_w8_00;
            } while (uVar2 < extraout_w8_00);
        }
        if (_segment.ehdr == 0) {
            queue_work_on(0x20,_single_release,obj.finish_freq_qos_work);
        }
    }
    return 0;
}




// ===== sym.seq_lseek.cfi_jt @ 0x08002680 (size 8) =====



//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}




// ===== sym.get_gt_task.cfi_jt @ 0x08002688 (size 8) =====



int64_t sym.get_gt_task.cfi_jt(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    iVar1 = 0;
    if (iVar2 != 0) {
        iVar1 = iVar2 + 0xe8;
    }
    return iVar1;
}




// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08002690 (size 8) =====



//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}




// ===== sym.cmp.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt @ 0x08002698 (size 8) =====



uint32_t sym.cmp.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 8) < *(param_2 + 8);
    if (*(param_2 + 8) < *(param_1 + 8)) {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}




// ===== sym.game_set_cid.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x080026a0 (size 8) =====



void sym.game_set_cid.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) {
        uVar1 = *(param_1 + 0xba8);
        uVar5 = sym.is_rcal_task(param_2,0);
        if (((uVar5 & 1) != 0) &&
           ((iVar4 = cpu_to_cluster(uVar1), iVar2 = *0x8022000, bVar3 = iVar4 != *0x8022000, *0x8022000 = iVar4,
            bVar3 && (*0x8004000 == 1)))) {
            _printk(0x800124e,param_2 + 0x7a8,*(param_2 + 0x5d8),iVar2,iVar4);
        }
    }
    return;
}




// ===== sym.seq_read.cfi_jt @ 0x080026a8 (size 8) =====



//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}




// ===== sym.render_clain_flw.f20cf08a5c0af60561839b6a406a0d16.cfi_jt @ 0x080026b0 (size 8) =====



void sym.render_clain_flw.f20cf08a5c0af60561839b6a406a0d16.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t arg1;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(param_1);
    if ((uVar1 & 1) != 0) {
        arg1 = sp_el0;
        uVar1 = sym.is_rcal_task(arg1,0);
        if ((((uVar1 & 1) != 0) && ((param_2 >> 4 & 1) != 0)) && ((*(arg1 + 0x3c) >> 2 & 1) == 0)) {
            sym.game_wake_task(param_1);
        }
    }
    return;
}




// ===== sym.skip_walt_window_update.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x080026b8 (size 8) =====



uint8_t sym.skip_walt_window_update.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(void)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    if (_segment.ehdr != 0) {
        uVar1 = obj.frame_load_has_init & *0x8004000 != 0;
    }
    return uVar1 & *0x8004000 != 0;
}




// ===== sym.__typeid__ZTSFiP9ctl_tableiPvPmPxE_global_addr @ 0x080026c0 (size 8) =====



int sym.__typeid__ZTSFiP9ctl_tableiPvPmPxE_global_addr
              (int64_t param_1,int param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(param_1 + 8);
    mutex_lock(obj.ceiling_enable);
    if (*(param_1 + 0x10) != 0xc) {
        *(param_1 + 0x10) = 0xc;
    }
    if (param_2 == 0) {
        iVar1 = proc_dointvec(param_1,0,param_3,param_4,param_5);
    }
    else {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0xc);
        if (iVar2 == 0) {
            iVar1 = -0xc;
        }
        else {
            memcpy(iVar2,uVar3,*(param_1 + 0x10));
            iVar1 = proc_dointvec(param_1,param_2,param_3,param_4,param_5);
            if (iVar1 != 0) {
                memcpy(uVar3,iVar2,*(param_1 + 0x10));
            }
            kfree(iVar2);
        }
    }
    mutex_unlock(obj.ceiling_enable);
    if (*0x8004000 != 0) {
        _printk(0x80010fb,0,_obj.glk_lowspeed_load,_obj.glk_highspeed_load);
        _printk(0x80010fb,1,*0x8000ab0,*0x8000aa4);
        _printk(0x80010fb,2,*0x8000ab4,*0x8000aa8);
    }
    return iVar1;
}




// ===== sym.proc_dointvec.cfi_jt @ 0x080026c8 (size 8) =====



//WARNING: Control flow encountered bad instruction data

void sym.proc_dointvec.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}




// ===== sym.proc_glk_dofreq.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt @ 0x080026d0 (size 8) =====



int sym.proc_glk_dofreq.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt
              (int64_t param_1,int param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(param_1 + 8);
    mutex_lock(obj.ceiling_enable);
    if (*(param_1 + 0x10) != 0xc) {
        *(param_1 + 0x10) = 0xc;
    }
    if (param_2 == 0) {
        iVar1 = proc_dointvec(param_1,0,param_3,param_4,param_5);
    }
    else {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0xc);
        if (iVar2 == 0) {
            iVar1 = -0xc;
        }
        else {
            memcpy(iVar2,uVar3,*(param_1 + 0x10));
            iVar1 = proc_dointvec(param_1,param_2,param_3,param_4,param_5);
            if (iVar1 != 0) {
                memcpy(uVar3,iVar2,*(param_1 + 0x10));
            }
            kfree(iVar2);
        }
    }
    mutex_unlock(obj.ceiling_enable);
    if (*0x8004000 != 0) {
        _printk(0x80017d9,0,_obj.glk_minfreq,_obj.glk_minfreq);
        _printk(0x80017d9,1,*0x8000770,*0x8000770);
        _printk(0x80017d9,2,*0x8000774,*0x8000774);
    }
    return iVar1;
}




// ===== sym.do_ceiling_limit.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080026d8 (size 8) =====



//WARNING: Removing unreachable block (ram,0x08003ae4)
//WARNING: Removing unreachable block (ram,0x08003aec)
//WARNING: Removing unreachable block (ram,0x08003ab4)
//WARNING: Removing unreachable block (ram,0x08003abc)
//WARNING: Removing unreachable block (ram,0x08003a84)
//WARNING: Removing unreachable block (ram,0x08003a8c)
//WARNING: Removing unreachable block (ram,0x08003a54)
//WARNING: Removing unreachable block (ram,0x08003a5c)
//WARNING: Removing unreachable block (ram,0x08003a24)
//WARNING: Removing unreachable block (ram,0x08003a2c)
//WARNING: Removing unreachable block (ram,0x08003a3c)
//WARNING: Removing unreachable block (ram,0x08003a44)
//WARNING: Removing unreachable block (ram,0x08003a6c)
//WARNING: Removing unreachable block (ram,0x08003a74)
//WARNING: Removing unreachable block (ram,0x08003a9c)
//WARNING: Removing unreachable block (ram,0x08003aa4)
//WARNING: Removing unreachable block (ram,0x08003acc)
//WARNING: Removing unreachable block (ram,0x08003ad4)
//WARNING: Removing unreachable block (ram,0x08003afc)

void sym.do_ceiling_limit.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint32_t *unaff_x20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.ceiling_freq_limit_work & 1) == 0) {
        if (_segment.ehdr < 1) {
            return;
        }
        obj.ceiling_freq_limit_work = 0x1;
    }
    if (_segment.ehdr != 0) {
        iVar3 = ktime_get();
        _printk(0x8000ec8,0x2ab,iVar3 / 1000);
    }
    if (_segment.ehdr != 0) {
        *unaff_x20 = unaff_x20;
        uVar4 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        uVar2 = uVar4;
        while (uVar2 < unaff_x20) {
            if (0x1f < uVar4) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003ba4);
                (*pcVar1)();
            }
            *(*(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + 0x800dfe4) =
                 *(*(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + 0x800dfe8);
            uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
            uVar2 = uVar4;
        }
        sym.update_policy_online(0);
    }
    return;
}




// ===== sym.do_migt.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080026e0 (size 8) =====



void sym.do_migt.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint32_t *unaff_x20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = cancel_delayed_work_sync(obj.migt_rem);
    if (_segment.ehdr != 0) {
        iVar6 = ktime_get();
        _printk(0x80016ad,0x1eb,iVar6 / 1000);
    }
    _segment.ehdr = 1;
    if ((uVar4 & 1) == 0) {
        core_ctl_set_boost(1);
    }
    sym.glk_maxfreq_break(1);
    *unaff_x20 = unaff_x20;
    uVar4 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
    uVar3 = uVar4;
    while( true ) {
        if (unaff_x20 <= uVar3) {
            sym.update_policy_online(0);
            uVar1 = CONCAT44(*0x8000004,_segment.ehdr);
            uVar5 = __msecs_to_jiffies(_segment.ehdr);
            queue_delayed_work_on(0x20,uVar1,obj.migt_rem,uVar5);
            return;
        }
        if (0x1f < uVar4) break;
        *(*(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + 0x800dfdc) =
             *(*(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + 0x800dfe0);
        uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
        uVar3 = uVar4;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80037c8);
    (*pcVar2)();
}




// ===== sym.finish_freq_qos_workfn.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080026e8 (size 8) =====



void sym.finish_freq_qos_workfn.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpufreq_unregister_notifier(reloc.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt,1);
    _printk(0x8001490);
    return;
}




// ===== sym.do_ceiling_rem.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080026f0 (size 8) =====



void sym.do_ceiling_rem.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint32_t unaff_w21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.ceiling_freq_limit_work == 0x1) {
        if (_segment.ehdr == 1) {
            iVar4 = ktime_get();
            _printk(0x8001661,0x262,iVar4 / 1000);
        }
        _segment.ehdr = unaff_w21;
        uVar3 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        uVar2 = uVar3;
        while (uVar2 < unaff_w21) {
            if (0x1f < uVar3) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003ca0);
                (*pcVar1)();
            }
            *(*(__per_cpu_offset + (uVar3 & 0xffffffff) * 8) + 0x800dfe4) = 0xffffffff;
            uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
            uVar2 = uVar3;
        }
        sym.update_policy_online(1);
        obj.ceiling_freq_limit_work = 0x0;
    }
    return;
}




// ===== sym.do_migt_rem.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080026f8 (size 8) =====



void sym.do_migt_rem.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t unaff_w21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = _segment.ehdr + -1;
    if (_segment.ehdr < 1) {
        *0x80048c8 = 0;
        if (_segment.ehdr != 0) {
            iVar7 = ktime_get();
            _printk(0x800195e,0x1b9,iVar7 / 1000);
        }
        sym.glk_maxfreq_break(0);
        _seq_lseek = unaff_w21;
        uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
        uVar3 = uVar6;
        while (uVar3 < unaff_w21) {
            if (0x1f < uVar6) goto code_r0x08003990;
            *(*(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + 0x800dfdc) = 0;
            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            uVar3 = uVar6;
        }
        iVar4 = sym.update_policy_online(1);
        core_ctl_set_boost(0);
        if (iVar4 != 0) {
            _seq_lseek = 0x8053000;
            uVar6 = 0xffffffff;
            do {
                uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
                if (0x8052fff < uVar6) goto code_r0x080038c8;
                if (0x1f < uVar6) {
code_r0x08003990:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8003994);
                    (*pcVar2)();
                }
            } while (*(*(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + 0x800dff8) != 0);
            core_ctl_set_boost(1);
            queue_delayed_work_on(0x20,CONCAT44(*0x8000004,_segment.ehdr),obj.migt_rem,0xea6);
        }
code_r0x080038c8:
        _segment.ehdr = 0;
    }
    else {
        uVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar5 = __msecs_to_jiffies(_segment.ehdr);
        queue_delayed_work_on(0x20,uVar1,obj.migt_rem,uVar5);
        *0x80048c8 = 1;
    }
    return;
}




// ===== sym.migt_hook.cfi_jt @ 0x08002700 (size 8) =====



//WARNING: Removing unreachable block (ram,0x08002a2c)

void sym.migt_hook.cfi_jt(int64_t param_1,uint64_t param_2,ulong param_3,ulong param_4,uint64_t param_5)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = fas_sched_clock();
    iVar6 = get_mi_task_struct(param_1);
    puVar2 = NULL;
    if (iVar6 != 0) {
        puVar2 = iVar6 + 0xe8;
    }
    if (puVar2 == NULL) {
        return;
    }
    if (_segment.ehdr < 2) {
        return;
    }
    if (_segment.ehdr == 3) {
        iVar6 = get_scale_exec_time(param_5,param_2 & 0xffffffff,param_1 + 0xb40);
        sym.game_load_update(param_1,iVar6,param_2 & 0xffffffff);
    }
    if (puVar2[-0x37] >> 4 < 0x271) {
        return;
    }
    uVar3 = _segment.ehdr;
    if (puVar2[-0x37] != _segment.ehdr) {
        return;
    }
    uVar8 = 0;
    if (_segment.ehdr <= uVar5) {
        uVar8 = uVar5 - _segment.ehdr;
    }
    if (_segment.ehdr == *puVar2) {
        iVar6 = *(puVar2 + 0xc);
        uVar8 = _segment.ehdr;
        goto code_r0x08002b20;
    }
    if (_segment.ehdr == 0) {
        _segment.ehdr = 0;
        if (param_5 <= uVar8) goto code_r0x08002a68;
code_r0x080029f4:
        uVar5 = *(puVar2 + 0xc) + (param_5 - uVar8);
        *(puVar2 + 0xc) = uVar5;
        param_5 = uVar8;
    }
    else {
        if (uVar8 < param_5) goto code_r0x080029f4;
code_r0x08002a68:
        uVar5 = *(puVar2 + 0xc);
    }
    if (_segment.ehdr < uVar5) {
        if (_segment.ehdr == 1) {
            *(puVar2 + 0xe) = *(puVar2 + 0xe) + uVar5 >> 1;
        }
        else if (_segment.ehdr == 0) {
            *(puVar2 + 0xe) = *(puVar2 + 0xe) + 1;
        }
        else if (*(puVar2 + 0xe) < uVar5) {
            *(puVar2 + 0xe) = uVar5;
        }
    }
    if (_segment.ehdr == 0) {
        uVar7 = 0;
        if (uVar3 != 0) {
            uVar7 = 10000 / uVar3;
        }
        _segment.ehdr = uVar7;
    }
    uVar8 = _segment.ehdr;
    uVar5 = (_segment.ehdr * uVar5) / 1000000000;
    uVar7 = 0;
    do {
        uVar1 = uVar7 + 1;
        puVar2[uVar7 + 0x1a] = puVar2[uVar7 + 0x1a] + 1;
        uVar7 = uVar1;
    } while (uVar1 <= uVar5 + ((uVar5 & 0xffffffff) / 10) * -10);
    iVar6 = 0;
    *puVar2 = uVar3;
code_r0x08002b20:
    *(puVar2 + 0xc) = param_5 + iVar6;
    if (uVar8 == 0) {
        uVar3 = 0;
        if (_segment.ehdr != 0) {
            uVar3 = 10000 / _segment.ehdr;
        }
        uVar8 = uVar3;
        _segment.ehdr = uVar8;
    }
    uVar5 = (uVar8 * (param_5 + iVar6)) / 1000000000;
    if ((((_segment.ehdr * (puVar2 + 0x1a)[uVar5 + ((uVar5 & 0xffffffff) / 10) * -10] < puVar2[0x1a]) &&
         ((obj.migt_boost_flag & 1) == 0)) && (iVar4 = sym.game_ip_task(param_1), iVar4 != 0)) &&
       (_segment.ehdr < *(puVar2 + 0xc))) {
        iVar4 = _raw_spin_trylock(obj.migt_lock);
        if (iVar4 != 0) {
            if ((obj.migt_boost_flag & 1) == 0) {
                obj.vtask_boost.flag = 0x1;
            }
            obj.migt_boost_flag = 0x1;
            _raw_spin_unlock(obj.migt_lock);
        }
        if (((obj.vtask_boost.flag == 0x1) && ((_segment.ehdr & 1) == 0)) &&
           (uVar5 = hrtimer_active(obj.vtask_timer), (uVar5 & 1) == 0)) {
            hrtimer_start_range_ns(obj.vtask_timer,0,0,1);
        }
    }
    return;
}




// ===== sym.migt_hardwork.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt @ 0x08002708 (size 8) =====



ulong sym.migt_hardwork.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt(uint32_t *param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    do {
        *(iVar1 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        if (_obj.migt_has_work_todo == 0) {
            schedule();
            uVar2 = kthread_should_stop();
            if ((uVar2 & 1) != 0) {
                _printk(0x800116d);
                return 0;
            }
        }
        *(iVar1 + 0x28) = 0;
        DataMemoryBarrier(2,3);
        if (*param_1 != 0) {
            sym.mark_viptask(*param_1);
            *param_1 = 0;
        }
        _segment.ehdr = 0;
    } while( true );
}




// ===== sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x08002710 (size 8) =====



ulong sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr & 1) == 0) {
        queue_work_on(0x20,_segment.ehdr,obj.irq_boost_work);
    }
    return 0;
}




// ===== sym.set_next_freq.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt @ 0x08002718 (size 8) =====



void sym.set_next_freq.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt
               (uint64_t param_1,int64_t param_2,ulong param_3,int64_t param_4,uint64_t *param_5,int64_t param_6,
               uint *param_7)

{
    code *pcVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    code *pcVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *0x8004000;
    if (obj.game_load_has_init != 0x1) {
        return;
    }
    uVar12 = *param_5;
    if (_segment.ehdr == 0) {
        *param_7 = 0x8053000;
        if ((0x1f < *(param_6 + 0x1c)) || (2 < *(*(__per_cpu_offset + *(param_6 + 0x1c) * 8) + 0x800e104)))
        goto code_r0x08007628;
        uVar4 = *(perf_min_freq + *(*(__per_cpu_offset + *(param_6 + 0x1c) * 8) + 0x800e104) * 4);
        if (*(perf_min_freq + *(*(__per_cpu_offset + *(param_6 + 0x1c) * 8) + 0x800e104) * 4) <= *(param_6 + 0x34)) {
            uVar4 = *(param_6 + 0x34);
        }
        uVar7 = uVar4;
        uVar10 = uVar12;
        if (*0x8004000 != 0) {
            _printk(0x80011e9,uVar7);
            uVar10 = *param_5;
        }
        if (uVar7 <= uVar10) {
            uVar7 = uVar10;
        }
        goto code_r0x08007588;
    }
    if ((((_segment.ehdr != 0) ||
         (param_1 = fas_sched_clock(), 999999999 < param_1 - CONCAT44(*0x8000004,_segment.ehdr))) ||
        (_segment.ehdr < 3)) || (obj.game_load_has_init != 0x1)) goto code_r0x08007208;
    uVar4 = 0x14;
    if (iVar5 != 0) {
        uVar4 = iVar5 - 1;
    }
    uVar10 = uVar4;
    if (0x15 < uVar4) goto code_r0x08007628;
    if (0x540 < (uVar10 << 6 | 0x20)) {
code_r0x0800762c:
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(1,0x8007630);
        (*pcVar6)();
    }
    if (0x1f < *(param_6 + 0x1c)) goto code_r0x08007628;
    uVar4 = *(*(__per_cpu_offset + *(param_6 + 0x1c) * 8) + 0x800e104);
    uVar7 = uVar4;
    if (2 < uVar4) goto code_r0x08007628;
    if (0x53f < uVar10 * 0x40 + uVar7 * 8) goto code_r0x0800762c;
    pcVar6 = obj.glk_minfreq + uVar7 * 4;
    pcVar1 = param_6 + 0x38;
    if (obj.ceiling_next_update != 0x0) {
        pcVar1 = obj.glk_maxfreq + uVar7 * 4;
    }
    pcVar2 = param_6 + 0x34;
    if (obj.glk_minfreq_limit != 0x0) {
        pcVar2 = pcVar6;
    }
    uVar3 = *pcVar1;
    uVar4 = *pcVar2;
    if (uVar4 < uVar3) {
code_r0x08007208:
        uVar4 = *param_5;
        uVar10 = uVar4;
        if (((_segment.ehdr != 0) && (_segment.ehdr != 0)) && (obj.game_load_has_init == 0x1)) {
            if (0x1f < *(param_6 + 0x1c)) {
code_r0x08007628:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x800762c);
                (*pcVar6)();
            }
            uVar3 = *(*(__per_cpu_offset + *(param_6 + 0x1c) * 8) + 0x800e104);
            if ((obj.ceiling_next_update == 0x0) || (*0x80048c8 != '\0')) {
                pcVar6 = param_6 + 0x38;
            }
            else {
                if (2 < uVar3) goto code_r0x08007628;
                pcVar6 = obj.glk_maxfreq + uVar3 * 4;
            }
            uVar9 = *pcVar6;
            if (obj.glk_minfreq_limit == 0x0) {
                pcVar6 = param_6 + 0x34;
            }
            else {
                if (2 < uVar3) goto code_r0x08007628;
                pcVar6 = obj.glk_minfreq + uVar3 * 4;
            }
            uVar3 = *(param_6 + 0x34);
            if (*(param_6 + 0x34) <= *pcVar6) {
                uVar3 = *pcVar6;
            }
            if (uVar9 == 0) {
                uVar9 = *(param_6 + 0x38);
            }
            if (uVar4 <= uVar3) {
                uVar4 = uVar3;
            }
            if (uVar4 <= uVar9) {
                uVar9 = uVar4;
            }
            uVar10 = uVar9;
        }
    }
    else {
        param_1 = 1000000;
        uVar8 = *(uVar10 * 0x40 + 0x80048f0);
        if (uVar8 < 1000000) goto code_r0x08007208;
        param_1 = *pcVar6;
        uVar11 = *(*(__per_cpu_offset + *(param_6 + 0x1c) * 8) + 0x8053cc4);
        if (*pcVar6 == 0) {
            *pcVar6 = *(param_6 + 0x34);
        }
        if (_segment.ehdr * 2 < uVar8 / 1000000) {
            if (*(param_6 + 0x3c) < uVar4) {
                uVar10 = uVar4;
            }
            else {
                uVar10 = uVar4;
                if (*0x800e000 != 0) {
                    uVar10 = *(param_6 + 0x38);
                }
            }
        }
        else {
            uVar8 = 0;
            if (uVar11 != 0) {
                uVar8 = (*(uVar10 * 0x40 + 0x80048d0 + uVar7 * 8) * 100) / uVar11;
            }
            uVar10 = uVar4;
            if ((uVar8 <= *(obj.glk_highspeed_load + uVar7 * 4)) &&
               (uVar10 = uVar3, *(obj.glk_lowspeed_load + uVar7 * 4) <= uVar8)) {
                uVar9 = (uVar8 * (uVar4 + (uVar4 >> 3))) / 100;
                if (uVar9 <= uVar4) {
                    uVar4 = uVar9;
                }
                if (uVar3 <= uVar4) {
                    uVar3 = uVar4;
                }
                uVar10 = uVar3;
                if (*0x8004000 != 0) {
                    param_1 = _printk(0x80013cf,uVar8,uVar10);
                }
            }
        }
        if (uVar10 == 0) goto code_r0x08007208;
    }
    uVar7 = sym.frame_load_enable(param_1);
    if ((uVar7 & 1) == 0) {
        sym.flw_update_freq_enable();
    }
    else {
        uVar7 = sym.flw_cal_freq(param_6,param_4,uVar10,param_2);
        uVar8 = sym.flw_update_freq_enable();
        if (((uVar8 & 1) != 0) && (uVar7 != 0)) goto code_r0x08007588;
    }
    uVar7 = uVar10;
code_r0x08007588:
    *param_5 = uVar7;
    if (uVar7 != uVar12) {
        *param_7 = 1;
    }
    return;
}




// ===== sym.glk_irq_work.cfi_jt @ 0x08002720 (size 8) =====



void sym.glk_irq_work.cfi_jt(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    int64_t extraout_x8_01;
    ulong extraout_x8_02;
    int64_t extraout_x9;
    int64_t extraout_x9_00;
    int64_t extraout_x9_01;
    ulong *in_x18;
    ulong *unaff_x19;
    ulong *puVar4;
    code *unaff_x21;
    code *pcVar5;
    ulong unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    if (obj.game_load_has_init == 0x1) {
        uVar1 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *unaff_x19 = extraout_x8;
        if (uVar1 < extraout_x8) {
            do {
                puVar4 = uVar1;
                if (0x1f < uVar1) goto code_r0x08006420;
                _raw_spin_lock(runqueues + *(__per_cpu_offset + puVar4 * 8));
                uVar1 = cpumask_next(puVar4,__cpu_possible_mask);
                *puVar4 = extraout_x8_00;
            } while (uVar1 < extraout_x8_00);
        }
        puVar4 = fas_sched_clock();
        iVar2 = extraout_x9;
        pcVar5 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                _raw_spin_lock(pcVar5 + -8);
                unaff_x21 = pcVar5 + 0x10;
                *puVar4 = unaff_x28;
                uVar1 = cpumask_next(0xffffffff,unaff_x21);
                for (; uVar1 < unaff_x28; uVar1 = cpumask_next(uVar1,unaff_x21)) {
                    if (0x1f < uVar1) goto code_r0x08006420;
                    iVar2 = *(*(__per_cpu_offset + uVar1 * 8) + 0x8053c14);
                    if (iVar2 != 0) {
                        walt_update_task_ravg(iVar2,runqueues + *(__per_cpu_offset + uVar1 * 8),4,puVar4,0);
                        *puVar4 = unaff_x28;
                    }
                }
                _raw_spin_unlock(pcVar5 + -8);
                pcVar5 = *pcVar5;
                iVar2 = extraout_x9_00;
            } while (pcVar5 != cluster_head);
        }
        pcVar5 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                *pcVar5 = iVar2;
                uStack_70 = *(pcVar5 + 0x10) & iVar2;
                __sw_hweight64();
                *pcVar5 = unaff_x21;
                uVar3 = 0xffffffff;
                while( true ) {
                    uVar3 = cpumask_next(uVar3,&uStack_70);
                    if (unaff_x21 <= uVar3) break;
                    if (0x1f < uVar3) goto code_r0x08006420;
                }
                pcVar5 = *pcVar5;
                iVar2 = extraout_x9_01;
            } while (pcVar5 != cluster_head);
        }
        uVar1 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *pcVar5 = extraout_x8_01;
        if (uVar1 < extraout_x8_01) {
            do {
                if (0x1f < uVar1) {
code_r0x08006420:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8006424);
                    (*pcVar5)();
                }
                _raw_spin_unlock(runqueues + *(__per_cpu_offset + uVar1 * 8));
                uVar1 = cpumask_next(uVar1,__cpu_possible_mask);
                ___cpu_possible_mask = extraout_x8_02;
            } while (uVar1 < extraout_x8_02);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_68) {
        *0x80048c8 = __stack_chk_fail();
        return;
    }
    return;
}




// ===== sym.flw_irq_work.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x08002728 (size 8) =====



void sym.flw_irq_work.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(void)

{
    uint32_t uVar1;
    uint uVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    uint32_t extraout_w8_03;
    uint32_t extraout_w8_04;
    int64_t iVar11;
    ulong *in_x18;
    uint32_t *extraout_x18;
    uint32_t *extraout_x18_00;
    uint32_t *extraout_x18_01;
    uint32_t *extraout_x18_02;
    uint32_t *extraout_x18_03;
    uint32_t *extraout_x18_04;
    uint32_t *extraout_x18_05;
    uint32_t *extraout_x18_06;
    uint32_t *puVar12;
    uint32_t *extraout_x18_07;
    uint32_t *extraout_x18_08;
    uint32_t *extraout_x18_09;
    uint32_t *extraout_x18_10;
    ulong *extraout_x18_11;
    ulong *puVar13;
    code *pcVar14;
    code *pcVar15;
    uint32_t unaff_w28;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if (((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) && (_obj.flw_work_in_process == 0)
       ) {
        *0x8022000 = 1;
        uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *extraout_x18 = extraout_w8;
        if (uVar4 < extraout_w8) {
            do {
                if (0x1f < uVar4) goto code_r0x0800bd08;
                _raw_spin_lock(runqueues + *(__per_cpu_offset + uVar4 * 8));
                uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
                *extraout_x18_00 = extraout_w8_00;
            } while (uVar4 < extraout_w8_00);
        }
        uVar7 = walt_sched_clock();
        puVar12 = extraout_x18_01;
        pcVar15 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                _raw_spin_lock(pcVar15 + -8);
                pcVar14 = pcVar15 + 0x10;
                *extraout_x18_03 = unaff_w28;
                uVar4 = cpumask_next(0xffffffff,pcVar14);
                puVar12 = extraout_x18_04;
                while (uVar4 < unaff_w28) {
                    if (0x1f < uVar4) goto code_r0x0800bd08;
                    iVar11 = *(__per_cpu_offset + uVar4 * 8);
                    iVar8 = *(iVar11 + 0x8053c14);
                    if ((iVar8 != 0) && (*puVar12 = iVar11, (iVar11 & *pcVar14) != 0)) {
                        walt_update_task_ravg(iVar8,runqueues + iVar11,4,uVar7,0);
                        *extraout_x18_06 = unaff_w28;
                    }
                    uVar4 = cpumask_next(uVar4,pcVar14);
                    puVar12 = extraout_x18_05;
                }
                _raw_spin_unlock(pcVar15 + -8);
                pcVar15 = *pcVar15;
                puVar12 = extraout_x18_02;
            } while (pcVar15 != cluster_head);
        }
        pcVar15 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                uVar4 = *(pcVar15 + 0x10);
                *puVar12 = 0x8053000;
                uStack_70 = uVar4 & 0x8053000;
                iVar5 = __sw_hweight64();
                uVar4 = cpumask_next(0xffffffff,&uStack_70);
                *extraout_x18_07 = extraout_w8_01;
                puVar12 = extraout_x18_07;
                if (uVar4 < extraout_w8_01) {
                    do {
                        iVar5 = iVar5 + -1;
                        if (0x1f < uVar4) goto code_r0x0800bd08;
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x8053d1c);
                        if (iVar5 == 0) {
                            if (0x1f < uVar1) goto code_r0x0800bd08;
                            puVar13 = *(waltgov_cb_data + *(__per_cpu_offset + uVar1 * 8));
                            if (puVar13 != NULL) {
                                pcVar14 = *puVar13;
                                __cfi_slowpath_diag(0xdebc05344f6b660a,pcVar14,0x8000b20);
                                uVar7 = walt_sched_clock();
                                uVar10 = 0x80;
                                goto code_r0x0800bbcc;
                            }
                        }
                        else {
                            if (0x1f < uVar1) goto code_r0x0800bd08;
                            puVar13 = *(waltgov_cb_data + *(__per_cpu_offset + uVar1 * 8));
                            if (puVar13 != NULL) {
                                pcVar14 = *puVar13;
                                __cfi_slowpath_diag(0xdebc05344f6b660a,pcVar14,0x8000b20);
                                uVar7 = walt_sched_clock();
                                uVar10 = 0x82;
code_r0x0800bbcc:
                                (*pcVar14)(puVar13,uVar7,uVar10);
                            }
                        }
                        uVar4 = cpumask_next(uVar4,&uStack_70);
                        *extraout_x18_08 = extraout_w8_02;
                        puVar12 = extraout_x18_08;
                    } while (uVar4 < extraout_w8_02);
                }
                pcVar15 = *pcVar15;
            } while (pcVar15 != cluster_head);
        }
        uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *extraout_x18_09 = extraout_w8_03;
        if (uVar4 < extraout_w8_03) {
            do {
                if (0x1f < uVar4) {
code_r0x0800bd08:
    //WARNING: Does not return
                    pcVar15 = SoftwareBreakpoint(0x5512,0x800bd0c);
                    (*pcVar15)();
                }
                _raw_spin_unlock(runqueues + *(__per_cpu_offset + uVar4 * 8));
                uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
                *extraout_x18_10 = extraout_w8_04;
            } while (uVar4 < extraout_w8_04);
        }
        *0x8022000 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    auVar16 = __stack_chk_fail();
    iVar8 = auVar16._8_8_;
    *extraout_x18_11 = 0x800bd10;
    if ((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) {
        uVar2 = *(auVar16._0_8_ + 0xba8);
        uVar9 = sym.is_rcal_task(iVar8,0);
        if (((uVar9 & 1) != 0) &&
           ((iVar6 = cpu_to_cluster(uVar2), iVar5 = *0x8022000, bVar3 = iVar6 != *0x8022000, *0x8022000 = iVar6,
            bVar3 && (*0x8004000 == 1)))) {
            _printk(0x800124e,iVar8 + 0x7a8,*(iVar8 + 0x5d8),iVar5,iVar6);
        }
    }
    return;
}




// ===== sym.android_rvh_cpufreq_transition.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x08002730 (size 8) =====



void sym.android_rvh_cpufreq_transition.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = walt_sched_clock();
    uVar4 = cpu_to_cluster(*(param_2 + 0x1c));
    iVar2 = *0x8004000;
    if (2 < uVar4) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800bf20);
        (*pcVar3)();
    }
    iVar6 = uVar4;
    if ((iVar6 * 8 < 0x19) && (uVar7 = iVar6 * 4, uVar7 < 0xd)) {
        if (*0x8022000 * 8 + iVar6 * 0x10 < 0x30) {
            *(obj.sum_freq_rt + *0x8022000 * 8 + iVar6 * 0x10) =
                 *(obj.sum_freq_rt + *0x8022000 * 8 + iVar6 * 0x10) +
                 (iVar5 - *(obj.last_freq_change_time + iVar6 * 8)) * *(obj.cur_record_freq + uVar7);
            uVar1 = *(param_2 + 0x3c);
            *(obj.last_freq_change_time + iVar6 * 8) = iVar5;
            *(obj.cur_record_freq + uVar7) = uVar1;
            if (iVar2 == 4) {
                _printk(0x8001699);
            }
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x800bf1c);
    (*pcVar3)();
}




// ===== sym.migt_ioctl.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x08002738 (size 8) =====



//WARNING: Removing unreachable block (ram,0x08004654)
//WARNING: Removing unreachable block (ram,0x08004658)

ulong sym.migt_ioctl.43230158a3451c0555eac76e849387b0.cfi_jt(ulong param_1,char param_2)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int iVar10;
    ulong *in_x18;
    uint32_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    if (_segment.ehdr != 0) {
        uVar2 = *(*(iVar7 + 0x798) + 4);
        iVar6 = ktime_get();
        _printk(0x8001855,uVar2,0x2e2,param_2,iVar6 / 1000);
    }
    uVar9 = _segment.ehdr;
    uVar1 = _segment.ehdr;
    if (param_2 == '\x04') {
        obj.ceiling_enable = 0x1;
        uVar5 = _segment.ehdr;
        if (9 < _segment.ehdr) {
            uVar5 = 10;
        }
        if (_segment.ehdr == 0) {
            uVar11 = 0;
        }
        else {
            _printk("--------ceiling_user list--------\n");
            if (uVar1 < 1) {
                uVar11 = 0;
            }
            else {
                uVar11 = uVar5;
                if (uVar5 < 2) {
                    uVar11 = 1;
                }
                _printk(0x8001798,_segment.ehdr & 0xffffffff);
                if ((((((1 < uVar5) && (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 2)) &&
                      (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 3)) &&
                     ((_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 4 &&
                      (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 5)))) &&
                    ((_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 6 &&
                     ((_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 7 &&
                      (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 8)))))) &&
                   (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 9)) {
                    _printk(0x8001798,_segment.ehdr & 0xffffffff);
                }
                if (_segment.ehdr == uVar1) {
                    return 0;
                }
                if (1 < uVar5) {
                    if (_segment.ehdr == uVar1) {
                        return 0;
                    }
                    if (uVar11 != 2) {
                        if (_segment.ehdr == uVar1) {
                            return 0;
                        }
                        if (uVar11 != 3) {
                            if (_segment.ehdr == uVar1) {
                                return 0;
                            }
                            if (uVar11 != 4) {
                                if (_segment.ehdr == uVar1) {
                                    return 0;
                                }
                                if (uVar11 != 5) {
                                    if (_segment.ehdr == uVar1) {
                                        return 0;
                                    }
                                    if (uVar11 != 6) {
                                        if (_segment.ehdr == uVar1) {
                                            return 0;
                                        }
                                        if (uVar11 != 7) {
                                            if (_segment.ehdr == uVar1) {
                                                return 0;
                                            }
                                            if (uVar11 != 8) {
                                                if (_segment.ehdr == uVar1) {
                                                    return 0;
                                                }
                                                if ((uVar11 != 9) && (_segment.ehdr == uVar1)) {
                                                    return 0;
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
            if (_segment.ehdr != 0) {
                _printk("\nadd uid %d to ceiling users\n",uVar9 & 0xffffffff);
            }
            if (9 < uVar1) {
                iVar10 = uVar5 - 1;
                if (iVar10 < 1) {
                    if (uVar5 == 1) goto code_r0x08004920;
                }
                else {
                    _obj.ceiling_users = *0x800073c;
                    if ((((iVar10 == 1) || (*0x800073c = *0x8000740, iVar10 == 2)) ||
                        (*0x8000740 = *0x8000744, iVar10 == 3)) ||
                       ((((*0x8000744 = *0x8000748, iVar10 == 4 || (*0x8000748 = *0x800074c, iVar10 == 5)) ||
                         ((*0x800074c = *0x8000750, iVar10 == 6 ||
                          ((*0x8000750 = *0x8000754, iVar10 == 7 || (*0x8000754 = *0x8000758, iVar10 == 8)))))) ||
                        (*0x8000758 = *0x800075c, iVar10 == 9)))) {
code_r0x08004920:
                        *0x8000004 = _segment.ehdr >> 0x20;
                        _segment.ehdr = CONCAT44(*0x8000004,uVar1);
                        return 0;
                    }
                }
code_r0x08004918:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800491c);
                (*pcVar4)();
            }
            if (9 < uVar11) goto code_r0x08004918;
        }
        *(obj.ceiling_users + uVar11 * 4) = uVar1;
        _obj.game_ctl_root = _obj.game_ctl_root + 1;
    }
    else if (param_2 == '\x03') {
        sym.update_render_info(iVar7,1);
    }
    else if (param_2 == '\x01') {
        uVar1 = *(*(iVar7 + 0x798) + 4);
        if ((uVar1 != _segment.ehdr) || (uVar5 = get_foreground_uid(), uVar1 != uVar5)) {
            if (obj.ceiling_freq_limit_work == 0x1) {
                cancel_delayed_work_sync(obj.ceiling_rem);
                uVar9 = _segment.ehdr;
                _segment.ehdr = ___cpu_online_mask;
                queue_delayed_work_on(0x20,uVar9,obj.ceiling_rem,1);
            }
            sym.reset_render_info(0);
            iVar6 = sym.reset_render_info(1);
            iVar10 = _segment.ehdr;
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            if (iVar10 == 3) {
                iVar6 = sym.game_load_reset(iVar6);
                iVar10 = _segment.ehdr;
            }
            if (iVar10 == 2) {
                sym.frame_load_reset(iVar6);
            }
            _segment.ehdr = CONCAT44(_segment.ehdr >> 0x20,1);
            *uVar1 = uVar1;
            set_foreground_app(uVar1);
        }
        sym.update_render_info(iVar7,0);
        sym.frame_load_history_update(uVar1);
        if ((obj.migt_enabled != 0x0) && (iVar10 = _segment.ehdr, _segment.ehdr != 0)) {
            iVar6 = get_mi_task_struct(iVar7);
            if (iVar6 != 0) {
                *(iVar6 + 0x198) = ___cpu_online_mask;
            }
            uVar1 = _segment.ehdr + 1;
            if ((_segment.ehdr < uVar1) && (1 < uVar1)) {
                uVar5 = 0;
                if (uVar1 != 0) {
                    uVar5 = uVar1 / uVar1;
                }
                if ((uVar1 == uVar5 * uVar1) || (*(iVar7 + 0x5d8) != uVar1)) {
                    _segment.ehdr = 1;
                    iVar3 = _segment.ehdr;
                    _segment.ehdr = 1;
                    if ((*(iVar7 + 0x5d8) == uVar1) || (_segment.ehdr = iVar3, _printk(0x8000f41), _segment.ehdr != 0)
                       ) {
                        sym.add_work_to_migt(*(*(iVar7 + 0x798) + 4));
                    }
                }
            }
            _segment.ehdr = CONCAT44(*0x8000004,*(iVar7 + 0x5d8));
            _segment.ehdr = fas_sched_clock();
            uVar9 = ___cpu_online_mask;
            obj.migt_boost_flag = 0x0;
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            if ((obj.ceiling_freq_limit_work == 0x1) && (_segment.ehdr - ___cpu_online_mask < 0)) {
                iVar7 = __msecs_to_jiffies(0);
                _segment.ehdr = iVar7 + uVar9;
                cancel_delayed_work_sync(obj.ceiling_rem);
                uVar9 = _segment.ehdr;
                uVar8 = __msecs_to_jiffies(_segment.ehdr & 0xffffffff);
                queue_delayed_work_on(0x20,uVar9,obj.ceiling_rem,uVar8);
            }
            switch(_segment.ehdr & 0xffffffff) {
            case 0:
            case 2:
                break;
            case 3:
                sym.game_load_history_update(_segment.ehdr & 0xffffffff);
                if (obj.ceiling_enable == 0x1) {
                    queue_delayed_work_on(0x20,_segment.ehdr,obj.ceiling_work,1);
                }
                iVar10 = _segment.ehdr + (_segment.ehdr >> 1);
            case 1:
                if (_segment.ehdr == 0) {
                    cancel_delayed_work_sync(obj.migt_work);
                    uVar9 = _segment.ehdr;
                    uVar8 = __msecs_to_jiffies(iVar10);
                    queue_delayed_work_on(0x20,uVar9,obj.migt_work,uVar8);
                }
                else {
                    uVar9 = hrtimer_active(obj.hrtimer);
                    if ((uVar9 & 1) != 0) {
                        hrtimer_cancel(obj.hrtimer);
                    }
                    hrtimer_start_range_ns(obj.hrtimer,iVar10 * 1000000,0,1);
                }
                break;
            default:
                _printk(0x8001747);
            }
        }
    }
    return 0;
}




// ===== sym.mi_rwsem_write_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt @ 0x08002740 (size 8) =====



void sym.mi_rwsem_write_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(param_1);
    if ((uVar1 & 1) != 0) {
        __rcu_read_lock();
        uVar1 = param_2[1];
        if ((*param_2 & 1) != 0) {
            uVar2 = mi_task_exiting(uVar1 & 0xfffffffffffffffc);
            if ((uVar2 & 1) == 0) {
                sym.do_set_lock_vip(uVar1 & 0xfffffffffffffffc);
            }
        }
        __rcu_read_unlock();
    }
    return;
}




// ===== sym.mi_rwsem_read_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt @ 0x08002748 (size 8) =====



void sym.mi_rwsem_read_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(param_1);
    if ((uVar1 & 1) != 0) {
        __rcu_read_lock();
        uVar1 = param_2[1];
        if ((*param_2 & 1) != 0) {
            uVar2 = mi_task_exiting(uVar1 & 0xfffffffffffffffc);
            if ((uVar2 & 1) == 0) {
                sym.do_set_lock_vip(uVar1 & 0xfffffffffffffffc);
            }
        }
        __rcu_read_unlock();
    }
    return;
}




// ===== sym.migt_sched_exit.cfi_jt @ 0x08002750 (size 8) =====



//WARNING: Removing unreachable block (ram,0x08005478)
//WARNING: Removing unreachable block (ram,0x08005480)

void sym.migt_sched_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = *0x8000004 << 0x20;
    unregister_sysctl_table(_segment.ehdr);
    _segment.ehdr = 0;
    _printk(0x80010e1,"migt_sched_exit");
    return;
}




// ===== sym.game_load_exit.cfi_jt @ 0x08002758 (size 8) =====



void sym.game_load_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.game_load_has_init = 0x0;
    unregister_oem_freq_hook();
    irq_work_sync(0x8004e58);
    if (*0x8004000 != 0) {
        unregister_sysctl_table();
    }
    *0x8004000 = 0;
    _printk(0x8000e92);
    return;
}




// ===== sym.cleanup_module.cfi_jt @ 0x08002760 (size 8) =====



void sym.cleanup_module.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint64_t arg1;
    uint32_t extraout_w8;
    int64_t iVar2;
    ulong extraout_x8;
    ulong *extraout_x17;
    ulong *in_x18;
    uint32_t *extraout_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.frame_load_exit(param_1);
    unregister_sched_load_update_hook(0);
    unregister_mi_find_energy_efficient_cpu(0);
    unregister_mi_walt_get_indicies(0);
    misc_deregister(obj.migt_boost_flag);
    if (_segment.ehdr != 0) {
        if (_segment.ehdr != 0) {
            proc_remove();
        }
        sym.delete_game_load_proc();
        proc_remove(_segment.ehdr);
    }
    flush_workqueue(_segment.ehdr);
    destroy_workqueue(_segment.ehdr);
    arg1 = cpumask_next(0xffffffff,__cpu_present_mask);
    *extraout_x18 = extraout_w8;
    if (arg1 < extraout_w8) {
        do {
            uVar3 = arg1 & 0xffffffff;
            if (0x1f < arg1) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800d0d4);
                (*pcVar1)();
            }
            iVar2 = *(__per_cpu_offset + uVar3 * 8);
            if (((iVar2 != -0x800dff0) && (*(iVar2 + 0x800e020) != 0)) && (*(iVar2 + 0x800e020) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
                iVar2 = *(__per_cpu_offset + uVar3 * 8);
            }
            if (((iVar2 != -0x800e038) && (*(iVar2 + 0x800e068) != 0)) && (*(iVar2 + 0x800e068) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
            }
            arg1 = cpumask_next(uVar3,__cpu_present_mask);
            *extraout_x17 = extraout_x8;
        } while (arg1 < extraout_x8);
    }
    iVar2 = sym.game_load_exit(arg1);
    sym.migt_sched_exit(iVar2);
    _printk("%s success\n","migt_exit");
    return;
}




// ===== sym.set_migt_freq.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x08002768 (size 8) =====



int sym.set_migt_freq.43230158a3451c0555eac76e849387b0.cfi_jt(code *param_1,ulong *param_2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    code *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint *puVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uVar12 = *param_2;
    uStack_70 = 0;
    iVar1 = strlen(uVar12);
    strnstr(uVar12,"migt_freq",iVar1);
    iVar6 = strnstr(*param_2,"migt_ceiling_freq",iVar1);
    uVar5 = 0xffffffff;
    pcVar7 = param_1;
    do {
        pcVar7 = strpbrk(pcVar7 + 1,0x800148d);
        uVar5 = uVar5 + 1;
    } while (pcVar7 != NULL);
    if (uVar5 == 0) {
        iVar1 = sscanf(param_1,0x80010d3,&uStack_70 + 4);
        if (iVar1 != 1) goto code_r0x08003424;
        uVar11 = uStack_70._4_4_;
        *param_1 = 0x800148d;
        uVar9 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        if (uVar9 < 0x800148d) {
            param_1 = __cpu_possible_mask;
            do {
                if (iVar6 == 0) {
                    if (0x1f < uVar9) goto code_r0x080034c8;
                    puVar10 = *(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + 0x800dfe0;
                }
                else {
                    if (0x1f < uVar9) goto code_r0x080034c8;
                    puVar10 = *(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + 0x800dfe8;
                }
                *puVar10 = uVar11;
                uVar9 = cpumask_next(uVar9,__cpu_possible_mask);
            } while (uVar9 < 0x800148d);
        }
    }
    else {
        if ((uVar5 & 1) == 0) {
code_r0x08003424:
            iVar1 = -0x16;
            goto code_r0x0800348c;
        }
        if (0 < uVar5) {
            iVar1 = 0;
            do {
                iVar2 = sscanf(param_1,"%u:%u",&uStack_70,&uStack_70 + 4);
                if (iVar2 != 2) goto code_r0x08003424;
                *param_1 = 2;
                uVar4 = uStack_70;
                uVar3 = __sw_hweight64();
                if (uVar3 <= uVar4) goto code_r0x08003424;
                if (iVar6 == 0) {
                    if (0x1f < uStack_70) goto code_r0x080034c8;
                    *(*(__per_cpu_offset + (uStack_70 & 0xffffffff) * 8) + 0x800dfe0) = uStack_70._4_4_;
                }
                else {
                    if (0x1f < uStack_70) goto code_r0x080034c8;
                    *(*(__per_cpu_offset + (uStack_70 & 0xffffffff) * 8) + 0x800dfe8) = uStack_70._4_4_;
                }
                iVar8 = strchr(param_1,0x20);
                iVar1 = iVar1 + 2;
                param_1 = iVar8 + 1;
            } while (iVar1 < uVar5);
        }
    }
    uVar11 = 0x8053000;
    uVar9 = 0xffffffff;
    uVar5 = param_1;
    *param_1 = uVar5;
    do {
        uVar9 = cpumask_next(uVar11,uVar9,__cpu_possible_mask);
        uVar4 = uVar9;
        if (uVar5 <= uVar4) break;
        if (0x1f < uVar4) {
code_r0x080034c8:
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x80034cc);
            (*pcVar7)();
        }
        uVar11 = 0;
    } while (*(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + 0x800dfe0) == 0);
    obj.migt_enabled = uVar4 < uVar5;
    iVar1 = 0;
code_r0x0800348c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return iVar1;
    }
    auVar13 = __stack_chk_fail(iVar1);
    *extraout_x18 = sym.get_migt_freq;
    uVar12 = *auVar13._8_8_;
    iVar1 = strlen(uVar12);
    strnstr(uVar12,"migt_freq",iVar1);
    puVar10 = strnstr(*auVar13._8_8_,"migt_ceiling_freq",iVar1);
    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *puVar10 = 0x8053000;
    if (uVar5 < 0x8053000) {
        iVar1 = 0;
        do {
            uVar9 = uVar5;
            if (0x1f < uVar5) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x5512,0x8003638);
                (*pcVar7)();
            }
            iVar6 = 8;
            if (puVar10 != NULL) {
                iVar6 = 0x10;
            }
            iVar2 = snprintf(auVar13._0_8_ + iVar1,0x1000 - iVar1,"%d:%u ",uVar9,
                             *(obj.migt_info + iVar6 + *(__per_cpu_offset + uVar9 * 8)));
            iVar1 = iVar2 + iVar1;
            uVar5 = cpumask_next(uVar9,__cpu_possible_mask);
            *puVar10 = 0x8053000;
        } while (uVar5 < 0x8053000);
    }
    else {
        iVar1 = 0;
    }
    iVar2 = snprintf(auVar13._0_8_ + iVar1,0x1000 - iVar1,0x8001721);
    return iVar2 + iVar1;
}




// ===== sym.set_flw_enable.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x08002770 (size 8) =====



void sym.set_flw_enable.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    iStack_1c = 0;
    iVar1 = sscanf(param_1,0x80010d3,&iStack_1c);
    if (iVar1 == 1) {
        if (iStack_1c == 0) {
            sym.frame_load_reset(iVar1);
        }
        uVar2 = 0;
        *0x8004000 = iStack_1c;
    }
    else {
        uVar2 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    uVar2 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.get_flw_enable;
    sprintf(uVar2,0x80010d3,*0x8004000);
    return;
}




// ===== sym.init_module.cfi_jt @ 0x08002778 (size 8) =====



int sym.init_module.cfi_jt(void)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t extraout_x8_01;
    uint64_t extraout_x8_02;
    ulong *in_x18;
    uint64_t uVar5;
    ulong *unaff_x20;
    code *pcVar6;
    uint32_t *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.migt_sched_init();
    sym.game_load_init();
    _segment.ehdr = _seq_lseek;
    uVar1 = cpumask_next(0xffffffff,__cpu_present_mask);
    *unaff_x20 = extraout_x8;
    if (uVar1 < extraout_x8) {
        do {
            uVar5 = uVar1;
            iVar3 = cpufreq_cpu_get(uVar5);
            if (iVar3 == 0) {
                _printk(0x8001821,"migt_freq_qos_request_init_first",uVar5);
code_r0x08003100:
                uVar1 = cpumask_next(0xffffffff,__cpu_present_mask);
                ___cpu_present_mask = CONCAT44(_cpumask_next,extraout_w8_01);
                if (extraout_w8_01 <= uVar1) goto code_r0x08003198;
                goto code_r0x08003148;
            }
            if (0x1f < uVar1) goto code_r0x08003224;
            iVar2 = freq_qos_add_request(iVar3 + 0xa0,obj.qos_req_min + *(__per_cpu_offset + uVar5 * 8),1,0);
            if (iVar2 < 0) {
                uVar4 = 0x800135e;
code_r0x080030ec:
                _printk(uVar4,"migt_freq_qos_request_init_first",iVar2);
                cpufreq_cpu_put(iVar3);
                goto code_r0x08003100;
            }
            iVar2 = freq_qos_add_request(iVar3 + 0xa0,obj.qos_req_max + *(__per_cpu_offset + uVar1 * 8),2,0x7fffffff)
            ;
            if (iVar2 < 0) {
                uVar4 = 0x80012b1;
                goto code_r0x080030ec;
            }
            cpufreq_cpu_put(iVar3);
            uVar1 = cpumask_next(uVar1,__cpu_present_mask);
            ___cpu_present_mask = extraout_x8_00;
        } while (uVar1 < extraout_x8_00);
    }
    goto code_r0x08002d68;
    while( true ) {
        iVar3 = *(__per_cpu_offset + puVar7 * 8);
        if (((iVar3 != -0x800dff0) && (*(iVar3 + 0x800e020) != 0)) && (*(iVar3 + 0x800e020) < 0xfffffffffffff001)) {
            freq_qos_remove_request();
            iVar3 = *(__per_cpu_offset + puVar7 * 8);
        }
        if (((iVar3 != -0x800e038) && (*(iVar3 + 0x800e068) != 0)) && (*(iVar3 + 0x800e068) < 0xfffffffffffff001)) {
            freq_qos_remove_request();
        }
        uVar1 = cpumask_next(puVar7,__cpu_present_mask);
        *puVar7 = extraout_w8_02;
        if (extraout_w8_02 <= uVar1) break;
code_r0x08003148:
        puVar7 = uVar1;
        if (0x1f < uVar1) goto code_r0x08003224;
    }
code_r0x08003198:
    _printk(0x8001926,0x4ae);
    iVar2 = cpufreq_register_notifier(reloc.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt,1);
    if (iVar2 != 0) goto code_r0x080031c0;
code_r0x08002d68:
    hrtimer_init(obj.hrtimer,1,1);
    pcVar6 = sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt;
    *0x80004c8 = sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt;
    hrtimer_init(obj.vtask_timer,1,1);
    *0x8000478 = sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt;
    _segment.ehdr = alloc_workqueue("migt_wq",0x10,0);
    if (_segment.ehdr == 0) {
        iVar2 = -0xe;
        _segment.ehdr = 0;
    }
    else {
        _segment.ehdr = proc_mkdir("migt",0);
        pcVar6 = segment.ehdr;
        if (_segment.ehdr == 0) {
            iVar2 = -0xe;
            _segment.ehdr = 0;
        }
        else {
            uVar5 = proc_create("show_exec_buckets",0x1b4,_segment.ehdr,obj.exec_buckets_fops);
            iVar3 = _segment.ehdr;
            _segment.ehdr = uVar5;
            sym.create_game_load_proc(iVar3);
            iVar2 = misc_register(obj.migt_boost_flag);
            if (iVar2 == 0) {
                _obj.migt_work = 0xfffffffe0;
                *0x8000508 = 0x8000508;
                *0x8000510 = 0x8000508;
                *0x8000518 = sym.do_migt.43230158a3451c0555eac76e849387b0.cfi_jt;
                init_timer_key(reloc.enable_pkg_monitor,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _obj.irq_boost_work = 0xfffffffe0;
                *0x8000428 = 0x8000428;
                *0x8000430 = 0x8000428;
                *0x8000438 = sym.do_migt.43230158a3451c0555eac76e849387b0.cfi_jt;
                _obj.migt_rem = 0xfffffffe0;
                *0x8000590 = 0x8000590;
                *0x8000598 = 0x8000590;
                *0x80005a0 = sym.do_migt_rem.43230158a3451c0555eac76e849387b0.cfi_jt;
                init_timer_key(0x80005b8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _obj.ceiling_work = 0xfffffffe0;
                *0x8000618 = 0x8000618;
                *0x8000620 = 0x8000618;
                *0x8000628 = sym.do_ceiling_limit.43230158a3451c0555eac76e849387b0.cfi_jt;
                init_timer_key(0x8000640,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _obj.ceiling_rem = 0xfffffffe0;
                *0x80006a0 = 0x80006a0;
                *0x80006a8 = 0x80006a0;
                *0x80006b0 = sym.do_ceiling_rem.43230158a3451c0555eac76e849387b0.cfi_jt;
                init_timer_key(0x80006c8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                _segment.ehdr = extraout_x8_01;
                if (uVar5 < extraout_x8_01) {
                    do {
                        if (0x1f < uVar5) goto code_r0x08003224;
                        iVar3 = *(__per_cpu_offset + (uVar5 & 0xffffffff) * 8);
                        *(obj.migt_info + iVar3) = uVar5;
                        *(iVar3 + 0x800dfe4) = 0xffffffff;
                        uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
                        _segment.ehdr = extraout_x8_02;
                    } while (uVar5 < extraout_x8_02);
                }
                register_sched_load_update_hook(0,sym.migt_hook.cfi_jt);
                register_mi_find_energy_efficient_cpu(0,sym.find_energy_hook.43230158a3451c0555eac76e849387b0.cfi_jt);
                register_mi_walt_get_indicies(0,sym.walt_get_indicies_hook.43230158a3451c0555eac76e849387b0.cfi_jt);
                sym.frame_load_init(_segment.ehdr);
                return 0;
            }
            if (_segment.ehdr != 0) {
                if (_segment.ehdr != 0) {
                    proc_remove();
                }
                sym.delete_game_load_proc();
                proc_remove(_segment.ehdr);
            }
        }
        flush_workqueue(_segment.ehdr);
        destroy_workqueue(_segment.ehdr);
    }
    uVar1 = cpumask_next(0xffffffff,__cpu_present_mask);
    *pcVar6 = extraout_w8;
    if (uVar1 < extraout_w8) {
        do {
            puVar7 = uVar1;
            if (0x1f < uVar1) {
code_r0x08003224:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8003228);
                (*pcVar6)();
            }
            iVar3 = *(__per_cpu_offset + puVar7 * 8);
            if (((iVar3 != -0x800dff0) && (*(iVar3 + 0x800e020) != 0)) && (*(iVar3 + 0x800e020) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
                iVar3 = *(__per_cpu_offset + puVar7 * 8);
            }
            if (((iVar3 != -0x800e038) && (*(iVar3 + 0x800e068) != 0)) && (*(iVar3 + 0x800e068) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
            }
            uVar1 = cpumask_next(puVar7,__cpu_present_mask);
            *puVar7 = extraout_w8_00;
        } while (uVar1 < extraout_w8_00);
    }
code_r0x080031c0:
    iVar3 = cpufreq_unregister_notifier(reloc.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt,1);
    iVar3 = sym.game_load_exit(iVar3);
    sym.migt_sched_exit(iVar3);
    return iVar2;
}




// ===== sym.game_load_init.cfi_jt @ 0x08002780 (size 8) =====



uint64_t sym.game_load_init.cfi_jt(void)

{
    code *pcVar1;
    code *pcVar2;
    int iVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    int64_t in_x3;
    uint64_t *in_x4;
    int64_t in_x5;
    uint *in_x6;
    uint uVar11;
    uint32_t uVar12;
    ulong extraout_x8;
    int64_t iVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar17;
    uint32_t *puVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    puVar17 = 0xffffffff;
    uStack_60 = _seq_lseek;
    do {
        uVar5 = cpumask_next(puVar17,&uStack_60);
        *puVar17 = extraout_x8;
        if (extraout_x8 <= uVar5) {
            uVar11 = 0;
            goto code_r0x08006f80;
        }
        puVar17 = uVar5;
        puVar7 = sym.cpu_coregroup_mask(uVar5);
        uVar19 = *puVar7;
        uVar8 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar6 = 0x20;
        if ((uVar19 & 0xffffffff) != 0) {
            uVar6 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
        }
    } while (uVar5 != uVar6);
    *puVar17 = 0x20;
    uVar8 = cpumask_next(0xffffffff,puVar7);
    if (uVar8 < 0x20) {
        do {
            if (0x1f < uVar8) goto code_r0x08007198;
            iVar13 = (uVar8 & 0xffffffff) * 8;
            *(*(__per_cpu_offset + iVar13) + 0x800e104) = 0;
            *(*(__per_cpu_offset + iVar13) + 0x800e100) = 0;
            uVar8 = cpumask_next(uVar8,puVar7);
        } while (uVar8 < 0x20);
        uVar19 = *puVar7;
    }
    uStack_60 = uStack_60 & (*puVar7 ^ 0xffffffff);
    *0x8004000 = uVar19;
    uVar5 = cpumask_next(uVar5,&uStack_60);
    if (uVar5 < 0x20) {
        do {
            puVar18 = uVar5;
            puVar9 = sym.cpu_coregroup_mask(uVar5);
            uVar19 = *puVar9;
            uVar8 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar6 = 0x20;
            if ((uVar19 & 0xffffffff) != 0) {
                uVar6 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
            }
            if (uVar5 == uVar6) {
                *puVar18 = 0x20;
                uVar8 = cpumask_next(0xffffffff,puVar9);
                if (0x1f < uVar8) goto code_r0x08007088;
                goto code_r0x0800704c;
            }
            *puVar18 = puVar7;
            uVar5 = cpumask_next(puVar18,&uStack_60);
        } while (uVar5 < puVar7);
    }
    uVar11 = 1;
    goto code_r0x08006f80;
code_r0x080070e0:
    *puVar18 = uVar5;
    uVar6 = cpumask_next(uVar6,&uStack_60);
    if (uVar5 <= uVar6) goto code_r0x080070fc;
    goto code_r0x080070bc;
    while( true ) {
        iVar13 = (uVar8 & 0xffffffff) * 8;
        *(*(__per_cpu_offset + iVar13) + 0x800e104) = 1;
        *(*(__per_cpu_offset + iVar13) + 0x800e100) = 0;
        uVar8 = cpumask_next(uVar8,puVar9);
        if (0x1f < uVar8) break;
code_r0x0800704c:
        if (0x1f < uVar8) goto code_r0x08007198;
    }
    uVar19 = *puVar9;
code_r0x08007088:
    uStack_60 = uStack_60 & (*puVar9 ^ 0xffffffff);
    *0x8004000 = uVar19;
    uVar6 = cpumask_next(uVar5,&uStack_60);
    if (uVar6 < 0x20) {
code_r0x080070bc:
        puVar7 = sym.cpu_coregroup_mask(uVar6);
        uVar19 = *puVar7;
        uVar8 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar12 = 0x20;
        if (uVar19 != 0) {
            uVar12 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        if (uVar6 != uVar12) goto code_r0x080070e0;
        *puVar7 = uVar6;
        uVar8 = cpumask_next(0xffffffff,puVar7);
        uVar5 = uVar8;
        while (uVar5 < uVar6) {
            if (0x1f < uVar8) {
code_r0x08007198:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800719c);
                (*pcVar4)();
            }
            iVar13 = (uVar8 & 0xffffffff) * 8;
            *(*(__per_cpu_offset + iVar13) + 0x800e104) = 2;
            *(*(__per_cpu_offset + iVar13) + 0x800e100) = 0;
            uVar8 = cpumask_next(uVar8,puVar7);
            uVar5 = uVar8;
        }
        *0x8004000 = *puVar7;
        uStack_60 = uStack_60 & (*puVar7 ^ 0xffffffff);
        uVar11 = 3;
        goto code_r0x08006f80;
    }
code_r0x080070fc:
    uVar11 = 2;
code_r0x08006f80:
    uVar8 = *0x8004000;
    *0x8004000 = CONCAT44(*0x8004004,uVar11);
    if (uVar8 != 0) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x8007194);
        (*pcVar4)();
    }
    *0x8004e58 = 0;
    *0x8004e60 = 0;
    *0x8004e68 = sym.glk_irq_work.cfi_jt;
    *0x8004000 = register_sysctl_table(obj.game_ctl_root);
    register_oem_freq_hook(sym.set_next_freq.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt);
    obj.game_load_has_init = 0x1;
    _printk(0x800131f);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return 0;
    }
    auVar20 = __stack_chk_fail();
    uVar8 = auVar20._0_8_;
    *extraout_x18 = sym.set_next_freq;
    if (obj.game_load_has_init != 0x1) {
        return uVar8;
    }
    uVar19 = *in_x4;
    if (_segment.ehdr == 0) {
        *in_x6 = 0x8053000;
        if ((0x1f < *(in_x5 + 0x1c)) || (2 < *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104)))
        goto code_r0x08007628;
        uVar5 = *(perf_min_freq + *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104) * 4);
        if (*(perf_min_freq + *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104) * 4) <= *(in_x5 + 0x34)) {
            uVar5 = *(in_x5 + 0x34);
        }
        uVar10 = uVar5;
        uVar14 = uVar19;
        if (*0x8004000 != 0) {
            uVar8 = _printk(0x80011e9,uVar10);
            uVar14 = *in_x4;
        }
        if (uVar10 <= uVar14) {
            uVar10 = uVar14;
        }
        goto code_r0x08007588;
    }
    if (_segment.ehdr == 0) {
        iVar3 = *0x8004000;
        uVar8 = fas_sched_clock();
        if (((999999999 < uVar8 - CONCAT44(*0x8000004,_segment.ehdr)) || (_segment.ehdr < 3)) ||
           (obj.game_load_has_init != 0x1)) goto code_r0x08007208;
        uVar5 = 0x14;
        if (iVar3 != 0) {
            uVar5 = iVar3 - 1;
        }
        uVar14 = uVar5;
        if (0x15 < uVar5) goto code_r0x08007628;
        if (0x540 < (uVar14 << 6 | 0x20)) {
code_r0x0800762c:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x8007630);
            (*pcVar4)();
        }
        if (0x1f < *(in_x5 + 0x1c)) goto code_r0x08007628;
        uVar5 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104);
        uVar10 = uVar5;
        if (2 < uVar5) goto code_r0x08007628;
        if (0x53f < uVar14 * 0x40 + uVar10 * 8) goto code_r0x0800762c;
        pcVar4 = obj.glk_minfreq + uVar10 * 4;
        pcVar1 = in_x5 + 0x38;
        if (obj.ceiling_next_update != 0x0) {
            pcVar1 = obj.glk_maxfreq + uVar10 * 4;
        }
        pcVar2 = in_x5 + 0x34;
        if (obj.glk_minfreq_limit != 0x0) {
            pcVar2 = pcVar4;
        }
        uVar6 = *pcVar1;
        uVar5 = *pcVar2;
        if (uVar5 < uVar6) goto code_r0x08007208;
        uVar8 = 1000000;
        uVar16 = *(uVar14 * 0x40 + 0x80048f0);
        if (uVar16 < 1000000) goto code_r0x08007208;
        uVar8 = *pcVar4;
        uVar15 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x8053cc4);
        if (*pcVar4 == 0) {
            *pcVar4 = *(in_x5 + 0x34);
        }
        if (_segment.ehdr * 2 < uVar16 / 1000000) {
            if (*(in_x5 + 0x3c) < uVar5) {
                uVar14 = uVar5;
            }
            else {
                uVar14 = uVar5;
                if (*0x800e000 != 0) {
                    uVar14 = *(in_x5 + 0x38);
                }
            }
        }
        else {
            uVar16 = 0;
            if (uVar15 != 0) {
                uVar16 = (*(uVar14 * 0x40 + 0x80048d0 + uVar10 * 8) * 100) / uVar15;
            }
            uVar14 = uVar5;
            if ((uVar16 <= *(obj.glk_highspeed_load + uVar10 * 4)) &&
               (uVar14 = uVar6, *(obj.glk_lowspeed_load + uVar10 * 4) <= uVar16)) {
                uVar12 = (uVar16 * (uVar5 + (uVar5 >> 3))) / 100;
                if (uVar12 <= uVar5) {
                    uVar5 = uVar12;
                }
                if (uVar6 <= uVar5) {
                    uVar6 = uVar5;
                }
                uVar14 = uVar6;
                if (*0x8004000 != 0) {
                    uVar8 = _printk(0x80013cf,uVar16,uVar14);
                }
            }
        }
        if (uVar14 == 0) goto code_r0x08007208;
    }
    else {
code_r0x08007208:
        uVar5 = *in_x4;
        uVar14 = uVar5;
        if (((_segment.ehdr != 0) && (_segment.ehdr != 0)) && (obj.game_load_has_init == 0x1)) {
            if (0x1f < *(in_x5 + 0x1c)) {
code_r0x08007628:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800762c);
                (*pcVar4)();
            }
            uVar6 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104);
            if ((obj.ceiling_next_update == 0x0) || (*0x80048c8 != '\0')) {
                pcVar4 = in_x5 + 0x38;
            }
            else {
                if (2 < uVar6) goto code_r0x08007628;
                pcVar4 = obj.glk_maxfreq + uVar6 * 4;
            }
            uVar12 = *pcVar4;
            if (obj.glk_minfreq_limit == 0x0) {
                pcVar4 = in_x5 + 0x34;
            }
            else {
                if (2 < uVar6) goto code_r0x08007628;
                pcVar4 = obj.glk_minfreq + uVar6 * 4;
            }
            uVar6 = *(in_x5 + 0x34);
            if (*(in_x5 + 0x34) <= *pcVar4) {
                uVar6 = *pcVar4;
            }
            if (uVar12 == 0) {
                uVar12 = *(in_x5 + 0x38);
            }
            if (uVar5 <= uVar6) {
                uVar5 = uVar6;
            }
            if (uVar5 <= uVar12) {
                uVar12 = uVar5;
            }
            uVar14 = uVar12;
        }
    }
    uVar8 = sym.frame_load_enable(uVar8);
    if ((uVar8 & 1) == 0) {
        uVar8 = sym.flw_update_freq_enable();
    }
    else {
        uVar10 = sym.flw_cal_freq(in_x5,in_x3,uVar14,auVar20._8_8_);
        uVar8 = sym.flw_update_freq_enable();
        if (((uVar8 & 1) != 0) && (uVar10 != 0)) goto code_r0x08007588;
    }
    uVar10 = uVar14;
code_r0x08007588:
    *in_x4 = uVar10;
    if (uVar10 != uVar19) {
        *in_x6 = 1;
    }
    return uVar8;
}




// ===== sym.migt_sched_init.cfi_jt @ 0x08002788 (size 8) =====



ulong sym.migt_sched_init.cfi_jt(void)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = kthread_create_on_node
                      (sym.migt_hardwork.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt,obj.g_work,0xffffffff,"migt_thread")
    ;
    if ((uVar2 < 0xfffffffffffff001) && (wake_up_process(uVar2), uVar2 != 0)) {
        _obj.render_info = 0;
        _segment.ehdr = uVar2;
        sym.reset_render_info(0);
        *0x8000800 = 0;
        sym.reset_render_info(1);
        _printk(0x8001609,"migt_sched_init");
        _segment.ehdr = CONCAT44(*0x8000004,1);
        if (_segment.ehdr != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8005398);
            (*pcVar1)();
        }
        _segment.ehdr = register_sysctl_table(obj.migt_ctl_root);
        uVar3 = 0;
    }
    else {
        _segment.ehdr = uVar2;
        _printk(0x800106d,"migt_sched_init");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}




// ===== sym.game_dequeue_hooks.f20cf08a5c0af60561839b6a406a0d16.cfi_jt @ 0x08002790 (size 8) =====



void sym.game_dequeue_hooks.f20cf08a5c0af60561839b6a406a0d16.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t extraout_x8;
    uint64_t extraout_x8_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(param_1);
    if (((uVar1 & 1) != 0) && ((param_3 & 1) != 0)) {
        iVar2 = get_mi_task_struct(param_2);
        uVar1 = extraout_x8;
        if (((iVar2 != 0) &&
            ((uVar1 = 0, iVar2 != -0xe8 && (uVar1 = *(iVar2 + 0xed), (*(iVar2 + 0xed) >> 3 & 1) != 0)))) &&
           ((iVar2 = get_mi_task_struct(param_2), iVar2 == 0 ||
            ((iVar2 == -0xe8 || (uVar1 = *(iVar2 + 0xed), (*(iVar2 + 0xed) >> 2 & 1) == 0)))))) {
            sym.set_flw_flag(param_2,0,0x800);
            uVar1 = extraout_x8_00;
        }
        sym.game_dequeue_task(uVar1,param_2);
    }
    return;
}




// ===== sym.exec_buckets_show.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x08002798 (size 8) =====



ulong sym.exec_buckets_show.43230158a3451c0555eac76e849387b0.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong *puVar6;
    ulong uVar7;
    code *pcVar8;
    uint uVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = **(param_1 + 0x80);
    __rcu_read_lock();
    pcVar8 = init_task;
    while( true ) {
        iVar5 = *(pcVar8 + 0x4d0);
        pcVar8 = iVar5 + -0x4d0;
        if (pcVar8 == init_task) break;
        __rcu_read_lock();
        iVar2 = *(*(iVar5 + 0x2c0) + 4);
        __rcu_read_unlock();
        if (iVar2 == iVar1) {
            for (puVar10 = *(*(iVar5 + 800) + 0x10); *(iVar5 + 800) + 0x10 != puVar10; puVar10 = *puVar10) {
                puVar6 = puVar10 + -0xd3;
                iVar4 = get_mi_task_struct(puVar6);
                if ((iVar4 != 0) && (iVar4 != -0xe8)) {
                    seq_printf(param_1,"%5d,%16s buckests:{",*(puVar10 + -0x18),puVar10 + 0x22);
                    seq_printf(param_1," %8d",*(iVar4 + 0x150));
                    seq_printf(param_1," %8d",*(iVar4 + 0x154));
                    seq_printf(param_1," %8d",*(iVar4 + 0x158));
                    seq_printf(param_1," %8d",*(iVar4 + 0x15c));
                    seq_printf(param_1," %8d",*(iVar4 + 0x160));
                    seq_printf(param_1," %8d",*(iVar4 + 0x164));
                    seq_printf(param_1," %8d",*(iVar4 + 0x168));
                    seq_printf(param_1," %8d",*(iVar4 + 0x16c));
                    seq_printf(param_1," %8d",*(iVar4 + 0x170));
                    seq_printf(param_1," %8d",*(iVar4 + 0x174));
                    iVar2 = sym.game_super_task(puVar6);
                    uVar7 = 0x80015b3;
                    if (iVar2 == 0) {
                        iVar2 = sym.is_render_thread(puVar6);
                        uVar7 = 0x8000f3d;
                        if (iVar2 == 0) {
                            iVar2 = sym.game_vip_task(puVar6);
                            uVar7 = 0x80013a5;
                            if (iVar2 == 0) {
                                iVar2 = sym.game_ip_task(puVar6);
                                uVar7 = 0x8001723;
                                if (iVar2 != 0) {
                                    uVar7 = 0x8000ec4;
                                }
                            }
                        }
                    }
                    uVar3 = mi_vip_task(puVar6);
                    uVar9 = 0x76;
                    if ((uVar3 & 1) == 0) {
                        uVar9 = 99;
                    }
                    seq_printf(param_1,"  } %s %c\n",uVar7,uVar9);
                }
            }
        }
    }
    __rcu_read_unlock();
    return 0;
}




// ===== sym.cpu_load_show.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x080027a0 (size 8) =====



ulong sym.cpu_load_show.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8022000;
    if ((_segment.ehdr != 0) && ((obj.frame_load_has_init == 0x1 && *0x8004000 != 0) && *0x8022000 != 0)) {
        uVar2 = *0x8022000 + 1;
        if (uVar2 < 0x65) {
            do {
                sym.dump_cpu_load_info(uVar2,param_1);
                uVar2 = uVar2 + 1;
            } while (uVar2 != 0x65);
            if (iVar1 < 0) {
                return 0;
            }
        }
        uVar2 = 0;
        do {
            sym.dump_cpu_load_info(uVar2,param_1);
            uVar2 = uVar2 + 1;
        } while (uVar2 <= iVar1);
    }
    return 0;
}




// ===== sym.cpu_load_show.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt @ 0x080027a8 (size 8) =====



ulong sym.cpu_load_show.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt(uint32_t *param_1)

{
    uint64_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t extraout_w8;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = 0x14;
    if (*0x8004000 != 0) {
        uVar3 = *0x8004000 - 1;
    }
    if (uVar3 < 0x15) {
        if (0x540 < (uVar3 << 6 | 0x20)) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x8008014);
            (*pcVar2)();
        }
        seq_printf(param_1,"Period :%llu\n",*(uVar3 * 0x40 + 0x80048f0));
        if (0 < *0x8004000) {
            uVar5 = 0;
            iVar6 = 0x8004e20;
            do {
                seq_printf(param_1,"---cluster %d--- \n",uVar5 & 0xffffffff);
                uVar4 = 0xffffffff;
                while( true ) {
                    uVar3 = cpumask_next(uVar4,iVar6);
                    *param_1 = extraout_w8;
                    if (extraout_w8 <= uVar3) break;
                    if (0x1f < uVar3) goto code_r0x0800800c;
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar4 = uVar3;
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e088) / *0x8004000;
                    }
                    seq_printf(param_1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e098) / *0x8004000;
                    }
                    seq_printf(param_1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0a8) / *0x8004000;
                    }
                    seq_printf(param_1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0b8) / *0x8004000;
                    }
                    seq_printf(param_1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0c8) / *0x8004000;
                    }
                    seq_printf(param_1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0d8) / *0x8004000;
                    }
                    seq_printf(param_1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0e8) / *0x8004000;
                    }
                    seq_printf(param_1,"%9d \t",uVar1);
                }
                seq_printf(param_1,0x8001721);
                if (uVar5 == 3) goto code_r0x0800800c;
                uVar5 = uVar5 + 1;
                iVar6 = uVar5 * 8 + 0x8004e20;
            } while (uVar5 < *0x8004000);
        }
        return 0;
    }
code_r0x0800800c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8008010);
    (*pcVar2)();
}




// ===== sym.history_load_show.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt @ 0x080027b0 (size 8) =====



ulong sym.history_load_show.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8004000;
    uVar2 = *0x8004000 + 1;
    if (uVar2 < 0x15) {
        do {
            sym.dump_his_load_info(uVar2,param_1);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 0x15);
        if (iVar1 < 0) {
            return 0;
        }
    }
    uVar2 = 0;
    do {
        sym.dump_his_load_info(uVar2,param_1);
        uVar2 = uVar2 + 1;
    } while (uVar2 <= iVar1);
    return 0;
}




// ===== sym.history_load_show.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x080027b8 (size 8) =====



ulong sym.history_load_show.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8022000;
    if ((_segment.ehdr != 0) && ((obj.frame_load_has_init == 0x1 && *0x8004000 != 0) && *0x8022000 != 0)) {
        uVar2 = *0x8022000 + 1;
        if (uVar2 < 0x65) {
            do {
                sym.dump_his_load_info_1(uVar2,param_1);
                uVar2 = uVar2 + 1;
            } while (uVar2 != 0x65);
            if (iVar1 < 0) {
                return 0;
            }
        }
        uVar2 = 0;
        do {
            sym.dump_his_load_info_1(uVar2,param_1);
            uVar2 = uVar2 + 1;
        } while (uVar2 <= iVar1);
    }
    return 0;
}




// ===== sym.find_energy_hook.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080027c0 (size 8) =====



void sym.find_energy_hook.43230158a3451c0555eac76e849387b0.cfi_jt(ulong param_1,char *param_2)

{
    bool bVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.wake_render();
    if (*param_2 == '\0') {
        iVar2 = sym.game_vip_task(param_1);
        bVar1 = iVar2 != 0;
    }
    else {
        bVar1 = true;
    }
    *param_2 = bVar1;
    return;
}




// ===== sym.get_flw_enable.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x080027c8 (size 8) =====



void sym.get_flw_enable.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sprintf(param_1,0x80010d3,*0x8004000);
    return;
}




// ===== sym.get_migt_freq.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080027d0 (size 8) =====



int sym.get_migt_freq.43230158a3451c0555eac76e849387b0.cfi_jt(int64_t param_1,ulong *param_2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *param_2;
    iVar3 = strlen(uVar7);
    strnstr(uVar7,"migt_freq",iVar3);
    puVar6 = strnstr(*param_2,"migt_ceiling_freq",iVar3);
    uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *puVar6 = 0x8053000;
    if (uVar4 < 0x8053000) {
        iVar3 = 0;
        do {
            uVar8 = uVar4;
            if (0x1f < uVar4) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8003638);
                (*pcVar2)();
            }
            iVar1 = 8;
            if (puVar6 != NULL) {
                iVar1 = 0x10;
            }
            iVar5 = snprintf(param_1 + iVar3,0x1000 - iVar3,"%d:%u ",uVar8,
                             *(obj.migt_info + iVar1 + *(__per_cpu_offset + uVar8 * 8)));
            iVar3 = iVar5 + iVar3;
            uVar4 = cpumask_next(uVar8,__cpu_possible_mask);
            *puVar6 = 0x8053000;
        } while (uVar4 < 0x8053000);
    }
    else {
        iVar3 = 0;
    }
    iVar5 = snprintf(param_1 + iVar3,0x1000 - iVar3,0x8001721);
    return iVar5 + iVar3;
}




// ===== sym.walt_get_indicies_hook.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080027d8 (size 8) =====



void sym.walt_get_indicies_hook.43230158a3451c0555eac76e849387b0.cfi_jt
               (ulong param_1,int *param_2,uint *param_3,int param_4,uchar *param_5)

{
    int iVar1;
    uchar uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.game_super_task();
    if (iVar1 == 0) {
        iVar1 = sym.game_vip_task(param_1);
        if (iVar1 == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = 1;
            *param_2 = 1;
        }
    }
    else if (_segment.ehdr == 0) {
        uVar2 = 1;
        *param_2 = 1;
        *param_3 = 1;
    }
    else {
        uVar2 = 1;
        *param_2 = param_4 + -1;
    }
    *param_5 = uVar2;
    return;
}




// ===== sym.migt_mmap.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x080027e0 (size 8) =====



ulong sym.migt_mmap.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    return 0;
}




// ===== sym.mi_rt_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt @ 0x080027e8 (size 8) =====



void sym.mi_rt_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(param_1);
    if ((uVar1 & 1) != 0) {
        __rcu_read_lock();
        arg1 = *(param_2 + 0x18) & 0xfffffffffffffffe;
        uVar1 = mi_task_exiting(arg1);
        if ((uVar1 & 1) == 0) {
            sym.do_set_lock_vip(arg1);
        }
        __rcu_read_unlock();
    }
    return;
}




// ===== sym.mi_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt @ 0x080027f0 (size 8) =====



void sym.mi_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(param_1);
    if ((uVar1 & 1) != 0) {
        __rcu_read_lock();
        uVar2 = *param_2;
        uVar1 = mi_task_exiting(uVar2 & 0xfffffffffffffff8);
        if ((uVar1 & 1) == 0) {
            sym.do_set_lock_vip(uVar2 & 0xfffffffffffffff8);
        }
        __rcu_read_unlock();
    }
    return;
}




// ===== sym.update_frame_ravg.cfi_jt @ 0x080027f8 (size 8) =====



void sym.update_frame_ravg.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) &&
       ((obj.frame_load_has_init == 0x1 && *0x8004000 != 0) && CONCAT44(*0x8000004,_segment.ehdr) != 0)) {
        sym.update_task_frame_load(param_1,*(param_2 + 0xba8),param_3,param_4);
        sym.update_whole_frame_load(param_1,param_2,param_3 & 0xffffffff,param_4);
    }
    return;
}




// ===== sym.single_release.cfi_jt @ 0x08002800 (size 8) =====



//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}




// ===== sym.cpu_load_open.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt @ 0x08002808 (size 8) =====



void sym.cpu_load_open.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.cpu_load_show.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt,0);
    return;
}




// ===== sym.migt_open.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x08002810 (size 8) =====



ulong sym.migt_open.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    return 0;
}




// ===== sym.exec_buckets_open.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x08002818 (size 8) =====



void sym.exec_buckets_open.43230158a3451c0555eac76e849387b0.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(param_2,sym.exec_buckets_show.43230158a3451c0555eac76e849387b0.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(param_2 + 0xd8) + 0x80) = show_traced_uid;
    }
    return;
}




// ===== sym.migt_release.43230158a3451c0555eac76e849387b0.cfi_jt @ 0x08002820 (size 8) =====



ulong sym.migt_release.43230158a3451c0555eac76e849387b0.cfi_jt(void)

{
    return 0;
}




// ===== sym.history_load_open.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x08002828 (size 8) =====



void sym.history_load_open.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.history_load_show.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt,0);
    return;
}




// ===== sym.cpu_load_open.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt @ 0x08002830 (size 8) =====



void sym.cpu_load_open.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.cpu_load_show.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt,0);
    return;
}




// ===== sym.history_load_open.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt @ 0x08002838 (size 8) =====



void sym.history_load_open.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.history_load_show.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt,0);
    return;
}




// ===== sym.cpu_coregroup_mask @ 0x08002840 (size 112) =====



code * sym.cpu_coregroup_mask(uint32_t arg1)

{
    code *pcVar1;
    code *pcVar2;
    
    if (0x1f < arg1) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x80028b0);
        (*pcVar1)();
    }
    pcVar1 = _raw_spin_unlock + arg1 * 0x30;
    if ((*(_raw_spin_unlock + arg1 * 0x30) & (___cpu_online_mask ^ 0xffffffff)) != 0) {
        pcVar1 = __cpu_online_mask;
    }
    pcVar2 = pcVar1;
    if ((*(get_mi_task_struct + arg1 * 0x30) != -1) &&
       (pcVar2 = hrtimer_start_range_ns + arg1 * 0x30,
       (*(hrtimer_start_range_ns + arg1 * 0x30) & (*pcVar1 ^ 0xffffffff)) != 0)) {
        pcVar2 = pcVar1;
    }
    return pcVar2;
}




// ===== sym.update_freq_limit @ 0x080028b0 (size 12) =====



void sym.update_freq_limit(void)

{
    return;
}




// ===== sym.get_cur_render_uid @ 0x080028bc (size 20) =====



uint sym.get_cur_render_uid(void)

{
    return _segment.ehdr;
}




// ===== sym.package_runtime_should_stop @ 0x080028d0 (size 28) =====



bool sym.package_runtime_should_stop(void)

{
    return _segment.ehdr == 0;
}




// ===== sym.migt_hook @ 0x080028ec (size 860) =====



//WARNING: Removing unreachable block (ram,0x08002a2c)

void sym.migt_hook(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t in_x4;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = fas_sched_clock();
    iVar6 = get_mi_task_struct(arg1);
    puVar2 = NULL;
    if (iVar6 != 0) {
        puVar2 = iVar6 + 0xe8;
    }
    if (puVar2 == NULL) {
        return;
    }
    if (_segment.ehdr < 2) {
        return;
    }
    if (_segment.ehdr == 3) {
        iVar6 = get_scale_exec_time();
        sym.game_load_update(arg1,iVar6,arg2 & 0xffffffff);
    }
    if (puVar2[-0x37] >> 4 < 0x271) {
        return;
    }
    uVar3 = _segment.ehdr;
    if (puVar2[-0x37] != _segment.ehdr) {
        return;
    }
    uVar8 = 0;
    if (_segment.ehdr <= uVar5) {
        uVar8 = uVar5 - _segment.ehdr;
    }
    if (_segment.ehdr == *puVar2) {
        iVar6 = *(puVar2 + 0xc);
        uVar8 = _segment.ehdr;
        goto code_r0x08002b20;
    }
    if (_segment.ehdr == 0) {
        _segment.ehdr = 0;
        if (in_x4 <= uVar8) goto code_r0x08002a68;
code_r0x080029f4:
        uVar5 = *(puVar2 + 0xc) + (in_x4 - uVar8);
        *(puVar2 + 0xc) = uVar5;
        in_x4 = uVar8;
    }
    else {
        if (uVar8 < in_x4) goto code_r0x080029f4;
code_r0x08002a68:
        uVar5 = *(puVar2 + 0xc);
    }
    if (_segment.ehdr < uVar5) {
        if (_segment.ehdr == 1) {
            *(puVar2 + 0xe) = *(puVar2 + 0xe) + uVar5 >> 1;
        }
        else if (_segment.ehdr == 0) {
            *(puVar2 + 0xe) = *(puVar2 + 0xe) + 1;
        }
        else if (*(puVar2 + 0xe) < uVar5) {
            *(puVar2 + 0xe) = uVar5;
        }
    }
    if (_segment.ehdr == 0) {
        uVar7 = 0;
        if (uVar3 != 0) {
            uVar7 = 10000 / uVar3;
        }
        _segment.ehdr = uVar7;
    }
    uVar8 = _segment.ehdr;
    uVar5 = (_segment.ehdr * uVar5) / 1000000000;
    uVar7 = 0;
    do {
        uVar1 = uVar7 + 1;
        puVar2[uVar7 + 0x1a] = puVar2[uVar7 + 0x1a] + 1;
        uVar7 = uVar1;
    } while (uVar1 <= uVar5 + ((uVar5 & 0xffffffff) / 10) * -10);
    iVar6 = 0;
    *puVar2 = uVar3;
code_r0x08002b20:
    *(puVar2 + 0xc) = in_x4 + iVar6;
    if (uVar8 == 0) {
        uVar3 = 0;
        if (_segment.ehdr != 0) {
            uVar3 = 10000 / _segment.ehdr;
        }
        uVar8 = uVar3;
        _segment.ehdr = uVar8;
    }
    uVar5 = (uVar8 * (in_x4 + iVar6)) / 1000000000;
    if ((((_segment.ehdr * (puVar2 + 0x1a)[uVar5 + ((uVar5 & 0xffffffff) / 10) * -10] < puVar2[0x1a]) &&
         ((obj.migt_boost_flag & 1) == 0)) && (iVar4 = sym.game_ip_task(arg1), iVar4 != 0)) &&
       (_segment.ehdr < *(puVar2 + 0xc))) {
        iVar4 = _raw_spin_trylock(obj.migt_lock);
        if (iVar4 != 0) {
            if ((obj.migt_boost_flag & 1) == 0) {
                obj.vtask_boost.flag = 0x1;
            }
            obj.migt_boost_flag = 0x1;
            _raw_spin_unlock(obj.migt_lock);
        }
        if (((obj.vtask_boost.flag == 0x1) && ((_segment.ehdr & 1) == 0)) &&
           (uVar5 = hrtimer_active(obj.vtask_timer), (uVar5 & 1) == 0)) {
            hrtimer_start_range_ns(obj.vtask_timer,0,0,1);
        }
    }
    return;
}




// ===== sym.migt_enable @ 0x08002c48 (size 20) =====



uint sym.migt_enable(void)

{
    return _segment.ehdr;
}




// ===== sym.get_migt_thresh @ 0x08002c5c (size 20) =====



uint sym.get_migt_thresh(void)

{
    return _segment.ehdr;
}




// ===== sym.init_module @ 0x08002c70 (size 1464) =====



int sym.init_module(void)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t extraout_x8_01;
    uint64_t extraout_x8_02;
    ulong *in_x18;
    uint64_t uVar5;
    ulong *unaff_x20;
    code *pcVar6;
    uint32_t *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.migt_sched_init();
    sym.game_load_init();
    _segment.ehdr = _seq_lseek;
    uVar1 = cpumask_next(0xffffffff,__cpu_present_mask);
    *unaff_x20 = extraout_x8;
    if (uVar1 < extraout_x8) {
        do {
            uVar5 = uVar1;
            iVar3 = cpufreq_cpu_get(uVar5);
            if (iVar3 == 0) {
                _printk(0x8001821,"migt_freq_qos_request_init_first",uVar5);
code_r0x08003100:
                uVar1 = cpumask_next(0xffffffff,__cpu_present_mask);
                ___cpu_present_mask = CONCAT44(_cpumask_next,extraout_w8_01);
                if (extraout_w8_01 <= uVar1) goto code_r0x08003198;
                goto code_r0x08003148;
            }
            if (0x1f < uVar1) goto code_r0x08003224;
            iVar2 = freq_qos_add_request(iVar3 + 0xa0,obj.qos_req_min + *(__per_cpu_offset + uVar5 * 8),1,0);
            if (iVar2 < 0) {
                uVar4 = 0x800135e;
code_r0x080030ec:
                _printk(uVar4,"migt_freq_qos_request_init_first",iVar2);
                cpufreq_cpu_put(iVar3);
                goto code_r0x08003100;
            }
            iVar2 = freq_qos_add_request(iVar3 + 0xa0,obj.qos_req_max + *(__per_cpu_offset + uVar1 * 8),2,0x7fffffff)
            ;
            if (iVar2 < 0) {
                uVar4 = 0x80012b1;
                goto code_r0x080030ec;
            }
            cpufreq_cpu_put(iVar3);
            uVar1 = cpumask_next(uVar1,__cpu_present_mask);
            ___cpu_present_mask = extraout_x8_00;
        } while (uVar1 < extraout_x8_00);
    }
    goto code_r0x08002d68;
    while( true ) {
        iVar3 = *(__per_cpu_offset + puVar7 * 8);
        if (((iVar3 != -0x800dff0) && (*(iVar3 + 0x800e020) != 0)) && (*(iVar3 + 0x800e020) < 0xfffffffffffff001)) {
            freq_qos_remove_request();
            iVar3 = *(__per_cpu_offset + puVar7 * 8);
        }
        if (((iVar3 != -0x800e038) && (*(iVar3 + 0x800e068) != 0)) && (*(iVar3 + 0x800e068) < 0xfffffffffffff001)) {
            freq_qos_remove_request();
        }
        uVar1 = cpumask_next(puVar7,__cpu_present_mask);
        *puVar7 = extraout_w8_02;
        if (extraout_w8_02 <= uVar1) break;
code_r0x08003148:
        puVar7 = uVar1;
        if (0x1f < uVar1) goto code_r0x08003224;
    }
code_r0x08003198:
    _printk(0x8001926,0x4ae);
    iVar2 = cpufreq_register_notifier(reloc.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt,1);
    if (iVar2 != 0) goto code_r0x080031c0;
code_r0x08002d68:
    hrtimer_init(obj.hrtimer,1,1);
    pcVar6 = sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt;
    *0x80004c8 = sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt;
    hrtimer_init(obj.vtask_timer,1,1);
    *0x8000478 = sym.do_boost_work.43230158a3451c0555eac76e849387b0.cfi_jt;
    _segment.ehdr = alloc_workqueue("migt_wq",0x10,0);
    if (_segment.ehdr == 0) {
        iVar2 = -0xe;
        _segment.ehdr = 0;
    }
    else {
        _segment.ehdr = proc_mkdir("migt",0);
        pcVar6 = segment.ehdr;
        if (_segment.ehdr == 0) {
            iVar2 = -0xe;
            _segment.ehdr = 0;
        }
        else {
            uVar5 = proc_create("show_exec_buckets",0x1b4,_segment.ehdr,obj.exec_buckets_fops);
            iVar3 = _segment.ehdr;
            _segment.ehdr = uVar5;
            sym.create_game_load_proc(iVar3);
            iVar2 = misc_register(obj.migt_boost_flag);
            if (iVar2 == 0) {
                _obj.migt_work = 0xfffffffe0;
                *0x8000508 = 0x8000508;
                *0x8000510 = 0x8000508;
                *0x8000518 = sym.do_migt.43230158a3451c0555eac76e849387b0.cfi_jt;
                init_timer_key(reloc.enable_pkg_monitor,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _obj.irq_boost_work = 0xfffffffe0;
                *0x8000428 = 0x8000428;
                *0x8000430 = 0x8000428;
                *0x8000438 = sym.do_migt.43230158a3451c0555eac76e849387b0.cfi_jt;
                _obj.migt_rem = 0xfffffffe0;
                *0x8000590 = 0x8000590;
                *0x8000598 = 0x8000590;
                *0x80005a0 = sym.do_migt_rem.43230158a3451c0555eac76e849387b0.cfi_jt;
                init_timer_key(0x80005b8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _obj.ceiling_work = 0xfffffffe0;
                *0x8000618 = 0x8000618;
                *0x8000620 = 0x8000618;
                *0x8000628 = sym.do_ceiling_limit.43230158a3451c0555eac76e849387b0.cfi_jt;
                init_timer_key(0x8000640,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _obj.ceiling_rem = 0xfffffffe0;
                *0x80006a0 = 0x80006a0;
                *0x80006a8 = 0x80006a0;
                *0x80006b0 = sym.do_ceiling_rem.43230158a3451c0555eac76e849387b0.cfi_jt;
                init_timer_key(0x80006c8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                _segment.ehdr = extraout_x8_01;
                if (uVar5 < extraout_x8_01) {
                    do {
                        if (0x1f < uVar5) goto code_r0x08003224;
                        iVar3 = *(__per_cpu_offset + (uVar5 & 0xffffffff) * 8);
                        *(obj.migt_info + iVar3) = uVar5;
                        *(iVar3 + 0x800dfe4) = 0xffffffff;
                        uVar5 = cpumask_next(uVar5,__cpu_possible_mask);
                        _segment.ehdr = extraout_x8_02;
                    } while (uVar5 < extraout_x8_02);
                }
                register_sched_load_update_hook(0,sym.migt_hook.cfi_jt);
                register_mi_find_energy_efficient_cpu(0,sym.find_energy_hook.43230158a3451c0555eac76e849387b0.cfi_jt);
                register_mi_walt_get_indicies(0,sym.walt_get_indicies_hook.43230158a3451c0555eac76e849387b0.cfi_jt);
                sym.frame_load_init(_segment.ehdr);
                return 0;
            }
            if (_segment.ehdr != 0) {
                if (_segment.ehdr != 0) {
                    proc_remove();
                }
                sym.delete_game_load_proc();
                proc_remove(_segment.ehdr);
            }
        }
        flush_workqueue(_segment.ehdr);
        destroy_workqueue(_segment.ehdr);
    }
    uVar1 = cpumask_next(0xffffffff,__cpu_present_mask);
    *pcVar6 = extraout_w8;
    if (uVar1 < extraout_w8) {
        do {
            puVar7 = uVar1;
            if (0x1f < uVar1) {
code_r0x08003224:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8003228);
                (*pcVar6)();
            }
            iVar3 = *(__per_cpu_offset + puVar7 * 8);
            if (((iVar3 != -0x800dff0) && (*(iVar3 + 0x800e020) != 0)) && (*(iVar3 + 0x800e020) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
                iVar3 = *(__per_cpu_offset + puVar7 * 8);
            }
            if (((iVar3 != -0x800e038) && (*(iVar3 + 0x800e068) != 0)) && (*(iVar3 + 0x800e068) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
            }
            uVar1 = cpumask_next(puVar7,__cpu_present_mask);
            *puVar7 = extraout_w8_00;
        } while (uVar1 < extraout_w8_00);
    }
code_r0x080031c0:
    iVar3 = cpufreq_unregister_notifier(reloc.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt,1);
    iVar3 = sym.game_load_exit(iVar3);
    sym.migt_sched_exit(iVar3);
    return iVar2;
}




// ===== sym.set_migt_freq @ 0x08003228 (size 680) =====



int sym.set_migt_freq(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint *puVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar12 = *arg2;
    uStack_70 = 0;
    iVar2 = strlen(uVar12);
    strnstr(uVar12,"migt_freq",iVar2);
    iVar7 = strnstr(*arg2,"migt_ceiling_freq",iVar2);
    uVar6 = 0xffffffff;
    iVar8 = arg1;
    do {
        iVar8 = strpbrk(iVar8 + 1,0x800148d);
        uVar6 = uVar6 + 1;
    } while (iVar8 != 0);
    if (uVar6 == 0) {
        iVar2 = sscanf(arg1,0x80010d3,&uStack_70 + 4);
        if (iVar2 != 1) goto code_r0x08003424;
        uVar11 = uStack_70._4_4_;
        *arg1 = 0x800148d;
        uVar9 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        if (uVar9 < 0x800148d) {
            do {
                if (iVar7 == 0) {
                    if (0x1f < uVar9) goto code_r0x080034c8;
                    puVar10 = *(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + 0x800dfe0;
                }
                else {
                    if (0x1f < uVar9) goto code_r0x080034c8;
                    puVar10 = *(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + 0x800dfe8;
                }
                *puVar10 = uVar11;
                uVar9 = cpumask_next(uVar9,__cpu_possible_mask);
                arg1 = __cpu_possible_mask;
            } while (uVar9 < 0x800148d);
        }
    }
    else {
        if ((uVar6 & 1) == 0) {
code_r0x08003424:
            iVar2 = -0x16;
            goto code_r0x0800348c;
        }
        if (0 < uVar6) {
            iVar2 = 0;
            do {
                iVar3 = sscanf(arg1,"%u:%u",&uStack_70,&uStack_70 + 4);
                if (iVar3 != 2) goto code_r0x08003424;
                *arg1 = 2;
                uVar5 = uStack_70;
                uVar4 = __sw_hweight64();
                if (uVar4 <= uVar5) goto code_r0x08003424;
                if (iVar7 == 0) {
                    if (0x1f < uStack_70) goto code_r0x080034c8;
                    *(*(__per_cpu_offset + (uStack_70 & 0xffffffff) * 8) + 0x800dfe0) = uStack_70._4_4_;
                }
                else {
                    if (0x1f < uStack_70) goto code_r0x080034c8;
                    *(*(__per_cpu_offset + (uStack_70 & 0xffffffff) * 8) + 0x800dfe8) = uStack_70._4_4_;
                }
                arg1 = strchr(arg1,0x20);
                iVar2 = iVar2 + 2;
                arg1 = arg1 + 1;
            } while (iVar2 < uVar6);
        }
    }
    uVar11 = 0x8053000;
    uVar9 = 0xffffffff;
    uVar6 = arg1;
    *arg1 = uVar6;
    do {
        uVar9 = cpumask_next(uVar11,uVar9,__cpu_possible_mask);
        uVar5 = uVar9;
        if (uVar6 <= uVar5) break;
        if (0x1f < uVar5) {
code_r0x080034c8:
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80034cc);
            (*pcVar1)();
        }
        uVar11 = 0;
    } while (*(*(__per_cpu_offset + (uVar9 & 0xffffffff) * 8) + 0x800dfe0) == 0);
    obj.migt_enabled = uVar5 < uVar6;
    iVar2 = 0;
code_r0x0800348c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar2;
    }
    auVar13 = __stack_chk_fail(iVar2);
    *extraout_x18 = sym.get_migt_freq;
    uVar12 = *auVar13._8_8_;
    iVar2 = strlen(uVar12);
    strnstr(uVar12,"migt_freq",iVar2);
    puVar10 = strnstr(*auVar13._8_8_,"migt_ceiling_freq",iVar2);
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *puVar10 = 0x8053000;
    if (uVar6 < 0x8053000) {
        iVar2 = 0;
        do {
            uVar9 = uVar6;
            if (0x1f < uVar6) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003638);
                (*pcVar1)();
            }
            iVar8 = 8;
            if (puVar10 != NULL) {
                iVar8 = 0x10;
            }
            iVar3 = snprintf(auVar13._0_8_ + iVar2,0x1000 - iVar2,"%d:%u ",uVar9,
                             *(obj.migt_info + iVar8 + *(__per_cpu_offset + uVar9 * 8)));
            iVar2 = iVar3 + iVar2;
            uVar6 = cpumask_next(uVar9,__cpu_possible_mask);
            *puVar10 = 0x8053000;
        } while (uVar6 < 0x8053000);
    }
    else {
        iVar2 = 0;
    }
    iVar3 = snprintf(auVar13._0_8_ + iVar2,0x1000 - iVar2,0x8001721);
    return iVar3 + iVar2;
}




// ===== sym.get_migt_freq @ 0x080034d0 (size 360) =====



int sym.get_migt_freq(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *arg2;
    iVar3 = strlen(uVar7);
    strnstr(uVar7,"migt_freq",iVar3);
    puVar6 = strnstr(*arg2,"migt_ceiling_freq",iVar3);
    uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *puVar6 = 0x8053000;
    if (uVar4 < 0x8053000) {
        iVar3 = 0;
        do {
            uVar8 = uVar4;
            if (0x1f < uVar4) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8003638);
                (*pcVar2)();
            }
            iVar1 = 8;
            if (puVar6 != NULL) {
                iVar1 = 0x10;
            }
            iVar5 = snprintf(arg1 + iVar3,0x1000 - iVar3,"%d:%u ",uVar8,
                             *(obj.migt_info + iVar1 + *(__per_cpu_offset + uVar8 * 8)));
            iVar3 = iVar5 + iVar3;
            uVar4 = cpumask_next(uVar8,__cpu_possible_mask);
            *puVar6 = 0x8053000;
        } while (uVar4 < 0x8053000);
    }
    else {
        iVar3 = 0;
    }
    iVar5 = snprintf(arg1 + iVar3,0x1000 - iVar3,0x8001721);
    return iVar5 + iVar3;
}




// ===== sym.do_boost_work @ 0x08003638 (size 72) =====



ulong sym.do_boost_work(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr & 1) == 0) {
        queue_work_on(0x20,_segment.ehdr,obj.irq_boost_work);
    }
    return 0;
}




// ===== sym.do_migt @ 0x08003680 (size 328) =====



void sym.do_migt(void)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint32_t *unaff_x20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = cancel_delayed_work_sync(obj.migt_rem);
    if (_segment.ehdr != 0) {
        iVar6 = ktime_get();
        _printk(0x80016ad,0x1eb,iVar6 / 1000);
    }
    _segment.ehdr = 1;
    if ((uVar4 & 1) == 0) {
        core_ctl_set_boost(1);
    }
    sym.glk_maxfreq_break(1);
    *unaff_x20 = unaff_x20;
    uVar4 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
    uVar3 = uVar4;
    while( true ) {
        if (unaff_x20 <= uVar3) {
            sym.update_policy_online(0);
            uVar1 = CONCAT44(*0x8000004,_segment.ehdr);
            uVar5 = __msecs_to_jiffies(_segment.ehdr);
            queue_delayed_work_on(0x20,uVar1,obj.migt_rem,uVar5);
            return;
        }
        if (0x1f < uVar4) break;
        *(*(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + 0x800dfdc) =
             *(*(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + 0x800dfe0);
        uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
        uVar3 = uVar4;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80037c8);
    (*pcVar2)();
}




// ===== sym.do_migt_rem @ 0x080037c8 (size 460) =====



void sym.do_migt_rem(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t unaff_w21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = _segment.ehdr + -1;
    if (_segment.ehdr < 1) {
        *0x80048c8 = 0;
        if (_segment.ehdr != 0) {
            iVar7 = ktime_get();
            _printk(0x800195e,0x1b9,iVar7 / 1000);
        }
        sym.glk_maxfreq_break(0);
        _seq_lseek = unaff_w21;
        uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
        uVar3 = uVar6;
        while (uVar3 < unaff_w21) {
            if (0x1f < uVar6) goto code_r0x08003990;
            *(*(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + 0x800dfdc) = 0;
            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
            uVar3 = uVar6;
        }
        iVar4 = sym.update_policy_online(1);
        core_ctl_set_boost(0);
        if (iVar4 != 0) {
            _seq_lseek = 0x8053000;
            uVar6 = 0xffffffff;
            do {
                uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
                if (0x8052fff < uVar6) goto code_r0x080038c8;
                if (0x1f < uVar6) {
code_r0x08003990:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8003994);
                    (*pcVar2)();
                }
            } while (*(*(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + 0x800dff8) != 0);
            core_ctl_set_boost(1);
            queue_delayed_work_on(0x20,CONCAT44(*0x8000004,_segment.ehdr),obj.migt_rem,0xea6);
        }
code_r0x080038c8:
        _segment.ehdr = 0;
    }
    else {
        uVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar5 = __msecs_to_jiffies(_segment.ehdr);
        queue_delayed_work_on(0x20,uVar1,obj.migt_rem,uVar5);
        *0x80048c8 = 1;
    }
    return;
}




// ===== sym.do_ceiling_limit @ 0x08003994 (size 528) =====



//WARNING: Removing unreachable block (ram,0x08003ae4)
//WARNING: Removing unreachable block (ram,0x08003aec)
//WARNING: Removing unreachable block (ram,0x08003ab4)
//WARNING: Removing unreachable block (ram,0x08003abc)
//WARNING: Removing unreachable block (ram,0x08003a84)
//WARNING: Removing unreachable block (ram,0x08003a8c)
//WARNING: Removing unreachable block (ram,0x08003a54)
//WARNING: Removing unreachable block (ram,0x08003a5c)
//WARNING: Removing unreachable block (ram,0x08003a24)
//WARNING: Removing unreachable block (ram,0x08003a2c)
//WARNING: Removing unreachable block (ram,0x08003a3c)
//WARNING: Removing unreachable block (ram,0x08003a44)
//WARNING: Removing unreachable block (ram,0x08003a6c)
//WARNING: Removing unreachable block (ram,0x08003a74)
//WARNING: Removing unreachable block (ram,0x08003a9c)
//WARNING: Removing unreachable block (ram,0x08003aa4)
//WARNING: Removing unreachable block (ram,0x08003acc)
//WARNING: Removing unreachable block (ram,0x08003ad4)
//WARNING: Removing unreachable block (ram,0x08003afc)

void sym.do_ceiling_limit(void)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint32_t *unaff_x20;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.ceiling_freq_limit_work & 1) == 0) {
        if (_segment.ehdr < 1) {
            return;
        }
        obj.ceiling_freq_limit_work = 0x1;
    }
    if (_segment.ehdr != 0) {
        iVar3 = ktime_get();
        _printk(0x8000ec8,0x2ab,iVar3 / 1000);
    }
    if (_segment.ehdr != 0) {
        *unaff_x20 = unaff_x20;
        uVar4 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        uVar2 = uVar4;
        while (uVar2 < unaff_x20) {
            if (0x1f < uVar4) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003ba4);
                (*pcVar1)();
            }
            *(*(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + 0x800dfe4) =
                 *(*(__per_cpu_offset + (uVar4 & 0xffffffff) * 8) + 0x800dfe8);
            uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
            uVar2 = uVar4;
        }
        sym.update_policy_online(0);
    }
    return;
}




// ===== sym.do_ceiling_rem @ 0x08003ba4 (size 252) =====



void sym.do_ceiling_rem(void)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint32_t unaff_w21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.ceiling_freq_limit_work == 0x1) {
        if (_segment.ehdr == 1) {
            iVar4 = ktime_get();
            _printk(0x8001661,0x262,iVar4 / 1000);
        }
        _segment.ehdr = unaff_w21;
        uVar3 = cpumask_next(seq_lseek,0xffffffff,__cpu_possible_mask);
        uVar2 = uVar3;
        while (uVar2 < unaff_w21) {
            if (0x1f < uVar3) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8003ca0);
                (*pcVar1)();
            }
            *(*(__per_cpu_offset + (uVar3 & 0xffffffff) * 8) + 0x800dfe4) = 0xffffffff;
            uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
            uVar2 = uVar3;
        }
        sym.update_policy_online(1);
        obj.ceiling_freq_limit_work = 0x0;
    }
    return;
}




// ===== sym.find_energy_hook @ 0x08003ca0 (size 88) =====



void sym.find_energy_hook(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.wake_render();
    if (*arg2 == '\0') {
        iVar2 = sym.game_vip_task(arg1);
        bVar1 = iVar2 != 0;
    }
    else {
        bVar1 = true;
    }
    *arg2 = bVar1;
    return;
}




// ===== sym.walt_get_indicies_hook @ 0x08003cf8 (size 160) =====



void sym.walt_get_indicies_hook(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uchar *in_x4;
    uchar uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.game_super_task();
    if (iVar1 == 0) {
        iVar1 = sym.game_vip_task(arg1);
        if (iVar1 == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = 1;
            *arg2 = 1;
        }
    }
    else if (_segment.ehdr == 0) {
        uVar2 = 1;
        *arg2 = 1;
        *arg3 = 1;
    }
    else {
        uVar2 = 1;
        *arg2 = arg4 + -1;
    }
    *in_x4 = uVar2;
    return;
}




// ===== sym.migt_freq_qos_init @ 0x08003d98 (size 568) =====



int sym.migt_freq_qos_init(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t in_x1;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    ulong *in_x18;
    uint32_t *unaff_x20;
    uint32_t *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x1 == 0) {
        uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
        *unaff_x20 = extraout_w8;
        if (uVar2 < extraout_w8) {
            do {
                puVar6 = uVar2;
                iVar4 = cpufreq_cpu_get(puVar6);
                if (iVar4 == 0) {
                    _printk(0x8001821,"migt_freq_qos_init",puVar6);
                    iVar3 = -0xb;
code_r0x08003f34:
                    uVar2 = cpumask_next(0xffffffff,__cpu_present_mask);
                    *puVar6 = extraout_w8_01;
                    if (extraout_w8_01 <= uVar2) {
                        return iVar3;
                    }
                    while (uVar7 = uVar2, uVar2 < 0x20) {
                        iVar4 = *(__per_cpu_offset + uVar7 * 8);
                        if (((iVar4 != -0x800dff0) && (*(iVar4 + 0x800e020) != 0)) &&
                           (*(iVar4 + 0x800e020) < 0xfffffffffffff001)) {
                            freq_qos_remove_request();
                            iVar4 = *(__per_cpu_offset + uVar7 * 8);
                        }
                        if (((iVar4 != -0x800e038) && (*(iVar4 + 0x800e068) != 0)) &&
                           (*(iVar4 + 0x800e068) < 0xfffffffffffff001)) {
                            freq_qos_remove_request();
                        }
                        uVar2 = cpumask_next(uVar7,__cpu_present_mask);
                        ___cpu_present_mask = extraout_w8_02;
                        if (extraout_w8_02 <= uVar2) {
                            return iVar3;
                        }
                    }
code_r0x08003fcc:
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8003fd0);
                    (*pcVar1)();
                }
                _segment.ehdr = _segment.ehdr & (*(iVar4 + 8) ^ 0xffffffff);
                if (0x1f < uVar2) goto code_r0x08003fcc;
                iVar3 = freq_qos_add_request(iVar4 + 0xa0,obj.qos_req_min + *(__per_cpu_offset + puVar6 * 8),1,0);
                if (iVar3 < 0) {
                    uVar5 = 0x800135e;
code_r0x08003f1c:
                    _printk(uVar5,"migt_freq_qos_init",iVar3);
                    cpufreq_cpu_put(iVar4);
                    goto code_r0x08003f34;
                }
                iVar3 = freq_qos_add_request
                                  (iVar4 + 0xa0,obj.qos_req_max + *(__per_cpu_offset + uVar2 * 8),2,0x7fffffff);
                if (iVar3 < 0) {
                    uVar5 = 0x80012b1;
                    goto code_r0x08003f1c;
                }
                cpufreq_cpu_put(iVar4);
                uVar2 = cpumask_next(uVar2,__cpu_present_mask);
                *puVar6 = extraout_w8_00;
            } while (uVar2 < extraout_w8_00);
        }
        if (_segment.ehdr == 0) {
            queue_work_on(0x20,_single_release,obj.finish_freq_qos_work);
        }
    }
    return 0;
}




// ===== sym.finish_freq_qos_workfn @ 0x08003fd0 (size 60) =====



void sym.finish_freq_qos_workfn(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpufreq_unregister_notifier(reloc.migt_freq_qos_init.43230158a3451c0555eac76e849387b0.cfi_jt,1);
    _printk(0x8001490);
    return;
}




// ===== sym.exec_buckets_open @ 0x0800400c (size 84) =====



void sym.exec_buckets_open(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = single_open(arg1,sym.exec_buckets_show.43230158a3451c0555eac76e849387b0.cfi_jt,0);
    if (iVar1 == 0) {
        *(*(arg1 + 0xd8) + 0x80) = show_traced_uid;
    }
    return;
}




// ===== sym.exec_buckets_show @ 0x08004060 (size 576) =====



ulong sym.exec_buckets_show(int64_t arg1)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong *puVar6;
    ulong uVar7;
    code *pcVar8;
    uint uVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = **(arg1 + 0x80);
    __rcu_read_lock();
    pcVar8 = init_task;
    while( true ) {
        iVar5 = *(pcVar8 + 0x4d0);
        pcVar8 = iVar5 + -0x4d0;
        if (pcVar8 == init_task) break;
        __rcu_read_lock();
        iVar2 = *(*(iVar5 + 0x2c0) + 4);
        __rcu_read_unlock();
        if (iVar2 == iVar1) {
            for (puVar10 = *(*(iVar5 + 800) + 0x10); *(iVar5 + 800) + 0x10 != puVar10; puVar10 = *puVar10) {
                puVar6 = puVar10 + -0xd3;
                iVar4 = get_mi_task_struct(puVar6);
                if ((iVar4 != 0) && (iVar4 != -0xe8)) {
                    seq_printf(arg1,"%5d,%16s buckests:{",*(puVar10 + -0x18),puVar10 + 0x22);
                    seq_printf(arg1," %8d",*(iVar4 + 0x150));
                    seq_printf(arg1," %8d",*(iVar4 + 0x154));
                    seq_printf(arg1," %8d",*(iVar4 + 0x158));
                    seq_printf(arg1," %8d",*(iVar4 + 0x15c));
                    seq_printf(arg1," %8d",*(iVar4 + 0x160));
                    seq_printf(arg1," %8d",*(iVar4 + 0x164));
                    seq_printf(arg1," %8d",*(iVar4 + 0x168));
                    seq_printf(arg1," %8d",*(iVar4 + 0x16c));
                    seq_printf(arg1," %8d",*(iVar4 + 0x170));
                    seq_printf(arg1," %8d",*(iVar4 + 0x174));
                    iVar2 = sym.game_super_task(puVar6);
                    uVar7 = 0x80015b3;
                    if (iVar2 == 0) {
                        iVar2 = sym.is_render_thread(puVar6);
                        uVar7 = 0x8000f3d;
                        if (iVar2 == 0) {
                            iVar2 = sym.game_vip_task(puVar6);
                            uVar7 = 0x80013a5;
                            if (iVar2 == 0) {
                                iVar2 = sym.game_ip_task(puVar6);
                                uVar7 = 0x8001723;
                                if (iVar2 != 0) {
                                    uVar7 = 0x8000ec4;
                                }
                            }
                        }
                    }
                    uVar3 = mi_vip_task(puVar6);
                    uVar9 = 0x76;
                    if ((uVar3 & 1) == 0) {
                        uVar9 = 99;
                    }
                    seq_printf(arg1,"  } %s %c\n",uVar7,uVar9);
                }
            }
        }
    }
    __rcu_read_unlock();
    return 0;
}




// ===== sym.migt_ioctl @ 0x080042b0 (size 2048) =====



//WARNING: Removing unreachable block (ram,0x08004654)
//WARNING: Removing unreachable block (ram,0x08004658)

ulong sym.migt_ioctl(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int iVar10;
    ulong *in_x18;
    uint32_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    if (_segment.ehdr != 0) {
        uVar2 = *(*(iVar7 + 0x798) + 4);
        iVar6 = ktime_get();
        _printk(0x8001855,uVar2,0x2e2,arg1 & 0xff,iVar6 / 1000);
    }
    uVar9 = _segment.ehdr;
    uVar1 = arg1 & 0xff;
    uVar5 = _segment.ehdr;
    if (uVar1 == 4) {
        obj.ceiling_enable = 0x1;
        uVar1 = _segment.ehdr;
        if (9 < _segment.ehdr) {
            uVar1 = 10;
        }
        if (_segment.ehdr == 0) {
            uVar11 = 0;
        }
        else {
            _printk("--------ceiling_user list--------\n");
            if (uVar5 < 1) {
                uVar11 = 0;
            }
            else {
                uVar11 = uVar1;
                if (uVar1 < 2) {
                    uVar11 = 1;
                }
                _printk(0x8001798,_segment.ehdr & 0xffffffff);
                if ((((((1 < uVar1) && (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 2)) &&
                      (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 3)) &&
                     ((_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 4 &&
                      (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 5)))) &&
                    ((_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 6 &&
                     ((_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 7 &&
                      (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 8)))))) &&
                   (_printk(0x8001798,_segment.ehdr & 0xffffffff), uVar11 != 9)) {
                    _printk(0x8001798,_segment.ehdr & 0xffffffff);
                }
                if (_segment.ehdr == uVar5) {
                    return 0;
                }
                if (1 < uVar1) {
                    if (_segment.ehdr == uVar5) {
                        return 0;
                    }
                    if (uVar11 != 2) {
                        if (_segment.ehdr == uVar5) {
                            return 0;
                        }
                        if (uVar11 != 3) {
                            if (_segment.ehdr == uVar5) {
                                return 0;
                            }
                            if (uVar11 != 4) {
                                if (_segment.ehdr == uVar5) {
                                    return 0;
                                }
                                if (uVar11 != 5) {
                                    if (_segment.ehdr == uVar5) {
                                        return 0;
                                    }
                                    if (uVar11 != 6) {
                                        if (_segment.ehdr == uVar5) {
                                            return 0;
                                        }
                                        if (uVar11 != 7) {
                                            if (_segment.ehdr == uVar5) {
                                                return 0;
                                            }
                                            if (uVar11 != 8) {
                                                if (_segment.ehdr == uVar5) {
                                                    return 0;
                                                }
                                                if ((uVar11 != 9) && (_segment.ehdr == uVar5)) {
                                                    return 0;
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
            if (_segment.ehdr != 0) {
                _printk("\nadd uid %d to ceiling users\n",uVar9 & 0xffffffff);
            }
            if (9 < uVar5) {
                iVar10 = uVar1 - 1;
                if (iVar10 < 1) {
                    if (uVar1 == 1) goto code_r0x08004920;
                }
                else {
                    _obj.ceiling_users = *0x800073c;
                    if ((((iVar10 == 1) || (*0x800073c = *0x8000740, iVar10 == 2)) ||
                        (*0x8000740 = *0x8000744, iVar10 == 3)) ||
                       ((((*0x8000744 = *0x8000748, iVar10 == 4 || (*0x8000748 = *0x800074c, iVar10 == 5)) ||
                         ((*0x800074c = *0x8000750, iVar10 == 6 ||
                          ((*0x8000750 = *0x8000754, iVar10 == 7 || (*0x8000754 = *0x8000758, iVar10 == 8)))))) ||
                        (*0x8000758 = *0x800075c, iVar10 == 9)))) {
code_r0x08004920:
                        *0x8000004 = _segment.ehdr >> 0x20;
                        _segment.ehdr = CONCAT44(*0x8000004,uVar5);
                        return 0;
                    }
                }
code_r0x08004918:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800491c);
                (*pcVar4)();
            }
            if (9 < uVar11) goto code_r0x08004918;
        }
        *(obj.ceiling_users + uVar11 * 4) = uVar5;
        _obj.game_ctl_root = _obj.game_ctl_root + 1;
    }
    else if (uVar1 == 3) {
        sym.update_render_info(iVar7,1);
    }
    else if (uVar1 == 1) {
        uVar1 = *(*(iVar7 + 0x798) + 4);
        if ((uVar1 != _segment.ehdr) || (uVar5 = get_foreground_uid(), uVar1 != uVar5)) {
            if (obj.ceiling_freq_limit_work == 0x1) {
                cancel_delayed_work_sync(obj.ceiling_rem);
                uVar9 = _segment.ehdr;
                _segment.ehdr = ___cpu_online_mask;
                queue_delayed_work_on(0x20,uVar9,obj.ceiling_rem,1);
            }
            sym.reset_render_info(0);
            iVar6 = sym.reset_render_info(1);
            iVar10 = _segment.ehdr;
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            if (iVar10 == 3) {
                iVar6 = sym.game_load_reset(iVar6);
                iVar10 = _segment.ehdr;
            }
            if (iVar10 == 2) {
                sym.frame_load_reset(iVar6);
            }
            _segment.ehdr = CONCAT44(_segment.ehdr >> 0x20,1);
            *uVar1 = uVar1;
            set_foreground_app(uVar1);
        }
        sym.update_render_info(iVar7,0);
        sym.frame_load_history_update(uVar1);
        if ((obj.migt_enabled != 0x0) && (iVar10 = _segment.ehdr, _segment.ehdr != 0)) {
            iVar6 = get_mi_task_struct(iVar7);
            if (iVar6 != 0) {
                *(iVar6 + 0x198) = ___cpu_online_mask;
            }
            uVar1 = _segment.ehdr + 1;
            if ((_segment.ehdr < uVar1) && (1 < uVar1)) {
                uVar5 = 0;
                if (uVar1 != 0) {
                    uVar5 = uVar1 / uVar1;
                }
                if ((uVar1 == uVar5 * uVar1) || (*(iVar7 + 0x5d8) != uVar1)) {
                    _segment.ehdr = 1;
                    iVar3 = _segment.ehdr;
                    _segment.ehdr = 1;
                    if ((*(iVar7 + 0x5d8) == uVar1) || (_segment.ehdr = iVar3, _printk(0x8000f41), _segment.ehdr != 0)
                       ) {
                        sym.add_work_to_migt(*(*(iVar7 + 0x798) + 4));
                    }
                }
            }
            _segment.ehdr = CONCAT44(*0x8000004,*(iVar7 + 0x5d8));
            _segment.ehdr = fas_sched_clock();
            uVar9 = ___cpu_online_mask;
            obj.migt_boost_flag = 0x0;
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            if ((obj.ceiling_freq_limit_work == 0x1) && (_segment.ehdr - ___cpu_online_mask < 0)) {
                iVar7 = __msecs_to_jiffies(0);
                _segment.ehdr = iVar7 + uVar9;
                cancel_delayed_work_sync(obj.ceiling_rem);
                uVar9 = _segment.ehdr;
                uVar8 = __msecs_to_jiffies(_segment.ehdr & 0xffffffff);
                queue_delayed_work_on(0x20,uVar9,obj.ceiling_rem,uVar8);
            }
    //switch table (3 cases) at 0x8000b40
            switch(_segment.ehdr & 0xffffffff) {
            case 0:
            case 2:
                break;
            case 3:
                sym.game_load_history_update(_segment.ehdr & 0xffffffff);
                if (obj.ceiling_enable == 0x1) {
                    queue_delayed_work_on(0x20,_segment.ehdr,obj.ceiling_work,1);
                }
                iVar10 = _segment.ehdr + (_segment.ehdr >> 1);
            case 1:
                if (_segment.ehdr == 0) {
                    cancel_delayed_work_sync(obj.migt_work);
                    uVar9 = _segment.ehdr;
                    uVar8 = __msecs_to_jiffies(iVar10);
                    queue_delayed_work_on(0x20,uVar9,obj.migt_work,uVar8);
                }
                else {
                    uVar9 = hrtimer_active(obj.hrtimer);
                    if ((uVar9 & 1) != 0) {
                        hrtimer_cancel(obj.hrtimer);
                    }
                    hrtimer_start_range_ns(obj.hrtimer,iVar10 * 1000000,0,1);
                }
                break;
            default:
                _printk(0x8001747);
            }
        }
    }
    return 0;
}




// ===== sym.migt_mmap @ 0x08004ab0 (size 16) =====



ulong sym.migt_mmap(int64_t arg1)

{
    return 0;
}




// ===== sym.migt_open @ 0x08004ac0 (size 16) =====



ulong sym.migt_open(int64_t arg1)

{
    return 0;
}




// ===== sym.migt_release @ 0x08004ad0 (size 16) =====



ulong sym.migt_release(int64_t arg1)

{
    return 0;
}




// ===== sym.update_policy_online @ 0x08004ae0 (size 568) =====



uint32_t sym.update_policy_online(int64_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    uint uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int iVar7;
    uint64_t uVar8;
    code *pcVar9;
    uint32_t uVar10;
    code *pcVar11;
    ulong *in_x18;
    uint64_t uVar12;
    uint64_t unaff_x22;
    uint32_t unaff_w24;
    int iVar13;
    ulong unaff_x30;
    uint32_t uStack_68;
    
    *in_x18 = unaff_x30;
    cpus_read_lock();
    iVar13 = 0;
    uVar12 = 0xffffffff;
    uStack_68 = 0;
    do {
        pcVar9 = seq_lseek;
        ___cpu_possible_mask = unaff_w24;
        do {
            uVar8 = cpumask_next(pcVar9,uVar12,__cpu_possible_mask);
            uVar6 = uVar8;
            if (unaff_w24 <= uVar6) goto code_r0x08004ccc;
            uVar12 = uVar8 & 0xffffffff;
            if ((*(__cpu_online_mask + (uVar6 >> 6) * 8) >> (uVar8 & 0x3f) & 1) == 0) {
                uStack_68 = 1;
            }
            if (0x1f < uVar6) goto code_r0x08004d14;
            iVar5 = (uVar8 & 0xffffffff) * 0x30;
            pcVar9 = uVar8 & 0xffffffff;
            pcVar2 = _raw_spin_unlock + iVar5;
            if (((unaff_x22 ^ 0xffffffff) & *(_raw_spin_unlock + iVar5)) != 0) {
                pcVar2 = __cpu_online_mask;
            }
            pcVar11 = pcVar2;
            if ((*(get_mi_task_struct + iVar5) != -1) &&
               (pcVar11 = hrtimer_start_range_ns + pcVar9 * 0x30,
               (*(hrtimer_start_range_ns + pcVar9 * 0x30) & (*pcVar2 ^ 0xffffffff)) != 0)) {
                pcVar11 = pcVar2;
            }
            uVar1 = unaff_x22 & *pcVar11;
            uVar4 = (uVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar1 & 0x5555555555555555) << 1;
            uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            uVar10 = 0x20;
            if (uVar1 != 0) {
                uVar10 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
            }
        } while (uVar6 != uVar10);
        if (_segment.ehdr - 2U < 2) {
            if (iVar13 != 0) goto code_r0x08004c20;
code_r0x08004c18:
            if ((arg1 & 1U) != 0) goto code_r0x08004c20;
        }
        else {
            if ((_segment.ehdr != 1) || (iVar13 != 1)) goto code_r0x08004c18;
code_r0x08004c20:
            unaff_w24 = *(*(__per_cpu_offset + pcVar9 * 8) + 0x800dfdc);
            uVar3 = *(*(__per_cpu_offset + pcVar9 * 8) + 0x800dfe4);
            uVar8 = cpufreq_cpu_get(uVar8 & 0xffffffff);
            if (uVar8 != 0) {
                if (0x1f < *(uVar8 + 0x1c)) {
code_r0x08004d14:
    //WARNING: Does not return
                    pcVar9 = SoftwareBreakpoint(0x5512,0x8004d18);
                    (*pcVar9)();
                }
                iVar7 = freq_qos_update_request(obj.qos_req_min + *(__per_cpu_offset + *(uVar8 + 0x1c) * 8),unaff_w24);
                if (iVar7 < 0) {
code_r0x08004d04:
                    cpufreq_cpu_put(uVar8);
                    uStack_68 = 1;
code_r0x08004ccc:
                    cpus_read_unlock();
                    return uStack_68 | (arg1 ^ 0xffffffff) & 1;
                }
                if (0x1f < *(uVar8 + 0x1c)) goto code_r0x08004d14;
                iVar7 = freq_qos_update_request(obj.qos_req_max + *(__per_cpu_offset + *(uVar8 + 0x1c) * 8),uVar3);
                if (iVar7 < 0) goto code_r0x08004d04;
                cpufreq_cpu_put(uVar8);
                unaff_x22 = uVar8;
            }
        }
        iVar13 = iVar13 + 1;
    } while( true );
}




// ===== sym.__cfi_check_fail @ 0x08004d18 (size 88) =====



//WARNING: Switch with 1 destination removed at 0x08004d5c

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
    //switch table (4 cases) at 0x8000b50
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004d70);
    (*pcVar1)();
}




// ===== sym.get_gt_task @ 0x08004d70 (size 48) =====



int64_t sym.get_gt_task(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    iVar1 = 0;
    if (iVar2 != 0) {
        iVar1 = iVar2 + 0xe8;
    }
    return iVar1;
}




// ===== sym.add_work_to_migt @ 0x08004da0 (size 140) =====



void sym.add_work_to_migt(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_obj.migt_has_work_todo == 0) && (_obj.migt_init_sucess != 0)) {
        _segment.ehdr = 1;
        wake_up_process(CONCAT44(*0x8000004,1));
    }
    else if (_segment.ehdr != 0) {
        _printk(0x8001992,"add_work_to_migt",0x67);
    }
    return;
}




// ===== sym.reset_render_info @ 0x08004e34 (size 300) =====



void sym.reset_render_info(uint32_t arg1)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < arg1) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8004f60);
        (*pcVar3)();
    }
    uVar4 = arg1;
    uVar5 = uVar4 * 0x40;
    pcVar3 = obj.render_info + uVar5;
    _raw_spin_lock(uVar5 + 0x80007c4);
    *pcVar3 = *pcVar3 + 1;
    DataMemoryBarrier(2,2);
    if ((uVar4 << 6 | 8) < 0x81) {
        iVar1 = uVar4 * 0x40;
        *(iVar1 + 0x80007c8) = 0;
        if (((uVar5 | 0x10) < 0x81) && (*(iVar1 + 0x80007d0) = 0, (uVar5 | 0xc) < 0x81)) {
            iVar2 = *(iVar1 + 0x80007cc);
            *(iVar1 + 0x80007cc) = -1;
            *(uVar4 * 0x40 + 0x80007d8) = 0;
            *(obj.game_load_table + uVar4 * 0x40) = 0;
            DataMemoryBarrier(2,2);
            *pcVar3 = *pcVar3 + 1;
            _raw_spin_unlock(uVar5 + 0x80007c4);
            if (0 < iVar2) {
                __rcu_read_lock();
                return;
            }
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8004f5c);
    (*pcVar3)();
}




// ===== obj.frame_load_history @ 0x08004f40 (size 24) =====



void obj.frame_load_history(void)

{
    return;
}




// ===== sym.clean_render_flag @ 0x08004f60 (size 104) =====



void sym.clean_render_flag(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    get_mi_task_struct(arg1,arg2);
    return;
}




// ===== sym.update_render_info @ 0x08004fc8 (size 396) =====



void sym.update_render_info(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uchar *puVar2;
    int iVar3;
    code *pcVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < arg2) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8005150);
        (*pcVar4)();
    }
    uVar5 = arg2;
    uVar6 = uVar5 * 0x40;
    pcVar4 = obj.render_info + uVar6;
    _raw_spin_lock(uVar6 + 0x80007c4);
    *pcVar4 = *pcVar4 + 1;
    DataMemoryBarrier(2,2);
    if ((uVar5 << 6 | 0xc) < 0x81) {
        if (*(uVar6 + 0x80007cc) == *(arg1 + 0x5d8)) {
            DataMemoryBarrier(2,2);
            *pcVar4 = *pcVar4 + 1;
            _raw_spin_unlock(uVar6 + 0x80007c4);
            return;
        }
        if ((uVar6 | 8) < 0x81) {
            puVar2 = uVar5 * 0x40 + 0x80007c8;
            *puVar2 = 1;
            sym.set_render_flag(arg1,arg2);
            *puVar2 = 1;
            if ((uVar6 | 0x10) < 0x81) {
                iVar1 = uVar5 * 0x40;
                *(iVar1 + 0x80007d0) = ___cpu_online_mask;
                iVar3 = *(arg1 + 0x5d8);
                *(iVar1 + 0x80007d8) = 0;
                *(obj.game_load_table + iVar1) = 0;
                *(uVar6 + 0x80007cc) = iVar3;
                strlen(arg1 + 0x7a8);
                return;
            }
        }
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(1,0x8005154);
    (*pcVar4)();
}




// ===== sym.set_render_flag @ 0x08005154 (size 104) =====



void sym.set_render_flag(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = get_mi_task_struct();
    if ((iVar1 != 0) && (iVar1 != -0xe8)) {
        *(iVar1 + 0xec) = *(iVar1 + 0xec) | 1 << (arg2 + 4U & 0x1f);
    }
    iVar1 = get_mi_task_struct(arg1);
    if (iVar1 != 0) {
        mi_set_fas_req();
    }
    return;
}




// ===== sym.is_frender_sibling @ 0x080051bc (size 152) =====



ulong sym.is_frender_sibling(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8000848 != '\0') {
        iVar1 = strlen(0x8000858);
        uVar2 = strncmp(0x8000858,arg1 + 0x7a8,iVar1);
        return uVar2;
    }
    if (*0x8000888 != '\0') {
        iVar1 = strlen(0x8000898);
        iVar1 = strncmp(0x8000898,arg1 + 0x7a8,iVar1);
        if (iVar1 == 0) {
            return 1;
        }
    }
    return 0;
}




// ===== sym.is_render_thread @ 0x08005254 (size 64) =====



void sym.is_render_thread(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    get_mi_task_struct();
    return;
}




// ===== sym.trigger_ceiling_limit @ 0x08005294 (size 12) =====



void sym.trigger_ceiling_limit(void)

{
    return;
}




// ===== sym.migt_sched_init @ 0x080052a0 (size 248) =====



ulong sym.migt_sched_init(void)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = kthread_create_on_node
                      (sym.migt_hardwork.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt,obj.g_work,0xffffffff,"migt_thread")
    ;
    if ((uVar2 < 0xfffffffffffff001) && (wake_up_process(uVar2), uVar2 != 0)) {
        _obj.render_info = 0;
        _segment.ehdr = uVar2;
        sym.reset_render_info(0);
        *0x8000800 = 0;
        sym.reset_render_info(1);
        _printk(0x8001609,"migt_sched_init");
        _segment.ehdr = CONCAT44(*0x8000004,1);
        if (_segment.ehdr != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8005398);
            (*pcVar1)();
        }
        _segment.ehdr = register_sysctl_table(obj.migt_ctl_root);
        uVar3 = 0;
    }
    else {
        _segment.ehdr = uVar2;
        _printk(0x800106d,"migt_sched_init");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}




// ===== sym.migt_hardwork @ 0x0800539c (size 160) =====



ulong sym.migt_hardwork(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    do {
        *(iVar1 + 0x28) = 1;
        DataMemoryBarrier(2,3);
        if (_obj.migt_has_work_todo == 0) {
            schedule();
            uVar2 = kthread_should_stop();
            if ((uVar2 & 1) != 0) {
                _printk(0x800116d);
                return 0;
            }
        }
        *(iVar1 + 0x28) = 0;
        DataMemoryBarrier(2,3);
        if (*arg1 != 0) {
            sym.mark_viptask(*arg1);
            *arg1 = 0;
        }
        _segment.ehdr = 0;
    } while( true );
}




// ===== sym.migt_sched_exit @ 0x08005440 (size 108) =====



//WARNING: Removing unreachable block (ram,0x08005478)
//WARNING: Removing unreachable block (ram,0x08005480)

void sym.migt_sched_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = *0x8000004 << 0x20;
    unregister_sysctl_table(_segment.ehdr);
    _segment.ehdr = 0;
    _printk(0x80010e1,"migt_sched_exit");
    return;
}




// ===== sym.game_task @ 0x080054ac (size 100) =====



bool sym.game_task(int64_t arg1)

{
    int iVar1;
    bool bVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        bVar2 = false;
    }
    else {
        __rcu_read_lock();
        iVar1 = *(*(arg1 + 0x790) + 4);
        __rcu_read_unlock();
        bVar2 = iVar1 == _segment.ehdr;
    }
    return bVar2;
}




// ===== sym.game_ip_task @ 0x08005514 (size 76) =====



uint32_t sym.game_ip_task(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    uVar1 = 0;
    if (((iVar2 != 0) && (iVar2 != -0xe8)) && (_segment.ehdr != 0)) {
        uVar1 = *(iVar2 + 0xec) & 0x7c;
    }
    return uVar1;
}




// ===== sym.game_vip_task @ 0x08005560 (size 76) =====



uint32_t sym.game_vip_task(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    uVar1 = 0;
    if (((iVar2 != 0) && (iVar2 != -0xe8)) && (_segment.ehdr != 0)) {
        uVar1 = *(iVar2 + 0xec) & 0x78;
    }
    return uVar1;
}




// ===== sym.game_super_task @ 0x080055ac (size 108) =====



uint32_t sym.game_super_task(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    uVar1 = 0;
    if (((iVar2 != 0) && (iVar2 != -0xe8)) && (_segment.ehdr != 0)) {
        if (_segment.ehdr == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = *(iVar2 + 0xec) & 0x40;
        }
    }
    return uVar1;
}




// ===== sym.wake_render @ 0x08005618 (size 88) =====



void sym.wake_render(void)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    if ((iVar2 != 0) && ((*(iVar2 + 0xec) & 0x30) != 0)) {
        uVar1 = sp_el0;
        iVar2 = get_mi_task_struct(uVar1);
        if ((iVar2 != 0) && (iVar2 != -0xe8)) {
            *(iVar2 + 0xf0) = *(iVar2 + 0xf0) + 1;
        }
    }
    return;
}




// ===== sym.mark_viptask @ 0x08005670 (size 2600) =====


//WARNING: Type propagation algorithm not settling

void sym.mark_viptask(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    int *piVar3;
    int64_t ******ppppppiVar4;
    int64_t ******ppppppiVar5;
    char cVar6;
    bool bVar7;
    uint64_t uVar8;
    code *pcVar9;
    int iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong *in_x18;
    int64_t *******pppppppiVar19;
    int64_t *******pppppppiVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    int64_t *piVar23;
    int64_t iVar24;
    uint32_t uVar25;
    ulong unaff_x30;
    int64_t *******pppppppiStack_78;
    int64_t *******pppppppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    pppppppiStack_78 = NULL;
    pppppppiStack_70 = NULL;
    iVar11 = find_user(arg1 & 0xffffffff);
    if (iVar11 == 0) goto code_r0x08005fb0;
    iVar12 = get_mi_user_struct();
    if (iVar12 != 0) {
        while ((_obj.render_info & 1) != 0) {
            Yield();
        }
        DataMemoryBarrier(2,1);
        *0x8000858 = *0x80007d8;
        *0x8000860 = _obj.game_load_table;
        *0x8000848 = *0x80007c8;
        DataMemoryBarrier(2,1);
        while ((*0x8000800 & 1) != 0) {
            Yield();
        }
        DataMemoryBarrier(2,1);
        *0x8000898 = *0x8000818;
        *0x80008a0 = *0x8000820;
        *0x8000888 = *0x8000808;
        DataMemoryBarrier(2,1);
        iVar24 = iVar12 + 0x10;
        _raw_read_lock(iVar24);
        piVar1 = iVar12 + 0x18;
        if (piVar1 == *piVar1) {
            _raw_read_unlock(iVar24);
        }
        else {
            pppppppiStack_78 = &pppppppiStack_78;
            uVar25 = 0;
            piVar23 = *piVar1;
            pppppppiStack_70 = pppppppiStack_78;
            if ((piVar1 != piVar23) && (piVar23 != 0x38)) {
                uVar25 = 0;
                while (iVar12 = piVar23[-2], iVar12 != 0) {
                    puVar2 = iVar12 + 0x38;
                    uVar17 = *puVar2;
                    if (uVar17 == 0) {
                        uVar16 = 0;
                    }
                    else {
                        do {
                            uVar16 = uVar17;
                            Hint_Prefetch(puVar2,2,0,1);
                            do {
                                uVar22 = *puVar2;
                                uVar17 = uVar22;
                                if (uVar22 != uVar16) break;
                                cVar6 = '\x01';
                                bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                                if (bVar7) {
                                    *puVar2 = uVar16 + 1;
                                    cVar6 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar6 != '\0');
                        } while ((uVar16 != uVar22) && (uVar16 = 0, uVar22 != 0));
                    }
                    if ((uVar16 + 1 | uVar16) < 0) {
                        refcount_warn_saturate(puVar2,0);
                    }
                    if (uVar16 != 0) {
                        Hint_Prefetch(puVar2,2,0,1);
                        do {
                            uVar16 = *puVar2;
                            cVar6 = '\x01';
                            bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                            if (bVar7) {
                                *puVar2 = uVar16 + 1;
                                cVar6 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar6 != '\0');
                        if (uVar16 == 0) {
                            uVar15 = 2;
code_r0x08005bcc:
                            refcount_warn_saturate(puVar2,uVar15);
                        }
                        else if ((uVar16 + 1 | uVar16) < 0) {
                            uVar15 = 1;
                            goto code_r0x08005bcc;
                        }
                        Hint_Prefetch(puVar2,2,0,1);
                        do {
                            uVar16 = *puVar2;
                            cVar6 = '\x01';
                            bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                            if (bVar7) {
                                *puVar2 = uVar16 - 1;
                                cVar6 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar6 != '\0');
                        if (uVar16 < 2) {
                            refcount_warn_saturate(puVar2,4);
                        }
                        iVar13 = get_mi_task_struct(iVar12);
                        if (((iVar13 != 0) && (iVar13 + 0xe8 != 0)) && (-1 < *(piVar23 + -0x2c))) {
                            if (*(piVar23 + -0x2c) != *(iVar11 + 0x50)) goto code_r0x08005ff8;
                            if (_segment.ehdr != 0) {
                                *(iVar13 + 0x168) = 0;
                                *(iVar13 + 0x170) = 0;
                                *(iVar13 + 0x158) = 0;
                                *(iVar13 + 0x160) = 0;
                                *(iVar13 + 0x150) = 0;
                            }
                            iVar14 = get_mi_task_struct(iVar12);
                            cVar6 = *0x8000848;
                            if ((iVar14 == 0) || ((*(iVar14 + 0xec) & 0x30) == 0)) {
                                if (*0x8000848 != '\0') {
                                    iVar10 = strlen(0x8000858);
                                    iVar10 = strncmp(0x8000858,iVar12 + 0x7a8,iVar10);
                                    if (iVar10 != 0) goto code_r0x08005918;
                                    goto code_r0x080059c4;
                                }
code_r0x08005918:
                                if (*0x8000888 != '\0') {
                                    iVar10 = strlen(0x8000898);
                                    iVar10 = strncmp(0x8000898,iVar12 + 0x7a8,iVar10);
                                    if (iVar10 == 0) goto code_r0x080059bc;
                                }
                                if (*(iVar13 + 0xf0) != 0) {
                                    if (0x3ff < uVar25) goto code_r0x08005ff0;
                                    uVar17 = uVar25;
                                    *(obj.user_array + uVar17 * 0x10) = iVar13 + 0xe8;
                                    iVar10 = _segment.ehdr;
                                    if (0x4000 < (uVar17 << 4 | 8)) goto code_r0x08005fec;
                                    *(uVar17 * 0x10 + 0x80008d0) = *(iVar13 + 0xf0);
                                    if (iVar10 != 0) {
                                        *(iVar13 + 0x120) = 0;
                                    }
                                    if (uVar25 < 0x3ff) {
                                        uVar25 = uVar25 + 1;
                                        goto code_r0x08005b88;
                                    }
                                    _printk(0x800162d);
                                    uVar25 = 0x3ff;
                                    break;
                                }
                                if (iVar13 == 0) {
                                    iVar12 = 0;
code_r0x08005b1c:
                                    if (((*(iVar13 + 0xec) >> 6 & 1) != 0) &&
                                       (iVar12 = get_mi_task_struct(iVar12), iVar12 != 0)) {
                                        mi_clean_fas_req();
                                    }
                                    *(iVar13 + 0xec) = *(iVar13 + 0xec) & 0xffffff81;
                                }
                                else {
                                    iVar12 = *(iVar13 + 0x28);
                                    if (((iVar12 == 0) || (iVar14 = get_mi_task_struct(iVar12), iVar14 == 0)) ||
                                       ((*(iVar14 + 0xec) & 0x30) == 0)) goto code_r0x08005b1c;
                                }
                                if (_segment.ehdr != 0) {
                                    *(iVar13 + 0x120) = 0;
                                }
                            }
                            else {
code_r0x080059bc:
                                if (cVar6 == '\0') {
code_r0x080059e8:
                                    if (*0x8000888 != '\0') {
                                        iVar10 = strlen(0x8000898);
                                        iVar10 = strncmp(0x8000898,iVar12 + 0x7a8,iVar10);
                                        if (iVar10 == 0) goto code_r0x08005a18;
                                    }
                                }
                                else {
code_r0x080059c4:
                                    iVar10 = strlen(0x8000858);
                                    iVar10 = strncmp(0x8000858,iVar12 + 0x7a8,iVar10);
                                    if (iVar10 != 0) goto code_r0x080059e8;
code_r0x08005a18:
                                    if (iVar13 == 0) {
                                        iVar12 = 0;
                                    }
                                    else {
                                        iVar12 = *(iVar13 + 0x28);
                                        if (((iVar12 != 0) && (iVar14 = get_mi_task_struct(iVar12), iVar14 != 0)) &&
                                           ((*(iVar14 + 0xec) & 0x30) != 0)) goto code_r0x08005aa4;
                                    }
                                    if (((*(iVar13 + 0xec) >> 6 & 1) != 0) &&
                                       (iVar12 = get_mi_task_struct(iVar12), iVar12 != 0)) {
                                        mi_clean_fas_req();
                                    }
                                    *(iVar13 + 0xec) = *(iVar13 + 0xec) & 0xffffff81;
                                }
code_r0x08005aa4:
                                if (_segment.ehdr != 0) {
                                    *(iVar13 + 0x120) = 0;
                                }
                                if (iVar13 == 0) {
                                    uVar15 = 0;
                                }
                                else {
                                    uVar15 = *(iVar13 + 0x28);
                                }
                                if (_segment.ehdr == 0) {
                                    *(iVar13 + 0xec) = *(iVar13 + 0xec) | 8;
                                }
                                else {
                                    *(iVar13 + 0xec) = *(iVar13 + 0xec) | 0x40;
                                    iVar12 = get_mi_task_struct(uVar15);
                                    if (iVar12 != 0) {
                                        mi_set_fas_req();
                                    }
                                }
                            }
                        }
                        pppppppiVar20 = pppppppiStack_78;
                        pppppppiVar19 = piVar23 + 2;
                        uVar17 = __list_add_valid(pppppppiVar19,&pppppppiStack_78,pppppppiStack_78);
                        if ((uVar17 & 1) != 0) {
                            pppppppiVar20[1] = pppppppiVar19;
                            piVar23[2] = pppppppiVar20;
                            piVar23[3] = &pppppppiStack_78;
                            pppppppiStack_78 = pppppppiVar19;
                        }
                    }
code_r0x08005b88:
                    piVar23 = *piVar23;
                    if ((piVar1 == piVar23) || (piVar23 == 0x38)) break;
                }
            }
            _raw_read_unlock(iVar24);
            if (pppppppiStack_78 != &pppppppiStack_78) {
                pppppppiVar19 = pppppppiStack_78;
                do {
                    pppppppiVar20 = *pppppppiVar19;
                    if (pppppppiVar19 != 0x48) {
                        uVar17 = __list_del_entry_valid(pppppppiVar19);
                        if ((uVar17 & 1) != 0) {
                            ppppppiVar4 = *pppppppiVar19;
                            ppppppiVar5 = pppppppiVar19[1];
                            ppppppiVar4[1] = ppppppiVar5;
                            *ppppppiVar5 = ppppppiVar4;
                        }
                        *pppppppiVar19 = 0xdead000000000100;
                        pppppppiVar19[1] = 0xdead000000000122;
                        if (pppppppiVar19[-4] != NULL) {
                            ppppppiVar4 = pppppppiVar19[-4] + 7;
                            Hint_Prefetch(ppppppiVar4,2,0,1);
                            do {
                                iVar10 = *ppppppiVar4;
                                cVar6 = '\x01';
                                bVar7 = ExclusiveMonitorPass(ppppppiVar4,0x10);
                                if (bVar7) {
                                    *ppppppiVar4 = iVar10 + -1;
                                    cVar6 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar6 != '\0');
                            if (iVar10 == 1) {
                                DataMemoryBarrier(2,1);
                                __put_task_struct();
                            }
                            else if (iVar10 < 1) {
                                refcount_warn_saturate(ppppppiVar4,3);
                            }
                        }
                    }
                    pppppppiVar19 = pppppppiVar20;
                } while (pppppppiVar20 != &pppppppiStack_78);
            }
            if (0 < uVar25) {
                sort(obj.user_array,uVar25,0x10,sym.cmp.e8cfb252bf5fa218343fc2a21a58523b.cfi_jt,0);
                if (_segment.ehdr == 1) {
                    uVar16 = 1;
                    if (uVar25 < 2) {
                        uVar16 = uVar25;
                    }
                    if (uVar16 < 1) goto code_r0x08005d70;
                    uVar17 = 0;
                    uVar18 = 0;
                    pcVar9 = obj.user_array;
                    uVar21 = 0;
                    do {
                        if ((uVar17 & 0xffffffffffffc00) != 0) goto code_r0x08005fec;
                        uVar22 = uVar17;
                        uVar8 = *(*pcVar9 + 0x38);
                        if (*(*pcVar9 + 0x38) <= uVar18) {
                            uVar22 = uVar21;
                            uVar8 = uVar18;
                        }
                        uVar18 = uVar8;
                        uVar17 = uVar17 + 1;
                        pcVar9 = pcVar9 + 0x10;
                        uVar21 = uVar22;
                    } while (uVar16 != uVar17);
                }
                else {
code_r0x08005d70:
                    uVar22 = 0;
                }
                iVar12 = 0;
                uVar17 = 0;
                do {
                    if (iVar12 == 0x4000) {
code_r0x08005ff0:
    //WARNING: Does not return
                        pcVar9 = SoftwareBreakpoint(0x5512,0x8005ff4);
                        (*pcVar9)();
                    }
                    iVar24 = *(obj.user_array + iVar12);
                    if (iVar24 == 0) {
                        _printk(0x80018bf,uVar17 & 0xffffffff);
                    }
                    else {
                        if ((_segment.ehdr == 0) || (0x13 < uVar17)) {
                            iVar13 = iVar24 + -0xe8;
                            if (iVar13 == 0) goto code_r0x08005e44;
code_r0x08005db8:
                            iVar13 = *(iVar13 + 0x28);
                            if (((iVar13 == 0) || (iVar14 = get_mi_task_struct(iVar13), iVar14 == 0)) ||
                               ((*(iVar14 + 0xec) & 0x30) == 0)) goto code_r0x08005e48;
                        }
                        else {
                            if (iVar24 == 0xe8) {
                                iVar13 = 0x7a8;
                                iVar14 = 0;
                            }
                            else {
                                iVar14 = *(iVar24 + -0xc0);
                                iVar13 = iVar14 + 0x7a8;
                            }
                            if (0x4000 < iVar12 + 8U) {
code_r0x08005fec:
    //WARNING: Does not return
                                pcVar9 = SoftwareBreakpoint(1,0x8005ff0);
                                (*pcVar9)();
                            }
                            _printk(0x800118b,uVar17 & 0xffffffff,iVar13,*(iVar14 + 0x5d8),*(iVar12 + 0x80008d0),
                                    *(iVar24 + 0x38),uVar22);
                            iVar24 = *(obj.user_array + iVar12);
                            iVar13 = iVar24 + -0xe8;
                            if (iVar13 != 0) goto code_r0x08005db8;
code_r0x08005e44:
                            iVar13 = 0;
code_r0x08005e48:
                            if (((*(iVar24 + 4) >> 6 & 1) != 0) && (iVar13 = get_mi_task_struct(iVar13), iVar13 != 0))
                            {
                                mi_clean_fas_req();
                            }
                            *(iVar24 + 4) = *(iVar24 + 4) & 0xffffff81;
                        }
                        iVar24 = *(obj.user_array + iVar12);
                        if (iVar24 == 0xe8) {
                            uVar15 = 0;
                            if (uVar22 * 0x10 - iVar12 == 0) goto code_r0x08005e84;
code_r0x08005eac:
                            if (uVar17 < _segment.ehdr * 2) {
                                uVar16 = *(iVar24 + 4) | 8;
                            }
                            else {
                                if (_segment.ehdr * 3 <= uVar17) goto code_r0x08005ef0;
                                uVar16 = *(iVar24 + 4) | 4;
                            }
                            *(iVar24 + 4) = uVar16;
                        }
                        else {
                            uVar15 = *(iVar24 + -0xc0);
                            if (uVar22 * 0x10 - iVar12 != 0) goto code_r0x08005eac;
code_r0x08005e84:
                            *(iVar24 + 4) = *(iVar24 + 4) | 0x40;
                            iVar24 = get_mi_task_struct(uVar15);
                            if (iVar24 != 0) {
                                mi_set_fas_req();
                            }
                        }
code_r0x08005ef0:
                        if (_segment.ehdr != 0) {
                            *(*(obj.user_array + iVar12) + 8) = 0;
                        }
                        if (*(obj.user_array + iVar12) == 0xe8) {
                            iVar24 = 0;
                        }
                        else {
                            iVar24 = *(*(obj.user_array + iVar12) + -0xc0);
                        }
                        piVar3 = iVar24 + 0x38;
                        Hint_Prefetch(piVar3,2,0,1);
                        do {
                            iVar10 = *piVar3;
                            cVar6 = '\x01';
                            bVar7 = ExclusiveMonitorPass(piVar3,0x10);
                            if (bVar7) {
                                *piVar3 = iVar10 + -1;
                                cVar6 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar6 != '\0');
                        if (iVar10 == 1) {
                            DataMemoryBarrier(2,1);
                            __put_task_struct();
                        }
                        else if (iVar10 < 1) {
                            refcount_warn_saturate(piVar3,3);
                        }
                        *(obj.user_array + iVar12) = 0;
                        *(iVar12 + 0x80008d0) = 0;
                    }
                    uVar17 = uVar17 + 1;
                    iVar12 = iVar12 + 0x10;
                } while (uVar25 * 0x10 - iVar12 != 0);
            }
            _segment.ehdr = 0;
        }
    }
    free_uid(iVar11);
code_r0x08005fb0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08005ff8:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x800,0x8005ffc);
    (*pcVar9)();
}



// ===== sym.cmp @ 0x08006098 (size 32) =====



uint32_t sym.cmp(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    uVar1 = *(arg1 + 8) < *(arg2 + 8);
    if (*(arg2 + 8) < *(arg1 + 8)) {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}




// ===== sym.glk_update_util @ 0x080060b8 (size 12) =====



void sym.glk_update_util(void)

{
    return;
}




// ===== sym.glk_enable @ 0x080060c4 (size 100) =====



bool sym.glk_enable(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr == 0) && (iVar2 = fas_sched_clock(), iVar2 - CONCAT44(*0x8000004,_segment.ehdr) < 1000000000))
    {
        bVar1 = 2 < _segment.ehdr;
    }
    else {
        bVar1 = false;
    }
    return bVar1;
}




// ===== sym.game_load_update @ 0x08006128 (size 324) =====



void sym.game_load_update(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.game_load_has_init & 1) != 0) {
        uVar7 = arg3 & 0xffffffff;
        iVar2 = sym.game_task(arg1);
        iVar3 = sym.game_vip_task(arg1);
        iVar4 = sym.game_super_task(arg1);
        iVar5 = sym.is_render_thread(arg1);
        if (0x1f < arg3) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800626c);
            (*pcVar1)();
        }
        uVar6 = _raw_spin_lock_irqsave(*(__per_cpu_offset + uVar7 * 8) + 0x800e100);
        *(obj.load_info + *(__per_cpu_offset + uVar7 * 8)) = *(obj.load_info + *(__per_cpu_offset + uVar7 * 8)) + arg2;
        if (iVar2 != 0) {
            *(*(__per_cpu_offset + uVar7 * 8) + 0x800e090) = *(*(__per_cpu_offset + uVar7 * 8) + 0x800e090) + arg2;
        }
        if (iVar4 != 0) {
            *(*(__per_cpu_offset + uVar7 * 8) + 0x800e0a0) = *(*(__per_cpu_offset + uVar7 * 8) + 0x800e0a0) + arg2;
        }
        if (iVar3 != 0) {
            *(*(__per_cpu_offset + uVar7 * 8) + 0x800e0b0) = *(*(__per_cpu_offset + uVar7 * 8) + 0x800e0b0) + arg2;
        }
        if (iVar5 != 0) {
            *(*(__per_cpu_offset + uVar7 * 8) + 0x800e0c0) = *(*(__per_cpu_offset + uVar7 * 8) + 0x800e0c0) + arg2;
        }
        _raw_spin_unlock_irqrestore(*(__per_cpu_offset + uVar7 * 8) + 0x800e100,uVar6);
    }
    return;
}




// ===== sym.glk_irq_work @ 0x0800626c (size 608) =====



void sym.glk_irq_work(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong extraout_x8;
    ulong extraout_x8_00;
    int64_t extraout_x8_01;
    ulong extraout_x8_02;
    int64_t extraout_x9;
    int64_t extraout_x9_00;
    int64_t extraout_x9_01;
    ulong *in_x18;
    ulong *unaff_x19;
    ulong *puVar4;
    code *unaff_x21;
    code *pcVar5;
    ulong unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    if (obj.game_load_has_init == 0x1) {
        uVar1 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *unaff_x19 = extraout_x8;
        if (uVar1 < extraout_x8) {
            do {
                puVar4 = uVar1;
                if (0x1f < uVar1) goto code_r0x08006420;
                _raw_spin_lock(runqueues + *(__per_cpu_offset + puVar4 * 8));
                uVar1 = cpumask_next(puVar4,__cpu_possible_mask);
                *puVar4 = extraout_x8_00;
            } while (uVar1 < extraout_x8_00);
        }
        puVar4 = fas_sched_clock();
        iVar2 = extraout_x9;
        pcVar5 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                _raw_spin_lock(pcVar5 + -8);
                unaff_x21 = pcVar5 + 0x10;
                *puVar4 = unaff_x28;
                uVar1 = cpumask_next(0xffffffff,unaff_x21);
                for (; uVar1 < unaff_x28; uVar1 = cpumask_next(uVar1,unaff_x21)) {
                    if (0x1f < uVar1) goto code_r0x08006420;
                    iVar2 = *(*(__per_cpu_offset + uVar1 * 8) + 0x8053c14);
                    if (iVar2 != 0) {
                        walt_update_task_ravg(iVar2,runqueues + *(__per_cpu_offset + uVar1 * 8),4,puVar4,0);
                        *puVar4 = unaff_x28;
                    }
                }
                _raw_spin_unlock(pcVar5 + -8);
                pcVar5 = *pcVar5;
                iVar2 = extraout_x9_00;
            } while (pcVar5 != cluster_head);
        }
        pcVar5 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                *pcVar5 = iVar2;
                uStack_70 = *(pcVar5 + 0x10) & iVar2;
                __sw_hweight64();
                *pcVar5 = unaff_x21;
                uVar3 = 0xffffffff;
                while( true ) {
                    uVar3 = cpumask_next(uVar3,&uStack_70);
                    if (unaff_x21 <= uVar3) break;
                    if (0x1f < uVar3) goto code_r0x08006420;
                }
                pcVar5 = *pcVar5;
                iVar2 = extraout_x9_01;
            } while (pcVar5 != cluster_head);
        }
        uVar1 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *pcVar5 = extraout_x8_01;
        if (uVar1 < extraout_x8_01) {
            do {
                if (0x1f < uVar1) {
code_r0x08006420:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8006424);
                    (*pcVar5)();
                }
                _raw_spin_unlock(runqueues + *(__per_cpu_offset + uVar1 * 8));
                uVar1 = cpumask_next(uVar1,__cpu_possible_mask);
                ___cpu_possible_mask = extraout_x8_02;
            } while (uVar1 < extraout_x8_02);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_68) {
        *0x80048c8 = __stack_chk_fail();
        return;
    }
    return;
}




// ===== sym.glk_force_maxfreq_break @ 0x080064cc (size 20) =====



void sym.glk_force_maxfreq_break(int64_t arg1)

{
    *0x80048c8 = arg1;
    return;
}




// ===== sym.glk_maxfreq_break @ 0x080064e0 (size 40) =====



void sym.glk_maxfreq_break(uint8_t param_1)

{
    if (_segment.ehdr != 0) {
        obj.ceiling_next_update = ~param_1 & 1;
    }
    return;
}




// ===== sym.glk_minfreq_break @ 0x08006508 (size 40) =====



void sym.glk_minfreq_break(uint8_t param_1)

{
    if (_segment.ehdr != 0) {
        obj.glk_minfreq_limit = ~param_1 & 1;
    }
    return;
}




// ===== sym.game_load_history_update @ 0x08006530 (size 1076) =====



void sym.game_load_history_update(void)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    uint64_t uVar16;
    int64_t iVar17;
    uint64_t uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *unaff_x19;
    ulong *puVar19;
    uint64_t *puVar20;
    ulong unaff_x20;
    int64_t iVar21;
    uint64_t uVar22;
    int64_t iVar23;
    int64_t iVar24;
    uint64_t unaff_x27;
    ulong unaff_x30;
    uint64_t auStack_a0 [4];
    ulong *puStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = fas_sched_clock();
    if (obj.game_load_has_init != 0x1) goto code_r0x08006914;
    uVar6 = *0x8004000;
    uVar13 = *0x8004000 & 0xffffffff;
    _segment.ehdr = iVar7;
    if (0x15 < *0x8004000) {
code_r0x08006958:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x800695c);
        (*pcVar4)();
    }
    if ((uVar13 << 6 | 0x18) < 0x541) {
        uVar18 = uVar13 * 0x40;
        iVar9 = *(uVar18 + 0x80048e8);
        if (iVar9 == 0) {
            *(uVar18 + 0x80048e8) = iVar7;
        }
        else {
            if (0x540 < (uVar18 | 0x20)) goto code_r0x0800695c;
            _segment.ehdr = iVar7;
            uVar1 = _segment.ehdr;
            *(uVar13 * 0x40 + 0x80048f0) = iVar7 - iVar9;
            uVar3 = *0x800e000;
            if ((uVar6 != uVar1) || (*0x8004000 == L'\0')) {
                uVar1 = uVar1 - 0xb;
                if (uVar1 < 0x17) {
                    *0x8004000 = L"\v\v\v\v\v\v\x10\x10\x10\x10\x10\x10\x10\x10\x19\x19\x19\x19\x19\x19\x19\x19\x19"
                                 [uVar1];
                }
                else {
                    *0x8004000 = L'!';
                }
            }
            uVar1 = *0x8004000 << 10;
            uVar10 = uVar1;
            *0x8004000 = uVar10;
            if (uVar1 != 0) {
                if (uVar1 < 1) {
                    uVar6 = uVar6 + 1;
                    uVar1 = (uVar6 & 0xff) * 0x87 >> 8;
                    uVar6 = uVar6 + (uVar1 + ((uVar6 - uVar1 & 0xfe) >> 1) >> 4 & 0xf) * -0x15;
                    uVar13 = uVar6 & 0xff;
                    *0x8004000 = uVar6 & 0xff;
                }
                else {
                    uVar14 = 0;
                    uVar11 = *0x800e000;
                    unaff_x19 = 0x8004e20;
                    *0x8004e20 = unaff_x20;
                    do {
                        uVar5 = cpumask_next(0xffffffff,unaff_x19);
                        if (uVar5 < unaff_x20) {
                            unaff_x27 = 0;
                            iVar9 = 0;
                            uVar22 = 0;
                            iVar21 = 0;
                            puVar19 = NULL;
                            iVar23 = 0;
                            iVar24 = 0;
                            do {
                                if (0x1f < uVar5) goto code_r0x08006958;
                                iVar12 = uVar5 * 8;
                                iVar15 = *(__per_cpu_offset + iVar12);
                                uVar16 = *(obj.load_info + iVar15);
                                *(obj.load_info + iVar15) = 0;
                                *(iVar15 + 0x800e088) = uVar16;
                                iVar15 = *(__per_cpu_offset + iVar12);
                                if (unaff_x27 <= uVar16) {
                                    unaff_x27 = uVar16;
                                }
                                iVar17 = *(iVar15 + 0x800e090);
                                *(iVar15 + 0x800e090) = 0;
                                *(iVar15 + 0x800e098) = iVar17;
                                iVar9 = iVar17 + iVar9;
                                iVar15 = *(__per_cpu_offset + iVar12);
                                iVar17 = *(iVar15 + 0x800e0a0);
                                *(iVar15 + 0x800e0a0) = 0;
                                *(iVar15 + 0x800e0a8) = iVar17;
                                uVar22 = iVar17 + uVar22;
                                iVar15 = *(__per_cpu_offset + iVar12);
                                iVar17 = *(iVar15 + 0x800e0b0);
                                *(iVar15 + 0x800e0b0) = 0;
                                *(iVar15 + 0x800e0b8) = iVar17;
                                iVar21 = iVar17 + iVar21;
                                iVar15 = *(__per_cpu_offset + iVar12);
                                iVar17 = *(iVar15 + 0x800e0c0);
                                *(iVar15 + 0x800e0c0) = 0;
                                *(iVar15 + 0x800e0c8) = iVar17;
                                puVar19 = iVar17 + puVar19;
                                iVar15 = *(__per_cpu_offset + iVar12);
                                iVar17 = *(iVar15 + 0x800e0d0);
                                *(iVar15 + 0x800e0d0) = 0;
                                *(iVar15 + 0x800e0d8) = iVar17;
                                iVar23 = iVar17 + iVar23;
                                iVar12 = *(__per_cpu_offset + iVar12);
                                iVar15 = *(iVar12 + 0x800e0e0);
                                iVar24 = iVar15 + iVar24;
                                *(iVar12 + 0x800e0e0) = 0;
                                *(iVar12 + 0x800e0e8) = iVar15;
                                uVar5 = cpumask_next(uVar5,unaff_x19);
                                *puVar19 = unaff_x20;
                            } while (uVar5 < unaff_x20);
                        }
                        else {
                            iVar24 = 0;
                            iVar23 = 0;
                            puVar19 = NULL;
                            iVar21 = 0;
                            uVar22 = 0;
                            iVar9 = 0;
                            unaff_x27 = 0;
                        }
                        auStack_a0[0] = unaff_x27;
                        auStack_a0[1] = iVar9;
                        auStack_a0[2] = uVar22;
                        auStack_a0[3] = iVar21;
                        puStack_80 = puVar19;
                        iStack_78 = iVar23;
                        iStack_70 = iVar24;
                        if (uVar3 < 5) {
                            uVar22 = auStack_a0[uVar11];
                        }
                        if (uVar14 == 3) goto code_r0x08006958;
                        if (0x53f < uVar18 + uVar14 * 8) goto code_r0x0800695c;
                        iVar2 = 0;
                        if (*0x8004000 != 0) {
                            iVar2 = uVar22 / *0x8004000;
                        }
                        *(uVar13 * 0x40 + 0x80048d0 + uVar14 * 8) = iVar2;
                        uVar14 = uVar14 + 1;
                        unaff_x19 = uVar14 * 8 + 0x8004e20;
                    } while (uVar14 != uVar10);
                    uVar6 = (uVar6 + 1) % 0x15;
                    uVar13 = uVar6;
                    *0x8004000 = CONCAT44(*0x8004004,uVar6);
                    *(uVar13 * 0x40 + 0x80048d0) = 0;
                    if (uVar1 != 1) {
                        if (0x540 < (uVar13 << 6 | 8)) goto code_r0x0800695c;
                        *(uVar13 * 0x40 + 0x80048d8) = 0;
                        if (uVar1 != 2) {
                            if (0x540 < (uVar13 * 0x40 | 0x10)) goto code_r0x0800695c;
                            *(uVar13 * 0x40 + 0x80048e0) = 0;
                            if (uVar1 != 3) goto code_r0x08006958;
                        }
                    }
                }
                *(uVar13 * 0x40 + 0x80048f0) = 0;
                if (0x540 < (uVar13 << 6 | 0x18)) goto code_r0x0800695c;
                *(uVar13 * 0x40 + 0x80048e8) = iVar7;
                irq_work_queue(0x8004e58);
            }
        }
code_r0x08006914:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
        *extraout_x18 = sym.game_load_reset;
        if (obj.game_load_has_init != 0x1) {
            return;
        }
        iVar7 = 0;
        iVar2 = *0x8004000;
        do {
            while( true ) {
                *(iVar7 * 0x40 + 0x80048e8) = 0;
                *(iVar7 * 0x40 + 0x80048f0) = 0;
                if (0 < iVar2) break;
                iVar7 = iVar7 + 1;
                if (iVar7 == 0x15) {
                    *0x8004000 = *0x8004000 & 0xffffffff00000000;
                    return;
                }
            }
            uVar13 = iVar7 * 0x40;
            if (0x53f < uVar13) {
code_r0x08006b68:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(1,0x8006b6c);
                (*pcVar4)();
            }
            *(uVar13 + 0x80048d0) = 0;
            if (iVar2 != 1) {
                if (0x540 < (uVar13 | 8)) goto code_r0x08006b68;
                *(iVar7 * 0x40 + 0x80048d8) = 0;
                if (iVar2 != 2) {
                    if (0x540 < (uVar13 | 0x10)) goto code_r0x08006b68;
                    *(iVar7 * 0x40 + 0x80048e0) = 0;
                    if (iVar2 != 3) goto code_r0x08006b64;
                }
            }
            iVar7 = iVar7 + 1;
        } while (iVar7 != 0x15);
        puVar20 = 0x8004e20;
        iVar7 = 0;
        *unaff_x19 = unaff_x27;
        *0x8004000 = *0x8004000 & 0xffffffff00000000;
        while( true ) {
            uVar6 = cpumask_next(0xffffffff,puVar20);
            if (uVar6 < unaff_x27) {
                do {
                    if (0x1f < uVar6) goto code_r0x08006b64;
                    unaff_x27 = uVar6 * 8;
                    uVar8 = _raw_spin_lock_irqsave(*(__per_cpu_offset + unaff_x27) + 0x800e100);
                    iVar9 = *(__per_cpu_offset + unaff_x27);
                    *(obj.load_info + iVar9) = 0;
                    *(iVar9 + 0x800e088) = 0;
                    iVar9 = *(__per_cpu_offset + unaff_x27);
                    *(iVar9 + 0x800e090) = 0;
                    *(iVar9 + 0x800e098) = 0;
                    iVar9 = *(__per_cpu_offset + unaff_x27);
                    *(iVar9 + 0x800e0a0) = 0;
                    *(iVar9 + 0x800e0a8) = 0;
                    iVar9 = *(__per_cpu_offset + unaff_x27);
                    *(iVar9 + 0x800e0b0) = 0;
                    *(iVar9 + 0x800e0b8) = 0;
                    iVar9 = *(__per_cpu_offset + unaff_x27);
                    *(iVar9 + 0x800e0c0) = 0;
                    *(iVar9 + 0x800e0c8) = 0;
                    iVar9 = *(__per_cpu_offset + unaff_x27);
                    *(iVar9 + 0x800e0d0) = 0;
                    *(iVar9 + 0x800e0d8) = 0;
                    iVar9 = *(__per_cpu_offset + unaff_x27);
                    *(iVar9 + 0x800e0e0) = 0;
                    *(iVar9 + 0x800e0e8) = 0;
                    _raw_spin_unlock_irqrestore(*(__per_cpu_offset + unaff_x27) + 0x800e100,uVar8);
                    uVar6 = cpumask_next(uVar6,puVar20);
                    *puVar20 = unaff_x27;
                } while (uVar6 < unaff_x27);
            }
            if (iVar7 == 3) break;
            iVar7 = iVar7 + 1;
            puVar20 = iVar7 * 8 + 0x8004e20;
            if (*0x8004000 <= iVar7) {
                return;
            }
        }
code_r0x08006b64:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8006b68);
        (*pcVar4)();
    }
code_r0x0800695c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(1,0x8006960);
    (*pcVar4)();
}




// ===== sym.game_load_reset @ 0x08006964 (size 520) =====



int64_t sym.game_load_reset(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *unaff_x19;
    int64_t *piVar7;
    int64_t unaff_x27;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8004000;
    if (obj.game_load_has_init == 0x1) {
        iVar4 = 0;
        do {
            while( true ) {
                *(iVar4 * 0x40 + 0x80048e8) = 0;
                *(iVar4 * 0x40 + 0x80048f0) = 0;
                if (0 < iVar1) break;
                iVar4 = iVar4 + 1;
                if (iVar4 == 0x15) {
                    *0x8004000 = 0;
                    return arg1;
                }
            }
            uVar6 = iVar4 * 0x40;
            if (0x53f < uVar6) {
code_r0x08006b68:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8006b6c);
                (*pcVar2)();
            }
            *(uVar6 + 0x80048d0) = 0;
            if (iVar1 != 1) {
                if (0x540 < (uVar6 | 8)) goto code_r0x08006b68;
                *(iVar4 * 0x40 + 0x80048d8) = 0;
                if (iVar1 != 2) {
                    if (0x540 < (uVar6 | 0x10)) goto code_r0x08006b68;
                    *(iVar4 * 0x40 + 0x80048e0) = 0;
                    if (iVar1 != 3) goto code_r0x08006b64;
                }
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 != 0x15);
        piVar7 = 0x8004e20;
        iVar4 = 0;
        *unaff_x19 = unaff_x27;
        *0x8004000 = 0;
        do {
            arg1 = cpumask_next(0xffffffff,piVar7);
            if (arg1 < unaff_x27) {
                do {
                    if (0x1f < arg1) goto code_r0x08006b64;
                    unaff_x27 = (arg1 & 0xffffffffU) * 8;
                    uVar3 = _raw_spin_lock_irqsave(*(__per_cpu_offset + unaff_x27) + 0x800e100);
                    iVar5 = *(__per_cpu_offset + unaff_x27);
                    *(obj.load_info + iVar5) = 0;
                    *(iVar5 + 0x800e088) = 0;
                    iVar5 = *(__per_cpu_offset + unaff_x27);
                    *(iVar5 + 0x800e090) = 0;
                    *(iVar5 + 0x800e098) = 0;
                    iVar5 = *(__per_cpu_offset + unaff_x27);
                    *(iVar5 + 0x800e0a0) = 0;
                    *(iVar5 + 0x800e0a8) = 0;
                    iVar5 = *(__per_cpu_offset + unaff_x27);
                    *(iVar5 + 0x800e0b0) = 0;
                    *(iVar5 + 0x800e0b8) = 0;
                    iVar5 = *(__per_cpu_offset + unaff_x27);
                    *(iVar5 + 0x800e0c0) = 0;
                    *(iVar5 + 0x800e0c8) = 0;
                    iVar5 = *(__per_cpu_offset + unaff_x27);
                    *(iVar5 + 0x800e0d0) = 0;
                    *(iVar5 + 0x800e0d8) = 0;
                    iVar5 = *(__per_cpu_offset + unaff_x27);
                    *(iVar5 + 0x800e0e0) = 0;
                    *(iVar5 + 0x800e0e8) = 0;
                    _raw_spin_unlock_irqrestore(*(__per_cpu_offset + unaff_x27) + 0x800e100,uVar3);
                    arg1 = cpumask_next(arg1 & 0xffffffffU,piVar7);
                    *piVar7 = unaff_x27;
                } while (arg1 < unaff_x27);
            }
            if (iVar4 == 3) {
code_r0x08006b64:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8006b68);
                (*pcVar2)();
            }
            iVar4 = iVar4 + 1;
            piVar7 = iVar4 * 8 + 0x8004e20;
        } while (iVar4 < *0x8004000);
    }
    return arg1;
}




// ===== sym.create_game_load_proc @ 0x08006b6c (size 144) =====



void sym.create_game_load_proc(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        *0x8004000 = proc_mkdir(0x8001120,arg1);
        if (*0x8004000 != 0) {
            uVar2 = proc_create("game_history_load",0x1b4,*0x8004000,obj.history_load_fops);
            iVar1 = *0x8004000;
            *0x8004000 = uVar2;
            *0x8004000 = proc_create("game_cpu_load",0x1b4,iVar1,obj.cpu_load_fops);
        }
    }
    return;
}




// ===== sym.delete_game_load_proc @ 0x08006bfc (size 92) =====



void sym.delete_game_load_proc(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8004000 != 0) {
        if (*0x8004000 != 0) {
            proc_remove();
        }
        if (*0x8004000 != 0) {
            proc_remove();
        }
        proc_remove(*0x8004000);
    }
    return;
}




// ===== sym.proc_glk_dointvec @ 0x08006c58 (size 444) =====



int sym.proc_glk_dointvec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    code *in_x5;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *(arg1 + 8);
    mutex_lock(obj.ceiling_enable);
    if (*(arg1 + 0x10) != 0xc) {
        *(arg1 + 0x10) = 0xc;
    }
    pcVar1 = sym.proc_dointvec.cfi_jt;
    if (in_x5 != NULL) {
        pcVar1 = in_x5;
    }
    if (arg2 == 0) {
        if (2 < (pcVar1 + -0x80026c0 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x3d66494c8ff65011,pcVar1,0x8000ae0);
        }
        iVar2 = (*pcVar1)(arg1,0,arg3,arg4);
    }
    else {
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        iVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0xc);
        if (iVar3 == 0) {
            iVar2 = -0xc;
        }
        else {
            memcpy(iVar3,uVar4,*(arg1 + 0x10));
            if (2 < (pcVar1 + -0x80026c0 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0x3d66494c8ff65011,pcVar1,0x8000b00);
            }
            iVar2 = (*pcVar1)(arg1,arg2 & 0xffffffff,arg3,arg4);
            if (iVar2 != 0) {
                memcpy(uVar4,iVar3,*(arg1 + 0x10));
            }
            kfree(iVar3);
        }
    }
    mutex_unlock(obj.ceiling_enable);
    return iVar2;
}




// ===== sym.game_load_init @ 0x08006e14 (size 908) =====


uint64_t sym.game_load_init(void)

{
    code *pcVar1;
    code *pcVar2;
    int iVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    int64_t in_x3;
    uint64_t *in_x4;
    int64_t in_x5;
    uint *in_x6;
    uint uVar11;
    uint32_t uVar12;
    ulong extraout_x8;
    int64_t iVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar17;
    uint32_t *puVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    puVar17 = 0xffffffff;
    uStack_60 = _seq_lseek;
    do {
        uVar5 = cpumask_next(puVar17,&uStack_60);
        *puVar17 = extraout_x8;
        if (extraout_x8 <= uVar5) {
            uVar11 = 0;
            goto code_r0x08006f80;
        }
        puVar17 = uVar5;
        puVar7 = sym.cpu_coregroup_mask(uVar5);
        uVar19 = *puVar7;
        uVar8 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar6 = 0x20;
        if ((uVar19 & 0xffffffff) != 0) {
            uVar6 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
        }
    } while (uVar5 != uVar6);
    *puVar17 = 0x20;
    uVar8 = cpumask_next(0xffffffff,puVar7);
    if (uVar8 < 0x20) {
        do {
            if (0x1f < uVar8) goto code_r0x08007198;
            iVar13 = (uVar8 & 0xffffffff) * 8;
            *(*(__per_cpu_offset + iVar13) + 0x800e104) = 0;
            *(*(__per_cpu_offset + iVar13) + 0x800e100) = 0;
            uVar8 = cpumask_next(uVar8,puVar7);
        } while (uVar8 < 0x20);
        uVar19 = *puVar7;
    }
    uStack_60 = uStack_60 & (*puVar7 ^ 0xffffffff);
    *0x8004000 = uVar19;
    uVar5 = cpumask_next(uVar5,&uStack_60);
    if (uVar5 < 0x20) {
        do {
            puVar18 = uVar5;
            puVar9 = sym.cpu_coregroup_mask(uVar5);
            uVar19 = *puVar9;
            uVar8 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar6 = 0x20;
            if ((uVar19 & 0xffffffff) != 0) {
                uVar6 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
            }
            if (uVar5 == uVar6) {
                *puVar18 = 0x20;
                uVar8 = cpumask_next(0xffffffff,puVar9);
                if (0x1f < uVar8) goto code_r0x08007088;
                goto code_r0x0800704c;
            }
            *puVar18 = puVar7;
            uVar5 = cpumask_next(puVar18,&uStack_60);
        } while (uVar5 < puVar7);
    }
    uVar11 = 1;
    goto code_r0x08006f80;
code_r0x080070e0:
    *puVar18 = uVar5;
    uVar6 = cpumask_next(uVar6,&uStack_60);
    if (uVar5 <= uVar6) goto code_r0x080070fc;
    goto code_r0x080070bc;
    while( true ) {
        iVar13 = (uVar8 & 0xffffffff) * 8;
        *(*(__per_cpu_offset + iVar13) + 0x800e104) = 1;
        *(*(__per_cpu_offset + iVar13) + 0x800e100) = 0;
        uVar8 = cpumask_next(uVar8,puVar9);
        if (0x1f < uVar8) break;
code_r0x0800704c:
        if (0x1f < uVar8) goto code_r0x08007198;
    }
    uVar19 = *puVar9;
code_r0x08007088:
    uStack_60 = uStack_60 & (*puVar9 ^ 0xffffffff);
    *0x8004000 = uVar19;
    uVar6 = cpumask_next(uVar5,&uStack_60);
    if (uVar6 < 0x20) {
code_r0x080070bc:
        puVar7 = sym.cpu_coregroup_mask(uVar6);
        uVar19 = *puVar7;
        uVar8 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar12 = 0x20;
        if (uVar19 != 0) {
            uVar12 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        if (uVar6 != uVar12) goto code_r0x080070e0;
        *puVar7 = uVar6;
        uVar8 = cpumask_next(0xffffffff,puVar7);
        uVar5 = uVar8;
        while (uVar5 < uVar6) {
            if (0x1f < uVar8) {
code_r0x08007198:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800719c);
                (*pcVar4)();
            }
            iVar13 = (uVar8 & 0xffffffff) * 8;
            *(*(__per_cpu_offset + iVar13) + 0x800e104) = 2;
            *(*(__per_cpu_offset + iVar13) + 0x800e100) = 0;
            uVar8 = cpumask_next(uVar8,puVar7);
            uVar5 = uVar8;
        }
        *0x8004000 = *puVar7;
        uStack_60 = uStack_60 & (*puVar7 ^ 0xffffffff);
        uVar11 = 3;
        goto code_r0x08006f80;
    }
code_r0x080070fc:
    uVar11 = 2;
code_r0x08006f80:
    uVar8 = *0x8004000;
    *0x8004000 = CONCAT44(*0x8004004,uVar11);
    if (uVar8 != 0) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x8007194);
        (*pcVar4)();
    }
    *0x8004e58 = 0;
    *0x8004e60 = 0;
    *0x8004e68 = sym.glk_irq_work.cfi_jt;
    *0x8004000 = register_sysctl_table(obj.game_ctl_root);
    register_oem_freq_hook(sym.set_next_freq.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt);
    obj.game_load_has_init = 0x1;
    _printk(0x800131f);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return 0;
    }
    auVar20 = __stack_chk_fail();
    uVar8 = auVar20._0_8_;
    *extraout_x18 = sym.set_next_freq;
    if (obj.game_load_has_init != 0x1) {
        return uVar8;
    }
    uVar19 = *in_x4;
    if (_segment.ehdr == 0) {
        *in_x6 = 0x8053000;
        if ((0x1f < *(in_x5 + 0x1c)) || (2 < *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104)))
        goto code_r0x08007628;
        uVar5 = *(perf_min_freq + *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104) * 4);
        if (*(perf_min_freq + *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104) * 4) <= *(in_x5 + 0x34)) {
            uVar5 = *(in_x5 + 0x34);
        }
        uVar10 = uVar5;
        uVar14 = uVar19;
        if (*0x8004000 != 0) {
            uVar8 = _printk(0x80011e9,uVar10);
            uVar14 = *in_x4;
        }
        if (uVar10 <= uVar14) {
            uVar10 = uVar14;
        }
        goto code_r0x08007588;
    }
    if (_segment.ehdr == 0) {
        iVar3 = *0x8004000;
        uVar8 = fas_sched_clock();
        if (((999999999 < uVar8 - CONCAT44(*0x8000004,_segment.ehdr)) || (_segment.ehdr < 3)) ||
           (obj.game_load_has_init != 0x1)) goto code_r0x08007208;
        uVar5 = 0x14;
        if (iVar3 != 0) {
            uVar5 = iVar3 - 1;
        }
        uVar14 = uVar5;
        if (0x15 < uVar5) goto code_r0x08007628;
        if (0x540 < (uVar14 << 6 | 0x20)) {
code_r0x0800762c:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x8007630);
            (*pcVar4)();
        }
        if (0x1f < *(in_x5 + 0x1c)) goto code_r0x08007628;
        uVar5 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104);
        uVar10 = uVar5;
        if (2 < uVar5) goto code_r0x08007628;
        if (0x53f < uVar14 * 0x40 + uVar10 * 8) goto code_r0x0800762c;
        pcVar4 = obj.glk_minfreq + uVar10 * 4;
        pcVar1 = in_x5 + 0x38;
        if (obj.ceiling_next_update != 0x0) {
            pcVar1 = obj.glk_maxfreq + uVar10 * 4;
        }
        pcVar2 = in_x5 + 0x34;
        if (obj.glk_minfreq_limit != 0x0) {
            pcVar2 = pcVar4;
        }
        uVar6 = *pcVar1;
        uVar5 = *pcVar2;
        if (uVar5 < uVar6) goto code_r0x08007208;
        uVar8 = 1000000;
        uVar16 = *(uVar14 * 0x40 + 0x80048f0);
        if (uVar16 < 1000000) goto code_r0x08007208;
        uVar8 = *pcVar4;
        uVar15 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x8053cc4);
        if (*pcVar4 == 0) {
            *pcVar4 = *(in_x5 + 0x34);
        }
        if (_segment.ehdr * 2 < uVar16 / 1000000) {
            if (*(in_x5 + 0x3c) < uVar5) {
                uVar14 = uVar5;
            }
            else {
                uVar14 = uVar5;
                if (*0x800e000 != 0) {
                    uVar14 = *(in_x5 + 0x38);
                }
            }
        }
        else {
            uVar16 = 0;
            if (uVar15 != 0) {
                uVar16 = (*(uVar14 * 0x40 + 0x80048d0 + uVar10 * 8) * 100) / uVar15;
            }
            uVar14 = uVar5;
            if ((uVar16 <= *(obj.glk_highspeed_load + uVar10 * 4)) &&
               (uVar14 = uVar6, *(obj.glk_lowspeed_load + uVar10 * 4) <= uVar16)) {
                uVar12 = (uVar16 * (uVar5 + (uVar5 >> 3))) / 100;
                if (uVar12 <= uVar5) {
                    uVar5 = uVar12;
                }
                if (uVar6 <= uVar5) {
                    uVar6 = uVar5;
                }
                uVar14 = uVar6;
                if (*0x8004000 != 0) {
                    uVar8 = _printk(0x80013cf,uVar16,uVar14);
                }
            }
        }
        if (uVar14 == 0) goto code_r0x08007208;
    }
    else {
code_r0x08007208:
        uVar5 = *in_x4;
        uVar14 = uVar5;
        if (((_segment.ehdr != 0) && (_segment.ehdr != 0)) && (obj.game_load_has_init == 0x1)) {
            if (0x1f < *(in_x5 + 0x1c)) {
code_r0x08007628:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800762c);
                (*pcVar4)();
            }
            uVar6 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104);
            if ((obj.ceiling_next_update == 0x0) || (*0x80048c8 != '\0')) {
                pcVar4 = in_x5 + 0x38;
            }
            else {
                if (2 < uVar6) goto code_r0x08007628;
                pcVar4 = obj.glk_maxfreq + uVar6 * 4;
            }
            uVar12 = *pcVar4;
            if (obj.glk_minfreq_limit == 0x0) {
                pcVar4 = in_x5 + 0x34;
            }
            else {
                if (2 < uVar6) goto code_r0x08007628;
                pcVar4 = obj.glk_minfreq + uVar6 * 4;
            }
            uVar6 = *(in_x5 + 0x34);
            if (*(in_x5 + 0x34) <= *pcVar4) {
                uVar6 = *pcVar4;
            }
            if (uVar12 == 0) {
                uVar12 = *(in_x5 + 0x38);
            }
            if (uVar5 <= uVar6) {
                uVar5 = uVar6;
            }
            if (uVar5 <= uVar12) {
                uVar12 = uVar5;
            }
            uVar14 = uVar12;
        }
    }
    uVar8 = sym.frame_load_enable(uVar8);
    if ((uVar8 & 1) == 0) {
        uVar8 = sym.flw_update_freq_enable();
    }
    else {
        uVar10 = sym.flw_cal_freq(in_x5,in_x3,uVar14,auVar20._8_8_);
        uVar8 = sym.flw_update_freq_enable();
        if (((uVar8 & 1) != 0) && (uVar10 != 0)) goto code_r0x08007588;
    }
    uVar10 = uVar14;
code_r0x08007588:
    *in_x4 = uVar10;
    if (uVar10 != uVar19) {
        *in_x6 = 1;
    }
    return uVar8;
}



// ===== sym.set_next_freq @ 0x080071a0 (size 1168) =====



void sym.set_next_freq(ulong noname_0,int64_t arg1,uchar noname_2 [16],int64_t arg2)

{
    code *pcVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    code *pcVar6;
    uint64_t in_x0;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *in_x4;
    int64_t in_x5;
    uint *in_x6;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *0x8004000;
    if (obj.game_load_has_init != 0x1) {
        return;
    }
    uVar12 = *in_x4;
    if (_segment.ehdr == 0) {
        *in_x6 = 0x8053000;
        if ((0x1f < *(in_x5 + 0x1c)) || (2 < *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104)))
        goto code_r0x08007628;
        uVar4 = *(perf_min_freq + *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104) * 4);
        if (*(perf_min_freq + *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104) * 4) <= *(in_x5 + 0x34)) {
            uVar4 = *(in_x5 + 0x34);
        }
        uVar7 = uVar4;
        uVar10 = uVar12;
        if (*0x8004000 != 0) {
            _printk(0x80011e9,uVar7);
            uVar10 = *in_x4;
        }
        if (uVar7 <= uVar10) {
            uVar7 = uVar10;
        }
        goto code_r0x08007588;
    }
    if ((((_segment.ehdr != 0) || (in_x0 = fas_sched_clock(), 999999999 < in_x0 - CONCAT44(*0x8000004,_segment.ehdr)))
        || (_segment.ehdr < 3)) || (obj.game_load_has_init != 0x1)) goto code_r0x08007208;
    uVar4 = 0x14;
    if (iVar5 != 0) {
        uVar4 = iVar5 - 1;
    }
    uVar10 = uVar4;
    if (0x15 < uVar4) goto code_r0x08007628;
    if (0x540 < (uVar10 << 6 | 0x20)) {
code_r0x0800762c:
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(1,0x8007630);
        (*pcVar6)();
    }
    if (0x1f < *(in_x5 + 0x1c)) goto code_r0x08007628;
    uVar4 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104);
    uVar7 = uVar4;
    if (2 < uVar4) goto code_r0x08007628;
    if (0x53f < uVar10 * 0x40 + uVar7 * 8) goto code_r0x0800762c;
    pcVar6 = obj.glk_minfreq + uVar7 * 4;
    pcVar1 = in_x5 + 0x38;
    if (obj.ceiling_next_update != 0x0) {
        pcVar1 = obj.glk_maxfreq + uVar7 * 4;
    }
    pcVar2 = in_x5 + 0x34;
    if (obj.glk_minfreq_limit != 0x0) {
        pcVar2 = pcVar6;
    }
    uVar3 = *pcVar1;
    uVar4 = *pcVar2;
    if (uVar4 < uVar3) {
code_r0x08007208:
        uVar4 = *in_x4;
        uVar10 = uVar4;
        if (((_segment.ehdr != 0) && (_segment.ehdr != 0)) && (obj.game_load_has_init == 0x1)) {
            if (0x1f < *(in_x5 + 0x1c)) {
code_r0x08007628:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x800762c);
                (*pcVar6)();
            }
            uVar3 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x800e104);
            if ((obj.ceiling_next_update == 0x0) || (*0x80048c8 != '\0')) {
                pcVar6 = in_x5 + 0x38;
            }
            else {
                if (2 < uVar3) goto code_r0x08007628;
                pcVar6 = obj.glk_maxfreq + uVar3 * 4;
            }
            uVar9 = *pcVar6;
            if (obj.glk_minfreq_limit == 0x0) {
                pcVar6 = in_x5 + 0x34;
            }
            else {
                if (2 < uVar3) goto code_r0x08007628;
                pcVar6 = obj.glk_minfreq + uVar3 * 4;
            }
            uVar3 = *(in_x5 + 0x34);
            if (*(in_x5 + 0x34) <= *pcVar6) {
                uVar3 = *pcVar6;
            }
            if (uVar9 == 0) {
                uVar9 = *(in_x5 + 0x38);
            }
            if (uVar4 <= uVar3) {
                uVar4 = uVar3;
            }
            if (uVar4 <= uVar9) {
                uVar9 = uVar4;
            }
            uVar10 = uVar9;
        }
    }
    else {
        in_x0 = 1000000;
        uVar8 = *(uVar10 * 0x40 + 0x80048f0);
        if (uVar8 < 1000000) goto code_r0x08007208;
        in_x0 = *pcVar6;
        uVar11 = *(*(__per_cpu_offset + *(in_x5 + 0x1c) * 8) + 0x8053cc4);
        if (*pcVar6 == 0) {
            *pcVar6 = *(in_x5 + 0x34);
        }
        if (_segment.ehdr * 2 < uVar8 / 1000000) {
            if (*(in_x5 + 0x3c) < uVar4) {
                uVar10 = uVar4;
            }
            else {
                uVar10 = uVar4;
                if (*0x800e000 != 0) {
                    uVar10 = *(in_x5 + 0x38);
                }
            }
        }
        else {
            uVar8 = 0;
            if (uVar11 != 0) {
                uVar8 = (*(uVar10 * 0x40 + 0x80048d0 + uVar7 * 8) * 100) / uVar11;
            }
            uVar10 = uVar4;
            if ((uVar8 <= *(obj.glk_highspeed_load + uVar7 * 4)) &&
               (uVar10 = uVar3, *(obj.glk_lowspeed_load + uVar7 * 4) <= uVar8)) {
                uVar9 = (uVar8 * (uVar4 + (uVar4 >> 3))) / 100;
                if (uVar9 <= uVar4) {
                    uVar4 = uVar9;
                }
                if (uVar3 <= uVar4) {
                    uVar3 = uVar4;
                }
                uVar10 = uVar3;
                if (*0x8004000 != 0) {
                    in_x0 = _printk(0x80013cf,uVar8,uVar10);
                }
            }
        }
        if (uVar10 == 0) goto code_r0x08007208;
    }
    uVar7 = sym.frame_load_enable(in_x0);
    if ((uVar7 & 1) == 0) {
        sym.flw_update_freq_enable();
    }
    else {
        uVar7 = sym.flw_cal_freq(in_x5,arg2,uVar10,arg1);
        uVar8 = sym.flw_update_freq_enable();
        if (((uVar8 & 1) != 0) && (uVar7 != 0)) goto code_r0x08007588;
    }
    uVar7 = uVar10;
code_r0x08007588:
    *in_x4 = uVar7;
    if (uVar7 != uVar12) {
        *in_x6 = 1;
    }
    return;
}




// ===== sym.game_load_exit @ 0x08007630 (size 96) =====



void sym.game_load_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.game_load_has_init = 0x0;
    unregister_oem_freq_hook();
    irq_work_sync(0x8004e58);
    if (*0x8004000 != 0) {
        unregister_sysctl_table();
    }
    *0x8004000 = 0;
    _printk(0x8000e92);
    return;
}




// ===== sym.history_load_open @ 0x08007690 (size 52) =====



void sym.history_load_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.history_load_show.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt,0);
    return;
}




// ===== sym.history_load_show @ 0x080076c4 (size 132) =====



ulong sym.history_load_show(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8004000;
    uVar2 = *0x8004000 + 1;
    if (uVar2 < 0x15) {
        do {
            sym.dump_his_load_info(uVar2,arg1);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 0x15);
        if (iVar1 < 0) {
            return 0;
        }
    }
    uVar2 = 0;
    do {
        sym.dump_his_load_info(uVar2,arg1);
        uVar2 = uVar2 + 1;
    } while (uVar2 <= iVar1);
    return 0;
}




// ===== sym.dump_his_load_info @ 0x08007748 (size 392) =====



void sym.dump_his_load_info(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 % 0x15;
    uVar3 = uVar1;
    if (0x14 < uVar1) {
code_r0x080078cc:
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x80078d0);
        (*pcVar2)();
    }
    if (0x540 < (uVar3 << 6 | 0x20)) goto code_r0x080078c8;
    if (*(uVar3 * 0x40 + 0x80048f0) != 0) {
        seq_printf(arg2,"period %llu: \n");
        if (0 < *0x8004000) {
            uVar4 = uVar3 << 6;
            if (0x540 < (uVar4 | 0x28)) {
code_r0x080078c8:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x80078cc);
                (*pcVar2)();
            }
            seq_printf(arg2,"%c: %llu %lu\t\n",0x6c,*(uVar3 * 0x40 + 0x80048d0),*(uVar3 * 0x40 + 0x80048f8));
            if (1 < *0x8004000) {
                if ((0x540 < (uVar4 | 8)) || (0x540 < (uVar4 | 0x30))) goto code_r0x080078c8;
                seq_printf(arg2,"%c: %llu %lu\t\n",0x6d,*(uVar3 * 0x40 + 0x80048d8),*(uVar3 * 0x40 + 0x8004900));
                if (2 < *0x8004000) {
                    if ((0x540 < (uVar4 | 0x10)) || (0x540 < (uVar4 | 0x38))) goto code_r0x080078c8;
                    seq_printf(arg2,"%c: %llu %lu\t\n",0x62,*(uVar3 * 0x40 + 0x80048e0),*(uVar3 * 0x40 + 0x8004908))
                    ;
                    if (3 < *0x8004000) goto code_r0x080078cc;
                }
            }
        }
        seq_printf(arg2,0x8001721);
    }
    return;
}




// ===== sym.dump_his_load_info_1 @ 0x080078d0 (size 1148) =====



void sym.dump_his_load_info_1(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg1 % 0x65;
    if (0x65 < uVar2) {
code_r0x08007d48:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8007d4c);
        (*pcVar3)();
    }
    iVar11 = 0x8009f50;
    iVar9 = uVar2 * 0x3d0;
    iVar4 = uVar2 * 0x3d0;
    seq_printf(arg2,"{period %llu ms,need_target_delta %d: \n",*(iVar9 + 0x800a280) / 1000000,*(iVar9 + 0x800a318));
    seq_printf(arg2,"running_util = %9llu\n",*(iVar9 + 0x800a290));
    seq_printf(arg2,"no_srt = %12llu, srt = %12llu\n",*(iVar9 + 0x800a298),*(iVar9 + 0x800a2a0));
    if (0 < *0x8004000) {
        iVar12 = 0;
        iVar6 = 0;
        iVar7 = 0;
        iVar9 = 0x8009f70;
        iVar10 = -0x18;
        iVar8 = iVar4 + -0x17f08;
        do {
            seq_printf(arg2,"[%c]: ",*(iVar7 + 0x80013f3));
            if (iVar10 == 0) goto code_r0x08007d48;
            if (((iVar8 + iVar10 + 200U < 0xfffffffffffe7ef0) ||
                (seq_printf(arg2,"cid_rtg: %9llu.",*(iVar11 + iVar4 + 0x2b8)),
                iVar8 + iVar6 + 0x18U < 0xfffffffffffe7ef0)) || (iVar8 + iVar10 + 0x1c0U < 0xfffffffffffe7ef0))
            goto code_r0x08007d44;
            iVar1 = iVar11 + iVar4;
            seq_printf(arg2,"[cid_srt: %9llu, max:%9llu]",*(iVar1 + 0x220),*(iVar1 + 0x3b0));
            if (((iVar8 + iVar6 < 0xfffffffffffe7ef0) || ((iVar8 + iVar12) - 0x1dcU < 0xfffffffffffe7ef0)) ||
               ((iVar8 + iVar12) - 0x1d0U < 0xfffffffffffe7ef0)) goto code_r0x08007d44;
            seq_printf(arg2,"[flw %9llu %9lu avg:%9lu]\t",*(iVar1 + 0x208),*(iVar9 + iVar4 + 0xc),
                       *(iVar9 + iVar4 + 0x18));
            if (((iVar8 + iVar10) - 0x1e8U < 0xfffffffffffe7ef0) || ((iVar8 + iVar12) - 0x1e8U < 0xfffffffffffe7ef0))
            goto code_r0x08007d44;
            seq_printf(arg2,"%9llu %9lu.\n",*(iVar11 + iVar4 + 8),*(iVar9 + iVar4));
            iVar10 = iVar10 + 8;
            iVar6 = iVar6 + 8;
            iVar11 = iVar11 + 8;
            iVar12 = iVar12 + 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 4;
        } while (iVar7 < *0x8004000);
    }
    iVar11 = 0x8009f98;
    iVar5 = 0;
    iVar10 = 0;
    iVar9 = iVar4 + -0x17db8;
    iVar8 = 0x800a188;
    iVar6 = -0x1c0;
    while( true ) {
        seq_printf(arg2,"cpu{%d",iVar5);
        if ((((iVar9 + iVar10) - 0x120U < 0xfffffffffffe7ef0) || ((iVar9 + iVar10) - 0xe0U < 0xfffffffffffe7ef0)) ||
           (iVar9 + iVar10 < 0xfffffffffffe7ef0)) break;
        iVar12 = iVar8 + iVar4;
        seq_printf(arg2,"[rtg:%9llu, load:%12llu]wake:%9llu,lock:%9llu|",*(iVar8 + iVar4),*(iVar12 + 0x40),
                   *(iVar12 + 0x120),*(iVar12 + 0x98));
        if (0x1810f < iVar4 + iVar6 + 0x208U) break;
        seq_printf(arg2,"%4d\t",*(iVar11 + iVar4));
        if ((iVar9 + iVar6) - 0x148U < 0xfffffffffffe7ef0) break;
        seq_printf(arg2,"%4d\t",*(iVar11 + iVar4 + 8));
        if ((iVar9 + iVar6) - 0x140U < 0xfffffffffffe7ef0) break;
        seq_printf(arg2,"%4d\t",*(iVar11 + iVar4 + 0x10));
        if ((iVar9 + iVar6) - 0x138U < 0xfffffffffffe7ef0) break;
        seq_printf(arg2,"%4d\t",*(iVar11 + iVar4 + 0x18));
        if ((iVar9 + iVar6) - 0x130U < 0xfffffffffffe7ef0) break;
        seq_printf(arg2,"%4d\t",*(iVar11 + iVar4 + 0x20));
        if ((iVar9 + iVar6) - 0x128U < 0xfffffffffffe7ef0) break;
        seq_printf(arg2,"%4d\t",*(iVar11 + iVar4 + 0x28));
        if ((iVar9 + iVar6) - 0x120U < 0xfffffffffffe7ef0) break;
        seq_printf(arg2,"%4d\t",*(iVar11 + iVar4 + 0x30));
        seq_printf(arg2,0x800165d);
        iVar10 = iVar10 + 8;
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 8;
        iVar6 = iVar6 + 0x38;
        iVar11 = iVar11 + 0x38;
        if (iVar10 == 0x40) {
            seq_printf(arg2,0x800165d);
            return;
        }
    }
code_r0x08007d44:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8007d48);
    (*pcVar3)();
}




// ===== sym.cpu_load_open @ 0x08007d4c (size 52) =====



void sym.cpu_load_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.cpu_load_show.19e83fcc276c88ae3714e9138ecae7ef.cfi_jt,0);
    return;
}




// ===== sym.cpu_load_show @ 0x08007d80 (size 660) =====



ulong sym.cpu_load_show(int64_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint32_t extraout_w8;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = 0x14;
    if (*0x8004000 != 0) {
        uVar3 = *0x8004000 - 1;
    }
    if (uVar3 < 0x15) {
        if (0x540 < (uVar3 << 6 | 0x20)) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x8008014);
            (*pcVar2)();
        }
        seq_printf(arg1,"Period :%llu\n",*(uVar3 * 0x40 + 0x80048f0));
        if (0 < *0x8004000) {
            uVar5 = 0;
            iVar6 = 0x8004e20;
            do {
                seq_printf(arg1,"---cluster %d--- \n",uVar5 & 0xffffffff);
                uVar4 = 0xffffffff;
                while( true ) {
                    uVar3 = cpumask_next(uVar4,iVar6);
                    *arg1 = extraout_w8;
                    if (extraout_w8 <= uVar3) break;
                    if (0x1f < uVar3) goto code_r0x0800800c;
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar4 = uVar3;
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e088) / *0x8004000;
                    }
                    seq_printf(arg1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e098) / *0x8004000;
                    }
                    seq_printf(arg1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0a8) / *0x8004000;
                    }
                    seq_printf(arg1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0b8) / *0x8004000;
                    }
                    seq_printf(arg1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0c8) / *0x8004000;
                    }
                    seq_printf(arg1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0d8) / *0x8004000;
                    }
                    seq_printf(arg1,"%9d \t",uVar1);
                    if (*0x8004000 == 0) {
                        *0x8004000 = 1;
                    }
                    uVar1 = 0;
                    if (*0x8004000 != 0) {
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x800e0e8) / *0x8004000;
                    }
                    seq_printf(arg1,"%9d \t",uVar1);
                }
                seq_printf(arg1,0x8001721);
                if (uVar5 == 3) goto code_r0x0800800c;
                uVar5 = uVar5 + 1;
                iVar6 = uVar5 * 8 + 0x8004e20;
            } while (uVar5 < *0x8004000);
        }
        return 0;
    }
code_r0x0800800c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8008010);
    (*pcVar2)();
}




// ===== sym.proc_glk_dotload @ 0x08008014 (size 404) =====



int sym.proc_glk_dotload(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 8);
    mutex_lock(obj.ceiling_enable);
    if (*(arg1 + 0x10) != 0xc) {
        *(arg1 + 0x10) = 0xc;
    }
    if (arg2 == 0) {
        iVar1 = proc_dointvec(arg1,0,arg3,arg4);
    }
    else {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0xc);
        if (iVar2 == 0) {
            iVar1 = -0xc;
        }
        else {
            memcpy(iVar2,uVar3,*(arg1 + 0x10));
            iVar1 = proc_dointvec(arg1,arg2 & 0xffffffff,arg3,arg4);
            if (iVar1 != 0) {
                memcpy(uVar3,iVar2,*(arg1 + 0x10));
            }
            kfree(iVar2);
        }
    }
    mutex_unlock(obj.ceiling_enable);
    if (*0x8004000 != 0) {
        _printk(0x80010fb,0,_obj.glk_lowspeed_load,_obj.glk_highspeed_load);
        _printk(0x80010fb,1,*0x8000ab0,*0x8000aa4);
        _printk(0x80010fb,2,*0x8000ab4,*0x8000aa8);
    }
    return iVar1;
}




// ===== sym.proc_glk_dofreq @ 0x080081a8 (size 396) =====



int sym.proc_glk_dofreq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 8);
    mutex_lock(obj.ceiling_enable);
    if (*(arg1 + 0x10) != 0xc) {
        *(arg1 + 0x10) = 0xc;
    }
    if (arg2 == 0) {
        iVar1 = proc_dointvec(arg1,0,arg3,arg4);
    }
    else {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0xc);
        if (iVar2 == 0) {
            iVar1 = -0xc;
        }
        else {
            memcpy(iVar2,uVar3,*(arg1 + 0x10));
            iVar1 = proc_dointvec(arg1,arg2 & 0xffffffff,arg3,arg4);
            if (iVar1 != 0) {
                memcpy(uVar3,iVar2,*(arg1 + 0x10));
            }
            kfree(iVar2);
        }
    }
    mutex_unlock(obj.ceiling_enable);
    if (*0x8004000 != 0) {
        _printk(0x80017d9,0,_obj.glk_minfreq,_obj.glk_minfreq);
        _printk(0x80017d9,1,*0x8000770,*0x8000770);
        _printk(0x80017d9,2,*0x8000774,*0x8000774);
    }
    return iVar1;
}




// ===== sym.frame_load_enable @ 0x08008334 (size 64) =====



uint8_t sym.frame_load_enable(int64_t arg1)

{
    if (_segment.ehdr != 0) {
        return obj.frame_load_has_init & *0x8004000 != 0;
    }
    return 0;
}




// ===== sym.flw_update_freq_enable @ 0x08008374 (size 72) =====



uint8_t sym.flw_update_freq_enable(void)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    if (_segment.ehdr != 0) {
        uVar1 = obj.frame_load_has_init & *0x8004000 != 0;
    }
    return uVar1 & *0x8004000 != 0;
}




// ===== sym.is_rcal_task @ 0x080083bc (size 144) =====



uint32_t sym.is_rcal_task(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr == 0) || (obj.frame_load_has_init != 0x1 || *0x8004000 == 0)) {
        uVar1 = 0;
    }
    else {
        iVar2 = get_mi_task_struct();
        uVar1 = 0;
        if ((iVar2 != 0) && (iVar2 != -0xe8)) {
            uVar1 = (((*(iVar2 + 0xec) >> 9 ^ 0xffffffff) & 1) != 0 || arg2 != 0) & *(iVar2 + 0xec) >> 8;
        }
    }
    return uVar1;
}




// ===== sym.set_flw_flag @ 0x0800844c (size 180) =====



void sym.set_flw_flag(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) {
        iVar1 = get_mi_task_struct();
        if ((iVar1 != 0) && (iVar1 != -0xe8)) {
            *(iVar1 + 0xec) = (*(iVar1 + 0xec) | arg2) & (arg3 ^ 0xffffffff);
        }
        if (*0x8004000 == 2) {
            _printk(0x8000fb0,arg1 + 0x7a8,*(arg1 + 0x5d8),arg2 & 0xffffffff,arg3 & 0xffffffff);
        }
    }
    return;
}




// ===== sym.game_wake_task @ 0x08008500 (size 320) =====



void sym.game_wake_task(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (obj.frame_load_has_init == 0x1 && *0x8004000 != 0) {
            iVar2 = sp_el0;
            iVar1 = get_mi_task_struct(iVar2);
            if ((iVar1 != 0) && (iVar1 != -0xe8)) {
                *(iVar1 + 0xec) = *(iVar1 + 0xec) | 0x200;
            }
            if (*0x8004000 == 2) {
                _printk(0x8000fb0,iVar2 + 0x7a8,*(iVar2 + 0x5d8),0x200,0);
            }
        }
        if (((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1)) && (*0x8004000 != 0)) {
            iVar2 = get_mi_task_struct(arg1);
            if ((iVar2 != 0) && (iVar2 != -0xe8)) {
                *(iVar2 + 0xec) = *(iVar2 + 0xec) & 0xfffffcff | 0x100;
            }
            if (*0x8004000 == 2) {
                _printk(0x8000fb0,arg1 + 0x7a8,*(arg1 + 0x5d8),0x100,0x200);
            }
        }
    }
    iVar2 = get_mi_task_struct(arg1);
    if (iVar2 != 0) {
        mi_set_fas_req();
    }
    return;
}




// ===== sym.game_dequeue_task @ 0x08008640 (size 632) =====



void sym.game_dequeue_task(ulong noname_0,int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.is_render_thread(arg1);
    if (((((iVar2 == 0) || (_segment.ehdr == 0)) || (obj.frame_load_has_init != 0x1)) ||
        ((*0x8004000 == 0 || (iVar3 = get_mi_task_struct(arg1), iVar3 == 0)))) ||
       ((iVar3 == -0xe8 || ((*(iVar3 + 0xec) & 0x300) != 0x100)))) {
        iVar3 = get_mi_task_struct(arg1);
        if ((iVar3 != 0) && (iVar3 != -0xe8)) {
            if (_segment.ehdr == 0) goto code_r0x08008874;
            if ((*(iVar3 + 0xec) >> 6 & 1) != 0) {
                if (*0x8004000 != 0) {
                    iVar3 = walt_sched_clock();
                    bVar1 = *0x8004000 == 0xc;
                    *0x8004000 = iVar3;
                    if (bVar1) {
                        _printk(0x8000fd1,iVar3);
                    }
                }
                *0x8004ee0 = '\x01';
            }
        }
    }
    else {
        iVar3 = walt_sched_clock();
        bVar1 = *0x8004000 == 0xc;
        *0x8004000 = iVar3;
        if (bVar1) {
            _printk(0x8000f89,iVar3);
        }
        if ((*0x8004ee0 == '\x01') && (*0x8004000 == 0)) {
            iVar3 = walt_sched_clock();
            bVar1 = *0x8004000 == 0xc;
            *0x8004000 = iVar3;
            if (bVar1) {
                _printk(0x8000e40,iVar3);
            }
        }
    }
    if ((((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1)) && (*0x8004000 != 0)) &&
       (((iVar3 = get_mi_task_struct(arg1), iVar3 != 0 && (iVar3 != -0xe8)) && ((*(iVar3 + 0xec) & 0x300) == 0x100))))
    {
        *0x8004000 = 1;
        if ((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1)) {
            iVar3 = get_mi_task_struct(arg1);
            if ((iVar3 != 0) && (iVar3 != -0xe8)) {
                *(iVar3 + 0xec) = *(iVar3 + 0xec) | 0x200;
            }
            if (*0x8004000 != 2) {
                *0x8004000 = CONCAT44(*0x8004004,1);
                goto code_r0x08008874;
            }
            _printk(0x8000fb0,arg1 + 0x7a8,*(arg1 + 0x5d8),0x200,0);
        }
        iVar2 = *0x8004000;
        *0x8004000 = CONCAT44(*0x8004004,1);
        if (iVar2 == 2) {
            _printk(0x800113d,*(arg1 + 0x5d8),arg1 + 0x7a8);
        }
    }
code_r0x08008874:
    iVar3 = get_mi_task_struct(arg1);
    if (iVar3 != 0) {
        mi_clean_fas_req();
    }
    return;
}




// ===== sym.game_update_lock_time @ 0x080088b8 (size 292) =====



void sym.game_update_lock_time(int64_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *(arg1 + 0xb48);
    iVar3 = get_mi_task_struct();
    uVar10 = *(arg1 + 0x58);
    uVar4 = walt_sched_clock();
    if (iVar3 == 0) {
        return;
    }
    if (iVar3 == -0xe8) {
        return;
    }
    uVar1 = uVar8;
    if (*(iVar3 + 0x148) != 0) {
        uVar1 = *(iVar3 + 0x148);
    }
    uVar9 = uVar10;
    if (uVar8 < uVar1) {
        if (uVar1 < uVar4) {
            if (7 < uVar9) goto code_r0x080089d8;
            uVar5 = 1;
            uVar6 = uVar1;
code_r0x08008944:
            iVar7 = (uVar10 & 0xffffffff) * 8;
            *(iVar7 + 0x8004ef8) = (uVar4 - uVar6) + *(iVar7 + 0x8004ef8);
        }
        else {
            uVar5 = 1;
        }
    }
    else {
        if (uVar8 < uVar4) {
            if (7 < uVar9) goto code_r0x080089d8;
            uVar5 = 2;
            uVar6 = uVar8;
            goto code_r0x08008944;
        }
        uVar5 = 2;
    }
    if (*0x8004000 == 10) {
        if (7 < uVar9) {
code_r0x080089d8:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x80089dc);
            (*pcVar2)();
        }
        _printk(0x80011fd,uVar10 & 0xffffffff,*((uVar10 & 0xffffffff) * 8 + 0x8004ef8),uVar4,uVar1,uVar8,uVar5);
    }
    *(iVar3 + 0x148) = 0;
    *(iVar3 + 0xec) = *(iVar3 + 0xec) & 0xfffffdff;
    return;
}




// ===== sym.update_frame_ravg @ 0x080089e0 (size 176) =====



void sym.update_frame_ravg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) &&
       ((obj.frame_load_has_init == 0x1 && *0x8004000 != 0) && CONCAT44(*0x8000004,_segment.ehdr) != 0)) {
        sym.update_task_frame_load(arg1,*(arg2 + 0xba8),arg3,arg4);
        sym.update_whole_frame_load(arg1,arg2,arg3 & 0xffffffff,arg4);
    }
    return;
}




// ===== sym.update_task_frame_load @ 0x08008a90 (size 580) =====



void sym.update_task_frame_load(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    code *pcVar4;
    int64_t iVar5;
    int in_w4;
    code *pcVar6;
    ulong *in_x18;
    int64_t unaff_x19;
    code *pcVar7;
    code *pcVar8;
    code *pcVar9;
    code *pcVar10;
    ulong unaff_x30;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar2 = *0x8004000;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    if (0x15 < *0x8004000) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8008ca8);
        (*pcVar4)();
    }
    pcVar4 = obj.frame_load_history;
    pcVar10 = *(arg1 + 0xb48);
    pcVar8 = arg3 & 0xffffffff;
    pcVar7 = *(*0x8004000 * 0x3d0 + 0x8005278);
    pcVar9 = *(*0x8004000 * 0x3d0 + 0x8005268);
    pcStack_70 = pcVar7;
    iVar5 = get_mi_task_struct();
    if (iVar5 == 0) goto code_r0x08008bf0;
    unaff_x19 = iVar5;
    if (iVar5 == -0xe8) goto code_r0x08008bf0;
    arg3 = arg1 + 0xb40;
    if (pcVar9 <= arg4) {
        while( true ) {
            pcVar3 = pcStack_70;
            if ((pcVar8 >> 2 & 1) == 0) {
                if (((pcVar10 < pcVar9) && (in_w4 != 0)) && ((*(arg1 + 0x3c) >> 1 & 1) == 0)) {
                    iVar5 = get_scale_exec_time(0,arg2);
                    pcVar7 = *(unaff_x19 + 0x128) + iVar5;
                    if (pcVar3 < pcVar7) {
                        pcVar7 = pcVar3;
                    }
                    *(unaff_x19 + 0x128) = 0;
                    *(unaff_x19 + 0x130) = pcVar7;
                    pcVar7 = pcVar3;
                }
            }
            else {
                if (pcVar9 < pcVar10 || pcVar9 - pcVar10 == 0) {
                    iVar5 = get_scale_exec_time(arg4 - pcVar10,arg2);
                    pcVar6 = *(unaff_x19 + 0x128) + iVar5;
                    pcVar7 = pcVar3;
                    if (pcVar3 < pcVar6) {
                        pcVar6 = pcVar3;
                    }
                }
                else {
                    pcVar7 = arg2 & 0xffffffff;
                    if ((in_w4 != 0) && ((*(arg1 + 0x3c) >> 1 & 1) == 0)) {
                        iVar5 = get_scale_exec_time(pcVar9 - pcVar10,pcVar7);
                        pcVar4 = *(unaff_x19 + 0x128) + iVar5;
                        if (pcVar3 < pcVar4) {
                            pcVar4 = pcVar3;
                        }
                        *(unaff_x19 + 0x128) = 0;
                        *(unaff_x19 + 0x130) = pcVar4;
                        pcVar4 = arg3;
                    }
                    iVar5 = get_scale_exec_time(arg4 - pcVar9,pcVar7);
                    pcVar6 = *(unaff_x19 + 0x128) + iVar5;
                    pcVar8 = pcVar3;
                    if (pcVar3 < pcVar6) {
                        pcVar6 = pcVar3;
                    }
                }
                *(unaff_x19 + 0x128) = pcVar6;
            }
code_r0x08008bf0:
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_68) break;
            __stack_chk_fail();
            iVar5 = unaff_x19;
code_r0x08008cac:
            _printk(0x8001700);
            unaff_x19 = iVar5;
            if (pcVar9 < pcVar7) {
code_r0x08008cc8:
                pcVar9 = NULL;
                pcStack_70 = NULL;
            }
            else {
code_r0x08008c44:
                uVar1 = 0x14;
                if (uVar2 != 0) {
                    uVar1 = uVar2 - 1;
                }
                pcVar9 = *(pcVar4 + uVar1 * 0x3d0 + 0x328);
                pcStack_70 = *(pcVar4 + uVar1 * 0x3d0 + 0x338);
                if (arg4 < pcVar9) {
                    pcVar9 = sym.adjust_frame_start_slowpath(arg4,&pcStack_70);
                    pcVar7 = arg3;
                }
            }
        }
        return;
    }
    if (*0x8004000 == 5) goto code_r0x08008cac;
    if (pcVar9 < pcVar7) goto code_r0x08008cc8;
    goto code_r0x08008c44;
}




// ===== sym.update_whole_frame_load @ 0x08008cd4 (size 3244) =====


void sym.update_whole_frame_load(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *arg3_00;
    int64_t *arg2_00;
    int64_t *arg2_01;
    char cVar1;
    int64_t *arg2_02;
    code *pcVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    ulong uVar12;
    ulong uVar13;
    ulong uVar14;
    int64_t in_x4;
    ulong uVar15;
    uint64_t in_x5;
    ulong uVar16;
    ulong uVar17;
    ulong uVar18;
    ulong uVar19;
    ulong uVar20;
    ulong uVar21;
    ulong uVar22;
    ulong uVar23;
    ulong uVar24;
    ulong uVar25;
    ulong *in_x18;
    int64_t *piVar26;
    ulong uVar27;
    ulong uVar28;
    int64_t *piVar29;
    int64_t *arg2_03;
    uint32_t uVar30;
    int64_t *piVar31;
    code *pcVar32;
    int64_t *piVar33;
    int64_t *piVar34;
    int64_t *piVar35;
    ulong unaff_x30;
    ulong uVar36;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t *piStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    int64_t *piStack_90;
    uint64_t uStack_88;
    int64_t *piStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar30 = *0x8004000;
    if (*0x8004000 < 0x16) {
        pcVar2 = obj.frame_load_history;
        piVar35 = *(arg2 + 0xaa0);
        iVar8 = (*0x8004000 & 0xffffffff) * 0x3d0;
        piVar34 = *(arg1 + 0xb48);
        piVar29 = in_x5 & 0xffffffff;
        piVar31 = *(iVar8 + 0x8005268);
        piStack_70 = *(iVar8 + 0x8005278);
        iVar8 = get_mi_task_struct();
        piVar33 = NULL;
        if (iVar8 != 0) {
            piVar33 = iVar8 + 0xe8;
        }
        if (*(arg2 + 0xba8) < 0x20) {
            piVar26 = *(__per_cpu_offset + *(arg2 + 0xba8) * 8);
            uVar6 = is_new_task(arg1);
            pcVar32 = NULL;
            arg2_03 = piVar29;
            iStack_98 = in_x4;
            arg2_02 = piStack_90;
            if (piVar33 == NULL) goto code_r0x08009494;
            pcVar32 = mi_runqueues;
            arg2_03 = piVar26 + 0x100a638;
            uStack_88 = *(arg2 + 0xba8);
            piVar26 = piVar26[0x100a663];
            piStack_a8 = piVar35;
            uStack_9c = uVar6;
            piStack_90 = piVar33;
            if (arg4 < piVar31) {
                if (*0x8004000 == 5) goto code_r0x080097fc;
                goto code_r0x08009624;
            }
            do {
                bVar3 = piVar34 <= piVar31;
                piVar33 = piVar31 - piVar34;
                bVar4 = piStack_70 <= piVar33;
                if ((piVar26 < piVar31) && (piVar31 != arg2_03[0x2a])) {
                    if (0x1f < uStack_88) break;
                    pcVar32 = pcVar32 + *(__per_cpu_offset + uStack_88 * 8);
                    if (piVar31 - piVar26 < piStack_70) {
                        uStack_b8 = *(pcVar32 + 0x68);
                        uVar22 = *(pcVar32 + 0x38);
                        uVar19 = *(pcVar32 + 0x40);
                        uVar21 = *(pcVar32 + 0x118);
                        uVar36 = *(pcVar32 + 0x120);
                        uVar20 = *(pcVar32 + 0xa8);
                        uVar18 = *(pcVar32 + 0xb0);
                        uVar27 = *(pcVar32 + 0x48);
                        uVar15 = *(pcVar32 + 0x50);
                        uVar17 = *(pcVar32 + 0x128);
                        uVar14 = *(pcVar32 + 0x130);
                        uVar16 = *(pcVar32 + 0xb8);
                        uVar13 = *(pcVar32 + 0xc0);
                        uVar28 = *(pcVar32 + 0x58);
                        uVar25 = *(pcVar32 + 0x60);
                        uVar12 = *(pcVar32 + 0x138);
                        uVar24 = *(pcVar32 + 0x140);
                        uVar11 = *(pcVar32 + 200);
                        uVar23 = *(pcVar32 + 0xd0);
                        uStack_b0 = *(pcVar32 + 0x148);
                    }
                    else {
                        uVar23 = 0;
                        uVar24 = 0;
                        uVar25 = 0;
                        uVar11 = 0;
                        uVar12 = 0;
                        uVar28 = 0;
                        uVar13 = 0;
                        uVar14 = 0;
                        uVar15 = 0;
                        uVar16 = 0;
                        uVar17 = 0;
                        uVar18 = 0;
                        uVar36 = 0;
                        uVar19 = 0;
                        uVar20 = 0;
                        uVar21 = 0;
                        uVar22 = 0;
                        *(pcVar32 + 0x60) = 0;
                        *(pcVar32 + 0x68) = 0;
                        *(pcVar32 + 0x50) = 0;
                        *(pcVar32 + 0x58) = 0;
                        *(pcVar32 + 0x40) = 0;
                        *(pcVar32 + 0x48) = 0;
                        *(pcVar32 + 0x38) = 0;
                        uVar27 = 0;
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        *(pcVar32 + 0xd0) = 0;
                        *(pcVar32 + 0xd8) = 0;
                        *(pcVar32 + 0xc0) = 0;
                        *(pcVar32 + 200) = 0;
                        *(pcVar32 + 0xb0) = 0;
                        *(pcVar32 + 0xb8) = 0;
                        *(pcVar32 + 0xa8) = 0;
                        *(pcVar32 + 0x118) = 0;
                        *(pcVar32 + 0x120) = 0;
                        *(pcVar32 + 0x128) = 0;
                        *(pcVar32 + 0x130) = 0;
                        *(pcVar32 + 0x138) = 0;
                        *(pcVar32 + 0x140) = 0;
                        *(pcVar32 + 0x148) = 0;
                    }
                    *pcVar32 = uVar22;
                    *(pcVar32 + 8) = uVar19;
                    *(pcVar32 + 0xe0) = uVar21;
                    *(pcVar32 + 0xe8) = uVar36;
                    *(pcVar32 + 0x10) = uVar27;
                    *(pcVar32 + 0x18) = uVar15;
                    piVar35 = 0xa;
                    *(pcVar32 + 0x30) = uStack_b8;
                    *(pcVar32 + 0x38) = 0;
                    *(pcVar32 + 0x70) = uVar20;
                    *(pcVar32 + 0x78) = uVar18;
                    *(pcVar32 + 0x40) = 0;
                    *(pcVar32 + 0x48) = 0;
                    *(pcVar32 + 0x110) = uStack_b0;
                    *(pcVar32 + 0x118) = 0;
                    *(pcVar32 + 0x120) = 0;
                    *(pcVar32 + 0x128) = 0;
                    *(pcVar32 + 0xb0) = 0;
                    *(pcVar32 + 0xb8) = 0;
                    *(pcVar32 + 0xf0) = uVar17;
                    *(pcVar32 + 0xf8) = uVar14;
                    *(pcVar32 + 0x80) = uVar16;
                    *(pcVar32 + 0x88) = uVar13;
                    *(pcVar32 + 0x50) = 0;
                    *(pcVar32 + 0x58) = 0;
                    *(pcVar32 + 0x130) = 0;
                    *(pcVar32 + 0x138) = 0;
                    *(pcVar32 + 0xc0) = 0;
                    *(pcVar32 + 200) = 0;
                    *(pcVar32 + 0x20) = uVar28;
                    *(pcVar32 + 0x28) = uVar25;
                    *(pcVar32 + 0x100) = uVar12;
                    *(pcVar32 + 0x108) = uVar24;
                    *(pcVar32 + 0x90) = uVar11;
                    *(pcVar32 + 0x98) = uVar23;
                    *(pcVar32 + 0x60) = 0;
                    *(pcVar32 + 0x68) = 0;
                    *(pcVar32 + 0x140) = 0;
                    *(pcVar32 + 0x148) = 0;
                    *(pcVar32 + 0xa0) = *(pcVar32 + 0xd8);
                    *(pcVar32 + 0xa8) = 0;
                    *(pcVar32 + 0xd0) = 0;
                    *(pcVar32 + 0xd8) = 0;
                    arg2_03[0x2a] = piVar31;
                }
                else {
                    piVar35 = NULL;
                }
                arg2_02 = arg2_03 + 7;
                arg3_00 = arg1 + 0xb40;
                arg2_03[0x2b] = arg4;
                arg2_00 = arg2_03 + 0x1c;
                if ((arg3 >> 1 & 1) == 0) {
                    piVar26 = piVar35;
                    if (piVar29 == 2) {
                        iVar7 = sym.is_render_thread(arg1);
                        if ((iVar7 == 0) || (uVar9 = sym.is_wait_lock(arg1), (uVar9 & 1) != 0)) {
                            iVar10 = get_mi_task_struct(arg1);
                            iVar8 = 0;
                            if (iVar10 != 0) {
                                iVar8 = iVar10 + 0xe8;
                            }
                            if (((iVar8 != 0) && (_segment.ehdr != 0)) && ((*(iVar8 + 4) >> 6 & 1) != 0)) {
                                uVar22 = sp_el0;
                                *0x8004ee0 = 0;
                                iVar8 = get_mi_task_struct(uVar22);
                                if ((iVar8 != 0) && (*(iVar8 + 0xc) == *0x8004000)) {
                                    sym.is_render_thread(uVar22);
                                    return;
                                }
                                goto code_r0x0800913c;
                            }
                        }
                        else {
                            uVar22 = sp_el0;
                            iVar7 = sym.game_vip_task(uVar22);
                            if (iVar7 != 0) {
                                sym.update_ren_sleep_ts(*0x8004000,arg4,arg3_00,arg1);
                            }
code_r0x0800913c:
                            *0x8004000 = 0;
                            piVar31 = piVar35;
                        }
                        iVar8 = walt_sched_clock();
                        iVar7 = *0x8004000;
                        piStack_90[10] = iVar8;
                        piVar34 = arg3_00;
                        if ((iVar7 == 7) && (iVar7 = sym.game_vip_task(arg1), iVar7 != 0)) {
                            _printk(0x80014fa,arg1 + 0x7a8,piStack_90[10]);
                        }
                    }
                }
                else {
                    arg2_01 = arg2_03 + 0x15;
                    piVar26 = arg2_03 + 0x23;
                    uVar30 = piVar35;
                    if (piVar31 < piVar34) {
                        if (((iStack_98 == 0) || ((*(arg1 + 0x3c) >> 1 & 1) == 0)) ||
                           (iVar7 = cpu_is_waiting_on_io(arg2), iVar8 = iStack_98, iVar7 != 0)) {
                            iVar8 = arg4 - piVar34;
                        }
                        iVar8 = get_scale_exec_time(iVar8,uStack_88 & 0xffffffff,arg3_00);
                        sym.frame_load_update(arg1,arg2_02,iVar8,uStack_88 & 0xffffffff);
                        if ((arg3 & 1U) != 0) {
                            sym.frame_load_update(arg1,piVar26,iVar8,uStack_88 & 0xffffffff);
                        }
                        if ((uStack_9c & 1) != 0) {
                            sym.frame_load_update(arg1,arg2_01,iVar8,uStack_88 & 0xffffffff);
                        }
                        piVar26 = uVar30 | 1;
                        piVar31 = piVar35;
                        piVar33 = arg2_01;
                    }
                    else if (piStack_a8 == arg1) {
                        if (((iStack_98 == 0) || ((*(arg1 + 0x3c) >> 1 & 1) == 0)) ||
                           (iVar7 = cpu_is_waiting_on_io(arg2), iVar7 != 0)) {
                            if (bVar3 && bVar4) {
                                iVar8 = get_scale_exec_time(piStack_70,uStack_88 & 0xffffffff);
                                uVar30 = uVar30 | 5;
                            }
                            else {
                                uVar30 = uVar30 | 4;
                                iVar8 = get_scale_exec_time(piVar33,uStack_88 & 0xffffffff);
                            }
                            piVar34 = uVar30;
                            sym.frame_load_update(arg1,arg2_03,iVar8,uStack_88 & 0xffffffff);
                            if ((arg3 & 1U) != 0) {
                                sym.frame_load_update(arg1,arg2_00,iVar8,uStack_88 & 0xffffffff);
                            }
                            if ((uStack_9c & 1) != 0) {
                                sym.frame_load_update(arg1,arg2_03 + 0xe,iVar8,uStack_88 & 0xffffffff);
                            }
                            iVar8 = get_scale_exec_time(arg4 - piVar31,uStack_88 & 0xffffffff,arg3_00);
                            sym.frame_load_update(arg1,arg2_02,iVar8,uStack_88 & 0xffffffff);
                            if ((arg3 & 1U) != 0) {
                                sym.frame_load_update(arg1,piVar26,iVar8,uStack_88 & 0xffffffff);
                            }
                            piVar26 = piVar34;
                            if ((uStack_9c & 1) != 0) {
                                sym.frame_load_update(arg1,arg2_01,iVar8,uStack_88 & 0xffffffff);
                            }
                        }
                        else {
                            if ((*(arg1 + 0x3c) >> 1 & 1) == 0) {
    //WARNING: Does not return
                                pcVar2 = SoftwareBreakpoint(0x800,0x80098bc);
                                (*pcVar2)();
                            }
                            piVar34 = piVar31 - (arg4 - iStack_98);
                            if (piVar31 < arg4 - iStack_98) {
                                iVar8 = get_scale_exec_time(iStack_98,uStack_88 & 0xffffffff);
                                sym.frame_load_update(arg1,arg2_02,iVar8,uStack_88 & 0xffffffff);
                                if ((arg3 & 1U) != 0) {
                                    sym.frame_load_update(arg1,piVar26,iVar8,uStack_88 & 0xffffffff);
                                }
                                piVar26 = uVar30 + 6;
                                piVar34 = arg3_00;
                            }
                            else {
                                iStack_98 = CONCAT44(iStack_98._4_4_,uVar30 + 7);
                                piVar35 = piStack_70;
                                if (piVar34 <= piStack_70) {
                                    piVar35 = piVar34;
                                }
                                iVar8 = get_scale_exec_time(piVar35,uStack_88 & 0xffffffff);
                                sym.frame_load_update(arg1,arg2_03,iVar8,uStack_88 & 0xffffffff);
                                if ((arg3 & 1U) != 0) {
                                    sym.frame_load_update(arg1,arg2_00,iVar8,uStack_88 & 0xffffffff);
                                }
                                iVar8 = get_scale_exec_time(arg4 - piVar31,uStack_88 & 0xffffffff,arg3_00);
                                sym.frame_load_update(arg1,arg2_02,iVar8,uStack_88 & 0xffffffff);
                                if ((arg3 & 1U) != 0) {
                                    sym.frame_load_update(arg1,piVar26,iVar8,uStack_88 & 0xffffffff);
                                }
                                piVar26 = uVar30 + 7;
                                piVar34 = arg3_00;
                            }
                        }
                    }
                    else {
                        if (bVar3 && bVar4) {
                            iVar8 = get_scale_exec_time(piStack_70,uStack_88 & 0xffffffff);
                            uVar30 = uVar30 + 3;
                        }
                        else {
                            uVar30 = uVar30 + 2;
                            iVar8 = get_scale_exec_time(piVar33,uStack_88 & 0xffffffff);
                        }
                        piVar34 = uVar30;
                        sym.frame_load_update(arg1,arg2_03,iVar8,uStack_88 & 0xffffffff);
                        if ((arg3 & 1U) != 0) {
                            sym.frame_load_update(arg1,arg2_00,iVar8,uStack_88 & 0xffffffff);
                        }
                        if ((uStack_9c & 1) != 0) {
                            sym.frame_load_update(arg1,arg2_03 + 0xe,iVar8,uStack_88 & 0xffffffff);
                        }
                        iVar8 = get_scale_exec_time(arg4 - piVar31,uStack_88 & 0xffffffff,arg3_00);
                        sym.frame_load_update(arg1,arg2_02,iVar8,uStack_88 & 0xffffffff);
                        if ((arg3 & 1U) != 0) {
                            sym.frame_load_update(arg1,piVar26,iVar8,uStack_88 & 0xffffffff);
                        }
                        piVar26 = piVar34;
                        if ((uStack_9c & 1) != 0) {
                            sym.frame_load_update(arg1,arg2_01,iVar8,uStack_88 & 0xffffffff);
                        }
                    }
                }
                pcVar32 = piVar29 & 0xffffffff;
                uVar30 = piVar33;
                pcVar2 = 0x8004000;
                if ((*(piStack_90 + 4) >> 9 & 1) != 0) {
                    *(piStack_90 + 4) = *(piStack_90 + 4) & 0xfffffcff;
                }
                if (0x1f < uStack_88) break;
                iVar8 = *(__per_cpu_offset + uStack_88 * 8);
                *(obj.load_info_1 + iVar8) = *arg2_03;
                *(iVar8 + 0x800e140) = arg2_03[0x1c];
                *(iVar8 + 0x800e178) = arg2_03[7];
                *(iVar8 + 0x800e110) = arg2_03[1];
                *(iVar8 + 0x800e148) = arg2_03[0x1d];
                *(iVar8 + 0x800e180) = arg2_03[8];
                *(iVar8 + 0x800e118) = arg2_03[2];
                *(iVar8 + 0x800e150) = arg2_03[0x1e];
                *(iVar8 + 0x800e188) = arg2_03[9];
                *(iVar8 + 0x800e120) = arg2_03[3];
                *(iVar8 + 0x800e158) = arg2_03[0x1f];
                *(iVar8 + 0x800e190) = arg2_03[10];
                *(iVar8 + 0x800e128) = arg2_03[4];
                *(iVar8 + 0x800e160) = arg2_03[0x20];
                *(iVar8 + 0x800e198) = arg2_03[0xb];
                *(iVar8 + 0x800e130) = arg2_03[5];
                *(iVar8 + 0x800e168) = arg2_03[0x21];
                *(iVar8 + 0x800e1a0) = arg2_03[0xc];
                *(iVar8 + 0x800e138) = arg2_03[6];
                *(iVar8 + 0x800e170) = arg2_03[0x22];
                bVar5 = *0x8004000 == 5;
                *(iVar8 + 0x800e1a8) = arg2_03[0xd];
                if ((bVar5) && (*arg2_03 == 0)) {
                    _printk(0x8000ef8,uStack_88 & 0xffffffff,*(arg1 + 0x5d8),arg1 + 0x7a8,*arg2_02,piVar26,
                            *arg2_00,bVar3 && bVar4);
                }
                if (((_obj.need_to_record != 0) && (iVar7 = sym.is_render_thread(arg1), piVar29 == 2)) && (iVar7 != 0))
                {
                    Hint_Prefetch(0x80221f8,2,0,1);
                    do {
                        iVar7 = _obj.need_to_record;
                        if (_obj.need_to_record != 1) goto code_r0x080096ac;
                        cVar1 = '\x01';
                        bVar3 = ExclusiveMonitorPass(0x80221f8,0x10);
                        if (bVar3) {
                            _obj.need_to_record = 0;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x080096ac:
                    piVar26 = 0x8004000;
                    if (iVar7 == 1) {
                        sym.update_hang_load();
                        if (*0x8004000 == 2) {
                            _printk(0x80013fc,*(arg1 + 0x108));
                        }
                    }
                }
                arg2 = uStack_88;
                piVar35 = piStack_90;
                if (*0x8004ef0 != 0) {
                    if (*0x8004ef4 != 0) {
                        Hint_Prefetch(0x8004ef4,2,0,1);
                        do {
                            iVar7 = *0x8004ef4;
                            if (*0x8004ef4 != 1) goto code_r0x08009908;
                            cVar1 = '\x01';
                            bVar3 = ExclusiveMonitorPass(0x8004ef4,0x10);
                            if (bVar3) {
                                *0x8004ef4 = 0;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                        DataMemoryBarrier(2,3);
code_r0x08009908:
                        if (iVar7 == 1) {
                            if (_segment.ehdr < 7) {
                                *0x8022170 = *0x80220f0;
                                *0x8022178 = *0x80220f8;
                                *0x8022180 = *0x8022100;
                                *0x8022188 = *0x8022108;
                                _obj.start_record = _obj.choose_all_rt;
                                *0x8022158 = *0x80220d8;
                                *0x8022160 = *0x80220e0;
                                *0x8022168 = *0x80220e8;
                            }
                            *0x8022000 = 1;
                            if (*0x8004000 == 2) {
                                _printk(0x800122e,*(arg1 + 0x108));
                            }
                        }
                    }
                    iVar7 = sym.is_render_thread(arg1);
                    if (iVar7 != 0) {
                        Hint_Prefetch(0x8004ef0,2,0,1);
                        do {
                            iVar7 = *0x8004ef0;
                            if (*0x8004ef0 != 1) goto code_r0x080098e8;
                            cVar1 = '\x01';
                            bVar3 = ExclusiveMonitorPass(0x8004ef0,0x10);
                            if (bVar3) {
                                *0x8004ef0 = 0;
                                cVar1 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar1 != '\0');
                        DataMemoryBarrier(2,3);
code_r0x080098e8:
                        if (iVar7 == 1) {
                            sym.set_flw_flag(arg1,0x100,0x200);
                        }
                    }
                }
code_r0x08009494:
                piStack_90 = arg2_02;
                iVar8 = sp_el0;
                if (*(iVar8 + 0x5e0) == iStack_68) {
                    return;
                }
                __stack_chk_fail();
                piVar29 = piVar35;
code_r0x080097fc:
                _printk(0x8001700);
code_r0x08009624:
                if (piVar31 < piStack_70) {
                    piVar31 = NULL;
                    piStack_70 = NULL;
                }
                else {
                    uVar6 = 0x14;
                    if (uVar30 != 0) {
                        uVar6 = uVar30 - 1;
                    }
                    piVar31 = *(pcVar2 + uVar6 * 0x3d0 + 0x328);
                    piStack_70 = *(pcVar2 + uVar6 * 0x3d0 + 0x338);
                    if (arg4 < piVar31) {
                        piVar31 = sym.adjust_frame_start_slowpath(arg4,&piStack_70);
                    }
                }
            } while( true );
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80097f8);
    (*pcVar2)();
}



// ===== sym.frame_load_history_update @ 0x08009980 (size 784) =====



void sym.frame_load_history_update(int64_t arg1)

{
    int64_t *piVar1;
    int *arg2;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    code *pcVar6;
    bool bVar7;
    uint uVar8;
    int64_t iVar9;
    int iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong uVar14;
    ulong *in_x18;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg1;
    iVar9 = walt_sched_clock();
    uVar5 = *0x8022000;
    uVar4 = *0x8004000;
    if (_segment.ehdr == 0) {
        return;
    }
    if (obj.frame_load_has_init != 0x1) {
        return;
    }
    if (*0x8004000 == 0) {
        return;
    }
    uVar15 = *0x8004000;
    bVar7 = 0x15 < *0x8004000;
    _segment.ehdr = iVar9;
    *0x8004000 = uVar3;
    if ((bVar7) || (uVar17 = *0x8022000, 0x65 < *0x8022000)) goto code_r0x08009c8c;
    iVar2 = sp_el0;
    uVar16 = uVar15 * 0x3d0;
    sym.set_flw_flag(iVar2,0x100,0x200);
    if (uVar16 < 0x4ce9) {
        uVar11 = uVar17 * 0x3d0;
        piVar1 = uVar15 * 0x3d0 + 0x8005268;
        iVar13 = *piVar1;
        if (iVar13 == 0) {
            if (uVar11 < 0x17de9) {
                *piVar1 = iVar9;
                *(uVar17 * 0x3d0 + 0x800a278) = iVar9;
                if (uVar11 < 0x17d49) {
                    uVar8 = _segment.ehdr;
                    *(uVar17 * 0x3d0 + 0x800a318) = _segment.ehdr;
                    if (uVar16 < 0x4c49) {
                        *(uVar15 * 0x3d0 + 0x8005308) = uVar8;
                        *0x8022000 = cpu_to_cluster(*(iVar2 + 0x58));
                        return;
                    }
                }
            }
        }
        else if (uVar11 < 0x17de1) {
            uVar12 = iVar9 - iVar13;
            *(uVar17 * 0x3d0 + 0x800a280) = uVar12;
            uVar3 = *0x8022000;
            if (uVar16 < 0x4ce1) {
                uVar17 = *0x8022000;
                *(uVar15 * 0x3d0 + 0x8005270) = uVar12;
                if ((uVar3 < 2) && (*(obj.last_frame_period + uVar17 * 8) = uVar12, uVar5 != 0x65)) {
                    arg2 = uVar11 + 0x8009f50;
                    iVar10 = uVar12 >> 10;
                    *arg2 = iVar10;
                    if (uVar4 != 0x15) {
                        pcVar6 = obj.frame_load_history + uVar16;
                        *pcVar6 = iVar10;
                        if (iVar10 == 0) {
                            return;
                        }
                        sym.update_frame_load(pcVar6,arg2);
                        uVar8 = sym.update_avg_freq(pcVar6,arg2,iVar9);
                        *0x8022000 = (*0x8022000 + 1) % 0x65;
                        *0x8004000 = (*0x8004000 + 1) % 0x15;
                        sym.frame_load_history_items_reset(*0x8004000,*0x8022000);
                        uVar3 = *0x8004000;
                        uVar15 = *0x8022000;
                        if (*0x8022000 < 0x65) {
                            uVar17 = *0x8004000;
                            *(uVar15 * 0x3d0 + 0x800a278) = iVar9;
                            uVar4 = *0x8022000;
                            if (uVar3 < 0x15) {
                                uVar16 = *0x8022000;
                                *(uVar17 * 0x3d0 + 0x8005268) = iVar9;
                                if (uVar4 < 2) {
                                    uVar14 = *(obj.last_frame_period + uVar16 * 8);
                                    *0x8022000 = uVar4 ^ 1;
                                    iVar2 = uVar15 * 0x3d0;
                                    iVar13 = uVar17 * 0x3d0;
                                    iVar9 = *0x8022000 * 8;
                                    *(iVar2 + 0x800a288) = uVar14;
                                    *(obj.sum_freq_rt + iVar9) = 0;
                                    *(iVar13 + 0x8005278) = uVar14;
                                    *(iVar2 + 0x800a318) = uVar8;
                                    *(iVar13 + 0x8005308) = uVar8;
                                    *(iVar9 + 0x8022098) = 0;
                                    *(iVar9 + 0x80220a8) = 0;
                                    irq_work_queue(obj.flw_cpufreq_irq_work);
                                    return;
                                }
                                goto code_r0x08009c88;
                            }
                        }
code_r0x08009c8c:
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(0x5512,0x8009c90);
                        (*pcVar6)();
                    }
                }
            }
        }
    }
code_r0x08009c88:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(1,0x8009c8c);
    (*pcVar6)();
}




// ===== sym.update_frame_load @ 0x08009c94 (size 812) =====



void sym.update_frame_load(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    uint64_t uStack_a0;
    int64_t iStack_88;
    uint64_t auStack_80 [4];
    
    *in_x18 = unaff_x30;
    uVar2 = *0x8004000;
    uVar1 = _segment.ehdr;
    iVar16 = sp_el0;
    auStack_80[3] = *(iVar16 + 0x5e0);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    uStack_a0 = *0x8004000;
    auStack_80[0] = 0;
    uVar14 = *(arg1 + 0x338) >> 10 & 0xffffffff;
    if (*0x8004000 < 1) {
        uVar15 = 0;
        uStack_a0 = 0;
    }
    else {
        uVar10 = 0;
        uVar15 = 0;
        uVar17 = 0;
        uVar19 = *0x8004000;
        uVar12 = _segment.ehdr;
        iStack_88 = 0x8004e38;
        do {
            if (uVar10 == 3) goto code_r0x08009fb4;
            auStack_80[uVar10] = 0;
            uVar5 = cpumask_next(0xffffffff,iStack_88);
            *extraout_x18 = seq_lseek;
            if (uVar5 < 0x8053000) {
                iVar13 = 0;
                iVar16 = 0;
                uVar18 = uVar17;
                uVar21 = 0;
                do {
                    if ((0x1f < uVar5) || (iVar6 = uVar5, 7 < uVar5)) goto code_r0x08009fb4;
                    uVar11 = iVar6 * 8;
                    if (0x40 < uVar11) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(1,0x8009fbc);
                        (*pcVar3)();
                    }
                    iVar7 = *(uVar11 + 0x8004ef8);
                    iVar8 = *(__per_cpu_offset + iVar6 * 8);
                    *(arg2 + uVar11 + 0x2d0) = iVar7;
                    *(arg1 + uVar11 + 0x2d0) = iVar7;
                    uVar20 = *(obj.hang_record + uVar11);
                    if (*(obj.hang_record + uVar11) <= uVar21) {
                        uVar20 = uVar21;
                    }
                    auStack_80[uVar10] = uVar20;
                    if (6 < uVar2) goto code_r0x08009fb4;
                    pcVar3 = obj.load_info_1 + iVar8;
                    uVar17 = *(pcVar3 + uVar19 * 8);
                    if (*(pcVar3 + uVar19 * 8) <= uVar18) {
                        uVar17 = uVar18;
                    }
                    if (6 < uVar1) goto code_r0x08009fb4;
                    iVar9 = *(obj.wake_record + uVar11);
                    *(arg2 + uVar11 + 0x358) = iVar9;
                    if (6 < uVar1) goto code_r0x08009fb4;
                    iVar16 = iVar7 + iVar16;
                    uVar18 = 0;
                    if (uVar14 != 0) {
                        uVar18 = *pcVar3 / uVar14;
                    }
                    iVar13 = iVar9 + iVar13;
                    iVar7 = arg2 + iVar6 * 0x38;
                    iVar9 = arg1 + iVar6 * 0x38;
                    uVar15 = *(pcVar3 + (uVar12 + 7) * 8) + uVar15;
                    *(iVar7 + 0x48) = uVar18;
                    *(iVar9 + 0x48) = uVar18;
                    uVar18 = 0;
                    if (uVar14 != 0) {
                        uVar18 = *(iVar8 + 0x800e110) / uVar14;
                    }
                    *(iVar7 + 0x50) = uVar18;
                    *(iVar9 + 0x50) = uVar18;
                    uVar18 = 0;
                    if (uVar14 != 0) {
                        uVar18 = *(iVar8 + 0x800e118) / uVar14;
                    }
                    *(iVar7 + 0x58) = uVar18;
                    *(iVar9 + 0x58) = uVar18;
                    uVar18 = 0;
                    if (uVar14 != 0) {
                        uVar18 = *(iVar8 + 0x800e120) / uVar14;
                    }
                    *(iVar7 + 0x60) = uVar18;
                    *(iVar9 + 0x60) = uVar18;
                    uVar18 = 0;
                    if (uVar14 != 0) {
                        uVar18 = *(iVar8 + 0x800e128) / uVar14;
                    }
                    *(iVar7 + 0x68) = uVar18;
                    *(iVar9 + 0x68) = uVar18;
                    uVar18 = 0;
                    if (uVar14 != 0) {
                        uVar18 = *(iVar8 + 0x800e130) / uVar14;
                    }
                    *(iVar7 + 0x70) = uVar18;
                    *(iVar9 + 0x70) = uVar18;
                    uVar18 = 0;
                    if (uVar14 != 0) {
                        uVar18 = *(iVar8 + 0x800e138) / uVar14;
                    }
                    *(iVar7 + 0x78) = uVar18;
                    *(iVar9 + 0x78) = uVar18;
                    uVar5 = cpumask_next(iVar6,iStack_88);
                    *extraout_x18_00 = seq_lseek;
                    uVar18 = uVar17;
                    uVar21 = uVar20;
                } while (uVar5 < 0x8053000);
            }
            else {
                iVar16 = 0;
                uVar20 = 0;
                iVar13 = 0;
            }
            iVar7 = uVar10 * 8;
            uVar10 = uVar10 + 1;
            iVar6 = arg2 + iVar7;
            iVar7 = arg1 + iVar7;
            iStack_88 = uVar10 * 8 + 0x8004e38;
            *(iVar6 + 0x398) = iVar13;
            *(iVar7 + 0x398) = iVar13;
            *(iVar6 + 0x3b0) = uVar20;
            *(iVar7 + 0x3b0) = uVar20;
            *(iVar6 + 0x310) = iVar16;
            *(iVar7 + 0x310) = iVar16;
            *(iVar6 + 0x220) = uVar17;
            *(iVar7 + 0x220) = uVar17;
        } while (uVar10 != uStack_a0);
    }
    uVar10 = 0;
    if (uVar14 != 0) {
        uVar10 = uVar15 / uVar14;
    }
    bVar4 = *0x8004000 != 1;
    *(arg2 + 0x340) = uVar10;
    *(arg1 + 0x340) = uVar10;
    if (bVar4) {
        iVar16 = sp_el0;
        if (*(iVar16 + 0x5e0) != auStack_80[3]) {
            __stack_chk_fail();
            return;
        }
        return;
    }
    if (*0x8022000 < 3) {
        _printk(0x80018dd,0,uStack_a0,auStack_80[*0x8022000]);
        return;
    }
code_r0x08009fb4:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8009fb8);
    (*pcVar3)();
}




// ===== sym.update_avg_freq @ 0x08009fc0 (size 1188) =====



uint32_t sym.update_avg_freq(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    code *pcVar6;
    bool bVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int iVar13;
    int iVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = *0x8022000;
    iVar2 = *(arg1 + 0x3c8);
    if (*0x8022000 == 0) {
        uVar9 = 0;
    }
    else {
        if (*0x8004000 == 7) {
            _printk(0x8001512,*0x8022000 / 10000);
        }
        uVar9 = 1;
    }
    if (*0x8022000 != 0) {
        uVar10 = *0x8022000 + uVar10;
        uVar9 = uVar9 + 1;
        if (*0x8004000 == 7) {
            _printk(0x8001512,*0x8022000 / 10000);
        }
    }
    iVar4 = *0x8004000;
    if (*0x8004000 == 0) {
        uVar12 = 0;
    }
    else {
        uVar5 = *0x8022000;
        uVar11 = *0x8022000 & 0xffffffff;
        iVar13 = uVar10 / 10000;
        if (_segment.ehdr == 2) {
            iVar14 = uVar9 * 2 - iVar13;
        }
        else {
            if (1 < *0x8022000) goto code_r0x0800a45c;
            iVar14 = iVar2 - *(obj.last_frame_period + uVar11 * 8) / 10000;
        }
        if (_segment.ehdr < iVar14) {
            uVar12 = _segment.ehdr * 2;
        }
        else if (_segment.ehdr + iVar14 < 0) {
            uVar12 = 0;
        }
        else {
            uVar12 = _segment.ehdr + iVar14;
        }
        if (5 < *0x8022000) {
code_r0x0800a45c:
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(1,0x800a460);
            (*pcVar6)();
        }
        bVar7 = _segment.ehdr == 2;
        uVar10 = *(obj.sum_freq_rt + uVar11 * 8) + (arg3 - *0x8022000) * (arg3 & 0xffffffffU);
        *0x8022000 = arg3;
        *(obj.sum_freq_rt + uVar11 * 8) = uVar10;
        uVar8 = 0;
        if (uVar12 * 10000 != 0) {
            uVar8 = uVar10 / (uVar12 * 10000);
        }
        if (bVar7) {
            uVar9 = *0x8022090 != 0;
            if (_obj.sum_freq_rt != 0) {
                uVar9 = uVar9 + 1;
            }
            uVar10 = uVar9 * 2 * 10000;
            uVar15 = 0;
            if (uVar10 != 0) {
                uVar15 = (*0x8022090 + _obj.sum_freq_rt) / uVar10;
            }
            if (uVar15 <= uVar8) {
                uVar8 = uVar15;
            }
        }
        *(arg2 + 0x38) = uVar8;
        if (uVar5 != 0) {
            uVar12 = 0;
        }
        *(arg1 + 0x38) = uVar8;
        if (iVar4 != 1) {
            if (_segment.ehdr == 2) {
                iVar14 = uVar9 * 2 - iVar13;
            }
            else {
                if (1 < uVar5) goto code_r0x0800a45c;
                iVar14 = iVar2 - *(obj.last_frame_period + uVar11 * 8) / 10000;
            }
            if (_segment.ehdr < iVar14) {
                uVar8 = _segment.ehdr * 2;
            }
            else if (_segment.ehdr + iVar14 < 0) {
                uVar8 = 0;
            }
            else {
                uVar8 = _segment.ehdr + iVar14;
            }
            if (3 < uVar5) goto code_r0x0800a45c;
            puVar1 = uVar11 * 8 + 0x8022098;
            bVar7 = _segment.ehdr == 2;
            uVar10 = *puVar1 + (arg3 - *0x8022000) * (arg3 & 0xffffffffU);
            uVar15 = 0;
            if (uVar8 * 10000 != 0) {
                uVar15 = uVar10 / (uVar8 * 10000);
            }
            *0x8022000 = arg3;
            *puVar1 = uVar10;
            if (bVar7) {
                uVar9 = *0x80220a0 != 0;
                if (*0x8022098 != 0) {
                    uVar9 = uVar9 + 1;
                }
                uVar10 = uVar9 * 2 * 10000;
                uVar3 = 0;
                if (uVar10 != 0) {
                    uVar3 = (*0x80220a0 + *0x8022098) / uVar10;
                }
                if (uVar3 <= uVar15) {
                    uVar15 = uVar3;
                }
            }
            *(arg2 + 0x3c) = uVar15;
            if (uVar5 != 1) {
                uVar8 = uVar12;
            }
            *(arg1 + 0x3c) = uVar15;
            uVar12 = uVar8;
            if (iVar4 != 2) {
                if (_segment.ehdr == 2) {
                    iVar13 = uVar9 * 2 - iVar13;
                }
                else {
                    if (1 < uVar5) goto code_r0x0800a45c;
                    iVar13 = iVar2 - *(obj.last_frame_period + uVar11 * 8) / 10000;
                }
                if (_segment.ehdr < iVar13) {
                    uVar12 = _segment.ehdr * 2;
                }
                else if (_segment.ehdr + iVar13 < 0) {
                    uVar12 = 0;
                }
                else {
                    uVar12 = _segment.ehdr + iVar13;
                }
                if (1 < uVar5) goto code_r0x0800a45c;
                puVar1 = uVar11 * 8 + 0x80220a8;
                bVar7 = _segment.ehdr == 2;
                uVar10 = *puVar1 + (arg3 - *0x8022000) * (arg3 & 0xffffffffU);
                uVar9 = 0;
                if (uVar12 * 10000 != 0) {
                    uVar9 = uVar10 / (uVar12 * 10000);
                }
                *0x8022000 = arg3;
                *puVar1 = uVar10;
                if (bVar7) {
                    uVar15 = *0x80220b0 != 0;
                    if (*0x80220a8 != 0) {
                        uVar15 = uVar15 + 1;
                    }
                    uVar10 = uVar15 * 2 * 10000;
                    uVar15 = 0;
                    if (uVar10 != 0) {
                        uVar15 = (*0x80220b0 + *0x80220a8) / uVar10;
                    }
                    if (uVar15 <= uVar9) {
                        uVar9 = uVar15;
                    }
                }
                *(arg2 + 0x40) = uVar9;
                if (uVar5 != 2) {
                    uVar12 = uVar8;
                }
                *(arg1 + 0x40) = uVar9;
                if (iVar4 != 3) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x800a464);
                    (*pcVar6)();
                }
            }
        }
    }
    return uVar12;
}




// ===== sym.frame_load_history_items_reset @ 0x0800a464 (size 924) =====


void sym.frame_load_history_items_reset(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    int iVar5;
    code *pcVar6;
    uint uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    
    if (0x14 < arg1) {
        return;
    }
    if (arg2 < 0x66) {
        iVar2 = arg2 * 0x3d0;
        uVar8 = arg1;
        iVar1 = uVar8 * 0x3d0;
        uVar9 = arg2 * 0x3d0;
        *(iVar2 + 0x8009f90) = 0;
        *(iVar2 + 0x8009f80) = 0;
        *(iVar2 + 0x8009f88) = 0;
        *(iVar2 + 0x8009f70) = 0;
        *(iVar2 + 0x8009f78) = 0;
        *(iVar2 + 0x8009f60) = 0;
        *(iVar2 + 0x8009f68) = 0;
        *(iVar2 + 0x8009f58) = 0;
        *(iVar1 + 0x8004f48) = 0;
        *(iVar1 + 0x8004f50) = 0;
        *(iVar1 + 0x8004f58) = 0;
        *(sym.clean_render_flag + iVar1) = 0;
        *(iVar1 + 0x8004f68) = 0;
        *(iVar1 + 0x8004f70) = 0;
        *(iVar1 + 0x8004f78) = 0;
        *(iVar1 + 0x8004f80) = 0;
        if (uVar9 < 0x17f09) {
            uVar10 = arg2;
            *(uVar10 * 0x3d0 + 0x800a158) = 0;
            *(uVar8 * 0x3d0 + 0x8005148) = 0;
            if (uVar9 < 0x17e59) {
                *(uVar10 * 0x3d0 + 0x800a208) = 0;
                *(uVar8 * 0x3d0 + 0x80051f8) = 0;
                *(uVar10 * 0x3d0 + 0x800a170) = 0;
                *(uVar8 * 0x3d0 + 0x8005160) = 0;
                if (uVar9 < 0x17d61) {
                    iVar1 = uVar10 * 0x3d0;
                    iVar2 = uVar8 * 0x3d0;
                    *(iVar1 + 0x800a300) = 0;
                    *(iVar2 + 0x80052f0) = 0;
                    *(iVar1 + 0x800a2e8) = 0;
                    *(iVar2 + 0x80052d8) = 0;
                    *(iVar1 + 0x800a160) = 0;
                    *(iVar2 + 0x8005150) = 0;
                    *(iVar1 + 0x800a210) = 0;
                    *(iVar2 + 0x8005200) = 0;
                    *(iVar1 + 0x800a178) = 0;
                    *(iVar2 + 0x8005168) = 0;
                    if (uVar9 < 0x17d59) {
                        iVar1 = uVar10 * 0x3d0;
                        iVar2 = uVar8 * 0x3d0;
                        *(iVar1 + 0x800a308) = 0;
                        *(iVar2 + 0x80052f8) = 0;
                        *(iVar1 + 0x800a2f0) = 0;
                        *(iVar2 + 0x80052e0) = 0;
                        *(iVar1 + 0x800a168) = 0;
                        *(iVar2 + 0x8005158) = 0;
                        *(iVar1 + 0x800a218) = 0;
                        *(iVar2 + 0x8005208) = 0;
                        *(iVar1 + 0x800a180) = 0;
                        *(iVar2 + 0x8005170) = 0;
                        iVar3 = _segment.ehdr;
                        if (uVar9 < 0x17d51) {
                            _obj.hang_record = 0;
                            *0x8022118 = 0;
                            iVar1 = uVar10 * 0x3d0;
                            _obj.wake_record = 0;
                            *0x8022198 = 0;
                            iVar2 = uVar8 * 0x3d0;
                            *0x8022120 = 0;
                            *0x8022128 = 0;
                            *0x80221a0 = 0;
                            *0x80221a8 = 0;
                            *0x8022130 = 0;
                            *0x8022138 = 0;
                            *0x80221b0 = 0;
                            *0x80221b8 = 0;
                            *0x8022140 = 0;
                            *0x8022148 = 0;
                            *0x80221c0 = 0;
                            *0x80221c8 = 0;
                            *0x8004ef8 = 0;
                            *0x8004f00 = 0;
                            *0x8004f08 = 0;
                            *0x8004f10 = 0;
                            *0x8004f18 = 0;
                            *0x8004f20 = 0;
                            *0x8004f28 = 0;
                            *0x8004f30 = 0;
                            *0x8004ee0 = 0;
                            *0x8004000 = 0;
                            *(iVar1 + 0x800a310) = 0;
                            iVar5 = *0x8022000;
                            *(iVar1 + 0x800a2f8) = 0;
                            *(iVar1 + 0x8009f98) = 0;
                            *(iVar1 + 0x8009fa0) = 0;
                            *(iVar1 + 0x8009fa8) = 0;
                            *(iVar1 + 0x8009fb0) = 0;
                            *(iVar1 + 0x8009fb8) = 0;
                            *(sym.update_avg_freq + iVar1) = 0;
                            *(iVar1 + 0x8009fc8) = 0;
                            *(iVar1 + 0x8009fd0) = 0;
                            *(iVar1 + 0x8009fd8) = 0;
                            *(iVar1 + 0x8009fe0) = 0;
                            *(iVar1 + 0x8009fe8) = 0;
                            *(iVar1 + 0x8009ff0) = 0;
                            *(iVar1 + 0x8009ff8) = 0;
                            *(iVar1 + 0x800a000) = 0;
                            *(iVar1 + 0x800a028) = 0;
                            *(iVar1 + 0x800a030) = 0;
                            *(iVar1 + 0x800a018) = 0;
                            *(iVar1 + 0x800a020) = 0;
                            *(iVar1 + 0x800a008) = 0;
                            *(iVar1 + 0x800a010) = 0;
                            *(iVar1 + 0x800a068) = 0;
                            *(iVar1 + 0x800a070) = 0;
                            *(iVar1 + 0x800a058) = 0;
                            *(iVar1 + 0x800a060) = 0;
                            *(iVar1 + 0x800a048) = 0;
                            *(iVar1 + 0x800a050) = 0;
                            *(iVar1 + 0x800a038) = 0;
                            *(iVar1 + 0x800a040) = 0;
                            *(iVar1 + 0x800a098) = 0;
                            *(iVar1 + 0x800a0a0) = 0;
                            *(iVar1 + 0x800a088) = 0;
                            *(iVar1 + 0x800a090) = 0;
                            *(iVar1 + 0x800a078) = 0;
                            *(iVar1 + 0x800a080) = 0;
                            *(iVar1 + 0x800a0d8) = 0;
                            *(iVar1 + 0x800a0e0) = 0;
                            *(iVar1 + 0x800a0c8) = 0;
                            *(iVar1 + 0x800a0d0) = 0;
                            *(iVar1 + 0x800a0b8) = 0;
                            *(iVar1 + 0x800a0c0) = 0;
                            *(iVar1 + 0x800a0a8) = 0;
                            *(iVar1 + 0x800a0b0) = 0;
                            *(iVar1 + 0x800a108) = 0;
                            *(iVar1 + 0x800a110) = 0;
                            *(iVar1 + 0x800a0f8) = 0;
                            *(iVar1 + 0x800a100) = 0;
                            *(iVar1 + 0x800a0e8) = 0;
                            *(iVar1 + 0x800a0f0) = 0;
                            *(iVar1 + 0x800a148) = 0;
                            *(iVar1 + 0x800a150) = 0;
                            *(iVar1 + 0x800a138) = 0;
                            *(iVar1 + 0x800a140) = 0;
                            *(iVar1 + 0x800a128) = 0;
                            *(iVar1 + 0x800a130) = 0;
                            *(iVar1 + 0x800a118) = 0;
                            *(iVar1 + 0x800a120) = 0;
                            *(iVar1 + 0x800a278) = 0;
                            *(iVar1 + 0x800a280) = 0;
                            *(iVar2 + 0x8005300) = 0;
                            *(iVar2 + 0x80052e8) = 0;
                            *(iVar2 + 0x8004f88) = 0;
                            *(iVar2 + 0x8004f90) = 0;
                            *(iVar2 + 0x8004f98) = 0;
                            *(iVar2 + 0x8004fa0) = 0;
                            *(iVar2 + 0x8004fa8) = 0;
                            *(iVar2 + 0x8004fb0) = 0;
                            *(iVar2 + 0x8004fb8) = 0;
                            *(iVar2 + 0x8004fc0) = 0;
                            *(sym.update_render_info + iVar2) = 0;
                            *(iVar2 + 0x8004fd0) = 0;
                            *(iVar2 + 0x8004fd8) = 0;
                            *(iVar2 + 0x8004fe0) = 0;
                            *(iVar2 + 0x8004fe8) = 0;
                            *(iVar2 + 0x8004ff0) = 0;
                            *(iVar2 + 0x8005018) = 0;
                            *(iVar2 + 0x8005020) = 0;
                            *(iVar2 + 0x8005008) = 0;
                            *(iVar2 + 0x8005010) = 0;
                            *(iVar2 + 0x8004ff8) = 0;
                            *(iVar2 + 0x8005000) = 0;
                            *(iVar2 + 0x8005058) = 0;
                            *(iVar2 + 0x8005060) = 0;
                            *(iVar2 + 0x8005048) = 0;
                            *(iVar2 + 0x8005050) = 0;
                            *(iVar2 + 0x8005038) = 0;
                            *(iVar2 + 0x8005040) = 0;
                            *(iVar2 + 0x8005028) = 0;
                            *(iVar2 + 0x8005030) = 0;
                            *(iVar2 + 0x8005088) = 0;
                            *(iVar2 + 0x8005090) = 0;
                            *(iVar2 + 0x8005078) = 0;
                            *(iVar2 + 0x8005080) = 0;
                            *(iVar2 + 0x8005068) = 0;
                            *(iVar2 + 0x8005070) = 0;
                            *(iVar2 + 0x80050c8) = 0;
                            *(iVar2 + 0x80050d0) = 0;
                            *(iVar2 + 0x80050b8) = 0;
                            *(iVar2 + 0x80050c0) = 0;
                            *(iVar2 + 0x80050a8) = 0;
                            *(iVar2 + 0x80050b0) = 0;
                            *(iVar2 + 0x8005098) = 0;
                            *(iVar2 + 0x80050a0) = 0;
                            *(iVar2 + 0x80050f8) = 0;
                            *(iVar2 + 0x8005100) = 0;
                            *(iVar2 + 0x80050e8) = 0;
                            *(iVar2 + 0x80050f0) = 0;
                            *(iVar2 + 0x80050d8) = 0;
                            *(iVar2 + 0x80050e0) = 0;
                            *(iVar2 + 0x8005138) = 0;
                            *(iVar2 + 0x8005140) = 0;
                            *(iVar2 + 0x8005128) = 0;
                            *(iVar2 + 0x8005130) = 0;
                            *(iVar2 + 0x8005118) = 0;
                            *(iVar2 + 0x8005120) = 0;
                            *(iVar2 + 0x8005108) = 0;
                            *(iVar2 + 0x8005110) = 0;
                            *(iVar2 + 0x8005268) = 0;
                            *(iVar2 + 0x8005270) = 0;
                            if ((iVar5 != iVar3) || (*0x8004000 == 0)) {
                                *0x8022000 = iVar3;
                                *0x8004000 = 33000000;
                                if (899 < iVar3 - 0xa29U) {
                                    if (iVar3 - 0x6a5U < 900) {
                                        *0x8004000 = 25000000;
                                    }
                                    else if (iVar3 - 0x4b1U < 500) {
                                        *0x8004000 = 16000000;
                                    }
                                    else if (iVar3 - 0x385U < 300) {
                                        *0x8004000 = 11000000;
                                    }
                                    else {
                                        *0x8004000 = 8000000;
                                        if (200 < iVar3 - 700U) {
                                            *0x8004000 = 33000000;
                                        }
                                    }
                                }
                            }
                            uVar4 = *0x8004000;
                            if (arg2 != 0x65) {
                                uVar7 = *0x8004000 >> 10;
                                *(uVar10 * 0x3d0 + 0x8009f50) = uVar7;
                                *(obj.frame_load_history + uVar8 * 0x3d0) = uVar7;
                                *(uVar10 * 0x3d0 + 0x800a288) = uVar4;
                                *(uVar8 * 0x3d0 + 0x8005278) = uVar4;
                                if (uVar9 < 0x17d49) {
                                    *(uVar10 * 0x3d0 + 0x800a318) = iVar3;
                                    *(uVar8 * 0x3d0 + 0x8005308) = iVar3;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(1,0x800a7fc);
        (*pcVar6)();
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x800a800);
    (*pcVar6)();
}



// ===== sym.frame_load_reset @ 0x0800a800 (size 824) =====



//WARNING: Removing unreachable block (ram,0x0800ab24)

int64_t sym.frame_load_reset(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar7;
    ulong unaff_x26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) {
        iVar7 = 0x15;
        pcVar2 = obj.frame_load_history;
        *0x8022000 = 0;
        do {
            *(pcVar2 + 0x40) = 0;
            *(pcVar2 + 0x30) = 0;
            *(pcVar2 + 0x38) = 0;
            *(pcVar2 + 0x20) = 0;
            *(pcVar2 + 0x28) = 0;
            *(pcVar2 + 0x10) = 0;
            *(pcVar2 + 0x18) = 0;
            *(pcVar2 + 8) = 0;
            memset(pcVar2 + 0x48,0,0x1f0);
            uVar1 = _segment.ehdr;
            *(pcVar2 + 0x328) = 0;
            *(pcVar2 + 0x330) = 0;
            *(pcVar2 + 0x398) = 0;
            *(pcVar2 + 0x3a0) = 0;
            *(pcVar2 + 0x3a8) = 0;
            *(pcVar2 + 0x3b0) = 0;
            *(pcVar2 + 0x3b8) = 0;
            *(pcVar2 + 0x3c0) = 0;
            uVar4 = sym.get_target_period(uVar1);
            uVar1 = _segment.ehdr;
            *pcVar2 = uVar4 >> 10;
            arg1 = sym.get_target_period(uVar1);
            *(pcVar2 + 0x3c8) = 0;
            iVar7 = iVar7 + -1;
            *(pcVar2 + 0x338) = arg1;
            pcVar2 = pcVar2 + 0x3d0;
        } while (iVar7 != 0);
        uVar3 = *0x8004000;
        *0x8004000 = *0x8004000 & 0xffffffff00000000;
        uVar1 = uVar3;
        if (uVar3 < 1) {
            uVar1 = 0;
        }
        if (0 < uVar3) {
            iVar7 = 0x8004e38;
            uVar4 = 0;
            *extraout_x18 = unaff_x26;
            do {
                arg1 = cpumask_next(0xffffffff,iVar7);
                uVar3 = arg1;
                while (uVar3 < unaff_x26) {
                    if (0x1f < arg1) goto code_r0x0800ab34;
                    iVar5 = (arg1 & 0xffffffffU) * 8;
                    iVar6 = *(__per_cpu_offset + iVar5);
                    *(obj.load_info_1 + iVar6) = 0;
                    *(iVar6 + 0x800e178) = 0;
                    iVar6 = *(__per_cpu_offset + iVar5);
                    *(iVar6 + 0x800e110) = 0;
                    *(iVar6 + 0x800e180) = 0;
                    iVar6 = *(__per_cpu_offset + iVar5);
                    *(iVar6 + 0x800e118) = 0;
                    *(iVar6 + 0x800e188) = 0;
                    iVar6 = *(__per_cpu_offset + iVar5);
                    *(iVar6 + 0x800e120) = 0;
                    *(iVar6 + 0x800e190) = 0;
                    iVar6 = *(__per_cpu_offset + iVar5);
                    *(iVar6 + 0x800e128) = 0;
                    *(iVar6 + 0x800e198) = 0;
                    iVar6 = *(__per_cpu_offset + iVar5);
                    *(iVar6 + 0x800e130) = 0;
                    *(iVar6 + 0x800e1a0) = 0;
                    iVar5 = *(__per_cpu_offset + iVar5);
                    *(iVar5 + 0x800e138) = 0;
                    *(iVar5 + 0x800e1a8) = 0;
                    arg1 = cpumask_next(arg1 & 0xffffffffU,iVar7);
                    *extraout_x18_00 = unaff_x26;
                    uVar3 = arg1;
                }
                if (uVar4 == 3) {
code_r0x0800ab34:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x800ab38);
                    (*pcVar2)();
                }
                uVar4 = uVar4 + 1;
                iVar7 = uVar4 * 8 + 0x8004e38;
            } while (uVar4 != uVar1);
        }
        *0x8022100 = 0;
        *0x8022108 = 0;
        *0x80220f0 = 0;
        *0x80220f8 = 0;
        *0x80220e0 = 0;
        *0x80220e8 = 0;
        _obj.choose_all_rt = 0;
        *0x80220d8 = 0;
        _obj.last_freq_change_time = 0;
        *0x80221e8 = 0;
        *0x80221f0 = 0;
        _obj.sum_freq_rt = 0;
        *0x8022090 = 0;
        _obj.hang_record = 0;
        *0x8022118 = 0;
        *0x8022120 = 0;
        *0x8022128 = 0;
        *0x8022130 = 0;
        *0x8022138 = 0;
        *0x8022140 = 0;
        *0x8022148 = 0;
        *0x8022098 = 0;
        *0x80220a0 = 0;
        *0x80220a8 = 0;
        *0x80220b0 = 0;
        _obj.start_record = 0;
        *0x8022158 = 0;
        *0x8022160 = 0;
        *0x8022168 = 0;
        *0x8022170 = 0;
        *0x8022178 = 0;
        *0x8022180 = 0;
        *0x8022188 = 0;
        *0x80221c0 = 0;
        *0x80221c8 = 0;
        *0x80221b0 = 0;
        *0x80221b8 = 0;
        *0x80221a0 = 0;
        *0x80221a8 = 0;
        _obj.wake_record = 0;
        *0x8022198 = 0;
        *0x8004ef8 = 0;
        *0x8004f00 = 0;
        *0x8004f08 = 0;
        *0x8004f10 = 0;
        *0x8004f18 = 0;
        *0x8004f20 = 0;
        *0x8004f28 = 0;
        *0x8004f30 = 0;
        _obj.cur_record_freq = 0;
        *0x80221d4 = 0;
        _obj.last_frame_period = 0;
        *0x8022070 = 0;
        _segment.ehdr = 0;
        *0x8004ee0 = 0;
        *0x8004000 = 0;
        *0x8022000 = 0;
    }
    return arg1;
}




// ===== sym.get_target_period @ 0x0800ab38 (size 164) =====



int64_t sym.get_target_period(uint32_t arg1)

{
    if ((*0x8022000 != arg1 || *0x8004000 == 0) && (*0x8004000 = 33000000, *0x8022000 = arg1, 899 < arg1 - 0xa29)) {
        if (arg1 - 0x6a5 < 900) {
            *0x8004000 = 25000000;
        }
        else if (arg1 - 0x4b1 < 500) {
            *0x8004000 = 16000000;
        }
        else if (arg1 - 0x385 < 300) {
            *0x8004000 = 11000000;
        }
        else {
            *0x8004000 = 8000000;
            if (200 < arg1 - 700) {
                *0x8004000 = 33000000;
            }
        }
    }
    return *0x8004000;
}




// ===== sym.flw_cal_freq @ 0x0800abdc (size 1828) =====



uint64_t sym.flw_cal_freq(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint in_w4;
    uint32_t in_w5;
    uint32_t in_w6;
    uint32_t uVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong unaff_x22;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar in_q1 [16];
    
    *in_x18 = unaff_x30;
    if (0x14 < *0x8004000) {
code_r0x0800b2f8:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800b2fc);
        (*pcVar3)();
    }
    if (_segment.ehdr == 0) {
        return arg3;
    }
    if (obj.frame_load_has_init != 0x1) {
        return arg3;
    }
    if (*0x8004000 == 0) {
        return arg3;
    }
    uVar9 = 100;
    if (*0x8022000 != 0) {
        uVar9 = *0x8022000 - 1;
    }
    uVar15 = uVar9;
    if (0x1f < *(arg1 + 0x1c)) goto code_r0x0800b2f8;
    uVar7 = 0x14;
    if (*0x8004000 != 0) {
        uVar7 = *0x8004000 - 1;
    }
    uVar10 = uVar7;
    if (0x65 < uVar9) goto code_r0x0800b2f8;
    uVar9 = *(*(__per_cpu_offset + *(arg1 + 0x1c) * 8) + 0x800e1b0);
    iVar11 = uVar9;
    if (2 < uVar9) goto code_r0x0800b2f8;
    uVar12 = uVar15 * 0x3d0;
    iVar18 = iVar11 * 8;
    iVar6 = iVar18 + uVar12;
    if (iVar6 - 0x18108U < 0xfffffffffffe7ef0) goto code_r0x0800b2fc;
    uVar16 = uVar10 * 0x3d0;
    iVar1 = iVar18 + uVar16;
    uVar7 = *(*0x8004000 * 0x3d0 + 0x8005308);
    *(uVar15 * 0x3d0 + iVar11 * 8 + 0x8009f58) = arg4;
    if (iVar1 - 0x5008U < 0xffffffffffffaff0) goto code_r0x0800b2fc;
    uVar17 = iVar11 * 4;
    *(uVar10 * 0x3d0 + iVar11 * 8 + 0x8004f48) = arg4;
    if ((uVar17 + uVar12) - 0x180f0 < 0xfffffffffffe7ef0) goto code_r0x0800b2fc;
    *(uVar15 * 0x3d0 + iVar11 * 4 + 0x8009f70) = in_w4;
    if ((uVar17 + uVar16) - 0x4ff0 < 0xffffffffffffaff0) goto code_r0x0800b2fc;
    in_x18[1] = unaff_x22;
    *(obj.frame_load_history + iVar11 * 4 + uVar10 * 0x3d0 + 0x20) = in_w4;
    uVar4 = cpumask_next(seq_lseek,0xffffffff,arg1);
    if (uVar4 < unaff_x22) {
        do {
            if ((0x1f < uVar4) || (uVar5 = uVar4, 7 < uVar4)) goto code_r0x0800b2f8;
            iVar8 = uVar5 * 8;
            if (0x17e97 < iVar8 + uVar12) goto code_r0x0800b2fc;
            iVar13 = *(__per_cpu_offset + uVar5 * 8);
            uVar14 = *(iVar13 + 0x8054014);
            *(uVar15 * 0x3d0 + uVar5 * 8 + 0x800a1c8) = uVar14;
            if (0x9b2 < iVar8 + uVar16 >> 3) goto code_r0x0800b2fc;
            iVar2 = iVar8 + uVar10 * 0x3d0;
            *(obj.frame_load_history + iVar2 + 0x278) = uVar14;
            uVar14 = *(iVar13 + 0x8054034);
            *(uVar15 * 0x3d0 + iVar8 + 0x800a188) = uVar14;
            *(obj.frame_load_history + iVar2 + 0x238) = uVar14;
            if (iVar6 - 0x17e58U < 0xfffffffffffe7ef0) goto code_r0x0800b2fc;
            uVar14 = *(*(iVar13 + 0x8053f8c) + 0x30);
            *(uVar15 * 0x3d0 + iVar18 + 0x800a208) = uVar14;
            if (iVar1 - 0x4d58U < 0xffffffffffffaff0) goto code_r0x0800b2fc;
            *(obj.frame_load_history + iVar18 + uVar10 * 0x3d0 + 0x2b8) = uVar14;
            uVar4 = cpumask_next(uVar5,arg1);
        } while (uVar4 < unaff_x22);
        if (0x4ce0 < uVar16) goto code_r0x0800b2fc;
        iVar13 = iVar13 + 0x8053f84;
    }
    else {
        iVar13 = 0;
    }
    if (*(uVar10 * 0x3d0 + 0x8005270) == 0) {
        return arg3;
    }
    if (uVar9 == *0x8022000) {
        iVar6 = sym.update_flw_load();
        if ((((0x17dc8 < uVar12) || (*(uVar15 * 0x3d0 + 0x800a298) = iVar6, 0x4cc8 < uVar16)) ||
            (*(uVar10 * 0x3d0 + 0x8005288) = iVar6, iVar1 - 0x4d00U < 0xffffffffffffaff0)) ||
           (iVar1 - 0x4c60U < 0xffffffffffffaff0)) goto code_r0x0800b2fc;
        if (_segment.ehdr == 0) {
            iVar18 = 0;
        }
        else {
            iVar18 = *(uVar10 * 0x3d0 + iVar11 * 8 + 0x80052d8);
        }
        if (0x17dc0 < uVar12) goto code_r0x0800b2fc;
        iVar1 = iVar11 * 8 + uVar10 * 0x3d0;
        iVar18 = *(obj.frame_load_history + iVar1 + 0x310) + iVar6 + *(obj.frame_load_history + iVar1 + 0x3b0) + iVar18;
        *(uVar15 * 0x3d0 + 0x800a2a0) = iVar18;
        if (0x4cc0 < uVar16) goto code_r0x0800b2fc;
        *(uVar10 * 0x3d0 + 0x8005290) = iVar18;
        uVar5 = sym.cal_flw_freq(iVar18,iVar13,in_q1,uVar7 * 10000);
    }
    else {
        if (*0x8004000 == 0) {
            return arg3;
        }
        uVar14 = sym.update_flw_other_load(arg1,*(obj.frame_load_history + uVar10 * 0x3d0));
        if ((iVar6 - 0x17f08U < 0xfffffffffffe7ef0) ||
           (*(uVar15 * 0x3d0 + iVar11 * 8 + 0x800a158) = uVar14, iVar1 - 0x4e08U < 0xffffffffffffaff0))
        goto code_r0x0800b2fc;
        *(uVar10 * 0x3d0 + iVar11 * 8 + 0x8005148) = uVar14;
        uVar5 = sym.cal_gen_freq(uVar14,arg1,arg2);
    }
    if ((uVar17 + uVar16) - 0x4fd8 < 0xffffffffffffaff0) goto code_r0x0800b2fc;
    uVar9 = *(uVar10 * 0x3d0 + iVar11 * 4 + 0x8004f78);
    uVar19 = uVar9;
    uVar16 = uVar5;
    if (((uVar9 != 0) && (uVar19 < uVar5)) && (uVar16 = uVar19, *0x8004000 == 3)) {
        _printk(0x800176a,iVar11,uVar5,uVar9);
    }
    if (in_w6 - 1 < 1199999) {
        if (0xc < uVar17) goto code_r0x0800b2fc;
        uVar9 = *(obj.mi_low_freq + uVar17);
        if (*(obj.mi_low_freq + uVar17) <= in_w5) {
            uVar9 = in_w5;
        }
        uVar7 = *(obj.mi_high_freq + uVar17);
        if (*(obj.mi_high_freq + uVar17) <= in_w6) {
            uVar7 = in_w6;
        }
code_r0x0800b270:
        uVar5 = uVar9;
        if ((uVar9 <= uVar16) && (uVar5 = uVar16, uVar16 <= uVar7)) {
            uVar5 = uVar7;
        }
    }
    else {
        if (0xc < uVar17) goto code_r0x0800b2fc;
        uVar5 = uVar16;
        if (*(obj.mi_high_freq + uVar17) != 0) {
            uVar9 = *(obj.mi_low_freq + uVar17);
            uVar7 = *(obj.mi_high_freq + uVar17);
            goto code_r0x0800b270;
        }
    }
    if (0xfffffffffffe7eef < (uVar17 + uVar12) - 0x180e4) {
        *(uVar15 * 0x3d0 + uVar17 + 0x8009f7c) = uVar5;
        *(uVar10 * 0x3d0 + uVar17 + 0x8004f6c) = uVar5;
        return uVar5;
    }
code_r0x0800b2fc:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x800b300);
    (*pcVar3)();
}




// ===== sym.update_flw_other_load @ 0x0800b300 (size 200) =====



uint64_t sym.update_flw_other_load(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint32_t unaff_w21;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(in_x18 + 1) = unaff_w21;
    uVar1 = *0x8004000;
    uVar4 = *0x8004000;
    uVar3 = cpumask_next(seq_lseek,0xffffffff,arg1);
    if (uVar3 < unaff_w21) {
        if (6 < uVar1) {
code_r0x0800b3c4:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x800b3c8);
            (*pcVar2)();
        }
        uVar5 = 0;
        do {
            if (0x1f < uVar3) goto code_r0x0800b3c4;
            uVar6 = *(obj.load_info_1 + uVar4 * 8 + *(__per_cpu_offset + (uVar3 & 0xffffffff) * 8));
            if (*(obj.load_info_1 + uVar4 * 8 + *(__per_cpu_offset + (uVar3 & 0xffffffff) * 8)) <= uVar5) {
                uVar6 = uVar5;
            }
            uVar3 = cpumask_next(uVar3,arg1);
            uVar5 = uVar6;
        } while (uVar3 < unaff_w21);
    }
    else {
        uVar6 = 0;
    }
    uVar3 = 0;
    if ((arg2 & 0xffffffffU) != 0) {
        uVar3 = uVar6 / (arg2 & 0xffffffffU);
    }
    return uVar3;
}




// ===== sym.cal_gen_freq @ 0x0800b3c8 (size 100) =====



int64_t sym.cal_gen_freq(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    
    if (*(arg2 + 0x1c) < 0x20) {
        uVar1 = *(*(__per_cpu_offset + *(arg2 + 0x1c) * 8) + 0x8053cc4);
        if (arg1 <= *(*(__per_cpu_offset + *(arg2 + 0x1c) * 8) + 0x8053cc4)) {
            uVar1 = arg1;
        }
        uVar2 = 0;
        if (arg3 != 0) {
            uVar2 = (uVar1 * *(arg2 + 0x28)) / arg3;
        }
        uVar1 = 0;
        if (*0x8004000 != 0) {
            uVar1 = uVar2 >> (*0x8004000 & 0x3f);
        }
        return uVar1 + uVar2;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800b42c);
    (*pcVar3)();
}




// ===== sym.update_flw_load @ 0x0800b42c (size 232) =====



int64_t sym.update_flw_load(ulong param_1,ulong param_2,uint32_t param_3,uint64_t param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint32_t unaff_w20;
    uint64_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    uStack_50 = _seq_lseek;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    *(in_x18 + 1) = unaff_w20;
    uVar2 = _segment.ehdr;
    uVar6 = _segment.ehdr;
    uVar4 = cpumask_next(0xffffffff,&uStack_50);
    if (uVar4 < unaff_w20) {
        if (6 < uVar2) {
code_r0x0800b50c:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x800b510);
            (*pcVar3)();
        }
        iVar5 = 0;
        do {
            if (0x1f < uVar4) goto code_r0x0800b50c;
            iVar5 = *(obj.load_info_1 + uVar6 * 8 + *(__per_cpu_offset + (uVar4 & 0xffffffff) * 8)) + iVar5;
            uVar4 = cpumask_next(uVar4,&uStack_50);
        } while (uVar4 < unaff_w20);
    }
    else {
        iVar5 = 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar7 = __stack_chk_fail();
        uVar6 = *(cpu_scale + *(__per_cpu_offset + param_3 * 8));
        uVar4 = 0;
        if (uVar6 != 0) {
            uVar4 = ((uVar6 + *(*(auVar7._8_8_ + 8) + 0x28) * auVar7._0_8_) - 1) / uVar6;
        }
        uVar6 = 0;
        if (param_4 != 0) {
            uVar6 = ((param_4 + uVar4 * 0x400) - 1) / param_4;
        }
        uVar4 = 0;
        if (*0x8004000 != 0) {
            uVar4 = uVar6 >> (*0x8004000 & 0x3f);
        }
        return uVar4 + uVar6;
    }
    return iVar5;
}




// ===== sym.cal_flw_freq @ 0x0800b514 (size 92) =====



int64_t sym.cal_flw_freq(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    uint64_t uVar1;
    uint32_t in_w2;
    uint64_t uVar2;
    
    uVar2 = *(cpu_scale + *(__per_cpu_offset + in_w2 * 8));
    uVar1 = 0;
    if (uVar2 != 0) {
        uVar1 = ((uVar2 + *(*(arg2 + 8) + 0x28) * arg1) - 1) / uVar2;
    }
    uVar2 = 0;
    if (arg3 != 0) {
        uVar2 = ((arg3 + uVar1 * 0x400) - 1) / arg3;
    }
    uVar1 = 0;
    if (*0x8004000 != 0) {
        uVar1 = uVar2 >> (*0x8004000 & 0x3f);
    }
    return uVar1 + uVar2;
}




// ===== sym.frame_load_init @ 0x0800b570 (size 1024) =====



uint64_t sym.frame_load_init(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    uint64_t *puVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong uVar9;
    uint32_t extraout_w8;
    uint uVar10;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    uint32_t extraout_w8_03;
    uint32_t extraout_w8_04;
    uint32_t extraout_w8_05;
    int64_t iVar11;
    uint32_t uVar12;
    ulong *in_x18;
    uint32_t *extraout_x18;
    uint *extraout_x18_00;
    uint32_t *extraout_x18_01;
    uint32_t *extraout_x18_02;
    ulong *extraout_x18_03;
    uint32_t *extraout_x18_04;
    uint32_t *extraout_x18_05;
    uint32_t *extraout_x18_06;
    uint32_t *extraout_x18_07;
    uint32_t *extraout_x18_08;
    uint32_t *extraout_x18_09;
    uint32_t *extraout_x18_10;
    uint32_t *extraout_x18_11;
    uint32_t *puVar13;
    uint32_t *extraout_x18_12;
    uint32_t *extraout_x18_13;
    uint32_t *extraout_x18_14;
    uint32_t *extraout_x18_15;
    ulong *extraout_x18_16;
    ulong *puVar14;
    code *pcVar15;
    code *pcVar16;
    uint64_t uVar17;
    uint32_t unaff_w28;
    ulong unaff_x30;
    uchar auVar18 [16];
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar1 = 0xffffffff;
    uStack_60 = _seq_lseek;
    *0x8004000 = *0x8004004 << 0x20;
    *0x8022000 = *0x8022004 << 0x20;
    _obj.choose_all_rt = 0;
    *0x80220d8 = 0;
    *0x80220e0 = 0;
    *0x80220e8 = 0;
    *0x80220f0 = 0;
    *0x80220f8 = 0;
    *0x8022100 = 0;
    *0x8022108 = 0;
    do {
        uVar1 = cpumask_next(uVar1,&uStack_60);
        *extraout_x18 = extraout_w8;
        if (extraout_w8 <= uVar1) {
            uVar10 = 0;
            goto code_r0x0800b704;
        }
        puVar4 = sym.cpu_coregroup_mask(uVar1);
        uVar17 = *puVar4;
        uVar5 = (uVar17 & 0xaaaaaaaa) >> 1 | (uVar17 & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar2 = 0x20;
        if ((uVar17 & 0xffffffff) != 0) {
            uVar2 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
        }
    } while (uVar1 != uVar2);
    *extraout_x18_00 = 0x20;
    uVar5 = cpumask_next(0xffffffff,puVar4);
    if (uVar5 < 0x20) {
        do {
            if (0x1f < uVar5) goto code_r0x0800b968;
            *(*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8) + 0x800e1b0) = 0;
            uVar5 = cpumask_next(uVar5,puVar4);
        } while (uVar5 < 0x20);
        uVar17 = *puVar4;
    }
    uStack_60 = uStack_60 & (*puVar4 ^ 0xffffffff);
    *0x8004000 = uVar17;
    uVar1 = cpumask_next(uVar1,&uStack_60);
    if (uVar1 < 0x20) {
        do {
            puVar6 = sym.cpu_coregroup_mask(uVar1);
            uVar17 = *puVar6;
            uVar5 = (uVar17 & 0xaaaaaaaa) >> 1 | (uVar17 & 0x55555555) << 1;
            uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
            uVar2 = 0x20;
            if ((uVar17 & 0xffffffff) != 0) {
                uVar2 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
            }
            if (uVar1 == uVar2) {
                *extraout_x18_01 = 0x20;
                uVar5 = cpumask_next(0xffffffff,puVar6);
                if (0x1f < uVar5) goto code_r0x0800b874;
                goto code_r0x0800b84c;
            }
            *extraout_x18_01 = puVar4;
            uVar1 = cpumask_next(uVar1,&uStack_60);
        } while (uVar1 < puVar4);
    }
    uVar10 = 1;
    goto code_r0x0800b704;
code_r0x0800b8cc:
    *extraout_x18_02 = uVar1;
    uVar2 = cpumask_next(uVar2,&uStack_60);
    if (uVar1 <= uVar2) goto code_r0x0800b8e8;
    goto code_r0x0800b8a8;
    while( true ) {
        *(*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8) + 0x800e1b0) = 1;
        uVar5 = cpumask_next(uVar5,puVar6);
        if (0x1f < uVar5) break;
code_r0x0800b84c:
        if (0x1f < uVar5) goto code_r0x0800b968;
    }
    uVar17 = *puVar6;
code_r0x0800b874:
    uStack_60 = uStack_60 & (*puVar6 ^ 0xffffffff);
    *0x8004000 = uVar17;
    uVar2 = cpumask_next(uVar1,&uStack_60);
    if (uVar2 < 0x20) {
code_r0x0800b8a8:
        puVar4 = sym.cpu_coregroup_mask(uVar2);
        uVar17 = *puVar4;
        uVar5 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar12 = 0x20;
        if (uVar17 != 0) {
            uVar12 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        if (uVar2 != uVar12) goto code_r0x0800b8cc;
        *extraout_x18_02 = uVar2;
        uVar5 = cpumask_next(0xffffffff,puVar4);
        uVar1 = uVar5;
        while (uVar1 < uVar2) {
            if (0x1f < uVar5) {
code_r0x0800b968:
    //WARNING: Does not return
                pcVar16 = SoftwareBreakpoint(0x5512,0x800b96c);
                (*pcVar16)();
            }
            *(*(__per_cpu_offset + (uVar5 & 0xffffffff) * 8) + 0x800e1b0) = 2;
            uVar5 = cpumask_next(uVar5,puVar4);
            uVar1 = uVar5;
        }
        *0x8004000 = *puVar4;
        uStack_60 = uStack_60 & (*puVar4 ^ 0xffffffff);
        uVar10 = 3;
        goto code_r0x0800b704;
    }
code_r0x0800b8e8:
    uVar10 = 2;
code_r0x0800b704:
    _obj.flw_cpufreq_irq_work = 0;
    *0x80220c0 = 0;
    *0x8004000 = CONCAT44(*0x8004004,uVar10);
    *0x80220c8 = sym.flw_irq_work.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt;
    register_mi_update_fravg(sym.update_frame_ravg.cfi_jt);
    register_mi_enqueue_entity_hook(sym.game_set_cid.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt);
    register_walt_update_hooks(sym.skip_walt_window_update.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt);
    android_rvh_probe_register
              (__tracepoint_android_rvh_cpufreq_transition,
               sym.android_rvh_cpufreq_transition.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt,0);
    sym.game_link_init();
    if (arg1 != 0) {
        *0x8022000 = proc_mkdir(0x80019ab,arg1);
        *0x8004000 = proc_create("frame_history_load",0x1b4,*0x8022000,obj.history_load_fops_1);
        *0x8004000 = proc_create("cpu_history_load",0x1b4,*0x8022000,obj.cpu_load_fops_1);
    }
    obj.frame_load_has_init = 0x1;
    _printk(0x800133e);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return 0;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_03 = sym.flw_irq_work;
    pcStack_b8 = sym.flw_irq_work;
    iVar8 = sp_el0;
    iStack_c8 = *(iVar8 + 0x5e0);
    puStack_c0 = &stack0xffffffffffffffb0;
    if (((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) && (_obj.flw_work_in_process == 0)
       ) {
        *0x8022000 = CONCAT44(*0x8022004,1);
        uVar1 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *extraout_x18_04 = extraout_w8_00;
        if (uVar1 < extraout_w8_00) {
            do {
                if (0x1f < uVar1) goto code_r0x0800bd08;
                _raw_spin_lock(runqueues + *(__per_cpu_offset + uVar1 * 8));
                uVar1 = cpumask_next(uVar1,__cpu_possible_mask);
                *extraout_x18_05 = extraout_w8_01;
            } while (uVar1 < extraout_w8_01);
        }
        uVar7 = walt_sched_clock();
        puVar13 = extraout_x18_06;
        pcVar16 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                _raw_spin_lock(pcVar16 + -8);
                pcVar15 = pcVar16 + 0x10;
                *extraout_x18_08 = unaff_w28;
                uVar1 = cpumask_next(0xffffffff,pcVar15);
                puVar13 = extraout_x18_09;
                while (uVar1 < unaff_w28) {
                    if (0x1f < uVar1) goto code_r0x0800bd08;
                    iVar11 = *(__per_cpu_offset + uVar1 * 8);
                    iVar8 = *(iVar11 + 0x8053c14);
                    if ((iVar8 != 0) && (*puVar13 = iVar11, (iVar11 & *pcVar15) != 0)) {
                        walt_update_task_ravg(iVar8,runqueues + iVar11,4,uVar7,0);
                        *extraout_x18_11 = unaff_w28;
                    }
                    uVar1 = cpumask_next(uVar1,pcVar15);
                    puVar13 = extraout_x18_10;
                }
                _raw_spin_unlock(pcVar16 + -8);
                pcVar16 = *pcVar16;
                puVar13 = extraout_x18_07;
            } while (pcVar16 != cluster_head);
        }
        pcVar16 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                uVar1 = *(pcVar16 + 0x10);
                *puVar13 = 0x8053000;
                uStack_d0 = uVar1 & 0x8053000;
                iVar3 = __sw_hweight64();
                uVar1 = cpumask_next(0xffffffff,&uStack_d0);
                *extraout_x18_12 = extraout_w8_02;
                puVar13 = extraout_x18_12;
                if (uVar1 < extraout_w8_02) {
                    do {
                        iVar3 = iVar3 + -1;
                        if (0x1f < uVar1) goto code_r0x0800bd08;
                        uVar2 = *(*(__per_cpu_offset + uVar1 * 8) + 0x8053d1c);
                        if (iVar3 == 0) {
                            if (0x1f < uVar2) goto code_r0x0800bd08;
                            puVar14 = *(waltgov_cb_data + *(__per_cpu_offset + uVar2 * 8));
                            if (puVar14 != NULL) {
                                pcVar15 = *puVar14;
                                __cfi_slowpath_diag(0xdebc05344f6b660a,pcVar15,0x8000b20);
                                uVar7 = walt_sched_clock();
                                uVar9 = 0x80;
                                goto code_r0x0800bbcc;
                            }
                        }
                        else {
                            if (0x1f < uVar2) goto code_r0x0800bd08;
                            puVar14 = *(waltgov_cb_data + *(__per_cpu_offset + uVar2 * 8));
                            if (puVar14 != NULL) {
                                pcVar15 = *puVar14;
                                __cfi_slowpath_diag(0xdebc05344f6b660a,pcVar15,0x8000b20);
                                uVar7 = walt_sched_clock();
                                uVar9 = 0x82;
code_r0x0800bbcc:
                                (*pcVar15)(puVar14,uVar7,uVar9);
                            }
                        }
                        uVar1 = cpumask_next(uVar1,&uStack_d0);
                        *extraout_x18_13 = extraout_w8_03;
                        puVar13 = extraout_x18_13;
                    } while (uVar1 < extraout_w8_03);
                }
                pcVar16 = *pcVar16;
            } while (pcVar16 != cluster_head);
        }
        uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *extraout_x18_14 = extraout_w8_04;
        if (uVar5 < extraout_w8_04) {
            do {
                if (0x1f < uVar5) {
code_r0x0800bd08:
    //WARNING: Does not return
                    pcVar16 = SoftwareBreakpoint(0x5512,0x800bd0c);
                    (*pcVar16)();
                }
                _raw_spin_unlock(runqueues + *(__per_cpu_offset + (uVar5 & 0xffffffff) * 8));
                uVar5 = cpumask_next(uVar5 & 0xffffffff,__cpu_possible_mask);
                *extraout_x18_15 = extraout_w8_05;
            } while (uVar5 < extraout_w8_05);
        }
        *0x8022000 = *0x8022000 & 0xffffffff00000000;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return uVar5;
    }
    auVar18 = __stack_chk_fail();
    iVar8 = auVar18._8_8_;
    uVar5 = auVar18._0_8_;
    *extraout_x18_16 = 0x800bd10;
    if ((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) {
        uVar10 = *(uVar5 + 0xba8);
        uVar5 = sym.is_rcal_task(iVar8,0);
        if ((uVar5 & 1) != 0) {
            uVar5 = cpu_to_cluster(uVar10);
            iVar3 = *0x8022000;
            uVar17 = *0x8022000 & 0xffffffff;
            *0x8022000 = CONCAT44(*0x8022004,uVar5);
            if ((uVar5 != iVar3) && (*0x8004000 == 1)) {
                uVar5 = _printk(0x800124e,iVar8 + 0x7a8,*(iVar8 + 0x5d8),uVar17,uVar5 & 0xffffffff);
            }
        }
    }
    return uVar5;
}




// ===== sym.flw_irq_work @ 0x0800b970 (size 956) =====



void sym.flw_irq_work(void)

{
    uint32_t uVar1;
    uint uVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    uint32_t extraout_w8_03;
    uint32_t extraout_w8_04;
    int64_t iVar11;
    ulong *in_x18;
    uint32_t *extraout_x18;
    uint32_t *extraout_x18_00;
    uint32_t *extraout_x18_01;
    uint32_t *extraout_x18_02;
    uint32_t *extraout_x18_03;
    uint32_t *extraout_x18_04;
    uint32_t *extraout_x18_05;
    uint32_t *extraout_x18_06;
    uint32_t *puVar12;
    uint32_t *extraout_x18_07;
    uint32_t *extraout_x18_08;
    uint32_t *extraout_x18_09;
    uint32_t *extraout_x18_10;
    ulong *extraout_x18_11;
    ulong *puVar13;
    code *pcVar14;
    code *pcVar15;
    uint32_t unaff_w28;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if (((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) && (_obj.flw_work_in_process == 0)
       ) {
        *0x8022000 = 1;
        uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *extraout_x18 = extraout_w8;
        if (uVar4 < extraout_w8) {
            do {
                if (0x1f < uVar4) goto code_r0x0800bd08;
                _raw_spin_lock(runqueues + *(__per_cpu_offset + uVar4 * 8));
                uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
                *extraout_x18_00 = extraout_w8_00;
            } while (uVar4 < extraout_w8_00);
        }
        uVar7 = walt_sched_clock();
        puVar12 = extraout_x18_01;
        pcVar15 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                _raw_spin_lock(pcVar15 + -8);
                pcVar14 = pcVar15 + 0x10;
                *extraout_x18_03 = unaff_w28;
                uVar4 = cpumask_next(0xffffffff,pcVar14);
                puVar12 = extraout_x18_04;
                while (uVar4 < unaff_w28) {
                    if (0x1f < uVar4) goto code_r0x0800bd08;
                    iVar11 = *(__per_cpu_offset + uVar4 * 8);
                    iVar8 = *(iVar11 + 0x8053c14);
                    if ((iVar8 != 0) && (*puVar12 = iVar11, (iVar11 & *pcVar14) != 0)) {
                        walt_update_task_ravg(iVar8,runqueues + iVar11,4,uVar7,0);
                        *extraout_x18_06 = unaff_w28;
                    }
                    uVar4 = cpumask_next(uVar4,pcVar14);
                    puVar12 = extraout_x18_05;
                }
                _raw_spin_unlock(pcVar15 + -8);
                pcVar15 = *pcVar15;
                puVar12 = extraout_x18_02;
            } while (pcVar15 != cluster_head);
        }
        pcVar15 = _cluster_head;
        if (_cluster_head != cluster_head) {
            do {
                uVar4 = *(pcVar15 + 0x10);
                *puVar12 = 0x8053000;
                uStack_70 = uVar4 & 0x8053000;
                iVar5 = __sw_hweight64();
                uVar4 = cpumask_next(0xffffffff,&stack0xffffffffffffff90);
                *extraout_x18_07 = extraout_w8_01;
                puVar12 = extraout_x18_07;
                if (uVar4 < extraout_w8_01) {
                    do {
                        iVar5 = iVar5 + -1;
                        if (0x1f < uVar4) goto code_r0x0800bd08;
                        uVar1 = *(*(__per_cpu_offset + uVar4 * 8) + 0x8053d1c);
                        if (iVar5 == 0) {
                            if (0x1f < uVar1) goto code_r0x0800bd08;
                            puVar13 = *(waltgov_cb_data + *(__per_cpu_offset + uVar1 * 8));
                            if (puVar13 != NULL) {
                                pcVar14 = *puVar13;
                                __cfi_slowpath_diag(0xdebc05344f6b660a,pcVar14,0x8000b20);
                                uVar7 = walt_sched_clock();
                                uVar10 = 0x80;
                                goto code_r0x0800bbcc;
                            }
                        }
                        else {
                            if (0x1f < uVar1) goto code_r0x0800bd08;
                            puVar13 = *(waltgov_cb_data + *(__per_cpu_offset + uVar1 * 8));
                            if (puVar13 != NULL) {
                                pcVar14 = *puVar13;
                                __cfi_slowpath_diag(0xdebc05344f6b660a,pcVar14,0x8000b20);
                                uVar7 = walt_sched_clock();
                                uVar10 = 0x82;
code_r0x0800bbcc:
                                (*pcVar14)(puVar13,uVar7,uVar10);
                            }
                        }
                        uVar4 = cpumask_next(uVar4,&stack0xffffffffffffff90);
                        *extraout_x18_08 = extraout_w8_02;
                        puVar12 = extraout_x18_08;
                    } while (uVar4 < extraout_w8_02);
                }
                pcVar15 = *pcVar15;
            } while (pcVar15 != cluster_head);
        }
        uVar4 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *extraout_x18_09 = extraout_w8_03;
        if (uVar4 < extraout_w8_03) {
            do {
                if (0x1f < uVar4) {
code_r0x0800bd08:
    //WARNING: Does not return
                    pcVar15 = SoftwareBreakpoint(0x5512,0x800bd0c);
                    (*pcVar15)();
                }
                _raw_spin_unlock(runqueues + *(__per_cpu_offset + uVar4 * 8));
                uVar4 = cpumask_next(uVar4,__cpu_possible_mask);
                *extraout_x18_10 = extraout_w8_04;
            } while (uVar4 < extraout_w8_04);
        }
        *0x8022000 = 0;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    auVar16 = __stack_chk_fail();
    iVar8 = auVar16._8_8_;
    *extraout_x18_11 = 0x800bd10;
    if ((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) {
        uVar2 = *(auVar16._0_8_ + 0xba8);
        uVar9 = sym.is_rcal_task(iVar8,0);
        if (((uVar9 & 1) != 0) &&
           ((iVar6 = cpu_to_cluster(uVar2), iVar5 = *0x8022000, bVar3 = iVar6 != *0x8022000, *0x8022000 = iVar6,
            bVar3 && (*0x8004000 == 1)))) {
            _printk(0x800124e,iVar8 + 0x7a8,*(iVar8 + 0x5d8),iVar5,iVar6);
        }
    }
    return;
}




// ===== sym.game_set_cid @ 0x0800bd2c (size 196) =====



void sym.game_set_cid(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1 && *0x8004000 != 0)) {
        uVar1 = *(arg1 + 0xba8);
        uVar5 = sym.is_rcal_task(arg2,0);
        if (((uVar5 & 1) != 0) &&
           ((iVar4 = cpu_to_cluster(uVar1), iVar2 = *0x8022000, bVar3 = iVar4 != *0x8022000, *0x8022000 = iVar4,
            bVar3 && (*0x8004000 == 1)))) {
            _printk(0x800124e,arg2 + 0x7a8,*(arg2 + 0x5d8),iVar2,iVar4);
        }
    }
    return;
}




// ===== sym.skip_walt_window_update @ 0x0800bdf0 (size 72) =====



uint8_t sym.skip_walt_window_update(void)

{
    uint8_t uVar1;
    
    uVar1 = 0;
    if (_segment.ehdr != 0) {
        uVar1 = obj.frame_load_has_init & *0x8004000 != 0;
    }
    return uVar1 & *0x8004000 != 0;
}




// ===== sym.android_rvh_cpufreq_transition @ 0x0800be38 (size 232) =====



void sym.android_rvh_cpufreq_transition(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = walt_sched_clock();
    uVar4 = cpu_to_cluster(*(arg1 + 0x1c));
    iVar2 = *0x8004000;
    if (2 < uVar4) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800bf20);
        (*pcVar3)();
    }
    iVar6 = uVar4;
    if ((iVar6 * 8 < 0x19) && (uVar7 = iVar6 * 4, uVar7 < 0xd)) {
        if (*0x8022000 * 8 + iVar6 * 0x10 < 0x30) {
            *(obj.sum_freq_rt + *0x8022000 * 8 + iVar6 * 0x10) =
                 *(obj.sum_freq_rt + *0x8022000 * 8 + iVar6 * 0x10) +
                 (iVar5 - *(obj.last_freq_change_time + iVar6 * 8)) * *(obj.cur_record_freq + uVar7);
            uVar1 = *(arg1 + 0x3c);
            *(obj.last_freq_change_time + iVar6 * 8) = iVar5;
            *(obj.cur_record_freq + uVar7) = uVar1;
            if (iVar2 == 4) {
                _printk(0x8001699);
            }
            return;
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x800bf1c);
    (*pcVar3)();
}




// ===== sym.frame_load_exit @ 0x0800bf20 (size 128) =====



void sym.frame_load_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.frame_load_has_init = 0x0;
    if (*0x8022000 != 0) {
        if (*0x8004000 != 0) {
            proc_remove();
        }
        if (*0x8004000 != 0) {
            proc_remove();
        }
        arg1 = proc_remove(*0x8022000);
    }
    sym.game_link_exit(arg1);
    unregister_walt_update_hooks();
    unregister_mi_update_fravg();
    unregister_mi_enqueue_entity_hook();
    irq_work_sync(obj.flw_cpufreq_irq_work);
    return;
}




// ===== sym.set_flw_enable @ 0x0800bfa0 (size 140) =====



void sym.set_flw_enable(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    iStack_1c = 0;
    iVar1 = sscanf(arg1,0x80010d3,&iStack_1c);
    if (iVar1 == 1) {
        if (iStack_1c == 0) {
            sym.frame_load_reset(iVar1);
        }
        uVar2 = 0;
        *0x8004000 = iStack_1c;
    }
    else {
        uVar2 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    uVar2 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.get_flw_enable;
    sprintf(uVar2,0x80010d3,*0x8004000);
    return;
}




// ===== sym.get_flw_enable @ 0x0800c02c (size 52) =====



void sym.get_flw_enable(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sprintf(param_1,0x80010d3,*0x8004000);
    return;
}




// ===== sym.adjust_frame_start_slowpath @ 0x0800c060 (size 248) =====



uint64_t sym.adjust_frame_start_slowpath(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *0x8004000;
    uVar5 = *0x8004000;
    if (*0x8004000 == 5) {
        _printk(0x80014e0);
    }
    if (0 < uVar1) {
        iVar4 = uVar1 + 1;
        uVar5 = uVar5 * 0x3d0;
        do {
            if (0x4cd8 < uVar5) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x800c154);
                (*pcVar2)();
            }
            *arg2 = *(uVar5 + 0x8005278);
            if (*(uVar5 + 0x8005268) < arg1) {
                return *(uVar5 + 0x8005268);
            }
            uVar5 = uVar5 - 0x3d0;
            iVar4 = iVar4 + -1;
        } while (1 < iVar4);
        if (0x13 < uVar1) {
            return 0;
        }
    }
    uVar3 = 0x14;
    while( true ) {
        if (0x15 < uVar3) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x800c158);
            (*pcVar2)();
        }
        *arg2 = *(uVar3 * 0x3d0 + 0x8005278);
        uVar5 = *(uVar3 * 0x3d0 + 0x8005268);
        if (uVar5 < arg1) break;
        uVar3 = uVar3 - 1;
        if (uVar3 <= uVar1) {
            return 0;
        }
    }
    return uVar5;
}




// ===== sym.update_ren_sleep_ts @ 0x0800c158 (size 276) =====



void sym.update_ren_sleep_ts(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar1 = sp_el0;
        iVar4 = get_mi_task_struct(iVar1);
        if ((((iVar4 != 0) && (iVar4 != -0xe8)) && (uVar6 = *(iVar4 + 0x138), arg1 < uVar6)) &&
           (arg1 = uVar6, *0x8004000 == 0xc)) {
            _printk(0x8001412,iVar1 + 0x7a8,arg4 + 0x7a8);
        }
        if (arg1 < arg2) {
            uVar6 = *(iVar1 + 0x58);
            iVar4 = get_scale_exec_time(arg2 - arg1,uVar6 & 0xffffffff,arg3);
            if (7 < uVar6) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800c26c);
                (*pcVar2)();
            }
            iVar5 = (uVar6 & 0xffffffff) * 8;
            bVar3 = *0x8004000 == 0xc;
            *(obj.wake_record + iVar5) = *(obj.wake_record + iVar5) + iVar4;
            if (bVar3) {
                _printk(0x8001007,iVar1 + 0x7a8,uVar6 & 0xffffffff,arg4 + 0x7a8,iVar4);
            }
        }
    }
    return;
}




// ===== sym.frame_load_update @ 0x0800c270 (size 660) =====



void sym.frame_load_update(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t in_x4;
    uint32_t in_w5;
    ulong *in_x18;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    int aiStack_84 [4];
    ulong uStack_74;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_6c = 0;
    uStack_74 = 0;
    if (((_segment.ehdr != 0) && (obj.frame_load_has_init == 0x1)) && (*0x8004000 != 0)) {
        aiStack_84[0] = 1;
        iVar7 = get_mi_task_struct();
        uVar10 = 0;
        if ((iVar7 != 0) && (iVar7 != -0xe8)) {
            uVar10 = *(iVar7 + 0xec) >> 8 & 1;
        }
        uStack_74 = CONCAT44(uVar10,uStack_74);
        if ((_segment.ehdr == 0) || (iVar7 = get_mi_task_struct(arg1), iVar7 == 0)) {
            uVar11 = 0;
        }
        else {
            uVar11 = *(iVar7 + 0xc) == *0x8004000;
        }
        aiStack_84[1] = uVar11;
        iVar4 = sym.game_vip_task(arg1);
        aiStack_84[3] = iVar4 != 0;
        iVar8 = get_mi_task_struct(arg1);
        iVar7 = 0;
        if (iVar8 != 0) {
            iVar7 = iVar8 + 0xe8;
        }
        uVar9 = 0;
        if ((iVar7 != 0) && (_segment.ehdr != 0)) {
            uVar9 = *(iVar7 + 4) >> 6 & 1;
        }
        aiStack_84[2] = uVar9;
        iVar5 = sym.is_render_thread(arg1);
        if (iVar5 == 0) {
            uVar6 = sym.is_frender_sibling(arg1);
        }
        else {
            uVar6 = 1;
        }
        uStack_6c = (iVar4 != 0 && uVar9 == 0) & (uVar6 ^ 1);
        uVar1 = in_x4;
        if (*arg2 + arg3 <= in_x4) {
            uVar1 = *arg2 + arg3;
        }
        uStack_74 = CONCAT44(uStack_74._4_4_,uVar6) & 0xffffffff00000001;
        *arg2 = uVar1;
        if (uVar11 != 0) {
            uVar1 = *(arg2 + 8) + arg3;
            uVar2 = in_x4;
            if (uVar1 <= in_x4) {
                uVar2 = uVar1;
            }
            *(arg2 + 8) = uVar2;
        }
        if (uVar9 != 0) {
            uVar1 = *(arg2 + 0x10) + arg3;
            uVar2 = in_x4;
            if (uVar1 <= in_x4) {
                uVar2 = uVar1;
            }
            *(arg2 + 0x10) = uVar2;
        }
        if (iVar4 != 0) {
            uVar1 = *(arg2 + 0x18) + arg3;
            uVar2 = in_x4;
            if (uVar1 <= in_x4) {
                uVar2 = uVar1;
            }
            *(arg2 + 0x18) = uVar2;
        }
        if ((uVar6 & 1) != 0) {
            uVar1 = *(arg2 + 0x20) + arg3;
            uVar2 = in_x4;
            if (uVar1 <= in_x4) {
                uVar2 = uVar1;
            }
            *(arg2 + 0x20) = uVar2;
        }
        if (uVar10 != 0) {
            uVar1 = *(arg2 + 0x28) + arg3;
            uVar2 = in_x4;
            if (uVar1 <= in_x4) {
                uVar2 = uVar1;
            }
            *(arg2 + 0x28) = uVar2;
        }
        if (uStack_6c != 0) {
            uVar1 = *(arg2 + 0x30) + arg3;
            if (uVar1 <= in_x4) {
                in_x4 = uVar1;
            }
            *(arg2 + 0x30) = in_x4;
        }
        if ((((in_w5 & 1) != 0) && (_segment.ehdr < 7)) && (aiStack_84[_segment.ehdr] != 0)) {
            if (7 < arg4) goto code_r0x0800c500;
            iVar7 = (arg4 & 0xffffffffU) * 8;
            *(obj.choose_all_rt + iVar7) = *(obj.choose_all_rt + iVar7) + arg3;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x0800c500:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800c504);
    (*pcVar3)();
}




// ===== sym.update_hang_load @ 0x0800c504 (size 204) =====



void sym.update_hang_load(void)

{
    int64_t iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 7) {
        uVar2 = 0;
        do {
            if (*(obj.start_record + uVar2 * 8) != 0) {
                iVar3 = *(obj.choose_all_rt + uVar2 * 8) - *(obj.start_record + uVar2 * 8);
                if (*0x8004000 == 100) {
                    _printk(0x8001438,uVar2 & 0xffffffff,*(obj.choose_all_rt + uVar2 * 8),iVar3);
                }
                iVar1 = uVar2 * 8;
                *(obj.start_record + iVar1) = 0;
                *(obj.hang_record + iVar1) = *(obj.hang_record + iVar1) + iVar3;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
    }
    return;
}




// ===== sym.history_load_open_1 @ 0x0800c5d0 (size 52) =====



void sym.history_load_open_1(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.history_load_show.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt,0);
    return;
}




// ===== sym.history_load_show_1 @ 0x0800c604 (size 184) =====



ulong sym.history_load_show_1(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8022000;
    if ((_segment.ehdr != 0) && ((obj.frame_load_has_init == 0x1 && *0x8004000 != 0) && *0x8022000 != 0)) {
        uVar2 = *0x8022000 + 1;
        if (uVar2 < 0x65) {
            do {
                sym.dump_his_load_info_1(uVar2,arg1);
                uVar2 = uVar2 + 1;
            } while (uVar2 != 0x65);
            if (iVar1 < 0) {
                return 0;
            }
        }
        uVar2 = 0;
        do {
            sym.dump_his_load_info_1(uVar2,arg1);
            uVar2 = uVar2 + 1;
        } while (uVar2 <= iVar1);
    }
    return 0;
}




// ===== sym.cpu_load_open_1 @ 0x0800c6bc (size 52) =====



void sym.cpu_load_open_1(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.cpu_load_show.432ac6ef752fb1e3ef351fd6bd2843a9.cfi_jt,0);
    return;
}




// ===== sym.cpu_load_show_1 @ 0x0800c6f0 (size 184) =====



ulong sym.cpu_load_show_1(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *0x8022000;
    if ((_segment.ehdr != 0) && ((obj.frame_load_has_init == 0x1 && *0x8004000 != 0) && *0x8022000 != 0)) {
        uVar2 = *0x8022000 + 1;
        if (uVar2 < 0x65) {
            do {
                sym.dump_cpu_load_info(uVar2,arg1);
                uVar2 = uVar2 + 1;
            } while (uVar2 != 0x65);
            if (iVar1 < 0) {
                return 0;
            }
        }
        uVar2 = 0;
        do {
            sym.dump_cpu_load_info(uVar2,arg1);
            uVar2 = uVar2 + 1;
        } while (uVar2 <= iVar1);
    }
    return 0;
}




// ===== sym.dump_cpu_load_info @ 0x0800c7a8 (size 516) =====



void sym.dump_cpu_load_info(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg1 % 0x65;
    if (0x65 < uVar3) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x800c9ac);
        (*pcVar4)();
    }
    if (*(uVar3 * 0x3d0 + 0x800a280) != 0 && *0x8022000 != 0) {
        iVar5 = uVar3 * 0x3d0;
        seq_printf(arg2,0x8000e74);
        iVar1 = iVar5 + -0x180a8;
        iVar6 = 0;
        iVar2 = iVar5 + 0x8009f98;
        do {
            seq_printf(arg2,0x8000e74);
            if (0x1810f < iVar5 + iVar6 + 0x48U) {
code_r0x0800c9a4:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(1,0x800c9a8);
                (*pcVar4)();
            }
            seq_printf(arg2,"%8llu\t",*(iVar2 + iVar6));
            if ((iVar1 + iVar6) - 0x18U < 0xfffffffffffe7ef0) goto code_r0x0800c9a4;
            seq_printf(arg2,"%8llu\t",*(iVar2 + iVar6 + 8));
            if ((iVar1 + iVar6) - 0x10U < 0xfffffffffffe7ef0) goto code_r0x0800c9a4;
            seq_printf(arg2,"%8llu\t",*(iVar2 + iVar6 + 0x10));
            if ((iVar1 + iVar6) - 8U < 0xfffffffffffe7ef0) goto code_r0x0800c9a4;
            seq_printf(arg2,"%8llu\t",*(iVar2 + iVar6 + 0x18));
            if ((iVar1 + iVar6 < 0xfffffffffffe7ef0) ||
               (seq_printf(arg2,"%8llu\t",*(iVar2 + iVar6 + 0x20)), iVar1 + iVar6 + 8U < 0xfffffffffffe7ef0))
            goto code_r0x0800c9a4;
            seq_printf(arg2,"%8llu\t",*(iVar2 + iVar6 + 0x28));
            if (iVar5 + -0x18098 + iVar6 < 0xfffffffffffe7ef0) goto code_r0x0800c9a4;
            seq_printf(arg2,"%8llu\t",*(iVar2 + iVar6 + 0x30));
            seq_printf(arg2,0x800165d);
            iVar6 = iVar6 + 0x38;
        } while (iVar6 != 0x1c0);
        seq_printf(arg2,0x800165d);
    }
    return;
}




// ===== sym.is_wait_lock @ 0x0800c9ac (size 64) =====



uint8_t sym.is_wait_lock(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = get_mi_task_struct();
    uVar1 = 0;
    if ((iVar2 != 0) && (iVar2 != -0xe8)) {
        uVar1 = *(iVar2 + 0xed) >> 2 & 1;
    }
    return uVar1;
}




// ===== sym.game_link_init @ 0x0800c9ec (size 172) =====



void sym.game_link_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    register_game_wake_f(sym.render_clain_flw.f20cf08a5c0af60561839b6a406a0d16.cfi_jt);
    register_mi_dequeue_task_fair_hook(0,sym.game_dequeue_hooks.f20cf08a5c0af60561839b6a406a0d16.cfi_jt);
    tracepoint_probe_register
              (__tracepoint_android_vh_mutex_wait_start,
               sym.mi_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rtmutex_wait_start,
               sym.mi_rt_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rwsem_write_wait_start,
               sym.mi_rwsem_write_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt,0);
    tracepoint_probe_register
              (__tracepoint_android_vh_rwsem_read_wait_start,
               sym.mi_rwsem_read_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt,0);
    register_rvh_mi_try_to_wake_up(0,sym.mi_mutex_wait_finish_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt);
    return;
}




// ===== sym.render_clain_flw @ 0x0800ca98 (size 108) =====



void sym.render_clain_flw(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(arg1);
    if ((uVar1 & 1) != 0) {
        arg1_00 = sp_el0;
        uVar1 = sym.is_rcal_task(arg1_00,0);
        if ((((uVar1 & 1) != 0) && ((arg2 >> 4 & 1) != 0)) && ((*(arg1_00 + 0x3c) >> 2 & 1) == 0)) {
            sym.game_wake_task(arg1);
        }
    }
    return;
}




// ===== sym.game_dequeue_hooks @ 0x0800cb04 (size 160) =====



void sym.game_dequeue_hooks(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t extraout_x8;
    uint64_t extraout_x8_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(arg1);
    if (((uVar1 & 1) != 0) && ((arg3 & 1U) != 0)) {
        iVar2 = get_mi_task_struct(arg2);
        uVar1 = extraout_x8;
        if (((iVar2 != 0) &&
            ((uVar1 = 0, iVar2 != -0xe8 && (uVar1 = *(iVar2 + 0xed), (*(iVar2 + 0xed) >> 3 & 1) != 0)))) &&
           ((iVar2 = get_mi_task_struct(arg2), iVar2 == 0 ||
            ((iVar2 == -0xe8 || (uVar1 = *(iVar2 + 0xed), (*(iVar2 + 0xed) >> 2 & 1) == 0)))))) {
            sym.set_flw_flag(arg2,0,0x800);
            uVar1 = extraout_x8_00;
        }
        sym.game_dequeue_task(uVar1,arg2);
    }
    return;
}




// ===== sym.mi_mutex_wait_start_hook @ 0x0800cba4 (size 88) =====



void sym.mi_mutex_wait_start_hook(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(arg1);
    if ((uVar1 & 1) != 0) {
        __rcu_read_lock();
        uVar2 = *arg2;
        uVar1 = mi_task_exiting(uVar2 & 0xfffffffffffffff8);
        if ((uVar1 & 1) == 0) {
            sym.do_set_lock_vip(uVar2 & 0xfffffffffffffff8);
        }
        __rcu_read_unlock();
    }
    return;
}




// ===== sym.mi_rt_mutex_wait_start_hook @ 0x0800cc00 (size 92) =====



void sym.mi_rt_mutex_wait_start_hook(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(arg1);
    if ((uVar1 & 1) != 0) {
        __rcu_read_lock();
        arg1_00 = *(arg2 + 0x18) & 0xfffffffffffffffe;
        uVar1 = mi_task_exiting(arg1_00);
        if ((uVar1 & 1) == 0) {
            sym.do_set_lock_vip(arg1_00);
        }
        __rcu_read_unlock();
    }
    return;
}




// ===== sym.mi_rwsem_write_wait_start_hook @ 0x0800cc60 (size 100) =====



void sym.mi_rwsem_write_wait_start_hook(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(arg1);
    if ((uVar1 & 1) != 0) {
        __rcu_read_lock();
        if ((*arg2 & 1) != 0) {
            arg1_00 = *(arg2 + 8) & 0xfffffffffffffffc;
            uVar1 = mi_task_exiting(arg1_00);
            if ((uVar1 & 1) == 0) {
                sym.do_set_lock_vip(arg1_00);
            }
        }
        __rcu_read_unlock();
    }
    return;
}




// ===== sym.mi_rwsem_read_wait_start_hook @ 0x0800cccc (size 100) =====



void sym.mi_rwsem_read_wait_start_hook(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.frame_load_enable(arg1);
    if ((uVar1 & 1) != 0) {
        __rcu_read_lock();
        if ((*arg2 & 1) != 0) {
            arg1_00 = *(arg2 + 8) & 0xfffffffffffffffc;
            uVar1 = mi_task_exiting(arg1_00);
            if ((uVar1 & 1) == 0) {
                sym.do_set_lock_vip(arg1_00);
            }
        }
        __rcu_read_unlock();
    }
    return;
}




// ===== sym.mi_mutex_wait_finish_hook @ 0x0800cd38 (size 232) =====



void sym.mi_mutex_wait_finish_hook(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.frame_load_enable(arg1);
    if (((uVar2 & 1) != 0) && (arg1_00 = sp_el0, arg1_00 != 0)) {
        __rcu_read_lock();
        iVar3 = get_mi_task_struct(arg2);
        if ((iVar3 != 0) && ((iVar3 != -0xe8 && ((*(iVar3 + 0xed) >> 2 & 1) != 0)))) {
            sym.set_flw_flag(arg2,0,0x400);
            iVar3 = get_mi_task_struct(arg1_00);
            if ((iVar3 != 0) && ((iVar3 != -0xe8 && ((*(iVar3 + 0xed) >> 3 & 1) != 0)))) {
                sym.set_flw_flag(arg2,0x900,0x200);
                sym.set_flw_flag(arg1_00,0x200,0x800);
                sym.game_update_lock_time(arg1_00);
            }
        }
        __rcu_read_unlock();
        if (((*0x8022000 == 10) && (iVar1 = sym.game_super_task(arg2), iVar1 != 0)) &&
           (uVar2 = sym.is_render_thread(arg2), (uVar2 & 1) != 0)) {
            dump_stack();
        }
    }
    return;
}




// ===== sym.game_link_exit @ 0x0800ce20 (size 148) =====



void sym.game_link_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rvh_mi_try_to_wake_up(0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_mutex_wait_start,
               sym.mi_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_rtmutex_wait_start,
               sym.mi_rt_mutex_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_rwsem_write_wait_start,
               sym.mi_rwsem_write_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_rwsem_read_wait_start,
               sym.mi_rwsem_read_wait_start_hook.f20cf08a5c0af60561839b6a406a0d16.cfi_jt,0);
    unregister_mi_dequeue_task_fair_hook(0);
    unregister_game_wake_f();
    return;
}




// ===== sym.do_set_lock_vip @ 0x0800ceb4 (size 164) =====



void sym.do_set_lock_vip(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) != 0) {
        if (arg1 != 0) {
            iVar2 = sp_el0;
            uVar1 = sym.is_rcal_task(iVar2,0);
            if ((uVar1 & 1) != 0) {
                sym.set_flw_flag(iVar2,0x600,0);
                sym.set_flw_flag(arg1,0x900,0x200);
                iVar2 = get_mi_task_struct(arg1);
                if (iVar2 == 0) {
                    return;
                }
                if (iVar2 == -0xe8) {
                    return;
                }
                uVar3 = walt_sched_clock();
                *(iVar2 + 0x148) = uVar3;
                return;
            }
        }
        iVar2 = sp_el0;
        sym.set_flw_flag(iVar2,0x400,0);
    }
    return;
}




// ===== sym.cleanup_module @ 0x0800cf64 (size 368) =====



void sym.cleanup_module(int64_t arg1)

{
    code *pcVar1;
    uint64_t arg1_00;
    uint32_t extraout_w8;
    int64_t iVar2;
    ulong extraout_x8;
    ulong *extraout_x17;
    ulong *in_x18;
    uint32_t *extraout_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.frame_load_exit(arg1);
    unregister_sched_load_update_hook(0);
    unregister_mi_find_energy_efficient_cpu(0);
    unregister_mi_walt_get_indicies(0);
    misc_deregister(obj.migt_boost_flag);
    if (_segment.ehdr != 0) {
        if (_segment.ehdr != 0) {
            proc_remove();
        }
        sym.delete_game_load_proc();
        proc_remove(_segment.ehdr);
    }
    flush_workqueue(_segment.ehdr);
    destroy_workqueue(_segment.ehdr);
    arg1_00 = cpumask_next(0xffffffff,__cpu_present_mask);
    *extraout_x18 = extraout_w8;
    if (arg1_00 < extraout_w8) {
        do {
            uVar3 = arg1_00 & 0xffffffff;
            if (0x1f < arg1_00) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800d0d4);
                (*pcVar1)();
            }
            iVar2 = *(__per_cpu_offset + uVar3 * 8);
            if (((iVar2 != -0x800dff0) && (*(iVar2 + 0x800e020) != 0)) && (*(iVar2 + 0x800e020) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
                iVar2 = *(__per_cpu_offset + uVar3 * 8);
            }
            if (((iVar2 != -0x800e038) && (*(iVar2 + 0x800e068) != 0)) && (*(iVar2 + 0x800e068) < 0xfffffffffffff001)) {
                freq_qos_remove_request();
            }
            arg1_00 = cpumask_next(uVar3,__cpu_present_mask);
            *extraout_x17 = extraout_x8;
        } while (arg1_00 < extraout_x8);
    }
    iVar2 = sym.game_load_exit(arg1_00);
    sym.migt_sched_exit(iVar2);
    _printk("%s success\n","migt_exit");
    return;
}

