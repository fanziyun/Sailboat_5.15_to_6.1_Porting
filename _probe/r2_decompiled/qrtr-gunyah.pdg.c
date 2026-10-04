// decompiled from qrtr-gunyah by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x080026b0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x27a79143e48b18f9) {
        if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.qrtr_gunyah_retry_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x8001190 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002670;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002670;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x27a79143e48b18f9) {
            pcVar2 = sym.qrtr_gunyah_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x77079828fb981a70) goto code_r0x08002670;
            pcVar2 = sym.qrtr_gunyah_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.qrtr_gunyah_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002670;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002670:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80026c4);
    (*pcVar1)();
}


// ===== sym.qrtr_gunyah_retry_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.qrtr_gunyah_retry_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t arg1;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    int iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_90;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_18 = *(iVar13 + 0x5e0);
    uStack_20 = 1;
    uVar6 = gh_dbl_send(*(param_1 + -0x10),&uStack_20,0);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_18) {
        return uVar6;
    }
    auVar17 = __stack_chk_fail();
    iVar9 = auVar17._8_8_;
    iVar7 = auVar17._0_8_;
    *extraout_x18 = sym.qrtr_gunyah_send;
    pcStack_78 = sym.qrtr_gunyah_send;
    iVar13 = sp_el0;
    iStack_90 = *(iVar13 + 0x5e0);
    uVar15 = *(iVar9 + 0x70);
    puStack_80 = &stack0xfffffffffffffff0;
    if (0 < uVar15) {
        iVar16 = 0;
        do {
            while( true ) {
                uVar11 = **(iVar7 + 0x118);
                uVar2 = **(iVar7 + 0x120);
                uVar12 = uVar2;
                if (uVar2 < uVar11) {
                    uVar11 = uVar11 - uVar2;
                    uVar10 = *(iVar7 + 0x138);
                }
                else {
                    uVar10 = *(iVar7 + 0x138);
                    uVar11 = (uVar11 - uVar2) + uVar10;
                }
                uVar1 = 0;
                if (7 < uVar11) {
                    uVar1 = uVar11 - 8;
                }
                if (uVar10 < uVar1) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d5c);
                    (*pcVar4)();
                }
                if (8 < uVar11) break;
                **(iVar7 + 0x128) = 1;
                uVar11 = **(iVar7 + 0x118) - **(iVar7 + 0x120);
                if (**(iVar7 + 0x118) < **(iVar7 + 0x120) || uVar11 == 0) {
                    uVar12 = *(iVar7 + 0x138);
                    uVar11 = uVar11 + uVar12;
                }
                else {
                    uVar12 = *(iVar7 + 0x138);
                }
                uVar2 = 0;
                if (7 < uVar11) {
                    uVar2 = uVar11 - 8;
                }
                if (uVar12 < uVar2) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d64);
                    (*pcVar4)();
                }
                if (uVar11 < 9) {
                    uStack_2b8 = 0;
                    uStack_2b0 = 0;
                    uStack_2c8 = 0;
                    uStack_2c0 = 0;
                    uStack_2d0 = 0;
                    init_wait_entry(&uStack_2d0,0);
                    iVar13 = 0x9c4;
                    while( true ) {
                        prepare_to_wait_event(iVar7 + 0x168,&uStack_2d0,2);
                        uVar11 = **(iVar7 + 0x118) - **(iVar7 + 0x120);
                        if (**(iVar7 + 0x118) < **(iVar7 + 0x120) || uVar11 == 0) {
                            uVar12 = *(iVar7 + 0x138);
                            uVar11 = uVar11 + uVar12;
                        }
                        else {
                            uVar12 = *(iVar7 + 0x138);
                        }
                        uVar2 = 0;
                        if (7 < uVar11) {
                            uVar2 = uVar11 - 8;
                        }
                        if (uVar12 < uVar2) {
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x800,0x8001b9c);
                            (*pcVar4)();
                        }
                        if (iVar13 == 0 && uVar2 != 0) {
                            iVar13 = 1;
                        }
                        if (uVar2 != 0 || iVar13 == 0) break;
                        iVar13 = schedule_timeout();
                    }
                    finish_wait(iVar7 + 0x168,&uStack_2d0);
                }
            }
            if (uVar15 <= uVar1) {
                uVar1 = uVar15;
            }
            if (*(iVar9 + 0x74) == 0) {
                uVar3 = uVar10 - uVar12;
                if (uVar10 < uVar12) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d74);
                    (*pcVar4)();
                }
                uVar14 = uVar1;
                uVar10 = uVar14;
                if (uVar3 <= uVar14) {
                    uVar10 = uVar3;
                }
                iVar13 = *(iVar9 + 0xd8) + iVar16;
                if (uVar10 != 0) {
                    __memcpy_toio(*(iVar7 + 0x130) + uVar12,iVar13,uVar10);
                }
                if (uVar3 < uVar14) {
                    __memcpy_toio(*(iVar7 + 0x130),iVar13 + uVar10,uVar14 - uVar10);
                }
                uVar12 = *(iVar7 + 0x138);
                DataMemoryBarrier(2,2);
            }
            else {
                memset(&uStack_2d0,0,0x240);
                sg_init_table(&uStack_2d0,*(*(iVar9 + 0xd0) + *(iVar9 + 0xcc) + 2) + 1);
                iVar5 = skb_to_sgvec(iVar9,&uStack_2d0,0,*(iVar9 + 0x70));
                if (iVar5 < 0) {
                    _printk(0x800046a,"qrtr_gunyah_send",iVar5);
                    break;
                }
                uVar2 = **(iVar7 + 0x120);
                uVar10 = uVar2;
                uVar12 = *(iVar7 + 0x138) - uVar10;
                if (*(iVar7 + 0x138) < uVar10) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d6c);
                    (*pcVar4)();
                }
                uVar14 = uVar1;
                uVar3 = uVar14;
                if (uVar12 <= uVar14) {
                    uVar3 = uVar12;
                }
                if (uVar3 != 0) {
                    uVar8 = sg_nents(&uStack_2d0);
                    sym.gunyah_sg_copy_toio(&uStack_2d0,uVar8 & 0xffffffff,*(iVar7 + 0x130) + uVar10,uVar3);
                }
                if (uVar12 < uVar14) {
                    uVar12 = sg_nents(&uStack_2d0);
                    sym.gunyah_sg_copy_toio(&uStack_2d0,uVar12 & 0xffffffff,*(iVar7 + 0x130),uVar14 - uVar3);
                }
                uVar12 = *(iVar7 + 0x138);
                DataMemoryBarrier(2,2);
            }
            iVar5 = 0;
            if (uVar12 <= uVar2 + uVar1) {
                iVar5 = uVar12;
            }
            **(iVar7 + 0x120) = (uVar2 + uVar1) - iVar5;
            uVar15 = uVar15 - uVar1;
            uStack_2d0 = 1;
            iVar5 = gh_dbl_send(*(iVar7 + 0xd0),&uStack_2d0,0x100000000);
            if ((iVar5 != 0) &&
               (_dev_err(*(iVar7 + 0x10),"failed to raise doorbell %d\n",iVar5), *(iVar7 + 0xa8) == '\0')) {
                queue_work_on(0x20,_devm_kmalloc,iVar7 + 0xe0);
            }
            iVar16 = uVar1 + iVar16;
        } while (0 < uVar15);
    }
    **(iVar7 + 0x128) = 0;
    kfree_skb(iVar9);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_90) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.qrtr_gunyah_cb;
    uVar6 = sym.qrtr_gunyah_read(arg1);
    return uVar6;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qrtr_gunyah_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qrtr_gunyah_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qrtr_gunyah_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001178 (size 8) =====

ulong sym.qrtr_gunyah_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t arg1;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    int iVar14;
    ulong unaff_x30;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_70 = *(iVar11 + 0x5e0);
    uVar13 = *(param_2 + 0x70);
    if (0 < uVar13) {
        iVar14 = 0;
        do {
            while( true ) {
                uVar9 = **(param_1 + 0x118);
                uVar2 = **(param_1 + 0x120);
                uVar10 = uVar2;
                if (uVar2 < uVar9) {
                    uVar9 = uVar9 - uVar2;
                    uVar8 = *(param_1 + 0x138);
                }
                else {
                    uVar8 = *(param_1 + 0x138);
                    uVar9 = (uVar9 - uVar2) + uVar8;
                }
                uVar1 = 0;
                if (7 < uVar9) {
                    uVar1 = uVar9 - 8;
                }
                if (uVar8 < uVar1) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d5c);
                    (*pcVar4)();
                }
                if (8 < uVar9) break;
                **(param_1 + 0x128) = 1;
                uVar9 = **(param_1 + 0x118) - **(param_1 + 0x120);
                if (**(param_1 + 0x118) < **(param_1 + 0x120) || uVar9 == 0) {
                    uVar10 = *(param_1 + 0x138);
                    uVar9 = uVar9 + uVar10;
                }
                else {
                    uVar10 = *(param_1 + 0x138);
                }
                uVar2 = 0;
                if (7 < uVar9) {
                    uVar2 = uVar9 - 8;
                }
                if (uVar10 < uVar2) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d64);
                    (*pcVar4)();
                }
                if (uVar9 < 9) {
                    uStack_298 = 0;
                    uStack_290 = 0;
                    uStack_2a8 = 0;
                    uStack_2a0 = 0;
                    uStack_2b0 = 0;
                    init_wait_entry(&uStack_2b0,0);
                    iVar11 = 0x9c4;
                    while( true ) {
                        prepare_to_wait_event(param_1 + 0x168,&uStack_2b0,2);
                        uVar9 = **(param_1 + 0x118) - **(param_1 + 0x120);
                        if (**(param_1 + 0x118) < **(param_1 + 0x120) || uVar9 == 0) {
                            uVar10 = *(param_1 + 0x138);
                            uVar9 = uVar9 + uVar10;
                        }
                        else {
                            uVar10 = *(param_1 + 0x138);
                        }
                        uVar2 = 0;
                        if (7 < uVar9) {
                            uVar2 = uVar9 - 8;
                        }
                        if (uVar10 < uVar2) {
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x800,0x8001b9c);
                            (*pcVar4)();
                        }
                        if (iVar11 == 0 && uVar2 != 0) {
                            iVar11 = 1;
                        }
                        if (uVar2 != 0 || iVar11 == 0) break;
                        iVar11 = schedule_timeout();
                    }
                    finish_wait(param_1 + 0x168,&uStack_2b0);
                }
            }
            if (uVar13 <= uVar1) {
                uVar1 = uVar13;
            }
            if (*(param_2 + 0x74) == 0) {
                uVar3 = uVar8 - uVar10;
                if (uVar8 < uVar10) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d74);
                    (*pcVar4)();
                }
                uVar12 = uVar1;
                uVar8 = uVar12;
                if (uVar3 <= uVar12) {
                    uVar8 = uVar3;
                }
                iVar11 = *(param_2 + 0xd8) + iVar14;
                if (uVar8 != 0) {
                    __memcpy_toio(*(param_1 + 0x130) + uVar10,iVar11,uVar8);
                }
                if (uVar3 < uVar12) {
                    __memcpy_toio(*(param_1 + 0x130),iVar11 + uVar8,uVar12 - uVar8);
                }
                uVar10 = *(param_1 + 0x138);
                DataMemoryBarrier(2,2);
            }
            else {
                memset(&uStack_2b0,0,0x240);
                sg_init_table(&uStack_2b0,*(*(param_2 + 0xd0) + *(param_2 + 0xcc) + 2) + 1);
                iVar5 = skb_to_sgvec(param_2,&uStack_2b0,0,*(param_2 + 0x70));
                if (iVar5 < 0) {
                    _printk(0x800046a,"qrtr_gunyah_send",iVar5);
                    break;
                }
                uVar2 = **(param_1 + 0x120);
                uVar8 = uVar2;
                uVar10 = *(param_1 + 0x138) - uVar8;
                if (*(param_1 + 0x138) < uVar8) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d6c);
                    (*pcVar4)();
                }
                uVar12 = uVar1;
                uVar3 = uVar12;
                if (uVar10 <= uVar12) {
                    uVar3 = uVar10;
                }
                if (uVar3 != 0) {
                    uVar6 = sg_nents(&uStack_2b0);
                    sym.gunyah_sg_copy_toio(&uStack_2b0,uVar6 & 0xffffffff,*(param_1 + 0x130) + uVar8,uVar3);
                }
                if (uVar10 < uVar12) {
                    uVar10 = sg_nents(&uStack_2b0);
                    sym.gunyah_sg_copy_toio(&uStack_2b0,uVar10 & 0xffffffff,*(param_1 + 0x130),uVar12 - uVar3);
                }
                uVar10 = *(param_1 + 0x138);
                DataMemoryBarrier(2,2);
            }
            iVar5 = 0;
            if (uVar10 <= uVar2 + uVar1) {
                iVar5 = uVar10;
            }
            **(param_1 + 0x120) = (uVar2 + uVar1) - iVar5;
            uVar13 = uVar13 - uVar1;
            uStack_2b0 = 1;
            iVar5 = gh_dbl_send(*(param_1 + 0xd0),&uStack_2b0,0x100000000);
            if ((iVar5 != 0) &&
               (_dev_err(*(param_1 + 0x10),"failed to raise doorbell %d\n",iVar5), *(param_1 + 0xa8) == '\0')) {
                queue_work_on(0x20,_devm_kmalloc,param_1 + 0xe0);
            }
            iVar14 = uVar1 + iVar14;
        } while (0 < uVar13);
    }
    **(param_1 + 0x128) = 0;
    kfree_skb(param_2);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_70) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qrtr_gunyah_cb;
    uVar7 = sym.qrtr_gunyah_read(arg1);
    return uVar7;
}


// ===== sym.qrtr_gunyah_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.qrtr_gunyah_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint16_t *param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char cVar3;
    uint64_t uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t arg1;
    uint64_t uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    int64_t iStack_c0;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    ulong uStack_50;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    uint16_t auStack_30 [2];
    uint16_t auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_28 = *(iVar14 + 0x5e0);
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    if ((param_2 != 0x56100008) || ((param_3[2] != '\v' && (param_3[2] != '\x02')))) goto code_r0x0800195c;
    iVar14 = param_1 + -0xb0;
    iVar6 = gh_rm_get_vmid(*(param_1 + -4),auStack_2c);
    if ((iVar6 != 0) || ((iVar6 = gh_rm_get_vmid(1,auStack_30), iVar6 != 0 || (auStack_2c[0] != *param_3))))
    goto code_r0x0800195c;
    cVar3 = param_3[2];
    if (cVar3 == '\x02') {
        sym.qrtr_gunyah_fifo_init(iVar14);
        iVar6 = qrtr_endpoint_register(iVar14,1,0,0);
        if (iVar6 == 0) {
            iVar6 = sym.qrtr_gunyah_share_mem(iVar14,auStack_30[0],auStack_2c[0]);
            if (iVar6 == 0) {
                cVar3 = param_3[2];
                goto code_r0x0800193c;
            }
            uVar9 = 0x80004be;
        }
        else {
            uVar9 = 0x8000240;
        }
        _printk(uVar9,"qrtr_gunyah_rm_cb","qrtr_gunyah_rm_cb");
    }
    else {
code_r0x0800193c:
        if (cVar3 == '\v') {
            qrtr_endpoint_unregister(iVar14);
            sym.qrtr_gunyah_unshare_mem(iVar14,auStack_30[0],auStack_2c[0]);
        }
    }
code_r0x0800195c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_28) {
        return 0;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_gunyah_retry_work;
    pcStack_38 = sym.qrtr_gunyah_retry_work;
    iVar14 = sp_el0;
    iStack_48 = *(iVar14 + 0x5e0);
    uStack_50 = 1;
    puStack_40 = &stack0xffffffffffffffe0;
    uVar9 = gh_dbl_send(*(iVar8 + -0x10),&uStack_50,0);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_48) {
        return uVar9;
    }
    auVar18 = __stack_chk_fail();
    iVar11 = auVar18._8_8_;
    iVar8 = auVar18._0_8_;
    *extraout_x18_00 = sym.qrtr_gunyah_send;
    pcStack_a8 = sym.qrtr_gunyah_send;
    iVar14 = sp_el0;
    iStack_c0 = *(iVar14 + 0x5e0);
    uVar17 = *(iVar11 + 0x70);
    ppuStack_b0 = &puStack_40;
    if (0 < uVar17) {
        iVar6 = 0;
        do {
            while( true ) {
                uVar13 = **(iVar8 + 0x118);
                uVar2 = **(iVar8 + 0x120);
                uVar15 = uVar2;
                if (uVar2 < uVar13) {
                    uVar13 = uVar13 - uVar2;
                    uVar12 = *(iVar8 + 0x138);
                }
                else {
                    uVar12 = *(iVar8 + 0x138);
                    uVar13 = (uVar13 - uVar2) + uVar12;
                }
                uVar1 = 0;
                if (7 < uVar13) {
                    uVar1 = uVar13 - 8;
                }
                if (uVar12 < uVar1) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8001d5c);
                    (*pcVar5)();
                }
                if (8 < uVar13) break;
                **(iVar8 + 0x128) = 1;
                uVar13 = **(iVar8 + 0x118) - **(iVar8 + 0x120);
                if (**(iVar8 + 0x118) < **(iVar8 + 0x120) || uVar13 == 0) {
                    uVar15 = *(iVar8 + 0x138);
                    uVar13 = uVar13 + uVar15;
                }
                else {
                    uVar15 = *(iVar8 + 0x138);
                }
                uVar2 = 0;
                if (7 < uVar13) {
                    uVar2 = uVar13 - 8;
                }
                if (uVar15 < uVar2) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8001d64);
                    (*pcVar5)();
                }
                if (uVar13 < 9) {
                    uStack_2e8 = 0;
                    uStack_2e0 = 0;
                    uStack_2f8 = 0;
                    uStack_2f0 = 0;
                    uStack_300 = 0;
                    init_wait_entry(&uStack_300,0);
                    iVar14 = 0x9c4;
                    while( true ) {
                        prepare_to_wait_event(iVar8 + 0x168,&uStack_300,2);
                        uVar13 = **(iVar8 + 0x118) - **(iVar8 + 0x120);
                        if (**(iVar8 + 0x118) < **(iVar8 + 0x120) || uVar13 == 0) {
                            uVar15 = *(iVar8 + 0x138);
                            uVar13 = uVar13 + uVar15;
                        }
                        else {
                            uVar15 = *(iVar8 + 0x138);
                        }
                        uVar2 = 0;
                        if (7 < uVar13) {
                            uVar2 = uVar13 - 8;
                        }
                        if (uVar15 < uVar2) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x800,0x8001b9c);
                            (*pcVar5)();
                        }
                        if (iVar14 == 0 && uVar2 != 0) {
                            iVar14 = 1;
                        }
                        if (uVar2 != 0 || iVar14 == 0) break;
                        iVar14 = schedule_timeout();
                    }
                    finish_wait(iVar8 + 0x168,&uStack_300);
                }
            }
            if (uVar17 <= uVar1) {
                uVar1 = uVar17;
            }
            if (*(iVar11 + 0x74) == 0) {
                uVar4 = uVar12 - uVar15;
                if (uVar12 < uVar15) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8001d74);
                    (*pcVar5)();
                }
                uVar16 = uVar1;
                uVar12 = uVar16;
                if (uVar4 <= uVar16) {
                    uVar12 = uVar4;
                }
                iVar14 = *(iVar11 + 0xd8) + iVar6;
                if (uVar12 != 0) {
                    __memcpy_toio(*(iVar8 + 0x130) + uVar15,iVar14,uVar12);
                }
                if (uVar4 < uVar16) {
                    __memcpy_toio(*(iVar8 + 0x130),iVar14 + uVar12,uVar16 - uVar12);
                }
                uVar15 = *(iVar8 + 0x138);
                DataMemoryBarrier(2,2);
            }
            else {
                memset(&uStack_300,0,0x240);
                sg_init_table(&uStack_300,*(*(iVar11 + 0xd0) + *(iVar11 + 0xcc) + 2) + 1);
                iVar7 = skb_to_sgvec(iVar11,&uStack_300,0,*(iVar11 + 0x70));
                if (iVar7 < 0) {
                    _printk(0x800046a,"qrtr_gunyah_send",iVar7);
                    break;
                }
                uVar2 = **(iVar8 + 0x120);
                uVar12 = uVar2;
                uVar15 = *(iVar8 + 0x138) - uVar12;
                if (*(iVar8 + 0x138) < uVar12) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8001d6c);
                    (*pcVar5)();
                }
                uVar16 = uVar1;
                uVar4 = uVar16;
                if (uVar15 <= uVar16) {
                    uVar4 = uVar15;
                }
                if (uVar4 != 0) {
                    uVar10 = sg_nents(&uStack_300);
                    sym.gunyah_sg_copy_toio(&uStack_300,uVar10 & 0xffffffff,*(iVar8 + 0x130) + uVar12,uVar4);
                }
                if (uVar15 < uVar16) {
                    uVar15 = sg_nents(&uStack_300);
                    sym.gunyah_sg_copy_toio(&uStack_300,uVar15 & 0xffffffff,*(iVar8 + 0x130),uVar16 - uVar4);
                }
                uVar15 = *(iVar8 + 0x138);
                DataMemoryBarrier(2,2);
            }
            iVar7 = 0;
            if (uVar15 <= uVar2 + uVar1) {
                iVar7 = uVar15;
            }
            **(iVar8 + 0x120) = (uVar2 + uVar1) - iVar7;
            uVar17 = uVar17 - uVar1;
            uStack_300 = 1;
            iVar7 = gh_dbl_send(*(iVar8 + 0xd0),&uStack_300,0x100000000);
            if ((iVar7 != 0) &&
               (_dev_err(*(iVar8 + 0x10),"failed to raise doorbell %d\n",iVar7), *(iVar8 + 0xa8) == '\0')) {
                queue_work_on(0x20,_devm_kmalloc,iVar8 + 0xe0);
            }
            iVar6 = uVar1 + iVar6;
        } while (0 < uVar17);
    }
    **(iVar8 + 0x128) = 0;
    kfree_skb(iVar11);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_c0) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.qrtr_gunyah_cb;
    uVar9 = sym.qrtr_gunyah_read(arg1);
    return uVar9;
}


// ===== sym.qrtr_gunyah_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

void sym.qrtr_gunyah_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qrtr_gunyah_read(param_2);
    return;
}


// ===== sym.qrtr_gunyah_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001190 (size 8) =====

uint64_t sym.qrtr_gunyah_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint *puVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint *puVar11;
    uint *puVar12;
    uint64_t uVar13;
    uint *puVar14;
    uint *puVar15;
    uint *puVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x19;
    ulong uVar18;
    int64_t iVar19;
    ulong unaff_x30;
    uint16_t auStack_a8 [2];
    uint16_t auStack_a4 [2];
    uint32_t uStack_a0;
    uint32_t uStack_9c;
    ulong uStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong *puStack_70;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_58 = *(iVar19 + 0x5e0);
    uVar18 = *(param_1 + 0x300);
    puVar6 = devm_kmalloc(iVar7,0x180,0xdc0);
    if (puVar6 != NULL) {
        puVar6[2] = iVar7;
        *(param_1 + 0xa8) = puVar6;
        iVar7 = devm_kmalloc(iVar7,0x10000,0xdc0);
        puVar6[3] = iVar7;
        unaff_x19 = puVar6;
        if (iVar7 != 0) {
            *(puVar6 + 0x22) = 0;
            uVar4 = of_property_read_variable_u32_array(uVar18,"gunyah-label",puVar6 + 0x19,1,0);
            if (uVar4 < 0) {
                puVar8 = uVar4;
                _dev_err(puVar6[2],"failed to read label info %d\n",puVar8);
                goto code_r0x08001588;
            }
            iVar7 = of_find_property(uVar18,"qcom,master",0);
            iVar19 = puVar6[2];
            *(puVar6 + 0x15) = iVar7 != 0;
            if (iVar7 == 0) {
                iStack_5c = 0;
                for (iVar7 = of_find_compatible_node(0,0,"qcom,qrtr-gunyah-gen"); iVar7 != 0;
                    iVar7 = of_find_compatible_node(iVar7,0,"qcom,qrtr-gunyah-gen")) {
                    iVar5 = of_property_read_variable_u32_array(iVar7,"qcom,label",&iStack_5c,1,0);
                    if ((-1 < iVar5) && (iStack_5c == *(puVar6 + 0x19))) {
                        iVar7 = of_parse_phandle(iVar7,"memory-region",0);
                        if (iVar7 != 0) goto code_r0x0800134c;
                        _dev_err(puVar6[2],"cant parse svm shared mem node!\n");
                        break;
                    }
                }
                pcVar10 = "cant parse shared mem node!\n";
code_r0x0800165c:
                _dev_err(iVar19,pcVar10);
                puVar8 = 0xffffffea;
                goto code_r0x08001588;
            }
            iVar7 = of_parse_phandle(*(iVar19 + 0x2f0),"shared-buffer",0);
            if (iVar7 == 0) {
                puVar8 = dma_alloc_attrs(puVar6[2],0x9000,puVar6 + 6,0xcc0,0x40);
                puVar6[0x13] = puVar8;
                if (puVar8 == NULL) goto code_r0x080012b8;
                iVar7 = 0x9000;
                puVar6[7] = puVar6[6] + 0x8fff;
code_r0x08001388:
                puVar6[0x14] = iVar7;
            }
            else {
code_r0x0800134c:
                iVar5 = of_address_to_resource(iVar7,0,puVar6 + 6);
                if (iVar5 != 0) {
                    pcVar10 = "of_address_to_resource failed!\n";
                    goto code_r0x0800165c;
                }
                iVar7 = puVar6[6];
                iVar17 = puVar6[7];
                puVar8 = devm_ioremap_resource(iVar19,puVar6 + 6);
                puVar6[0x13] = puVar8;
                if (puVar8 < 0xfffffffffffff001) {
                    iVar7 = (iVar17 - iVar7) + 1;
                    goto code_r0x08001388;
                }
                _dev_err(iVar19,"ioremap failed!\n");
                puVar8 = puVar6[0x13];
                if (puVar8 != 0) goto code_r0x08001588;
            }
            if (*(puVar6 + 0x15) == '\0') {
                *puVar8 = 0x24495043;
                if (*(puVar6 + 0x15) == '\0') {
                    puVar16 = puVar8 + 3;
                    puVar11 = puVar8 + 4;
                    puVar12 = puVar8 + 6;
                    puVar14 = puVar8 + 1;
                    puVar15 = puVar8 + 2;
                    iVar7 = puVar6[0x13] + 0x5000;
                    iVar19 = puVar6[0x13] + 0x1000;
                    iVar17 = 5;
                }
                else {
                    puVar16 = puVar8 + 1;
                    puVar11 = puVar8 + 2;
                    puVar12 = puVar8 + 5;
                    puVar14 = puVar8 + 3;
                    puVar15 = puVar8 + 4;
                    iVar7 = puVar6[0x13] + 0x1000;
                    iVar19 = puVar6[0x13] + 0x5000;
                    iVar17 = 6;
                }
                puVar6[0x23] = puVar16;
                puVar6[0x24] = puVar11;
                puVar6[0x25] = puVar12;
                puVar6[0x26] = iVar7;
                puVar6[0x27] = 0x4000;
                puVar6[0x28] = puVar14;
                puVar6[0x2b] = iVar19;
                puVar6[0x2c] = 0x4000;
                puVar6[0x29] = puVar15;
                puVar6[0x2a] = puVar8 + iVar17;
                *puVar11 = 0;
                *puVar6[0x25] = 0;
                *puVar6[0x28] = 0;
            }
            __init_waitqueue_head(puVar6 + 0x2d,"&qdev->tx_avail_notify",obj.qrtr_gunyah_probe.__key);
            if (*(puVar6 + 0x15) != '\0') {
                iVar5 = of_property_read_variable_u32_array(uVar18,"peer-name",puVar6 + 0xac,1,0);
                if (iVar5 < 0) {
                    *(puVar6 + 0xac) = 0;
                }
                puVar6[0x16] = sym.qrtr_gunyah_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                *(puVar6 + 0x18) = 0x7fffffff;
                gh_rm_register_notifier();
            }
            uVar1 = *(puVar6 + 0x19);
            uVar9 = gh_dbl_tx_register(uVar1);
            puVar6[0x1a] = uVar9;
            if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
                _dev_err(puVar6[2],"failed to get gunyah tx dbl %d\n",uVar9 & 0xffffffff);
                puVar8 = uVar9 & 0xffffffff;
                goto code_r0x08001588;
            }
            puVar6[0x1c] = 0xfffffffe0;
            puVar6[0x1d] = puVar6 + 0x1d;
            puVar6[0x1e] = puVar6 + 0x1d;
            puVar6[0x1f] = sym.qrtr_gunyah_retry_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            *puVar6 = sym.qrtr_gunyah_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            if (*(puVar6 + 0x15) == '\0') {
                uVar13 = qrtr_endpoint_register(puVar6,1,0,0);
                uVar9 = uVar13 & 0xffffffff;
                if (uVar13 == 0) goto code_r0x080014e0;
            }
            else {
code_r0x080014e0:
                uVar9 = gh_dbl_rx_register(uVar1,sym.qrtr_gunyah_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,puVar6);
                puVar6[0x1b] = uVar9;
                if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
                    if (*(puVar6 + 0x15) == '\0') {
                        uVar4 = *puVar6[0x28];
                        uVar2 = *puVar6[0x29];
                        if (uVar2 < uVar4) {
                            uVar13 = puVar6[0x2c];
                            uVar9 = (uVar2 - uVar4) + uVar13;
                        }
                        else {
                            uVar9 = uVar2 - uVar4;
                            uVar13 = puVar6[0x2c];
                        }
                        if (uVar13 < uVar9) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x800,0x8001674);
                            (*pcVar3)();
                        }
                        if (uVar9 != 0) {
                            sym.qrtr_gunyah_read(puVar6);
                        }
                    }
                    puVar8 = NULL;
                    goto code_r0x08001588;
                }
                _dev_err(puVar6[2],"failed to get gunyah rx dbl %d\n",uVar9 & 0xffffffff);
                qrtr_endpoint_unregister(puVar6);
            }
            cancel_work_sync(puVar6 + 0x1c);
            gh_dbl_tx_unregister(puVar6[0x1a]);
            puVar8 = uVar9 & 0xffffffff;
            goto code_r0x08001588;
        }
    }
code_r0x080012b8:
    puVar8 = 0xfffffff4;
    puVar6 = unaff_x19;
code_r0x08001588:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return puVar8 & 0xffffffff;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_gunyah_remove;
    pcStack_78 = sym.qrtr_gunyah_remove;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar19 + 0xa8);
    auStack_a4[0] = 0;
    auStack_a8[0] = 0;
    puStack_80 = &stack0xffffffffffffffb0;
    puStack_70 = puVar6;
    cancel_work_sync(iVar7 + 0xe0);
    gh_dbl_tx_unregister(*(iVar7 + 0xd0));
    gh_dbl_rx_unregister(*(iVar7 + 0xd8));
    if (((*(iVar7 + 0xa8) != '\0') && (iVar5 = gh_rm_get_vmid(*(iVar7 + 0xac),auStack_a4), iVar5 == 0)) &&
       (iVar5 = gh_rm_get_vmid(1,auStack_a8), iVar5 == 0)) {
        uStack_98 = 7;
        uStack_a0 = auStack_a8[0];
        uStack_9c = auStack_a4[0];
        uStack_8c = uStack_a0;
        iVar5 = gh_rm_mem_reclaim(*(iVar7 + 0x90),0);
        if (iVar5 != 0) {
            _printk(0x800049d,"qrtr_gunyah_unshare_mem","qrtr_gunyah_unshare_mem");
        }
        hyp_assign_phys(*(iVar7 + 0x30),(*(iVar7 + 0x38) - *(iVar7 + 0x30)) + 1,&uStack_a0,2,&uStack_8c,&uStack_98
                        ,1);
        iVar19 = of_parse_phandle(*(*(iVar7 + 0x10) + 0x2f0),"shared-buffer",0);
        if (iVar19 == 0) {
            dma_free_attrs(*(iVar7 + 0x10),*(iVar7 + 0xa0),*(iVar7 + 0x98),*(iVar7 + 0x30),0x40);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_88) {
        return 0;
    }
    uVar9 = __stack_chk_fail();
    if (*(uVar9 + 0xa8) != '\0') {
        puVar6 = *(uVar9 + 0x98);
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
    }
    puVar8 = *(uVar9 + 0x98);
    *puVar8 = 0x24495043;
    if (*(uVar9 + 0xa8) == '\0') {
        puVar16 = puVar8 + 3;
        puVar11 = puVar8 + 4;
        puVar12 = puVar8 + 6;
        puVar14 = puVar8 + 1;
        puVar15 = puVar8 + 2;
        iVar7 = *(uVar9 + 0x98) + 0x5000;
        iVar19 = *(uVar9 + 0x98) + 0x1000;
        iVar17 = 5;
    }
    else {
        puVar16 = puVar8 + 1;
        puVar11 = puVar8 + 2;
        puVar12 = puVar8 + 5;
        puVar14 = puVar8 + 3;
        puVar15 = puVar8 + 4;
        iVar7 = *(uVar9 + 0x98) + 0x1000;
        iVar19 = *(uVar9 + 0x98) + 0x5000;
        iVar17 = 6;
    }
    *(uVar9 + 0x118) = puVar16;
    *(uVar9 + 0x120) = puVar11;
    *(uVar9 + 0x128) = puVar12;
    *(uVar9 + 0x130) = iVar7;
    *(uVar9 + 0x138) = 0x4000;
    *(uVar9 + 0x140) = puVar14;
    *(uVar9 + 0x158) = iVar19;
    *(uVar9 + 0x160) = 0x4000;
    *(uVar9 + 0x148) = puVar15;
    *(uVar9 + 0x150) = puVar8 + iVar17;
    *puVar11 = 0;
    **(uVar9 + 0x128) = 0;
    **(uVar9 + 0x140) = 0;
    return uVar9;
}


// ===== sym.qrtr_gunyah_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

int64_t sym.qrtr_gunyah_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint *puVar4;
    uint *puVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    uint *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    int64_t iVar12;
    ulong unaff_x30;
    uint16_t auStack_48 [2];
    uint16_t auStack_44 [2];
    uint32_t uStack_40;
    uint32_t uStack_3c;
    ulong uStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_28 = *(iVar12 + 0x5e0);
    iVar12 = *(param_1 + 0xa8);
    auStack_44[0] = 0;
    auStack_48[0] = 0;
    cancel_work_sync(iVar12 + 0xe0);
    gh_dbl_tx_unregister(*(iVar12 + 0xd0));
    gh_dbl_rx_unregister(*(iVar12 + 0xd8));
    if (((*(iVar12 + 0xa8) != '\0') && (iVar1 = gh_rm_get_vmid(*(iVar12 + 0xac),auStack_44), iVar1 == 0)) &&
       (iVar1 = gh_rm_get_vmid(1,auStack_48), iVar1 == 0)) {
        uStack_38 = 7;
        uStack_40 = auStack_48[0];
        uStack_3c = auStack_44[0];
        uStack_2c = uStack_40;
        iVar1 = gh_rm_mem_reclaim(*(iVar12 + 0x90),0);
        if (iVar1 != 0) {
            _printk(0x800049d,"qrtr_gunyah_unshare_mem","qrtr_gunyah_unshare_mem");
        }
        hyp_assign_phys(*(iVar12 + 0x30),(*(iVar12 + 0x38) - *(iVar12 + 0x30)) + 1,&uStack_40,2,&uStack_2c,
                        &uStack_38,1);
        iVar2 = of_parse_phandle(*(*(iVar12 + 0x10) + 0x2f0),"shared-buffer",0);
        if (iVar2 == 0) {
            dma_free_attrs(*(iVar12 + 0x10),*(iVar12 + 0xa0),*(iVar12 + 0x98),*(iVar12 + 0x30),0x40);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_28) {
        return 0;
    }
    iVar12 = __stack_chk_fail();
    if (*(iVar12 + 0xa8) != '\0') {
        puVar3 = *(iVar12 + 0x98);
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
    }
    puVar4 = *(iVar12 + 0x98);
    *puVar4 = 0x24495043;
    if (*(iVar12 + 0xa8) == '\0') {
        puVar7 = puVar4 + 3;
        puVar5 = puVar4 + 4;
        puVar6 = puVar4 + 6;
        puVar8 = puVar4 + 1;
        puVar9 = puVar4 + 2;
        iVar2 = *(iVar12 + 0x98) + 0x5000;
        iVar10 = *(iVar12 + 0x98) + 0x1000;
        iVar11 = 5;
    }
    else {
        puVar7 = puVar4 + 1;
        puVar5 = puVar4 + 2;
        puVar6 = puVar4 + 5;
        puVar8 = puVar4 + 3;
        puVar9 = puVar4 + 4;
        iVar2 = *(iVar12 + 0x98) + 0x1000;
        iVar10 = *(iVar12 + 0x98) + 0x5000;
        iVar11 = 6;
    }
    *(iVar12 + 0x118) = puVar7;
    *(iVar12 + 0x120) = puVar5;
    *(iVar12 + 0x128) = puVar6;
    *(iVar12 + 0x130) = iVar2;
    *(iVar12 + 0x138) = 0x4000;
    *(iVar12 + 0x140) = puVar8;
    *(iVar12 + 0x158) = iVar10;
    *(iVar12 + 0x160) = 0x4000;
    *(iVar12 + 0x148) = puVar9;
    *(iVar12 + 0x150) = puVar4 + iVar11;
    *puVar5 = 0;
    **(iVar12 + 0x128) = 0;
    **(iVar12 + 0x140) = 0;
    return iVar12;
}


// ===== sym.qrtr_gunyah_probe @ 0x080011a0 (size 1244) =====

uint64_t sym.qrtr_gunyah_probe(int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint *puVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint *puVar11;
    uint *puVar12;
    uint64_t uVar13;
    uint *puVar14;
    uint *puVar15;
    uint *puVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x19;
    ulong uVar18;
    int64_t iVar19;
    ulong unaff_x30;
    uint16_t auStack_a8 [2];
    uint16_t auStack_a4 [2];
    uint32_t uStack_a0;
    uint32_t uStack_9c;
    ulong uStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong *puStack_70;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_58 = *(iVar19 + 0x5e0);
    uVar18 = *(arg1 + 0x300);
    puVar6 = devm_kmalloc(iVar7,0x180,0xdc0);
    if (puVar6 != NULL) {
        puVar6[2] = iVar7;
        *(arg1 + 0xa8) = puVar6;
        iVar7 = devm_kmalloc(iVar7,0x10000,0xdc0);
        puVar6[3] = iVar7;
        unaff_x19 = puVar6;
        if (iVar7 != 0) {
            *(puVar6 + 0x22) = 0;
            uVar4 = of_property_read_variable_u32_array(uVar18,"gunyah-label",puVar6 + 0x19,1,0);
            if (uVar4 < 0) {
                puVar8 = uVar4;
                _dev_err(puVar6[2],"failed to read label info %d\n",puVar8);
                goto code_r0x08001588;
            }
            iVar7 = of_find_property(uVar18,"qcom,master",0);
            iVar19 = puVar6[2];
            *(puVar6 + 0x15) = iVar7 != 0;
            if (iVar7 == 0) {
                iStack_5c = 0;
                for (iVar7 = of_find_compatible_node(0,0,"qcom,qrtr-gunyah-gen"); iVar7 != 0;
                    iVar7 = of_find_compatible_node(iVar7,0,"qcom,qrtr-gunyah-gen")) {
                    iVar5 = of_property_read_variable_u32_array(iVar7,"qcom,label",&iStack_5c,1,0);
                    if ((-1 < iVar5) && (iStack_5c == *(puVar6 + 0x19))) {
                        iVar7 = of_parse_phandle(iVar7,"memory-region",0);
                        if (iVar7 != 0) goto code_r0x0800134c;
                        _dev_err(puVar6[2],"cant parse svm shared mem node!\n");
                        break;
                    }
                }
                pcVar10 = "cant parse shared mem node!\n";
code_r0x0800165c:
                _dev_err(iVar19,pcVar10);
                puVar8 = 0xffffffea;
                goto code_r0x08001588;
            }
            iVar7 = of_parse_phandle(*(iVar19 + 0x2f0),"shared-buffer",0);
            if (iVar7 == 0) {
                puVar8 = dma_alloc_attrs(puVar6[2],0x9000,puVar6 + 6,0xcc0,0x40);
                puVar6[0x13] = puVar8;
                if (puVar8 == NULL) goto code_r0x080012b8;
                iVar7 = 0x9000;
                puVar6[7] = puVar6[6] + 0x8fff;
code_r0x08001388:
                puVar6[0x14] = iVar7;
            }
            else {
code_r0x0800134c:
                iVar5 = of_address_to_resource(iVar7,0,puVar6 + 6);
                if (iVar5 != 0) {
                    pcVar10 = "of_address_to_resource failed!\n";
                    goto code_r0x0800165c;
                }
                iVar7 = puVar6[6];
                iVar17 = puVar6[7];
                puVar8 = devm_ioremap_resource(iVar19,puVar6 + 6);
                puVar6[0x13] = puVar8;
                if (puVar8 < 0xfffffffffffff001) {
                    iVar7 = (iVar17 - iVar7) + 1;
                    goto code_r0x08001388;
                }
                _dev_err(iVar19,"ioremap failed!\n");
                puVar8 = puVar6[0x13];
                if (puVar8 != 0) goto code_r0x08001588;
            }
            if (*(puVar6 + 0x15) == '\0') {
                *puVar8 = 0x24495043;
                if (*(puVar6 + 0x15) == '\0') {
                    puVar16 = puVar8 + 3;
                    puVar11 = puVar8 + 4;
                    puVar12 = puVar8 + 6;
                    puVar14 = puVar8 + 1;
                    puVar15 = puVar8 + 2;
                    iVar7 = puVar6[0x13] + 0x5000;
                    iVar19 = puVar6[0x13] + 0x1000;
                    iVar17 = 5;
                }
                else {
                    puVar16 = puVar8 + 1;
                    puVar11 = puVar8 + 2;
                    puVar12 = puVar8 + 5;
                    puVar14 = puVar8 + 3;
                    puVar15 = puVar8 + 4;
                    iVar7 = puVar6[0x13] + 0x1000;
                    iVar19 = puVar6[0x13] + 0x5000;
                    iVar17 = 6;
                }
                puVar6[0x23] = puVar16;
                puVar6[0x24] = puVar11;
                puVar6[0x25] = puVar12;
                puVar6[0x26] = iVar7;
                puVar6[0x27] = 0x4000;
                puVar6[0x28] = puVar14;
                puVar6[0x2b] = iVar19;
                puVar6[0x2c] = 0x4000;
                puVar6[0x29] = puVar15;
                puVar6[0x2a] = puVar8 + iVar17;
                *puVar11 = 0;
                *puVar6[0x25] = 0;
                *puVar6[0x28] = 0;
            }
            __init_waitqueue_head(puVar6 + 0x2d,"&qdev->tx_avail_notify",obj.qrtr_gunyah_probe.__key);
            if (*(puVar6 + 0x15) != '\0') {
                iVar5 = of_property_read_variable_u32_array(uVar18,"peer-name",puVar6 + 0xac,1,0);
                if (iVar5 < 0) {
                    *(puVar6 + 0xac) = 0;
                }
                puVar6[0x16] = sym.qrtr_gunyah_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                *(puVar6 + 0x18) = 0x7fffffff;
                gh_rm_register_notifier();
            }
            uVar1 = *(puVar6 + 0x19);
            uVar9 = gh_dbl_tx_register(uVar1);
            puVar6[0x1a] = uVar9;
            if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
                _dev_err(puVar6[2],"failed to get gunyah tx dbl %d\n",uVar9 & 0xffffffff);
                puVar8 = uVar9 & 0xffffffff;
                goto code_r0x08001588;
            }
            puVar6[0x1c] = 0xfffffffe0;
            puVar6[0x1d] = puVar6 + 0x1d;
            puVar6[0x1e] = puVar6 + 0x1d;
            puVar6[0x1f] = sym.qrtr_gunyah_retry_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            *puVar6 = sym.qrtr_gunyah_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            if (*(puVar6 + 0x15) == '\0') {
                uVar13 = qrtr_endpoint_register(puVar6,1,0,0);
                uVar9 = uVar13 & 0xffffffff;
                if (uVar13 == 0) goto code_r0x080014e0;
            }
            else {
code_r0x080014e0:
                uVar9 = gh_dbl_rx_register(uVar1,sym.qrtr_gunyah_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,puVar6);
                puVar6[0x1b] = uVar9;
                if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
                    if (*(puVar6 + 0x15) == '\0') {
                        uVar4 = *puVar6[0x28];
                        uVar2 = *puVar6[0x29];
                        if (uVar2 < uVar4) {
                            uVar13 = puVar6[0x2c];
                            uVar9 = (uVar2 - uVar4) + uVar13;
                        }
                        else {
                            uVar9 = uVar2 - uVar4;
                            uVar13 = puVar6[0x2c];
                        }
                        if (uVar13 < uVar9) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x800,0x8001674);
                            (*pcVar3)();
                        }
                        if (uVar9 != 0) {
                            sym.qrtr_gunyah_read(puVar6);
                        }
                    }
                    puVar8 = NULL;
                    goto code_r0x08001588;
                }
                _dev_err(puVar6[2],"failed to get gunyah rx dbl %d\n",uVar9 & 0xffffffff);
                qrtr_endpoint_unregister(puVar6);
            }
            cancel_work_sync(puVar6 + 0x1c);
            gh_dbl_tx_unregister(puVar6[0x1a]);
            puVar8 = uVar9 & 0xffffffff;
            goto code_r0x08001588;
        }
    }
code_r0x080012b8:
    puVar8 = 0xfffffff4;
    puVar6 = unaff_x19;
code_r0x08001588:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return puVar8 & 0xffffffff;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_gunyah_remove;
    pcStack_78 = sym.qrtr_gunyah_remove;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar19 + 0xa8);
    auStack_a4[0] = 0;
    auStack_a8[0] = 0;
    puStack_80 = &stack0xffffffffffffffb0;
    puStack_70 = puVar6;
    cancel_work_sync(iVar7 + 0xe0);
    gh_dbl_tx_unregister(*(iVar7 + 0xd0));
    gh_dbl_rx_unregister(*(iVar7 + 0xd8));
    if (((*(iVar7 + 0xa8) != '\0') && (iVar5 = gh_rm_get_vmid(*(iVar7 + 0xac),auStack_a4), iVar5 == 0)) &&
       (iVar5 = gh_rm_get_vmid(1,auStack_a8), iVar5 == 0)) {
        uStack_98 = 7;
        uStack_a0 = auStack_a8[0];
        uStack_9c = auStack_a4[0];
        uStack_8c = uStack_a0;
        iVar5 = gh_rm_mem_reclaim(*(iVar7 + 0x90),0);
        if (iVar5 != 0) {
            _printk(0x800049d,"qrtr_gunyah_unshare_mem","qrtr_gunyah_unshare_mem");
        }
        hyp_assign_phys(*(iVar7 + 0x30),(*(iVar7 + 0x38) - *(iVar7 + 0x30)) + 1,&uStack_a0,2,&uStack_8c,&uStack_98
                        ,1);
        iVar19 = of_parse_phandle(*(*(iVar7 + 0x10) + 0x2f0),"shared-buffer",0);
        if (iVar19 == 0) {
            dma_free_attrs(*(iVar7 + 0x10),*(iVar7 + 0xa0),*(iVar7 + 0x98),*(iVar7 + 0x30),0x40);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_88) {
        return 0;
    }
    uVar9 = __stack_chk_fail();
    if (*(uVar9 + 0xa8) != '\0') {
        puVar6 = *(uVar9 + 0x98);
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
    }
    puVar8 = *(uVar9 + 0x98);
    *puVar8 = 0x24495043;
    if (*(uVar9 + 0xa8) == '\0') {
        puVar16 = puVar8 + 3;
        puVar11 = puVar8 + 4;
        puVar12 = puVar8 + 6;
        puVar14 = puVar8 + 1;
        puVar15 = puVar8 + 2;
        iVar7 = *(uVar9 + 0x98) + 0x5000;
        iVar19 = *(uVar9 + 0x98) + 0x1000;
        iVar17 = 5;
    }
    else {
        puVar16 = puVar8 + 1;
        puVar11 = puVar8 + 2;
        puVar12 = puVar8 + 5;
        puVar14 = puVar8 + 3;
        puVar15 = puVar8 + 4;
        iVar7 = *(uVar9 + 0x98) + 0x1000;
        iVar19 = *(uVar9 + 0x98) + 0x5000;
        iVar17 = 6;
    }
    *(uVar9 + 0x118) = puVar16;
    *(uVar9 + 0x120) = puVar11;
    *(uVar9 + 0x128) = puVar12;
    *(uVar9 + 0x130) = iVar7;
    *(uVar9 + 0x138) = 0x4000;
    *(uVar9 + 0x140) = puVar14;
    *(uVar9 + 0x158) = iVar19;
    *(uVar9 + 0x160) = 0x4000;
    *(uVar9 + 0x148) = puVar15;
    *(uVar9 + 0x150) = puVar8 + iVar17;
    *puVar11 = 0;
    **(uVar9 + 0x128) = 0;
    **(uVar9 + 0x140) = 0;
    return uVar9;
}


// ===== sym.qrtr_gunyah_remove @ 0x0800167c (size 316) =====

int64_t sym.qrtr_gunyah_remove(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint *puVar4;
    uint *puVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    uint *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    int64_t iVar12;
    ulong unaff_x30;
    uint16_t auStack_48 [2];
    uint16_t auStack_44 [2];
    uint32_t uStack_40;
    uint32_t uStack_3c;
    ulong uStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_28 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1 + 0xa8);
    auStack_44[0] = 0;
    auStack_48[0] = 0;
    cancel_work_sync(iVar12 + 0xe0);
    gh_dbl_tx_unregister(*(iVar12 + 0xd0));
    gh_dbl_rx_unregister(*(iVar12 + 0xd8));
    if (((*(iVar12 + 0xa8) != '\0') && (iVar1 = gh_rm_get_vmid(*(iVar12 + 0xac),auStack_44), iVar1 == 0)) &&
       (iVar1 = gh_rm_get_vmid(1,auStack_48), iVar1 == 0)) {
        uStack_38 = 7;
        uStack_40 = auStack_48[0];
        uStack_3c = auStack_44[0];
        uStack_2c = uStack_40;
        iVar1 = gh_rm_mem_reclaim(*(iVar12 + 0x90),0);
        if (iVar1 != 0) {
            _printk(0x800049d,"qrtr_gunyah_unshare_mem","qrtr_gunyah_unshare_mem");
        }
        hyp_assign_phys(*(iVar12 + 0x30),(*(iVar12 + 0x38) - *(iVar12 + 0x30)) + 1,&uStack_40,2,&uStack_2c,
                        &uStack_38,1);
        iVar2 = of_parse_phandle(*(*(iVar12 + 0x10) + 0x2f0),"shared-buffer",0);
        if (iVar2 == 0) {
            dma_free_attrs(*(iVar12 + 0x10),*(iVar12 + 0xa0),*(iVar12 + 0x98),*(iVar12 + 0x30),0x40);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_28) {
        return 0;
    }
    iVar12 = __stack_chk_fail();
    if (*(iVar12 + 0xa8) != '\0') {
        puVar3 = *(iVar12 + 0x98);
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
    }
    puVar4 = *(iVar12 + 0x98);
    *puVar4 = 0x24495043;
    if (*(iVar12 + 0xa8) == '\0') {
        puVar7 = puVar4 + 3;
        puVar5 = puVar4 + 4;
        puVar6 = puVar4 + 6;
        puVar8 = puVar4 + 1;
        puVar9 = puVar4 + 2;
        iVar2 = *(iVar12 + 0x98) + 0x5000;
        iVar10 = *(iVar12 + 0x98) + 0x1000;
        iVar11 = 5;
    }
    else {
        puVar7 = puVar4 + 1;
        puVar5 = puVar4 + 2;
        puVar6 = puVar4 + 5;
        puVar8 = puVar4 + 3;
        puVar9 = puVar4 + 4;
        iVar2 = *(iVar12 + 0x98) + 0x1000;
        iVar10 = *(iVar12 + 0x98) + 0x5000;
        iVar11 = 6;
    }
    *(iVar12 + 0x118) = puVar7;
    *(iVar12 + 0x120) = puVar5;
    *(iVar12 + 0x128) = puVar6;
    *(iVar12 + 0x130) = iVar2;
    *(iVar12 + 0x138) = 0x4000;
    *(iVar12 + 0x140) = puVar8;
    *(iVar12 + 0x158) = iVar10;
    *(iVar12 + 0x160) = 0x4000;
    *(iVar12 + 0x148) = puVar9;
    *(iVar12 + 0x150) = puVar4 + iVar11;
    *puVar5 = 0;
    **(iVar12 + 0x128) = 0;
    **(iVar12 + 0x140) = 0;
    return iVar12;
}


// ===== sym.qrtr_gunyah_fifo_init @ 0x080017b8 (size 184) =====

void sym.qrtr_gunyah_fifo_init(int64_t arg1)

{
    ulong *puVar1;
    uint *puVar2;
    uint *puVar3;
    uint *puVar4;
    uint *puVar5;
    uint *puVar6;
    uint *puVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    
    if (*(arg1 + 0xa8) != '\0') {
        puVar1 = *(arg1 + 0x98);
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
    }
    puVar2 = *(arg1 + 0x98);
    *puVar2 = 0x24495043;
    if (*(arg1 + 0xa8) == '\0') {
        puVar5 = puVar2 + 3;
        puVar3 = puVar2 + 4;
        puVar4 = puVar2 + 6;
        puVar6 = puVar2 + 1;
        puVar7 = puVar2 + 2;
        iVar9 = *(arg1 + 0x98) + 0x5000;
        iVar8 = *(arg1 + 0x98) + 0x1000;
        iVar10 = 5;
    }
    else {
        puVar5 = puVar2 + 1;
        puVar3 = puVar2 + 2;
        puVar4 = puVar2 + 5;
        puVar6 = puVar2 + 3;
        puVar7 = puVar2 + 4;
        iVar9 = *(arg1 + 0x98) + 0x1000;
        iVar8 = *(arg1 + 0x98) + 0x5000;
        iVar10 = 6;
    }
    *(arg1 + 0x118) = puVar5;
    *(arg1 + 0x120) = puVar3;
    *(arg1 + 0x128) = puVar4;
    *(arg1 + 0x130) = iVar9;
    *(arg1 + 0x138) = 0x4000;
    *(arg1 + 0x140) = puVar6;
    *(arg1 + 0x158) = iVar8;
    *(arg1 + 0x160) = 0x4000;
    *(arg1 + 0x148) = puVar7;
    *(arg1 + 0x150) = puVar2 + iVar10;
    *puVar3 = 0;
    **(arg1 + 0x128) = 0;
    **(arg1 + 0x140) = 0;
    return;
}


// ===== sym.qrtr_gunyah_rm_cb @ 0x08001870 (size 328) =====

ulong sym.qrtr_gunyah_rm_cb(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char cVar3;
    uint64_t uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t arg1_00;
    uint64_t uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    int64_t iStack_c0;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    ulong uStack_50;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    uint16_t auStack_30 [2];
    uint16_t auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_28 = *(iVar14 + 0x5e0);
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    if ((arg2 != 0x56100008) || ((*(arg3 + 4) != '\v' && (*(arg3 + 4) != '\x02')))) goto code_r0x0800195c;
    iVar14 = arg1 + -0xb0;
    iVar6 = gh_rm_get_vmid(*(arg1 + -4),auStack_2c);
    if ((iVar6 != 0) || ((iVar6 = gh_rm_get_vmid(1,auStack_30), iVar6 != 0 || (auStack_2c[0] != *arg3))))
    goto code_r0x0800195c;
    cVar3 = *(arg3 + 4);
    if (cVar3 == '\x02') {
        sym.qrtr_gunyah_fifo_init(iVar14);
        iVar6 = qrtr_endpoint_register(iVar14,1,0,0);
        if (iVar6 == 0) {
            iVar6 = sym.qrtr_gunyah_share_mem(iVar14,auStack_30[0],auStack_2c[0]);
            if (iVar6 == 0) {
                cVar3 = *(arg3 + 4);
                goto code_r0x0800193c;
            }
            uVar9 = 0x80004be;
        }
        else {
            uVar9 = 0x8000240;
        }
        _printk(uVar9,"qrtr_gunyah_rm_cb","qrtr_gunyah_rm_cb");
    }
    else {
code_r0x0800193c:
        if (cVar3 == '\v') {
            qrtr_endpoint_unregister(iVar14);
            sym.qrtr_gunyah_unshare_mem(iVar14,auStack_30[0],auStack_2c[0]);
        }
    }
code_r0x0800195c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_28) {
        return 0;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_gunyah_retry_work;
    pcStack_38 = sym.qrtr_gunyah_retry_work;
    iVar14 = sp_el0;
    iStack_48 = *(iVar14 + 0x5e0);
    uStack_50 = 1;
    puStack_40 = &stack0xffffffffffffffe0;
    uVar9 = gh_dbl_send(*(iVar8 + -0x10),&uStack_50,0);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_48) {
        return uVar9;
    }
    auVar18 = __stack_chk_fail();
    iVar11 = auVar18._8_8_;
    iVar8 = auVar18._0_8_;
    *extraout_x18_00 = sym.qrtr_gunyah_send;
    pcStack_a8 = sym.qrtr_gunyah_send;
    iVar14 = sp_el0;
    iStack_c0 = *(iVar14 + 0x5e0);
    uVar17 = *(iVar11 + 0x70);
    ppuStack_b0 = &puStack_40;
    if (0 < uVar17) {
        iVar6 = 0;
        do {
            while( true ) {
                uVar13 = **(iVar8 + 0x118);
                uVar2 = **(iVar8 + 0x120);
                uVar15 = uVar2;
                if (uVar2 < uVar13) {
                    uVar13 = uVar13 - uVar2;
                    uVar12 = *(iVar8 + 0x138);
                }
                else {
                    uVar12 = *(iVar8 + 0x138);
                    uVar13 = (uVar13 - uVar2) + uVar12;
                }
                uVar1 = 0;
                if (7 < uVar13) {
                    uVar1 = uVar13 - 8;
                }
                if (uVar12 < uVar1) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8001d5c);
                    (*pcVar5)();
                }
                if (8 < uVar13) break;
                **(iVar8 + 0x128) = 1;
                uVar13 = **(iVar8 + 0x118) - **(iVar8 + 0x120);
                if (**(iVar8 + 0x118) < **(iVar8 + 0x120) || uVar13 == 0) {
                    uVar15 = *(iVar8 + 0x138);
                    uVar13 = uVar13 + uVar15;
                }
                else {
                    uVar15 = *(iVar8 + 0x138);
                }
                uVar2 = 0;
                if (7 < uVar13) {
                    uVar2 = uVar13 - 8;
                }
                if (uVar15 < uVar2) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8001d64);
                    (*pcVar5)();
                }
                if (uVar13 < 9) {
                    uStack_2e8 = 0;
                    uStack_2e0 = 0;
                    uStack_2f8 = 0;
                    uStack_2f0 = 0;
                    uStack_300 = 0;
                    init_wait_entry(&uStack_300,0);
                    iVar14 = 0x9c4;
                    while( true ) {
                        prepare_to_wait_event(iVar8 + 0x168,&uStack_300,2);
                        uVar13 = **(iVar8 + 0x118) - **(iVar8 + 0x120);
                        if (**(iVar8 + 0x118) < **(iVar8 + 0x120) || uVar13 == 0) {
                            uVar15 = *(iVar8 + 0x138);
                            uVar13 = uVar13 + uVar15;
                        }
                        else {
                            uVar15 = *(iVar8 + 0x138);
                        }
                        uVar2 = 0;
                        if (7 < uVar13) {
                            uVar2 = uVar13 - 8;
                        }
                        if (uVar15 < uVar2) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x800,0x8001b9c);
                            (*pcVar5)();
                        }
                        if (iVar14 == 0 && uVar2 != 0) {
                            iVar14 = 1;
                        }
                        if (uVar2 != 0 || iVar14 == 0) break;
                        iVar14 = schedule_timeout();
                    }
                    finish_wait(iVar8 + 0x168,&uStack_300);
                }
            }
            if (uVar17 <= uVar1) {
                uVar1 = uVar17;
            }
            if (*(iVar11 + 0x74) == 0) {
                uVar4 = uVar12 - uVar15;
                if (uVar12 < uVar15) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8001d74);
                    (*pcVar5)();
                }
                uVar16 = uVar1;
                uVar12 = uVar16;
                if (uVar4 <= uVar16) {
                    uVar12 = uVar4;
                }
                iVar14 = *(iVar11 + 0xd8) + iVar6;
                if (uVar12 != 0) {
                    __memcpy_toio(*(iVar8 + 0x130) + uVar15,iVar14,uVar12);
                }
                if (uVar4 < uVar16) {
                    __memcpy_toio(*(iVar8 + 0x130),iVar14 + uVar12,uVar16 - uVar12);
                }
                uVar15 = *(iVar8 + 0x138);
                DataMemoryBarrier(2,2);
            }
            else {
                memset(&uStack_300,0,0x240);
                sg_init_table(&uStack_300,*(*(iVar11 + 0xd0) + *(iVar11 + 0xcc) + 2) + 1);
                iVar7 = skb_to_sgvec(iVar11,&uStack_300,0,*(iVar11 + 0x70));
                if (iVar7 < 0) {
                    _printk(0x800046a,"qrtr_gunyah_send",iVar7);
                    break;
                }
                uVar2 = **(iVar8 + 0x120);
                uVar12 = uVar2;
                uVar15 = *(iVar8 + 0x138) - uVar12;
                if (*(iVar8 + 0x138) < uVar12) {
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x800,0x8001d6c);
                    (*pcVar5)();
                }
                uVar16 = uVar1;
                uVar4 = uVar16;
                if (uVar15 <= uVar16) {
                    uVar4 = uVar15;
                }
                if (uVar4 != 0) {
                    uVar10 = sg_nents(&uStack_300);
                    sym.gunyah_sg_copy_toio(&uStack_300,uVar10 & 0xffffffff,*(iVar8 + 0x130) + uVar12,uVar4);
                }
                if (uVar15 < uVar16) {
                    uVar15 = sg_nents(&uStack_300);
                    sym.gunyah_sg_copy_toio(&uStack_300,uVar15 & 0xffffffff,*(iVar8 + 0x130),uVar16 - uVar4);
                }
                uVar15 = *(iVar8 + 0x138);
                DataMemoryBarrier(2,2);
            }
            iVar7 = 0;
            if (uVar15 <= uVar2 + uVar1) {
                iVar7 = uVar15;
            }
            **(iVar8 + 0x120) = (uVar2 + uVar1) - iVar7;
            uVar17 = uVar17 - uVar1;
            uStack_300 = 1;
            iVar7 = gh_dbl_send(*(iVar8 + 0xd0),&uStack_300,0x100000000);
            if ((iVar7 != 0) &&
               (_dev_err(*(iVar8 + 0x10),"failed to raise doorbell %d\n",iVar7), *(iVar8 + 0xa8) == '\0')) {
                queue_work_on(0x20,_devm_kmalloc,iVar8 + 0xe0);
            }
            iVar6 = uVar1 + iVar6;
        } while (0 < uVar17);
    }
    **(iVar8 + 0x128) = 0;
    kfree_skb(iVar11);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_c0) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.qrtr_gunyah_cb;
    uVar9 = sym.qrtr_gunyah_read(arg1_00);
    return uVar9;
}


// ===== sym.qrtr_gunyah_retry_work @ 0x080019b8 (size 100) =====

ulong sym.qrtr_gunyah_retry_work(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t arg1_00;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    int iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_90;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_18 = *(iVar13 + 0x5e0);
    uStack_20 = 1;
    uVar6 = gh_dbl_send(*(arg1 + -0x10),&uStack_20,0);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_18) {
        return uVar6;
    }
    auVar17 = __stack_chk_fail();
    iVar9 = auVar17._8_8_;
    iVar7 = auVar17._0_8_;
    *extraout_x18 = sym.qrtr_gunyah_send;
    pcStack_78 = sym.qrtr_gunyah_send;
    iVar13 = sp_el0;
    iStack_90 = *(iVar13 + 0x5e0);
    uVar15 = *(iVar9 + 0x70);
    puStack_80 = &stack0xfffffffffffffff0;
    if (0 < uVar15) {
        iVar16 = 0;
        do {
            while( true ) {
                uVar11 = **(iVar7 + 0x118);
                uVar2 = **(iVar7 + 0x120);
                uVar12 = uVar2;
                if (uVar2 < uVar11) {
                    uVar11 = uVar11 - uVar2;
                    uVar10 = *(iVar7 + 0x138);
                }
                else {
                    uVar10 = *(iVar7 + 0x138);
                    uVar11 = (uVar11 - uVar2) + uVar10;
                }
                uVar1 = 0;
                if (7 < uVar11) {
                    uVar1 = uVar11 - 8;
                }
                if (uVar10 < uVar1) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d5c);
                    (*pcVar4)();
                }
                if (8 < uVar11) break;
                **(iVar7 + 0x128) = 1;
                uVar11 = **(iVar7 + 0x118) - **(iVar7 + 0x120);
                if (**(iVar7 + 0x118) < **(iVar7 + 0x120) || uVar11 == 0) {
                    uVar12 = *(iVar7 + 0x138);
                    uVar11 = uVar11 + uVar12;
                }
                else {
                    uVar12 = *(iVar7 + 0x138);
                }
                uVar2 = 0;
                if (7 < uVar11) {
                    uVar2 = uVar11 - 8;
                }
                if (uVar12 < uVar2) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d64);
                    (*pcVar4)();
                }
                if (uVar11 < 9) {
                    uStack_2b8 = 0;
                    uStack_2b0 = 0;
                    uStack_2c8 = 0;
                    uStack_2c0 = 0;
                    uStack_2d0 = 0;
                    init_wait_entry(&uStack_2d0,0);
                    iVar13 = 0x9c4;
                    while( true ) {
                        prepare_to_wait_event(iVar7 + 0x168,&uStack_2d0,2);
                        uVar11 = **(iVar7 + 0x118) - **(iVar7 + 0x120);
                        if (**(iVar7 + 0x118) < **(iVar7 + 0x120) || uVar11 == 0) {
                            uVar12 = *(iVar7 + 0x138);
                            uVar11 = uVar11 + uVar12;
                        }
                        else {
                            uVar12 = *(iVar7 + 0x138);
                        }
                        uVar2 = 0;
                        if (7 < uVar11) {
                            uVar2 = uVar11 - 8;
                        }
                        if (uVar12 < uVar2) {
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x800,0x8001b9c);
                            (*pcVar4)();
                        }
                        if (iVar13 == 0 && uVar2 != 0) {
                            iVar13 = 1;
                        }
                        if (uVar2 != 0 || iVar13 == 0) break;
                        iVar13 = schedule_timeout();
                    }
                    finish_wait(iVar7 + 0x168,&uStack_2d0);
                }
            }
            if (uVar15 <= uVar1) {
                uVar1 = uVar15;
            }
            if (*(iVar9 + 0x74) == 0) {
                uVar3 = uVar10 - uVar12;
                if (uVar10 < uVar12) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d74);
                    (*pcVar4)();
                }
                uVar14 = uVar1;
                uVar10 = uVar14;
                if (uVar3 <= uVar14) {
                    uVar10 = uVar3;
                }
                iVar13 = *(iVar9 + 0xd8) + iVar16;
                if (uVar10 != 0) {
                    __memcpy_toio(*(iVar7 + 0x130) + uVar12,iVar13,uVar10);
                }
                if (uVar3 < uVar14) {
                    __memcpy_toio(*(iVar7 + 0x130),iVar13 + uVar10,uVar14 - uVar10);
                }
                uVar12 = *(iVar7 + 0x138);
                DataMemoryBarrier(2,2);
            }
            else {
                memset(&uStack_2d0,0,0x240);
                sg_init_table(&uStack_2d0,*(*(iVar9 + 0xd0) + *(iVar9 + 0xcc) + 2) + 1);
                iVar5 = skb_to_sgvec(iVar9,&uStack_2d0,0,*(iVar9 + 0x70));
                if (iVar5 < 0) {
                    _printk(0x800046a,"qrtr_gunyah_send",iVar5);
                    break;
                }
                uVar2 = **(iVar7 + 0x120);
                uVar10 = uVar2;
                uVar12 = *(iVar7 + 0x138) - uVar10;
                if (*(iVar7 + 0x138) < uVar10) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d6c);
                    (*pcVar4)();
                }
                uVar14 = uVar1;
                uVar3 = uVar14;
                if (uVar12 <= uVar14) {
                    uVar3 = uVar12;
                }
                if (uVar3 != 0) {
                    uVar8 = sg_nents(&uStack_2d0);
                    sym.gunyah_sg_copy_toio(&uStack_2d0,uVar8 & 0xffffffff,*(iVar7 + 0x130) + uVar10,uVar3);
                }
                if (uVar12 < uVar14) {
                    uVar12 = sg_nents(&uStack_2d0);
                    sym.gunyah_sg_copy_toio(&uStack_2d0,uVar12 & 0xffffffff,*(iVar7 + 0x130),uVar14 - uVar3);
                }
                uVar12 = *(iVar7 + 0x138);
                DataMemoryBarrier(2,2);
            }
            iVar5 = 0;
            if (uVar12 <= uVar2 + uVar1) {
                iVar5 = uVar12;
            }
            **(iVar7 + 0x120) = (uVar2 + uVar1) - iVar5;
            uVar15 = uVar15 - uVar1;
            uStack_2d0 = 1;
            iVar5 = gh_dbl_send(*(iVar7 + 0xd0),&uStack_2d0,0x100000000);
            if ((iVar5 != 0) &&
               (_dev_err(*(iVar7 + 0x10),"failed to raise doorbell %d\n",iVar5), *(iVar7 + 0xa8) == '\0')) {
                queue_work_on(0x20,_devm_kmalloc,iVar7 + 0xe0);
            }
            iVar16 = uVar1 + iVar16;
        } while (0 < uVar15);
    }
    **(iVar7 + 0x128) = 0;
    kfree_skb(iVar9);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_90) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.qrtr_gunyah_cb;
    uVar6 = sym.qrtr_gunyah_read(arg1_00);
    return uVar6;
}


// ===== sym.qrtr_gunyah_send @ 0x08001a1c (size 968) =====

ulong sym.qrtr_gunyah_send(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t arg1_00;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    int iVar14;
    ulong unaff_x30;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_70 = *(iVar11 + 0x5e0);
    uVar13 = *(arg2 + 0x70);
    if (0 < uVar13) {
        iVar14 = 0;
        do {
            while( true ) {
                uVar9 = **(arg1 + 0x118);
                uVar2 = **(arg1 + 0x120);
                uVar10 = uVar2;
                if (uVar2 < uVar9) {
                    uVar9 = uVar9 - uVar2;
                    uVar8 = *(arg1 + 0x138);
                }
                else {
                    uVar8 = *(arg1 + 0x138);
                    uVar9 = (uVar9 - uVar2) + uVar8;
                }
                uVar1 = 0;
                if (7 < uVar9) {
                    uVar1 = uVar9 - 8;
                }
                if (uVar8 < uVar1) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d5c);
                    (*pcVar4)();
                }
                if (8 < uVar9) break;
                **(arg1 + 0x128) = 1;
                uVar9 = **(arg1 + 0x118) - **(arg1 + 0x120);
                if (**(arg1 + 0x118) < **(arg1 + 0x120) || uVar9 == 0) {
                    uVar10 = *(arg1 + 0x138);
                    uVar9 = uVar9 + uVar10;
                }
                else {
                    uVar10 = *(arg1 + 0x138);
                }
                uVar2 = 0;
                if (7 < uVar9) {
                    uVar2 = uVar9 - 8;
                }
                if (uVar10 < uVar2) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d64);
                    (*pcVar4)();
                }
                if (uVar9 < 9) {
                    uStack_298 = 0;
                    uStack_290 = 0;
                    uStack_2a8 = 0;
                    uStack_2a0 = 0;
                    uStack_2b0 = 0;
                    init_wait_entry(&uStack_2b0,0);
                    iVar11 = 0x9c4;
                    while( true ) {
                        prepare_to_wait_event(arg1 + 0x168,&uStack_2b0,2);
                        uVar9 = **(arg1 + 0x118) - **(arg1 + 0x120);
                        if (**(arg1 + 0x118) < **(arg1 + 0x120) || uVar9 == 0) {
                            uVar10 = *(arg1 + 0x138);
                            uVar9 = uVar9 + uVar10;
                        }
                        else {
                            uVar10 = *(arg1 + 0x138);
                        }
                        uVar2 = 0;
                        if (7 < uVar9) {
                            uVar2 = uVar9 - 8;
                        }
                        if (uVar10 < uVar2) {
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x800,0x8001b9c);
                            (*pcVar4)();
                        }
                        if (iVar11 == 0 && uVar2 != 0) {
                            iVar11 = 1;
                        }
                        if (uVar2 != 0 || iVar11 == 0) break;
                        iVar11 = schedule_timeout();
                    }
                    finish_wait(arg1 + 0x168,&uStack_2b0);
                }
            }
            if (uVar13 <= uVar1) {
                uVar1 = uVar13;
            }
            if (*(arg2 + 0x74) == 0) {
                uVar3 = uVar8 - uVar10;
                if (uVar8 < uVar10) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d74);
                    (*pcVar4)();
                }
                uVar12 = uVar1;
                uVar8 = uVar12;
                if (uVar3 <= uVar12) {
                    uVar8 = uVar3;
                }
                iVar11 = *(arg2 + 0xd8) + iVar14;
                if (uVar8 != 0) {
                    __memcpy_toio(*(arg1 + 0x130) + uVar10,iVar11,uVar8);
                }
                if (uVar3 < uVar12) {
                    __memcpy_toio(*(arg1 + 0x130),iVar11 + uVar8,uVar12 - uVar8);
                }
                uVar10 = *(arg1 + 0x138);
                DataMemoryBarrier(2,2);
            }
            else {
                memset(&uStack_2b0,0,0x240);
                sg_init_table(&uStack_2b0,*(*(arg2 + 0xd0) + *(arg2 + 0xcc) + 2) + 1);
                iVar5 = skb_to_sgvec(arg2,&uStack_2b0,0,*(arg2 + 0x70));
                if (iVar5 < 0) {
                    _printk(0x800046a,"qrtr_gunyah_send",iVar5);
                    break;
                }
                uVar2 = **(arg1 + 0x120);
                uVar8 = uVar2;
                uVar10 = *(arg1 + 0x138) - uVar8;
                if (*(arg1 + 0x138) < uVar8) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001d6c);
                    (*pcVar4)();
                }
                uVar12 = uVar1;
                uVar3 = uVar12;
                if (uVar10 <= uVar12) {
                    uVar3 = uVar10;
                }
                if (uVar3 != 0) {
                    uVar6 = sg_nents(&uStack_2b0);
                    sym.gunyah_sg_copy_toio(&uStack_2b0,uVar6 & 0xffffffff,*(arg1 + 0x130) + uVar8,uVar3);
                }
                if (uVar10 < uVar12) {
                    uVar10 = sg_nents(&uStack_2b0);
                    sym.gunyah_sg_copy_toio(&uStack_2b0,uVar10 & 0xffffffff,*(arg1 + 0x130),uVar12 - uVar3);
                }
                uVar10 = *(arg1 + 0x138);
                DataMemoryBarrier(2,2);
            }
            iVar5 = 0;
            if (uVar10 <= uVar2 + uVar1) {
                iVar5 = uVar10;
            }
            **(arg1 + 0x120) = (uVar2 + uVar1) - iVar5;
            uVar13 = uVar13 - uVar1;
            uStack_2b0 = 1;
            iVar5 = gh_dbl_send(*(arg1 + 0xd0),&uStack_2b0,0x100000000);
            if ((iVar5 != 0) &&
               (_dev_err(*(arg1 + 0x10),"failed to raise doorbell %d\n",iVar5), *(arg1 + 0xa8) == '\0')) {
                queue_work_on(0x20,_devm_kmalloc,arg1 + 0xe0);
            }
            iVar14 = uVar1 + iVar14;
        } while (0 < uVar13);
    }
    **(arg1 + 0x128) = 0;
    kfree_skb(arg2);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_70) {
        return 0;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qrtr_gunyah_cb;
    uVar7 = sym.qrtr_gunyah_read(arg1_00);
    return uVar7;
}


// ===== sym.qrtr_gunyah_cb @ 0x08001de4 (size 40) =====

void sym.qrtr_gunyah_cb(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qrtr_gunyah_read(arg1);
    return;
}


// ===== sym.qrtr_gunyah_read @ 0x08001e0c (size 1132) =====

uchar * sym.qrtr_gunyah_read(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar *puVar6;
    int64_t iVar7;
    uint *puVar8;
    ushort *puVar9;
    int64_t iVar10;
    uchar *puVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    uchar *puVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t unaff_x19;
    uint64_t unaff_x21;
    uint64_t unaff_x22;
    int64_t iVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [16];
    uchar auVar22 [12];
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint64_t uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar ***pppuStack_190;
    code *pcStack_188;
    uchar *puStack_180;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint *puStack_160;
    int64_t iStack_158;
    uint32_t uStack_150;
    uint32_t uStack_14c;
    ulong uStack_148;
    uint32_t uStack_13c;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    ulong uStack_108;
    uint32_t uStack_100;
    uint32_t uStack_fc;
    ulong uStack_f8;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_d0;
    int64_t *piStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t aiStack_88 [5];
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    aiStack_88[4] = *(iVar19 + 0x5e0);
    iStack_90 = arg1 + 0x110;
    uStack_98 = _raw_spin_lock_irqsave();
    uVar12 = 0;
    __wake_up(arg1 + 0x168,3,0,0);
    uStack_a0 = arg1 + 0xe0;
    while( true ) {
        uVar4 = **(arg1 + 0x140);
        uVar17 = uVar4;
        uVar5 = **(arg1 + 0x148);
        if (uVar5 < uVar4) {
            uVar16 = *(arg1 + 0x160);
            uVar18 = (uVar5 - uVar17) + uVar16;
        }
        else {
            uVar18 = uVar5 - uVar4;
            uVar16 = *(arg1 + 0x160);
        }
        if (uVar16 < uVar18) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8002230);
            (*pcVar1)();
        }
        if (uVar18 == 0) break;
        if (*(arg1 + 0x28) == 0) {
            aiStack_88[2] = 0;
            aiStack_88[3] = 0;
            aiStack_88[0] = 0;
            aiStack_88[1] = 0;
            uVar4 = **(arg1 + 0x140);
            iVar2 = 0;
            if (uVar16 <= uVar4) {
                iVar2 = uVar16;
            }
            uVar17 = uVar4 - iVar2;
            unaff_x19 = uVar16 - uVar17;
            if (uVar16 < uVar17) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80021fc);
                (*pcVar1)();
            }
            uVar18 = unaff_x19;
            if (0x1f < unaff_x19) {
                uVar18 = 0x20;
            }
            if (uVar18 != 0) {
                uVar12 = uVar18;
                __memcpy_fromio(aiStack_88,*(arg1 + 0x158) + uVar17);
            }
            if (unaff_x19 < 0x20) {
                uVar12 = 0x20 - uVar18;
                __memcpy_fromio(aiStack_88 + uVar18,*(arg1 + 0x158));
            }
            uVar3 = qrtr_peek_pkt_size(aiStack_88);
            uVar17 = uVar3;
            uVar4 = **(arg1 + 0x148);
            uVar5 = **(arg1 + 0x140);
            uVar18 = uVar5;
            if (uVar3 < 0x10001) {
                if (uVar4 < uVar5) {
                    uVar16 = *(arg1 + 0x160);
                    unaff_x22 = (uVar4 - uVar18) + uVar16;
                }
                else {
                    unaff_x22 = uVar4 - uVar5;
                    uVar16 = *(arg1 + 0x160);
                }
                if (uVar16 < unaff_x22) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8002204);
                    (*pcVar1)();
                }
                unaff_x21 = uVar17;
                if (unaff_x22 <= uVar17) {
                    unaff_x21 = unaff_x22;
                }
                iVar2 = 0;
                if (uVar16 <= uVar18) {
                    iVar2 = uVar16;
                }
                uVar18 = uVar5 - iVar2;
                unaff_x19 = uVar16 - uVar18;
                if (uVar16 < uVar18) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800221c);
                    (*pcVar1)();
                }
                iVar19 = *(arg1 + 0x18);
                uVar16 = unaff_x21;
                if (unaff_x19 <= unaff_x21) {
                    uVar16 = unaff_x19;
                }
                if (uVar16 != 0) {
                    uVar12 = uVar16;
                    __memcpy_fromio(iVar19,*(arg1 + 0x158) + uVar18);
                }
                if (unaff_x19 < unaff_x21) {
                    uVar12 = unaff_x21 - uVar16;
                    __memcpy_fromio(iVar19 + uVar16,*(arg1 + 0x158));
                }
                uVar18 = *(arg1 + 0x160);
                uVar4 = **(arg1 + 0x140) + unaff_x21;
                if (uVar18 <= uVar4) {
                    iVar2 = 0;
                    if (uVar18 != 0) {
                        iVar2 = uVar4 / uVar18;
                    }
                    uVar4 = uVar4 - iVar2 * uVar18;
                }
                **(arg1 + 0x140) = uVar4;
                if (unaff_x22 < uVar17) {
                    *(arg1 + 0x20) = uVar17;
                    *(arg1 + 0x28) = unaff_x21;
                    uVar17 = uVar12;
                }
                else {
                    iVar2 = qrtr_endpoint_post(arg1,*(arg1 + 0x18));
                    if (iVar2 == -0x16) {
                        _dev_err(*(arg1 + 0x10),"invalid ipcrouter packet\n");
                    }
                }
            }
            else {
                if (uVar4 < uVar5) {
                    uVar16 = *(arg1 + 0x160);
                    uVar12 = (uVar4 - uVar18) + uVar16;
                }
                else {
                    uVar12 = uVar4 - uVar5;
                    uVar16 = *(arg1 + 0x160);
                }
                if (uVar16 < uVar12) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8002228);
                    (*pcVar1)();
                }
                _dev_err(*(arg1 + 0x10),"invalid pkt_len:%zu dropping:%zu bytes\n",uVar17,uVar12);
                uVar18 = *(arg1 + 0x160);
                uVar4 = **(arg1 + 0x140) + uVar12;
                if (uVar18 <= uVar4) {
                    iVar2 = 0;
                    if (uVar18 != 0) {
                        iVar2 = uVar4 / uVar18;
                    }
                    uVar4 = uVar4 - iVar2 * uVar18;
                }
                **(arg1 + 0x140) = uVar4;
            }
        }
        else {
            uVar12 = (uVar5 - uVar17) + uVar16;
            if (uVar4 <= uVar5) {
                uVar12 = uVar5 - uVar4;
            }
            if (uVar16 < uVar12) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80021d8);
                (*pcVar1)();
            }
            uVar18 = *(arg1 + 0x28);
            unaff_x22 = *(arg1 + 0x20) - uVar18;
            if (uVar12 + uVar18 <= *(arg1 + 0x20)) {
                unaff_x22 = uVar12;
            }
            iVar2 = 0;
            if (uVar16 <= uVar17) {
                iVar2 = uVar16;
            }
            uVar12 = uVar4 - iVar2;
            unaff_x21 = uVar16 - uVar12;
            if (uVar16 < uVar12) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80021f4);
                (*pcVar1)();
            }
            uVar17 = unaff_x22;
            if (unaff_x21 <= unaff_x22) {
                uVar17 = unaff_x21;
            }
            iVar19 = *(arg1 + 0x18) + uVar18;
            if (uVar17 != 0) {
                __memcpy_fromio(iVar19,*(arg1 + 0x158) + uVar12,uVar17);
            }
            if (unaff_x21 < unaff_x22) {
                __memcpy_fromio(iVar19 + uVar17,*(arg1 + 0x158),unaff_x22 - uVar17);
            }
            uVar12 = *(arg1 + 0x160);
            uVar4 = **(arg1 + 0x140) + unaff_x22;
            if (uVar12 <= uVar4) {
                iVar2 = 0;
                if (uVar12 != 0) {
                    iVar2 = uVar4 / uVar12;
                }
                uVar4 = uVar4 - iVar2 * uVar12;
            }
            **(arg1 + 0x140) = uVar4;
            uVar17 = unaff_x22 + *(arg1 + 0x28);
            if (uVar17 == *(arg1 + 0x20)) {
                iVar2 = qrtr_endpoint_post(arg1,*(arg1 + 0x18));
                if (iVar2 == -0x16) {
                    _dev_err(*(arg1 + 0x10),"invalid ipcrouter packet\n");
                }
                *(arg1 + 0x28) = 0;
                *(arg1 + 0x20) = 0;
            }
            else {
                *(arg1 + 0x28) = uVar17;
            }
        }
        uVar12 = uVar17;
        if (**(arg1 + 0x150) != 0) {
            uVar12 = 0;
            aiStack_88[0] = 1;
            uVar4 = gh_dbl_send(*(arg1 + 0xd0),aiStack_88);
            if (uVar4 != 0) {
                uVar12 = uVar4;
                _dev_err(*(arg1 + 0x10),"failed to raise doorbell %d\n");
                if (*(arg1 + 0xa8) == '\0') {
                    uVar12 = uStack_a0;
                    queue_work_on(0x20,_devm_kmalloc);
                }
            }
        }
    }
    puVar6 = _raw_spin_unlock_irqrestore(iStack_90,uStack_98);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == aiStack_88[4]) {
        return puVar6;
    }
    auVar20 = __stack_chk_fail();
    iVar7 = auVar20._0_8_;
    *extraout_x18 = sym.qrtr_gunyah_share_mem;
    pcStack_d8 = sym.qrtr_gunyah_share_mem;
    uStack_d0 = 0x20;
    iVar19 = sp_el0;
    iStack_e8 = *(iVar19 + 0x5e0);
    uStack_100 = auVar20._8_4_ & 0xffff;
    uStack_f8 = 7;
    uStack_fc = uVar12 & 0xffff;
    uStack_108 = 0x600000006;
    uStack_ec = uStack_100;
    puStack_e0 = &stack0xffffffffffffffa0;
    piStack_c8 = aiStack_88;
    uStack_c0 = unaff_x22;
    uStack_b8 = unaff_x21;
    iStack_b0 = arg1;
    uStack_a8 = unaff_x19;
    uVar4 = hyp_assign_phys(*(iVar7 + 0x30),(*(iVar7 + 0x38) - *(iVar7 + 0x30)) + 1,&uStack_ec,1,&uStack_100,
                            &uStack_108,2);
    if (uVar4 == 0) {
        uVar4 = 0xc;
        iVar19 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar19 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xdc0);
        if (puVar8 == NULL) {
            puVar6 = 0xfffffff4;
        }
        else {
            uVar4 = 0x14;
            iVar19 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar19 = 0x30;
            }
            puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xdc0);
            arg1 = puVar8;
            if (puVar9 == NULL) {
                kfree(puVar8);
                puVar6 = 0xfffffff4;
            }
            else {
                iVar19 = *(iVar7 + 0x30);
                iVar10 = *(iVar7 + 0x38);
                *puVar8 = 2;
                *(puVar8 + 6) = 6;
                uVar4 = *(iVar7 + 200);
                *(puVar8 + 10) = 6;
                *puVar9 = 1;
                *(puVar9 + 2) = iVar19;
                *(puVar8 + 1) = auVar20._8_2_;
                *(puVar9 + 6) = (iVar10 - iVar19) + 1;
                *(puVar8 + 2) = uVar12;
                uVar5 = gh_rm_mem_share(0,0,uVar4,puVar8,puVar9,0,iVar7 + 0x90);
                puVar6 = uVar5;
                if (uVar5 != 0) {
                    _printk(0x80002c2,"qrtr_gunyah_share_mem","qrtr_gunyah_share_mem",*(iVar7 + 0x30),
                            *(iVar7 + 0xa0),puVar6);
                    puVar13 = &uStack_100;
                    hyp_assign_phys(*(iVar7 + 0x30),(*(iVar7 + 0x38) - *(iVar7 + 0x30)) + 1,puVar13,2,&uStack_ec,
                                    &uStack_f8,1);
                    uVar4 = puVar13;
                }
                kfree(puVar8);
                kfree(puVar9);
            }
        }
    }
    else {
        puVar6 = uVar4;
        uVar4 = 0x80003ab;
        _printk(0x80001e7,"qrtr_gunyah_share_mem","qrtr_gunyah_share_mem",*(iVar7 + 0x30),*(iVar7 + 0xa0),puVar6);
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_e8) {
        return puVar6;
    }
    auVar22 = __stack_chk_fail();
    iVar10 = auVar22._0_8_;
    puVar13 = &uStack_150;
    *extraout_x18_00 = sym.qrtr_gunyah_unshare_mem;
    pcStack_128 = sym.qrtr_gunyah_unshare_mem;
    iVar19 = sp_el0;
    iStack_138 = *(iVar19 + 0x5e0);
    uStack_150 = auVar22._8_4_ & 0xffff;
    uStack_14c = uVar4 & 0xffff;
    uStack_148 = 7;
    uStack_13c = uStack_150;
    ppuStack_130 = &puStack_e0;
    iStack_120 = iVar7;
    iVar2 = gh_rm_mem_reclaim(*(iVar10 + 0x90),0);
    if (iVar2 != 0) {
        _printk(0x800049d,"qrtr_gunyah_unshare_mem","qrtr_gunyah_unshare_mem");
    }
    puVar15 = &uStack_13c;
    puVar14 = 0x2;
    puVar11 = hyp_assign_phys(*(iVar10 + 0x30),(*(iVar10 + 0x38) - *(iVar10 + 0x30)) + 1,&uStack_150,2,puVar15,
                              &uStack_148,1);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_138) {
        return puVar11;
    }
    auVar21 = __stack_chk_fail();
    *extraout_x18_01 = sym.gunyah_sg_copy_toio;
    pcStack_188 = sym.gunyah_sg_copy_toio;
    iVar19 = sp_el0;
    iStack_198 = *(iVar19 + 0x5e0);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    pppuStack_190 = &ppuStack_130;
    puStack_180 = puVar6;
    uStack_170 = auVar20._8_8_ & 0xffffffff;
    uStack_168 = uVar12 & 0xffffffff;
    puStack_160 = arg1;
    iStack_158 = iVar10;
    sg_miter_start(&uStack_1e0,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,5);
    uVar12 = sg_miter_skip(&uStack_1e0,puVar15);
    puVar6 = NULL;
    if ((uVar12 & 1) != 0) {
        if (puVar14 == NULL) {
            puVar6 = NULL;
        }
        else {
            puVar6 = NULL;
            uVar4 = 0;
            do {
                uVar12 = sg_miter_next(&uStack_1e0);
                if ((uVar12 & 1) == 0) {
                    puVar6 = uVar4;
                    break;
                }
                uVar12 = uStack_1d0;
                if (puVar14 - puVar6 <= uStack_1d0) {
                    uVar12 = puVar14 - puVar6;
                }
                __memcpy_toio(puVar13 + puVar6,uStack_1d8,uVar12 & 0xffffffff);
                uVar4 = uVar4 + uVar12;
                puVar6 = uVar4;
            } while (puVar6 < puVar14);
        }
        sg_miter_stop(&uStack_1e0);
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_198) {
        auVar20 = __stack_chk_fail();
        puVar6 = auVar20._0_8_;
        *extraout_x18_02 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar20._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x80026c4);
        (*pcVar1)();
    }
    return puVar6;
}


// ===== sym.qrtr_gunyah_share_mem @ 0x08002278 (size 548) =====

uchar * sym.qrtr_gunyah_share_mem(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint *puVar6;
    ushort *puVar7;
    int64_t iVar8;
    uchar *puVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    uchar *puVar12;
    uint32_t *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint *unaff_x20;
    uchar *puVar14;
    ulong unaff_x30;
    uchar auVar15 [12];
    uchar auVar16 [16];
    ulong uStack_140;
    ulong uStack_138;
    uint64_t uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uchar *puStack_e0;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    uint *puStack_c0;
    int64_t iStack_b8;
    uint32_t uStack_b0;
    uint32_t uStack_ac;
    ulong uStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    ulong uStack_68;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    ulong uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uStack_60 = arg2 & 0xffff;
    uStack_58 = 7;
    uStack_5c = arg3 & 0xffff;
    uStack_68 = 0x600000006;
    uStack_4c = uStack_60;
    uVar3 = hyp_assign_phys(*(arg1 + 0x30),(*(arg1 + 0x38) - *(arg1 + 0x30)) + 1,&uStack_4c,1,&uStack_60,&uStack_68
                            ,2);
    if (uVar3 == 0) {
        uVar3 = 0xc;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        if (puVar6 == NULL) {
            puVar14 = 0xfffffff4;
        }
        else {
            uVar3 = 0x14;
            iVar1 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar1 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
            unaff_x20 = puVar6;
            if (puVar7 == NULL) {
                kfree(puVar6);
                puVar14 = 0xfffffff4;
            }
            else {
                iVar1 = *(arg1 + 0x30);
                iVar8 = *(arg1 + 0x38);
                *puVar6 = 2;
                *(puVar6 + 6) = 6;
                uVar3 = *(arg1 + 200);
                *(puVar6 + 10) = 6;
                *puVar7 = 1;
                *(puVar7 + 2) = iVar1;
                *(puVar6 + 1) = arg2;
                *(puVar7 + 6) = (iVar8 - iVar1) + 1;
                *(puVar6 + 2) = arg3;
                uVar4 = gh_rm_mem_share(0,0,uVar3,puVar6,puVar7,0,arg1 + 0x90);
                puVar14 = uVar4;
                if (uVar4 != 0) {
                    _printk(0x80002c2,"qrtr_gunyah_share_mem","qrtr_gunyah_share_mem",*(arg1 + 0x30),*(arg1 + 0xa0)
                            ,puVar14);
                    puVar11 = &uStack_60;
                    hyp_assign_phys(*(arg1 + 0x30),(*(arg1 + 0x38) - *(arg1 + 0x30)) + 1,puVar11,2,&uStack_4c,
                                    &uStack_58,1);
                    uVar3 = puVar11;
                }
                kfree(puVar6);
                kfree(puVar7);
            }
        }
    }
    else {
        puVar14 = uVar3;
        uVar3 = 0x80003ab;
        _printk(0x80001e7,"qrtr_gunyah_share_mem","qrtr_gunyah_share_mem",*(arg1 + 0x30),*(arg1 + 0xa0),puVar14);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return puVar14;
    }
    auVar15 = __stack_chk_fail();
    iVar8 = auVar15._0_8_;
    puVar11 = &uStack_b0;
    *extraout_x18 = sym.qrtr_gunyah_unshare_mem;
    pcStack_88 = sym.qrtr_gunyah_unshare_mem;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    uStack_b0 = auVar15._8_4_ & 0xffff;
    uStack_ac = uVar3 & 0xffff;
    uStack_a8 = 7;
    uStack_9c = uStack_b0;
    puStack_90 = &stack0xffffffffffffffc0;
    iStack_80 = arg1;
    iVar5 = gh_rm_mem_reclaim(*(iVar8 + 0x90),0);
    if (iVar5 != 0) {
        _printk(0x800049d,"qrtr_gunyah_unshare_mem","qrtr_gunyah_unshare_mem");
    }
    puVar13 = &uStack_9c;
    puVar12 = 0x2;
    puVar9 = hyp_assign_phys(*(iVar8 + 0x30),(*(iVar8 + 0x38) - *(iVar8 + 0x30)) + 1,&uStack_b0,2,puVar13,
                             &uStack_a8,1);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return puVar9;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18_00 = sym.gunyah_sg_copy_toio;
    pcStack_e8 = sym.gunyah_sg_copy_toio;
    iVar1 = sp_el0;
    iStack_f8 = *(iVar1 + 0x5e0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    ppuStack_f0 = &puStack_90;
    puStack_e0 = puVar14;
    uStack_d0 = arg2 & 0xffffffff;
    uStack_c8 = arg3 & 0xffffffff;
    puStack_c0 = unaff_x20;
    iStack_b8 = iVar8;
    sg_miter_start(&uStack_140,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,5);
    uVar10 = sg_miter_skip(&uStack_140,puVar13);
    puVar14 = NULL;
    if ((uVar10 & 1) != 0) {
        if (puVar12 == NULL) {
            puVar14 = NULL;
        }
        else {
            puVar14 = NULL;
            uVar3 = 0;
            do {
                uVar10 = sg_miter_next(&uStack_140);
                if ((uVar10 & 1) == 0) {
                    puVar14 = uVar3;
                    break;
                }
                uVar10 = uStack_130;
                if (puVar12 - puVar14 <= uStack_130) {
                    uVar10 = puVar12 - puVar14;
                }
                __memcpy_toio(puVar11 + puVar14,uStack_138,uVar10 & 0xffffffff);
                uVar3 = uVar3 + uVar10;
                puVar14 = uVar3;
            } while (puVar14 < puVar12);
        }
        sg_miter_stop(&uStack_140);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_f8) {
        auVar16 = __stack_chk_fail();
        puVar14 = auVar16._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar14 != NULL) {
            switch(*puVar14) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar14,auVar16._8_8_,0);
                break;
            default:
                return puVar14;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80026c4);
        (*pcVar2)();
    }
    return puVar14;
}


// ===== sym.qrtr_gunyah_unshare_mem @ 0x0800249c (size 192) =====

uchar * sym.qrtr_gunyah_unshare_mem(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    ulong uStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    puVar6 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_40 = arg2 & 0xffff;
    uStack_3c = arg3 & 0xffff;
    uStack_38 = 7;
    uStack_2c = uStack_40;
    iVar3 = gh_rm_mem_reclaim(*(arg1 + 0x90),0);
    if (iVar3 != 0) {
        _printk(0x800049d,"qrtr_gunyah_unshare_mem","qrtr_gunyah_unshare_mem");
    }
    puVar8 = &uStack_2c;
    puVar7 = 0x2;
    puVar4 = hyp_assign_phys(*(arg1 + 0x30),(*(arg1 + 0x38) - *(arg1 + 0x30)) + 1,&uStack_40,2,puVar8,&uStack_38,1
                            );
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return puVar4;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.gunyah_sg_copy_toio;
    pcStack_78 = sym.gunyah_sg_copy_toio;
    iVar1 = sp_el0;
    iStack_88 = *(iVar1 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    puStack_80 = &stack0xffffffffffffffe0;
    sg_miter_start(&uStack_d0,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,5);
    uVar5 = sg_miter_skip(&uStack_d0,puVar8);
    puVar4 = NULL;
    if ((uVar5 & 1) != 0) {
        if (puVar7 == NULL) {
            puVar4 = NULL;
        }
        else {
            puVar4 = NULL;
            uVar9 = 0;
            do {
                uVar5 = sg_miter_next(&uStack_d0);
                if ((uVar5 & 1) == 0) {
                    puVar4 = uVar9;
                    break;
                }
                uVar5 = uStack_c0;
                if (puVar7 - puVar4 <= uStack_c0) {
                    uVar5 = puVar7 - puVar4;
                }
                __memcpy_toio(puVar6 + puVar4,uStack_c8,uVar5 & 0xffffffff);
                uVar9 = uVar9 + uVar5;
                puVar4 = uVar9;
            } while (puVar4 < puVar7);
        }
        sg_miter_stop(&uStack_d0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_88) {
        auVar10 = __stack_chk_fail();
        puVar4 = auVar10._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar10._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80026c4);
        (*pcVar2)();
    }
    return puVar4;
}


// ===== sym.gunyah_sg_copy_toio @ 0x0800255c (size 272) =====

uchar * sym.gunyah_sg_copy_toio(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    sg_miter_start(&uStack_90,arg1,arg2 & 0xffffffff,5);
    uVar3 = sg_miter_skip(&uStack_90);
    puVar4 = NULL;
    if ((uVar3 & 1) != 0) {
        if (arg4 == 0) {
            puVar4 = NULL;
        }
        else {
            puVar4 = NULL;
            uVar5 = 0;
            do {
                uVar3 = sg_miter_next(&uStack_90);
                if ((uVar3 & 1) == 0) {
                    puVar4 = uVar5;
                    break;
                }
                uVar3 = uStack_80;
                if (arg4 - puVar4 <= uStack_80) {
                    uVar3 = arg4 - puVar4;
                }
                __memcpy_toio(puVar4 + arg3,uStack_88,uVar3 & 0xffffffff);
                uVar5 = uVar5 + uVar3;
                puVar4 = uVar5;
            } while (puVar4 < arg4);
        }
        sg_miter_stop(&uStack_90);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80026c4);
        (*pcVar2)();
    }
    return puVar4;
}


// ===== sym.__cfi_check_fail @ 0x0800266c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080026b0

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
    //switch table (4 cases) at 0x80004e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80026c4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080026d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qrtr_gunyah_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002708 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qrtr_gunyah_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

