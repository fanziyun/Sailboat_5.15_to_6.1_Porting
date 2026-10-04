// decompiled from stm_core by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 1208) =====

//WARNING: Switch with 1 destination removed at 0x08003674

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xeeff0ad281f3bef) {
        if (arg1 < -0x331e31690cdb63f6) {
            if (arg1 < -0x489f0de07435c616) {
                if (arg1 == -0x66d421a09845f9f8) {
                    pcVar2 = sym.channels_show.25f246b71479a414713e277bb1a0d464.cfi_jt;
code_r0x080013fc:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08003634;
                }
                if (arg1 == -0x62d625af9f4a9328) {
                    pcVar2 = sym.stm_data_write.cfi_jt;
                }
                else {
                    if (arg1 != -0x50c84e3366995ea6) goto code_r0x08003634;
                    pcVar2 = sym.stp_policy_node_drop.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt;
                }
            }
            else if (arg1 == -0x489f0de07435c616) {
                pcVar2 = sym.to_pdrv_policy_node.cfi_jt;
            }
            else {
                if (arg1 == -0x456f1acda78e3a69) {
                    pcVar2 = sym.device_match_name.cfi_jt;
                    goto code_r0x08001460;
                }
                if (arg1 != -0x3d6913c1b568d5f7) goto code_r0x08003634;
                pcVar2 = sym.stm_source_write.cfi_jt;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x331e31690cdb63f6) {
                pcVar2 = sym.stm_unregister_device.cfi_jt;
            }
            else if (arg1 == -0x272283e66c8b1e6a) {
                pcVar2 = sym.stm_register_protocol.cfi_jt;
            }
            else {
                if (arg1 != -0x199c548b0a471712) goto code_r0x08003634;
                pcVar2 = sym.stm_register_device.cfi_jt;
            }
        }
        else {
            if (arg1 < 0x2b3a43e29242445) {
                if (arg1 == -0x8dc801903aca538) {
                    pcVar2 = sym.stm_char_open.25f246b71479a414713e277bb1a0d464.cfi_jt;
                }
                else {
                    if (arg1 != -0x890743871a4a53) goto code_r0x08003634;
                    pcVar2 = sym.compat_ptr_ioctl.cfi_jt;
                }
                goto code_r0x08001460;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0xe0f734ddacf64dd) goto code_r0x08003634;
                pcVar2 = sym.stm_unregister_protocol.cfi_jt;
            }
        }
    }
    else {
        if (0x3f90dd296aa0fb2c < arg1) {
            if (arg1 < 0x63cbeba280ab7603) {
                if (arg1 == 0x3f90dd296aa0fb2d) {
                    pcVar2 = sym.stp_policy_make.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt;
                }
                else if (arg1 == 0x5b83a3fd302a5421) {
                    pcVar2 = sym.stm_source_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt;
                }
                else {
                    if (arg1 != 0x6322b72e887e81ab) goto code_r0x08003634;
                    pcVar2 = sym.stp_policy_release.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt;
                }
            }
            else {
                if (0x7c9e801a8a04592a < arg1) {
                    if (arg1 == 0x7c9e801a8a04592b) {
                        pcVar2 = sym.stm_source_register_device.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003634;
                        pcVar2 = sym.cleanup_module.cfi_jt;
                    }
                    goto code_r0x080014a8;
                }
                if (arg1 == 0x63cbeba280ab7603) {
                    pcVar2 = sym.stp_policy_node_masters_store.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt;
                }
                else {
                    if (arg1 != 0x694f814fc4ef8dbe) goto code_r0x08003634;
                    pcVar2 = sym.stm_mmap_close.25f246b71479a414713e277bb1a0d464.cfi_jt;
                }
            }
code_r0x08001460:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08003634;
        }
        if (arg1 < 0x321969b888d4949e) {
            if (arg1 == 0xeeff0ad281f3bef) {
                pcVar2 = sym.stp_policy_device_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt;
                goto code_r0x080013fc;
            }
            if (arg1 == 0x1d7ed092cb04d3f1) {
                pcVar2 = sym.stm_char_write.25f246b71479a414713e277bb1a0d464.cfi_jt;
            }
            else {
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x08003634;
                pcVar2 = sym.stm_source_link_store.25f246b71479a414713e277bb1a0d464.cfi_jt;
            }
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.no_llseek.cfi_jt;
        }
        else if (arg1 == 0x379d36f049eb9a81) {
            pcVar2 = sym.stm_char_mmap.25f246b71479a414713e277bb1a0d464.cfi_jt;
        }
        else {
            if (arg1 != 0x3a522a0eaaf96cff) goto code_r0x08003634;
            pcVar2 = sym.__typeid__ZTSFvP15stm_source_dataE_global_addr;
        }
    }
code_r0x080014a8:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003634:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003688);
    (*pcVar1)();
}


// ===== sym.stp_policy_node_drop.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x080014c0 (size 8) =====

void sym.stp_policy_node_drop.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    config_item_put(param_2);
    return;
}


// ===== sym.stm_register_device.cfi_jt @ 0x080014c8 (size 8) =====

int sym.stm_register_device.cfi_jt(ulong param_1,ulong *param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        iVar2 = -0x205;
    }
    else if ((param_2[5] == 0) || (*(param_2 + 3) == 0)) {
        iVar2 = -0x16;
    }
    else {
        uVar1 = (*(param_2 + 0x14) - *(param_2 + 2)) + 1;
        iVar3 = vzalloc(uVar1 * 8 + 0x440);
        if (iVar3 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar2 = __register_chrdev(0,0,0x100,*param_2,obj.stm_fops);
            *(iVar3 + 0x3d0) = iVar2;
            if (iVar2 < 0) {
                iVar2 = -0xc;
            }
            else {
                device_initialize(iVar3);
                *(iVar3 + 800) = obj.stm_core_up;
                *(iVar3 + 0x60) = param_1;
                *(iVar3 + 0x300) = *(iVar3 + 0x3d0) << 0x14;
                *(iVar3 + 0x330) = sym.stm_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt;
                __mutex_init(iVar3 + 0x3e0,"&stm->link_mutex",obj.stm_register_device.__key);
                *(iVar3 + 0x410) = 0;
                *(iVar3 + 0x418) = iVar3 + 0x418;
                *(iVar3 + 0x420) = iVar3 + 0x418;
                *(iVar3 + 0x438) = 0;
                __mutex_init(iVar3 + 0x3a0,"&stm->policy_mutex",obj.stm_register_device.__key);
                *(iVar3 + 0x3d4) = uVar1;
                *(iVar3 + 0x390) = param_3;
                *(iVar3 + 0x3d8) = param_2;
                param_2[1] = iVar3;
                iVar2 = kobject_set_name(iVar3,0x80008ca,*param_2);
                if (iVar2 == 0) {
                    iVar2 = device_add(iVar3);
                    if (iVar2 == 0) {
                        pm_runtime_no_callbacks(iVar3);
                        __pm_runtime_use_autosuspend(iVar3,1);
                        pm_runtime_set_autosuspend_delay(iVar3,2000);
                        __pm_runtime_set_status(iVar3,2);
                        pm_runtime_enable(iVar3);
                        return 0;
                    }
                }
                __unregister_chrdev(*(iVar3 + 0x3d0),0,0x100,*param_2);
                put_device(iVar3);
            }
            vfree(iVar3);
        }
    }
    return iVar2;
}


// ===== sym.init_module.cfi_jt @ 0x080014d0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __class_register(obj.stm_core_up,obj.stm_source_register_device.__key);
    if (iVar1 == 0) {
        iVar1 = __class_register(obj.stm_source_class,obj.stm_source_register_device.__key);
        if (iVar1 == 0) {
            iVar1 = sym.stp_configfs_init();
            if (iVar1 == 0) {
                init_srcu_struct(obj.stm_register_device.__key);
                _obj.stm_pdrv_head = obj.stm_pdrv_head;
                *0x8000350 = obj.stm_pdrv_head;
                __mutex_init(obj.stm_pdrv_mutex,"&stm_pdrv_mutex",obj.stm_source_register_device.__key);
                __request_module(0,"stm_p_basic");
                _segment.ehdr = _segment.ehdr + 1;
                return 0;
            }
            class_unregister(obj.stm_source_class);
        }
        class_unregister(obj.stm_core_up);
    }
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080014d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cleanup_srcu_struct(obj.stm_register_device.__key);
    class_unregister(obj.stm_source_class);
    class_unregister(obj.stm_core_up);
    configfs_unregister_subsystem(obj.stp_policy_subsys.llvm.4863290554842843269);
    return;
}


// ===== sym.stm_source_register_device.cfi_jt @ 0x080014e0 (size 8) =====

int sym.stm_source_register_device.cfi_jt(ulong param_1,ulong *param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        iVar1 = -0x205;
    }
    else {
        iVar2 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x400);
        if (iVar2 == 0) {
            iVar1 = -0xc;
        }
        else {
            device_initialize();
            uVar3 = *param_2;
            *(iVar2 + 0x60) = param_1;
            *(iVar2 + 800) = obj.stm_source_class;
            *(iVar2 + 0x330) = sym.stm_source_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt;
            iVar1 = kobject_set_name(iVar2,0x80008ca,uVar3);
            if (iVar1 == 0) {
                pm_runtime_no_callbacks(iVar2);
                pm_runtime_forbid(iVar2);
                iVar1 = device_add(iVar2);
                if (iVar1 == 0) {
                    *(iVar2 + 1000) = 0;
                    *(iVar2 + 0x3c8) = 0;
                    __mutex_init(iVar2 + 0x398,"&src->link_mutex",obj.stm_source_register_device.__key);
                    *(iVar2 + 0x3d8) = iVar2 + 0x3d8;
                    *(iVar2 + 0x3e0) = iVar2 + 0x3d8;
                    *(iVar2 + 0x390) = param_2;
                    param_2[1] = iVar2;
                    return 0;
                }
            }
            put_device(iVar2);
        }
    }
    return iVar1;
}


// ===== sym.to_pdrv_policy_node.cfi_jt @ 0x080014e8 (size 8) =====

int64_t sym.to_pdrv_policy_node.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    
    iVar1 = 0;
    if (param_1 != 0) {
        iVar1 = param_1 + 0xa0;
    }
    return iVar1;
}


// ===== sym.__typeid__ZTSFvP15stm_source_dataE_global_addr @ 0x080014f0 (size 8) =====

void sym.__typeid__ZTSFvP15stm_source_dataE_global_addr(int64_t param_1)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 8);
    do {
        uVar1 = __srcu_read_lock(obj.stm_register_device.__key);
        arg2 = *(arg1 + 0x3d0);
        if (arg2 == 0) {
            __srcu_read_unlock(obj.stm_register_device.__key,uVar1);
            break;
        }
        mutex_lock(arg2 + 0x3e0);
        iVar2 = sym.__stm_source_link_drop(arg1,arg2);
        mutex_unlock(arg2 + 0x3e0);
        __srcu_read_unlock(obj.stm_register_device.__key,uVar1);
    } while (iVar2 == -0xb);
    device_unregister(arg1);
    return;
}


// ===== sym.stm_char_write.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x080014f8 (size 8) =====

int64_t sym.stm_char_write.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,int64_t param_2,uchar *param_3)

{
    uchar *arg3;
    uint32_t uVar1;
    uint16_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong **arg2;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t arg3_00;
    code *pcVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    uchar auVar14 [16];
    ulong uStack_d8;
    uint32_t uStack_cc;
    ulong uStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong *puStack_70;
    char *pcStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    arg2 = &puStack_70;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    piVar10 = *(param_1 + 0xd8);
    arg3 = 0xfff;
    if (0xffffffffffffeffe < param_3 + -0x1000) {
        arg3 = param_3;
    }
    iVar8 = *piVar10;
    if (*(piVar10 + 0x14) == 0) {
        puStack_70 = &uStack_58;
        uStack_58 = 0;
        uStack_50 = 0;
        uVar5 = sp_el0;
        uStack_60 = 0;
        pcStack_68 = "default";
        __get_task_comm(&uStack_58,0x10,uVar5);
        iVar3 = sym.stm_assign_first_policy(*piVar10,piVar10 + 1,&puStack_70,1);
        param_3 = arg2;
        if (iVar3 == 0) goto code_r0x080022f8;
        iVar9 = iVar3;
    }
    else {
code_r0x080022f8:
        arg2 = param_3;
        iVar4 = __kmalloc(arg3 + 1,0xcc0);
        if (iVar4 == 0) {
            iVar9 = -0xc;
        }
        else {
            if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar11 = SoftwareBreakpoint(0x800,0x8002428);
                (*pcVar11)();
            }
            __check_object_size(iVar4,arg3,0);
            arg2 = arg3;
            iVar3 = sym._copy_from_user(iVar4,param_2,arg3);
            if (iVar3 == 0) {
                __pm_runtime_resume(iVar8,4);
                if (*(iVar8 + 0x428) == 0) {
                    iVar9 = -0x13;
                }
                else {
                    arg2 = NULL;
                    iVar3 = (**(*(iVar8 + 0x428) + 0x10))(*(iVar8 + 0x3d8),piVar10 + 1,0,iVar4,arg3);
                    iVar9 = iVar3;
                }
                uVar5 = ktime_get_mono_fast_ns();
                *(iVar8 + 0x218) = uVar5;
                __pm_runtime_suspend(iVar8,0xd);
            }
            else {
                iVar9 = -0xe;
            }
            kfree(iVar4);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar9;
    }
    auVar13 = __stack_chk_fail();
    iVar3 = auVar13._8_4_;
    *extraout_x18 = sym.stm_char_ioctl;
    pcStack_a8 = sym.stm_char_ioctl;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    piVar10 = *(auVar13._0_8_ + 0xd8);
    uStack_d8 = 0;
    iVar8 = *(*piVar10 + 0x3d8);
    puStack_b0 = &stack0xffffffffffffffc0;
    if (iVar3 == -0x7fefdaff) {
code_r0x0800268c:
        uStack_c8 = CONCAT26(piVar10[2],CONCAT24(*(piVar10 + 0xc),0x10));
        uStack_c0 = *(piVar10 + 0x14) & 0xffff;
        iVar9 = sym._copy_to_user(arg2);
        iVar8 = 0;
        if (iVar9 != 0) {
            iVar8 = -0xe;
        }
    }
    else {
        if (iVar3 == 0x40082502) {
            iVar9 = sym._copy_from_user(&uStack_d8,arg2,8);
            if (iVar9 != 0) {
                iVar8 = -0xe;
                goto code_r0x080026cc;
            }
            pcVar11 = *(iVar8 + 0x48);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x69a07daa9186a39e,pcVar11,0x8000760);
                iVar3 = (*pcVar11)(iVar8,*(piVar10 + 0xc),piVar10[2],*(piVar10 + 0x14),uStack_d8);
                iVar8 = iVar3;
                goto code_r0x080026cc;
            }
        }
        else if (iVar3 == -0x3fefdb00) {
            uStack_cc = 0;
            iVar8 = *piVar10;
            uStack_c0 = 0;
            if (*(piVar10 + 0x14) != 0) {
                iVar8 = -0x10;
                goto code_r0x080026cc;
            }
            iVar9 = sym._copy_from_user(&uStack_cc,arg2,4);
            if (iVar9 != 0) {
                iVar8 = -0xe;
                goto code_r0x080026cc;
            }
            if (uStack_cc - 0x1010 < 0xfffff000) {
                iVar8 = -0x16;
                goto code_r0x080026cc;
            }
            iVar9 = __kmalloc(uStack_cc + 1,0xdc0);
            if (iVar9 == 0) {
                iVar8 = -0xc;
                goto code_r0x080026cc;
            }
            arg3_00 = uStack_cc;
            if (uStack_cc < 0) {
    //WARNING: Does not return
                pcVar11 = SoftwareBreakpoint(0x800,0x8002708);
                (*pcVar11)();
            }
            __check_object_size(iVar9,arg3_00,0);
            iVar4 = sym._copy_from_user(iVar9,arg2,arg3_00);
            if (iVar4 == 0) {
                if ((*(iVar9 + 10) == 0) && (*(iVar9 + 0xc) == 0)) {
                    uVar1 = *(*(iVar8 + 0x3d8) + 0x1c);
                    if (uVar1 == 0) {
                        uVar7 = 1;
                    }
                    else {
                        uVar7 = 0;
                        if (uVar1 != 0) {
                            uVar7 = 0x1000 / uVar1;
                        }
                    }
                    uVar2 = *(iVar9 + 8);
                    iVar3 = -0x16;
                    if ((uVar2 != 0) && (uVar2 <= uVar7)) {
                        uStack_c8 = iVar9 + 0x10;
                        iVar3 = sym.stm_assign_first_policy(*piVar10,piVar10 + 1,&uStack_c8,uVar2);
                        if (iVar3 == 0) {
                            pcVar11 = *(*(iVar8 + 0x3d8) + 0x38);
                            if (pcVar11 != NULL) {
                                __cfi_slowpath_diag(0x8cf312f378a18b3,pcVar11,0x8000780);
                                iVar3 = (*pcVar11)(*(iVar8 + 0x3d8),*(piVar10 + 0xc),piVar10[2]);
                                if (iVar3 != 0) {
                                    sym.stm_output_free(*piVar10,piVar10 + 1);
                                    goto code_r0x080025d0;
                                }
                            }
                            kfree(iVar9);
                            goto code_r0x0800268c;
                        }
                    }
                }
                else {
                    iVar3 = -0x16;
                }
            }
            else {
                iVar3 = -0xe;
            }
code_r0x080025d0:
            kfree(iVar9);
            iVar8 = iVar3;
            goto code_r0x080026cc;
        }
        iVar8 = -0x19;
    }
code_r0x080026cc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return iVar8;
    }
    auVar14 = __stack_chk_fail(iVar8);
    piVar10 = auVar14._8_8_;
    *extraout_x18_00 = sym.stm_char_mmap;
    piVar12 = *(auVar14._0_8_ + 0xd8);
    iVar8 = *piVar12;
    pcVar11 = *(*(iVar8 + 0x3d8) + 0x30);
    if (pcVar11 == NULL) {
        iVar8 = 0xffffffa1;
    }
    else {
        if ((piVar10[0x13] == 0) &&
           (iVar9 = *piVar10, iVar4 = piVar10[1], iVar4 - iVar9 == *(*(iVar8 + 0x3d8) + 0x1c) * *(piVar12 + 0x14))) {
            __cfi_slowpath_diag(0x8763a4ccedc09ec2,pcVar11,0x80007c0);
            iVar6 = (*pcVar11)(*(iVar8 + 0x3d8),*(piVar12 + 0xc),piVar12[2],*(piVar12 + 0x14));
            if (iVar6 != 0) {
                __pm_runtime_resume(iVar8,4);
                piVar10[9] = piVar10[9] & 0xffffffffffffffefU | 0x6000000000000c;
                piVar10[10] = piVar10[10] | 0x4044000;
                piVar10[0x12] = reloc.stm_mmap_open.25f246b71479a414713e277bb1a0d464.cfi_jt;
                vm_iomap_memory(piVar10,iVar6,iVar4 - iVar9);
                return 0;
            }
        }
        iVar8 = 0xffffffea;
    }
    return iVar8;
}


// ===== sym.stp_policy_device_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x08001500 (size 8) =====

int64_t sym.stp_policy_device_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (*(param_1 + 0x88) == 0)) {
        pcVar2 = "<none>";
    }
    else {
        pcVar2 = **(*(param_1 + 0x88) + 0x3d8);
    }
    iVar1 = sprintf(param_2,0x8000aba,pcVar2);
    return iVar1;
}


// ===== sym.stp_policy_protocol_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x08001508 (size 8) =====

int64_t sym.stp_policy_protocol_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (*(param_1 + 0x88) == 0)) {
        pcVar2 = "<none>";
    }
    else {
        pcVar2 = *(*(*(param_1 + 0x88) + 0x428) + 8);
    }
    iVar1 = sprintf(param_2,0x8000aba,pcVar2);
    return iVar1;
}


// ===== sym.stp_policy_node_masters_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x08001510 (size 8) =====

int64_t sym.stp_policy_node_masters_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_2,"%u %u\n",*(param_1 + 0x90),*(param_1 + 0x94));
    return iVar1;
}


// ===== sym.stp_policy_node_channels_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x08001518 (size 8) =====

int64_t sym.stp_policy_node_channels_show.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(int64_t param_1,ulong param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_2,"%u %u\n",*(param_1 + 0x98),*(param_1 + 0x9c));
    return iVar1;
}


// ===== sym.stm_data_write.cfi_jt @ 0x08001520 (size 8) =====

uint64_t sym.stm_data_write.cfi_jt
                   (int64_t param_1,uint param_2,uint param_3,uint64_t param_4,int64_t param_5,uint64_t param_6)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_6 == 0) {
        uVar4 = 0;
    }
    else {
        uVar4 = 0;
        uVar3 = 2;
        if ((param_4 & 1) == 0) {
            uVar3 = 0;
        }
        do {
            uVar1 = param_6 - uVar4;
            if (7 < uVar1) {
                uVar1 = 8;
            }
            uVar2 = (**(param_1 + 0x28))(param_1,param_2,param_3,0,uVar3,uVar1,param_5 + uVar4);
            if (uVar2 < 1) {
                if (uVar2 == 0) {
                    return uVar4;
                }
                return uVar2;
            }
            uVar3 = 0;
            uVar4 = uVar2 + uVar4;
        } while (uVar4 < param_6);
    }
    return uVar4;
}


// ===== sym.stm_char_mmap.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001528 (size 8) =====

ulong sym.stm_char_mmap.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    code *pcVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar7 = *(param_1 + 0xd8);
    iVar5 = *piVar7;
    pcVar6 = *(*(iVar5 + 0x3d8) + 0x30);
    if (pcVar6 == NULL) {
        uVar4 = 0xffffffa1;
    }
    else {
        if ((param_2[0x13] == 0) &&
           (iVar1 = *param_2, iVar2 = param_2[1], iVar2 - iVar1 == *(*(iVar5 + 0x3d8) + 0x1c) * *(piVar7 + 0x14))) {
            __cfi_slowpath_diag(0x8763a4ccedc09ec2,pcVar6,0x80007c0);
            iVar3 = (*pcVar6)(*(iVar5 + 0x3d8),*(piVar7 + 0xc),piVar7[2],*(piVar7 + 0x14));
            if (iVar3 != 0) {
                __pm_runtime_resume(iVar5,4);
                param_2[9] = param_2[9] & 0xffffffffffffffefU | 0x6000000000000c;
                param_2[10] = param_2[10] | 0x4044000;
                param_2[0x12] = reloc.stm_mmap_open.25f246b71479a414713e277bb1a0d464.cfi_jt;
                vm_iomap_memory(param_2,iVar3,iVar2 - iVar1);
                return 0;
            }
        }
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.stm_register_protocol.cfi_jt @ 0x08001530 (size 8) =====

uint sym.stm_register_protocol.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    char *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.stm_pdrv_mutex);
    pcVar8 = *(param_1 + 8);
    pcVar1 = _obj.stm_pdrv_head;
    if ((pcVar8 == NULL) || (*pcVar8 == '\0')) {
        pcVar8 = "p_basic";
    }
    for (; pcVar1 != obj.stm_pdrv_head; pcVar1 = *pcVar1) {
        iVar3 = strcmp(pcVar8,*(*(pcVar1 + 0x10) + 8));
        if (iVar3 == 0) {
            if (pcVar1 != NULL) {
                puVar4 = NULL;
                uVar7 = 0xffffffef;
                goto code_r0x080017c0;
            }
            break;
        }
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x20);
    if (puVar4 == NULL) {
code_r0x080017ac:
        uVar7 = 0xfffffff4;
code_r0x080017c0:
        mutex_unlock(obj.stm_pdrv_mutex);
        kfree(puVar4);
    }
    else {
        if (*(param_1 + 0x38) != 0) {
            iVar5 = sym.get_policy_node_type(*(param_1 + 0x38));
            puVar4[3] = iVar5;
            if (iVar5 == 0) goto code_r0x080017ac;
        }
        puVar2 = *0x8000350;
        uVar6 = __list_add_valid(puVar4,*0x8000350,obj.stm_pdrv_head);
        if ((uVar6 & 1) != 0) {
            *0x8000350 = puVar4;
            *puVar4 = obj.stm_pdrv_head;
            puVar4[1] = puVar2;
            *puVar2 = puVar4;
        }
        puVar4[2] = param_1;
        mutex_unlock(obj.stm_pdrv_mutex);
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.stm_unregister_device.cfi_jt @ 0x08001538 (size 8) =====

void sym.stm_unregister_device.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong *in_x18;
    int64_t arg2;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = param_1[1];
    __pm_runtime_use_autosuspend(arg2,0);
    __pm_runtime_disable(arg2,1);
    mutex_lock(arg2 + 0x3e0);
    piVar4 = *(arg2 + 0x418);
    while (arg2 + 0x418 != piVar4) {
        iVar5 = piVar4 + -0x7b;
        piVar4 = *piVar4;
        iVar3 = sym.__stm_source_link_drop(iVar5,arg2);
        if (iVar3 != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8001cec);
            (*pcVar2)();
        }
    }
    mutex_unlock(arg2 + 0x3e0);
    synchronize_srcu(obj.stm_register_device.__key);
    __unregister_chrdev(*(arg2 + 0x3d0),0,0x100,*param_1);
    mutex_lock(arg2 + 0x3a0);
    if (*(arg2 + 0x398) != 0) {
        sym.stp_policy_unbind(*(arg2 + 0x398));
    }
    mutex_unlock(arg2 + 0x3a0);
    iVar5 = *(arg2 + 0x3d8);
    uVar7 = *(iVar5 + 0x10);
    if (*(iVar5 + 0x14) < uVar7) {
code_r0x08001d48:
        device_unregister(arg2);
        param_1[1] = 0;
        return;
    }
    uVar6 = 0;
    do {
        iVar1 = arg2 + uVar6 * 8;
        if (*(iVar1 + 0x440) != 0) {
            *(iVar1 + 0x440) = 0;
            kfree();
            iVar5 = *(arg2 + 0x3d8);
        }
        do {
            uVar7 = uVar7 + 1;
            if (*(iVar5 + 0x14) < uVar7) goto code_r0x08001d48;
            uVar6 = uVar7 - *(iVar5 + 0x10);
        } while (uVar7 < *(iVar5 + 0x10));
    } while( true );
}


// ===== sym.stm_unregister_protocol.cfi_jt @ 0x08001540 (size 8) =====

void sym.stm_unregister_protocol.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.stm_pdrv_mutex);
    pcVar4 = obj.stm_pdrv_head;
    do {
        pcVar4 = *pcVar4;
        if (pcVar4 == obj.stm_pdrv_head) goto code_r0x08001884;
    } while (*(pcVar4 + 0x10) != param_1);
    uVar3 = __list_del_entry_valid(pcVar4);
    if ((uVar3 & 1) != 0) {
        iVar1 = *pcVar4;
        piVar2 = *(pcVar4 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *pcVar4 = 0xdead000000000100;
    *(pcVar4 + 8) = 0xdead000000000122;
    if (*(pcVar4 + 0x18) != 0) {
        kfree(*(*(pcVar4 + 0x18) + 0x18));
        kfree(*(pcVar4 + 0x18));
    }
    kfree(pcVar4);
code_r0x08001884:
    mutex_unlock(obj.stm_pdrv_mutex);
    return;
}


// ===== sym.stm_source_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001548 (size 8) =====

void sym.stm_source_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.stm_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001550 (size 8) =====

void sym.stm_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    vfree();
    return;
}


// ===== sym.channels_show.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001558 (size 8) =====

int64_t sym.channels_show.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x80008d5,*(*(param_1 + 0x3d8) + 0x18));
    return iVar1;
}


// ===== sym.masters_show.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001560 (size 8) =====

int64_t sym.masters_show.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,"%u %u\n",*(*(param_1 + 0x3d8) + 0x10),*(*(param_1 + 0x3d8) + 0x14));
    return iVar1;
}


// ===== sym.stm_source_link_show.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001568 (size 8) =====

int64_t sym.stm_source_link_show.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    int iVar2;
    char *pcVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = __srcu_read_lock(obj.stm_register_device.__key);
    puVar4 = *(param_1 + 0x3d0);
    if (puVar4 == NULL) {
        pcVar3 = "<none>";
    }
    else {
        pcVar3 = puVar4[0xe];
        if (pcVar3 == NULL) {
            pcVar3 = *puVar4;
        }
    }
    iVar2 = sprintf(param_3,0x8000aba,pcVar3);
    __srcu_read_unlock(obj.stm_register_device.__key,uVar1);
    return iVar2;
}


// ===== sym.hw_override_show.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001570 (size 8) =====

int64_t sym.hw_override_show.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,0x80008d5,*(*(param_1 + 0x3d8) + 0x20));
    return iVar1;
}


// ===== sym.stm_char_open.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001578 (size 8) =====

uint sym.stm_char_open.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = *(param_1 + 0x4c) >> 0x14;
    iVar3 = class_find_device(obj.stm_core_up,0,&uStack_3c,sym.major_match.25f246b71479a414713e277bb1a0d464.cfi_jt);
    if (iVar3 == 0) {
        uVar2 = 0xffffffed;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x20);
        if (piVar4 == NULL) {
            uVar2 = 0xfffffff4;
        }
        else {
            *(piVar4 + 1) = 0;
            *piVar4 = iVar3;
            uVar5 = try_module_get(*(iVar3 + 0x390));
            if ((uVar5 & 1) != 0) {
                *(param_2 + 0xd8) = piVar4;
                uVar2 = nonseekable_open(param_1,param_2);
                goto code_r0x08002904;
            }
            kfree(piVar4);
            uVar2 = 0xffffffed;
        }
        put_device(iVar3);
    }
code_r0x08002904:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.stm_char_release;
    piVar4 = *(extraout_x1 + 0xd8);
    iVar3 = *piVar4;
    pcVar6 = *(*(iVar3 + 0x3d8) + 0x40);
    if (pcVar6 != NULL) {
        __cfi_slowpath_diag(0xd68bfb8f1becf310,pcVar6,0x80007e0);
        (*pcVar6)(*(iVar3 + 0x3d8),*(piVar4 + 0xc),piVar4[2]);
    }
    sym.stm_output_free(iVar3,piVar4 + 1);
    module_put(*(iVar3 + 0x390));
    put_device(iVar3);
    kfree(piVar4);
    return 0;
}


// ===== sym.stm_char_release.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x08001580 (size 8) =====

ulong sym.stm_char_release.25f246b71479a414713e277bb1a0d464.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    int64_t *piVar1;
    int64_t arg1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_2 + 0xd8);
    arg1 = *piVar1;
    pcVar2 = *(*(arg1 + 0x3d8) + 0x40);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0xd68bfb8f1becf310,pcVar2,0x80007e0);
        (*pcVar2)(*(arg1 + 0x3d8),*(piVar1 + 0xc),piVar1[2]);
    }
    sym.stm_output_free(arg1,piVar1 + 1);
    module_put(*(arg1 + 0x390));
    put_device(arg1);
    kfree(piVar1);
    return 0;
}


// ===== sym.stp_policy_release.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x08001588 (size 8) =====

void sym.stp_policy_release.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x88) != 0) {
        iVar1 = *(param_1 + 0x88) + 0x3a0;
        mutex_lock(iVar1);
        arg1 = *(param_1 + 0x88);
        if (arg1 == 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8003d8c);
            (*pcVar2)();
        }
        *(arg1 + 0x398) = 0;
        *(param_1 + 0x88) = 0;
        module_put(**(arg1 + 0x428));
        *(arg1 + 0x428) = 0;
        sym.stm_put_device(arg1);
        mutex_unlock(iVar1);
        kfree(param_1);
    }
    return;
}


// ===== sym.stp_policy_node_release.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x08001590 (size 8) =====

void sym.stp_policy_node_release.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.stp_policy_node_masters_store.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x08001598 (size 8) =====

int64_t sym.stp_policy_node_masters_store.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    iVar1 = sscanf(param_2,"%u %u",&uStack_30 + 4,&uStack_30);
    if (iVar1 == 2) {
        mutex_lock(0x80005b0);
        iVar2 = *(*(param_1 + 0x88) + 0x88);
        if (iVar2 == 0) {
            param_3 = -0x13;
        }
        else if (((uStack_30 < uStack_30._4_4_) || (iVar2 = *(iVar2 + 0x3d8), uStack_30._4_4_ < *(iVar2 + 0x10))) ||
                (*(iVar2 + 0x14) < uStack_30)) {
            param_3 = -0x22;
        }
        else {
            *(param_1 + 0x90) = uStack_30._4_4_;
            *(param_1 + 0x94) = uStack_30;
        }
        mutex_unlock(0x80005b0);
    }
    else {
        param_3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.stp_policy_node_channels_show;
    iVar1 = sprintf(auVar3._8_8_,"%u %u\n",*(auVar3._0_8_ + 0x98),*(auVar3._0_8_ + 0x9c));
    return iVar1;
}


// ===== sym.stp_policy_node_channels_store.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x080015a0 (size 8) =====

ulong sym.stp_policy_node_channels_store.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    iVar1 = sscanf(param_2,"%u %u",&uStack_40 + 4,&uStack_40);
    if (iVar1 == 2) {
        mutex_lock(0x80005b0);
        iVar2 = *(*(param_1 + 0x88) + 0x88);
        if (iVar2 == 0) {
            uVar3 = 0xffffffffffffffed;
        }
        else {
            uVar3 = 0xffffffffffffffde;
            if (((-1 < uStack_40) && (-1 < uStack_40)) && (uStack_40._4_4_ <= uStack_40)) {
                if (uStack_40 < *(*(iVar2 + 0x3d8) + 0x18)) {
                    *(param_1 + 0x98) = uStack_40._4_4_;
                    *(param_1 + 0x9c) = uStack_40;
                    uVar3 = param_3;
                }
                else {
                    uVar3 = 0xffffffffffffffde;
                }
            }
        }
        mutex_unlock(0x80005b0);
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.stp_policy_node_release;
    uVar3 = kfree();
    return uVar3;
}


// ===== sym.stm_mmap_close.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x080015a8 (size 8) =====

void sym.stm_mmap_close.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = **(*(param_1 + 0xa0) + 0xd8);
    uVar1 = ktime_get_mono_fast_ns();
    *(iVar2 + 0x218) = uVar1;
    __pm_runtime_suspend(iVar2,0xd);
    return;
}


// ===== sym.stm_mmap_open.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x080015b0 (size 8) =====

void sym.stm_mmap_open.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pm_runtime_resume(**(*(param_1 + 0xa0) + 0xd8),5);
    return;
}


// ===== sym.compat_ptr_ioctl.cfi_jt @ 0x080015b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.compat_ptr_ioctl.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.stm_char_ioctl.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x080015c0 (size 8) =====

int64_t sym.stm_char_ioctl.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,int param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t arg3;
    code *pcVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_68;
    uint32_t uStack_5c;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    piVar10 = *(param_1 + 0xd8);
    uStack_68 = 0;
    iVar8 = *(*piVar10 + 0x3d8);
    if (param_2 == -0x7fefdaff) {
code_r0x0800268c:
        uStack_58 = CONCAT26(piVar10[2],CONCAT24(*(piVar10 + 0xc),0x10));
        uStack_50 = *(piVar10 + 0x14) & 0xffff;
        iVar4 = sym._copy_to_user(param_3);
        iVar8 = 0;
        if (iVar4 != 0) {
            iVar8 = -0xe;
        }
    }
    else {
        if (param_2 == 0x40082502) {
            iVar4 = sym._copy_from_user(&uStack_68,param_3,8);
            if (iVar4 != 0) {
                iVar8 = -0xe;
                goto code_r0x080026cc;
            }
            pcVar9 = *(iVar8 + 0x48);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0x69a07daa9186a39e,pcVar9,0x8000760);
                iVar3 = (*pcVar9)(iVar8,*(piVar10 + 0xc),piVar10[2],*(piVar10 + 0x14),uStack_68);
                iVar8 = iVar3;
                goto code_r0x080026cc;
            }
        }
        else if (param_2 == -0x3fefdb00) {
            uStack_5c = 0;
            iVar8 = *piVar10;
            uStack_50 = 0;
            if (*(piVar10 + 0x14) != 0) {
                iVar8 = -0x10;
                goto code_r0x080026cc;
            }
            iVar4 = sym._copy_from_user(&uStack_5c,param_3,4);
            if (iVar4 != 0) {
                iVar8 = -0xe;
                goto code_r0x080026cc;
            }
            if (uStack_5c - 0x1010 < 0xfffff000) {
                iVar8 = -0x16;
                goto code_r0x080026cc;
            }
            iVar4 = __kmalloc(uStack_5c + 1,0xdc0);
            if (iVar4 == 0) {
                iVar8 = -0xc;
                goto code_r0x080026cc;
            }
            arg3 = uStack_5c;
            if (uStack_5c < 0) {
    //WARNING: Does not return
                pcVar9 = SoftwareBreakpoint(0x800,0x8002708);
                (*pcVar9)();
            }
            __check_object_size(iVar4,arg3,0);
            iVar5 = sym._copy_from_user(iVar4,param_3,arg3);
            if (iVar5 == 0) {
                if ((*(iVar4 + 10) == 0) && (*(iVar4 + 0xc) == 0)) {
                    uVar1 = *(*(iVar8 + 0x3d8) + 0x1c);
                    if (uVar1 == 0) {
                        uVar7 = 1;
                    }
                    else {
                        uVar7 = 0;
                        if (uVar1 != 0) {
                            uVar7 = 0x1000 / uVar1;
                        }
                    }
                    uVar2 = *(iVar4 + 8);
                    iVar3 = -0x16;
                    if ((uVar2 != 0) && (uVar2 <= uVar7)) {
                        uStack_58 = iVar4 + 0x10;
                        iVar3 = sym.stm_assign_first_policy(*piVar10,piVar10 + 1,&uStack_58,uVar2);
                        if (iVar3 == 0) {
                            pcVar9 = *(*(iVar8 + 0x3d8) + 0x38);
                            if (pcVar9 != NULL) {
                                __cfi_slowpath_diag(0x8cf312f378a18b3,pcVar9,0x8000780);
                                iVar3 = (*pcVar9)(*(iVar8 + 0x3d8),*(piVar10 + 0xc),piVar10[2]);
                                if (iVar3 != 0) {
                                    sym.stm_output_free(*piVar10,piVar10 + 1);
                                    goto code_r0x080025d0;
                                }
                            }
                            kfree(iVar4);
                            goto code_r0x0800268c;
                        }
                    }
                }
                else {
                    iVar3 = -0x16;
                }
            }
            else {
                iVar3 = -0xe;
            }
code_r0x080025d0:
            kfree(iVar4);
            iVar8 = iVar3;
            goto code_r0x080026cc;
        }
        iVar8 = -0x19;
    }
code_r0x080026cc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return iVar8;
    }
    auVar12 = __stack_chk_fail(iVar8);
    piVar10 = auVar12._8_8_;
    *extraout_x18 = sym.stm_char_mmap;
    piVar11 = *(auVar12._0_8_ + 0xd8);
    iVar8 = *piVar11;
    pcVar9 = *(*(iVar8 + 0x3d8) + 0x30);
    if (pcVar9 == NULL) {
        iVar8 = 0xffffffa1;
    }
    else {
        if ((piVar10[0x13] == 0) &&
           (iVar4 = *piVar10, iVar5 = piVar10[1], iVar5 - iVar4 == *(*(iVar8 + 0x3d8) + 0x1c) * *(piVar11 + 0x14))) {
            __cfi_slowpath_diag(0x8763a4ccedc09ec2,pcVar9,0x80007c0);
            iVar6 = (*pcVar9)(*(iVar8 + 0x3d8),*(piVar11 + 0xc),piVar11[2],*(piVar11 + 0x14));
            if (iVar6 != 0) {
                __pm_runtime_resume(iVar8,4);
                piVar10[9] = piVar10[9] & 0xffffffffffffffefU | 0x6000000000000c;
                piVar10[10] = piVar10[10] | 0x4044000;
                piVar10[0x12] = reloc.stm_mmap_open.25f246b71479a414713e277bb1a0d464.cfi_jt;
                vm_iomap_memory(piVar10,iVar6,iVar5 - iVar4);
                return 0;
            }
        }
        iVar8 = 0xffffffea;
    }
    return iVar8;
}


// ===== sym.no_llseek.cfi_jt @ 0x080015c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.stm_source_write.cfi_jt @ 0x080015d0 (size 8) =====

uint sym.stm_source_write.cfi_jt(int64_t param_1,uint32_t param_2,ulong param_3,ulong param_4)

{
    uint uVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 8);
    if (*(iVar4 + 0x3f4) == 0) {
        uVar2 = 0xffffffed;
    }
    else if (param_2 < *(iVar4 + 0x3f4)) {
        uVar1 = __srcu_read_lock(obj.stm_register_device.__key);
        iVar3 = *(iVar4 + 0x3d0);
        if ((iVar3 == 0) || (*(iVar3 + 0x428) == 0)) {
            uVar2 = 0xffffffed;
        }
        else {
            uVar2 = (**(*(iVar3 + 0x428) + 0x10))(*(iVar3 + 0x3d8),iVar4 + 1000,param_2,param_3,param_4);
        }
        __srcu_read_unlock(obj.stm_register_device.__key,uVar1);
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.stm_source_link_store.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x080015d8 (size 8) =====

uchar * sym.stm_source_link_store.25f246b71479a414713e277bb1a0d464.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uchar *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    int64_t *piVar12;
    code *pcVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar1 = param_1 + 0x398;
    iStack_68 = *(iVar11 + 0x5e0);
    mutex_lock(iVar1);
    do {
        uVar6 = __srcu_read_lock(obj.stm_register_device.__key);
        iVar11 = *(param_1 + 0x3d0);
        if (iVar11 == 0) {
            __srcu_read_unlock(obj.stm_register_device.__key,uVar6);
            break;
        }
        mutex_lock(iVar11 + 0x3e0);
        iVar7 = sym.__stm_source_link_drop(param_1,iVar11);
        mutex_unlock(iVar11 + 0x3e0);
        __srcu_read_unlock(obj.stm_register_device.__key,uVar6);
    } while (iVar7 == -0xb);
    if ((_segment.ehdr != 0) &&
       (iVar11 = class_find_device(obj.stm_core_up,0,param_3,sym.device_match_name.cfi_jt), iVar11 != 0)) {
        uVar8 = try_module_get(*(iVar11 + 0x390));
        if ((uVar8 & 1) != 0) {
            __pm_runtime_resume(iVar11,5);
            iVar2 = iVar11 + 0x3e0;
            iStack_80 = *0x8000f18;
            uStack_78 = *0x8000f20;
            uStack_70 = *0x8000f28;
            mutex_lock(iVar2);
            iVar3 = iVar11 + 0x410;
            _raw_spin_lock(iVar3);
            iVar4 = param_1 + 0x3c8;
            _raw_spin_lock(iVar4);
            *(param_1 + 0x3d0) = iVar11;
            piVar12 = *(iVar11 + 0x420);
            iVar5 = param_1 + 0x3d8;
            uVar8 = __list_add_valid(iVar5,piVar12,iVar11 + 0x418);
            if ((uVar8 & 1) != 0) {
                *(iVar11 + 0x420) = iVar5;
                *(param_1 + 0x3d8) = iVar11 + 0x418;
                *(param_1 + 0x3e0) = piVar12;
                *piVar12 = iVar5;
            }
            _raw_spin_unlock(iVar4);
            _raw_spin_unlock(iVar3);
            mutex_unlock(iVar2);
            iVar9 = kstrdup(**(param_1 + 0x390),0xcc0);
            iStack_80 = iVar9;
            if (iVar9 == 0) {
                iVar7 = -0xc;
            }
            else {
                iVar7 = sym.stm_assign_first_policy(iVar11,param_1 + 1000,&iStack_80,*(*(param_1 + 0x390) + 0x14));
                kfree(iVar9);
                if (iVar7 == 0) {
                    pcVar13 = *(*(iVar11 + 0x3d8) + 0x38);
                    if (pcVar13 != NULL) {
                        __cfi_slowpath_diag(0x8cf312f378a18b3,pcVar13,0x8000840);
                        iVar7 = (*pcVar13)(*(iVar11 + 0x3d8),*(param_1 + 0x3ec),*(param_1 + 0x3f0));
                        if (iVar7 != 0) {
                            sym.stm_output_free(iVar11,param_1 + 1000);
                            goto code_r0x08003560;
                        }
                    }
                    pcVar13 = *(*(param_1 + 0x390) + 0x18);
                    if (pcVar13 != NULL) {
                        __cfi_slowpath_diag(0xb1fe78d0f352c252,pcVar13,0x8000860);
                        (*pcVar13)(*(param_1 + 0x390));
                    }
                    mutex_unlock(iVar1);
                    goto code_r0x0800351c;
                }
            }
code_r0x08003560:
            mutex_lock(iVar2);
            _raw_spin_lock(iVar3);
            _raw_spin_lock(iVar4);
            *(param_1 + 0x3d0) = 0;
            uVar8 = __list_del_entry_valid(iVar5);
            if ((uVar8 & 1) != 0) {
                piVar12 = *(param_1 + 0x3e0);
                iVar9 = *(param_1 + 0x3d8);
                *(iVar9 + 8) = piVar12;
                *piVar12 = iVar9;
            }
            *(param_1 + 0x3d8) = iVar5;
            *(param_1 + 0x3e0) = iVar5;
            _raw_spin_unlock(iVar4);
            _raw_spin_unlock(iVar3);
            mutex_unlock(iVar2);
            __pm_runtime_suspend(iVar11,0xd);
            module_put(*(iVar11 + 0x390));
            put_device(iVar11);
            mutex_unlock(iVar1);
            param_4 = iVar7;
            goto code_r0x0800351c;
        }
        put_device(iVar11);
    }
    mutex_unlock(iVar1);
    param_4 = 0xffffffffffffffea;
code_r0x0800351c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar14 = __stack_chk_fail();
        puVar10 = auVar14._0_8_;
        *extraout_x18 = 0x800362c;
        if (puVar10 != NULL) {
            switch(*puVar10) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar10,auVar14._8_8_,0);
                break;
            default:
                return puVar10;
            }
        }
    //WARNING: Does not return
        pcVar13 = SoftwareBreakpoint(0x5502,0x8003688);
        (*pcVar13)();
    }
    return param_4;
}


// ===== sym.device_match_name.cfi_jt @ 0x080015e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.device_match_name.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.major_match.25f246b71479a414713e277bb1a0d464.cfi_jt @ 0x080015e8 (size 8) =====

bool sym.major_match.25f246b71479a414713e277bb1a0d464.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    return *param_2 == *(param_1 + 0x300) >> 0x14;
}


// ===== sym.stp_policy_make.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x080015f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.stp_policy_make.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(ulong param_1,ulong param_2)

{
    int iVar1;
    int64_t iVar2;
    uchar *puVar3;
    uchar *puVar4;
    int64_t arg1;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    ulong *puStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puStack_48 = NULL;
    uStack_40 = 0;
    iVar2 = kasprintf(0xcc0,0x80008ca,param_2);
    if (iVar2 == 0) {
        uVar6 = 0xfffffffffffffff4;
        goto code_r0x08003f50;
    }
    puVar3 = strrchr(iVar2,0x2e);
    if (puVar3 == NULL) {
        kfree(iVar2);
        uVar6 = 0xffffffffffffffea;
        goto code_r0x08003f50;
    }
    *puVar3 = 0;
    puVar4 = strrchr(iVar2,0x3a);
    puVar3 = puVar4;
    if (puVar4 != NULL) {
        puVar3 = puVar4 + 1;
        *puVar4 = 0;
    }
    arg1 = sym.stm_find_device(iVar2);
    if (arg1 == 0) {
        kfree(iVar2);
        uVar6 = 0xffffffffffffffed;
        goto code_r0x08003f50;
    }
    iVar1 = sym.stm_lookup_protocol(puVar3,&puStack_48,&uStack_40);
    kfree(iVar2);
    if (iVar1 != 0) {
        sym.stm_put_device(arg1);
        uVar6 = 0xffffffffffffffed;
        goto code_r0x08003f50;
    }
    iVar2 = arg1 + 0x3a0;
    mutex_lock(iVar2);
    if (*(arg1 + 0x398) == 0) {
        iVar5 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x90);
        *(arg1 + 0x398) = iVar5;
        if (iVar5 == 0) {
            uVar6 = 0xfffffffffffffff4;
            goto code_r0x08003f34;
        }
        config_group_init_type_name(iVar5,param_2,obj.stp_policy_type);
        *(arg1 + 0x428) = puStack_48;
        *(arg1 + 0x430) = uStack_40;
        *(*(arg1 + 0x398) + 0x88) = arg1;
        uVar6 = *(arg1 + 0x398);
        mutex_unlock(iVar2);
        if (uVar6 < 0xfffffffffffff001) goto code_r0x08003f50;
    }
    else {
        uVar6 = 0xfffffffffffffff0;
code_r0x08003f34:
        mutex_unlock(iVar2);
    }
    module_put(*puStack_48);
    sym.stm_put_device(arg1);
code_r0x08003f50:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return uVar6;
}


// ===== sym.stp_policy_node_make.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt @ 0x080015f8 (size 8) =====

int64_t sym.stp_policy_node_make.b76c1e51e8b1ac901d50454bc0d49339.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x40) != obj.stp_policy_type) {
        param_1 = *(param_1 + 0x88);
    }
    if (*(param_1 + 0x88) == 0) {
        iVar1 = -0x13;
    }
    else {
        iVar3 = *(*(param_1 + 0x88) + 0x428);
        iVar1 = __kmalloc(*(iVar3 + 0x30) + 0xa0,0xdc0);
        if (iVar1 == 0) {
            iVar1 = -0xc;
        }
        else {
            pcVar4 = *(iVar3 + 0x18);
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar4,0x8000880);
                (*pcVar4)(iVar1 + 0xa0);
            }
            pcVar2 = *(*(param_1 + 0x88) + 0x430);
            pcVar4 = obj.stp_policy_node_type;
            if (pcVar2 != NULL) {
                pcVar4 = pcVar2;
            }
            config_group_init_type_name(iVar1,param_2,pcVar4);
            *(iVar1 + 0x88) = param_1;
            *(iVar1 + 0x90) = *(*(*(param_1 + 0x88) + 0x3d8) + 0x10);
            *(iVar1 + 0x94) = *(*(*(param_1 + 0x88) + 0x3d8) + 0x14);
            *(iVar1 + 0x98) = 0;
            *(iVar1 + 0x9c) = *(*(*(param_1 + 0x88) + 0x3d8) + 0x18) + -1;
        }
    }
    return iVar1;
}


// ===== sym.stm_find_device @ 0x08001600 (size 116) =====

int64_t sym.stm_find_device(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        iVar1 = class_find_device(obj.stm_core_up,0,arg1,sym.device_match_name.cfi_jt);
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = try_module_get(*(iVar1 + 0x390));
        if ((uVar2 & 1) != 0) {
            return iVar1;
        }
        put_device(iVar1);
    }
    return 0;
}


// ===== sym.stm_put_device @ 0x08001674 (size 60) =====

void sym.stm_put_device(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    module_put(*(arg1 + 0x390));
    put_device(arg1);
    return;
}


// ===== sym.stm_register_protocol @ 0x080016b0 (size 320) =====

uint sym.stm_register_protocol(int64_t arg1)

{
    code *pcVar1;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    char *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.stm_pdrv_mutex);
    pcVar8 = *(arg1 + 8);
    pcVar1 = _obj.stm_pdrv_head;
    if ((pcVar8 == NULL) || (*pcVar8 == '\0')) {
        pcVar8 = "p_basic";
    }
    for (; pcVar1 != obj.stm_pdrv_head; pcVar1 = *pcVar1) {
        iVar3 = strcmp(pcVar8,*(*(pcVar1 + 0x10) + 8));
        if (iVar3 == 0) {
            if (pcVar1 != NULL) {
                puVar4 = NULL;
                uVar7 = 0xffffffef;
                goto code_r0x080017c0;
            }
            break;
        }
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x20);
    if (puVar4 == NULL) {
code_r0x080017ac:
        uVar7 = 0xfffffff4;
code_r0x080017c0:
        mutex_unlock(obj.stm_pdrv_mutex);
        kfree(puVar4);
    }
    else {
        if (*(arg1 + 0x38) != 0) {
            iVar5 = sym.get_policy_node_type(*(arg1 + 0x38));
            puVar4[3] = iVar5;
            if (iVar5 == 0) goto code_r0x080017ac;
        }
        puVar2 = *0x8000350;
        uVar6 = __list_add_valid(puVar4,*0x8000350,obj.stm_pdrv_head);
        if ((uVar6 & 1) != 0) {
            *0x8000350 = puVar4;
            *puVar4 = obj.stm_pdrv_head;
            puVar4[1] = puVar2;
            *puVar2 = puVar4;
        }
        puVar4[2] = arg1;
        mutex_unlock(obj.stm_pdrv_mutex);
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.stm_unregister_protocol @ 0x080017f0 (size 180) =====

void sym.stm_unregister_protocol(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.stm_pdrv_mutex);
    pcVar4 = obj.stm_pdrv_head;
    do {
        pcVar4 = *pcVar4;
        if (pcVar4 == obj.stm_pdrv_head) goto code_r0x08001884;
    } while (*(pcVar4 + 0x10) != arg1);
    uVar3 = __list_del_entry_valid(pcVar4);
    if ((uVar3 & 1) != 0) {
        iVar1 = *pcVar4;
        piVar2 = *(pcVar4 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *pcVar4 = 0xdead000000000100;
    *(pcVar4 + 8) = 0xdead000000000122;
    if (*(pcVar4 + 0x18) != 0) {
        kfree(*(*(pcVar4 + 0x18) + 0x18));
        kfree(*(pcVar4 + 0x18));
    }
    kfree(pcVar4);
code_r0x08001884:
    mutex_unlock(obj.stm_pdrv_mutex);
    return;
}


// ===== sym.stm_put_protocol @ 0x080018a4 (size 40) =====

void sym.stm_put_protocol(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    module_put(*arg1);
    return;
}


// ===== sym.stm_lookup_protocol @ 0x080018cc (size 228) =====

uint sym.stm_lookup_protocol(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint uVar3;
    code *pcVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.stm_pdrv_mutex);
    if ((arg1 == 0) || (*arg1 == '\0')) {
        arg1 = "p_basic";
    }
    pcVar4 = _obj.stm_pdrv_head;
    if (_obj.stm_pdrv_head != obj.stm_pdrv_head) {
        do {
            puVar5 = *(pcVar4 + 0x10);
            iVar1 = strcmp(arg1,puVar5[1]);
            if (iVar1 == 0) {
                if (pcVar4 != NULL) {
                    if ((puVar5 == NULL) || (uVar2 = try_module_get(*puVar5), (uVar2 & 1) == 0)) {
                        uVar3 = 0;
                    }
                    else {
                        *arg2 = *(pcVar4 + 0x10);
                        uVar3 = 0;
                        *arg3 = *(pcVar4 + 0x18);
                    }
                    goto code_r0x0800197c;
                }
                break;
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.stm_pdrv_head);
    }
    uVar3 = 0xfffffffe;
code_r0x0800197c:
    mutex_unlock(obj.stm_pdrv_mutex);
    return uVar3;
}


// ===== sym.stm_data_write @ 0x080019b0 (size 196) =====

uint64_t sym.stm_data_write(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t in_x4;
    uint64_t in_x5;
    uint uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x5 == 0) {
        uVar4 = 0;
    }
    else {
        uVar4 = 0;
        uVar3 = 2;
        if ((arg4 & 1) == 0) {
            uVar3 = 0;
        }
        do {
            uVar1 = in_x5 - uVar4;
            if (7 < uVar1) {
                uVar1 = 8;
            }
            uVar2 = (**(arg1 + 0x28))(arg1,arg2 & 0xffffffff,arg3 & 0xffffffff,0,uVar3,uVar1,in_x4 + uVar4);
            if (uVar2 < 1) {
                if (uVar2 == 0) {
                    return uVar4;
                }
                return uVar2;
            }
            uVar3 = 0;
            uVar4 = uVar2 + uVar4;
        } while (uVar4 < in_x5);
    }
    return uVar4;
}


// ===== sym.stm_register_device @ 0x08001a74 (size 468) =====

int sym.stm_register_device(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        iVar2 = -0x205;
    }
    else if ((*(arg2 + 0x28) == 0) || (*(arg2 + 0x18) == 0)) {
        iVar2 = -0x16;
    }
    else {
        uVar1 = (*(arg2 + 0x14) - *(arg2 + 0x10)) + 1;
        iVar3 = vzalloc(uVar1 * 8 + 0x440);
        if (iVar3 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar2 = __register_chrdev(0,0,0x100,*arg2,obj.stm_fops);
            *(iVar3 + 0x3d0) = iVar2;
            if (iVar2 < 0) {
                iVar2 = -0xc;
            }
            else {
                device_initialize(iVar3);
                *(iVar3 + 800) = obj.stm_core_up;
                *(iVar3 + 0x60) = arg1;
                *(iVar3 + 0x300) = *(iVar3 + 0x3d0) << 0x14;
                *(iVar3 + 0x330) = sym.stm_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt;
                __mutex_init(iVar3 + 0x3e0,"&stm->link_mutex",obj.stm_register_device.__key);
                *(iVar3 + 0x410) = 0;
                *(iVar3 + 0x418) = iVar3 + 0x418;
                *(iVar3 + 0x420) = iVar3 + 0x418;
                *(iVar3 + 0x438) = 0;
                __mutex_init(iVar3 + 0x3a0,"&stm->policy_mutex",obj.stm_register_device.__key);
                *(iVar3 + 0x3d4) = uVar1;
                *(iVar3 + 0x390) = arg3;
                *(iVar3 + 0x3d8) = arg2;
                *(arg2 + 8) = iVar3;
                iVar2 = kobject_set_name(iVar3,0x80008ca,*arg2);
                if (iVar2 == 0) {
                    iVar2 = device_add(iVar3);
                    if (iVar2 == 0) {
                        pm_runtime_no_callbacks(iVar3);
                        __pm_runtime_use_autosuspend(iVar3,1);
                        pm_runtime_set_autosuspend_delay(iVar3,2000);
                        __pm_runtime_set_status(iVar3,2);
                        pm_runtime_enable(iVar3);
                        return 0;
                    }
                }
                __unregister_chrdev(*(iVar3 + 0x3d0),0,0x100,*arg2);
                put_device(iVar3);
            }
            vfree(iVar3);
        }
    }
    return iVar2;
}


// ===== sym.stm_device_release @ 0x08001c48 (size 36) =====

void sym.stm_device_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    vfree();
    return;
}


// ===== sym.stm_unregister_device @ 0x08001c6c (size 332) =====

void sym.stm_unregister_device(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong *in_x18;
    int64_t arg2;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(arg1 + 8);
    __pm_runtime_use_autosuspend(arg2,0);
    __pm_runtime_disable(arg2,1);
    mutex_lock(arg2 + 0x3e0);
    piVar4 = *(arg2 + 0x418);
    while (arg2 + 0x418 != piVar4) {
        iVar5 = piVar4 + -0x7b;
        piVar4 = *piVar4;
        iVar3 = sym.__stm_source_link_drop(iVar5,arg2);
        if (iVar3 != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8001cec);
            (*pcVar2)();
        }
    }
    mutex_unlock(arg2 + 0x3e0);
    synchronize_srcu(obj.stm_register_device.__key);
    __unregister_chrdev(*(arg2 + 0x3d0),0,0x100,*arg1);
    mutex_lock(arg2 + 0x3a0);
    if (*(arg2 + 0x398) != 0) {
        sym.stp_policy_unbind(*(arg2 + 0x398));
    }
    mutex_unlock(arg2 + 0x3a0);
    iVar5 = *(arg2 + 0x3d8);
    uVar7 = *(iVar5 + 0x10);
    if (*(iVar5 + 0x14) < uVar7) {
code_r0x08001d48:
        device_unregister(arg2);
        *(arg1 + 8) = 0;
        return;
    }
    uVar6 = 0;
    do {
        iVar1 = arg2 + uVar6 * 8;
        if (*(iVar1 + 0x440) != 0) {
            *(iVar1 + 0x440) = 0;
            kfree();
            iVar5 = *(arg2 + 0x3d8);
        }
        do {
            uVar7 = uVar7 + 1;
            if (*(iVar5 + 0x14) < uVar7) goto code_r0x08001d48;
            uVar6 = uVar7 - *(iVar5 + 0x10);
        } while (uVar7 < *(iVar5 + 0x10));
    } while( true );
}


// ===== sym.__stm_source_link_drop @ 0x08001db8 (size 368) =====

uint sym.__stm_source_link_drop(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong *in_x18;
    code *pcVar6;
    uint uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg2 + 0x410);
    _raw_spin_lock(arg1 + 0x3c8);
    iVar8 = *(arg1 + 0x3d0);
    if (iVar8 == arg2) {
        sym.stm_output_free(arg2,arg1 + 1000);
        iVar1 = arg1 + 0x3d8;
        uVar2 = __list_del_entry_valid(iVar1);
        if ((uVar2 & 1) != 0) {
            piVar4 = *(arg1 + 0x3e0);
            iVar5 = *(arg1 + 0x3d8);
            *(iVar5 + 8) = piVar4;
            *piVar4 = iVar5;
        }
        *(arg1 + 0x3d8) = iVar1;
        *(arg1 + 0x3e0) = iVar1;
        uVar3 = ktime_get_mono_fast_ns();
        *(arg2 + 0x218) = uVar3;
        __pm_runtime_suspend(arg2,0xd);
        module_put(*(arg2 + 0x390));
        put_device(arg2);
        uVar7 = 0;
        *(arg1 + 0x3d0) = 0;
    }
    else {
        uVar7 = 0xfffffff5;
    }
    _raw_spin_unlock(arg1 + 0x3c8);
    _raw_spin_unlock(arg2 + 0x410);
    if (iVar8 == arg2) {
        iVar8 = *(arg1 + 0x390);
        pcVar6 = *(iVar8 + 0x20);
        if (pcVar6 != NULL) {
            if (pcVar6 != sym.__typeid__ZTSFvP15stm_source_dataE_global_addr) {
                __cfi_slowpath_diag(0x3a522a0eaaf96cff,pcVar6,0x8000800);
                iVar8 = *(arg1 + 0x390);
            }
            (*pcVar6)(iVar8);
        }
        pcVar6 = *(*(arg2 + 0x3d8) + 0x40);
        if (pcVar6 != NULL) {
            __cfi_slowpath_diag(0xd68bfb8f1becf310,pcVar6,0x8000820);
            (*pcVar6)(*(arg2 + 0x3d8),*(arg1 + 0x3ec),*(arg1 + 0x3f0));
        }
    }
    return uVar7;
}


// ===== sym.stm_source_register_device @ 0x08001f2c (size 272) =====

int sym.stm_source_register_device(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        iVar1 = -0x205;
    }
    else {
        iVar2 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x400);
        if (iVar2 == 0) {
            iVar1 = -0xc;
        }
        else {
            device_initialize();
            uVar3 = *arg2;
            *(iVar2 + 0x60) = arg1;
            *(iVar2 + 800) = obj.stm_source_class;
            *(iVar2 + 0x330) = sym.stm_source_device_release.25f246b71479a414713e277bb1a0d464.cfi_jt;
            iVar1 = kobject_set_name(iVar2,0x80008ca,uVar3);
            if (iVar1 == 0) {
                pm_runtime_no_callbacks(iVar2);
                pm_runtime_forbid(iVar2);
                iVar1 = device_add(iVar2);
                if (iVar1 == 0) {
                    *(iVar2 + 1000) = 0;
                    *(iVar2 + 0x3c8) = 0;
                    __mutex_init(iVar2 + 0x398,"&src->link_mutex",obj.stm_source_register_device.__key);
                    *(iVar2 + 0x3d8) = iVar2 + 0x3d8;
                    *(iVar2 + 0x3e0) = iVar2 + 0x3d8;
                    *(iVar2 + 0x390) = arg2;
                    *(arg2 + 8) = iVar2;
                    return 0;
                }
            }
            put_device(iVar2);
        }
    }
    return iVar1;
}


// ===== sym.stm_source_device_release @ 0x0800203c (size 36) =====

void sym.stm_source_device_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.stm_source_unregister_device @ 0x08002060 (size 176) =====

void sym.stm_source_unregister_device(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 8);
    do {
        uVar1 = __srcu_read_lock(obj.stm_register_device.__key);
        arg2 = *(arg1_00 + 0x3d0);
        if (arg2 == 0) {
            __srcu_read_unlock(obj.stm_register_device.__key,uVar1);
            break;
        }
        mutex_lock(arg2 + 0x3e0);
        iVar2 = sym.__stm_source_link_drop(arg1_00,arg2);
        mutex_unlock(arg2 + 0x3e0);
        __srcu_read_unlock(obj.stm_register_device.__key,uVar1);
    } while (iVar2 == -0xb);
    device_unregister(arg1_00);
    return;
}


// ===== sym.stm_source_write @ 0x08002114 (size 200) =====

uint sym.stm_source_write(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 8);
    if (*(iVar4 + 0x3f4) == 0) {
        uVar2 = 0xffffffed;
    }
    else if (arg2 < *(iVar4 + 0x3f4)) {
        uVar1 = __srcu_read_lock(obj.stm_register_device.__key);
        iVar3 = *(iVar4 + 0x3d0);
        if ((iVar3 == 0) || (*(iVar3 + 0x428) == 0)) {
            uVar2 = 0xffffffed;
        }
        else {
            uVar2 = (**(*(iVar3 + 0x428) + 0x10))(*(iVar3 + 0x3d8),iVar4 + 1000,arg2,arg3,arg4);
        }
        __srcu_read_unlock(obj.stm_register_device.__key,uVar1);
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.masters_show @ 0x080021e0 (size 64) =====

int64_t sym.masters_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,"%u %u\n",*(*(arg1 + 0x3d8) + 0x10),*(*(arg1 + 0x3d8) + 0x14));
    return iVar1;
}


// ===== sym.channels_show @ 0x08002220 (size 64) =====

int64_t sym.channels_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x80008d5,*(*(arg1 + 0x3d8) + 0x18));
    return iVar1;
}


// ===== sym.hw_override_show @ 0x08002260 (size 64) =====

int64_t sym.hw_override_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,0x80008d5,*(*(arg1 + 0x3d8) + 0x20));
    return iVar1;
}


// ===== sym.stm_char_write @ 0x080022a0 (size 400) =====

int64_t sym.stm_char_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *arg3_00;
    uint32_t uVar1;
    uint16_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong **arg2_00;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t arg3_01;
    code *pcVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    uchar auVar14 [16];
    ulong uStack_d8;
    uint32_t uStack_cc;
    ulong uStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong *puStack_70;
    char *pcStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    arg2_00 = &puStack_70;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    piVar10 = *(arg1 + 0xd8);
    arg3_00 = 0xfff;
    if (0xffffffffffffeffe < arg3 - 0x1000U) {
        arg3_00 = arg3;
    }
    iVar8 = *piVar10;
    if (*(piVar10 + 0x14) == 0) {
        puStack_70 = &uStack_58;
        uStack_58 = 0;
        uStack_50 = 0;
        uVar5 = sp_el0;
        uStack_60 = 0;
        pcStack_68 = "default";
        __get_task_comm(&uStack_58,0x10,uVar5);
        iVar3 = sym.stm_assign_first_policy(*piVar10,piVar10 + 1,&puStack_70,1);
        arg3 = arg2_00;
        if (iVar3 == 0) goto code_r0x080022f8;
        iVar9 = iVar3;
    }
    else {
code_r0x080022f8:
        arg2_00 = arg3;
        iVar4 = __kmalloc(arg3_00 + 1,0xcc0);
        if (iVar4 == 0) {
            iVar9 = -0xc;
        }
        else {
            if (arg3_00 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar11 = SoftwareBreakpoint(0x800,0x8002428);
                (*pcVar11)();
            }
            __check_object_size(iVar4,arg3_00,0);
            arg2_00 = arg3_00;
            iVar3 = sym._copy_from_user(iVar4,arg2,arg3_00);
            if (iVar3 == 0) {
                __pm_runtime_resume(iVar8,4);
                if (*(iVar8 + 0x428) == 0) {
                    iVar9 = -0x13;
                }
                else {
                    arg2_00 = NULL;
                    iVar3 = (**(*(iVar8 + 0x428) + 0x10))(*(iVar8 + 0x3d8),piVar10 + 1,0,iVar4,arg3_00);
                    iVar9 = iVar3;
                }
                uVar5 = ktime_get_mono_fast_ns();
                *(iVar8 + 0x218) = uVar5;
                __pm_runtime_suspend(iVar8,0xd);
            }
            else {
                iVar9 = -0xe;
            }
            kfree(iVar4);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return iVar9;
    }
    auVar13 = __stack_chk_fail();
    iVar3 = auVar13._8_4_;
    *extraout_x18 = sym.stm_char_ioctl;
    pcStack_a8 = sym.stm_char_ioctl;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    piVar10 = *(auVar13._0_8_ + 0xd8);
    uStack_d8 = 0;
    iVar8 = *(*piVar10 + 0x3d8);
    puStack_b0 = &stack0xffffffffffffffc0;
    if (iVar3 == -0x7fefdaff) {
code_r0x0800268c:
        uStack_c8 = CONCAT26(piVar10[2],CONCAT24(*(piVar10 + 0xc),0x10));
        uStack_c0 = *(piVar10 + 0x14) & 0xffff;
        iVar9 = sym._copy_to_user(arg2_00);
        iVar8 = 0;
        if (iVar9 != 0) {
            iVar8 = -0xe;
        }
    }
    else {
        if (iVar3 == 0x40082502) {
            iVar9 = sym._copy_from_user(&uStack_d8,arg2_00,8);
            if (iVar9 != 0) {
                iVar8 = -0xe;
                goto code_r0x080026cc;
            }
            pcVar11 = *(iVar8 + 0x48);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x69a07daa9186a39e,pcVar11,0x8000760);
                iVar3 = (*pcVar11)(iVar8,*(piVar10 + 0xc),piVar10[2],*(piVar10 + 0x14),uStack_d8);
                iVar8 = iVar3;
                goto code_r0x080026cc;
            }
        }
        else if (iVar3 == -0x3fefdb00) {
            uStack_cc = 0;
            iVar8 = *piVar10;
            uStack_c0 = 0;
            if (*(piVar10 + 0x14) != 0) {
                iVar8 = -0x10;
                goto code_r0x080026cc;
            }
            iVar9 = sym._copy_from_user(&uStack_cc,arg2_00,4);
            if (iVar9 != 0) {
                iVar8 = -0xe;
                goto code_r0x080026cc;
            }
            if (uStack_cc - 0x1010 < 0xfffff000) {
                iVar8 = -0x16;
                goto code_r0x080026cc;
            }
            iVar9 = __kmalloc(uStack_cc + 1,0xdc0);
            if (iVar9 == 0) {
                iVar8 = -0xc;
                goto code_r0x080026cc;
            }
            arg3_01 = uStack_cc;
            if (uStack_cc < 0) {
    //WARNING: Does not return
                pcVar11 = SoftwareBreakpoint(0x800,0x8002708);
                (*pcVar11)();
            }
            __check_object_size(iVar9,arg3_01,0);
            iVar4 = sym._copy_from_user(iVar9,arg2_00,arg3_01);
            if (iVar4 == 0) {
                if ((*(iVar9 + 10) == 0) && (*(iVar9 + 0xc) == 0)) {
                    uVar1 = *(*(iVar8 + 0x3d8) + 0x1c);
                    if (uVar1 == 0) {
                        uVar7 = 1;
                    }
                    else {
                        uVar7 = 0;
                        if (uVar1 != 0) {
                            uVar7 = 0x1000 / uVar1;
                        }
                    }
                    uVar2 = *(iVar9 + 8);
                    iVar3 = -0x16;
                    if ((uVar2 != 0) && (uVar2 <= uVar7)) {
                        uStack_c8 = iVar9 + 0x10;
                        iVar3 = sym.stm_assign_first_policy(*piVar10,piVar10 + 1,&uStack_c8,uVar2);
                        if (iVar3 == 0) {
                            pcVar11 = *(*(iVar8 + 0x3d8) + 0x38);
                            if (pcVar11 != NULL) {
                                __cfi_slowpath_diag(0x8cf312f378a18b3,pcVar11,0x8000780);
                                iVar3 = (*pcVar11)(*(iVar8 + 0x3d8),*(piVar10 + 0xc),piVar10[2]);
                                if (iVar3 != 0) {
                                    sym.stm_output_free(*piVar10,piVar10 + 1);
                                    goto code_r0x080025d0;
                                }
                            }
                            kfree(iVar9);
                            goto code_r0x0800268c;
                        }
                    }
                }
                else {
                    iVar3 = -0x16;
                }
            }
            else {
                iVar3 = -0xe;
            }
code_r0x080025d0:
            kfree(iVar9);
            iVar8 = iVar3;
            goto code_r0x080026cc;
        }
        iVar8 = -0x19;
    }
code_r0x080026cc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return iVar8;
    }
    auVar14 = __stack_chk_fail(iVar8);
    piVar10 = auVar14._8_8_;
    *extraout_x18_00 = sym.stm_char_mmap;
    piVar12 = *(auVar14._0_8_ + 0xd8);
    iVar8 = *piVar12;
    pcVar11 = *(*(iVar8 + 0x3d8) + 0x30);
    if (pcVar11 == NULL) {
        iVar8 = 0xffffffa1;
    }
    else {
        if ((piVar10[0x13] == 0) &&
           (iVar9 = *piVar10, iVar4 = piVar10[1], iVar4 - iVar9 == *(*(iVar8 + 0x3d8) + 0x1c) * *(piVar12 + 0x14))) {
            __cfi_slowpath_diag(0x8763a4ccedc09ec2,pcVar11,0x80007c0);
            iVar6 = (*pcVar11)(*(iVar8 + 0x3d8),*(piVar12 + 0xc),piVar12[2],*(piVar12 + 0x14));
            if (iVar6 != 0) {
                __pm_runtime_resume(iVar8,4);
                piVar10[9] = piVar10[9] & 0xffffffffffffffefU | 0x6000000000000c;
                piVar10[10] = piVar10[10] | 0x4044000;
                piVar10[0x12] = reloc.stm_mmap_open.25f246b71479a414713e277bb1a0d464.cfi_jt;
                vm_iomap_memory(piVar10,iVar6,iVar4 - iVar9);
                return 0;
            }
        }
        iVar8 = 0xffffffea;
    }
    return iVar8;
}


// ===== sym.stm_char_ioctl @ 0x08002430 (size 736) =====

int64_t sym.stm_char_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t arg3_00;
    code *pcVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_68;
    uint32_t uStack_5c;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    piVar10 = *(arg1 + 0xd8);
    uStack_68 = 0;
    iVar8 = *(*piVar10 + 0x3d8);
    if (arg2 == 0x80102501) {
code_r0x0800268c:
        uStack_58 = CONCAT26(piVar10[2],CONCAT24(*(piVar10 + 0xc),0x10));
        uStack_50 = *(piVar10 + 0x14) & 0xffff;
        iVar4 = sym._copy_to_user(arg3);
        iVar8 = 0;
        if (iVar4 != 0) {
            iVar8 = -0xe;
        }
    }
    else {
        if (arg2 == 0x40082502) {
            iVar4 = sym._copy_from_user(&uStack_68,arg3,8);
            if (iVar4 != 0) {
                iVar8 = -0xe;
                goto code_r0x080026cc;
            }
            pcVar9 = *(iVar8 + 0x48);
            if (pcVar9 != NULL) {
                __cfi_slowpath_diag(0x69a07daa9186a39e,pcVar9,0x8000760);
                iVar3 = (*pcVar9)(iVar8,*(piVar10 + 0xc),piVar10[2],*(piVar10 + 0x14),uStack_68);
                iVar8 = iVar3;
                goto code_r0x080026cc;
            }
        }
        else if (arg2 == 0xc0102500) {
            uStack_5c = 0;
            iVar8 = *piVar10;
            uStack_50 = 0;
            if (*(piVar10 + 0x14) != 0) {
                iVar8 = -0x10;
                goto code_r0x080026cc;
            }
            iVar4 = sym._copy_from_user(&uStack_5c,arg3,4);
            if (iVar4 != 0) {
                iVar8 = -0xe;
                goto code_r0x080026cc;
            }
            if (uStack_5c - 0x1010 < 0xfffff000) {
                iVar8 = -0x16;
                goto code_r0x080026cc;
            }
            iVar4 = __kmalloc(uStack_5c + 1,0xdc0);
            if (iVar4 == 0) {
                iVar8 = -0xc;
                goto code_r0x080026cc;
            }
            arg3_00 = uStack_5c;
            if (uStack_5c < 0) {
    //WARNING: Does not return
                pcVar9 = SoftwareBreakpoint(0x800,0x8002708);
                (*pcVar9)();
            }
            __check_object_size(iVar4,arg3_00,0);
            iVar5 = sym._copy_from_user(iVar4,arg3,arg3_00);
            if (iVar5 == 0) {
                if ((*(iVar4 + 10) == 0) && (*(iVar4 + 0xc) == 0)) {
                    uVar1 = *(*(iVar8 + 0x3d8) + 0x1c);
                    if (uVar1 == 0) {
                        uVar7 = 1;
                    }
                    else {
                        uVar7 = 0;
                        if (uVar1 != 0) {
                            uVar7 = 0x1000 / uVar1;
                        }
                    }
                    uVar2 = *(iVar4 + 8);
                    iVar3 = -0x16;
                    if ((uVar2 != 0) && (uVar2 <= uVar7)) {
                        uStack_58 = iVar4 + 0x10;
                        iVar3 = sym.stm_assign_first_policy(*piVar10,piVar10 + 1,&uStack_58,uVar2);
                        if (iVar3 == 0) {
                            pcVar9 = *(*(iVar8 + 0x3d8) + 0x38);
                            if (pcVar9 != NULL) {
                                __cfi_slowpath_diag(0x8cf312f378a18b3,pcVar9,0x8000780);
                                iVar3 = (*pcVar9)(*(iVar8 + 0x3d8),*(piVar10 + 0xc),piVar10[2]);
                                if (iVar3 != 0) {
                                    sym.stm_output_free(*piVar10,piVar10 + 1);
                                    goto code_r0x080025d0;
                                }
                            }
                            kfree(iVar4);
                            goto code_r0x0800268c;
                        }
                    }
                }
                else {
                    iVar3 = -0x16;
                }
            }
            else {
                iVar3 = -0xe;
            }
code_r0x080025d0:
            kfree(iVar4);
            iVar8 = iVar3;
            goto code_r0x080026cc;
        }
        iVar8 = -0x19;
    }
code_r0x080026cc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return iVar8;
    }
    auVar12 = __stack_chk_fail(iVar8);
    piVar10 = auVar12._8_8_;
    *extraout_x18 = sym.stm_char_mmap;
    piVar11 = *(auVar12._0_8_ + 0xd8);
    iVar8 = *piVar11;
    pcVar9 = *(*(iVar8 + 0x3d8) + 0x30);
    if (pcVar9 == NULL) {
        iVar8 = 0xffffffa1;
    }
    else {
        if ((piVar10[0x13] == 0) &&
           (iVar4 = *piVar10, iVar5 = piVar10[1], iVar5 - iVar4 == *(*(iVar8 + 0x3d8) + 0x1c) * *(piVar11 + 0x14))) {
            __cfi_slowpath_diag(0x8763a4ccedc09ec2,pcVar9,0x80007c0);
            iVar6 = (*pcVar9)(*(iVar8 + 0x3d8),*(piVar11 + 0xc),piVar11[2],*(piVar11 + 0x14));
            if (iVar6 != 0) {
                __pm_runtime_resume(iVar8,4);
                piVar10[9] = piVar10[9] & 0xffffffffffffffefU | 0x6000000000000c;
                piVar10[10] = piVar10[10] | 0x4044000;
                piVar10[0x12] = reloc.stm_mmap_open.25f246b71479a414713e277bb1a0d464.cfi_jt;
                vm_iomap_memory(piVar10,iVar6,iVar5 - iVar4);
                return 0;
            }
        }
        iVar8 = 0xffffffea;
    }
    return iVar8;
}


// ===== sym.stm_char_mmap @ 0x08002710 (size 268) =====

ulong sym.stm_char_mmap(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(arg1 + 0xd8);
    iVar4 = *piVar6;
    pcVar5 = *(*(iVar4 + 0x3d8) + 0x30);
    if (pcVar5 == NULL) {
        uVar2 = 0xffffffa1;
    }
    else {
        if ((*(arg2 + 0x98) == 0) &&
           (uVar3 = *(arg2 + 8) - *arg2, uVar3 == *(*(iVar4 + 0x3d8) + 0x1c) * *(piVar6 + 0x14))) {
            __cfi_slowpath_diag(0x8763a4ccedc09ec2,pcVar5,0x80007c0);
            iVar1 = (*pcVar5)(*(iVar4 + 0x3d8),*(piVar6 + 0xc),piVar6[2],*(piVar6 + 0x14));
            if (iVar1 != 0) {
                __pm_runtime_resume(iVar4,4);
                *(arg2 + 0x48) = *(arg2 + 0x48) & 0xffffffffffffffef | 0x6000000000000c;
                *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4044000;
                *(arg2 + 0x90) = reloc.stm_mmap_open.25f246b71479a414713e277bb1a0d464.cfi_jt;
                vm_iomap_memory(arg2,iVar1,uVar3);
                return 0;
            }
        }
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.stm_char_open @ 0x0800281c (size 288) =====

uint sym.stm_char_open(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar6;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = *(arg1 + 0x4c) >> 0x14;
    iVar3 = class_find_device(obj.stm_core_up,0,&uStack_3c,sym.major_match.25f246b71479a414713e277bb1a0d464.cfi_jt);
    if (iVar3 == 0) {
        uVar2 = 0xffffffed;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x20);
        if (piVar4 == NULL) {
            uVar2 = 0xfffffff4;
        }
        else {
            *(piVar4 + 1) = 0;
            *piVar4 = iVar3;
            uVar5 = try_module_get(*(iVar3 + 0x390));
            if ((uVar5 & 1) != 0) {
                *(arg2 + 0xd8) = piVar4;
                uVar2 = nonseekable_open(arg1,arg2);
                goto code_r0x08002904;
            }
            kfree(piVar4);
            uVar2 = 0xffffffed;
        }
        put_device(iVar3);
    }
code_r0x08002904:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.stm_char_release;
    piVar4 = *(extraout_x1 + 0xd8);
    iVar3 = *piVar4;
    pcVar6 = *(*(iVar3 + 0x3d8) + 0x40);
    if (pcVar6 != NULL) {
        __cfi_slowpath_diag(0xd68bfb8f1becf310,pcVar6,0x80007e0);
        (*pcVar6)(*(iVar3 + 0x3d8),*(piVar4 + 0xc),piVar4[2]);
    }
    sym.stm_output_free(iVar3,piVar4 + 1);
    module_put(*(iVar3 + 0x390));
    put_device(iVar3);
    kfree(piVar4);
    return 0;
}


// ===== sym.stm_char_release @ 0x0800293c (size 152) =====

ulong sym.stm_char_release(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    int64_t arg1_00;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xd8);
    arg1_00 = *piVar1;
    pcVar2 = *(*(arg1_00 + 0x3d8) + 0x40);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0xd68bfb8f1becf310,pcVar2,0x80007e0);
        (*pcVar2)(*(arg1_00 + 0x3d8),*(piVar1 + 0xc),piVar1[2]);
    }
    sym.stm_output_free(arg1_00,piVar1 + 1);
    module_put(*(arg1_00 + 0x390));
    put_device(arg1_00);
    kfree(piVar1);
    return 0;
}


// ===== sym.stm_assign_first_policy @ 0x080029d4 (size 956) =====

uint32_t * sym.stm_assign_first_policy(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong *puVar3;
    uint32_t uVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t arg1_00;
    uint *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t *arg3_00;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar14;
    int *piVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    code *pcVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = *arg3;
    arg3_00 = arg3;
    if (iVar9 != 0) {
        uVar7 = arg4;
        iVar14 = 1;
        do {
            arg1_00 = sym.stp_policy_node_lookup(arg1,iVar9);
            iVar9 = *(arg3 + iVar14 * 8);
            if (iVar9 == 0) break;
            iVar14 = iVar14 + 1;
        } while (arg1_00 == 0);
        if (arg1_00 != 0) {
            uStack_70 = 0;
            uStack_74 = 0;
            if (*(*(arg1 + 0x3d8) + 0x18) < uVar7) {
                puVar17 = 0xffffffea;
            }
            else {
                arg3_00 = &uStack_74;
                sym.stp_policy_node_get_ranges(arg1_00,&uStack_70 + 4,arg3_00,&uStack_70);
                _raw_spin_lock(arg1 + 0x438);
                _raw_spin_lock(arg2);
                uVar2 = uStack_74;
                if (*(arg2 + 0xc) != 0) {
    //WARNING: Does not return
                    pcVar18 = SoftwareBreakpoint(0x800,0x8002d70);
                    (*pcVar18)();
                }
                if (uStack_74 < uStack_70._4_4_) {
                    puVar17 = 0xffffffe4;
                }
                else {
                    uVar19 = uStack_70._4_4_;
                    do {
                        iVar9 = *(arg1 + 0x3d8);
                        uVar6 = *(iVar9 + 0x10);
                        if (((uVar19 < uVar6) || (*(iVar9 + 0x14) < uVar19)) ||
                           (*(arg1 + (uVar19 - uVar6) * 8 + 0x440) == 0)) {
                            puVar8 = __kmalloc((*(iVar9 + 0x18) + 0x3f >> 3 & 0x3ffffff8) + 8,0xb20);
                            if (puVar8 == NULL) {
                                puVar17 = 0xfffffff4;
                                goto code_r0x08002c30;
                            }
                            iVar9 = *(arg1 + 0x3d8);
                            *puVar8 = *(iVar9 + 0x18);
                            *(arg1 + (uVar19 - *(iVar9 + 0x10)) * 8 + 0x440) = puVar8;
                            uVar6 = *(iVar9 + 0x10);
                            if (uVar6 <= uVar19) goto code_r0x08002b60;
code_r0x08002b6c:
                            piVar15 = NULL;
                            iVar14 = _Reset;
                        }
                        else {
                            if (uVar19 < uVar6) goto code_r0x08002b6c;
code_r0x08002b60:
                            if (*(iVar9 + 0x14) < uVar19) goto code_r0x08002b6c;
                            piVar15 = *(arg1 + (uVar19 - uVar6) * 8 + 0x440);
                            iVar14 = *piVar15;
                        }
                        if (iVar14 != 0) {
                            uVar12 = uStack_70 & 0xffffffff;
                            if (uStack_70 == 0) {
                                do {
                                    arg3_00 = 0x1;
                                    uVar6 = _find_next_bit(piVar15 + 2,0,1,uVar12,0xffffffffffffffff,0);
                                    if (1 < uVar6 + uVar7) break;
                                    if ((uVar7 - 1 & uVar6) == 0) {
                                        uVar11 = 1;
                                        uVar4 = 1;
                                        if (1 < uVar7) {
                                            while (uVar11 = uVar4,
                                                  (*(piVar15 + (uVar6 + uVar11 >> 6) * 2 + 2) >> (uVar6 + uVar11 & 0x3f)
                                                  & 1) == 0) {
                                                uVar4 = uVar11 + 1;
                                                if (uVar7 == uVar11 + 1) goto code_r0x08002ad4;
                                            }
                                        }
                                        if (uVar11 == uVar7) {
code_r0x08002ad4:
                                            if (-1 < uVar6) {
                                                uStack_70 = CONCAT44(uVar19,uVar6);
                                                *(arg2 + 4) = uVar19;
                                                *(arg2 + 8) = uVar6;
                                                *(arg2 + 0xc) = uVar7;
                                                pcVar18 = *(*(arg1 + 0x428) + 0x20);
                                                if (pcVar18 != NULL) {
                                                    if (arg1_00 + 0xa0 == 0) {
    //WARNING: Does not return
                                                        pcVar18 = SoftwareBreakpoint(0x800,0x8002d7c);
                                                        (*pcVar18)();
                                                    }
                                                    arg3_00 = 0x8000740;
                                                    __cfi_slowpath_diag(0xf0f0770334075ce4,pcVar18);
                                                    uVar7 = (*pcVar18)(arg1_00 + 0xa0,arg2);
                                                    puVar17 = uVar7;
                                                    if (uVar7 != 0) goto code_r0x08002c30;
                                                    uVar19 = *(arg2 + 4);
                                                }
                                                uVar7 = *(*(arg1 + 0x3d8) + 0x10);
                                                if ((uVar19 < uVar7) || (*(*(arg1 + 0x3d8) + 0x14) < uVar19)) {
                                                    puVar16 = NULL;
                                                }
                                                else {
                                                    puVar16 = *(arg1 + (uVar19 - uVar7) * 8 + 0x440);
                                                }
                                                uVar7 = *(arg2 + 0xc);
                                                if (*puVar16 < uVar7) {
    //WARNING: Does not return
                                                    pcVar18 = SoftwareBreakpoint(0x800,0x8002d88);
                                                    (*pcVar18)();
                                                }
                                                uVar2 = 0x1f - LZCOUNT(uVar7);
                                                if (uVar7 == 0) {
                                                    uVar2 = 0xffffffff;
                                                }
                                                arg3_00 = uVar2;
                                                bitmap_allocate_region(puVar16 + 2,*(arg2 + 8));
                                                puVar17 = NULL;
                                                *puVar16 = *puVar16 - *(arg2 + 0xc);
                                                goto code_r0x08002c34;
                                            }
                                            break;
                                        }
                                        uVar6 = uVar11 + uVar6;
                                    }
                                    uVar6 = uVar6 + (uVar7 - 1) & -uVar7;
                                    uVar12 = uVar6;
                                } while (uVar6 == 0);
                            }
                        }
                        uVar19 = uVar19 + 1;
                    } while (uVar19 <= uVar2);
                    puVar17 = 0xffffffe4;
                }
code_r0x08002c30:
                *(arg2 + 0xc) = 0;
code_r0x08002c34:
                _raw_spin_unlock(arg2);
                _raw_spin_unlock(arg1 + 0x438);
            }
            mutex_unlock(0x80005b0);
            config_item_put(arg1_00);
            goto code_r0x08002c58;
        }
    }
    puVar17 = 0xffffffea;
code_r0x08002c58:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return puVar17;
    }
    auVar20 = __stack_chk_fail();
    uVar10 = auVar20._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar12 = (uVar10 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar13 = uVar10, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar13 = uVar10 & uVar12;
    }
    bVar5 = CARRY8(uVar13,arg3_00);
    uVar13 = uVar13 + arg3_00;
    uVar1 = 0;
    if (!bVar5 || uVar13 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar13 = 0xffffffffffffffff;
    }
    puVar17 = arg3_00;
    if (!CARRY8(uVar13,~uVar1) && !CARRY8(uVar13 + ~uVar1,bVar5) || uVar13 == uVar1 + !bVar5) {
        if ((_device_match_name >> 0x18 & 1) == 0) {
            uVar13 = daif;
            if ((uVar13 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar13;
        }
        if ((uVar10 & uVar12 & 0xffffff8000000000) != 0) {
            uVar10 = 0;
        }
        puVar17 = __arch_copy_from_user(auVar20._0_8_,uVar10,arg3_00);
        if ((_device_match_name >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr0_el1 = (uVar10 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
    }
    if (puVar17 != NULL) {
        memset(arg3_00 + (auVar20._0_8_ - puVar17),0,puVar17);
    }
    return puVar17;
}


// ===== sym._copy_from_user @ 0x08002d90 (size 376) =====

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
        if ((_device_match_name >> 0x18 & 1) == 0) {
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
        if ((_device_match_name >> 0x18 & 1) == 0) {
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


// ===== sym.stm_output_free @ 0x08002f44 (size 244) =====

void sym.stm_output_free(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    int *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg1 + 0x438);
    _raw_spin_lock(arg2);
    if (*(arg2 + 0xc) != 0) {
        uVar1 = *(arg2 + 4);
        uVar2 = *(*(arg1 + 0x3d8) + 0x10);
        if ((uVar1 < uVar2) || (*(*(arg1 + 0x3d8) + 0x14) < uVar1)) {
            piVar4 = NULL;
        }
        else {
            piVar4 = *(arg1 + (uVar1 - uVar2) * 8 + 0x440);
        }
        bitmap_release_region(piVar4 + 2,*(arg2 + 8),LZCOUNT(*(arg2 + 0xc)) ^ 0x1f);
        *piVar4 = *piVar4 + *(arg2 + 0xc);
        *(arg2 + 0xc) = 0;
    }
    if ((*(arg1 + 0x428) != 0) && (pcVar3 = *(*(arg1 + 0x428) + 0x28), pcVar3 != NULL)) {
        __cfi_slowpath_diag(0x71e2c5e326ba09,pcVar3,0x80007a0);
        (*pcVar3)(arg2);
    }
    _raw_spin_unlock(arg2);
    _raw_spin_unlock(arg1 + 0x438);
    return;
}


// ===== sym._copy_to_user @ 0x08003038 (size 320) =====

ulong sym._copy_to_user(int64_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong in_x1;
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
    uVar5 = 0x10;
    bVar4 = 0xffffffffffffffef < uVar6;
    uVar6 = uVar6 + 0x10;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_device_match_name >> 0x18 & 1) == 0) {
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
        uVar5 = __arch_copy_to_user(arg1,in_x1,0x10);
        if ((_device_match_name >> 0x18 & 1) == 0) {
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


// ===== sym.stm_mmap_open @ 0x080031b4 (size 52) =====

void sym.stm_mmap_open(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pm_runtime_resume(**(*(arg1 + 0xa0) + 0xd8),5);
    return;
}


// ===== sym.stm_mmap_close @ 0x080031e8 (size 72) =====

void sym.stm_mmap_close(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = **(*(arg1 + 0xa0) + 0xd8);
    uVar1 = ktime_get_mono_fast_ns();
    *(iVar2 + 0x218) = uVar1;
    __pm_runtime_suspend(iVar2,0xd);
    return;
}


// ===== sym.major_match @ 0x08003230 (size 28) =====

bool sym.major_match(int64_t arg1,int64_t arg2)

{
    return *arg2 == *(arg1 + 0x300) >> 0x14;
}


// ===== sym.stm_source_link_show @ 0x0800324c (size 140) =====

int64_t sym.stm_source_link_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int iVar2;
    char *pcVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = __srcu_read_lock(obj.stm_register_device.__key);
    puVar4 = *(arg1 + 0x3d0);
    if (puVar4 == NULL) {
        pcVar3 = "<none>";
    }
    else {
        pcVar3 = puVar4[0xe];
        if (pcVar3 == NULL) {
            pcVar3 = *puVar4;
        }
    }
    iVar2 = sprintf(arg2,0x8000aba,pcVar3);
    __srcu_read_unlock(obj.stm_register_device.__key,uVar1);
    return iVar2;
}


// ===== sym.stm_source_link_store @ 0x080032dc (size 852) =====

uchar * sym.stm_source_link_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uchar *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    int64_t *piVar12;
    code *pcVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar1 = arg1 + 0x398;
    iStack_68 = *(iVar11 + 0x5e0);
    mutex_lock(iVar1);
    do {
        uVar6 = __srcu_read_lock(obj.stm_register_device.__key);
        iVar11 = *(arg1 + 0x3d0);
        if (iVar11 == 0) {
            __srcu_read_unlock(obj.stm_register_device.__key,uVar6);
            break;
        }
        mutex_lock(iVar11 + 0x3e0);
        iVar7 = sym.__stm_source_link_drop(arg1,iVar11);
        mutex_unlock(iVar11 + 0x3e0);
        __srcu_read_unlock(obj.stm_register_device.__key,uVar6);
    } while (iVar7 == -0xb);
    if ((_segment.ehdr != 0) &&
       (iVar11 = class_find_device(obj.stm_core_up,0,arg2,sym.device_match_name.cfi_jt), iVar11 != 0)) {
        uVar8 = try_module_get(*(iVar11 + 0x390));
        if ((uVar8 & 1) != 0) {
            __pm_runtime_resume(iVar11,5);
            iVar2 = iVar11 + 0x3e0;
            iStack_80 = *0x8000f18;
            uStack_78 = *0x8000f20;
            uStack_70 = *0x8000f28;
            mutex_lock(iVar2);
            iVar3 = iVar11 + 0x410;
            _raw_spin_lock(iVar3);
            iVar4 = arg1 + 0x3c8;
            _raw_spin_lock(iVar4);
            *(arg1 + 0x3d0) = iVar11;
            piVar12 = *(iVar11 + 0x420);
            iVar5 = arg1 + 0x3d8;
            uVar8 = __list_add_valid(iVar5,piVar12,iVar11 + 0x418);
            if ((uVar8 & 1) != 0) {
                *(iVar11 + 0x420) = iVar5;
                *(arg1 + 0x3d8) = iVar11 + 0x418;
                *(arg1 + 0x3e0) = piVar12;
                *piVar12 = iVar5;
            }
            _raw_spin_unlock(iVar4);
            _raw_spin_unlock(iVar3);
            mutex_unlock(iVar2);
            iVar9 = kstrdup(**(arg1 + 0x390),0xcc0);
            iStack_80 = iVar9;
            if (iVar9 == 0) {
                iVar7 = -0xc;
            }
            else {
                iVar7 = sym.stm_assign_first_policy
                                  (iVar11,arg1 + 1000,&stack0xffffffffffffff80,*(*(arg1 + 0x390) + 0x14));
                kfree(iVar9);
                if (iVar7 == 0) {
                    pcVar13 = *(*(iVar11 + 0x3d8) + 0x38);
                    if (pcVar13 != NULL) {
                        __cfi_slowpath_diag(0x8cf312f378a18b3,pcVar13,0x8000840);
                        iVar7 = (*pcVar13)(*(iVar11 + 0x3d8),*(arg1 + 0x3ec),*(arg1 + 0x3f0));
                        if (iVar7 != 0) {
                            sym.stm_output_free(iVar11,arg1 + 1000);
                            goto code_r0x08003560;
                        }
                    }
                    pcVar13 = *(*(arg1 + 0x390) + 0x18);
                    if (pcVar13 != NULL) {
                        __cfi_slowpath_diag(0xb1fe78d0f352c252,pcVar13,0x8000860);
                        (*pcVar13)(*(arg1 + 0x390));
                    }
                    mutex_unlock(iVar1);
                    goto code_r0x0800351c;
                }
            }
code_r0x08003560:
            mutex_lock(iVar2);
            _raw_spin_lock(iVar3);
            _raw_spin_lock(iVar4);
            *(arg1 + 0x3d0) = 0;
            uVar8 = __list_del_entry_valid(iVar5);
            if ((uVar8 & 1) != 0) {
                piVar12 = *(arg1 + 0x3e0);
                iVar9 = *(arg1 + 0x3d8);
                *(iVar9 + 8) = piVar12;
                *piVar12 = iVar9;
            }
            *(arg1 + 0x3d8) = iVar5;
            *(arg1 + 0x3e0) = iVar5;
            _raw_spin_unlock(iVar4);
            _raw_spin_unlock(iVar3);
            mutex_unlock(iVar2);
            __pm_runtime_suspend(iVar11,0xd);
            module_put(*(iVar11 + 0x390));
            put_device(iVar11);
            mutex_unlock(iVar1);
            arg3 = iVar7;
            goto code_r0x0800351c;
        }
        put_device(iVar11);
    }
    mutex_unlock(iVar1);
    arg3 = -0x16;
code_r0x0800351c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar14 = __stack_chk_fail();
        puVar10 = auVar14._0_8_;
        *extraout_x18 = 0x800362c;
        if (puVar10 != NULL) {
            switch(*puVar10) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar10,auVar14._8_8_,0);
                break;
            default:
                return puVar10;
            }
        }
    //WARNING: Does not return
        pcVar13 = SoftwareBreakpoint(0x5502,0x8003688);
        (*pcVar13)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08003630 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003674

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
    //switch table (4 cases) at 0x8000abe
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003688);
    (*pcVar1)();
}


// ===== sym.stp_policy_node_priv @ 0x08003688 (size 24) =====

int64_t sym.stp_policy_node_priv(uint32_t arg1)

{
    int64_t iVar1;
    
    iVar1 = 0;
    if (arg1 != 0) {
        iVar1 = arg1 + 0xa0;
    }
    return iVar1;
}


// ===== sym.stp_policy_node_get_ranges @ 0x080036a0 (size 44) =====

void sym.stp_policy_node_get_ranges(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *in_x4;
    
    *arg2 = *(arg1 + 0x90);
    *arg3 = *(arg1 + 0x94);
    *arg4 = *(arg1 + 0x98);
    *in_x4 = *(arg1 + 0x9c);
    return;
}


// ===== sym.to_pdrv_policy_node @ 0x080036cc (size 24) =====

int64_t sym.to_pdrv_policy_node(uint32_t arg1)

{
    int64_t iVar1;
    
    iVar1 = 0;
    if (arg1 != 0) {
        iVar1 = arg1 + 0xa0;
    }
    return iVar1;
}


// ===== sym.get_policy_node_type @ 0x080036e4 (size 116) =====

int64_t sym.get_policy_node_type(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmemdup(obj.stp_policy_node_type,0x28,0xcc0);
    if (iVar1 != 0) {
        iVar2 = __memcat_p(obj.stp_policy_node_attrs,arg1);
        if (iVar2 == 0) {
            kfree(iVar1);
            iVar1 = 0;
        }
        else {
            *(iVar1 + 0x18) = iVar2;
        }
    }
    return iVar1;
}


// ===== sym.stp_policy_unbind @ 0x08003758 (size 84) =====

void sym.stp_policy_unbind(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x88);
    if (arg1_00 != 0) {
        *(arg1_00 + 0x398) = 0;
        *(arg1 + 0x88) = 0;
        module_put(**(arg1_00 + 0x428));
        *(arg1_00 + 0x428) = 0;
        sym.stm_put_device(arg1_00);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80037ac);
    (*pcVar1)();
}


// ===== sym.stp_policy_node_lookup @ 0x080037b0 (size 336) =====

ulong * sym.stp_policy_node_lookup(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong in_tmp_ldXn;
    int iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    mutex_lock(0x80005b0);
    iVar1 = arg1 + 0x3a0;
    mutex_lock(iVar1);
    if ((*(arg1 + 0x398) == 0) || (piVar7 = *(arg1 + 0x398) + 0x50, iStack_60 = arg2, piVar7 == *piVar7)) {
        mutex_unlock(iVar1);
    }
    else {
        puVar5 = NULL;
        while (pcVar3 = strsep(&stack0xffffffffffffffa0,0x80008c8), puVar6 = puVar5, pcVar3 != NULL) {
            if (*pcVar3 != '\0') {
                piVar8 = *piVar7;
                while( true ) {
                    puVar6 = puVar5;
                    if (piVar7 == piVar8) goto code_r0x080038a8;
                    puVar6 = piVar8 + -4;
                    iVar2 = strcmp(pcVar3,*puVar6);
                    if (iVar2 == 0) break;
                    piVar8 = *piVar8;
                }
                if (iStack_60 == 0) break;
                piVar7 = piVar8 + 6;
                puVar5 = puVar6;
            }
        }
code_r0x080038a8:
        mutex_unlock(iVar1);
        if (puVar6 != NULL) {
            config_item_get(puVar6);
            goto code_r0x080038bc;
        }
    }
    mutex_unlock(0x80005b0);
    puVar6 = NULL;
code_r0x080038bc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return puVar6;
    }
    uVar4 = __stack_chk_fail();
    *extraout_x18 = 0x80038fc;
    mutex_unlock(in_tmp_ldXn,0x80005b0);
    puVar5 = config_item_put(uVar4);
    return puVar5;
}


// ===== sym.stp_policy_node_put @ 0x08003900 (size 64) =====

void sym.stp_policy_node_put(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_unlock(0x80005b0);
    config_item_put(arg1);
    return;
}


// ===== sym.stp_policy_node_masters_show @ 0x08003940 (size 60) =====

int64_t sym.stp_policy_node_masters_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,"%u %u\n",*(arg1 + 0x90),*(arg1 + 0x94));
    return iVar1;
}


// ===== sym.stp_policy_node_masters_store @ 0x0800397c (size 240) =====

int64_t sym.stp_policy_node_masters_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    iVar1 = sscanf(arg2,"%u %u",&uStack_30 + 4,&uStack_30);
    if (iVar1 == 2) {
        mutex_lock(0x80005b0);
        iVar2 = *(*(arg1 + 0x88) + 0x88);
        if (iVar2 == 0) {
            arg3 = -0x13;
        }
        else if (((uStack_30 < uStack_30._4_4_) || (iVar2 = *(iVar2 + 0x3d8), uStack_30._4_4_ < *(iVar2 + 0x10))) ||
                (*(iVar2 + 0x14) < uStack_30)) {
            arg3 = -0x22;
        }
        else {
            *(arg1 + 0x90) = uStack_30._4_4_;
            *(arg1 + 0x94) = uStack_30;
        }
        mutex_unlock(0x80005b0);
    }
    else {
        arg3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.stp_policy_node_channels_show;
    iVar1 = sprintf(auVar3._8_8_,"%u %u\n",*(auVar3._0_8_ + 0x98),*(auVar3._0_8_ + 0x9c));
    return iVar1;
}


// ===== sym.stp_policy_node_channels_show @ 0x08003a6c (size 60) =====

int64_t sym.stp_policy_node_channels_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,"%u %u\n",*(arg1 + 0x98),*(arg1 + 0x9c));
    return iVar1;
}


// ===== sym.stp_policy_node_channels_store @ 0x08003aa8 (size 256) =====

int64_t sym.stp_policy_node_channels_store(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    iVar1 = sscanf(arg2,"%u %u",&uStack_40 + 4,&uStack_40);
    if (iVar1 == 2) {
        mutex_lock(0x80005b0);
        iVar2 = *(*(arg1 + 0x88) + 0x88);
        if (iVar2 == 0) {
            iVar3 = -0x13;
        }
        else {
            iVar3 = -0x22;
            if (((-1 < uStack_40) && (-1 < uStack_40)) && (uStack_40._4_4_ <= uStack_40)) {
                if (uStack_40 < *(*(iVar2 + 0x3d8) + 0x18)) {
                    *(arg1 + 0x98) = uStack_40._4_4_;
                    *(arg1 + 0x9c) = uStack_40;
                    iVar3 = arg3;
                }
                else {
                    iVar3 = -0x22;
                }
            }
        }
        mutex_unlock(0x80005b0);
    }
    else {
        iVar3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.stp_policy_node_release;
    iVar3 = kfree();
    return iVar3;
}


// ===== sym.stp_policy_node_release @ 0x08003ba8 (size 36) =====

void sym.stp_policy_node_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.stp_policy_node_make @ 0x08003bcc (size 276) =====

int64_t sym.stp_policy_node_make(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x40) != obj.stp_policy_type) {
        arg1 = *(arg1 + 0x88);
    }
    if (*(arg1 + 0x88) == 0) {
        iVar1 = -0x13;
    }
    else {
        iVar3 = *(*(arg1 + 0x88) + 0x428);
        iVar1 = __kmalloc(*(iVar3 + 0x30) + 0xa0,0xdc0);
        if (iVar1 == 0) {
            iVar1 = -0xc;
        }
        else {
            pcVar4 = *(iVar3 + 0x18);
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar4,0x8000880);
                (*pcVar4)(iVar1 + 0xa0);
            }
            pcVar2 = *(*(arg1 + 0x88) + 0x430);
            pcVar4 = obj.stp_policy_node_type;
            if (pcVar2 != NULL) {
                pcVar4 = pcVar2;
            }
            config_group_init_type_name(iVar1,arg2,pcVar4);
            *(iVar1 + 0x88) = arg1;
            *(iVar1 + 0x90) = *(*(*(arg1 + 0x88) + 0x3d8) + 0x10);
            *(iVar1 + 0x94) = *(*(*(arg1 + 0x88) + 0x3d8) + 0x14);
            *(iVar1 + 0x98) = 0;
            *(iVar1 + 0x9c) = *(*(*(arg1 + 0x88) + 0x3d8) + 0x18) + -1;
        }
    }
    return iVar1;
}


// ===== sym.stp_policy_node_drop @ 0x08003ce0 (size 40) =====

void sym.stp_policy_node_drop(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    config_item_put(arg1);
    return;
}


// ===== sym.stp_policy_release @ 0x08003d08 (size 132) =====

void sym.stp_policy_release(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) != 0) {
        iVar1 = *(arg1 + 0x88) + 0x3a0;
        mutex_lock(iVar1);
        arg1_00 = *(arg1 + 0x88);
        if (arg1_00 == 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8003d8c);
            (*pcVar2)();
        }
        *(arg1_00 + 0x398) = 0;
        *(arg1 + 0x88) = 0;
        module_put(**(arg1_00 + 0x428));
        *(arg1_00 + 0x428) = 0;
        sym.stm_put_device(arg1_00);
        mutex_unlock(iVar1);
        kfree(arg1);
    }
    return;
}


// ===== sym.stp_policy_device_show @ 0x08003d90 (size 88) =====

int64_t sym.stp_policy_device_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*(arg1 + 0x88) == 0)) {
        pcVar2 = "<none>";
    }
    else {
        pcVar2 = **(*(arg1 + 0x88) + 0x3d8);
    }
    iVar1 = sprintf(arg2,0x8000aba,pcVar2);
    return iVar1;
}


// ===== sym.stp_policy_protocol_show @ 0x08003de8 (size 88) =====

int64_t sym.stp_policy_protocol_show(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*(arg1 + 0x88) == 0)) {
        pcVar2 = "<none>";
    }
    else {
        pcVar2 = *(*(*(arg1 + 0x88) + 0x428) + 8);
    }
    iVar1 = sprintf(arg2,0x8000aba,pcVar2);
    return iVar1;
}


// ===== sym.stp_policy_make @ 0x08003e40 (size 424) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.stp_policy_make(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uchar *puVar3;
    uchar *puVar4;
    int64_t arg1_00;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    ulong *puStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puStack_48 = NULL;
    uStack_40 = 0;
    iVar2 = kasprintf(0xcc0,0x80008ca,arg1);
    if (iVar2 == 0) {
        uVar6 = 0xfffffffffffffff4;
        goto code_r0x08003f50;
    }
    puVar3 = strrchr(iVar2,0x2e);
    if (puVar3 == NULL) {
        kfree(iVar2);
        uVar6 = 0xffffffffffffffea;
        goto code_r0x08003f50;
    }
    *puVar3 = 0;
    puVar4 = strrchr(iVar2,0x3a);
    puVar3 = puVar4;
    if (puVar4 != NULL) {
        puVar3 = puVar4 + 1;
        *puVar4 = 0;
    }
    arg1_00 = sym.stm_find_device(iVar2);
    if (arg1_00 == 0) {
        kfree(iVar2);
        uVar6 = 0xffffffffffffffed;
        goto code_r0x08003f50;
    }
    iVar1 = sym.stm_lookup_protocol(puVar3,&puStack_48,&uStack_40);
    kfree(iVar2);
    if (iVar1 != 0) {
        sym.stm_put_device(arg1_00);
        uVar6 = 0xffffffffffffffed;
        goto code_r0x08003f50;
    }
    iVar2 = arg1_00 + 0x3a0;
    mutex_lock(iVar2);
    if (*(arg1_00 + 0x398) == 0) {
        iVar5 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x90);
        *(arg1_00 + 0x398) = iVar5;
        if (iVar5 == 0) {
            uVar6 = 0xfffffffffffffff4;
            goto code_r0x08003f34;
        }
        config_group_init_type_name(iVar5,arg1,obj.stp_policy_type);
        *(arg1_00 + 0x428) = puStack_48;
        *(arg1_00 + 0x430) = uStack_40;
        *(*(arg1_00 + 0x398) + 0x88) = arg1_00;
        uVar6 = *(arg1_00 + 0x398);
        mutex_unlock(iVar2);
        if (uVar6 < 0xfffffffffffff001) goto code_r0x08003f50;
    }
    else {
        uVar6 = 0xfffffffffffffff0;
code_r0x08003f34:
        mutex_unlock(iVar2);
    }
    module_put(*puStack_48);
    sym.stm_put_device(arg1_00);
code_r0x08003f50:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    return uVar6;
}


// ===== sym.init_module @ 0x080040b8 (size 232) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __class_register(obj.stm_core_up,obj.stm_source_register_device.__key);
    if (iVar1 == 0) {
        iVar1 = __class_register(obj.stm_source_class,obj.stm_source_register_device.__key);
        if (iVar1 == 0) {
            iVar1 = sym.stp_configfs_init();
            if (iVar1 == 0) {
                init_srcu_struct(obj.stm_register_device.__key);
                _obj.stm_pdrv_head = obj.stm_pdrv_head;
                *0x8000350 = obj.stm_pdrv_head;
                __mutex_init(obj.stm_pdrv_mutex,"&stm_pdrv_mutex",obj.stm_source_register_device.__key);
                __request_module(0,"stm_p_basic");
                _segment.ehdr = _segment.ehdr + 1;
                return 0;
            }
            class_unregister(obj.stm_source_class);
        }
        class_unregister(obj.stm_core_up);
    }
    return iVar1;
}


// ===== sym.stp_configfs_init @ 0x080041a0 (size 88) =====

void sym.stp_configfs_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    config_group_init(obj.stp_policy_subsys.llvm.4863290554842843269);
    __mutex_init(0x80005b0,"&stp_policy_subsys.su_mutex",obj.stm_source_register_device.__key);
    configfs_register_subsystem(obj.stp_policy_subsys.llvm.4863290554842843269);
    return;
}


// ===== sym.cleanup_module @ 0x080041f8 (size 80) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cleanup_srcu_struct(obj.stm_register_device.__key);
    class_unregister(obj.stm_source_class);
    class_unregister(obj.stm_core_up);
    configfs_unregister_subsystem(obj.stp_policy_subsys.llvm.4863290554842843269);
    return;
}


// ===== sym.stp_configfs_exit @ 0x08004248 (size 44) =====

void sym.stp_configfs_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    configfs_unregister_subsystem(obj.stp_policy_subsys.llvm.4863290554842843269);
    return;
}

