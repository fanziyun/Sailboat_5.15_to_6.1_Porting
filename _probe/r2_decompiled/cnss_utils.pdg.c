// decompiled from cnss_utils by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 856) =====

//WARNING: Switch with 1 destination removed at 0x08002224

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x2785571cda25c68e) {
            if (arg1 < -0x52d48cc5904ff47a) {
                if (arg1 == -0x685f520273d08094) {
                    pcVar2 = sym.cnss_utils_set_cc_source.cfi_jt;
                }
                else {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x080021e4;
                    pcVar2 = sym.cnss_utils_get_driver_load_cnt.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x52d48cc5904ff47a) {
                    pcVar2 = sym.cnss_utils_set_wlan_derived_mac_address.cfi_jt;
                    goto code_r0x08001324;
                }
                if (arg1 != -0x2ecdc63a895a60e9) goto code_r0x080021e4;
                pcVar2 = sym.cnss_utils_set_wlan_unsafe_channel.cfi_jt;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 != -0x2785571cda25c68e) {
                if (arg1 != -0x1b8926c717975b99) goto code_r0x080021e4;
                pcVar2 = sym.cnss_utils_get_wlan_mac_address.cfi_jt;
                goto code_r0x08001324;
            }
            pcVar2 = sym.cnss_utils_get_cc_source.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.cnss_utils_mac_open.60b385e0548788412955262438d224da.cfi_jt;
code_r0x08001324:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080021e4;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x66782228eb28e60) goto code_r0x080021e4;
                pcVar2 = sym.cnss_utils_get_wlan_unsafe_channel.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x3cee709a41c24616) {
        if (arg1 < 0x321969b888d4949e) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.seq_read.cfi_jt;
            }
            else {
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x080021e4;
                pcVar2 = sym.cnss_utils_mac_write.60b385e0548788412955262438d224da.cfi_jt;
            }
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
        else {
            if (arg1 != 0x3ca6f3b8cb3a9dcb) goto code_r0x080021e4;
            pcVar2 = sym.cnss_utils_update_device_type.cfi_jt;
        }
    }
    else if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 == 0x3cee709a41c24616) {
            pcVar2 = sym.cnss_utils_wlan_get_dfs_nol.cfi_jt;
        }
        else {
            if (arg1 != 0x5233d5bc7887ae44) goto code_r0x080021e4;
            pcVar2 = sym.cnss_utils_mac_show.60b385e0548788412955262438d224da.cfi_jt;
        }
    }
    else if (arg1 == 0x5b83a3fd302a5421) {
        pcVar2 = sym.cnss_utils_increment_driver_load_cnt.cfi_jt;
    }
    else if (arg1 == 0x6e04d9645e128a57) {
        pcVar2 = sym.cnss_utils_wlan_set_dfs_nol.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080021e4;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080021e4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002238);
    (*pcVar1)();
}


// ===== sym.cnss_utils_get_cc_source.cfi_jt @ 0x08001360 (size 8) =====

uint sym.cnss_utils_get_cc_source.cfi_jt(void)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x1c0);
    }
    return 0xffffffea;
}


// ===== sym.cnss_utils_get_wlan_unsafe_channel.cfi_jt @ 0x08001368 (size 8) =====

uint sym.cnss_utils_get_wlan_unsafe_channel.cfi_jt(ulong param_1,int64_t param_2,uint16_t *param_3,uint16_t param_4)

{
    uint16_t *puVar1;
    uint16_t *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        uVar4 = 0xffffffea;
    }
    else {
        puVar1 = _segment.ehdr + 0xa8;
        mutex_lock(puVar1);
        uVar4 = 0xffffffea;
        if ((param_2 != 0) && (param_3 != NULL)) {
            uVar3 = *puVar2 * 2;
            if (uVar3 < param_4 || uVar3 - param_4 == 0) {
                *param_3 = *puVar2;
                memcpy(param_2,puVar2 + 1,*puVar2 << 1);
                uVar4 = 0;
            }
            else {
                uVar4 = 0xfffffff4;
            }
        }
        mutex_unlock(puVar1);
    }
    return uVar4;
}


// ===== sym.cnss_utils_set_cc_source.cfi_jt @ 0x08001370 (size 8) =====

void sym.cnss_utils_set_cc_source.cfi_jt(ulong param_1,uint param_2)

{
    if (_segment.ehdr != 0) {
        *(_segment.ehdr + 0x1c0) = param_2;
    }
    return;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08001378 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cnss_utils_wlan_get_dfs_nol.cfi_jt @ 0x08001380 (size 8) =====

uint32_t sym.cnss_utils_wlan_get_dfs_nol.cfi_jt(ulong param_1,int64_t param_2,uint16_t param_3)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        return 0xffffffea;
    }
    if (param_2 == 0) {
        return 0xffffffea;
    }
    if (param_3 == 0) {
        return 0xffffffea;
    }
    iVar1 = _segment.ehdr + 0x180;
    _raw_spin_lock_bh(iVar1);
    iVar4 = *(iVar3 + 0x140);
    if (iVar4 != 0) {
        uVar2 = *(iVar3 + 0x148);
        if (uVar2 != 0) {
            uVar5 = param_3;
            if (uVar2 <= uVar5) {
                uVar5 = uVar2;
            }
            memcpy(param_2,iVar4,uVar5);
            goto code_r0x0800172c;
        }
    }
    uVar5 = 0xfffffffe;
code_r0x0800172c:
    _raw_spin_unlock_bh(iVar1);
    return uVar5;
}


// ===== sym.cnss_utils_mac_open.60b385e0548788412955262438d224da.cfi_jt @ 0x08001388 (size 8) =====

void sym.cnss_utils_mac_open.60b385e0548788412955262438d224da.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.cnss_utils_mac_show.60b385e0548788412955262438d224da.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08001390 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001398 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080013a0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_node_with_property(0,"qcom,wlan");
    while( true ) {
        if (iVar1 == 0) {
            return 0xffffffed;
        }
        uVar2 = of_device_is_available(iVar1);
        if ((uVar2 & 1) != 0) break;
        iVar1 = of_find_node_with_property(iVar1,"qcom,wlan");
    }
    iVar1 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x208);
    if (iVar1 != 0) {
        *(iVar1 + 0x1c0) = 0;
        *(iVar1 + 0x200) = 0xffffffff;
        __mutex_init(iVar1 + 0x150,"&priv->unsafe_channel_list_lock",obj.cnss_utils_init.__key);
        __mutex_init(iVar1 + 0x1d0,"&priv->cnss_device_id_lock",obj.cnss_utils_init.__key);
        *(iVar1 + 0x180) = 0;
        uVar2 = debugfs_create_dir("cnss_utils",0);
        if (uVar2 < 0xfffffffffffff001) {
            *(iVar1 + 0x1c8) = uVar2;
            debugfs_create_file("mac_address",0x180,uVar2,iVar1,reloc.__this_module);
        }
        else {
            _printk(0x8000492,uVar2 & 0xffffffff);
        }
        _segment.ehdr = iVar1;
        return 0;
    }
    return 0xfffffff4;
}


// ===== sym.cnss_utils_mac_write.60b385e0548788412955262438d224da.cfi_jt @ 0x080013a8 (size 8) =====

void sym.cnss_utils_mac_write.60b385e0548788412955262438d224da.cfi_jt
               (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    uchar *puVar8;
    uchar *puVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auStack_dc [4];
    int64_t *piStack_d8;
    ushort uStack_cc;
    uchar uStack_ca;
    int64_t aiStack_c8 [17];
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    aiStack_c8[0x10] = *(iVar10 + 0x5e0);
    aiStack_c8[0xe] = 0;
    aiStack_c8[0xf] = 0;
    aiStack_c8[0xc] = 0;
    aiStack_c8[0xd] = 0;
    iVar10 = *(*(param_1 + 0xd8) + 0x80);
    uVar3 = param_3;
    if (0x7e < param_3) {
        uVar3 = 0x7f;
    }
    aiStack_c8[10] = 0;
    aiStack_c8[0xb] = 0;
    aiStack_c8[8] = 0;
    aiStack_c8[9] = 0;
    aiStack_c8[6] = 0;
    aiStack_c8[7] = 0;
    aiStack_c8[4] = 0;
    aiStack_c8[5] = 0;
    aiStack_c8[2] = 0;
    aiStack_c8[3] = 0;
    aiStack_c8[0] = 0;
    aiStack_c8[1] = 0;
    auStack_dc[0] = 0;
    uStack_ca = 0;
    uStack_cc = 0;
    __check_object_size(aiStack_c8,uVar3,0);
    iVar2 = sym._copy_from_user(aiStack_c8,param_2,uVar3);
    if (iVar2 == 0) {
        *(aiStack_c8 + uVar3) = 0;
        piStack_d8 = aiStack_c8;
        uVar4 = strsep(&piStack_d8,0x8000398);
        uVar3 = 0xffffffffffffffea;
        if ((uVar4 == 0) || (piStack_d8 == NULL)) goto code_r0x08001b90;
        iVar2 = strsep(&piStack_d8,0x8000398);
        if (iVar2 != 0) {
            iVar1 = strcmp(0x8000342,iVar2);
            if (iVar1 == 0) {
                iVar5 = strlen(iVar2);
                uVar7 = iVar5 - 2;
                if ((iVar5 - 0xeU < 0x25) && (uVar7 % 0xc == 0)) {
                    iVar1 = strcmp("provisioned",uVar4);
                    if (iVar1 == 0) {
                        puVar9 = iVar10 + 0x188;
                        *(iVar10 + 0x1a0) = uVar7 / 0xc;
                    }
                    else {
                        iVar1 = strcmp("derived",uVar4);
                        if (iVar1 != 0) {
                            uVar6 = 0x8000345;
                            uVar7 = uVar4;
                            goto code_r0x08001d14;
                        }
                        puVar9 = iVar10 + 0x1a4;
                        *(iVar10 + 0x1bc) = uVar7 / 0xc;
                    }
                    uVar3 = param_3;
                    if (uVar7 != 0) {
                        puVar8 = iVar2 + 3;
                        do {
                            uStack_cc = CONCAT11(*puVar8,puVar8[-1]);
                            iVar1 = kstrtou8(&uStack_cc,0x10,auStack_dc);
                            if (iVar1 != 0) goto code_r0x08001b8c;
                            uVar7 = uVar7 - 1;
                            puVar8 = puVar8 + 2;
                            *puVar9 = auStack_dc[0];
                            puVar9 = puVar9 + 1;
                        } while (uVar7 != 0);
                    }
                    goto code_r0x08001b90;
                }
                uVar6 = 0x800043a;
code_r0x08001d14:
                _printk(uVar6,uVar7);
            }
            else {
                _printk(0x80002be);
            }
        }
    }
code_r0x08001b8c:
    uVar3 = 0xffffffffffffffea;
code_r0x08001b90:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == aiStack_c8[0x10]) {
        return;
    }
    auVar11 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.cnss_utils_mac_open;
    single_open(auVar11._8_8_,sym.cnss_utils_mac_show.60b385e0548788412955262438d224da.cfi_jt,*(auVar11._0_8_ + 0x2d8)
               );
    return;
}


// ===== sym.cnss_utils_set_wlan_derived_mac_address.cfi_jt @ 0x080013b0 (size 8) =====

ulong sym.cnss_utils_set_wlan_derived_mac_address.cfi_jt(uint *param_1,uint32_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    if (_segment.ehdr != 0) {
        if ((param_2 != 0) && (param_2 % 6 == 0)) {
            if (0x1d < param_2) {
                _printk(0x80002e8,4);
                return 0xffffffea;
            }
            if (*(_segment.ehdr + 0x1bc) == 0) {
                *(_segment.ehdr + 0x1bc) = param_2 / 6;
                if (5 < param_2) {
                    uVar2 = param_2 / 6;
                    *(iVar1 + 0x1a4) = *param_1;
                    if (uVar2 < 2) {
                        uVar2 = 1;
                    }
                    *(iVar1 + 0x1a8) = *(param_1 + 1);
                    if (0xb < param_2) {
                        *(iVar1 + 0x1aa) = *(param_1 + 6);
                        *(iVar1 + 0x1ae) = *(param_1 + 10);
                        if (uVar2 != 2) {
                            *(iVar1 + 0x1b0) = param_1[3];
                            *(iVar1 + 0x1b4) = *(param_1 + 4);
                            if (uVar2 != 3) {
                                *(iVar1 + 0x1b6) = *(param_1 + 0x12);
                                *(iVar1 + 0x1ba) = *(param_1 + 0x16);
                                return 0;
                            }
                        }
                    }
                }
            }
            else {
                _printk(0x80003c7,*(_segment.ehdr + 0x1bc),1);
            }
            return 0;
        }
        _printk(0x800039a);
    }
    return 0xffffffea;
}


// ===== sym.cnss_utils_set_wlan_mac_address.cfi_jt @ 0x080013b8 (size 8) =====

ulong sym.cnss_utils_set_wlan_mac_address.cfi_jt(uint *param_1,uint32_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    if (_segment.ehdr != 0) {
        if ((param_2 != 0) && (param_2 % 6 == 0)) {
            if (0x1d < param_2) {
                _printk(0x80002e8,4);
                return 0xffffffea;
            }
            if (*(_segment.ehdr + 0x1a0) == 0) {
                *(_segment.ehdr + 0x1a0) = param_2 / 6;
                if (5 < param_2) {
                    uVar2 = param_2 / 6;
                    *(iVar1 + 0x188) = *param_1;
                    if (uVar2 < 2) {
                        uVar2 = 1;
                    }
                    *(iVar1 + 0x18c) = *(param_1 + 1);
                    if (0xb < param_2) {
                        *(iVar1 + 0x18e) = *(param_1 + 6);
                        *(iVar1 + 0x192) = *(param_1 + 10);
                        if (uVar2 != 2) {
                            *(iVar1 + 0x194) = param_1[3];
                            *(iVar1 + 0x198) = *(param_1 + 4);
                            if (uVar2 != 3) {
                                *(iVar1 + 0x19a) = *(param_1 + 0x12);
                                *(iVar1 + 0x19e) = *(param_1 + 0x16);
                                return 0;
                            }
                        }
                    }
                }
            }
            else {
                _printk(0x80003c7,*(_segment.ehdr + 0x1a0),0);
            }
            return 0;
        }
        _printk(0x800039a);
    }
    return 0xffffffea;
}


// ===== sym.cnss_utils_update_device_type.cfi_jt @ 0x080013c0 (size 8) =====

uint sym.cnss_utils_update_device_type.cfi_jt(int param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar1 = _segment.ehdr + 0x1d0;
        mutex_lock(iVar1);
        _printk(0x8000468,param_1);
        iVar2 = *(iVar3 + 0x200);
        if (iVar2 == -1) {
            *(iVar3 + 0x200) = param_1;
            uVar5 = 0x8000229;
            iVar2 = param_1;
        }
        else {
            uVar5 = 0x800027d;
        }
        _printk(uVar5,iVar2);
        mutex_unlock(iVar1);
        uVar4 = *(iVar3 + 0x200);
    }
    return uVar4;
}


// ===== sym.cnss_utils_wlan_set_dfs_nol.cfi_jt @ 0x080013c8 (size 8) =====

ulong sym.cnss_utils_wlan_set_dfs_nol.cfi_jt(ulong param_1,int64_t param_2,int16_t param_3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0xffffffea;
        if ((param_2 != 0) && (param_3 != 0)) {
            iVar3 = kmemdup(param_2,param_3,0xa20);
            if (iVar3 == 0) {
                uVar2 = 0xfffffff4;
            }
            else {
                _raw_spin_lock_bh(iVar1 + 0x180);
                uVar2 = *(iVar1 + 0x140);
                *(iVar1 + 0x140) = iVar3;
                *(iVar1 + 0x148) = param_3;
                _raw_spin_unlock_bh(iVar1 + 0x180);
                kfree(uVar2);
                uVar2 = 0;
            }
        }
    }
    return uVar2;
}


// ===== sym.seq_read.cfi_jt @ 0x080013d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cnss_utils_increment_driver_load_cnt.cfi_jt @ 0x080013d8 (size 8) =====

void sym.cnss_utils_increment_driver_load_cnt.cfi_jt(void)

{
    if (_segment.ehdr != 0) {
        *(_segment.ehdr + 0x184) = *(_segment.ehdr + 0x184) + 1;
    }
    return;
}


// ===== sym.cnss_utils_get_wlan_mac_address.cfi_jt @ 0x080013e0 (size 8) =====

int64_t sym.cnss_utils_get_wlan_mac_address.cfi_jt(ulong param_1,int *param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (*(_segment.ehdr + 0x1a0) != 0) {
            iVar1 = _segment.ehdr + 0x188;
            *param_2 = *(_segment.ehdr + 0x1a0);
            return iVar1;
        }
        _printk(0x8000406,0);
    }
    *param_2 = 0;
    return 0;
}


// ===== sym.cnss_utils_get_wlan_derived_mac_address.cfi_jt @ 0x080013e8 (size 8) =====

int64_t sym.cnss_utils_get_wlan_derived_mac_address.cfi_jt(ulong param_1,int *param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (*(_segment.ehdr + 0x1bc) != 0) {
            iVar1 = _segment.ehdr + 0x1a4;
            *param_2 = *(_segment.ehdr + 0x1bc);
            return iVar1;
        }
        _printk(0x8000406,1);
    }
    *param_2 = 0;
    return 0;
}


// ===== sym.cnss_utils_set_wlan_unsafe_channel.cfi_jt @ 0x080013f0 (size 8) =====

uint sym.cnss_utils_set_wlan_unsafe_channel.cfi_jt(ulong param_1,int64_t param_2,uint16_t param_3)

{
    uint16_t *puVar1;
    uint16_t *puVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        uVar3 = 0xffffffea;
    }
    else {
        puVar1 = _segment.ehdr + 0xa8;
        mutex_lock(puVar1);
        uVar3 = 0xffffffea;
        if ((param_2 != 0) && (param_3 < 0x9e)) {
            *puVar2 = param_3;
            if (param_3 != 0) {
                memcpy(puVar2 + 1,param_2,param_3 << 1);
            }
            uVar3 = 0;
        }
        mutex_unlock(puVar1);
    }
    return uVar3;
}


// ===== sym.cnss_utils_get_driver_load_cnt.cfi_jt @ 0x080013f8 (size 8) =====

uint sym.cnss_utils_get_driver_load_cnt.cfi_jt(void)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x184);
    }
    return 0xffffffea;
}


// ===== sym.cnss_utils_mac_show.60b385e0548788412955262438d224da.cfi_jt @ 0x08001400 (size 8) =====

ulong sym.cnss_utils_mac_show.60b385e0548788412955262438d224da.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x80);
    if ((*(iVar3 + 0x1a0) != 0) && (seq_puts(param_1,""), *(iVar3 + 0x1a0) != 0)) {
        uVar1 = *(iVar3 + 0x188);
        seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                   uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x18c) & 0xff,*(iVar3 + 0x18c) >> 8);
        if (1 < *(iVar3 + 0x1a0)) {
            uVar1 = *(iVar3 + 0x18e);
            seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                       uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x192) & 0xff,*(iVar3 + 0x192) >> 8);
            if (2 < *(iVar3 + 0x1a0)) {
                uVar1 = *(iVar3 + 0x194);
                seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                           uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x198) & 0xff,*(iVar3 + 0x198) >> 8);
                if (3 < *(iVar3 + 0x1a0)) {
                    uVar1 = *(iVar3 + 0x19a);
                    seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                               uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x19e) & 0xff,*(iVar3 + 0x19e) >> 8);
                    uVar1 = *(iVar3 + 0x1a0);
                    if ((4 < uVar1) &&
                       (seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff
                                   ,uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1a4) & 0xff,*(iVar3 + 0x1a4) >> 8
                                  ), 5 < *(iVar3 + 0x1a0))) goto code_r0x080021dc;
                }
            }
        }
    }
    if ((*(iVar3 + 0x1bc) != 0) && (seq_puts(param_1,"\nDerived MAC addresseses\n"), *(iVar3 + 0x1bc) != 0)) {
        uVar1 = *(iVar3 + 0x1a4);
        seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                   uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1a8) & 0xff,*(iVar3 + 0x1a8) >> 8);
        if (1 < *(iVar3 + 0x1bc)) {
            uVar1 = *(iVar3 + 0x1aa);
            seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                       uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1ae) & 0xff,*(iVar3 + 0x1ae) >> 8);
            if (2 < *(iVar3 + 0x1bc)) {
                uVar1 = *(iVar3 + 0x1b0);
                seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                           uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1b4) & 0xff,*(iVar3 + 0x1b4) >> 8);
                if (3 < *(iVar3 + 0x1bc)) {
                    uVar1 = *(iVar3 + 0x1b6);
                    seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                               uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1ba) & 0xff,*(iVar3 + 0x1ba) >> 8);
                    uVar1 = *(iVar3 + 0x1bc);
                    if ((4 < uVar1) &&
                       (seq_printf(param_1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff
                                   ,uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1c0) & 0xff,*(iVar3 + 0x1c0) >> 8
                                  ), 5 < *(iVar3 + 0x1bc))) {
code_r0x080021dc:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80021e0);
                        (*pcVar2)();
                    }
                }
            }
        }
    }
    return 0;
}


// ===== sym.cnss_utils_set_wlan_unsafe_channel @ 0x08001408 (size 164) =====

uint sym.cnss_utils_set_wlan_unsafe_channel(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ushort *puVar1;
    ushort *puVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        uVar3 = 0xffffffea;
    }
    else {
        puVar1 = _segment.ehdr + 0xa8;
        mutex_lock(puVar1);
        uVar3 = 0xffffffea;
        if ((arg1 != 0) && ((arg2 & 0xffff) < 0x9e)) {
            *puVar2 = arg2;
            if ((arg2 & 0xffffU) != 0) {
                memcpy(puVar2 + 1,arg1,(arg2 & 0xffffU) << 1);
            }
            uVar3 = 0;
        }
        mutex_unlock(puVar1);
    }
    return uVar3;
}


// ===== sym.cnss_utils_get_wlan_unsafe_channel @ 0x080014ac (size 176) =====

uint sym.cnss_utils_get_wlan_unsafe_channel(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t *puVar1;
    uint16_t *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        uVar4 = 0xffffffea;
    }
    else {
        puVar1 = _segment.ehdr + 0xa8;
        mutex_lock(puVar1);
        uVar4 = 0xffffffea;
        if ((arg1 != 0) && (arg2 != 0)) {
            uVar3 = *puVar2 * 2;
            if (uVar3 < (arg3 & 0xffffU) || uVar3 - (arg3 & 0xffffU) == 0) {
                *arg2 = *puVar2;
                memcpy(arg1,puVar2 + 1,*puVar2 << 1);
                uVar4 = 0;
            }
            else {
                uVar4 = 0xfffffff4;
            }
        }
        mutex_unlock(puVar1);
    }
    return uVar4;
}


// ===== sym.cnss_utils_update_device_type @ 0x0800155c (size 156) =====

uint sym.cnss_utils_update_device_type(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        uVar3 = 0xffffffea;
    }
    else {
        iVar1 = _segment.ehdr + 0x1d0;
        mutex_lock(iVar1);
        _printk(0x8000468,arg1 & 0xffffffff);
        uVar5 = *(iVar2 + 0x200);
        if (*(iVar2 + 0x200) == 0xffffffff) {
            *(iVar2 + 0x200) = arg1;
            uVar4 = 0x8000229;
            uVar5 = arg1 & 0xffffffff;
        }
        else {
            uVar4 = 0x800027d;
        }
        _printk(uVar4,uVar5);
        mutex_unlock(iVar1);
        uVar3 = *(iVar2 + 0x200);
    }
    return uVar3;
}


// ===== sym.cnss_utils_wlan_set_dfs_nol @ 0x080015f8 (size 176) =====

ulong sym.cnss_utils_wlan_set_dfs_nol(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0xffffffea;
        if ((arg1 != 0) && ((arg2 & 0xffff) != 0)) {
            iVar3 = kmemdup(arg1,arg2 & 0xffff,0xa20);
            if (iVar3 == 0) {
                uVar2 = 0xfffffff4;
            }
            else {
                _raw_spin_lock_bh(iVar1 + 0x180);
                uVar2 = *(iVar1 + 0x140);
                *(iVar1 + 0x140) = iVar3;
                *(iVar1 + 0x148) = arg2;
                _raw_spin_unlock_bh(iVar1 + 0x180);
                kfree(uVar2);
                uVar2 = 0;
            }
        }
    }
    return uVar2;
}


// ===== sym.cnss_utils_wlan_get_dfs_nol @ 0x080016a8 (size 172) =====

uint32_t sym.cnss_utils_wlan_get_dfs_nol(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = _segment.ehdr;
    if (_segment.ehdr == 0) {
        return 0xffffffea;
    }
    if (arg1 == 0) {
        return 0xffffffea;
    }
    if ((arg2 & 0xffff) == 0) {
        return 0xffffffea;
    }
    iVar1 = _segment.ehdr + 0x180;
    _raw_spin_lock_bh(iVar1);
    iVar4 = *(iVar3 + 0x140);
    if (iVar4 != 0) {
        uVar2 = *(iVar3 + 0x148);
        if (uVar2 != 0) {
            arg2 = arg2 & 0xffff;
            if (uVar2 <= arg2) {
                arg2 = uVar2;
            }
            memcpy(arg1,iVar4,arg2);
            goto code_r0x0800172c;
        }
    }
    arg2 = 0xfffffffe;
code_r0x0800172c:
    _raw_spin_unlock_bh(iVar1);
    return arg2;
}


// ===== sym.cnss_utils_increment_driver_load_cnt @ 0x08001754 (size 36) =====

void sym.cnss_utils_increment_driver_load_cnt(void)

{
    if (_segment.ehdr != 0) {
        *(_segment.ehdr + 0x184) = *(_segment.ehdr + 0x184) + 1;
    }
    return;
}


// ===== sym.cnss_utils_get_driver_load_cnt @ 0x08001778 (size 40) =====

uint sym.cnss_utils_get_driver_load_cnt(void)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x184);
    }
    return 0xffffffea;
}


// ===== sym.cnss_utils_set_wlan_mac_address @ 0x080017a0 (size 288) =====

ulong sym.cnss_utils_set_wlan_mac_address(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    if (_segment.ehdr != 0) {
        if ((arg2 != 0) && (arg2 % 6 == 0)) {
            if (0x1d < arg2) {
                _printk(0x80002e8,4);
                return 0xffffffea;
            }
            if (*(_segment.ehdr + 0x1a0) == 0) {
                *(_segment.ehdr + 0x1a0) = arg2 / 6;
                if (5 < arg2) {
                    uVar2 = arg2 / 6;
                    *(iVar1 + 0x188) = *arg1;
                    if (uVar2 < 2) {
                        uVar2 = 1;
                    }
                    *(iVar1 + 0x18c) = *(arg1 + 4);
                    if (0xb < arg2) {
                        *(iVar1 + 0x18e) = *(arg1 + 6);
                        *(iVar1 + 0x192) = *(arg1 + 10);
                        if (uVar2 != 2) {
                            *(iVar1 + 0x194) = *(arg1 + 0xc);
                            *(iVar1 + 0x198) = *(arg1 + 0x10);
                            if (uVar2 != 3) {
                                *(iVar1 + 0x19a) = *(arg1 + 0x12);
                                *(iVar1 + 0x19e) = *(arg1 + 0x16);
                                return 0;
                            }
                        }
                    }
                }
            }
            else {
                _printk(0x80003c7,*(_segment.ehdr + 0x1a0),0);
            }
            return 0;
        }
        _printk(0x800039a);
    }
    return 0xffffffea;
}


// ===== sym.cnss_utils_set_wlan_derived_mac_address @ 0x080018c0 (size 288) =====

ulong sym.cnss_utils_set_wlan_derived_mac_address(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    if (_segment.ehdr != 0) {
        if ((arg2 != 0) && (arg2 % 6 == 0)) {
            if (0x1d < arg2) {
                _printk(0x80002e8,4);
                return 0xffffffea;
            }
            if (*(_segment.ehdr + 0x1bc) == 0) {
                *(_segment.ehdr + 0x1bc) = arg2 / 6;
                if (5 < arg2) {
                    uVar2 = arg2 / 6;
                    *(iVar1 + 0x1a4) = *arg1;
                    if (uVar2 < 2) {
                        uVar2 = 1;
                    }
                    *(iVar1 + 0x1a8) = *(arg1 + 4);
                    if (0xb < arg2) {
                        *(iVar1 + 0x1aa) = *(arg1 + 6);
                        *(iVar1 + 0x1ae) = *(arg1 + 10);
                        if (uVar2 != 2) {
                            *(iVar1 + 0x1b0) = *(arg1 + 0xc);
                            *(iVar1 + 0x1b4) = *(arg1 + 0x10);
                            if (uVar2 != 3) {
                                *(iVar1 + 0x1b6) = *(arg1 + 0x12);
                                *(iVar1 + 0x1ba) = *(arg1 + 0x16);
                                return 0;
                            }
                        }
                    }
                }
            }
            else {
                _printk(0x80003c7,*(_segment.ehdr + 0x1bc),1);
            }
            return 0;
        }
        _printk(0x800039a);
    }
    return 0xffffffea;
}


// ===== sym.cnss_utils_get_wlan_mac_address @ 0x080019e0 (size 100) =====

int64_t sym.cnss_utils_get_wlan_mac_address(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (*(_segment.ehdr + 0x1a0) != 0) {
            iVar1 = _segment.ehdr + 0x188;
            *arg1 = *(_segment.ehdr + 0x1a0);
            return iVar1;
        }
        _printk(0x8000406,0);
    }
    *arg1 = 0;
    return 0;
}


// ===== sym.cnss_utils_get_wlan_derived_mac_address @ 0x08001a44 (size 100) =====

int64_t sym.cnss_utils_get_wlan_derived_mac_address(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (*(_segment.ehdr + 0x1bc) != 0) {
            iVar1 = _segment.ehdr + 0x1a4;
            *arg1 = *(_segment.ehdr + 0x1bc);
            return iVar1;
        }
        _printk(0x8000406,1);
    }
    *arg1 = 0;
    return 0;
}


// ===== sym.cnss_utils_set_cc_source @ 0x08001aa8 (size 28) =====

void sym.cnss_utils_set_cc_source(ulong noname_0,int64_t arg1)

{
    if (_segment.ehdr != 0) {
        *(_segment.ehdr + 0x1c0) = arg1;
    }
    return;
}


// ===== sym.cnss_utils_get_cc_source @ 0x08001ac4 (size 40) =====

uint sym.cnss_utils_get_cc_source(void)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x1c0);
    }
    return 0xffffffea;
}


// ===== sym.cnss_utils_mac_write @ 0x08001aec (size 564) =====

void sym.cnss_utils_mac_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    uchar *puVar9;
    uchar *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auStack_dc [4];
    int64_t *piStack_d8;
    ushort uStack_cc;
    uchar uStack_ca;
    int64_t aiStack_c8 [17];
    
    uVar7 = arg3;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    aiStack_c8[0x10] = *(iVar11 + 0x5e0);
    aiStack_c8[0xe] = 0;
    aiStack_c8[0xf] = 0;
    aiStack_c8[0xc] = 0;
    aiStack_c8[0xd] = 0;
    iVar11 = *(*(arg1 + 0xd8) + 0x80);
    uVar3 = uVar7;
    if (0x7e < uVar7) {
        uVar3 = 0x7f;
    }
    aiStack_c8[10] = 0;
    aiStack_c8[0xb] = 0;
    aiStack_c8[8] = 0;
    aiStack_c8[9] = 0;
    aiStack_c8[6] = 0;
    aiStack_c8[7] = 0;
    aiStack_c8[4] = 0;
    aiStack_c8[5] = 0;
    aiStack_c8[2] = 0;
    aiStack_c8[3] = 0;
    aiStack_c8[0] = 0;
    aiStack_c8[1] = 0;
    auStack_dc[0] = 0;
    uStack_ca = 0;
    uStack_cc = 0;
    __check_object_size(aiStack_c8,uVar3,0);
    iVar2 = sym._copy_from_user(aiStack_c8,arg2,uVar3);
    if (iVar2 == 0) {
        *(aiStack_c8 + uVar3) = 0;
        piStack_d8 = aiStack_c8;
        uVar4 = strsep(&piStack_d8,0x8000398);
        uVar3 = 0xffffffffffffffea;
        if ((uVar4 == 0) || (piStack_d8 == NULL)) goto code_r0x08001b90;
        iVar2 = strsep(&piStack_d8,0x8000398);
        if (iVar2 != 0) {
            iVar1 = strcmp(0x8000342,iVar2);
            if (iVar1 == 0) {
                iVar5 = strlen(iVar2);
                uVar8 = iVar5 - 2;
                if ((iVar5 - 0xeU < 0x25) && (uVar8 % 0xc == 0)) {
                    iVar1 = strcmp("provisioned",uVar4);
                    if (iVar1 == 0) {
                        puVar10 = iVar11 + 0x188;
                        *(iVar11 + 0x1a0) = uVar8 / 0xc;
                    }
                    else {
                        iVar1 = strcmp("derived",uVar4);
                        if (iVar1 != 0) {
                            uVar6 = 0x8000345;
                            uVar8 = uVar4;
                            goto code_r0x08001d14;
                        }
                        puVar10 = iVar11 + 0x1a4;
                        *(iVar11 + 0x1bc) = uVar8 / 0xc;
                    }
                    uVar3 = uVar7;
                    if (uVar8 != 0) {
                        puVar9 = iVar2 + 3;
                        do {
                            uStack_cc = CONCAT11(*puVar9,puVar9[-1]);
                            iVar1 = kstrtou8(&uStack_cc,0x10,auStack_dc);
                            if (iVar1 != 0) goto code_r0x08001b8c;
                            uVar8 = uVar8 - 1;
                            puVar9 = puVar9 + 2;
                            *puVar10 = auStack_dc[0];
                            puVar10 = puVar10 + 1;
                        } while (uVar8 != 0);
                    }
                    goto code_r0x08001b90;
                }
                uVar6 = 0x800043a;
code_r0x08001d14:
                _printk(uVar6,uVar8);
            }
            else {
                _printk(0x80002be);
            }
        }
    }
code_r0x08001b8c:
    uVar3 = 0xffffffffffffffea;
code_r0x08001b90:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == aiStack_c8[0x10]) {
        return;
    }
    auVar12 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.cnss_utils_mac_open;
    single_open(auVar12._8_8_,sym.cnss_utils_mac_show.60b385e0548788412955262438d224da.cfi_jt,*(auVar12._0_8_ + 0x2d8)
               );
    return;
}


// ===== sym.cnss_utils_mac_open @ 0x08001d20 (size 56) =====

void sym.cnss_utils_mac_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.cnss_utils_mac_show.60b385e0548788412955262438d224da.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym._copy_from_user @ 0x08001d58 (size 376) =====

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
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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


// ===== sym.cnss_utils_mac_show @ 0x08001f0c (size 724) =====

ulong sym.cnss_utils_mac_show(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x80);
    if ((*(iVar3 + 0x1a0) != 0) && (seq_puts(arg1,""), *(iVar3 + 0x1a0) != 0)) {
        uVar1 = *(iVar3 + 0x188);
        seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                   uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x18c) & 0xff,*(iVar3 + 0x18c) >> 8);
        if (1 < *(iVar3 + 0x1a0)) {
            uVar1 = *(iVar3 + 0x18e);
            seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                       uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x192) & 0xff,*(iVar3 + 0x192) >> 8);
            if (2 < *(iVar3 + 0x1a0)) {
                uVar1 = *(iVar3 + 0x194);
                seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                           uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x198) & 0xff,*(iVar3 + 0x198) >> 8);
                if (3 < *(iVar3 + 0x1a0)) {
                    uVar1 = *(iVar3 + 0x19a);
                    seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                               uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x19e) & 0xff,*(iVar3 + 0x19e) >> 8);
                    uVar1 = *(iVar3 + 0x1a0);
                    if ((4 < uVar1) &&
                       (seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                                   uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1a4) & 0xff,*(iVar3 + 0x1a4) >> 8)
                       , 5 < *(iVar3 + 0x1a0))) goto code_r0x080021dc;
                }
            }
        }
    }
    if ((*(iVar3 + 0x1bc) != 0) && (seq_puts(arg1,"\nDerived MAC addresseses\n"), *(iVar3 + 0x1bc) != 0)) {
        uVar1 = *(iVar3 + 0x1a4);
        seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                   uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1a8) & 0xff,*(iVar3 + 0x1a8) >> 8);
        if (1 < *(iVar3 + 0x1bc)) {
            uVar1 = *(iVar3 + 0x1aa);
            seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                       uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1ae) & 0xff,*(iVar3 + 0x1ae) >> 8);
            if (2 < *(iVar3 + 0x1bc)) {
                uVar1 = *(iVar3 + 0x1b0);
                seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                           uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1b4) & 0xff,*(iVar3 + 0x1b4) >> 8);
                if (3 < *(iVar3 + 0x1bc)) {
                    uVar1 = *(iVar3 + 0x1b6);
                    seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                               uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1ba) & 0xff,*(iVar3 + 0x1ba) >> 8);
                    uVar1 = *(iVar3 + 0x1bc);
                    if ((4 < uVar1) &&
                       (seq_printf(arg1,"MAC_ADDR:%02x:%02x:%02x:%02x:%02x:%02x\n",uVar1 & 0xff,uVar1 >> 8 & 0xff,
                                   uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,*(iVar3 + 0x1c0) & 0xff,*(iVar3 + 0x1c0) >> 8)
                       , 5 < *(iVar3 + 0x1bc))) {
code_r0x080021dc:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80021e0);
                        (*pcVar2)();
                    }
                }
            }
        }
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080021e0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002224

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
    //switch table (4 cases) at 0x80001e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002238);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080023e8 (size 304) =====

ulong sym.init_module(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_node_with_property(0,"qcom,wlan");
    while( true ) {
        if (iVar1 == 0) {
            return 0xffffffed;
        }
        uVar2 = of_device_is_available(iVar1);
        if ((uVar2 & 1) != 0) break;
        iVar1 = of_find_node_with_property(iVar1,"qcom,wlan");
    }
    iVar1 = kmem_cache_alloc_trace(_seq_read,0xdc0,0x208);
    if (iVar1 != 0) {
        *(iVar1 + 0x1c0) = 0;
        *(iVar1 + 0x200) = 0xffffffff;
        __mutex_init(iVar1 + 0x150,"&priv->unsafe_channel_list_lock",obj.cnss_utils_init.__key);
        __mutex_init(iVar1 + 0x1d0,"&priv->cnss_device_id_lock",obj.cnss_utils_init.__key);
        *(iVar1 + 0x180) = 0;
        uVar2 = debugfs_create_dir("cnss_utils",0);
        if (uVar2 < 0xfffffffffffff001) {
            *(iVar1 + 0x1c8) = uVar2;
            debugfs_create_file("mac_address",0x180,uVar2,iVar1,reloc.__this_module);
        }
        else {
            _printk(0x8000492,uVar2 & 0xffffffff);
        }
        _segment.ehdr = iVar1;
        return 0;
    }
    return 0xfffffff4;
}


// ===== sym.cleanup_module @ 0x08002518 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}

