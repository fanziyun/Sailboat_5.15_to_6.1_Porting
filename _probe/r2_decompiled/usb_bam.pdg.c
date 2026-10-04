// decompiled from usb_bam by radare2+r2ghidra (pdg); repaired by ko_repair

// ===== sym.__cfi_check @ 0x08002000 (size 744) =====



//WARNING: Switch with 1 destination removed at 0x08007260

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x34a769aa13e178e5) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 == -0x76117a64b2d961c2) {
                pcVar2 = sym.usb_bam_wake_cb.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
            }
            else if (arg1 == -0x65f880e7e47f1532) {
                pcVar2 = sym.get_qdss_bam_connection_info.cfi_jt;
            }
            else {
                if (arg1 != -0x630907bcf862a2c6) goto code_r0x08007220;
                pcVar2 = sym.get_qdss_bam_info.cfi_jt;
            }
        }
        else if (arg1 < -0x3a225d7ca6f0d639) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.usb_bam_work.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
            }
            else {
                if (arg1 != -0x529a1640326ea0e9) goto code_r0x08007220;
                pcVar2 = sym.usb_bam_get_pipe_type.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x3a225d7ca6f0d639) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8002330 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08007220;
            }
            pcVar2 = sym.usb_bam_get_connection_idx.cfi_jt;
        }
    }
    else if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x21a7768bd0e7cc81) {
            if (arg1 != -0x34a769aa13e178e5) {
                if ((arg1 == -0x31403bf6e8224b2e) && ((pcVar1 + -0x8002358 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08007220;
            }
            pcVar2 = sym.usb_bam_get_bam_type.cfi_jt;
        }
        else if (arg1 == -0x21a7768bd0e7cc81) {
            pcVar2 = sym.usb_bam_sps_events.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
        }
        else {
            if (arg1 != -0xc68b629064bdca2) goto code_r0x08007220;
            pcVar2 = sym.usb_bam_connect.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1aa0d48c06441a5d) goto code_r0x08007220;
            pcVar2 = sym.get_bam2bam_connection_info.cfi_jt;
        }
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08007220;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08007220:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007274);
    (*pcVar1)();
}




// ===== sym.get_bam2bam_connection_info.cfi_jt @ 0x080022f0 (size 8) =====



ulong sym.get_bam2bam_connection_info.cfi_jt
                (uint32_t param_1,uint64_t param_2,uint *param_3,ulong *param_4,ulong *param_5,uint *param_6)

{
    uint *puVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    if (1 < param_1) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80052b4);
        (*pcVar5)();
    }
    if (param_1 * 0x68 < 0x19) {
        param_2 = param_2 & 0xff;
        iVar6 = *(param_1 * 0x68 + 0x8000400);
        iVar7 = iVar6 + param_2 * 0x128;
        puVar1 = iVar7 + 0x24;
        if (*(iVar7 + 0x10) != 0) {
            puVar1 = iVar7 + 0x2c;
        }
        *param_3 = *puVar1;
        if (param_5 != NULL) {
            iVar7 = iVar6 + param_2 * 0x128;
            uVar3 = *(iVar7 + 0x58);
            uVar2 = *(iVar7 + 0x40);
            uVar4 = *(iVar7 + 0x48);
            param_5[2] = *(iVar7 + 0x50);
            param_5[3] = uVar3;
            *param_5 = uVar2;
            param_5[1] = uVar4;
        }
        if (param_4 != NULL) {
            iVar7 = iVar6 + param_2 * 0x128;
            uVar3 = *(iVar7 + 0x78);
            uVar2 = *(iVar7 + 0x60);
            uVar4 = *(iVar7 + 0x68);
            param_4[2] = *(iVar7 + 0x70);
            param_4[3] = uVar3;
            *param_4 = uVar2;
            param_4[1] = uVar4;
        }
        if (param_6 != NULL) {
            *param_6 = *(iVar6 + param_2 * 0x128 + 0xc);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x80052b8);
    (*pcVar5)();
}




// ===== sym.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt @ 0x080022f8 (size 8) =====



ulong sym.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x80003e8 != 0) && (*0x80003f0 != '\0')) {
        _printk(0x8000a7f,"usb_bam_panic_notifier");
        sps_get_bam_debug_info(_segment.ehdr,0x5d,3,0,2);
    }
    return 0;
}




// ===== sym.cleanup_module.cfi_jt @ 0x08002300 (size 8) =====



void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.usb_bam_probe.4b764ebe56d8e77425d71a4af75f471b.cfi_jt);
    return;
}




// ===== sym.get_qdss_bam_connection_info.cfi_jt @ 0x08002308 (size 8) =====



ulong sym.get_qdss_bam_connection_info.cfi_jt
                (ulong *param_1,uint *param_2,uint *param_3,ulong *param_4,ulong *param_5,uint *param_6)

{
    uint *puVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = *0x8014000;
    if (*0x8014000 < 2) {
        uVar6 = sym.usb_bam_get_connection_idx(*0x8014000,0,1,0);
        if (*0x8014000 < 2) {
            if (*0x8014000 * 0x68 < 0x19) {
                iVar8 = *(*0x8014000 * 0x68 + 0x8000400);
                uVar7 = uVar6 & 0xff;
                iVar9 = iVar8 + uVar7 * 0x128;
                puVar1 = iVar9 + 0x24;
                if (*(iVar9 + 0x10) != 0) {
                    puVar1 = iVar9 + 0x2c;
                }
                *param_2 = *puVar1;
                if (param_5 != NULL) {
                    iVar9 = iVar8 + uVar7 * 0x128;
                    uVar3 = *(iVar9 + 0x58);
                    uVar2 = *(iVar9 + 0x40);
                    uVar4 = *(iVar9 + 0x48);
                    param_5[2] = *(iVar9 + 0x50);
                    param_5[3] = uVar3;
                    *param_5 = uVar2;
                    param_5[1] = uVar4;
                }
                if (param_4 != NULL) {
                    iVar9 = iVar8 + uVar7 * 0x128;
                    uVar3 = *(iVar9 + 0x78);
                    uVar2 = *(iVar9 + 0x60);
                    uVar4 = *(iVar9 + 0x68);
                    param_4[2] = *(iVar9 + 0x70);
                    param_4[3] = uVar3;
                    *param_4 = uVar2;
                    param_4[1] = uVar4;
                }
                if (param_6 != NULL) {
                    *param_6 = *(iVar8 + uVar7 * 0x128 + 0xc);
                }
                if (uVar10 * 0x68 < 0x61) {
                    iVar8 = *(uVar10 * 0x68 + 0x80003b8) + uVar7 * 0x90;
                    *param_1 = *(iVar8 + 0x18);
                    *param_3 = *(iVar8 + 0x10);
                    return 0;
                }
            }
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x8005418);
            (*pcVar5)();
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8005414);
    (*pcVar5)();
}




// ===== sym.init_module.cfi_jt @ 0x08002310 (size 8) =====



void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.usb_bam_probe.4b764ebe56d8e77425d71a4af75f471b.cfi_jt,obj.__this_module);
    return;
}




// ===== sym.usb_bam_get_connection_idx.cfi_jt @ 0x08002318 (size 8) =====



uint64_t sym.usb_bam_get_connection_idx.cfi_jt(uint32_t param_1,int param_2,int param_3,int param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong uVar3;
    uint64_t uVar4;
    int *piVar5;
    ulong *in_x18;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        uVar6 = param_1;
        if (0x38 < param_1 * 0x68) {
code_r0x08005654:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x8005658);
            (*pcVar2)();
        }
        uVar4 = *(uVar6 * 0x68 + 0x80003e0);
        if (uVar4 != 0) {
            if (0x18 < param_1 * 0x68) goto code_r0x08005654;
            uVar7 = 0;
            piVar5 = *(uVar6 * 0x68 + 0x8000400) + 0x18;
            do {
                if (((*piVar5 == param_2) && (piVar5[-2] == param_3)) && (piVar5[-4] == param_4)) {
                    uVar3 = _raw_write_lock_irqsave(0x801441c);
                    uVar6 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x08005658;
                    uVar1 = tpidr_el1;
                    uVar4 = sched_clock(uVar1);
                    snprintf(obj.usb_bam_dbg + uVar6 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar4 / 1000000000,
                             (uVar4 + (uVar4 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar6 * 0xa0 + 0x8000428,0x8f,"%s: index %d was found\n","usb_bam_get_connection_idx",
                             uVar7 & 0xffffffff);
                    goto code_r0x0800561c;
                }
                uVar7 = uVar7 + 1;
                piVar5 = piVar5 + 0x4a;
            } while (uVar4 != uVar7);
        }
        _printk(0x8000bd3,"usb_bam_get_connection_idx",uVar6);
        uVar3 = _raw_write_lock_irqsave(0x801441c);
        uVar4 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar1 = tpidr_el1;
            uVar7 = sched_clock(uVar1);
            snprintf(obj.usb_bam_dbg + uVar4 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar4 * 0xa0 + 0x8000428,0x8f,"%s: failed for %d\n","usb_bam_get_connection_idx",uVar6);
            uVar7 = 0xffffffed;
code_r0x0800561c:
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar3);
            return uVar7 & 0xffffffff;
        }
    }
code_r0x08005658:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800565c);
    (*pcVar2)();
}




// ===== sym.usb_bam_get_bam_type.cfi_jt @ 0x08002320 (size 8) =====



ulong sym.usb_bam_get_bam_type.cfi_jt(void)

{
    return 0;
}




// ===== sym.usb_bam_connect.cfi_jt @ 0x08002328 (size 8) =====



int sym.usb_bam_connect.cfi_jt(uint32_t param_1,uint32_t param_2,uint *param_3,ulong param_4)

{
    int64_t *piVar1;
    uint *puVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int iVar7;
    code *pcVar8;
    int iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint *puVar16;
    ulong *puVar17;
    int64_t iVar18;
    ulong *in_x18;
    uint64_t uVar19;
    int64_t iVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint *puVar23;
    int64_t iVar24;
    int64_t iVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < param_1) goto code_r0x0800451c;
    uVar19 = param_1;
    if (0x18 < param_1 * 0x68) goto code_r0x08004520;
    piVar1 = uVar19 * 0x68 + 0x8000400;
    pcVar15 = *piVar1 + param_2 * 0x128 + 0xe8;
    if (*pcVar15 != '\0') {
        _printk(0x80012f2,"usb_bam_connect",param_2);
        return 0;
    }
    if (param_3 == NULL) {
        _printk(0x80014d3,"usb_bam_connect");
        uVar10 = _raw_write_lock_irqsave(0x801441c);
        uVar19 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar14 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                     (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: invalid bam_pipe_idx\n","usb_bam_connect");
code_r0x08003fc0:
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar10);
            return -0x16;
        }
        goto code_r0x0800451c;
    }
    if ((param_2 < 0) || (*(uVar19 * 0x68 + 0x80003e0) < param_2)) {
        _printk(0x8001008,param_2);
        uVar10 = _raw_write_lock_irqsave(0x801441c);
        uVar19 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar14 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                     (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"idx is wrong %d\n",param_2);
            goto code_r0x08003fc0;
        }
        goto code_r0x0800451c;
    }
    iVar24 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar19 * 0x68);
    uVar10 = _raw_write_lock_irqsave(0x801441c);
    uVar14 = *0x8014418;
    if (0x200 < *0x8014418) goto code_r0x0800451c;
    uVar4 = tpidr_el1;
    uVar11 = sched_clock(uVar4);
    snprintf(obj.usb_bam_dbg + uVar14 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar11 / 1000000000,
             (uVar11 + (uVar11 / 1000000000) * -1000000000) / 1000);
    snprintf(uVar14 * 0xa0 + 0x8000428,0x8f,"%s: PM Runtime GET %d, count: %d\n","usb_bam_connect",param_2,
             *(iVar24 + 0x208));
    *0x8014418 = *0x8014418 + 1 & 0x1ff;
    _raw_write_unlock_irqrestore(0x801441c,uVar10);
    __pm_runtime_resume(iVar24 + 0x10,4);
    iVar13 = uVar19 * 0x68 + 0x8000410;
    _raw_spin_lock(iVar13);
    if (0x10 < param_1 * 0x68) {
code_r0x08004520:
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(1,0x8004524);
        (*pcVar8)();
    }
    if ((*(*(uVar19 * 0x68 + 0x8000408) + 0x10) != '\0') && (*(uVar19 * 0x68 + 0x80003f0) == '\0')) {
        _raw_spin_unlock(iVar13);
        sps_device_reset(*(uVar19 * 0x68 + 0x80003e8));
        _raw_spin_lock(iVar13);
    }
    _raw_spin_unlock(iVar13);
    if (param_1 == 1) goto code_r0x08004520;
    uVar14 = param_2 & 0xff;
    iVar25 = *piVar1;
    iVar20 = iVar25 + uVar14 * 0x128;
    iVar3 = *(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar19 * 0x68);
    iVar18 = *(uVar19 * 0x68 + 0x80003b8);
    iVar7 = *(iVar20 + 0x10);
    iVar12 = sps_alloc_endpoint();
    *(iVar3 + uVar14 * 8) = iVar12;
    if (iVar12 == 0) {
        _printk(0x8001243,"connect_pipe");
        uVar10 = _raw_write_lock_irqsave(0x801441c);
        uVar19 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x0800451c;
        uVar4 = tpidr_el1;
        uVar14 = sched_clock(uVar4);
        snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                 (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: sps_alloc_endpoint failed\n","connect_pipe");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar10);
        iVar9 = -0xc;
    }
    else {
        iVar21 = iVar18 + uVar14 * 0x90;
        iVar9 = sps_get_config(iVar12,iVar21);
        if (iVar9 == 0) {
            iVar9 = sps_phy2h(*(iVar25 + uVar14 * 0x128 + 0x20),iVar21);
            if (iVar9 != 0) {
                _printk(0x80009e9,"connect_pipe",iVar9);
                uVar10 = _raw_write_lock_irqsave(0x801441c);
                uVar19 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800451c;
                uVar4 = tpidr_el1;
                uVar11 = sched_clock(uVar4);
                snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar11 / 1000000000,
                         (uVar11 + (uVar11 / 1000000000) * -1000000000) / 1000);
                iVar13 = uVar19 * 0xa0 + 0x8000428;
                pcVar15 = "%s: sps_phy2h failed (src BAM) %d\n";
                goto code_r0x0800427c;
            }
            iVar22 = iVar25 + uVar14 * 0x128;
            iVar12 = iVar18 + uVar14 * 0x90;
            puVar23 = iVar22 + 0x24;
            *(iVar12 + 0x10) = *puVar23;
            iVar9 = sps_phy2h(*(iVar22 + 0x28),iVar12 + 0x18);
            if (iVar9 != 0) {
                _printk(0x8001606,"connect_pipe",iVar9);
                uVar10 = _raw_write_lock_irqsave(0x801441c);
                uVar19 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800451c;
                uVar4 = tpidr_el1;
                uVar11 = sched_clock(uVar4);
                snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar11 / 1000000000,
                         (uVar11 + (uVar11 / 1000000000) * -1000000000) / 1000);
                iVar13 = uVar19 * 0xa0 + 0x8000428;
                pcVar15 = "%s: sps_phy2h failed (dst BAM) %d\n";
                goto code_r0x0800427c;
            }
            iVar12 = iVar18 + uVar14 * 0x90;
            puVar16 = iVar25 + uVar14 * 0x128 + 0x2c;
            puVar2 = iVar12 + 0x2c;
            *(iVar12 + 0x28) = *puVar16;
            if (iVar7 == 0) {
                *puVar2 = 0;
                puVar17 = iVar18 + uVar14 * 0x90 + 0x20;
                *param_3 = *puVar23;
            }
            else {
                *puVar2 = 1;
                puVar17 = iVar18 + uVar14 * 0x90 + 8;
                *param_3 = *puVar16;
            }
            *puVar17 = param_4;
            iVar18 = iVar18 + uVar14 * 0x90;
            uVar4 = *(iVar20 + 0x58);
            uVar10 = *(iVar20 + 0x40);
            uVar5 = *(iVar20 + 0x48);
            *(iVar18 + 0x68) = *(iVar20 + 0x50);
            *(iVar18 + 0x70) = uVar4;
            *(iVar18 + 0x58) = uVar10;
            *(iVar18 + 0x60) = uVar5;
            uVar10 = *(iVar20 + 0x70);
            uVar5 = *(iVar20 + 0x78);
            uVar4 = *(iVar20 + 0x60);
            uVar6 = *(iVar20 + 0x68);
            *(iVar18 + 0x78) = 0x10;
            *(iVar18 + 0x48) = uVar10;
            *(iVar18 + 0x50) = uVar5;
            *(iVar18 + 0x34) = 0x20000000;
            *(iVar18 + 0x38) = uVar4;
            *(iVar18 + 0x40) = uVar6;
            iVar9 = sps_connect(*(iVar3 + uVar14 * 8),iVar21);
            if (-1 < iVar9) {
                uVar10 = _raw_write_lock_irqsave(0x801441c);
                uVar14 = *0x8014418;
                if (*0x8014418 < 0x201) {
                    uVar4 = tpidr_el1;
                    uVar11 = sched_clock(uVar4);
                    snprintf(obj.usb_bam_dbg + uVar14 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar11 / 1000000000,
                             (uVar11 + (uVar11 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar14 * 0xa0 + 0x8000428,0x8f,"%s: pipe connection[%d] success\n","usb_bam_connect",
                             param_2);
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar10);
                    *pcVar15 = '\x01';
                    _raw_spin_lock(iVar13);
                    *(uVar19 * 0x68 + 0x80003f0) = *(uVar19 * 0x68 + 0x80003f0) + '\x01';
                    _raw_spin_unlock(iVar13);
                    return 0;
                }
                goto code_r0x0800451c;
            }
            _printk(0x8000505,"connect_pipe",iVar9);
            uVar10 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800451c;
            uVar4 = tpidr_el1;
            uVar11 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar11 / 1000000000,
                     (uVar11 + (uVar11 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: sps_connect failed %d\n","connect_pipe",iVar9);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar10);
            sps_disconnect(*(iVar3 + uVar14 * 8));
        }
        else {
            _printk(0x8000f42,"connect_pipe",iVar9);
            uVar10 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800451c;
            uVar4 = tpidr_el1;
            uVar11 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar11 / 1000000000,
                     (uVar11 + (uVar11 / 1000000000) * -1000000000) / 1000);
            iVar13 = uVar19 * 0xa0 + 0x8000428;
            pcVar15 = "%s: tx get config failed %d\n";
code_r0x0800427c:
            snprintf(iVar13,0x8f,pcVar15,"connect_pipe",iVar9);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar10);
        }
        sps_free_endpoint(*(iVar3 + uVar14 * 8));
        *(iVar3 + uVar14 * 8) = 0;
    }
    _printk(0x8000a0e,"usb_bam_connect",param_2);
    uVar10 = _raw_write_lock_irqsave(0x801441c);
    uVar19 = *0x8014418;
    if (*0x8014418 < 0x201) {
        uVar4 = tpidr_el1;
        uVar14 = sched_clock(uVar4);
        snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                 (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: pipe connection[%d] failure\n","usb_bam_connect",param_2);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar10);
        uVar10 = _raw_write_lock_irqsave(0x801441c);
        uVar19 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar14 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                     (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: err, PM RT PUT %d, count: %d\n","usb_bam_connect",param_2,
                     *(iVar24 + 0x208));
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar10);
            __pm_runtime_idle(iVar24 + 0x10,4);
            return iVar9;
        }
    }
code_r0x0800451c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8004520);
    (*pcVar8)();
}




// ===== sym.usb_bam_probe.4b764ebe56d8e77425d71a4af75f471b.cfi_jt @ 0x08002330 (size 8) =====


int sym.usb_bam_probe.4b764ebe56d8e77425d71a4af75f471b.cfi_jt(int64_t param_1)

{
    uint uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    code *pcVar6;
    int iVar7;
    int iVar8;
    uint *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    char *pcVar13;
    int64_t iVar14;
    int *piVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar17;
    ulong uVar18;
    int64_t iVar19;
    int64_t *piVar20;
    uint32_t uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uint uStack_104;
    uint64_t uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int iStack_e8;
    uint uStack_e4;
    uint uStack_e0;
    uint uStack_dc;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_70 = *(iVar12 + 0x5e0);
    puVar9 = platform_get_resource(param_1,0x200,0);
    if (puVar9 == NULL) {
        _dev_err(param_1 + 0x10,"missing BAM memory resource\n");
        iVar7 = -0x13;
        goto code_r0x08006198;
    }
    iVar7 = platform_get_irq(param_1,0);
    if (iVar7 < 0) {
        _dev_err(param_1 + 0x10,"Unable to get IRQ resource\n");
        goto code_r0x08006198;
    }
    iVar12 = param_1 + 0x10;
    uVar17 = *puVar9;
    uStack_104 = 0;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    uVar18 = *(param_1 + 0x300);
    iVar10 = devm_kmalloc(iVar12,0x28,0xdc0);
    if (iVar10 != 0) {
        *(iVar10 + 0x20) = 0;
        iVar11 = of_find_property(uVar18,"qcom,reset-bam-on-connect",0);
        *(iVar10 + 0x10) = iVar11 != 0;
        iVar11 = of_find_property(uVar18,"qcom,reset-bam-on-disconnect",0);
        *(iVar10 + 0x11) = iVar11 != 0;
        iVar8 = of_property_read_variable_u32_array(uVar18,"qcom,usb-bam-num-pipes",iVar10 + 4,1,0);
        if (iVar8 < 0) {
            _printk(0x8000760);
            uVar18 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x0800693c;
            iVar12 = *0x8014418 * 0xa0;
            uVar2 = tpidr_el1;
            uVar24 = sched_clock(uVar2);
            snprintf(obj.usb_bam_dbg + iVar12,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                     (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
            uVar3 = str.Invalid_usb_bam_num_pipes_property_n._8_8_;
            uVar2 = str.Invalid_usb_bam_num_pipes_property_n._0_8_;
            *(iVar12 + 0x8000448) = 0xa7974;
            uVar5 = str.Invalid_usb_bam_num_pipes_property_n._24_8_;
            uVar4 = str.Invalid_usb_bam_num_pipes_property_n._16_8_;
            *(iVar12 + 0x8000428) = uVar2;
            *(iVar12 + 0x8000430) = uVar3;
            *(iVar12 + 0x8000438) = uVar4;
            *(iVar12 + 0x8000440) = uVar5;
        }
        else {
            iVar8 = of_property_read_variable_u32_array(uVar18,"qcom,usb-bam-max-mbps-highspeed",iVar10 + 0x18,1,0);
            if (iVar8 < 0) {
                *(iVar10 + 0x18) = 0;
            }
            iVar8 = of_property_read_variable_u32_array(uVar18,"qcom,usb-bam-max-mbps-superspeed",iVar10 + 0x1c,1,0)
            ;
            if (iVar8 < 0) {
                *(iVar10 + 0x1c) = 0;
            }
            iVar8 = of_property_read_variable_u32_array(uVar18,"qcom,usb-bam-fifo-baseaddr",&uStack_100,1,0);
            if (-1 < iVar8) {
                *(iVar10 + 8) = uStack_100 & 0xffffffff;
            }
            iVar11 = of_find_property(uVar18,"qcom,disable-clk-gating",0);
            *(iVar10 + 0x12) = iVar11 != 0;
            iVar8 = of_property_read_variable_u32_array(uVar18,"qcom,usb-bam-override-threshold",&uStack_104,1,0);
            uVar18 = *(param_1 + 0x300);
            uVar1 = uStack_104;
            if (iVar8 < 0) {
                uVar1 = 0x200;
            }
            *(iVar10 + 0x14) = uVar1;
            iVar11 = of_get_next_child(uVar18,0);
            if (iVar11 != 0) {
                uVar21 = 0;
                do {
                    uVar21 = uVar21 + 1;
                    iVar11 = of_get_next_child(*(param_1 + 0x300),iVar11);
                } while (iVar11 != 0);
                if (uVar21 != 0) {
                    *0x8014000 = devm_kmalloc(iVar12,uVar21 * 0x128,0xdc0);
                    if (*0x8014000 != 0) {
                        iVar11 = of_get_next_child(*(param_1 + 0x300),0);
                        if (iVar11 != 0) {
                            uVar24 = 0;
                            do {
                                uVar24 = uVar24 & 0xff;
                                *(*0x8014000 + uVar24 * 0x128 + 0x14) = 0;
                                iVar8 = of_property_read_string(iVar11,"label");
                                if ((iVar8 != 0) ||
                                   (iVar8 = of_property_read_variable_u32_array
                                                      (iVar11,"qcom,usb-bam-mem-type",
                                                       *0x8014000 + uVar24 * 0x128 + 0xc,1,0), iVar8 < 0))
                                goto code_r0x080060c0;
                                if ((*(*0x8014000 + uVar24 * 0x128 + 0xc) == 2) && (*(iVar10 + 8) == 0)) {
                                    _printk(0x8000535,"usb_bam_dt_to_data");
                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                    uVar24 = *0x8014418;
                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                    sym.put_timestamp(obj.usb_bam_dbg + uVar24 * 0xa0);
                                    pcVar13 = "%s: base address is missing\n";
                                    goto code_r0x08006078;
                                }
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,peer-bam",*0x8014000 + uVar24 * 0x128 + 0x18,1,0);
                                if (iVar8 < 0) {
                                    _printk(0x800119d,"usb_bam_dt_to_data");
                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                    uVar24 = *0x8014418;
                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                    uVar2 = tpidr_el1;
                                    uVar23 = sched_clock(uVar2);
                                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                             uVar23 / 1000000000,(uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000)
                                    ;
                                    pcVar13 = "%s: peer bam is missing in device tree\n";
                                    goto code_r0x08006078;
                                }
                                iVar14 = *0x8014000;
                                if (*(*0x8014000 + uVar24 * 0x128 + 0x18) == 0) {
                                    if (*0x8014000 != 0) {
                                        _printk(0x8000ea7,"usb_bam_dt_to_data");
                                        uVar18 = _raw_write_lock_irqsave(0x801441c);
                                        uVar23 = *0x8014418;
                                        if (0x200 < *0x8014418) goto code_r0x0800693c;
                                        uVar2 = tpidr_el1;
                                        uVar16 = sched_clock(uVar2);
                                        snprintf(obj.usb_bam_dbg + uVar23 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                                 uVar16 / 1000000000,
                                                 (uVar16 + (uVar16 / 1000000000) * -1000000000) / 1000);
                                        snprintf(uVar23 * 0xa0 + 0x8000428,0x8f,
                                                 "%s: overriding QDSS pipe!, update DT\n","usb_bam_dt_to_data");
                                        *0x8014418 = *0x8014418 + 1 & 0x1ff;
                                        _raw_write_unlock_irqrestore(0x801441c,uVar18);
                                    }
                                    iVar14 = *0x8014000;
                                    *0x8014000 = CONCAT44(*0x8014004,*(*0x8014000 + uVar24 * 0x128 + 0x14));
                                }
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,dir",iVar14 + uVar24 * 0x128 + 0x10,1,0);
                                if (iVar8 < 0) {
                                    _printk(0x80007a6,"usb_bam_dt_to_data");
                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                    uVar24 = *0x8014418;
                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                    uVar2 = tpidr_el1;
                                    uVar23 = sched_clock(uVar2);
                                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                             uVar23 / 1000000000,(uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000)
                                    ;
                                    pcVar13 = "%s: direction is missing in device tree\n";
                                    goto code_r0x08006078;
                                }
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,pipe-num",*0x8014000 + uVar24 * 0x128 + 8,1,0);
                                if (iVar8 < 0) {
                                    _printk(0x800091a,"usb_bam_dt_to_data");
                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                    uVar24 = *0x8014418;
                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                    uVar2 = tpidr_el1;
                                    uVar23 = sched_clock(uVar2);
                                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                             uVar23 / 1000000000,(uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000)
                                    ;
                                    pcVar13 = "%s: pipe num is missing in device tree\n";
                                    goto code_r0x08006078;
                                }
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,pipe-connection-type",*0x8014000 + uVar24 * 0x128 + 0x1c,1,0
                                          );
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,peer-bam-physical-address",&uStack_100,1,0);
                                iVar14 = *0x8014000;
                                if (*(*0x8014000 + uVar24 * 0x128 + 0x10) == 0) {
                                    *(*0x8014000 + uVar24 * 0x128 + 0x20) = uVar17;
                                    uVar1 = uStack_100;
                                }
                                else {
                                    *(*0x8014000 + uVar24 * 0x128 + 0x20) = uStack_100;
                                    uVar1 = uVar17;
                                }
                                iVar19 = uVar24 * 0x128;
                                *(iVar14 + iVar19 + 0x28) = uVar1;
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,src-bam-pipe-index",iVar14 + iVar19 + 0x24,1,0);
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,dst-bam-pipe-index",*0x8014000 + iVar19 + 0x2c,1,0);
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,data-fifo-offset",*0x8014000 + iVar19 + 0x30,1,0);
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,data-fifo-size",*0x8014000 + iVar19 + 0x34,1,0);
                                if (iVar8 < 0) goto code_r0x080060c0;
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,descriptor-fifo-offset",*0x8014000 + uVar24 * 0x128 + 0x38,1
                                           ,0);
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,descriptor-fifo-size",
                                                   *0x8014000 + uVar24 * 0x128 + 0x3c,1,0);
                                if (iVar8 < 0) goto code_r0x080060c0;
                                uVar24 = uVar24 + 1;
                                iVar11 = of_get_next_child(*(param_1 + 0x300),iVar11);
                            } while (iVar11 != 0);
                        }
                        uVar24 = *(iVar10 + 0x20);
                        *0x8000400 = *0x8014000;
                        *0x80003e0 = uVar21;
                        if (*(iVar10 + 0x20) < 2) {
                            uVar23 = uVar24 * 0x68;
                            *(param_1 + 0xa8) =
                                 reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar23;
                            if (uVar23 < 0x49) {
                                iVar11 = uVar24 * 0x68;
                                *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + iVar11) = param_1;
                                *(reloc.usb_bam_probe.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + iVar11) = iVar7;
                                *(iVar11 + 0x80003c0) = puVar9;
                                if (uVar23 < 0x11) {
                                    iVar11 = uVar24 * 0x68;
                                    *(iVar11 + 0x8000408) = iVar10;
                                    if (*(iVar11 + 0x80003e0) != 0) {
                                        iVar10 = 0;
                                        uVar16 = 0;
                                        piVar22 = iVar11 + 0x8000400;
                                        do {
                                            uVar16 = uVar16 + 1;
                                            *(*piVar22 + iVar10 + 0xe8) = 0;
                                            *(*piVar22 + iVar10 + 0xb8) = 0xfffffffe0;
                                            iVar14 = *piVar22 + iVar10;
                                            *(iVar14 + 0xc0) = iVar14 + 0xc0;
                                            *(iVar14 + 200) = iVar14 + 0xc0;
                                            iVar14 = *piVar22 + iVar10;
                                            iVar10 = iVar10 + 0x128;
                                            *(iVar14 + 0xd0) = sym.usb_bam_work.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
                                        } while (uVar16 < *(iVar11 + 0x80003e0));
                                    }
                                    iVar10 = alloc_workqueue("usb_bam_wq",10,1);
                                    piVar22 = uVar24 * 0x68 + 0x80003d8;
                                    *piVar22 = iVar10;
                                    if (iVar10 == 0) {
                                        _printk(0x8000f61);
                                        uVar18 = _raw_write_lock_irqsave(0x801441c);
                                        if (*0x8014418 < 0x201) {
                                            iVar12 = *0x8014418 * 0xa0;
                                            uVar2 = tpidr_el1;
                                            uVar24 = sched_clock(uVar2);
                                            snprintf(obj.usb_bam_dbg + iVar12,0x11,"[%5lu.%06lu]: ",
                                                     uVar24 / 1000000000,
                                                     (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
                                            uVar2 = CONCAT17(str.unable_to_create_workqueue_usb_bam_wq_n[0x1f],
                                                             str.unable_to_create_workqueue_usb_bam_wq_n._24_7_);
                                            uVar3 = CONCAT71(str.unable_to_create_workqueue_usb_bam_wq_n._32_7_,
                                                             str.unable_to_create_workqueue_usb_bam_wq_n[0x1f]);
                                            *(iVar12 + 0x8000438) = str.unable_to_create_workqueue_usb_bam_wq_n._16_8_;
                                            *(iVar12 + 0x8000440) = uVar2;
                                            *(iVar12 + 0x8000447) = uVar3;
                                            uVar2 = str.unable_to_create_workqueue_usb_bam_wq_n._8_8_;
                                            *0x8014418 = *0x8014418 + 1 & 0x1ff;
                                            *(iVar12 + 0x8000428) = str.unable_to_create_workqueue_usb_bam_wq_n._0_8_;
                                            *(iVar12 + 0x8000430) = uVar2;
                                            _raw_write_unlock_irqrestore(0x801441c,uVar18);
                                            iVar7 = -0xc;
                                            goto code_r0x08006198;
                                        }
                                    }
                                    else {
                                        piVar20 = *(param_1 + 0xa8);
                                        uStack_f0 = 0;
                                        uStack_100 = 0;
                                        uStack_80 = 0;
                                        uStack_78 = 0;
                                        uStack_90 = 0;
                                        uStack_88 = 0;
                                        pcStack_a0 = NULL;
                                        uStack_98 = 0;
                                        uStack_b0 = 0;
                                        uStack_b8 = 0;
                                        uStack_d0 = 0;
                                        uStack_c8 = 0;
                                        uStack_d8 = 0;
                                        piVar15 = piVar20[2];
                                        uStack_f8 = *piVar15;
                                        iVar10 = piVar20[0xb];
                                        _iStack_e8 = CONCAT44(piVar20[3],(piVar15[2] - *piVar15) + 1);
                                        iStack_c0 = *(iVar10 + 0x14) << 0x20;
                                        _uStack_e0 = CONCAT44(*(iVar10 + 0x14),*(iVar10 + 4));
                                        pcStack_a8 = sym.usb_bam_sps_events.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
                                        if (*(piVar20[0xb] + 0x20) < 2) {
                                            pcStack_a0 = reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt
                                                         + *(piVar20[0xb] + 0x20) * 0x68;
                                            if (*(piVar20[0xb] + 0x12) == '\0') {
                                                uVar17 = 0x200;
                                            }
                                            else {
                                                uVar17 = 0x220;
                                                uStack_100 = 0x20;
                                            }
                                            iVar10 = piVar20[4];
                                            if (((*(iVar10 + 0x70) != 0) &&
                                                (uVar16 = device_property_present(*(iVar10 + 0x70),"iommus"),
                                                (uVar16 & 1) != 0)) &&
                                               (uVar16 = device_property_present
                                                                   (*(iVar10 + 0x70),"qcom,smmu-s1-bypass"),
                                               (uVar16 & 1) == 0)) {
                                                iVar11 = *(iVar10 + 0x80);
                                                if (iVar11 == 0) {
                                                    iVar11 = *(iVar10 + 0x10);
                                                }
                                                _printk(0x8001281,"usb_bam_init",iVar11);
                                                uStack_100 = CONCAT44(uStack_100._4_4_,uVar17);
                                            }
                                            iVar7 = sps_register_bam_device(&uStack_100,piVar20 + 7);
                                            if (iVar7 < 0) {
                                                _printk(0x8000ecf,"usb_bam_init",iVar7);
                                                uVar18 = _raw_write_lock_irqsave(0x801441c);
                                                uVar24 = *0x8014418;
                                                if (0x200 < *0x8014418) goto code_r0x0800693c;
                                                uVar2 = tpidr_el1;
                                                uVar23 = sched_clock(uVar2);
                                                snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                                         uVar23 / 1000000000,
                                                         (uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000);
                                                snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: register bam error %d\n"
                                                         ,"usb_bam_init",iVar7);
                                                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                                                _raw_write_unlock_irqrestore(0x801441c,uVar18);
                                                iVar7 = -0xe;
                                            }
                                            else {
                                                iVar10 = devm_kmalloc(iVar12,*(piVar20 + 6) << 3,0xdc0);
                                                *piVar20 = iVar10;
                                                if (iVar10 == 0) {
                                                    _printk(0x800087d,"enable_usb_bam");
                                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                                    pcVar6 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                                                    uVar2 = tpidr_el1;
                                                    uVar24 = sched_clock(uVar2);
                                                    snprintf(pcVar6,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                                                             (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
                                                    pcVar13 = "%s: failed to allocate sps_pipes\n";
                                                }
                                                else {
                                                    iVar10 = devm_kmalloc(iVar12,*(piVar20 + 6) * 0x90,0xdc0);
                                                    piVar20[1] = iVar10;
                                                    if (iVar10 != 0) {
                                                        pm_runtime_no_callbacks(iVar12);
                                                        __pm_runtime_set_status(iVar12,0);
                                                        pm_runtime_enable(iVar12);
                                                        if (8 < uVar23) goto code_r0x08006940;
                                                        *(uVar24 * 0x68 + 0x8000410) = 0;
                                                        atomic_notifier_chain_register
                                                                  (panic_notifier_list,
                                                                   
                                                            reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt
                                                            );
                                                        iVar7 = 0;
                                                        goto code_r0x08006198;
                                                    }
                                                    _printk(0x80017a8,"enable_usb_bam");
                                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                                    pcVar6 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                                                    uVar2 = tpidr_el1;
                                                    uVar24 = sched_clock(uVar2);
                                                    snprintf(pcVar6,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                                                             (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
                                                    pcVar13 = "%s: failed to allocate sps_connections\n";
                                                }
                                                snprintf(pcVar6 + 0x10,0x8f,pcVar13,"enable_usb_bam");
                                                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                                                _raw_write_unlock_irqrestore(0x801441c,uVar18);
                                                iVar7 = -0xc;
                                            }
                                            destroy_workqueue(*piVar22);
                                            goto code_r0x08006198;
                                        }
                                    }
                                    goto code_r0x0800693c;
                                }
                            }
code_r0x08006940:
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(1,0x8006944);
                            (*pcVar6)();
                        }
                        goto code_r0x0800693c;
                    }
                    _printk(0x8000b98,"usb_bam_dt_to_data",0x42f);
                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                    uVar24 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                    uVar2 = tpidr_el1;
                    uVar23 = sched_clock(uVar2);
                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar23 / 1000000000,
                             (uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: devm_kzalloc failed(%d)\n","usb_bam_dt_to_data",
                             0x42f);
                    goto code_r0x08006174;
                }
            }
            _printk(0x8000ab0,"usb_bam_dt_to_data");
            uVar18 = _raw_write_lock_irqsave(0x801441c);
            uVar24 = *0x8014418;
            if (0x200 < *0x8014418) {
code_r0x0800693c:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8006940);
                (*pcVar6)();
            }
            uVar2 = tpidr_el1;
            uVar23 = sched_clock(uVar2);
            snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar23 / 1000000000,
                     (uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000);
            pcVar13 = "%s: error: max_connections is zero\n";
code_r0x08006078:
            snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,pcVar13,"usb_bam_dt_to_data");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar18);
code_r0x080060c0:
            _printk(0x8000677,"usb_bam_dt_to_data");
            uVar18 = _raw_write_lock_irqsave(0x801441c);
            uVar24 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800693c;
            uVar2 = tpidr_el1;
            uVar23 = sched_clock(uVar2);
            snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar23 / 1000000000,
                     (uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: failed\n","usb_bam_dt_to_data");
        }
code_r0x08006174:
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar18);
    }
    iVar7 = -0x16;
code_r0x08006198:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_70) {
        iVar12 = __stack_chk_fail();
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        *extraout_x18 = 0x8006948;
        iVar12 = *(iVar12 + 0xa8);
        atomic_notifier_chain_unregister
                  (uVar18,panic_notifier_list,reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt);
        sps_deregister_bam_device(*(iVar12 + 0x38));
        destroy_workqueue(*(iVar12 + 0x28));
        return 0;
    }
    return iVar7;
}



// ===== sym.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt @ 0x08002338 (size 8) =====



ulong sym.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    atomic_notifier_chain_unregister
              (panic_notifier_list,reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt);
    sps_deregister_bam_device(*(iVar1 + 0x38));
    destroy_workqueue(*(iVar1 + 0x28));
    return 0;
}




// ===== sym.usb_bam_get_pipe_type.cfi_jt @ 0x08002340 (size 8) =====



ulong sym.usb_bam_get_pipe_type.cfi_jt(uint32_t param_1,uint8_t param_2,uint *param_3)

{
    ulong uVar1;
    ulong uVar2;
    uint64_t uVar3;
    char *pcVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        if (0x18 < param_1 * 0x68) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x800476c);
            (*pcVar5)();
        }
        if (param_2 < *(param_1 * 0x68 + 0x80003e0)) {
            if (param_3 != NULL) {
                *param_3 = *(*(param_1 * 0x68 + 0x8000400) + param_2 * 0x128 + 0x1c);
                return 0;
            }
            _printk(0x800165f,"usb_bam_get_pipe_type");
            uVar2 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x0800476c;
            pcVar5 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            uVar1 = tpidr_el1;
            uVar3 = sched_clock(uVar1);
            snprintf(pcVar5,0x11,"[%5lu.%06lu]: ",uVar3 / 1000000000,
                     (uVar3 + (uVar3 / 1000000000) * -1000000000) / 1000);
            pcVar4 = "%s: null pointer provided for type\n";
        }
        else {
            _printk(0x8001685,"usb_bam_get_pipe_type");
            uVar2 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x0800476c;
            pcVar5 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            uVar1 = tpidr_el1;
            uVar3 = sched_clock(uVar1);
            snprintf(pcVar5,0x11,"[%5lu.%06lu]: ",uVar3 / 1000000000,
                     (uVar3 + (uVar3 / 1000000000) * -1000000000) / 1000);
            pcVar4 = "%s: Invalid connection index\n";
        }
        snprintf(pcVar5 + 0x10,0x8f,pcVar4,"usb_bam_get_pipe_type");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar2);
        return 0xffffffea;
    }
code_r0x0800476c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8004770);
    (*pcVar5)();
}




// ===== sym.usb_bam_wake_cb.4b764ebe56d8e77425d71a4af75f471b.cfi_jt @ 0x08002348 (size 8) =====



void sym.usb_bam_wake_cb.4b764ebe56d8e77425d71a4af75f471b.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    code *pcVar2;
    char *pcVar3;
    ulong *in_x18;
    int *piVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *param_1;
    uVar5 = piVar4[-0x1b];
    if (1 < piVar4[-0x1b]) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8005738);
        (*pcVar2)();
    }
    iVar1 = uVar5 * 0x68 + 0x8000410;
    _raw_spin_lock(iVar1);
    if (*piVar4 == 1) {
        if (0x20 < uVar5 * 0x68) {
code_r0x08005738:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x800573c);
            (*pcVar2)();
        }
        pcVar3 = uVar5 * 0x68 + 0x80003f8;
        if (*pcVar3 == '\0') goto code_r0x08005714;
        *pcVar3 = '\0';
    }
    else {
        if (*piVar4 != 0) goto code_r0x08005714;
        if (0x40 < uVar5 * 0x68) goto code_r0x08005738;
    }
    queue_work_on(0x20,*(uVar5 * 0x68 + 0x80003d8),piVar4 + 0xe);
code_r0x08005714:
    _raw_spin_unlock(iVar1);
    return;
}




// ===== sym.get_qdss_bam_info.cfi_jt @ 0x08002350 (size 8) =====



int sym.get_qdss_bam_info.cfi_jt(uint32_t param_1,uint64_t param_2,ulong param_3,char *param_4)

{
    int64_t *piVar1;
    uint *puVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    int iVar10;
    ulong uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint64_t extraout_x1;
    char *pcVar16;
    char *pcVar17;
    uint *puVar18;
    ulong *puVar19;
    int64_t iVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint64_t uVar24;
    int64_t iVar25;
    uint *puVar26;
    int64_t iVar27;
    int64_t iVar28;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_38 = *(iVar27 + 0x5e0);
    if (1 < param_1) {
code_r0x080039d0:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x80039d4);
        (*pcVar7)();
    }
    if (0x18 < param_1 * 0x68) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(1,0x80039d0);
        (*pcVar7)();
    }
    uStack_40 = 0;
    pcVar16 = param_4;
    iVar8 = sps_phy2h(*(*(param_1 * 0x68 + 0x8000400) + (param_2 & 0xff) * 0x128 + 0x20),&uStack_40);
    if (iVar8 == 0) {
        iVar8 = sps_get_bam_addr(uStack_40,param_3);
        if (iVar8 != 0) {
            _printk(0x80013db,"get_qdss_bam_info",iVar8);
            uVar11 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x080039d0;
            pcVar7 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            uVar4 = tpidr_el1;
            uVar21 = sched_clock(uVar4);
            snprintf(pcVar7,0x11,"[%5lu.%06lu]: ",uVar21 / 1000000000,
                     (uVar21 + (uVar21 / 1000000000) * -1000000000) / 1000);
            param_4 = "%s: sps_get_bam_addr failed%d\n";
            goto code_r0x08003994;
        }
    }
    else {
        _printk(0x80009e9,"get_qdss_bam_info",iVar8);
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        if (0x200 < *0x8014418) goto code_r0x080039d0;
        pcVar7 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
        uVar4 = tpidr_el1;
        uVar21 = sched_clock(uVar4);
        snprintf(pcVar7,0x11,"[%5lu.%06lu]: ",uVar21 / 1000000000,
                 (uVar21 + (uVar21 / 1000000000) * -1000000000) / 1000);
        param_4 = "%s: sps_phy2h failed (src BAM) %d\n";
code_r0x08003994:
        pcVar16 = "get_qdss_bam_info";
        snprintf(pcVar7 + 0x10,0x8f,param_4,"get_qdss_bam_info",iVar8);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar11);
    }
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    uVar9 = __stack_chk_fail();
    uVar11 = tpidr_el2;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x80039d8;
    if (1 < uVar9) goto code_r0x0800451c;
    uVar21 = uVar9;
    if (0x18 < uVar9 * 0x68) goto code_r0x08004520;
    uVar24 = extraout_x1 & 0xffffffff;
    piVar1 = uVar21 * 0x68 + 0x8000400;
    uVar15 = extraout_x1;
    pcVar17 = *piVar1 + uVar15 * 0x128 + 0xe8;
    if (*pcVar17 != '\0') {
        _printk(0x80012f2,"usb_bam_connect",uVar24);
        return 0;
    }
    if (param_4 == NULL) {
        _printk(0x80014d3,"usb_bam_connect");
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        uVar21 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar24 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                     (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: invalid bam_pipe_idx\n","usb_bam_connect");
code_r0x08003fc0:
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar11);
            return -0x16;
        }
        goto code_r0x0800451c;
    }
    if ((uVar15 < 0) || (*(uVar21 * 0x68 + 0x80003e0) < uVar15)) {
        _printk(0x8001008,uVar24);
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        uVar21 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar12 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                     (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"idx is wrong %d\n",uVar24);
            goto code_r0x08003fc0;
        }
        goto code_r0x0800451c;
    }
    iVar27 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar21 * 0x68);
    uVar11 = _raw_write_lock_irqsave(0x801441c);
    uVar24 = *0x8014418;
    if (0x200 < *0x8014418) goto code_r0x0800451c;
    uVar4 = tpidr_el1;
    uVar12 = sched_clock(uVar4);
    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
             (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
    snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: PM Runtime GET %d, count: %d\n","usb_bam_connect",
             extraout_x1 & 0xffffffff,*(iVar27 + 0x208));
    *0x8014418 = *0x8014418 + 1 & 0x1ff;
    _raw_write_unlock_irqrestore(0x801441c,uVar11);
    __pm_runtime_resume(iVar27 + 0x10,4);
    iVar14 = uVar21 * 0x68 + 0x8000410;
    _raw_spin_lock(iVar14);
    if (0x10 < uVar9 * 0x68) {
code_r0x08004520:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(1,0x8004524);
        (*pcVar7)();
    }
    if ((*(*(uVar21 * 0x68 + 0x8000408) + 0x10) != '\0') && (*(uVar21 * 0x68 + 0x80003f0) == '\0')) {
        _raw_spin_unlock(iVar14);
        sps_device_reset(*(uVar21 * 0x68 + 0x80003e8));
        _raw_spin_lock(iVar14);
    }
    _raw_spin_unlock(iVar14);
    if (uVar9 == 1) goto code_r0x08004520;
    uVar24 = uVar15 & 0xff;
    iVar28 = *piVar1;
    iVar22 = iVar28 + uVar24 * 0x128;
    iVar3 = *(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar21 * 0x68);
    iVar20 = *(uVar21 * 0x68 + 0x80003b8);
    iVar8 = *(iVar22 + 0x10);
    iVar13 = sps_alloc_endpoint();
    *(iVar3 + uVar24 * 8) = iVar13;
    if (iVar13 == 0) {
        _printk(0x8001243,"connect_pipe");
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        uVar21 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x0800451c;
        uVar4 = tpidr_el1;
        uVar24 = sched_clock(uVar4);
        snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                 (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: sps_alloc_endpoint failed\n","connect_pipe");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar11);
        iVar10 = -0xc;
    }
    else {
        iVar23 = iVar20 + uVar24 * 0x90;
        iVar10 = sps_get_config(iVar13,iVar23);
        if (iVar10 == 0) {
            iVar10 = sps_phy2h(*(iVar28 + uVar24 * 0x128 + 0x20),iVar23);
            if (iVar10 != 0) {
                _printk(0x80009e9,"connect_pipe",iVar10);
                uVar11 = _raw_write_lock_irqsave(0x801441c);
                uVar21 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800451c;
                uVar4 = tpidr_el1;
                uVar12 = sched_clock(uVar4);
                snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                         (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
                iVar14 = uVar21 * 0xa0 + 0x8000428;
                pcVar16 = "%s: sps_phy2h failed (src BAM) %d\n";
                goto code_r0x0800427c;
            }
            iVar25 = iVar28 + uVar24 * 0x128;
            iVar13 = iVar20 + uVar24 * 0x90;
            puVar26 = iVar25 + 0x24;
            *(iVar13 + 0x10) = *puVar26;
            iVar10 = sps_phy2h(*(iVar25 + 0x28),iVar13 + 0x18);
            if (iVar10 != 0) {
                _printk(0x8001606,"connect_pipe",iVar10);
                uVar11 = _raw_write_lock_irqsave(0x801441c);
                uVar21 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800451c;
                uVar4 = tpidr_el1;
                uVar12 = sched_clock(uVar4);
                snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                         (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
                iVar14 = uVar21 * 0xa0 + 0x8000428;
                pcVar16 = "%s: sps_phy2h failed (dst BAM) %d\n";
                goto code_r0x0800427c;
            }
            iVar13 = iVar20 + uVar24 * 0x90;
            puVar18 = iVar28 + uVar24 * 0x128 + 0x2c;
            puVar2 = iVar13 + 0x2c;
            *(iVar13 + 0x28) = *puVar18;
            if (iVar8 == 0) {
                *puVar2 = 0;
                puVar19 = iVar20 + uVar24 * 0x90 + 0x20;
                *param_4 = *puVar26;
            }
            else {
                *puVar2 = 1;
                puVar19 = iVar20 + uVar24 * 0x90 + 8;
                *param_4 = *puVar18;
            }
            *puVar19 = pcVar16;
            iVar20 = iVar20 + uVar24 * 0x90;
            uVar4 = *(iVar22 + 0x58);
            uVar11 = *(iVar22 + 0x40);
            uVar5 = *(iVar22 + 0x48);
            *(iVar20 + 0x68) = *(iVar22 + 0x50);
            *(iVar20 + 0x70) = uVar4;
            *(iVar20 + 0x58) = uVar11;
            *(iVar20 + 0x60) = uVar5;
            uVar11 = *(iVar22 + 0x70);
            uVar5 = *(iVar22 + 0x78);
            uVar4 = *(iVar22 + 0x60);
            uVar6 = *(iVar22 + 0x68);
            *(iVar20 + 0x78) = 0x10;
            *(iVar20 + 0x48) = uVar11;
            *(iVar20 + 0x50) = uVar5;
            *(iVar20 + 0x34) = 0x20000000;
            *(iVar20 + 0x38) = uVar4;
            *(iVar20 + 0x40) = uVar6;
            iVar10 = sps_connect(*(iVar3 + uVar24 * 8),iVar23);
            if (-1 < iVar10) {
                uVar11 = _raw_write_lock_irqsave(0x801441c);
                uVar24 = *0x8014418;
                if (*0x8014418 < 0x201) {
                    uVar4 = tpidr_el1;
                    uVar12 = sched_clock(uVar4);
                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                             (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: pipe connection[%d] success\n","usb_bam_connect",
                             extraout_x1 & 0xffffffff);
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar11);
                    *pcVar17 = '\x01';
                    _raw_spin_lock(iVar14);
                    *(uVar21 * 0x68 + 0x80003f0) = *(uVar21 * 0x68 + 0x80003f0) + '\x01';
                    _raw_spin_unlock(iVar14);
                    return 0;
                }
                goto code_r0x0800451c;
            }
            _printk(0x8000505,"connect_pipe",iVar10);
            uVar11 = _raw_write_lock_irqsave(0x801441c);
            uVar21 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800451c;
            uVar4 = tpidr_el1;
            uVar12 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                     (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: sps_connect failed %d\n","connect_pipe",iVar10);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar11);
            sps_disconnect(*(iVar3 + uVar24 * 8));
        }
        else {
            _printk(0x8000f42,"connect_pipe",iVar10);
            uVar11 = _raw_write_lock_irqsave(0x801441c);
            uVar21 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800451c;
            uVar4 = tpidr_el1;
            uVar12 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                     (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
            iVar14 = uVar21 * 0xa0 + 0x8000428;
            pcVar16 = "%s: tx get config failed %d\n";
code_r0x0800427c:
            snprintf(iVar14,0x8f,pcVar16,"connect_pipe",iVar10);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar11);
        }
        sps_free_endpoint(*(iVar3 + uVar24 * 8));
        *(iVar3 + uVar24 * 8) = 0;
    }
    uVar24 = extraout_x1 & 0xffffffff;
    _printk(0x8000a0e,"usb_bam_connect",uVar24);
    uVar11 = _raw_write_lock_irqsave(0x801441c);
    uVar21 = *0x8014418;
    if (*0x8014418 < 0x201) {
        uVar4 = tpidr_el1;
        uVar12 = sched_clock(uVar4);
        snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                 (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: pipe connection[%d] failure\n","usb_bam_connect",uVar24);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar11);
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        uVar21 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar12 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                     (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: err, PM RT PUT %d, count: %d\n","usb_bam_connect",uVar24,
                     *(iVar27 + 0x208));
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar11);
            __pm_runtime_idle(iVar27 + 0x10,4);
            return iVar10;
        }
    }
code_r0x0800451c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8004520);
    (*pcVar7)();
}




// ===== sym.usb_bam_alloc_fifos.cfi_jt @ 0x08002358 (size 8) =====


uint64_t sym.usb_bam_alloc_fifos.cfi_jt(uint32_t param_1,uint64_t param_2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    uint uVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    char *pcVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t *piVar15;
    code *pcVar16;
    uint *puVar17;
    uint *puVar18;
    uint64_t uVar19;
    uint *puVar20;
    int64_t iVar21;
    int64_t iVar22;
    int64_t *piVar23;
    ulong unaff_x30;
    int64_t iStack_98;
    ulong uStack_90;
    uint64_t *puStack_88;
    ulong uStack_80;
    uint64_t *puStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_68 = *(iVar21 + 0x5e0);
    if (1 < param_1) goto code_r0x08003280;
    if (0x18 < param_1 * 0x68) {
code_r0x08003284:
    //WARNING: Does not return
        pcVar16 = SoftwareBreakpoint(1,0x8003288);
        (*pcVar16)();
    }
    param_2 = param_2 & 0xff;
    iVar21 = *(param_1 * 0x68 + 0x8000400);
    uVar5 = *(iVar21 + param_2 * 0x128 + 0x14);
    uVar19 = uVar5;
    if (1 < uVar5) goto code_r0x08003280;
    if (0x48 < uVar19 * 0x68) goto code_r0x08003284;
    puStack_78 = NULL;
    uStack_70 = 0;
    puStack_88 = NULL;
    uStack_80 = 0;
    iVar11 = iVar21 + param_2 * 0x128;
    iStack_98 = 0;
    uStack_90 = 0;
    piVar15 = iVar11 + 0x40;
    piVar1 = iVar11 + 0x60;
    piVar12 = *(*(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar19 * 0x68) + 0x70);
    iVar3 = *(iVar21 + param_2 * 0x128 + 0xc);
    piVar2 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar19 * 0x68) + 0x10;
    if (piVar12 != NULL) {
        piVar2 = piVar12;
    }
    if (iVar3 == 2) {
        uVar6 = _raw_write_lock_irqsave(0x801441c);
        uVar7 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08003280;
        uVar9 = tpidr_el1;
        uVar8 = sched_clock(uVar9);
        snprintf(obj.usb_bam_dbg + uVar7 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
                 (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar7 * 0xa0 + 0x8000428,0x8f,"%s: USB BAM using ocimem\n","usb_bam_alloc_buffer");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar6);
        if (*piVar15 == 0) {
            if (0x10 < uVar19 * 0x68) goto code_r0x08003284;
            iVar22 = iVar21 + param_2 * 0x128;
            piVar12 = uVar19 * 0x68 + 0x8000408;
            iVar11 = *(*piVar12 + 8) + *(iVar22 + 0x30);
            piVar13 = iVar22 + 0x48;
            *piVar13 = iVar11;
            puVar20 = iVar22 + 0x58;
            *puVar20 = *(iVar22 + 0x34);
            uVar6 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar6 = 0x68000000000f13;
            }
            iVar11 = __ioremap(iVar11,*(iVar22 + 0x34),uVar6);
            *piVar15 = iVar11;
            if (iVar11 == 0) {
                _printk(0x8001363,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08003280;
                pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                sym.put_timestamp(pcVar16);
                pcVar10 = "%s: ioremap failed for data fifo\n";
                goto code_r0x08002f24;
            }
            __memset_io(iVar11,0,*puVar20);
            iVar11 = dma_map_resource(piVar2,*piVar13,*puVar20,0,0);
            piVar23 = iVar21 + param_2 * 0x128 + 0x50;
            *piVar23 = iVar11;
            if (iVar11 == -1) {
                _printk(0x8000db2,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                uVar19 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x08003280;
                sym.put_timestamp(obj.usb_bam_dbg + uVar19 * 0xa0);
                snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s(): oci_mem: err mapping data_buf\n",
                         "usb_bam_alloc_buffer");
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
            }
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            uVar9 = tpidr_el1;
            uVar7 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            iVar11 = piVar2[0xe];
            if (iVar11 == 0) {
                iVar11 = *piVar2;
            }
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: data_buf:%s virt:%pK, phys:%lx, iova:%lx\n",
                     "usb_bam_alloc_buffer",iVar11,*piVar15,*piVar13,*piVar23);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            iVar22 = iVar21 + param_2 * 0x128;
            iVar11 = *(*piVar12 + 8) + *(iVar22 + 0x38);
            piVar12 = iVar22 + 0x68;
            *piVar12 = iVar11;
            puVar20 = iVar22 + 0x78;
            *puVar20 = *(iVar22 + 0x3c);
            uVar6 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar6 = 0x68000000000f13;
            }
            iVar11 = __ioremap(iVar11,*(iVar22 + 0x3c),uVar6);
            *piVar1 = iVar11;
            if (iVar11 != 0) {
                __memset_io(iVar11,0,*puVar20);
                iVar11 = dma_map_resource(piVar2,*piVar12,*puVar20,0,0);
                piVar15 = iVar21 + param_2 * 0x128 + 0x70;
                *piVar15 = iVar11;
                if (iVar11 == -1) {
                    _printk(0x8000ca5,"usb_bam_alloc_buffer");
                    uVar6 = _raw_write_lock_irqsave(0x801441c);
                    uVar19 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x08003280;
                    sym.put_timestamp(obj.usb_bam_dbg + uVar19 * 0xa0);
                    snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s(): oci_mem: err mapping desc_buf\n",
                             "usb_bam_alloc_buffer");
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar6);
                }
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08003280;
                pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                uVar9 = tpidr_el1;
                uVar19 = sched_clock(uVar9);
                snprintf(pcVar16,0x11,"[%5lu.%06lu]: ",uVar19 / 1000000000,
                         (uVar19 + (uVar19 / 1000000000) * -1000000000) / 1000);
                iVar21 = piVar2[0xe];
                if (iVar21 == 0) {
                    iVar21 = *piVar2;
                }
                iVar11 = *piVar12;
                iVar22 = *piVar15;
                goto code_r0x08002be4;
            }
            _printk(0x8001445,"usb_bam_alloc_buffer");
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            sym.put_timestamp(obj.usb_bam_dbg + uVar19 * 0xa0);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: ioremap failed for desc fifo\n","usb_bam_alloc_buffer");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            iounmap(*piVar15);
code_r0x08003120:
            uVar19 = 0xfffffff4;
            goto code_r0x08003124;
        }
        _printk(0x800133f,"usb_bam_alloc_buffer");
        uVar6 = _raw_write_lock_irqsave(0x801441c);
        if (0x200 < *0x8014418) goto code_r0x08003280;
        pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
        sym.put_timestamp(pcVar16);
        pcVar10 = "%s: Already allocated OCI Memory\n";
code_r0x08002e64:
        snprintf(pcVar16 + 0x10,0x8f,pcVar10,"usb_bam_alloc_buffer");
code_r0x08002c00:
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar6);
    }
    else {
        if (iVar3 == 1) {
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            uVar9 = tpidr_el1;
            uVar7 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: USB BAM using system memory\n","usb_bam_alloc_buffer");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            if (*piVar15 != 0) {
                _printk(0x80016c7,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08003280;
                pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                sym.put_timestamp(pcVar16);
                pcVar10 = "%s: Already allocated memory\n";
                goto code_r0x08002e64;
            }
            puVar20 = iVar21 + param_2 * 0x128 + 0x34;
            iVar11 = dma_alloc_attrs(piVar2,*puVar20,&uStack_90,0xcc0,0x40);
            *piVar15 = iVar11;
            if (iVar11 == 0) {
                _printk(0x8000a31,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08003280;
                pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                sym.put_timestamp(pcVar16);
                pcVar10 = "%s: data_fifo: dma_alloc_attr failed\n";
code_r0x08002f24:
                snprintf(pcVar16 + 0x10,0x8f,pcVar10,"usb_bam_alloc_buffer");
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                goto code_r0x08003120;
            }
            memset(iVar11,0,*puVar20);
            iVar11 = *piVar15;
            iVar22 = iVar21 + param_2 * 0x128;
            uVar4 = *puVar20;
            puVar14 = iVar22 + 0x50;
            *puVar14 = uStack_90;
            dma_get_sgtable_attrs(piVar2,&puStack_78,iVar11,uStack_90,uVar4,0);
            piVar12 = iVar22 + 0x48;
            *piVar12 = ((*puStack_78 & 0x3fffffffffffffc) +
                       (__raw_write_lock_irqsave >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            sg_free_table(&puStack_78);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            uVar9 = tpidr_el1;
            uVar7 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            iVar11 = piVar2[0xe];
            if (iVar11 == 0) {
                iVar11 = *piVar2;
            }
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: data_buf:%s virt:%pK, phys:%lx, iova:%lx\n",
                     "usb_bam_alloc_buffer",iVar11,*piVar15,*piVar12,*puVar14);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            iVar11 = iVar21 + param_2 * 0x128;
            puVar18 = iVar11 + 0x3c;
            uVar4 = *puVar18;
            puVar17 = iVar11 + 0x78;
            *puVar17 = uVar4;
            iVar11 = dma_alloc_attrs(piVar2,uVar4,&iStack_98,0xcc0,0x40);
            *piVar1 = iVar11;
            if (iVar11 == 0) {
                _printk(0x80010a2,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                uVar19 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x08003280;
                sym.put_timestamp(obj.usb_bam_dbg + uVar19 * 0xa0);
                snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: desc_fifo: dma_alloc_attr failed\n",
                         "usb_bam_alloc_buffer");
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                dma_free_attrs(piVar2,*puVar20,*piVar15,*puVar14,0x40);
                goto code_r0x08003120;
            }
            memset(iVar11,0,*puVar18);
            iVar11 = *piVar1;
            iVar21 = iVar21 + param_2 * 0x128;
            uVar4 = *puVar17;
            piVar15 = iVar21 + 0x70;
            *piVar15 = iStack_98;
            dma_get_sgtable_attrs(piVar2,&puStack_88,iVar11,iStack_98,uVar4,0);
            piVar12 = iVar21 + 0x68;
            *piVar12 = ((*puStack_88 & 0x3fffffffffffffc) +
                       (__raw_write_lock_irqsave >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            sg_free_table(&puStack_88);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x08003280;
            pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            uVar9 = tpidr_el1;
            uVar19 = sched_clock(uVar9);
            snprintf(pcVar16,0x11,"[%5lu.%06lu]: ",uVar19 / 1000000000,
                     (uVar19 + (uVar19 / 1000000000) * -1000000000) / 1000);
            iVar21 = piVar2[0xe];
            if (iVar21 == 0) {
                iVar21 = *piVar2;
            }
            iVar11 = *piVar12;
            iVar22 = *piVar15;
code_r0x08002be4:
            snprintf(pcVar16 + 0x10,0x8f,"%s: desc_buf:%s virt:%pK, phys:%lx, iova:%lx\n","usb_bam_alloc_buffer",
                     iVar21,*piVar1,iVar11,iVar22);
            goto code_r0x08002c00;
        }
        if (iVar3 != 0) {
            _printk(0x8000f2a,"usb_bam_alloc_buffer");
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            uVar9 = tpidr_el1;
            uVar7 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: invalid mem type\n","usb_bam_alloc_buffer");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            uVar19 = 0xffffffea;
code_r0x08003124:
            _printk(0x8001138,"usb_bam_alloc_fifos",uVar19);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar7 = *0x8014418;
            if (0x200 < *0x8014418) {
code_r0x08003280:
    //WARNING: Does not return
                pcVar16 = SoftwareBreakpoint(0x5512,0x8003284);
                (*pcVar16)();
            }
            uVar9 = tpidr_el1;
            uVar8 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar7 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
                     (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar7 * 0xa0 + 0x8000428,0x8f,"%s(): Error(%d) allocating buffer\n","usb_bam_alloc_fifos",
                     uVar19);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            goto code_r0x08002c24;
        }
        uVar6 = _raw_write_lock_irqsave(0x801441c);
        uVar19 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08003280;
        uVar9 = tpidr_el1;
        uVar7 = sched_clock(uVar9);
        snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                 (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: USB BAM using SPS pipe memory\n","usb_bam_alloc_buffer");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar6);
        iVar11 = iVar21 + param_2 * 0x128;
        uVar5 = sps_setup_bam2bam_fifo(piVar15,*(iVar11 + 0x30),*(iVar11 + 0x34),1);
        if (uVar5 != 0) {
            uVar19 = uVar5;
            _printk(0x80016a5,"usb_bam_alloc_buffer",uVar19);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x08003280;
            pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            sym.put_timestamp(pcVar16);
            pcVar10 = "%s: data fifo setup failure %d\n";
code_r0x08002d7c:
            snprintf(pcVar16 + 0x10,0x8f,pcVar10,"usb_bam_alloc_buffer",uVar19);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            goto code_r0x08003124;
        }
        iVar21 = iVar21 + param_2 * 0x128;
        uVar5 = sps_setup_bam2bam_fifo(piVar1,*(iVar21 + 0x38),*(iVar21 + 0x3c),1);
        if (uVar5 != 0) {
            uVar19 = uVar5;
            _printk(0x800101b,"usb_bam_alloc_buffer",uVar19);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x08003280;
            pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            sym.put_timestamp(pcVar16);
            pcVar10 = "%s: desc. fifo setup failure %d\n";
            goto code_r0x08002d7c;
        }
    }
    uVar19 = 0;
code_r0x08002c24:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) != iStack_68) {
        uVar9 = __stack_chk_fail();
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        *extraout_x18 = 0x800328c;
        uVar6 = tpidr_el1;
        uVar19 = sched_clock(uVar6);
        uVar19 = snprintf(uVar9,0x11,"[%5lu.%06lu]: ",uVar19 / 1000000000,
                          (uVar19 + (uVar19 / 1000000000) * -1000000000) / 1000);
        return uVar19;
    }
    return uVar19;
}



// ===== sym.usb_bam_disconnect_pipe.cfi_jt @ 0x08002360 (size 8) =====



ulong sym.usb_bam_disconnect_pipe.cfi_jt(uint32_t param_1,uint8_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        uVar11 = param_1 * 0x68;
        if ((0x48 < uVar11) || (0x18 < uVar11)) {
code_r0x080051a8:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x80051ac);
            (*pcVar3)();
        }
        uVar9 = param_1;
        uVar8 = param_2;
        pcVar7 = *(uVar9 * 0x68 + 0x8000400) + uVar8 * 0x128 + 0xe8;
        if (*pcVar7 == '\0') {
            _printk(0x8000c82,"usb_bam_disconnect_pipe",param_2);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar11 = *0x8014418;
            if (*0x8014418 < 0x201) {
                uVar2 = tpidr_el1;
                uVar8 = sched_clock(uVar2);
                snprintf(obj.usb_bam_dbg + uVar11 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
                         (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
                snprintf(uVar11 * 0xa0 + 0x8000428,0x8f,"%s: connection %d isn\'t enabled\n",
                         "usb_bam_disconnect_pipe",param_2);
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                return 0;
            }
        }
        else {
            if (param_1 == 1) goto code_r0x080051a8;
            iVar1 = uVar9 * 0x68;
            iVar5 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar9 * 0x68);
            uVar6 = *(*(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar9 * 0x68) + uVar8 * 8
                     );
            iVar10 = *(iVar1 + 0x80003b8);
            sps_disconnect(uVar6);
            sps_free_endpoint(uVar6);
            iVar10 = iVar10 + uVar8 * 0x90;
            *(*(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar9 * 0x68) + uVar8 * 8) = 0;
            *(iVar10 + 0x34) = *(iVar10 + 0x34) & 0xdfffffff;
            *pcVar7 = '\0';
            _raw_spin_lock(iVar1 + 0x8000410);
            pcVar7 = iVar1 + 0x80003f0;
            if (*pcVar7 == '\0') {
                _printk(0x8000d52,"usb_bam_disconnect_pipe",0);
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                uVar8 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x080051ac;
                uVar2 = tpidr_el1;
                uVar4 = sched_clock(uVar2);
                snprintf(obj.usb_bam_dbg + uVar8 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar4 / 1000000000,
                         (uVar4 + (uVar4 / 1000000000) * -1000000000) / 1000);
                snprintf(uVar8 * 0xa0 + 0x8000428,0x8f,"%s: wrong pipes enabled counter for bam_type=%d\n",
                         "usb_bam_disconnect_pipe",0);
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
            }
            else {
                *pcVar7 = *pcVar7 + -1;
            }
            _raw_spin_unlock(iVar1 + 0x8000410);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar8 = *0x8014418;
            if (*0x8014418 < 0x201) {
                uVar2 = tpidr_el1;
                uVar4 = sched_clock(uVar2);
                snprintf(obj.usb_bam_dbg + uVar8 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar4 / 1000000000,
                         (uVar4 + (uVar4 / 1000000000) * -1000000000) / 1000);
                snprintf(uVar8 * 0xa0 + 0x8000428,0x8f,"%s: success disconnecting pipe %d\n",
                         "usb_bam_disconnect_pipe",param_2);
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                if (0x10 < uVar11) goto code_r0x080051a8;
                if ((*(*(uVar9 * 0x68 + 0x8000408) + 0x11) != '\0') && (*pcVar7 == '\0')) {
                    sps_device_reset(*(uVar9 * 0x68 + 0x80003e8));
                }
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                uVar11 = *0x8014418;
                if (*0x8014418 < 0x201) {
                    uVar2 = tpidr_el1;
                    uVar8 = sched_clock(uVar2);
                    snprintf(obj.usb_bam_dbg + uVar11 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
                             (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar11 * 0xa0 + 0x8000428,0x8f,"%s: PM Runtime PUT %d, count: %d\n",
                             "usb_bam_disconnect_pipe",param_2,*(iVar5 + 0x208));
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar6);
                    __pm_runtime_idle(iVar5 + 0x10,4);
                    return 0;
                }
            }
        }
    }
code_r0x080051ac:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80051b0);
    (*pcVar3)();
}




// ===== sym.usb_bam_free_fifos.cfi_jt @ 0x08002368 (size 8) =====



ulong sym.usb_bam_free_fifos.cfi_jt(uint32_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 2) {
        if (0x18 < param_1 * 0x68) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x8003764);
            (*pcVar5)();
        }
        param_2 = param_2 & 0xff;
        iVar14 = param_1 * 0x68;
        iVar13 = *(iVar14 + 0x8000400);
        iVar9 = *(*(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + iVar14) + 0x70);
        iVar2 = *(iVar13 + param_2 * 0x128 + 0xc);
        iVar1 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + iVar14) + 0x10;
        if (iVar9 != 0) {
            iVar1 = iVar9;
        }
        if (iVar2 != 0) {
            iVar14 = *(iVar14 + 0x80003b8);
            if (iVar2 == 2) {
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x0800375c;
                iVar9 = *0x8014418 * 0xa0;
                uVar3 = tpidr_el1;
                uVar8 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + iVar9,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
                         (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
                uVar3 = CONCAT35(str.Freeing_oci_memory_used_by_BAM_PIPE_n._29_3_,
                                 str.Freeing_oci_memory_used_by_BAM_PIPE_n._24_5_);
                uVar4 = CONCAT53(str.Freeing_oci_memory_used_by_BAM_PIPE_n._32_5_,
                                 str.Freeing_oci_memory_used_by_BAM_PIPE_n._29_3_);
                *(iVar9 + 0x8000438) = str.Freeing_oci_memory_used_by_BAM_PIPE_n._16_8_;
                *(iVar9 + 0x8000440) = uVar3;
                *(iVar9 + 0x8000445) = uVar4;
                uVar3 = str.Freeing_oci_memory_used_by_BAM_PIPE_n._8_8_;
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                *(iVar9 + 0x8000428) = str.Freeing_oci_memory_used_by_BAM_PIPE_n._0_8_;
                *(iVar9 + 0x8000430) = uVar3;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                piVar11 = iVar14 + param_2 * 0x90 + 0x58;
                iVar9 = *piVar11;
                if (iVar9 != 0) {
                    piVar12 = iVar14 + param_2 * 0x90 + 0x68;
                    iVar10 = *piVar12;
                    if (iVar10 != 0) {
                        dma_unmap_resource(iVar1,iVar10,*(iVar14 + param_2 * 0x90 + 0x70),0,0);
                        iVar9 = *piVar11;
                        *piVar12 = 0;
                    }
                    iounmap(iVar9);
                    *piVar11 = 0;
                    *(iVar13 + param_2 * 0x128 + 0x40) = 0;
                }
                piVar11 = iVar14 + param_2 * 0x90 + 0x38;
                iVar9 = *piVar11;
                if (iVar9 == 0) {
                    return 0;
                }
                piVar12 = iVar14 + param_2 * 0x90 + 0x48;
                iVar10 = *piVar12;
                if (iVar10 != 0) {
                    dma_unmap_resource(iVar1,iVar10,*(iVar14 + param_2 * 0x90 + 0x50),0,0);
                    iVar9 = *piVar11;
                    *piVar12 = 0;
                }
                iounmap(iVar9);
                *piVar11 = 0;
            }
            else {
                if (iVar2 != 1) {
                    return 0;
                }
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                uVar8 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800375c;
                uVar3 = tpidr_el1;
                uVar7 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + uVar8 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                         (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
                snprintf(uVar8 * 0xa0 + 0x8000428,0x8f,"%s: Freeing system memory used by PIPE\n",
                         "usb_bam_free_fifos");
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                iVar9 = *(iVar14 + param_2 * 0x90 + 0x68);
                if (iVar9 != 0) {
                    iVar10 = iVar14 + param_2 * 0x90;
                    dma_free_attrs(iVar1,*(iVar10 + 0x70),*(iVar10 + 0x58),iVar9,0x40);
                    *(iVar10 + 0x60) = 0;
                    *(iVar10 + 0x68) = 0;
                    *(iVar13 + param_2 * 0x128 + 0x40) = 0;
                }
                iVar9 = *(iVar14 + param_2 * 0x90 + 0x48);
                if (iVar9 == 0) {
                    return 0;
                }
                iVar14 = iVar14 + param_2 * 0x90;
                dma_free_attrs(iVar1,*(iVar14 + 0x50),*(iVar14 + 0x38),iVar9,0x40);
                *(iVar14 + 0x40) = 0;
                *(iVar14 + 0x48) = 0;
            }
            *(iVar13 + param_2 * 0x128 + 0x60) = 0;
            return 0;
        }
        uVar6 = _raw_write_lock_irqsave(0x801441c);
        uVar8 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar3 = tpidr_el1;
            uVar7 = sched_clock(uVar3);
            snprintf(obj.usb_bam_dbg + uVar8 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar8 * 0xa0 + 0x8000428,0x8f,"%s: nothing to be be\n","usb_bam_free_fifos");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            return 0;
        }
    }
code_r0x0800375c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003760);
    (*pcVar5)();
}




// ===== sym.usb_bam_sps_events.4b764ebe56d8e77425d71a4af75f471b.cfi_jt @ 0x08002370 (size 8) =====



void sym.usb_bam_sps_events.4b764ebe56d8e77425d71a4af75f471b.cfi_jt(int param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_write_lock_irqsave(0x801441c);
    if (param_1 == 3) {
        if (0x200 < *0x8014418) {
code_r0x08007210:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8007214);
            (*pcVar3)();
        }
        iVar6 = *0x8014418 * 0xa0;
        uVar2 = tpidr_el1;
        uVar5 = sched_clock(uVar2);
        snprintf(obj.usb_bam_dbg + iVar6,0x11,"[%5lu.%06lu]: ",uVar5 / 1000000000,
                 (uVar5 + (uVar5 / 1000000000) * -1000000000) / 1000);
        snprintf(iVar6 + 0x8000428,0x8f,"%s: received SPS_CALLBACK_BAM_TIMER_IRQ\n","usb_bam_sps_events");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar4);
        _raw_spin_lock(param_2 + 0x60);
        *(param_2 + 0x48) = 1;
        if (*(param_2 + 0x30) != 0) {
            iVar6 = 0;
            do {
                iVar1 = *(param_2 + 0x50) + iVar6;
                if (*(iVar1 + 0xe8) != '\0') {
                    *(iVar1 + 0x80) = 2;
                    *(iVar1 + 0xa8) = *(iVar1 + 0x100);
                    *(iVar1 + 0xb0) = *(iVar1 + 0xf0);
                    queue_work_on(0x20,*(param_2 + 0x28),iVar1 + 0xb8);
                    break;
                }
                iVar6 = iVar6 + 0x128;
            } while (*(param_2 + 0x30) * 0x128 - iVar6 != 0);
        }
        _raw_spin_unlock(param_2 + 0x60);
    }
    else {
        if (0x200 < *0x8014418) goto code_r0x08007210;
        iVar6 = *0x8014418 * 0xa0;
        uVar2 = tpidr_el1;
        uVar5 = sched_clock(uVar2);
        snprintf(obj.usb_bam_dbg + iVar6,0x11,"[%5lu.%06lu]: ",uVar5 / 1000000000,
                 (uVar5 + (uVar5 / 1000000000) * -1000000000) / 1000);
        snprintf(iVar6 + 0x8000428,0x8f,"%s: received sps_cb_case=%d\n","usb_bam_sps_events",param_1);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar4);
    }
    return;
}




// ===== sym.usb_bam_work.4b764ebe56d8e77425d71a4af75f471b.cfi_jt @ 0x08002378 (size 8) =====



void sym.usb_bam_work.4b764ebe56d8e77425d71a4af75f471b.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    ulong uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t extraout_x1;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar13;
    uint64_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uVar14 = *(param_1 + -0xa4);
    if (1 < *(param_1 + -0xa4)) {
code_r0x08006e54:
    //WARNING: Does not return
        pcVar13 = SoftwareBreakpoint(0x5512,0x8006e58);
        (*pcVar13)();
    }
    if (*(param_1 + -0x38) < 2) {
        uVar5 = _raw_write_lock_irqsave(0x801441c);
        uVar9 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08006e54;
        uVar8 = tpidr_el1;
        uVar6 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar6 / 1000000000,
                 (uVar6 + (uVar6 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s received USB_BAM_EVENT_WAKEUP\n","usb_bam_work");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
        pcVar13 = *(param_1 + -0x10);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar13,0x80004c0);
            (*pcVar13)(*(param_1 + -8));
        }
        iVar10 = uVar14 * 0x68 + 0x8000410;
        _raw_spin_lock(iVar10);
        if (0x24 < uVar14 * 0x68) goto code_r0x08006fcc;
        if (*(uVar14 * 0x68 + 0x80003f4) != 0) {
            uVar1 = *(param_1 + -0xa4);
            uVar14 = uVar1;
            if (1 < uVar1) goto code_r0x08006e54;
            if (0x38 < uVar14 * 0x68) goto code_r0x08006fcc;
            uVar9 = *(uVar14 * 0x68 + 0x80003e0);
            if (uVar9 != 0) {
                if (0x18 < uVar14 * 0x68) goto code_r0x08006fcc;
                iVar11 = 0;
                pcVar12 = *(uVar14 * 0x68 + 0x8000400) + 0xe8;
                do {
                    if ((*(pcVar12 + -0xd4) == uVar1) && (*pcVar12 != '\0')) {
                        if (uVar1 == 1) goto code_r0x08006fcc;
                        iVar11 = *(*(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt +
                                    uVar14 * 0x68) + iVar11);
                        if (iVar11 != 0) {
                            uStack_78 = 0;
                            uStack_70 = *(uVar14 * 0x68 + 0x80003f4);
                            sps_timer_ctrl(iVar11,&uStack_78,0);
                            uStack_78 = CONCAT44(uStack_78._4_4_,1);
                            sps_timer_ctrl(iVar11,&uStack_78,0);
                            goto code_r0x08006ea8;
                        }
                        break;
                    }
                    iVar11 = iVar11 + 8;
                    pcVar12 = pcVar12 + 0x128;
                } while (uVar9 * 8 - iVar11 != 0);
            }
            _printk(0x80009c7,"usb_bam_set_inactivity_timer");
        }
code_r0x08006ea8:
        _raw_spin_unlock(iVar10);
    }
    else if (*(param_1 + -0x38) == 2) {
        uVar5 = _raw_write_lock_irqsave(0x801441c);
        uVar9 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08006e54;
        uVar8 = tpidr_el1;
        uVar6 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar6 / 1000000000,
                 (uVar6 + (uVar6 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s received USB_BAM_EVENT_INACTIVITY\n","usb_bam_work");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
        pcVar13 = *(param_1 + -0x10);
        uVar14 = uVar14 * 0x68;
        uVar5 = *(param_1 + -8);
        _raw_spin_lock();
        if (0x38 < uVar14) {
code_r0x08006fcc:
    //WARNING: Does not return
            pcVar13 = SoftwareBreakpoint(1,0x8006fd0);
            (*pcVar13)();
        }
        uVar2 = *(uVar14 + 0x80003e0);
        uVar9 = uVar2;
        if (uVar2 != 0) {
            if (0x18 < uVar14) goto code_r0x08006fcc;
            iVar10 = 0;
            uVar6 = 0;
            do {
                iVar15 = *(uVar14 + 0x8000400);
                iVar11 = iVar15 + iVar10;
                if (((*(iVar11 + 0x14) == *(param_1 + -0xa4)) && (*(iVar11 + 0x10) == 1)) &&
                   (*(iVar15 + iVar10 + 0xe8) != '\0')) {
                    uVar8 = _raw_write_lock_irqsave(0x801441c);
                    uVar9 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x08006e54;
                    uVar3 = tpidr_el1;
                    uVar7 = sched_clock(uVar3);
                    snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                             (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s: Register wakeup on pipe %pK\n","usb_bam_work",iVar11
                            );
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar8);
                    sym.__usb_bam_register_wake_cb
                              (*(param_1 + -0xa4),uVar6 & 0xffffffff,*(iVar15 + iVar10 + 0xf8),
                               *(iVar15 + iVar10 + 0xf0));
                    uVar9 = *(uVar14 + 0x80003e0);
                }
                uVar6 = uVar6 + 1;
                iVar10 = iVar10 + 0x128;
            } while (uVar6 < uVar9);
        }
        _raw_spin_unlock(uVar14 + 0x8000410);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar13,0x80004e0);
            (*pcVar13)(uVar5);
        }
    }
    else {
        _printk(0x8000fe3,"usb_bam_work");
        uVar5 = _raw_write_lock_irqsave(0x801441c);
        uVar14 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08006e54;
        uVar8 = tpidr_el1;
        uVar9 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + uVar14 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar9 / 1000000000,
                 (uVar9 + (uVar9 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar14 * 0xa0 + 0x8000428,0x8f,"%s: unknown usb bam event type %d\n","usb_bam_work",
                 *(param_1 + -0x38));
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    iVar4 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    uVar5 = tpidr_el2;
    uVar5 = tpidr_el2;
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8006fd4;
    uVar5 = _raw_write_lock_irqsave(uVar5,0x801441c);
    if (iVar4 == 3) {
        if (0x200 < *0x8014418) {
code_r0x08007210:
    //WARNING: Does not return
            pcVar13 = SoftwareBreakpoint(0x5512,0x8007214);
            (*pcVar13)();
        }
        iVar10 = *0x8014418 * 0xa0;
        uVar8 = tpidr_el1;
        uVar14 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + iVar10,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                 (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
        snprintf(iVar10 + 0x8000428,0x8f,"%s: received SPS_CALLBACK_BAM_TIMER_IRQ\n","usb_bam_sps_events");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
        _raw_spin_lock(extraout_x1 + 0x60);
        *(extraout_x1 + 0x48) = 1;
        if (*(extraout_x1 + 0x30) != 0) {
            iVar10 = 0;
            do {
                iVar11 = *(extraout_x1 + 0x50) + iVar10;
                if (*(iVar11 + 0xe8) != '\0') {
                    *(iVar11 + 0x80) = 2;
                    *(iVar11 + 0xa8) = *(iVar11 + 0x100);
                    *(iVar11 + 0xb0) = *(iVar11 + 0xf0);
                    queue_work_on(0x20,*(extraout_x1 + 0x28),iVar11 + 0xb8);
                    break;
                }
                iVar10 = iVar10 + 0x128;
            } while (*(extraout_x1 + 0x30) * 0x128 - iVar10 != 0);
        }
        _raw_spin_unlock(extraout_x1 + 0x60);
    }
    else {
        if (0x200 < *0x8014418) goto code_r0x08007210;
        iVar10 = *0x8014418 * 0xa0;
        uVar8 = tpidr_el1;
        uVar14 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + iVar10,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                 (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
        snprintf(iVar10 + 0x8000428,0x8f,"%s: received sps_cb_case=%d\n","usb_bam_sps_events",iVar4);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
    }
    return;
}




// ===== sym.usb_bam_alloc_fifos @ 0x08002380 (size 3888) =====


uint64_t sym.usb_bam_alloc_fifos(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    uint uVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    char *pcVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t *piVar15;
    code *pcVar16;
    uint *puVar17;
    uint *puVar18;
    uint64_t uVar19;
    uint *puVar20;
    int64_t iVar21;
    uint64_t uVar22;
    int64_t iVar23;
    int64_t *piVar24;
    ulong unaff_x30;
    int64_t iStack_98;
    ulong uStack_90;
    uint64_t *puStack_88;
    ulong uStack_80;
    uint64_t *puStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iStack_68 = *(iVar21 + 0x5e0);
    if (1 < arg1) goto code_r0x08003280;
    if (0x18 < arg1 * 0x68) {
code_r0x08003284:
    //WARNING: Does not return
        pcVar16 = SoftwareBreakpoint(1,0x8003288);
        (*pcVar16)();
    }
    uVar22 = arg2 & 0xff;
    iVar21 = *(arg1 * 0x68 + 0x8000400);
    uVar5 = *(iVar21 + uVar22 * 0x128 + 0x14);
    uVar19 = uVar5;
    if (1 < uVar5) goto code_r0x08003280;
    if (0x48 < uVar19 * 0x68) goto code_r0x08003284;
    puStack_78 = NULL;
    uStack_70 = 0;
    puStack_88 = NULL;
    uStack_80 = 0;
    iVar11 = iVar21 + uVar22 * 0x128;
    iStack_98 = 0;
    uStack_90 = 0;
    piVar15 = iVar11 + 0x40;
    piVar1 = iVar11 + 0x60;
    piVar12 = *(*(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar19 * 0x68) + 0x70);
    iVar3 = *(iVar21 + uVar22 * 0x128 + 0xc);
    piVar2 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar19 * 0x68) + 0x10;
    if (piVar12 != NULL) {
        piVar2 = piVar12;
    }
    if (iVar3 == 2) {
        uVar6 = _raw_write_lock_irqsave(0x801441c);
        uVar7 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08003280;
        uVar9 = tpidr_el1;
        uVar8 = sched_clock(uVar9);
        snprintf(obj.usb_bam_dbg + uVar7 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
                 (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar7 * 0xa0 + 0x8000428,0x8f,"%s: USB BAM using ocimem\n","usb_bam_alloc_buffer");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar6);
        if (*piVar15 == 0) {
            if (0x10 < uVar19 * 0x68) goto code_r0x08003284;
            iVar23 = iVar21 + uVar22 * 0x128;
            piVar12 = uVar19 * 0x68 + 0x8000408;
            iVar11 = *(*piVar12 + 8) + *(iVar23 + 0x30);
            piVar13 = iVar23 + 0x48;
            *piVar13 = iVar11;
            puVar20 = iVar23 + 0x58;
            *puVar20 = *(iVar23 + 0x34);
            uVar6 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar6 = 0x68000000000f13;
            }
            iVar11 = __ioremap(iVar11,*(iVar23 + 0x34),uVar6);
            *piVar15 = iVar11;
            if (iVar11 == 0) {
                _printk(0x8001363,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08003280;
                pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                sym.put_timestamp(pcVar16);
                pcVar10 = "%s: ioremap failed for data fifo\n";
                goto code_r0x08002f24;
            }
            __memset_io(iVar11,0,*puVar20);
            iVar11 = dma_map_resource(piVar2,*piVar13,*puVar20,0,0);
            piVar24 = iVar21 + uVar22 * 0x128 + 0x50;
            *piVar24 = iVar11;
            if (iVar11 == -1) {
                _printk(0x8000db2,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                uVar19 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x08003280;
                sym.put_timestamp(obj.usb_bam_dbg + uVar19 * 0xa0);
                snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s(): oci_mem: err mapping data_buf\n",
                         "usb_bam_alloc_buffer");
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
            }
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            uVar9 = tpidr_el1;
            uVar7 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            iVar11 = piVar2[0xe];
            if (iVar11 == 0) {
                iVar11 = *piVar2;
            }
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: data_buf:%s virt:%pK, phys:%lx, iova:%lx\n",
                     "usb_bam_alloc_buffer",iVar11,*piVar15,*piVar13,*piVar24);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            iVar23 = iVar21 + uVar22 * 0x128;
            iVar11 = *(*piVar12 + 8) + *(iVar23 + 0x38);
            piVar12 = iVar23 + 0x68;
            *piVar12 = iVar11;
            puVar20 = iVar23 + 0x78;
            *puVar20 = *(iVar23 + 0x3c);
            uVar6 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar6 = 0x68000000000f13;
            }
            iVar11 = __ioremap(iVar11,*(iVar23 + 0x3c),uVar6);
            *piVar1 = iVar11;
            if (iVar11 != 0) {
                __memset_io(iVar11,0,*puVar20);
                iVar11 = dma_map_resource(piVar2,*piVar12,*puVar20,0,0);
                piVar15 = iVar21 + uVar22 * 0x128 + 0x70;
                *piVar15 = iVar11;
                if (iVar11 == -1) {
                    _printk(0x8000ca5,"usb_bam_alloc_buffer");
                    uVar6 = _raw_write_lock_irqsave(0x801441c);
                    uVar19 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x08003280;
                    sym.put_timestamp(obj.usb_bam_dbg + uVar19 * 0xa0);
                    snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s(): oci_mem: err mapping desc_buf\n",
                             "usb_bam_alloc_buffer");
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar6);
                }
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08003280;
                pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                uVar9 = tpidr_el1;
                uVar19 = sched_clock(uVar9);
                snprintf(pcVar16,0x11,"[%5lu.%06lu]: ",uVar19 / 1000000000,
                         (uVar19 + (uVar19 / 1000000000) * -1000000000) / 1000);
                iVar21 = piVar2[0xe];
                if (iVar21 == 0) {
                    iVar21 = *piVar2;
                }
                iVar11 = *piVar12;
                iVar23 = *piVar15;
                goto code_r0x08002be4;
            }
            _printk(0x8001445,"usb_bam_alloc_buffer");
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            sym.put_timestamp(obj.usb_bam_dbg + uVar19 * 0xa0);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: ioremap failed for desc fifo\n","usb_bam_alloc_buffer");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            iounmap(*piVar15);
code_r0x08003120:
            uVar19 = 0xfffffff4;
            goto code_r0x08003124;
        }
        _printk(0x800133f,"usb_bam_alloc_buffer");
        uVar6 = _raw_write_lock_irqsave(0x801441c);
        if (0x200 < *0x8014418) goto code_r0x08003280;
        pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
        sym.put_timestamp(pcVar16);
        pcVar10 = "%s: Already allocated OCI Memory\n";
code_r0x08002e64:
        snprintf(pcVar16 + 0x10,0x8f,pcVar10,"usb_bam_alloc_buffer");
code_r0x08002c00:
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar6);
    }
    else {
        if (iVar3 == 1) {
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            uVar9 = tpidr_el1;
            uVar7 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: USB BAM using system memory\n","usb_bam_alloc_buffer");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            if (*piVar15 != 0) {
                _printk(0x80016c7,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08003280;
                pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                sym.put_timestamp(pcVar16);
                pcVar10 = "%s: Already allocated memory\n";
                goto code_r0x08002e64;
            }
            puVar20 = iVar21 + uVar22 * 0x128 + 0x34;
            iVar11 = dma_alloc_attrs(piVar2,*puVar20,&stack0xffffffffffffff70,0xcc0,0x40);
            *piVar15 = iVar11;
            if (iVar11 == 0) {
                _printk(0x8000a31,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08003280;
                pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                sym.put_timestamp(pcVar16);
                pcVar10 = "%s: data_fifo: dma_alloc_attr failed\n";
code_r0x08002f24:
                snprintf(pcVar16 + 0x10,0x8f,pcVar10,"usb_bam_alloc_buffer");
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                goto code_r0x08003120;
            }
            memset(iVar11,0,*puVar20);
            iVar11 = *piVar15;
            iVar23 = iVar21 + uVar22 * 0x128;
            uVar4 = *puVar20;
            puVar14 = iVar23 + 0x50;
            *puVar14 = uStack_90;
            dma_get_sgtable_attrs(piVar2,&stack0xffffffffffffff88,iVar11,uStack_90,uVar4,0);
            piVar12 = iVar23 + 0x48;
            *piVar12 = ((*puStack_78 & 0x3fffffffffffffc) +
                       (__raw_write_lock_irqsave >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            sg_free_table(&stack0xffffffffffffff88);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            uVar9 = tpidr_el1;
            uVar7 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            iVar11 = piVar2[0xe];
            if (iVar11 == 0) {
                iVar11 = *piVar2;
            }
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: data_buf:%s virt:%pK, phys:%lx, iova:%lx\n",
                     "usb_bam_alloc_buffer",iVar11,*piVar15,*piVar12,*puVar14);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            iVar11 = iVar21 + uVar22 * 0x128;
            puVar18 = iVar11 + 0x3c;
            uVar4 = *puVar18;
            puVar17 = iVar11 + 0x78;
            *puVar17 = uVar4;
            iVar11 = dma_alloc_attrs(piVar2,uVar4,&stack0xffffffffffffff68,0xcc0,0x40);
            *piVar1 = iVar11;
            if (iVar11 == 0) {
                _printk(0x80010a2,"usb_bam_alloc_buffer");
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                uVar19 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x08003280;
                sym.put_timestamp(obj.usb_bam_dbg + uVar19 * 0xa0);
                snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: desc_fifo: dma_alloc_attr failed\n",
                         "usb_bam_alloc_buffer");
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                dma_free_attrs(piVar2,*puVar20,*piVar15,*puVar14,0x40);
                goto code_r0x08003120;
            }
            memset(iVar11,0,*puVar18);
            iVar11 = *piVar1;
            iVar21 = iVar21 + uVar22 * 0x128;
            uVar4 = *puVar17;
            piVar15 = iVar21 + 0x70;
            *piVar15 = iStack_98;
            dma_get_sgtable_attrs(piVar2,&stack0xffffffffffffff78,iVar11,iStack_98,uVar4,0);
            piVar12 = iVar21 + 0x68;
            *piVar12 = ((*puStack_88 & 0x3fffffffffffffc) +
                       (__raw_write_lock_irqsave >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            sg_free_table(&stack0xffffffffffffff78);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x08003280;
            pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            uVar9 = tpidr_el1;
            uVar19 = sched_clock(uVar9);
            snprintf(pcVar16,0x11,"[%5lu.%06lu]: ",uVar19 / 1000000000,
                     (uVar19 + (uVar19 / 1000000000) * -1000000000) / 1000);
            iVar21 = piVar2[0xe];
            if (iVar21 == 0) {
                iVar21 = *piVar2;
            }
            iVar11 = *piVar12;
            iVar23 = *piVar15;
code_r0x08002be4:
            snprintf(pcVar16 + 0x10,0x8f,"%s: desc_buf:%s virt:%pK, phys:%lx, iova:%lx\n","usb_bam_alloc_buffer",
                     iVar21,*piVar1,iVar11,iVar23);
            goto code_r0x08002c00;
        }
        if (iVar3 != 0) {
            _printk(0x8000f2a,"usb_bam_alloc_buffer");
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar19 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x08003280;
            uVar9 = tpidr_el1;
            uVar22 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar22 / 1000000000,
                     (uVar22 + (uVar22 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: invalid mem type\n","usb_bam_alloc_buffer");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            uVar19 = 0xffffffea;
code_r0x08003124:
            _printk(0x8001138,"usb_bam_alloc_fifos",uVar19);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            uVar22 = *0x8014418;
            if (0x200 < *0x8014418) {
code_r0x08003280:
    //WARNING: Does not return
                pcVar16 = SoftwareBreakpoint(0x5512,0x8003284);
                (*pcVar16)();
            }
            uVar9 = tpidr_el1;
            uVar7 = sched_clock(uVar9);
            snprintf(obj.usb_bam_dbg + uVar22 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar22 * 0xa0 + 0x8000428,0x8f,"%s(): Error(%d) allocating buffer\n","usb_bam_alloc_fifos",
                     uVar19);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            goto code_r0x08002c24;
        }
        uVar6 = _raw_write_lock_irqsave(0x801441c);
        uVar19 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08003280;
        uVar9 = tpidr_el1;
        uVar7 = sched_clock(uVar9);
        snprintf(obj.usb_bam_dbg + uVar19 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                 (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar19 * 0xa0 + 0x8000428,0x8f,"%s: USB BAM using SPS pipe memory\n","usb_bam_alloc_buffer");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar6);
        iVar11 = iVar21 + uVar22 * 0x128;
        uVar5 = sps_setup_bam2bam_fifo(piVar15,*(iVar11 + 0x30),*(iVar11 + 0x34),1);
        if (uVar5 != 0) {
            uVar19 = uVar5;
            _printk(0x80016a5,"usb_bam_alloc_buffer",uVar19);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x08003280;
            pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            sym.put_timestamp(pcVar16);
            pcVar10 = "%s: data fifo setup failure %d\n";
code_r0x08002d7c:
            snprintf(pcVar16 + 0x10,0x8f,pcVar10,"usb_bam_alloc_buffer",uVar19);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            goto code_r0x08003124;
        }
        iVar21 = iVar21 + uVar22 * 0x128;
        uVar5 = sps_setup_bam2bam_fifo(piVar1,*(iVar21 + 0x38),*(iVar21 + 0x3c),1);
        if (uVar5 != 0) {
            uVar19 = uVar5;
            _printk(0x800101b,"usb_bam_alloc_buffer",uVar19);
            uVar6 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x08003280;
            pcVar16 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            sym.put_timestamp(pcVar16);
            pcVar10 = "%s: desc. fifo setup failure %d\n";
            goto code_r0x08002d7c;
        }
    }
    uVar19 = 0;
code_r0x08002c24:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) != iStack_68) {
        uVar9 = __stack_chk_fail();
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        *extraout_x18 = 0x800328c;
        uVar6 = tpidr_el1;
        uVar19 = sched_clock(uVar6);
        uVar19 = snprintf(uVar9,0x11,"[%5lu.%06lu]: ",uVar19 / 1000000000,
                          (uVar19 + (uVar19 / 1000000000) * -1000000000) / 1000);
        return uVar19;
    }
    return uVar19;
}



// ===== sym.put_timestamp @ 0x080032b0 (size 128) =====



void sym.put_timestamp(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = tpidr_el1;
    uVar2 = sched_clock(uVar1);
    snprintf(arg1,0x11,"[%5lu.%06lu]: ",uVar2 / 1000000000,(uVar2 + (uVar2 / 1000000000) * -1000000000) / 1000);
    return;
}




// ===== sym.usb_bam_free_fifos @ 0x08003334 (size 1072) =====



ulong sym.usb_bam_free_fifos(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        if (0x18 < arg1 * 0x68) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x8003764);
            (*pcVar5)();
        }
        uVar14 = arg2 & 0xff;
        iVar15 = arg1 * 0x68;
        iVar13 = *(iVar15 + 0x8000400);
        iVar9 = *(*(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + iVar15) + 0x70);
        iVar2 = *(iVar13 + uVar14 * 0x128 + 0xc);
        iVar1 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + iVar15) + 0x10;
        if (iVar9 != 0) {
            iVar1 = iVar9;
        }
        if (iVar2 != 0) {
            iVar15 = *(iVar15 + 0x80003b8);
            if (iVar2 == 2) {
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x0800375c;
                iVar9 = *0x8014418 * 0xa0;
                uVar3 = tpidr_el1;
                uVar8 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + iVar9,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
                         (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
                uVar3 = CONCAT35(str.Freeing_oci_memory_used_by_BAM_PIPE_n._29_3_,
                                 str.Freeing_oci_memory_used_by_BAM_PIPE_n._24_5_);
                uVar4 = CONCAT53(str.Freeing_oci_memory_used_by_BAM_PIPE_n._32_5_,
                                 str.Freeing_oci_memory_used_by_BAM_PIPE_n._29_3_);
                *(iVar9 + 0x8000438) = str.Freeing_oci_memory_used_by_BAM_PIPE_n._16_8_;
                *(iVar9 + 0x8000440) = uVar3;
                *(iVar9 + 0x8000445) = uVar4;
                uVar3 = str.Freeing_oci_memory_used_by_BAM_PIPE_n._8_8_;
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                *(iVar9 + 0x8000428) = str.Freeing_oci_memory_used_by_BAM_PIPE_n._0_8_;
                *(iVar9 + 0x8000430) = uVar3;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                piVar11 = iVar15 + uVar14 * 0x90 + 0x58;
                iVar9 = *piVar11;
                if (iVar9 != 0) {
                    piVar12 = iVar15 + uVar14 * 0x90 + 0x68;
                    iVar10 = *piVar12;
                    if (iVar10 != 0) {
                        dma_unmap_resource(iVar1,iVar10,*(iVar15 + uVar14 * 0x90 + 0x70),0,0);
                        iVar9 = *piVar11;
                        *piVar12 = 0;
                    }
                    iounmap(iVar9);
                    *piVar11 = 0;
                    *(iVar13 + uVar14 * 0x128 + 0x40) = 0;
                }
                piVar11 = iVar15 + uVar14 * 0x90 + 0x38;
                iVar9 = *piVar11;
                if (iVar9 == 0) {
                    return 0;
                }
                piVar12 = iVar15 + uVar14 * 0x90 + 0x48;
                iVar10 = *piVar12;
                if (iVar10 != 0) {
                    dma_unmap_resource(iVar1,iVar10,*(iVar15 + uVar14 * 0x90 + 0x50),0,0);
                    iVar9 = *piVar11;
                    *piVar12 = 0;
                }
                iounmap(iVar9);
                *piVar11 = 0;
            }
            else {
                if (iVar2 != 1) {
                    return 0;
                }
                uVar6 = _raw_write_lock_irqsave(0x801441c);
                uVar8 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800375c;
                uVar3 = tpidr_el1;
                uVar7 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + uVar8 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                         (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
                snprintf(uVar8 * 0xa0 + 0x8000428,0x8f,"%s: Freeing system memory used by PIPE\n",
                         "usb_bam_free_fifos");
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar6);
                iVar9 = *(iVar15 + uVar14 * 0x90 + 0x68);
                if (iVar9 != 0) {
                    iVar10 = iVar15 + uVar14 * 0x90;
                    dma_free_attrs(iVar1,*(iVar10 + 0x70),*(iVar10 + 0x58),iVar9,0x40);
                    *(iVar10 + 0x60) = 0;
                    *(iVar10 + 0x68) = 0;
                    *(iVar13 + uVar14 * 0x128 + 0x40) = 0;
                }
                iVar9 = *(iVar15 + uVar14 * 0x90 + 0x48);
                if (iVar9 == 0) {
                    return 0;
                }
                iVar15 = iVar15 + uVar14 * 0x90;
                dma_free_attrs(iVar1,*(iVar15 + 0x50),*(iVar15 + 0x38),iVar9,0x40);
                *(iVar15 + 0x40) = 0;
                *(iVar15 + 0x48) = 0;
            }
            *(iVar13 + uVar14 * 0x128 + 0x60) = 0;
            return 0;
        }
        uVar6 = _raw_write_lock_irqsave(0x801441c);
        uVar14 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar3 = tpidr_el1;
            uVar8 = sched_clock(uVar3);
            snprintf(obj.usb_bam_dbg + uVar14 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
                     (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar14 * 0xa0 + 0x8000428,0x8f,"%s: nothing to be be\n","usb_bam_free_fifos");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar6);
            return 0;
        }
    }
code_r0x0800375c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8003760);
    (*pcVar5)();
}




// ===== sym.get_qdss_bam_info @ 0x08003770 (size 624) =====



int sym.get_qdss_bam_info(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint *puVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    int iVar10;
    ulong uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint64_t extraout_x1;
    char *pcVar16;
    char *pcVar17;
    uint *puVar18;
    ulong *puVar19;
    int64_t iVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint64_t uVar24;
    int64_t iVar25;
    uint *puVar26;
    int64_t iVar27;
    int64_t iVar28;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_38 = *(iVar27 + 0x5e0);
    if (1 < arg1) {
code_r0x080039d0:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5512,0x80039d4);
        (*pcVar7)();
    }
    if (0x18 < arg1 * 0x68) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(1,0x80039d0);
        (*pcVar7)();
    }
    uStack_40 = 0;
    pcVar16 = arg4;
    iVar8 = sps_phy2h(*(*(arg1 * 0x68 + 0x8000400) + (arg2 & 0xffU) * 0x128 + 0x20),&stack0xffffffffffffffc0);
    if (iVar8 == 0) {
        iVar8 = sps_get_bam_addr(uStack_40,arg3);
        if (iVar8 != 0) {
            _printk(0x80013db,"get_qdss_bam_info",iVar8);
            uVar11 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x080039d0;
            pcVar7 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            uVar4 = tpidr_el1;
            uVar21 = sched_clock(uVar4);
            snprintf(pcVar7,0x11,"[%5lu.%06lu]: ",uVar21 / 1000000000,
                     (uVar21 + (uVar21 / 1000000000) * -1000000000) / 1000);
            pcVar17 = "%s: sps_get_bam_addr failed%d\n";
            goto code_r0x08003994;
        }
    }
    else {
        _printk(0x80009e9,"get_qdss_bam_info",iVar8);
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        if (0x200 < *0x8014418) goto code_r0x080039d0;
        pcVar7 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
        uVar4 = tpidr_el1;
        uVar21 = sched_clock(uVar4);
        snprintf(pcVar7,0x11,"[%5lu.%06lu]: ",uVar21 / 1000000000,
                 (uVar21 + (uVar21 / 1000000000) * -1000000000) / 1000);
        pcVar17 = "%s: sps_phy2h failed (src BAM) %d\n";
code_r0x08003994:
        pcVar16 = "get_qdss_bam_info";
        snprintf(pcVar7 + 0x10,0x8f,pcVar17,"get_qdss_bam_info",iVar8);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar11);
        arg4 = pcVar17;
    }
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    uVar9 = __stack_chk_fail();
    uVar11 = tpidr_el2;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x80039d8;
    if (1 < uVar9) goto code_r0x0800451c;
    uVar21 = uVar9;
    if (0x18 < uVar9 * 0x68) goto code_r0x08004520;
    uVar24 = extraout_x1 & 0xffffffff;
    piVar1 = uVar21 * 0x68 + 0x8000400;
    uVar15 = extraout_x1;
    pcVar17 = *piVar1 + uVar15 * 0x128 + 0xe8;
    if (*pcVar17 != '\0') {
        _printk(0x80012f2,"usb_bam_connect",uVar24);
        return 0;
    }
    if (arg4 == NULL) {
        _printk(0x80014d3,"usb_bam_connect");
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        uVar21 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar24 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                     (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: invalid bam_pipe_idx\n","usb_bam_connect");
code_r0x08003fc0:
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar11);
            return -0x16;
        }
        goto code_r0x0800451c;
    }
    if ((uVar15 < 0) || (*(uVar21 * 0x68 + 0x80003e0) < uVar15)) {
        _printk(0x8001008,uVar24);
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        uVar21 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar12 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                     (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"idx is wrong %d\n",uVar24);
            goto code_r0x08003fc0;
        }
        goto code_r0x0800451c;
    }
    iVar27 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar21 * 0x68);
    uVar11 = _raw_write_lock_irqsave(0x801441c);
    uVar24 = *0x8014418;
    if (0x200 < *0x8014418) goto code_r0x0800451c;
    uVar4 = tpidr_el1;
    uVar12 = sched_clock(uVar4);
    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
             (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
    snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: PM Runtime GET %d, count: %d\n","usb_bam_connect",
             extraout_x1 & 0xffffffff,*(iVar27 + 0x208));
    *0x8014418 = *0x8014418 + 1 & 0x1ff;
    _raw_write_unlock_irqrestore(0x801441c,uVar11);
    __pm_runtime_resume(iVar27 + 0x10,4);
    iVar14 = uVar21 * 0x68 + 0x8000410;
    _raw_spin_lock(iVar14);
    if (0x10 < uVar9 * 0x68) {
code_r0x08004520:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(1,0x8004524);
        (*pcVar7)();
    }
    if ((*(*(uVar21 * 0x68 + 0x8000408) + 0x10) != '\0') && (*(uVar21 * 0x68 + 0x80003f0) == '\0')) {
        _raw_spin_unlock(iVar14);
        sps_device_reset(*(uVar21 * 0x68 + 0x80003e8));
        _raw_spin_lock(iVar14);
    }
    _raw_spin_unlock(iVar14);
    if (uVar9 == 1) goto code_r0x08004520;
    uVar24 = uVar15 & 0xff;
    iVar28 = *piVar1;
    iVar22 = iVar28 + uVar24 * 0x128;
    iVar3 = *(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar21 * 0x68);
    iVar20 = *(uVar21 * 0x68 + 0x80003b8);
    iVar8 = *(iVar22 + 0x10);
    iVar13 = sps_alloc_endpoint();
    *(iVar3 + uVar24 * 8) = iVar13;
    if (iVar13 == 0) {
        _printk(0x8001243,"connect_pipe");
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        uVar21 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x0800451c;
        uVar4 = tpidr_el1;
        uVar24 = sched_clock(uVar4);
        snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                 (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: sps_alloc_endpoint failed\n","connect_pipe");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar11);
        iVar10 = -0xc;
    }
    else {
        iVar23 = iVar20 + uVar24 * 0x90;
        iVar10 = sps_get_config(iVar13,iVar23);
        if (iVar10 == 0) {
            iVar10 = sps_phy2h(*(iVar28 + uVar24 * 0x128 + 0x20),iVar23);
            if (iVar10 != 0) {
                _printk(0x80009e9,"connect_pipe",iVar10);
                uVar11 = _raw_write_lock_irqsave(0x801441c);
                uVar21 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800451c;
                uVar4 = tpidr_el1;
                uVar12 = sched_clock(uVar4);
                snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                         (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
                iVar14 = uVar21 * 0xa0 + 0x8000428;
                pcVar16 = "%s: sps_phy2h failed (src BAM) %d\n";
                goto code_r0x0800427c;
            }
            iVar25 = iVar28 + uVar24 * 0x128;
            iVar13 = iVar20 + uVar24 * 0x90;
            puVar26 = iVar25 + 0x24;
            *(iVar13 + 0x10) = *puVar26;
            iVar10 = sps_phy2h(*(iVar25 + 0x28),iVar13 + 0x18);
            if (iVar10 != 0) {
                _printk(0x8001606,"connect_pipe",iVar10);
                uVar11 = _raw_write_lock_irqsave(0x801441c);
                uVar21 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800451c;
                uVar4 = tpidr_el1;
                uVar12 = sched_clock(uVar4);
                snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                         (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
                iVar14 = uVar21 * 0xa0 + 0x8000428;
                pcVar16 = "%s: sps_phy2h failed (dst BAM) %d\n";
                goto code_r0x0800427c;
            }
            iVar13 = iVar20 + uVar24 * 0x90;
            puVar18 = iVar28 + uVar24 * 0x128 + 0x2c;
            puVar2 = iVar13 + 0x2c;
            *(iVar13 + 0x28) = *puVar18;
            if (iVar8 == 0) {
                *puVar2 = 0;
                puVar19 = iVar20 + uVar24 * 0x90 + 0x20;
                *arg4 = *puVar26;
            }
            else {
                *puVar2 = 1;
                puVar19 = iVar20 + uVar24 * 0x90 + 8;
                *arg4 = *puVar18;
            }
            *puVar19 = pcVar16;
            iVar20 = iVar20 + uVar24 * 0x90;
            uVar4 = *(iVar22 + 0x58);
            uVar11 = *(iVar22 + 0x40);
            uVar5 = *(iVar22 + 0x48);
            *(iVar20 + 0x68) = *(iVar22 + 0x50);
            *(iVar20 + 0x70) = uVar4;
            *(iVar20 + 0x58) = uVar11;
            *(iVar20 + 0x60) = uVar5;
            uVar11 = *(iVar22 + 0x70);
            uVar5 = *(iVar22 + 0x78);
            uVar4 = *(iVar22 + 0x60);
            uVar6 = *(iVar22 + 0x68);
            *(iVar20 + 0x78) = 0x10;
            *(iVar20 + 0x48) = uVar11;
            *(iVar20 + 0x50) = uVar5;
            *(iVar20 + 0x34) = 0x20000000;
            *(iVar20 + 0x38) = uVar4;
            *(iVar20 + 0x40) = uVar6;
            iVar10 = sps_connect(*(iVar3 + uVar24 * 8),iVar23);
            if (-1 < iVar10) {
                uVar11 = _raw_write_lock_irqsave(0x801441c);
                uVar24 = *0x8014418;
                if (*0x8014418 < 0x201) {
                    uVar4 = tpidr_el1;
                    uVar12 = sched_clock(uVar4);
                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                             (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: pipe connection[%d] success\n","usb_bam_connect",
                             extraout_x1 & 0xffffffff);
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar11);
                    *pcVar17 = '\x01';
                    _raw_spin_lock(iVar14);
                    *(uVar21 * 0x68 + 0x80003f0) = *(uVar21 * 0x68 + 0x80003f0) + '\x01';
                    _raw_spin_unlock(iVar14);
                    return 0;
                }
                goto code_r0x0800451c;
            }
            _printk(0x8000505,"connect_pipe",iVar10);
            uVar11 = _raw_write_lock_irqsave(0x801441c);
            uVar21 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800451c;
            uVar4 = tpidr_el1;
            uVar12 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                     (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: sps_connect failed %d\n","connect_pipe",iVar10);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar11);
            sps_disconnect(*(iVar3 + uVar24 * 8));
        }
        else {
            _printk(0x8000f42,"connect_pipe",iVar10);
            uVar11 = _raw_write_lock_irqsave(0x801441c);
            uVar21 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800451c;
            uVar4 = tpidr_el1;
            uVar12 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                     (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
            iVar14 = uVar21 * 0xa0 + 0x8000428;
            pcVar16 = "%s: tx get config failed %d\n";
code_r0x0800427c:
            snprintf(iVar14,0x8f,pcVar16,"connect_pipe",iVar10);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar11);
        }
        sps_free_endpoint(*(iVar3 + uVar24 * 8));
        *(iVar3 + uVar24 * 8) = 0;
    }
    uVar24 = extraout_x1 & 0xffffffff;
    _printk(0x8000a0e,"usb_bam_connect",uVar24);
    uVar11 = _raw_write_lock_irqsave(0x801441c);
    uVar21 = *0x8014418;
    if (*0x8014418 < 0x201) {
        uVar4 = tpidr_el1;
        uVar12 = sched_clock(uVar4);
        snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                 (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: pipe connection[%d] failure\n","usb_bam_connect",uVar24);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar11);
        uVar11 = _raw_write_lock_irqsave(0x801441c);
        uVar21 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar4 = tpidr_el1;
            uVar12 = sched_clock(uVar4);
            snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar12 / 1000000000,
                     (uVar12 + (uVar12 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: err, PM RT PUT %d, count: %d\n","usb_bam_connect",uVar24,
                     *(iVar27 + 0x208));
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar11);
            __pm_runtime_idle(iVar27 + 0x10,4);
            return iVar10;
        }
    }
code_r0x0800451c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8004520);
    (*pcVar7)();
}




// ===== sym.usb_bam_connect @ 0x080039e0 (size 2884) =====



int sym.usb_bam_connect(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    int iVar6;
    code *pcVar7;
    int iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t uVar13;
    char *pcVar14;
    uint *puVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong *in_x18;
    uint64_t uVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint64_t uVar21;
    int64_t iVar22;
    uint *puVar23;
    int64_t iVar24;
    int64_t iVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < arg1) goto code_r0x0800451c;
    uVar18 = arg1;
    if (0x18 < arg1 * 0x68) goto code_r0x08004520;
    uVar21 = arg2 & 0xffffffff;
    piVar16 = uVar18 * 0x68 + 0x8000400;
    uVar13 = arg2;
    pcVar14 = *piVar16 + uVar13 * 0x128 + 0xe8;
    if (*pcVar14 != '\0') {
        _printk(0x80012f2,"usb_bam_connect",uVar21);
        return 0;
    }
    if (arg3 == 0) {
        _printk(0x80014d3,"usb_bam_connect");
        uVar9 = _raw_write_lock_irqsave(0x801441c);
        uVar18 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar3 = tpidr_el1;
            uVar21 = sched_clock(uVar3);
            snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar21 / 1000000000,
                     (uVar21 + (uVar21 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar18 * 0xa0 + 0x8000428,0x8f,"%s: invalid bam_pipe_idx\n","usb_bam_connect");
code_r0x08003fc0:
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar9);
            return -0x16;
        }
        goto code_r0x0800451c;
    }
    if ((uVar13 < 0) || (*(uVar18 * 0x68 + 0x80003e0) < uVar13)) {
        _printk(0x8001008,uVar21);
        uVar9 = _raw_write_lock_irqsave(0x801441c);
        uVar18 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar3 = tpidr_el1;
            uVar10 = sched_clock(uVar3);
            snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                     (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar18 * 0xa0 + 0x8000428,0x8f,"idx is wrong %d\n",uVar21);
            goto code_r0x08003fc0;
        }
        goto code_r0x0800451c;
    }
    iVar24 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar18 * 0x68);
    uVar9 = _raw_write_lock_irqsave(0x801441c);
    uVar21 = *0x8014418;
    if (0x200 < *0x8014418) goto code_r0x0800451c;
    uVar3 = tpidr_el1;
    uVar10 = sched_clock(uVar3);
    snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
             (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
    snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: PM Runtime GET %d, count: %d\n","usb_bam_connect",arg2 & 0xffffffff
             ,*(iVar24 + 0x208));
    *0x8014418 = *0x8014418 + 1 & 0x1ff;
    _raw_write_unlock_irqrestore(0x801441c,uVar9);
    __pm_runtime_resume(iVar24 + 0x10,4);
    iVar12 = uVar18 * 0x68 + 0x8000410;
    _raw_spin_lock(iVar12);
    if (0x10 < arg1 * 0x68) {
code_r0x08004520:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(1,0x8004524);
        (*pcVar7)();
    }
    if ((*(*(uVar18 * 0x68 + 0x8000408) + 0x10) != '\0') && (*(uVar18 * 0x68 + 0x80003f0) == '\0')) {
        _raw_spin_unlock(iVar12);
        sps_device_reset(*(uVar18 * 0x68 + 0x80003e8));
        _raw_spin_lock(iVar12);
    }
    _raw_spin_unlock(iVar12);
    if (arg1 == 1) goto code_r0x08004520;
    uVar21 = uVar13 & 0xff;
    iVar25 = *piVar16;
    iVar19 = iVar25 + uVar21 * 0x128;
    iVar2 = *(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar18 * 0x68);
    iVar17 = *(uVar18 * 0x68 + 0x80003b8);
    iVar6 = *(iVar19 + 0x10);
    iVar11 = sps_alloc_endpoint();
    *(iVar2 + uVar21 * 8) = iVar11;
    if (iVar11 == 0) {
        _printk(0x8001243,"connect_pipe");
        uVar9 = _raw_write_lock_irqsave(0x801441c);
        uVar18 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x0800451c;
        uVar3 = tpidr_el1;
        uVar21 = sched_clock(uVar3);
        snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar21 / 1000000000,
                 (uVar21 + (uVar21 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar18 * 0xa0 + 0x8000428,0x8f,"%s: sps_alloc_endpoint failed\n","connect_pipe");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar9);
        iVar8 = -0xc;
    }
    else {
        iVar20 = iVar17 + uVar21 * 0x90;
        iVar8 = sps_get_config(iVar11,iVar20);
        if (iVar8 == 0) {
            iVar8 = sps_phy2h(*(iVar25 + uVar21 * 0x128 + 0x20),iVar20);
            if (iVar8 != 0) {
                _printk(0x80009e9,"connect_pipe",iVar8);
                uVar9 = _raw_write_lock_irqsave(0x801441c);
                uVar18 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800451c;
                uVar3 = tpidr_el1;
                uVar10 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                         (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
                iVar12 = uVar18 * 0xa0 + 0x8000428;
                pcVar14 = "%s: sps_phy2h failed (src BAM) %d\n";
                goto code_r0x0800427c;
            }
            iVar22 = iVar25 + uVar21 * 0x128;
            iVar11 = iVar17 + uVar21 * 0x90;
            puVar23 = iVar22 + 0x24;
            *(iVar11 + 0x10) = *puVar23;
            iVar8 = sps_phy2h(*(iVar22 + 0x28),iVar11 + 0x18);
            if (iVar8 != 0) {
                _printk(0x8001606,"connect_pipe",iVar8);
                uVar9 = _raw_write_lock_irqsave(0x801441c);
                uVar18 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x0800451c;
                uVar3 = tpidr_el1;
                uVar10 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                         (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
                iVar12 = uVar18 * 0xa0 + 0x8000428;
                pcVar14 = "%s: sps_phy2h failed (dst BAM) %d\n";
                goto code_r0x0800427c;
            }
            iVar11 = iVar17 + uVar21 * 0x90;
            puVar15 = iVar25 + uVar21 * 0x128 + 0x2c;
            puVar1 = iVar11 + 0x2c;
            *(iVar11 + 0x28) = *puVar15;
            if (iVar6 == 0) {
                *puVar1 = 0;
                piVar16 = iVar17 + uVar21 * 0x90 + 0x20;
                *arg3 = *puVar23;
            }
            else {
                *puVar1 = 1;
                piVar16 = iVar17 + uVar21 * 0x90 + 8;
                *arg3 = *puVar15;
            }
            *piVar16 = arg4;
            iVar17 = iVar17 + uVar21 * 0x90;
            uVar3 = *(iVar19 + 0x58);
            uVar9 = *(iVar19 + 0x40);
            uVar4 = *(iVar19 + 0x48);
            *(iVar17 + 0x68) = *(iVar19 + 0x50);
            *(iVar17 + 0x70) = uVar3;
            *(iVar17 + 0x58) = uVar9;
            *(iVar17 + 0x60) = uVar4;
            uVar9 = *(iVar19 + 0x70);
            uVar4 = *(iVar19 + 0x78);
            uVar3 = *(iVar19 + 0x60);
            uVar5 = *(iVar19 + 0x68);
            *(iVar17 + 0x78) = 0x10;
            *(iVar17 + 0x48) = uVar9;
            *(iVar17 + 0x50) = uVar4;
            *(iVar17 + 0x34) = 0x20000000;
            *(iVar17 + 0x38) = uVar3;
            *(iVar17 + 0x40) = uVar5;
            iVar8 = sps_connect(*(iVar2 + uVar21 * 8),iVar20);
            if (-1 < iVar8) {
                uVar9 = _raw_write_lock_irqsave(0x801441c);
                uVar21 = *0x8014418;
                if (*0x8014418 < 0x201) {
                    uVar3 = tpidr_el1;
                    uVar10 = sched_clock(uVar3);
                    snprintf(obj.usb_bam_dbg + uVar21 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                             (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar21 * 0xa0 + 0x8000428,0x8f,"%s: pipe connection[%d] success\n","usb_bam_connect",
                             arg2 & 0xffffffff);
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar9);
                    *pcVar14 = '\x01';
                    _raw_spin_lock(iVar12);
                    *(uVar18 * 0x68 + 0x80003f0) = *(uVar18 * 0x68 + 0x80003f0) + '\x01';
                    _raw_spin_unlock(iVar12);
                    return 0;
                }
                goto code_r0x0800451c;
            }
            _printk(0x8000505,"connect_pipe",iVar8);
            uVar9 = _raw_write_lock_irqsave(0x801441c);
            uVar18 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800451c;
            uVar3 = tpidr_el1;
            uVar10 = sched_clock(uVar3);
            snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                     (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar18 * 0xa0 + 0x8000428,0x8f,"%s: sps_connect failed %d\n","connect_pipe",iVar8);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar9);
            sps_disconnect(*(iVar2 + uVar21 * 8));
        }
        else {
            _printk(0x8000f42,"connect_pipe",iVar8);
            uVar9 = _raw_write_lock_irqsave(0x801441c);
            uVar18 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800451c;
            uVar3 = tpidr_el1;
            uVar10 = sched_clock(uVar3);
            snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                     (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
            iVar12 = uVar18 * 0xa0 + 0x8000428;
            pcVar14 = "%s: tx get config failed %d\n";
code_r0x0800427c:
            snprintf(iVar12,0x8f,pcVar14,"connect_pipe",iVar8);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar9);
        }
        sps_free_endpoint(*(iVar2 + uVar21 * 8));
        *(iVar2 + uVar21 * 8) = 0;
    }
    uVar21 = arg2 & 0xffffffff;
    _printk(0x8000a0e,"usb_bam_connect",uVar21);
    uVar9 = _raw_write_lock_irqsave(0x801441c);
    uVar18 = *0x8014418;
    if (*0x8014418 < 0x201) {
        uVar3 = tpidr_el1;
        uVar10 = sched_clock(uVar3);
        snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                 (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar18 * 0xa0 + 0x8000428,0x8f,"%s: pipe connection[%d] failure\n","usb_bam_connect",uVar21);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar9);
        uVar9 = _raw_write_lock_irqsave(0x801441c);
        uVar18 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar3 = tpidr_el1;
            uVar10 = sched_clock(uVar3);
            snprintf(obj.usb_bam_dbg + uVar18 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                     (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar18 * 0xa0 + 0x8000428,0x8f,"%s: err, PM RT PUT %d, count: %d\n","usb_bam_connect",uVar21,
                     *(iVar24 + 0x208));
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar9);
            __pm_runtime_idle(iVar24 + 0x10,4);
            return iVar8;
        }
    }
code_r0x0800451c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8004520);
    (*pcVar7)();
}




// ===== sym.usb_bam_get_pipe_type @ 0x08004558 (size 536) =====



ulong sym.usb_bam_get_pipe_type(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    uint64_t uVar3;
    char *pcVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        if (0x18 < arg1 * 0x68) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x800476c);
            (*pcVar5)();
        }
        if ((arg2 & 0xff) < *(arg1 * 0x68 + 0x80003e0)) {
            if (arg3 != 0) {
                *arg3 = *(*(arg1 * 0x68 + 0x8000400) + (arg2 & 0xff) * 0x128 + 0x1c);
                return 0;
            }
            _printk(0x800165f,"usb_bam_get_pipe_type");
            uVar2 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x0800476c;
            pcVar5 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            uVar1 = tpidr_el1;
            uVar3 = sched_clock(uVar1);
            snprintf(pcVar5,0x11,"[%5lu.%06lu]: ",uVar3 / 1000000000,
                     (uVar3 + (uVar3 / 1000000000) * -1000000000) / 1000);
            pcVar4 = "%s: null pointer provided for type\n";
        }
        else {
            _printk(0x8001685,"usb_bam_get_pipe_type");
            uVar2 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x0800476c;
            pcVar5 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
            uVar1 = tpidr_el1;
            uVar3 = sched_clock(uVar1);
            snprintf(pcVar5,0x11,"[%5lu.%06lu]: ",uVar3 / 1000000000,
                     (uVar3 + (uVar3 / 1000000000) * -1000000000) / 1000);
            pcVar4 = "%s: Invalid connection index\n";
        }
        snprintf(pcVar5 + 0x10,0x8f,pcVar4,"usb_bam_get_pipe_type");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar2);
        return 0xffffffea;
    }
code_r0x0800476c:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8004770);
    (*pcVar5)();
}




// ===== sym.usb_bam_register_wake_cb @ 0x08004778 (size 44) =====



void sym.usb_bam_register_wake_cb(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__usb_bam_register_wake_cb(arg1,arg2 & 0xff,arg3,arg4);
    return;
}




// ===== sym.__usb_bam_register_wake_cb @ 0x080047a4 (size 1032) =====



int sym.__usb_bam_register_wake_cb(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    uint32_t in_w4;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    ulong uVar11;
    ulong unaff_x30;
    
    uVar9 = arg3;
    *in_x18 = unaff_x30;
    if (1 < arg1) goto code_r0x08004ba8;
    uVar10 = arg2 & 0xffffffff;
    if (-1 < arg2) {
        uVar8 = arg1;
        if (0x38 < uVar8 * 0x68) {
code_r0x08004ba4:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x8004ba8);
            (*pcVar4)();
        }
        if (arg2 <= *(uVar8 * 0x68 + 0x80003e0)) {
            if ((arg1 == 1) || (0x18 < uVar8 * 0x68)) goto code_r0x08004ba4;
            iVar6 = *(uVar8 * 0x68 + 0x8000400) + (arg2 & 0xffffffffU) * 0x128;
            iVar2 = *(uVar8 * 0x68 + 0x80003b8);
            pcVar4 = NULL;
            if (uVar9 != 0) {
                pcVar4 = sym.usb_bam_wake_cb.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
            }
            uVar11 = *(*(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar8 * 0x68) +
                      uVar10 * 8);
            *(iVar6 + 0x80) = ~in_w4 & 1;
            *(iVar6 + 0xa8) = uVar9;
            *(iVar6 + 0xb0) = arg4;
            *(iVar6 + 0x90) = 0;
            *(iVar6 + 0x98) = pcVar4;
            *(iVar6 + 0xa0) = iVar6 + 0x80;
            *(iVar6 + 0x88) = 4;
            iVar5 = sps_register_event(uVar11);
            if (iVar5 == 0) {
                uVar1 = 0x20000000;
                if (uVar9 != 0) {
                    uVar1 = 0x28000004;
                }
                *(iVar2 + (arg2 & 0xffffffffU) * 0x90 + 0x34) = uVar1;
                iVar5 = sps_set_config(uVar11);
                if (iVar5 == 0) {
                    uVar11 = _raw_write_lock_irqsave(0x801441c);
                    uVar9 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x08004ba8;
                    uVar3 = tpidr_el1;
                    uVar10 = sched_clock(uVar3);
                    snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar10 / 1000000000,
                             (uVar10 + (uVar10 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s: success\n","__usb_bam_register_wake_cb");
                    iVar5 = 0;
                    goto code_r0x08004948;
                }
                _printk(0x8000b76,"__usb_bam_register_wake_cb",iVar5);
                uVar11 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08004ba8;
                pcVar4 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                uVar3 = tpidr_el1;
                uVar9 = sched_clock(uVar3);
                snprintf(pcVar4,0x11,"[%5lu.%06lu]: ",uVar9 / 1000000000,
                         (uVar9 + (uVar9 / 1000000000) * -1000000000) / 1000);
                pcVar7 = "%s: sps_set_config() failed %d\n";
            }
            else {
                _printk(0x80006d7,"__usb_bam_register_wake_cb",iVar5);
                uVar11 = _raw_write_lock_irqsave(0x801441c);
                if (0x200 < *0x8014418) goto code_r0x08004ba8;
                pcVar4 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                uVar3 = tpidr_el1;
                uVar9 = sched_clock(uVar3);
                snprintf(pcVar4,0x11,"[%5lu.%06lu]: ",uVar9 / 1000000000,
                         (uVar9 + (uVar9 / 1000000000) * -1000000000) / 1000);
                pcVar7 = "%s: sps_register_event() failed %d\n";
            }
            snprintf(pcVar4 + 0x10,0x8f,pcVar7,"__usb_bam_register_wake_cb",iVar5);
            goto code_r0x08004948;
        }
    }
    _printk(0x80016fd,"__usb_bam_register_wake_cb",uVar10);
    uVar11 = _raw_write_lock_irqsave(0x801441c);
    uVar9 = *0x8014418;
    if (0x200 < *0x8014418) {
code_r0x08004ba8:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8004bac);
        (*pcVar4)();
    }
    uVar3 = tpidr_el1;
    uVar8 = sched_clock(uVar3);
    snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar8 / 1000000000,
             (uVar8 + (uVar8 / 1000000000) * -1000000000) / 1000);
    snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s:idx is wrong %d\n","__usb_bam_register_wake_cb",uVar10);
    iVar5 = -0x16;
code_r0x08004948:
    *0x8014418 = *0x8014418 + 1 & 0x1ff;
    _raw_write_unlock_irqrestore(0x801441c,uVar11);
    return iVar5;
}




// ===== sym.usb_bam_register_start_stop_cbs @ 0x08004bbc (size 368) =====



ulong sym.usb_bam_register_start_stop_cbs(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong in_x4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        if (0x18 < arg1 * 0x68) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x8004d2c);
            (*pcVar2)();
        }
        iVar6 = *(arg1 * 0x68 + 0x8000400);
        uVar3 = _raw_write_lock_irqsave(0x801441c);
        uVar5 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar1 = tpidr_el1;
            uVar4 = sched_clock(uVar1);
            snprintf(obj.usb_bam_dbg + uVar5 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar4 / 1000000000,
                     (uVar4 + (uVar4 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar5 * 0xa0 + 0x8000428,0x8f,"%s: Register for %d\n","usb_bam_register_start_stop_cbs",
                     arg2 & 0xff);
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar3);
            iVar6 = iVar6 + (arg2 & 0xffU) * 0x128;
            *(iVar6 + 0x108) = arg3;
            *(iVar6 + 0x110) = arg4;
            *(iVar6 + 0x118) = in_x4;
            return 0;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8004d28);
    (*pcVar2)();
}




// ===== sym.usb_bam_disconnect_pipe @ 0x08004d30 (size 1152) =====



ulong sym.usb_bam_disconnect_pipe(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong uVar7;
    char *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        uVar12 = arg1 * 0x68;
        if ((0x48 < uVar12) || (0x18 < uVar12)) {
code_r0x080051a8:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x80051ac);
            (*pcVar4)();
        }
        uVar10 = arg1;
        uVar9 = arg2 & 0xff;
        pcVar8 = *(uVar10 * 0x68 + 0x8000400) + uVar9 * 0x128 + 0xe8;
        if (*pcVar8 == '\0') {
            uVar1 = arg2 & 0xff;
            _printk(0x8000c82,"usb_bam_disconnect_pipe",uVar1);
            uVar7 = _raw_write_lock_irqsave(0x801441c);
            uVar12 = *0x8014418;
            if (*0x8014418 < 0x201) {
                uVar3 = tpidr_el1;
                uVar9 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + uVar12 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar9 / 1000000000,
                         (uVar9 + (uVar9 / 1000000000) * -1000000000) / 1000);
                snprintf(uVar12 * 0xa0 + 0x8000428,0x8f,"%s: connection %d isn\'t enabled\n",
                         "usb_bam_disconnect_pipe",uVar1);
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar7);
                return 0;
            }
        }
        else {
            if (arg1 == 1) goto code_r0x080051a8;
            iVar2 = uVar10 * 0x68;
            iVar6 = *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar10 * 0x68);
            uVar7 = *(*(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar10 * 0x68) +
                     uVar9 * 8);
            iVar11 = *(iVar2 + 0x80003b8);
            sps_disconnect(uVar7);
            sps_free_endpoint(uVar7);
            iVar11 = iVar11 + uVar9 * 0x90;
            *(*(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar10 * 0x68) + uVar9 * 8) = 0;
            *(iVar11 + 0x34) = *(iVar11 + 0x34) & 0xdfffffff;
            *pcVar8 = '\0';
            _raw_spin_lock(iVar2 + 0x8000410);
            pcVar8 = iVar2 + 0x80003f0;
            if (*pcVar8 == '\0') {
                _printk(0x8000d52,"usb_bam_disconnect_pipe",0);
                uVar7 = _raw_write_lock_irqsave(0x801441c);
                uVar9 = *0x8014418;
                if (0x200 < *0x8014418) goto code_r0x080051ac;
                uVar3 = tpidr_el1;
                uVar5 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar5 / 1000000000,
                         (uVar5 + (uVar5 / 1000000000) * -1000000000) / 1000);
                snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s: wrong pipes enabled counter for bam_type=%d\n",
                         "usb_bam_disconnect_pipe",0);
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar7);
            }
            else {
                *pcVar8 = *pcVar8 + -1;
            }
            _raw_spin_unlock(iVar2 + 0x8000410);
            uVar7 = _raw_write_lock_irqsave(0x801441c);
            uVar9 = *0x8014418;
            if (*0x8014418 < 0x201) {
                uVar3 = tpidr_el1;
                uVar5 = sched_clock(uVar3);
                snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar5 / 1000000000,
                         (uVar5 + (uVar5 / 1000000000) * -1000000000) / 1000);
                uVar1 = arg2 & 0xff;
                snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s: success disconnecting pipe %d\n",
                         "usb_bam_disconnect_pipe",uVar1);
                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                _raw_write_unlock_irqrestore(0x801441c,uVar7);
                if (0x10 < uVar12) goto code_r0x080051a8;
                if ((*(*(uVar10 * 0x68 + 0x8000408) + 0x11) != '\0') && (*pcVar8 == '\0')) {
                    sps_device_reset(*(uVar10 * 0x68 + 0x80003e8));
                }
                uVar7 = _raw_write_lock_irqsave(0x801441c);
                uVar12 = *0x8014418;
                if (*0x8014418 < 0x201) {
                    uVar3 = tpidr_el1;
                    uVar9 = sched_clock(uVar3);
                    snprintf(obj.usb_bam_dbg + uVar12 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar9 / 1000000000,
                             (uVar9 + (uVar9 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar12 * 0xa0 + 0x8000428,0x8f,"%s: PM Runtime PUT %d, count: %d\n",
                             "usb_bam_disconnect_pipe",uVar1,*(iVar6 + 0x208));
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar7);
                    __pm_runtime_idle(iVar6 + 0x10,4);
                    return 0;
                }
            }
        }
    }
code_r0x080051ac:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x80051b0);
    (*pcVar4)();
}




// ===== sym.usb_bam_register_panic_hdlr @ 0x080051c4 (size 52) =====



void sym.usb_bam_register_panic_hdlr(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    atomic_notifier_chain_register
              (panic_notifier_list,reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt);
    return;
}




// ===== sym.get_bam2bam_connection_info @ 0x080051f8 (size 192) =====



ulong sym.get_bam2bam_connection_info(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    ulong *in_x4;
    uint *in_x5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    
    if (1 < arg1) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80052b4);
        (*pcVar5)();
    }
    if (arg1 * 0x68 < 0x19) {
        uVar7 = arg2 & 0xff;
        iVar6 = *(arg1 * 0x68 + 0x8000400);
        iVar8 = iVar6 + uVar7 * 0x128;
        puVar1 = iVar8 + 0x24;
        if (*(iVar8 + 0x10) != 0) {
            puVar1 = iVar8 + 0x2c;
        }
        *arg3 = *puVar1;
        if (in_x4 != NULL) {
            iVar8 = iVar6 + uVar7 * 0x128;
            uVar3 = *(iVar8 + 0x58);
            uVar2 = *(iVar8 + 0x40);
            uVar4 = *(iVar8 + 0x48);
            in_x4[2] = *(iVar8 + 0x50);
            in_x4[3] = uVar3;
            *in_x4 = uVar2;
            in_x4[1] = uVar4;
        }
        if (arg4 != 0) {
            iVar8 = iVar6 + uVar7 * 0x128;
            uVar3 = *(iVar8 + 0x78);
            uVar2 = *(iVar8 + 0x60);
            uVar4 = *(iVar8 + 0x68);
            *(arg4 + 0x10) = *(iVar8 + 0x70);
            *(arg4 + 0x18) = uVar3;
            *arg4 = uVar2;
            *(arg4 + 8) = uVar4;
        }
        if (in_x5 != NULL) {
            *in_x5 = *(iVar6 + uVar7 * 0x128 + 0xc);
        }
        return 0;
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x80052b8);
    (*pcVar5)();
}




// ===== sym.get_qdss_bam_connection_info @ 0x080052b8 (size 352) =====



ulong sym.get_qdss_bam_connection_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    uint32_t uVar6;
    ulong *in_x4;
    uint *in_x5;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = *0x8014000;
    if (*0x8014000 < 2) {
        uVar6 = sym.usb_bam_get_connection_idx(*0x8014000,0,1,0);
        if (*0x8014000 < 2) {
            if (*0x8014000 * 0x68 < 0x19) {
                iVar8 = *(*0x8014000 * 0x68 + 0x8000400);
                uVar7 = uVar6 & 0xff;
                iVar9 = iVar8 + uVar7 * 0x128;
                puVar1 = iVar9 + 0x24;
                if (*(iVar9 + 0x10) != 0) {
                    puVar1 = iVar9 + 0x2c;
                }
                *arg2 = *puVar1;
                if (in_x4 != NULL) {
                    iVar9 = iVar8 + uVar7 * 0x128;
                    uVar3 = *(iVar9 + 0x58);
                    uVar2 = *(iVar9 + 0x40);
                    uVar4 = *(iVar9 + 0x48);
                    in_x4[2] = *(iVar9 + 0x50);
                    in_x4[3] = uVar3;
                    *in_x4 = uVar2;
                    in_x4[1] = uVar4;
                }
                if (arg4 != 0) {
                    iVar9 = iVar8 + uVar7 * 0x128;
                    uVar3 = *(iVar9 + 0x78);
                    uVar2 = *(iVar9 + 0x60);
                    uVar4 = *(iVar9 + 0x68);
                    *(arg4 + 0x10) = *(iVar9 + 0x70);
                    *(arg4 + 0x18) = uVar3;
                    *arg4 = uVar2;
                    *(arg4 + 8) = uVar4;
                }
                if (in_x5 != NULL) {
                    *in_x5 = *(iVar8 + uVar7 * 0x128 + 0xc);
                }
                if (uVar10 * 0x68 < 0x61) {
                    iVar8 = *(uVar10 * 0x68 + 0x80003b8) + uVar7 * 0x90;
                    *arg1 = *(iVar8 + 0x18);
                    *arg3 = *(iVar8 + 0x10);
                    return 0;
                }
            }
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(1,0x8005418);
            (*pcVar5)();
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8005414);
    (*pcVar5)();
}




// ===== sym.usb_bam_get_connection_idx @ 0x08005418 (size 580) =====



uint64_t sym.usb_bam_get_connection_idx(uint32_t arg1,uint32_t arg2,uint32_t arg3,uint32_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 2) {
        uVar6 = arg1;
        if (0x38 < arg1 * 0x68) {
code_r0x08005654:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x8005658);
            (*pcVar2)();
        }
        uVar4 = *(uVar6 * 0x68 + 0x80003e0);
        if (uVar4 != 0) {
            if (0x18 < arg1 * 0x68) goto code_r0x08005654;
            uVar7 = 0;
            puVar5 = *(uVar6 * 0x68 + 0x8000400) + 0x18;
            do {
                if (((*puVar5 == arg2) && (puVar5[-2] == arg3)) && (puVar5[-4] == arg4)) {
                    uVar3 = _raw_write_lock_irqsave(0x801441c);
                    uVar6 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x08005658;
                    uVar1 = tpidr_el1;
                    uVar4 = sched_clock(uVar1);
                    snprintf(obj.usb_bam_dbg + uVar6 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar4 / 1000000000,
                             (uVar4 + (uVar4 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar6 * 0xa0 + 0x8000428,0x8f,"%s: index %d was found\n","usb_bam_get_connection_idx",
                             uVar7 & 0xffffffff);
                    goto code_r0x0800561c;
                }
                uVar7 = uVar7 + 1;
                puVar5 = puVar5 + 0x4a;
            } while (uVar4 != uVar7);
        }
        _printk(0x8000bd3,"usb_bam_get_connection_idx",uVar6);
        uVar3 = _raw_write_lock_irqsave(0x801441c);
        uVar4 = *0x8014418;
        if (*0x8014418 < 0x201) {
            uVar1 = tpidr_el1;
            uVar7 = sched_clock(uVar1);
            snprintf(obj.usb_bam_dbg + uVar4 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                     (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar4 * 0xa0 + 0x8000428,0x8f,"%s: failed for %d\n","usb_bam_get_connection_idx",uVar6);
            uVar7 = 0xffffffed;
code_r0x0800561c:
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar3);
            return uVar7 & 0xffffffff;
        }
    }
code_r0x08005658:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800565c);
    (*pcVar2)();
}




// ===== sym.usb_bam_get_bam_type @ 0x08005664 (size 16) =====



ulong sym.usb_bam_get_bam_type(int64_t arg1)

{
    return 0;
}




// ===== sym.usb_bam_wake_cb @ 0x08005674 (size 200) =====



void sym.usb_bam_wake_cb(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    char *pcVar3;
    ulong *in_x18;
    int *piVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *arg1;
    uVar5 = piVar4[-0x1b];
    if (1 < piVar4[-0x1b]) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8005738);
        (*pcVar2)();
    }
    iVar1 = uVar5 * 0x68 + 0x8000410;
    _raw_spin_lock(iVar1);
    if (*piVar4 == 1) {
        if (0x20 < uVar5 * 0x68) {
code_r0x08005738:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x800573c);
            (*pcVar2)();
        }
        pcVar3 = uVar5 * 0x68 + 0x80003f8;
        if (*pcVar3 == '\0') goto code_r0x08005714;
        *pcVar3 = '\0';
    }
    else {
        if (*piVar4 != 0) goto code_r0x08005714;
        if (0x40 < uVar5 * 0x68) goto code_r0x08005738;
    }
    queue_work_on(0x20,*(uVar5 * 0x68 + 0x80003d8),piVar4 + 0xe);
code_r0x08005714:
    _raw_spin_unlock(iVar1);
    return;
}




// ===== sym.usb_bam_panic_notifier @ 0x0800573c (size 112) =====



ulong sym.usb_bam_panic_notifier(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x80003e8 != 0) && (*0x80003f0 != '\0')) {
        _printk(0x8000a7f,"usb_bam_panic_notifier");
        sps_get_bam_debug_info(_segment.ehdr,0x5d,3,0,2);
    }
    return 0;
}




// ===== sym.usb_bam_probe @ 0x080057ac (size 4556) =====


int sym.usb_bam_probe(int64_t arg1)

{
    uint uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    code *pcVar6;
    int iVar7;
    int iVar8;
    uint *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    char *pcVar13;
    int64_t iVar14;
    int *piVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar17;
    ulong uVar18;
    int64_t iVar19;
    int64_t *piVar20;
    uint32_t uVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    ulong unaff_x30;
    uint uStack_104;
    uint64_t uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int iStack_e8;
    uint uStack_e4;
    uint uStack_e0;
    uint uStack_dc;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_70 = *(iVar12 + 0x5e0);
    puVar9 = platform_get_resource(arg1,0x200,0);
    if (puVar9 == NULL) {
        _dev_err(arg1 + 0x10,"missing BAM memory resource\n");
        iVar7 = -0x13;
        goto code_r0x08006198;
    }
    iVar7 = platform_get_irq(arg1,0);
    if (iVar7 < 0) {
        _dev_err(arg1 + 0x10,"Unable to get IRQ resource\n");
        goto code_r0x08006198;
    }
    iVar12 = arg1 + 0x10;
    uVar17 = *puVar9;
    uStack_104 = 0;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    uVar18 = *(arg1 + 0x300);
    iVar10 = devm_kmalloc(iVar12,0x28,0xdc0);
    if (iVar10 != 0) {
        *(iVar10 + 0x20) = 0;
        iVar11 = of_find_property(uVar18,"qcom,reset-bam-on-connect",0);
        *(iVar10 + 0x10) = iVar11 != 0;
        iVar11 = of_find_property(uVar18,"qcom,reset-bam-on-disconnect",0);
        *(iVar10 + 0x11) = iVar11 != 0;
        iVar8 = of_property_read_variable_u32_array(uVar18,"qcom,usb-bam-num-pipes",iVar10 + 4,1,0);
        if (iVar8 < 0) {
            _printk(0x8000760);
            uVar18 = _raw_write_lock_irqsave(0x801441c);
            if (0x200 < *0x8014418) goto code_r0x0800693c;
            iVar12 = *0x8014418 * 0xa0;
            uVar2 = tpidr_el1;
            uVar24 = sched_clock(uVar2);
            snprintf(obj.usb_bam_dbg + iVar12,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                     (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
            uVar3 = str.Invalid_usb_bam_num_pipes_property_n._8_8_;
            uVar2 = str.Invalid_usb_bam_num_pipes_property_n._0_8_;
            *(iVar12 + 0x8000448) = 0xa7974;
            uVar5 = str.Invalid_usb_bam_num_pipes_property_n._24_8_;
            uVar4 = str.Invalid_usb_bam_num_pipes_property_n._16_8_;
            *(iVar12 + 0x8000428) = uVar2;
            *(iVar12 + 0x8000430) = uVar3;
            *(iVar12 + 0x8000438) = uVar4;
            *(iVar12 + 0x8000440) = uVar5;
        }
        else {
            iVar8 = of_property_read_variable_u32_array(uVar18,"qcom,usb-bam-max-mbps-highspeed",iVar10 + 0x18,1,0);
            if (iVar8 < 0) {
                *(iVar10 + 0x18) = 0;
            }
            iVar8 = of_property_read_variable_u32_array(uVar18,"qcom,usb-bam-max-mbps-superspeed",iVar10 + 0x1c,1,0)
            ;
            if (iVar8 < 0) {
                *(iVar10 + 0x1c) = 0;
            }
            iVar8 = of_property_read_variable_u32_array
                              (uVar18,"qcom,usb-bam-fifo-baseaddr",&stack0xffffffffffffff00,1,0);
            if (-1 < iVar8) {
                *(iVar10 + 8) = uStack_100 & 0xffffffff;
            }
            iVar11 = of_find_property(uVar18,"qcom,disable-clk-gating",0);
            *(iVar10 + 0x12) = iVar11 != 0;
            iVar8 = of_property_read_variable_u32_array
                              (uVar18,"qcom,usb-bam-override-threshold",&stack0xfffffffffffffefc,1,0);
            uVar18 = *(arg1 + 0x300);
            uVar1 = uStack_104;
            if (iVar8 < 0) {
                uVar1 = 0x200;
            }
            *(iVar10 + 0x14) = uVar1;
            iVar11 = of_get_next_child(uVar18,0);
            if (iVar11 != 0) {
                uVar21 = 0;
                do {
                    uVar21 = uVar21 + 1;
                    iVar11 = of_get_next_child(*(arg1 + 0x300),iVar11);
                } while (iVar11 != 0);
                if (uVar21 != 0) {
                    *0x8014000 = devm_kmalloc(iVar12,uVar21 * 0x128,0xdc0);
                    if (*0x8014000 != 0) {
                        iVar11 = of_get_next_child(*(arg1 + 0x300),0);
                        if (iVar11 != 0) {
                            uVar24 = 0;
                            do {
                                uVar24 = uVar24 & 0xff;
                                *(*0x8014000 + uVar24 * 0x128 + 0x14) = 0;
                                iVar8 = of_property_read_string(iVar11,"label");
                                if ((iVar8 != 0) ||
                                   (iVar8 = of_property_read_variable_u32_array
                                                      (iVar11,"qcom,usb-bam-mem-type",
                                                       *0x8014000 + uVar24 * 0x128 + 0xc,1,0), iVar8 < 0))
                                goto code_r0x080060c0;
                                if ((*(*0x8014000 + uVar24 * 0x128 + 0xc) == 2) && (*(iVar10 + 8) == 0)) {
                                    _printk(0x8000535,"usb_bam_dt_to_data");
                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                    uVar24 = *0x8014418;
                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                    sym.put_timestamp(obj.usb_bam_dbg + uVar24 * 0xa0);
                                    pcVar13 = "%s: base address is missing\n";
                                    goto code_r0x08006078;
                                }
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,peer-bam",*0x8014000 + uVar24 * 0x128 + 0x18,1,0);
                                if (iVar8 < 0) {
                                    _printk(0x800119d,"usb_bam_dt_to_data");
                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                    uVar24 = *0x8014418;
                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                    uVar2 = tpidr_el1;
                                    uVar23 = sched_clock(uVar2);
                                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                             uVar23 / 1000000000,(uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000)
                                    ;
                                    pcVar13 = "%s: peer bam is missing in device tree\n";
                                    goto code_r0x08006078;
                                }
                                iVar14 = *0x8014000;
                                if (*(*0x8014000 + uVar24 * 0x128 + 0x18) == 0) {
                                    if (*0x8014000 != 0) {
                                        _printk(0x8000ea7,"usb_bam_dt_to_data");
                                        uVar18 = _raw_write_lock_irqsave(0x801441c);
                                        uVar23 = *0x8014418;
                                        if (0x200 < *0x8014418) goto code_r0x0800693c;
                                        uVar2 = tpidr_el1;
                                        uVar16 = sched_clock(uVar2);
                                        snprintf(obj.usb_bam_dbg + uVar23 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                                 uVar16 / 1000000000,
                                                 (uVar16 + (uVar16 / 1000000000) * -1000000000) / 1000);
                                        snprintf(uVar23 * 0xa0 + 0x8000428,0x8f,
                                                 "%s: overriding QDSS pipe!, update DT\n","usb_bam_dt_to_data");
                                        *0x8014418 = *0x8014418 + 1 & 0x1ff;
                                        _raw_write_unlock_irqrestore(0x801441c,uVar18);
                                    }
                                    iVar14 = *0x8014000;
                                    *0x8014000 = CONCAT44(*0x8014004,*(*0x8014000 + uVar24 * 0x128 + 0x14));
                                }
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,dir",iVar14 + uVar24 * 0x128 + 0x10,1,0);
                                if (iVar8 < 0) {
                                    _printk(0x80007a6,"usb_bam_dt_to_data");
                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                    uVar24 = *0x8014418;
                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                    uVar2 = tpidr_el1;
                                    uVar23 = sched_clock(uVar2);
                                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                             uVar23 / 1000000000,(uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000)
                                    ;
                                    pcVar13 = "%s: direction is missing in device tree\n";
                                    goto code_r0x08006078;
                                }
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,pipe-num",*0x8014000 + uVar24 * 0x128 + 8,1,0);
                                if (iVar8 < 0) {
                                    _printk(0x800091a,"usb_bam_dt_to_data");
                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                    uVar24 = *0x8014418;
                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                    uVar2 = tpidr_el1;
                                    uVar23 = sched_clock(uVar2);
                                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                             uVar23 / 1000000000,(uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000)
                                    ;
                                    pcVar13 = "%s: pipe num is missing in device tree\n";
                                    goto code_r0x08006078;
                                }
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,pipe-connection-type",*0x8014000 + uVar24 * 0x128 + 0x1c,1,0
                                          );
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,peer-bam-physical-address",&stack0xffffffffffffff00,1,0);
                                iVar14 = *0x8014000;
                                if (*(*0x8014000 + uVar24 * 0x128 + 0x10) == 0) {
                                    *(*0x8014000 + uVar24 * 0x128 + 0x20) = uVar17;
                                    uVar1 = uStack_100;
                                }
                                else {
                                    *(*0x8014000 + uVar24 * 0x128 + 0x20) = uStack_100;
                                    uVar1 = uVar17;
                                }
                                iVar19 = uVar24 * 0x128;
                                *(iVar14 + iVar19 + 0x28) = uVar1;
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,src-bam-pipe-index",iVar14 + iVar19 + 0x24,1,0);
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,dst-bam-pipe-index",*0x8014000 + iVar19 + 0x2c,1,0);
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,data-fifo-offset",*0x8014000 + iVar19 + 0x30,1,0);
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,data-fifo-size",*0x8014000 + iVar19 + 0x34,1,0);
                                if (iVar8 < 0) goto code_r0x080060c0;
                                of_property_read_variable_u32_array
                                          (iVar11,"qcom,descriptor-fifo-offset",*0x8014000 + uVar24 * 0x128 + 0x38,1
                                           ,0);
                                iVar8 = of_property_read_variable_u32_array
                                                  (iVar11,"qcom,descriptor-fifo-size",
                                                   *0x8014000 + uVar24 * 0x128 + 0x3c,1,0);
                                if (iVar8 < 0) goto code_r0x080060c0;
                                uVar24 = uVar24 + 1;
                                iVar11 = of_get_next_child(*(arg1 + 0x300),iVar11);
                            } while (iVar11 != 0);
                        }
                        uVar24 = *(iVar10 + 0x20);
                        *0x8000400 = *0x8014000;
                        *0x80003e0 = uVar21;
                        if (*(iVar10 + 0x20) < 2) {
                            uVar23 = uVar24 * 0x68;
                            *(arg1 + 0xa8) =
                                 reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + uVar23;
                            if (uVar23 < 0x49) {
                                iVar11 = uVar24 * 0x68;
                                *(reloc.usb_bam_remove.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + iVar11) = arg1;
                                *(reloc.usb_bam_probe.4b764ebe56d8e77425d71a4af75f471b.cfi_jt + iVar11) = iVar7;
                                *(iVar11 + 0x80003c0) = puVar9;
                                if (uVar23 < 0x11) {
                                    iVar11 = uVar24 * 0x68;
                                    *(iVar11 + 0x8000408) = iVar10;
                                    if (*(iVar11 + 0x80003e0) != 0) {
                                        iVar10 = 0;
                                        uVar16 = 0;
                                        piVar22 = iVar11 + 0x8000400;
                                        do {
                                            uVar16 = uVar16 + 1;
                                            *(*piVar22 + iVar10 + 0xe8) = 0;
                                            *(*piVar22 + iVar10 + 0xb8) = 0xfffffffe0;
                                            iVar14 = *piVar22 + iVar10;
                                            *(iVar14 + 0xc0) = iVar14 + 0xc0;
                                            *(iVar14 + 200) = iVar14 + 0xc0;
                                            iVar14 = *piVar22 + iVar10;
                                            iVar10 = iVar10 + 0x128;
                                            *(iVar14 + 0xd0) = sym.usb_bam_work.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
                                        } while (uVar16 < *(iVar11 + 0x80003e0));
                                    }
                                    iVar10 = alloc_workqueue("usb_bam_wq",10,1);
                                    piVar22 = uVar24 * 0x68 + 0x80003d8;
                                    *piVar22 = iVar10;
                                    if (iVar10 == 0) {
                                        _printk(0x8000f61);
                                        uVar18 = _raw_write_lock_irqsave(0x801441c);
                                        if (*0x8014418 < 0x201) {
                                            iVar12 = *0x8014418 * 0xa0;
                                            uVar2 = tpidr_el1;
                                            uVar24 = sched_clock(uVar2);
                                            snprintf(obj.usb_bam_dbg + iVar12,0x11,"[%5lu.%06lu]: ",
                                                     uVar24 / 1000000000,
                                                     (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
                                            uVar2 = CONCAT17(str.unable_to_create_workqueue_usb_bam_wq_n[0x1f],
                                                             str.unable_to_create_workqueue_usb_bam_wq_n._24_7_);
                                            uVar3 = CONCAT71(str.unable_to_create_workqueue_usb_bam_wq_n._32_7_,
                                                             str.unable_to_create_workqueue_usb_bam_wq_n[0x1f]);
                                            *(iVar12 + 0x8000438) = str.unable_to_create_workqueue_usb_bam_wq_n._16_8_;
                                            *(iVar12 + 0x8000440) = uVar2;
                                            *(iVar12 + 0x8000447) = uVar3;
                                            uVar2 = str.unable_to_create_workqueue_usb_bam_wq_n._8_8_;
                                            *0x8014418 = *0x8014418 + 1 & 0x1ff;
                                            *(iVar12 + 0x8000428) = str.unable_to_create_workqueue_usb_bam_wq_n._0_8_;
                                            *(iVar12 + 0x8000430) = uVar2;
                                            _raw_write_unlock_irqrestore(0x801441c,uVar18);
                                            iVar7 = -0xc;
                                            goto code_r0x08006198;
                                        }
                                    }
                                    else {
                                        piVar20 = *(arg1 + 0xa8);
                                        uStack_f0 = 0;
                                        uStack_100 = 0;
                                        uStack_80 = 0;
                                        uStack_78 = 0;
                                        uStack_90 = 0;
                                        uStack_88 = 0;
                                        pcStack_a0 = NULL;
                                        uStack_98 = 0;
                                        uStack_b0 = 0;
                                        uStack_b8 = 0;
                                        uStack_d0 = 0;
                                        uStack_c8 = 0;
                                        uStack_d8 = 0;
                                        piVar15 = piVar20[2];
                                        uStack_f8 = *piVar15;
                                        iVar10 = piVar20[0xb];
                                        _iStack_e8 = CONCAT44(piVar20[3],(piVar15[2] - *piVar15) + 1);
                                        iStack_c0 = *(iVar10 + 0x14) << 0x20;
                                        _uStack_e0 = CONCAT44(*(iVar10 + 0x14),*(iVar10 + 4));
                                        pcStack_a8 = sym.usb_bam_sps_events.4b764ebe56d8e77425d71a4af75f471b.cfi_jt;
                                        if (*(piVar20[0xb] + 0x20) < 2) {
                                            pcStack_a0 = reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt
                                                         + *(piVar20[0xb] + 0x20) * 0x68;
                                            if (*(piVar20[0xb] + 0x12) == '\0') {
                                                uVar17 = 0x200;
                                            }
                                            else {
                                                uVar17 = 0x220;
                                                uStack_100 = 0x20;
                                            }
                                            iVar10 = piVar20[4];
                                            if (((*(iVar10 + 0x70) != 0) &&
                                                (uVar16 = device_property_present(*(iVar10 + 0x70),"iommus"),
                                                (uVar16 & 1) != 0)) &&
                                               (uVar16 = device_property_present
                                                                   (*(iVar10 + 0x70),"qcom,smmu-s1-bypass"),
                                               (uVar16 & 1) == 0)) {
                                                iVar11 = *(iVar10 + 0x80);
                                                if (iVar11 == 0) {
                                                    iVar11 = *(iVar10 + 0x10);
                                                }
                                                _printk(0x8001281,"usb_bam_init",iVar11);
                                                uStack_100 = CONCAT44(uStack_100._4_4_,uVar17);
                                            }
                                            iVar7 = sps_register_bam_device(&stack0xffffffffffffff00,piVar20 + 7);
                                            if (iVar7 < 0) {
                                                _printk(0x8000ecf,"usb_bam_init",iVar7);
                                                uVar18 = _raw_write_lock_irqsave(0x801441c);
                                                uVar24 = *0x8014418;
                                                if (0x200 < *0x8014418) goto code_r0x0800693c;
                                                uVar2 = tpidr_el1;
                                                uVar23 = sched_clock(uVar2);
                                                snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",
                                                         uVar23 / 1000000000,
                                                         (uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000);
                                                snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: register bam error %d\n"
                                                         ,"usb_bam_init",iVar7);
                                                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                                                _raw_write_unlock_irqrestore(0x801441c,uVar18);
                                                iVar7 = -0xe;
                                            }
                                            else {
                                                iVar10 = devm_kmalloc(iVar12,*(piVar20 + 6) << 3,0xdc0);
                                                *piVar20 = iVar10;
                                                if (iVar10 == 0) {
                                                    _printk(0x800087d,"enable_usb_bam");
                                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                                    pcVar6 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                                                    uVar2 = tpidr_el1;
                                                    uVar24 = sched_clock(uVar2);
                                                    snprintf(pcVar6,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                                                             (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
                                                    pcVar13 = "%s: failed to allocate sps_pipes\n";
                                                }
                                                else {
                                                    iVar10 = devm_kmalloc(iVar12,*(piVar20 + 6) * 0x90,0xdc0);
                                                    piVar20[1] = iVar10;
                                                    if (iVar10 != 0) {
                                                        pm_runtime_no_callbacks(iVar12);
                                                        __pm_runtime_set_status(iVar12,0);
                                                        pm_runtime_enable(iVar12);
                                                        if (8 < uVar23) goto code_r0x08006940;
                                                        *(uVar24 * 0x68 + 0x8000410) = 0;
                                                        atomic_notifier_chain_register
                                                                  (panic_notifier_list,
                                                                   
                                                            reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt
                                                            );
                                                        iVar7 = 0;
                                                        goto code_r0x08006198;
                                                    }
                                                    _printk(0x80017a8,"enable_usb_bam");
                                                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                                                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                                                    pcVar6 = obj.usb_bam_dbg + *0x8014418 * 0xa0;
                                                    uVar2 = tpidr_el1;
                                                    uVar24 = sched_clock(uVar2);
                                                    snprintf(pcVar6,0x11,"[%5lu.%06lu]: ",uVar24 / 1000000000,
                                                             (uVar24 + (uVar24 / 1000000000) * -1000000000) / 1000);
                                                    pcVar13 = "%s: failed to allocate sps_connections\n";
                                                }
                                                snprintf(pcVar6 + 0x10,0x8f,pcVar13,"enable_usb_bam");
                                                *0x8014418 = *0x8014418 + 1 & 0x1ff;
                                                _raw_write_unlock_irqrestore(0x801441c,uVar18);
                                                iVar7 = -0xc;
                                            }
                                            destroy_workqueue(*piVar22);
                                            goto code_r0x08006198;
                                        }
                                    }
                                    goto code_r0x0800693c;
                                }
                            }
code_r0x08006940:
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(1,0x8006944);
                            (*pcVar6)();
                        }
                        goto code_r0x0800693c;
                    }
                    _printk(0x8000b98,"usb_bam_dt_to_data",0x42f);
                    uVar18 = _raw_write_lock_irqsave(0x801441c);
                    uVar24 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x0800693c;
                    uVar2 = tpidr_el1;
                    uVar23 = sched_clock(uVar2);
                    snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar23 / 1000000000,
                             (uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: devm_kzalloc failed(%d)\n","usb_bam_dt_to_data",
                             0x42f);
                    goto code_r0x08006174;
                }
            }
            _printk(0x8000ab0,"usb_bam_dt_to_data");
            uVar18 = _raw_write_lock_irqsave(0x801441c);
            uVar24 = *0x8014418;
            if (0x200 < *0x8014418) {
code_r0x0800693c:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8006940);
                (*pcVar6)();
            }
            uVar2 = tpidr_el1;
            uVar23 = sched_clock(uVar2);
            snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar23 / 1000000000,
                     (uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000);
            pcVar13 = "%s: error: max_connections is zero\n";
code_r0x08006078:
            snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,pcVar13,"usb_bam_dt_to_data");
            *0x8014418 = *0x8014418 + 1 & 0x1ff;
            _raw_write_unlock_irqrestore(0x801441c,uVar18);
code_r0x080060c0:
            _printk(0x8000677,"usb_bam_dt_to_data");
            uVar18 = _raw_write_lock_irqsave(0x801441c);
            uVar24 = *0x8014418;
            if (0x200 < *0x8014418) goto code_r0x0800693c;
            uVar2 = tpidr_el1;
            uVar23 = sched_clock(uVar2);
            snprintf(obj.usb_bam_dbg + uVar24 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar23 / 1000000000,
                     (uVar23 + (uVar23 / 1000000000) * -1000000000) / 1000);
            snprintf(uVar24 * 0xa0 + 0x8000428,0x8f,"%s: failed\n","usb_bam_dt_to_data");
        }
code_r0x08006174:
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar18);
    }
    iVar7 = -0x16;
code_r0x08006198:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_70) {
        iVar12 = __stack_chk_fail();
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        uVar18 = tpidr_el2;
        *extraout_x18 = 0x8006948;
        iVar12 = *(iVar12 + 0xa8);
        atomic_notifier_chain_unregister
                  (uVar18,panic_notifier_list,reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt);
        sps_deregister_bam_device(*(iVar12 + 0x38));
        destroy_workqueue(*(iVar12 + 0x28));
        return 0;
    }
    return iVar7;
}



// ===== sym.usb_bam_remove @ 0x08006978 (size 84) =====



ulong sym.usb_bam_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    atomic_notifier_chain_unregister
              (panic_notifier_list,reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt);
    sps_deregister_bam_device(*(iVar1 + 0x38));
    destroy_workqueue(*(iVar1 + 0x28));
    return 0;
}




// ===== sym.usb_bam_work @ 0x080069cc (size 1560) =====



void sym.usb_bam_work(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    ulong uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t extraout_x1;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar13;
    uint64_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uVar14 = *(arg1 + -0xa4);
    if (1 < *(arg1 + -0xa4)) {
code_r0x08006e54:
    //WARNING: Does not return
        pcVar13 = SoftwareBreakpoint(0x5512,0x8006e58);
        (*pcVar13)();
    }
    if (*(arg1 + -0x38) < 2) {
        uVar5 = _raw_write_lock_irqsave(0x801441c);
        uVar9 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08006e54;
        uVar8 = tpidr_el1;
        uVar6 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar6 / 1000000000,
                 (uVar6 + (uVar6 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s received USB_BAM_EVENT_WAKEUP\n","usb_bam_work");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
        pcVar13 = *(arg1 + -0x10);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar13,0x80004c0);
            (*pcVar13)(*(arg1 + -8));
        }
        iVar10 = uVar14 * 0x68 + 0x8000410;
        _raw_spin_lock(iVar10);
        if (0x24 < uVar14 * 0x68) goto code_r0x08006fcc;
        if (*(uVar14 * 0x68 + 0x80003f4) != 0) {
            uVar1 = *(arg1 + -0xa4);
            uVar14 = uVar1;
            if (1 < uVar1) goto code_r0x08006e54;
            if (0x38 < uVar14 * 0x68) goto code_r0x08006fcc;
            uVar9 = *(uVar14 * 0x68 + 0x80003e0);
            if (uVar9 != 0) {
                if (0x18 < uVar14 * 0x68) goto code_r0x08006fcc;
                iVar11 = 0;
                pcVar12 = *(uVar14 * 0x68 + 0x8000400) + 0xe8;
                do {
                    if ((*(pcVar12 + -0xd4) == uVar1) && (*pcVar12 != '\0')) {
                        if (uVar1 == 1) goto code_r0x08006fcc;
                        iVar11 = *(*(reloc.usb_bam_panic_notifier.4b764ebe56d8e77425d71a4af75f471b.cfi_jt +
                                    uVar14 * 0x68) + iVar11);
                        if (iVar11 != 0) {
                            uStack_78 = 0;
                            uStack_70 = *(uVar14 * 0x68 + 0x80003f4);
                            sps_timer_ctrl(iVar11,&stack0xffffffffffffff88,0);
                            uStack_78 = CONCAT44(uStack_78._4_4_,1);
                            sps_timer_ctrl(iVar11,&stack0xffffffffffffff88,0);
                            goto code_r0x08006ea8;
                        }
                        break;
                    }
                    iVar11 = iVar11 + 8;
                    pcVar12 = pcVar12 + 0x128;
                } while (uVar9 * 8 - iVar11 != 0);
            }
            _printk(0x80009c7,"usb_bam_set_inactivity_timer");
        }
code_r0x08006ea8:
        _raw_spin_unlock(iVar10);
    }
    else if (*(arg1 + -0x38) == 2) {
        uVar5 = _raw_write_lock_irqsave(0x801441c);
        uVar9 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08006e54;
        uVar8 = tpidr_el1;
        uVar6 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar6 / 1000000000,
                 (uVar6 + (uVar6 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s received USB_BAM_EVENT_INACTIVITY\n","usb_bam_work");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
        pcVar13 = *(arg1 + -0x10);
        uVar14 = uVar14 * 0x68;
        uVar5 = *(arg1 + -8);
        _raw_spin_lock();
        if (0x38 < uVar14) {
code_r0x08006fcc:
    //WARNING: Does not return
            pcVar13 = SoftwareBreakpoint(1,0x8006fd0);
            (*pcVar13)();
        }
        uVar2 = *(uVar14 + 0x80003e0);
        uVar9 = uVar2;
        if (uVar2 != 0) {
            if (0x18 < uVar14) goto code_r0x08006fcc;
            iVar10 = 0;
            uVar6 = 0;
            do {
                iVar15 = *(uVar14 + 0x8000400);
                iVar11 = iVar15 + iVar10;
                if (((*(iVar11 + 0x14) == *(arg1 + -0xa4)) && (*(iVar11 + 0x10) == 1)) &&
                   (*(iVar15 + iVar10 + 0xe8) != '\0')) {
                    uVar8 = _raw_write_lock_irqsave(0x801441c);
                    uVar9 = *0x8014418;
                    if (0x200 < *0x8014418) goto code_r0x08006e54;
                    uVar3 = tpidr_el1;
                    uVar7 = sched_clock(uVar3);
                    snprintf(obj.usb_bam_dbg + uVar9 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar7 / 1000000000,
                             (uVar7 + (uVar7 / 1000000000) * -1000000000) / 1000);
                    snprintf(uVar9 * 0xa0 + 0x8000428,0x8f,"%s: Register wakeup on pipe %pK\n","usb_bam_work",iVar11
                            );
                    *0x8014418 = *0x8014418 + 1 & 0x1ff;
                    _raw_write_unlock_irqrestore(0x801441c,uVar8);
                    sym.__usb_bam_register_wake_cb
                              (*(arg1 + -0xa4),uVar6 & 0xffffffff,*(iVar15 + iVar10 + 0xf8),*(iVar15 + iVar10 + 0xf0)
                              );
                    uVar9 = *(uVar14 + 0x80003e0);
                }
                uVar6 = uVar6 + 1;
                iVar10 = iVar10 + 0x128;
            } while (uVar6 < uVar9);
        }
        _raw_spin_unlock(uVar14 + 0x8000410);
        if (pcVar13 != NULL) {
            __cfi_slowpath_diag(0x641d19c7be126e92,pcVar13,0x80004e0);
            (*pcVar13)(uVar5);
        }
    }
    else {
        _printk(0x8000fe3,"usb_bam_work");
        uVar5 = _raw_write_lock_irqsave(0x801441c);
        uVar14 = *0x8014418;
        if (0x200 < *0x8014418) goto code_r0x08006e54;
        uVar8 = tpidr_el1;
        uVar9 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + uVar14 * 0xa0,0x11,"[%5lu.%06lu]: ",uVar9 / 1000000000,
                 (uVar9 + (uVar9 / 1000000000) * -1000000000) / 1000);
        snprintf(uVar14 * 0xa0 + 0x8000428,0x8f,"%s: unknown usb bam event type %d\n","usb_bam_work",*(arg1 + -0x38)
                );
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    iVar4 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    uVar5 = tpidr_el2;
    uVar5 = tpidr_el2;
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8006fd4;
    uVar5 = _raw_write_lock_irqsave(uVar5,0x801441c);
    if (iVar4 == 3) {
        if (0x200 < *0x8014418) {
code_r0x08007210:
    //WARNING: Does not return
            pcVar13 = SoftwareBreakpoint(0x5512,0x8007214);
            (*pcVar13)();
        }
        iVar10 = *0x8014418 * 0xa0;
        uVar8 = tpidr_el1;
        uVar14 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + iVar10,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                 (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
        snprintf(iVar10 + 0x8000428,0x8f,"%s: received SPS_CALLBACK_BAM_TIMER_IRQ\n","usb_bam_sps_events");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
        _raw_spin_lock(extraout_x1 + 0x60);
        *(extraout_x1 + 0x48) = 1;
        if (*(extraout_x1 + 0x30) != 0) {
            iVar10 = 0;
            do {
                iVar11 = *(extraout_x1 + 0x50) + iVar10;
                if (*(iVar11 + 0xe8) != '\0') {
                    *(iVar11 + 0x80) = 2;
                    *(iVar11 + 0xa8) = *(iVar11 + 0x100);
                    *(iVar11 + 0xb0) = *(iVar11 + 0xf0);
                    queue_work_on(0x20,*(extraout_x1 + 0x28),iVar11 + 0xb8);
                    break;
                }
                iVar10 = iVar10 + 0x128;
            } while (*(extraout_x1 + 0x30) * 0x128 - iVar10 != 0);
        }
        _raw_spin_unlock(extraout_x1 + 0x60);
    }
    else {
        if (0x200 < *0x8014418) goto code_r0x08007210;
        iVar10 = *0x8014418 * 0xa0;
        uVar8 = tpidr_el1;
        uVar14 = sched_clock(uVar8);
        snprintf(obj.usb_bam_dbg + iVar10,0x11,"[%5lu.%06lu]: ",uVar14 / 1000000000,
                 (uVar14 + (uVar14 / 1000000000) * -1000000000) / 1000);
        snprintf(iVar10 + 0x8000428,0x8f,"%s: received sps_cb_case=%d\n","usb_bam_sps_events",iVar4);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar5);
    }
    return;
}




// ===== sym.usb_bam_sps_events @ 0x08006fe4 (size 560) =====



void sym.usb_bam_sps_events(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_write_lock_irqsave(0x801441c);
    if (arg1 == 3) {
        if (0x200 < *0x8014418) {
code_r0x08007210:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8007214);
            (*pcVar3)();
        }
        iVar6 = *0x8014418 * 0xa0;
        uVar2 = tpidr_el1;
        uVar5 = sched_clock(uVar2);
        snprintf(obj.usb_bam_dbg + iVar6,0x11,"[%5lu.%06lu]: ",uVar5 / 1000000000,
                 (uVar5 + (uVar5 / 1000000000) * -1000000000) / 1000);
        snprintf(iVar6 + 0x8000428,0x8f,"%s: received SPS_CALLBACK_BAM_TIMER_IRQ\n","usb_bam_sps_events");
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar4);
        _raw_spin_lock(arg2 + 0x60);
        *(arg2 + 0x48) = 1;
        if (*(arg2 + 0x30) != 0) {
            iVar6 = 0;
            do {
                iVar1 = *(arg2 + 0x50) + iVar6;
                if (*(iVar1 + 0xe8) != '\0') {
                    *(iVar1 + 0x80) = 2;
                    *(iVar1 + 0xa8) = *(iVar1 + 0x100);
                    *(iVar1 + 0xb0) = *(iVar1 + 0xf0);
                    queue_work_on(0x20,*(arg2 + 0x28),iVar1 + 0xb8);
                    break;
                }
                iVar6 = iVar6 + 0x128;
            } while (*(arg2 + 0x30) * 0x128 - iVar6 != 0);
        }
        _raw_spin_unlock(arg2 + 0x60);
    }
    else {
        if (0x200 < *0x8014418) goto code_r0x08007210;
        iVar6 = *0x8014418 * 0xa0;
        uVar2 = tpidr_el1;
        uVar5 = sched_clock(uVar2);
        snprintf(obj.usb_bam_dbg + iVar6,0x11,"[%5lu.%06lu]: ",uVar5 / 1000000000,
                 (uVar5 + (uVar5 / 1000000000) * -1000000000) / 1000);
        snprintf(iVar6 + 0x8000428,0x8f,"%s: received sps_cb_case=%d\n","usb_bam_sps_events",arg1 & 0xffffffff);
        *0x8014418 = *0x8014418 + 1 & 0x1ff;
        _raw_write_unlock_irqrestore(0x801441c,uVar4);
    }
    return;
}




// ===== sym.__cfi_check_fail @ 0x0800721c (size 88) =====



//WARNING: Switch with 1 destination removed at 0x08007260

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
    //switch table (4 cases) at 0x8000500
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007274);
    (*pcVar1)();
}




// ===== sym.init_module @ 0x08007364 (size 52) =====



void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.usb_bam_probe.4b764ebe56d8e77425d71a4af75f471b.cfi_jt,obj.__this_module);
    return;
}




// ===== sym.cleanup_module @ 0x08007398 (size 44) =====



void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.usb_bam_probe.4b764ebe56d8e77425d71a4af75f471b.cfi_jt);
    return;
}

