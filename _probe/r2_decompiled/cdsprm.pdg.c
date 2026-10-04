// decompiled from cdsprm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1012) =====

//WARNING: Switch with 1 destination removed at 0x080046f0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3cf8fd7e67121026) {
            if (arg1 < -0x61278529fef85643) {
                if (arg1 == -0x76e7814a8afd6df4) {
                    pcVar2 = sym.cdsprm_compute_prio_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
                    goto code_r0x080023a4;
                }
                if (arg1 != -0x66235b21e3e472f8) goto code_r0x080046b0;
                pcVar2 = sym.cdsprm_cxlimit_npu_limit_register.cfi_jt;
            }
            else if (arg1 == -0x61278529fef85643) {
                pcVar2 = sym.cdsprm_rpmsg_callback.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) {
                    if (arg1 != -0x53c887a672ae5243) goto code_r0x080046b0;
                    pcVar2 = sym.__typeid__ZTSFijE_global_addr;
                    goto code_r0x08002388;
                }
                pcVar2 = sym.process_delayed_rm_request.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
            }
        }
        else if (arg1 < -0x2834c75297d9949b) {
            if (arg1 != -0x3cf8fd7e67121026) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x080046b0;
                pcVar2 = sym.hvx_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
                goto code_r0x080023c0;
            }
            pcVar2 = sym.cdsprm_register_cdspl3gov.cfi_jt;
        }
        else if (arg1 == -0x2834c75297d9949b) {
            pcVar2 = sym.cdsprm_cxlimit_npu_corner_notify.cfi_jt;
        }
        else {
            if (arg1 != -0x19ad56ffbc919b67) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8002488 >> 3 | pcVar1 << 0x3d) < 6)) {
                    return;
                }
                goto code_r0x080046b0;
            }
            pcVar2 = sym.cdsprm_rpmsg_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
        }
        goto code_r0x080023e4;
    }
    if (arg1 < 0x519d946a5cb8d608) {
        if (0x1d7ed092cb04d3f0 < arg1) {
            if (arg1 == 0x1d7ed092cb04d3f1) {
                pcVar2 = sym.debugfs_attr_write.cfi_jt;
            }
            else {
                if (arg1 != 0x2ce63a3287021e91) {
                    if (arg1 != 0x321969b888d4949e) goto code_r0x080046b0;
                    pcVar2 = sym.seq_lseek.cfi_jt;
                    goto code_r0x080023c0;
                }
                pcVar2 = sym.cdsprm_rpmsg_remove.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
            }
code_r0x080023e4:
            if (pcVar1 == pcVar2) {
                return;
            }
            goto code_r0x080046b0;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x080046b0;
            pcVar2 = sym.debugfs_attr_read.cfi_jt;
        }
    }
    else if (arg1 < 0x6b141b54612cf75f) {
        if (arg1 != 0x519d946a5cb8d608) {
            if (arg1 == 0x5233d5bc7887ae44) {
                pcVar2 = sym.cdsprm_resmgr_pdkill_state_show.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
            }
            else {
                if (arg1 != 0x641d19c7be126e92) goto code_r0x080046b0;
                pcVar2 = sym.process_cdsp_request_thread.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
            }
            goto code_r0x080023e4;
        }
        pcVar2 = sym.hvx_set_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
    }
    else {
        if (arg1 == 0x6b141b54612cf75f) {
            pcVar2 = sym.cdsprm_compute_prio_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
code_r0x080023a4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080046b0;
        }
        if (arg1 == 0x6b571d3f779580cd) {
            pcVar2 = sym.cdsp_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
code_r0x08002388:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x080046b0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080046b0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x080023c0:
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x080046b0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004704);
    (*pcVar1)();
}


// ===== sym.process_delayed_rm_request.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002400 (size 8) =====

void sym.process_delayed_rm_request.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(0x8000a48);
    InstructionSynchronizationBarrier();
    uVar1 = cntvct_el0;
    if ((*0x8000bf0 == *0x8000af8) && (uVar1 < *0x8000ac0)) {
        while (uVar1 = *0x8000ac0 - uVar1, uVar1 < _segment.ehdr * 0x4b00) {
            *0x8000ab8 = 2;
            mutex_unlock(0x8000a48);
            uVar1 = (uVar1 / 0x4b00) * 1000;
            usleep_range_state(uVar1 & 0xfffffff8,uVar1 + 2000,2);
            mutex_lock(0x8000a48);
            *0x8000ab8 = 3;
            InstructionSynchronizationBarrier();
            uVar1 = cntvct_el0;
            if ((*0x8000bf0 != *0x8000af8) || (*0x8000ac0 <= uVar1)) break;
        }
    }
    sym.set_qos_latency(0x7fffffff);
    *0x8000bf0 = 0x7fffffff;
    *0x8000ab8 = 4;
    mutex_unlock(0x8000a48);
    return;
}


// ===== sym.cdsprm_compute_prio_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002408 (size 8) =====

ulong sym.cdsprm_compute_prio_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = _segment.ehdr;
    return 0;
}


// ===== sym.cdsprm_vtcm_partition_state_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002410 (size 8) =====

ulong sym.cdsprm_vtcm_partition_state_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = _segment.ehdr;
    return 0;
}


// ===== sym.cdsprm_resmgr_pdkill_override_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002418 (size 8) =====

ulong sym.cdsprm_resmgr_pdkill_override_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = _segment.ehdr;
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08002420 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init("","",obj.cdsprm_init.__key);
    __mutex_init(0x8000a80,"",obj.cdsprm_init.__key);
    __mutex_init(0x8000b08,"",obj.cdsprm_init.__key);
    __mutex_init(0x8000ba0,"",obj.cdsprm_init.__key);
    *0x8000a78 = 0;
    *0x8000108 = 0;
    __init_swait_queue_head(0x8000110,"",obj.cdsprm_init.__key);
    *0x8000b50 = 0;
    __init_swait_queue_head(0x8000b58,"",obj.cdsprm_init.__key);
    str.gcdsprm.npu_activity_lock._14_4_ = 0;
    __init_swait_queue_head("","",obj.cdsprm_init.__key);
    uVar2 = kthread_create_on_node
                      (sym.process_cdsp_request_thread.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,0,0xffffffff,"");
    if (uVar2 < 0xfffffffffffff001) {
        wake_up_process(uVar2);
    }
    _segment.ehdr = uVar2;
    if (uVar2 == 0) {
        _printk(0x8000698);
        iVar1 = -0xc;
    }
    else {
        _segment.ehdr = alloc_workqueue(0x800053f,0xe000a,1,"");
        if (_segment.ehdr == 0) {
            _printk(0x8000934);
            iVar1 = -0xc;
        }
        else {
            *0x8000a18 = 0xfffffffe0;
            *0x8000a20 = 0x8000a20;
            *0x8000a28 = 0x8000a20;
            str._nresmgr_pdkill_feature_is_disabled_by_debugfs_override_n._0_8_ =
                 sym.process_delayed_rm_request.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
            iVar1 = __platform_driver_register
                              (reloc.cdsp_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,obj.__this_module);
            if (iVar1 == 0) {
                _segment.ehdr = CONCAT44(*0x8000004,1);
                iVar1 = __platform_driver_register
                                  (reloc.hvx_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,obj.__this_module)
                ;
                if (iVar1 == 0) {
                    _segment.ehdr = CONCAT44(*0x8000004,1);
                    iVar1 = __register_rpmsg_driver(obj.cdsprm_rpmsg_client,obj.__this_module);
                    if (iVar1 == 0) {
                        *0x8000be9 = 1;
                        _printk(0x80008f9);
                        return 0;
                    }
                    uVar3 = 0x80005ae;
                }
                else {
                    uVar3 = 0x8000731;
                }
            }
            else {
                uVar3 = 0x8000a80;
            }
            _printk(uVar3,iVar1);
            destroy_workqueue(_segment.ehdr);
        }
        kthread_stop(_segment.ehdr);
    }
    return iVar1;
}


// ===== sym.cdsprm_cxlimit_npu_limit_deregister.cfi_jt @ 0x08002428 (size 8) =====

ulong sym.cdsprm_cxlimit_npu_limit_deregister.cfi_jt(void)

{
    if (_segment.ehdr != 0) {
        _segment.ehdr = 0;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.cdsprm_cxlimit_npu_limit_register.cfi_jt @ 0x08002430 (size 8) =====

ulong sym.cdsprm_cxlimit_npu_limit_register.cfi_jt(ulong *param_1)

{
    if (param_1 != NULL) {
        _segment.ehdr = *param_1;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08002438 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.seq_read.cfi_jt @ 0x08002440 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.hvx_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002448 (size 8) =====

ulong sym.hvx_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_2c = 0;
    of_property_read_variable_u32_array(*(param_1 + 0x300),"",&iStack_2c,1,0);
    uVar2 = _segment.ehdr;
    if ((iStack_2c != 0) &&
       (uVar2 = thermal_of_cooling_device_register
                          (*(param_1 + 0x300),0x80005e8,0,
                           reloc.hvx_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt), 0xfffffffffffff000 < uVar2
       )) {
        _dev_err(param_1 + 0x10,"");
    }
    _segment.ehdr = uVar2;
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x1 = 10;
        return 0;
    }
    return 0;
}


// ===== sym.cdsp_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002450 (size 8) =====

uint64_t sym.cdsp_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    uint64_t uVar9;
    uint *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_70 = 0;
    iVar4 = of_find_property(*(param_1 + 0x300),"",0);
    *0x8000bec = iVar4 != 0;
    if ((iVar4 != 0) && (of_find_property(*(param_1 + 0x300),"",""), str.qcom_qos_cores._4_4_ != 0)) {
        _segment.ehdr = CONCAT44(*0x8000004,str.qcom_qos_cores._4_4_ >> 2);
        iVar4 = __kmalloc(str.qcom_qos_cores._4_4_ & 0xfffffffc,0xdc0);
        if (iVar4 == 0) {
            pcVar6 = "";
        }
        else {
            if (_segment.ehdr != 0) {
                uVar8 = 0;
                do {
                    iVar2 = of_property_read_u32_index(*(param_1 + 0x300),"",uVar8,iVar4 + uVar8 * 4);
                    if (iVar2 != 0) {
                        _dev_err(param_1 + 0x10,"","",uVar8);
                        *0x8000bec = 0;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < _segment.ehdr);
            }
            unique0x10000483 = iVar4;
            *0x4000 = __kmalloc((_segment.ehdr & 0xffffffff) * 0x58,0xdc0);
            if (*0x4000 != 0) goto code_r0x08003740;
            pcVar6 = "";
        }
        _dev_err(param_1 + 0x10,pcVar6);
        *0x8000bec = 0;
    }
code_r0x08003740:
    iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",0x8000af8,1,0);
    if ((-1 < iVar2) &&
       (iVar2 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",0x8000afc,1,0), -1 < iVar2)) {
        _segment.ehdr = debugfs_create_dir("",0);
        if (_segment.ehdr == 0) {
            _dev_err(param_1 + 0x10,"");
        }
        *0x8000b00 = 4;
        of_property_read_variable_u32_array(*(param_1 + 0x300),"",0x8000b00,1,0);
        iVar4 = of_find_property(*(param_1 + 0x300),"",0);
        *0x8000b38 = iVar4 != 0;
        if (((iVar4 != 0) && (*0x8000c00 != 0)) &&
           (_segment.ehdr = debugfs_create_file("",0x1a4,*0x8000c00,0,obj.cdsprm_debugfs_fops), _segment.ehdr == 0)
           ) {
            debugfs_remove(0);
            _dev_err(param_1 + 0x10,"");
        }
        of_property_read_variable_u32_array(*(param_1 + 0x300),"",&uStack_70,1,0);
        uVar5 = _segment.ehdr;
        if ((uStack_70 != 0) &&
           (uVar5 = thermal_of_cooling_device_register
                              (*(param_1 + 0x300),"",0,
                               reloc.cdsp_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt),
           0xfffffffffffff000 < uVar5)) {
            _dev_err(param_1 + 0x10,"");
        }
        _segment.ehdr = uVar5;
        *0x8000bea = 1;
        iVar4 = of_find_property(*(param_1 + 0x300),"",0);
        *0x80000f4 = iVar4 != 0;
        if (iVar4 == 0) {
code_r0x08003a94:
            iVar4 = of_find_property(*(param_1 + 0x300),"",0);
            *0x80000f8 = iVar4 != 0;
            *0x80000fc = *0x80000f8;
            if (*0x8000c00 != 0) {
                _segment.ehdr = debugfs_create_file("",0x1a4,*0x8000c00,0,obj.cdsprm_resmgr_pdkill_debugfs_fops);
                if (_segment.ehdr == 0) {
                    _dev_err(param_1 + 0x10,"");
                }
                str.partition_id_is_invalid:__d_n._21_8_ =
                     debugfs_create_file("",0x124,*0x8000c00,0,obj.cdsprm_resmgr_pdkill_state_fops);
                if (str.partition_id_is_invalid:__d_n._21_8_ == 0) {
                    _dev_err(param_1 + 0x10,"");
                }
            }
            uVar3 = 0;
            goto code_r0x08003c40;
        }
        iVar2 = of_property_count_elems_of_size(*(param_1 + 0x300),"",4);
        uVar8 = iVar2 / 3;
        *0x80008fc = uVar8;
        if (iVar2 == uVar8 * 3) {
            if ((uVar8 & 0xff) != 0) {
                uVar5 = 0;
                iVar4 = 0x207;
                puVar10 = 0x8000908;
                do {
                    iVar2 = iVar4;
                    uVar3 = of_property_read_u32_index(*(param_1 + 0x300),"",iVar2 + -0x207,&uStack_70 + 4);
                    if (uVar3 != 0) goto code_r0x08003b44;
                    if (iVar4 == 0x237) goto code_r0x08003c9c;
                    *(puVar10 + -2) = uStack_70._4_1_;
                    if (uVar8 <= uStack_70._4_1_) {
                        pcVar6 = "";
                        goto code_r0x08003c38;
                    }
                    uVar3 = of_property_read_u32_index(*(param_1 + 0x300),"",iVar2 + -0x206,&uStack_70 + 4);
                    if (uVar3 != 0) {
code_r0x08003b44:
                        pcVar6 = "";
                        goto code_r0x08003bac;
                    }
                    puVar10[-1] = uStack_70._4_4_;
                    uVar3 = of_property_read_u32_index(*(param_1 + 0x300),"",iVar2 + -0x205,&uStack_70 + 4);
                    if (uVar3 != 0) goto code_r0x08003b44;
                    uVar5 = uVar5 + 1;
                    iVar4 = iVar4 + 3;
                    *puVar10 = uStack_70._4_4_;
                    puVar10 = puVar10 + 3;
                } while (uVar5 < *0x80008fc);
            }
            uVar3 = of_property_count_elems_of_size(*(param_1 + 0x300),"",4);
            uVar8 = uVar3;
            if (uVar3 < 0) {
                uVar8 = uVar3 + 1;
            }
            uVar8 = uVar8 >> 1;
            *0x80008fd = uVar8;
            if ((uVar3 & 1) == 0) {
                if ((uVar8 & 0xff) != 0) {
                    uVar5 = 0;
                    uVar9 = 0;
                    do {
                        uVar3 = of_property_read_u32_index(*(param_1 + 0x300),"",uVar9 & 0xffffffff,&uStack_70 + 4);
                        if (uVar3 != 0) {
code_r0x08003b98:
                            pcVar6 = "";
code_r0x08003bac:
                            _dev_err(param_1 + 0x10,pcVar6,uVar5 & 0xffffffff,uStack_70._4_4_);
                            goto code_r0x08003c40;
                        }
                        if (uVar5 == 0x20) {
code_r0x08003c9c:
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003ca0);
                            (*pcVar1)();
                        }
                        *(uVar9 + 0x80009c0) = uStack_70 >> 0x20;
                        uVar3 = of_property_read_u32_index(*(param_1 + 0x300),"",uVar9 + 1,&uStack_70 + 4);
                        if (uVar3 != 0) goto code_r0x08003b98;
                        uVar7 = *0x80008fd;
                        uVar5 = uVar5 + 1;
                        *(uVar9 + 0x80009c1) = uStack_70 >> 0x20;
                        uVar9 = uVar9 + 2;
                    } while (uVar5 < uVar7);
                }
                if ((_segment.ehdr == 0) && (_segment.ehdr = debugfs_create_dir("",0), _segment.ehdr == 0)) {
                    _dev_err(param_1 + 0x10,"",0);
                }
                else {
                    _segment.ehdr = debugfs_create_file("",0x1a4,_segment.ehdr,0,obj.cdsprmvtcm_debugfs_fops);
                }
                if (_segment.ehdr == 0) {
                    debugfs_remove(0);
                    _dev_err(param_1 + 0x10,"");
                }
                goto code_r0x08003a94;
            }
            pcVar6 = "";
        }
        else {
            pcVar6 = "";
        }
code_r0x08003c38:
        _dev_err(param_1 + 0x10,pcVar6,uVar8);
    }
    uVar3 = 0xffffffea;
code_r0x08003c40:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        *extraout_x18 = sym.cdsprm_debugfs_fops_open;
        uVar5 = simple_attr_open(auVar11._0_8_,auVar11._8_8_,
                                 sym.cdsprm_compute_prio_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                                 sym.cdsprm_compute_prio_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
        return uVar5;
    }
    return uVar3;
}


// ===== sym.cdsprm_cxlimit_npu_corner_notify.cfi_jt @ 0x08002458 (size 8) =====

uint64_t sym.cdsprm_cxlimit_npu_corner_notify.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar7;
    ulong unaff_x30;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uVar7 = param_1;
    uStack_40 = 0;
    uStack_48 = 0;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar2 = *0x8000b94;
    uVar3 = param_1;
    if ((*0x8000ab0 != 0) && (uVar3 = param_1, _obj.gcdsprm != 0)) {
        if ((param_1 == 0) || (*0x8000b94 < param_1)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_48 = CONCAT44(param_1,8);
        uStack_40 = 0xc;
        *0x8000b94 = param_1;
        iVar4 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
        if ((_segment.ehdr - 1 < uVar2) || (iVar4 == 0)) {
            uVar3 = *0x8000b94;
            if ((_segment.ehdr <= uVar2 && _segment.ehdr != 0) || (iVar4 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar7 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar3 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar3;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_58 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffd0;
    if (*0x8000b38 == '\0') {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *0x8000b40 = uVar5;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_78 = 0xb;
            uStack_70 = 0xc;
            uStack_74 = uVar5;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_78,0xc);
            uVar7 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.cdsprm_unregister_cdspl3gov;
    uVar6 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar7 = _raw_spin_unlock_irqrestore(0x8000a78,uVar6);
    return uVar7;
}


// ===== sym.cdsprm_rpmsg_callback.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002460 (size 8) =====

ulong sym.cdsprm_rpmsg_callback.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,int *param_2,ulong param_3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    code *pcVar8;
    ulong uVar9;
    uint64_t uVar10;
    char *pcVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == NULL) || (param_3 < 0x14)) {
        _dev_err(param_1,"",param_3,0x14);
        return 0xffffffea;
    }
    iVar5 = *param_2;
    if ((iVar5 == 2) && (str.Received_incorrect_msg_feature__d_n[2] != '\0')) goto code_r0x0800444c;
    if (iVar5 == 9) {
        if (str.Invalid_message_in_rpmsg_callback__length:__d__expected:__lu_n[0x14] == '\0') {
code_r0x08004668:
            _dev_err(param_1,"");
            return 0;
        }
        *0x8000b98 = param_2[1];
        if (str.Invalid_message_in_rpmsg_callback__length:__d__expected:__lu_n._36_4_ != 0) {
            pcVar11 = 0x8000b70;
code_r0x080045dc:
            complete(pcVar11);
            return 0;
        }
code_r0x08004630:
        uVar9 = 0;
    }
    else {
        if (iVar5 == 1) {
            uVar9 = _raw_spin_lock_irqsave(0x8000a78);
            str.msm_hvx_rm[8] = str.msm_hvx_rm[0];
            str.msm_hvx_rm[9] = str.msm_hvx_rm[1];
            str.msm_hvx_rm[10] = str.msm_hvx_rm[2];
            str.qcom_vtcm_partition_info[0] = str.msm_hvx_rm[3];
            str.qcom_vtcm_partition_info[1] = str.msm_hvx_rm[4];
            str.qcom_vtcm_partition_info[2] = str.msm_hvx_rm[5];
            str.qcom_vtcm_partition_info[3] = str.msm_hvx_rm[6];
            str.qcom_vtcm_partition_info[4] = str.msm_hvx_rm[7];
            _raw_spin_unlock_irqrestore(0x8000a78,uVar9);
            if (*0x8000c30 == 0) goto code_r0x08004630;
        }
        else if ((iVar5 != 5) || (str.Invalid_message_in_rpmsg_callback__length:__d__expected:__lu_n[0x14] == '\0')) {
            if ((iVar5 == 7) && (str.Invalid_message_in_rpmsg_callback__length:__d__expected:__lu_n[0x14] != '\0')) {
                if (_segment.ehdr != 0) {
                    pcVar11 = "";
                    goto code_r0x080045dc;
                }
            }
            else {
                if (iVar5 != 0x11) {
                    if (iVar5 == 0xe) {
                        if (param_2[1] != 0) {
                            _segment.ehdr = 0;
                            return 0;
                        }
                        _segment.ehdr = 1;
                        return 0;
                    }
                    if (iVar5 != 0xc) goto code_r0x08004668;
                    _segment.ehdr = param_2[1];
                    goto code_r0x0800444c;
                }
                if (param_2[1] == 0) {
                    *0x8000100 = *0x80000fc;
                    return 0;
                }
            }
            goto code_r0x08004630;
        }
code_r0x0800444c:
        uVar9 = _raw_spin_lock_irqsave(0x8000a7c);
        uVar12 = *0x8000a00;
        if (0x31 < *0x8000a00) {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5512,0x80046ac);
            (*pcVar8)();
        }
        pcVar11 = uVar12 * 0x28 + 0x800014c;
        if (*pcVar11 == '\0') {
            iVar6 = uVar12 * 0x28;
            *pcVar11 = '\x01';
            piVar7 = *0x80003c8;
            uVar3 = *param_2;
            uVar4 = *(param_2 + 2);
            piVar1 = iVar6 + 0x8000128;
            *(iVar6 + 0x8000148) = param_2[4];
            *(iVar6 + 0x8000138) = uVar3;
            *(iVar6 + 0x8000140) = uVar4;
            uVar2 = 0;
            if (*0x8000a00 < 0x31) {
                uVar2 = *0x8000a00 + 1;
            }
            *0x8000a00 = uVar2;
            uVar10 = __list_add_valid(piVar1,piVar7,obj.cdsprm_list);
            if ((uVar10 & 1) != 0) {
                *0x80003c8 = piVar1;
                *piVar1 = obj.cdsprm_list;
                *(uVar12 * 0x28 + 0x8000130) = piVar7;
                *piVar7 = piVar1;
            }
            _raw_spin_unlock_irqrestore(0x8000a7c,uVar9);
            __wake_up(obj.cdsprm_wq,1,1,0);
            uVar9 = 0;
        }
        else {
            _raw_spin_unlock_irqrestore(0x8000a7c,uVar9);
            uVar9 = 0xfffffff4;
        }
    }
    return uVar9;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002468 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004c78)
//WARNING: Removing unreachable block (ram,0x08004c90)
//WARNING: Removing unreachable block (ram,0x08004c98)
//WARNING: Removing unreachable block (ram,0x08004cc8)
//WARNING: Removing unreachable block (ram,0x08004ccc)

void sym.cleanup_module.cfi_jt(void)

{
    bool bVar1;
    code *pcVar2;
    int64_t iVar3;
    uchar uVar4;
    int iVar5;
    uchar *extraout_x1;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_58;
    uint uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_50 = 0;
    uStack_58 = 0;
    _printk(0x800062d);
    if (str.Received_incorrect_msg_feature__d_n[0] != '\0') {
        sym.set_qos_latency(0x7fffffff);
        _segment.ehdr = 0x7fffffff;
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        thermal_cooling_device_unregister();
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        thermal_cooling_device_unregister();
    }
    if (*0x8000b38 != '\0') {
        mutex_lock(0x8000b08);
        complete_all(0x8000b50);
        complete_all(0x8000b70);
        mutex_unlock(0x8000b08);
        pcVar2 = *0x8000c38;
        *0x8000c40 = *0x8000c38;
        if ((*0x8000b9c < 8) && (*0x8000c38 != NULL)) {
            __cfi_slowpath_diag(0xd8880f61b62dcc42,*0x8000c38,0x8000430);
            (*pcVar2)(8);
        }
    }
    if ((_obj.gcdsprm != 0) && (*0x8000b38 != '\0')) {
        if (_segment.ehdr != 0) {
            uStack_58 = 6;
            uStack_50 = 0xc;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_58,0xc);
            *0x8000b3c = 0;
        }
        if (_segment.ehdr != 0) {
            uStack_58 = 8;
            uStack_50 = 0xc;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_58,0xc);
            *0x8000b94 = 0;
        }
        if (_segment.ehdr != 0) {
            uStack_58 = 0xb;
            uStack_50 = 0xc;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_58,0xc);
            *0x8000b40 = 0;
        }
    }
    if (_segment.ehdr != 0) {
        uStack_40 = 0;
        uStack_48 = 0;
        mutex_lock(0x8000ba0);
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_40 = 0xc;
            uStack_48 = CONCAT24(_segment.ehdr,10);
            iVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
            if (iVar5 == 0) {
                _segment.ehdr = 0;
            }
        }
        mutex_unlock(0x8000ba0);
        *0x8000bd0 = 0;
    }
    if (str.Received_incorrect_msg_feature__d_n[1] != '\0') {
        unregister_rpmsg_driver(obj.cdsprm_rpmsg_client);
        *0x8000ab0 = 0;
        _obj.gcdsprm = 0;
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        kthread_stop();
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        destroy_workqueue();
    }
    if (_segment.ehdr != 0) {
        platform_driver_unregister(reloc.cdsp_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt);
    }
    if (_segment.ehdr != 0) {
        platform_driver_unregister(reloc.hvx_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt);
    }
    debugfs_remove(str.Received_incorrect_msg_feature__d_n._24_8_);
    str.Received_incorrect_msg_feature__d_n[1] = '\0';
    str.Received_incorrect_msg_feature__d_n[0xc] = '\0';
    str.Received_incorrect_msg_feature__d_n[0xd] = '\0';
    str.Received_incorrect_msg_feature__d_n[0xe] = '\0';
    str.Received_incorrect_msg_feature__d_n[0xf] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x10] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x11] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x12] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x13] = '\0';
    str.qcom_qos_maxhold_ms[4] = '\0';
    str.qcom_qos_maxhold_ms[5] = '\0';
    str.qcom_qos_maxhold_ms[6] = '\0';
    str.qcom_qos_maxhold_ms[7] = '\0';
    str.qcom_qos_maxhold_ms[8] = '\0';
    str.qcom_qos_maxhold_ms[9] = '\0';
    str.qcom_qos_maxhold_ms[10] = '\0';
    str.qcom_qos_maxhold_ms[0xb] = '\0';
    str.qcom_qos_maxhold_ms[0xc] = '\0';
    str.qcom_qos_maxhold_ms[0xd] = '\0';
    str.qcom_qos_maxhold_ms[0xe] = '\0';
    str.qcom_qos_maxhold_ms[0xf] = '\0';
    str.qcom_qos_maxhold_ms[0x10] = '\0';
    str.qcom_qos_maxhold_ms[0x11] = '\0';
    str.qcom_qos_maxhold_ms[0x12] = '\0';
    str.qcom_qos_maxhold_ms[0x13] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x18] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x19] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1a] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1b] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1c] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1d] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1e] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1f] = '\0';
    *0x8000c08 = 0;
    *0x8000c10 = 0;
    *0x8000c18 = 0;
    *0x8000c20 = 0;
    _printk(0x8000556);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    uVar4 = __stack_chk_fail();
    bVar1 = ExclusiveMonitorPass(extraout_x1,0x10);
    if (bVar1) {
        *extraout_x1 = uVar4;
        ExclusiveMonitorsStatus();
    }
    //WARNING: Does not return
    pcVar2 = UndefinedInstructionException(0,0x8004e2c);
    (*pcVar2)();
}


// ===== sym.cdsprm_unregister_cdspl3gov.cfi_jt @ 0x08002470 (size 8) =====

void sym.cdsprm_unregister_cdspl3gov.cfi_jt(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    _raw_spin_unlock_irqrestore(0x8000a78,uVar1);
    return;
}


// ===== sym.hvx_set_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002478 (size 8) =====

ulong sym.hvx_set_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if ((_segment.ehdr & 0xffffffff) != param_2) {
        uStack_40 = 0;
        uStack_48 = 0;
        mutex_lock(0x8000ba0);
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_48 = CONCAT44(param_2 & 0xffff,10);
            uStack_40 = 0xc;
            uStack_48 = CONCAT26(_segment.ehdr,uStack_48);
            iVar1 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
            if (iVar1 == 0) {
                _segment.ehdr = CONCAT44(*0x8000004,param_2);
            }
        }
        mutex_unlock(0x8000ba0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_rpmsg_probe;
    of_platform_populate(*(iVar2 + 0x2f0),0,0,iVar2);
    _segment.ehdr = iVar2;
    return 0;
}


// ===== sym.cdsp_set_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002480 (size 8) =====

ulong sym.cdsp_set_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint64_t param_2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if (_segment.ehdr != param_2) {
        uStack_40 = 0;
        uStack_48 = 0;
        mutex_lock(0x8000ba0);
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_40 = 0xc;
            uStack_48._6_2_ = param_2;
            uStack_48._0_6_ = CONCAT24(_segment.ehdr,10);
            iVar2 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
            if (iVar2 == 0) {
                _segment.ehdr = param_2;
            }
        }
        mutex_unlock(0x8000ba0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return 0;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprmvtcm_debugfs_fops_open;
    uVar3 = simple_attr_open(auVar4._0_8_,auVar4._8_8_,
                             sym.cdsprm_vtcm_partition_state_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                             sym.cdsprm_vtcm_partition_state_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
    return uVar3;
}


// ===== sym.cdsprm_resmgr_pdkill_debugfs_fops_open.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002488 (size 8) =====

void sym.cdsprm_resmgr_pdkill_debugfs_fops_open.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.cdsprm_resmgr_pdkill_override_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                     sym.cdsprm_resmgr_pdkill_override_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08002490 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08002498 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cdsprm_resmgr_pdkill_state_open.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x080024a0 (size 8) =====

void sym.cdsprm_resmgr_pdkill_state_open.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.cdsprm_resmgr_pdkill_state_show.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,*(param_1 + 0x2d8)
               );
    return;
}


// ===== sym.cdsprm_debugfs_fops_open.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x080024a8 (size 8) =====

void sym.cdsprm_debugfs_fops_open.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.cdsprm_compute_prio_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                     sym.cdsprm_compute_prio_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
    return;
}


// ===== sym.cdsprmvtcm_debugfs_fops_open.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x080024b0 (size 8) =====

void sym.cdsprmvtcm_debugfs_fops_open.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.cdsprm_vtcm_partition_state_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                     sym.cdsprm_vtcm_partition_state_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
    return;
}


// ===== sym.cdsprm_register_cdspl3gov.cfi_jt @ 0x080024b8 (size 8) =====

void sym.cdsprm_register_cdspl3gov.cfi_jt(char *param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != NULL) {
        *in_x18 = unaff_x30;
        uVar1 = _raw_spin_lock_irqsave(0x8000a78);
        str.msm_hvx_rm._0_8_ = *param_1;
        _raw_spin_unlock_irqrestore(0x8000a78,uVar1);
    }
    return;
}


// ===== sym.__typeid__ZTSFijE_global_addr @ 0x080024c0 (size 8) =====

uint64_t sym.__typeid__ZTSFijE_global_addr(uint32_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x19;
    uint64_t uVar7;
    uint64_t unaff_x20;
    uint64_t uVar8;
    ulong unaff_x22;
    ulong unaff_x30;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    ulong uStack_98;
    uint uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    if (*0x8000b38 == '\0') {
        uVar8 = 0xffffffea;
    }
    else {
        unaff_x20 = param_1;
        unaff_x19 = 0x8000b08;
        mutex_lock(0x8000b08);
        if (param_1 == 0) {
            uVar3 = _segment.ehdr;
            if (*0x8000b90 != 0) {
                iVar4 = -1;
                goto code_r0x0800297c;
            }
code_r0x080029a8:
            if (uVar3 == 0) goto code_r0x080029ac;
code_r0x08002a04:
            uVar8 = 0xffffffea;
            *0x8000b3c = param_1;
            if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                unaff_x22 = 0x8000000;
                if (param_1 != 0) {
                    _segment.ehdr = _segment.ehdr + 1;
                }
                uStack_48 = CONCAT44(param_1,6);
                uStack_40 = 0xc;
                uVar3 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
                uVar8 = uVar3;
                if ((_segment.ehdr == 0) || (uVar3 == 0)) {
                    if ((_segment.ehdr == 0) || (uVar3 != 0)) goto code_r0x080029b0;
                    mutex_unlock(0x8000b08);
                    wait_for_completion(0x8000b50);
                    mutex_lock(0x8000b08);
                }
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
        else {
            iVar4 = 1;
code_r0x0800297c:
            *0x8000b90 = iVar4 + *0x8000b90;
            if ((*0x8000b90 == 0) || (*0x8000b3c == 0)) {
                uVar3 = *0x8000b3c;
                if (*0x8000b90 == 0) goto code_r0x080029a8;
                goto code_r0x08002a04;
            }
code_r0x080029ac:
            uVar8 = 0;
        }
code_r0x080029b0:
        mutex_unlock(0x8000b08);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_cxlimit_npu_corner_notify;
    pcStack_78 = sym.cdsprm_cxlimit_npu_corner_notify;
    iVar1 = sp_el0;
    iStack_88 = *(iVar1 + 0x5e0);
    uVar7 = uVar3;
    uStack_90 = 0;
    uStack_98 = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    uStack_70 = unaff_x22;
    uStack_68 = uVar8;
    uStack_60 = unaff_x20;
    uStack_58 = unaff_x19;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar2 = *0x8000b94;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        if ((uVar3 == 0) || (*0x8000b94 < uVar3)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_98 = CONCAT44(uVar3,8);
        uStack_90 = 0xc;
        *0x8000b94 = uVar3;
        iVar4 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_98,0xc);
        if ((_segment.ehdr - 1 < uVar2) || (iVar4 == 0)) {
            uVar3 = *0x8000b94;
            if ((_segment.ehdr <= uVar2 && _segment.ehdr != 0) || (iVar4 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar7 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar3 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar3;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_88) {
        return uVar7;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_a8 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    ppuStack_b0 = &puStack_80;
    if (*0x8000b38 == '\0') {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0;
        *0x8000b40 = uVar5;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_c8 = 0xb;
            uStack_c0 = 0xc;
            uStack_c4 = uVar5;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_c8,0xc);
            uVar8 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return uVar8;
    }
    __stack_chk_fail(uVar8);
    *extraout_x18_01 = sym.cdsprm_unregister_cdspl3gov;
    uVar6 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar8 = _raw_spin_unlock_irqrestore(0x8000a78,uVar6);
    return uVar8;
}


// ===== sym.cdsprm_cxlimit_camera_activity_notify.cfi_jt @ 0x080024c8 (size 8) =====

void sym.cdsprm_cxlimit_camera_activity_notify.cfi_jt(uint param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    if (*0x8000b38 == '\0') {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
        *0x8000b40 = param_1;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_28 = 0xb;
            uStack_20 = 0xc;
            uStack_24 = param_1;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_28,0xc);
            uVar2 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail(uVar2);
    *extraout_x18 = sym.cdsprm_unregister_cdspl3gov;
    uVar2 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    _raw_spin_unlock_irqrestore(0x8000a78,uVar2);
    return;
}


// ===== sym.cdsprm_compute_core_set_priority.cfi_jt @ 0x080024d0 (size 8) =====

uint64_t sym.cdsprm_compute_core_set_priority.cfi_jt(uint param_1)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x22;
    ulong unaff_x30;
    uint uStack_398;
    uint uStack_394;
    uint uStack_390;
    int64_t iStack_388;
    ulong ****ppppuStack_380;
    code *pcStack_378;
    ulong uStack_368;
    uint uStack_360;
    int64_t iStack_358;
    uchar ****ppppuStack_350;
    code *pcStack_348;
    ulong uStack_340;
    uint64_t uStack_338;
    uint64_t uStack_330;
    uint64_t uStack_328;
    ulong uStack_318;
    uint uStack_310;
    int64_t iStack_308;
    uchar ***pppuStack_300;
    code *pcStack_2f8;
    ulong uStack_2d0;
    uint uStack_2c8;
    uint32_t uStack_2c4;
    uchar auStack_2c0 [264];
    int64_t iStack_1b8;
    uchar **ppuStack_1b0;
    code *pcStack_1a8;
    uint uStack_180;
    ulong uStack_17c;
    uint32_t uStack_174;
    uint8_t uStack_170;
    uint8_t uStack_16f;
    uchar auStack_16c [4];
    uint auStack_168 [47];
    ushort auStack_ac [34];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_18 = *(iVar10 + 0x5e0);
    *0x8000b00 = param_1;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        uStack_28 = 3;
        uStack_20 = 0xc;
        uStack_24 = param_1;
        rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_28,0xc);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_18) {
        return 0;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_compute_vtcm_set_partition_map;
    pcStack_58 = sym.cdsprm_compute_vtcm_set_partition_map;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    puStack_60 = &stack0xfffffffffffffff0;
    memset(&uStack_170,0,0x104);
    uVar11 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (1 < _obj.gcdsprm)) {
        uStack_17c = 0xd00000002;
        uStack_170 = *0x80008fc;
        uStack_16f = *0x80008fd;
        uStack_174 = uVar5;
        if (*0x80008fc != 0) {
            iVar10 = 0;
            do {
                if (iVar10 == 0xc0) goto code_r0x08002814;
                iVar1 = iVar10 + 0xc;
                uVar7 = *(iVar10 + 0x8000904);
                uVar2 = *(iVar10 + 0x8000908);
                auStack_16c[iVar10] = *(iVar10 + 0x8000900);
                *(auStack_168 + iVar10) = uVar7;
                *(auStack_168 + iVar10 + 4) = uVar2;
                iVar10 = iVar1;
            } while (*0x80008fc * 0xc - iVar1 != 0);
        }
        if (*0x80008fd != 0) {
            iVar10 = 0;
            do {
                if (iVar10 == 0x40) {
code_r0x08002814:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8002818);
                    (*pcVar4)();
                }
                iVar1 = iVar10 + 2;
                *(auStack_ac + iVar10) = *(iVar10 + 0x80009c0);
                iVar10 = iVar1;
            } while (*0x80008fd * 2 - iVar1 != 0);
        }
        uStack_180 = 0x114;
        uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_180,0x114);
        uVar11 = uVar5;
        _segment.ehdr = uStack_174;
        if (uVar5 == 0) {
            _printk(0x80004a2);
        }
        else {
            _printk(0x8000bab);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18_00 = sym.cdsprm_resmgr_pdkill_config;
    pcStack_1a8 = sym.cdsprm_resmgr_pdkill_config;
    iVar10 = sp_el0;
    uVar11 = uVar8 & 0xffffffff;
    iStack_1b8 = *(iVar10 + 0x5e0);
    ppuStack_1b0 = &puStack_60;
    memset(auStack_2c0,0,0x104);
    uVar13 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
        uStack_2c8 = 0x10;
        uStack_2d0 = 0x200000114;
        uStack_2c4 = uVar8;
        uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_2d0,0x114);
        uVar13 = uVar5;
        if (uVar5 == 0) {
            uVar9 = 0x80004d3;
            uVar12 = uVar8 & 0xffffffff;
            _segment.ehdr = uVar8;
        }
        else {
            uVar9 = 0x800083b;
            uVar12 = uVar13;
        }
        _printk(uVar9,uVar12);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1b8) {
        return uVar13;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_01 = sym.cdsprm_cxlimit_npu_activity_notify;
    pcStack_2f8 = sym.cdsprm_cxlimit_npu_activity_notify;
    iVar10 = sp_el0;
    iStack_308 = *(iVar10 + 0x5e0);
    uStack_310 = 0;
    uStack_318 = 0;
    pppuStack_300 = &ppuStack_1b0;
    if (*0x8000b38 == '\0') {
        uVar8 = 0xffffffea;
    }
    else {
        uVar13 = uVar5;
        uVar11 = 0x8000b08;
        mutex_lock(0x8000b08);
        if (uVar5 == 0) {
            uVar3 = _segment.ehdr;
            if (*0x8000b90 != 0) {
                iVar6 = -1;
                goto code_r0x0800297c;
            }
code_r0x080029a8:
            if (uVar3 == 0) goto code_r0x080029ac;
code_r0x08002a04:
            uVar8 = 0xffffffea;
            *0x8000b3c = uVar5;
            if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                unaff_x22 = 0x8000000;
                if (uVar5 != 0) {
                    _segment.ehdr = _segment.ehdr + 1;
                }
                uStack_318 = CONCAT44(uVar5,6);
                uStack_310 = 0xc;
                uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_318,0xc);
                uVar8 = uVar5;
                if ((_segment.ehdr == 0) || (uVar5 == 0)) {
                    if ((_segment.ehdr == 0) || (uVar5 != 0)) goto code_r0x080029b0;
                    mutex_unlock(0x8000b08);
                    wait_for_completion(0x8000b50);
                    mutex_lock(0x8000b08);
                }
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
        else {
            iVar6 = 1;
code_r0x0800297c:
            *0x8000b90 = iVar6 + *0x8000b90;
            if ((*0x8000b90 == 0) || (*0x8000b3c == 0)) {
                uVar3 = *0x8000b3c;
                if (*0x8000b90 == 0) goto code_r0x080029a8;
                goto code_r0x08002a04;
            }
code_r0x080029ac:
            uVar8 = 0;
        }
code_r0x080029b0:
        mutex_unlock(0x8000b08);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_308) {
        return uVar8;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_02 = sym.cdsprm_cxlimit_npu_corner_notify;
    pcStack_348 = sym.cdsprm_cxlimit_npu_corner_notify;
    iVar10 = sp_el0;
    iStack_358 = *(iVar10 + 0x5e0);
    uVar12 = uVar5;
    uStack_360 = 0;
    uStack_368 = 0;
    ppppuStack_350 = &pppuStack_300;
    uStack_340 = unaff_x22;
    uStack_338 = uVar8;
    uStack_330 = uVar13;
    uStack_328 = uVar11;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar3 = *0x8000b94;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        if ((uVar5 == 0) || (*0x8000b94 < uVar5)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_368 = CONCAT44(uVar5,8);
        uStack_360 = 0xc;
        *0x8000b94 = uVar5;
        iVar6 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_368,0xc);
        if ((_segment.ehdr - 1 < uVar3) || (iVar6 == 0)) {
            uVar5 = *0x8000b94;
            if ((_segment.ehdr <= uVar3 && _segment.ehdr != 0) || (iVar6 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar12 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar5 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar5;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_358) {
        return uVar12;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18_03 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_378 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar10 = sp_el0;
    iStack_388 = *(iVar10 + 0x5e0);
    ppppuStack_380 = &ppppuStack_350;
    if (*0x8000b38 == '\0') {
        uVar11 = 0xffffffea;
    }
    else {
        uVar11 = 0;
        *0x8000b40 = uVar7;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_398 = 0xb;
            uStack_390 = 0xc;
            uStack_394 = uVar7;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_398,0xc);
            uVar11 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_388) {
        return uVar11;
    }
    __stack_chk_fail(uVar11);
    *extraout_x18_04 = sym.cdsprm_unregister_cdspl3gov;
    uVar9 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar11 = _raw_spin_unlock_irqrestore(0x8000a78,uVar9);
    return uVar11;
}


// ===== sym.cdsprm_compute_vtcm_set_partition_map.cfi_jt @ 0x080024d8 (size 8) =====

uint64_t sym.cdsprm_compute_vtcm_set_partition_map.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x22;
    ulong unaff_x30;
    uint uStack_368;
    uint uStack_364;
    uint uStack_360;
    int64_t iStack_358;
    uchar ****ppppuStack_350;
    code *pcStack_348;
    ulong uStack_338;
    uint uStack_330;
    int64_t iStack_328;
    uchar ***pppuStack_320;
    code *pcStack_318;
    ulong uStack_310;
    uint64_t uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    ulong uStack_2e8;
    uint uStack_2e0;
    int64_t iStack_2d8;
    uchar **ppuStack_2d0;
    code *pcStack_2c8;
    ulong uStack_2a0;
    uint uStack_298;
    uint32_t uStack_294;
    uchar auStack_290 [264];
    int64_t iStack_188;
    uchar *puStack_180;
    code *pcStack_178;
    uint uStack_150;
    ulong uStack_14c;
    uint32_t uStack_144;
    uint8_t uStack_140;
    uint8_t uStack_13f;
    uchar auStack_13c [4];
    uint auStack_138 [47];
    ushort auStack_7c [34];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    memset(&uStack_140,0,0x104);
    uVar11 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (1 < _obj.gcdsprm)) {
        uStack_14c = 0xd00000002;
        uStack_140 = *0x80008fc;
        uStack_13f = *0x80008fd;
        uStack_144 = param_1;
        if (*0x80008fc != 0) {
            iVar10 = 0;
            do {
                if (iVar10 == 0xc0) goto code_r0x08002814;
                iVar1 = iVar10 + 0xc;
                uVar7 = *(iVar10 + 0x8000904);
                uVar2 = *(iVar10 + 0x8000908);
                auStack_13c[iVar10] = *(iVar10 + 0x8000900);
                *(auStack_138 + iVar10) = uVar7;
                *(auStack_138 + iVar10 + 4) = uVar2;
                iVar10 = iVar1;
            } while (*0x80008fc * 0xc - iVar1 != 0);
        }
        if (*0x80008fd != 0) {
            iVar10 = 0;
            do {
                if (iVar10 == 0x40) {
code_r0x08002814:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8002818);
                    (*pcVar4)();
                }
                iVar1 = iVar10 + 2;
                *(auStack_7c + iVar10) = *(iVar10 + 0x80009c0);
                iVar10 = iVar1;
            } while (*0x80008fd * 2 - iVar1 != 0);
        }
        uStack_150 = 0x114;
        uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_150,0x114);
        uVar11 = uVar5;
        _segment.ehdr = uStack_144;
        if (uVar5 == 0) {
            _printk(0x80004a2);
        }
        else {
            _printk(0x8000bab);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar11;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_resmgr_pdkill_config;
    pcStack_178 = sym.cdsprm_resmgr_pdkill_config;
    iVar10 = sp_el0;
    uVar11 = uVar8 & 0xffffffff;
    iStack_188 = *(iVar10 + 0x5e0);
    puStack_180 = &stack0xffffffffffffffd0;
    memset(auStack_290,0,0x104);
    uVar13 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
        uStack_298 = 0x10;
        uStack_2a0 = 0x200000114;
        uStack_294 = uVar8;
        uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_2a0,0x114);
        uVar13 = uVar5;
        if (uVar5 == 0) {
            uVar9 = 0x80004d3;
            uVar12 = uVar8 & 0xffffffff;
            _segment.ehdr = uVar8;
        }
        else {
            uVar9 = 0x800083b;
            uVar12 = uVar13;
        }
        _printk(uVar9,uVar12);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_188) {
        return uVar13;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.cdsprm_cxlimit_npu_activity_notify;
    pcStack_2c8 = sym.cdsprm_cxlimit_npu_activity_notify;
    iVar10 = sp_el0;
    iStack_2d8 = *(iVar10 + 0x5e0);
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    ppuStack_2d0 = &puStack_180;
    if (*0x8000b38 == '\0') {
        uVar8 = 0xffffffea;
    }
    else {
        uVar13 = uVar5;
        uVar11 = 0x8000b08;
        mutex_lock(0x8000b08);
        if (uVar5 == 0) {
            uVar3 = _segment.ehdr;
            if (*0x8000b90 != 0) {
                iVar6 = -1;
                goto code_r0x0800297c;
            }
code_r0x080029a8:
            if (uVar3 == 0) goto code_r0x080029ac;
code_r0x08002a04:
            uVar8 = 0xffffffea;
            *0x8000b3c = uVar5;
            if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                unaff_x22 = 0x8000000;
                if (uVar5 != 0) {
                    _segment.ehdr = _segment.ehdr + 1;
                }
                uStack_2e8 = CONCAT44(uVar5,6);
                uStack_2e0 = 0xc;
                uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_2e8,0xc);
                uVar8 = uVar5;
                if ((_segment.ehdr == 0) || (uVar5 == 0)) {
                    if ((_segment.ehdr == 0) || (uVar5 != 0)) goto code_r0x080029b0;
                    mutex_unlock(0x8000b08);
                    wait_for_completion(0x8000b50);
                    mutex_lock(0x8000b08);
                }
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
        else {
            iVar6 = 1;
code_r0x0800297c:
            *0x8000b90 = iVar6 + *0x8000b90;
            if ((*0x8000b90 == 0) || (*0x8000b3c == 0)) {
                uVar3 = *0x8000b3c;
                if (*0x8000b90 == 0) goto code_r0x080029a8;
                goto code_r0x08002a04;
            }
code_r0x080029ac:
            uVar8 = 0;
        }
code_r0x080029b0:
        mutex_unlock(0x8000b08);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_2d8) {
        return uVar8;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_01 = sym.cdsprm_cxlimit_npu_corner_notify;
    pcStack_318 = sym.cdsprm_cxlimit_npu_corner_notify;
    iVar10 = sp_el0;
    iStack_328 = *(iVar10 + 0x5e0);
    uVar12 = uVar5;
    uStack_330 = 0;
    uStack_338 = 0;
    pppuStack_320 = &ppuStack_2d0;
    uStack_310 = unaff_x22;
    uStack_308 = uVar8;
    uStack_300 = uVar13;
    uStack_2f8 = uVar11;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar3 = *0x8000b94;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        if ((uVar5 == 0) || (*0x8000b94 < uVar5)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_338 = CONCAT44(uVar5,8);
        uStack_330 = 0xc;
        *0x8000b94 = uVar5;
        iVar6 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_338,0xc);
        if ((_segment.ehdr - 1 < uVar3) || (iVar6 == 0)) {
            uVar5 = *0x8000b94;
            if ((_segment.ehdr <= uVar3 && _segment.ehdr != 0) || (iVar6 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar12 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar5 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar5;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_328) {
        return uVar12;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18_02 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_348 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar10 = sp_el0;
    iStack_358 = *(iVar10 + 0x5e0);
    ppppuStack_350 = &pppuStack_320;
    if (*0x8000b38 == '\0') {
        uVar11 = 0xffffffea;
    }
    else {
        uVar11 = 0;
        *0x8000b40 = uVar7;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_368 = 0xb;
            uStack_360 = 0xc;
            uStack_364 = uVar7;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_368,0xc);
            uVar11 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_358) {
        return uVar11;
    }
    __stack_chk_fail(uVar11);
    *extraout_x18_03 = sym.cdsprm_unregister_cdspl3gov;
    uVar9 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar11 = _raw_spin_unlock_irqrestore(0x8000a78,uVar9);
    return uVar11;
}


// ===== sym.process_cdsp_request_thread.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x080024e0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003264)
//WARNING: Removing unreachable block (ram,0x0800327c)
//WARNING: Removing unreachable block (ram,0x08003284)
//WARNING: Removing unreachable block (ram,0x080032b8)

void sym.process_cdsp_request_thread.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(void)

{
    int64_t *piVar1;
    ushort uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint uVar9;
    ulong *in_x18;
    code *pcVar10;
    ulong unaff_x30;
    ulong uStack_1a0;
    uint uStack_198;
    ulong uStack_190;
    uint uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    
    *in_x18 = unaff_x30;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uVar6 = kthread_should_stop();
    if ((uVar6 & 1) == 0) goto code_r0x08002d34;
code_r0x08002d2c:
    do {
        do_exit(0);
code_r0x08002d34:
        pcVar10 = NULL;
        do {
            uVar6 = kthread_should_stop();
            if ((uVar6 & 1) == 0) {
                uVar7 = _raw_spin_lock_irqsave(0x8000a7c);
                pcVar10 = NULL;
                if (_obj.cdsprm_list != obj.cdsprm_list) {
                    pcVar10 = _obj.cdsprm_list;
                }
                _raw_spin_unlock_irqrestore(0x8000a7c,uVar7);
                if (pcVar10 != NULL) goto code_r0x08002dcc;
                uStack_168 = 0;
                uStack_160 = 0;
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_180 = 0;
                init_wait_entry(&uStack_180,0);
                iVar8 = prepare_to_wait_event(obj.cdsprm_wq,&uStack_180,1);
                uVar6 = kthread_should_stop();
                if ((uVar6 & 1) == 0) {
                    do {
                        uVar7 = _raw_spin_lock_irqsave(0x8000a7c);
                        pcVar10 = NULL;
                        if (_obj.cdsprm_list != obj.cdsprm_list) {
                            pcVar10 = _obj.cdsprm_list;
                        }
                        _raw_spin_unlock_irqrestore(0x8000a7c,uVar7);
                        if (pcVar10 != NULL) goto code_r0x08002eec;
                        if (iVar8 != 0) {
                            pcVar10 = NULL;
                            uVar6 = kthread_should_stop();
                            if ((uVar6 & 1) == 0) goto code_r0x08002dd8;
                            goto code_r0x08002d2c;
                        }
                        schedule();
                        iVar8 = prepare_to_wait_event(obj.cdsprm_wq,&uStack_180,1);
                        uVar6 = kthread_should_stop();
                    } while ((uVar6 & 1) == 0);
                    pcVar10 = NULL;
                }
code_r0x08002eec:
                finish_wait(obj.cdsprm_wq,&uStack_180);
                uVar6 = kthread_should_stop();
            }
            else {
code_r0x08002dcc:
                uVar6 = kthread_should_stop();
            }
            iVar8 = 0;
            if ((uVar6 & 1) != 0) break;
code_r0x08002dd8:
            if (iVar8 == 0) {
                if (pcVar10 == NULL) break;
                if (pcVar10 + 0x10 != NULL) {
                    iVar4 = *(pcVar10 + 0x10);
                    if ((iVar4 == 2) && (*0x8000bea != '\0')) {
                        mutex_lock(0x8000a48);
                        if (*(pcVar10 + 0x14) == 1) {
                            if (*0x8000bf0 != *0x8000af8) {
                                sym.set_qos_latency(*0x8000af8);
                                *0x8000bf0 = *0x8000af8;
                            }
                            *0x8000ac0 = *(pcVar10 + 0x18);
                            if (*0x8000ab8 < 3) {
                                if (*0x8000ab8 == 0) goto code_r0x08002fbc;
                            }
                            else {
                                flush_workqueue(*0x8000a10);
                                if (*0x8000ab8 == 4) {
code_r0x08002fbc:
                                    *0x8000ab8 = 1;
                                    queue_work_on(0x20,*0x8000a10,0x8000a18);
                                }
                            }
                        }
                        else if ((*(pcVar10 + 0x14) == 2) && (_segment.ehdr != 0x7fffffff)) {
                            sym.set_qos_latency(0x7fffffff);
                            _segment.ehdr = 0x7fffffff;
                        }
                        mutex_unlock(0x8000a48);
                    }
                    else if (iVar4 == 0xc) {
                        uStack_188 = 0;
                        uStack_190 = 0;
                        if (_segment.ehdr != 0) {
                            if ((_segment.ehdr != 1) && (_segment.ehdr != 0)) {
                                sym.cdsprm_compute_vtcm_set_partition_map(1);
                            }
                            if (*0x8000b38 != '\0') {
                                *0x8000b50 = 0;
                                *0x8000b70 = 0;
                                if (*0x8000b94 != 0) {
                                    uStack_190 = CONCAT44(*0x8000b94,8);
                                    uStack_188 = 0xc;
                                    rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_190,0xc);
                                }
                                if (_segment.ehdr != 0) {
                                    uStack_190 = CONCAT44(_segment.ehdr,6);
                                    uStack_188 = 0xc;
                                    rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_190,0xc);
                                }
                                if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                                    uStack_180 = CONCAT44(*0x8000b00,3);
                                    uStack_178 = CONCAT44(uStack_178._4_4_,0xc);
                                    rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_180,0xc);
                                }
                                if (_segment.ehdr != 0) {
                                    uStack_190 = CONCAT44(_segment.ehdr,0xb);
                                    uStack_188 = 0xc;
                                    rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_190,0xc);
                                }
                            }
                            iVar4 = _segment.ehdr;
                            uVar2 = _segment.ehdr;
                            if (_segment.ehdr != 0) {
                                uStack_178 = uStack_178 & 0xffffffff00000000;
                                uStack_180 = 0;
                                mutex_lock(0x8000ba0);
                                if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                                    uStack_178 = CONCAT44(uStack_178._4_4_,0xc);
                                    uStack_180 = CONCAT26(uVar2,CONCAT24(_segment.ehdr,10));
                                    iVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_180,0xc);
                                    if (iVar5 == 0) {
                                        _segment.ehdr = iVar4;
                                    }
                                }
                                mutex_unlock(0x8000ba0);
                            }
                            iVar4 = *0x80000fc;
                            memset(&uStack_170,0,0x104);
                            if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
                                uStack_178 = CONCAT44(iVar4,0x10);
                                uStack_180 = 0x200000114;
                                iVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_180,0x114);
                                if (iVar5 == 0) {
                                    uVar7 = 0x80004d3;
                                    _segment.ehdr = iVar4;
                                    iVar5 = iVar4;
                                }
                                else {
                                    uVar7 = 0x800083b;
                                }
                                goto code_r0x0800334c;
                            }
                        }
                    }
                    else if (iVar4 == 5) {
                        mutex_lock(0x8000b08);
                        pcVar3 = *0x8000c38;
                        *0x8000c40 = *0x8000c38;
                        if (*0x8000c38 == NULL) {
                            mutex_unlock(0x8000b08);
                            uVar9 = 0;
                        }
                        else {
                            *0x8000b9c = *(pcVar10 + 0x14);
                            *0x8000beb = 1;
                            __cfi_slowpath_diag(0xd8880f61b62dcc42,*0x8000c38,0x80003f0);
                            iVar4 = (*pcVar3)(*0x8000b9c);
                            *0x8000beb = 0;
                            mutex_unlock(0x8000b08);
                            uVar9 = 0;
                            if (iVar4 == 0) {
                                uVar9 = *(pcVar10 + 0x14);
                            }
                        }
                        uStack_1a0 = CONCAT44(uVar9,4);
                        uStack_198 = 0xc;
                        iVar5 = rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_1a0,0xc);
                        if (iVar5 != 0) {
                            uVar7 = 0x80006c2;
code_r0x0800334c:
                            _printk(uVar7,iVar5);
                        }
                    }
                    else if (iVar4 == 1) {
                        uVar9 = *(pcVar10 + 0x14);
                        uVar7 = _raw_spin_lock_irqsave(0x8000a78);
                        *0x8000c30 = str.msm_hvx_rm._0_8_;
                        _raw_spin_unlock_irqrestore(0x8000a78,uVar7);
                        pcVar3 = *0x8000c30;
                        if (*0x8000c30 != NULL) {
                            if (3 < (*0x8000c30 + -0x80024c0 >> 3 | *0x8000c30 << 0x3d)) {
                                __cfi_slowpath_diag(0xac3778598d51adbd,*0x8000c30,0x80003d0);
                            }
                            (*pcVar3)(uVar9);
                        }
                    }
                }
                uVar7 = _raw_spin_lock_irqsave(0x8000a7c);
                uVar6 = __list_del_entry_valid(pcVar10);
                if ((uVar6 & 1) != 0) {
                    iVar8 = *pcVar10;
                    piVar1 = *(pcVar10 + 8);
                    *(iVar8 + 8) = piVar1;
                    *piVar1 = iVar8;
                }
                pcVar10[0x24] = 0x0;
                *pcVar10 = -0x2152ffffffffff00;
                *(pcVar10 + 8) = -0x2152fffffffffede;
                _raw_spin_unlock_irqrestore(0x8000a7c,uVar7);
            }
            uVar6 = kthread_should_stop();
        } while ((uVar6 & 1) == 0);
    } while( true );
}


// ===== sym.cdsprm_resmgr_pdkill_state_show.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x080024e8 (size 8) =====

ulong sym.cdsprm_resmgr_pdkill_state_show.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1)

{
    char *pcVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = "";
    if (*0x80000f8 != 0) {
        pcVar2 = "";
    }
    pcVar1 = "";
    if (*0x80000f8 != 0) {
        pcVar1 = "";
    }
    if (*0x8000100 != 0) {
        pcVar2 = pcVar1;
    }
    seq_puts(param_1,pcVar2);
    return 0;
}


// ===== sym.cdsprm_rpmsg_remove.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x080024f0 (size 8) =====

void sym.cdsprm_rpmsg_remove.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(void)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000ab0 = 0;
    _obj.gcdsprm = 0;
    if (*0x8000b38 != '\0') {
        mutex_lock(0x8000b08);
        complete_all(0x8000b50);
        complete_all(0x8000b70);
        mutex_unlock(0x8000b08);
        pcVar1 = *0x8000c38;
        *0x8000c40 = *0x8000c38;
        if ((*0x8000b9c < 8) && (*0x8000c38 != NULL)) {
            __cfi_slowpath_diag(0xd8880f61b62dcc42,*0x8000c38,0x8000410);
            (*pcVar1)(8);
        }
    }
    return;
}


// ===== sym.cdsprm_rpmsg_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x080024f8 (size 8) =====

ulong sym.cdsprm_rpmsg_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    of_platform_populate(*(param_1 + 0x2f0),0,0,param_1);
    _segment.ehdr = param_1;
    return 0;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08002500 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.no_llseek.cfi_jt @ 0x08002508 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cdsp_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002510 (size 8) =====

ulong sym.cdsp_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,ulong *param_2)

{
    *param_2 = 10;
    return 0;
}


// ===== sym.cdsp_get_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002518 (size 8) =====

ulong sym.cdsp_get_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = _segment.ehdr;
    return 0;
}


// ===== sym.hvx_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002520 (size 8) =====

ulong sym.hvx_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,ulong *param_2)

{
    *param_2 = 10;
    return 0;
}


// ===== sym.hvx_get_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002528 (size 8) =====

ulong sym.hvx_get_cur_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = _segment.ehdr;
    return 0;
}


// ===== sym.cdsprm_compute_prio_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002530 (size 8) =====

ulong sym.cdsprm_compute_prio_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint param_2)

{
    int64_t iVar1;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    *0x8000b00 = param_2;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        uStack_28 = 3;
        uStack_20 = 0xc;
        uStack_24 = param_2;
        rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_28,0xc);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x1 = 10;
    return 0;
}


// ===== sym.cdsprm_resmgr_pdkill_override_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002538 (size 8) =====

uint64_t sym.cdsprm_resmgr_pdkill_override_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt
                   (ulong param_1,uint64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_150;
    uint uStack_148;
    uint uStack_144;
    uchar auStack_140 [264];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    memset(auStack_140,0,0x104);
    uVar5 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
        uStack_148 = 0x10;
        uStack_150 = 0x200000114;
        uStack_144 = param_2;
        uVar2 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_150,0x114);
        uVar5 = uVar2;
        if (uVar2 == 0) {
            uVar3 = 0x80004d3;
            uVar4 = param_2 & 0xffffffff;
            _segment.ehdr = param_2;
        }
        else {
            uVar3 = 0x800083b;
            uVar4 = uVar5;
        }
        _printk(uVar3,uVar4);
    }
    _printk(0x8000464,param_2,uVar5);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_resmgr_pdkill_state_open;
    uVar5 = single_open(auVar6._8_8_,sym.cdsprm_resmgr_pdkill_state_show.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                        *(auVar6._0_8_ + 0x2d8));
    return uVar5;
}


// ===== sym.cdsprm_vtcm_partition_state_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt @ 0x08002540 (size 8) =====

uint sym.cdsprm_vtcm_partition_state_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt(ulong param_1,uint64_t param_2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cdsprm_compute_vtcm_set_partition_map(param_2 & 0xffffffff);
    uVar1 = 0;
    if (_segment.ehdr != param_2) {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x08002548 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cdsprm_register_cdspl3gov @ 0x08002550 (size 88) =====

void sym.cdsprm_register_cdspl3gov(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        uVar1 = _raw_spin_lock_irqsave(0x8000a78);
        str.msm_hvx_rm._0_8_ = *arg1;
        _raw_spin_unlock_irqrestore(0x8000a78,uVar1);
    }
    return;
}


// ===== sym.cdsprm_cxlimit_npu_limit_register @ 0x080025a8 (size 44) =====

ulong sym.cdsprm_cxlimit_npu_limit_register(int64_t arg1)

{
    if (arg1 != 0) {
        _segment.ehdr = *arg1;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.cdsprm_cxlimit_npu_limit_deregister @ 0x080025d4 (size 44) =====

ulong sym.cdsprm_cxlimit_npu_limit_deregister(int64_t arg1)

{
    if (_segment.ehdr != 0) {
        _segment.ehdr = 0;
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.cdsprm_compute_core_set_priority @ 0x08002600 (size 144) =====

uint64_t sym.cdsprm_compute_core_set_priority(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x22;
    ulong unaff_x30;
    uint uStack_398;
    uint uStack_394;
    uint uStack_390;
    int64_t iStack_388;
    ulong ****ppppuStack_380;
    code *pcStack_378;
    ulong uStack_368;
    uint uStack_360;
    int64_t iStack_358;
    uchar ****ppppuStack_350;
    code *pcStack_348;
    ulong uStack_340;
    uint64_t uStack_338;
    uint64_t uStack_330;
    uint64_t uStack_328;
    ulong uStack_318;
    uint uStack_310;
    int64_t iStack_308;
    uchar ***pppuStack_300;
    code *pcStack_2f8;
    ulong uStack_2d0;
    uint uStack_2c8;
    uint32_t uStack_2c4;
    uchar auStack_2c0 [264];
    int64_t iStack_1b8;
    uchar **ppuStack_1b0;
    code *pcStack_1a8;
    uint uStack_180;
    ulong uStack_17c;
    uint32_t uStack_174;
    uint8_t uStack_170;
    uint8_t uStack_16f;
    uchar auStack_16c [4];
    uint auStack_168 [47];
    ushort auStack_ac [34];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_18 = *(iVar10 + 0x5e0);
    *0x8000b00 = arg1;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        uStack_28 = 3;
        uStack_20 = 0xc;
        uStack_24 = *0x8000b00;
        rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_28,0xc);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_18) {
        return 0;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_compute_vtcm_set_partition_map;
    pcStack_58 = sym.cdsprm_compute_vtcm_set_partition_map;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    puStack_60 = &stack0xfffffffffffffff0;
    memset(&uStack_170,0,0x104);
    uVar11 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (1 < _obj.gcdsprm)) {
        uStack_17c = 0xd00000002;
        uStack_170 = *0x80008fc;
        uStack_16f = *0x80008fd;
        uStack_174 = uVar5;
        if (*0x80008fc != 0) {
            iVar10 = 0;
            do {
                if (iVar10 == 0xc0) goto code_r0x08002814;
                iVar1 = iVar10 + 0xc;
                uVar7 = *(iVar10 + 0x8000904);
                uVar2 = *(iVar10 + 0x8000908);
                auStack_16c[iVar10] = *(iVar10 + 0x8000900);
                *(auStack_168 + iVar10) = uVar7;
                *(auStack_168 + iVar10 + 4) = uVar2;
                iVar10 = iVar1;
            } while (*0x80008fc * 0xc - iVar1 != 0);
        }
        if (*0x80008fd != 0) {
            iVar10 = 0;
            do {
                if (iVar10 == 0x40) {
code_r0x08002814:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8002818);
                    (*pcVar4)();
                }
                iVar1 = iVar10 + 2;
                *(auStack_ac + iVar10) = *(iVar10 + 0x80009c0);
                iVar10 = iVar1;
            } while (*0x80008fd * 2 - iVar1 != 0);
        }
        uStack_180 = 0x114;
        uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_180,0x114);
        uVar11 = uVar5;
        _segment.ehdr = uStack_174;
        if (uVar5 == 0) {
            _printk(0x80004a2);
        }
        else {
            _printk(0x8000bab);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18_00 = sym.cdsprm_resmgr_pdkill_config;
    pcStack_1a8 = sym.cdsprm_resmgr_pdkill_config;
    iVar10 = sp_el0;
    uVar11 = uVar8 & 0xffffffff;
    iStack_1b8 = *(iVar10 + 0x5e0);
    ppuStack_1b0 = &puStack_60;
    memset(auStack_2c0,0,0x104);
    uVar13 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
        uStack_2c8 = 0x10;
        uStack_2d0 = 0x200000114;
        uStack_2c4 = uVar8;
        uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_2d0,0x114);
        uVar13 = uVar5;
        if (uVar5 == 0) {
            uVar9 = 0x80004d3;
            uVar12 = uVar8 & 0xffffffff;
            _segment.ehdr = uVar8;
        }
        else {
            uVar9 = 0x800083b;
            uVar12 = uVar13;
        }
        _printk(uVar9,uVar12);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1b8) {
        return uVar13;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_01 = sym.cdsprm_cxlimit_npu_activity_notify;
    pcStack_2f8 = sym.cdsprm_cxlimit_npu_activity_notify;
    iVar10 = sp_el0;
    iStack_308 = *(iVar10 + 0x5e0);
    uStack_310 = 0;
    uStack_318 = 0;
    pppuStack_300 = &ppuStack_1b0;
    if (*0x8000b38 == '\0') {
        uVar8 = 0xffffffea;
    }
    else {
        uVar13 = uVar5;
        uVar11 = 0x8000b08;
        mutex_lock(0x8000b08);
        if (uVar5 == 0) {
            uVar3 = _segment.ehdr;
            if (*0x8000b90 != 0) {
                iVar6 = -1;
                goto code_r0x0800297c;
            }
code_r0x080029a8:
            if (uVar3 == 0) goto code_r0x080029ac;
code_r0x08002a04:
            uVar8 = 0xffffffea;
            *0x8000b3c = uVar5;
            if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                unaff_x22 = 0x8000000;
                if (uVar5 != 0) {
                    _segment.ehdr = _segment.ehdr + 1;
                }
                uStack_318 = CONCAT44(uVar5,6);
                uStack_310 = 0xc;
                uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_318,0xc);
                uVar8 = uVar5;
                if ((_segment.ehdr == 0) || (uVar5 == 0)) {
                    if ((_segment.ehdr == 0) || (uVar5 != 0)) goto code_r0x080029b0;
                    mutex_unlock(0x8000b08);
                    wait_for_completion(0x8000b50);
                    mutex_lock(0x8000b08);
                }
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
        else {
            iVar6 = 1;
code_r0x0800297c:
            *0x8000b90 = iVar6 + *0x8000b90;
            if ((*0x8000b90 == 0) || (*0x8000b3c == 0)) {
                uVar3 = *0x8000b3c;
                if (*0x8000b90 == 0) goto code_r0x080029a8;
                goto code_r0x08002a04;
            }
code_r0x080029ac:
            uVar8 = 0;
        }
code_r0x080029b0:
        mutex_unlock(0x8000b08);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_308) {
        return uVar8;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_02 = sym.cdsprm_cxlimit_npu_corner_notify;
    pcStack_348 = sym.cdsprm_cxlimit_npu_corner_notify;
    iVar10 = sp_el0;
    iStack_358 = *(iVar10 + 0x5e0);
    uVar12 = uVar5;
    uStack_360 = 0;
    uStack_368 = 0;
    ppppuStack_350 = &pppuStack_300;
    uStack_340 = unaff_x22;
    uStack_338 = uVar8;
    uStack_330 = uVar13;
    uStack_328 = uVar11;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar3 = *0x8000b94;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        if ((uVar5 == 0) || (*0x8000b94 < uVar5)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_368 = CONCAT44(uVar5,8);
        uStack_360 = 0xc;
        *0x8000b94 = uVar5;
        iVar6 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_368,0xc);
        if ((_segment.ehdr - 1 < uVar3) || (iVar6 == 0)) {
            uVar5 = *0x8000b94;
            if ((_segment.ehdr <= uVar3 && _segment.ehdr != 0) || (iVar6 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar12 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar5 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar5;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_358) {
        return uVar12;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18_03 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_378 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar10 = sp_el0;
    iStack_388 = *(iVar10 + 0x5e0);
    ppppuStack_380 = &ppppuStack_350;
    if (*0x8000b38 == '\0') {
        uVar11 = 0xffffffea;
    }
    else {
        uVar11 = 0;
        *0x8000b40 = uVar7;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_398 = 0xb;
            uStack_390 = 0xc;
            uStack_394 = uVar7;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_398,0xc);
            uVar11 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_388) {
        return uVar11;
    }
    __stack_chk_fail(uVar11);
    *extraout_x18_04 = sym.cdsprm_unregister_cdspl3gov;
    uVar9 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar11 = _raw_spin_unlock_irqrestore(0x8000a78,uVar9);
    return uVar11;
}


// ===== sym.cdsprm_compute_vtcm_set_partition_map @ 0x08002690 (size 396) =====

uint64_t sym.cdsprm_compute_vtcm_set_partition_map(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x22;
    ulong unaff_x30;
    uint uStack_368;
    uint uStack_364;
    uint uStack_360;
    int64_t iStack_358;
    uchar ****ppppuStack_350;
    code *pcStack_348;
    ulong uStack_338;
    uint uStack_330;
    int64_t iStack_328;
    uchar ***pppuStack_320;
    code *pcStack_318;
    ulong uStack_310;
    uint64_t uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    ulong uStack_2e8;
    uint uStack_2e0;
    int64_t iStack_2d8;
    uchar **ppuStack_2d0;
    code *pcStack_2c8;
    ulong uStack_2a0;
    uint uStack_298;
    uint32_t uStack_294;
    uchar auStack_290 [264];
    int64_t iStack_188;
    uchar *puStack_180;
    code *pcStack_178;
    uint uStack_150;
    ulong uStack_14c;
    uint32_t uStack_144;
    uint8_t uStack_140;
    uint8_t uStack_13f;
    uchar auStack_13c [4];
    uint auStack_138 [47];
    ushort auStack_7c [34];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    memset(&uStack_140,0,0x104);
    uVar11 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (1 < _obj.gcdsprm)) {
        uStack_144 = arg1;
        uStack_14c = 0xd00000002;
        uStack_140 = *0x80008fc;
        uStack_13f = *0x80008fd;
        if (*0x80008fc != 0) {
            iVar10 = 0;
            do {
                if (iVar10 == 0xc0) goto code_r0x08002814;
                iVar1 = iVar10 + 0xc;
                uVar7 = *(iVar10 + 0x8000904);
                uVar2 = *(iVar10 + 0x8000908);
                auStack_13c[iVar10] = *(iVar10 + 0x8000900);
                *(auStack_138 + iVar10) = uVar7;
                *(auStack_138 + iVar10 + 4) = uVar2;
                iVar10 = iVar1;
            } while (*0x80008fc * 0xc - iVar1 != 0);
        }
        if (*0x80008fd != 0) {
            iVar10 = 0;
            do {
                if (iVar10 == 0x40) {
code_r0x08002814:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x8002818);
                    (*pcVar4)();
                }
                iVar1 = iVar10 + 2;
                *(auStack_7c + iVar10) = *(iVar10 + 0x80009c0);
                iVar10 = iVar1;
            } while (*0x80008fd * 2 - iVar1 != 0);
        }
        uStack_150 = 0x114;
        uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_150,0x114);
        uVar11 = uVar5;
        _segment.ehdr = uStack_144;
        if (uVar5 == 0) {
            _printk(0x80004a2);
        }
        else {
            _printk(0x8000bab);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar11;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_resmgr_pdkill_config;
    pcStack_178 = sym.cdsprm_resmgr_pdkill_config;
    iVar10 = sp_el0;
    uVar11 = uVar8 & 0xffffffff;
    iStack_188 = *(iVar10 + 0x5e0);
    puStack_180 = &stack0xffffffffffffffd0;
    memset(auStack_290,0,0x104);
    uVar13 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
        uStack_298 = 0x10;
        uStack_2a0 = 0x200000114;
        uStack_294 = uVar8;
        uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_2a0,0x114);
        uVar13 = uVar5;
        if (uVar5 == 0) {
            uVar9 = 0x80004d3;
            uVar12 = uVar8 & 0xffffffff;
            _segment.ehdr = uVar8;
        }
        else {
            uVar9 = 0x800083b;
            uVar12 = uVar13;
        }
        _printk(uVar9,uVar12);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_188) {
        return uVar13;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.cdsprm_cxlimit_npu_activity_notify;
    pcStack_2c8 = sym.cdsprm_cxlimit_npu_activity_notify;
    iVar10 = sp_el0;
    iStack_2d8 = *(iVar10 + 0x5e0);
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    ppuStack_2d0 = &puStack_180;
    if (*0x8000b38 == '\0') {
        uVar8 = 0xffffffea;
    }
    else {
        uVar13 = uVar5;
        uVar11 = 0x8000b08;
        mutex_lock(0x8000b08);
        if (uVar5 == 0) {
            uVar3 = _segment.ehdr;
            if (*0x8000b90 != 0) {
                iVar6 = -1;
                goto code_r0x0800297c;
            }
code_r0x080029a8:
            if (uVar3 == 0) goto code_r0x080029ac;
code_r0x08002a04:
            uVar8 = 0xffffffea;
            *0x8000b3c = uVar5;
            if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                unaff_x22 = 0x8000000;
                if (uVar5 != 0) {
                    _segment.ehdr = _segment.ehdr + 1;
                }
                uStack_2e8 = CONCAT44(uVar5,6);
                uStack_2e0 = 0xc;
                uVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_2e8,0xc);
                uVar8 = uVar5;
                if ((_segment.ehdr == 0) || (uVar5 == 0)) {
                    if ((_segment.ehdr == 0) || (uVar5 != 0)) goto code_r0x080029b0;
                    mutex_unlock(0x8000b08);
                    wait_for_completion(0x8000b50);
                    mutex_lock(0x8000b08);
                }
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
        else {
            iVar6 = 1;
code_r0x0800297c:
            *0x8000b90 = iVar6 + *0x8000b90;
            if ((*0x8000b90 == 0) || (*0x8000b3c == 0)) {
                uVar3 = *0x8000b3c;
                if (*0x8000b90 == 0) goto code_r0x080029a8;
                goto code_r0x08002a04;
            }
code_r0x080029ac:
            uVar8 = 0;
        }
code_r0x080029b0:
        mutex_unlock(0x8000b08);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_2d8) {
        return uVar8;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_01 = sym.cdsprm_cxlimit_npu_corner_notify;
    pcStack_318 = sym.cdsprm_cxlimit_npu_corner_notify;
    iVar10 = sp_el0;
    iStack_328 = *(iVar10 + 0x5e0);
    uVar12 = uVar5;
    uStack_330 = 0;
    uStack_338 = 0;
    pppuStack_320 = &ppuStack_2d0;
    uStack_310 = unaff_x22;
    uStack_308 = uVar8;
    uStack_300 = uVar13;
    uStack_2f8 = uVar11;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar3 = *0x8000b94;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        if ((uVar5 == 0) || (*0x8000b94 < uVar5)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_338 = CONCAT44(uVar5,8);
        uStack_330 = 0xc;
        *0x8000b94 = uVar5;
        iVar6 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_338,0xc);
        if ((_segment.ehdr - 1 < uVar3) || (iVar6 == 0)) {
            uVar5 = *0x8000b94;
            if ((_segment.ehdr <= uVar3 && _segment.ehdr != 0) || (iVar6 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar12 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar5 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar5;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_328) {
        return uVar12;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18_02 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_348 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar10 = sp_el0;
    iStack_358 = *(iVar10 + 0x5e0);
    ppppuStack_350 = &pppuStack_320;
    if (*0x8000b38 == '\0') {
        uVar11 = 0xffffffea;
    }
    else {
        uVar11 = 0;
        *0x8000b40 = uVar7;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_368 = 0xb;
            uStack_360 = 0xc;
            uStack_364 = uVar7;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_368,0xc);
            uVar11 = 0;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_358) {
        return uVar11;
    }
    __stack_chk_fail(uVar11);
    *extraout_x18_03 = sym.cdsprm_unregister_cdspl3gov;
    uVar9 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar11 = _raw_spin_unlock_irqrestore(0x8000a78,uVar9);
    return uVar11;
}


// ===== sym.cdsprm_resmgr_pdkill_config @ 0x0800281c (size 240) =====

uint64_t sym.cdsprm_resmgr_pdkill_config(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x22;
    ulong unaff_x30;
    uint uStack_218;
    uint uStack_214;
    uint uStack_210;
    int64_t iStack_208;
    uchar ***pppuStack_200;
    code *pcStack_1f8;
    ulong uStack_1e8;
    uint uStack_1e0;
    int64_t iStack_1d8;
    uchar **ppuStack_1d0;
    code *pcStack_1c8;
    ulong uStack_1c0;
    uint64_t uStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    ulong uStack_198;
    uint uStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    code *pcStack_178;
    ulong uStack_150;
    uint uStack_148;
    uint32_t uStack_144;
    uchar auStack_140 [264];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar7 = arg1 & 0xffffffff;
    iStack_38 = *(iVar2 + 0x5e0);
    memset(auStack_140,0,0x104);
    uVar9 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
        uStack_148 = 0x10;
        uStack_150 = 0x200000114;
        uStack_144 = arg1;
        uVar3 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_150,0x114);
        uVar9 = uVar3;
        if (uVar3 == 0) {
            uVar6 = 0x80004d3;
            uVar10 = arg1 & 0xffffffff;
            _segment.ehdr = arg1;
        }
        else {
            uVar6 = 0x800083b;
            uVar10 = uVar9;
        }
        _printk(uVar6,uVar10);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar9;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_cxlimit_npu_activity_notify;
    pcStack_178 = sym.cdsprm_cxlimit_npu_activity_notify;
    iVar2 = sp_el0;
    iStack_188 = *(iVar2 + 0x5e0);
    uStack_190 = 0;
    uStack_198 = 0;
    puStack_180 = &stack0xffffffffffffffd0;
    if (*0x8000b38 == '\0') {
        uVar10 = 0xffffffea;
    }
    else {
        uVar9 = uVar3;
        uVar7 = 0x8000b08;
        mutex_lock(0x8000b08);
        if (uVar3 == 0) {
            uVar1 = _segment.ehdr;
            if (*0x8000b90 != 0) {
                iVar4 = -1;
                goto code_r0x0800297c;
            }
code_r0x080029a8:
            if (uVar1 == 0) goto code_r0x080029ac;
code_r0x08002a04:
            uVar10 = 0xffffffea;
            *0x8000b3c = uVar3;
            if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                unaff_x22 = 0x8000000;
                if (uVar3 != 0) {
                    _segment.ehdr = _segment.ehdr + 1;
                }
                uStack_198 = CONCAT44(uVar3,6);
                uStack_190 = 0xc;
                uVar3 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_198,0xc);
                uVar10 = uVar3;
                if ((_segment.ehdr == 0) || (uVar3 == 0)) {
                    if ((_segment.ehdr == 0) || (uVar3 != 0)) goto code_r0x080029b0;
                    mutex_unlock(0x8000b08);
                    wait_for_completion(0x8000b50);
                    mutex_lock(0x8000b08);
                }
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
        else {
            iVar4 = 1;
code_r0x0800297c:
            *0x8000b90 = iVar4 + *0x8000b90;
            if ((*0x8000b90 == 0) || (*0x8000b3c == 0)) {
                uVar1 = *0x8000b3c;
                if (*0x8000b90 == 0) goto code_r0x080029a8;
                goto code_r0x08002a04;
            }
code_r0x080029ac:
            uVar10 = 0;
        }
code_r0x080029b0:
        mutex_unlock(0x8000b08);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_188) {
        return uVar10;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.cdsprm_cxlimit_npu_corner_notify;
    pcStack_1c8 = sym.cdsprm_cxlimit_npu_corner_notify;
    iVar2 = sp_el0;
    iStack_1d8 = *(iVar2 + 0x5e0);
    uVar8 = uVar3;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    ppuStack_1d0 = &puStack_180;
    uStack_1c0 = unaff_x22;
    uStack_1b8 = uVar10;
    uStack_1b0 = uVar9;
    uStack_1a8 = uVar7;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar1 = *0x8000b94;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        if ((uVar3 == 0) || (*0x8000b94 < uVar3)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_1e8 = CONCAT44(uVar3,8);
        uStack_1e0 = 0xc;
        *0x8000b94 = uVar3;
        iVar4 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_1e8,0xc);
        if ((_segment.ehdr - 1 < uVar1) || (iVar4 == 0)) {
            uVar3 = *0x8000b94;
            if ((_segment.ehdr <= uVar1 && _segment.ehdr != 0) || (iVar4 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar8 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar3 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar3;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1d8) {
        return uVar8;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_01 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_1f8 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar2 = sp_el0;
    iStack_208 = *(iVar2 + 0x5e0);
    pppuStack_200 = &ppuStack_1d0;
    if (*0x8000b38 == '\0') {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *0x8000b40 = uVar5;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_218 = 0xb;
            uStack_210 = 0xc;
            uStack_214 = uVar5;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_218,0xc);
            uVar7 = 0;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_208) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18_02 = sym.cdsprm_unregister_cdspl3gov;
    uVar6 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar7 = _raw_spin_unlock_irqrestore(0x8000a78,uVar6);
    return uVar7;
}


// ===== sym.cdsprm_cxlimit_npu_activity_notify @ 0x0800290c (size 404) =====

uint64_t sym.cdsprm_cxlimit_npu_activity_notify(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x19;
    uint64_t uVar7;
    uint64_t unaff_x20;
    uint64_t uVar8;
    ulong unaff_x22;
    ulong unaff_x30;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    ulong uStack_98;
    uint uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    if (*0x8000b38 == '\0') {
        uVar8 = 0xffffffea;
    }
    else {
        unaff_x20 = arg1 & 0xffffffff;
        unaff_x19 = 0x8000b08;
        mutex_lock(0x8000b08);
        uVar3 = arg1;
        if (uVar3 == 0) {
            uVar1 = _segment.ehdr;
            if (*0x8000b90 != 0) {
                iVar4 = -1;
                goto code_r0x0800297c;
            }
code_r0x080029a8:
            if (uVar1 == 0) goto code_r0x080029ac;
code_r0x08002a04:
            uVar8 = 0xffffffea;
            *0x8000b3c = uVar3;
            if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                unaff_x22 = 0x8000000;
                if (uVar3 != 0) {
                    _segment.ehdr = _segment.ehdr + 1;
                }
                uStack_48 = CONCAT44(uVar3,6);
                uStack_40 = 0xc;
                uVar3 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
                uVar8 = uVar3;
                if ((_segment.ehdr == 0) || (uVar3 == 0)) {
                    if ((_segment.ehdr == 0) || (uVar3 != 0)) goto code_r0x080029b0;
                    mutex_unlock(0x8000b08);
                    wait_for_completion(0x8000b50);
                    mutex_lock(0x8000b08);
                }
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
        else {
            iVar4 = 1;
code_r0x0800297c:
            *0x8000b90 = iVar4 + *0x8000b90;
            if ((*0x8000b90 == 0) || (*0x8000b3c == 0)) {
                uVar1 = *0x8000b3c;
                if (*0x8000b90 == 0) goto code_r0x080029a8;
                goto code_r0x08002a04;
            }
code_r0x080029ac:
            uVar8 = 0;
        }
code_r0x080029b0:
        mutex_unlock(0x8000b08);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    uVar3 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_cxlimit_npu_corner_notify;
    pcStack_78 = sym.cdsprm_cxlimit_npu_corner_notify;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    uVar7 = uVar3;
    uStack_90 = 0;
    uStack_98 = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    uStack_70 = unaff_x22;
    uStack_68 = uVar8;
    uStack_60 = unaff_x20;
    uStack_58 = unaff_x19;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar1 = *0x8000b94;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        if ((uVar3 == 0) || (*0x8000b94 < uVar3)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_98 = CONCAT44(uVar3,8);
        uStack_90 = 0xc;
        *0x8000b94 = uVar3;
        iVar4 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_98,0xc);
        if ((_segment.ehdr - 1 < uVar1) || (iVar4 == 0)) {
            uVar3 = *0x8000b94;
            if ((_segment.ehdr <= uVar1 && _segment.ehdr != 0) || (iVar4 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar7 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar3 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar3;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_88) {
        return uVar7;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_a8 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    ppuStack_b0 = &puStack_80;
    if (*0x8000b38 == '\0') {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0;
        *0x8000b40 = uVar5;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_c8 = 0xb;
            uStack_c0 = 0xc;
            uStack_c4 = uVar5;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_c8,0xc);
            uVar8 = 0;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_b8) {
        return uVar8;
    }
    __stack_chk_fail(uVar8);
    *extraout_x18_01 = sym.cdsprm_unregister_cdspl3gov;
    uVar6 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar8 = _raw_spin_unlock_irqrestore(0x8000a78,uVar6);
    return uVar8;
}


// ===== sym.cdsprm_cxlimit_npu_corner_notify @ 0x08002aa0 (size 356) =====

uint64_t sym.cdsprm_cxlimit_npu_corner_notify(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uVar7 = arg1 & 0xffffffff;
    uStack_40 = 0;
    uStack_48 = 0;
    if ((*0x8000beb != '\0') || (*0x8000b38 == '\0')) goto code_r0x08002bcc;
    mutex_lock(0x8000b08);
    uVar2 = *0x8000b94;
    uVar6 = arg1;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        if ((uVar6 == 0) || (*0x8000b94 < uVar6)) {
            _segment.ehdr = _segment.ehdr + 1;
        }
        uStack_48 = CONCAT44(uVar6,8);
        uStack_40 = 0xc;
        *0x8000b94 = uVar6;
        iVar3 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
        if ((_segment.ehdr - 1 < uVar2) || (iVar3 == 0)) {
            uVar6 = *0x8000b94;
            if ((_segment.ehdr <= uVar2 && _segment.ehdr != 0) || (iVar3 != 0)) goto code_r0x08002bc0;
            mutex_unlock(0x8000b08);
            wait_for_completion(0x8000b70);
            mutex_lock(0x8000b08);
            if (*0x8000b98 != 0) {
                uVar7 = *0x8000b98;
                _segment.ehdr = *0x8000b98;
            }
        }
        _segment.ehdr = _segment.ehdr - 1;
        uVar6 = *0x8000b94;
    }
code_r0x08002bc0:
    *0x8000b94 = uVar6;
    mutex_unlock(0x8000b08);
code_r0x08002bcc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    uVar4 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_cxlimit_camera_activity_notify;
    pcStack_58 = sym.cdsprm_cxlimit_camera_activity_notify;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puStack_60 = &stack0xffffffffffffffd0;
    if (*0x8000b38 == '\0') {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0;
        *0x8000b40 = uVar4;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_78 = 0xb;
            uStack_70 = 0xc;
            uStack_74 = uVar4;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_78,0xc);
            uVar7 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.cdsprm_unregister_cdspl3gov;
    uVar5 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    uVar7 = _raw_spin_unlock_irqrestore(0x8000a78,uVar5);
    return uVar7;
}


// ===== sym.cdsprm_cxlimit_camera_activity_notify @ 0x08002c04 (size 168) =====

void sym.cdsprm_cxlimit_camera_activity_notify(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    if (*0x8000b38 == '\0') {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
        *0x8000b40 = arg1;
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_28 = 0xb;
            uStack_20 = 0xc;
            uStack_24 = *0x8000b40;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_28,0xc);
            uVar2 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail(uVar2);
    *extraout_x18 = sym.cdsprm_unregister_cdspl3gov;
    uVar2 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    _raw_spin_unlock_irqrestore(0x8000a78,uVar2);
    return;
}


// ===== sym.cdsprm_unregister_cdspl3gov @ 0x08002cac (size 72) =====

void sym.cdsprm_unregister_cdspl3gov(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(0x8000a78);
    str.msm_hvx_rm[0] = '\0';
    str.msm_hvx_rm[1] = '\0';
    str.msm_hvx_rm[2] = '\0';
    str.msm_hvx_rm[3] = '\0';
    str.msm_hvx_rm[4] = '\0';
    str.msm_hvx_rm[5] = '\0';
    str.msm_hvx_rm[6] = '\0';
    str.msm_hvx_rm[7] = '\0';
    _raw_spin_unlock_irqrestore(0x8000a78,uVar1);
    return;
}


// ===== sym.process_cdsp_request_thread @ 0x08002cf4 (size 1668) =====

//WARNING: Removing unreachable block (ram,0x08003264)
//WARNING: Removing unreachable block (ram,0x0800327c)
//WARNING: Removing unreachable block (ram,0x08003284)
//WARNING: Removing unreachable block (ram,0x080032b8)

void sym.process_cdsp_request_thread(int64_t arg1)

{
    int64_t *piVar1;
    ushort uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    uint uVar9;
    ulong *in_x18;
    code *pcVar10;
    ulong unaff_x30;
    ulong uStack_1a0;
    uint uStack_198;
    ulong uStack_190;
    uint uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    
    *in_x18 = unaff_x30;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uVar6 = kthread_should_stop();
    if ((uVar6 & 1) == 0) goto code_r0x08002d34;
code_r0x08002d2c:
    do {
        do_exit(0);
code_r0x08002d34:
        pcVar10 = NULL;
        do {
            uVar6 = kthread_should_stop();
            if ((uVar6 & 1) == 0) {
                uVar7 = _raw_spin_lock_irqsave(0x8000a7c);
                pcVar10 = NULL;
                if (_obj.cdsprm_list != obj.cdsprm_list) {
                    pcVar10 = _obj.cdsprm_list;
                }
                _raw_spin_unlock_irqrestore(0x8000a7c,uVar7);
                if (pcVar10 != NULL) goto code_r0x08002dcc;
                uStack_168 = 0;
                uStack_160 = 0;
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_180 = 0;
                init_wait_entry(&uStack_180,0);
                iVar8 = prepare_to_wait_event(obj.cdsprm_wq,&uStack_180,1);
                uVar6 = kthread_should_stop();
                if ((uVar6 & 1) == 0) {
                    do {
                        uVar7 = _raw_spin_lock_irqsave(0x8000a7c);
                        pcVar10 = NULL;
                        if (_obj.cdsprm_list != obj.cdsprm_list) {
                            pcVar10 = _obj.cdsprm_list;
                        }
                        _raw_spin_unlock_irqrestore(0x8000a7c,uVar7);
                        if (pcVar10 != NULL) goto code_r0x08002eec;
                        if (iVar8 != 0) {
                            pcVar10 = NULL;
                            uVar6 = kthread_should_stop();
                            if ((uVar6 & 1) == 0) goto code_r0x08002dd8;
                            goto code_r0x08002d2c;
                        }
                        schedule();
                        iVar8 = prepare_to_wait_event(obj.cdsprm_wq,&uStack_180,1);
                        uVar6 = kthread_should_stop();
                    } while ((uVar6 & 1) == 0);
                    pcVar10 = NULL;
                }
code_r0x08002eec:
                finish_wait(obj.cdsprm_wq,&uStack_180);
                uVar6 = kthread_should_stop();
            }
            else {
code_r0x08002dcc:
                uVar6 = kthread_should_stop();
            }
            iVar8 = 0;
            if ((uVar6 & 1) != 0) break;
code_r0x08002dd8:
            if (iVar8 == 0) {
                if (pcVar10 == NULL) break;
                if (pcVar10 + 0x10 != NULL) {
                    iVar4 = *(pcVar10 + 0x10);
                    if ((iVar4 == 2) && (*0x8000bea != '\0')) {
                        mutex_lock(0x8000a48);
                        if (*(pcVar10 + 0x14) == 1) {
                            if (*0x8000bf0 != *0x8000af8) {
                                sym.set_qos_latency(*0x8000af8);
                                *0x8000bf0 = *0x8000af8;
                            }
                            *0x8000ac0 = *(pcVar10 + 0x18);
                            if (*0x8000ab8 < 3) {
                                if (*0x8000ab8 == 0) goto code_r0x08002fbc;
                            }
                            else {
                                flush_workqueue(*0x8000a10);
                                if (*0x8000ab8 == 4) {
code_r0x08002fbc:
                                    *0x8000ab8 = 1;
                                    queue_work_on(0x20,*0x8000a10,0x8000a18);
                                }
                            }
                        }
                        else if ((*(pcVar10 + 0x14) == 2) && (_segment.ehdr != 0x7fffffff)) {
                            sym.set_qos_latency(0x7fffffff);
                            _segment.ehdr = 0x7fffffff;
                        }
                        mutex_unlock(0x8000a48);
                    }
                    else if (iVar4 == 0xc) {
                        uStack_188 = 0;
                        uStack_190 = 0;
                        if (_segment.ehdr != 0) {
                            if ((_segment.ehdr != 1) && (_segment.ehdr != 0)) {
                                sym.cdsprm_compute_vtcm_set_partition_map(1);
                            }
                            if (*0x8000b38 != '\0') {
                                *0x8000b50 = 0;
                                *0x8000b70 = 0;
                                if (*0x8000b94 != 0) {
                                    uStack_190 = CONCAT44(*0x8000b94,8);
                                    uStack_188 = 0xc;
                                    rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_190,0xc);
                                }
                                if (_segment.ehdr != 0) {
                                    uStack_190 = CONCAT44(_segment.ehdr,6);
                                    uStack_188 = 0xc;
                                    rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_190,0xc);
                                }
                                if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                                    uStack_180 = CONCAT44(*0x8000b00,3);
                                    uStack_178 = CONCAT44(uStack_178._4_4_,0xc);
                                    rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_180,0xc);
                                }
                                if (_segment.ehdr != 0) {
                                    uStack_190 = CONCAT44(_segment.ehdr,0xb);
                                    uStack_188 = 0xc;
                                    rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_190,0xc);
                                }
                            }
                            iVar4 = _segment.ehdr;
                            uVar2 = _segment.ehdr;
                            if (_segment.ehdr != 0) {
                                uStack_178 = uStack_178 & 0xffffffff00000000;
                                uStack_180 = 0;
                                mutex_lock(0x8000ba0);
                                if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
                                    uStack_178 = CONCAT44(uStack_178._4_4_,0xc);
                                    uStack_180 = CONCAT26(uVar2,CONCAT24(_segment.ehdr,10));
                                    iVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_180,0xc);
                                    if (iVar5 == 0) {
                                        _segment.ehdr = iVar4;
                                    }
                                }
                                mutex_unlock(0x8000ba0);
                            }
                            iVar4 = *0x80000fc;
                            memset(&uStack_170,0,0x104);
                            if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
                                uStack_178 = CONCAT44(iVar4,0x10);
                                uStack_180 = 0x200000114;
                                iVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_180,0x114);
                                if (iVar5 == 0) {
                                    uVar7 = 0x80004d3;
                                    _segment.ehdr = iVar4;
                                    iVar5 = iVar4;
                                }
                                else {
                                    uVar7 = 0x800083b;
                                }
                                goto code_r0x0800334c;
                            }
                        }
                    }
                    else if (iVar4 == 5) {
                        mutex_lock(0x8000b08);
                        pcVar3 = *0x8000c38;
                        *0x8000c40 = *0x8000c38;
                        if (*0x8000c38 == NULL) {
                            mutex_unlock(0x8000b08);
                            uVar9 = 0;
                        }
                        else {
                            *0x8000b9c = *(pcVar10 + 0x14);
                            *0x8000beb = 1;
                            __cfi_slowpath_diag(0xd8880f61b62dcc42,*0x8000c38,0x80003f0);
                            iVar4 = (*pcVar3)(*0x8000b9c);
                            *0x8000beb = 0;
                            mutex_unlock(0x8000b08);
                            uVar9 = 0;
                            if (iVar4 == 0) {
                                uVar9 = *(pcVar10 + 0x14);
                            }
                        }
                        uStack_1a0 = CONCAT44(uVar9,4);
                        uStack_198 = 0xc;
                        iVar5 = rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_1a0,0xc);
                        if (iVar5 != 0) {
                            uVar7 = 0x80006c2;
code_r0x0800334c:
                            _printk(uVar7,iVar5);
                        }
                    }
                    else if (iVar4 == 1) {
                        uVar9 = *(pcVar10 + 0x14);
                        uVar7 = _raw_spin_lock_irqsave(0x8000a78);
                        *0x8000c30 = str.msm_hvx_rm._0_8_;
                        _raw_spin_unlock_irqrestore(0x8000a78,uVar7);
                        pcVar3 = *0x8000c30;
                        if (*0x8000c30 != NULL) {
                            if (3 < (*0x8000c30 + -0x80024c0 >> 3 | *0x8000c30 << 0x3d)) {
                                __cfi_slowpath_diag(0xac3778598d51adbd,*0x8000c30,0x80003d0);
                            }
                            (*pcVar3)(uVar9);
                        }
                    }
                }
                uVar7 = _raw_spin_lock_irqsave(0x8000a7c);
                uVar6 = __list_del_entry_valid(pcVar10);
                if ((uVar6 & 1) != 0) {
                    iVar8 = *pcVar10;
                    piVar1 = *(pcVar10 + 8);
                    *(iVar8 + 8) = piVar1;
                    *piVar1 = iVar8;
                }
                pcVar10[0x24] = 0x0;
                *pcVar10 = -0x2152ffffffffff00;
                *(pcVar10 + 8) = -0x2152fffffffffede;
                _raw_spin_unlock_irqrestore(0x8000a7c,uVar7);
            }
            uVar6 = kthread_should_stop();
        } while ((uVar6 & 1) == 0);
    } while( true );
}


// ===== sym.process_delayed_rm_request @ 0x08003380 (size 316) =====

void sym.process_delayed_rm_request(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(0x8000a48);
    InstructionSynchronizationBarrier();
    uVar1 = cntvct_el0;
    if ((*0x8000bf0 == *0x8000af8) && (uVar1 < *0x8000ac0)) {
        while (uVar1 = *0x8000ac0 - uVar1, uVar1 < _segment.ehdr * 0x4b00) {
            *0x8000ab8 = 2;
            mutex_unlock(0x8000a48);
            uVar1 = (uVar1 / 0x4b00) * 1000;
            usleep_range_state(uVar1 & 0xfffffff8,uVar1 + 2000,2);
            mutex_lock(0x8000a48);
            *0x8000ab8 = 3;
            InstructionSynchronizationBarrier();
            uVar1 = cntvct_el0;
            if ((*0x8000bf0 != *0x8000af8) || (*0x8000ac0 <= uVar1)) break;
        }
    }
    sym.set_qos_latency(0x7fffffff);
    *0x8000bf0 = 0x7fffffff;
    *0x8000ab8 = 4;
    mutex_unlock(0x8000a48);
    return;
}


// ===== sym.set_qos_latency @ 0x080034bc (size 332) =====

void sym.set_qos_latency(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg1 & 0xffffffff;
    if (str.Received_incorrect_msg_feature__d_n[4] == '\0') {
        if (str.Received_incorrect_msg_feature__d_n[0] == '\0') {
            cpu_latency_qos_add_request(0x8000ac8,uVar4);
            str.Received_incorrect_msg_feature__d_n[0] = '\x01';
        }
        else {
            cpu_latency_qos_update_request(0x8000ac8,uVar4);
        }
    }
    else {
        if (_segment.ehdr != 0) {
            iVar5 = 0;
            uVar6 = 0;
            do {
                uVar1 = *(*0x8000c48 + uVar6 * 4);
                if (str.Received_incorrect_msg_feature__d_n[0] == '\0') {
                    uVar3 = get_cpu_device(uVar1);
                    iVar2 = dev_pm_qos_add_request(uVar3,CONCAT44(*0x8000004,_segment.ehdr) + iVar5,1,uVar4);
                }
                else {
                    iVar2 = dev_pm_qos_update_request(CONCAT44(*0x8000004,_segment.ehdr) + iVar5,uVar4);
                }
                if (iVar2 < 0) {
                    iVar5 = sp_el0;
                    _printk(0x80008b5,iVar5 + 0x7a8,"",uVar1,iVar2,str.Received_incorrect_msg_feature__d_n[0]);
                    return;
                }
                uVar6 = uVar6 + 1;
                iVar5 = iVar5 + 0x58;
            } while (uVar6 < _segment.ehdr);
        }
        str.Received_incorrect_msg_feature__d_n[0] = '\x01';
    }
    return;
}


// ===== sym.cdsp_rm_driver_probe @ 0x08003608 (size 1692) =====

uint64_t sym.cdsp_rm_driver_probe(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    uint64_t uVar9;
    uint *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_70 = 0;
    iVar4 = of_find_property(*(arg1 + 0x300),"",0);
    *0x8000bec = iVar4 != 0;
    if ((iVar4 != 0) && (of_find_property(*(arg1 + 0x300),"",""), str.qcom_qos_cores._4_4_ != 0)) {
        _segment.ehdr = CONCAT44(*0x8000004,str.qcom_qos_cores._4_4_ >> 2);
        iVar4 = __kmalloc(str.qcom_qos_cores._4_4_ & 0xfffffffc,0xdc0);
        if (iVar4 == 0) {
            pcVar6 = "";
        }
        else {
            if (_segment.ehdr != 0) {
                uVar8 = 0;
                do {
                    iVar2 = of_property_read_u32_index(*(arg1 + 0x300),"",uVar8,iVar4 + uVar8 * 4);
                    if (iVar2 != 0) {
                        _dev_err(arg1 + 0x10,"","",uVar8);
                        *0x8000bec = 0;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < _segment.ehdr);
            }
            unique0x10000483 = iVar4;
            *0x4000 = __kmalloc((_segment.ehdr & 0xffffffff) * 0x58,0xdc0);
            if (*0x4000 != 0) goto code_r0x08003740;
            pcVar6 = "";
        }
        _dev_err(arg1 + 0x10,pcVar6);
        *0x8000bec = 0;
    }
code_r0x08003740:
    iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",0x8000af8,1,0);
    if ((-1 < iVar2) && (iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",0x8000afc,1,0), -1 < iVar2)
       ) {
        _segment.ehdr = debugfs_create_dir("",0);
        if (_segment.ehdr == 0) {
            _dev_err(arg1 + 0x10,"");
        }
        *0x8000b00 = 4;
        of_property_read_variable_u32_array(*(arg1 + 0x300),"",0x8000b00,1,0);
        iVar4 = of_find_property(*(arg1 + 0x300),"",0);
        *0x8000b38 = iVar4 != 0;
        if (((iVar4 != 0) && (*0x8000c00 != 0)) &&
           (_segment.ehdr = debugfs_create_file("",0x1a4,*0x8000c00,0,obj.cdsprm_debugfs_fops), _segment.ehdr == 0)
           ) {
            debugfs_remove(0);
            _dev_err(arg1 + 0x10,"");
        }
        of_property_read_variable_u32_array(*(arg1 + 0x300),"",&uStack_70,1,0);
        uVar5 = _segment.ehdr;
        if ((uStack_70 != 0) &&
           (uVar5 = thermal_of_cooling_device_register
                              (*(arg1 + 0x300),"",0,reloc.cdsp_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt)
           , 0xfffffffffffff000 < uVar5)) {
            _dev_err(arg1 + 0x10,"");
        }
        _segment.ehdr = uVar5;
        *0x8000bea = 1;
        iVar4 = of_find_property(*(arg1 + 0x300),"",0);
        *0x80000f4 = iVar4 != 0;
        if (iVar4 == 0) {
code_r0x08003a94:
            iVar4 = of_find_property(*(arg1 + 0x300),"",0);
            *0x80000f8 = iVar4 != 0;
            *0x80000fc = *0x80000f8;
            if (*0x8000c00 != 0) {
                _segment.ehdr = debugfs_create_file("",0x1a4,*0x8000c00,0,obj.cdsprm_resmgr_pdkill_debugfs_fops);
                if (_segment.ehdr == 0) {
                    _dev_err(arg1 + 0x10,"");
                }
                str.partition_id_is_invalid:__d_n._21_8_ =
                     debugfs_create_file("",0x124,*0x8000c00,0,obj.cdsprm_resmgr_pdkill_state_fops);
                if (str.partition_id_is_invalid:__d_n._21_8_ == 0) {
                    _dev_err(arg1 + 0x10,"");
                }
            }
            uVar3 = 0;
            goto code_r0x08003c40;
        }
        iVar2 = of_property_count_elems_of_size(*(arg1 + 0x300),"",4);
        uVar8 = iVar2 / 3;
        *0x80008fc = uVar8;
        if (iVar2 == uVar8 * 3) {
            if ((uVar8 & 0xff) != 0) {
                uVar5 = 0;
                iVar4 = 0x207;
                puVar10 = 0x8000908;
                do {
                    iVar2 = iVar4;
                    uVar3 = of_property_read_u32_index(*(arg1 + 0x300),"",iVar2 + -0x207,&uStack_70 + 4);
                    if (uVar3 != 0) goto code_r0x08003b44;
                    if (iVar4 == 0x237) goto code_r0x08003c9c;
                    *(puVar10 + -2) = uStack_70._4_1_;
                    if (uVar8 <= uStack_70._4_1_) {
                        pcVar6 = "";
                        goto code_r0x08003c38;
                    }
                    uVar3 = of_property_read_u32_index(*(arg1 + 0x300),"",iVar2 + -0x206,&uStack_70 + 4);
                    if (uVar3 != 0) {
code_r0x08003b44:
                        pcVar6 = "";
                        goto code_r0x08003bac;
                    }
                    puVar10[-1] = uStack_70._4_4_;
                    uVar3 = of_property_read_u32_index(*(arg1 + 0x300),"",iVar2 + -0x205,&uStack_70 + 4);
                    if (uVar3 != 0) goto code_r0x08003b44;
                    uVar5 = uVar5 + 1;
                    iVar4 = iVar4 + 3;
                    *puVar10 = uStack_70._4_4_;
                    puVar10 = puVar10 + 3;
                } while (uVar5 < *0x80008fc);
            }
            uVar3 = of_property_count_elems_of_size(*(arg1 + 0x300),"",4);
            uVar8 = uVar3;
            if (uVar3 < 0) {
                uVar8 = uVar3 + 1;
            }
            uVar8 = uVar8 >> 1;
            *0x80008fd = uVar8;
            if ((uVar3 & 1) == 0) {
                if ((uVar8 & 0xff) != 0) {
                    uVar5 = 0;
                    uVar9 = 0;
                    do {
                        uVar3 = of_property_read_u32_index(*(arg1 + 0x300),"",uVar9 & 0xffffffff,&uStack_70 + 4);
                        if (uVar3 != 0) {
code_r0x08003b98:
                            pcVar6 = "";
code_r0x08003bac:
                            _dev_err(arg1 + 0x10,pcVar6,uVar5 & 0xffffffff,uStack_70._4_4_);
                            goto code_r0x08003c40;
                        }
                        if (uVar5 == 0x20) {
code_r0x08003c9c:
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003ca0);
                            (*pcVar1)();
                        }
                        *(uVar9 + 0x80009c0) = uStack_70 >> 0x20;
                        uVar3 = of_property_read_u32_index(*(arg1 + 0x300),"",uVar9 + 1,&uStack_70 + 4);
                        if (uVar3 != 0) goto code_r0x08003b98;
                        uVar7 = *0x80008fd;
                        uVar5 = uVar5 + 1;
                        *(uVar9 + 0x80009c1) = uStack_70 >> 0x20;
                        uVar9 = uVar9 + 2;
                    } while (uVar5 < uVar7);
                }
                if ((_segment.ehdr == 0) && (_segment.ehdr = debugfs_create_dir("",0), _segment.ehdr == 0)) {
                    _dev_err(arg1 + 0x10,"",0);
                }
                else {
                    _segment.ehdr = debugfs_create_file("",0x1a4,_segment.ehdr,0,obj.cdsprmvtcm_debugfs_fops);
                }
                if (_segment.ehdr == 0) {
                    debugfs_remove(0);
                    _dev_err(arg1 + 0x10,"");
                }
                goto code_r0x08003a94;
            }
            pcVar6 = "";
        }
        else {
            pcVar6 = "";
        }
code_r0x08003c38:
        _dev_err(arg1 + 0x10,pcVar6,uVar8);
    }
    uVar3 = 0xffffffea;
code_r0x08003c40:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        *extraout_x18 = sym.cdsprm_debugfs_fops_open;
        uVar5 = simple_attr_open(auVar11._0_8_,auVar11._8_8_,
                                 sym.cdsprm_compute_prio_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                                 sym.cdsprm_compute_prio_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
        return uVar5;
    }
    return uVar3;
}


// ===== sym.cdsprm_debugfs_fops_open @ 0x08003ca4 (size 60) =====

void sym.cdsprm_debugfs_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.cdsprm_compute_prio_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                     sym.cdsprm_compute_prio_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
    return;
}


// ===== sym.cdsprm_compute_prio_read @ 0x08003ce0 (size 28) =====

ulong sym.cdsprm_compute_prio_read(int64_t arg1,int64_t arg2)

{
    *arg2 = _segment.ehdr;
    return 0;
}


// ===== sym.cdsprm_compute_prio_write @ 0x08003cfc (size 140) =====

ulong sym.cdsprm_compute_prio_write(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    *0x8000b00 = arg2;
    if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
        uStack_28 = 3;
        uStack_20 = 0xc;
        uStack_24 = *0x8000b00;
        arg1 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_28,0xc);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return 0;
    }
    __stack_chk_fail(arg1);
    *extraout_x1 = 10;
    return 0;
}


// ===== sym.cdsp_get_max_state @ 0x08003d88 (size 24) =====

ulong sym.cdsp_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = 10;
    return 0;
}


// ===== sym.cdsp_get_cur_state @ 0x08003da0 (size 28) =====

ulong sym.cdsp_get_cur_state(int64_t arg1,int64_t arg2)

{
    *arg2 = _segment.ehdr;
    return 0;
}


// ===== sym.cdsp_set_cur_state @ 0x08003dbc (size 224) =====

ulong sym.cdsp_set_cur_state(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if (_segment.ehdr != arg2) {
        uStack_40 = 0;
        uStack_48 = 0;
        mutex_lock(0x8000ba0);
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_40 = 0xc;
            uStack_48 = CONCAT26(arg2,CONCAT24(_segment.ehdr,10));
            iVar2 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
            if (iVar2 == 0) {
                _segment.ehdr = arg2;
            }
        }
        arg1 = mutex_unlock(0x8000ba0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return 0;
    }
    auVar4 = __stack_chk_fail(arg1);
    *extraout_x18 = sym.cdsprmvtcm_debugfs_fops_open;
    uVar3 = simple_attr_open(auVar4._0_8_,auVar4._8_8_,
                             sym.cdsprm_vtcm_partition_state_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                             sym.cdsprm_vtcm_partition_state_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
    return uVar3;
}


// ===== sym.cdsprmvtcm_debugfs_fops_open @ 0x08003e9c (size 60) =====

void sym.cdsprmvtcm_debugfs_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.cdsprm_vtcm_partition_state_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                     sym.cdsprm_vtcm_partition_state_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
    return;
}


// ===== sym.cdsprm_vtcm_partition_state_read @ 0x08003ed8 (size 28) =====

ulong sym.cdsprm_vtcm_partition_state_read(int64_t arg1,int64_t arg2)

{
    *arg2 = _segment.ehdr;
    return 0;
}


// ===== sym.cdsprm_vtcm_partition_state_write @ 0x08003ef4 (size 72) =====

uint sym.cdsprm_vtcm_partition_state_write(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.cdsprm_compute_vtcm_set_partition_map(arg1 & 0xffffffff);
    uVar1 = 0;
    if (_segment.ehdr != arg1) {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.cdsprm_resmgr_pdkill_debugfs_fops_open @ 0x08003f3c (size 60) =====

void sym.cdsprm_resmgr_pdkill_debugfs_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.cdsprm_resmgr_pdkill_override_read.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                     sym.cdsprm_resmgr_pdkill_override_write.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,"");
    return;
}


// ===== sym.cdsprm_resmgr_pdkill_override_read @ 0x08003f78 (size 28) =====

ulong sym.cdsprm_resmgr_pdkill_override_read(int64_t arg1,int64_t arg2)

{
    *arg2 = _segment.ehdr;
    return 0;
}


// ===== sym.cdsprm_resmgr_pdkill_override_write @ 0x08003f94 (size 256) =====

uint64_t sym.cdsprm_resmgr_pdkill_override_write(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_150;
    uint uStack_148;
    uint uStack_144;
    uchar auStack_140 [264];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    memset(auStack_140,0,0x104);
    uVar5 = 0xffffffea;
    if ((*0x8000ab0 != 0) && (2 < _obj.gcdsprm)) {
        uStack_148 = 0x10;
        uStack_150 = 0x200000114;
        uStack_144 = arg1;
        uVar2 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_150,0x114);
        uVar5 = uVar2;
        if (uVar2 == 0) {
            uVar3 = 0x80004d3;
            uVar4 = arg1 & 0xffffffff;
            _segment.ehdr = arg1;
        }
        else {
            uVar3 = 0x800083b;
            uVar4 = uVar5;
        }
        _printk(uVar3,uVar4);
    }
    _printk(0x8000464,arg1,uVar5);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.cdsprm_resmgr_pdkill_state_open;
    uVar5 = single_open(auVar6._8_8_,sym.cdsprm_resmgr_pdkill_state_show.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,
                        *(auVar6._0_8_ + 0x2d8));
    return uVar5;
}


// ===== sym.cdsprm_resmgr_pdkill_state_open @ 0x08004094 (size 56) =====

void sym.cdsprm_resmgr_pdkill_state_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.cdsprm_resmgr_pdkill_state_show.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.cdsprm_resmgr_pdkill_state_show @ 0x080040cc (size 108) =====

ulong sym.cdsprm_resmgr_pdkill_state_show(ulong param_1)

{
    char *pcVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = "";
    if (*0x80000f8 != 0) {
        pcVar2 = "";
    }
    pcVar1 = "";
    if (*0x80000f8 != 0) {
        pcVar1 = "";
    }
    if (*0x8000100 != 0) {
        pcVar2 = pcVar1;
    }
    seq_puts(param_1,pcVar2);
    return 0;
}


// ===== sym.hvx_rm_driver_probe @ 0x08004138 (size 200) =====

ulong sym.hvx_rm_driver_probe(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *extraout_x1;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_2c = 0;
    of_property_read_variable_u32_array(*(arg1 + 0x300),"",&iStack_2c,1,0);
    uVar2 = _segment.ehdr;
    if ((iStack_2c != 0) &&
       (uVar2 = thermal_of_cooling_device_register
                          (*(arg1 + 0x300),0x80005e8,0,
                           reloc.hvx_get_max_state.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt), 0xfffffffffffff000 < uVar2
       )) {
        _dev_err(arg1 + 0x10,"");
    }
    _segment.ehdr = uVar2;
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x1 = 10;
        return 0;
    }
    return 0;
}


// ===== sym.hvx_get_max_state @ 0x08004200 (size 24) =====

ulong sym.hvx_get_max_state(int64_t arg1,int64_t arg2)

{
    *arg2 = 10;
    return 0;
}


// ===== sym.hvx_get_cur_state @ 0x08004218 (size 28) =====

ulong sym.hvx_get_cur_state(int64_t arg1,int64_t arg2)

{
    *arg2 = _segment.ehdr;
    return 0;
}


// ===== sym.hvx_set_cur_state @ 0x08004234 (size 224) =====

ulong sym.hvx_set_cur_state(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if ((_segment.ehdr & 0xffffffff) != arg2) {
        uStack_40 = 0;
        uStack_48 = 0;
        mutex_lock(0x8000ba0);
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_48 = CONCAT44(arg2 & 0xffff,10);
            uStack_40 = 0xc;
            uStack_48 = CONCAT26(_segment.ehdr,uStack_48);
            iVar1 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
            if (iVar1 == 0) {
                _segment.ehdr = CONCAT44(*0x8000004,arg2);
            }
        }
        arg1 = mutex_unlock(0x8000ba0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar2 = __stack_chk_fail(arg1);
    *extraout_x18 = sym.cdsprm_rpmsg_probe;
    of_platform_populate(*(iVar2 + 0x2f0),0,0,iVar2);
    _segment.ehdr = iVar2;
    return 0;
}


// ===== sym.cdsprm_rpmsg_probe @ 0x08004314 (size 76) =====

ulong sym.cdsprm_rpmsg_probe(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    of_platform_populate(*(arg1 + 0x2f0),0,0,arg1);
    _segment.ehdr = arg1;
    return 0;
}


// ===== sym.cdsprm_rpmsg_remove @ 0x08004360 (size 168) =====

int64_t sym.cdsprm_rpmsg_remove(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000ab0 = 0;
    _obj.gcdsprm = 0;
    if (*0x8000b38 != '\0') {
        mutex_lock(0x8000b08);
        complete_all(0x8000b50);
        complete_all(0x8000b70);
        arg1 = mutex_unlock(0x8000b08);
        pcVar1 = *0x8000c38;
        *0x8000c40 = *0x8000c38;
        if ((*0x8000b9c < 8) && (*0x8000c38 != NULL)) {
            __cfi_slowpath_diag(0xd8880f61b62dcc42,*0x8000c38,0x8000410);
            arg1 = (*pcVar1)(8);
        }
    }
    return arg1;
}


// ===== sym.cdsprm_rpmsg_callback @ 0x08004408 (size 676) =====

ulong sym.cdsprm_rpmsg_callback(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    code *pcVar8;
    ulong uVar9;
    uint64_t uVar10;
    char *pcVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (arg3 < 0x14)) {
        _dev_err(arg1,"",arg3,0x14);
        return 0xffffffea;
    }
    iVar5 = *arg2;
    if ((iVar5 == 2) && (str.Received_incorrect_msg_feature__d_n[2] != '\0')) goto code_r0x0800444c;
    if (iVar5 == 9) {
        if (str.Invalid_message_in_rpmsg_callback__length:__d__expected:__lu_n[0x14] == '\0') {
code_r0x08004668:
            _dev_err(arg1,"");
            return 0;
        }
        *0x8000b98 = *(arg2 + 4);
        if (str.Invalid_message_in_rpmsg_callback__length:__d__expected:__lu_n._36_4_ != 0) {
            pcVar11 = 0x8000b70;
code_r0x080045dc:
            complete(pcVar11);
            return 0;
        }
code_r0x08004630:
        uVar9 = 0;
    }
    else {
        if (iVar5 == 1) {
            uVar9 = _raw_spin_lock_irqsave(0x8000a78);
            str.msm_hvx_rm[8] = str.msm_hvx_rm[0];
            str.msm_hvx_rm[9] = str.msm_hvx_rm[1];
            str.msm_hvx_rm[10] = str.msm_hvx_rm[2];
            str.qcom_vtcm_partition_info[0] = str.msm_hvx_rm[3];
            str.qcom_vtcm_partition_info[1] = str.msm_hvx_rm[4];
            str.qcom_vtcm_partition_info[2] = str.msm_hvx_rm[5];
            str.qcom_vtcm_partition_info[3] = str.msm_hvx_rm[6];
            str.qcom_vtcm_partition_info[4] = str.msm_hvx_rm[7];
            _raw_spin_unlock_irqrestore(0x8000a78,uVar9);
            if (*0x8000c30 == 0) goto code_r0x08004630;
        }
        else if ((iVar5 != 5) || (str.Invalid_message_in_rpmsg_callback__length:__d__expected:__lu_n[0x14] == '\0')) {
            if ((iVar5 == 7) && (str.Invalid_message_in_rpmsg_callback__length:__d__expected:__lu_n[0x14] != '\0')) {
                if (_segment.ehdr != 0) {
                    pcVar11 = "";
                    goto code_r0x080045dc;
                }
            }
            else {
                if (iVar5 != 0x11) {
                    if (iVar5 == 0xe) {
                        if (*(arg2 + 4) != 0) {
                            _segment.ehdr = 0;
                            return 0;
                        }
                        _segment.ehdr = 1;
                        return 0;
                    }
                    if (iVar5 != 0xc) goto code_r0x08004668;
                    _segment.ehdr = *(arg2 + 4);
                    goto code_r0x0800444c;
                }
                if (*(arg2 + 4) == 0) {
                    *0x8000100 = *0x80000fc;
                    return 0;
                }
            }
            goto code_r0x08004630;
        }
code_r0x0800444c:
        uVar9 = _raw_spin_lock_irqsave(0x8000a7c);
        uVar12 = *0x8000a00;
        if (0x31 < *0x8000a00) {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5512,0x80046ac);
            (*pcVar8)();
        }
        pcVar11 = uVar12 * 0x28 + 0x800014c;
        if (*pcVar11 == '\0') {
            iVar6 = uVar12 * 0x28;
            *pcVar11 = '\x01';
            piVar7 = *0x80003c8;
            uVar3 = *arg2;
            uVar4 = *(arg2 + 8);
            piVar1 = iVar6 + 0x8000128;
            *(iVar6 + 0x8000148) = *(arg2 + 0x10);
            *(iVar6 + 0x8000138) = uVar3;
            *(iVar6 + 0x8000140) = uVar4;
            uVar2 = 0;
            if (*0x8000a00 < 0x31) {
                uVar2 = *0x8000a00 + 1;
            }
            *0x8000a00 = uVar2;
            uVar10 = __list_add_valid(piVar1,piVar7,obj.cdsprm_list);
            if ((uVar10 & 1) != 0) {
                *0x80003c8 = piVar1;
                *piVar1 = obj.cdsprm_list;
                *(uVar12 * 0x28 + 0x8000130) = piVar7;
                *piVar7 = piVar1;
            }
            _raw_spin_unlock_irqrestore(0x8000a7c,uVar9);
            __wake_up(obj.cdsprm_wq,1,1,0);
            uVar9 = 0;
        }
        else {
            _raw_spin_unlock_irqrestore(0x8000a7c,uVar9);
            uVar9 = 0xfffffff4;
        }
    }
    return uVar9;
}


// ===== sym.__cfi_check_fail @ 0x080046ac (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080046f0

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
    //switch table (4 cases) at 0x8000450
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004704);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004844 (size 608) =====

int sym.init_module(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init("","",obj.cdsprm_init.__key);
    __mutex_init(0x8000a80,"",obj.cdsprm_init.__key);
    __mutex_init(0x8000b08,"",obj.cdsprm_init.__key);
    __mutex_init(0x8000ba0,"",obj.cdsprm_init.__key);
    *0x8000a78 = 0;
    *0x8000108 = 0;
    __init_swait_queue_head(0x8000110,"",obj.cdsprm_init.__key);
    *0x8000b50 = 0;
    __init_swait_queue_head(0x8000b58,"",obj.cdsprm_init.__key);
    str.gcdsprm.npu_activity_lock._14_4_ = 0;
    __init_swait_queue_head("","",obj.cdsprm_init.__key);
    uVar2 = kthread_create_on_node
                      (sym.process_cdsp_request_thread.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,0,0xffffffff,"");
    if (uVar2 < 0xfffffffffffff001) {
        wake_up_process(uVar2);
    }
    _segment.ehdr = uVar2;
    if (uVar2 == 0) {
        _printk(0x8000698);
        iVar1 = -0xc;
    }
    else {
        _segment.ehdr = alloc_workqueue(0x800053f,0xe000a,1,"");
        if (_segment.ehdr == 0) {
            _printk(0x8000934);
            iVar1 = -0xc;
        }
        else {
            *0x8000a18 = 0xfffffffe0;
            *0x8000a20 = 0x8000a20;
            *0x8000a28 = 0x8000a20;
            str._nresmgr_pdkill_feature_is_disabled_by_debugfs_override_n._0_8_ =
                 sym.process_delayed_rm_request.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt;
            iVar1 = __platform_driver_register
                              (reloc.cdsp_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,obj.__this_module);
            if (iVar1 == 0) {
                _segment.ehdr = CONCAT44(*0x8000004,1);
                iVar1 = __platform_driver_register
                                  (reloc.hvx_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt,obj.__this_module)
                ;
                if (iVar1 == 0) {
                    _segment.ehdr = CONCAT44(*0x8000004,1);
                    iVar1 = __register_rpmsg_driver(obj.cdsprm_rpmsg_client,obj.__this_module);
                    if (iVar1 == 0) {
                        *0x8000be9 = 1;
                        _printk(0x80008f9);
                        return 0;
                    }
                    uVar3 = 0x80005ae;
                }
                else {
                    uVar3 = 0x8000731;
                }
            }
            else {
                uVar3 = 0x8000a80;
            }
            _printk(uVar3,iVar1);
            destroy_workqueue(_segment.ehdr);
        }
        kthread_stop(_segment.ehdr);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08004aa4 (size 908) =====

//WARNING: Removing unreachable block (ram,0x08004c78)
//WARNING: Removing unreachable block (ram,0x08004c90)
//WARNING: Removing unreachable block (ram,0x08004c98)
//WARNING: Removing unreachable block (ram,0x08004cc8)
//WARNING: Removing unreachable block (ram,0x08004ccc)

void sym.cleanup_module(void)

{
    bool bVar1;
    code *pcVar2;
    int64_t iVar3;
    uchar uVar4;
    int iVar5;
    uchar *extraout_x1;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_58;
    uint uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_50 = 0;
    uStack_58 = 0;
    _printk(0x800062d);
    if (str.Received_incorrect_msg_feature__d_n[0] != '\0') {
        sym.set_qos_latency(0x7fffffff);
        _segment.ehdr = 0x7fffffff;
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        thermal_cooling_device_unregister();
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        thermal_cooling_device_unregister();
    }
    if (*0x8000b38 != '\0') {
        mutex_lock(0x8000b08);
        complete_all(0x8000b50);
        complete_all(0x8000b70);
        mutex_unlock(0x8000b08);
        pcVar2 = *0x8000c38;
        *0x8000c40 = *0x8000c38;
        if ((*0x8000b9c < 8) && (*0x8000c38 != NULL)) {
            __cfi_slowpath_diag(0xd8880f61b62dcc42,*0x8000c38,0x8000430);
            (*pcVar2)(8);
        }
    }
    if ((_obj.gcdsprm != 0) && (*0x8000b38 != '\0')) {
        if (_segment.ehdr != 0) {
            uStack_58 = 6;
            uStack_50 = 0xc;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_58,0xc);
            *0x8000b3c = 0;
        }
        if (_segment.ehdr != 0) {
            uStack_58 = 8;
            uStack_50 = 0xc;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_58,0xc);
            *0x8000b94 = 0;
        }
        if (_segment.ehdr != 0) {
            uStack_58 = 0xb;
            uStack_50 = 0xc;
            rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_58,0xc);
            *0x8000b40 = 0;
        }
    }
    if (_segment.ehdr != 0) {
        uStack_40 = 0;
        uStack_48 = 0;
        mutex_lock(0x8000ba0);
        if ((*0x8000ab0 != 0) && (_obj.gcdsprm != 0)) {
            uStack_40 = 0xc;
            uStack_48 = CONCAT24(_segment.ehdr,10);
            iVar5 = rpmsg_send(*(*0x8000ab0 + 0x3c8),&uStack_48,0xc);
            if (iVar5 == 0) {
                _segment.ehdr = 0;
            }
        }
        mutex_unlock(0x8000ba0);
        *0x8000bd0 = 0;
    }
    if (str.Received_incorrect_msg_feature__d_n[1] != '\0') {
        unregister_rpmsg_driver(obj.cdsprm_rpmsg_client);
        *0x8000ab0 = 0;
        _obj.gcdsprm = 0;
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        kthread_stop();
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        destroy_workqueue();
    }
    if (_segment.ehdr != 0) {
        platform_driver_unregister(reloc.cdsp_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt);
    }
    if (_segment.ehdr != 0) {
        platform_driver_unregister(reloc.hvx_rm_driver_probe.1a56201cf01a9b764251eb47c2c1bb05.cfi_jt);
    }
    debugfs_remove(str.Received_incorrect_msg_feature__d_n._24_8_);
    str.Received_incorrect_msg_feature__d_n[1] = '\0';
    str.Received_incorrect_msg_feature__d_n[0xc] = '\0';
    str.Received_incorrect_msg_feature__d_n[0xd] = '\0';
    str.Received_incorrect_msg_feature__d_n[0xe] = '\0';
    str.Received_incorrect_msg_feature__d_n[0xf] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x10] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x11] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x12] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x13] = '\0';
    str.qcom_qos_maxhold_ms[4] = '\0';
    str.qcom_qos_maxhold_ms[5] = '\0';
    str.qcom_qos_maxhold_ms[6] = '\0';
    str.qcom_qos_maxhold_ms[7] = '\0';
    str.qcom_qos_maxhold_ms[8] = '\0';
    str.qcom_qos_maxhold_ms[9] = '\0';
    str.qcom_qos_maxhold_ms[10] = '\0';
    str.qcom_qos_maxhold_ms[0xb] = '\0';
    str.qcom_qos_maxhold_ms[0xc] = '\0';
    str.qcom_qos_maxhold_ms[0xd] = '\0';
    str.qcom_qos_maxhold_ms[0xe] = '\0';
    str.qcom_qos_maxhold_ms[0xf] = '\0';
    str.qcom_qos_maxhold_ms[0x10] = '\0';
    str.qcom_qos_maxhold_ms[0x11] = '\0';
    str.qcom_qos_maxhold_ms[0x12] = '\0';
    str.qcom_qos_maxhold_ms[0x13] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x18] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x19] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1a] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1b] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1c] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1d] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1e] = '\0';
    str.Received_incorrect_msg_feature__d_n[0x1f] = '\0';
    *0x8000c08 = 0;
    *0x8000c10 = 0;
    *0x8000c18 = 0;
    *0x8000c20 = 0;
    _printk(0x8000556);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    uVar4 = __stack_chk_fail();
    //[22] -rw- section size 8 named .init.data
    bVar1 = ExclusiveMonitorPass(extraout_x1,0x10);
    if (bVar1) {
        *extraout_x1 = uVar4;
        ExclusiveMonitorsStatus();
    }
    //WARNING: Does not return
    pcVar2 = UndefinedInstructionException(0,0x8004e2c);
    (*pcVar2)();
}

