// decompiled from repeater-qti-pmic-eusb2 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 524) =====

//WARNING: Switch with 1 destination removed at 0x080028c8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.eusb2_repeater_remove.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            }
            else {
                if (arg1 != -0x1604c64a8725f30a) goto code_r0x08002888;
                pcVar2 = sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            }
code_r0x080011f8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002888;
        }
        if (arg1 == -0x8dc801903aca538) {
            if ((pcVar1 + -0x8001258 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08002888;
        }
        if (arg1 == 0x176ac9d9535a0da) {
            pcVar2 = sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002888;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.seq_read.cfi_jt;
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.msflag_write.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        }
        else {
            if (arg1 != 0x2795f870d8daa47d) goto code_r0x08002888;
            pcVar2 = sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
        }
    }
    else if (arg1 == 0x321969b888d4949e) {
        pcVar2 = sym.seq_lseek.cfi_jt;
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.proc_en_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            goto code_r0x080011f8;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002888;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002888:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80028dc);
    (*pcVar1)();
}


// ===== sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(ulong *param_1,uint64_t param_2)

{
    char *pcVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong *puVar7;
    ulong uVar8;
    ulong in_x7;
    uint uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    char acStack_60 [4];
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    acStack_60[0] = '\0';
    if ((param_2 & 1) == 0) {
        uVar2 = *(param_1 + 0x15);
        if (uVar2 == 0) {
            uVar6 = 0x8000602;
        }
        else {
            uVar10 = 0;
            iVar11 = param_1[0x14];
            uVar6 = 0x8000602;
            do {
                uStack_5c = *(iVar11 + uVar10 * 4);
                iVar5 = *(iVar11 + (uVar10 + 1) * 4);
                iVar4 = regmap_bulk_write(param_1[10],iVar5 + *(param_1 + 0xb),&uStack_5c,1);
                if (iVar4 != 0) {
                    _dev_err(*param_1,"bulk write failed: addr=0x%04x, ret=%d\n",iVar5 + *(param_1 + 0xb),iVar4);
                }
                uVar10 = uVar10 + 2;
            } while (uVar10 < uVar2);
        }
    }
    else if (*(param_1 + 0x12) == '\0') {
        uVar2 = *(param_1 + 0x17);
        if (uVar2 == 0) {
            uVar6 = 0x80006cc;
        }
        else {
            uVar10 = 0;
            iVar11 = param_1[0x16];
            uVar6 = 0x80006cc;
            do {
                uStack_5c = *(iVar11 + uVar10 * 4);
                iVar5 = *(iVar11 + (uVar10 + 1) * 4);
                iVar4 = regmap_bulk_write(param_1[10],iVar5 + *(param_1 + 0xb),&uStack_5c,1);
                if (iVar4 != 0) {
                    _dev_err(*param_1,"bulk write failed: addr=0x%04x, ret=%d\n",iVar5 + *(param_1 + 0xb),iVar4);
                }
                uVar10 = uVar10 + 2;
            } while (uVar10 < uVar2);
        }
    }
    else {
        uVar2 = *(param_1 + 0x19);
        if (uVar2 == 0) {
            uVar6 = 0x8000643;
        }
        else {
            uVar10 = 0;
            iVar11 = param_1[0x18];
            uVar6 = 0x8000643;
            do {
                uStack_5c = *(iVar11 + uVar10 * 4);
                iVar5 = *(iVar11 + (uVar10 + 1) * 4);
                iVar4 = regmap_bulk_write(param_1[10],iVar5 + *(param_1 + 0xb),&uStack_5c,1);
                if (iVar4 != 0) {
                    _dev_err(*param_1,"bulk write failed: addr=0x%04x, ret=%d\n",iVar5 + *(param_1 + 0xb),iVar4);
                }
                uVar10 = uVar10 + 2;
            } while (uVar10 < uVar2);
        }
    }
    _printk(uVar6);
    if ((*(param_1 + 0x94) < 8) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x50,7,*(param_1 + 0x94),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x50,iVar5);
    }
    if ((*(param_1 + 0x95) < 0x10) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x51,0xf,*(param_1 + 0x95),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x51,iVar5);
    }
    if ((*(param_1 + 0x96) < 8) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x52,7,*(param_1 + 0x96),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x52,iVar5);
    }
    if ((*(param_1 + 0x97) < 8) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x53,7,*(param_1 + 0x97),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x53,iVar5);
    }
    if ((*(param_1 + 0x13) < 8) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x54,7,*(param_1 + 0x13),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x54,iVar5);
    }
    if ((*(param_1 + 0x99) < 4) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x55,3,*(param_1 + 0x99),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x55,iVar5);
    }
    if ((*(param_1 + 0x9a) < 4) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x56,3,*(param_1 + 0x9a),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x56,iVar5);
    }
    if ((*(param_1 + 0x9b) < 8) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x57,7,*(param_1 + 0x9b),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x57,iVar5);
    }
    if ((*(param_1 + 0x9c) < 4) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x58,3,*(param_1 + 0x9c),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x58,iVar5);
    }
    if ((*(param_1 + 0x9d) < 4) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x59,3,*(param_1 + 0x9d),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x59,iVar5);
    }
    if ((*(param_1 + 0x9e) < 4) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x5a,3,*(param_1 + 0x9e),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x5a,iVar5);
    }
    if ((*(param_1 + 0x9f) < 4) &&
       (iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x5b,3,*(param_1 + 0x9f),0,0,0),
       iVar5 != 0)) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x5b,iVar5);
    }
    if ((*(param_1 + 2) & 1) == 0) {
        iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0xe8,0x40,0,0,0,0);
        if (iVar5 != 0) {
            _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0xe8,iVar5);
        }
        uVar3 = *(param_1 + 0xb);
        uVar6 = param_1[10];
        uVar8 = 0;
    }
    else {
        iVar5 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0xe8,0x40,0x40,0,0,0);
        if (iVar5 != 0) {
            _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0xe8,iVar5);
        }
        uVar3 = *(param_1 + 0xb);
        uVar6 = param_1[10];
        uVar8 = 0x40;
    }
    iVar5 = regmap_update_bits_base(uVar6,uVar3 + 0xed,0x40,uVar8,0,0,0);
    if (iVar5 != 0) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0xed,iVar5);
    }
    iVar5 = regmap_bulk_read(param_1[10],*(param_1 + 0xb) + 8,acStack_60,1);
    if (iVar5 != 0) {
        _dev_err(*param_1,"read failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 8,iVar5);
    }
    if (-1 < acStack_60[0]) {
        usleep_range_state(10,0x14,2);
        iVar5 = regmap_bulk_read(param_1[10],*(param_1 + 0xb) + 8,acStack_60,1);
        if (iVar5 != 0) {
            _dev_err(*param_1,"read failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 8,iVar5);
        }
        if (-1 < acStack_60[0]) {
            usleep_range_state(10,0x14,2);
            iVar5 = regmap_bulk_read(param_1[10],*(param_1 + 0xb) + 8,acStack_60,1);
            if (iVar5 != 0) {
                _dev_err(*param_1,"read failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 8,iVar5);
            }
            if (-1 < acStack_60[0]) {
                usleep_range_state(10,0x14,2);
                iVar5 = regmap_bulk_read(param_1[10],*(param_1 + 0xb) + 8,acStack_60,1);
                if (iVar5 != 0) {
                    _dev_err(*param_1,"read failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 8,iVar5);
                }
                if (-1 < acStack_60[0]) {
                    usleep_range_state(10,0x14,2);
                    iVar5 = regmap_bulk_read(param_1[10],*(param_1 + 0xb) + 8,acStack_60,1);
                    if (iVar5 != 0) {
                        _dev_err(*param_1,"read failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 8,iVar5);
                    }
                    if (-1 < acStack_60[0]) {
                        usleep_range_state(10,0x14,2);
                    }
                }
            }
        }
    }
    pcVar1 = "NOT OK";
    if (acStack_60[0] < '\0') {
        pcVar1 = 0x8000640;
    }
    _dev_info(*param_1,"eUSB2 repeater status:%s\n",pcVar1);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return 0;
    }
    auVar12 = __stack_chk_fail();
    puVar7 = auVar12._0_8_;
    *extraout_x18 = sym.eusb2_repeater_reset;
    uVar9 = 0x80;
    if ((auVar12._8_8_ & 1) == 0) {
        uVar9 = 0;
    }
    iVar5 = regmap_update_bits_base
                      (puVar7[10],*(puVar7 + 0xb) + 0x46,0x80,uVar9,0,0,0,in_x7,&stack0xffffffffffffffb0,
                       sym.eusb2_repeater_reset,param_1);
    if (iVar5 != 0) {
        _dev_err(*puVar7,"write failed: addr=0x%04x, ret=%d\n",*(puVar7 + 0xb) + 0x46,iVar5);
    }
    return 0;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08001220 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001228 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.eusb2_repeater_probe.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001230 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.eusb2_repeater_probe.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001238 (size 8) =====

void sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.eusb2_repeater_power(param_1,1);
    return;
}


// ===== sym.eusb2_repeater_powerdown.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001240 (size 8) =====

void sym.eusb2_repeater_powerdown.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.eusb2_repeater_power(param_1,0);
    return;
}


// ===== sym.proc_en_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001248 (size 8) =====

uchar * sym.proc_en_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    uchar *puVar3;
    uint8_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uVar4 = 0x30;
    if (*(*(param_1 + 0x80) + 0x91) != '\0') {
        uVar4 = 0x31;
    }
    uStack_1c = uVar4;
    seq_printf(param_1,0x8000856,&uStack_1c);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_18) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80028dc);
        (*pcVar2)();
    }
    return NULL;
}


// ===== sym.proc_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001250 (size 8) =====

uint32_t * sym.proc_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    puVar8 = &uStack_1c;
    uVar9 = 0x30;
    if (*(*(param_1 + 0x80) + 0x90) != '\0') {
        uVar9 = 0x31;
    }
    uStack_1c = uVar9;
    seq_printf(param_1,0x8000856);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return NULL;
    }
    auVar11 = __stack_chk_fail();
    uVar7 = auVar11._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar4 = (uVar7 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar7, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar10 = uVar7 & uVar4;
    }
    bVar5 = CARRY8(uVar10,puVar8);
    uVar10 = uVar10 + puVar8;
    uVar1 = 0;
    if (!bVar5 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar10 = 0xffffffffffffffff;
    }
    puVar6 = puVar8;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar5) || uVar10 == uVar1 + !bVar5) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar7 & uVar4 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        puVar6 = __arch_copy_from_user(auVar11._0_8_,uVar7,puVar8);
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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
    }
    if (puVar6 != NULL) {
        memset(puVar8 + (auVar11._0_8_ - puVar6),0,puVar6);
    }
    return puVar6;
}


// ===== sym.proc_en_msflag_open.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001258 (size 8) =====

void sym.proc_en_msflag_open.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(param_2,sym.proc_en_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt,uVar1);
    return;
}


// ===== sym.seq_release.cfi_jt @ 0x08001260 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.single_release.cfi_jt @ 0x08001268 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.proc_msflag_open.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001270 (size 8) =====

void sym.proc_msflag_open.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(param_2,sym.proc_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt,uVar1);
    return;
}


// ===== sym.seq_read.cfi_jt @ 0x08001278 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001280 (size 8) =====

ulong sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(ulong *param_1,uint64_t param_2)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0x80;
    if ((param_2 & 1) == 0) {
        uVar2 = 0;
    }
    iVar1 = regmap_update_bits_base(param_1[10],*(param_1 + 0xb) + 0x46,0x80,uVar2,0,0,0);
    if (iVar1 != 0) {
        _dev_err(*param_1,"write failed: addr=0x%04x, ret=%d\n",*(param_1 + 0xb) + 0x46,iVar1);
    }
    return 0;
}


// ===== sym.msflag_write.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001288 (size 8) =====

uint32_t * sym.msflag_write.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1,int64_t param_2,uint32_t *param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    uint8_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_4c;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    puVar9 = param_3;
    if (0x8 < param_3) {
        puVar9 = 0x9;
    }
    uStack_4c = 0;
    uStack_48 = 0;
    iVar12 = *(*(param_1 + 0xd8) + 0x80);
    uStack_40 = 0;
    __check_object_size(&uStack_48,puVar9,0);
    iVar6 = sym._copy_from_user(&uStack_48,param_2,puVar9);
    if (iVar6 == 0) {
        iVar5 = kstrtouint(&uStack_48,2,&uStack_4c);
        if (iVar5 == 0) {
            *(iVar12 + 0x90) = uStack_4c;
            _printk(0x80005ec,uStack_4c & 0xff);
        }
        else {
            param_3 = 0xffffffffffffffea;
        }
    }
    else {
        param_3 = 0xfffffffffffffff2;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return param_3;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.proc_msflag_show;
    pcStack_58 = sym.proc_msflag_show;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    puVar9 = &uStack_6c;
    uVar10 = 0x30;
    if (*(*(iVar12 + 0x80) + 0x90) != '\0') {
        uVar10 = 0x31;
    }
    uStack_6c = uVar10;
    puStack_60 = &stack0xffffffffffffffd0;
    seq_printf(iVar12,0x8000856);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return NULL;
    }
    auVar13 = __stack_chk_fail();
    uVar8 = auVar13._8_8_;
    *extraout_x18_00 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar3 = (uVar8 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar8, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar11 = uVar8 & uVar3;
    }
    bVar4 = CARRY8(uVar11,puVar9);
    uVar11 = uVar11 + puVar9;
    uVar1 = 0;
    if (!bVar4 || uVar11 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar11 = 0xffffffffffffffff;
    }
    puVar7 = puVar9;
    if (!CARRY8(uVar11,~uVar1) && !CARRY8(uVar11 + ~uVar1,bVar4) || uVar11 == uVar1 + !bVar4) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
        if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        puVar7 = __arch_copy_from_user(auVar13._0_8_,uVar8,puVar9);
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (puVar7 != NULL) {
        memset(puVar9 + (auVar13._0_8_ - puVar7),0,puVar7);
    }
    return puVar7;
}


// ===== sym.eusb2_repeater_remove.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001290 (size 8) =====

ulong sym.eusb2_repeater_remove.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 != 0) {
        debugfs_remove(*(arg1 + 0x78));
        proc_remove(*(arg1 + 0x80));
        usb_remove_repeater_dev(arg1);
        sym.eusb2_repeater_power(arg1,0);
    }
    return 0;
}


// ===== sym.eusb2_repeater_probe.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt @ 0x08001298 (size 8) =====

int sym.eusb2_repeater_probe.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt(int64_t param_1)

{
    uchar uVar1;
    char cVar2;
    int iVar3;
    int64_t *arg1;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    char *arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_3c = 0;
    arg1 = devm_kmalloc(iVar7,0xd0,0xdc0);
    if (arg1 == NULL) {
        iVar3 = -0xc;
        goto code_r0x08001440;
    }
    iVar4 = dev_get_regmap(*(param_1 + 0x70),0);
    arg1[10] = iVar4;
    if (iVar4 == 0) {
        _dev_err(iVar7,"failed to get parent\'s regmap\n");
        iVar3 = -0x16;
        goto code_r0x08001440;
    }
    iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),0x8000711,&uStack_3c,1,0);
    if (iVar3 < 0) {
        _dev_err(iVar7,"failed to get reg base address:%d\n",iVar3);
        goto code_r0x08001440;
    }
    *(arg1 + 0xb) = uStack_3c;
    uVar5 = devm_regulator_get(iVar7,"vdd3");
    arg1[0xd] = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        _dev_err(iVar7,"unable to get vdd3 supply\n");
        iVar3 = arg1[0xd];
        goto code_r0x08001440;
    }
    uVar5 = devm_regulator_get(iVar7,"vdd18");
    arg1[0xc] = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        _dev_err(iVar7,"unable to get vdd18 supply\n");
        iVar3 = arg1[0xc];
        goto code_r0x08001440;
    }
    uVar5 = sym.eusb2_read_dt_params(iVar7,0x800075b,arg1 + 0x14,arg1 + 0x15);
    if ((uVar5 & 1) != 0) {
        uVar1 = get_hw_version_platform();
        *(arg1 + 0x92) = uVar1;
        cVar2 = get_hw_country_version();
        *(arg1 + 0x91) = 0;
        *(arg1 + 0x93) = cVar2;
        if (((cVar2 == '\0') && (*(arg1 + 0x92) < 8)) && ((1 << (*(arg1 + 0x92) & 0x1f) & 0x86U) != 0)) {
            arg2 = "qcom,param-override-seq-host-ms";
        }
        else {
            arg2 = "qcom,param-override-seq-host";
        }
        uVar5 = sym.eusb2_read_dt_params(iVar7,arg2,arg1 + 0x16,arg1 + 0x17);
        if ((uVar5 & 1) != 0) {
            if (*(arg1 + 0x93) == '\0') {
                uVar6 = 0x8000416;
            }
            else {
                uVar6 = 0x8000416;
                if ((*(arg1 + 0x92) < 8) && ((1 << (*(arg1 + 0x92) & 0x1f) & 0x86U) != 0)) {
                    uVar5 = sym.eusb2_read_dt_params(iVar7,0x80007b9,arg1 + 0x18,arg1 + 0x19);
                    if ((uVar5 & 1) == 0) goto code_r0x0800143c;
                    uVar6 = 0x8000737;
                    *(arg1 + 0x91) = 1;
                }
            }
            _printk(uVar6);
            *arg1 = iVar7;
            *(arg1 + 0x12) = 0;
            arg1[5] = sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            arg1[6] = sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            *(param_1 + 0xa8) = arg1;
            arg1[8] = sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            arg1[9] = sym.eusb2_repeater_powerdown.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            iVar3 = usb_add_repeater_dev(arg1);
            if (iVar3 == 0) {
                sym.eusb2_repeater_create_debugfs(arg1);
                sym.eusb2_ms_create_procfs(arg1);
            }
            goto code_r0x08001440;
        }
    }
code_r0x0800143c:
    iVar3 = 0;
code_r0x08001440:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.eusb2_repeater_remove;
    iVar7 = *(iVar7 + 0xa8);
    if (iVar7 != 0) {
        debugfs_remove(*(iVar7 + 0x78));
        proc_remove(*(iVar7 + 0x80));
        usb_remove_repeater_dev(iVar7);
        sym.eusb2_repeater_power(iVar7,0);
    }
    return 0;
}


// ===== sym.eusb2_repeater_probe @ 0x080012a0 (size 692) =====

int sym.eusb2_repeater_probe(int64_t arg1)

{
    uchar uVar1;
    char cVar2;
    int iVar3;
    int64_t *arg1_00;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    char *arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_3c = 0;
    arg1_00 = devm_kmalloc(iVar7,0xd0,0xdc0);
    if (arg1_00 == NULL) {
        iVar3 = -0xc;
        goto code_r0x08001440;
    }
    iVar4 = dev_get_regmap(*(arg1 + 0x70),0);
    arg1_00[10] = iVar4;
    if (iVar4 == 0) {
        _dev_err(iVar7,"failed to get parent\'s regmap\n");
        iVar3 = -0x16;
        goto code_r0x08001440;
    }
    iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),0x8000711,&uStack_3c,1,0);
    if (iVar3 < 0) {
        _dev_err(iVar7,"failed to get reg base address:%d\n",iVar3);
        goto code_r0x08001440;
    }
    *(arg1_00 + 0xb) = uStack_3c;
    uVar5 = devm_regulator_get(iVar7,"vdd3");
    arg1_00[0xd] = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        _dev_err(iVar7,"unable to get vdd3 supply\n");
        iVar3 = arg1_00[0xd];
        goto code_r0x08001440;
    }
    uVar5 = devm_regulator_get(iVar7,"vdd18");
    arg1_00[0xc] = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        _dev_err(iVar7,"unable to get vdd18 supply\n");
        iVar3 = arg1_00[0xc];
        goto code_r0x08001440;
    }
    uVar5 = sym.eusb2_read_dt_params(iVar7,0x800075b,arg1_00 + 0x14,arg1_00 + 0x15);
    if ((uVar5 & 1) != 0) {
        uVar1 = get_hw_version_platform();
        *(arg1_00 + 0x92) = uVar1;
        cVar2 = get_hw_country_version();
        *(arg1_00 + 0x91) = 0;
        *(arg1_00 + 0x93) = cVar2;
        if (((cVar2 == '\0') && (*(arg1_00 + 0x92) < 8)) && ((1 << (*(arg1_00 + 0x92) & 0x1f) & 0x86U) != 0)) {
            arg2 = "qcom,param-override-seq-host-ms";
        }
        else {
            arg2 = "qcom,param-override-seq-host";
        }
        uVar5 = sym.eusb2_read_dt_params(iVar7,arg2,arg1_00 + 0x16,arg1_00 + 0x17);
        if ((uVar5 & 1) != 0) {
            if (*(arg1_00 + 0x93) == '\0') {
                uVar6 = 0x8000416;
            }
            else {
                uVar6 = 0x8000416;
                if ((*(arg1_00 + 0x92) < 8) && ((1 << (*(arg1_00 + 0x92) & 0x1f) & 0x86U) != 0)) {
                    uVar5 = sym.eusb2_read_dt_params(iVar7,0x80007b9,arg1_00 + 0x18,arg1_00 + 0x19);
                    if ((uVar5 & 1) == 0) goto code_r0x0800143c;
                    uVar6 = 0x8000737;
                    *(arg1_00 + 0x91) = 1;
                }
            }
            _printk(uVar6);
            *arg1_00 = iVar7;
            *(arg1_00 + 0x12) = 0;
            arg1_00[5] = sym.eusb2_repeater_reset.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            arg1_00[6] = sym.eusb2_repeater_init.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            *(arg1 + 0xa8) = arg1_00;
            arg1_00[8] = sym.eusb2_repeater_powerup.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            arg1_00[9] = sym.eusb2_repeater_powerdown.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt;
            iVar3 = usb_add_repeater_dev(arg1_00);
            if (iVar3 == 0) {
                sym.eusb2_repeater_create_debugfs(arg1_00);
                sym.eusb2_ms_create_procfs(arg1_00);
            }
            goto code_r0x08001440;
        }
    }
code_r0x0800143c:
    iVar3 = 0;
code_r0x08001440:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.eusb2_repeater_remove;
    iVar7 = *(iVar7 + 0xa8);
    if (iVar7 != 0) {
        debugfs_remove(*(iVar7 + 0x78));
        proc_remove(*(iVar7 + 0x80));
        usb_remove_repeater_dev(iVar7);
        sym.eusb2_repeater_power(iVar7,0);
    }
    return 0;
}


// ===== sym.eusb2_repeater_remove @ 0x08001554 (size 88) =====

ulong sym.eusb2_repeater_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 != 0) {
        debugfs_remove(*(arg1_00 + 0x78));
        proc_remove(*(arg1_00 + 0x80));
        usb_remove_repeater_dev(arg1_00);
        sym.eusb2_repeater_power(arg1_00,0);
    }
    return 0;
}


// ===== sym.eusb2_read_dt_params @ 0x080015ac (size 232) =====

ulong sym.eusb2_read_dt_params(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = of_property_count_elems_of_size(*(arg1 + 0x2f0),arg2,4);
    if (uVar1 < 1) {
code_r0x0800164c:
        _printk(0x800069f,arg2);
        uVar4 = 1;
    }
    else {
        if ((uVar1 & 1) == 0) {
            *arg4 = uVar1;
            iVar3 = devm_kmalloc(arg1,uVar1 << 2,0xdc0);
            *arg3 = iVar3;
            if (iVar3 != 0) {
                iVar2 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),arg2,iVar3,*arg4,0);
                if (iVar2 < 0) {
                    _dev_err(arg1,"qcom,param-override-seq read failed %d\n",iVar2);
                    return 0;
                }
                goto code_r0x0800164c;
            }
            pcVar5 = "No memory\n";
        }
        else {
            pcVar5 = "invalid param_override_seq_len\n";
        }
        _dev_err(arg1,pcVar5);
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.eusb2_repeater_init @ 0x08001694 (size 2108) =====

ulong sym.eusb2_repeater_init(char arg1)

{
    char *pcVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    ulong *puVar6;
    ulong uVar7;
    ulong *puVar8;
    uint64_t in_x1;
    ulong uVar9;
    ulong in_x7;
    uint uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    char acStack_60 [4];
    uint uStack_5c;
    int64_t iStack_58;
    
    puVar6 = arg1;
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    acStack_60[0] = '\0';
    if ((in_x1 & 1) == 0) {
        uVar2 = *(puVar6 + 0x15);
        if (uVar2 == 0) {
            uVar7 = 0x8000602;
        }
        else {
            uVar11 = 0;
            iVar12 = puVar6[0x14];
            uVar7 = 0x8000602;
            do {
                uStack_5c = *(iVar12 + uVar11 * 4);
                iVar5 = *(iVar12 + (uVar11 + 1) * 4);
                iVar4 = regmap_bulk_write(puVar6[10],iVar5 + *(puVar6 + 0xb),&uStack_5c,1);
                if (iVar4 != 0) {
                    _dev_err(*puVar6,"bulk write failed: addr=0x%04x, ret=%d\n",iVar5 + *(puVar6 + 0xb),iVar4);
                }
                uVar11 = uVar11 + 2;
            } while (uVar11 < uVar2);
        }
    }
    else if (*(puVar6 + 0x12) == '\0') {
        uVar2 = *(puVar6 + 0x17);
        if (uVar2 == 0) {
            uVar7 = 0x80006cc;
        }
        else {
            uVar11 = 0;
            iVar12 = puVar6[0x16];
            uVar7 = 0x80006cc;
            do {
                uStack_5c = *(iVar12 + uVar11 * 4);
                iVar5 = *(iVar12 + (uVar11 + 1) * 4);
                iVar4 = regmap_bulk_write(puVar6[10],iVar5 + *(puVar6 + 0xb),&uStack_5c,1);
                if (iVar4 != 0) {
                    _dev_err(*puVar6,"bulk write failed: addr=0x%04x, ret=%d\n",iVar5 + *(puVar6 + 0xb),iVar4);
                }
                uVar11 = uVar11 + 2;
            } while (uVar11 < uVar2);
        }
    }
    else {
        uVar2 = *(puVar6 + 0x19);
        if (uVar2 == 0) {
            uVar7 = 0x8000643;
        }
        else {
            uVar11 = 0;
            iVar12 = puVar6[0x18];
            uVar7 = 0x8000643;
            do {
                uStack_5c = *(iVar12 + uVar11 * 4);
                iVar5 = *(iVar12 + (uVar11 + 1) * 4);
                iVar4 = regmap_bulk_write(puVar6[10],iVar5 + *(puVar6 + 0xb),&uStack_5c,1);
                if (iVar4 != 0) {
                    _dev_err(*puVar6,"bulk write failed: addr=0x%04x, ret=%d\n",iVar5 + *(puVar6 + 0xb),iVar4);
                }
                uVar11 = uVar11 + 2;
            } while (uVar11 < uVar2);
        }
    }
    _printk(uVar7);
    if ((*(puVar6 + 0x94) < 8) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x50,7,*(puVar6 + 0x94),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x50,iVar5);
    }
    if ((*(puVar6 + 0x95) < 0x10) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x51,0xf,*(puVar6 + 0x95),0,0,0), iVar5 != 0
       )) {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x51,iVar5);
    }
    if ((*(puVar6 + 0x96) < 8) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x52,7,*(puVar6 + 0x96),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x52,iVar5);
    }
    if ((*(puVar6 + 0x97) < 8) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x53,7,*(puVar6 + 0x97),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x53,iVar5);
    }
    if ((*(puVar6 + 0x13) < 8) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x54,7,*(puVar6 + 0x13),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x54,iVar5);
    }
    if ((*(puVar6 + 0x99) < 4) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x55,3,*(puVar6 + 0x99),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x55,iVar5);
    }
    if ((*(puVar6 + 0x9a) < 4) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x56,3,*(puVar6 + 0x9a),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x56,iVar5);
    }
    if ((*(puVar6 + 0x9b) < 8) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x57,7,*(puVar6 + 0x9b),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x57,iVar5);
    }
    if ((*(puVar6 + 0x9c) < 4) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x58,3,*(puVar6 + 0x9c),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x58,iVar5);
    }
    if ((*(puVar6 + 0x9d) < 4) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x59,3,*(puVar6 + 0x9d),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x59,iVar5);
    }
    if ((*(puVar6 + 0x9e) < 4) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x5a,3,*(puVar6 + 0x9e),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x5a,iVar5);
    }
    if ((*(puVar6 + 0x9f) < 4) &&
       (iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0x5b,3,*(puVar6 + 0x9f),0,0,0), iVar5 != 0))
    {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0x5b,iVar5);
    }
    if ((*(puVar6 + 2) & 1) == 0) {
        iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0xe8,0x40,0,0,0,0);
        if (iVar5 != 0) {
            _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0xe8,iVar5);
        }
        uVar3 = *(puVar6 + 0xb);
        uVar7 = puVar6[10];
        uVar9 = 0;
    }
    else {
        iVar5 = regmap_update_bits_base(puVar6[10],*(puVar6 + 0xb) + 0xe8,0x40,0x40,0,0,0);
        if (iVar5 != 0) {
            _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0xe8,iVar5);
        }
        uVar3 = *(puVar6 + 0xb);
        uVar7 = puVar6[10];
        uVar9 = 0x40;
    }
    iVar5 = regmap_update_bits_base(uVar7,uVar3 + 0xed,0x40,uVar9,0,0,0);
    if (iVar5 != 0) {
        _dev_err(*puVar6,"write failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 0xed,iVar5);
    }
    iVar5 = regmap_bulk_read(puVar6[10],*(puVar6 + 0xb) + 8,acStack_60,1);
    if (iVar5 != 0) {
        _dev_err(*puVar6,"read failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 8,iVar5);
    }
    if (-1 < acStack_60[0]) {
        usleep_range_state(10,0x14,2);
        iVar5 = regmap_bulk_read(puVar6[10],*(puVar6 + 0xb) + 8,acStack_60,1);
        if (iVar5 != 0) {
            _dev_err(*puVar6,"read failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 8,iVar5);
        }
        if (-1 < acStack_60[0]) {
            usleep_range_state(10,0x14,2);
            iVar5 = regmap_bulk_read(puVar6[10],*(puVar6 + 0xb) + 8,acStack_60,1);
            if (iVar5 != 0) {
                _dev_err(*puVar6,"read failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 8,iVar5);
            }
            if (-1 < acStack_60[0]) {
                usleep_range_state(10,0x14,2);
                iVar5 = regmap_bulk_read(puVar6[10],*(puVar6 + 0xb) + 8,acStack_60,1);
                if (iVar5 != 0) {
                    _dev_err(*puVar6,"read failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 8,iVar5);
                }
                if (-1 < acStack_60[0]) {
                    usleep_range_state(10,0x14,2);
                    iVar5 = regmap_bulk_read(puVar6[10],*(puVar6 + 0xb) + 8,acStack_60,1);
                    if (iVar5 != 0) {
                        _dev_err(*puVar6,"read failed: addr=0x%04x, ret=%d\n",*(puVar6 + 0xb) + 8,iVar5);
                    }
                    if (-1 < acStack_60[0]) {
                        usleep_range_state(10,0x14,2);
                    }
                }
            }
        }
    }
    pcVar1 = "NOT OK";
    if (acStack_60[0] < '\0') {
        pcVar1 = 0x8000640;
    }
    _dev_info(*puVar6,"eUSB2 repeater status:%s\n",pcVar1);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_58) {
        return 0;
    }
    auVar13 = __stack_chk_fail();
    puVar8 = auVar13._0_8_;
    *extraout_x18 = sym.eusb2_repeater_reset;
    uVar10 = 0x80;
    if ((auVar13._8_8_ & 1) == 0) {
        uVar10 = 0;
    }
    iVar5 = regmap_update_bits_base
                      (puVar8[10],*(puVar8 + 0xb) + 0x46,0x80,uVar10,0,0,0,in_x7,&stack0xffffffffffffffb0,
                       sym.eusb2_repeater_reset,puVar6);
    if (iVar5 != 0) {
        _dev_err(*puVar8,"write failed: addr=0x%04x, ret=%d\n",*(puVar8 + 0xb) + 0x46,iVar5);
    }
    return 0;
}


// ===== sym.eusb2_repeater_reset @ 0x08001ed0 (size 128) =====

ulong sym.eusb2_repeater_reset(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0x80;
    if ((arg2 & 1) == 0) {
        uVar2 = 0;
    }
    iVar1 = regmap_update_bits_base(*(arg1 + 0x50),*(arg1 + 0x58) + 0x46,0x80,uVar2,0,0,0);
    if (iVar1 != 0) {
        _dev_err(*arg1,"write failed: addr=0x%04x, ret=%d\n",*(arg1 + 0x58) + 0x46,iVar1);
    }
    return 0;
}


// ===== sym.eusb2_repeater_powerup @ 0x08001f50 (size 40) =====

void sym.eusb2_repeater_powerup(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.eusb2_repeater_power(arg1,1);
    return;
}


// ===== sym.eusb2_repeater_powerdown @ 0x08001f78 (size 40) =====

void sym.eusb2_repeater_powerdown(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.eusb2_repeater_power(arg1,0);
    return;
}


// ===== sym.eusb2_repeater_create_debugfs @ 0x08001fa0 (size 468) =====

void sym.eusb2_repeater_create_debugfs(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x94) = 0xffffffffffffffff;
    *(arg1 + 0x9c) = 0xffffffff;
    iVar1 = (*arg1)[0xe];
    if (iVar1 == 0) {
        iVar1 = **arg1;
    }
    uVar2 = debugfs_create_dir(iVar1,0);
    *(arg1 + 0x78) = uVar2;
    debugfs_create_x8("usb2_crossover",0x1a4,uVar2,arg1 + 0x94);
    debugfs_create_x8("iusb2",0x1a4,*(arg1 + 0x78),arg1 + 0x95);
    debugfs_create_x8("res_fsdif",0x1a4,*(arg1 + 0x78),arg1 + 0x96);
    debugfs_create_x8("hsdisc",0x1a4,*(arg1 + 0x78),arg1 + 0x97);
    debugfs_create_x8("squelch_u",0x1a4,*(arg1 + 0x78),arg1 + 0x98);
    debugfs_create_x8("usb2_slew",0x1a4,*(arg1 + 0x78),arg1 + 0x99);
    debugfs_create_x8("usb2_equ",0x1a4,*(arg1 + 0x78),arg1 + 0x9a);
    debugfs_create_x8("usb2_preem",0x1a4,*(arg1 + 0x78),arg1 + 0x9b);
    debugfs_create_x8("hs_comp_current",0x1a4,*(arg1 + 0x78),arg1 + 0x9c);
    debugfs_create_x8("eusb_slew",0x1a4,*(arg1 + 0x78),arg1 + 0x9d);
    debugfs_create_x8("eusb_equ",0x1a4,*(arg1 + 0x78),arg1 + 0x9e);
    debugfs_create_x8("eusb_hs_comp_current",0x1a4,*(arg1 + 0x78),arg1 + 0x9f);
    return;
}


// ===== sym.eusb2_ms_create_procfs @ 0x08002174 (size 156) =====

void sym.eusb2_ms_create_procfs(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = proc_create_data("usb_msflag",0x1a4,0,obj.usb_msflag_proc_ops,arg1);
    *(arg1 + 0x80) = iVar1;
    if (iVar1 == 0) {
        _printk(0x800054c);
    }
    iVar1 = proc_create_data("enable_msflag",0x124,0,obj.enable_msflag_proc_ops,arg1);
    *(arg1 + 0x88) = iVar1;
    if (iVar1 == 0) {
        _printk(0x8000581);
    }
    return;
}


// ===== sym.eusb2_repeater_power @ 0x08002210 (size 600) =====

int sym.eusb2_repeater_power(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    uchar uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x70) == (arg2 & 1)) {
        return 0;
    }
    if ((arg2 & 1U) == 0) {
        iVar1 = regulator_disable(*(arg1 + 0x68));
        if (iVar1 != 0) {
            uVar2 = *arg1;
            pcVar3 = "Unable to disable vdd3:%d\n";
code_r0x08002460:
            _dev_err(uVar2,pcVar3,iVar1);
        }
        iVar1 = regulator_set_voltage(*(arg1 + 0x68),0,3300000);
        if (iVar1 != 0) {
            uVar2 = *arg1;
            pcVar3 = "Unable to set (0) voltage for vdd3:%d\n";
code_r0x08002448:
            _dev_err(uVar2,pcVar3,iVar1);
        }
        iVar1 = regulator_set_load(*(arg1 + 0x68),0);
        if (iVar1 < 0) {
            _dev_err(*arg1,"Unable to set (0) HPM of vdd3\n");
        }
code_r0x080022f4:
        iVar1 = regulator_disable(*(arg1 + 0x60));
        if (iVar1 != 0) {
            uVar2 = *arg1;
            pcVar3 = "Unable to disable vdd18:%d\n";
code_r0x08002418:
            _dev_err(uVar2,pcVar3,iVar1);
        }
        iVar1 = regulator_set_voltage(*(arg1 + 0x60),0,1800000);
        if (iVar1 != 0) {
            uVar2 = *arg1;
            pcVar3 = "Unable to set (0) voltage for vdd18:%d\n";
code_r0x080023ec:
            _dev_err(uVar2,pcVar3,iVar1);
        }
        iVar1 = regulator_set_load(*(arg1 + 0x60),0);
        if (iVar1 < 0) {
            _dev_err(*arg1,"Unable to set LPM of vdd18\n");
        }
    }
    else {
        iVar1 = regulator_set_load(*(arg1 + 0x60),32000);
        if (-1 < iVar1) {
            iVar1 = regulator_set_voltage(*(arg1 + 0x60),1800000,1800000);
            if (iVar1 == 0) {
                iVar1 = regulator_enable(*(arg1 + 0x60));
                if (iVar1 == 0) {
                    iVar1 = regulator_set_load(*(arg1 + 0x68),0xdac);
                    if (-1 < iVar1) {
                        iVar1 = regulator_set_voltage(*(arg1 + 0x68),0x2eebb8,3300000);
                        if (iVar1 == 0) {
                            iVar1 = regulator_enable(*(arg1 + 0x68));
                            if (iVar1 == 0) {
                                iVar1 = 0;
                                uVar4 = 1;
                                goto code_r0x08002338;
                            }
                            uVar2 = *arg1;
                            pcVar3 = "Unable to enable vdd3:%d\n";
                            goto code_r0x08002460;
                        }
                        uVar2 = *arg1;
                        pcVar3 = "Unable to set voltage for vdd3:%d\n";
                        goto code_r0x08002448;
                    }
                    _dev_err(*arg1,"Unable to set HPM of vdd3:%d\n",iVar1);
                    goto code_r0x080022f4;
                }
                uVar2 = *arg1;
                pcVar3 = "Unable to enable vdd18:%d\n";
                goto code_r0x08002418;
            }
            uVar2 = *arg1;
            pcVar3 = "Unable to set voltage for vdd18:%d\n";
            goto code_r0x080023ec;
        }
        _dev_err(*arg1,"Unable to set HPM of vdd18:%d\n",iVar1);
    }
    if (*(arg1 + 0x70) == '\0') {
        return -0x16;
    }
    uVar4 = 0;
code_r0x08002338:
    *(arg1 + 0x70) = uVar4;
    return iVar1;
}


// ===== sym.proc_msflag_open @ 0x08002468 (size 68) =====

void sym.proc_msflag_open(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(arg1,sym.proc_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt,uVar1);
    return;
}


// ===== sym.msflag_write @ 0x080024ac (size 232) =====

uint32_t * sym.msflag_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *puVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_4c;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    puVar11 = arg3;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    puVar8 = puVar11;
    if (0x8 < puVar11) {
        puVar8 = 0x9;
    }
    uStack_4c = 0;
    uStack_48 = 0;
    iVar12 = *(*(arg1 + 0xd8) + 0x80);
    uStack_40 = 0;
    __check_object_size(&uStack_48,puVar8,0);
    iVar6 = sym._copy_from_user(&uStack_48,arg2,puVar8);
    if (iVar6 == 0) {
        iVar5 = kstrtouint(&uStack_48,2,&uStack_4c);
        if (iVar5 == 0) {
            *(iVar12 + 0x90) = uStack_4c;
            _printk(0x80005ec,uStack_4c & 0xff);
        }
        else {
            puVar11 = 0xffffffffffffffea;
        }
    }
    else {
        puVar11 = 0xfffffffffffffff2;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return puVar11;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.proc_msflag_show;
    pcStack_58 = sym.proc_msflag_show;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    puVar8 = &uStack_6c;
    uVar9 = 0x30;
    if (*(*(iVar12 + 0x80) + 0x90) != '\0') {
        uVar9 = 0x31;
    }
    uStack_6c = uVar9;
    puStack_60 = &stack0xffffffffffffffd0;
    seq_printf(iVar12,0x8000856);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return NULL;
    }
    auVar13 = __stack_chk_fail();
    uVar7 = auVar13._8_8_;
    *extraout_x18_00 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar3 = (uVar7 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar7, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar10 = uVar7 & uVar3;
    }
    bVar4 = CARRY8(uVar10,puVar8);
    uVar10 = uVar10 + puVar8;
    uVar1 = 0;
    if (!bVar4 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar10 = 0xffffffffffffffff;
    }
    puVar11 = puVar8;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar4) || uVar10 == uVar1 + !bVar4) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar7 & uVar3 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        puVar11 = __arch_copy_from_user(auVar13._0_8_,uVar7,puVar8);
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (puVar11 != NULL) {
        memset(puVar8 + (auVar13._0_8_ - puVar11),0,puVar11);
    }
    return puVar11;
}


// ===== sym.proc_msflag_show @ 0x08002594 (size 124) =====

uint32_t * sym.proc_msflag_show(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    puVar8 = &uStack_1c;
    uVar9 = 0x30;
    if (*(*(arg1 + 0x80) + 0x90) != '\0') {
        uVar9 = 0x31;
    }
    uStack_1c = uVar9;
    seq_printf(arg1,0x8000856);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return NULL;
    }
    auVar11 = __stack_chk_fail();
    uVar7 = auVar11._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar4 = (uVar7 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar7, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar10 = uVar7 & uVar4;
    }
    bVar5 = CARRY8(uVar10,puVar8);
    uVar10 = uVar10 + puVar8;
    uVar1 = 0;
    if (!bVar5 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar10 = 0xffffffffffffffff;
    }
    puVar6 = puVar8;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar5) || uVar10 == uVar1 + !bVar5) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar7 & uVar4 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        puVar6 = __arch_copy_from_user(auVar11._0_8_,uVar7,puVar8);
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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
    }
    if (puVar6 != NULL) {
        memset(puVar8 + (auVar11._0_8_ - puVar6),0,puVar6);
    }
    return puVar6;
}


// ===== sym._copy_from_user @ 0x08002610 (size 376) =====

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


// ===== sym.proc_en_msflag_open @ 0x080027c4 (size 68) =====

void sym.proc_en_msflag_open(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(arg1,sym.proc_en_msflag_show.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt,uVar1);
    return;
}


// ===== sym.proc_en_msflag_show @ 0x08002808 (size 124) =====

uchar * sym.proc_en_msflag_show(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uchar *puVar3;
    uint8_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uVar4 = 0x30;
    if (*(*(arg1 + 0x80) + 0x91) != '\0') {
        uVar4 = 0x31;
    }
    uStack_1c = uVar4;
    seq_printf(arg1,0x8000856,&uStack_1c);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_18) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return puVar3;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80028dc);
        (*pcVar2)();
    }
    return NULL;
}


// ===== sym.__cfi_check_fail @ 0x08002884 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080028c8

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
    //switch table (4 cases) at 0x8000200
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80028dc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080028e4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.eusb2_repeater_probe.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002918 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.eusb2_repeater_probe.24ebd5fcbef086bb6d2ccfe1c0e94f7d.cfi_jt);
    return;
}

