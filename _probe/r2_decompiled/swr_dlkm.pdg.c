// decompiled from swr_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1360) =====

//WARNING: Switch with 1 destination removed at 0x08002cf8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x23bde9afdf166dc6) {
        if (arg1 < -0x59c67b9f3b861963) {
            if (arg1 < -0x7039899e5b160fbb) {
                if (arg1 == -0x7b4722f8603c9109) {
                    pcVar2 = sym.swr_bulk_write.cfi_jt;
                }
                else {
                    if (arg1 != -0x78e26f86d44ef8c8) {
                        if (arg1 != -0x75808eadf3c270e8) goto code_r0x08002cb8;
                        pcVar2 = sym.swr_set_device_group.cfi_jt;
                        goto code_r0x08002524;
                    }
                    pcVar2 = sym.swr_connect_port.cfi_jt;
                }
            }
            else if (arg1 < -0x5ca806d6a8ada68b) {
                if (arg1 == -0x7039899e5b160fbb) {
                    pcVar2 = sym.swr_driver_register.cfi_jt;
                }
                else {
                    if (arg1 != -0x6433945f025a5a6a) goto code_r0x08002cb8;
                    pcVar2 = sym.swr_init_port_params.cfi_jt;
                }
            }
            else if (arg1 == -0x5ca806d6a8ada68b) {
                pcVar2 = sym.swr_driver_unregister.cfi_jt;
            }
            else {
                if (arg1 != -0x5c5782051c4987d1) goto code_r0x08002cb8;
                pcVar2 = sym.swr_read.cfi_jt;
            }
        }
        else if (arg1 < -0x4a0aaf64a6523783) {
            if (arg1 == -0x59c67b9f3b861963) {
                pcVar2 = sym.swr_register_master.cfi_jt;
code_r0x08002524:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002cb8;
            }
            if (arg1 != -0x59a85bcf63dffd48) {
                if ((arg1 == -0x57be845bca9148ef) && ((pcVar1 + -0x8002680 >> 3 | pcVar1 << 0x3d) < 6)) {
                    return;
                }
                goto code_r0x08002cb8;
            }
            pcVar2 = sym.swr_device_match.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
        }
        else if (arg1 < -0x3446d116d08f9714) {
            if (arg1 != -0x4a0aaf64a6523783) {
                if ((arg1 == -0x440ca8bece010a7b) && ((pcVar1 + -0x8002618 >> 3 | pcVar1 << 0x3d) < 5)) {
                    return;
                }
                goto code_r0x08002cb8;
            }
            pcVar2 = sym.__typeid__ZTSFvP10swr_deviceE_global_addr;
        }
        else {
            if (arg1 == -0x3446d116d08f9714) {
                pcVar2 = sym.__devm_regmap_init_swr.cfi_jt;
                goto code_r0x08002524;
            }
            if (arg1 != -0x2d1ef4d8549a89e5) goto code_r0x08002cb8;
            pcVar2 = sym.__unregister.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
        }
    }
    else if (arg1 < 0x20a6d7b5e03e177b) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x23bde9afdf166dc6) {
                pcVar2 = sym.__typeid__ZTSFvP10swr_masterE_global_addr;
                goto code_r0x08002524;
            }
            if (arg1 == -0xd0cd9292117ab53) {
                pcVar2 = sym.swr_new_device.cfi_jt;
            }
            else {
                if (arg1 != -0x5671818706d6ff4) goto code_r0x08002cb8;
                pcVar2 = sym.swr_port_response.cfi_jt;
            }
        }
        else if (arg1 < 0xd97471bb3e7fd28) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7d81c8dc5e5eee9) goto code_r0x08002cb8;
                pcVar2 = sym.swr_disconnect_port.cfi_jt;
            }
        }
        else if (arg1 == 0xd97471bb3e7fd28) {
            pcVar2 = sym.swr_get_logical_dev_num.cfi_jt;
        }
        else {
            if (arg1 != 0xf15b3680a0d7228) goto code_r0x08002cb8;
            pcVar2 = sym.regmap_swr_gather_write.f8fb920028d0f55da817d01b395765f1.cfi_jt;
        }
    }
    else if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 == 0x20a6d7b5e03e177b) {
            pcVar2 = sym.swr_write.cfi_jt;
        }
        else if (arg1 == 0x351f4ef19ff41e78) {
            pcVar2 = sym.regmap_swr_read.f8fb920028d0f55da817d01b395765f1.cfi_jt;
        }
        else {
            if (arg1 != 0x4bdf73727f5fe9ab) goto code_r0x08002cb8;
            pcVar2 = sym.regmap_swr_write.f8fb920028d0f55da817d01b395765f1.cfi_jt;
        }
    }
    else if (arg1 < 0x7c7a4822701f1389) {
        if (arg1 == 0x5b83a3fd302a5421) {
            if ((pcVar1 + -0x8002640 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08002cb8;
        }
        if (arg1 != 0x5bb5053d45c6280b) goto code_r0x08002cb8;
        pcVar2 = sym.swr_slvdev_datapath_control.cfi_jt;
    }
    else if (arg1 == 0x7c7a4822701f1389) {
        pcVar2 = sym.get_matching_swr_slave_device.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002cb8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002cb8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002d0c);
    (*pcVar1)();
}


// ===== sym.swr_read.cfi_jt @ 0x08002558 (size 8) =====

ulong sym.swr_read.cfi_jt(int64_t param_1,uint param_2,uint param_3,ulong param_4,uint param_5)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    if (iVar2 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        pcVar3 = *(iVar2 + 0x1c20);
        __cfi_slowpath_diag(0x472ddadd5f5404d8,pcVar3,0x8000d30);
        uVar1 = (*pcVar3)(iVar2,param_2,param_3,param_4,param_5);
    }
    return uVar1;
}


// ===== sym.swr_connect_port.cfi_jt @ 0x08002560 (size 8) =====

ulong sym.swr_connect_port.cfi_jt
                (int64_t param_1,int64_t param_2,uint8_t param_3,int64_t param_4,int64_t param_5,int64_t param_6,
                int64_t param_7)

{
    uint8_t *puVar1;
    uint uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    int iVar6;
    uint8_t *puVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t iVar14;
    code *pcVar15;
    ulong unaff_x30;
    uint8_t uStack_6c;
    
    *in_x18 = unaff_x30;
    iVar14 = *(param_1 + 0x20);
    if (iVar14 == 0) {
        iVar6 = ___ratelimit(obj.swr_connect_port._rs,"swr_connect_port");
        if (iVar6 != 0) {
            _printk(0x8001290,"swr_connect_port");
        }
        return 0xffffffea;
    }
    if (0xe < param_3) {
        iVar6 = ___ratelimit(obj.swr_connect_port._rs.12,"swr_connect_port");
        if (iVar6 == 0) {
            return 0xffffffea;
        }
        _dev_err(iVar14,"%s: num_port %d exceeds max port %d\n","swr_connect_port",param_3,0xe);
        return 0xffffffea;
    }
    puVar7 = kmem_cache_alloc_trace(_pm_generic_suspend,0xdc0,0x74);
    if (puVar7 != NULL) {
        iVar13 = iVar14 + 0x3a8;
        mutex_lock();
        puVar1 = iVar14 + 0x1c08;
        uStack_6c = *puVar1;
        uVar12 = uStack_6c;
        if (uVar12 == 0) {
            uVar11 = 0;
            iVar8 = *(iVar14 + 0x1bf8);
        }
        else {
            uVar11 = 0;
            iVar8 = *(iVar14 + 0x1bf8);
            do {
                if (*(iVar8 + uVar11 * 8) == 0) {
                    uStack_6c = uVar11;
                    goto code_r0x080034e4;
                }
                uVar11 = uVar11 + 1;
            } while (uVar12 != uVar11);
            uVar11 = uVar12;
            if (uStack_6c == 0xff) {
                mutex_unlock(iVar13);
                kfree(puVar7);
                iVar6 = ___ratelimit(obj.swr_connect_port._rs.14,"swr_connect_port");
                if (iVar6 == 0) {
                    return 0xfffffff4;
                }
                pcVar10 = "%s Max tid reached\n";
                goto code_r0x08003608;
            }
        }
        iVar8 = krealloc(iVar8,uVar11 * 8 + 8,0xcc0);
        if (iVar8 != 0) {
            *(iVar14 + 0x1bf8) = iVar8;
            *puVar1 = *puVar1 + 1;
code_r0x080034e4:
            *(iVar8 + uVar11 * 8) = puVar7;
            mutex_unlock(iVar13);
            uVar3 = *(param_1 + 0x40);
            puVar7[2] = param_3;
            puVar7[1] = uVar3;
            *puVar7 = uStack_6c;
            if (param_3 != 0) {
                uVar11 = 0;
                do {
                    if (uVar11 == 0xe) {
    //WARNING: Does not return
                        pcVar15 = SoftwareBreakpoint(0x5512,0x8003624);
                        (*pcVar15)();
                    }
                    iVar13 = uVar11 * 4;
                    puVar1 = puVar7 + uVar11 + 0x66;
                    uVar3 = *(param_6 + uVar11);
                    uVar4 = *(param_4 + uVar11);
                    uVar2 = *(param_5 + iVar13);
                    puVar1[-99] = *(param_2 + uVar11);
                    uVar5 = *(param_7 + uVar11);
                    uVar11 = uVar11 + 1;
                    puVar1[-0x55] = uVar3;
                    *(puVar7 + iVar13 + 0x20) = uVar2;
                    puVar1[-0xe] = uVar4;
                    *puVar1 = uVar5;
                } while (param_3 != uVar11);
            }
            pcVar15 = *(iVar14 + 0x1c10);
            __cfi_slowpath_diag(0x83b8535899d81f84,pcVar15,0x8000c70);
            uVar9 = (*pcVar15)(iVar14,puVar7);
            return uVar9;
        }
        mutex_unlock(iVar13);
        kfree(puVar7);
        iVar6 = ___ratelimit(obj.swr_connect_port._rs.16,"swr_connect_port");
        if (iVar6 != 0) {
            pcVar10 = "%s Not able to allocate\nmaster port transaction memory\n";
code_r0x08003608:
            _dev_err(iVar14,pcVar10,"swr_connect_port");
            return 0xfffffff4;
        }
    }
    return 0xfffffff4;
}


// ===== sym.__typeid__ZTSFvP10swr_masterE_global_addr @ 0x08002568 (size 8) =====

void sym.__typeid__ZTSFvP10swr_masterE_global_addr(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.board_lock);
    piVar2 = *0x8000810;
    piVar1 = param_1 + 0x390;
    uVar3 = __list_add_valid(piVar1,*0x8000810,obj.swr_master_list);
    if ((uVar3 & 1) != 0) {
        *0x8000810 = piVar1;
        *(param_1 + 0x390) = obj.swr_master_list;
        *(param_1 + 0x398) = piVar2;
        *piVar2 = piVar1;
    }
    pcVar5 = _obj.board_list;
    if (_obj.board_list != obj.board_list) {
        do {
            if ((*(param_1 + 0x3a0) == *(pcVar5 + 0x30)) &&
               (iVar4 = sym.swr_new_device(param_1,pcVar5 + 0x10), iVar4 == 0)) {
                _dev_err(param_1,"can\'t create new device for %s\n",*(pcVar5 + 0x48));
            }
            pcVar5 = *pcVar5;
        } while (pcVar5 != obj.board_list);
    }
    mutex_unlock(obj.board_lock);
    return;
}


// ===== sym.swr_unregister_master.cfi_jt @ 0x08002570 (size 8) =====

void sym.swr_unregister_master.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.swr_lock);
    iVar1 = idr_find(obj.master_idr,*(param_1 + 0x3a0));
    mutex_unlock(obj.swr_lock);
    if (iVar1 == param_1) {
        mutex_lock(obj.board_lock);
        uVar2 = __list_del_entry_valid(param_1 + 0x390);
        if ((uVar2 & 1) != 0) {
            piVar3 = *(param_1 + 0x398);
            iVar1 = *(param_1 + 0x390);
            *(iVar1 + 8) = piVar3;
            *piVar3 = iVar1;
        }
        *(param_1 + 0x390) = 0xdead000000000100;
        *(param_1 + 0x398) = 0xdead000000000122;
        mutex_unlock(obj.board_lock);
        mutex_lock(obj.swr_lock);
        idr_remove(obj.master_idr,*(param_1 + 0x3a0));
        mutex_unlock(obj.swr_lock);
        device_for_each_child(param_1,0,sym.__unregister.815b28cd6dff18f512ec45fedbb8222e.cfi_jt);
        device_unregister(param_1);
    }
    return;
}


// ===== sym.swr_bulk_write.cfi_jt @ 0x08002578 (size 8) =====

ulong sym.swr_bulk_write.cfi_jt(int64_t param_1,uint32_t param_2,ulong param_3,ulong param_4,ulong param_5)

{
    ulong uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar3 = *(param_1 + 0x20), iVar3 == 0)) {
        return 0xffffffea;
    }
    uVar4 = param_2;
    if (*(param_1 + 0x3e0) != 0) {
        uVar2 = *(iVar3 + 0x1c0b);
        uVar4 = *(param_1 + 0x3e0);
        if (uVar2 != (param_2 & 0xff)) {
            if (uVar2 != 0) {
                return 0;
            }
            *(iVar3 + 0x1c0b) = param_2;
            uVar4 = *(param_1 + 0x3e0);
            pcVar5 = *(iVar3 + 0x1c30);
            goto joined_r0x08003e64;
        }
    }
    pcVar5 = *(iVar3 + 0x1c30);
joined_r0x08003e64:
    if (pcVar5 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else {
        __cfi_slowpath_diag(0xa5526ee30063fcb3,pcVar5,0x8000d50);
        uVar1 = (*pcVar5)(iVar3,uVar4,param_3,param_4,param_5);
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002580 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister(obj.soundwire_dev);
    bus_unregister(obj.soundwire_type);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002588 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bus_register(obj.soundwire_type);
    if (iVar1 == 0) {
        iVar1 = device_register(obj.soundwire_dev);
        if (iVar1 == 0) {
            return 0;
        }
    }
    bus_unregister(obj.soundwire_type);
    return iVar1;
}


// ===== sym.swr_port_response.cfi_jt @ 0x08002590 (size 8) =====

void sym.swr_port_response.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x1bf8) + (param_2 & 0xff) * 8) == 0) {
        iVar1 = ___ratelimit(obj.swr_port_response._rs,"swr_port_response");
        if (iVar1 != 0) {
            _dev_err(param_1,"%s: transaction is already NULL\n","swr_port_response");
        }
    }
    else {
        *(*(param_1 + 0x1bf8) + (param_2 & 0xff) * 8) = 0;
        kfree();
    }
    return;
}


// ===== sym.get_matching_swr_slave_device.cfi_jt @ 0x08002598 (size 8) =====

code * sym.get_matching_swr_slave_device.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.board_lock);
    pcVar3 = _obj.swr_master_list;
    do {
        if (pcVar3 == obj.swr_master_list) {
            pcVar2 = NULL;
code_r0x080045e4:
            mutex_unlock(obj.board_lock);
            return pcVar2;
        }
        pcVar1 = pcVar3 + 0x18;
        mutex_lock(pcVar1);
        pcVar2 = pcVar3 + 0x48;
        while (pcVar2 = *pcVar2, pcVar2 != pcVar3 + 0x48) {
            if (*(pcVar2 + 0x308) == param_1) {
                pcVar2 = pcVar2 + -0x30;
                mutex_unlock(pcVar1);
                goto code_r0x080045e4;
            }
        }
        mutex_unlock(pcVar1);
        pcVar3 = *pcVar3;
    } while( true );
}


// ===== sym.swr_new_device.cfi_jt @ 0x080025a0 (size 8) =====

int64_t sym.swr_new_device.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar5 = get_device(), iVar5 == 0)) {
        iVar3 = ___ratelimit(obj.swr_new_device._rs,"swr_new_device");
        if (iVar3 != 0) {
            _printk(0x8001164,"swr_new_device");
        }
    }
    else {
        iVar5 = kmem_cache_alloc_trace(_pm_generic_suspend,0xdc0,0x3f8);
        if (iVar5 == 0) {
            put_device(param_1);
            return 0;
        }
        uVar7 = *(param_2 + 0x28);
        *(iVar5 + 0x20) = param_1;
        *(iVar5 + 0x3d8) = uVar7;
        strlcpy(iVar5,param_2,0x20);
        uVar7 = *(param_2 + 0x30);
        *(iVar5 + 0xa8) = param_1;
        *(iVar5 + 0xc0) = obj.swr_dev_type;
        *(iVar5 + 200) = obj.soundwire_type;
        *(iVar5 + 0x378) = sym.swr_dev_release.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
        *(iVar5 + 0x338) = uVar7;
        mutex_lock(param_1 + 0x3a8);
        piVar8 = *(param_1 + 0x3e0);
        iVar1 = iVar5 + 0x30;
        uVar6 = __list_add_valid(iVar1,piVar8,param_1 + 0x3d8);
        if ((uVar6 & 1) != 0) {
            *(param_1 + 0x3e0) = iVar1;
            *(iVar5 + 0x30) = param_1 + 0x3d8;
            *(iVar5 + 0x38) = piVar8;
            *piVar8 = iVar1;
        }
        mutex_unlock(param_1 + 0x3a8);
        dev_set_name(iVar5 + 0x48,"%s.%lx",iVar5,*(iVar5 + 0x3d8));
        iVar3 = device_register(iVar5 + 0x48);
        if (iVar3 == 0) {
            return iVar5;
        }
        iVar4 = ___ratelimit(obj.swr_new_device._rs.2,"swr_new_device");
        if (iVar4 != 0) {
            _dev_err(param_1,"device [%s] register failed err %d\n",iVar5,iVar3);
        }
        put_device(param_1);
        uVar6 = __list_del_entry_valid(iVar1);
        if ((uVar6 & 1) != 0) {
            iVar2 = *(iVar5 + 0x30);
            piVar8 = *(iVar5 + 0x38);
            *(iVar2 + 8) = piVar8;
            *piVar8 = iVar2;
        }
        *(iVar5 + 0x30) = iVar1;
        *(iVar5 + 0x38) = iVar1;
        kfree(iVar5);
    }
    return 0;
}


// ===== sym.swr_slvdev_datapath_control.cfi_jt @ 0x080025a8 (size 8) =====

ulong sym.swr_slvdev_datapath_control.cfi_jt(int64_t param_1,char param_2,uint32_t param_3)

{
    char cVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        return 0xffffffed;
    }
    iVar3 = *(param_1 + 0x20);
    if (iVar3 == 0) {
        return 0xffffffea;
    }
    if (*(param_1 + 0x3e0) != '\0') {
        cVar1 = *(iVar3 + 0x1c0b);
        if (cVar1 != param_2) {
            if (cVar1 != '\0') {
                return 0;
            }
            *(iVar3 + 0x1c0b) = param_2;
        }
    }
    pcVar4 = *(iVar3 + 0x1c48);
    if (pcVar4 == NULL) {
        return 0;
    }
    __cfi_slowpath_diag(0x49a6495099b987e5,pcVar4,0x8000c50);
    uVar2 = (*pcVar4)(iVar3,param_3 & 1);
    return uVar2;
}


// ===== sym.swr_write.cfi_jt @ 0x080025b0 (size 8) =====

ulong sym.swr_write.cfi_jt(int64_t param_1,uint32_t param_2,uint param_3,ulong param_4)

{
    ulong uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x20);
    if (iVar3 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar4 = param_2;
        if (*(param_1 + 0x3e0) != 0) {
            uVar2 = *(iVar3 + 0x1c0b);
            uVar4 = *(param_1 + 0x3e0);
            if (uVar2 != (param_2 & 0xff)) {
                if (uVar2 != 0) {
                    return 0;
                }
                *(iVar3 + 0x1c0b) = param_2;
                uVar4 = *(param_1 + 0x3e0);
            }
        }
        pcVar5 = *(iVar3 + 0x1c28);
        __cfi_slowpath_diag(0xa4d3a8333f0d2fd0,pcVar5,0x8000d70);
        uVar1 = (*pcVar5)(iVar3,uVar4,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.swr_get_logical_dev_num.cfi_jt @ 0x080025b8 (size 8) =====

uint sym.swr_get_logical_dev_num.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    if (iVar2 == 0) {
        _printk(0x8001290,"swr_get_logical_dev_num");
        uVar1 = 0xffffffea;
    }
    else {
        mutex_lock(iVar2 + 0x3a8);
        pcVar3 = *(iVar2 + 0x1c38);
        __cfi_slowpath_diag(0x96bfb047c02e4e2f,pcVar3,0x8000cb0);
        uVar1 = (*pcVar3)(iVar2,param_2,param_3);
        mutex_unlock(iVar2 + 0x3a8);
    }
    return uVar1;
}


// ===== sym.__unregister.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x080025c0 (size 8) =====

ulong sym.__unregister.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((param_1 != 0) && (param_1 != 0x48)) {
        *in_x18 = unaff_x30;
        device_unregister(param_1);
    }
    return 0;
}


// ===== sym.regmap_swr_gather_write.f8fb920028d0f55da817d01b395765f1.cfi_jt @ 0x080025c8 (size 8) =====

int sym.regmap_swr_gather_write.f8fb920028d0f55da817d01b395765f1.cfi_jt
              (int64_t param_1,uint16_t *param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
    uint32_t uVar1;
    int64_t arg1;
    uint16_t uVar2;
    uint64_t uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = 0;
    if (param_1 != 0) {
        arg1 = param_1 + -0x48;
    }
    iVar6 = dev_get_regmap(param_1,0);
    if (iVar6 == 0) {
        iVar4 = ___ratelimit(obj.regmap_swr_gather_write._rs,"regmap_swr_gather_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar7 = "%s: regmap is NULL\n";
    }
    else {
        if (arg1 != 0) {
            if (*(iVar6 + 0x68) == param_3) {
                uVar8 = *(iVar6 + 0x78);
                if (param_5 < uVar8) {
                    return 0;
                }
                uVar2 = *param_2;
                uVar9 = 0;
                uVar3 = 0;
                if (uVar8 != 0) {
                    uVar3 = param_5 / uVar8;
                }
                do {
                    uVar1 = uVar9 + uVar2;
                    iVar4 = sym.swr_write(arg1,*(arg1 + 0x40),uVar1,param_4 + uVar9 * uVar8);
                    if (iVar4 < 0) {
                        iVar5 = ___ratelimit(obj.regmap_swr_gather_write._rs.10,"regmap_swr_gather_write");
                        if (iVar5 != 0) {
                            _dev_err(param_1,"%s: write reg 0x%x failed, err %d\n","regmap_swr_gather_write",uVar1,
                                     iVar4);
                            return iVar4;
                        }
                        return iVar4;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar3);
                return iVar4;
            }
            iVar4 = ___ratelimit(obj.regmap_swr_gather_write._rs.8,"regmap_swr_gather_write");
            if (iVar4 == 0) {
                return -0x16;
            }
            _dev_err(param_1,"%s: reg size %zd bytes not supported\n","regmap_swr_gather_write",param_3);
            return -0x16;
        }
        iVar4 = ___ratelimit(obj.regmap_swr_gather_write._rs.7,"regmap_swr_gather_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar7 = "%s: swr device is NULL\n";
    }
    _dev_err(param_1,pcVar7,"regmap_swr_gather_write");
    return -0x16;
}


// ===== sym.swr_driver_register.cfi_jt @ 0x080025d0 (size 8) =====

void sym.swr_driver_register.cfi_jt(int64_t *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_1[9] = obj.soundwire_type;
    if (*param_1 != 0) {
        param_1[0xf] = sym.swr_drv_probe.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
    }
    if (param_1[1] != 0) {
        param_1[0x11] = sym.swr_drv_remove.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
    }
    if (param_1[2] != 0) {
        param_1[0x12] = sym.swr_drv_shutdown.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
    }
    driver_register(param_1 + 8);
    return;
}


// ===== sym.regmap_swr_read.f8fb920028d0f55da817d01b395765f1.cfi_jt @ 0x080025d8 (size 8) =====

int sym.regmap_swr_read.f8fb920028d0f55da817d01b395765f1.cfi_jt
              (int64_t param_1,uint16_t *param_2,int64_t param_3,int64_t param_4)

{
    int64_t arg1;
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = 0;
    if (param_1 != 0) {
        arg1 = param_1 + -0x48;
    }
    iVar4 = dev_get_regmap(param_1,0);
    if (iVar4 == 0) {
        iVar2 = ___ratelimit(obj.regmap_swr_read._rs,"regmap_swr_read");
        if (iVar2 == 0) {
            return -0x16;
        }
        pcVar5 = "%s: regmap is NULL\n";
    }
    else {
        if (arg1 != 0) {
            if (*(iVar4 + 0x68) != param_3) {
                iVar2 = ___ratelimit(obj.regmap_swr_read._rs.14,"regmap_swr_read");
                if (iVar2 == 0) {
                    return -0x16;
                }
                _dev_err(param_1,"%s: register size %zd bytes not supported\n","regmap_swr_read",param_3);
                return -0x16;
            }
            uVar1 = *param_2;
            iVar2 = sym.swr_read(arg1,*(arg1 + 0x40),uVar1,param_4);
            if (-1 < iVar2) {
                return iVar2;
            }
            iVar3 = ___ratelimit(obj.regmap_swr_read._rs.16,"regmap_swr_read");
            if (iVar3 != 0) {
                _dev_err(param_1,"%s: codec reg 0x%x read failed %d\n","regmap_swr_read",uVar1,iVar2);
                return iVar2;
            }
            return iVar2;
        }
        iVar2 = ___ratelimit(obj.regmap_swr_read._rs.12,"regmap_swr_read");
        if (iVar2 == 0) {
            return -0x16;
        }
        pcVar5 = "%s: swr is NULL\n";
    }
    _dev_err(param_1,pcVar5,"regmap_swr_read");
    return -0x16;
}


// ===== sym.swr_device_match.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x080025e0 (size 8) =====

uint64_t sym.swr_device_match.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    char *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((param_2 != NULL) && (param_2 != 0x40)) {
        if (*(param_1 + 0x78) == obj.swr_dev_type) {
            if (param_1 == 0) {
                return 0xffffffea;
            }
            param_1 = param_1 + -0x48;
            if (param_1 == 0) {
                return 0xffffffea;
            }
            pcVar3 = param_2[0x16];
            if (pcVar3 == NULL) {
                if (*param_2 != 0) {
                    iVar1 = strcmp(param_1);
                    return iVar1 == 0;
                }
            }
            else if (*pcVar3 != '\0') {
                do {
                    iVar1 = strcmp(param_1,pcVar3);
                    if (iVar1 == 0) {
                        return pcVar3 != NULL;
                    }
                    pcVar3 = pcVar3 + 0x28;
                } while (*pcVar3 != '\0');
                return 0;
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.swr_init_port_params.cfi_jt @ 0x080025e8 (size 8) =====

uint sym.swr_init_port_params.cfi_jt(int64_t param_1,uint param_2,ulong param_3)

{
    uint uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    if (iVar2 == 0) {
        _printk(0x8001290,"swr_init_port_params");
        uVar1 = 0xffffffea;
    }
    else {
        mutex_lock(iVar2 + 0x3a8);
        pcVar3 = *(iVar2 + 0x1c40);
        __cfi_slowpath_diag(0x557ebd4b018aa613,pcVar3,0x8000cd0);
        uVar1 = (*pcVar3)(iVar2,*(param_1 + 0x40),param_2,param_3);
        mutex_unlock(iVar2 + 0x3a8);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFvP10swr_deviceE_global_addr @ 0x080025f0 (size 8) =====

void sym.__typeid__ZTSFvP10swr_deviceE_global_addr(int64_t *param_1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = param_1[4];
    piVar4 = *(iVar3 + 0x3d8);
    if (iVar3 + 0x3d8 != piVar4) {
        do {
            piVar5 = *piVar4;
            if (piVar4 + -6 == param_1) {
                uVar2 = __list_del_entry_valid(piVar4);
                if ((uVar2 & 1) != 0) {
                    iVar3 = *piVar4;
                    piVar1 = piVar4[1];
                    *(iVar3 + 8) = piVar1;
                    *piVar1 = iVar3;
                }
                *piVar4 = piVar4;
                piVar4[1] = piVar4;
                iVar3 = param_1[4];
            }
            piVar4 = piVar5;
        } while (iVar3 + 0x3d8 != piVar5);
    }
    return;
}


// ===== sym.swr_disconnect_port.cfi_jt @ 0x080025f8 (size 8) =====

ulong sym.swr_disconnect_port.cfi_jt
                (int64_t param_1,uint8_t *param_2,uint8_t param_3,uint8_t *param_4,uint8_t *param_5)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    int iVar4;
    uint8_t *puVar5;
    int64_t iVar6;
    ulong uVar7;
    char *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    code *pcVar11;
    uint8_t uVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0x20);
    if (iVar10 == 0) {
        iVar4 = ___ratelimit(obj.swr_disconnect_port._rs,"swr_disconnect_port");
        if (iVar4 != 0) {
            _printk(0x8001290,"swr_disconnect_port");
        }
        return 0xffffffea;
    }
    if (0xe < param_3) {
        iVar4 = ___ratelimit(obj.swr_disconnect_port._rs.18,"swr_disconnect_port");
        if (iVar4 == 0) {
            return 0xffffffea;
        }
        _dev_err(iVar10,"%s: num_port %d exceeds max port %d\n","swr_disconnect_port",param_3,0xe);
        return 0xffffffea;
    }
    puVar5 = kmem_cache_alloc_trace(_pm_generic_suspend,0xdc0,0x74);
    if (puVar5 != NULL) {
        iVar1 = iVar10 + 0x3a8;
        mutex_lock(iVar1);
        puVar2 = iVar10 + 0x1c08;
        uVar12 = *puVar2;
        uVar13 = uVar12;
        if (uVar13 == 0) {
            uVar9 = 0;
            iVar6 = *(iVar10 + 0x1bf8);
        }
        else {
            uVar9 = 0;
            iVar6 = *(iVar10 + 0x1bf8);
            do {
                if (*(iVar6 + uVar9 * 8) == 0) {
                    uVar12 = uVar9;
                    goto code_r0x080037a0;
                }
                uVar9 = uVar9 + 1;
            } while (uVar13 != uVar9);
            uVar9 = uVar13;
            if (uVar12 == 0xff) {
                mutex_unlock(iVar1);
                kfree(puVar5);
                iVar4 = ___ratelimit(obj.swr_disconnect_port._rs.19,"swr_disconnect_port");
                if (iVar4 == 0) {
                    return 0xfffffff4;
                }
                pcVar8 = "%s Max tid reached\n";
                goto code_r0x08003a44;
            }
        }
        iVar6 = krealloc(iVar6,uVar9 * 8 + 8,0xcc0);
        if (iVar6 != 0) {
            *(iVar10 + 0x1bf8) = iVar6;
            *puVar2 = *puVar2 + 1;
code_r0x080037a0:
            *(iVar6 + uVar9 * 8) = puVar5;
            mutex_unlock(iVar1);
            uVar3 = *(param_1 + 0x40);
            *puVar5 = uVar12;
            puVar5[2] = param_3;
            puVar5[1] = uVar3;
            if (param_3 != 0) {
                uVar12 = *param_4;
                uVar3 = *param_5;
                puVar5[3] = *param_2;
                puVar5[0x58] = uVar12;
                puVar5[0x66] = uVar3;
                if (param_3 != 1) {
                    uVar12 = param_4[1];
                    uVar3 = param_5[1];
                    puVar5[4] = param_2[1];
                    puVar5[0x59] = uVar12;
                    puVar5[0x67] = uVar3;
                    if (param_3 != 2) {
                        uVar12 = param_4[2];
                        uVar3 = param_5[2];
                        puVar5[5] = param_2[2];
                        puVar5[0x5a] = uVar12;
                        puVar5[0x68] = uVar3;
                        if (param_3 != 3) {
                            uVar12 = param_4[3];
                            uVar3 = param_5[3];
                            puVar5[6] = param_2[3];
                            puVar5[0x5b] = uVar12;
                            puVar5[0x69] = uVar3;
                            if (param_3 != 4) {
                                uVar12 = param_4[4];
                                uVar3 = param_5[4];
                                puVar5[7] = param_2[4];
                                puVar5[0x5c] = uVar12;
                                puVar5[0x6a] = uVar3;
                                if (param_3 != 5) {
                                    uVar12 = param_4[5];
                                    uVar3 = param_5[5];
                                    puVar5[8] = param_2[5];
                                    puVar5[0x5d] = uVar12;
                                    puVar5[0x6b] = uVar3;
                                    if (param_3 != 6) {
                                        uVar12 = param_4[6];
                                        uVar3 = param_5[6];
                                        puVar5[9] = param_2[6];
                                        puVar5[0x5e] = uVar12;
                                        puVar5[0x6c] = uVar3;
                                        if (param_3 != 7) {
                                            uVar12 = param_4[7];
                                            uVar3 = param_5[7];
                                            puVar5[10] = param_2[7];
                                            puVar5[0x5f] = uVar12;
                                            puVar5[0x6d] = uVar3;
                                            if (param_3 != 8) {
                                                uVar12 = param_4[8];
                                                uVar3 = param_5[8];
                                                puVar5[0xb] = param_2[8];
                                                puVar5[0x60] = uVar12;
                                                puVar5[0x6e] = uVar3;
                                                if (param_3 != 9) {
                                                    uVar12 = param_4[9];
                                                    uVar3 = param_5[9];
                                                    puVar5[0xc] = param_2[9];
                                                    puVar5[0x61] = uVar12;
                                                    puVar5[0x6f] = uVar3;
                                                    if (param_3 != 10) {
                                                        uVar12 = param_4[10];
                                                        uVar3 = param_5[10];
                                                        puVar5[0xd] = param_2[10];
                                                        puVar5[0x62] = uVar12;
                                                        puVar5[0x70] = uVar3;
                                                        if (param_3 != 0xb) {
                                                            uVar12 = param_4[0xb];
                                                            uVar3 = param_5[0xb];
                                                            puVar5[0xe] = param_2[0xb];
                                                            puVar5[99] = uVar12;
                                                            puVar5[0x71] = uVar3;
                                                            if (param_3 != 0xc) {
                                                                uVar12 = param_4[0xc];
                                                                uVar3 = param_5[0xc];
                                                                puVar5[0xf] = param_2[0xc];
                                                                puVar5[100] = uVar12;
                                                                puVar5[0x72] = uVar3;
                                                                if (param_3 != 0xd) {
                                                                    uVar12 = param_4[0xd];
                                                                    uVar3 = param_5[0xd];
                                                                    puVar5[0x10] = param_2[0xd];
                                                                    puVar5[0x65] = uVar12;
                                                                    puVar5[0x73] = uVar3;
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
            pcVar11 = *(iVar10 + 0x1c18);
            __cfi_slowpath_diag(0x83b8535899d81f84,pcVar11,0x8000c90);
            uVar7 = (*pcVar11)(iVar10,puVar5);
            return uVar7;
        }
        mutex_unlock(iVar1);
        kfree(puVar5);
        iVar4 = ___ratelimit(obj.swr_disconnect_port._rs.20,"swr_disconnect_port");
        if (iVar4 != 0) {
            pcVar8 = "%s Not able to allocate\nmaster port transaction memory\n";
code_r0x08003a44:
            _dev_err(iVar10,pcVar8,"swr_disconnect_port");
            return 0xfffffff4;
        }
    }
    return 0xfffffff4;
}


// ===== sym.__devm_regmap_init_swr.cfi_jt @ 0x08002600 (size 8) =====

void sym.__devm_regmap_init_swr.cfi_jt(int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __devm_regmap_init(param_1 + 0x48,obj.regmap_swr,param_1 + 0x48,param_2,param_3,param_4);
    return;
}


// ===== sym.__regmap_init_swr.cfi_jt @ 0x08002608 (size 8) =====

void sym.__regmap_init_swr.cfi_jt(int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __regmap_init(param_1 + 0x48,obj.regmap_swr,param_1 + 0x48,param_2,param_3,param_4);
    return;
}


// ===== sym.swr_driver_unregister.cfi_jt @ 0x08002610 (size 8) =====

void sym.swr_driver_unregister.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        driver_unregister(param_1 + 0x40);
    }
    return;
}


// ===== sym.__typeid__ZTSFiP10swr_deviceE_global_addr @ 0x08002618 (size 8) =====

ulong sym.__typeid__ZTSFiP10swr_deviceE_global_addr(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = *(param_1 + 0xd0);
        uVar1 = 0;
        if ((iVar2 != 0) && (iVar2 != 0x40)) {
            pcVar3 = *(iVar2 + -0x10);
            if (pcVar3 == NULL) {
                uVar1 = 0xffffffed;
            }
            else {
                if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000db0);
                }
                iVar2 = 0;
                if (param_1 != -0x48) {
                    iVar2 = param_1;
                }
                uVar1 = (*pcVar3)(iVar2);
            }
        }
    }
    return uVar1;
}


// ===== sym.swr_reset_device.cfi_jt @ 0x08002620 (size 8) =====

ulong sym.swr_reset_device.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = *(param_1 + 0xd0);
        uVar1 = 0xffffffea;
        if ((iVar2 != 0) && (iVar2 != 0x40)) {
            pcVar3 = *(iVar2 + -8);
            if (pcVar3 == NULL) {
                uVar1 = 0xffffffed;
            }
            else {
                if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000dd0);
                }
                iVar2 = 0;
                if (param_1 != -0x48) {
                    iVar2 = param_1;
                }
                uVar1 = (*pcVar3)(iVar2);
            }
        }
    }
    return uVar1;
}


// ===== sym.swr_device_wakeup_vote.cfi_jt @ 0x08002628 (size 8) =====

uint sym.swr_device_wakeup_vote.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x20);
    if (iVar3 == 0) {
        _printk(0x8001290,"swr_device_wakeup_vote");
        uVar2 = 0xffffffea;
    }
    else {
        mutex_lock(iVar3 + 0x3a8);
        pcVar1 = *(iVar3 + 0x1c58);
        if (pcVar1 == NULL) {
            uVar2 = 0xffffffea;
        }
        else {
            if (1 < (pcVar1 + -0x8002568 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xdc42165020e9923a,pcVar1,0x8000cf0);
            }
            (*pcVar1)(iVar3);
            uVar2 = 0;
        }
        mutex_unlock(iVar3 + 0x3a8);
    }
    return uVar2;
}


// ===== sym.swr_device_wakeup_unvote.cfi_jt @ 0x08002630 (size 8) =====

uint sym.swr_device_wakeup_unvote.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x20);
    if (iVar3 == 0) {
        _printk(0x8001290,"swr_device_wakeup_unvote");
        uVar2 = 0xffffffea;
    }
    else {
        mutex_lock(iVar3 + 0x3a8);
        pcVar1 = *(iVar3 + 0x1c60);
        if (pcVar1 == NULL) {
            uVar2 = 0xffffffea;
        }
        else {
            if (1 < (pcVar1 + -0x8002568 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xdc42165020e9923a,pcVar1,0x8000d10);
            }
            (*pcVar1)(iVar3);
            uVar2 = 0;
        }
        mutex_unlock(iVar3 + 0x3a8);
    }
    return uVar2;
}


// ===== sym.swr_device_up.cfi_jt @ 0x08002638 (size 8) =====

ulong sym.swr_device_up.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = *(param_1 + 0xd0);
        uVar1 = 0;
        if ((iVar2 != 0) && (iVar2 != 0x40)) {
            pcVar3 = *(iVar2 + -0x18);
            if (pcVar3 == NULL) {
                uVar1 = 0xffffffed;
            }
            else {
                if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000d90);
                }
                iVar2 = 0;
                if (param_1 != -0x48) {
                    iVar2 = param_1;
                }
                uVar1 = (*pcVar3)(iVar2);
            }
        }
    }
    return uVar1;
}


// ===== sym.swr_master_release.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x08002640 (size 8) =====

void sym.swr_master_release.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(void)

{
    return;
}


// ===== sym.swr_dev_release.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x08002648 (size 8) =====

void sym.swr_dev_release.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 != 0) && (param_1 + -0x48 != 0)) && (*(param_1 + -0x28) != 0)) {
        iVar1 = *(param_1 + -0x28) + 0x3a8;
        mutex_lock(iVar1);
        iVar2 = param_1 + -0x18;
        uVar5 = __list_del_entry_valid(iVar2);
        if ((uVar5 & 1) != 0) {
            iVar3 = *(param_1 + -0x18);
            piVar4 = *(param_1 + -0x10);
            *(iVar3 + 8) = piVar4;
            *piVar4 = iVar3;
        }
        *(param_1 + -0x18) = iVar2;
        *(param_1 + -0x10) = iVar2;
        mutex_unlock(iVar1);
        if (*(param_1 + -0x28) != 0) {
            put_device();
        }
        kfree(param_1 + -0x48);
    }
    return;
}


// ===== sym.swr_drv_shutdown.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x08002650 (size 8) =====

void sym.swr_drv_shutdown.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x88);
    if (((iVar1 != 0) && (iVar1 != 0x40)) && (pcVar2 = *(iVar1 + -0x30), pcVar2 != NULL)) {
        if (pcVar2 != sym.__typeid__ZTSFvP10swr_deviceE_global_addr) {
            __cfi_slowpath_diag(0xb5f5509b59adc87d,pcVar2,0x8000e30);
        }
        iVar1 = 0;
        if (param_1 != 0) {
            iVar1 = param_1 + -0x48;
        }
        (*pcVar2)(iVar1);
    }
    return;
}


// ===== sym.regmap_swr_write.f8fb920028d0f55da817d01b395765f1.cfi_jt @ 0x08002658 (size 8) =====

int sym.regmap_swr_write.f8fb920028d0f55da817d01b395765f1.cfi_jt(int64_t param_1,ushort *param_2,uint64_t param_3)

{
    uchar *puVar1;
    uint64_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t arg3;
    int64_t arg4;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = dev_get_regmap(param_1,0);
    if (iVar6 == 0) {
        iVar4 = ___ratelimit(obj.regmap_swr_write._rs,"regmap_swr_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar7 = "%s: regmap is NULL\n";
        pcVar8 = "regmap_swr_write";
    }
    else {
        uVar9 = *(iVar6 + 0x68);
        if (param_3 < uVar9) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8002998);
            (*pcVar3)();
        }
        if (param_3 <= *(iVar6 + 0x78) + uVar9 + *(iVar6 + 0x70)) {
            iVar4 = sym.regmap_swr_gather_write(param_1,param_2,uVar9,param_2 + uVar9);
            return iVar4;
        }
        iVar6 = dev_get_regmap(param_1,0);
        if ((param_1 == 0) || (param_1 + -0x48 == 0)) {
            iVar4 = ___ratelimit(obj.regmap_swr_raw_multi_reg_write._rs,"regmap_swr_raw_multi_reg_write");
            if (iVar4 == 0) {
                return -0x16;
            }
            pcVar7 = "%s: swr device is NULL\n";
        }
        else if (iVar6 == 0) {
            iVar4 = ___ratelimit(obj.regmap_swr_raw_multi_reg_write._rs.2,"regmap_swr_raw_multi_reg_write");
            if (iVar4 == 0) {
                return -0x16;
            }
            pcVar7 = "%s: regmap is NULL\n";
        }
        else {
            uVar9 = *(iVar6 + 0x78) + *(iVar6 + 0x68) + *(iVar6 + 0x70);
            if (uVar9 != 0) {
                uVar2 = 0;
                if (uVar9 != 0) {
                    uVar2 = param_3 / uVar9;
                }
                if ((!CARRY8(uVar2,uVar2)) && (arg3 = __kmalloc(uVar2 * 2,0xdc0), arg3 != 0)) {
                    arg4 = __kmalloc(uVar2,0xdc0);
                    if (arg4 == 0) {
                        iVar4 = -0xc;
                    }
                    else {
                        if (uVar9 <= param_3) {
                            uVar9 = 0;
                            do {
                                *(arg3 + uVar9 * 2) = *param_2;
                                puVar1 = param_2 + *(iVar6 + 0x70) + *(iVar6 + 0x68);
                                *(arg4 + uVar9) = *puVar1;
                                uVar9 = uVar9 + 1;
                                param_2 = puVar1 + *(iVar6 + 0x78);
                            } while (uVar9 < uVar2);
                        }
                        iVar4 = sym.swr_bulk_write(param_1 + -0x48,*(param_1 + -8),arg3,arg4);
                        if ((iVar4 != 0) &&
                           (iVar5 = ___ratelimit(obj.regmap_swr_raw_multi_reg_write._rs.5,
                                                 "regmap_swr_raw_multi_reg_write"), iVar5 != 0)) {
                            _dev_err(param_1,"%s: multi reg write failed\n","regmap_swr_raw_multi_reg_write");
                        }
                        kfree(arg4);
                    }
                    kfree(arg3);
                    return iVar4;
                }
                return -0xc;
            }
            iVar4 = ___ratelimit(obj.regmap_swr_raw_multi_reg_write._rs.3,"regmap_swr_raw_multi_reg_write");
            if (iVar4 == 0) {
                return -0x16;
            }
            pcVar7 = "%s: sum of addr, value and pad is 0\n";
        }
        pcVar8 = "regmap_swr_raw_multi_reg_write";
    }
    _dev_err(param_1,pcVar7,pcVar8);
    return -0x16;
}


// ===== sym.swr_register_master.cfi_jt @ 0x08002660 (size 8) =====

int sym.swr_register_master.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.swr_lock);
    iVar2 = of_alias_get_id(*(param_1 + 0x2f0),0x8001131);
    if (iVar2 < 0) {
        iVar2 = *(param_1 + 0x3a0);
    }
    else {
        *(param_1 + 0x3a0) = iVar2;
    }
    iVar2 = idr_alloc(obj.master_idr,param_1,iVar2,iVar2 + 1,0xcc0);
    mutex_unlock(obj.swr_lock);
    if (-1 < iVar2) {
        *(param_1 + 0x3a0) = iVar2;
        if (_segment.ehdr == 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8004858);
            (*pcVar1)();
        }
        dev_set_name(param_1,"swr%u",iVar2);
        *(param_1 + 0x78) = obj.swr_master_type;
        *(param_1 + 0x80) = obj.soundwire_type;
        __mutex_init(param_1 + 0x3a8,"&master->mlock",obj.swr_register_master.__key);
        iVar2 = device_register(param_1);
        if (iVar2 < 0) {
            idr_remove(obj.master_idr,*(param_1 + 0x3a0));
        }
        else {
            iVar2 = 0;
            *(param_1 + 0x3d8) = param_1 + 0x3d8;
            *(param_1 + 0x3e0) = param_1 + 0x3d8;
        }
    }
    return iVar2;
}


// ===== sym.of_register_swr_devices.cfi_jt @ 0x08002668 (size 8) =====

void sym.of_register_swr_devices.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    if (*(param_1 + 0x2f0) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar2 = of_get_next_available_child(*(param_1 + 0x2f0),0);
        uVar4 = 0;
        if (iVar2 != 0) {
            do {
                iStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b0 = 0;
                iVar1 = of_modalias_node(iVar2,&uStack_a8,0x20);
                if (iVar1 < 0) {
                    iVar1 = ___ratelimit(obj.of_register_swr_devices._rs,"of_register_swr_devices");
                    if (iVar1 != 0) {
                        pcVar5 = "of_swr:modalias failure %s\n";
                        goto code_r0x08003140;
                    }
                }
                else {
                    iVar1 = of_property_read_u64(iVar2,0x8001215,&uStack_b0);
                    if (iVar1 == 0) {
                        uStack_80 = uStack_b0;
                        iStack_78 = iVar2;
                        iVar3 = sym.swr_new_device(param_1,&uStack_a8);
                        if (iVar3 != 0) goto code_r0x080030a4;
                        iVar1 = ___ratelimit(obj.of_register_swr_devices._rs.8,"of_register_swr_devices");
                        pcVar5 = "of_swr: Register failed %s\n";
                    }
                    else {
                        iVar1 = ___ratelimit(obj.of_register_swr_devices._rs.6,"of_register_swr_devices");
                        pcVar5 = "of_swr:invalid reg %s\n";
                    }
                    if (iVar1 != 0) {
code_r0x08003140:
                        _dev_err(param_1,pcVar5,*(iVar2 + 0x10));
                    }
                }
code_r0x080030a4:
                iVar2 = of_get_next_available_child(*(param_1 + 0x2f0),iVar2);
                uVar4 = 0;
            } while (iVar2 != 0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return;
    }
    auVar7 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.swr_port_response;
    uVar6 = auVar7._8_8_ & 0xff;
    iVar2 = *(auVar7._0_8_ + 0x1bf8);
    if (*(iVar2 + uVar6 * 8) == 0) {
        iVar1 = ___ratelimit(obj.swr_port_response._rs,"swr_port_response");
        if (iVar1 != 0) {
            _dev_err(auVar7._0_8_,"%s: transaction is already NULL\n","swr_port_response");
        }
    }
    else {
        *(iVar2 + uVar6 * 8) = 0;
        kfree();
    }
    return;
}


// ===== sym.swr_set_device_group.cfi_jt @ 0x08002670 (size 8) =====

ulong sym.swr_set_device_group.cfi_jt(int64_t param_1,char param_2)

{
    if (param_1 != 0) {
        *(param_1 + 0x3e0) = param_2;
        if ((param_2 == '\0') && (*(param_1 + 0x20) != 0)) {
            *(*(param_1 + 0x20) + 0x1c0b) = 0;
        }
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.swr_remove_from_group.cfi_jt @ 0x08002678 (size 8) =====

ulong sym.swr_remove_from_group.cfi_jt(int64_t param_1,char param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar1 = 0xffffffed;
    }
    else {
        iVar2 = *(param_1 + 0x20);
        if (iVar2 == 0) {
            uVar1 = 0xffffffea;
        }
        else {
            if (((*(param_1 + 0x3e0) != '\0') && (*(iVar2 + 0x1c0b) == param_2)) &&
               (pcVar3 = *(iVar2 + 0x1c50), pcVar3 != NULL)) {
                __cfi_slowpath_diag(0x14d6870314834279,pcVar3,0x8000c30);
                (*pcVar3)(iVar2);
            }
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.swr_pm_suspend.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x08002680 (size 8) =====

ulong sym.swr_pm_suspend.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x88);
    if ((iVar2 != 0) && (*(iVar2 + 0x78) != 0)) {
        uVar1 = pm_generic_suspend(param_1);
        return uVar1;
    }
    if (*(param_1 + 0x78) == obj.swr_dev_type) {
        if (param_1 == 0) {
            return 0;
        }
        if (param_1 + -0x48 == 0) {
            return 0;
        }
        if (iVar2 == 0) {
            return 0;
        }
        pcVar3 = *(iVar2 + -0x28);
        if (pcVar3 != NULL) {
            __cfi_slowpath_diag(0x2ea0d82915c9675f,pcVar3,0x8000e50);
            uVar1 = (*pcVar3)(param_1 + -0x48,2);
            return uVar1;
        }
    }
    return 0;
}


// ===== sym.pm_generic_suspend.cfi_jt @ 0x08002688 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_generic_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.swr_pm_resume.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x08002690 (size 8) =====

ulong sym.swr_pm_resume.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x88);
    if ((iVar2 != 0) && (*(iVar2 + 0x78) != 0)) {
        uVar1 = pm_generic_resume(param_1);
        return uVar1;
    }
    if (*(param_1 + 0x78) == obj.swr_dev_type) {
        if (param_1 == 0) {
            return 0;
        }
        if (param_1 + -0x48 == 0) {
            return 0;
        }
        if (iVar2 == 0) {
            return 0;
        }
        pcVar3 = *(iVar2 + -0x20);
        if (pcVar3 != NULL) {
            if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000e70);
            }
            uVar1 = (*pcVar3)(param_1 + -0x48);
            return uVar1;
        }
    }
    return 0;
}


// ===== sym.pm_generic_resume.cfi_jt @ 0x08002698 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_generic_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.swr_drv_probe.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x080026a0 (size 8) =====

uint sym.swr_drv_probe.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint uVar2;
    code *pcVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((*(param_1 + 0x88) != 0) && (puVar4 = *(param_1 + 0x88) + -0x40, puVar4 != NULL)) {
        pcVar3 = *puVar4;
        if (pcVar3 == NULL) {
            uVar2 = 0xffffffed;
        }
        else {
            if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000df0);
            }
            iVar1 = 0;
            if (param_1 != 0) {
                iVar1 = param_1 + -0x48;
            }
            uVar2 = (*pcVar3)(iVar1);
        }
    }
    return uVar2;
}


// ===== sym.swr_drv_remove.815b28cd6dff18f512ec45fedbb8222e.cfi_jt @ 0x080026a8 (size 8) =====

uint sym.swr_drv_remove.815b28cd6dff18f512ec45fedbb8222e.cfi_jt(int64_t param_1)

{
    uint uVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x88);
    uVar1 = 0xffffffea;
    if ((iVar3 != 0) && (iVar3 != 0x40)) {
        pcVar2 = *(iVar3 + -0x38);
        if (pcVar2 == NULL) {
            uVar1 = 0xffffffed;
        }
        else {
            if (4 < (pcVar2 + -0x8002618 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0xbbf3574131fef585,pcVar2,0x8000e10);
            }
            iVar3 = 0;
            if (param_1 != 0) {
                iVar3 = param_1 + -0x48;
            }
            uVar1 = (*pcVar2)(iVar3);
        }
    }
    return uVar1;
}


// ===== sym.__regmap_init_swr @ 0x080026b0 (size 64) =====

void sym.__regmap_init_swr(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __regmap_init(arg1 + 0x48,obj.regmap_swr,arg1 + 0x48,arg2,arg3,arg4);
    return;
}


// ===== sym.__devm_regmap_init_swr @ 0x080026f0 (size 64) =====

void sym.__devm_regmap_init_swr(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __devm_regmap_init(arg1 + 0x48,obj.regmap_swr,arg1 + 0x48,arg2,arg3,arg4);
    return;
}


// ===== sym.regmap_swr_write @ 0x08002730 (size 616) =====

int sym.regmap_swr_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    uint64_t uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t arg3_00;
    int64_t arg4;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = dev_get_regmap(arg1,0);
    if (iVar6 == 0) {
        iVar4 = ___ratelimit(obj.regmap_swr_write._rs,"regmap_swr_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar7 = "%s: regmap is NULL\n";
        pcVar8 = "regmap_swr_write";
    }
    else {
        uVar9 = *(iVar6 + 0x68);
        if (arg3 < uVar9) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8002998);
            (*pcVar3)();
        }
        if (arg3 <= *(iVar6 + 0x78) + uVar9 + *(iVar6 + 0x70)) {
            iVar4 = sym.regmap_swr_gather_write(arg1,arg2,uVar9,arg2 + uVar9);
            return iVar4;
        }
        iVar6 = dev_get_regmap(arg1,0);
        if ((arg1 == 0) || (arg1 + -0x48 == 0)) {
            iVar4 = ___ratelimit(obj.regmap_swr_raw_multi_reg_write._rs,"regmap_swr_raw_multi_reg_write");
            if (iVar4 == 0) {
                return -0x16;
            }
            pcVar7 = "%s: swr device is NULL\n";
        }
        else if (iVar6 == 0) {
            iVar4 = ___ratelimit(obj.regmap_swr_raw_multi_reg_write._rs.2,"regmap_swr_raw_multi_reg_write");
            if (iVar4 == 0) {
                return -0x16;
            }
            pcVar7 = "%s: regmap is NULL\n";
        }
        else {
            uVar9 = *(iVar6 + 0x78) + *(iVar6 + 0x68) + *(iVar6 + 0x70);
            if (uVar9 != 0) {
                uVar2 = 0;
                if (uVar9 != 0) {
                    uVar2 = arg3 / uVar9;
                }
                if ((!CARRY8(uVar2,uVar2)) && (arg3_00 = __kmalloc(uVar2 * 2,0xdc0), arg3_00 != 0)) {
                    arg4 = __kmalloc(uVar2,0xdc0);
                    if (arg4 == 0) {
                        iVar4 = -0xc;
                    }
                    else {
                        if (uVar9 <= arg3) {
                            uVar9 = 0;
                            do {
                                *(arg3_00 + uVar9 * 2) = *arg2;
                                puVar1 = arg2 + *(iVar6 + 0x70) + *(iVar6 + 0x68);
                                *(arg4 + uVar9) = *puVar1;
                                uVar9 = uVar9 + 1;
                                arg2 = puVar1 + *(iVar6 + 0x78);
                            } while (uVar9 < uVar2);
                        }
                        iVar4 = sym.swr_bulk_write(arg1 + -0x48,*(arg1 + -8),arg3_00,arg4);
                        if ((iVar4 != 0) &&
                           (iVar5 = ___ratelimit(obj.regmap_swr_raw_multi_reg_write._rs.5,
                                                 "regmap_swr_raw_multi_reg_write"), iVar5 != 0)) {
                            _dev_err(arg1,"%s: multi reg write failed\n","regmap_swr_raw_multi_reg_write");
                        }
                        kfree(arg4);
                    }
                    kfree(arg3_00);
                    return iVar4;
                }
                return -0xc;
            }
            iVar4 = ___ratelimit(obj.regmap_swr_raw_multi_reg_write._rs.3,"regmap_swr_raw_multi_reg_write");
            if (iVar4 == 0) {
                return -0x16;
            }
            pcVar7 = "%s: sum of addr, value and pad is 0\n";
        }
        pcVar8 = "regmap_swr_raw_multi_reg_write";
    }
    _dev_err(arg1,pcVar7,pcVar8);
    return -0x16;
}


// ===== sym.regmap_swr_gather_write @ 0x0800299c (size 428) =====

int sym.regmap_swr_gather_write(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t arg1_00;
    uint16_t uVar2;
    uint64_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    uint64_t in_x4;
    ulong *in_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    uVar6 = arg1;
    *in_x18 = unaff_x30;
    arg1_00 = 0;
    if (uVar6 != 0) {
        arg1_00 = uVar6 - 0x48;
    }
    iVar7 = dev_get_regmap(uVar6,0);
    if (iVar7 == 0) {
        iVar4 = ___ratelimit(obj.regmap_swr_gather_write._rs,"regmap_swr_gather_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar8 = "%s: regmap is NULL\n";
    }
    else {
        if (arg1_00 != 0) {
            if (*(iVar7 + 0x68) == arg3) {
                uVar9 = *(iVar7 + 0x78);
                if (in_x4 < uVar9) {
                    return 0;
                }
                uVar2 = *arg2;
                uVar10 = 0;
                uVar3 = 0;
                if (uVar9 != 0) {
                    uVar3 = in_x4 / uVar9;
                }
                do {
                    uVar1 = uVar10 + uVar2;
                    iVar4 = sym.swr_write(arg1_00,*(arg1_00 + 0x40),uVar1,arg4 + uVar10 * uVar9);
                    if (iVar4 < 0) {
                        iVar5 = ___ratelimit(obj.regmap_swr_gather_write._rs.10,"regmap_swr_gather_write");
                        if (iVar5 != 0) {
                            _dev_err(uVar6,"%s: write reg 0x%x failed, err %d\n","regmap_swr_gather_write",uVar1,
                                     iVar4);
                            return iVar4;
                        }
                        return iVar4;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar3);
                return iVar4;
            }
            iVar4 = ___ratelimit(obj.regmap_swr_gather_write._rs.8,"regmap_swr_gather_write");
            if (iVar4 == 0) {
                return -0x16;
            }
            _dev_err(uVar6,"%s: reg size %zd bytes not supported\n","regmap_swr_gather_write",arg3);
            return -0x16;
        }
        iVar4 = ___ratelimit(obj.regmap_swr_gather_write._rs.7,"regmap_swr_gather_write");
        if (iVar4 == 0) {
            return -0x16;
        }
        pcVar8 = "%s: swr device is NULL\n";
    }
    _dev_err(uVar6,pcVar8,"regmap_swr_gather_write");
    return -0x16;
}


// ===== sym.regmap_swr_read @ 0x08002b48 (size 364) =====

int sym.regmap_swr_read(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar4 = arg1;
    *in_x18 = unaff_x30;
    arg1_00 = 0;
    if (uVar4 != 0) {
        arg1_00 = uVar4 - 0x48;
    }
    iVar5 = dev_get_regmap(uVar4,0);
    if (iVar5 == 0) {
        iVar2 = ___ratelimit(obj.regmap_swr_read._rs,"regmap_swr_read");
        if (iVar2 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: regmap is NULL\n";
    }
    else {
        if (arg1_00 != 0) {
            if (*(iVar5 + 0x68) != arg3) {
                iVar2 = ___ratelimit(obj.regmap_swr_read._rs.14,"regmap_swr_read");
                if (iVar2 == 0) {
                    return -0x16;
                }
                _dev_err(uVar4,"%s: register size %zd bytes not supported\n","regmap_swr_read",arg3);
                return -0x16;
            }
            uVar1 = *arg2;
            iVar2 = sym.swr_read(arg1_00,*(arg1_00 + 0x40),uVar1,arg4);
            if (-1 < iVar2) {
                return iVar2;
            }
            iVar3 = ___ratelimit(obj.regmap_swr_read._rs.16,"regmap_swr_read");
            if (iVar3 != 0) {
                _dev_err(uVar4,"%s: codec reg 0x%x read failed %d\n","regmap_swr_read",uVar1,iVar2);
                return iVar2;
            }
            return iVar2;
        }
        iVar2 = ___ratelimit(obj.regmap_swr_read._rs.12,"regmap_swr_read");
        if (iVar2 == 0) {
            return -0x16;
        }
        pcVar6 = "%s: swr is NULL\n";
    }
    _dev_err(uVar4,pcVar6,"regmap_swr_read");
    return -0x16;
}


// ===== sym.__cfi_check_fail @ 0x08002cb4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002cf8

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
    //switch table (4 cases) at 0x8001336
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002d0c);
    (*pcVar1)();
}


// ===== sym.swr_remove_device @ 0x08002d0c (size 148) =====

void sym.swr_remove_device(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    piVar4 = *(iVar3 + 0x3d8);
    if (iVar3 + 0x3d8 != piVar4) {
        do {
            piVar5 = *piVar4;
            if (piVar4 + -6 == arg1) {
                uVar2 = __list_del_entry_valid(piVar4);
                if ((uVar2 & 1) != 0) {
                    iVar3 = *piVar4;
                    piVar1 = piVar4[1];
                    *(iVar3 + 8) = piVar1;
                    *piVar1 = iVar3;
                }
                *piVar4 = piVar4;
                piVar4[1] = piVar4;
                iVar3 = *(arg1 + 0x20);
            }
            piVar4 = piVar5;
        } while (iVar3 + 0x3d8 != piVar5);
    }
    return;
}


// ===== sym.swr_new_device @ 0x08002da0 (size 464) =====

int64_t sym.swr_new_device(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar4 = get_device(), iVar4 == 0)) {
        iVar2 = ___ratelimit(obj.swr_new_device._rs,"swr_new_device");
        if (iVar2 != 0) {
            _printk(0x8001164,"swr_new_device");
        }
        iVar4 = 0;
    }
    else {
        iVar4 = kmem_cache_alloc_trace(_pm_generic_suspend,0xdc0,0x3f8);
        if (iVar4 == 0) {
            put_device(arg1);
        }
        else {
            uVar6 = *(arg2 + 0x28);
            *(iVar4 + 0x20) = arg1;
            *(iVar4 + 0x3d8) = uVar6;
            strlcpy(iVar4,arg2,0x20);
            uVar6 = *(arg2 + 0x30);
            *(iVar4 + 0xa8) = arg1;
            *(iVar4 + 0xc0) = obj.swr_dev_type;
            *(iVar4 + 200) = obj.soundwire_type;
            *(iVar4 + 0x378) = sym.swr_dev_release.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
            *(iVar4 + 0x338) = uVar6;
            mutex_lock(arg1 + 0x3a8);
            piVar7 = *(arg1 + 0x3e0);
            iVar1 = iVar4 + 0x30;
            uVar5 = __list_add_valid(iVar1,piVar7,arg1 + 0x3d8);
            if ((uVar5 & 1) != 0) {
                *(arg1 + 0x3e0) = iVar1;
                *(iVar4 + 0x30) = arg1 + 0x3d8;
                *(iVar4 + 0x38) = piVar7;
                *piVar7 = iVar1;
            }
            mutex_unlock(arg1 + 0x3a8);
            dev_set_name(iVar4 + 0x48,"%s.%lx",iVar4,*(iVar4 + 0x3d8));
            iVar2 = device_register(iVar4 + 0x48);
            if (iVar2 != 0) {
                iVar3 = ___ratelimit(obj.swr_new_device._rs.2,"swr_new_device");
                if (iVar3 != 0) {
                    _dev_err(arg1,"device [%s] register failed err %d\n",iVar4,iVar2);
                }
                iVar4 = put_device(arg1);
                return iVar4;
            }
        }
    }
    return iVar4;
}


// ===== sym.swr_dev_release @ 0x08002f70 (size 144) =====

void sym.swr_dev_release(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (arg1 + -0x48 != 0)) && (*(arg1 + -0x28) != 0)) {
        iVar1 = *(arg1 + -0x28) + 0x3a8;
        mutex_lock(iVar1);
        iVar2 = arg1 + -0x18;
        uVar5 = __list_del_entry_valid(iVar2);
        if ((uVar5 & 1) != 0) {
            iVar3 = *(arg1 + -0x18);
            piVar4 = *(arg1 + -0x10);
            *(iVar3 + 8) = piVar4;
            *piVar4 = iVar3;
        }
        *(arg1 + -0x18) = iVar2;
        *(arg1 + -0x10) = iVar2;
        mutex_unlock(iVar1);
        if (*(arg1 + -0x28) != 0) {
            put_device();
        }
        kfree(arg1 + -0x48);
    }
    return;
}


// ===== sym.of_register_swr_devices @ 0x08003000 (size 404) =====

void sym.of_register_swr_devices(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    if (*(arg1 + 0x2f0) == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar2 = of_get_next_available_child(*(arg1 + 0x2f0),0);
        uVar4 = 0;
        if (iVar2 != 0) {
            do {
                iStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_b0 = 0;
                iVar1 = of_modalias_node(iVar2,&uStack_a8,0x20);
                if (iVar1 < 0) {
                    iVar1 = ___ratelimit(obj.of_register_swr_devices._rs,"of_register_swr_devices");
                    if (iVar1 != 0) {
                        pcVar5 = "of_swr:modalias failure %s\n";
                        goto code_r0x08003140;
                    }
                }
                else {
                    iVar1 = of_property_read_u64(iVar2,0x8001215,&uStack_b0);
                    if (iVar1 == 0) {
                        uStack_80 = uStack_b0;
                        iStack_78 = iVar2;
                        iVar3 = sym.swr_new_device(arg1,&uStack_a8);
                        if (iVar3 != 0) goto code_r0x080030a4;
                        iVar1 = ___ratelimit(obj.of_register_swr_devices._rs.8,"of_register_swr_devices");
                        pcVar5 = "of_swr: Register failed %s\n";
                    }
                    else {
                        iVar1 = ___ratelimit(obj.of_register_swr_devices._rs.6,"of_register_swr_devices");
                        pcVar5 = "of_swr:invalid reg %s\n";
                    }
                    if (iVar1 != 0) {
code_r0x08003140:
                        _dev_err(arg1,pcVar5,*(iVar2 + 0x10));
                    }
                }
code_r0x080030a4:
                iVar2 = of_get_next_available_child(*(arg1 + 0x2f0),iVar2);
                uVar4 = 0;
            } while (iVar2 != 0);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return;
    }
    auVar7 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.swr_port_response;
    uVar6 = auVar7._8_8_ & 0xff;
    iVar2 = *(auVar7._0_8_ + 0x1bf8);
    if (*(iVar2 + uVar6 * 8) == 0) {
        iVar1 = ___ratelimit(obj.swr_port_response._rs,"swr_port_response");
        if (iVar1 != 0) {
            _dev_err(auVar7._0_8_,"%s: transaction is already NULL\n","swr_port_response");
        }
    }
    else {
        *(iVar2 + uVar6 * 8) = 0;
        kfree();
    }
    return;
}


// ===== sym.swr_port_response @ 0x08003194 (size 124) =====

void sym.swr_port_response(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x1bf8) + (arg2 & 0xffU) * 8) == 0) {
        iVar1 = ___ratelimit(obj.swr_port_response._rs,"swr_port_response");
        if (iVar1 != 0) {
            _dev_err(arg1,"%s: transaction is already NULL\n","swr_port_response");
        }
    }
    else {
        *(*(arg1 + 0x1bf8) + (arg2 & 0xffU) * 8) = 0;
        kfree();
    }
    return;
}


// ===== sym.swr_remove_from_group @ 0x08003210 (size 144) =====

ulong sym.swr_remove_from_group(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffed;
    }
    else {
        iVar2 = *(arg1 + 0x20);
        if (iVar2 == 0) {
            uVar1 = 0xffffffea;
        }
        else {
            if (((*(arg1 + 0x3e0) != '\0') && (*(iVar2 + 0x1c0b) == (arg2 & 0xff))) &&
               (pcVar3 = *(iVar2 + 0x1c50), pcVar3 != NULL)) {
                __cfi_slowpath_diag(0x14d6870314834279,pcVar3,0x8000c30);
                (*pcVar3)(iVar2);
            }
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.swr_slvdev_datapath_control @ 0x080032a0 (size 180) =====

ulong sym.swr_slvdev_datapath_control(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0xffffffed;
    }
    iVar3 = *(arg1 + 0x20);
    if (iVar3 == 0) {
        return 0xffffffea;
    }
    if (*(arg1 + 0x3e0) != '\0') {
        uVar2 = *(iVar3 + 0x1c0b);
        if (uVar2 != (arg2 & 0xff)) {
            if (uVar2 != 0) {
                return 0;
            }
            *(iVar3 + 0x1c0b) = arg2;
        }
    }
    pcVar4 = *(iVar3 + 0x1c48);
    if (pcVar4 == NULL) {
        return 0;
    }
    __cfi_slowpath_diag(0x49a6495099b987e5,pcVar4,0x8000c50);
    uVar1 = (*pcVar4)(iVar3,arg3 & 1);
    return uVar1;
}


// ===== sym.swr_connect_port @ 0x08003354 (size 720) =====

ulong sym.swr_connect_port(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    uint uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    int iVar6;
    uint8_t *puVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    int64_t in_x4;
    int64_t in_x5;
    int64_t in_x6;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t iVar14;
    code *pcVar15;
    ulong unaff_x30;
    uint8_t uStack_6c;
    
    *in_x18 = unaff_x30;
    iVar14 = *(arg1 + 0x20);
    if (iVar14 == 0) {
        iVar6 = ___ratelimit(obj.swr_connect_port._rs,"swr_connect_port");
        if (iVar6 != 0) {
            _printk(0x8001290,"swr_connect_port");
        }
        return 0xffffffea;
    }
    uVar12 = arg3 & 0xff;
    if (0xe < uVar12) {
        iVar6 = ___ratelimit(obj.swr_connect_port._rs.12,"swr_connect_port");
        if (iVar6 == 0) {
            return 0xffffffea;
        }
        _dev_err(iVar14,"%s: num_port %d exceeds max port %d\n","swr_connect_port",uVar12,0xe);
        return 0xffffffea;
    }
    puVar7 = kmem_cache_alloc_trace(_pm_generic_suspend,0xdc0,0x74);
    if (puVar7 != NULL) {
        iVar13 = iVar14 + 0x3a8;
        mutex_lock();
        puVar1 = iVar14 + 0x1c08;
        uStack_6c = *puVar1;
        uVar12 = uStack_6c;
        if (uVar12 == 0) {
            uVar11 = 0;
            iVar8 = *(iVar14 + 0x1bf8);
        }
        else {
            uVar11 = 0;
            iVar8 = *(iVar14 + 0x1bf8);
            do {
                if (*(iVar8 + uVar11 * 8) == 0) {
                    uStack_6c = uVar11;
                    goto code_r0x080034e4;
                }
                uVar11 = uVar11 + 1;
            } while (uVar12 != uVar11);
            uVar11 = uVar12;
            if (uStack_6c == 0xff) {
                mutex_unlock(iVar13);
                kfree(puVar7);
                iVar6 = ___ratelimit(obj.swr_connect_port._rs.14,"swr_connect_port");
                if (iVar6 == 0) {
                    return 0xfffffff4;
                }
                pcVar10 = "%s Max tid reached\n";
                goto code_r0x08003608;
            }
        }
        iVar8 = krealloc(iVar8,uVar11 * 8 + 8,0xcc0);
        if (iVar8 != 0) {
            *(iVar14 + 0x1bf8) = iVar8;
            *puVar1 = *puVar1 + 1;
code_r0x080034e4:
            *(iVar8 + uVar11 * 8) = puVar7;
            mutex_unlock(iVar13);
            uVar3 = *(arg1 + 0x40);
            puVar7[2] = arg3;
            puVar7[1] = uVar3;
            *puVar7 = uStack_6c;
            if ((arg3 & 0xffU) != 0) {
                uVar11 = 0;
                do {
                    if (uVar11 == 0xe) {
    //WARNING: Does not return
                        pcVar15 = SoftwareBreakpoint(0x5512,0x8003624);
                        (*pcVar15)();
                    }
                    iVar13 = uVar11 * 4;
                    puVar1 = puVar7 + uVar11 + 0x66;
                    uVar3 = *(in_x5 + uVar11);
                    uVar4 = *(arg4 + uVar11);
                    uVar2 = *(in_x4 + iVar13);
                    puVar1[-99] = *(arg2 + uVar11);
                    uVar5 = *(in_x6 + uVar11);
                    uVar11 = uVar11 + 1;
                    puVar1[-0x55] = uVar3;
                    *(puVar7 + iVar13 + 0x20) = uVar2;
                    puVar1[-0xe] = uVar4;
                    *puVar1 = uVar5;
                } while ((arg3 & 0xffU) != uVar11);
            }
            pcVar15 = *(iVar14 + 0x1c10);
            __cfi_slowpath_diag(0x83b8535899d81f84,pcVar15,0x8000c70);
            uVar9 = (*pcVar15)(iVar14,puVar7);
            return uVar9;
        }
        mutex_unlock(iVar13);
        kfree(puVar7);
        iVar6 = ___ratelimit(obj.swr_connect_port._rs.16,"swr_connect_port");
        if (iVar6 != 0) {
            pcVar10 = "%s Not able to allocate\nmaster port transaction memory\n";
code_r0x08003608:
            _dev_err(iVar14,pcVar10,"swr_connect_port");
            return 0xfffffff4;
        }
    }
    return 0xfffffff4;
}


// ===== sym.swr_disconnect_port @ 0x08003624 (size 1080) =====

ulong sym.swr_disconnect_port(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint8_t *puVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    uint8_t *in_x4;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    code *pcVar12;
    uint8_t uVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = *(arg1 + 0x20);
    if (iVar11 == 0) {
        iVar5 = ___ratelimit(obj.swr_disconnect_port._rs,"swr_disconnect_port");
        if (iVar5 != 0) {
            _printk(0x8001290,"swr_disconnect_port");
        }
        return 0xffffffea;
    }
    uVar4 = arg3;
    if (0xe < (uVar4 & 0xff)) {
        iVar5 = ___ratelimit(obj.swr_disconnect_port._rs.18,"swr_disconnect_port");
        if (iVar5 == 0) {
            return 0xffffffea;
        }
        _dev_err(iVar11,"%s: num_port %d exceeds max port %d\n","swr_disconnect_port",uVar4 & 0xff,0xe);
        return 0xffffffea;
    }
    puVar6 = kmem_cache_alloc_trace(_pm_generic_suspend,0xdc0,0x74);
    if (puVar6 != NULL) {
        iVar1 = iVar11 + 0x3a8;
        mutex_lock(iVar1);
        puVar2 = iVar11 + 0x1c08;
        uVar13 = *puVar2;
        uVar14 = uVar13;
        if (uVar14 == 0) {
            uVar10 = 0;
            iVar7 = *(iVar11 + 0x1bf8);
        }
        else {
            uVar10 = 0;
            iVar7 = *(iVar11 + 0x1bf8);
            do {
                if (*(iVar7 + uVar10 * 8) == 0) {
                    uVar13 = uVar10;
                    goto code_r0x080037a0;
                }
                uVar10 = uVar10 + 1;
            } while (uVar14 != uVar10);
            uVar10 = uVar14;
            if (uVar13 == 0xff) {
                mutex_unlock(iVar1);
                kfree(puVar6);
                iVar5 = ___ratelimit(obj.swr_disconnect_port._rs.19,"swr_disconnect_port");
                if (iVar5 == 0) {
                    return 0xfffffff4;
                }
                pcVar9 = "%s Max tid reached\n";
                goto code_r0x08003a44;
            }
        }
        iVar7 = krealloc(iVar7,uVar10 * 8 + 8,0xcc0);
        if (iVar7 != 0) {
            *(iVar11 + 0x1bf8) = iVar7;
            *puVar2 = *puVar2 + 1;
code_r0x080037a0:
            *(iVar7 + uVar10 * 8) = puVar6;
            mutex_unlock(iVar1);
            uVar3 = *(arg1 + 0x40);
            *puVar6 = uVar13;
            puVar6[2] = arg3;
            puVar6[1] = uVar3;
            if ((arg3 & 0xffU) != 0) {
                uVar13 = *arg4;
                uVar3 = *in_x4;
                puVar6[3] = *arg2;
                puVar6[0x58] = uVar13;
                puVar6[0x66] = uVar3;
                if ((uVar4 & 0xff) != 1) {
                    uVar13 = *(arg4 + 1);
                    uVar3 = in_x4[1];
                    puVar6[4] = *(arg2 + 1);
                    puVar6[0x59] = uVar13;
                    puVar6[0x67] = uVar3;
                    if ((uVar4 & 0xff) != 2) {
                        uVar13 = *(arg4 + 2);
                        uVar3 = in_x4[2];
                        puVar6[5] = *(arg2 + 2);
                        puVar6[0x5a] = uVar13;
                        puVar6[0x68] = uVar3;
                        if ((uVar4 & 0xff) != 3) {
                            uVar13 = *(arg4 + 3);
                            uVar3 = in_x4[3];
                            puVar6[6] = *(arg2 + 3);
                            puVar6[0x5b] = uVar13;
                            puVar6[0x69] = uVar3;
                            if ((uVar4 & 0xff) != 4) {
                                uVar13 = *(arg4 + 4);
                                uVar3 = in_x4[4];
                                puVar6[7] = *(arg2 + 4);
                                puVar6[0x5c] = uVar13;
                                puVar6[0x6a] = uVar3;
                                if ((uVar4 & 0xff) != 5) {
                                    uVar13 = *(arg4 + 5);
                                    uVar3 = in_x4[5];
                                    puVar6[8] = *(arg2 + 5);
                                    puVar6[0x5d] = uVar13;
                                    puVar6[0x6b] = uVar3;
                                    if ((uVar4 & 0xff) != 6) {
                                        uVar13 = *(arg4 + 6);
                                        uVar3 = in_x4[6];
                                        puVar6[9] = *(arg2 + 6);
                                        puVar6[0x5e] = uVar13;
                                        puVar6[0x6c] = uVar3;
                                        if ((uVar4 & 0xff) != 7) {
                                            uVar13 = *(arg4 + 7);
                                            uVar3 = in_x4[7];
                                            puVar6[10] = *(arg2 + 7);
                                            puVar6[0x5f] = uVar13;
                                            puVar6[0x6d] = uVar3;
                                            if ((uVar4 & 0xff) != 8) {
                                                uVar13 = *(arg4 + 8);
                                                uVar3 = in_x4[8];
                                                puVar6[0xb] = *(arg2 + 8);
                                                puVar6[0x60] = uVar13;
                                                puVar6[0x6e] = uVar3;
                                                if ((uVar4 & 0xff) != 9) {
                                                    uVar13 = *(arg4 + 9);
                                                    uVar3 = in_x4[9];
                                                    puVar6[0xc] = *(arg2 + 9);
                                                    puVar6[0x61] = uVar13;
                                                    puVar6[0x6f] = uVar3;
                                                    if ((uVar4 & 0xff) != 10) {
                                                        uVar13 = *(arg4 + 10);
                                                        uVar3 = in_x4[10];
                                                        puVar6[0xd] = *(arg2 + 10);
                                                        puVar6[0x62] = uVar13;
                                                        puVar6[0x70] = uVar3;
                                                        if ((uVar4 & 0xff) != 0xb) {
                                                            uVar13 = *(arg4 + 0xb);
                                                            uVar3 = in_x4[0xb];
                                                            puVar6[0xe] = *(arg2 + 0xb);
                                                            puVar6[99] = uVar13;
                                                            puVar6[0x71] = uVar3;
                                                            if ((uVar4 & 0xff) != 0xc) {
                                                                uVar13 = *(arg4 + 0xc);
                                                                uVar3 = in_x4[0xc];
                                                                puVar6[0xf] = *(arg2 + 0xc);
                                                                puVar6[100] = uVar13;
                                                                puVar6[0x72] = uVar3;
                                                                if ((uVar4 & 0xff) != 0xd) {
                                                                    uVar13 = *(arg4 + 0xd);
                                                                    uVar3 = in_x4[0xd];
                                                                    puVar6[0x10] = *(arg2 + 0xd);
                                                                    puVar6[0x65] = uVar13;
                                                                    puVar6[0x73] = uVar3;
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
            pcVar12 = *(iVar11 + 0x1c18);
            __cfi_slowpath_diag(0x83b8535899d81f84,pcVar12,0x8000c90);
            uVar8 = (*pcVar12)(iVar11,puVar6);
            return uVar8;
        }
        mutex_unlock(iVar1);
        kfree(puVar6);
        iVar5 = ___ratelimit(obj.swr_disconnect_port._rs.20,"swr_disconnect_port");
        if (iVar5 != 0) {
            pcVar9 = "%s Not able to allocate\nmaster port transaction memory\n";
code_r0x08003a44:
            _dev_err(iVar11,pcVar9,"swr_disconnect_port");
            return 0xfffffff4;
        }
    }
    return 0xfffffff4;
}


// ===== sym.swr_get_logical_dev_num @ 0x08003a5c (size 180) =====

uint sym.swr_get_logical_dev_num(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    if (iVar2 == 0) {
        _printk(0x8001290,"swr_get_logical_dev_num");
        uVar1 = 0xffffffea;
    }
    else {
        mutex_lock(iVar2 + 0x3a8);
        pcVar3 = *(iVar2 + 0x1c38);
        __cfi_slowpath_diag(0x96bfb047c02e4e2f,pcVar3,0x8000cb0);
        uVar1 = (*pcVar3)(iVar2,arg2,arg3);
        mutex_unlock(iVar2 + 0x3a8);
    }
    return uVar1;
}


// ===== sym.swr_init_port_params @ 0x08003b10 (size 188) =====

uint sym.swr_init_port_params(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    if (iVar2 == 0) {
        _printk(0x8001290,"swr_init_port_params");
        uVar1 = 0xffffffea;
    }
    else {
        mutex_lock(iVar2 + 0x3a8);
        pcVar3 = *(iVar2 + 0x1c40);
        __cfi_slowpath_diag(0x557ebd4b018aa613,pcVar3,0x8000cd0);
        uVar1 = (*pcVar3)(iVar2,*(arg1 + 0x40),arg2 & 0xffffffff,arg3);
        mutex_unlock(iVar2 + 0x3a8);
    }
    return uVar1;
}


// ===== sym.swr_device_wakeup_vote @ 0x08003bcc (size 204) =====

uint sym.swr_device_wakeup_vote(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    if (iVar3 == 0) {
        _printk(0x8001290,"swr_device_wakeup_vote");
        uVar2 = 0xffffffea;
    }
    else {
        mutex_lock(iVar3 + 0x3a8);
        pcVar1 = *(iVar3 + 0x1c58);
        if (pcVar1 == NULL) {
            uVar2 = 0xffffffea;
        }
        else {
            if (1 < (pcVar1 + -0x8002568 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xdc42165020e9923a,pcVar1,0x8000cf0);
            }
            (*pcVar1)(iVar3);
            uVar2 = 0;
        }
        mutex_unlock(iVar3 + 0x3a8);
    }
    return uVar2;
}


// ===== sym.swr_device_wakeup_unvote @ 0x08003c98 (size 204) =====

uint sym.swr_device_wakeup_unvote(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    if (iVar3 == 0) {
        _printk(0x8001290,"swr_device_wakeup_unvote");
        uVar2 = 0xffffffea;
    }
    else {
        mutex_lock(iVar3 + 0x3a8);
        pcVar1 = *(iVar3 + 0x1c60);
        if (pcVar1 == NULL) {
            uVar2 = 0xffffffea;
        }
        else {
            if (1 < (pcVar1 + -0x8002568 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xdc42165020e9923a,pcVar1,0x8000d10);
            }
            (*pcVar1)(iVar3);
            uVar2 = 0;
        }
        mutex_unlock(iVar3 + 0x3a8);
    }
    return uVar2;
}


// ===== sym.swr_read @ 0x08003d64 (size 148) =====

ulong sym.swr_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint in_w4;
    ulong *in_x18;
    int64_t iVar2;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    if (iVar2 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        pcVar3 = *(iVar2 + 0x1c20);
        __cfi_slowpath_diag(0x472ddadd5f5404d8,pcVar3,0x8000d30);
        uVar1 = (*pcVar3)(iVar2,arg2 & 0xffffffff,arg3 & 0xffffffff,arg4,in_w4);
    }
    return uVar1;
}


// ===== sym.swr_bulk_write @ 0x08003df8 (size 220) =====

ulong sym.swr_bulk_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar3 = *(arg1 + 0x20), iVar3 == 0)) {
        return 0xffffffea;
    }
    uVar4 = *(arg1 + 0x3e0);
    if (*(arg1 + 0x3e0) == 0) {
        uVar4 = arg2 & 0xffffffff;
    }
    else {
        uVar2 = *(iVar3 + 0x1c0b);
        if (uVar2 != (arg2 & 0xff)) {
            if (uVar2 != 0) {
                return 0;
            }
            *(iVar3 + 0x1c0b) = arg2;
            uVar4 = *(arg1 + 0x3e0);
            pcVar5 = *(iVar3 + 0x1c30);
            goto joined_r0x08003e64;
        }
    }
    pcVar5 = *(iVar3 + 0x1c30);
joined_r0x08003e64:
    if (pcVar5 == NULL) {
        uVar1 = 0xffffffa1;
    }
    else {
        __cfi_slowpath_diag(0xa5526ee30063fcb3,pcVar5,0x8000d50);
        uVar1 = (*pcVar5)(iVar3,uVar4,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.swr_write @ 0x08003ed4 (size 192) =====

ulong sym.swr_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    if (iVar3 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar4 = *(arg1 + 0x3e0);
        if (*(arg1 + 0x3e0) == 0) {
            uVar4 = arg2 & 0xffffffff;
        }
        else {
            uVar2 = *(iVar3 + 0x1c0b);
            if (uVar2 != (arg2 & 0xff)) {
                if (uVar2 != 0) {
                    return 0;
                }
                *(iVar3 + 0x1c0b) = arg2;
                uVar4 = *(arg1 + 0x3e0);
            }
        }
        pcVar5 = *(iVar3 + 0x1c28);
        __cfi_slowpath_diag(0xa4d3a8333f0d2fd0,pcVar5,0x8000d70);
        uVar1 = (*pcVar5)(iVar3,uVar4,arg3 & 0xffffffff,arg4);
    }
    return uVar1;
}


// ===== sym.swr_device_up @ 0x08003f94 (size 180) =====

ulong sym.swr_device_up(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = *(arg1 + 0xd0);
        uVar1 = 0;
        if ((iVar2 != 0) && (iVar2 != 0x40)) {
            pcVar3 = *(iVar2 + -0x18);
            if (pcVar3 == NULL) {
                uVar1 = 0xffffffed;
            }
            else {
                if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000d90);
                }
                iVar2 = 0;
                if (arg1 != -0x48) {
                    iVar2 = arg1;
                }
                uVar1 = (*pcVar3)(iVar2);
            }
        }
    }
    return uVar1;
}


// ===== sym.swr_device_down @ 0x08004048 (size 180) =====

ulong sym.swr_device_down(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = *(arg1 + 0xd0);
        uVar1 = 0;
        if ((iVar2 != 0) && (iVar2 != 0x40)) {
            pcVar3 = *(iVar2 + -0x10);
            if (pcVar3 == NULL) {
                uVar1 = 0xffffffed;
            }
            else {
                if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000db0);
                }
                iVar2 = 0;
                if (arg1 != -0x48) {
                    iVar2 = arg1;
                }
                uVar1 = (*pcVar3)(iVar2);
            }
        }
    }
    return uVar1;
}


// ===== sym.swr_reset_device @ 0x080040fc (size 180) =====

ulong sym.swr_reset_device(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = *(arg1 + 0xd0);
        uVar1 = 0xffffffea;
        if ((iVar2 != 0) && (iVar2 != 0x40)) {
            pcVar3 = *(iVar2 + -8);
            if (pcVar3 == NULL) {
                uVar1 = 0xffffffed;
            }
            else {
                if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                    __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000dd0);
                }
                iVar2 = 0;
                if (arg1 != -0x48) {
                    iVar2 = arg1;
                }
                uVar1 = (*pcVar3)(iVar2);
            }
        }
    }
    return uVar1;
}


// ===== sym.swr_set_device_group @ 0x080041b0 (size 68) =====

ulong sym.swr_set_device_group(int64_t arg1,uint32_t arg2)

{
    if (arg1 != 0) {
        *(arg1 + 0x3e0) = arg2;
        if (((arg2 & 0xff) == 0) && (*(arg1 + 0x20) != 0)) {
            *(*(arg1 + 0x20) + 0x1c0b) = 0;
        }
        return 0;
    }
    return 0xffffffea;
}


// ===== sym.swr_driver_register @ 0x080041f4 (size 112) =====

void sym.swr_driver_register(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x48) = obj.soundwire_type;
    if (*arg1 != 0) {
        *(arg1 + 0x78) = sym.swr_drv_probe.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
    }
    if (*(arg1 + 8) != 0) {
        *(arg1 + 0x88) = sym.swr_drv_remove.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
    }
    if (*(arg1 + 0x10) != 0) {
        *(arg1 + 0x90) = sym.swr_drv_shutdown.815b28cd6dff18f512ec45fedbb8222e.cfi_jt;
    }
    driver_register(arg1 + 0x40);
    return;
}


// ===== sym.swr_drv_probe @ 0x08004264 (size 168) =====

uint sym.swr_drv_probe(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    code *pcVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((*(arg1 + 0x88) != 0) && (puVar4 = *(arg1 + 0x88) + -0x40, puVar4 != NULL)) {
        pcVar3 = *puVar4;
        if (pcVar3 == NULL) {
            uVar2 = 0xffffffed;
        }
        else {
            if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000df0);
            }
            iVar1 = 0;
            if (arg1 != 0) {
                iVar1 = arg1 + -0x48;
            }
            uVar2 = (*pcVar3)(iVar1);
        }
    }
    return uVar2;
}


// ===== sym.swr_drv_remove @ 0x0800430c (size 168) =====

uint sym.swr_drv_remove(int64_t arg1)

{
    uint uVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x88);
    uVar1 = 0xffffffea;
    if ((iVar3 != 0) && (iVar3 != 0x40)) {
        pcVar2 = *(iVar3 + -0x38);
        if (pcVar2 == NULL) {
            uVar1 = 0xffffffed;
        }
        else {
            if (4 < (pcVar2 + -0x8002618 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0xbbf3574131fef585,pcVar2,0x8000e10);
            }
            iVar3 = 0;
            if (arg1 != 0) {
                iVar3 = arg1 + -0x48;
            }
            uVar1 = (*pcVar2)(iVar3);
        }
    }
    return uVar1;
}


// ===== sym.swr_drv_shutdown @ 0x080043b4 (size 140) =====

void sym.swr_drv_shutdown(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x88);
    if (((iVar1 != 0) && (iVar1 != 0x40)) && (pcVar2 = *(iVar1 + -0x30), pcVar2 != NULL)) {
        if (pcVar2 != sym.__typeid__ZTSFvP10swr_deviceE_global_addr) {
            __cfi_slowpath_diag(0xb5f5509b59adc87d,pcVar2,0x8000e30);
        }
        iVar1 = 0;
        if (arg1 != 0) {
            iVar1 = arg1 + -0x48;
        }
        (*pcVar2)(iVar1);
    }
    return;
}


// ===== sym.swr_driver_unregister @ 0x08004440 (size 48) =====

void sym.swr_driver_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        driver_unregister(arg1 + 0x40);
    }
    return;
}


// ===== sym.swr_master_add_boarddevices @ 0x08004470 (size 224) =====

void sym.swr_master_add_boarddevices(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.board_lock);
    piVar2 = *0x8000810;
    piVar1 = arg1 + 0x390;
    uVar3 = __list_add_valid(piVar1,*0x8000810,obj.swr_master_list);
    if ((uVar3 & 1) != 0) {
        *0x8000810 = piVar1;
        *(arg1 + 0x390) = obj.swr_master_list;
        *(arg1 + 0x398) = piVar2;
        *piVar2 = piVar1;
    }
    pcVar5 = _obj.board_list;
    if (_obj.board_list != obj.board_list) {
        do {
            if ((*(arg1 + 0x3a0) == *(pcVar5 + 0x30)) && (iVar4 = sym.swr_new_device(arg1,pcVar5 + 0x10), iVar4 == 0))
            {
                _dev_err(arg1,"can\'t create new device for %s\n",*(pcVar5 + 0x48));
            }
            pcVar5 = *pcVar5;
        } while (pcVar5 != obj.board_list);
    }
    mutex_unlock(obj.board_lock);
    return;
}


// ===== sym.get_matching_swr_slave_device @ 0x08004550 (size 188) =====

code * sym.get_matching_swr_slave_device(int64_t arg1)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.board_lock);
    pcVar3 = _obj.swr_master_list;
    do {
        if (pcVar3 == obj.swr_master_list) {
            pcVar2 = NULL;
code_r0x080045e4:
            mutex_unlock(obj.board_lock);
            return pcVar2;
        }
        pcVar1 = pcVar3 + 0x18;
        mutex_lock(pcVar1);
        pcVar2 = pcVar3 + 0x48;
        while (pcVar2 = *pcVar2, pcVar2 != pcVar3 + 0x48) {
            if (*(pcVar2 + 0x308) == arg1) {
                pcVar2 = pcVar2 + -0x30;
                mutex_unlock(pcVar1);
                goto code_r0x080045e4;
            }
        }
        mutex_unlock(pcVar1);
        pcVar3 = *pcVar3;
    } while( true );
}


// ===== sym.swr_unregister_master @ 0x0800460c (size 248) =====

void sym.swr_unregister_master(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.swr_lock);
    iVar1 = idr_find(obj.master_idr,*(arg1 + 0x3a0));
    mutex_unlock(obj.swr_lock);
    if (iVar1 == arg1) {
        mutex_lock(obj.board_lock);
        uVar2 = __list_del_entry_valid(arg1 + 0x390);
        if ((uVar2 & 1) != 0) {
            piVar3 = *(arg1 + 0x398);
            iVar1 = *(arg1 + 0x390);
            *(iVar1 + 8) = piVar3;
            *piVar3 = iVar1;
        }
        *(arg1 + 0x390) = 0xdead000000000100;
        *(arg1 + 0x398) = 0xdead000000000122;
        mutex_unlock(obj.board_lock);
        mutex_lock(obj.swr_lock);
        idr_remove(obj.master_idr,*(arg1 + 0x3a0));
        mutex_unlock(obj.swr_lock);
        device_for_each_child(arg1,0,sym.__unregister.815b28cd6dff18f512ec45fedbb8222e.cfi_jt);
        device_unregister(arg1);
    }
    return;
}


// ===== sym.__unregister @ 0x08004704 (size 60) =====

ulong sym.__unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((arg1 != 0) && (arg1 != 0x48)) {
        *in_x18 = unaff_x30;
        device_unregister(arg1);
    }
    return 0;
}


// ===== sym.swr_register_master @ 0x08004740 (size 280) =====

int sym.swr_register_master(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.swr_lock);
    iVar2 = of_alias_get_id(*(arg1 + 0x2f0),0x8001131);
    if (iVar2 < 0) {
        iVar2 = *(arg1 + 0x3a0);
    }
    else {
        *(arg1 + 0x3a0) = iVar2;
    }
    iVar2 = idr_alloc(obj.master_idr,arg1,iVar2,iVar2 + 1,0xcc0);
    mutex_unlock(obj.swr_lock);
    if (-1 < iVar2) {
        *(arg1 + 0x3a0) = iVar2;
        if (_segment.ehdr == 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8004858);
            (*pcVar1)();
        }
        dev_set_name(arg1,"swr%u",iVar2);
        *(arg1 + 0x78) = obj.swr_master_type;
        *(arg1 + 0x80) = obj.soundwire_type;
        __mutex_init(arg1 + 0x3a8,"&master->mlock",obj.swr_register_master.__key);
        iVar2 = device_register(arg1);
        if (iVar2 < 0) {
            idr_remove(obj.master_idr,*(arg1 + 0x3a0));
        }
        else {
            iVar2 = 0;
            *(arg1 + 0x3d8) = arg1 + 0x3d8;
            *(arg1 + 0x3e0) = arg1 + 0x3d8;
        }
    }
    return iVar2;
}


// ===== sym.swr_device_match @ 0x0800485c (size 188) =====

uint64_t sym.swr_device_match(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    char *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((arg2 != 0) && (arg2 != 0x40)) {
        if (*(arg1 + 0x78) == obj.swr_dev_type) {
            if (arg1 == 0) {
                return 0xffffffea;
            }
            arg1 = arg1 + -0x48;
            if (arg1 == 0) {
                return 0xffffffea;
            }
            pcVar3 = *(arg2 + 0xb0);
            if (pcVar3 == NULL) {
                if (*arg2 != 0) {
                    iVar1 = strcmp(arg1);
                    return iVar1 == 0;
                }
            }
            else if (*pcVar3 != '\0') {
                do {
                    iVar1 = strcmp(arg1,pcVar3);
                    if (iVar1 == 0) {
                        return pcVar3 != NULL;
                    }
                    pcVar3 = pcVar3 + 0x28;
                } while (*pcVar3 != '\0');
                return 0;
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.swr_master_release @ 0x08004918 (size 12) =====

void sym.swr_master_release(void)

{
    return;
}


// ===== sym.swr_pm_suspend @ 0x08004924 (size 172) =====

ulong sym.swr_pm_suspend(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x88);
    if ((iVar2 != 0) && (*(iVar2 + 0x78) != 0)) {
        uVar1 = pm_generic_suspend(arg1);
        return uVar1;
    }
    if (*(arg1 + 0x78) == obj.swr_dev_type) {
        if (arg1 == 0) {
            return 0;
        }
        if (arg1 + -0x48 == 0) {
            return 0;
        }
        if (iVar2 == 0) {
            return 0;
        }
        pcVar3 = *(iVar2 + -0x28);
        if (pcVar3 != NULL) {
            __cfi_slowpath_diag(0x2ea0d82915c9675f,pcVar3,0x8000e50);
            uVar1 = (*pcVar3)(arg1 + -0x48,2);
            return uVar1;
        }
    }
    return 0;
}


// ===== sym.swr_pm_resume @ 0x080049d0 (size 204) =====

ulong sym.swr_pm_resume(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x88);
    if ((iVar2 != 0) && (*(iVar2 + 0x78) != 0)) {
        uVar1 = pm_generic_resume(arg1);
        return uVar1;
    }
    if (*(arg1 + 0x78) == obj.swr_dev_type) {
        if (arg1 == 0) {
            return 0;
        }
        if (arg1 + -0x48 == 0) {
            return 0;
        }
        if (iVar2 == 0) {
            return 0;
        }
        pcVar3 = *(iVar2 + -0x20);
        if (pcVar3 != NULL) {
            if (4 < (pcVar3 + -0x8002618 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0xbbf3574131fef585,pcVar3,0x8000e70);
            }
            uVar1 = (*pcVar3)(arg1 + -0x48);
            return uVar1;
        }
    }
    return 0;
}


// ===== sym.init_module @ 0x08004d90 (size 96) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = bus_register(obj.soundwire_type);
    if (iVar1 == 0) {
        iVar1 = device_register(obj.soundwire_dev);
        if (iVar1 == 0) {
            return 0;
        }
    }
    bus_unregister(obj.soundwire_type);
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08004df0 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister(obj.soundwire_dev);
    bus_unregister(obj.soundwire_type);
    return;
}

