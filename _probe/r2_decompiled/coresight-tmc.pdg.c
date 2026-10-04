// decompiled from coresight-tmc by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1540) =====

//WARNING: Switch with 1 destination removed at 0x08005af4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x180748a631104ba6) {
        if (arg1 < -0x54930935f5088e63) {
            if (arg1 < -0x66d421a09845f9f8) {
                if (arg1 == -0x79ec8a792eefb278) {
                    pcVar2 = sym.tmc_sg_table_sync_data_range.cfi_jt;
                }
                else {
                    if (arg1 != -0x79333a96769f355e) {
                        if (arg1 != -0x686f4fad8151a3ae) goto code_r0x08005ab4;
                        pcVar2 = sym.__typeid__ZTSFlP7etr_bufymPPcE_global_addr;
                        goto code_r0x080035ec;
                    }
                    pcVar2 = sym.tmc_etr_set_atid.88a4ec656571db6fc7776a5033ac1a61.cfi_jt;
                }
            }
            else if (arg1 < -0x550b9e52359ac614) {
                if (arg1 == -0x66d421a09845f9f8) {
                    if ((pcVar1 + -0x80037a8 >> 3 | pcVar1 << 0x3d) < 0x13) {
                        return;
                    }
                    goto code_r0x08005ab4;
                }
                if (arg1 != -0x66c3af2d2c79087e) goto code_r0x08005ab4;
                pcVar2 = sym.tmc_disable_etf_link.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) {
                    if (arg1 != -0x54da1a54b95929e5) goto code_r0x08005ab4;
                    pcVar2 = sym.tmc_etr_byte_cntr_start.cfi_jt;
                    goto code_r0x080035ec;
                }
                pcVar2 = sym.usb_read_work_fn.38213cb1f0b3a1ddb66808bc149b70b7.cfi_jt;
            }
        }
        else if (arg1 < -0x342c03db73d35bb1) {
            if (arg1 < -0x3e2b70368e8c61c8) {
                if (arg1 == -0x54930935f5088e63) {
                    pcVar2 = sym.tmc_enable_etf_link.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt;
                }
                else {
                    if (arg1 != -0x41881a2367297e5d) goto code_r0x08005ab4;
                    pcVar2 = sym.tmc_sg_table_get_data.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x3e2b70368e8c61c8) {
                    pcVar2 = sym.__typeid__ZTSFvP7etr_bufE_global_addr;
                    goto code_r0x080035ec;
                }
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x08005ab4;
                pcVar2 = sym.etr_handler.2f72300410bb282f6ec7d0c8732833fd.cfi_jt;
            }
        }
        else if (arg1 < -0x31dc94f45192b16a) {
            if (arg1 == -0x342c03db73d35bb1) {
                pcVar2 = sym.tmc_alloc_sg_table.cfi_jt;
            }
            else {
                if (arg1 != -0x333e5f8f10676d42) goto code_r0x08005ab4;
                pcVar2 = sym.tmc_probe.ded25bd53a521677430a4aaba1e36727.cfi_jt;
            }
        }
        else if (arg1 == -0x31dc94f45192b16a) {
            pcVar2 = sym.tmc_etr_set_catu_ops.cfi_jt;
        }
        else {
            if (arg1 != -0x247da59312679775) goto code_r0x08005ab4;
            pcVar2 = sym.tmc_etr_get_catu_device.cfi_jt;
        }
code_r0x080035d8:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
    else {
        if (arg1 < 0x3663961c71c6fd25) {
            if (arg1 < 0xb10cfe07a1a5cdb) {
                if (arg1 < 0x2b3a43e29242445) {
                    if (arg1 != -0x180748a631104ba6) {
                        if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8003748 >> 3 | pcVar1 << 0x3d) < 4)) {
                            return;
                        }
                        goto code_r0x08005ab4;
                    }
                    pcVar2 = sym.__typeid__ZTSFvP7etr_bufyyE_global_addr;
                }
                else {
                    if (arg1 == 0x2b3a43e29242445) {
                        pcVar2 = sym.init_module.cfi_jt;
                        goto code_r0x080035d8;
                    }
                    if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08005ab4;
                    pcVar2 = sym.tmc_read.ded25bd53a521677430a4aaba1e36727.cfi_jt;
                }
            }
            else if (arg1 < 0x321969b888d4949e) {
                if (arg1 != 0xb10cfe07a1a5cdb) {
                    if ((arg1 == 0x1e3d0ffe3d0499e9) && ((pcVar1 + -0x8003780 >> 3 | pcVar1 << 0x3d) < 5)) {
                        return;
                    }
                    goto code_r0x08005ab4;
                }
                pcVar2 = sym.__typeid__ZTSFiP11tmc_drvdataP7etr_bufiPPvE_global_addr;
            }
            else {
                if (arg1 == 0x321969b888d4949e) {
                    pcVar2 = sym.no_llseek.cfi_jt;
                    goto code_r0x080035d8;
                }
                if (arg1 != 0x324b6be2b7e3c193) goto code_r0x08005ab4;
                pcVar2 = sym.tmc_update_etr_buffer.88a4ec656571db6fc7776a5033ac1a61.cfi_jt;
            }
        }
        else if (arg1 < 0x572ebecfa6e4eece) {
            if (arg1 < 0x4c550309df1cf4c1) {
                if (arg1 == 0x3663961c71c6fd25) {
                    pcVar2 = sym.usb_notifier.cfi_jt;
                    goto code_r0x080035d8;
                }
                if (arg1 != 0x37c4900363bd9ece) goto code_r0x08005ab4;
                pcVar2 = sym.tmc_enable_etf_sink.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt;
            }
            else if (arg1 == 0x4c550309df1cf4c1) {
                pcVar2 = sym.tmc_free_etr_buffer.88a4ec656571db6fc7776a5033ac1a61.cfi_jt;
            }
            else {
                if (arg1 != 0x53aa43c4e27b44fe) goto code_r0x08005ab4;
                pcVar2 = sym.tmc_sg_table_sync_table.cfi_jt;
            }
        }
        else if (arg1 < 0x76439dfb02cc8756) {
            if (arg1 == 0x572ebecfa6e4eece) {
                pcVar2 = sym.tmc_alloc_etf_buffer.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt;
            }
            else {
                if (arg1 != 0x5ca94cbce5f388f2) goto code_r0x08005ab4;
                pcVar2 = sym.tmc_remove.ded25bd53a521677430a4aaba1e36727.cfi_jt;
            }
        }
        else if (arg1 == 0x76439dfb02cc8756) {
            pcVar2 = sym.tmc_disable_etr_sink.88a4ec656571db6fc7776a5033ac1a61.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005ab4;
            pcVar2 = sym.tmc_etr_remove_catu_ops.cfi_jt;
        }
code_r0x080035ec:
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
code_r0x08005ab4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005b08);
    (*pcVar1)();
}


// ===== sym.tmc_etr_set_catu_ops.cfi_jt @ 0x08003610 (size 8) =====

void sym.tmc_etr_set_catu_ops.cfi_jt(ulong param_1)

{
    _segment.ehdr = param_1;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08003618 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.tmc_driver);
    return;
}


// ===== sym.usb_read_work_fn.38213cb1f0b3a1ddb66808bc149b70b7.cfi_jt @ 0x08003620 (size 8) =====

void sym.usb_read_work_fn.38213cb1f0b3a1ddb66808bc149b70b7.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t arg2;
    char *pcVar9;
    ulong uVar10;
    ulong extraout_x10;
    ulong *in_x18;
    int64_t unaff_x20;
    int64_t unaff_x21;
    code *unaff_x22;
    int64_t iVar11;
    int64_t unaff_x24;
    uint64_t unaff_x26;
    code *unaff_x27;
    int *unaff_x28;
    ulong unaff_x30;
    int *piStack_b8;
    code *pcStack_b0;
    int iStack_a4;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iVar11 = *(param_1 + 0x98);
    iStack_78 = 0;
    iStack_70 = 0;
    if (*(iVar11 + 0x84) != 1) goto code_r0x0800b3f0;
    unaff_x20 = param_1 + -0xe8;
    unaff_x21 = *(iVar11 + 0x110);
    unaff_x28 = param_1 + -0x48;
    unaff_x22 = param_1 - 0x28;
    piStack_b8 = param_1 + -0x44;
    unaff_x24 = 0xffff;
    unaff_x27 = no_llseek;
    unaff_x26 = 0xffffffffffffefff;
    iStack_a4 = 0;
    pcStack_b0 = unaff_x22;
    do {
        if (*(iVar11 + 0x140) != 2) goto code_r0x0800b3f0;
        if (*unaff_x28 == 0) {
            if (*unaff_x28 < 1) {
                if (*(iVar11 + 0x84) != 1) goto code_r0x0800b3f0;
                if (*(iVar11 + 0x140) != 2) goto code_r0x0800b3f0;
                if (*(unaff_x20 + 0x91) == '\0') goto code_r0x0800afb8;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a0 = 0;
                init_wait_entry(&uStack_a0,0);
                iVar8 = prepare_to_wait_event(unaff_x22,&uStack_a0,1);
                iVar7 = 0x4e2;
                if (*unaff_x28 < 1) {
                    do {
                        if ((*(iVar11 + 0x84) != 1) || (*(iVar11 + 0x140) != 2)) break;
                        if (iVar7 == 0 && *(unaff_x20 + 0x91) == '\0') {
                            iVar7 = 1;
                        }
                        if ((*(unaff_x20 + 0x91) == '\0') || (iVar7 == 0)) goto code_r0x0800b07c;
                        if (iVar8 != 0) goto code_r0x0800b08c;
                        iVar7 = schedule_timeout(iVar7);
                        iVar8 = prepare_to_wait_event(unaff_x22,&uStack_a0,1);
                    } while (*unaff_x28 < 1);
                    if (iVar7 == 0) {
                        iVar7 = 1;
                    }
                }
code_r0x0800b07c:
                iVar8 = iVar7;
                finish_wait(unaff_x22,&uStack_a0);
code_r0x0800b08c:
                iVar5 = iVar8;
                if (iVar5 == -0x200) goto code_r0x0800b3f0;
            }
            else {
code_r0x0800afb8:
                iVar5 = 0x4e2;
            }
            if (*(iVar11 + 0x84) != 1) goto code_r0x0800b3f0;
            if (*(iVar11 + 0x140) != 2) goto code_r0x0800b3f0;
            if (*(unaff_x20 + 0x91) == '\0') goto code_r0x0800b3f0;
            if (iVar5 == 0) {
                iVar5 = sym.usb_transfer_small_packet(unaff_x20,&iStack_70);
                if (iVar5 == -0xb) goto code_r0x0800af8c;
                if (iVar5 == 0) goto code_r0x0800af8c;
                goto code_r0x0800b3b4;
            }
        }
        if (0x400 < *unaff_x28) {
            *(*(iVar11 + 0x148) + 0x20) = 1;
            iVar5 = ___ratelimit(obj.usb_read_work_fn._rs,"usb_read_work_fn");
            if (iVar5 != 0) {
                _dev_err(*(iVar11 + 8) + 0x38,"ETR data is overwritten.\n");
            }
        }
        iVar7 = iStack_70;
        iStack_70 = 0;
        if (iVar7 != 0x10000) {
            iVar8 = 0x38;
            if (unaff_x27[0xbc] != 0x0) {
                iVar8 = 0x30;
            }
            piVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x30);
            if (piVar6 == NULL) goto code_r0x0800b3b4;
            unaff_x27 = unaff_x24 - iVar7 >> 0xc;
            unaff_x24 = unaff_x27 * 0x20;
            iVar7 = __kmalloc(unaff_x24 + 0x20,0xdc0);
            piVar6[4] = iVar7;
            if (iVar7 == 0) {
                kfree(piVar6);
                goto code_r0x0800b3b4;
            }
            unaff_x22 = NULL;
            iVar7 = 0;
            arg2 = *(unaff_x20 + 0x1a0);
            iStack_a4 = iStack_a4 + 1;
            do {
                iVar8 = sym.tmc_etr_buf_get_data(unaff_x21,arg2,0x1000,&iStack_78);
                if (iVar8 + unaff_x26 <= unaff_x26) {
                    kfree(piVar6[4]);
                    kfree(piVar6);
                    iVar5 = ___ratelimit(obj.usb_read_work_fn._rs.25,"usb_read_work_fn");
                    if (iVar5 == 0) goto code_r0x0800b3b4;
                    iVar7 = *(iVar11 + 8);
                    pcVar9 = "Invalid data in ETR\n";
                    goto code_r0x0800b418;
                }
                puVar1 = piVar6[4] + unaff_x22 * 0x20;
                *(puVar1 + 1) = iStack_78 & 0xfff;
                *(puVar1 + 0xc) = iVar8;
                *puVar1 = (((iStack_78 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *puVar1 & 3) - 0x200000000
                ;
                if (unaff_x22 == 0) {
                    *piVar6 = iStack_78;
                }
                if (unaff_x27 == unaff_x22) {
                    *(piVar6[4] + unaff_x24) = *(piVar6[4] + unaff_x24) & 0xfffffffffffffffc | 2;
                }
                iVar7 = iVar8 + iVar7;
                arg2 = *(unaff_x20 + 0x1a0) + iVar8;
                iVar5 = unaff_x22 + 1;
                if (*(*(iVar11 + 0x110) + 0x10) <= arg2) {
                    arg2 = 0;
                }
                unaff_x22 = iVar5;
                *(unaff_x20 + 0x1a0) = arg2;
            } while (unaff_x22 <= unaff_x27);
            *(piVar6 + 1) = iVar7;
            *(unaff_x20 + 0xe0) = piVar6;
            *(piVar6 + 5) = iVar5;
            unaff_x22 = pcStack_b0;
            if (*(unaff_x20 + 0xa4) < 1) {
                iVar5 = ___ratelimit(obj.usb_read_work_fn._rs.29,"usb_read_work_fn");
                if (iVar5 != 0) {
                    _dev_err(*(iVar11 + 8) + 0x38,"Drop data, offset = %d, seq = %d, irq = %d\n",*(unaff_x20 + 0x1a0)
                             ,iStack_a4,*(unaff_x20 + 0xa0));
                }
                *(*(iVar11 + 0x148) + 0x28) = *(*(iVar11 + 0x148) + 0x28) + iVar7;
                kfree(piVar6[4]);
                kfree(piVar6);
                *(unaff_x20 + 0xe0) = 0;
            }
            else {
                iVar5 = usb_qdss_write(*(*(iVar11 + 0x148) + 8),*(unaff_x20 + 0xe0));
                if (iVar5 != 0) {
                    kfree(piVar6[4]);
                    kfree(piVar6);
                    *(unaff_x20 + 0xe0) = 0;
                    iVar4 = ___ratelimit(obj.usb_read_work_fn._rs.27,"usb_read_work_fn");
                    if (iVar4 != 0) {
                        _dev_err(*(iVar11 + 8) + 0x38,"Write data failed:%d\n",iVar5);
                    }
                    unaff_x24 = 0xffff;
                    unaff_x27 = no_llseek;
                    if (iVar5 != -0xb) goto code_r0x0800b3b4;
                    goto code_r0x0800af8c;
                }
                *(unaff_x20 + 0x1a8) = *(unaff_x20 + 0x1a8) + iVar7;
                Hint_Prefetch(piStack_b8,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piStack_b8,0x10);
                    if (bVar3) {
                        *piStack_b8 = *piStack_b8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            unaff_x24 = 0xffff;
            unaff_x27 = no_llseek;
        }
        if (*unaff_x28 < 1) goto code_r0x0800af8c;
        uVar10 = 1;
        while( true ) {
            Hint_Prefetch(unaff_x28,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(unaff_x28,0x10);
                if (bVar3) {
                    *unaff_x28 = *unaff_x28 - uVar10;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
code_r0x0800af8c:
            if (*(iVar11 + 0x84) == 1) break;
code_r0x0800b3f0:
            iVar7 = *(iVar11 + 8);
            pcVar9 = "TMC has been stopped.\n";
code_r0x0800b418:
            _dev_err(iVar7 + 0x38,pcVar9);
code_r0x0800b3b4:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail();
            uVar10 = extraout_x10;
        }
    } while( true );
}


// ===== sym.tmc_probe.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003628 (size 8) =====

uint64_t sym.tmc_probe.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint8_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t *arg2;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    code *pcStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    iStack_80 = 0;
    pcStack_78 = NULL;
    pcStack_90 = NULL;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    arg2 = devm_kmalloc(param_1,0x160,0xdc0);
    if (arg2 != NULL) {
        *(param_1 + 0x98) = arg2;
        uVar6 = devm_ioremap_resource(param_1,param_1 + 0x390);
        if (0xfffffffffffff000 < uVar6) goto code_r0x08003f14;
        *arg2 = uVar6;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        *(arg2 + 0xc) = 0;
        uStack_60 = uVar6;
        __mutex_init(arg2 + 0x12,"&drvdata->mem_lock",obj.tmc_driver);
        uVar3 = sym.readl_relaxed(*arg2 + 0xfc8);
        uVar10 = 0;
        uVar5 = uVar3 >> 6 & 3;
        uVar6 = (uVar3 >> 8 & 7) - 2;
        *(arg2 + 0x11) = uVar5;
        if (uVar6 < 4) {
            uVar10 = *(uVar6 * 4 + 0x8001da0);
        }
        *(arg2 + 0x8c) = uVar10;
        *(arg2 + 100) = 0xffffffff;
        if (uVar5 == 1) {
            uStack_4c = 0;
            iVar4 = fwnode_property_read_u32_array(*(param_1 + 0x2f8),"arm,buffer-size",&uStack_4c,1);
            uVar7 = *(param_1 + 0x2f8);
            uVar5 = uStack_4c;
            if (iVar4 != 0) {
                uVar5 = 0x100000;
            }
            uStack_4c = 0;
            *(arg2 + 0x7c) = uVar5;
            iVar4 = fwnode_property_read_u32_array(uVar7,"arm,max-burst-size",&uStack_4c,1);
            uVar5 = uStack_4c;
            if (0xe < uStack_4c || iVar4 != 0) {
                uVar5 = 0xf;
            }
            *(arg2 + 0x10) = uVar5;
        }
        else {
            iVar4 = sym.readl_relaxed(*arg2 + 4);
            *(arg2 + 0x7c) = iVar4 << 2;
        }
        iVar4 = of_get_coresight_csr_name(*(param_1 + 0x2f0),arg2 + 0x26);
        if (iVar4 == 0) {
            uVar6 = coresight_csr_get(arg2[0x26]);
            arg2[0x25] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                uVar6 = 0xfffffdfb;
                goto code_r0x08003f14;
            }
        }
        iVar4 = arg2[0x11];
        *(arg2 + 0x2b) = 0;
        iStack_80 = param_1;
        if (iVar4 == 2) {
            uStack_a0 = 0x200000003;
            pcVar2 = obj.etf_devs;
            uStack_98 = CONCAT44(uStack_98._4_4_,3);
            pcStack_90 = reloc.tmc_etf_sink_ops.llvm.7976420984312273428;
            pcStack_78 = obj.coresight_tmc_etf_groups;
        }
        else if (iVar4 == 1) {
            uStack_a0 = 0x300000001;
            pcStack_90 = reloc.tmc_etr_sink_ops.llvm.6969920923464708993;
            pcStack_78 = obj.coresight_tmc_etr_groups;
            if (*(param_2 + 8) == 0) {
                uVar10 = 0;
            }
            else {
                uVar10 = *(*(param_2 + 8) + 0x10);
            }
            piVar11 = *(param_1 + 0x98);
            uVar5 = sym.readl_relaxed(*piVar11 + 0xfb8);
            if ((~uVar5 & 3) != 0) {
                uVar6 = 0xfffffff3;
                goto code_r0x08003f14;
            }
            if (*(piVar11 + 0xc4) != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x80041ac);
                (*pcVar2)();
            }
            *(piVar11 + 0xc4) = uVar10;
            if (((uVar3 >> 0x18 & 1) == 0) &&
               (uVar6 = fwnode_property_present(*(param_1 + 0x2f8),"arm,scatter-gather"), (uVar6 & 1) != 0)) {
                *(piVar11 + 0xc4) = *(piVar11 + 0xc4) | 1;
            }
            uVar5 = 0;
            if ((uVar3 & 0x10000) != 0) {
                uVar5 = uVar3 >> 0x11 & 0x7f;
            }
            uVar6 = 0xffffffffff;
            uVar3 = uVar5 - 0x20 >> 2 | uVar5 << 0x1e;
            if ((uVar3 < 6) && (uVar3 != 1)) {
                _dev_info(param_1,"Detected dma mask %dbits\n",uVar5);
                uVar6 = 0xffffffffffffffff;
                if (uVar5 != 0x40) {
                    uVar6 = ~(-1L << (uVar5 & 0x3f));
                }
            }
            uVar5 = dma_set_mask(param_1,uVar6);
            if (uVar5 != 0) {
                uVar6 = uVar5;
                _dev_err(param_1,"Failed to setup DMA mask: %d\n",uVar6);
                goto code_r0x08003f14;
            }
            dma_set_coherent_mask(param_1,uVar6);
            arg2[0x1b] = 0;
            arg2[0x19] = 0x1000000400000000;
            arg2[0x1a] = 0;
            __mutex_init(arg2 + 0x1c,"&drvdata->idr_mutex",obj.tmc_driver);
            iVar4 = of_property_read_variable_u32_array(*(param_1 + 0x2f0),"csr-atid-offset",arg2 + 0x27,1,0);
            if (-1 < iVar4) {
                coresight_set_csr_ops(reloc.tmc_etr_set_atid.88a4ec656571db6fc7776a5033ac1a61.cfi_jt);
            }
            uVar6 = sym.byte_cntr_init(param_1,arg2);
            uVar7 = *(param_1 + 0x2f8);
            arg2[0x24] = uVar6;
            uVar6 = fwnode_property_present(uVar7,"qcom,mem_support");
            if ((uVar6 & 1) != 0) {
                *(arg2 + 0x13c) = *(arg2 + 0x13c) | 2;
            }
            uVar8 = sym.tmc_etr_usb_init(param_1,arg2);
            uVar6 = uVar8 & 0xffffffff;
            if (uVar8 != 0) goto code_r0x08003f14;
            uVar8 = sym.tmc_etr_eth_init(param_1,arg2);
            uVar6 = uVar8 & 0xffffffff;
            if (uVar8 != 0) goto code_r0x08003f14;
            uVar1 = *(arg2 + 0x13c);
            if ((uVar1 >> 1 & 1) == 0) {
                if ((uVar1 >> 2 & 1) != 0) {
                    uVar10 = 2;
                    goto code_r0x08004198;
                }
                if ((uVar1 >> 3 & 1) != 0) {
                    uVar10 = 3;
                    goto code_r0x08004198;
                }
                *(arg2 + 0x28) = 0;
            }
            else {
                uVar10 = 1;
code_r0x08004198:
                *(arg2 + 0x28) = uVar10;
            }
            pcVar2 = obj.etr_devs;
        }
        else {
            if (iVar4 != 0) {
                _printk(0x800154b,uStack_70);
                uVar6 = 0xffffffea;
                goto code_r0x08003f14;
            }
            uStack_a0 = 0x200000001;
            pcVar2 = obj.etb_devs;
            pcStack_78 = obj.coresight_tmc_etf_groups;
            pcStack_90 = obj.tmc_etb_cs_ops;
        }
        uStack_70 = coresight_alloc_device_name(pcVar2,param_1);
        if (uStack_70 != 0) {
            uVar6 = coresight_get_platform_data(param_1);
            if (uVar6 < 0xfffffffffffff001) {
                *(param_1 + 0x90) = uVar6;
                uStack_88 = uVar6;
                uVar6 = coresight_register(&uStack_a0);
                arg2[1] = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    *(arg2 + 2) = 0xff;
                    arg2[3] = uStack_70;
                    arg2[4] = obj.tmc_fops;
                    uVar8 = misc_register();
                    uVar6 = uVar8 & 0xffffffff;
                    if (uVar8 == 0) {
                        __pm_runtime_idle(param_1,5);
                    }
                    else {
                        coresight_unregister(arg2[1]);
                    }
                    goto code_r0x08003f14;
                }
            }
            uVar6 = uVar6 & 0xffffffff;
            goto code_r0x08003f14;
        }
    }
    uVar6 = 0xfffffff4;
code_r0x08003f14:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return uVar6 & 0xffffffff;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.tmc_remove;
    iVar9 = *(iVar9 + 0x98);
    if ((*(iVar9 + 0x88) == 1) && (*(iVar9 + 0x120) != 0)) {
        sym.byte_cntr_remove(*(iVar9 + 0x120));
    }
    coresight_remove_csr_ops();
    misc_deregister(iVar9 + 0x10);
    uVar6 = coresight_unregister(*(iVar9 + 8));
    return uVar6;
}


// ===== sym.__typeid__ZTSFvP7etr_bufyyE_global_addr @ 0x08003630 (size 8) =====

void sym.__typeid__ZTSFvP7etr_bufyyE_global_addr(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = param_2 - *(param_1 + 0x18);
    uVar1 = *(**(param_1 + 0x38) + 0x60);
    *(param_1 + 0x20) = iVar5;
    if (*(param_1 + 8) == '\0') {
        uVar4 = param_3 - param_2;
        uVar3 = *(param_1 + 0x10);
    }
    else {
        uVar3 = *(param_1 + 0x10);
        uVar4 = uVar3;
    }
    *(param_1 + 0x28) = uVar4;
    iVar2 = (*(param_1 + 0x38))[1];
    if (uVar4 + iVar5 <= uVar3) {
        iVar2 = iVar2 + iVar5;
        uVar3 = uVar4;
    }
    dma_sync_single_for_cpu(uVar1,iVar2,uVar3,2);
    return;
}


// ===== sym.tmc_etr_sync_sg_buf.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x08003638 (size 8) =====

void sym.tmc_etr_sync_sg_buf.88a4ec656571db6fc7776a5033ac1a61.cfi_jt
               (int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong uVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    int iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar11 = **(param_1 + 0x38);
    uVar1 = *(piVar11 + 8);
    if (0 < uVar1) {
        puVar8 = piVar11[9];
        uVar12 = param_2;
        puVar6 = puVar8;
        uVar14 = uVar1;
        do {
            uVar7 = *puVar6;
            if ((param_2 >= uVar7 && param_2 <= uVar7 + 0x1000) && (param_2 < uVar7 || uVar7 + 0x1000 != param_2)) {
                uVar14 = uVar12 - uVar7;
                if (-1 < uVar14) {
                    iVar4 = 0;
                    goto code_r0x08008684;
                }
                break;
            }
            uVar12 = uVar12 + 0x1000;
            uVar14 = uVar14 - 1;
            puVar6 = puVar6 + 1;
        } while (uVar14 != 0);
    }
    iVar4 = *piVar11;
    pcVar5 = "Unable to map RRP %llx to offset\n";
    param_3 = param_2;
    goto code_r0x0800876c;
    while( true ) {
        iVar4 = iVar4 + -0x1000;
        puVar8 = puVar8 + 1;
        uVar7 = uVar7 + 0x1000;
        if (uVar1 * 0x1000 + iVar4 == 0) break;
code_r0x08008684:
        uVar9 = *puVar8;
        if ((param_3 >= uVar9 && param_3 <= uVar9 + 0x1000) && (param_3 < uVar9 || uVar9 + 0x1000 != param_3)) {
            iVar4 = (param_3 - uVar9) - iVar4;
            if (-1 < iVar4) {
                *(param_1 + 0x20) = uVar14;
                if (*(param_1 + 8) == '\0') {
                    if (iVar4 < uVar14) {
                        iVar4 = *(param_1 + 0x10);
                    }
                    else {
                        iVar4 = 0;
                    }
                    iVar4 = (((iVar4 + uVar7) - uVar9) + param_3) - uVar12;
                }
                else {
                    iVar4 = *(param_1 + 0x10);
                }
                uVar14 = uVar14 >> 0xc;
                uVar12 = iVar4 + 0xfffU >> 0xc;
                *(param_1 + 0x28) = iVar4;
                if (uVar12 + uVar14 <= uVar14) {
                    return;
                }
                uVar10 = *(*piVar11 + 0x60);
                do {
                    iVar2 = piVar11[8];
                    iVar3 = 0;
                    iVar13 = uVar14;
                    if (iVar2 != 0) {
                        iVar3 = iVar13 / iVar2;
                    }
                    dma_sync_single_for_cpu(uVar10,*(piVar11[9] + (iVar13 - iVar3 * iVar2) * 8),0x1000,2);
                    uVar14 = iVar13 + 1;
                    uVar1 = uVar12 - 1;
                    uVar12 = uVar1;
                } while (uVar1 != 0);
                return;
            }
            break;
        }
    }
    iVar4 = *piVar11;
    pcVar5 = "Unable to map RWP %llx to offset\n";
code_r0x0800876c:
    _dev_warn(iVar4,pcVar5,param_3);
    *(param_1 + 0x28) = 0;
    return;
}


// ===== sym.tmc_alloc_sg_table.cfi_jt @ 0x08003640 (size 8) =====

int64_t * sym.tmc_alloc_sg_table.cfi_jt(int64_t param_1,uint32_t param_2,uint param_3,uint param_4)

{
    ulong uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *arg1;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = kmem_cache_alloc_trace(__dev_err,0xdc0,0x58);
    if (piVar3 == NULL) {
        return 0xfffffffffffffff4;
    }
    *(piVar3 + 4) = param_2;
    *piVar3 = param_1;
    arg1 = piVar3 + 8;
    *arg1 = param_4;
    arg1_00 = piVar3 + 5;
    *arg1_00 = param_3;
    iVar2 = sym.tmc_pages_alloc(arg1,param_1,param_2,2);
    if (iVar2 == 0) {
        uVar1 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            uVar1 = 0x68000000000f03;
        }
        iVar4 = vmap(piVar3[10],piVar3[8],4,uVar1);
        piVar3[2] = iVar4;
        if (iVar4 != 0) {
            iVar2 = sym.tmc_pages_alloc(arg1_00,*piVar3,0xffffffff,1);
            if (iVar2 != 0) goto code_r0x08006d44;
            uVar1 = 0x68000000000703;
            if (arm64_use_ng_mappings != 0x0) {
                uVar1 = 0x68000000000f03;
            }
            iVar4 = vmap(piVar3[7],piVar3[5],4,uVar1);
            piVar3[1] = iVar4;
            if (iVar4 != 0) {
                piVar3[3] = *piVar3[6];
                return piVar3;
            }
        }
        iVar2 = -0xc;
    }
code_r0x08006d44:
    if (piVar3[1] != 0) {
        vunmap(piVar3[1]);
    }
    sym.tmc_pages_free(arg1_00,*piVar3,1);
    if (piVar3[2] != 0) {
        vunmap();
    }
    sym.tmc_pages_free(arg1,*piVar3,2);
    kfree(piVar3);
    return iVar2;
}


// ===== sym.tmc_read.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003648 (size 8) =====

uint64_t sym.tmc_read.ded25bd53a521677430a4aaba1e36727.cfi_jt
                   (int64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0xd8);
    uStack_50 = 0;
    mutex_lock(iVar4 + 0x80);
    iVar2 = *(iVar4 + 0x78);
    if (iVar2 == 2) {
code_r0x0800562c:
        uVar5 = sym.tmc_etb_get_sysfs_trace(iVar4 + -0x10,*param_4,param_3,&uStack_50);
code_r0x08005650:
        if (uVar5 < 1) {
            uVar5 = 0;
        }
        else {
            if (uVar5 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80056f0);
                (*pcVar1)();
            }
            auVar6 = __check_object_size(uStack_50,uVar5,1);
            iVar3 = sym._copy_to_user(param_2,auVar6,uVar5);
            if (iVar3 == 0) {
                *param_4 = *param_4 + uVar5;
            }
            else {
                uVar5 = 0xfffffffffffffff2;
            }
        }
    }
    else {
        if (iVar2 == 1) {
            uVar5 = sym.tmc_etr_get_sysfs_trace(iVar4 + -0x10,*param_4,param_3,&uStack_50);
            goto code_r0x08005650;
        }
        uVar5 = 0;
        if (iVar2 == 0) goto code_r0x0800562c;
    }
    mutex_unlock(iVar4 + 0x80);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.tmc_open;
    iVar4 = *(auVar6._8_8_ + 0xd8);
    iVar2 = *(iVar4 + 0x78);
    iVar4 = iVar4 + -0x10;
    if (iVar2 != 2) {
        if (iVar2 == 1) {
            uVar5 = sym.tmc_read_prepare_etr(iVar4);
            iVar2 = uVar5;
            goto joined_r0x08005738;
        }
        if (iVar2 != 0) {
            return 0xffffffea;
        }
    }
    uVar5 = sym.tmc_read_prepare_etb(iVar4);
    iVar2 = uVar5;
joined_r0x08005738:
    if (iVar2 == 0) {
        nonseekable_open(auVar6._0_8_,auVar6._8_8_);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.tmc_etr_byte_cntr_read.2f72300410bb282f6ec7d0c8732833fd.cfi_jt @ 0x08003650 (size 8) =====

uint64_t sym.tmc_etr_byte_cntr_read.2f72300410bb282f6ec7d0c8732833fd.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t iVar11;
    int64_t unaff_x21;
    uint64_t uVar12;
    int64_t iVar13;
    int *unaff_x25;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar13 = *(param_1 + 0xd8);
    uStack_60 = 0;
    iVar11 = *(iVar13 + 0x180);
    if (param_2 == 0) {
        uVar7 = 0xffffffffffffffea;
        param_2 = unaff_x21;
        goto code_r0x08009dd0;
    }
    unaff_x19 = iVar13 + 0x148;
    mutex_lock(unaff_x19);
    if (*(iVar13 + 0x91) == '\0') {
code_r0x08009d28:
        uVar7 = sym.tmc_etr_flush_remaining_bytes(iVar11,*(iVar13 + 0x1a0),param_3,&uStack_60);
    }
    else {
        if (*(iVar13 + 0x90) != '\0') {
            unaff_x25 = iVar13 + 0xa0;
            if (*unaff_x25 == 0) {
                mutex_unlock(unaff_x19);
                if ((*unaff_x25 < 1) && (*(iVar13 + 0x90) != '\0')) {
                    uStack_70 = 0;
                    uStack_68 = 0;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_88 = 0;
                    init_wait_entry(&uStack_88,0);
                    iVar8 = iVar13 + 0xa8;
                    iVar6 = prepare_to_wait_event(iVar8,&uStack_88,1);
                    iVar9 = *(iVar13 + 0xa0);
                    while ((iVar9 < 1 && (*(iVar13 + 0x90) != '\0'))) {
                        if (iVar6 != 0) {
                            if (iVar6 != 0) {
                                uVar7 = 0xfffffffffffffe00;
                                goto code_r0x08009dd0;
                            }
                            goto code_r0x08009c94;
                        }
                        schedule();
                        iVar6 = prepare_to_wait_event(iVar8,&uStack_88,1);
                        iVar9 = *unaff_x25;
                    }
                    finish_wait(iVar8,&uStack_88);
                }
code_r0x08009c94:
                mutex_lock(unaff_x19);
                if (*(iVar13 + 0x91) == '\0') goto code_r0x08009d28;
            }
            uVar1 = *(iVar13 + 0x98);
            uVar14 = uVar1;
            uVar12 = *(iVar13 + 0x1a0);
            uVar7 = uVar14;
            if (param_3 < uVar14) {
                uVar4 = 0;
                if (uVar1 != 0) {
                    uVar4 = uVar12 / uVar1;
                }
                uVar10 = uVar12 - uVar4 * uVar1;
                uVar7 = uVar14 - uVar10;
                if (uVar10 + param_3 <= uVar14) {
                    uVar7 = param_3;
                }
            }
            uVar7 = sym.tmc_etr_buf_get_data(*(*(iVar13 + 0x180) + 0x110),uVar12,uVar7,&uStack_60);
            if (uVar7 == uVar14) goto code_r0x08009e50;
            uVar12 = uVar7 + (uVar12 & 0xffffffff);
            uVar10 = 0;
            if (uVar14 != 0) {
                uVar10 = uVar12 / uVar14;
            }
            if (uVar12 == uVar10 * uVar14) goto code_r0x08009e50;
            goto joined_r0x08009d4c;
        }
        uVar7 = sym.tmc_etr_flush_remaining_bytes(iVar11,*(iVar13 + 0x1a0),param_3,&uStack_60);
    }
    if (uVar7 < 1) {
        uVar7 = 0xffffffffffffffea;
        goto code_r0x08009dc8;
    }
joined_r0x08009d4c:
    while( true ) {
        if (uVar7 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8009e68);
            (*pcVar5)();
        }
        noname_1 = __check_object_size(uStack_60,uVar7,1);
        iVar8 = sym._copy_to_user_1(param_2,noname_1,uVar7);
        if (iVar8 == 0) {
            uVar12 = *(iVar13 + 0x1a0) + uVar7;
            *(iVar13 + 0x1a8) = *(iVar13 + 0x1a8) + uVar7;
            if (*(iVar11 + 0x7c) <= uVar12) {
                uVar12 = 0;
            }
            *(iVar13 + 0x1a0) = uVar12;
        }
        else {
            uVar7 = 0xfffffffffffffff2;
        }
code_r0x08009dc8:
        mutex_unlock(unaff_x19);
code_r0x08009dd0:
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
code_r0x08009e50:
        Hint_Prefetch(unaff_x25,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x25,0x10);
            if (bVar3) {
                *unaff_x25 = *unaff_x25 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return uVar7;
}


// ===== sym.__typeid__ZTSFlP7etr_bufymPPcE_global_addr @ 0x08003658 (size 8) =====

ulong sym.__typeid__ZTSFlP7etr_bufymPPcE_global_addr(int64_t param_1,int64_t param_2,ulong param_3,int64_t *param_4)

{
    *param_4 = *(*(param_1 + 0x38) + 0x10) + param_2;
    return param_3;
}


// ===== sym.tmc_etr_get_data_sg_buf.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x08003660 (size 8) =====

uint64_t sym.tmc_etr_get_data_sg_buf.88a4ec656571db6fc7776a5033ac1a61.cfi_jt
                   (int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar1 = *(**(param_1 + 0x38) + 0x40) << 0xc;
    uVar2 = uVar1 - param_2;
    if (param_2 <= uVar1 && uVar2 != 0) {
        if (uVar2 <= param_3) {
            param_3 = uVar2;
        }
        uVar2 = 0x1000 - (param_2 & 0xfff);
        if (uVar2 <= param_3) {
            param_3 = uVar2;
        }
        if (param_3 != 0) {
            *param_4 = ((*(*(**(param_1 + 0x38) + 0x50) + (param_2 >> 0xc) * 8) & 0x3ffffffffffc0) << 6 |
                       0xff00000000000000) + (param_2 & 0xfff);
        }
        return param_3;
    }
    return 0xffffffffffffffea;
}


// ===== sym.etr_handler.2f72300410bb282f6ec7d0c8732833fd.cfi_jt @ 0x08003668 (size 8) =====

ulong sym.etr_handler.2f72300410bb282f6ec7d0c8732833fd.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_2 + 0x180) + 0x140);
    if (iVar2 == 1) {
        piVar1 = param_2 + 0xa0;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar5 = 0xa8;
    }
    else {
        if (iVar2 != 2) goto code_r0x08009b04;
        piVar1 = param_2 + 0xa0;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar5 = 0xc0;
    }
    __wake_up(param_2 + iVar5,3,1,0);
code_r0x08009b04:
    *(param_2 + 0x1b0) = *(param_2 + 0x1b0) + 1;
    return 1;
}


// ===== sym.tmc_enable_etf_link.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt @ 0x08003670 (size 8) =====

int sym.tmc_enable_etf_link.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    int *piVar5;
    ulong *in_x18;
    int64_t *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x98) + 0x98);
    uVar4 = _raw_spin_lock_irqsave(arg1 + 0xc);
    if (arg1[0xd] == '\0') {
        if (**(param_1 + 0x3c8) == 0) {
            iVar3 = coresight_claim_device(arg1[1]);
            if (iVar3 != 0) goto code_r0x08006918;
            sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
            DataSynchronizationBarrier(3,3,0);
            sym.tmc_wait_for_tmcready(arg1);
            sym.writel_relaxed(2,*arg1 + 0x28);
            sym.writel_relaxed(3,*arg1 + 0x304);
            sym.writel_relaxed(0,*arg1 + 0x34);
            sym.writel_relaxed.llvm.7170818669875191139(1,*arg1 + 0x20);
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed(0,*arg1 + 0xfb0);
            *(arg1 + 0x84) = 1;
        }
        piVar5 = *(param_1 + 0x3c8);
        Hint_Prefetch(piVar5,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
                *piVar5 = *piVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar3 = 0;
    }
    else {
        iVar3 = -0x10;
    }
code_r0x08006918:
    _raw_spin_unlock_irqrestore(arg1 + 0xc,uVar4);
    return iVar3;
}


// ===== sym.tmc_update_etr_buffer.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x08003678 (size 8) =====

code * sym.tmc_update_etr_buffer.88a4ec656571db6fc7776a5033ac1a61.cfi_jt
                 (int64_t param_1,int64_t param_2,int64_t param_3)

{
    code *pcVar1;
    bool bVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    code *pcVar9;
    code *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    code *arg1;
    code *pcVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    iVar12 = *(param_3 + 8);
    arg1 = *(*(param_1 + 0x98) + 0x98);
    pcVar10 = arg1 + 0x60;
    uVar4 = _raw_spin_lock_irqsave(pcVar10);
    if (**(param_1 + 0x3c8) != 1) {
        _raw_spin_unlock_irqrestore(pcVar10,uVar4);
        pcVar9 = NULL;
        goto code_r0x0800922c;
    }
    if (*(arg1 + 0x118) != iVar12) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x8009278);
        (*pcVar10)();
    }
    sym.writel_relaxed_1(0xc5acce55,*arg1 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    sym.tmc_flush_and_stop(arg1);
    sym.tmc_sync_etr_buf(arg1);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed_1(0,*arg1 + 0xfb0);
    _raw_spin_unlock_irqrestore(pcVar10,uVar4);
    uVar4 = *(iVar12 + 0x20);
    pcVar10 = *(iVar12 + 0x28);
    if ((*(param_3 + 0x14) == '\0') && (*(param_2 + 0x18) < pcVar10)) {
        uVar4 = sym.tmc_get_memwidth_mask(arg1);
        pcVar10 = *(param_2 + 0x18) & uVar4 & 0xffffffff;
        uVar6 = *(iVar12 + 0x10);
        uVar4 = (*(iVar12 + 0x20) - pcVar10) + *(iVar12 + 0x28);
        uVar8 = 0;
        if (uVar6 <= uVar4) {
            uVar8 = uVar6;
        }
        uVar4 = uVar4 - uVar8;
    }
    else {
        if (*(iVar12 + 8) == '\0') {
            bVar2 = false;
            pcVar9 = pcVar10;
            goto code_r0x080090e8;
        }
        uVar6 = *(iVar12 + 0x10);
    }
    pcVar9 = uVar6 - uVar4;
    puStack_70 = NULL;
    arg1 = *(*(iVar12 + 0x30) + 0x10);
    if (1 < (arg1 + -0x8003658 >> 3 | arg1 << 0x3d)) goto code_r0x08009298;
    while( true ) {
        if (0xf < pcVar9) {
            pcVar9 = 0x10;
        }
        uVar6 = (*arg1)(iVar12,uVar4,pcVar9,&puStack_70);
        uVar3 = _kfree;
        if (uVar6 < 0x10) {
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x800,0x8009290);
            (*pcVar10)();
        }
        if (puStack_70 != NULL) {
            *puStack_70 = _coresight_barrier_pkt;
            puStack_70[1] = uVar3;
        }
        bVar2 = true;
        pcVar9 = pcVar10;
code_r0x080090e8:
        puStack_70 = NULL;
        pcVar10 = pcVar9;
        if (pcVar9 != NULL) {
            iVar12 = *(param_3 + 8);
            iVar14 = *(param_3 + 0x20);
            uVar8 = *(param_3 + 0x18) << 0xc;
            uVar6 = 0;
            if (uVar8 != 0) {
                uVar6 = *(param_2 + 0x28) / uVar8;
            }
            uVar6 = *(param_2 + 0x28) - uVar6 * uVar8;
            arg1 = uVar6 & 0xfff;
            uVar6 = uVar6 >> 0xc;
            do {
                pcVar13 = *(*(iVar12 + 0x30) + 0x10);
                uVar7 = *(iVar12 + 0x10);
                uVar8 = 0;
                if (uVar7 <= uVar4) {
                    uVar8 = uVar7;
                }
                iVar11 = uVar4 - uVar8;
                if (1 < (pcVar13 + -0x8003658 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0x9790b0527eae5c52,pcVar13,0x8001170);
                }
                pcVar1 = pcVar10;
                if (uVar7 - iVar11 <= pcVar10) {
                    pcVar1 = uVar7 - iVar11;
                }
                iVar5 = (*pcVar13)(iVar12,iVar11,pcVar1,&puStack_70);
                if (iVar5 < 1) {
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x800,0x80091f4);
                    (*pcVar10)();
                }
                if (0x1000 - arg1 <= iVar5) {
                    iVar5 = 0x1000 - arg1;
                }
                memcpy(arg1 + *(iVar14 + uVar6 * 8),puStack_70,iVar5);
                pcVar10 = pcVar10 + -iVar5;
                arg1 = arg1 + iVar5;
                uVar8 = uVar6;
                if (arg1 == 0x1000) {
                    arg1 = NULL;
                    uVar8 = 0;
                    if (uVar6 + 1 != *(param_3 + 0x18)) {
                        uVar8 = uVar6 + 1;
                    }
                }
                uVar4 = iVar5 + iVar11;
                uVar6 = uVar8;
            } while (pcVar10 != NULL);
        }
        if (*(param_3 + 0x14) != '\0') {
            *(param_2 + 0x28) = pcVar9 + *(param_2 + 0x28);
        }
        DataMemoryBarrier(2,2);
        if ((bVar2) && (*(param_3 + 0x14) == '\0')) {
            perf_aux_output_flag(param_2,1);
        }
code_r0x0800922c:
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x08009298:
        __cfi_slowpath_diag(0x9790b0527eae5c52,arg1,0x8001170);
    }
    return pcVar9;
}


// ===== sym.tmc_update_etf_buffer.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt @ 0x08003680 (size 8) =====

uint64_t sym.tmc_update_etf_buffer.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt
                   (int64_t param_1,int64_t param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint uVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *arg1;
    uint64_t uVar12;
    uint64_t uVar13;
    code *pcVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == NULL) {
        uVar12 = 0;
    }
    else {
        arg1 = *(*(param_1 + 0x98) + 0x98);
        if (*(arg1 + 0x84) != 2) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80062ac);
            (*pcVar2)();
        }
        uVar8 = _raw_spin_lock_irqsave(arg1 + 0xc);
        if (**(param_1 + 0x3c8) == 1) {
            sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
            DataSynchronizationBarrier(3,3,0);
            sym.tmc_flush_and_stop(arg1);
            iVar10 = *arg1;
            iVar5 = sym.readl_relaxed_1(iVar10 + 0x14);
            sym.readl_relaxed_1(iVar10 + 0x38);
            iVar10 = *arg1;
            uVar6 = sym.readl_relaxed_1(iVar10 + 0x18);
            iVar10 = sym.readl_relaxed_1(iVar10 + 0x3c);
            uVar4 = sym.readl_relaxed_1(*arg1 + 0xc);
            if ((uVar4 & 1) == 0) {
                uVar1 = uVar6 - iVar5 & *(arg1 + 0x7c) - 1U;
            }
            else {
                uVar1 = *(arg1 + 0x7c);
            }
            uVar12 = uVar1;
            uVar4 = uVar4 & 1;
            if (param_3[8] == '\0') {
                if (*(param_2 + 0x18) < uVar12) {
                    uVar12 = sym.tmc_get_memwidth_mask(arg1);
                    iVar11 = *arg1;
                    uVar12 = *(param_2 + 0x18) & uVar12 & 0xffffffff;
                    uVar9 = (uVar6 | iVar10 << 0x20) - uVar12;
                    uVar13 = uVar9 + *(arg1 + 0x7c);
                    if (uVar13 <= *(arg1 + 0x7c) - 1) {
                        uVar9 = uVar13;
                    }
                    sym.writel_relaxed(uVar9 & 0xffffffff,iVar11 + 0x14);
                    sym.writel_relaxed(uVar9 >> 0x20,iVar11 + 0x38);
                    uVar4 = 1;
                    bVar3 = param_3[8] != '\0';
                }
                else {
                    bVar3 = false;
                }
                if ((!bVar3) && (uVar4 != 0)) {
                    perf_aux_output_flag(param_2,1);
                }
            }
            if (uVar12 != 0) {
                uVar13 = *(param_3 + 4);
                uVar6 = *param_3;
                pcVar2 = coresight_barrier_pkt;
                iVar5 = 4;
                do {
                    iVar10 = *(*(param_3 + 10) + uVar6 * 8);
                    uVar7 = sym.readl_relaxed_1(*arg1 + 0x10);
                    *(iVar10 + uVar13) = uVar7;
                    pcVar14 = pcVar2;
                    if ((uVar4 & iVar5 - 4U < 0x10) == 1) {
                        pcVar14 = pcVar2 + 4;
                        *(iVar10 + uVar13) = *pcVar2;
                    }
                    uVar13 = uVar13 + 4;
                    if (0xfff < uVar13) {
                        uVar13 = 0;
                        uVar6 = param_3[1] - 1 & uVar6 + 1;
                    }
                    uVar9 = iVar5;
                    pcVar2 = pcVar14;
                    iVar5 = iVar5 + 4;
                } while (uVar9 < uVar12);
            }
            if (param_3[8] != '\0') {
                *(param_2 + 0x28) = *(param_2 + 0x28) + uVar12;
            }
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed(0,*arg1 + 0xfb0);
        }
        else {
            uVar12 = 0;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0xc,uVar8);
    }
    return uVar12;
}


// ===== sym.__typeid__ZTSFiP11tmc_drvdataP7etr_bufiPPvE_global_addr @ 0x08003688 (size 8) =====

ulong sym.__typeid__ZTSFiP11tmc_drvdataP7etr_bufiPPvE_global_addr(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(param_1 + 8);
    uVar14 = *(param_2 + 0x10);
    iVar7 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar7 = 0x30;
    }
    puVar1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x10);
    if (puVar1 != NULL) {
        uVar14 = uVar14 >> 0xc;
        uVar3 = uVar14;
        if (uVar3 < 0x3ff) {
            iVar4 = 0;
        }
        else {
            iVar4 = uVar3 / 0x3ff - (uVar3 % 0x3ff < 2);
        }
        puVar2 = sym.tmc_alloc_sg_table(iVar13 + 0x38,param_3,iVar4 + uVar3 + 0x3ffU >> 10,uVar14);
        if (puVar2 < 0xfffffffffffff001) {
            *puVar1 = puVar2;
            puVar1[1] = puVar2[3];
            uVar3 = puVar2[8];
            uVar14 = puVar2[9];
            if (uVar3 < 0x3ff) {
                iVar4 = 0;
            }
            else {
                iVar4 = uVar3 / 0x3ff - (uVar3 % 0x3ff < 2);
            }
            puVar5 = puVar2[1];
            iVar4 = uVar3 + iVar4 + -1;
            if (iVar4 < 1) {
                iVar7 = 0;
            }
            else {
                iVar8 = 0;
                uVar3 = 0;
                iVar9 = 0;
                uVar10 = puVar2[6];
                puVar6 = puVar5;
                do {
                    iVar7 = iVar8;
                    iVar13 = uVar10 + (iVar9 + 1) * 8;
                    if (uVar3 != 0x3ff) {
                        iVar8 = iVar8 + 1;
                        iVar13 = uVar14 + iVar7 * 8;
                    }
                    uVar11 = 2;
                    if (uVar3 == 0x3ff) {
                        uVar11 = 3;
                    }
                    uVar3 = uVar3 + 1 & 0x3ff;
                    if (uVar3 == 0) {
                        iVar9 = iVar9 + 1;
                    }
                    iVar4 = iVar4 + -1;
                    puVar5 = puVar6 + 1;
                    *puVar6 = *(iVar13 + 1) & 0xfffffff0 | uVar11;
                    puVar6 = puVar5;
                } while (iVar4 != 0);
                iVar7 = iVar8;
            }
            *puVar5 = *(uVar14 + iVar7 * 8) >> 8 & 0xfffffff0 | 1;
            if (0 < puVar2[5]) {
                iVar7 = 0;
                uVar12 = *(*puVar2 + 0x60);
                do {
                    dma_sync_single_for_device(uVar12,*(puVar2[6] + iVar7 * 8),0x1000,1);
                    iVar7 = iVar7 + 1;
                } while (iVar7 < puVar2[5]);
            }
        }
        else {
            kfree(puVar1);
            puVar1 = puVar2;
        }
        if (puVar1 < 0xfffffffffffff001) {
            uVar14 = puVar1[1];
            *(param_2 + 0x38) = puVar1;
            *(param_2 + 0x18) = uVar14;
            *(param_2 + 4) = 1;
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.tmc_etr_alloc_flat_buf.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x08003690 (size 8) =====

ulong sym.tmc_etr_alloc_flat_buf.88a4ec656571db6fc7776a5033ac1a61.cfi_jt
                (int64_t param_1,int64_t param_2,ulong param_3,int64_t param_4)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_4 == 0) {
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        uVar1 = *(*(param_1 + 8) + 0x98);
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x28);
        if (piVar2 == NULL) {
            uVar1 = 0xfffffff4;
        }
        else {
            piVar3 = dma_alloc_noncontiguous(uVar1,*(param_2 + 0x10),2,0xcc0,0);
            piVar2[4] = piVar3;
            if (piVar3 == NULL) {
                kfree(piVar2);
                uVar1 = 0xfffffff4;
            }
            else {
                uVar5 = *(param_2 + 0x10);
                iVar7 = *(*piVar3 + 0x10);
                piVar2[1] = iVar7;
                iVar4 = dma_vmap_noncontiguous(uVar1,uVar5,piVar3);
                iVar6 = *(param_2 + 0x10);
                piVar2[2] = iVar4;
                if (iVar4 == 0) {
                    dma_free_noncontiguous(uVar1,iVar6,piVar3,2);
                    uVar1 = 0xfffffff4;
                    piVar2[4] = 0;
                }
                else {
                    iVar4 = *(param_1 + 8);
                    uVar1 = 0;
                    piVar2[3] = iVar6;
                    *(param_2 + 0x18) = iVar7;
                    *(param_2 + 4) = 0;
                    *(param_2 + 0x38) = piVar2;
                    *piVar2 = iVar4 + 0x38;
                }
            }
        }
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.tmc_sg_table_sync_data_range.cfi_jt @ 0x08003698 (size 8) =====

void sym.tmc_sg_table_sync_data_range.cfi_jt(int64_t *param_1,uint64_t param_2,int64_t param_3)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong uVar4;
    uint64_t uVar5;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_2 = param_2 >> 0xc;
    uVar5 = param_3 + 0xfffU >> 0xc;
    if (param_2 < uVar5 + param_2) {
        uVar4 = *(*param_1 + 0x60);
        do {
            iVar1 = param_1[8];
            iVar2 = 0;
            iVar6 = param_2;
            if (iVar1 != 0) {
                iVar2 = iVar6 / iVar1;
            }
            dma_sync_single_for_cpu(uVar4,*(param_1[9] + (iVar6 - iVar2 * iVar1) * 8),0x1000,2);
            param_2 = iVar6 + 1;
            uVar3 = uVar5 - 1;
            uVar5 = uVar3;
        } while (uVar3 != 0);
    }
    return;
}


// ===== sym.no_llseek.cfi_jt @ 0x080036a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tmc_sg_table_sync_table.cfi_jt @ 0x080036a8 (size 8) =====

void sym.tmc_sg_table_sync_table.cfi_jt(int64_t *param_1)

{
    ulong *in_x18;
    ulong uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < param_1[5]) {
        iVar2 = 0;
        uVar1 = *(*param_1 + 0x60);
        do {
            dma_sync_single_for_device(uVar1,*(param_1[6] + iVar2 * 8),0x1000,1);
            iVar2 = iVar2 + 1;
        } while (iVar2 < param_1[5]);
    }
    return;
}


// ===== sym.tmc_free_sg_table.cfi_jt @ 0x080036b0 (size 8) =====

void sym.tmc_free_sg_table.cfi_jt(int64_t *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1[1] != 0) {
        vunmap();
    }
    sym.tmc_pages_free(param_1 + 5,*param_1,1);
    if (param_1[2] != 0) {
        vunmap();
    }
    sym.tmc_pages_free(param_1 + 8,*param_1,2);
    return;
}


// ===== sym.tmc_free_etr_buffer.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x080036b8 (size 8) =====

void sym.tmc_free_etr_buffer.88a4ec656571db6fc7776a5033ac1a61.cfi_jt(int64_t *param_1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int *piVar4;
    ulong *in_x18;
    int *piVar5;
    int64_t iVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = param_1[1];
    if (piVar5 != NULL) {
        iVar8 = *param_1;
        iVar6 = iVar8 + 0xe0;
        mutex_lock(iVar6);
        Hint_Prefetch(piVar5,2,0,1);
        do {
            iVar1 = *piVar5;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
                *piVar5 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            piVar4 = idr_remove(iVar8 + 200,param_1[2]);
            mutex_unlock(iVar6);
            if ((piVar4 != NULL) && (piVar5 != piVar4)) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x8008eb4);
                (*pcVar7)();
            }
            iVar6 = param_1[1];
            if ((*(iVar6 + 0x30) == 0) || (pcVar7 = *(*(iVar6 + 0x30) + 0x18), pcVar7 == NULL)) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x8008e7c);
                (*pcVar7)();
            }
            if (1 < (pcVar7 + -0x8003710 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0xc1d48fc971739e38,pcVar7,0x80011d0);
            }
            (*pcVar7)(iVar6);
            kfree(iVar6);
        }
        else {
            if (iVar1 < 1) {
                refcount_warn_saturate(piVar5,3);
            }
            mutex_unlock(iVar6);
        }
    }
    kfree(param_1);
    return;
}


// ===== sym.tmc_free_etf_buffer.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt @ 0x080036c0 (size 8) =====

void sym.tmc_free_etf_buffer.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.tmc_remove.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080036c8 (size 8) =====

void sym.tmc_remove.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if ((*(iVar1 + 0x88) == 1) && (*(iVar1 + 0x120) != 0)) {
        sym.byte_cntr_remove(*(iVar1 + 0x120));
    }
    coresight_remove_csr_ops();
    misc_deregister(iVar1 + 0x10);
    coresight_unregister(*(iVar1 + 8));
    return;
}


// ===== sym.tmc_shutdown.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080036d0 (size 8) =====

void sym.tmc_shutdown.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x60);
    if (((*(arg1 + 0x84) != 0) && (*(arg1 + 0x88) == 1)) &&
       ((*(arg1 + 0x140) == 1 || ((*(arg1 + 0x140) == 2 && (**(arg1 + 0x148) == 2)))))) {
        sym.tmc_etr_disable_hw(arg1);
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar1);
    return;
}


// ===== sym.usb_notifier.cfi_jt @ 0x080036d8 (size 8) =====

void sym.usb_notifier.cfi_jt(int64_t param_1,int param_2,int64_t param_3,ulong param_4)

{
    uint32_t *puVar1;
    int64_t *piVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    int64_t iVar9;
    ulong uVar10;
    char *pcVar11;
    int *piVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_48 = *(iVar13 + 0x5e0);
    if (param_1 == 0) goto code_r0x0800a814;
    if (*(param_1 + 0x140) != 2) {
        iVar13 = *(param_1 + 8);
        pcVar11 = "%s: ETR is not USB mode.\n";
code_r0x0800a594:
        _dev_err(iVar13 + 0x38,pcVar11,"usb_notifier");
        goto code_r0x0800a814;
    }
    if (param_2 == 3) {
        if (**(param_1 + 0x148) == 2) {
            sym.usb_write_done(*(param_1 + 0x120),param_3);
        }
        goto code_r0x0800a814;
    }
    if (param_2 == 1) {
        if (*(param_1 + 0x84) != 0) {
            if (**(param_1 + 0x148) == 2) {
                iVar13 = *(param_1 + 0x120);
                if (iVar13 == 0) {
                    iVar13 = 0;
                }
                else {
                    mutex_lock(iVar13 + 0x118);
                    if (*(iVar13 + 0x91) != '\0') {
                        *(iVar13 + 0x91) = 0;
                        __wake_up(iVar13 + 0xc0,3,1,0);
                        _printk(0x8001267);
                        coresight_csr_set_byte_cntr(*(iVar13 + 0x178),*(iVar13 + 0x198),0);
                        *(iVar13 + 0x1b0) = 0;
                    }
                    mutex_unlock(iVar13 + 0x118);
                    iVar13 = *(param_1 + 0x120);
                }
                flush_work(iVar13 + 0xe8);
                usb_qdss_free_req(*(*(param_1 + 0x148) + 8));
            }
            else if (**(param_1 + 0x148) == 1) {
                uVar10 = _raw_spin_lock_irqsave(param_1 + 0x60);
                sym.__tmc_etr_disable_to_bam(*(param_1 + 0x148));
                _raw_spin_unlock_irqrestore(param_1 + 0x60,uVar10);
                if ((*(param_1 + 0x148) != 0) && (iVar13 = *(*(param_1 + 0x148) + 0x10), *(iVar13 + 0x188) != '\0')) {
                    sps_disconnect(*(iVar13 + 0x98));
                    sps_free_endpoint(*(iVar13 + 0x98));
                    *(iVar13 + 0x188) = 0;
                }
            }
            goto code_r0x0800a814;
        }
        pcVar8 = obj.usb_notifier._rs.4;
code_r0x0800a568:
        iVar5 = ___ratelimit(pcVar8,"usb_notifier");
        if (iVar5 == 0) goto code_r0x0800a814;
        iVar13 = *(param_1 + 8);
        pcVar11 = "%s: ETR is disabled.\n";
        goto code_r0x0800a594;
    }
    if (param_2 != 0) goto code_r0x0800a814;
    if (*(param_1 + 0x84) == 0) {
        pcVar8 = obj.usb_notifier._rs;
        goto code_r0x0800a568;
    }
    piVar12 = *(param_1 + 0x148);
    if (*piVar12 == 2) {
        iVar13 = *(param_1 + 0x120);
        if (iVar13 != 0) {
            iVar7 = iVar13 + 0x118;
            iVar6 = *(iVar13 + 0x180);
            mutex_lock(iVar7);
            _dev_info(*(iVar6 + 8) + 0x38,"%s: Start usb bypass\n","usb_bypass_start");
            if (*(iVar6 + 0x84) == 1) {
                iVar9 = sym.tmc_get_rwp_offset(iVar6);
                if (iVar9 < 0) {
                    _dev_err(*(iVar6 + 8) + 0x38,"%s: invalid rwp offset value\n","usb_bypass_start");
                    mutex_unlock(iVar7);
                    if (iVar9 < 0) goto code_r0x0800a814;
                }
                else {
                    *(iVar13 + 0x1a0) = iVar9;
                    *(*(iVar6 + 0x148) + 0x28) = 0;
                    *(*(iVar6 + 0x148) + 0x20) = 0;
                    if (*(*(iVar6 + 0x148) + 8) == 0) {
                        uVar14 = 0xffffff9c;
                        do {
                            bVar4 = 0xfffffffe < uVar14;
                            uVar14 = uVar14 + 1;
                            if (bVar4) {
                                _dev_err(*(iVar6 + 8) + 0x38,"timeout while waiting usbch to be ready\n");
                                goto code_r0x0800a8cc;
                            }
                            __const_udelay(0x10c7);
                        } while (*(*(iVar6 + 0x148) + 8) == 0);
                    }
                    *(iVar13 + 0xa4) = 0xff;
                    *(iVar13 + 0x91) = 1;
                    coresight_csr_set_byte_cntr(*(iVar13 + 0x178),*(iVar13 + 0x198),0x2000);
                    *(iVar13 + 0xa0) = 0;
                    *(iVar13 + 0x1a8) = 0;
                    mutex_unlock(iVar7);
                }
                usb_qdss_alloc_req(param_4,0xff);
                queue_work_on(0x20,*(*(param_1 + 0x120) + 0xd8),*(param_1 + 0x120) + 0xe8);
            }
            else {
code_r0x0800a8cc:
                mutex_unlock(iVar7);
            }
        }
        goto code_r0x0800a814;
    }
    if (*piVar12 != 1) goto code_r0x0800a814;
    iVar13 = *(piVar12 + 4);
    iVar7 = *(piVar12 + 6);
    get_qdss_bam_connection_info(iVar13 + 0x138,iVar13 + 0x140,iVar13 + 0x130,iVar13 + 0x148,iVar13 + 0x168,0);
    if ((*(iVar13 + 1) >> 1 & 1) != 0) {
        iVar6 = dma_map_resource(*(*(iVar7 + 8) + 0x98),*(iVar13 + 0x170),*(iVar13 + 0x180),0,0);
        if (iVar6 != 0) {
            *(iVar13 + 0x178) = iVar6;
            iVar7 = dma_map_resource(*(*(iVar7 + 8) + 0x98),*(iVar13 + 0x150),*(iVar13 + 0x160),0,0);
            if (iVar7 != 0) {
                *(iVar13 + 0x158) = iVar7;
                goto code_r0x0800a3f4;
            }
        }
        _dev_err(*(param_1 + 8) + 0x38,"ETR get usb bam data failed\n");
    }
code_r0x0800a3f4:
    iVar13 = *(param_1 + 0x148);
    uStack_50 = 0;
    if (iVar13 == 0) {
code_r0x0800a6f4:
        _dev_err(*(param_1 + 8) + 0x38,"ETR BAM enable failed\n");
    }
    else {
        iVar7 = *(iVar13 + 0x10);
        if (*(iVar7 + 0x188) == '\0') {
            iVar13 = *(iVar13 + 0x18);
            iVar5 = sps_device_reset(*(iVar7 + 0x90));
            if (iVar5 == 0) {
                iVar6 = sps_alloc_endpoint();
                *(iVar7 + 0x98) = iVar6;
                if (iVar6 != 0) {
                    iVar5 = sps_get_config(iVar6,iVar7 + 0xa0);
                    if (iVar5 == 0) {
                        *(iVar7 + 0xb0) = 0;
                        *(iVar7 + 0xa0) = *(iVar7 + 0x90);
                        *(iVar7 + 0x118) = 4;
                        *(iVar7 + 0xd4) = 0x20000000;
                        *(iVar7 + 200) = *(iVar7 + 0x140);
                        *(iVar7 + 0xcc) = 0;
                        *(iVar7 + 0xb8) = *(iVar7 + 0x138);
                        *(iVar7 + 0xd8) = *(iVar7 + 0x148);
                        *(iVar7 + 0xe0) = *(iVar7 + 0x150);
                        *(iVar7 + 0xe8) = *(iVar7 + 0x158);
                        *(iVar7 + 0xf0) = *(iVar7 + 0x160);
                        *(iVar7 + 0xf8) = *(iVar7 + 0x168);
                        *(iVar7 + 0x100) = *(iVar7 + 0x170);
                        *(iVar7 + 0x108) = *(iVar7 + 0x178);
                        *(iVar7 + 0x110) = *(iVar7 + 0x180);
                        if ((*(iVar7 + 1) >> 1 & 1) != 0) {
                            iVar5 = sym.get_usb_bam_iova(*(*(iVar13 + 8) + 0x98),*(iVar7 + 0x138),&uStack_50);
                            if (iVar5 != 0) goto code_r0x0800a6ec;
                            *(iVar7 + 0xc0) = uStack_50;
                        }
                        iVar5 = sps_connect(*(iVar7 + 0x98),iVar7 + 0xa0);
                        if (iVar5 == 0) {
                            *(iVar7 + 0x188) = 1;
                            goto code_r0x0800a708;
                        }
                    }
code_r0x0800a6ec:
                    sps_free_endpoint(*(iVar7 + 0x98));
                }
            }
            goto code_r0x0800a6f4;
        }
    }
code_r0x0800a708:
    uVar10 = _raw_spin_lock_irqsave(param_1 + 0x60);
    iVar13 = *(param_1 + 0x148);
    if (*(iVar13 + 0x21) == '\0') {
        puVar1 = *(iVar13 + 0x10);
        piVar2 = *(iVar13 + 0x18);
        msm_qdss_csr_enable_bam_to_usb(piVar2[0x25]);
        sym.writel_relaxed_2(0xc5acce55,*piVar2 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_2(puVar1[0x60] >> 2,*piVar2 + 4);
        sym.writel_relaxed_2(0,*piVar2 + 0x28);
        sym.writel_relaxed_2(0xf02,*piVar2 + 0x110);
        iVar7 = 0x170;
        if ((*puVar1 & 0x200) != 0) {
            iVar7 = 0x178;
        }
        sym.writel_relaxed_2(*(puVar1 + iVar7),*piVar2 + 0x118);
        sym.writel_relaxed_2((puVar1 + iVar7)[1],*piVar2 + 0x11c);
        sym.writel_relaxed_2(0x133,*piVar2 + 0x304);
        sym.writel_relaxed_2(*(piVar2 + 0x18),*piVar2 + 0x1c);
        sym.writel_relaxed.llvm.7170818669875191139(1,*piVar2 + 0x20);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_2(0,*piVar2 + 0xfb0);
        msm_qdss_csr_enable_flush(piVar2[0x25]);
        *(iVar13 + 0x21) = 1;
    }
    _raw_spin_unlock_irqrestore(param_1 + 0x60,uVar10);
code_r0x0800a814:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_48) {
        auVar15 = __stack_chk_fail();
        iVar13 = auVar15._8_8_;
        *extraout_x18 = sym.usb_write_done;
        piVar12 = auVar15._0_8_ + 0xa4;
        Hint_Prefetch(piVar12,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
                *piVar12 = *piVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar5 = *(iVar13 + 0x10);
        if ((((iVar5 != -0x6c) && (iVar5 != -0x68)) && (iVar5 != 0)) &&
           (iVar5 = ___ratelimit(obj.usb_write_done._rs,"usb_write_done"), iVar5 != 0)) {
            _printk(0x8001ac2,*(iVar13 + 0x10));
        }
        kfree(*(iVar13 + 0x20));
        kfree(iVar13);
        return;
    }
    return;
}


// ===== sym.tmc_etr_remove_catu_ops.cfi_jt @ 0x080036e0 (size 8) =====

void sym.tmc_etr_remove_catu_ops.cfi_jt(void)

{
    _segment.ehdr = 0;
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080036e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_unregister(obj.tmc_driver);
    return;
}


// ===== sym.tmc_enable_etf_sink.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt @ 0x080036f0 (size 8) =====

ulong sym.tmc_enable_etf_sink.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt(int64_t param_1,int param_2,int64_t param_3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 2) {
        uVar1 = sym.tmc_enable_etf_sink_perf(param_1,param_3);
    }
    else if (param_2 == 1) {
        uVar1 = sym.tmc_enable_etf_sink_sysfs(param_1);
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.tmc_enable_etr_sink.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x080036f8 (size 8) =====

uint sym.tmc_enable_etr_sink.88a4ec656571db6fc7776a5033ac1a61.cfi_jt(int64_t param_1,int param_2,int64_t param_3)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 2) {
        uVar2 = sym.tmc_enable_etr_sink_perf(param_1,param_3);
    }
    else if (param_2 == 1) {
        iVar1 = *(*(param_1 + 0x98) + 0x98) + 0x90;
        mutex_lock(iVar1);
        uVar2 = sym.tmc_enable_etr_sink_sysfs(param_1);
        mutex_unlock(iVar1);
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.tmc_alloc_etf_buffer.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt @ 0x08003700 (size 8) =====

void sym.tmc_alloc_etf_buffer.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt
               (ulong param_1,int64_t param_2,ulong param_3,uint param_4,uint8_t param_5)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x30);
    if (iVar2 != 0) {
        iVar3 = *(param_2 + 0x2a0);
        *(iVar2 + 0x28) = param_3;
        uVar1 = *(iVar3 + 0x5d8);
        *(iVar2 + 0x20) = param_5 & 1;
        *(iVar2 + 4) = param_4;
        *(iVar2 + 8) = uVar1;
    }
    return;
}


// ===== sym.tmc_alloc_etr_buffer.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x08003708 (size 8) =====

int64_t * sym.tmc_alloc_etr_buffer.88a4ec656571db6fc7776a5033ac1a61.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t param_3,uint32_t param_4,uint8_t param_5)

{
    int64_t iVar1;
    uint uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t arg1;
    uint64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg1 = *(*(param_1 + 0x98) + 0x98);
    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
    if (piVar3 == NULL) {
        return NULL;
    }
    if (*(param_2 + 0x28c) == -1) {
        uVar5 = *(arg1 + 0x7c);
        if (uVar5 < param_4 << 0xc) {
            uVar4 = sym.tmc_alloc_etr_buf(arg1,param_4 << 0xc,0xffffffff);
            if (uVar4 < 0xfffffffffffff001) goto code_r0x08008d28;
            uVar5 = *(arg1 + 0x7c);
        }
        arg2 = uVar5;
        do {
            uVar4 = sym.tmc_alloc_etr_buf(arg1,arg2,0xffffffff);
            if (uVar4 < 0xfffffffffffff001) goto code_r0x08008d28;
            uVar4 = arg2 >> 0x15;
            arg2 = arg2 >> 1;
        } while (uVar4 != 0);
    }
    else {
        uVar4 = sym.get_perf_etr_buf_cpu_wide(arg1,param_2,param_4);
code_r0x08008d28:
        if (uVar4 < 0xfffffffffffff001) {
            *piVar3 = arg1;
            piVar3[1] = uVar4;
            if (0xfffffffffffff000 < piVar3) {
                return NULL;
            }
            uVar2 = *(*(param_2 + 0x2a0) + 0x5d8);
            *(piVar3 + 0x14) = param_5 & 1;
            *(piVar3 + 3) = param_4;
            piVar3[4] = param_3;
            *(piVar3 + 2) = uVar2;
            return piVar3;
        }
    }
    kfree(piVar3);
    return NULL;
}


// ===== sym.__typeid__ZTSFvP7etr_bufE_global_addr @ 0x08003710 (size 8) =====

void sym.__typeid__ZTSFvP7etr_bufE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong *puVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0x38);
    if (puVar1 != NULL) {
        piVar2 = *puVar1;
        if (piVar2[1] != 0) {
            vunmap();
        }
        sym.tmc_pages_free(piVar2 + 5,*piVar2,1);
        if (piVar2[2] != 0) {
            vunmap();
        }
        sym.tmc_pages_free(piVar2 + 8,*piVar2,2);
        kfree(puVar1);
    }
    return;
}


// ===== sym.tmc_etr_free_flat_buf.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x08003718 (size 8) =====

void sym.tmc_etr_free_flat_buf.88a4ec656571db6fc7776a5033ac1a61.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0x38);
    if ((piVar1 != NULL) && (piVar1[1] != 0)) {
        uVar2 = *(*piVar1 + 0x60);
        dma_vunmap_noncontiguous(uVar2,piVar1[2]);
        dma_free_noncontiguous(uVar2,*(param_1 + 0x10),piVar1[4],2);
        piVar1[2] = 0;
        piVar1[4] = 0;
    }
    kfree(piVar1);
    return;
}


// ===== sym.tmc_disable_etr_sink.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x08003720 (size 8) =====

uint sym.tmc_disable_etr_sink.88a4ec656571db6fc7776a5033ac1a61.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x98) + 0x98) + 0x90;
    mutex_lock(iVar1);
    uVar2 = sym._tmc_disable_etr_sink(param_1,0);
    mutex_unlock(iVar1);
    return uVar2;
}


// ===== sym.tmc_disable_etf_sink.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt @ 0x08003728 (size 8) =====

ulong sym.tmc_disable_etf_sink.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt(int64_t param_1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    ulong uVar5;
    int *piVar6;
    ulong *in_x18;
    int64_t arg1;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x98) + 0x98);
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0x60);
    if (*(arg1 + 0x68) == '\0') {
        piVar6 = *(param_1 + 0x3c8);
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar1 = *piVar6;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar1 + -1 == 0) {
            if (*(arg1 + 0x84) == 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8005f4c);
                (*pcVar4)();
            }
            sym.__tmc_etb_disable_hw(arg1);
            coresight_disclaim_device(*(arg1 + 8));
            uVar7 = 0;
            *(arg1 + 0x84) = 0;
            *(arg1 + 100) = 0xffffffff;
            goto code_r0x08005ee4;
        }
    }
    uVar7 = 0xfffffff0;
code_r0x08005ee4:
    _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar5);
    return uVar7;
}


// ===== sym.tmc_etr_get_catu_device.cfi_jt @ 0x08003730 (size 8) =====

ulong sym.tmc_etr_get_catu_device.cfi_jt(void)

{
    return 0;
}


// ===== sym.tmc_etr_set_atid.88a4ec656571db6fc7776a5033ac1a61.cfi_jt @ 0x08003738 (size 8) =====

void sym.tmc_etr_set_atid.88a4ec656571db6fc7776a5033ac1a61.cfi_jt(int64_t param_1,uint param_2,uint param_3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x98) + 0x98);
    coresight_csr_set_etr_atid(*(iVar1 + 0x128),*(iVar1 + 0x138),param_2,param_3);
    return;
}


// ===== sym.tmc_sg_table_get_data.cfi_jt @ 0x08003740 (size 8) =====

uint64_t sym.tmc_sg_table_get_data.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar1 = *(param_1 + 0x40) << 0xc;
    uVar2 = uVar1 - param_2;
    if (param_2 <= uVar1 && uVar2 != 0) {
        if (uVar2 <= param_3) {
            param_3 = uVar2;
        }
        uVar2 = 0x1000 - (param_2 & 0xfff);
        if (uVar2 <= param_3) {
            param_3 = uVar2;
        }
        if (param_3 != 0) {
            *param_4 = ((*(*(param_1 + 0x50) + (param_2 >> 0xc) * 8) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) +
                       (param_2 & 0xfff);
        }
        return param_3;
    }
    return 0xffffffffffffffea;
}


// ===== sym.tmc_release.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003748 (size 8) =====

ulong sym.tmc_release.ded25bd53a521677430a4aaba1e36727.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    int64_t arg1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_2 + 0xd8) + 0x78);
    arg1 = *(param_2 + 0xd8) + -0x10;
    if (iVar1 != 2) {
        if (iVar1 == 1) {
            uVar2 = sym.tmc_read_unprepare_etr(arg1);
            return uVar2;
        }
        if (iVar1 != 0) {
            return 0xffffffea;
        }
    }
    uVar2 = sym.tmc_read_unprepare_etb(arg1);
    return uVar2;
}


// ===== sym.tmc_open.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003750 (size 8) =====

ulong sym.tmc_open.ded25bd53a521677430a4aaba1e36727.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    int64_t arg1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_2 + 0xd8) + 0x78);
    arg1 = *(param_2 + 0xd8) + -0x10;
    if (iVar1 != 2) {
        if (iVar1 == 1) {
            uVar2 = sym.tmc_read_prepare_etr(arg1);
            iVar1 = uVar2;
            goto joined_r0x08005738;
        }
        if (iVar1 != 0) {
            return 0xffffffea;
        }
    }
    uVar2 = sym.tmc_read_prepare_etb(arg1);
    iVar1 = uVar2;
joined_r0x08005738:
    if (iVar1 == 0) {
        nonseekable_open(param_1,param_2);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.tmc_etr_byte_cntr_open.2f72300410bb282f6ec7d0c8732833fd.cfi_jt @ 0x08003758 (size 8) =====

uint sym.tmc_etr_byte_cntr_open.2f72300410bb282f6ec7d0c8732833fd.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t arg1;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x2b0);
    arg1 = *(iVar3 + 0x180);
    mutex_lock(iVar3 + 0x148);
    if (*(iVar3 + 0x91) == '\0') {
        if ((*(arg1 + 0x84) == 1) && (*(iVar3 + 0x98) != 0)) {
            irq_set_irq_wake(*(iVar3 + 0x9c),1);
            coresight_csr_set_byte_cntr(*(iVar3 + 0x178),*(iVar3 + 0x198),*(iVar3 + 0x98) >> 3);
            *(param_2 + 0xd8) = iVar3;
            nonseekable_open(param_1,param_2);
            *(iVar3 + 0x1a8) = 0;
            *(iVar3 + 0x90) = 0x101;
            uVar1 = sym.tmc_get_rwp_offset(arg1);
            uVar2 = 0;
            *(iVar3 + 0x1a0) = uVar1;
        }
        else {
            uVar2 = 0xffffffea;
        }
    }
    else {
        uVar2 = 0xfffffff0;
    }
    mutex_unlock(iVar3 + 0x148);
    return uVar2;
}


// ===== sym.tmc_etr_byte_cntr_release.2f72300410bb282f6ec7d0c8732833fd.cfi_jt @ 0x08003760 (size 8) =====

ulong sym.tmc_etr_byte_cntr_release.2f72300410bb282f6ec7d0c8732833fd.cfi_jt(ulong param_1,int64_t param_2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_2 + 0xd8);
    iVar9 = *(*(iVar8 + 0x180) + 8);
    mutex_lock(iVar8 + 0x148);
    *(iVar8 + 0x91) = 0;
    *(iVar8 + 0xa0) = 0;
    if (*(iVar8 + 0x90) != '\0') {
        coresight_csr_set_byte_cntr(*(iVar8 + 0x178),*(iVar8 + 0x198),0);
    }
    irq_set_irq_wake(*(iVar8 + 0x9c),0);
    iVar5 = __pm_runtime_resume(*(iVar9 + 0x98),4);
    if (iVar5 < 0) {
        puVar1 = *(iVar9 + 0x98) + 0x1f8;
        uVar7 = *puVar1;
        do {
            uVar6 = uVar7;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar7 = uVar2;
                if (uVar2 != uVar6) goto code_r0x0800a044;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800a044:
        } while (uVar6 != uVar2);
    }
    else {
        sym.tmc_get_rwp_offset(*(iVar8 + 0x180));
        __pm_runtime_idle(*(iVar9 + 0x98),5);
    }
    *(iVar8 + 0x1b0) = 0;
    mutex_unlock(iVar8 + 0x148);
    return 0;
}


// ===== sym.tmc_etr_byte_cntr_start.cfi_jt @ 0x08003768 (size 8) =====

void sym.tmc_etr_byte_cntr_start.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(param_1 + 0x148);
        if ((*(param_1 + 0x98) != 0) && (*(param_1 + 0x91) == '\0')) {
            *(param_1 + 0xa0) = 0;
            *(param_1 + 0x90) = 1;
        }
        mutex_unlock(param_1 + 0x148);
    }
    return;
}


// ===== sym.tmc_etr_byte_cntr_stop.cfi_jt @ 0x08003770 (size 8) =====

void sym.tmc_etr_byte_cntr_stop.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(param_1 + 0x148);
        *(param_1 + 0x90) = 0;
        *(param_1 + 0xa0) = 0;
        __wake_up(param_1 + 0xa8,3,1,0);
        coresight_csr_set_byte_cntr(*(param_1 + 0x178),*(param_1 + 0x198),0);
        mutex_unlock(param_1 + 0x148);
    }
    return;
}


// ===== sym.tmc_disable_etf_link.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt @ 0x08003778 (size 8) =====

void sym.tmc_disable_etf_link.524a2c0afd0e146a9f6f3a36ec44509a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int *piVar6;
    ulong *in_x18;
    int64_t *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x98) + 0x98);
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0xc);
    if (arg1[0xd] == '\0') {
        piVar6 = *(param_1 + 0x3c8);
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar2 = *piVar6;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar4) {
                *piVar6 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar2 + -1 == 0) {
            iVar1 = arg1[1];
            sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
            DataSynchronizationBarrier(3,3,0);
            sym.tmc_flush_and_stop(arg1);
            sym.writel_relaxed.llvm.7170818669875191139(0,*arg1 + 0x20);
            coresight_disclaim_device_unlocked(iVar1);
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed(0,*arg1 + 0xfb0);
            *(arg1 + 0x84) = 0;
        }
    }
    _raw_spin_unlock_irqrestore(arg1 + 0xc,uVar5);
    return;
}


// ===== sym.out_mode_store.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003780 (size 8) =====

int64_t * sym.out_mode_store.ded25bd53a521677430a4aaba1e36727.cfi_jt
                    (int64_t param_1,ulong param_2,ulong *param_3,int64_t *param_4)

{
    code *pcVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *arg3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    int64_t *arg2;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar7 [16];
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    iVar6 = *(*(param_1 + 0x60) + 0x98);
    arg3 = param_3;
    piVar5 = param_4;
    uVar3 = strlen(param_3);
    if (uVar3 < 10) {
        arg3 = &uStack_48;
        iVar2 = sscanf(param_3,0x80013d8);
        if (iVar2 != 1) goto code_r0x08005584;
        iVar2 = sym.tmc_etr_switch_mode(iVar6,&uStack_48);
        if (iVar2 != 0) {
            param_4 = iVar2;
        }
    }
    else {
code_r0x08005584:
        param_4 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return param_4;
    }
    auVar7 = __stack_chk_fail(param_4);
    *extraout_x18 = sym.tmc_read;
    pcStack_88 = sym.tmc_read;
    iVar6 = sp_el0;
    iStack_98 = *(iVar6 + 0x5e0);
    iVar6 = *(auVar7._0_8_ + 0xd8);
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    mutex_lock(iVar6 + 0x80);
    iVar2 = *(iVar6 + 0x78);
    if (iVar2 == 2) {
code_r0x0800562c:
        arg2 = sym.tmc_etb_get_sysfs_trace(iVar6 + -0x10,*piVar5,arg3,&uStack_a0);
code_r0x08005650:
        if (arg2 < 1) {
            arg2 = NULL;
        }
        else {
            if (arg2 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80056f0);
                (*pcVar1)();
            }
            noname_1 = __check_object_size(uStack_a0,arg2,1);
            iVar4 = sym._copy_to_user(auVar7._8_8_,noname_1,arg2);
            if (iVar4 == 0) {
                *piVar5 = *piVar5 + arg2;
            }
            else {
                arg2 = 0xfffffffffffffff2;
            }
        }
    }
    else {
        if (iVar2 == 1) {
            arg2 = sym.tmc_etr_get_sysfs_trace(iVar6 + -0x10,*piVar5,arg3,&uStack_a0);
            goto code_r0x08005650;
        }
        arg2 = NULL;
        if (iVar2 == 0) goto code_r0x0800562c;
    }
    mutex_unlock(iVar6 + 0x80);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_98) {
        return arg2;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.tmc_open;
    iVar6 = *(auVar7._8_8_ + 0xd8);
    iVar2 = *(iVar6 + 0x78);
    iVar6 = iVar6 + -0x10;
    if (iVar2 != 2) {
        if (iVar2 == 1) {
            piVar5 = sym.tmc_read_prepare_etr(iVar6);
            iVar2 = piVar5;
            goto joined_r0x08005738;
        }
        if (iVar2 != 0) {
            return 0xffffffea;
        }
    }
    piVar5 = sym.tmc_read_prepare_etb(iVar6);
    iVar2 = piVar5;
joined_r0x08005738:
    if (iVar2 == 0) {
        nonseekable_open(auVar7._0_8_,auVar7._8_8_);
        piVar5 = NULL;
    }
    return piVar5;
}


// ===== sym.stop_on_flush_store.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003788 (size 8) =====

int64_t sym.stop_on_flush_store.ded25bd53a521677430a4aaba1e36727.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint uVar5;
    uint64_t *puVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar6 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_30 = 0;
    iVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar4 = kstrtoull(param_3,0,&uStack_30);
    if ((iVar4 == 0) && (uStack_30 < 2)) {
        *(iVar9 + 0x158) = uStack_30 != 0;
    }
    else {
        param_4 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.rsz_show;
    piVar10 = *(*(iVar9 + 0x60) + 0x98);
    iVar4 = __pm_runtime_resume(*(iVar9 + 0x60),4);
    if (iVar4 < 0) {
        puVar6 = *(iVar9 + 0x60) + 0x1f8;
        uVar8 = *puVar6;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar6,2,0,1);
            do {
                uVar1 = *puVar6;
                uVar8 = uVar1;
                if (uVar1 != uVar7) goto code_r0x0800451c;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar3) {
                    *puVar6 = uVar7 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800451c:
        } while (uVar7 != uVar1);
    }
    else {
        uVar5 = sym.readl_relaxed(*piVar10 + 4);
        __pm_runtime_idle(*(iVar9 + 0x60),4);
        iVar4 = scnprintf(puVar6,0x1000,"0x%llx\n",uVar5);
    }
    return iVar4;
}


// ===== sym.block_size_store.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003790 (size 8) =====

int64_t sym.block_size_store.ded25bd53a521677430a4aaba1e36727.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar4 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iStack_30 = 0;
    iVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = kstrtoull(param_3,0,&iStack_30);
    if ((iVar3 == 0) && (*(iVar5 + 0x120) != 0)) {
        if (0xffe < iStack_30 - 1U) {
            mutex_lock(*(iVar5 + 0x120) + 0x148);
            *(*(iVar5 + 0x120) + 0x98) = iStack_30;
            mutex_unlock(*(iVar5 + 0x120) + 0x148);
            goto code_r0x08005458;
        }
        _printk(0x8001747);
    }
    param_4 = -0x16;
code_r0x08005458:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.out_mode_show;
    uVar1 = *(*(*(iVar5 + 0x60) + 0x98) + 0x140);
    if (uVar1 < 4) {
        iVar3 = scnprintf(piVar4,0x1000,0x8001abe,*(obj.str_tmc_etr_out_mode + uVar1 * 8));
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80054fc);
    (*pcVar2)();
}


// ===== sym.buffer_size_store.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003798 (size 8) =====

int64_t sym.buffer_size_store.ded25bd53a521677430a4aaba1e36727.cfi_jt
                  (int64_t param_1,ulong param_2,uchar *param_3,int64_t param_4)

{
    int iVar1;
    uint64_t *puVar2;
    uint uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (*(iVar4 + 0x88) == 1) {
        iVar1 = kstrtoull(param_3,0,&uStack_30);
        param_3 = puVar2;
        if (iVar1 == 0) {
            if ((uStack_30 & 0xfff) == 0) {
                *(iVar4 + 0x7c) = uStack_30;
            }
            else {
                param_4 = -0x16;
            }
        }
        else {
            param_4 = iVar1;
        }
    }
    else {
        param_4 = -1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.block_size_show;
    iVar4 = *(*(*(iVar4 + 0x60) + 0x98) + 0x120);
    if (iVar4 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(iVar4 + 0x98);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8001743,uVar3);
    return iVar1;
}


// ===== sym.trigger_cntr_store.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037a0 (size 8) =====

int64_t sym.trigger_cntr_store.ded25bd53a521677430a4aaba1e36727.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_30);
    if (iVar1 == 0) {
        *(iVar3 + 0xc0) = uStack_30;
    }
    else {
        param_4 = iVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.stop_on_flush_show;
    iVar1 = scnprintf(puVar2,0x1000,0x8001954,*(*(*(iVar3 + 0x60) + 0x98) + 0x158));
    return iVar1;
}


// ===== sym.ffsr_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037a8 (size 8) =====

int64_t sym.ffsr_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004b34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004b34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x300);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.block_size_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037b0 (size 8) =====

int64_t sym.block_size_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(*(param_1 + 0x60) + 0x98) + 0x120);
    if (iVar3 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(iVar3 + 0x98);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8001743,uVar2);
    return iVar1;
}


// ===== sym.stop_on_flush_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037b8 (size 8) =====

int64_t sym.stop_on_flush_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001954,*(*(*(param_1 + 0x60) + 0x98) + 0x158));
    return iVar1;
}


// ===== sym.ffcr_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037c0 (size 8) =====

int64_t sym.ffcr_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004c34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004c34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x304);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.pscr_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037c8 (size 8) =====

int64_t sym.pscr_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004e34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004e34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x308);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.axictl_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037d0 (size 8) =====

int64_t sym.axictl_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005140;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005140:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x110);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.ctl_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037d8 (size 8) =====

int64_t sym.ctl_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004a34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004a34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x20);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.mode_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037e0 (size 8) =====

int64_t sym.mode_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004d34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004d34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x28);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.trigger_cntr_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037e8 (size 8) =====

int64_t sym.trigger_cntr_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(*(*(param_1 + 0x60) + 0x98) + 0xc0));
    return iVar1;
}


// ===== sym.rsz_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037f0 (size 8) =====

int64_t sym.rsz_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x0800451c;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800451c:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 4);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.dba_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x080037f8 (size 8) =====

int64_t sym.dba_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar7 = uVar6;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005040;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005040:
        } while (uVar7 != uVar2);
    }
    else {
        iVar9 = *piVar8;
        uVar6 = sym.readl_relaxed(iVar9 + 0x118);
        iVar9 = sym.readl_relaxed(iVar9 + 0x11c);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6 & 0xffffffff | iVar9 << 0x20);
    }
    return iVar5;
}


// ===== sym.devid_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003800 (size 8) =====

int64_t sym.devid_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004f34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004f34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0xfc8);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.trg_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003808 (size 8) =====

int64_t sym.trg_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004934;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004934:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x1c);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.rrp_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003810 (size 8) =====

int64_t sym.rrp_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar7 = uVar6;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004728;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004728:
        } while (uVar7 != uVar2);
    }
    else {
        iVar9 = *piVar8;
        uVar6 = sym.readl_relaxed(iVar9 + 0x14);
        iVar9 = sym.readl_relaxed(iVar9 + 0x38);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6 & 0xffffffff | iVar9 << 0x20);
    }
    return iVar5;
}


// ===== sym.authstatus_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003818 (size 8) =====

int64_t sym.authstatus_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005240;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005240:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0xfb8);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.rwp_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003820 (size 8) =====

int64_t sym.rwp_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar7 = uVar6;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004834;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004834:
        } while (uVar7 != uVar2);
    }
    else {
        iVar9 = *piVar8;
        uVar6 = sym.readl_relaxed(iVar9 + 0x18);
        iVar9 = sym.readl_relaxed(iVar9 + 0x3c);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6 & 0xffffffff | iVar9 << 0x20);
    }
    return iVar5;
}


// ===== sym.out_mode_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003828 (size 8) =====

int64_t sym.out_mode_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(*(param_1 + 0x60) + 0x98) + 0x140);
    if (uVar1 < 4) {
        iVar3 = scnprintf(param_3,0x1000,0x8001abe,*(obj.str_tmc_etr_out_mode + uVar1 * 8));
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80054fc);
    (*pcVar2)();
}


// ===== sym.buffer_size_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003830 (size 8) =====

int64_t sym.buffer_size_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%#x\n",*(*(*(param_1 + 0x60) + 0x98) + 0x7c));
    return iVar1;
}


// ===== sym.sts_show.ded25bd53a521677430a4aaba1e36727.cfi_jt @ 0x08003838 (size 8) =====

int64_t sym.sts_show.ded25bd53a521677430a4aaba1e36727.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x0800461c;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800461c:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0xc);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.tmc_wait_for_tmcready @ 0x08003840 (size 92) =====

ulong sym.tmc_wait_for_tmcready(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 8);
    uVar1 = coresight_timeout(iVar2 + 0x20,0xc,2,1);
    if (uVar1 != 0) {
        _dev_err(iVar2 + 0x38,"timeout while waiting for TMC to be Ready\n");
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.tmc_flush_and_stop @ 0x0800389c (size 200) =====

void sym.tmc_flush_and_stop(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 8);
    uVar1 = sym.readl_relaxed(*arg1 + 0x304);
    sym.writel_relaxed.llvm.7170818669875191139(uVar1 | 0x1000,*arg1 + 0x304);
    sym.writel_relaxed.llvm.7170818669875191139(uVar1 | 0x1040,*arg1 + 0x304);
    iVar2 = coresight_timeout(iVar3 + 0x20,0x304,6,0);
    if (iVar2 != 0) {
        _dev_err(iVar3 + 0x38,"timeout while waiting for completion of Manual Flush\n");
    }
    iVar3 = *(arg1 + 8);
    iVar2 = coresight_timeout(iVar3 + 0x20,0xc,2,1);
    if (iVar2 != 0) {
        _dev_err(iVar3 + 0x38,"timeout while waiting for TMC to be Ready\n");
    }
    return;
}


// ===== sym.readl_relaxed @ 0x08003964 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003968);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800399c);
    return uVar1;
}


// ===== sym.readl_relaxed_1 @ 0x080039d4 (size 108) =====

uint sym.readl_relaxed_1(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80039d8);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003a0c);
    return uVar1;
}


// ===== sym.readl_relaxed_2 @ 0x08003a44 (size 108) =====

uint sym.readl_relaxed_2(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003a48);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003a7c);
    return uVar1;
}


// ===== sym.readl_relaxed_3 @ 0x08003ab4 (size 108) =====

uint sym.readl_relaxed_3(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003ab8);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003aec);
    return uVar1;
}


// ===== sym.readl_relaxed_4 @ 0x08003b24 (size 108) =====

uint sym.readl_relaxed_4(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003b28);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8003b5c);
    return uVar1;
}


// ===== sym.writel_relaxed.llvm.7170818669875191139 @ 0x08003b94 (size 120) =====

void sym.writel_relaxed.llvm.7170818669875191139(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003bb0);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003bd8);
    return;
}


// ===== sym.tmc_disable_stop_on_flush @ 0x08003c0c (size 16) =====

void sym.tmc_disable_stop_on_flush(int64_t arg1)

{
    *(arg1 + 0x158) = 0;
    return;
}


// ===== sym.tmc_enable_hw @ 0x08003c1c (size 48) =====

void sym.tmc_enable_hw(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed.llvm.7170818669875191139(1,*arg1 + 0x20);
    return;
}


// ===== sym.tmc_disable_hw @ 0x08003c4c (size 48) =====

void sym.tmc_disable_hw(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed.llvm.7170818669875191139(0,*arg1 + 0x20);
    return;
}


// ===== sym.tmc_get_memwidth_mask @ 0x08003c7c (size 52) =====

uint sym.tmc_get_memwidth_mask(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = *(arg1 + 0x8c) - 1;
    if (uVar1 < 8) {
        return *(uVar1 * 4 + 0x8001d80);
    }
    return 0;
}


// ===== sym.tmc_probe @ 0x08003cb0 (size 1284) =====

uint64_t sym.tmc_probe(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t *arg2_00;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar11;
    ulong unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    code *pcStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    iStack_80 = 0;
    pcStack_78 = NULL;
    pcStack_90 = NULL;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    arg2_00 = devm_kmalloc(arg1,0x160,0xdc0);
    if (arg2_00 != NULL) {
        *(arg1 + 0x98) = arg2_00;
        uVar6 = devm_ioremap_resource(arg1,arg1 + 0x390);
        if (0xfffffffffffff000 < uVar6) goto code_r0x08003f14;
        *arg2_00 = uVar6;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        *(arg2_00 + 0xc) = 0;
        uStack_60 = uVar6;
        __mutex_init(arg2_00 + 0x12,"&drvdata->mem_lock",obj.tmc_driver);
        uVar3 = sym.readl_relaxed(*arg2_00 + 0xfc8);
        uVar10 = 0;
        uVar5 = uVar3 >> 6 & 3;
        uVar6 = (uVar3 >> 8 & 7) - 2;
        *(arg2_00 + 0x11) = uVar5;
        if (uVar6 < 4) {
            uVar10 = *(uVar6 * 4 + 0x8001da0);
        }
        *(arg2_00 + 0x8c) = uVar10;
        *(arg2_00 + 100) = 0xffffffff;
        if (uVar5 == 1) {
            uStack_4c = 0;
            iVar4 = fwnode_property_read_u32_array(*(arg1 + 0x2f8),"arm,buffer-size",&uStack_4c,1);
            uVar7 = *(arg1 + 0x2f8);
            uVar5 = uStack_4c;
            if (iVar4 != 0) {
                uVar5 = 0x100000;
            }
            uStack_4c = 0;
            *(arg2_00 + 0x7c) = uVar5;
            iVar4 = fwnode_property_read_u32_array(uVar7,"arm,max-burst-size",&uStack_4c,1);
            uVar5 = uStack_4c;
            if (0xe < uStack_4c || iVar4 != 0) {
                uVar5 = 0xf;
            }
            *(arg2_00 + 0x10) = uVar5;
        }
        else {
            iVar4 = sym.readl_relaxed(*arg2_00 + 4);
            *(arg2_00 + 0x7c) = iVar4 << 2;
        }
        iVar4 = of_get_coresight_csr_name(*(arg1 + 0x2f0),arg2_00 + 0x26);
        if (iVar4 == 0) {
            uVar6 = coresight_csr_get(arg2_00[0x26]);
            arg2_00[0x25] = uVar6;
            if (0xfffffffffffff000 < uVar6) {
                uVar6 = 0xfffffdfb;
                goto code_r0x08003f14;
            }
        }
        iVar4 = arg2_00[0x11];
        *(arg2_00 + 0x2b) = 0;
        iStack_80 = arg1;
        if (iVar4 == 2) {
            uStack_a0 = 0x200000003;
            pcVar2 = obj.etf_devs;
            uStack_98 = CONCAT44(uStack_98._4_4_,3);
            pcStack_90 = reloc.tmc_etf_sink_ops.llvm.7976420984312273428;
            pcStack_78 = obj.coresight_tmc_etf_groups;
        }
        else if (iVar4 == 1) {
            uStack_a0 = 0x300000001;
            pcStack_90 = reloc.tmc_etr_sink_ops.llvm.6969920923464708993;
            pcStack_78 = obj.coresight_tmc_etr_groups;
            if (*(arg2 + 8) == 0) {
                uVar10 = 0;
            }
            else {
                uVar10 = *(*(arg2 + 8) + 0x10);
            }
            piVar11 = *(arg1 + 0x98);
            uVar5 = sym.readl_relaxed(*piVar11 + 0xfb8);
            if ((~uVar5 & 3) != 0) {
                uVar6 = 0xfffffff3;
                goto code_r0x08003f14;
            }
            if (*(piVar11 + 0xc4) != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x80041ac);
                (*pcVar2)();
            }
            *(piVar11 + 0xc4) = uVar10;
            if (((uVar3 >> 0x18 & 1) == 0) &&
               (uVar6 = fwnode_property_present(*(arg1 + 0x2f8),"arm,scatter-gather"), (uVar6 & 1) != 0)) {
                *(piVar11 + 0xc4) = *(piVar11 + 0xc4) | 1;
            }
            uVar5 = 0;
            if ((uVar3 & 0x10000) != 0) {
                uVar5 = uVar3 >> 0x11 & 0x7f;
            }
            uVar6 = 0xffffffffff;
            uVar3 = uVar5 - 0x20 >> 2 | uVar5 << 0x1e;
            if ((uVar3 < 6) && (uVar3 != 1)) {
                _dev_info(arg1,"Detected dma mask %dbits\n",uVar5);
                uVar6 = 0xffffffffffffffff;
                if (uVar5 != 0x40) {
                    uVar6 = ~(-1L << (uVar5 & 0x3f));
                }
            }
            uVar5 = dma_set_mask(arg1,uVar6);
            if (uVar5 != 0) {
                uVar6 = uVar5;
                _dev_err(arg1,"Failed to setup DMA mask: %d\n",uVar6);
                goto code_r0x08003f14;
            }
            dma_set_coherent_mask(arg1,uVar6);
            arg2_00[0x1b] = 0;
            arg2_00[0x19] = 0x1000000400000000;
            arg2_00[0x1a] = 0;
            __mutex_init(arg2_00 + 0x1c,"&drvdata->idr_mutex",obj.tmc_driver);
            iVar4 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),"csr-atid-offset",arg2_00 + 0x27,1,0);
            if (-1 < iVar4) {
                coresight_set_csr_ops(reloc.tmc_etr_set_atid.88a4ec656571db6fc7776a5033ac1a61.cfi_jt);
            }
            uVar6 = sym.byte_cntr_init(arg1,arg2_00);
            uVar7 = *(arg1 + 0x2f8);
            arg2_00[0x24] = uVar6;
            uVar6 = fwnode_property_present(uVar7,"qcom,mem_support");
            if ((uVar6 & 1) != 0) {
                *(arg2_00 + 0x13c) = *(arg2_00 + 0x13c) | 2;
            }
            uVar8 = sym.tmc_etr_usb_init(arg1,arg2_00);
            uVar6 = uVar8 & 0xffffffff;
            if (uVar8 != 0) goto code_r0x08003f14;
            uVar8 = sym.tmc_etr_eth_init(arg1,arg2_00);
            uVar6 = uVar8 & 0xffffffff;
            if (uVar8 != 0) goto code_r0x08003f14;
            uVar1 = *(arg2_00 + 0x13c);
            if ((uVar1 >> 1 & 1) == 0) {
                if ((uVar1 >> 2 & 1) != 0) {
                    uVar10 = 2;
                    goto code_r0x08004198;
                }
                if ((uVar1 >> 3 & 1) != 0) {
                    uVar10 = 3;
                    goto code_r0x08004198;
                }
                *(arg2_00 + 0x28) = 0;
            }
            else {
                uVar10 = 1;
code_r0x08004198:
                *(arg2_00 + 0x28) = uVar10;
            }
            pcVar2 = obj.etr_devs;
        }
        else {
            if (iVar4 != 0) {
                _printk(0x800154b,uStack_70);
                uVar6 = 0xffffffea;
                goto code_r0x08003f14;
            }
            uStack_a0 = 0x200000001;
            pcVar2 = obj.etb_devs;
            pcStack_78 = obj.coresight_tmc_etf_groups;
            pcStack_90 = obj.tmc_etb_cs_ops;
        }
        uStack_70 = coresight_alloc_device_name(pcVar2,arg1);
        if (uStack_70 != 0) {
            uVar6 = coresight_get_platform_data(arg1);
            if (uVar6 < 0xfffffffffffff001) {
                *(arg1 + 0x90) = uVar6;
                uStack_88 = uVar6;
                uVar6 = coresight_register(&uStack_a0);
                arg2_00[1] = uVar6;
                if (uVar6 < 0xfffffffffffff001) {
                    *(arg2_00 + 2) = 0xff;
                    arg2_00[3] = uStack_70;
                    arg2_00[4] = obj.tmc_fops;
                    uVar8 = misc_register();
                    uVar6 = uVar8 & 0xffffffff;
                    if (uVar8 == 0) {
                        __pm_runtime_idle(arg1,5);
                    }
                    else {
                        coresight_unregister(arg2_00[1]);
                    }
                    goto code_r0x08003f14;
                }
            }
            uVar6 = uVar6 & 0xffffffff;
            goto code_r0x08003f14;
        }
    }
    uVar6 = 0xfffffff4;
code_r0x08003f14:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return uVar6 & 0xffffffff;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.tmc_remove;
    iVar9 = *(iVar9 + 0x98);
    if ((*(iVar9 + 0x88) == 1) && (*(iVar9 + 0x120) != 0)) {
        sym.byte_cntr_remove(*(iVar9 + 0x120));
    }
    coresight_remove_csr_ops();
    misc_deregister(iVar9 + 0x10);
    uVar6 = coresight_unregister(*(iVar9 + 8));
    return uVar6;
}


// ===== sym.tmc_remove @ 0x080041b4 (size 88) =====

void sym.tmc_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if ((*(iVar1 + 0x88) == 1) && (*(iVar1 + 0x120) != 0)) {
        sym.byte_cntr_remove(*(iVar1 + 0x120));
    }
    coresight_remove_csr_ops();
    misc_deregister(iVar1 + 0x10);
    coresight_unregister(*(iVar1 + 8));
    return;
}


// ===== sym.tmc_shutdown @ 0x0800420c (size 144) =====

void sym.tmc_shutdown(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar1 = _raw_spin_lock_irqsave(arg1_00 + 0x60);
    if (((*(arg1_00 + 0x84) != 0) && (*(arg1_00 + 0x88) == 1)) &&
       ((*(arg1_00 + 0x140) == 1 || ((*(arg1_00 + 0x140) == 2 && (**(arg1_00 + 0x148) == 2)))))) {
        sym.tmc_etr_disable_hw(arg1_00);
    }
    _raw_spin_unlock_irqrestore(arg1_00 + 0x60,uVar1);
    return;
}


// ===== sym.trigger_cntr_show @ 0x0800429c (size 72) =====

int64_t sym.trigger_cntr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(*(*(arg1 + 0x60) + 0x98) + 0xc0));
    return iVar1;
}


// ===== sym.trigger_cntr_store @ 0x080042e4 (size 144) =====

int64_t sym.trigger_cntr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_30);
    if (iVar1 == 0) {
        *(iVar3 + 0xc0) = uStack_30;
    }
    else {
        arg3 = iVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.stop_on_flush_show;
    iVar1 = scnprintf(puVar2,0x1000,0x8001954,*(*(*(iVar3 + 0x60) + 0x98) + 0x158));
    return iVar1;
}


// ===== sym.stop_on_flush_show @ 0x08004374 (size 72) =====

int64_t sym.stop_on_flush_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001954,*(*(*(arg1 + 0x60) + 0x98) + 0x158));
    return iVar1;
}


// ===== sym.stop_on_flush_store @ 0x080043bc (size 160) =====

int64_t sym.stop_on_flush_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint uVar5;
    uint64_t *puVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar6 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_30 = 0;
    iVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar4 = kstrtoull(arg2,0,&uStack_30);
    if ((iVar4 == 0) && (uStack_30 < 2)) {
        *(iVar9 + 0x158) = uStack_30 != 0;
    }
    else {
        arg3 = -0x16;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.rsz_show;
    piVar10 = *(*(iVar9 + 0x60) + 0x98);
    iVar4 = __pm_runtime_resume(*(iVar9 + 0x60),4);
    if (iVar4 < 0) {
        puVar6 = *(iVar9 + 0x60) + 0x1f8;
        uVar8 = *puVar6;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar6,2,0,1);
            do {
                uVar1 = *puVar6;
                uVar8 = uVar1;
                if (uVar1 != uVar7) goto code_r0x0800451c;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar3) {
                    *puVar6 = uVar7 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800451c:
        } while (uVar7 != uVar1);
    }
    else {
        uVar5 = sym.readl_relaxed(*piVar10 + 4);
        __pm_runtime_idle(*(iVar9 + 0x60),4);
        iVar4 = scnprintf(puVar6,0x1000,"0x%llx\n",uVar5);
    }
    return iVar4;
}


// ===== sym.rsz_show @ 0x0800445c (size 256) =====

int64_t sym.rsz_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x0800451c;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800451c:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 4);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.sts_show @ 0x0800455c (size 256) =====

int64_t sym.sts_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x0800461c;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800461c:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0xc);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.rrp_show @ 0x0800465c (size 268) =====

int64_t sym.rrp_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar7 = uVar6;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004728;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004728:
        } while (uVar7 != uVar2);
    }
    else {
        iVar9 = *piVar8;
        uVar6 = sym.readl_relaxed(iVar9 + 0x14);
        iVar9 = sym.readl_relaxed(iVar9 + 0x38);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6 & 0xffffffff | iVar9 << 0x20);
    }
    return iVar5;
}


// ===== sym.rwp_show @ 0x08004768 (size 268) =====

int64_t sym.rwp_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar7 = uVar6;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004834;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004834:
        } while (uVar7 != uVar2);
    }
    else {
        iVar9 = *piVar8;
        uVar6 = sym.readl_relaxed(iVar9 + 0x18);
        iVar9 = sym.readl_relaxed(iVar9 + 0x3c);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6 & 0xffffffff | iVar9 << 0x20);
    }
    return iVar5;
}


// ===== sym.trg_show @ 0x08004874 (size 256) =====

int64_t sym.trg_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004934;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004934:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x1c);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.ctl_show @ 0x08004974 (size 256) =====

int64_t sym.ctl_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004a34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004a34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x20);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.ffsr_show @ 0x08004a74 (size 256) =====

int64_t sym.ffsr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004b34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004b34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x300);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.ffcr_show @ 0x08004b74 (size 256) =====

int64_t sym.ffcr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004c34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004c34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x304);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.mode_show @ 0x08004c74 (size 256) =====

int64_t sym.mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004d34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004d34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x28);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.pscr_show @ 0x08004d74 (size 256) =====

int64_t sym.pscr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004e34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004e34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x308);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.devid_show @ 0x08004e74 (size 256) =====

int64_t sym.devid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08004f34;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08004f34:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0xfc8);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.dba_show @ 0x08004f74 (size 268) =====

int64_t sym.dba_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar6 = *puVar1;
        do {
            uVar7 = uVar6;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar6 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005040;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005040:
        } while (uVar7 != uVar2);
    }
    else {
        iVar9 = *piVar8;
        uVar6 = sym.readl_relaxed(iVar9 + 0x118);
        iVar9 = sym.readl_relaxed(iVar9 + 0x11c);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6 & 0xffffffff | iVar9 << 0x20);
    }
    return iVar5;
}


// ===== sym.axictl_show @ 0x08005080 (size 256) =====

int64_t sym.axictl_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005140;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005140:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0x110);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.authstatus_show @ 0x08005180 (size 256) =====

int64_t sym.authstatus_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08005240;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08005240:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 0xfb8);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.buffer_size_show @ 0x08005280 (size 72) =====

int64_t sym.buffer_size_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%#x\n",*(*(*(arg1 + 0x60) + 0x98) + 0x7c));
    return iVar1;
}


// ===== sym.buffer_size_store @ 0x080052c8 (size 176) =====

int64_t sym.buffer_size_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t *puVar2;
    uint uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (*(iVar4 + 0x88) == 1) {
        iVar1 = kstrtoull(arg2,0,&uStack_30);
        arg2 = puVar2;
        noname_1 = extraout_q0;
        if (iVar1 == 0) {
            if ((uStack_30 & 0xfff) == 0) {
                *(iVar4 + 0x7c) = uStack_30;
            }
            else {
                arg3 = -0x16;
            }
        }
        else {
            arg3 = iVar1;
        }
    }
    else {
        arg3 = -1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar4 = __stack_chk_fail(noname_1);
    *extraout_x18 = sym.block_size_show;
    iVar4 = *(*(*(iVar4 + 0x60) + 0x98) + 0x120);
    if (iVar4 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(iVar4 + 0x98);
    }
    iVar1 = scnprintf(arg2,0x1000,0x8001743,uVar3);
    return iVar1;
}


// ===== sym.block_size_show @ 0x08005378 (size 84) =====

int64_t sym.block_size_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(*(arg1 + 0x60) + 0x98) + 0x120);
    if (iVar3 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(iVar3 + 0x98);
    }
    iVar1 = scnprintf(arg2,0x1000,0x8001743,uVar2);
    return iVar1;
}


// ===== sym.block_size_store @ 0x080053cc (size 208) =====

int64_t sym.block_size_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar4 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iStack_30 = 0;
    iVar5 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = kstrtoull(arg2,0,&iStack_30);
    if ((iVar3 == 0) && (*(iVar5 + 0x120) != 0)) {
        if (0xffe < iStack_30 - 1U) {
            mutex_lock(*(iVar5 + 0x120) + 0x148);
            *(*(iVar5 + 0x120) + 0x98) = iStack_30;
            mutex_unlock(*(iVar5 + 0x120) + 0x148);
            goto code_r0x08005458;
        }
        _printk(0x8001747);
    }
    arg3 = -0x16;
code_r0x08005458:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.out_mode_show;
    uVar1 = *(*(*(iVar5 + 0x60) + 0x98) + 0x140);
    if (uVar1 < 4) {
        iVar3 = scnprintf(piVar4,0x1000,0x8001abe,*(obj.str_tmc_etr_out_mode + uVar1 * 8));
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80054fc);
    (*pcVar2)();
}


// ===== sym.out_mode_show @ 0x0800549c (size 96) =====

int64_t sym.out_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(*(arg1 + 0x60) + 0x98) + 0x140);
    if (uVar1 < 4) {
        iVar3 = scnprintf(arg2,0x1000,0x8001abe,*(obj.str_tmc_etr_out_mode + uVar1 * 8));
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80054fc);
    (*pcVar2)();
}


// ===== sym.out_mode_store @ 0x080054fc (size 192) =====

int64_t sym.out_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *arg3_00;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    uchar auVar7 [16];
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    iVar6 = *(*(arg1 + 0x60) + 0x98);
    arg3_00 = arg2;
    piVar5 = arg3;
    uVar3 = strlen(arg2);
    if (uVar3 < 10) {
        arg3_00 = &uStack_48;
        iVar2 = sscanf(arg2,0x80013d8);
        if (iVar2 != 1) goto code_r0x08005584;
        iVar2 = sym.tmc_etr_switch_mode(iVar6,&uStack_48);
        if (iVar2 != 0) {
            arg3 = iVar2;
        }
    }
    else {
code_r0x08005584:
        arg3 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar7 = __stack_chk_fail(arg3);
    *extraout_x18 = sym.tmc_read;
    pcStack_88 = sym.tmc_read;
    iVar6 = sp_el0;
    iStack_98 = *(iVar6 + 0x5e0);
    iVar6 = *(auVar7._0_8_ + 0xd8);
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    mutex_lock(iVar6 + 0x80);
    iVar2 = *(iVar6 + 0x78);
    if (iVar2 == 2) {
code_r0x0800562c:
        uVar3 = sym.tmc_etb_get_sysfs_trace(iVar6 + -0x10,*piVar5,arg3_00,&uStack_a0);
code_r0x08005650:
        if (uVar3 < 1) {
            uVar3 = 0;
        }
        else {
            if (uVar3 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80056f0);
                (*pcVar1)();
            }
            noname_1_00 = __check_object_size(uStack_a0,uVar3,1);
            iVar4 = sym._copy_to_user(auVar7._8_8_,noname_1_00,uVar3);
            if (iVar4 == 0) {
                *piVar5 = *piVar5 + uVar3;
            }
            else {
                uVar3 = 0xfffffffffffffff2;
            }
        }
    }
    else {
        if (iVar2 == 1) {
            uVar3 = sym.tmc_etr_get_sysfs_trace(iVar6 + -0x10,*piVar5,arg3_00,&uStack_a0);
            goto code_r0x08005650;
        }
        uVar3 = 0;
        if (iVar2 == 0) goto code_r0x0800562c;
    }
    mutex_unlock(iVar6 + 0x80);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_98) {
        return uVar3;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.tmc_open;
    iVar6 = *(auVar7._8_8_ + 0xd8);
    iVar2 = *(iVar6 + 0x78);
    iVar6 = iVar6 + -0x10;
    if (iVar2 != 2) {
        if (iVar2 == 1) {
            uVar3 = sym.tmc_read_prepare_etr(iVar6);
            iVar2 = uVar3;
            goto joined_r0x08005738;
        }
        if (iVar2 != 0) {
            return 0xffffffea;
        }
    }
    uVar3 = sym.tmc_read_prepare_etb(iVar6);
    iVar2 = uVar3;
joined_r0x08005738:
    if (iVar2 == 0) {
        nonseekable_open(auVar7._0_8_,auVar7._8_8_);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.tmc_read @ 0x080055bc (size 316) =====

uint64_t sym.tmc_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    uint64_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0xd8);
    uStack_50 = 0;
    mutex_lock(iVar4 + 0x80);
    iVar2 = *(iVar4 + 0x78);
    if (iVar2 == 2) {
code_r0x0800562c:
        uVar5 = sym.tmc_etb_get_sysfs_trace(iVar4 + -0x10,*arg4,arg3,&uStack_50);
code_r0x08005650:
        if (uVar5 < 1) {
            uVar5 = 0;
        }
        else {
            if (uVar5 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x800,0x80056f0);
                (*pcVar1)();
            }
            auVar6 = __check_object_size(uStack_50,uVar5,1);
            iVar3 = sym._copy_to_user(arg2,auVar6,uVar5);
            if (iVar3 == 0) {
                *arg4 = *arg4 + uVar5;
            }
            else {
                uVar5 = 0xfffffffffffffff2;
            }
        }
    }
    else {
        if (iVar2 == 1) {
            uVar5 = sym.tmc_etr_get_sysfs_trace(iVar4 + -0x10,*arg4,arg3,&uStack_50);
            goto code_r0x08005650;
        }
        uVar5 = 0;
        if (iVar2 == 0) goto code_r0x0800562c;
    }
    mutex_unlock(iVar4 + 0x80);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.tmc_open;
    iVar4 = *(auVar6._8_8_ + 0xd8);
    iVar2 = *(iVar4 + 0x78);
    iVar4 = iVar4 + -0x10;
    if (iVar2 != 2) {
        if (iVar2 == 1) {
            uVar5 = sym.tmc_read_prepare_etr(iVar4);
            iVar2 = uVar5;
            goto joined_r0x08005738;
        }
        if (iVar2 != 0) {
            return 0xffffffea;
        }
    }
    uVar5 = sym.tmc_read_prepare_etb(iVar4);
    iVar2 = uVar5;
joined_r0x08005738:
    if (iVar2 == 0) {
        nonseekable_open(auVar6._0_8_,auVar6._8_8_);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.tmc_open @ 0x080056f8 (size 124) =====

ulong sym.tmc_open(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg2 + 0xd8) + 0x78);
    arg1_00 = *(arg2 + 0xd8) + -0x10;
    if (iVar1 != 2) {
        if (iVar1 == 1) {
            uVar2 = sym.tmc_read_prepare_etr(arg1_00);
            iVar1 = uVar2;
            goto joined_r0x08005738;
        }
        if (iVar1 != 0) {
            return 0xffffffea;
        }
    }
    uVar2 = sym.tmc_read_prepare_etb(arg1_00);
    iVar1 = uVar2;
joined_r0x08005738:
    if (iVar1 == 0) {
        nonseekable_open(arg1,arg2);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.tmc_release @ 0x08005774 (size 84) =====

ulong sym.tmc_release(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0xd8) + 0x78);
    arg1_00 = *(arg1 + 0xd8) + -0x10;
    if (iVar1 != 2) {
        if (iVar1 == 1) {
            uVar2 = sym.tmc_read_unprepare_etr(arg1_00);
            return uVar2;
        }
        if (iVar1 != 0) {
            return 0xffffffea;
        }
    }
    uVar2 = sym.tmc_read_unprepare_etb(arg1_00);
    return uVar2;
}


// ===== sym._copy_to_user @ 0x080057c8 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_no_llseek >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((_no_llseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym._copy_to_user_1 @ 0x0800593c (size 312) =====

int64_t sym._copy_to_user_1(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_no_llseek >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((_no_llseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08005ab0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005af4

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
    //switch table (4 cases) at 0x8001b4c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005b08);
    (*pcVar1)();
}


// ===== sym.tmc_etb_get_sysfs_trace @ 0x08005b08 (size 56) =====

int64_t sym.tmc_etb_get_sysfs_trace(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x78) - arg2;
    if (arg3 + arg2 <= *(arg1 + 0x78)) {
        iVar1 = arg3;
    }
    if (0 < iVar1) {
        *arg4 = *(arg1 + 0x70) + arg2;
    }
    return iVar1;
}


// ===== sym.tmc_read_prepare_etb @ 0x08005b40 (size 192) =====

uint sym.tmc_read_prepare_etb(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x88) & 0xfffffffd) != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8005c00);
        (*pcVar1)();
    }
    uVar3 = _raw_spin_lock_irqsave(arg1 + 0x60);
    if (*(arg1 + 0x68) != '\0') {
        uVar4 = 0xfffffff0;
        goto code_r0x08005bd0;
    }
    if ((*(arg1 + 0x84) == 2) || (*(arg1 + 0x70) == 0)) {
code_r0x08005bb4:
        uVar4 = 0xffffffea;
    }
    else {
        if (*(arg1 + 0x84) == 1) {
            iVar2 = sym.readl_relaxed_1(*arg1 + 0x28);
            if (iVar2 != 0) goto code_r0x08005bb4;
            sym.__tmc_etb_disable_hw(arg1);
        }
        uVar4 = 0;
        *(arg1 + 0x68) = 1;
    }
code_r0x08005bd0:
    _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar3);
    return uVar4;
}


// ===== sym.__tmc_etb_disable_hw @ 0x08005c04 (size 236) =====

void sym.__tmc_etb_disable_hw(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *in_x18;
    int *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    sym.tmc_flush_and_stop(arg1);
    *(arg1 + 0x158) = 0;
    if (*(arg1 + 0x84) == 1) {
        uVar3 = sym.readl_relaxed_1(*arg1 + 0xc);
        iVar4 = *arg1;
        *(arg1 + 0x78) = 0;
        piVar6 = *(arg1 + 0x70);
        while (iVar2 = sym.readl_relaxed_1(iVar4 + 0x10), uVar1 = _kfree, iVar2 != -1) {
            *piVar6 = iVar2;
            iVar4 = *arg1;
            *(arg1 + 0x78) = *(arg1 + 0x78) + 4;
            piVar6 = piVar6 + 1;
        }
        if (((uVar3 & 1) != 0) && (puVar5 = *(arg1 + 0x70), puVar5 != NULL)) {
            *puVar5 = _coresight_barrier_pkt;
            puVar5[1] = uVar1;
        }
    }
    sym.writel_relaxed.llvm.7170818669875191139(0,*arg1 + 0x20);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0,*arg1 + 0xfb0);
    return;
}


// ===== sym.tmc_read_unprepare_etb @ 0x08005cf0 (size 328) =====

ulong sym.tmc_read_unprepare_etb(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x88) & 0xfffffffd) != 0) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8005e38);
        (*pcVar2)();
    }
    iVar1 = arg1 + 0x60;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1 + 0x84) == 1) {
        iVar3 = sym.readl_relaxed_1(*arg1 + 0x28);
        if (iVar3 != 0) {
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            return 0xffffffea;
        }
        memset(*(arg1 + 0x70),0,*(arg1 + 0x7c));
        sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.tmc_wait_for_tmcready(arg1);
        sym.writel_relaxed(0,*arg1 + 0x28);
        uVar5 = 0x133;
        if (*(arg1 + 0x158) != '\0') {
            uVar5 = 0x1133;
        }
        sym.writel_relaxed(uVar5,*arg1 + 0x304);
        sym.writel_relaxed(*(arg1 + 0xc0),*arg1 + 0x1c);
        sym.writel_relaxed.llvm.7170818669875191139(1,*arg1 + 0x20);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*arg1 + 0xfb0);
        uVar6 = 0;
    }
    else {
        uVar6 = *(arg1 + 0x70);
        *(arg1 + 0x70) = 0;
    }
    *(arg1 + 0x68) = 0;
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    kfree(uVar6);
    return 0;
}


// ===== sym.tmc_enable_etf_sink @ 0x08005e3c (size 72) =====

ulong sym.tmc_enable_etf_sink(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 2) {
        uVar1 = sym.tmc_enable_etf_sink_perf(arg1,arg3);
    }
    else if (arg2 == 1) {
        uVar1 = sym.tmc_enable_etf_sink_sysfs(arg1);
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.tmc_disable_etf_sink @ 0x08005e84 (size 232) =====

ulong sym.tmc_disable_etf_sink(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    ulong uVar5;
    int *piVar6;
    ulong *in_x18;
    int64_t arg1_00;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    uVar5 = _raw_spin_lock_irqsave(arg1_00 + 0x60);
    if (*(arg1_00 + 0x68) == '\0') {
        piVar6 = *(arg1 + 0x3c8);
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar1 = *piVar6;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar1 + -1 == 0) {
            if (*(arg1_00 + 0x84) == 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8005f4c);
                (*pcVar4)();
            }
            sym.__tmc_etb_disable_hw(arg1_00);
            coresight_disclaim_device(*(arg1_00 + 8));
            uVar7 = 0;
            *(arg1_00 + 0x84) = 0;
            *(arg1_00 + 100) = 0xffffffff;
            goto code_r0x08005ee4;
        }
    }
    uVar7 = 0xfffffff0;
code_r0x08005ee4:
    _raw_spin_unlock_irqrestore(arg1_00 + 0x60,uVar5);
    return uVar7;
}


// ===== sym.tmc_alloc_etf_buffer @ 0x08005f6c (size 140) =====

void sym.tmc_alloc_etf_buffer(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    uint8_t in_w4;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x30);
    if (iVar2 != 0) {
        iVar3 = *(arg1 + 0x2a0);
        *(iVar2 + 0x28) = arg2;
        uVar1 = *(iVar3 + 0x5d8);
        *(iVar2 + 0x20) = in_w4 & 1;
        *(iVar2 + 4) = arg3;
        *(iVar2 + 8) = uVar1;
    }
    return;
}


// ===== sym.tmc_free_etf_buffer @ 0x08005ff8 (size 36) =====

void sym.tmc_free_etf_buffer(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.tmc_update_etf_buffer @ 0x0800601c (size 656) =====

uint64_t sym.tmc_update_etf_buffer(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint uVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *arg1_00;
    uint64_t uVar12;
    uint64_t uVar13;
    code *pcVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 == 0) {
        uVar12 = 0;
    }
    else {
        arg1_00 = *(*(arg1 + 0x98) + 0x98);
        if (*(arg1_00 + 0x84) != 2) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80062ac);
            (*pcVar2)();
        }
        uVar8 = _raw_spin_lock_irqsave(arg1_00 + 0xc);
        if (**(arg1 + 0x3c8) == 1) {
            sym.writel_relaxed(0xc5acce55,*arg1_00 + 0xfb0);
            DataSynchronizationBarrier(3,3,0);
            sym.tmc_flush_and_stop(arg1_00);
            iVar10 = *arg1_00;
            iVar5 = sym.readl_relaxed_1(iVar10 + 0x14);
            sym.readl_relaxed_1(iVar10 + 0x38);
            iVar10 = *arg1_00;
            uVar6 = sym.readl_relaxed_1(iVar10 + 0x18);
            iVar10 = sym.readl_relaxed_1(iVar10 + 0x3c);
            uVar4 = sym.readl_relaxed_1(*arg1_00 + 0xc);
            if ((uVar4 & 1) == 0) {
                uVar1 = uVar6 - iVar5 & *(arg1_00 + 0x7c) - 1U;
            }
            else {
                uVar1 = *(arg1_00 + 0x7c);
            }
            uVar12 = uVar1;
            uVar4 = uVar4 & 1;
            if (*(arg3 + 0x20) == '\0') {
                if (*(arg2 + 0x18) < uVar12) {
                    uVar12 = sym.tmc_get_memwidth_mask(arg1_00);
                    iVar11 = *arg1_00;
                    uVar12 = *(arg2 + 0x18) & uVar12 & 0xffffffff;
                    uVar9 = (uVar6 | iVar10 << 0x20) - uVar12;
                    uVar13 = uVar9 + *(arg1_00 + 0x7c);
                    if (uVar13 <= *(arg1_00 + 0x7c) - 1) {
                        uVar9 = uVar13;
                    }
                    sym.writel_relaxed(uVar9 & 0xffffffff,iVar11 + 0x14);
                    sym.writel_relaxed(uVar9 >> 0x20,iVar11 + 0x38);
                    uVar4 = 1;
                    bVar3 = *(arg3 + 0x20) != '\0';
                }
                else {
                    bVar3 = false;
                }
                if ((!bVar3) && (uVar4 != 0)) {
                    perf_aux_output_flag(arg2,1);
                }
            }
            if (uVar12 != 0) {
                uVar13 = *(arg3 + 0x10);
                uVar6 = *arg3;
                pcVar2 = coresight_barrier_pkt;
                iVar5 = 4;
                do {
                    iVar10 = *(*(arg3 + 0x28) + uVar6 * 8);
                    uVar7 = sym.readl_relaxed_1(*arg1_00 + 0x10);
                    *(iVar10 + uVar13) = uVar7;
                    pcVar14 = pcVar2;
                    if ((uVar4 & iVar5 - 4U < 0x10) == 1) {
                        pcVar14 = pcVar2 + 4;
                        *(iVar10 + uVar13) = *pcVar2;
                    }
                    uVar13 = uVar13 + 4;
                    if (0xfff < uVar13) {
                        uVar13 = 0;
                        uVar6 = *(arg3 + 4) - 1U & uVar6 + 1;
                    }
                    uVar9 = iVar5;
                    pcVar2 = pcVar14;
                    iVar5 = iVar5 + 4;
                } while (uVar9 < uVar12);
            }
            if (*(arg3 + 0x20) != '\0') {
                *(arg2 + 0x28) = *(arg2 + 0x28) + uVar12;
            }
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed(0,*arg1_00 + 0xfb0);
        }
        else {
            uVar12 = 0;
        }
        _raw_spin_unlock_irqrestore(arg1_00 + 0xc,uVar8);
    }
    return uVar12;
}


// ===== sym.tmc_enable_etf_sink_sysfs @ 0x080062b4 (size 420) =====

int sym.tmc_enable_etf_sink_sysfs(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int *piVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t arg1_00;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    iVar1 = arg1_00 + 0x60;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1_00 + 0x70) == 0) {
        _raw_spin_unlock_irqrestore(iVar1,uVar5);
        iVar7 = __kmalloc(*(arg1_00 + 0x7c),0xdc0);
        if (iVar7 == 0) {
            return -0xc;
        }
        uVar5 = _raw_spin_lock_irqsave(iVar1);
        if (*(arg1_00 + 0x68) == '\0') goto code_r0x08006340;
code_r0x08006304:
        iVar4 = -0x10;
    }
    else {
        iVar7 = 0;
        if (*(arg1_00 + 0x68) != '\0') goto code_r0x08006304;
code_r0x08006340:
        if (*(arg1_00 + 0x84) == 1) {
            piVar6 = *(arg1 + 0x3c8);
            Hint_Prefetch(piVar6,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                if (bVar3) {
                    *piVar6 = *piVar6 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            iVar4 = 0;
        }
        else {
            iVar8 = *(arg1_00 + 0x70);
            if (iVar8 == 0) {
                *(arg1_00 + 0x70) = iVar7;
            }
            else {
                memset(iVar8,0,*(arg1_00 + 0x7c));
            }
            iVar4 = sym.tmc_etb_enable_hw(arg1_00);
            if (iVar4 == 0) {
                *(arg1_00 + 0x84) = 1;
                piVar6 = *(arg1 + 0x3c8);
                Hint_Prefetch(piVar6,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar3) {
                        *piVar6 = *piVar6 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                iVar4 = 0;
                if (iVar8 == 0) {
                    return 0;
                }
                goto code_r0x080063ac;
            }
        }
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
code_r0x080063ac:
    kfree(iVar7);
    return iVar4;
}


// ===== sym.tmc_enable_etf_sink_perf @ 0x08006458 (size 412) =====

int sym.tmc_enable_etf_sink_perf(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint *puVar7;
    int *piVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    iVar5 = perf_get_aux(arg2);
    if ((iVar5 == 0) || (iVar5 = *(iVar5 + 0x38), iVar5 == 0)) {
        return -0x16;
    }
    uVar6 = _raw_spin_lock_irqsave(arg1_00 + 0x60);
    if (*(arg1_00 + 0x68) == '\0') {
        if (*(arg1_00 + 0x84) != 1) {
            iVar1 = *(iVar5 + 8);
            if ((*(arg1_00 + 100) == -1) || (*(arg1_00 + 100) == iVar1)) {
                iVar5 = perf_get_aux(arg2);
                if ((iVar5 != 0) && (puVar7 = *(iVar5 + 0x38), puVar7 != NULL)) {
                    uVar9 = *(arg2 + 0x28);
                    *(puVar7 + 4) = uVar9 & 0xfff;
                    *puVar7 = (uVar9 & puVar7[1] * 0x1000 - 1) >> 0xc;
                    *(puVar7 + 6) = 0;
                    if (*(arg1_00 + 100) == iVar1) {
                        piVar8 = *(arg1 + 0x3c8);
                        Hint_Prefetch(piVar8,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
                            if (bVar3) {
                                *piVar8 = *piVar8 + 1;
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                    }
                    else {
                        iVar4 = sym.tmc_etb_enable_hw(arg1_00);
                        if (iVar4 != 0) goto code_r0x080064e8;
                        *(arg1_00 + 100) = iVar1;
                        *(arg1_00 + 0x84) = 2;
                        piVar8 = *(arg1 + 0x3c8);
                        Hint_Prefetch(piVar8,2,0,1);
                        do {
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
                            if (bVar3) {
                                *piVar8 = *piVar8 + 1;
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                    }
                    iVar4 = 0;
                    goto code_r0x080064e8;
                }
                goto code_r0x080064b0;
            }
        }
        iVar4 = -0x10;
    }
    else {
code_r0x080064b0:
        iVar4 = -0x16;
    }
code_r0x080064e8:
    _raw_spin_unlock_irqrestore(arg1_00 + 0x60,uVar6);
    return iVar4;
}


// ===== sym.tmc_etb_enable_hw @ 0x080065f4 (size 196) =====

int sym.tmc_etb_enable_hw(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = coresight_claim_device(*(arg1 + 8));
    if (iVar1 == 0) {
        sym.writel_relaxed(0xc5acce55,*arg1 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.tmc_wait_for_tmcready(arg1);
        sym.writel_relaxed(0,*arg1 + 0x28);
        uVar2 = 0x133;
        if (*(arg1 + 0x158) != '\0') {
            uVar2 = 0x1133;
        }
        sym.writel_relaxed(uVar2,*arg1 + 0x304);
        sym.writel_relaxed(*(arg1 + 0xc0),*arg1 + 0x1c);
        sym.writel_relaxed.llvm.7170818669875191139(1,*arg1 + 0x20);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*arg1 + 0xfb0);
    }
    return iVar1;
}


// ===== sym.writel_relaxed @ 0x080066b8 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80066d4);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80066fc);
    return;
}


// ===== sym.writel_relaxed_1 @ 0x08006730 (size 120) =====

void sym.writel_relaxed_1(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800674c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8006774);
    return;
}


// ===== sym.writel_relaxed_2 @ 0x080067a8 (size 120) =====

void sym.writel_relaxed_2(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80067c4);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80067ec);
    return;
}


// ===== sym.writel_relaxed_3 @ 0x08006820 (size 120) =====

void sym.writel_relaxed_3(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800683c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8006864);
    return;
}


// ===== sym.tmc_enable_etf_link @ 0x08006898 (size 340) =====

int sym.tmc_enable_etf_link(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    int *piVar5;
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    uVar4 = _raw_spin_lock_irqsave(arg1_00 + 0xc);
    if (arg1_00[0xd] == '\0') {
        if (**(arg1 + 0x3c8) == 0) {
            iVar3 = coresight_claim_device(arg1_00[1]);
            if (iVar3 != 0) goto code_r0x08006918;
            sym.writel_relaxed(0xc5acce55,*arg1_00 + 0xfb0);
            DataSynchronizationBarrier(3,3,0);
            sym.tmc_wait_for_tmcready(arg1_00);
            sym.writel_relaxed(2,*arg1_00 + 0x28);
            sym.writel_relaxed(3,*arg1_00 + 0x304);
            sym.writel_relaxed(0,*arg1_00 + 0x34);
            sym.writel_relaxed.llvm.7170818669875191139(1,*arg1_00 + 0x20);
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed(0,*arg1_00 + 0xfb0);
            *(arg1_00 + 0x84) = 1;
        }
        piVar5 = *(arg1 + 0x3c8);
        Hint_Prefetch(piVar5,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
                *piVar5 = *piVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        iVar3 = 0;
    }
    else {
        iVar3 = -0x10;
    }
code_r0x08006918:
    _raw_spin_unlock_irqrestore(arg1_00 + 0xc,uVar4);
    return iVar3;
}


// ===== sym.tmc_disable_etf_link @ 0x080069ec (size 256) =====

void sym.tmc_disable_etf_link(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int *piVar6;
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    uVar5 = _raw_spin_lock_irqsave(arg1_00 + 0xc);
    if (arg1_00[0xd] == '\0') {
        piVar6 = *(arg1 + 0x3c8);
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar2 = *piVar6;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar4) {
                *piVar6 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar2 + -1 == 0) {
            iVar1 = arg1_00[1];
            sym.writel_relaxed(0xc5acce55,*arg1_00 + 0xfb0);
            DataSynchronizationBarrier(3,3,0);
            sym.tmc_flush_and_stop(arg1_00);
            sym.writel_relaxed.llvm.7170818669875191139(0,*arg1_00 + 0x20);
            coresight_disclaim_device_unlocked(iVar1);
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed(0,*arg1_00 + 0xfb0);
            *(arg1_00 + 0x84) = 0;
        }
    }
    _raw_spin_unlock_irqrestore(arg1_00 + 0xc,uVar5);
    return;
}


// ===== sym.tmc_free_sg_table @ 0x08006aec (size 100) =====

void sym.tmc_free_sg_table(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 8) != 0) {
        vunmap();
    }
    sym.tmc_pages_free(arg1 + 0x28,*arg1,1);
    if (*(arg1 + 0x10) != 0) {
        vunmap();
    }
    sym.tmc_pages_free(arg1 + 0x40,*arg1,2);
    return;
}


// ===== sym.tmc_get_rwp_offset @ 0x08006b50 (size 216) =====

int64_t sym.tmc_get_rwp_offset(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x110);
    if (*(iVar3 + 4) == 0) {
        arg1 = *arg1;
        iVar7 = *(iVar3 + 0x18);
        uVar2 = sym.readl_relaxed_2(arg1 + 0x18);
        iVar3 = sym.readl_relaxed_2(arg1 + 0x3c);
        iVar3 = ((uVar2 & 0xffffffff) - iVar7) + (iVar3 << 0x20);
    }
    else {
        arg1 = *arg1;
        iVar7 = **(iVar3 + 0x38);
        uVar2 = sym.readl_relaxed_2(arg1 + 0x18);
        iVar3 = sym.readl_relaxed_2(arg1 + 0x3c);
        uVar1 = *(iVar7 + 0x40);
        if (0 < uVar1) {
            iVar4 = 0;
            uVar2 = uVar2 & 0xffffffff | iVar3 << 0x20;
            puVar5 = *(iVar7 + 0x48);
            do {
                uVar6 = *puVar5;
                if ((uVar2 >= uVar6 && uVar2 <= uVar6 + 0x1000) && (uVar2 < uVar6 || uVar6 + 0x1000 != uVar2)) {
                    return (uVar2 - uVar6) + iVar4;
                }
                iVar4 = iVar4 + 0x1000;
                puVar5 = puVar5 + 1;
            } while (uVar1 * 0x1000 - iVar4 != 0);
        }
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.tmc_alloc_sg_table @ 0x08006c28 (size 392) =====

int64_t * sym.tmc_alloc_sg_table(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t *arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = kmem_cache_alloc_trace(__dev_err,0xdc0,0x58);
    if (piVar3 == NULL) {
        return 0xfffffffffffffff4;
    }
    *(piVar3 + 4) = arg2;
    *piVar3 = arg1;
    arg1_00 = piVar3 + 8;
    *arg1_00 = arg4;
    arg1_01 = piVar3 + 5;
    *arg1_01 = arg3;
    iVar2 = sym.tmc_pages_alloc(arg1_00,arg1,arg2 & 0xffffffff,2);
    if (iVar2 == 0) {
        uVar1 = 0x68000000000703;
        if (arm64_use_ng_mappings != 0x0) {
            uVar1 = 0x68000000000f03;
        }
        iVar4 = vmap(piVar3[10],piVar3[8],4,uVar1);
        piVar3[2] = iVar4;
        if (iVar4 != 0) {
            iVar2 = sym.tmc_pages_alloc(arg1_01,*piVar3,0xffffffff,1);
            if (iVar2 != 0) goto code_r0x08006d44;
            uVar1 = 0x68000000000703;
            if (arm64_use_ng_mappings != 0x0) {
                uVar1 = 0x68000000000f03;
            }
            iVar4 = vmap(piVar3[7],piVar3[5],4,uVar1);
            piVar3[1] = iVar4;
            if (iVar4 != 0) {
                piVar3[3] = *piVar3[6];
                return piVar3;
            }
        }
        iVar2 = -0xc;
    }
code_r0x08006d44:
    if (piVar3[1] != 0) {
        vunmap(piVar3[1]);
    }
    sym.tmc_pages_free(arg1_01,*piVar3,1);
    if (piVar3[2] != 0) {
        vunmap();
    }
    sym.tmc_pages_free(arg1_00,*piVar3,2);
    kfree(piVar3);
    return iVar2;
}


// ===== sym.tmc_sg_table_sync_data_range @ 0x08006db0 (size 132) =====

void sym.tmc_sg_table_sync_data_range(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong uVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg2 >> 0xc;
    uVar5 = arg3 + 0xfffU >> 0xc;
    if (uVar7 < uVar5 + uVar7) {
        uVar4 = *(*arg1 + 0x60);
        do {
            iVar1 = *(arg1 + 0x40);
            iVar2 = 0;
            iVar6 = uVar7;
            if (iVar1 != 0) {
                iVar2 = iVar6 / iVar1;
            }
            dma_sync_single_for_cpu(uVar4,*(*(arg1 + 0x48) + (iVar6 - iVar2 * iVar1) * 8),0x1000,2);
            uVar7 = iVar6 + 1;
            uVar3 = uVar5 - 1;
            uVar5 = uVar3;
        } while (uVar3 != 0);
    }
    return;
}


// ===== sym.tmc_sg_table_sync_table @ 0x08006e34 (size 116) =====

void sym.tmc_sg_table_sync_table(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(arg1 + 0x28)) {
        iVar2 = 0;
        uVar1 = *(*arg1 + 0x60);
        do {
            dma_sync_single_for_device(uVar1,*(*(arg1 + 0x30) + iVar2 * 8),0x1000,1);
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(arg1 + 0x28));
    }
    return;
}


// ===== sym.tmc_sg_table_get_data @ 0x08006ea8 (size 140) =====

uint64_t sym.tmc_sg_table_get_data(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar1 = *(arg1 + 0x40) << 0xc;
    uVar2 = uVar1 - arg2;
    if (arg2 <= uVar1 && uVar2 != 0) {
        uVar1 = arg3;
        if (uVar2 <= arg3) {
            uVar1 = uVar2;
        }
        uVar2 = 0x1000 - (arg2 & 0xfffU);
        if (uVar2 <= uVar1) {
            uVar1 = uVar2;
        }
        if (uVar1 != 0) {
            *arg4 = ((*(*(arg1 + 0x50) + (arg2 >> 0xc) * 8) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) +
                    (arg2 & 0xfffU);
        }
        return uVar1;
    }
    return 0xffffffffffffffea;
}


// ===== sym.tmc_etr_set_atid @ 0x08006f34 (size 60) =====

void sym.tmc_etr_set_atid(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x98) + 0x98);
    coresight_csr_set_etr_atid(*(iVar1 + 0x128),*(iVar1 + 0x138),arg2 & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.tmc_etr_get_catu_device @ 0x08006f70 (size 16) =====

ulong sym.tmc_etr_get_catu_device(void)

{
    return 0;
}


// ===== sym.tmc_etr_set_catu_ops @ 0x08006f80 (size 20) =====

void sym.tmc_etr_set_catu_ops(int64_t arg1)

{
    _segment.ehdr = arg1;
    return;
}


// ===== sym.tmc_etr_remove_catu_ops @ 0x08006f94 (size 20) =====

void sym.tmc_etr_remove_catu_ops(void)

{
    _segment.ehdr = 0;
    return;
}


// ===== sym.tmc_etr_buf_get_data @ 0x08006fa8 (size 156) =====

void sym.tmc_etr_buf_get_data(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(arg1 + 0x30) + 0x10);
    uVar2 = *(arg1 + 0x10) - arg2;
    if (1 < (pcVar1 + -0x8003658 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0x9790b0527eae5c52,pcVar1,0x8001170);
    }
    if (uVar2 <= arg3) {
        arg3 = uVar2;
    }
    (*pcVar1)(arg1,arg2,arg3,arg4);
    return;
}


// ===== sym.tmc_etr_get_sysfs_trace @ 0x08007044 (size 208) =====

void sym.tmc_etr_get_sysfs_trace(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x110);
    uVar2 = *(iVar3 + 0x28) - arg2;
    if (arg3 + arg2 <= *(iVar3 + 0x28)) {
        uVar2 = arg3;
    }
    if (0 < uVar2) {
        iVar6 = *(iVar3 + 0x10);
        pcVar4 = *(*(iVar3 + 0x30) + 0x10);
        arg2 = *(iVar3 + 0x20) + arg2;
        iVar1 = 0;
        if (iVar6 <= arg2) {
            iVar1 = iVar6;
        }
        arg2 = arg2 - iVar1;
        uVar5 = iVar6 - arg2;
        if (1 < (pcVar4 + -0x8003658 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x9790b0527eae5c52,pcVar4,0x8001170);
        }
        if (uVar5 <= uVar2) {
            uVar2 = uVar5;
        }
        (*pcVar4)(iVar3,arg2,uVar2,arg4);
    }
    return;
}


// ===== sym.tmc_etr_disable_hw @ 0x08007114 (size 60) =====

void sym.tmc_etr_disable_hw(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__tmc_etr_disable_hw(arg1);
    coresight_disclaim_device(*(arg1 + 8));
    *(arg1 + 0x70) = 0;
    return;
}


// ===== sym.__tmc_etr_disable_hw @ 0x08007150 (size 456) =====

void sym.__tmc_etr_disable_hw(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t extraout_x1;
    code *pcVar3;
    code *extraout_x8;
    uint64_t uVar4;
    uint64_t extraout_x9;
    ulong *in_x18;
    int64_t unaff_x20;
    ulong unaff_x30;
    ulong *puStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    sym.writel_relaxed_1(0xc5acce55,*arg1 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    sym.tmc_flush_and_stop(arg1);
    *(arg1 + 0x158) = 0;
    if (*(arg1 + 0x84) != 1) goto code_r0x08007230;
    unaff_x20 = *(arg1 + 0x70);
    if (*(arg1 + 0x110) != unaff_x20) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8007284);
        (*pcVar3)();
    }
    sym.tmc_sync_etr_buf(arg1);
    if (*(unaff_x20 + 8) == '\0') goto code_r0x08007230;
    iVar2 = *(unaff_x20 + 0x20);
    puStack_30 = NULL;
    pcVar3 = *(*(unaff_x20 + 0x30) + 0x10);
    uVar4 = *(unaff_x20 + 0x10) - iVar2;
    if (1 < (pcVar3 + -0x8003658 >> 3 | pcVar3 << 0x3d)) goto code_r0x080072e4;
    while( true ) {
        if (0xf < uVar4) {
            uVar4 = 0x10;
        }
        uVar4 = (*pcVar3)(unaff_x20,iVar2,uVar4,&puStack_30);
        uVar1 = _kfree;
        if (uVar4 < 0x10) break;
        if (puStack_30 != NULL) {
            *puStack_30 = _coresight_barrier_pkt;
            puStack_30[1] = uVar1;
        }
code_r0x08007230:
        sym.writel_relaxed.llvm.7170818669875191139(0,*arg1 + 0x20);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_1(0,*arg1 + 0xfb0);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_28) {
            return;
        }
        __stack_chk_fail();
        iVar2 = extraout_x1;
        pcVar3 = extraout_x8;
        uVar4 = extraout_x9;
code_r0x080072e4:
        __cfi_slowpath_diag(0x9790b0527eae5c52,pcVar3,0x8001170);
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x800,0x80072dc);
    (*pcVar3)();
}


// ===== sym.tmc_etr_switch_mode @ 0x08007344 (size 380) =====

uint sym.tmc_etr_switch_mode(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    char *pcVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x90);
    iVar3 = strcmp(arg2,0x8001958);
    if (iVar3 == 0) {
        if ((*(arg1 + 0x13c) >> 1 & 1) != 0) {
            uVar7 = 1;
            goto code_r0x080073e0;
        }
        iVar5 = *(arg1 + 8);
        pcVar4 = "Memory mode is not supported.\n";
code_r0x080074b0:
        _dev_err(iVar5 + 0x38,pcVar4);
code_r0x080073ac:
        uVar6 = 0xffffffea;
    }
    else {
        iVar3 = strcmp(arg2,0x8001aa6);
        if (iVar3 == 0) {
            if ((*(arg1 + 0x13c) >> 2 & 1) == 0) {
                iVar5 = *(arg1 + 8);
                pcVar4 = "USB mode is not supported.\n";
                goto code_r0x080074b0;
            }
            uVar7 = 2;
        }
        else {
            iVar3 = strcmp(arg2,0x800121c);
            if (iVar3 != 0) goto code_r0x080073ac;
            if ((*(arg1 + 0x13c) >> 3 & 1) == 0) {
                iVar5 = *(arg1 + 8);
                pcVar4 = "ETH mode is not supported.\n";
                goto code_r0x080074b0;
            }
            uVar7 = 3;
        }
code_r0x080073e0:
        if (uVar7 != *(arg1 + 0x140)) {
            if (*(arg1 + 0x84) == 0) {
                uVar6 = 0;
                *(arg1 + 0x140) = uVar7;
                goto code_r0x08007418;
            }
            sym._tmc_disable_etr_sink(*(arg1 + 8),1);
            uVar1 = *(arg1 + 0x140);
            *(arg1 + 0x140) = uVar7;
            iVar3 = sym.tmc_enable_etr_sink_sysfs(*(arg1 + 8));
            if (iVar3 != 0) {
                *(arg1 + 0x140) = uVar1;
                sym.tmc_enable_etr_sink_sysfs(*(arg1 + 8));
                if (3 < uVar1) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x80074c0);
                    (*pcVar2)();
                }
                _dev_err(*(arg1 + 8) + 0x38,"Switch to %s failed. Fall back to %s.\n",
                         *(obj.str_tmc_etr_out_mode_1 + uVar7 * 8),*(obj.str_tmc_etr_out_mode_1 + uVar1 * 8));
                goto code_r0x080073ac;
            }
        }
        uVar6 = 0;
    }
code_r0x08007418:
    mutex_unlock(arg1 + 0x90);
    return uVar6;
}


// ===== sym._tmc_disable_etr_sink @ 0x080074c0 (size 404) =====

ulong sym._tmc_disable_etr_sink(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    ulong uVar6;
    int *piVar7;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    iVar1 = arg1_00 + 0x60;
    uVar6 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1_00 + 0x68) != '\0') {
code_r0x08007528:
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        return 0xfffffff0;
    }
    piVar7 = *(arg1 + 0x3c8);
    Hint_Prefetch(piVar7,2,0,1);
    do {
        iVar2 = *piVar7;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
            *piVar7 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar2 + -1 != 0) && ((arg2 & 1U) == 0)) goto code_r0x08007528;
    if (*(arg1_00 + 0x84) == 0) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8007634);
        (*pcVar5)();
    }
    iVar2 = *(arg1_00 + 0x140);
    if (iVar2 != 1) {
        if (iVar2 == 3) {
            sym.tmc_eth_disable(*(arg1_00 + 0x150));
            goto code_r0x08007604;
        }
        if (iVar2 != 2) goto code_r0x08007604;
        if (**(arg1_00 + 0x148) == 1) {
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            sym.tmc_usb_disable(*(arg1_00 + 0x148));
            uVar6 = _raw_spin_lock_irqsave(iVar1);
            goto code_r0x08007604;
        }
        if (**(arg1_00 + 0x148) != 2) goto code_r0x08007604;
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        sym.tmc_usb_disable(*(arg1_00 + 0x148));
        uVar6 = _raw_spin_lock_irqsave(iVar1);
    }
    sym.__tmc_etr_disable_hw(arg1_00);
    coresight_disclaim_device(*(arg1_00 + 8));
    *(arg1_00 + 0x70) = 0;
code_r0x08007604:
    *(arg1_00 + 0x84) = 0;
    *(arg1_00 + 0x118) = 0;
    *(arg1_00 + 100) = 0xffffffff;
    _raw_spin_unlock_irqrestore(iVar1,uVar6);
    sym.tmc_etr_byte_cntr_stop(*(arg1_00 + 0x120));
    return 0;
}


// ===== sym.tmc_enable_etr_sink_sysfs @ 0x08007654 (size 1048) =====

int sym.tmc_enable_etr_sink_sysfs(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t arg1_00;
    code *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    iVar1 = arg1_00 + 0x60;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    if ((*(arg1_00 + 0x68) == '\0') && (*(arg1_00 + 0x84) != 2)) {
        if (*(arg1_00 + 0x84) == 1) {
            piVar6 = *(arg1 + 0x3c8);
            uVar9 = 0;
            Hint_Prefetch(piVar6,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                if (bVar3) {
                    *piVar6 = *piVar6 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg1_00 + 0x140);
            if (iVar4 != 1) {
                if (iVar4 != 2) {
code_r0x080077c4:
                    uVar10 = 0;
                    goto joined_r0x080077cc;
                }
                if (**(arg1_00 + 0x148) == 2) goto code_r0x0800778c;
code_r0x08007838:
                uVar10 = 0;
code_r0x0800791c:
                *(arg1_00 + 0x84) = 1;
                piVar6 = *(arg1 + 0x3c8);
                Hint_Prefetch(piVar6,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar3) {
                        *piVar6 = *piVar6 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                if (*(arg1_00 + 0x140) == 3) {
                    iVar4 = sym.tmc_eth_enable(*(arg1_00 + 0x150));
                }
                else {
                    if (*(arg1_00 + 0x140) != 2) {
                        iVar4 = 0;
                        goto code_r0x080076ac;
                    }
                    iVar4 = sym.tmc_usb_enable(*(arg1_00 + 0x148));
                }
                if (iVar4 != 0) {
                    piVar6 = *(arg1 + 0x3c8);
                    Hint_Prefetch(piVar6,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                        if (bVar3) {
                            *piVar6 = *piVar6 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    *(arg1_00 + 0x84) = 0;
                }
                goto code_r0x080076ac;
            }
code_r0x0800778c:
            iVar7 = *(arg1_00 + 0x110);
            if (iVar7 == 0) {
code_r0x08007808:
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                if ((*(arg1_00 + 0x140) == 2) && (**(arg1_00 + 0x148) == 2)) {
                    uVar9 = 0x4000000;
                }
                else {
                    uVar9 = *(arg1_00 + 0x7c);
                }
                uVar10 = sym.tmc_alloc_etr_buf(arg1_00,uVar9,0);
                if (0xfffffffffffff000 < uVar10) {
                    return uVar10;
                }
                uVar5 = _raw_spin_lock_irqsave(iVar1);
                iVar4 = *(arg1_00 + 0x140);
joined_r0x080077cc:
                if ((iVar4 != 1) && ((iVar4 != 2 || (**(arg1_00 + 0x148) != 2)))) goto code_r0x0800791c;
                uVar9 = *(arg1_00 + 0x110);
                if ((uVar9 == 0) || ((uVar10 != 0 && (*(uVar9 + 0x10) != *(uVar10 + 0x10))))) goto code_r0x080078bc;
code_r0x080078b4:
                uVar11 = *(arg1_00 + 0x110);
                uVar9 = uVar10;
            }
            else {
                iVar4 = *(arg1_00 + 0x140);
                if (iVar4 == 2) {
                    if (**(arg1_00 + 0x148) != 2) goto code_r0x08007838;
                    if (*(iVar7 + 0x10) == 0x4000000) {
                        iVar7 = *(arg1_00 + 0x110);
                        goto code_r0x080077fc;
                    }
                    goto code_r0x08007808;
                }
                if (iVar4 != 1) goto code_r0x080077c4;
                if (*(iVar7 + 0x10) != *(arg1_00 + 0x7c)) goto code_r0x08007808;
                iVar7 = *(arg1_00 + 0x110);
code_r0x080077fc:
                uVar10 = 0;
                if (iVar7 != 0) goto code_r0x080078b4;
                uVar9 = 0;
code_r0x080078bc:
                *(arg1_00 + 0x110) = uVar10;
                uVar11 = uVar10;
            }
            if (uVar11 == 0) {
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x800,0x80079a4);
                (*pcVar8)();
            }
            if ((*(uVar11 + 4) == 1) && ((*(arg1_00 + 0xc4) & 1) == 0)) {
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x800,0x80079bc);
                (*pcVar8)();
            }
            if (*(arg1_00 + 0x70) != 0) {
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x800,0x80079b0);
                (*pcVar8)();
            }
            iVar4 = coresight_claim_device(*(arg1_00 + 8));
            if (iVar4 == 0) {
                *(arg1_00 + 0x70) = uVar11;
                iVar4 = sym.__tmc_etr_enable_hw(arg1_00);
                uVar10 = uVar9;
                if (iVar4 == 0) goto code_r0x0800791c;
                coresight_disclaim_device(*(arg1_00 + 8));
            }
        }
    }
    else {
        uVar9 = 0;
        iVar4 = -0x10;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    uVar10 = uVar9;
code_r0x080076ac:
    if (uVar10 != 0) {
        if ((*(uVar10 + 0x30) == 0) || (pcVar8 = *(*(uVar10 + 0x30) + 0x18), pcVar8 == NULL)) {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x800,0x80076c4);
            (*pcVar8)();
        }
        if (1 < (pcVar8 + -0x8003710 >> 3 | pcVar8 << 0x3d)) {
            __cfi_slowpath_diag(0xc1d48fc971739e38,pcVar8,0x80011d0);
        }
        (*pcVar8)(uVar10);
        kfree(uVar10);
    }
    if (iVar4 == 0) {
        if (*(arg1_00 + 0x140) == 1) {
            sym.tmc_etr_byte_cntr_start(*(arg1_00 + 0x120));
        }
        iVar4 = 0;
    }
    return iVar4;
}


// ===== sym.tmc_read_prepare_etr @ 0x08007a6c (size 212) =====

uint sym.tmc_read_prepare_etr(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) == 1) {
        mutex_lock(arg1 + 0x90);
        uVar2 = _raw_spin_lock_irqsave(arg1 + 0x60);
        if (*(arg1 + 0x68) == '\0') {
            if ((*(arg1 + 0x110) == 0) || ((*(arg1 + 0x120) != 0 && (*(*(arg1 + 0x120) + 0x90) != '\0')))) {
                uVar3 = 0xffffffea;
            }
            else {
                if (*(arg1 + 0x84) == 1) {
                    sym.__tmc_etr_disable_hw(arg1);
                }
                uVar3 = 0;
                *(arg1 + 0x68) = 1;
            }
        }
        else {
            uVar3 = 0xfffffff0;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar2);
        mutex_unlock(arg1 + 0x90);
        return uVar3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8007b40);
    (*pcVar1)();
}


// ===== sym.tmc_read_unprepare_etr @ 0x08007b44 (size 296) =====

ulong sym.tmc_read_unprepare_etr(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x88) != 1) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x8007c44);
        (*pcVar4)();
    }
    mutex_lock(arg1 + 0x90);
    iVar1 = arg1 + 0x60;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1 + 0x84) == 1) {
        sym.__tmc_etr_enable_hw(arg1);
        *(arg1 + 0x68) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
    }
    else {
        iVar3 = *(arg1 + 0x110);
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x68) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        if (iVar3 != 0) {
            if ((*(iVar3 + 0x30) == 0) || (pcVar4 = *(*(iVar3 + 0x30) + 0x18), pcVar4 == NULL)) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8007be4);
                (*pcVar4)();
            }
            if (1 < (pcVar4 + -0x8003710 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0xc1d48fc971739e38,pcVar4,0x80011d0);
            }
            (*pcVar4)(iVar3);
            kfree(iVar3);
        }
    }
    mutex_unlock(arg1 + 0x90);
    return 0;
}


// ===== sym.__tmc_etr_enable_hw @ 0x08007c6c (size 456) =====

int sym.__tmc_etr_enable_hw(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x70);
    sym.writel_relaxed_1(0xc5acce55,*arg1 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    iVar2 = sym.tmc_wait_for_tmcready(arg1);
    if (iVar2 == 0) {
        uVar5 = *(iVar6 + 0x10);
        uVar1 = uVar5 + 3;
        if (-1 < uVar5) {
            uVar1 = uVar5;
        }
        sym.writel_relaxed_1(uVar1 >> 2,*arg1 + 4);
        sym.writel_relaxed_1(0,*arg1 + 0x28);
        uVar3 = sym.readl_relaxed_2(*arg1 + 0x110);
        uVar4 = 0x3e;
        if ((*(arg1 + 0xc4) & 2) != 0) {
            uVar4 = 0xf003e;
        }
        uVar4 = uVar3 & 0xfffff000 | uVar3 & 0x40 | (*(arg1 + 0x80) & 0xf) << 8 | uVar4;
        uVar3 = uVar4 | 0x80;
        if (*(iVar6 + 4) != 1) {
            uVar3 = uVar4;
        }
        sym.writel_relaxed_1(uVar3,*arg1 + 0x110);
        iVar7 = *arg1;
        uVar4 = *(iVar6 + 0x1c);
        sym.writel_relaxed_1(*(iVar6 + 0x18),iVar7 + 0x118);
        sym.writel_relaxed_1(uVar4,iVar7 + 0x11c);
        if ((*(arg1 + 0xc4) >> 2 & 1) != 0) {
            iVar7 = *arg1;
            uVar4 = *(iVar6 + 0x1c);
            sym.writel_relaxed_1(*(iVar6 + 0x18),iVar7 + 0x14);
            sym.writel_relaxed_1(uVar4,iVar7 + 0x38);
            iVar7 = *arg1;
            uVar4 = *(iVar6 + 0x1c);
            sym.writel_relaxed_1(*(iVar6 + 0x18),iVar7 + 0x18);
            sym.writel_relaxed_1(uVar4,iVar7 + 0x3c);
            uVar4 = sym.readl_relaxed_2(*arg1 + 0xc);
            sym.writel_relaxed_1(uVar4 & 0xfffffffe,*arg1 + 0xc);
        }
        uVar4 = 0x133;
        if (*(arg1 + 0x158) != '\0') {
            uVar4 = 0x1133;
        }
        sym.writel_relaxed_1(uVar4,*arg1 + 0x304);
        sym.writel_relaxed_1(*(arg1 + 0xc0),*arg1 + 0x1c);
        sym.writel_relaxed.llvm.7170818669875191139(1,*arg1 + 0x20);
        arg1 = *arg1;
        DataSynchronizationBarrier(3,3,0);
    }
    else {
        arg1 = *arg1;
        DataSynchronizationBarrier(3,3,0);
    }
    sym.writel_relaxed_1(0,arg1 + 0xfb0);
    return iVar2;
}


// ===== sym.tmc_pages_free @ 0x08007e34 (size 244) =====

void sym.tmc_pages_free(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = arg1 + 8;
    if (0 < *arg1) {
        iVar5 = 0;
        uVar3 = *(arg2 + 0x60);
        do {
            if ((*piVar4 != 0) && (iVar2 = *(*piVar4 + iVar5 * 8), iVar2 != 0)) {
                dma_unmap_page_attrs(uVar3,iVar2,0x1000,arg3 & 0xffffffff,0);
            }
            if ((*(arg1 + 0x10) != 0) && (iVar2 = *(*(arg1 + 0x10) + iVar5 * 8), iVar2 != 0)) {
                __free_pages(iVar2,0);
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < *arg1);
    }
    uVar1 = is_vmalloc_addr(*(arg1 + 0x10));
    if ((uVar1 & 1) == 0) {
        kfree(*(arg1 + 0x10));
    }
    else {
        vfree();
    }
    uVar1 = is_vmalloc_addr(*piVar4);
    if ((uVar1 & 1) == 0) {
        kfree(*piVar4);
    }
    else {
        vfree();
    }
    *arg1 = 0;
    *piVar4 = 0;
    *(arg1 + 0x10) = 0;
    return;
}


// ===== sym.tmc_pages_alloc @ 0x08007f28 (size 580) =====

ulong sym.tmc_pages_alloc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t in_x4;
    uint64_t uVar9;
    ulong *in_x18;
    ulong uVar10;
    int64_t iVar11;
    ulong *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *arg1;
    bVar4 = uVar2 >> 0x3d != 0;
    uVar10 = *(arg2 + 0x60);
    iVar11 = uVar2 << 3;
    if (bVar4) {
        *(arg1 + 8) = 0;
code_r0x08007f94:
        iVar5 = vmalloc(iVar11);
        *(arg1 + 8) = iVar5;
        if (iVar5 == 0) {
            return 0xfffffff4;
        }
        if (!bVar4) goto code_r0x08007fa8;
        *(arg1 + 0x10) = 0;
    }
    else {
        iVar5 = __kmalloc(iVar11,0xdc0);
        *(arg1 + 8) = iVar5;
        if (iVar5 == 0) goto code_r0x08007f94;
code_r0x08007fa8:
        iVar5 = __kmalloc(iVar11,0xdc0);
        *(arg1 + 0x10) = iVar5;
        if (iVar5 != 0) goto code_r0x08007fd0;
    }
    puVar12 = arg1 + 8;
    iVar11 = vmalloc(iVar11);
    *(arg1 + 0x10) = iVar11;
    if (iVar11 == 0) {
        uVar9 = is_vmalloc_addr(*puVar12);
        if ((uVar9 & 1) == 0) {
            kfree(*puVar12);
        }
        else {
            vfree();
        }
        *puVar12 = 0;
        return 0xfffffff4;
    }
code_r0x08007fd0:
    if (0 < uVar2) {
        uVar9 = uVar2;
        iVar11 = 0;
        iVar5 = uVar9 * 8;
        do {
            if (in_x4 == 0) {
code_r0x08008040:
                uVar8 = arg3 & 0xffffffff;
                if (arg3 == -1) {
                    uVar9 = tpidr_el1;
                    uVar8 = 0;
                }
                iVar6 = __alloc_pages(uVar9,0xdc0,0,uVar8,0);
                if (iVar6 == 0) goto code_r0x080080cc;
            }
            else {
                uVar9 = 0;
                if (*(in_x4 + iVar11) == 0) goto code_r0x08008040;
                uVar9 = ((*(in_x4 + iVar11) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
                iVar6 = uVar9 - 0x200000000;
                uVar9 = *(uVar9 - 0x1fffffff8);
                iVar7 = iVar6;
                if ((uVar9 & 1) != 0) {
                    iVar7 = uVar9 - 1;
                }
                piVar1 = iVar7 + 0x34;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = *piVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            iVar7 = dma_map_page_attrs(uVar10,iVar6,0,0x1000,arg4 & 0xffffffffU,0);
            if (iVar7 == -1) {
code_r0x080080cc:
                sym.tmc_pages_free(arg1,arg2,arg4 & 0xffffffffU);
                return 0xfffffff4;
            }
            *(*(arg1 + 8) + iVar11) = iVar7;
            uVar9 = *(arg1 + 0x10);
            *(uVar9 + iVar11) = iVar6;
            iVar11 = iVar11 + 8;
        } while (iVar5 - iVar11 != 0);
    }
    return 0;
}


// ===== sym.tmc_etr_alloc_flat_buf @ 0x0800816c (size 300) =====

ulong sym.tmc_etr_alloc_flat_buf(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t in_x3;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x3 == 0) {
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        uVar1 = *(*(arg1 + 8) + 0x98);
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x28);
        if (piVar2 == NULL) {
            uVar1 = 0xfffffff4;
        }
        else {
            piVar3 = dma_alloc_noncontiguous(uVar1,*(arg2 + 0x10),2,0xcc0,0);
            piVar2[4] = piVar3;
            if (piVar3 == NULL) {
                kfree(piVar2);
                uVar1 = 0xfffffff4;
            }
            else {
                uVar5 = *(arg2 + 0x10);
                iVar7 = *(*piVar3 + 0x10);
                piVar2[1] = iVar7;
                iVar4 = dma_vmap_noncontiguous(uVar1,uVar5,piVar3);
                iVar6 = *(arg2 + 0x10);
                piVar2[2] = iVar4;
                if (iVar4 == 0) {
                    dma_free_noncontiguous(uVar1,iVar6,piVar3,2);
                    uVar1 = 0xfffffff4;
                    piVar2[4] = 0;
                }
                else {
                    iVar4 = *(arg1 + 8);
                    uVar1 = 0;
                    piVar2[3] = iVar6;
                    *(arg2 + 0x18) = iVar7;
                    *(arg2 + 4) = 0;
                    *(arg2 + 0x38) = piVar2;
                    *piVar2 = iVar4 + 0x38;
                }
            }
        }
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.tmc_etr_sync_flat_buf @ 0x08008298 (size 124) =====

void sym.tmc_etr_sync_flat_buf(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg2 - *(arg1 + 0x18);
    uVar1 = *(**(arg1 + 0x38) + 0x60);
    *(arg1 + 0x20) = iVar5;
    if (*(arg1 + 8) == '\0') {
        uVar4 = arg3 - arg2;
        uVar3 = *(arg1 + 0x10);
    }
    else {
        uVar3 = *(arg1 + 0x10);
        uVar4 = uVar3;
    }
    *(arg1 + 0x28) = uVar4;
    iVar2 = (*(arg1 + 0x38))[1];
    if (uVar4 + iVar5 <= uVar3) {
        iVar2 = iVar2 + iVar5;
        uVar3 = uVar4;
    }
    dma_sync_single_for_cpu(uVar1,iVar2,uVar3,2);
    return;
}


// ===== sym.tmc_etr_get_data_flat_buf @ 0x08008314 (size 32) =====

int64_t sym.tmc_etr_get_data_flat_buf(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    *arg4 = *(*(arg1 + 0x38) + 0x10) + arg2;
    return arg3;
}


// ===== sym.tmc_etr_free_flat_buf @ 0x08008334 (size 124) =====

void sym.tmc_etr_free_flat_buf(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0x38);
    if ((piVar1 != NULL) && (piVar1[1] != 0)) {
        uVar2 = *(*piVar1 + 0x60);
        dma_vunmap_noncontiguous(uVar2,piVar1[2]);
        dma_free_noncontiguous(uVar2,*(arg1 + 0x10),piVar1[4],2);
        piVar1[2] = 0;
        piVar1[4] = 0;
    }
    kfree(piVar1);
    return;
}


// ===== sym.tmc_etr_alloc_sg_buf @ 0x080083b0 (size 600) =====

ulong sym.tmc_etr_alloc_sg_buf(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    int iVar8;
    int iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(arg1 + 8);
    uVar14 = *(arg2 + 0x10);
    iVar7 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar7 = 0x30;
    }
    puVar1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x10);
    if (puVar1 != NULL) {
        uVar14 = uVar14 >> 0xc;
        uVar3 = uVar14;
        if (uVar3 < 0x3ff) {
            iVar4 = 0;
        }
        else {
            iVar4 = uVar3 / 0x3ff - (uVar3 % 0x3ff < 2);
        }
        puVar2 = sym.tmc_alloc_sg_table(iVar13 + 0x38,arg3 & 0xffffffff,iVar4 + uVar3 + 0x3ffU >> 10,uVar14);
        if (puVar2 < 0xfffffffffffff001) {
            *puVar1 = puVar2;
            puVar1[1] = puVar2[3];
            uVar3 = puVar2[8];
            uVar14 = puVar2[9];
            if (uVar3 < 0x3ff) {
                iVar4 = 0;
            }
            else {
                iVar4 = uVar3 / 0x3ff - (uVar3 % 0x3ff < 2);
            }
            puVar5 = puVar2[1];
            iVar4 = uVar3 + iVar4 + -1;
            if (iVar4 < 1) {
                iVar7 = 0;
            }
            else {
                iVar8 = 0;
                uVar3 = 0;
                iVar9 = 0;
                uVar10 = puVar2[6];
                puVar6 = puVar5;
                do {
                    iVar7 = iVar8;
                    iVar13 = uVar10 + (iVar9 + 1) * 8;
                    if (uVar3 != 0x3ff) {
                        iVar8 = iVar8 + 1;
                        iVar13 = uVar14 + iVar7 * 8;
                    }
                    uVar11 = 2;
                    if (uVar3 == 0x3ff) {
                        uVar11 = 3;
                    }
                    uVar3 = uVar3 + 1 & 0x3ff;
                    if (uVar3 == 0) {
                        iVar9 = iVar9 + 1;
                    }
                    iVar4 = iVar4 + -1;
                    puVar5 = puVar6 + 1;
                    *puVar6 = *(iVar13 + 1) & 0xfffffff0 | uVar11;
                    puVar6 = puVar5;
                } while (iVar4 != 0);
                iVar7 = iVar8;
            }
            *puVar5 = *(uVar14 + iVar7 * 8) >> 8 & 0xfffffff0 | 1;
            if (0 < puVar2[5]) {
                iVar7 = 0;
                uVar12 = *(*puVar2 + 0x60);
                do {
                    dma_sync_single_for_device(uVar12,*(puVar2[6] + iVar7 * 8),0x1000,1);
                    iVar7 = iVar7 + 1;
                } while (iVar7 < puVar2[5]);
            }
        }
        else {
            kfree(puVar1);
            puVar1 = puVar2;
        }
        if (puVar1 < 0xfffffffffffff001) {
            uVar14 = puVar1[1];
            *(arg2 + 0x38) = puVar1;
            *(arg2 + 0x18) = uVar14;
            *(arg2 + 4) = 1;
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.tmc_etr_sync_sg_buf @ 0x08008608 (size 388) =====

void sym.tmc_etr_sync_sg_buf(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong uVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    int iVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    
    uVar13 = arg3;
    *in_x18 = unaff_x30;
    piVar12 = **(arg1 + 0x38);
    uVar1 = *(piVar12 + 8);
    if (0 < uVar1) {
        puVar9 = piVar12[9];
        iVar4 = arg2;
        puVar7 = puVar9;
        uVar15 = uVar1;
        do {
            uVar8 = *puVar7;
            if ((arg2 >= uVar8 && arg2 <= uVar8 + 0x1000) && (arg2 < uVar8 || uVar8 + 0x1000 != arg2)) {
                uVar15 = iVar4 - uVar8;
                if (-1 < uVar15) {
                    iVar6 = 0;
                    goto code_r0x08008684;
                }
                break;
            }
            iVar4 = iVar4 + 0x1000;
            uVar15 = uVar15 - 1;
            puVar7 = puVar7 + 1;
        } while (uVar15 != 0);
    }
    iVar4 = *piVar12;
    pcVar5 = "Unable to map RRP %llx to offset\n";
    uVar13 = arg2;
    goto code_r0x0800876c;
    while( true ) {
        iVar6 = iVar6 + -0x1000;
        puVar9 = puVar9 + 1;
        uVar8 = uVar8 + 0x1000;
        if (uVar1 * 0x1000 + iVar6 == 0) break;
code_r0x08008684:
        uVar10 = *puVar9;
        if ((uVar13 >= uVar10 && uVar13 <= uVar10 + 0x1000) && (uVar13 < uVar10 || uVar10 + 0x1000 != uVar13)) {
            iVar6 = (uVar13 - uVar10) - iVar6;
            if (-1 < iVar6) {
                *(arg1 + 0x20) = uVar15;
                if (*(arg1 + 8) == '\0') {
                    if (iVar6 < uVar15) {
                        iVar6 = *(arg1 + 0x10);
                    }
                    else {
                        iVar6 = 0;
                    }
                    iVar4 = (((iVar6 + uVar8) - uVar10) + uVar13) - iVar4;
                }
                else {
                    iVar4 = *(arg1 + 0x10);
                }
                uVar15 = uVar15 >> 0xc;
                uVar13 = iVar4 + 0xfffU >> 0xc;
                *(arg1 + 0x28) = iVar4;
                if (uVar13 + uVar15 <= uVar15) {
                    return;
                }
                uVar11 = *(*piVar12 + 0x60);
                do {
                    iVar2 = piVar12[8];
                    iVar3 = 0;
                    iVar14 = uVar15;
                    if (iVar2 != 0) {
                        iVar3 = iVar14 / iVar2;
                    }
                    dma_sync_single_for_cpu(uVar11,*(piVar12[9] + (iVar14 - iVar3 * iVar2) * 8),0x1000,2);
                    uVar15 = iVar14 + 1;
                    uVar1 = uVar13 - 1;
                    uVar13 = uVar1;
                } while (uVar1 != 0);
                return;
            }
            break;
        }
    }
    iVar4 = *piVar12;
    pcVar5 = "Unable to map RWP %llx to offset\n";
code_r0x0800876c:
    _dev_warn(iVar4,pcVar5,uVar13);
    *(arg1 + 0x28) = 0;
    return;
}


// ===== sym.tmc_etr_get_data_sg_buf @ 0x0800878c (size 144) =====

uint64_t sym.tmc_etr_get_data_sg_buf(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar1 = *(**(arg1 + 0x38) + 0x40) << 0xc;
    uVar2 = uVar1 - arg2;
    if (arg2 <= uVar1 && uVar2 != 0) {
        uVar1 = arg3;
        if (uVar2 <= arg3) {
            uVar1 = uVar2;
        }
        uVar2 = 0x1000 - (arg2 & 0xfffU);
        if (uVar2 <= uVar1) {
            uVar1 = uVar2;
        }
        if (uVar1 != 0) {
            *arg4 = ((*(*(**(arg1 + 0x38) + 0x50) + (arg2 >> 0xc) * 8) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) +
                    (arg2 & 0xfffU);
        }
        return uVar1;
    }
    return 0xffffffffffffffea;
}


// ===== sym.tmc_etr_free_sg_buf @ 0x0800881c (size 116) =====

void sym.tmc_etr_free_sg_buf(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0x38);
    if (puVar1 != NULL) {
        piVar2 = *puVar1;
        if (piVar2[1] != 0) {
            vunmap();
        }
        sym.tmc_pages_free(piVar2 + 5,*piVar2,1);
        if (piVar2[2] != 0) {
            vunmap();
        }
        sym.tmc_pages_free(piVar2 + 8,*piVar2,2);
        kfree(puVar1);
    }
    return;
}


// ===== sym.tmc_sync_etr_buf @ 0x08008890 (size 292) =====

void sym.tmc_sync_etr_buf(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *arg1;
    iVar4 = *(arg1 + 0x70);
    uVar2 = sym.readl_relaxed_2(iVar5 + 0x14);
    iVar5 = sym.readl_relaxed_2(iVar5 + 0x38);
    iVar7 = *arg1;
    uVar3 = sym.readl_relaxed_2(iVar7 + 0x18);
    iVar7 = sym.readl_relaxed_2(iVar7 + 0x3c);
    uVar1 = sym.readl_relaxed_2(*arg1 + 0xc);
    if ((uVar1 >> 5 & 1) != 0) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x800,0x8008970);
        (*pcVar6)();
    }
    *(iVar4 + 8) = uVar1 & 1;
    if ((*(iVar4 + 0x30) != 0) && (pcVar6 = *(*(iVar4 + 0x30) + 8), pcVar6 != NULL)) {
        if (1 < (pcVar6 + -0x8003630 >> 3 | pcVar6 << 0x3d)) {
            __cfi_slowpath_diag(0xe7f8b759ceefb45a,pcVar6,0x8001190);
        }
        (*pcVar6)(iVar4,uVar2 & 0xffffffff | iVar5 << 0x20,uVar3 & 0xffffffff | iVar7 << 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x800,0x8008928);
    (*pcVar6)();
}


// ===== sym.tmc_alloc_etr_buf @ 0x080089b4 (size 516) =====

uint * sym.tmc_alloc_etr_buf(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint *puVar6;
    ulong *in_x18;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0xc4);
    iVar5 = iommu_get_domain_for_dev(*(*(arg1 + 8) + 0x98));
    if (iVar5 == 0) {
        bVar2 = false;
    }
    else {
        uVar3 = qcom_iommu_get_mappings_configuration();
        if (uVar3 < 0) {
            return 0xfffffffffffffff4;
        }
        bVar2 = (uVar3 & 1) == 0;
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x40);
    if (puVar6 == NULL) {
        return 0xfffffffffffffff4;
    }
    *(puVar6 + 4) = arg2;
    if (((uVar1 & 1) == 0) || (arg2 < 0x100000 | bVar2)) {
        if (_segment.ehdr == NULL) {
            iVar4 = -0x16;
        }
        else {
            pcVar7 = *_segment.ehdr;
            if (pcVar7 == NULL) {
                iVar4 = -0x16;
            }
            else {
                if (1 < (pcVar7 + -0x8003688 >> 3 | pcVar7 << 0x3d)) {
                    __cfi_slowpath_diag(0xb10cfe07a1a5cdb,pcVar7,0x80011b0);
                }
                iVar4 = (*pcVar7)(arg1,puVar6,arg3 & 0xffffffffU,0);
                if (iVar4 == 0) {
                    pcVar7 = obj.etr_buf_ops;
                    goto code_r0x08008b5c;
                }
            }
        }
    }
    else {
        iVar4 = -0xc;
    }
    if ((uVar1 & 1) != 0) {
        if ((_segment.ehdr == NULL) || (pcVar7 = *_segment.ehdr, pcVar7 == NULL)) {
            iVar4 = -0x16;
        }
        else {
            if (1 < (pcVar7 + -0x8003688 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0xb10cfe07a1a5cdb,pcVar7,0x80011b0);
            }
            iVar4 = (*pcVar7)(arg1,puVar6,arg3 & 0xffffffffU,0);
            if (iVar4 == 0) {
                pcVar7 = 0x8000f78;
code_r0x08008b5c:
                *(puVar6 + 0xc) = *pcVar7;
                *puVar6 = 1;
                return puVar6;
            }
        }
    }
    kfree(puVar6);
    return iVar4;
}


// ===== sym.tmc_enable_etr_sink @ 0x08008bb8 (size 132) =====

uint sym.tmc_enable_etr_sink(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 2) {
        uVar2 = sym.tmc_enable_etr_sink_perf(arg1,arg3);
    }
    else if (arg2 == 1) {
        iVar1 = *(*(arg1 + 0x98) + 0x98) + 0x90;
        mutex_lock(iVar1);
        uVar2 = sym.tmc_enable_etr_sink_sysfs(arg1);
        mutex_unlock(iVar1);
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.tmc_disable_etr_sink @ 0x08008c3c (size 92) =====

uint sym.tmc_disable_etr_sink(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x98) + 0x98) + 0x90;
    mutex_lock(iVar1);
    uVar2 = sym._tmc_disable_etr_sink(arg1,0);
    mutex_unlock(iVar1);
    return uVar2;
}


// ===== sym.tmc_alloc_etr_buffer @ 0x08008c98 (size 340) =====

int64_t * sym.tmc_alloc_etr_buffer(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint8_t in_w4;
    uint32_t uVar6;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
    if (piVar4 == NULL) {
        return NULL;
    }
    if (*(arg2 + 0x28c) == -1) {
        uVar6 = *(arg1_00 + 0x7c);
        uVar3 = arg4 << 0xc;
        if (uVar6 < uVar3) {
            uVar5 = sym.tmc_alloc_etr_buf(arg1_00,uVar3,0xffffffff);
            if (uVar5 < 0xfffffffffffff001) goto code_r0x08008d28;
            uVar6 = *(arg1_00 + 0x7c);
        }
        arg2_00 = uVar6;
        do {
            uVar5 = sym.tmc_alloc_etr_buf(arg1_00,arg2_00,0xffffffff);
            if (uVar5 < 0xfffffffffffff001) goto code_r0x08008d28;
            uVar5 = arg2_00 >> 0x15;
            arg2_00 = arg2_00 >> 1;
        } while (uVar5 != 0);
    }
    else {
        uVar5 = sym.get_perf_etr_buf_cpu_wide(arg1_00,arg2,arg4 & 0xffffffff);
code_r0x08008d28:
        if (uVar5 < 0xfffffffffffff001) {
            *piVar4 = arg1_00;
            piVar4[1] = uVar5;
            if (0xfffffffffffff000 < piVar4) {
                return NULL;
            }
            uVar2 = *(*(arg2 + 0x2a0) + 0x5d8);
            *(piVar4 + 0x14) = in_w4 & 1;
            *(piVar4 + 3) = arg4;
            piVar4[4] = arg3;
            *(piVar4 + 2) = uVar2;
            return piVar4;
        }
    }
    kfree(piVar4);
    return NULL;
}


// ===== sym.tmc_free_etr_buffer @ 0x08008dec (size 348) =====

void sym.tmc_free_etr_buffer(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int *piVar4;
    ulong *in_x18;
    int *piVar5;
    int64_t iVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(arg1 + 8);
    if (piVar5 != NULL) {
        iVar8 = *arg1;
        iVar6 = iVar8 + 0xe0;
        mutex_lock(iVar6);
        Hint_Prefetch(piVar5,2,0,1);
        do {
            iVar1 = *piVar5;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
                *piVar5 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            piVar4 = idr_remove(iVar8 + 200,*(arg1 + 0x10));
            mutex_unlock(iVar6);
            if ((piVar4 != NULL) && (piVar5 != piVar4)) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x8008eb4);
                (*pcVar7)();
            }
            iVar6 = *(arg1 + 8);
            if ((*(iVar6 + 0x30) == 0) || (pcVar7 = *(*(iVar6 + 0x30) + 0x18), pcVar7 == NULL)) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x8008e7c);
                (*pcVar7)();
            }
            if (1 < (pcVar7 + -0x8003710 >> 3 | pcVar7 << 0x3d)) {
                __cfi_slowpath_diag(0xc1d48fc971739e38,pcVar7,0x80011d0);
            }
            (*pcVar7)(iVar6);
            kfree(iVar6);
        }
        else {
            if (iVar1 < 1) {
                refcount_warn_saturate(piVar5,3);
            }
            mutex_unlock(iVar6);
        }
    }
    kfree(arg1);
    return;
}


// ===== sym.tmc_update_etr_buffer @ 0x08008f48 (size 884) =====

code * sym.tmc_update_etr_buffer(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    bool bVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    code *pcVar9;
    code *pcVar10;
    int64_t iVar11;
    int64_t iVar12;
    code *arg1_00;
    code *pcVar13;
    int64_t iVar14;
    ulong unaff_x30;
    ulong *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    iVar12 = *(arg3 + 8);
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    pcVar10 = arg1_00 + 0x60;
    uVar4 = _raw_spin_lock_irqsave(pcVar10);
    if (**(arg1 + 0x3c8) != 1) {
        _raw_spin_unlock_irqrestore(pcVar10,uVar4);
        pcVar9 = NULL;
        goto code_r0x0800922c;
    }
    if (*(arg1_00 + 0x118) != iVar12) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x8009278);
        (*pcVar10)();
    }
    sym.writel_relaxed_1(0xc5acce55,*arg1_00 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    sym.tmc_flush_and_stop(arg1_00);
    sym.tmc_sync_etr_buf(arg1_00);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed_1(0,*arg1_00 + 0xfb0);
    _raw_spin_unlock_irqrestore(pcVar10,uVar4);
    uVar4 = *(iVar12 + 0x20);
    pcVar10 = *(iVar12 + 0x28);
    if ((*(arg3 + 0x14) == '\0') && (*(arg2 + 0x18) < pcVar10)) {
        uVar4 = sym.tmc_get_memwidth_mask(arg1_00);
        pcVar10 = *(arg2 + 0x18) & uVar4 & 0xffffffff;
        uVar6 = *(iVar12 + 0x10);
        uVar4 = (*(iVar12 + 0x20) - pcVar10) + *(iVar12 + 0x28);
        uVar8 = 0;
        if (uVar6 <= uVar4) {
            uVar8 = uVar6;
        }
        uVar4 = uVar4 - uVar8;
    }
    else {
        if (*(iVar12 + 8) == '\0') {
            bVar2 = false;
            pcVar9 = pcVar10;
            goto code_r0x080090e8;
        }
        uVar6 = *(iVar12 + 0x10);
    }
    pcVar9 = uVar6 - uVar4;
    puStack_70 = NULL;
    arg1_00 = *(*(iVar12 + 0x30) + 0x10);
    if (1 < (arg1_00 + -0x8003658 >> 3 | arg1_00 << 0x3d)) goto code_r0x08009298;
    while( true ) {
        if (0xf < pcVar9) {
            pcVar9 = 0x10;
        }
        uVar6 = (*arg1_00)(iVar12,uVar4,pcVar9,&puStack_70);
        uVar3 = _kfree;
        if (uVar6 < 0x10) {
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x800,0x8009290);
            (*pcVar10)();
        }
        if (puStack_70 != NULL) {
            *puStack_70 = _coresight_barrier_pkt;
            puStack_70[1] = uVar3;
        }
        bVar2 = true;
        pcVar9 = pcVar10;
code_r0x080090e8:
        puStack_70 = NULL;
        pcVar10 = pcVar9;
        if (pcVar9 != NULL) {
            iVar12 = *(arg3 + 8);
            iVar14 = *(arg3 + 0x20);
            uVar8 = *(arg3 + 0x18) << 0xc;
            uVar6 = 0;
            if (uVar8 != 0) {
                uVar6 = *(arg2 + 0x28) / uVar8;
            }
            uVar6 = *(arg2 + 0x28) - uVar6 * uVar8;
            arg1_00 = uVar6 & 0xfff;
            uVar6 = uVar6 >> 0xc;
            do {
                pcVar13 = *(*(iVar12 + 0x30) + 0x10);
                uVar7 = *(iVar12 + 0x10);
                uVar8 = 0;
                if (uVar7 <= uVar4) {
                    uVar8 = uVar7;
                }
                iVar11 = uVar4 - uVar8;
                if (1 < (pcVar13 + -0x8003658 >> 3 | pcVar13 << 0x3d)) {
                    __cfi_slowpath_diag(0x9790b0527eae5c52,pcVar13,0x8001170);
                }
                pcVar1 = pcVar10;
                if (uVar7 - iVar11 <= pcVar10) {
                    pcVar1 = uVar7 - iVar11;
                }
                iVar5 = (*pcVar13)(iVar12,iVar11,pcVar1,&puStack_70);
                if (iVar5 < 1) {
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x800,0x80091f4);
                    (*pcVar10)();
                }
                if (0x1000 - arg1_00 <= iVar5) {
                    iVar5 = 0x1000 - arg1_00;
                }
                memcpy(arg1_00 + *(iVar14 + uVar6 * 8),puStack_70,iVar5);
                pcVar10 = pcVar10 + -iVar5;
                arg1_00 = arg1_00 + iVar5;
                uVar8 = uVar6;
                if (arg1_00 == 0x1000) {
                    arg1_00 = NULL;
                    uVar8 = 0;
                    if (uVar6 + 1 != *(arg3 + 0x18)) {
                        uVar8 = uVar6 + 1;
                    }
                }
                uVar4 = iVar5 + iVar11;
                uVar6 = uVar8;
            } while (pcVar10 != NULL);
        }
        if (*(arg3 + 0x14) != '\0') {
            *(arg2 + 0x28) = pcVar9 + *(arg2 + 0x28);
        }
        DataMemoryBarrier(2,2);
        if ((bVar2) && (*(arg3 + 0x14) == '\0')) {
            perf_aux_output_flag(arg2,1);
        }
code_r0x0800922c:
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_68) break;
        __stack_chk_fail();
code_r0x08009298:
        __cfi_slowpath_diag(0x9790b0527eae5c52,arg1_00,0x8001170);
    }
    return pcVar9;
}


// ===== sym.tmc_enable_etr_sink_perf @ 0x080092c0 (size 448) =====

int sym.tmc_enable_etr_sink_perf(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    int *piVar8;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x98);
    iVar6 = perf_get_aux(arg2);
    if (iVar6 == 0) {
        iVar6 = 0;
    }
    else {
        iVar6 = *(iVar6 + 0x38);
    }
    uVar7 = _raw_spin_lock_irqsave(arg1_00 + 0x60);
    if (*(arg1_00 + 0x84) != 1) {
        if ((iVar6 == 0) || (iVar9 = *(iVar6 + 8), iVar9 == 0)) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x8009354);
            (*pcVar4)();
        }
        iVar5 = *(arg1_00 + 100);
        iVar1 = *(iVar6 + 0x10);
        if ((iVar5 == -1) || (iVar5 == iVar1)) {
            if (iVar5 == iVar1) {
                piVar8 = *(arg1 + 0x3c8);
                Hint_Prefetch(piVar8,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar8,0x10);
                    if (bVar3) {
                        *piVar8 = *piVar8 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            else {
                if ((*(iVar9 + 4) == 1) && ((*(arg1_00 + 0xc4) & 1) == 0)) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8009434);
                    (*pcVar4)();
                }
                if (*(arg1_00 + 0x70) != 0) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8009428);
                    (*pcVar4)();
                }
                iVar5 = coresight_claim_device(*(arg1_00 + 8));
                if (iVar5 != 0) goto code_r0x080093c4;
                *(arg1_00 + 0x70) = iVar9;
                iVar5 = sym.__tmc_etr_enable_hw(arg1_00);
                if (iVar5 != 0) {
                    coresight_disclaim_device(*(arg1_00 + 8));
                    goto code_r0x080093c4;
                }
                *(arg1_00 + 100) = iVar1;
                *(arg1_00 + 0x84) = 2;
                *(arg1_00 + 0x118) = *(iVar6 + 8);
                piVar8 = *(arg1 + 0x3c8);
                Hint_Prefetch(piVar8,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar8,0x10);
                    if (bVar3) {
                        *piVar8 = *piVar8 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            iVar5 = 0;
            goto code_r0x080093c4;
        }
    }
    iVar5 = -0x10;
code_r0x080093c4:
    _raw_spin_unlock_irqrestore(arg1_00 + 0x60,uVar7);
    return iVar5;
}


// ===== sym.get_perf_etr_buf_cpu_wide @ 0x08009480 (size 680) =====

uint32_t * sym.get_perf_etr_buf_cpu_wide(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    char cVar6;
    bool bVar7;
    int iVar8;
    uint32_t *puVar9;
    ulong uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    uint64_t arg2_00;
    code *pcVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0xe0;
    iVar2 = arg1 + 200;
    iVar4 = *(*(arg2 + 0x2a0) + 0x5d8);
    mutex_lock(iVar1);
    puVar9 = idr_find(iVar2,iVar4);
    if (puVar9 == NULL) {
        uVar5 = arg3 << 0xc;
        do {
            mutex_unlock(iVar1);
            uVar11 = *(arg1 + 0x7c);
            uVar3 = -(*(arg2 + 0x28c) == -1);
            if (uVar11 < uVar5) {
                puVar9 = sym.tmc_alloc_etr_buf(arg1,uVar5,uVar3);
                if (0xfffffffffffff000 < puVar9) {
                    uVar11 = *(arg1 + 0x7c);
                    goto code_r0x08009554;
                }
            }
            else {
code_r0x08009554:
                arg2_00 = uVar11;
                while (puVar9 = sym.tmc_alloc_etr_buf(arg1,arg2_00,uVar3), 0xfffffffffffff000 < puVar9) {
                    uVar12 = arg2_00 >> 0x15;
                    arg2_00 = arg2_00 >> 1;
                    if (uVar12 == 0) {
                        return 0xfffffffffffffff4;
                    }
                }
            }
            if (0xfffffffffffff000 < puVar9) {
                return puVar9;
            }
            mutex_lock(iVar1);
            iVar8 = idr_alloc(iVar2,puVar9,iVar4,iVar4 + 1,0xcc0);
            mutex_unlock(iVar1);
            if (iVar8 != -0x1c) {
                if (iVar8 != -0xc) {
                    return puVar9;
                }
                if ((*(puVar9 + 0xc) != 0) && (pcVar13 = *(*(puVar9 + 0xc) + 0x18), pcVar13 != NULL)) {
                    if (1 < (pcVar13 + -0x8003710 >> 3 | pcVar13 << 0x3d)) {
                        __cfi_slowpath_diag(0xc1d48fc971739e38,pcVar13,0x80011d0);
                    }
                    (*pcVar13)(puVar9);
                    kfree(puVar9);
                    return 0xfffffffffffffff4;
                }
    //WARNING: Does not return
                pcVar13 = SoftwareBreakpoint(0x800,0x8009664);
                (*pcVar13)();
            }
            if ((*(puVar9 + 0xc) == 0) || (pcVar13 = *(*(puVar9 + 0xc) + 0x18), pcVar13 == NULL)) {
    //WARNING: Does not return
                pcVar13 = SoftwareBreakpoint(0x800,0x80095d8);
                (*pcVar13)();
            }
            if (1 < (pcVar13 + -0x8003710 >> 3 | pcVar13 << 0x3d)) {
                __cfi_slowpath_diag(0xc1d48fc971739e38,pcVar13,0x80011d0);
            }
            (*pcVar13)(puVar9);
            kfree(puVar9);
            mutex_lock(iVar1);
            puVar9 = idr_find(iVar2,iVar4);
        } while (puVar9 == NULL);
    }
    Hint_Prefetch(puVar9,2,0,1);
    do {
        uVar5 = *puVar9;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(puVar9,0x10);
        if (bVar7) {
            *puVar9 = uVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    if (uVar5 == 0) {
        uVar10 = 2;
    }
    else {
        if (-1 < (uVar5 + 1 | uVar5)) goto code_r0x080094fc;
        uVar10 = 1;
    }
    refcount_warn_saturate(puVar9,uVar10);
code_r0x080094fc:
    mutex_unlock(iVar1);
    return puVar9;
}


// ===== sym.tmc_etr_byte_cntr_start @ 0x08009728 (size 100) =====

void sym.tmc_etr_byte_cntr_start(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(arg1 + 0x148);
        if ((*(arg1 + 0x98) != 0) && (*(arg1 + 0x91) == '\0')) {
            *(arg1 + 0xa0) = 0;
            *(arg1 + 0x90) = 1;
        }
        mutex_unlock(arg1 + 0x148);
    }
    return;
}


// ===== sym.tmc_etr_byte_cntr_stop @ 0x0800978c (size 116) =====

void sym.tmc_etr_byte_cntr_stop(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(arg1 + 0x148);
        *(arg1 + 0x90) = 0;
        *(arg1 + 0xa0) = 0;
        __wake_up(arg1 + 0xa8,3,1,0);
        coresight_csr_set_byte_cntr(*(arg1 + 0x178),*(arg1 + 0x198),0);
        mutex_unlock(arg1 + 0x148);
    }
    return;
}


// ===== sym.byte_cntr_init @ 0x08009800 (size 652) =====

int64_t sym.byte_cntr_init(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    char *pcVar9;
    int64_t extraout_x1;
    int64_t iVar10;
    ulong uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar5 = of_irq_get_byname(*(arg1 + 0x2f0),"byte-cntr-irq");
    if (iVar5 < 0) {
code_r0x08009a4c:
        iVar7 = 0;
    }
    else {
        iVar7 = devm_kmalloc(arg1,0x1b8,0xdc0);
        if (iVar7 != 0) {
            iVar10 = *(arg1 + 0x70);
            if (iVar10 == 0) {
                iVar10 = *arg1;
            }
            iVar6 = devm_request_threaded_irq
                              (arg1,iVar5,sym.etr_handler.2f72300410bb282f6ec7d0c8732833fd.cfi_jt,0,0x81,iVar10,
                               iVar7);
            if (iVar6 == 0) {
                iVar6 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),"csr-irqctrl-offset",iVar7 + 0x198,1,0);
                if (iVar6 < 0) {
                    *(iVar7 + 0x198) = 0x6c;
                }
                puVar1 = iVar7 + 0x188;
                iVar6 = device_property_read_string(arg1,"byte-cntr-name",puVar1);
                if (iVar6 != 0) {
                    *puVar1 = "byte-cntr";
                }
                iVar6 = device_property_read_string(arg1,"byte-cntr-class-name",iVar7 + 400);
                if (iVar6 != 0) {
                    *(iVar7 + 400) = "coresight-tmc-etr-stream";
                }
                uStack_4c = 0;
                iVar6 = alloc_chrdev_region(&uStack_4c,0,1,*puVar1);
                if (iVar6 < 0) {
                    _printk(0x8001707,iVar6);
                }
                else {
                    cdev_init(iVar7,obj.byte_cntr_fops);
                    *(iVar7 + 0x60) = obj.__this_module;
                    *(iVar7 + 0x68) = obj.byte_cntr_fops;
                    iVar6 = cdev_add(iVar7,uStack_4c,1);
                    if (iVar6 == 0) {
                        uVar8 = __class_create(obj.__this_module,*(iVar7 + 400),obj.tmc_driver);
                        *(iVar7 + 0x88) = uVar8;
                        if (uVar8 < 0xfffffffffffff001) {
                            uVar8 = device_create(uVar8,0,*(iVar7 + 0x80),iVar7,*(iVar7 + 0x188));
                            if (uVar8 < 0xfffffffffffff001) {
                                uVar11 = *(arg2 + 0x128);
                                *(iVar7 + 0x9c) = iVar5;
                                *(iVar7 + 0x178) = uVar11;
                                *(iVar7 + 0x180) = arg2;
                                *(iVar7 + 0xa0) = 0;
                                __init_waitqueue_head(iVar7 + 0xa8,"&byte_cntr_data->wq",obj.tmc_driver);
                                __mutex_init(iVar7 + 0x148,"&byte_cntr_data->byte_cntr_lock",obj.tmc_driver);
                                goto code_r0x08009a50;
                            }
                            _printk(0x8001450,0);
                            class_destroy(*(iVar7 + 0x88));
                        }
                        else {
                            _printk(0x800135b,0xfffffff4);
                        }
                    }
                    unregister_chrdev_region(*(iVar7 + 0x80),1);
                }
                pcVar9 = "Byte_cntr char dev registration failed\n";
            }
            else {
                pcVar9 = "Byte_cntr interrupt registration failed\n";
            }
            _dev_err(arg1,pcVar9);
            goto code_r0x08009a4c;
        }
    }
code_r0x08009a50:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return iVar7;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.etr_handler;
    iVar5 = *(*(extraout_x1 + 0x180) + 0x140);
    if (iVar5 == 1) {
        piVar2 = extraout_x1 + 0xa0;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar7 = 0xa8;
    }
    else {
        if (iVar5 != 2) goto code_r0x08009b04;
        piVar2 = extraout_x1 + 0xa0;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar7 = 0xc0;
    }
    __wake_up(extraout_x1 + iVar7,3,1,0);
code_r0x08009b04:
    *(extraout_x1 + 0x1b0) = *(extraout_x1 + 0x1b0) + 1;
    return 1;
}


// ===== sym.etr_handler @ 0x08009a8c (size 232) =====

ulong sym.etr_handler(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x180) + 0x140);
    if (iVar2 == 1) {
        piVar1 = arg1 + 0xa0;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar5 = 0xa8;
    }
    else {
        if (iVar2 != 2) goto code_r0x08009b04;
        piVar1 = arg1 + 0xa0;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar5 = 0xc0;
    }
    __wake_up(arg1 + iVar5,3,1,0);
code_r0x08009b04:
    *(arg1 + 0x1b0) = *(arg1 + 0x1b0) + 1;
    return 1;
}


// ===== sym.byte_cntr_remove @ 0x08009b74 (size 76) =====

void sym.byte_cntr_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(*(arg1 + 0x88),*(arg1 + 0x80));
    class_destroy(*(arg1 + 0x88));
    unregister_chrdev_region(*(arg1 + 0x80),1);
    return;
}


// ===== sym.tmc_etr_byte_cntr_read @ 0x08009bc0 (size 724) =====

uint64_t sym.tmc_etr_byte_cntr_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t iVar11;
    int64_t unaff_x21;
    uint64_t uVar12;
    int64_t iVar13;
    int *unaff_x25;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar13 = *(arg1 + 0xd8);
    uStack_60 = 0;
    iVar11 = *(iVar13 + 0x180);
    if (arg2 == 0) {
        uVar7 = 0xffffffffffffffea;
        arg2 = unaff_x21;
        goto code_r0x08009dd0;
    }
    unaff_x19 = iVar13 + 0x148;
    mutex_lock(unaff_x19);
    if (*(iVar13 + 0x91) == '\0') {
code_r0x08009d28:
        uVar7 = sym.tmc_etr_flush_remaining_bytes(iVar11,*(iVar13 + 0x1a0),arg3,&uStack_60);
    }
    else {
        if (*(iVar13 + 0x90) != '\0') {
            unaff_x25 = iVar13 + 0xa0;
            if (*unaff_x25 == 0) {
                mutex_unlock(unaff_x19);
                if ((*unaff_x25 < 1) && (*(iVar13 + 0x90) != '\0')) {
                    uStack_70 = 0;
                    uStack_68 = 0;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_88 = 0;
                    init_wait_entry(&uStack_88,0);
                    iVar8 = iVar13 + 0xa8;
                    iVar6 = prepare_to_wait_event(iVar8,&uStack_88,1);
                    iVar9 = *(iVar13 + 0xa0);
                    while ((iVar9 < 1 && (*(iVar13 + 0x90) != '\0'))) {
                        if (iVar6 != 0) {
                            if (iVar6 != 0) {
                                uVar7 = 0xfffffffffffffe00;
                                goto code_r0x08009dd0;
                            }
                            goto code_r0x08009c94;
                        }
                        schedule();
                        iVar6 = prepare_to_wait_event(iVar8,&uStack_88,1);
                        iVar9 = *unaff_x25;
                    }
                    finish_wait(iVar8,&uStack_88);
                }
code_r0x08009c94:
                mutex_lock(unaff_x19);
                if (*(iVar13 + 0x91) == '\0') goto code_r0x08009d28;
            }
            uVar1 = *(iVar13 + 0x98);
            uVar14 = uVar1;
            uVar12 = *(iVar13 + 0x1a0);
            uVar7 = uVar14;
            if (arg3 < uVar14) {
                uVar4 = 0;
                if (uVar1 != 0) {
                    uVar4 = uVar12 / uVar1;
                }
                uVar10 = uVar12 - uVar4 * uVar1;
                uVar7 = uVar14 - uVar10;
                if (uVar10 + arg3 <= uVar14) {
                    uVar7 = arg3;
                }
            }
            uVar7 = sym.tmc_etr_buf_get_data(*(*(iVar13 + 0x180) + 0x110),uVar12,uVar7,&uStack_60);
            if (uVar7 == uVar14) goto code_r0x08009e50;
            uVar12 = uVar7 + (uVar12 & 0xffffffff);
            uVar10 = 0;
            if (uVar14 != 0) {
                uVar10 = uVar12 / uVar14;
            }
            if (uVar12 == uVar10 * uVar14) goto code_r0x08009e50;
            goto joined_r0x08009d4c;
        }
        uVar7 = sym.tmc_etr_flush_remaining_bytes(iVar11,*(iVar13 + 0x1a0),arg3,&uStack_60);
    }
    if (uVar7 < 1) {
        uVar7 = 0xffffffffffffffea;
        goto code_r0x08009dc8;
    }
joined_r0x08009d4c:
    while( true ) {
        if (uVar7 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8009e68);
            (*pcVar5)();
        }
        noname_1 = __check_object_size(uStack_60,uVar7,1);
        iVar8 = sym._copy_to_user_1(arg2,noname_1,uVar7);
        if (iVar8 == 0) {
            uVar12 = *(iVar13 + 0x1a0) + uVar7;
            *(iVar13 + 0x1a8) = *(iVar13 + 0x1a8) + uVar7;
            if (*(iVar11 + 0x7c) <= uVar12) {
                uVar12 = 0;
            }
            *(iVar13 + 0x1a0) = uVar12;
        }
        else {
            uVar7 = 0xfffffffffffffff2;
        }
code_r0x08009dc8:
        mutex_unlock(unaff_x19);
code_r0x08009dd0:
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
code_r0x08009e50:
        Hint_Prefetch(unaff_x25,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x25,0x10);
            if (bVar3) {
                *unaff_x25 = *unaff_x25 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return uVar7;
}


// ===== sym.tmc_etr_byte_cntr_open @ 0x08009e94 (size 216) =====

uint sym.tmc_etr_byte_cntr_open(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t arg1_00;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x2b0);
    arg1_00 = *(iVar3 + 0x180);
    mutex_lock(iVar3 + 0x148);
    if (*(iVar3 + 0x91) == '\0') {
        if ((*(arg1_00 + 0x84) == 1) && (*(iVar3 + 0x98) != 0)) {
            irq_set_irq_wake(*(iVar3 + 0x9c),1);
            coresight_csr_set_byte_cntr(*(iVar3 + 0x178),*(iVar3 + 0x198),*(iVar3 + 0x98) >> 3);
            *(arg2 + 0xd8) = iVar3;
            nonseekable_open(arg1,arg2);
            *(iVar3 + 0x1a8) = 0;
            *(iVar3 + 0x90) = 0x101;
            uVar1 = sym.tmc_get_rwp_offset(arg1_00);
            uVar2 = 0;
            *(iVar3 + 0x1a0) = uVar1;
        }
        else {
            uVar2 = 0xffffffea;
        }
    }
    else {
        uVar2 = 0xfffffff0;
    }
    mutex_unlock(iVar3 + 0x148);
    return uVar2;
}


// ===== sym.tmc_etr_byte_cntr_release @ 0x08009f6c (size 280) =====

ulong sym.tmc_etr_byte_cntr_release(ulong noname_0,int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0xd8);
    iVar9 = *(*(iVar8 + 0x180) + 8);
    mutex_lock(iVar8 + 0x148);
    *(iVar8 + 0x91) = 0;
    *(iVar8 + 0xa0) = 0;
    if (*(iVar8 + 0x90) != '\0') {
        coresight_csr_set_byte_cntr(*(iVar8 + 0x178),*(iVar8 + 0x198),0);
    }
    irq_set_irq_wake(*(iVar8 + 0x9c),0);
    iVar5 = __pm_runtime_resume(*(iVar9 + 0x98),4);
    if (iVar5 < 0) {
        puVar1 = *(iVar9 + 0x98) + 0x1f8;
        uVar7 = *puVar1;
        do {
            uVar6 = uVar7;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar7 = uVar2;
                if (uVar2 != uVar6) goto code_r0x0800a044;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x0800a044:
        } while (uVar6 != uVar2);
    }
    else {
        sym.tmc_get_rwp_offset(*(iVar8 + 0x180));
        __pm_runtime_idle(*(iVar9 + 0x98),5);
    }
    *(iVar8 + 0x1b0) = 0;
    mutex_unlock(iVar8 + 0x148);
    return 0;
}


// ===== sym.tmc_etr_flush_remaining_bytes @ 0x0800a084 (size 328) =====

int64_t sym.tmc_etr_flush_remaining_bytes(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar9 = -0x16;
    }
    else {
        iVar10 = *(arg1 + 8);
        iVar9 = *(arg1 + 0x110);
        iVar5 = __pm_runtime_resume(*(iVar10 + 0x98),4);
        if (iVar5 < 0) {
            puVar1 = *(iVar10 + 0x98) + 0x1f8;
            uVar7 = *puVar1;
            do {
                uVar8 = uVar7;
                if (uVar8 == 0) break;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar2 = *puVar1;
                    uVar7 = uVar2;
                    if (uVar2 != uVar8) goto code_r0x0800a134;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = uVar8 - 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                DataMemoryBarrier(2,3);
code_r0x0800a134:
            } while (uVar8 != uVar2);
            iVar9 = iVar5;
        }
        else {
            iVar6 = sym.tmc_get_rwp_offset(arg1);
            __pm_runtime_idle(*(iVar10 + 0x98),5);
            if (iVar6 < arg2) {
                uVar7 = *(arg1 + 0x7c);
            }
            else {
                uVar7 = 0;
            }
            uVar7 = uVar7 + (iVar6 - arg2);
            if (uVar7 <= arg3) {
                arg3 = uVar7;
            }
            if (arg3 < 1) {
                iVar9 = 0;
            }
            else {
                iVar9 = sym.tmc_etr_buf_get_data(iVar9,arg2,arg3,arg4);
            }
        }
    }
    return iVar9;
}


// ===== sym.__tmc_etr_disable_to_bam @ 0x0800a1cc (size 244) =====

void sym.__tmc_etr_disable_to_bam(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    bool bVar3;
    uint uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x21) != '\0') {
        piVar6 = *(arg1 + 0x18);
        if (piVar6[0x25] != 0) {
            msm_qdss_csr_disable_flush();
            sym.writel_relaxed_2(0xc5acce55,*piVar6 + 0xfb0);
            DataSynchronizationBarrier(3,3,0);
            uVar5 = sym.readl_relaxed_3(*piVar6 + 0x300);
            if ((uVar5 & 1) != 0) {
                iVar7 = 100;
                do {
                    __const_udelay(0x10c7);
                    iVar1 = iVar7 + -1;
                    uVar5 = sym.readl_relaxed_3(*piVar6 + 0x300);
                    if ((uVar5 & 1) == 0) break;
                    bVar3 = iVar7 != 1;
                    iVar7 = iVar1;
                } while (bVar3);
                if (iVar1 == 0) {
                    uVar4 = sym.readl_relaxed_3(*piVar6 + 0x300);
                    __warn_printk("timeout while waiting for TMC flush, TMC_FFSR: %#x\n",uVar4);
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x800a2c0);
                    (*pcVar2)();
                }
            }
            sym.writel_relaxed.llvm.7170818669875191139(0,*piVar6 + 0x20);
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed_2(0,*piVar6 + 0xfb0);
            msm_qdss_csr_disable_bam_to_usb(piVar6[0x25]);
            *(arg1 + 0x21) = 0;
        }
    }
    return;
}


// ===== sym.tmc_etr_bam_disable @ 0x0800a2c4 (size 76) =====

void sym.tmc_etr_bam_disable(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar1 = *(arg1 + 0x10);
        if (*(iVar1 + 0x188) != '\0') {
            sps_disconnect(*(iVar1 + 0x98));
            sps_free_endpoint(*(iVar1 + 0x98));
            *(iVar1 + 0x188) = 0;
        }
    }
    return;
}


// ===== sym.usb_notifier @ 0x0800a310 (size 1484) =====

void sym.usb_notifier(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t *piVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    code *pcVar8;
    int64_t iVar9;
    ulong uVar10;
    char *pcVar11;
    int *piVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_48 = *(iVar13 + 0x5e0);
    if (arg1 == 0) goto code_r0x0800a814;
    if (*(arg1 + 0x140) != 2) {
        iVar13 = *(arg1 + 8);
        pcVar11 = "%s: ETR is not USB mode.\n";
code_r0x0800a594:
        _dev_err(iVar13 + 0x38,pcVar11,"usb_notifier");
        goto code_r0x0800a814;
    }
    if (arg2 == 3) {
        if (**(arg1 + 0x148) == 2) {
            sym.usb_write_done(*(arg1 + 0x120),arg3);
        }
        goto code_r0x0800a814;
    }
    if (arg2 == 1) {
        if (*(arg1 + 0x84) != 0) {
            if (**(arg1 + 0x148) == 2) {
                iVar13 = *(arg1 + 0x120);
                if (iVar13 == 0) {
                    iVar13 = 0;
                }
                else {
                    mutex_lock(iVar13 + 0x118);
                    if (*(iVar13 + 0x91) != '\0') {
                        *(iVar13 + 0x91) = 0;
                        __wake_up(iVar13 + 0xc0,3,1,0);
                        _printk(0x8001267);
                        coresight_csr_set_byte_cntr(*(iVar13 + 0x178),*(iVar13 + 0x198),0);
                        *(iVar13 + 0x1b0) = 0;
                    }
                    mutex_unlock(iVar13 + 0x118);
                    iVar13 = *(arg1 + 0x120);
                }
                flush_work(iVar13 + 0xe8);
                usb_qdss_free_req(*(*(arg1 + 0x148) + 8));
            }
            else if (**(arg1 + 0x148) == 1) {
                uVar10 = _raw_spin_lock_irqsave(arg1 + 0x60);
                sym.__tmc_etr_disable_to_bam(*(arg1 + 0x148));
                _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar10);
                if ((*(arg1 + 0x148) != 0) && (iVar13 = *(*(arg1 + 0x148) + 0x10), *(iVar13 + 0x188) != '\0')) {
                    sps_disconnect(*(iVar13 + 0x98));
                    sps_free_endpoint(*(iVar13 + 0x98));
                    *(iVar13 + 0x188) = 0;
                }
            }
            goto code_r0x0800a814;
        }
        pcVar8 = obj.usb_notifier._rs.4;
code_r0x0800a568:
        iVar5 = ___ratelimit(pcVar8,"usb_notifier");
        if (iVar5 == 0) goto code_r0x0800a814;
        iVar13 = *(arg1 + 8);
        pcVar11 = "%s: ETR is disabled.\n";
        goto code_r0x0800a594;
    }
    if (arg2 != 0) goto code_r0x0800a814;
    if (*(arg1 + 0x84) == 0) {
        pcVar8 = obj.usb_notifier._rs;
        goto code_r0x0800a568;
    }
    piVar12 = *(arg1 + 0x148);
    if (*piVar12 == 2) {
        iVar13 = *(arg1 + 0x120);
        if (iVar13 != 0) {
            iVar7 = iVar13 + 0x118;
            iVar6 = *(iVar13 + 0x180);
            mutex_lock(iVar7);
            _dev_info(*(iVar6 + 8) + 0x38,"%s: Start usb bypass\n","usb_bypass_start");
            if (*(iVar6 + 0x84) == 1) {
                iVar9 = sym.tmc_get_rwp_offset(iVar6);
                if (iVar9 < 0) {
                    _dev_err(*(iVar6 + 8) + 0x38,"%s: invalid rwp offset value\n","usb_bypass_start");
                    mutex_unlock(iVar7);
                    if (iVar9 < 0) goto code_r0x0800a814;
                }
                else {
                    *(iVar13 + 0x1a0) = iVar9;
                    *(*(iVar6 + 0x148) + 0x28) = 0;
                    *(*(iVar6 + 0x148) + 0x20) = 0;
                    if (*(*(iVar6 + 0x148) + 8) == 0) {
                        uVar14 = 0xffffff9c;
                        do {
                            bVar4 = 0xfffffffe < uVar14;
                            uVar14 = uVar14 + 1;
                            if (bVar4) {
                                _dev_err(*(iVar6 + 8) + 0x38,"timeout while waiting usbch to be ready\n");
                                goto code_r0x0800a8cc;
                            }
                            __const_udelay(0x10c7);
                        } while (*(*(iVar6 + 0x148) + 8) == 0);
                    }
                    *(iVar13 + 0xa4) = 0xff;
                    *(iVar13 + 0x91) = 1;
                    coresight_csr_set_byte_cntr(*(iVar13 + 0x178),*(iVar13 + 0x198),0x2000);
                    *(iVar13 + 0xa0) = 0;
                    *(iVar13 + 0x1a8) = 0;
                    mutex_unlock(iVar7);
                }
                usb_qdss_alloc_req(arg4,0xff);
                queue_work_on(0x20,*(*(arg1 + 0x120) + 0xd8),*(arg1 + 0x120) + 0xe8);
            }
            else {
code_r0x0800a8cc:
                mutex_unlock(iVar7);
            }
        }
        goto code_r0x0800a814;
    }
    if (*piVar12 != 1) goto code_r0x0800a814;
    iVar13 = *(piVar12 + 4);
    iVar7 = *(piVar12 + 6);
    get_qdss_bam_connection_info(iVar13 + 0x138,iVar13 + 0x140,iVar13 + 0x130,iVar13 + 0x148,iVar13 + 0x168,0);
    if ((*(iVar13 + 1) >> 1 & 1) != 0) {
        iVar6 = dma_map_resource(*(*(iVar7 + 8) + 0x98),*(iVar13 + 0x170),*(iVar13 + 0x180),0,0);
        if (iVar6 != 0) {
            *(iVar13 + 0x178) = iVar6;
            iVar7 = dma_map_resource(*(*(iVar7 + 8) + 0x98),*(iVar13 + 0x150),*(iVar13 + 0x160),0,0);
            if (iVar7 != 0) {
                *(iVar13 + 0x158) = iVar7;
                goto code_r0x0800a3f4;
            }
        }
        _dev_err(*(arg1 + 8) + 0x38,"ETR get usb bam data failed\n");
    }
code_r0x0800a3f4:
    iVar13 = *(arg1 + 0x148);
    uStack_50 = 0;
    if (iVar13 == 0) {
code_r0x0800a6f4:
        _dev_err(*(arg1 + 8) + 0x38,"ETR BAM enable failed\n");
    }
    else {
        iVar7 = *(iVar13 + 0x10);
        if (*(iVar7 + 0x188) == '\0') {
            iVar13 = *(iVar13 + 0x18);
            iVar5 = sps_device_reset(*(iVar7 + 0x90));
            if (iVar5 == 0) {
                iVar6 = sps_alloc_endpoint();
                *(iVar7 + 0x98) = iVar6;
                if (iVar6 != 0) {
                    iVar5 = sps_get_config(iVar6,iVar7 + 0xa0);
                    if (iVar5 == 0) {
                        *(iVar7 + 0xb0) = 0;
                        *(iVar7 + 0xa0) = *(iVar7 + 0x90);
                        *(iVar7 + 0x118) = 4;
                        *(iVar7 + 0xd4) = 0x20000000;
                        *(iVar7 + 200) = *(iVar7 + 0x140);
                        *(iVar7 + 0xcc) = 0;
                        *(iVar7 + 0xb8) = *(iVar7 + 0x138);
                        *(iVar7 + 0xd8) = *(iVar7 + 0x148);
                        *(iVar7 + 0xe0) = *(iVar7 + 0x150);
                        *(iVar7 + 0xe8) = *(iVar7 + 0x158);
                        *(iVar7 + 0xf0) = *(iVar7 + 0x160);
                        *(iVar7 + 0xf8) = *(iVar7 + 0x168);
                        *(iVar7 + 0x100) = *(iVar7 + 0x170);
                        *(iVar7 + 0x108) = *(iVar7 + 0x178);
                        *(iVar7 + 0x110) = *(iVar7 + 0x180);
                        if ((*(iVar7 + 1) >> 1 & 1) != 0) {
                            iVar5 = sym.get_usb_bam_iova(*(*(iVar13 + 8) + 0x98),*(iVar7 + 0x138),&uStack_50);
                            if (iVar5 != 0) goto code_r0x0800a6ec;
                            *(iVar7 + 0xc0) = uStack_50;
                        }
                        iVar5 = sps_connect(*(iVar7 + 0x98),iVar7 + 0xa0);
                        if (iVar5 == 0) {
                            *(iVar7 + 0x188) = 1;
                            goto code_r0x0800a708;
                        }
                    }
code_r0x0800a6ec:
                    sps_free_endpoint(*(iVar7 + 0x98));
                }
            }
            goto code_r0x0800a6f4;
        }
    }
code_r0x0800a708:
    uVar10 = _raw_spin_lock_irqsave(arg1 + 0x60);
    iVar13 = *(arg1 + 0x148);
    if (*(iVar13 + 0x21) == '\0') {
        puVar1 = *(iVar13 + 0x10);
        piVar2 = *(iVar13 + 0x18);
        msm_qdss_csr_enable_bam_to_usb(piVar2[0x25]);
        sym.writel_relaxed_2(0xc5acce55,*piVar2 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_2(puVar1[0x60] >> 2,*piVar2 + 4);
        sym.writel_relaxed_2(0,*piVar2 + 0x28);
        sym.writel_relaxed_2(0xf02,*piVar2 + 0x110);
        iVar7 = 0x170;
        if ((*puVar1 & 0x200) != 0) {
            iVar7 = 0x178;
        }
        sym.writel_relaxed_2(*(puVar1 + iVar7),*piVar2 + 0x118);
        sym.writel_relaxed_2((puVar1 + iVar7)[1],*piVar2 + 0x11c);
        sym.writel_relaxed_2(0x133,*piVar2 + 0x304);
        sym.writel_relaxed_2(*(piVar2 + 0x18),*piVar2 + 0x1c);
        sym.writel_relaxed.llvm.7170818669875191139(1,*piVar2 + 0x20);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_2(0,*piVar2 + 0xfb0);
        msm_qdss_csr_enable_flush(piVar2[0x25]);
        *(iVar13 + 0x21) = 1;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar10);
code_r0x0800a814:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_48) {
        auVar15 = __stack_chk_fail();
        iVar13 = auVar15._8_8_;
        *extraout_x18 = sym.usb_write_done;
        piVar12 = auVar15._0_8_ + 0xa4;
        Hint_Prefetch(piVar12,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
                *piVar12 = *piVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar5 = *(iVar13 + 0x10);
        if ((((iVar5 != -0x6c) && (iVar5 != -0x68)) && (iVar5 != 0)) &&
           (iVar5 = ___ratelimit(obj.usb_write_done._rs,"usb_write_done"), iVar5 != 0)) {
            _printk(0x8001ac2,*(iVar13 + 0x10));
        }
        kfree(*(iVar13 + 0x20));
        kfree(iVar13);
        return;
    }
    return;
}


// ===== sym.usb_write_done @ 0x0800a8dc (size 184) =====

void sym.usb_write_done(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0xa4;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar4 = *(arg2 + 0x10);
    if ((((iVar4 != -0x6c) && (iVar4 != -0x68)) && (iVar4 != 0)) &&
       (iVar4 = ___ratelimit(obj.usb_write_done._rs,"usb_write_done"), iVar4 != 0)) {
        _printk(0x8001ac2,*(arg2 + 0x10));
    }
    kfree(*(arg2 + 0x20));
    kfree(arg2);
    return;
}


// ===== sym.tmc_usb_enable @ 0x0800a994 (size 176) =====

ulong sym.tmc_usb_enable(int64_t arg1)

{
    char *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0xffffffea;
    }
    iVar4 = *(arg1 + 0x18);
    if (*arg1 == 1) {
        pcVar1 = "qdss";
    }
    else {
        if (*arg1 != 2) {
            uVar2 = *(arg1 + 8);
            goto joined_r0x0800a9f8;
        }
        pcVar1 = "qdss_sw";
    }
    uVar2 = usb_qdss_open(pcVar1,iVar4,sym.usb_notifier.cfi_jt);
    *(arg1 + 8) = uVar2;
joined_r0x0800a9f8:
    if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
        _dev_err(*(iVar4 + 8) + 0x38,"usb_qdss_open failed for qdss.\n");
        uVar3 = 0xffffffed;
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.tmc_usb_disable @ 0x0800aa44 (size 304) =====

void sym.tmc_usb_disable(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x18);
    if (*arg1 == 2) {
        iVar2 = *(iVar3 + 0x120);
        if (iVar2 == 0) {
            iVar2 = 0;
        }
        else {
            mutex_lock(iVar2 + 0x118);
            if (*(iVar2 + 0x91) != '\0') {
                *(iVar2 + 0x91) = 0;
                __wake_up(iVar2 + 0xc0,3,1,0);
                _printk(0x8001267);
                coresight_csr_set_byte_cntr(*(iVar2 + 0x178),*(iVar2 + 0x198),0);
                *(iVar2 + 0x1b0) = 0;
            }
            mutex_unlock(iVar2 + 0x118);
            iVar2 = *(iVar3 + 0x120);
        }
        flush_work(iVar2 + 0xe8);
    }
    else if (*arg1 == 1) {
        uVar1 = _raw_spin_lock_irqsave(iVar3 + 0x60);
        sym.__tmc_etr_disable_to_bam(arg1);
        _raw_spin_unlock_irqrestore(iVar3 + 0x60,uVar1);
        if (arg1 != 0) {
            iVar2 = *(arg1 + 0x10);
            if (*(iVar2 + 0x188) != '\0') {
                sps_disconnect(*(iVar2 + 0x98));
                sps_free_endpoint(*(iVar2 + 0x98));
                *(iVar2 + 0x188) = 0;
            }
        }
    }
    if (*(arg1 + 8) == 0) {
        _dev_err(*(iVar3 + 8) + 0x38,"usb channel is null.\n");
    }
    else {
        usb_qdss_close();
    }
    return;
}


// ===== sym.tmc_etr_usb_init @ 0x0800ab74 (size 660) =====

uint64_t sym.tmc_etr_usb_init(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint8_t uVar2;
    char cVar3;
    bool bVar4;
    uchar auVar5 [16];
    uchar auVar6 [16];
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    uint *puVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    int64_t *piVar14;
    int64_t iVar15;
    uint64_t uVar16;
    char *pcVar17;
    code *pcVar18;
    ulong uVar19;
    ulong extraout_x10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar20;
    int64_t arg1_00;
    int64_t unaff_x24;
    uint64_t unaff_x26;
    code *unaff_x27;
    int *unaff_x28;
    ulong unaff_x30;
    uchar auVar21 [16];
    int *piStack_1a8;
    int64_t iStack_1a0;
    int iStack_194;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    uint uStack_e4;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_98;
    int64_t iStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_38 = *(iVar20 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iStack_98 = 0;
    iStack_90 = 0;
    uVar9 = fwnode_property_present(*(arg1 + 0x2f8),"qcom,sw-usb");
    if (((uVar9 & 1) == 0) && (uVar9 = fwnode_property_present(*(arg1 + 0x2f8),"usb_bam_support"), (uVar9 & 1) == 0))
    {
code_r0x0800add8:
        *(arg2 + 0x148) = 0;
        pcVar18 = *(arg1 + 0x70);
        if (pcVar18 == NULL) {
            pcVar18 = *arg1;
        }
        _printk(0x80019a2,"tmc_etr_usb_init");
        uVar9 = 0;
        goto code_r0x0800ada8;
    }
    pcVar18 = 0xdc0;
    puVar10 = devm_kmalloc(arg1,0x30);
    if (puVar10 == NULL) goto code_r0x0800ada4;
    uVar2 = *(arg2 + 0x13c);
    *(arg2 + 0x148) = puVar10;
    *(puVar10 + 6) = arg2;
    *(arg2 + 0x13c) = uVar2 | 4;
    uVar9 = fwnode_property_present(*(arg1 + 0x2f8),"qcom,sw-usb");
    if ((uVar9 & 1) != 0) {
        iVar20 = *(arg2 + 0x120);
        *(puVar10 + 10) = 0;
        *(puVar10 + 8) = 0;
        *puVar10 = 2;
        if (iVar20 != 0) {
            pcVar18 = 0x1;
            iVar11 = alloc_workqueue(0x80013d8,0xe000a,1,"byte-cntr");
            *(iVar20 + 0xd8) = iVar11;
            if (iVar11 != 0) {
                *(iVar20 + 0x1a0) = 0;
                __mutex_init(iVar20 + 0x118,"&byte_cntr_data->usb_bypass_lock",obj.tmc_driver);
                pcVar18 = obj.tmc_driver;
                __init_waitqueue_head(iVar20 + 0xc0,"&byte_cntr_data->usb_wait_wq");
                uVar9 = 0;
                *(iVar20 + 0xa4) = 0xff;
                *(iVar20 + 0xe8) = 0xfffffffe0;
                *(iVar20 + 0xf0) = iVar20 + 0xf0;
                *(iVar20 + 0xf8) = iVar20 + 0xf0;
                *(iVar20 + 0x100) = sym.usb_read_work_fn.38213cb1f0b3a1ddb66808bc149b70b7.cfi_jt;
                goto code_r0x0800ada8;
            }
        }
        uVar9 = 0xffffffea;
        goto code_r0x0800ada8;
    }
    uVar9 = fwnode_property_present(*(arg1 + 0x2f8),"usb_bam_support");
    if ((uVar9 & 1) == 0) goto code_r0x0800add8;
    pcVar18 = 0xdc0;
    *puVar10 = 1;
    puVar12 = devm_kmalloc(arg1,400);
    if (puVar12 != NULL) {
        pcVar18 = &iStack_98;
        *(*(arg2 + 0x148) + 0x10) = puVar12;
        iVar8 = of_address_to_resource(*(arg1 + 0x2f0),1);
        if (iVar8 != 0) {
            uVar9 = 0xffffffed;
            goto code_r0x0800ada8;
        }
        *(puVar12 + 2) = iStack_98;
        pcVar18 = (iStack_90 - iStack_98) + 1;
        iVar20 = devm_ioremap(arg1);
        *(puVar12 + 4) = iVar20;
        if (iVar20 != 0) {
            puVar12[0x11] = 4;
            puVar12[9] = 0x10;
            puVar12[7] = 0;
            puVar12[8] = 2;
            puVar12[6] = (iStack_90 - iStack_98) + 1;
            iVar20 = iommu_get_domain_for_dev(arg1);
            if (iVar20 != 0) {
                iVar8 = qcom_iommu_get_mappings_configuration();
                if (iVar8 < 0) goto code_r0x0800ada4;
                *puVar12 = *puVar12 | 0x200;
            }
            uVar9 = sps_register_bam_device(puVar12,puVar12 + 0x24);
            goto code_r0x0800ada8;
        }
    }
code_r0x0800ada4:
    uVar9 = 0xfffffff4;
code_r0x0800ada8:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_38) {
        return uVar9;
    }
    auVar21 = __stack_chk_fail(uVar9);
    *extraout_x18 = sym.get_usb_bam_iova;
    pcStack_c8 = sym.get_usb_bam_iova;
    iVar20 = sp_el0;
    iStack_d8 = *(iVar20 + 0x5e0);
    uStack_e0 = 0;
    uStack_e4 = 0;
    puStack_d0 = &stack0xffffffffffffffd0;
    uVar7 = sps_get_bam_addr(auVar21._8_8_,&uStack_e0,&uStack_e4);
    if (uVar7 == 0) {
        iVar20 = dma_map_resource(auVar21._0_8_,uStack_e0,uStack_e4,0,0);
        uVar7 = 0xfffffff4;
        if (iVar20 != 0) {
            uVar7 = 0;
        }
        uVar9 = uVar7;
        *pcVar18 = iVar20;
    }
    else {
        uVar9 = uVar7;
        _dev_err(auVar21._0_8_,"sps_get_bam_addr failed at handle:%lx, err:%d\n",auVar21._8_8_,uVar9);
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_d8) {
        return uVar9;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.usb_read_work_fn;
    pcStack_148 = sym.usb_read_work_fn;
    iVar20 = sp_el0;
    iStack_158 = *(iVar20 + 0x5e0);
    iVar20 = *(iVar11 + 0x98);
    iStack_168 = 0;
    iStack_160 = 0;
    ppuStack_150 = &puStack_d0;
    if (*(iVar20 + 0x84) != 1) goto code_r0x0800b3f0;
    uVar9 = *(iVar20 + 0x110);
    unaff_x28 = iVar11 + -0x48;
    iStack_1a0 = iVar11 + -0x28;
    auVar21._8_8_ = iStack_1a0;
    auVar21._0_8_ = iVar11 + -0xe8;
    piStack_1a8 = iVar11 + -0x44;
    unaff_x24 = 0xffff;
    unaff_x27 = no_llseek;
    unaff_x26 = 0xffffffffffffefff;
    iStack_194 = 0;
    do {
        iVar11 = auVar21._8_8_;
        arg1_00 = auVar21._0_8_;
        auVar5._8_8_ = iStack_1a0;
        auVar5._0_8_ = arg1_00;
        if (*(iVar20 + 0x140) != 2) goto code_r0x0800b3f0;
        auVar6 = auVar21;
        if (*unaff_x28 == 0) {
            if (*unaff_x28 < 1) {
                if (*(iVar20 + 0x84) != 1) goto code_r0x0800b3f0;
                if (*(iVar20 + 0x140) != 2) goto code_r0x0800b3f0;
                if (*(arg1_00 + 0x91) == '\0') goto code_r0x0800afb8;
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_188 = 0;
                uStack_180 = 0;
                uStack_190 = 0;
                init_wait_entry(&uStack_190,0);
                iVar13 = prepare_to_wait_event(iVar11,&uStack_190,1);
                iVar15 = 0x4e2;
                if (*unaff_x28 < 1) {
                    do {
                        if ((*(iVar20 + 0x84) != 1) || (*(iVar20 + 0x140) != 2)) break;
                        if (iVar15 == 0 && *(arg1_00 + 0x91) == '\0') {
                            iVar15 = 1;
                        }
                        if ((*(arg1_00 + 0x91) == '\0') || (iVar15 == 0)) goto code_r0x0800b07c;
                        if (iVar13 != 0) goto code_r0x0800b08c;
                        iVar15 = schedule_timeout(iVar15);
                        iVar13 = prepare_to_wait_event(iVar11,&uStack_190,1);
                    } while (*unaff_x28 < 1);
                    if (iVar15 == 0) {
                        iVar15 = 1;
                    }
                }
code_r0x0800b07c:
                iVar13 = iVar15;
                finish_wait(iVar11,&uStack_190);
code_r0x0800b08c:
                iVar8 = iVar13;
                if (iVar8 == -0x200) goto code_r0x0800b3f0;
            }
            else {
code_r0x0800afb8:
                iVar8 = 0x4e2;
            }
            if (*(iVar20 + 0x84) != 1) goto code_r0x0800b3f0;
            if (*(iVar20 + 0x140) != 2) goto code_r0x0800b3f0;
            if (*(arg1_00 + 0x91) == '\0') goto code_r0x0800b3f0;
            if (iVar8 == 0) {
                uVar16 = sym.usb_transfer_small_packet(arg1_00,&iStack_160);
                if (uVar16 == -0xb) goto code_r0x0800af8c;
                if (uVar16 == 0) goto code_r0x0800af8c;
                goto code_r0x0800b3b4;
            }
        }
        if (0x400 < *unaff_x28) {
            *(*(iVar20 + 0x148) + 0x20) = 1;
            iVar8 = ___ratelimit(obj.usb_read_work_fn._rs,"usb_read_work_fn");
            if (iVar8 != 0) {
                _dev_err(*(iVar20 + 8) + 0x38,"ETR data is overwritten.\n");
            }
        }
        iVar15 = iStack_160;
        iStack_160 = 0;
        if (iVar15 != 0x10000) {
            iVar11 = 0x38;
            if (unaff_x27[0xbc] != 0x0) {
                iVar11 = 0x30;
            }
            piVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x30);
            uVar16 = 0;
            if (piVar14 == NULL) goto code_r0x0800b3b4;
            unaff_x27 = unaff_x24 - iVar15 >> 0xc;
            unaff_x24 = unaff_x27 * 0x20;
            iVar11 = __kmalloc(unaff_x24 + 0x20,0xdc0);
            piVar14[4] = iVar11;
            if (iVar11 == 0) {
                uVar16 = kfree(piVar14);
                goto code_r0x0800b3b4;
            }
            pcVar18 = NULL;
            iVar11 = 0;
            uVar16 = *(arg1_00 + 0x1a0);
            iStack_194 = iStack_194 + 1;
            do {
                auVar6._8_8_ = pcVar18;
                auVar6._0_8_ = arg1_00;
                auVar21._8_8_ = pcVar18;
                auVar21._0_8_ = arg1_00;
                iVar15 = sym.tmc_etr_buf_get_data(uVar9,uVar16,0x1000,&iStack_168);
                if (iVar15 + unaff_x26 <= unaff_x26) {
                    kfree(piVar14[4]);
                    kfree(piVar14);
                    uVar16 = ___ratelimit(obj.usb_read_work_fn._rs.25,"usb_read_work_fn");
                    if (uVar16 == 0) goto code_r0x0800b3b4;
                    iVar11 = *(iVar20 + 8);
                    pcVar17 = "Invalid data in ETR\n";
                    goto code_r0x0800b418;
                }
                puVar1 = piVar14[4] + pcVar18 * 0x20;
                *(puVar1 + 1) = iStack_168 & 0xfff;
                *(puVar1 + 0xc) = iVar15;
                *puVar1 = (((iStack_168 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *puVar1 & 3) -
                          0x200000000;
                if (pcVar18 == 0) {
                    *piVar14 = iStack_168;
                }
                if (unaff_x27 == pcVar18) {
                    *(piVar14[4] + unaff_x24) = *(piVar14[4] + unaff_x24) & 0xfffffffffffffffc | 2;
                }
                iVar11 = iVar15 + iVar11;
                uVar16 = *(arg1_00 + 0x1a0) + iVar15;
                iVar8 = pcVar18 + 1;
                if (*(*(iVar20 + 0x110) + 0x10) <= uVar16) {
                    uVar16 = 0;
                }
                pcVar18 = iVar8;
                *(arg1_00 + 0x1a0) = uVar16;
            } while (pcVar18 <= unaff_x27);
            *(piVar14 + 1) = iVar11;
            *(arg1_00 + 0xe0) = piVar14;
            *(piVar14 + 5) = iVar8;
            if (*(arg1_00 + 0xa4) < 1) {
                iVar8 = ___ratelimit(obj.usb_read_work_fn._rs.29,"usb_read_work_fn");
                if (iVar8 != 0) {
                    _dev_err(*(iVar20 + 8) + 0x38,"Drop data, offset = %d, seq = %d, irq = %d\n",*(arg1_00 + 0x1a0),
                             iStack_194,*(arg1_00 + 0xa0));
                }
                *(*(iVar20 + 0x148) + 0x28) = *(*(iVar20 + 0x148) + 0x28) + iVar11;
                kfree(piVar14[4]);
                kfree(piVar14);
                *(arg1_00 + 0xe0) = 0;
            }
            else {
                iVar8 = usb_qdss_write(*(*(iVar20 + 0x148) + 8),*(arg1_00 + 0xe0));
                if (iVar8 != 0) {
                    kfree(piVar14[4]);
                    kfree(piVar14);
                    *(arg1_00 + 0xe0) = 0;
                    uVar16 = ___ratelimit(obj.usb_read_work_fn._rs.27,"usb_read_work_fn");
                    if (uVar16 != 0) {
                        uVar16 = _dev_err(*(iVar20 + 8) + 0x38,"Write data failed:%d\n",iVar8);
                    }
                    unaff_x24 = 0xffff;
                    unaff_x27 = no_llseek;
                    auVar6 = auVar5;
                    auVar21 = auVar5;
                    if (iVar8 != -0xb) goto code_r0x0800b3b4;
                    goto code_r0x0800af8c;
                }
                *(arg1_00 + 0x1a8) = *(arg1_00 + 0x1a8) + iVar11;
                Hint_Prefetch(piStack_1a8,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piStack_1a8,0x10);
                    if (bVar4) {
                        *piStack_1a8 = *piStack_1a8 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            unaff_x24 = 0xffff;
            unaff_x27 = no_llseek;
            iVar11 = iStack_1a0;
        }
        auVar21._8_8_ = iVar11;
        auVar21._0_8_ = arg1_00;
        auVar6._8_8_ = iVar11;
        auVar6._0_8_ = arg1_00;
        if (*unaff_x28 < 1) goto code_r0x0800af8c;
        uVar19 = 1;
        while( true ) {
            Hint_Prefetch(unaff_x28,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x28,0x10);
                if (bVar4) {
                    *unaff_x28 = *unaff_x28 - uVar19;
                    cVar3 = ExclusiveMonitorsStatus();
                }
                auVar21 = auVar6;
            } while (cVar3 != '\0');
code_r0x0800af8c:
            if (*(iVar20 + 0x84) == 1) break;
code_r0x0800b3f0:
            iVar11 = *(iVar20 + 8);
            pcVar17 = "TMC has been stopped.\n";
code_r0x0800b418:
            uVar16 = _dev_err(iVar11 + 0x38,pcVar17);
            auVar6 = auVar21;
code_r0x0800b3b4:
            iVar11 = sp_el0;
            if (*(iVar11 + 0x5e0) == iStack_158) {
                return uVar16;
            }
            __stack_chk_fail();
            uVar19 = extraout_x10;
        }
    } while( true );
}


// ===== sym.get_usb_bam_iova @ 0x0800ae08 (size 208) =====

uint64_t sym.get_usb_bam_iova(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint64_t uVar10;
    char *pcVar11;
    ulong uVar12;
    ulong extraout_x10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t arg1_00;
    int64_t unaff_x24;
    uint64_t unaff_x26;
    code *unaff_x27;
    int *unaff_x28;
    ulong unaff_x30;
    int *piStack_108;
    code *pcStack_100;
    int iStack_f4;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint uStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    uStack_44 = 0;
    uVar4 = sps_get_bam_addr(arg2,&uStack_40,&uStack_44);
    if (uVar4 == 0) {
        iVar6 = dma_map_resource(arg1,uStack_40,uStack_44,0,0);
        uVar4 = 0xfffffff4;
        if (iVar6 != 0) {
            uVar4 = 0;
        }
        arg1_00 = uVar4;
        *arg3 = iVar6;
    }
    else {
        arg1_00 = uVar4;
        _dev_err(arg1,"sps_get_bam_addr failed at handle:%lx, err:%d\n",arg2,arg1_00);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return arg1_00;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.usb_read_work_fn;
    pcStack_a8 = sym.usb_read_work_fn;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar7 + 0x98);
    iStack_c8 = 0;
    iStack_c0 = 0;
    puStack_b0 = &stack0xffffffffffffffd0;
    if (*(iVar6 + 0x84) != 1) goto code_r0x0800b3f0;
    arg1 = iVar7 + -0xe8;
    arg1_00 = *(iVar6 + 0x110);
    unaff_x28 = iVar7 + -0x48;
    arg2 = iVar7 - 0x28;
    piStack_108 = iVar7 + -0x44;
    unaff_x24 = 0xffff;
    unaff_x27 = no_llseek;
    unaff_x26 = 0xffffffffffffefff;
    iStack_f4 = 0;
    pcStack_100 = arg2;
    do {
        if (*(iVar6 + 0x140) != 2) goto code_r0x0800b3f0;
        if (*unaff_x28 == 0) {
            if (*unaff_x28 < 1) {
                if (*(iVar6 + 0x84) != 1) goto code_r0x0800b3f0;
                if (*(iVar6 + 0x140) != 2) goto code_r0x0800b3f0;
                if (*(arg1 + 0x91) == '\0') goto code_r0x0800afb8;
                uStack_d8 = 0;
                uStack_d0 = 0;
                uStack_e8 = 0;
                uStack_e0 = 0;
                uStack_f0 = 0;
                init_wait_entry(&uStack_f0,0);
                iVar9 = prepare_to_wait_event(arg2,&uStack_f0,1);
                iVar7 = 0x4e2;
                if (*unaff_x28 < 1) {
                    do {
                        if ((*(iVar6 + 0x84) != 1) || (*(iVar6 + 0x140) != 2)) break;
                        if (iVar7 == 0 && *(arg1 + 0x91) == '\0') {
                            iVar7 = 1;
                        }
                        if ((*(arg1 + 0x91) == '\0') || (iVar7 == 0)) goto code_r0x0800b07c;
                        if (iVar9 != 0) goto code_r0x0800b08c;
                        iVar7 = schedule_timeout(iVar7);
                        iVar9 = prepare_to_wait_event(arg2,&uStack_f0,1);
                    } while (*unaff_x28 < 1);
                    if (iVar7 == 0) {
                        iVar7 = 1;
                    }
                }
code_r0x0800b07c:
                iVar9 = iVar7;
                finish_wait(arg2,&uStack_f0);
code_r0x0800b08c:
                iVar5 = iVar9;
                if (iVar5 == -0x200) goto code_r0x0800b3f0;
            }
            else {
code_r0x0800afb8:
                iVar5 = 0x4e2;
            }
            if (*(iVar6 + 0x84) != 1) goto code_r0x0800b3f0;
            if (*(iVar6 + 0x140) != 2) goto code_r0x0800b3f0;
            if (*(arg1 + 0x91) == '\0') goto code_r0x0800b3f0;
            if (iVar5 == 0) {
                uVar10 = sym.usb_transfer_small_packet(arg1,&iStack_c0);
                if (uVar10 == -0xb) goto code_r0x0800af8c;
                if (uVar10 == 0) goto code_r0x0800af8c;
                goto code_r0x0800b3b4;
            }
        }
        if (0x400 < *unaff_x28) {
            *(*(iVar6 + 0x148) + 0x20) = 1;
            iVar5 = ___ratelimit(obj.usb_read_work_fn._rs,"usb_read_work_fn");
            if (iVar5 != 0) {
                _dev_err(*(iVar6 + 8) + 0x38,"ETR data is overwritten.\n");
            }
        }
        iVar7 = iStack_c0;
        iStack_c0 = 0;
        if (iVar7 != 0x10000) {
            iVar9 = 0x38;
            if (unaff_x27[0xbc] != 0x0) {
                iVar9 = 0x30;
            }
            piVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x30);
            uVar10 = 0;
            if (piVar8 == NULL) goto code_r0x0800b3b4;
            unaff_x27 = unaff_x24 - iVar7 >> 0xc;
            unaff_x24 = unaff_x27 * 0x20;
            iVar7 = __kmalloc(unaff_x24 + 0x20,0xdc0);
            piVar8[4] = iVar7;
            if (iVar7 == 0) {
                uVar10 = kfree(piVar8);
                goto code_r0x0800b3b4;
            }
            arg2 = 0;
            iVar7 = 0;
            uVar10 = *(arg1 + 0x1a0);
            iStack_f4 = iStack_f4 + 1;
            do {
                iVar9 = sym.tmc_etr_buf_get_data(arg1_00,uVar10,0x1000,&iStack_c8);
                if (iVar9 + unaff_x26 <= unaff_x26) {
                    kfree(piVar8[4]);
                    kfree(piVar8);
                    uVar10 = ___ratelimit(obj.usb_read_work_fn._rs.25,"usb_read_work_fn");
                    if (uVar10 == 0) goto code_r0x0800b3b4;
                    iVar7 = *(iVar6 + 8);
                    pcVar11 = "Invalid data in ETR\n";
                    goto code_r0x0800b418;
                }
                puVar1 = piVar8[4] + arg2 * 0x20;
                *(puVar1 + 1) = iStack_c8 & 0xfff;
                *(puVar1 + 0xc) = iVar9;
                *puVar1 = (((iStack_c8 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *puVar1 & 3) - 0x200000000
                ;
                if (arg2 == 0) {
                    *piVar8 = iStack_c8;
                }
                if (unaff_x27 == arg2) {
                    *(piVar8[4] + unaff_x24) = *(piVar8[4] + unaff_x24) & 0xfffffffffffffffc | 2;
                }
                iVar7 = iVar9 + iVar7;
                uVar10 = *(arg1 + 0x1a0) + iVar9;
                iVar5 = arg2 + 1;
                if (*(*(iVar6 + 0x110) + 0x10) <= uVar10) {
                    uVar10 = 0;
                }
                arg2 = iVar5;
                *(arg1 + 0x1a0) = uVar10;
            } while (arg2 <= unaff_x27);
            *(piVar8 + 1) = iVar7;
            *(arg1 + 0xe0) = piVar8;
            *(piVar8 + 5) = iVar5;
            arg2 = pcStack_100;
            if (*(arg1 + 0xa4) < 1) {
                iVar5 = ___ratelimit(obj.usb_read_work_fn._rs.29,"usb_read_work_fn");
                if (iVar5 != 0) {
                    _dev_err(*(iVar6 + 8) + 0x38,"Drop data, offset = %d, seq = %d, irq = %d\n",*(arg1 + 0x1a0),
                             iStack_f4,*(arg1 + 0xa0));
                }
                *(*(iVar6 + 0x148) + 0x28) = *(*(iVar6 + 0x148) + 0x28) + iVar7;
                kfree(piVar8[4]);
                kfree(piVar8);
                *(arg1 + 0xe0) = 0;
            }
            else {
                iVar5 = usb_qdss_write(*(*(iVar6 + 0x148) + 8),*(arg1 + 0xe0));
                if (iVar5 != 0) {
                    kfree(piVar8[4]);
                    kfree(piVar8);
                    *(arg1 + 0xe0) = 0;
                    uVar10 = ___ratelimit(obj.usb_read_work_fn._rs.27,"usb_read_work_fn");
                    if (uVar10 != 0) {
                        uVar10 = _dev_err(*(iVar6 + 8) + 0x38,"Write data failed:%d\n",iVar5);
                    }
                    unaff_x24 = 0xffff;
                    unaff_x27 = no_llseek;
                    if (iVar5 != -0xb) goto code_r0x0800b3b4;
                    goto code_r0x0800af8c;
                }
                *(arg1 + 0x1a8) = *(arg1 + 0x1a8) + iVar7;
                Hint_Prefetch(piStack_108,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piStack_108,0x10);
                    if (bVar3) {
                        *piStack_108 = *piStack_108 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            unaff_x24 = 0xffff;
            unaff_x27 = no_llseek;
        }
        if (*unaff_x28 < 1) goto code_r0x0800af8c;
        uVar12 = 1;
        while( true ) {
            Hint_Prefetch(unaff_x28,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(unaff_x28,0x10);
                if (bVar3) {
                    *unaff_x28 = *unaff_x28 - uVar12;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
code_r0x0800af8c:
            if (*(iVar6 + 0x84) == 1) break;
code_r0x0800b3f0:
            iVar7 = *(iVar6 + 8);
            pcVar11 = "TMC has been stopped.\n";
code_r0x0800b418:
            uVar10 = _dev_err(iVar7 + 0x38,pcVar11);
code_r0x0800b3b4:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_b8) {
                return uVar10;
            }
            __stack_chk_fail();
            uVar12 = extraout_x10;
        }
    } while( true );
}


// ===== sym.usb_read_work_fn @ 0x0800aed8 (size 1440) =====

void sym.usb_read_work_fn(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t arg2;
    char *pcVar9;
    ulong uVar10;
    ulong extraout_x10;
    ulong *in_x18;
    int64_t unaff_x20;
    int64_t unaff_x21;
    code *unaff_x22;
    int64_t iVar11;
    int64_t unaff_x24;
    uint64_t unaff_x26;
    code *unaff_x27;
    int *unaff_x28;
    ulong unaff_x30;
    int *piStack_b8;
    code *pcStack_b0;
    int iStack_a4;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x98);
    iStack_78 = 0;
    iStack_70 = 0;
    if (*(iVar11 + 0x84) != 1) goto code_r0x0800b3f0;
    unaff_x20 = arg1 + -0xe8;
    unaff_x21 = *(iVar11 + 0x110);
    unaff_x28 = arg1 + -0x48;
    unaff_x22 = arg1 - 0x28;
    piStack_b8 = arg1 + -0x44;
    unaff_x24 = 0xffff;
    unaff_x27 = no_llseek;
    unaff_x26 = 0xffffffffffffefff;
    iStack_a4 = 0;
    pcStack_b0 = unaff_x22;
    do {
        if (*(iVar11 + 0x140) != 2) goto code_r0x0800b3f0;
        if (*unaff_x28 == 0) {
            if (*unaff_x28 < 1) {
                if (*(iVar11 + 0x84) != 1) goto code_r0x0800b3f0;
                if (*(iVar11 + 0x140) != 2) goto code_r0x0800b3f0;
                if (*(unaff_x20 + 0x91) == '\0') goto code_r0x0800afb8;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a0 = 0;
                init_wait_entry(&uStack_a0,0);
                iVar8 = prepare_to_wait_event(unaff_x22,&uStack_a0,1);
                iVar7 = 0x4e2;
                if (*unaff_x28 < 1) {
                    do {
                        if ((*(iVar11 + 0x84) != 1) || (*(iVar11 + 0x140) != 2)) break;
                        if (iVar7 == 0 && *(unaff_x20 + 0x91) == '\0') {
                            iVar7 = 1;
                        }
                        if ((*(unaff_x20 + 0x91) == '\0') || (iVar7 == 0)) goto code_r0x0800b07c;
                        if (iVar8 != 0) goto code_r0x0800b08c;
                        iVar7 = schedule_timeout(iVar7);
                        iVar8 = prepare_to_wait_event(unaff_x22,&uStack_a0,1);
                    } while (*unaff_x28 < 1);
                    if (iVar7 == 0) {
                        iVar7 = 1;
                    }
                }
code_r0x0800b07c:
                iVar8 = iVar7;
                finish_wait(unaff_x22,&uStack_a0);
code_r0x0800b08c:
                iVar5 = iVar8;
                if (iVar5 == -0x200) goto code_r0x0800b3f0;
            }
            else {
code_r0x0800afb8:
                iVar5 = 0x4e2;
            }
            if (*(iVar11 + 0x84) != 1) goto code_r0x0800b3f0;
            if (*(iVar11 + 0x140) != 2) goto code_r0x0800b3f0;
            if (*(unaff_x20 + 0x91) == '\0') goto code_r0x0800b3f0;
            if (iVar5 == 0) {
                iVar5 = sym.usb_transfer_small_packet(unaff_x20,&iStack_70);
                if (iVar5 == -0xb) goto code_r0x0800af8c;
                if (iVar5 == 0) goto code_r0x0800af8c;
                goto code_r0x0800b3b4;
            }
        }
        if (0x400 < *unaff_x28) {
            *(*(iVar11 + 0x148) + 0x20) = 1;
            iVar5 = ___ratelimit(obj.usb_read_work_fn._rs,"usb_read_work_fn");
            if (iVar5 != 0) {
                _dev_err(*(iVar11 + 8) + 0x38,"ETR data is overwritten.\n");
            }
        }
        iVar7 = iStack_70;
        iStack_70 = 0;
        if (iVar7 != 0x10000) {
            iVar8 = 0x38;
            if (unaff_x27[0xbc] != 0x0) {
                iVar8 = 0x30;
            }
            piVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x30);
            if (piVar6 == NULL) goto code_r0x0800b3b4;
            unaff_x27 = unaff_x24 - iVar7 >> 0xc;
            unaff_x24 = unaff_x27 * 0x20;
            iVar7 = __kmalloc(unaff_x24 + 0x20,0xdc0);
            piVar6[4] = iVar7;
            if (iVar7 == 0) {
                kfree(piVar6);
                goto code_r0x0800b3b4;
            }
            unaff_x22 = NULL;
            iVar7 = 0;
            arg2 = *(unaff_x20 + 0x1a0);
            iStack_a4 = iStack_a4 + 1;
            do {
                iVar8 = sym.tmc_etr_buf_get_data(unaff_x21,arg2,0x1000,&iStack_78);
                if (iVar8 + unaff_x26 <= unaff_x26) {
                    kfree(piVar6[4]);
                    kfree(piVar6);
                    iVar5 = ___ratelimit(obj.usb_read_work_fn._rs.25,"usb_read_work_fn");
                    if (iVar5 == 0) goto code_r0x0800b3b4;
                    iVar7 = *(iVar11 + 8);
                    pcVar9 = "Invalid data in ETR\n";
                    goto code_r0x0800b418;
                }
                puVar1 = piVar6[4] + unaff_x22 * 0x20;
                *(puVar1 + 1) = iStack_78 & 0xfff;
                *(puVar1 + 0xc) = iVar8;
                *puVar1 = (((iStack_78 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *puVar1 & 3) - 0x200000000
                ;
                if (unaff_x22 == 0) {
                    *piVar6 = iStack_78;
                }
                if (unaff_x27 == unaff_x22) {
                    *(piVar6[4] + unaff_x24) = *(piVar6[4] + unaff_x24) & 0xfffffffffffffffc | 2;
                }
                iVar7 = iVar8 + iVar7;
                arg2 = *(unaff_x20 + 0x1a0) + iVar8;
                iVar5 = unaff_x22 + 1;
                if (*(*(iVar11 + 0x110) + 0x10) <= arg2) {
                    arg2 = 0;
                }
                unaff_x22 = iVar5;
                *(unaff_x20 + 0x1a0) = arg2;
            } while (unaff_x22 <= unaff_x27);
            *(piVar6 + 1) = iVar7;
            *(unaff_x20 + 0xe0) = piVar6;
            *(piVar6 + 5) = iVar5;
            unaff_x22 = pcStack_b0;
            if (*(unaff_x20 + 0xa4) < 1) {
                iVar5 = ___ratelimit(obj.usb_read_work_fn._rs.29,"usb_read_work_fn");
                if (iVar5 != 0) {
                    _dev_err(*(iVar11 + 8) + 0x38,"Drop data, offset = %d, seq = %d, irq = %d\n",*(unaff_x20 + 0x1a0)
                             ,iStack_a4,*(unaff_x20 + 0xa0));
                }
                *(*(iVar11 + 0x148) + 0x28) = *(*(iVar11 + 0x148) + 0x28) + iVar7;
                kfree(piVar6[4]);
                kfree(piVar6);
                *(unaff_x20 + 0xe0) = 0;
            }
            else {
                iVar5 = usb_qdss_write(*(*(iVar11 + 0x148) + 8),*(unaff_x20 + 0xe0));
                if (iVar5 != 0) {
                    kfree(piVar6[4]);
                    kfree(piVar6);
                    *(unaff_x20 + 0xe0) = 0;
                    iVar4 = ___ratelimit(obj.usb_read_work_fn._rs.27,"usb_read_work_fn");
                    if (iVar4 != 0) {
                        _dev_err(*(iVar11 + 8) + 0x38,"Write data failed:%d\n",iVar5);
                    }
                    unaff_x24 = 0xffff;
                    unaff_x27 = no_llseek;
                    if (iVar5 != -0xb) goto code_r0x0800b3b4;
                    goto code_r0x0800af8c;
                }
                *(unaff_x20 + 0x1a8) = *(unaff_x20 + 0x1a8) + iVar7;
                Hint_Prefetch(piStack_b8,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piStack_b8,0x10);
                    if (bVar3) {
                        *piStack_b8 = *piStack_b8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            }
            unaff_x24 = 0xffff;
            unaff_x27 = no_llseek;
        }
        if (*unaff_x28 < 1) goto code_r0x0800af8c;
        uVar10 = 1;
        while( true ) {
            Hint_Prefetch(unaff_x28,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(unaff_x28,0x10);
                if (bVar3) {
                    *unaff_x28 = *unaff_x28 - uVar10;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
code_r0x0800af8c:
            if (*(iVar11 + 0x84) == 1) break;
code_r0x0800b3f0:
            iVar7 = *(iVar11 + 8);
            pcVar9 = "TMC has been stopped.\n";
code_r0x0800b418:
            _dev_err(iVar7 + 0x38,pcVar9);
code_r0x0800b3b4:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail();
            uVar10 = extraout_x10;
        }
    } while( true );
}


// ===== sym.usb_transfer_small_packet @ 0x0800b478 (size 816) =====

uint64_t sym.usb_transfer_small_packet(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint64_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x180);
    arg1_01 = *(arg1_00 + 0x110);
    uVar7 = sym.tmc_get_rwp_offset(arg1_00);
    if (uVar7 < 0) {
        iVar6 = ___ratelimit(obj.usb_transfer_small_packet._rs,"usb_transfer_small_packet");
        if (iVar6 != 0) {
            _dev_err(*(arg1_00 + 8) + 0x38,"%s: RWP offset is invalid\n","usb_transfer_small_packet");
        }
    }
    else {
        if (0x400 < *(arg1 + 0xa0)) {
            *(*(arg1_00 + 0x148) + 0x20) = 1;
            iVar6 = ___ratelimit(obj.usb_transfer_small_packet._rs.33,"usb_transfer_small_packet");
            if (iVar6 != 0) {
                _dev_err(*(arg1_00 + 8) + 0x38,"ETR data is overwritten.\n");
            }
        }
        if (uVar7 < *(arg1 + 0x1a0)) {
            iVar9 = *(arg1_01 + 0x10);
        }
        else {
            iVar9 = 0;
        }
        uVar7 = iVar9 + (uVar7 - *(arg1 + 0x1a0));
        if (0xffff < uVar7 + *arg2) {
            uVar7 = 0x10000 - *arg2;
        }
        if (uVar7 != 0) {
            piVar1 = arg1 + 0xa4;
            do {
                iVar9 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar9 = 0x30;
                }
                iVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x30);
                if (iVar9 == 0) {
                    uVar7 = 0xfffffff2;
                    goto code_r0x0800b6e4;
                }
                uVar8 = sym.tmc_etr_buf_get_data(arg1_01,*(arg1 + 0x1a0),uVar7,iVar9);
                if (uVar8 < 1 || uVar7 < uVar8) {
                    kfree(iVar9);
                    iVar6 = ___ratelimit(obj.usb_transfer_small_packet._rs.34,"usb_transfer_small_packet");
                    if (iVar6 == 0) {
                        uVar7 = 0xffffffea;
                    }
                    else {
                        _dev_err(*(arg1_00 + 8) + 0x38,"%s: Invalid data in ETR\n","usb_transfer_small_packet");
                        uVar7 = 0xffffffea;
                    }
                    goto code_r0x0800b6e4;
                }
                *(arg1 + 0xe0) = iVar9;
                iVar10 = *(arg1 + 0x1a0);
                uVar7 = uVar7 - uVar8;
                *(iVar9 + 8) = uVar8;
                uVar2 = iVar10 + uVar8;
                if (*(*(arg1_00 + 0x110) + 0x10) <= uVar2) {
                    uVar2 = 0;
                }
                *(arg1 + 0x1a0) = uVar2;
                *arg2 = *arg2 + uVar8;
                if (*(arg1 + 0xa4) < 1) {
                    iVar6 = ___ratelimit(obj.usb_transfer_small_packet._rs.37,"usb_transfer_small_packet");
                    if (iVar6 != 0) {
                        _dev_err(*(arg1_00 + 8) + 0x38,"Drop data, offset = %d, len = %d\n",*(arg1 + 0x1a0),uVar7);
                    }
                    *(*(arg1_00 + 0x148) + 0x28) = *(*(arg1_00 + 0x148) + 0x28) + uVar8;
                    kfree(iVar9);
                    *(arg1 + 0xe0) = 0;
                }
                else {
                    uVar5 = usb_qdss_write(*(*(arg1_00 + 0x148) + 8),iVar9);
                    if (uVar5 != 0) {
                        uVar7 = uVar5;
                        kfree(iVar9);
                        *(arg1 + 0xe0) = 0;
                        iVar6 = ___ratelimit(obj.usb_transfer_small_packet._rs.36,"usb_transfer_small_packet");
                        if (iVar6 != 0) {
                            _dev_err(*(arg1_00 + 8) + 0x38,"Write data failed:%d\n",uVar7);
                        }
                        goto code_r0x0800b6e4;
                    }
                    *(arg1 + 0x1a8) = *(arg1 + 0x1a8) + uVar8;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = *piVar1 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                }
            } while (uVar7 != 0);
        }
        uVar7 = 0;
    }
code_r0x0800b6e4:
    return uVar7 & 0xffffffff;
}


// ===== sym.tmc_eth_enable @ 0x0800b7a8 (size 292) =====

int sym.tmc_eth_enable(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    sym.writel_relaxed_3(0xc5acce55,*arg1_00 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    iVar1 = sym.tmc_wait_for_tmcready(arg1_00);
    if (iVar1 == 0) {
        sym.writel_relaxed_3(0x100,*arg1_00 + 4);
        sym.writel_relaxed_3(0,*arg1_00 + 0x28);
        uVar2 = sym.readl_relaxed_4(*arg1_00 + 0x110);
        sym.writel_relaxed_3(uVar2 & 0xfffff000 | uVar2 & 0x40 | (*(arg1_00 + 0x10) & 0xf) << 8 | 6,*arg1_00 + 0x110);
        iVar3 = *arg1_00;
        sym.writel_relaxed_3(0,iVar3 + 0x118);
        sym.writel_relaxed_3(0,iVar3 + 0x11c);
        sym.writel_relaxed_3(0x133,*arg1_00 + 0x304);
        msm_qdss_csr_enable_eth(arg1_00[0x25]);
        sym.writel_relaxed.llvm.7170818669875191139(1,*arg1_00 + 0x20);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_3(0,*arg1_00 + 0xfb0);
        _printk(0x80013b2);
    }
    else {
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed_3(0,*arg1_00 + 0xfb0);
    }
    return iVar1;
}


// ===== sym.tmc_eth_disable @ 0x0800b8cc (size 132) =====

void sym.tmc_eth_disable(int64_t arg1)

{
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    sym.writel_relaxed_3(0xc5acce55,*arg1_00 + 0xfb0);
    DataSynchronizationBarrier(3,3,0);
    sym.tmc_flush_and_stop(arg1_00);
    sym.writel_relaxed.llvm.7170818669875191139(0,*arg1_00 + 0x20);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed_3(0,*arg1_00 + 0xfb0);
    msm_qdss_csr_disable_eth(arg1_00[0x25]);
    _printk(0x80014e9);
    return;
}


// ===== sym.tmc_etr_eth_init @ 0x0800b950 (size 136) =====

ulong sym.tmc_etr_eth_init(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = fwnode_property_present(*(arg1 + 0x2f8),"qcom,eth_support");
    if ((uVar2 & 1) == 0) {
        uVar4 = 0;
        *(arg2 + 0x150) = 0;
    }
    else {
        piVar3 = devm_kmalloc(arg1,8,0xdc0);
        if (piVar3 == NULL) {
            uVar4 = 0xfffffff4;
        }
        else {
            uVar1 = *(arg2 + 0x13c);
            uVar4 = 0;
            *(arg2 + 0x150) = piVar3;
            *piVar3 = arg2;
            *(arg2 + 0x13c) = uVar1 | 8;
        }
    }
    return uVar4;
}


// ===== sym.init_module @ 0x0800b9e4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.tmc_driver);
    return;
}


// ===== sym.cleanup_module @ 0x0800ba10 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_unregister(obj.tmc_driver);
    return;
}

