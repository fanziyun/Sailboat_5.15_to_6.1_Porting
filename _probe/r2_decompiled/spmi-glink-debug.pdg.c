// decompiled from spmi-glink-debug by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 344) =====

//WARNING: Switch with 1 destination removed at 0x08001918

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x70d74b9759644a47) {
            pcVar2 = sym.spmi_glink_read_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
        }
        else {
            if (arg1 != -0x3694e78aa0bd29dd) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8001190 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x080018d8;
            }
            pcVar2 = sym.spmi_glink_write_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
        }
    }
    else if (arg1 < 0x268e9722c14a4592) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0xf445eaa7552bd33) goto code_r0x080018d8;
            pcVar2 = sym.spmi_glink_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
        }
    }
    else if (arg1 == 0x268e9722c14a4592) {
        pcVar2 = sym.spmi_glink_callback.8166636670e3423e3625df9cd4b87c54.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080018d8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080018d8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800192c);
    (*pcVar1)();
}


// ===== sym.spmi_glink_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.spmi_glink_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt(void)

{
    return 0xffffffa1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.spmi_glink_read_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt @ 0x08001178 (size 8) =====

uchar * sym.spmi_glink_read_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt
                  (int64_t param_1,ulong param_2,uint64_t param_3,uint32_t param_4,uint8_t *param_5,
                  uint64_t param_6)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint8_t *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar11;
    uint64_t uVar12;
    uchar *puVar13;
    ulong *puVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_118;
    uint uStack_110;
    uint uStack_10c;
    uint32_t uStack_108;
    uint32_t uStack_104;
    uint32_t uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_e0;
    int64_t *piStack_d8;
    ulong *puStack_d0;
    uchar *puStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint8_t *puStack_a8;
    uint64_t uStack_a0;
    ulong *puStack_98;
    int64_t iStack_90;
    ulong uStack_88;
    uint uStack_80;
    uint uStack_7c;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uVar12 = param_4;
    param_3 = param_3 & 0xffffffff;
    piVar16 = *(param_1 + 0x98);
    iStack_90 = *piVar16 + 0x10;
    puVar8 = param_5;
    uVar9 = param_6;
    mutex_lock();
    do {
        uVar7 = param_6;
        if (0xff < param_6) {
            uVar7 = 0x100;
        }
        uStack_7c = piVar16[2];
        uVar1 = 0x100 - (uVar12 & 0xff);
        if (uVar7 + (uVar12 & 0xff) < 0x101) {
            uVar1 = uVar7;
        }
        puVar11 = *piVar16;
        uStack_78 = param_3 & 0xff;
        uStack_80 = 0x37;
        uStack_74 = uVar12 & 0xffff;
        uVar7 = 0x1c;
        uStack_88 = 0x10000800f;
        puVar14 = puVar11 + 8;
        *puVar14 = 0;
        uStack_70 = uVar1;
        uVar4 = pmic_glink_write(*puVar11,&uStack_88);
        if (uVar4 != 0) {
            puVar13 = uVar4;
            goto code_r0x0800172c;
        }
        iVar5 = wait_for_completion_timeout(puVar14,0xfa);
        if (iVar5 == 0) {
            _dev_err(piVar16[1],"Error, timed out sending message\n");
            puVar13 = 0xffffff92;
            goto code_r0x0800172c;
        }
        if (uVar1 != *(puVar11 + 0xf)) {
            puVar13 = 0xffffffea;
            goto code_r0x0800172c;
        }
        uVar7 = uVar1;
        memcpy(param_5,puVar11 + 0x7c);
        param_5 = param_5 + uVar1;
        uVar4 = (uVar12 & 0xffff) + (uVar1 & 0xffff);
        uVar12 = uVar4;
        param_6 = param_6 - uVar1;
        param_3 = param_3 + (uVar4 >> 0x10);
    } while (param_6 != 0);
    puVar13 = NULL;
code_r0x0800172c:
    mutex_unlock(iStack_90);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return puVar13;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.spmi_glink_write_cmd;
    pcStack_e8 = sym.spmi_glink_write_cmd;
    uStack_e0 = 0x100;
    iVar10 = sp_el0;
    iStack_f8 = *(iVar10 + 0x5e0);
    uVar7 = uVar7 & 0xffffffff;
    piVar15 = *(iVar6 + 0x98);
    iVar10 = *piVar15;
    puStack_f0 = &stack0xffffffffffffffa0;
    piStack_d8 = piVar16;
    puStack_d0 = puVar14;
    puStack_c8 = puVar13;
    uStack_c0 = uVar1;
    uStack_b8 = uVar12;
    uStack_b0 = param_3;
    puStack_a8 = param_5;
    uStack_a0 = param_6;
    puStack_98 = puVar11;
    mutex_lock(iVar10 + 0x10);
    do {
        uStack_10c = piVar15[2];
        uStack_108 = uVar7 & 0xff;
        uStack_104 = param_4 & 0xffff;
        uStack_118 = 0x10000800f;
        uStack_110 = 0x38;
        uStack_100 = *puVar8;
        puVar11 = *piVar15;
        puVar14 = puVar11 + 8;
        *puVar14 = 0;
        uVar4 = pmic_glink_write(*puVar11,&uStack_118,0x1c);
        if (uVar4 != 0) goto code_r0x08001870;
        iVar5 = wait_for_completion_timeout(puVar14,0xfa);
        if (iVar5 == 0) {
            _dev_err(piVar15[1],"Error, timed out sending message\n");
            uVar4 = 0xffffff92;
            goto code_r0x08001870;
        }
        bVar3 = uVar9 != 0;
        param_4 = param_4 & 0xffff;
        if (bVar3) {
            param_4 = param_4 + 1;
        }
        if (bVar3) {
            puVar8 = puVar8 + 1;
        }
        uVar9 = uVar9 - bVar3;
        uVar7 = uVar7 + (param_4 >> 0x10);
    } while (uVar9 != 0);
    uVar4 = 0;
code_r0x08001870:
    mutex_unlock(iVar10 + 0x10);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_f8) {
        auVar17 = __stack_chk_fail();
        puVar13 = auVar17._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar13 != NULL) {
            switch(*puVar13) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar13,auVar17._8_8_,0);
                break;
            default:
                return puVar13;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x800192c);
        (*pcVar2)();
    }
    return uVar4;
}


// ===== sym.spmi_glink_callback.8166636670e3423e3625df9cd4b87c54.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.spmi_glink_callback.8166636670e3423e3625df9cd4b87c54.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong uVar1;
    char *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_2 + 8);
    if (iVar3 == 0x38) {
        if (param_3 != 0x10) {
            _dev_err(*(param_1 + 8),"Invalid write response, glink packet size=%zu\n");
            return 0;
        }
        iVar3 = *(param_2 + 0xc);
        if (iVar3 == 0) {
code_r0x08001584:
            complete(param_1 + 0x40);
            return 0;
        }
        uVar1 = *(param_1 + 8);
        pcVar2 = "glink write failed, ret=%d\n";
    }
    else if (iVar3 == 0x37) {
        if (param_3 != 0x11c) {
            _dev_err(*(param_1 + 8),"Invalid read response, glink packet size=%zu\n");
            return 0;
        }
        iVar3 = *(param_2 + 0x18);
        if (-1 < iVar3) {
            memcpy(param_1 + 0x60,param_2,0x11c);
            goto code_r0x08001584;
        }
        uVar1 = *(param_1 + 8);
        pcVar2 = "glink read failed, ret=%d\n";
    }
    else {
        uVar1 = *(param_1 + 8);
        pcVar2 = "Unknown opcode %u\n";
    }
    _dev_err(uVar1,pcVar2,iVar3);
    return 0;
}


// ===== sym.spmi_glink_write_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt @ 0x08001188 (size 8) =====

uchar * sym.spmi_glink_write_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt
                  (int64_t param_1,ulong param_2,uint32_t param_3,uint32_t param_4,uint8_t *param_5,int64_t param_6
                  )

{
    code *pcVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    uchar *puVar5;
    int64_t iVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_88;
    uint uStack_80;
    uint uStack_7c;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    piVar9 = *(param_1 + 0x98);
    iVar6 = *piVar9;
    mutex_lock(iVar6 + 0x10);
    do {
        uStack_7c = piVar9[2];
        uStack_78 = param_3 & 0xff;
        uStack_74 = param_4 & 0xffff;
        uStack_88 = 0x10000800f;
        uStack_80 = 0x38;
        uStack_70 = *param_5;
        puVar7 = *piVar9;
        puVar8 = puVar7 + 8;
        *puVar8 = 0;
        uVar3 = pmic_glink_write(*puVar7,&uStack_88,0x1c);
        if (uVar3 != 0) goto code_r0x08001870;
        iVar4 = wait_for_completion_timeout(puVar8,0xfa);
        if (iVar4 == 0) {
            _dev_err(piVar9[1],"Error, timed out sending message\n");
            uVar3 = 0xffffff92;
            goto code_r0x08001870;
        }
        bVar2 = param_6 != 0;
        param_4 = param_4 & 0xffff;
        if (bVar2) {
            param_4 = param_4 + 1;
        }
        if (bVar2) {
            param_5 = param_5 + 1;
        }
        param_6 = param_6 - bVar2;
        param_3 = param_3 + (param_4 >> 0x10);
    } while (param_6 != 0);
    uVar3 = 0;
code_r0x08001870:
    mutex_unlock(iVar6 + 0x10);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_68) {
        auVar10 = __stack_chk_fail();
        puVar5 = auVar10._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar10._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x800192c);
        (*pcVar1)();
    }
    return uVar3;
}


// ===== sym.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt @ 0x08001190 (size 8) =====

uint64_t sym.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t *puVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar8;
    int iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    char *pcStack_90;
    ulong uStack_88;
    uint64_t *puStack_80;
    code *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    uVar1 = param_1 + 0x10;
    iStack_68 = *(iVar4 + 0x5e0);
    pcStack_78 = NULL;
    uStack_70 = 0;
    uStack_88 = 0;
    puStack_80 = NULL;
    puVar3 = devm_kmalloc(uVar1,400,0xdc0);
    if (puVar3 != NULL) {
        puVar3[1] = uVar1;
        __mutex_init(puVar3 + 2,"&gd->lock",reloc.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt);
        *(puVar3 + 8) = 0;
        __init_swait_queue_head(puVar3 + 9,"&x->wait",reloc.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt);
        *(param_1 + 0xa8) = puVar3;
        for (iVar4 = of_get_next_available_child(*(param_1 + 0x300),0); iVar4 != 0;
            iVar4 = of_get_next_available_child(uVar5,iVar4)) {
            uVar5 = *(param_1 + 0x300);
            *(puVar3 + 0x31) = puVar3[0x31] + 1;
        }
        iVar9 = puVar3[0x31];
        if (iVar9 == 0) {
            _dev_err(uVar1,"SPMI bus child nodes missing\n");
            uVar6 = 0xffffffed;
            goto code_r0x080012e0;
        }
        if (iVar9 >> 0x3d != 0) {
            uVar6 = 0xfffffff4;
            puVar3[0x30] = 0;
            goto code_r0x080012e0;
        }
        uVar6 = devm_kmalloc(uVar1,iVar9 << 3,0xdc0);
        puVar3[0x30] = uVar6;
        if (uVar6 != 0) {
            uStack_88 = CONCAT44(uStack_88._4_4_,0x800f);
            pcStack_90 = "spmi_register_debug";
            pcStack_78 = sym.spmi_glink_callback.8166636670e3423e3625df9cd4b87c54.cfi_jt;
            puStack_80 = puVar3;
            uVar6 = pmic_glink_register_client(uVar1,&pcStack_90);
            *puVar3 = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
                iVar4 = of_get_next_available_child(*(param_1 + 0x300),0);
                if (iVar4 != 0) {
                    iVar9 = 0;
                    do {
                        iVar7 = spmi_controller_alloc(uVar1,0x18);
                        if (iVar7 == 0) {
                            uVar6 = 0xfffffff4;
code_r0x080013e4:
                            puVar8 = *(param_1 + 0xa8);
                            if (0 < *(puVar8 + 0x31)) {
                                iVar4 = 0;
                                do {
                                    iVar7 = *(puVar8[0x30] + iVar4 * 8);
                                    if ((iVar7 != 0) &&
                                       (spmi_controller_remove(*(iVar7 + 8)), *(*(puVar8[0x30] + iVar4 * 8) + 8) != 0))
                                    {
                                        put_device();
                                    }
                                    iVar4 = iVar4 + 1;
                                } while (iVar4 < *(puVar8 + 0x31));
                            }
                            pmic_glink_unregister_client(*puVar8);
                            goto code_r0x080012e0;
                        }
                        piVar10 = *(iVar7 + 0x98);
                        *piVar10 = puVar3;
                        piVar10[1] = iVar7;
                        uVar2 = of_property_read_variable_u32_array(iVar4,0x80003d0,piVar10 + 2,1,0);
                        if (uVar2 < 0) {
                            uVar6 = uVar2;
                            _dev_err(uVar1,"Could not find reg property, ret=%d\n",uVar6);
code_r0x080013dc:
                            put_device(iVar7);
                            goto code_r0x080013e4;
                        }
                        *(iVar7 + 0x3a0) = sym.spmi_glink_read_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
                        *(iVar7 + 0x3a8) = sym.spmi_glink_write_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
                        *(iVar7 + 0x2f0) = iVar4;
                        *(iVar7 + 0x398) = sym.spmi_glink_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
                        uVar2 = spmi_controller_add(iVar7);
                        if (uVar2 != 0) {
                            uVar6 = uVar2;
                            goto code_r0x080013dc;
                        }
                        *(puVar3[0x30] + iVar9 * 8) = piVar10;
                        iVar9 = iVar9 + 1;
                        iVar4 = of_get_next_available_child(*(param_1 + 0x300),iVar4);
                    } while (iVar4 != 0);
                }
                uVar6 = 0;
            }
            else if (uVar6 == -0x205) {
                uVar6 = 0xfffffdfb;
            }
            else {
                _dev_err(uVar1,"Error registering with pmic_glink, ret=%d\n",uVar6 & 0xffffffff);
            }
            goto code_r0x080012e0;
        }
    }
    uVar6 = 0xfffffff4;
code_r0x080012e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.spmi_glink_remove;
    puVar8 = *(iVar4 + 0xa8);
    if (0 < *(puVar8 + 0x31)) {
        iVar4 = 0;
        do {
            iVar7 = *(puVar8[0x30] + iVar4 * 8);
            if ((iVar7 != 0) && (spmi_controller_remove(*(iVar7 + 8)), *(*(puVar8[0x30] + iVar4 * 8) + 8) != 0)) {
                put_device();
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(puVar8 + 0x31));
    }
    pmic_glink_unregister_client(*puVar8);
    return 0;
}


// ===== sym.spmi_glink_remove.8166636670e3423e3625df9cd4b87c54.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.spmi_glink_remove.8166636670e3423e3625df9cd4b87c54.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *puVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + 0xa8);
    if (0 < *(puVar2 + 0x31)) {
        iVar3 = 0;
        do {
            iVar1 = *(puVar2[0x30] + iVar3 * 8);
            if (iVar1 != 0) {
                spmi_controller_remove(*(iVar1 + 8));
                if (*(*(puVar2[0x30] + iVar3 * 8) + 8) != 0) {
                    put_device();
                }
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < *(puVar2 + 0x31));
    }
    pmic_glink_unregister_client(*puVar2);
    return 0;
}


// ===== sym.spmi_glink_probe @ 0x080011a0 (size 768) =====

uint64_t sym.spmi_glink_probe(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t *puVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar8;
    int iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    char *pcStack_90;
    ulong uStack_88;
    uint64_t *puStack_80;
    code *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    uVar1 = arg1 + 0x10;
    iStack_68 = *(iVar4 + 0x5e0);
    pcStack_78 = NULL;
    uStack_70 = 0;
    uStack_88 = 0;
    puStack_80 = NULL;
    puVar3 = devm_kmalloc(uVar1,400,0xdc0);
    if (puVar3 != NULL) {
        puVar3[1] = uVar1;
        __mutex_init(puVar3 + 2,"&gd->lock",reloc.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt);
        *(puVar3 + 8) = 0;
        __init_swait_queue_head(puVar3 + 9,"&x->wait",reloc.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt);
        *(arg1 + 0xa8) = puVar3;
        for (iVar4 = of_get_next_available_child(*(arg1 + 0x300),0); iVar4 != 0;
            iVar4 = of_get_next_available_child(uVar5,iVar4)) {
            uVar5 = *(arg1 + 0x300);
            *(puVar3 + 0x31) = puVar3[0x31] + 1;
        }
        iVar9 = puVar3[0x31];
        if (iVar9 == 0) {
            _dev_err(uVar1,"SPMI bus child nodes missing\n");
            uVar6 = 0xffffffed;
            goto code_r0x080012e0;
        }
        if (iVar9 >> 0x3d != 0) {
            uVar6 = 0xfffffff4;
            puVar3[0x30] = 0;
            goto code_r0x080012e0;
        }
        uVar6 = devm_kmalloc(uVar1,iVar9 << 3,0xdc0);
        puVar3[0x30] = uVar6;
        if (uVar6 != 0) {
            uStack_88 = CONCAT44(uStack_88._4_4_,0x800f);
            pcStack_90 = "spmi_register_debug";
            pcStack_78 = sym.spmi_glink_callback.8166636670e3423e3625df9cd4b87c54.cfi_jt;
            puStack_80 = puVar3;
            uVar6 = pmic_glink_register_client(uVar1,&pcStack_90);
            *puVar3 = uVar6;
            if (uVar6 < 0xfffffffffffff001) {
                iVar4 = of_get_next_available_child(*(arg1 + 0x300),0);
                if (iVar4 != 0) {
                    iVar9 = 0;
                    do {
                        iVar7 = spmi_controller_alloc(uVar1,0x18);
                        if (iVar7 == 0) {
                            uVar6 = 0xfffffff4;
code_r0x080013e4:
                            puVar8 = *(arg1 + 0xa8);
                            if (0 < *(puVar8 + 0x31)) {
                                iVar4 = 0;
                                do {
                                    iVar7 = *(puVar8[0x30] + iVar4 * 8);
                                    if ((iVar7 != 0) &&
                                       (spmi_controller_remove(*(iVar7 + 8)), *(*(puVar8[0x30] + iVar4 * 8) + 8) != 0))
                                    {
                                        put_device();
                                    }
                                    iVar4 = iVar4 + 1;
                                } while (iVar4 < *(puVar8 + 0x31));
                            }
                            pmic_glink_unregister_client(*puVar8);
                            goto code_r0x080012e0;
                        }
                        piVar10 = *(iVar7 + 0x98);
                        *piVar10 = puVar3;
                        piVar10[1] = iVar7;
                        uVar2 = of_property_read_variable_u32_array(iVar4,0x80003d0,piVar10 + 2,1,0);
                        if (uVar2 < 0) {
                            uVar6 = uVar2;
                            _dev_err(uVar1,"Could not find reg property, ret=%d\n",uVar6);
code_r0x080013dc:
                            put_device(iVar7);
                            goto code_r0x080013e4;
                        }
                        *(iVar7 + 0x3a0) = sym.spmi_glink_read_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
                        *(iVar7 + 0x3a8) = sym.spmi_glink_write_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
                        *(iVar7 + 0x2f0) = iVar4;
                        *(iVar7 + 0x398) = sym.spmi_glink_cmd.8166636670e3423e3625df9cd4b87c54.cfi_jt;
                        uVar2 = spmi_controller_add(iVar7);
                        if (uVar2 != 0) {
                            uVar6 = uVar2;
                            goto code_r0x080013dc;
                        }
                        *(puVar3[0x30] + iVar9 * 8) = piVar10;
                        iVar9 = iVar9 + 1;
                        iVar4 = of_get_next_available_child(*(arg1 + 0x300),iVar4);
                    } while (iVar4 != 0);
                }
                uVar6 = 0;
            }
            else if (uVar6 == -0x205) {
                uVar6 = 0xfffffdfb;
            }
            else {
                _dev_err(uVar1,"Error registering with pmic_glink, ret=%d\n",uVar6 & 0xffffffff);
            }
            goto code_r0x080012e0;
        }
    }
    uVar6 = 0xfffffff4;
code_r0x080012e0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.spmi_glink_remove;
    puVar8 = *(iVar4 + 0xa8);
    if (0 < *(puVar8 + 0x31)) {
        iVar4 = 0;
        do {
            iVar7 = *(puVar8[0x30] + iVar4 * 8);
            if ((iVar7 != 0) && (spmi_controller_remove(*(iVar7 + 8)), *(*(puVar8[0x30] + iVar4 * 8) + 8) != 0)) {
                put_device();
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(puVar8 + 0x31));
    }
    pmic_glink_unregister_client(*puVar8);
    return 0;
}


// ===== sym.spmi_glink_remove @ 0x080014a0 (size 136) =====

ulong sym.spmi_glink_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *puVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(arg1 + 0xa8);
    if (0 < *(puVar2 + 0x31)) {
        iVar3 = 0;
        do {
            iVar1 = *(puVar2[0x30] + iVar3 * 8);
            if (iVar1 != 0) {
                spmi_controller_remove(*(iVar1 + 8));
                if (*(*(puVar2[0x30] + iVar3 * 8) + 8) != 0) {
                    put_device();
                }
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < *(puVar2 + 0x31));
    }
    pmic_glink_unregister_client(*puVar2);
    return 0;
}


// ===== sym.spmi_glink_callback @ 0x08001528 (size 220) =====

ulong sym.spmi_glink_callback(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    char *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg2 + 8);
    if (iVar3 == 0x38) {
        if (arg3 != 0x10) {
            _dev_err(*(arg1 + 8),"Invalid write response, glink packet size=%zu\n");
            return 0;
        }
        iVar3 = *(arg2 + 0xc);
        if (iVar3 == 0) {
code_r0x08001584:
            complete(arg1 + 0x40);
            return 0;
        }
        uVar1 = *(arg1 + 8);
        pcVar2 = "glink write failed, ret=%d\n";
    }
    else if (iVar3 == 0x37) {
        if (arg3 != 0x11c) {
            _dev_err(*(arg1 + 8),"Invalid read response, glink packet size=%zu\n");
            return 0;
        }
        iVar3 = *(arg2 + 0x18);
        if (-1 < iVar3) {
            memcpy(arg1 + 0x60,arg2,0x11c);
            goto code_r0x08001584;
        }
        uVar1 = *(arg1 + 8);
        pcVar2 = "glink read failed, ret=%d\n";
    }
    else {
        uVar1 = *(arg1 + 8);
        pcVar2 = "Unknown opcode %u\n";
    }
    _dev_err(uVar1,pcVar2,iVar3);
    return 0;
}


// ===== sym.spmi_glink_cmd @ 0x08001604 (size 16) =====

ulong sym.spmi_glink_cmd(void)

{
    return 0xffffffa1;
}


// ===== sym.spmi_glink_read_cmd @ 0x08001614 (size 380) =====

uchar * sym.spmi_glink_read_cmd(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint8_t *in_x4;
    uint8_t *puVar9;
    uint64_t in_x5;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uchar *puVar15;
    ulong *puVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    ulong uStack_118;
    uint uStack_110;
    uint uStack_10c;
    uint32_t uStack_108;
    uint32_t uStack_104;
    uint32_t uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_e0;
    int64_t *piStack_d8;
    ulong *puStack_d0;
    uchar *puStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint8_t *puStack_a8;
    uint64_t uStack_a0;
    ulong *puStack_98;
    int64_t iStack_90;
    ulong uStack_88;
    uint uStack_80;
    uint uStack_7c;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    uVar8 = arg3;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uVar14 = arg3 & 0xffffffff;
    uVar13 = arg2 & 0xffffffff;
    piVar18 = *(arg1 + 0x98);
    iStack_90 = *piVar18 + 0x10;
    puVar9 = in_x4;
    uVar10 = in_x5;
    mutex_lock();
    do {
        uVar7 = in_x5;
        if (0xff < in_x5) {
            uVar7 = 0x100;
        }
        uStack_7c = piVar18[2];
        uVar1 = 0x100 - (uVar14 & 0xff);
        if (uVar7 + (uVar14 & 0xff) < 0x101) {
            uVar1 = uVar7;
        }
        puVar12 = *piVar18;
        uStack_78 = uVar13 & 0xff;
        uStack_80 = 0x37;
        uStack_74 = uVar14 & 0xffff;
        uVar7 = 0x1c;
        uStack_88 = 0x10000800f;
        puVar16 = puVar12 + 8;
        *puVar16 = 0;
        uStack_70 = uVar1;
        uVar4 = pmic_glink_write(*puVar12,&uStack_88);
        if (uVar4 != 0) {
            puVar15 = uVar4;
            goto code_r0x0800172c;
        }
        iVar5 = wait_for_completion_timeout(puVar16,0xfa);
        if (iVar5 == 0) {
            _dev_err(piVar18[1],"Error, timed out sending message\n");
            puVar15 = 0xffffff92;
            goto code_r0x0800172c;
        }
        if (uVar1 != *(puVar12 + 0xf)) {
            puVar15 = 0xffffffea;
            goto code_r0x0800172c;
        }
        uVar7 = uVar1;
        memcpy(in_x4,puVar12 + 0x7c);
        in_x4 = in_x4 + uVar1;
        uVar4 = (uVar14 & 0xffff) + (uVar1 & 0xffff);
        uVar14 = uVar4;
        in_x5 = in_x5 - uVar1;
        uVar13 = uVar13 + (uVar4 >> 0x10);
    } while (in_x5 != 0);
    puVar15 = NULL;
code_r0x0800172c:
    mutex_unlock(iStack_90);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return puVar15;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.spmi_glink_write_cmd;
    pcStack_e8 = sym.spmi_glink_write_cmd;
    uStack_e0 = 0x100;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    uVar7 = uVar7 & 0xffffffff;
    piVar17 = *(iVar6 + 0x98);
    iVar11 = *piVar17;
    puStack_f0 = &stack0xffffffffffffffa0;
    piStack_d8 = piVar18;
    puStack_d0 = puVar16;
    puStack_c8 = puVar15;
    uStack_c0 = uVar1;
    uStack_b8 = uVar14;
    uStack_b0 = uVar13;
    puStack_a8 = in_x4;
    uStack_a0 = in_x5;
    puStack_98 = puVar12;
    mutex_lock(iVar11 + 0x10);
    do {
        uStack_10c = piVar17[2];
        uStack_108 = uVar7 & 0xff;
        uStack_104 = uVar8 & 0xffff;
        uStack_118 = 0x10000800f;
        uStack_110 = 0x38;
        uStack_100 = *puVar9;
        puVar12 = *piVar17;
        puVar16 = puVar12 + 8;
        *puVar16 = 0;
        uVar4 = pmic_glink_write(*puVar12,&uStack_118,0x1c);
        if (uVar4 != 0) goto code_r0x08001870;
        iVar5 = wait_for_completion_timeout(puVar16,0xfa);
        if (iVar5 == 0) {
            _dev_err(piVar17[1],"Error, timed out sending message\n");
            uVar4 = 0xffffff92;
            goto code_r0x08001870;
        }
        bVar3 = uVar10 != 0;
        uVar8 = uVar8 & 0xffff;
        if (bVar3) {
            uVar8 = uVar8 + 1;
        }
        if (bVar3) {
            puVar9 = puVar9 + 1;
        }
        uVar10 = uVar10 - bVar3;
        uVar7 = uVar7 + (uVar8 >> 0x10);
    } while (uVar10 != 0);
    uVar4 = 0;
code_r0x08001870:
    mutex_unlock(iVar11 + 0x10);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_f8) {
        auVar19 = __stack_chk_fail();
        puVar15 = auVar19._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar15 != NULL) {
            switch(*puVar15) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar15,auVar19._8_8_,0);
                break;
            default:
                return puVar15;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x800192c);
        (*pcVar2)();
    }
    return uVar4;
}


// ===== sym.spmi_glink_write_cmd @ 0x08001790 (size 324) =====

uchar * sym.spmi_glink_write_cmd(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    uchar *puVar5;
    uint8_t *in_x4;
    int64_t in_x5;
    int64_t iVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_88;
    uint uStack_80;
    uint uStack_7c;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uVar8 = arg3 & 0xffffffff;
    uVar9 = arg2 & 0xffffffff;
    piVar11 = *(arg1 + 0x98);
    iVar6 = *piVar11;
    mutex_lock(iVar6 + 0x10);
    do {
        uStack_7c = piVar11[2];
        uStack_78 = uVar9 & 0xff;
        uStack_74 = uVar8 & 0xffff;
        uStack_88 = 0x10000800f;
        uStack_80 = 0x38;
        uStack_70 = *in_x4;
        puVar7 = *piVar11;
        puVar10 = puVar7 + 8;
        *puVar10 = 0;
        uVar3 = pmic_glink_write(*puVar7,&uStack_88,0x1c);
        if (uVar3 != 0) goto code_r0x08001870;
        iVar4 = wait_for_completion_timeout(puVar10,0xfa);
        if (iVar4 == 0) {
            _dev_err(piVar11[1],"Error, timed out sending message\n");
            uVar3 = 0xffffff92;
            goto code_r0x08001870;
        }
        bVar2 = in_x5 != 0;
        uVar3 = uVar8 & 0xffff;
        if (bVar2) {
            uVar3 = uVar3 + 1;
        }
        uVar8 = uVar3;
        if (bVar2) {
            in_x4 = in_x4 + 1;
        }
        in_x5 = in_x5 - bVar2;
        uVar9 = uVar9 + (uVar3 >> 0x10);
    } while (in_x5 != 0);
    uVar3 = 0;
code_r0x08001870:
    mutex_unlock(iVar6 + 0x10);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_68) {
        auVar12 = __stack_chk_fail();
        puVar5 = auVar12._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar12._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x800192c);
        (*pcVar1)();
    }
    return uVar3;
}


// ===== sym.__cfi_check_fail @ 0x080018d4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001918

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800192c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001934 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001968 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spmi_glink_probe.8166636670e3423e3625df9cd4b87c54.cfi_jt);
    return;
}

