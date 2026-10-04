// decompiled from qti_battery_debug by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 540) =====

//WARNING: Switch with 1 destination removed at 0x08003768

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1e3d0ffe3d0499e9) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 != -0x66d421a09845f9f8) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08003728;
                pcVar2 = sym.battery_dbg_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x080021f0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003728;
            }
            pcVar2 = sym.battery_cell_id_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8002278 >> 3 | pcVar1 << 0x3d) < 7) {
                    return;
                }
                goto code_r0x08003728;
            }
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08003728;
                pcVar2 = sym.seq_read.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x1e3d0ffe3d0499e9) {
            pcVar2 = sym.battery_cell_id_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == 0x268e9722c14a4592) {
            pcVar2 = sym.battery_dbg_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x08003728;
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            if ((pcVar1 + -0x80022b8 >> 3 | pcVar1 << 0x3d) < 6) {
                return;
            }
            goto code_r0x08003728;
        }
        if (arg1 == 0x7305707447fa0fad) {
            pcVar2 = sym.qbg_blob_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x080021f0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003728;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003728:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800377c);
    (*pcVar1)();
}


// ===== sym.battery_cell_id_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002228 (size 8) =====

int64_t sym.battery_cell_id_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80003b3,*(*(param_1 + 0x98) + 0x142c));
    return iVar1;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08002230 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002238 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002240 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.battery_dbg_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002248 (size 8) =====

ulong sym.battery_dbg_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(param_2 + 8);
    switch(*(param_2 + 8)) {
    case 0x15:
        if (param_3 != 0x3a4) {
            _printk(0x80006a3,"handle_get_votables_list_message",0x3a4);
            return 0;
        }
        uVar1 = *(param_2 + 0xc);
        uVar5 = uVar1;
        if (0xb < uVar1) {
            uVar3 = 0x8000210;
            pcVar4 = "handle_get_votables_list_message";
code_r0x08002aa0:
            _printk(uVar3,pcVar4,uVar5,0xc);
            return 0;
        }
        uVar1 = *(param_2 + 0x10);
        if (0x3f < uVar1) {
            uVar3 = 0x80005a3;
            pcVar4 = "handle_get_votables_list_message";
code_r0x08002af0:
            _printk(uVar3,pcVar4,uVar1,0x40);
            return 0;
        }
        memcpy(param_1 + 0x1088,param_2 + 0xc,0x398);
        iVar6 = 0;
        *(param_1 + 0x109b) = 0;
        *(param_1 + 0x10a7) = 0;
        *(param_1 + 0x10b3) = 0;
        *(param_1 + 0x10bf) = 0;
        *(param_1 + 0x10cb) = 0;
        *(param_1 + 0x10d7) = 0;
        *(param_1 + 0x10e3) = 0;
        *(param_1 + 0x10ef) = 0;
        *(param_1 + 0x10fb) = 0;
        *(param_1 + 0x1107) = 0;
        *(param_1 + 0x1113) = 0;
        *(param_1 + 0x111f) = 0;
        do {
            *(param_1 + 0x112b + iVar6) = 0;
            iVar6 = iVar6 + 0xc;
        } while (iVar6 != 0x300);
        if (*(param_1 + 0x1428) == '\0') {
            iVar6 = 0;
            iVar7 = param_1 + 0x1120;
            do {
                iVar2 = strcmp(iVar7,"glink");
                if (iVar2 == 0) {
                    *(param_1 + 0x1428) = iVar6;
                    break;
                }
                iVar6 = iVar6 + 1;
                iVar7 = iVar7 + 0xc;
            } while (iVar6 != 0x40);
        }
        break;
    case 0x16:
        break;
    case 0x17:
        if (param_3 != 0x168) {
            _printk(0x80006a3,"handle_get_votable_message",0x168);
            return 0;
        }
        uVar1 = *(param_2 + 0x10);
        uVar5 = uVar1;
        if (0xb < uVar1) {
            uVar3 = 0x8000741;
            pcVar4 = "handle_get_votable_message";
            goto code_r0x08002aa0;
        }
        if ((*(param_2 + 0x158) != 0) && (uVar1 = *(param_2 + 0x160), 0x3f < uVar1)) {
            uVar3 = 0x800066a;
            pcVar4 = "handle_get_votable_message";
            goto code_r0x08002af0;
        }
        memcpy(*(param_1 + 0x1420) + uVar5 * 0x178 + 0x18,param_2 + 0x10,0x158);
        break;
    default:
        uVar3 = 0x80005fe;
        pcVar4 = "battery_dbg_callback";
code_r0x08002ac0:
        _printk(uVar3,pcVar4,uVar5);
        return 0;
    case 0x36:
        if (0x1010 < param_3) {
            _printk(0x800054b,"handle_qbg_dump_message",param_3,0x1010);
            return 0;
        }
        uVar5 = *(param_2 + 0xc);
        if (0x1000 < *(param_2 + 0xc)) {
            uVar3 = 0x80003d0;
            pcVar4 = "handle_qbg_dump_message";
            goto code_r0x08002ac0;
        }
        memcpy(param_1 + 0x70,param_2 + 0x10,uVar5);
        *(param_1 + 0x1080) = uVar5;
        goto code_r0x080029d8;
    }
code_r0x080029d8:
    complete(param_1 + 0x40);
    return 0;
}


// ===== sym.seq_read.cfi_jt @ 0x08002250 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qbg_blob_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002258 (size 8) =====

int64_t sym.qbg_blob_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (ulong param_1,int64_t param_2,ulong param_3,ulong param_4,ulong param_5,int64_t param_6)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_68;
    uint uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_18 = *(iVar3 + 0x5e0);
    uStack_20 = param_5;
    iVar2 = memory_read_from_buffer
                      (param_4,param_6,&uStack_20,*(*(param_2 + 0x98) + 0x1078),*(*(param_2 + 0x98) + 0x1080));
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_18) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qbg_blob_write;
    pcStack_48 = sym.qbg_blob_write;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    iVar2 = *(extraout_x1 + 0x98);
    iVar3 = iVar2 + 0x10;
    uStack_5c = *(iVar2 + 0x142c);
    uStack_68 = 0x10000800d;
    uStack_60 = 0x36;
    puStack_50 = &stack0xfffffffffffffff0;
    mutex_lock(iVar3);
    *(iVar2 + 0x40) = 0;
    iVar1 = pmic_glink_write(*(iVar2 + 8),&uStack_68,0x10);
    if (iVar1 == 0) {
        iVar1 = wait_for_completion_timeout(iVar2 + 0x40,0xfa);
        if (iVar1 == 0) {
            _printk(0x80002ad,"battery_dbg_write");
            mutex_unlock(iVar3);
            param_6 = -0x6e;
        }
        else {
            mutex_unlock(iVar3);
        }
    }
    else {
        mutex_unlock(iVar3);
        if (iVar1 < 0) {
            param_6 = iVar1;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return param_6;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18_00 = sym.active_open;
    iVar3 = single_open(auVar4._8_8_,sym.active_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(auVar4._0_8_ + 0x2d8));
    return iVar3;
}


// ===== sym.qbg_blob_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002260 (size 8) =====

int64_t sym.qbg_blob_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    int64_t in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_48;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar3 = *(param_2 + 0x98);
    iVar2 = iVar3 + 0x10;
    uStack_3c = *(iVar3 + 0x142c);
    uStack_48 = 0x10000800d;
    uStack_40 = 0x36;
    mutex_lock(iVar2);
    *(iVar3 + 0x40) = 0;
    iVar1 = pmic_glink_write(*(iVar3 + 8),&uStack_48,0x10);
    if (iVar1 == 0) {
        iVar1 = wait_for_completion_timeout(iVar3 + 0x40,0xfa);
        if (iVar1 == 0) {
            _printk(0x80002ad,"battery_dbg_write");
            mutex_unlock(iVar2);
            in_x5 = -0x6e;
        }
        else {
            mutex_unlock(iVar2);
        }
    }
    else {
        mutex_unlock(iVar2);
        if (iVar1 < 0) {
            in_x5 = iVar1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return in_x5;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.active_open;
    iVar2 = single_open(auVar4._8_8_,sym.active_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(auVar4._0_8_ + 0x2d8));
    return iVar2;
}


// ===== sym.battery_dbg_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002268 (size 8) =====

int sym.battery_dbg_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + 0xa8);
    sysfs_remove_group(*puVar2,obj.battery_dbg_group);
    debugfs_remove(puVar2[0x20e]);
    iVar1 = pmic_glink_unregister_client(puVar2[1]);
    if (iVar1 < 0) {
        _printk(0x8000314,"battery_dbg_remove",iVar1);
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002270 (size 8) =====

uint64_t sym.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    ulong *puVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    char *pcStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    code *pcStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar10 = param_1 + 0x10;
    iStack_68 = *(iVar12 + 0x5e0);
    pcStack_88 = NULL;
    uStack_80 = 0;
    uStack_98 = 0;
    piStack_90 = NULL;
    piVar4 = devm_kmalloc(iVar10,0x1430,0xdc0);
    if (piVar4 == NULL) {
        uVar5 = 0xfffffff4;
        goto code_r0x08002770;
    }
    *piVar4 = iVar10;
    pcStack_a0 = "battery_debug";
    uStack_98 = CONCAT44(uStack_98._4_4_,0x800d);
    pcStack_88 = sym.battery_dbg_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piStack_90 = piVar4;
    uVar5 = pmic_glink_register_client(iVar10,&pcStack_a0);
    piVar4[1] = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        if (uVar5 == -0x205) {
            uVar5 = 0xfffffdfb;
        }
        else {
            _dev_err(*piVar4,"Error in registering with pmic_glink %d\n",uVar5 & 0xffffffff);
        }
        goto code_r0x08002770;
    }
    piVar14 = piVar4 + 2;
    __mutex_init(piVar14,"&bd->lock",reloc.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    *(piVar4 + 8) = 0;
    __init_swait_queue_head(piVar4 + 9,"&x->wait",reloc.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    iVar10 = *piVar4;
    *(param_1 + 0xa8) = piVar4;
    piVar4[0x20f] = piVar4 + 0xe;
    piVar4[0x210] = 0;
    uVar3 = sysfs_create_group(iVar10,obj.battery_dbg_group);
    if (uVar3 != 0) {
        uVar5 = uVar3;
        _dev_err(*piVar4,"Failed to create sysfs files for qbg_context: %d\n",uVar5);
        if (uVar3 < 0) {
            pmic_glink_unregister_client(piVar4[1]);
            goto code_r0x08002770;
        }
    }
    uVar6 = debugfs_create_dir("battery_debug",0);
    if (uVar6 < 0xfffffffffffff001) {
        uVar5 = debugfs_create_dir("votables",uVar6);
        if (uVar5 < 0xfffffffffffff001) {
            uStack_78 = 0x10000800d;
            uStack_70 = 0x15;
            mutex_lock(piVar14);
            *(piVar4 + 8) = 0;
            uVar3 = pmic_glink_write(piVar4[1],&uStack_78,0x10);
            if (uVar3 == 0) {
                iVar2 = wait_for_completion_timeout(piVar4 + 8,0xfa);
                if (iVar2 != 0) {
                    mutex_unlock(piVar14);
                    uVar3 = *(piVar4 + 0x211);
                    iVar10 = devm_kmalloc(*piVar4,uVar3 * 0x178,0xdc0);
                    piVar4[0x284] = iVar10;
                    if (iVar10 == 0) {
                        uVar5 = 0xfffffff4;
                        goto code_r0x0800274c;
                    }
                    if (uVar3 != 0) {
                        iVar12 = 0;
                        iVar15 = 1;
                        piVar14 = piVar4 + 0x212;
                        *(iVar10 + 0x10) = piVar4;
                        *(iVar10 + 8) = 0;
                        do {
                            uVar7 = debugfs_create_dir(piVar14,uVar5);
                            if (uVar7 < 0xfffffffffffff001) {
                                *(piVar4[0x284] + iVar12) = piVar14;
                                uVar8 = debugfs_create_file("active",0x100,uVar7,piVar4[0x284] + iVar12,
                                                            obj.active_fops);
                                if ((((0xfffffffffffff000 < uVar8) && (uVar8 != 0)) ||
                                    ((uVar8 = debugfs_create_file("winvote",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                  obj.winvote_fops), 0xfffffffffffff000 < uVar8 &&
                                     (uVar8 != 0)))) ||
                                   ((((uVar8 = debugfs_create_file("winner",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                   obj.winner_fops), 0xfffffffffffff000 < uVar8 &&
                                      (uVar8 != 0)) ||
                                     ((uVar8 = debugfs_create_file("voters",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                   obj.voters_fops), 0xfffffffffffff000 < uVar8 &&
                                      (uVar8 != 0)))) ||
                                    (((uVar8 = debugfs_create_file("votes",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                   obj.votes_fops), 0xfffffffffffff000 < uVar8 &&
                                      (uVar8 != 0)) ||
                                     ((uVar8 = debugfs_create_file("status",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                   obj.status_fops), 0xfffffffffffff000 < uVar8 &&
                                      (uVar8 != 0)))))))) {
                                    uVar9 = 0x800025c;
                                    pcVar11 = "battery_dbg_create_votable";
                                    goto code_r0x08002744;
                                }
                            }
                            else {
                                _printk(0x8000784,"battery_dbg_create_votable",piVar14);
                                if (uVar7 != 0) {
                                    uVar5 = uVar7 & 0xffffffff;
                                    goto code_r0x0800274c;
                                }
                            }
                            if (uVar3 * 0x178 + -0x178 == iVar12) break;
                            piVar14 = piVar14 + 0xc;
                            *(piVar4[0x284] + iVar12 + 0x188) = piVar4;
                            iVar10 = piVar4[0x284] + iVar12;
                            iVar12 = iVar12 + 0x178;
                            *(iVar10 + 0x180) = iVar15;
                            iVar15 = iVar15 + 1;
                            if (iVar15 == 0xe) {
    //WARNING: Does not return
                                pcVar1 = SoftwareBreakpoint(0x5512,0x80027bc);
                                (*pcVar1)();
                            }
                        } while( true );
                    }
                    goto code_r0x080026fc;
                }
                _printk(0x80002ad,"battery_dbg_write");
                uVar8 = 0xffffff92;
            }
            else {
                uVar8 = uVar3;
            }
            mutex_unlock(piVar14);
            uVar9 = 0x800049a;
            pcVar11 = "battery_dbg_create_votables";
code_r0x08002744:
            _printk(uVar9,pcVar11,uVar8 & 0xffffffff);
            uVar5 = uVar8;
        }
        else {
            _printk(0x80004fc,"battery_dbg_create_votables");
            if (uVar5 == 0) {
code_r0x080026fc:
                uVar5 = 0;
                piVar4[0x20e] = uVar6;
                goto code_r0x08002770;
            }
        }
code_r0x0800274c:
        _printk(0x80002e2,"battery_dbg_add_debugfs",uVar5 & 0xffffffff);
        debugfs_remove(uVar6);
    }
    else {
        _printk(0x8000400,"battery_dbg_add_debugfs",uVar6 & 0xffffffff);
    }
    uVar5 = 0;
code_r0x08002770:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar5 & 0xffffffff;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.battery_dbg_remove;
    puVar13 = *(iVar10 + 0xa8);
    sysfs_remove_group(*puVar13,obj.battery_dbg_group);
    debugfs_remove(puVar13[0x20e]);
    uVar3 = pmic_glink_unregister_client(puVar13[1]);
    if (uVar3 < 0) {
        _printk(0x8000314,"battery_dbg_remove",uVar3);
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002278 (size 8) =====

void sym.status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.status_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.winvote_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002280 (size 8) =====

void sym.winvote_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.winvote_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08002288 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.voters_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002290 (size 8) =====

void sym.voters_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.voters_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.winner_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002298 (size 8) =====

void sym.winner_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.winner_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.active_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022a0 (size 8) =====

void sym.active_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.active_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.votes_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022a8 (size 8) =====

void sym.votes_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.votes_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.battery_cell_id_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022b0 (size 8) =====

ulong sym.battery_cell_id_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kstrtouint(param_3,0,*(param_1 + 0x98) + 0x142c);
    if (iVar1 != 0) {
        param_4 = 0xffffffffffffffea;
    }
    return param_4;
}


// ===== sym.votes_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022b8 (size 8) =====

uint64_t sym.votes_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_68;
    uint uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    puVar10 = *(param_1 + 0x80);
    iVar8 = puVar10[2];
    uStack_68 = 0x10000800d;
    uStack_5c = *(puVar10 + 1);
    iVar1 = iVar8 + 0x10;
    uStack_60 = 0x17;
    mutex_lock(iVar1);
    *(iVar8 + 0x40) = 0;
    uVar5 = pmic_glink_write(*(iVar8 + 8),&uStack_68,0x10);
    if (uVar5 == 0) {
        iVar6 = wait_for_completion_timeout(iVar8 + 0x40,0xfa);
        if (iVar6 != 0) {
            mutex_unlock(iVar1);
            uVar7 = puVar10[0x2c];
            uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
            uVar5 = uVar9;
            while (uVar5 >> 6 == 0) {
                if (0x3f < uVar9) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x80034ec);
                    (*pcVar3)();
                }
                seq_printf(param_1,0x8000666,*(puVar10 + uVar9 * 4 + 0x60));
                bVar4 = uVar9 != 0x3f;
                uVar9 = -1L << (uVar9 + 1 & 0x3f) & uVar7;
                uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
                uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
                uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
                uVar2 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                uVar9 = 0x40;
                if (bVar4) {
                    uVar9 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
                }
                uVar5 = uVar9;
            }
            seq_puts(param_1,0x80005fc);
            uVar5 = 0;
            goto code_r0x08003464;
        }
        _printk(0x80002ad,"battery_dbg_write");
        uVar5 = 0xffffff92;
    }
    mutex_unlock(iVar1);
    _printk(0x80001de,"votes_show",*puVar10,uVar5);
code_r0x08003464:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.status_open;
    uVar9 = single_open(auVar11._8_8_,sym.status_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(auVar11._0_8_ + 0x2d8)
                       );
    return uVar9;
}


// ===== sym.winner_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022c0 (size 8) =====

int sym.winner_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *puVar4;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar4 = *(param_1 + 0x80);
    iVar5 = puVar4[2];
    uStack_58 = 0x10000800d;
    uStack_4c = *(puVar4 + 1);
    iVar3 = iVar5 + 0x10;
    uStack_50 = 0x17;
    mutex_lock(iVar3);
    *(iVar5 + 0x40) = 0;
    iVar2 = pmic_glink_write(*(iVar5 + 8),&uStack_58,0x10);
    if (iVar2 == 0) {
        iVar2 = wait_for_completion_timeout(iVar5 + 0x40,0xfa);
        if (iVar2 == 0) {
            _printk(0x80002ad,"battery_dbg_write");
            iVar2 = -0x6e;
            goto code_r0x08003130;
        }
        mutex_unlock(iVar3);
        if (puVar4[0x2c] == 0) {
            iVar3 = 0x8000736;
        }
        else {
            if (0x40 < *(puVar4 + 0x2d)) goto code_r0x0800315c;
            iVar3 = iVar5 + *(puVar4 + 0x2d) * 0xc + 0x1120;
        }
        seq_printf(param_1,0x800073d,iVar3);
        iVar2 = 0;
    }
    else {
code_r0x08003130:
        mutex_unlock(iVar3);
        _printk(0x80001de,"winner_show",*puVar4,iVar2);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x0800315c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003160);
    (*pcVar1)();
}


// ===== sym.status_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022c8 (size 8) =====

int sym.status_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puVar8 = *(param_1 + 0x80);
    iVar9 = puVar8[2];
    uStack_78 = 0x10000800d;
    uStack_6c = *(puVar8 + 1);
    iVar1 = iVar9 + 0x10;
    uStack_70 = 0x17;
    mutex_lock(iVar1);
    *(iVar9 + 0x40) = 0;
    iVar6 = pmic_glink_write(*(iVar9 + 8),&uStack_78,0x10);
    if (iVar6 == 0) {
        iVar6 = wait_for_completion_timeout(iVar9 + 0x40,0xfa);
        if (iVar6 == 0) {
            _printk(0x80002ad,"battery_dbg_write");
            iVar6 = -0x6e;
            goto code_r0x080036f4;
        }
        mutex_unlock(iVar1);
        uVar7 = puVar8[0x2c];
        if (uVar7 == 0) {
            seq_puts(param_1,0x80005fc);
        }
        else {
            uVar2 = *(puVar8 + 0x2d);
            if (0x40 < uVar2) goto code_r0x08003720;
            uVar3 = *(puVar8 + 0x1c);
            uVar10 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
            do {
                seq_printf(param_1,"           %-*s: %-*s: %d\n",0xc,*puVar8,0xc,iVar9 + uVar10 * 0xc + 0x1120,
                           *(puVar8 + uVar10 * 4 + 0x60));
                bVar5 = 0x3e < uVar10;
                uVar10 = -1L << (uVar10 + 1 & 0x3f) & uVar7;
                uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
                uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
                uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
                uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
                if (bVar5) {
                    uVar10 = 0x40;
                }
            } while (uVar10 >> 6 == 0);
            seq_printf(param_1,"EFFECTIVE: %-*s: %-*s: %d\n",0xc,*puVar8,0xc,iVar9 + uVar2 * 0xc + 0x1120,uVar3);
        }
        iVar6 = 0;
    }
    else {
code_r0x080036f4:
        mutex_unlock(iVar1);
        _printk(0x80001de,"status_show",*puVar8,iVar6);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    __stack_chk_fail();
code_r0x08003720:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8003724);
    (*pcVar4)();
}


// ===== sym.voters_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022d0 (size 8) =====

uint64_t sym.voters_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puVar8 = *(param_1 + 0x80);
    iVar7 = puVar8[2];
    uStack_78 = 0x10000800d;
    uStack_6c = *(puVar8 + 1);
    iVar1 = iVar7 + 0x10;
    uStack_70 = 0x17;
    mutex_lock(iVar1);
    *(iVar7 + 0x40) = 0;
    uVar3 = pmic_glink_write(*(iVar7 + 8),&uStack_78,0x10);
    if (uVar3 == 0) {
        iVar4 = wait_for_completion_timeout(iVar7 + 0x40,0xfa);
        if (iVar4 != 0) {
            mutex_unlock(iVar1);
            uVar5 = puVar8[0x2c];
            uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
            uVar3 = uVar6;
            while (uVar3 >> 6 == 0) {
                seq_printf(param_1,0x80007ca,iVar7 + uVar6 * 0xc + 0x1120);
                bVar2 = 0x3e < uVar6;
                uVar6 = -1L << (uVar6 + 1 & 0x3f) & uVar5;
                uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
                if (bVar2) {
                    uVar6 = 0x40;
                }
                uVar3 = uVar6;
            }
            seq_puts(param_1,0x80005fc);
            uVar3 = 0;
            goto code_r0x080032a0;
        }
        _printk(0x80002ad,"battery_dbg_write");
        uVar3 = 0xffffff92;
    }
    mutex_unlock(iVar1);
    _printk(0x80001de,"voters_show",*puVar8,uVar3);
code_r0x080032a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.votes_open;
    uVar6 = single_open(auVar9._8_8_,sym.votes_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(auVar9._0_8_ + 0x2d8));
    return uVar6;
}


// ===== sym.winvote_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022d8 (size 8) =====

uint64_t sym.winvote_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong *puVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    puVar7 = *(param_1 + 0x80);
    iVar6 = puVar7[2];
    uStack_58 = 0x10000800d;
    uStack_4c = *(puVar7 + 1);
    iVar1 = iVar6 + 0x10;
    uStack_50 = 0x17;
    mutex_lock(iVar1);
    *(iVar6 + 0x40) = 0;
    uVar2 = pmic_glink_write(*(iVar6 + 8),&uStack_58,0x10);
    if (uVar2 == 0) {
        iVar3 = wait_for_completion_timeout(iVar6 + 0x40,0xfa);
        if (iVar3 != 0) {
            mutex_unlock(iVar1);
            if (puVar7[0x2c] == 0) {
                uVar5 = 0xffffffea;
            }
            else {
                uVar5 = *(puVar7 + 0x1c);
            }
            seq_printf(param_1,0x8000539,uVar5);
            uVar2 = 0;
            goto code_r0x08002f48;
        }
        _printk(0x80002ad,"battery_dbg_write");
        uVar2 = 0xffffff92;
    }
    mutex_unlock(iVar1);
    _printk(0x80001de,"winvote_show",*puVar7,uVar2);
code_r0x08002f48:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar8 = __stack_chk_fail();
        *extraout_x18 = sym.winner_open;
        uVar4 = single_open(auVar8._8_8_,sym.winner_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                            *(auVar8._0_8_ + 0x2d8));
        return uVar4;
    }
    return uVar2;
}


// ===== sym.active_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022e0 (size 8) =====

uint64_t sym.active_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    puVar6 = *(param_1 + 0x80);
    iVar5 = puVar6[2];
    uStack_58 = 0x10000800d;
    uStack_4c = *(puVar6 + 1);
    iVar1 = iVar5 + 0x10;
    uStack_50 = 0x17;
    mutex_lock(iVar1);
    *(iVar5 + 0x40) = 0;
    uVar2 = pmic_glink_write(*(iVar5 + 8),&uStack_58,0x10);
    if (uVar2 == 0) {
        iVar3 = wait_for_completion_timeout(iVar5 + 0x40,0xfa);
        if (iVar3 != 0) {
            mutex_unlock(iVar1);
            seq_printf(param_1,"%#x\n",puVar6[0x2c]);
            uVar2 = 0;
            goto code_r0x08002dd8;
        }
        _printk(0x80002ad,"battery_dbg_write");
        uVar2 = 0xffffff92;
    }
    mutex_unlock(iVar1);
    _printk(0x80001de,"active_show",*puVar6,uVar2);
code_r0x08002dd8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar7 = __stack_chk_fail();
        *extraout_x18 = sym.winvote_open;
        uVar4 = single_open(auVar7._8_8_,sym.winvote_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                            *(auVar7._0_8_ + 0x2d8));
        return uVar4;
    }
    return uVar2;
}


// ===== sym.battery_dbg_probe @ 0x080022e8 (size 1240) =====

uint64_t sym.battery_dbg_probe(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    ulong *puVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    char *pcStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    code *pcStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar10 = arg1 + 0x10;
    iStack_68 = *(iVar12 + 0x5e0);
    pcStack_88 = NULL;
    uStack_80 = 0;
    uStack_98 = 0;
    piStack_90 = NULL;
    piVar4 = devm_kmalloc(iVar10,0x1430,0xdc0);
    if (piVar4 == NULL) {
        uVar5 = 0xfffffff4;
        goto code_r0x08002770;
    }
    *piVar4 = iVar10;
    pcStack_a0 = "battery_debug";
    uStack_98 = CONCAT44(uStack_98._4_4_,0x800d);
    pcStack_88 = sym.battery_dbg_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piStack_90 = piVar4;
    uVar5 = pmic_glink_register_client(iVar10,&pcStack_a0);
    piVar4[1] = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        if (uVar5 == -0x205) {
            uVar5 = 0xfffffdfb;
        }
        else {
            _dev_err(*piVar4,"Error in registering with pmic_glink %d\n",uVar5 & 0xffffffff);
        }
        goto code_r0x08002770;
    }
    piVar14 = piVar4 + 2;
    __mutex_init(piVar14,"&bd->lock",reloc.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    *(piVar4 + 8) = 0;
    __init_swait_queue_head(piVar4 + 9,"&x->wait",reloc.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    iVar10 = *piVar4;
    *(arg1 + 0xa8) = piVar4;
    piVar4[0x20f] = piVar4 + 0xe;
    piVar4[0x210] = 0;
    uVar3 = sysfs_create_group(iVar10,obj.battery_dbg_group);
    if (uVar3 != 0) {
        uVar5 = uVar3;
        _dev_err(*piVar4,"Failed to create sysfs files for qbg_context: %d\n",uVar5);
        if (uVar3 < 0) {
            pmic_glink_unregister_client(piVar4[1]);
            goto code_r0x08002770;
        }
    }
    uVar6 = debugfs_create_dir("battery_debug",0);
    if (uVar6 < 0xfffffffffffff001) {
        uVar5 = debugfs_create_dir("votables",uVar6);
        if (uVar5 < 0xfffffffffffff001) {
            uStack_78 = 0x10000800d;
            uStack_70 = 0x15;
            mutex_lock(piVar14);
            *(piVar4 + 8) = 0;
            uVar3 = pmic_glink_write(piVar4[1],&uStack_78,0x10);
            if (uVar3 == 0) {
                iVar2 = wait_for_completion_timeout(piVar4 + 8,0xfa);
                if (iVar2 != 0) {
                    mutex_unlock(piVar14);
                    uVar3 = *(piVar4 + 0x211);
                    iVar10 = devm_kmalloc(*piVar4,uVar3 * 0x178,0xdc0);
                    piVar4[0x284] = iVar10;
                    if (iVar10 == 0) {
                        uVar5 = 0xfffffff4;
                        goto code_r0x0800274c;
                    }
                    if (uVar3 != 0) {
                        iVar12 = 0;
                        iVar15 = 1;
                        piVar14 = piVar4 + 0x212;
                        *(iVar10 + 0x10) = piVar4;
                        *(iVar10 + 8) = 0;
                        do {
                            uVar7 = debugfs_create_dir(piVar14,uVar5);
                            if (uVar7 < 0xfffffffffffff001) {
                                *(piVar4[0x284] + iVar12) = piVar14;
                                uVar8 = debugfs_create_file("active",0x100,uVar7,piVar4[0x284] + iVar12,
                                                            obj.active_fops);
                                if ((((0xfffffffffffff000 < uVar8) && (uVar8 != 0)) ||
                                    ((uVar8 = debugfs_create_file("winvote",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                  obj.winvote_fops), 0xfffffffffffff000 < uVar8 &&
                                     (uVar8 != 0)))) ||
                                   ((((uVar8 = debugfs_create_file("winner",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                   obj.winner_fops), 0xfffffffffffff000 < uVar8 &&
                                      (uVar8 != 0)) ||
                                     ((uVar8 = debugfs_create_file("voters",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                   obj.voters_fops), 0xfffffffffffff000 < uVar8 &&
                                      (uVar8 != 0)))) ||
                                    (((uVar8 = debugfs_create_file("votes",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                   obj.votes_fops), 0xfffffffffffff000 < uVar8 &&
                                      (uVar8 != 0)) ||
                                     ((uVar8 = debugfs_create_file("status",0x100,uVar7,piVar4[0x284] + iVar12,
                                                                   obj.status_fops), 0xfffffffffffff000 < uVar8 &&
                                      (uVar8 != 0)))))))) {
                                    uVar9 = 0x800025c;
                                    pcVar11 = "battery_dbg_create_votable";
                                    goto code_r0x08002744;
                                }
                            }
                            else {
                                _printk(0x8000784,"battery_dbg_create_votable",piVar14);
                                if (uVar7 != 0) {
                                    uVar5 = uVar7 & 0xffffffff;
                                    goto code_r0x0800274c;
                                }
                            }
                            if (uVar3 * 0x178 + -0x178 == iVar12) break;
                            piVar14 = piVar14 + 0xc;
                            *(piVar4[0x284] + iVar12 + 0x188) = piVar4;
                            iVar10 = piVar4[0x284] + iVar12;
                            iVar12 = iVar12 + 0x178;
                            *(iVar10 + 0x180) = iVar15;
                            iVar15 = iVar15 + 1;
                            if (iVar15 == 0xe) {
    //WARNING: Does not return
                                pcVar1 = SoftwareBreakpoint(0x5512,0x80027bc);
                                (*pcVar1)();
                            }
                        } while( true );
                    }
                    goto code_r0x080026fc;
                }
                _printk(0x80002ad,"battery_dbg_write");
                uVar8 = 0xffffff92;
            }
            else {
                uVar8 = uVar3;
            }
            mutex_unlock(piVar14);
            uVar9 = 0x800049a;
            pcVar11 = "battery_dbg_create_votables";
code_r0x08002744:
            _printk(uVar9,pcVar11,uVar8 & 0xffffffff);
            uVar5 = uVar8;
        }
        else {
            _printk(0x80004fc,"battery_dbg_create_votables");
            if (uVar5 == 0) {
code_r0x080026fc:
                uVar5 = 0;
                piVar4[0x20e] = uVar6;
                goto code_r0x08002770;
            }
        }
code_r0x0800274c:
        _printk(0x80002e2,"battery_dbg_add_debugfs",uVar5 & 0xffffffff);
        debugfs_remove(uVar6);
    }
    else {
        _printk(0x8000400,"battery_dbg_add_debugfs",uVar6 & 0xffffffff);
    }
    uVar5 = 0;
code_r0x08002770:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar5 & 0xffffffff;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.battery_dbg_remove;
    puVar13 = *(iVar10 + 0xa8);
    sysfs_remove_group(*puVar13,obj.battery_dbg_group);
    debugfs_remove(puVar13[0x20e]);
    uVar3 = pmic_glink_unregister_client(puVar13[1]);
    if (uVar3 < 0) {
        _printk(0x8000314,"battery_dbg_remove",uVar3);
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.battery_dbg_remove @ 0x080027c0 (size 120) =====

int sym.battery_dbg_remove(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(arg1 + 0xa8);
    sysfs_remove_group(*puVar2,obj.battery_dbg_group);
    debugfs_remove(puVar2[0x20e]);
    iVar1 = pmic_glink_unregister_client(puVar2[1]);
    if (iVar1 < 0) {
        _printk(0x8000314,"battery_dbg_remove",iVar1);
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.battery_dbg_callback @ 0x08002838 (size 708) =====

ulong sym.battery_dbg_callback(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg2 + 8);
    uVar1 = *(arg2 + 8) - 0x15;
    if (uVar1 < 0x22) {
    //switch table (34 cases) at 0x80001b0
        switch(*(uVar1 + 0x80001b0) * 4 + 0x8002884) {
        case 0x8002888:
            if (arg3 != 0x3a4) {
                _printk(0x80006a3,"handle_get_votables_list_message",0x3a4);
                return 0;
            }
            uVar1 = *(arg2 + 0xc);
            uVar5 = uVar1;
            if (0xb < uVar1) {
                uVar3 = 0x8000210;
                pcVar4 = "handle_get_votables_list_message";
code_r0x08002aa0:
                _printk(uVar3,pcVar4,uVar5,0xc);
                return 0;
            }
            uVar1 = *(arg2 + 0x10);
            if (0x3f < uVar1) {
                uVar3 = 0x80005a3;
                pcVar4 = "handle_get_votables_list_message";
code_r0x08002af0:
                _printk(uVar3,pcVar4,uVar1,0x40);
                return 0;
            }
            memcpy(arg1 + 0x1088,arg2 + 0xc,0x398);
            iVar6 = 0;
            *(arg1 + 0x109b) = 0;
            *(arg1 + 0x10a7) = 0;
            *(arg1 + 0x10b3) = 0;
            *(arg1 + 0x10bf) = 0;
            *(arg1 + 0x10cb) = 0;
            *(arg1 + 0x10d7) = 0;
            *(arg1 + 0x10e3) = 0;
            *(arg1 + 0x10ef) = 0;
            *(arg1 + 0x10fb) = 0;
            *(arg1 + 0x1107) = 0;
            *(arg1 + 0x1113) = 0;
            *(arg1 + 0x111f) = 0;
            do {
                *(arg1 + 0x112b + iVar6) = 0;
                iVar6 = iVar6 + 0xc;
            } while (iVar6 != 0x300);
            if (*(arg1 + 0x1428) == '\0') {
                iVar6 = 0;
                iVar7 = arg1 + 0x1120;
                do {
                    iVar2 = strcmp(iVar7,"glink");
                    if (iVar2 == 0) {
                        *(arg1 + 0x1428) = iVar6;
                        break;
                    }
                    iVar6 = iVar6 + 1;
                    iVar7 = iVar7 + 0xc;
                } while (iVar6 != 0x40);
            }
            break;
        case 0x8002958:
            if (arg3 != 0x168) {
                _printk(0x80006a3,"handle_get_votable_message",0x168);
                return 0;
            }
            uVar1 = *(arg2 + 0x10);
            uVar5 = uVar1;
            if (0xb < uVar1) {
                uVar3 = 0x8000741;
                pcVar4 = "handle_get_votable_message";
                goto code_r0x08002aa0;
            }
            if ((*(arg2 + 0x158) != 0) && (uVar1 = *(arg2 + 0x160), 0x3f < uVar1)) {
                uVar3 = 0x800066a;
                pcVar4 = "handle_get_votable_message";
                goto code_r0x08002af0;
            }
            memcpy(*(arg1 + 0x1420) + uVar5 * 0x178 + 0x18,arg2 + 0x10,0x158);
            break;
        case 0x80029b0:
            if (0x1010 < arg3) {
                _printk(0x800054b,"handle_qbg_dump_message",arg3,0x1010);
                return 0;
            }
            uVar5 = *(arg2 + 0xc);
            if (0x1000 < *(arg2 + 0xc)) {
                uVar3 = 0x80003d0;
                pcVar4 = "handle_qbg_dump_message";
                goto code_r0x08002ac0;
            }
            memcpy(arg1 + 0x70,arg2 + 0x10,uVar5);
            *(arg1 + 0x1080) = uVar5;
            goto code_r0x080029d8;
        case 0x8002a10:
            goto code_r0x08002a10;
        }
code_r0x080029d8:
        complete(arg1 + 0x40);
        return 0;
    }
code_r0x08002a10:
    uVar3 = 0x80005fe;
    pcVar4 = "battery_dbg_callback";
code_r0x08002ac0:
    _printk(uVar3,pcVar4,uVar5);
    return 0;
}


// ===== sym.battery_cell_id_show @ 0x08002afc (size 68) =====

int64_t sym.battery_cell_id_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x80003b3,*(*(arg1 + 0x98) + 0x142c));
    return iVar1;
}


// ===== sym.battery_cell_id_store @ 0x08002b40 (size 84) =====

int64_t sym.battery_cell_id_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kstrtouint(arg2,0,*(arg1 + 0x98) + 0x142c);
    if (iVar1 != 0) {
        arg3 = -0x16;
    }
    return arg3;
}


// ===== sym.qbg_blob_read @ 0x08002b94 (size 112) =====

int64_t sym.qbg_blob_read(ulong noname_0,int64_t arg1,uchar noname_2 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t extraout_x1;
    int64_t in_x5;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_68;
    uint uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar4 = *(iVar3 + 0x5e0);
    iVar2 = memory_read_from_buffer(arg2);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iVar4) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qbg_blob_write;
    pcStack_48 = sym.qbg_blob_write;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    iVar2 = *(extraout_x1 + 0x98);
    iVar3 = iVar2 + 0x10;
    uStack_5c = *(iVar2 + 0x142c);
    uStack_68 = 0x10000800d;
    uStack_60 = 0x36;
    puStack_50 = &stack0xfffffffffffffff0;
    mutex_lock(iVar3);
    *(iVar2 + 0x40) = 0;
    iVar1 = pmic_glink_write(*(iVar2 + 8),&uStack_68,0x10);
    if (iVar1 == 0) {
        iVar1 = wait_for_completion_timeout(iVar2 + 0x40,0xfa);
        if (iVar1 == 0) {
            _printk(0x80002ad,"battery_dbg_write");
            mutex_unlock(iVar3);
            in_x5 = -0x6e;
        }
        else {
            mutex_unlock(iVar3);
        }
    }
    else {
        mutex_unlock(iVar3);
        if (iVar1 < 0) {
            in_x5 = iVar1;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return in_x5;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.active_open;
    iVar3 = single_open(auVar5._8_8_,sym.active_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(auVar5._0_8_ + 0x2d8));
    return iVar3;
}


// ===== sym.qbg_blob_write @ 0x08002c04 (size 248) =====

int64_t sym.qbg_blob_write(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_48;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar3 = *(arg1 + 0x98);
    iVar2 = iVar3 + 0x10;
    uStack_3c = *(iVar3 + 0x142c);
    uStack_48 = 0x10000800d;
    uStack_40 = 0x36;
    mutex_lock(iVar2);
    *(iVar3 + 0x40) = 0;
    iVar1 = pmic_glink_write(*(iVar3 + 8),&uStack_48,0x10);
    if (iVar1 == 0) {
        iVar1 = wait_for_completion_timeout(iVar3 + 0x40,0xfa);
        if (iVar1 == 0) {
            _printk(0x80002ad,"battery_dbg_write");
            mutex_unlock(iVar2);
            in_x5 = -0x6e;
        }
        else {
            mutex_unlock(iVar2);
        }
    }
    else {
        mutex_unlock(iVar2);
        if (iVar1 < 0) {
            in_x5 = iVar1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return in_x5;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.active_open;
    iVar2 = single_open(auVar4._8_8_,sym.active_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(auVar4._0_8_ + 0x2d8));
    return iVar2;
}


// ===== sym.active_open @ 0x08002cfc (size 56) =====

void sym.active_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.active_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.active_show @ 0x08002d34 (size 296) =====

uint64_t sym.active_show(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    puVar6 = *(arg1 + 0x80);
    iVar5 = puVar6[2];
    uStack_58 = 0x10000800d;
    uStack_4c = *(puVar6 + 1);
    iVar1 = iVar5 + 0x10;
    uStack_50 = 0x17;
    mutex_lock(iVar1);
    *(iVar5 + 0x40) = 0;
    uVar2 = pmic_glink_write(*(iVar5 + 8),&uStack_58,0x10);
    if (uVar2 == 0) {
        iVar3 = wait_for_completion_timeout(iVar5 + 0x40,0xfa);
        if (iVar3 != 0) {
            mutex_unlock(iVar1);
            seq_printf(arg1,"%#x\n",puVar6[0x2c]);
            uVar2 = 0;
            goto code_r0x08002dd8;
        }
        _printk(0x80002ad,"battery_dbg_write");
        uVar2 = 0xffffff92;
    }
    mutex_unlock(iVar1);
    _printk(0x80001de,"active_show",*puVar6,uVar2);
code_r0x08002dd8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar7 = __stack_chk_fail();
        *extraout_x18 = sym.winvote_open;
        uVar4 = single_open(auVar7._8_8_,sym.winvote_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                            *(auVar7._0_8_ + 0x2d8));
        return uVar4;
    }
    return uVar2;
}


// ===== sym.winvote_open @ 0x08002e5c (size 56) =====

void sym.winvote_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.winvote_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.winvote_show @ 0x08002e94 (size 312) =====

uint64_t sym.winvote_show(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong *puVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    puVar7 = *(arg1 + 0x80);
    iVar6 = puVar7[2];
    uStack_58 = 0x10000800d;
    uStack_4c = *(puVar7 + 1);
    iVar1 = iVar6 + 0x10;
    uStack_50 = 0x17;
    mutex_lock(iVar1);
    *(iVar6 + 0x40) = 0;
    uVar2 = pmic_glink_write(*(iVar6 + 8),&uStack_58,0x10);
    if (uVar2 == 0) {
        iVar3 = wait_for_completion_timeout(iVar6 + 0x40,0xfa);
        if (iVar3 != 0) {
            mutex_unlock(iVar1);
            if (puVar7[0x2c] == 0) {
                uVar5 = 0xffffffea;
            }
            else {
                uVar5 = *(puVar7 + 0x1c);
            }
            seq_printf(arg1,0x8000539,uVar5);
            uVar2 = 0;
            goto code_r0x08002f48;
        }
        _printk(0x80002ad,"battery_dbg_write");
        uVar2 = 0xffffff92;
    }
    mutex_unlock(iVar1);
    _printk(0x80001de,"winvote_show",*puVar7,uVar2);
code_r0x08002f48:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar8 = __stack_chk_fail();
        *extraout_x18 = sym.winner_open;
        uVar4 = single_open(auVar8._8_8_,sym.winner_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                            *(auVar8._0_8_ + 0x2d8));
        return uVar4;
    }
    return uVar2;
}


// ===== sym.winner_open @ 0x08002fcc (size 56) =====

void sym.winner_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.winner_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.winner_show @ 0x08003004 (size 348) =====

int sym.winner_show(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *puVar4;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    puVar4 = *(arg1 + 0x80);
    iVar5 = puVar4[2];
    uStack_58 = 0x10000800d;
    uStack_4c = *(puVar4 + 1);
    iVar3 = iVar5 + 0x10;
    uStack_50 = 0x17;
    mutex_lock(iVar3);
    *(iVar5 + 0x40) = 0;
    iVar2 = pmic_glink_write(*(iVar5 + 8),&uStack_58,0x10);
    if (iVar2 == 0) {
        iVar2 = wait_for_completion_timeout(iVar5 + 0x40,0xfa);
        if (iVar2 == 0) {
            _printk(0x80002ad,"battery_dbg_write");
            iVar2 = -0x6e;
            goto code_r0x08003130;
        }
        mutex_unlock(iVar3);
        if (puVar4[0x2c] == 0) {
            iVar3 = 0x8000736;
        }
        else {
            if (0x40 < *(puVar4 + 0x2d)) goto code_r0x0800315c;
            iVar3 = iVar5 + *(puVar4 + 0x2d) * 0xc + 0x1120;
        }
        seq_printf(arg1,0x800073d,iVar3);
        iVar2 = 0;
    }
    else {
code_r0x08003130:
        mutex_unlock(iVar3);
        _printk(0x80001de,"winner_show",*puVar4,iVar2);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return iVar2;
    }
    __stack_chk_fail();
code_r0x0800315c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8003160);
    (*pcVar1)();
}


// ===== sym.voters_open @ 0x08003160 (size 56) =====

void sym.voters_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.voters_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.voters_show @ 0x08003198 (size 404) =====

uint64_t sym.voters_show(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puVar8 = *(arg1 + 0x80);
    iVar7 = puVar8[2];
    uStack_78 = 0x10000800d;
    uStack_6c = *(puVar8 + 1);
    iVar1 = iVar7 + 0x10;
    uStack_70 = 0x17;
    mutex_lock(iVar1);
    *(iVar7 + 0x40) = 0;
    uVar3 = pmic_glink_write(*(iVar7 + 8),&uStack_78,0x10);
    if (uVar3 == 0) {
        iVar4 = wait_for_completion_timeout(iVar7 + 0x40,0xfa);
        if (iVar4 != 0) {
            mutex_unlock(iVar1);
            uVar5 = puVar8[0x2c];
            uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
            uVar3 = uVar6;
            while (uVar3 >> 6 == 0) {
                seq_printf(arg1,0x80007ca,iVar7 + uVar6 * 0xc + 0x1120);
                bVar2 = 0x3e < uVar6;
                uVar6 = -1L << (uVar6 + 1 & 0x3f) & uVar5;
                uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
                uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
                if (bVar2) {
                    uVar6 = 0x40;
                }
                uVar3 = uVar6;
            }
            seq_puts(arg1,0x80005fc);
            uVar3 = 0;
            goto code_r0x080032a0;
        }
        _printk(0x80002ad,"battery_dbg_write");
        uVar3 = 0xffffff92;
    }
    mutex_unlock(iVar1);
    _printk(0x80001de,"voters_show",*puVar8,uVar3);
code_r0x080032a0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.votes_open;
    uVar6 = single_open(auVar9._8_8_,sym.votes_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(auVar9._0_8_ + 0x2d8));
    return uVar6;
}


// ===== sym.votes_open @ 0x0800332c (size 56) =====

void sym.votes_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.votes_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.votes_show @ 0x08003364 (size 396) =====

uint64_t sym.votes_show(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_68;
    uint uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    puVar10 = *(arg1 + 0x80);
    iVar8 = puVar10[2];
    uStack_68 = 0x10000800d;
    uStack_5c = *(puVar10 + 1);
    iVar1 = iVar8 + 0x10;
    uStack_60 = 0x17;
    mutex_lock(iVar1);
    *(iVar8 + 0x40) = 0;
    uVar5 = pmic_glink_write(*(iVar8 + 8),&uStack_68,0x10);
    if (uVar5 == 0) {
        iVar6 = wait_for_completion_timeout(iVar8 + 0x40,0xfa);
        if (iVar6 != 0) {
            mutex_unlock(iVar1);
            uVar7 = puVar10[0x2c];
            uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
            uVar5 = uVar9;
            while (uVar5 >> 6 == 0) {
                if (0x3f < uVar9) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x80034ec);
                    (*pcVar3)();
                }
                seq_printf(arg1,0x8000666,*(puVar10 + uVar9 * 4 + 0x60));
                bVar4 = uVar9 != 0x3f;
                uVar9 = -1L << (uVar9 + 1 & 0x3f) & uVar7;
                uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
                uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
                uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
                uVar2 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                uVar9 = 0x40;
                if (bVar4) {
                    uVar9 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
                }
                uVar5 = uVar9;
            }
            seq_puts(arg1,0x80005fc);
            uVar5 = 0;
            goto code_r0x08003464;
        }
        _printk(0x80002ad,"battery_dbg_write");
        uVar5 = 0xffffff92;
    }
    mutex_unlock(iVar1);
    _printk(0x80001de,"votes_show",*puVar10,uVar5);
code_r0x08003464:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.status_open;
    uVar9 = single_open(auVar11._8_8_,sym.status_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(auVar11._0_8_ + 0x2d8)
                       );
    return uVar9;
}


// ===== sym.status_open @ 0x080034f0 (size 56) =====

void sym.status_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.status_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.status_show @ 0x08003528 (size 508) =====

int sym.status_show(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puVar8 = *(arg1 + 0x80);
    iVar9 = puVar8[2];
    uStack_78 = 0x10000800d;
    uStack_6c = *(puVar8 + 1);
    iVar1 = iVar9 + 0x10;
    uStack_70 = 0x17;
    mutex_lock(iVar1);
    *(iVar9 + 0x40) = 0;
    iVar6 = pmic_glink_write(*(iVar9 + 8),&uStack_78,0x10);
    if (iVar6 == 0) {
        iVar6 = wait_for_completion_timeout(iVar9 + 0x40,0xfa);
        if (iVar6 == 0) {
            _printk(0x80002ad,"battery_dbg_write");
            iVar6 = -0x6e;
            goto code_r0x080036f4;
        }
        mutex_unlock(iVar1);
        uVar7 = puVar8[0x2c];
        if (uVar7 == 0) {
            seq_puts(arg1,0x80005fc);
        }
        else {
            uVar2 = *(puVar8 + 0x2d);
            if (0x40 < uVar2) goto code_r0x08003720;
            uVar3 = *(puVar8 + 0x1c);
            uVar10 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
            do {
                seq_printf(arg1,"           %-*s: %-*s: %d\n",0xc,*puVar8,0xc,iVar9 + uVar10 * 0xc + 0x1120,
                           *(puVar8 + uVar10 * 4 + 0x60));
                bVar5 = 0x3e < uVar10;
                uVar10 = -1L << (uVar10 + 1 & 0x3f) & uVar7;
                uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
                uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
                uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
                uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
                if (bVar5) {
                    uVar10 = 0x40;
                }
            } while (uVar10 >> 6 == 0);
            seq_printf(arg1,"EFFECTIVE: %-*s: %-*s: %d\n",0xc,*puVar8,0xc,iVar9 + uVar2 * 0xc + 0x1120,uVar3);
        }
        iVar6 = 0;
    }
    else {
code_r0x080036f4:
        mutex_unlock(iVar1);
        _printk(0x80001de,"status_show",*puVar8,iVar6);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar6;
    }
    __stack_chk_fail();
code_r0x08003720:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8003724);
    (*pcVar4)();
}


// ===== sym.__cfi_check_fail @ 0x08003724 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003768

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
    //switch table (4 cases) at 0x80001d2
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800377c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003784 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080037b8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.battery_dbg_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

