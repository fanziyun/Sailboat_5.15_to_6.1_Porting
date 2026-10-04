// decompiled from msm_hw_fence by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800a000 (size 1436) =====

//WARNING: Switch with 1 destination removed at 0x0800c244

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x15332306f8fba7a5) {
        if (arg1 < -0x253616c6f81a0942) {
            if (arg1 < -0x49e517a122900b8f) {
                if (arg1 == -0x6feb354586070130) {
                    if ((pcVar1 + -0x800a6e0 >> 3 | pcVar1 << 0x3d) < 10) {
                        return;
                    }
                    goto code_r0x0800c204;
                }
                if (arg1 == -0x5f8a4939b159fa3d) {
                    pcVar2 = sym.__typeid__ZTSFvP20hw_fence_driver_dataP12msm_hw_fencejyyjjE_global_addr;
                    goto code_r0x0800a500;
                }
                if (arg1 != -0x5a99088fc2570fd6) goto code_r0x0800c204;
                pcVar2 = sym.__typeid__ZTSFbP12msm_hw_fenceyyE_global_addr;
                goto code_r0x0800a558;
            }
            if (arg1 < -0x3557318fb8d07b71) {
                if (arg1 == -0x49e517a122900b8f) {
                    pcVar2 = sym.msm_hw_fence_driver_doorbell_sim.cfi_jt;
                }
                else {
                    if (arg1 != -0x355fb0e7f43799b1) goto code_r0x0800c204;
                    pcVar2 = sym.dma_fence_default_wait.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt;
                    goto code_r0x0800a558;
                }
                if (arg1 != -0x3309776639b8e75a) goto code_r0x0800c204;
                pcVar2 = sym.msm_hw_fence_reset_client.cfi_jt;
            }
        }
        else if (arg1 < -0x2ac316d8df914f8) {
            if (arg1 == -0x253616c6f81a0942) {
                pcVar2 = sym.msm_hw_fence_register.cfi_jt;
            }
            else {
                if (arg1 != -0xc117539a7e548b8) {
                    if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x800a630 >> 3 | pcVar1 << 0x3d) < 3)) {
                        return;
                    }
                    goto code_r0x0800c204;
                }
                pcVar2 = sym.msm_hw_fence_reset_client_by_id.cfi_jt;
            }
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x2ac316d8df914f8) {
                pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
            }
            else {
                if (arg1 != -0x890743871a4a53) goto code_r0x0800c204;
                pcVar2 = sym.hw_sync_debugfs_ioctl.d62a3c34d04a440c8d646fa43596128c.cfi_jt;
            }
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x0800c204;
            pcVar2 = sym.hw_fence_dbg_dump_table_rd.cbd65a651d105b5a53f49d19393c623c.cfi_jt;
        }
    }
    else if (arg1 < 0x641d19c7be126e92) {
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 == 0x15332306f8fba7a5) {
                pcVar2 = sym.hw_fence_dbg_enable_signaling.cbd65a651d105b5a53f49d19393c623c.cfi_jt;
            }
            else {
                if (arg1 == 0x18e8656c90c93853) {
                    pcVar2 = sym.msm_hw_fence_wait_update_v2.cfi_jt;
                    goto code_r0x0800a58c;
                }
                if (arg1 != 0x1d3e2be5013c569d) goto code_r0x0800c204;
                pcVar2 = sym.hw_fence_dbg_release.cbd65a651d105b5a53f49d19393c623c.cfi_jt;
            }
code_r0x0800a558:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800c204;
        }
        if (arg1 < 0x47c48caccbbc1d58) {
            if (arg1 == 0x1d7ed092cb04d3f1) {
                if ((pcVar1 + -0x800a730 >> 3 | pcVar1 << 0x3d) < 9) {
                    return;
                }
                goto code_r0x0800c204;
            }
            if (arg1 != 0x365ecddf6286b0c4) goto code_r0x0800c204;
            pcVar2 = sym.msm_hw_fence_trigger_signal.cfi_jt;
        }
        else if (arg1 == 0x47c48caccbbc1d58) {
            pcVar2 = sym.msm_hw_fence_wait_update.cfi_jt;
        }
        else {
            if (arg1 != 0x59fd76d33be43cae) goto code_r0x0800c204;
            pcVar2 = sym.msm_hw_fence_update_txq.cfi_jt;
        }
    }
    else if (arg1 < 0x7a9f9f5cae0a3b66) {
        if (arg1 < 0x6ffb36ddfee935c2) {
            if (arg1 == 0x641d19c7be126e92) {
                pcVar2 = sym.msm_hw_fence_deregister.cfi_jt;
            }
            else {
                if (arg1 != 0x6b141b54612cf75f) goto code_r0x0800c204;
                pcVar2 = sym.msm_hw_fence_destroy_with_handle.cfi_jt;
            }
        }
        else if (arg1 == 0x6ffb36ddfee935c2) {
            pcVar2 = sym.msm_hw_fence_destroy.cfi_jt;
        }
        else {
            if (arg1 != 0x77079828fb981a70) goto code_r0x0800c204;
            pcVar2 = sym._hw_fence_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x7a9f9f5cae0a3b66) {
            pcVar2 = sym.hw_fence_dbg_get_driver_name.d62a3c34d04a440c8d646fa43596128c.cfi_jt;
code_r0x0800a500:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x0800c204;
        }
        if (arg1 != 0x7c1f721cde36a830) goto code_r0x0800c204;
        pcVar2 = sym.msm_hw_fence_create.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.hw_fence_rm_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800c204;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x0800a58c:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800c204:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800c258);
    (*pcVar1)();
}


// ===== sym.msm_hw_fence_wait_update_v2.cfi_jt @ 0x0800a5a8 (size 8) =====

uint64_t sym.msm_hw_fence_wait_update_v2.cfi_jt
                   (uint32_t *param_1,int64_t *param_2,int64_t param_3,int64_t param_4,int param_5)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t arg2;
    int64_t iVar4;
    ulong uVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    if ((((param_1 == NULL) || (0xfffffffffffff000 < param_1)) || (param_2 == NULL)) || (*param_2 == 0)) {
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar3 = uVar7 | unaff_x30;
        }
        _printk(0x80027e7,"msm_hw_fence_wait_update_v2",0x12f,uVar3);
        uVar1 = 0xffffffea;
    }
    else if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x2d0) == '\0') {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8004c89,"msm_hw_fence_wait_update_v2",0x134);
            uVar1 = 0xfffffff5;
        }
        else {
            uVar1 = 0xfffffff5;
        }
    }
    else {
        uVar1 = sym.hw_fence_get_client_data_id(*param_1);
        if ((param_4 == 0) || (uVar1 < 5)) {
            if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x30) < *param_1) {
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar3 = uVar7 | unaff_x30;
                }
                _printk(0x800486b,"msm_hw_fence_wait_update_v2",0x142,uVar3,*param_1,param_1[1]);
                uVar1 = 0xffffffea;
            }
            else {
                if ((~_segment.ehdr & 0x10001) == 0) {
                    _printk(0x8005635,"msm_hw_fence_wait_update_v2",0x146);
                }
                if (param_5 != 0) {
                    iVar6 = 0;
                    do {
                        iVar4 = param_2[iVar6];
                        uStack_70 = 0;
                        if (*(iVar4 + 8) == dma_fence_array_ops && iVar4 != 0) {
                            uVar1 = sym.hw_fence_process_fence_array
                                              (CONCAT44(*0x8000004,_segment.ehdr),param_1,iVar4,&uStack_70);
                            if (uVar1 != 0) {
                                uVar2 = 0x800564f;
                                uVar5 = 0x156;
                                goto code_r0x0800b798;
                            }
                        }
                        else {
                            uVar1 = sym.hw_fence_process_fence
                                              (CONCAT44(*0x8000004,_segment.ehdr),param_1,iVar4,&uStack_70);
                            if (uVar1 != 0) {
                                uVar2 = 0x80052e8;
                                uVar5 = 0x15e;
code_r0x0800b798:
                                uVar7 = -1L << (_simple_open & 0x3f);
                                uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar3 = uVar7 | unaff_x30;
                                }
                                _printk(uVar2,"msm_hw_fence_wait_update_v2",uVar5,uVar3);
                                goto code_r0x0800b6b8;
                            }
                        }
                        if (param_3 != 0) {
                            *(param_3 + iVar6 * 8) = uStack_70;
                        }
                        iVar6 = iVar6 + 1;
                    } while (param_5 != iVar6);
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x800753d,"msm_hw_fence_wait_update_v2",0x167);
                }
                uVar1 = 0;
            }
        }
        else {
            uVar7 = -1L << (_simple_open & 0x3f);
            uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar7 | unaff_x30;
            }
            _printk(0x80068ac,"msm_hw_fence_wait_update_v2",0x13c,uVar3,*param_1);
            uVar1 = 0xffffffea;
        }
    }
code_r0x0800b6b8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        uVar1 = __stack_chk_fail();
        *extraout_x18 = sym.msm_hw_fence_wait_update;
        uVar3 = sym.msm_hw_fence_wait_update_v2(uVar1,arg2,0,0);
        return uVar3;
    }
    return uVar1;
}


// ===== sym.msm_hw_fence_create.cfi_jt @ 0x0800a5b0 (size 8) =====

int sym.msm_hw_fence_create.cfi_jt(uint64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    int64_t iVar8;
    uint64_t *puVar9;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((param_1 == 0) || (0xfffffffffffff000 < param_1)) || (param_2 == 0)) ||
       ((iVar8 = *(param_2 + 0x10), iVar8 == 0 || (*(param_2 + 8) == 0)))) {
        uVar5 = 0x80061c1;
        bVar3 = (unaff_x30 & 0x80000000000000) == 0;
        uVar6 = 0xac;
    }
    else {
        if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x2d0) == '\0') {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
                return -0xb;
            }
            _printk(0x8003729,"msm_hw_fence_create",0xb1);
            return -0xb;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8005635,"msm_hw_fence_create",0xb8);
        }
        if (*(iVar8 + 8) == dma_fence_array_ops) {
            uVar5 = 0x80045e2;
            bVar3 = (unaff_x30 & 0x80000000000000) == 0;
            uVar6 = 0xbd;
        }
        else {
            puVar9 = iVar8 + 0x30;
            if (-1 < *puVar9) {
                iVar4 = sym.hw_fence_create(CONCAT44(*0x8000004,_segment.ehdr),param_1,*(iVar8 + 0x20),
                                            *(iVar8 + 0x28));
                if (iVar4 == 0) {
                    Hint_Prefetch(puVar9,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                        if (bVar3) {
                            *puVar9 = *puVar9 | 0x80000000;
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x800753d,"msm_hw_fence_create",0xd2);
                    }
                    return 0;
                }
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar7 | unaff_x30;
                }
                _printk(0x8004821,"msm_hw_fence_create",0xcb,uVar1);
                return iVar4;
            }
            uVar5 = 0x8003340;
            bVar3 = (unaff_x30 & 0x80000000000000) == 0;
            uVar6 = 0xc3;
        }
    }
    uVar7 = -1L << (_simple_open & 0x3f);
    uVar1 = (~uVar7 | 0xff80000000000000) & unaff_x30;
    if (!bVar3) {
        uVar1 = uVar7 | unaff_x30;
    }
    _printk(uVar5,"msm_hw_fence_create",uVar6,uVar1);
    return -0x16;
}


// ===== sym.msm_hw_fence_destroy.cfi_jt @ 0x0800a5b8 (size 8) =====

int sym.msm_hw_fence_destroy.cfi_jt(uint64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    uint64_t *puVar8;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (0xfffffffffffff000 < param_1)) || (param_2 == 0)) {
        uVar5 = 0x80027e7;
        uVar6 = 0xe0;
    }
    else {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8005635,"msm_hw_fence_destroy",0xe5);
        }
        if (*(param_2 + 8) != dma_fence_array_ops) {
            puVar8 = param_2 + 0x30;
            if (-1 < *puVar8) {
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar7 | unaff_x30;
                }
                _printk(0x8002b45,"msm_hw_fence_destroy",0xf0,uVar1);
                return -0x16;
            }
            iVar4 = sym.hw_fence_destroy
                              (CONCAT44(*0x8000004,_segment.ehdr),param_1,*(param_2 + 0x20),*(param_2 + 0x28));
            if (iVar4 == 0) {
                Hint_Prefetch(puVar8,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar8,0x10);
                    if (bVar3) {
                        *puVar8 = *puVar8 & 0xffffffff7fffffff;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x800753d,"msm_hw_fence_destroy",0xff);
                }
                return 0;
            }
            uVar7 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar7 | unaff_x30;
            }
            _printk(0x8006871,"msm_hw_fence_destroy",0xf8,uVar1);
            return iVar4;
        }
        uVar5 = 0x8006c6c;
        uVar6 = 0xea;
    }
    uVar7 = -1L << (_simple_open & 0x3f);
    uVar1 = (~uVar7 | 0xff80000000000000) & unaff_x30;
    if ((unaff_x30 & 0x80000000000000) != 0) {
        uVar1 = uVar7 | unaff_x30;
    }
    _printk(uVar5,"msm_hw_fence_destroy",uVar6,uVar1);
    return -0x16;
}


// ===== sym.msm_hw_fence_reset_client.cfi_jt @ 0x0800a5c0 (size 8) =====

ulong sym.msm_hw_fence_reset_client.cfi_jt(uint *param_1)

{
    uint64_t uVar1;
    int iVar2;
    int64_t arg1;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (0xfffffffffffff000 < param_1)) {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar4 | unaff_x30;
        }
        _printk(0x8007638,"msm_hw_fence_reset_client",0x17c,uVar1);
        uVar3 = 0xffffffea;
    }
    else {
        arg1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (*(arg1 + 0x2d0) == '\0') {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8007af2,"msm_hw_fence_reset_client",0x181);
            }
            uVar3 = 0xfffffff5;
        }
        else {
            iVar5 = *(arg1 + 0x38);
            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                _printk(0x8005689,"msm_hw_fence_reset_client",0x188,*param_1);
                arg1 = CONCAT44(*0x8000004,_segment.ehdr);
                iVar2 = *(arg1 + 0x40);
            }
            else {
                iVar2 = *(arg1 + 0x40);
            }
            if (iVar2 != 0) {
                uVar6 = 0;
                do {
                    sym.hw_fence_utils_cleanup_fence(arg1,param_1,iVar5 + uVar6 * 0xa0,uVar6);
                    arg1 = CONCAT44(*0x8000004,_segment.ehdr);
                    uVar6 = uVar6 + 1;
                } while (uVar6 < *(arg1 + 0x40));
            }
            sym.hw_fence_utils_reset_queues(arg1,param_1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.init_module.cfi_jt @ 0x0800a5c8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8005635,"msm_hw_fence_init",600);
    }
    iVar2 = __platform_driver_register
                      (reloc.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt,obj.__this_module);
    if (iVar2 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x800753d,"msm_hw_fence_init",0x261);
        }
    }
    else {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x8005996,"msm_hw_fence_init",0x25d,uVar1,"msm_hw_fence_init");
    }
    return iVar2;
}


// ===== sym.hw_fence_rm_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt @ 0x0800a5d0 (size 8) =====

char * sym.hw_fence_rm_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt(int64_t param_1,int64_t param_2,uint16_t *param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    uint16_t auStack_50 [2];
    uint16_t auStack_4c [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    auStack_4c[0] = 0;
    auStack_50[0] = 0;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
        _printk(0x8007002,"hw_fence_rm_cb",0x194,param_2);
    }
    if (param_2 == 0x56100008) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
            _printk(0x8003d55,"hw_fence_rm_cb",0x199,param_3[2]);
        }
        if ((param_3[2] == '\v') || (param_3[2] == '\x02')) {
            iVar3 = gh_rm_get_vmid(*(param_1 + -4),auStack_4c);
            if ((iVar3 == 0) && ((iVar3 = gh_rm_get_vmid(1,auStack_50), iVar3 == 0 && (auStack_4c[0] == *param_3)))) {
                if (param_3[2] == '\v') {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                        _printk(0x8005500,"hw_fence_rm_cb",0x1b0);
                    }
                }
                else if (param_3[2] == '\x02') {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                        _printk(0x8002d04,"hw_fence_rm_cb",0x1a9);
                    }
                    iVar3 = sym.hw_fence_gunyah_share_mem(param_1 + -0x170,auStack_50[0],auStack_4c[0]);
                    if (iVar3 == 0) {
                        *(param_1 + 0x160) = 1;
                    }
                    else {
                        uVar5 = -1L << (_simple_open & 0x3f);
                        uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar1 = uVar5 | unaff_x30;
                        }
                        _printk(0x800580b,"hw_fence_rm_cb",0x1ab,uVar1);
                    }
                }
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return NULL;
    }
    uVar4 = __stack_chk_fail();
    if (uVar4 < 4) {
        return *(uVar4 * 8 + 0x8009288);
    }
    return "Unknown";
}


// ===== sym.hw_fence_dbg_dump_table_rd.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a5d8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08014888)
//WARNING: Removing unreachable block (ram,0x080148d4)
//WARNING: Removing unreachable block (ram,0x080147fc)

ulong * sym.hw_fence_dbg_dump_table_rd.cbd65a651d105b5a53f49d19393c623c.cfi_jt
                  (int64_t param_1,int64_t param_2,ulong *param_3,int64_t *param_4)

{
    uint64_t uVar1;
    int64_t arg4;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *unaff_x19;
    int64_t unaff_x20;
    code *unaff_x21;
    int64_t *unaff_x23;
    int64_t iVar12;
    int64_t iVar13;
    ulong *puVar14;
    uint64_t unaff_x30;
    uchar auVar15 [16];
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    int64_t *piStack_120;
    code *pcStack_108;
    int64_t iStack_100;
    ulong *puStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    uint uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong *puStack_b8;
    ulong *puStack_b0;
    ulong *puStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    int64_t *piStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    ulong *puStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    if ((param_1 == 0) || (iVar13 = *(param_1 + 0xd8), iVar13 == 0)) {
        puVar10 = 0x288;
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar9 = uVar8 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_dump_table_rd",0x288,uVar9);
        puVar14 = 0xffffffffffffffea;
    }
    else if (*(iVar13 + 0x38) == 0) {
        puVar10 = 0x28e;
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar9 = uVar8 | unaff_x30;
        }
        _printk(0x8002a5a,"hw_fence_dbg_dump_table_rd",0x28e,uVar9);
        puVar14 = 0xffffffffffffffea;
    }
    else {
        unaff_x21 = segment.ehdr;
        unaff_x23 = param_4;
        if (_segment.ehdr < *(iVar13 + 0x40)) {
            unaff_x19 = param_3;
            if (param_3 < 0xa0) {
                puVar10 = 0x29a;
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar9 = uVar8 | unaff_x30;
                }
                _printk(0x80031e4,"hw_fence_dbg_dump_table_rd",0x29a,uVar9,param_3,0xa0);
                puVar14 = 0xffffffffffffffea;
            }
            else {
                puVar10 = 0x1000;
                iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
                if (iVar6 == 0) {
                    puVar14 = 0xfffffffffffffff4;
                }
                else {
                    if (*(iVar13 + 0x1a8) == '\0') {
                        puVar14 = NULL;
                        do {
                            uVar2 = _segment.ehdr;
                            unaff_x21 = segment.ehdr;
                            uVar9 = _segment.ehdr;
                            do {
                                iVar5 = puVar14;
                                if ((*(iVar13 + 0x40) <= uVar9) || (0xf5f < iVar5)) {
                                    _segment.ehdr = uVar9 + 1;
                                    unaff_x20 = iVar6;
                                    goto joined_r0x08014420;
                                }
                                uVar8 = uVar9 + 1 & 0xffffffff;
                                uVar9 = uVar9 + 1;
                                unaff_x21 = *(iVar13 + 0x38) + uVar8 * 0xa0;
                            } while (*unaff_x21 == 0);
                            iVar12 = *(iVar13 + 0x38) + uVar8 * 0xa0;
                            puStack_a8 = iVar12 + 8;
                            puStack_b0 = iVar12 + 0x10;
                            uStack_f0 = *puStack_b0;
                            puStack_b8 = iVar12 + 0x18;
                            uStack_e8 = *puStack_b8;
                            uStack_e0 = *(iVar12 + 0x20);
                            uStack_d8 = *(iVar12 + 0x30);
                            uStack_d0 = *(iVar12 + 0x60);
                            uStack_c8 = *(iVar12 + 0x68);
                            uStack_9c = _segment.ehdr;
                            _segment.ehdr = uVar9;
                            iStack_98 = param_2;
                            piStack_90 = param_4;
                            uStack_88 = unaff_x30;
                            iStack_80 = iVar6;
                            puStack_78 = param_3;
                            iVar4 = scnprintf(iVar6 + iVar5,0x1000 - iVar5,
                                              "[%d]hfence[%d] v:%d err:%d ctx:%d seqno:%d wait:0x%llx alloc:%d f:0x%lx tt:%llu wt:%llu\n"
                                              ,uVar2,uVar9 & 0xffffffff,*unaff_x21,*(iVar12 + 4),*puStack_a8);
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                uStack_d8 = *(iVar12 + 0x30);
                                uStack_e0 = *(iVar12 + 0x20);
                                uStack_e8 = *puStack_b8;
                                uStack_f0 = *puStack_b0;
                                uStack_d0 = *(iVar12 + 0x60);
                                uStack_c8 = *(iVar12 + 0x68);
                                _printk(0x800523e,"_dump_fence",0x1eb,uStack_9c,uVar9 & 0xffffffff,*unaff_x21,
                                        *(iVar12 + 4),*puStack_a8);
                            }
                            puVar14 = iVar4 + iVar5;
                            _segment.ehdr = _segment.ehdr + 1;
                            param_3 = puStack_78;
                            iVar6 = iStack_80;
                            unaff_x30 = uStack_88;
                            param_4 = piStack_90;
                            param_2 = iStack_98;
                        } while( true );
                    }
                    iVar12 = *(iVar13 + 0x1b0);
                    arg4 = *(iVar13 + 0x1b8);
                    uStack_70 = 0;
                    puVar7 = sym.msm_hw_fence_find(iVar13,0,iVar12,arg4);
                    uVar9 = uStack_70;
                    if (puVar7 == NULL) {
                        uVar8 = -1L << (_simple_open & 0x3f);
                        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar9 = uVar8 | unaff_x30;
                        }
                        _printk(0x8002d89,"dump_single_entry",0x1fc,uVar9,iVar12,arg4,uStack_70);
                        uVar9 = scnprintf(iVar6,0x1000,"no valid hfence found for context:%lu seqno:%lu hash:%lu\n",
                                          iVar12,arg4,uStack_70);
                        puVar14 = uVar9 & 0xffffffff;
                    }
                    else {
                        uStack_f0 = *(puVar7 + 4);
                        uStack_d0 = *(puVar7 + 0x18);
                        uStack_c8 = *(puVar7 + 0x1a);
                        uStack_e8 = *(puVar7 + 6);
                        uStack_e0 = puVar7[8];
                        uStack_d8 = *(puVar7 + 0xc);
                        uVar8 = scnprintf(iVar6,0x1000,
                                          "[%d]hfence[%d] v:%d err:%d ctx:%d seqno:%d wait:0x%llx alloc:%d f:0x%lx tt:%llu wt:%llu\n"
                                          ,0,uStack_70 & 0xffffffff,*puVar7,puVar7[1],*(puVar7 + 2));
                        puVar14 = uVar8 & 0xffffffff;
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            uStack_f0 = *(puVar7 + 4);
                            uStack_d0 = *(puVar7 + 0x18);
                            uStack_c8 = *(puVar7 + 0x1a);
                            uStack_e8 = *(puVar7 + 6);
                            uStack_e0 = puVar7[8];
                            uStack_d8 = *(puVar7 + 0xc);
                            _printk(0x800523e,"_dump_fence",0x1eb,0,uVar9 & 0xffffffff,*puVar7,puVar7[1],
                                    *(puVar7 + 2));
                        }
                    }
                    _segment.ehdr = *(iVar13 + 0x40);
                    iVar5 = puVar14;
                    unaff_x20 = iVar6;
joined_r0x08014420:
                    if ((iVar5 < 1) || (iVar5 = puVar14, param_3 < puVar14)) {
                        puVar10 = 0x2a7;
                        uVar8 = -1L << (_simple_open & 0x3f);
                        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar9 = uVar8 | unaff_x30;
                        }
                        _printk(0x8005d25,"hw_fence_dbg_dump_table_rd",0x2a7,uVar9,puVar14,param_3);
                        iVar5 = 0;
                    }
                    else {
                        auVar15 = __check_object_size(unaff_x20,puVar14,1);
                        puVar10 = puVar14;
                        iVar13 = sym._copy_to_user(param_2,auVar15,puVar14);
                        if (iVar13 == 0) {
                            *param_4 = *param_4 + puVar14;
                        }
                        else {
                            puVar10 = 0x2ad;
                            uVar8 = -1L << (_simple_open & 0x3f);
                            uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar9 = uVar8 | unaff_x30;
                            }
                            _printk(0x8004dbf,"hw_fence_dbg_dump_table_rd",0x2ad,uVar9);
                            iVar5 = -0xe;
                        }
                    }
                    kfree(unaff_x20);
                    puVar14 = iVar5;
                    unaff_x19 = param_3;
                    unaff_x23 = param_4;
                }
            }
        }
        else {
            puVar10 = param_3;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                puVar10 = 0x293;
                _printk(0x8007441,"hw_fence_dbg_dump_table_rd");
            }
            puVar14 = NULL;
            _segment.ehdr = 0;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return puVar14;
    }
    auVar15 = __stack_chk_fail(puVar14);
    *extraout_x18 = sym.hw_fence_dbg_dump_table_wr;
    pcStack_128 = sym.hw_fence_dbg_dump_table_wr;
    iVar13 = sp_el0;
    iStack_138 = *(iVar13 + 0x5e0);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    puStack_130 = &stack0xffffffffffffffa0;
    piStack_120 = unaff_x23;
    pcStack_108 = unaff_x21;
    iStack_100 = unaff_x20;
    puStack_f8 = unaff_x19;
    if ((auVar15._0_8_ == 0) || (iVar13 = *(auVar15._0_8_ + 0xd8), iVar13 == 0)) {
        puVar14 = 0x2ce;
        _printk(0x800317d,"hw_fence_dbg_dump_table_wr",0x2ce,~(-1L << (_simple_open & 0x3f)) & 0x80146e0);
        puVar10 = 0xffffffffffffffea;
        goto code_r0x08014808;
    }
    if (puVar10 < 0x18) {
        __check_object_size(&uStack_150,puVar10,0);
        puVar14 = puVar10;
        iVar6 = sym._copy_from_user(&uStack_150,auVar15._8_8_,puVar10);
        if (iVar6 == 0) {
            puVar14 = &uStack_158;
            *(&uStack_150 + puVar10) = 0;
            iVar5 = sscanf(&uStack_150,"%lu %lu",puVar14,&uStack_160);
            if (iVar5 == 1) {
                *(iVar13 + 0x1a8) = 0;
                *(iVar13 + 0x1b0) = 0;
                *(iVar13 + 0x1b8) = 0;
                goto code_r0x08014808;
            }
            if (iVar5 == 2) {
                *(iVar13 + 0x1a8) = 1;
                *(iVar13 + 0x1b0) = uStack_158;
                *(iVar13 + 0x1b8) = uStack_160;
                goto code_r0x08014808;
            }
            puVar14 = 0x2e9;
            _printk(0x8005d5e,"hw_fence_dbg_dump_table_wr",0x2e9,~(-1L << (_simple_open & 0x3f)) & 0x80146e0,iVar5);
        }
    }
    else {
        puVar14 = 0x2d4;
        _printk(0x8007a44,"hw_fence_dbg_dump_table_wr",0x2d4,~(-1L << (_simple_open & 0x3f)) & 0x80146e0,puVar10,
                0x18);
    }
    puVar10 = 0xfffffffffffffff2;
code_r0x08014808:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_138) {
        uVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym._copy_to_user;
        puVar10 = sp_el0;
        uVar9 = (uVar8 << 8) >> 8;
        if (((*(puVar10 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar8, (*puVar10 >> 0x1a & 1) != 0)) {
            uVar11 = uVar8 & uVar9;
        }
        bVar3 = CARRY8(uVar11,puVar14);
        uVar11 = uVar11 + puVar14;
        uVar1 = 0;
        if (!bVar3 || uVar11 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar11 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar11,~uVar1) && !CARRY8(uVar11 + ~uVar1,bVar3) || uVar11 == uVar1 + !bVar3) {
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar11 = daif;
                if ((uVar11 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar10[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar10[1];
                InstructionSynchronizationBarrier();
                daif = uVar11;
            }
            if ((uVar8 & uVar9 & 0xffffff8000000000) != 0) {
                uVar8 = 0;
            }
            puVar14 = __arch_copy_to_user(uVar8);
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar9 = daif;
                if ((uVar9 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar9;
            }
        }
        return puVar14;
    }
    return puVar10;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x0800a5e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFvP4krefE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_hw_fence_reset_client_by_id.cfi_jt @ 0x0800a5e8 (size 8) =====

ulong sym.msm_hw_fence_reset_client_by_id.cfi_jt(uint32_t param_1,uint32_t param_2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 0x28f) {
        uVar2 = sym.hw_fence_utils_get_client_id_priv(_segment.ehdr,param_1);
        if (uVar2 < 0x28f) {
            uVar3 = sym.msm_hw_fence_reset_client(*(*(_segment.ehdr + 0x2c8) + uVar2 * 8),param_2);
        }
        else {
            uVar4 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar4 | unaff_x30;
            }
            _printk(0x8004a4e,"msm_hw_fence_reset_client_by_id",0x19f,uVar1,uVar2,param_1);
            uVar3 = 0xffffffea;
        }
    }
    else {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar4 | unaff_x30;
        }
        _printk(0x800377d,"msm_hw_fence_reset_client_by_id",0x198,uVar1,param_1);
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.msm_hw_fence_driver_doorbell_sim.cfi_jt @ 0x0800a5f0 (size 8) =====

ulong sym.msm_hw_fence_driver_doorbell_sim.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) || (*(uVar2 + 8) == '\0')) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar3 | unaff_x30;
        }
        _printk(0x8006c35,"msm_hw_fence_driver_doorbell_sim",0x1df,uVar2);
        uVar1 = 0xfffffff5;
    }
    else {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
            uVar1 = sym.hw_fence_get_qtime(uVar2);
            _printk(0x8007ddf,"msm_hw_fence_driver_doorbell_sim",0x1e4,param_1,uVar1);
            uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        sym.hw_fence_utils_process_doorbell_mask(uVar2,param_1);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.msm_hw_fence_deregister.cfi_jt @ 0x0800a5f8 (size 8) =====

ulong sym.msm_hw_fence_deregister.cfi_jt(uint32_t *param_1)

{
    uint64_t uVar1;
    int64_t arg1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (0xfffffffffffff000 < param_1)) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x8004ee5,"msm_hw_fence_deregister",0x8e,uVar1);
        uVar2 = 0xffffffea;
    }
    else {
        arg1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (*param_1 < *(arg1 + 0x34)) {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8005635,"msm_hw_fence_deregister",0x98);
                arg1 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            sym.hw_fence_cleanup_client(arg1,param_1);
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x800753d,"msm_hw_fence_deregister",0x9d);
            }
            uVar2 = 0;
        }
        else {
            uVar3 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar3 | unaff_x30;
            }
            _printk(0x80052b6,"msm_hw_fence_deregister",0x94,uVar1);
            uVar2 = 0xffffffea;
        }
    }
    return uVar2;
}


// ===== sym.msm_hw_fence_trigger_signal.cfi_jt @ 0x0800a600 (size 8) =====

ulong sym.msm_hw_fence_trigger_signal.cfi_jt(uint *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    ulong uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) || (*(uVar2 + 8) == '\0')) || (*(uVar2 + 0x2d0) == '\0')) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar3 | unaff_x30;
        }
        _printk(0x80040bd,"msm_hw_fence_trigger_signal",0x1cb,uVar2);
        uVar1 = 0xfffffff5;
    }
    else if ((param_1 == NULL) || (0xfffffffffffff000 < param_1)) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar3 | unaff_x30;
        }
        _printk(0x8004394,"msm_hw_fence_trigger_signal",0x1ce,uVar2);
        uVar1 = 0xffffffea;
    }
    else {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8006cb8,"msm_hw_fence_trigger_signal",0x1d3,*param_1);
            uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        sym.hw_fence_ipcc_trigger_signal(uVar2,param_2,param_3,param_4);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.dma_fence_default_wait.cfi_jt @ 0x0800a608 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.dma_fence_default_wait.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.msm_hw_fence_wait_update.cfi_jt @ 0x0800a610 (size 8) =====

void sym.msm_hw_fence_wait_update.cfi_jt(uint32_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.msm_hw_fence_wait_update_v2(param_1,param_2,0,0);
    return;
}


// ===== sym.hw_fence_dbg_release.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a618 (size 8) =====

void sym.hw_fence_dbg_release.cbd65a651d105b5a53f49d19393c623c.cfi_jt(ulong *param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    if (param_1 == NULL) {
        return;
    }
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x800450b,"hw_fence_dbg_release",0xb3,param_1);
        iVar1 = param_1[6];
    }
    else {
        iVar1 = param_1[6];
    }
    if (iVar1 < 0) {
        uVar2 = param_1[0x10];
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            uVar3 = 0x800453d;
            uVar4 = 0xa3;
        }
        else {
            iVar1 = sym.msm_hw_fence_destroy(uVar2,param_1);
            if (iVar1 == 0) goto code_r0x08013d34;
            uVar3 = 0x8006814;
            uVar4 = 0xa9;
        }
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        _printk(uVar3,"_hw_fence_release",uVar4,uVar2);
    }
code_r0x08013d34:
    kfree(*param_1);
    kfree(param_1);
    return;
}


// ===== sym.hw_fence_dbg_release.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a620 (size 8) =====

void sym.hw_fence_dbg_release.d62a3c34d04a440c8d646fa43596128c.cfi_jt(ulong *param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    if (param_1 == NULL) {
        return;
    }
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x800450b,"hw_fence_dbg_release",0xb3,param_1);
        iVar1 = param_1[6];
    }
    else {
        iVar1 = param_1[6];
    }
    if (iVar1 < 0) {
        uVar2 = param_1[0x10];
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            uVar3 = 0x800453d;
            uVar4 = 0xa3;
        }
        else {
            iVar1 = sym.msm_hw_fence_destroy(uVar2,param_1);
            if (iVar1 == 0) goto code_r0x08017c10;
            uVar3 = 0x8006814;
            uVar4 = 0xa9;
        }
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        _printk(uVar3,"_hw_fence_release",uVar4,uVar2);
    }
code_r0x08017c10:
    kfree(*param_1);
    kfree(param_1);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800a628 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8005635,"msm_hw_fence_exit",0x268);
    }
    platform_driver_unregister(reloc.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt);
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x800753d,"msm_hw_fence_exit",0x26c);
    }
    return;
}


// ===== sym.simple_open.cfi_jt @ 0x0800a630 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.hw_sync_debugfs_open.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a638 (size 8) =====

ulong sym.hw_sync_debugfs_open.d62a3c34d04a440c8d646fa43596128c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x38);
    if (puVar2 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        uVar3 = dma_fence_context_alloc(1);
        uVar4 = 0;
        *(param_2 + 0xd8) = puVar2;
        *puVar2 = uVar3;
    }
    return uVar4;
}


// ===== sym.hw_sync_debugfs_release.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a640 (size 8) =====

ulong sym.hw_sync_debugfs_release.d62a3c34d04a440c8d646fa43596128c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0xd8) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        kfree();
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.hw_sync_debugfs_ioctl.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a648 (size 8) =====

ulong sym.hw_sync_debugfs_ioctl.d62a3c34d04a440c8d646fa43596128c.cfi_jt
                (int64_t param_1,uint64_t param_2,ulong param_3)

{
    ulong uVar1;
    uint64_t uVar2;
    code *pcVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = (param_2 & 0xff) - 2;
    if (uVar2 < 0x12) {
        if (uVar2 * 0x18 - 0x1a9 < 0xfffffffffffffe4f) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x8015be0);
            (*pcVar3)();
        }
        if ((uVar2 & 0x1ffffffffffffff8) == 0) {
            uVar4 = -1L << (_simple_open & 0x3f);
            uVar2 = (~uVar4 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar4 | unaff_x30;
            }
            _printk(0x8007136,"hw_sync_debugfs_ioctl",0x2a1,uVar2);
            uVar1 = 0xffffffffffffffe7;
        }
        else {
            uVar1 = *(param_1 + 0xd8);
            pcVar3 = *(uVar2 * 0x18 + 0x8008dc0);
            if (9 < (pcVar3 + -0x800a6e0 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0x9014caba79f8fed0,pcVar3,0x8002790);
            }
            uVar1 = (*pcVar3)(uVar1,param_3);
        }
    }
    else {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar4 | unaff_x30;
        }
        _printk(0x8003e2a,"hw_sync_debugfs_ioctl",0x29b,uVar2);
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.msm_hw_fence_register.cfi_jt @ 0x0800a650 (size 8) =====

uint32_t * sym.msm_hw_fence_register.cfi_jt(uint32_t param_1,int64_t param_2)

{
    uint8_t uVar1;
    uint32_t arg2;
    uint32_t uVar2;
    int iVar3;
    uint32_t *arg2_00;
    ulong uVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    uint64_t uVar9;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8004091,"msm_hw_fence_register",0x1b,param_1);
    }
    uVar9 = CONCAT44(*0x8000004,_segment.ehdr);
    if (((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) || (*(uVar9 + 8) == '\0')) {
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar9 = uVar8 | unaff_x30;
        }
        _printk(0x8006c35,"msm_hw_fence_register",0x1e,uVar9);
        return 0xfffffffffffffff5;
    }
    if ((0x28e < param_1) || (param_2 == 0)) {
        uVar9 = param_2 == 0;
        uVar4 = 0x80074a7;
        uVar5 = 0x24;
code_r0x0800aa2c:
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar8 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar8 = uVar7 | unaff_x30;
        }
        _printk(uVar4,"msm_hw_fence_register",uVar5,uVar8,uVar9,param_1);
        return 0xffffffffffffffea;
    }
    arg2 = sym.hw_fence_utils_get_client_id_priv(uVar9,param_1);
    uVar9 = arg2;
    if (0x28e < arg2) {
        uVar4 = 0x8007168;
        uVar5 = 0x2b;
        goto code_r0x0800aa2c;
    }
    arg2_00 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x98);
    if (arg2_00 == NULL) {
        return 0xfffffffffffffff4;
    }
    mutex_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0x298);
    iVar6 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c8);
    if (*(iVar6 + uVar9 * 8) != 0) {
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar8 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar8 = uVar7 | unaff_x30;
        }
        _printk(0x8007867,"msm_hw_fence_register",0x37,uVar8,uVar9);
        mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x298);
        kfree(arg2_00);
        return 0xffffffffffffffea;
    }
    *(iVar6 + uVar9 * 8) = arg2_00;
    mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x298);
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    *arg2_00 = arg2;
    arg2_00[1] = param_1;
    uVar2 = sym.hw_fence_ipcc_get_client_virt_id(iVar6,arg2);
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    arg2_00[0x1b] = uVar2;
    uVar2 = sym.hw_fence_ipcc_get_client_phys_id(iVar6,arg2);
    arg2_00[0x1c] = uVar2;
    if ((arg2_00[0x1b] < 1) || (uVar2 < 1)) {
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar8 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar8 = uVar7 | unaff_x30;
        }
        _printk(0x8004334,"msm_hw_fence_register",0x4a,uVar8,uVar9);
    }
    else {
        uVar2 = sym.hw_fence_ipcc_get_signal_id(CONCAT44(*0x8000004,_segment.ehdr),arg2);
        arg2_00[0x1a] = uVar2;
        if (uVar2 < 0) {
            uVar4 = 0x80074e8;
            uVar5 = 0x51;
        }
        else {
            uVar1 = sym.hw_fence_ipcc_needs_rxq_update(CONCAT44(*0x8000004,_segment.ehdr),arg2);
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            *(arg2_00 + 0x1d) = uVar1 & 1;
            if (((uVar1 & 1) == 0) || (1 < *(*(iVar6 + 0x20) + uVar9 * 0x14))) {
                uVar1 = sym.hw_fence_ipcc_needs_ipc_irq(iVar6,uVar9);
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                *(arg2_00 + 0x75) = uVar1 & 1;
                uVar1 = sym.hw_fence_utils_skips_txq_wr_idx(iVar6,arg2);
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                *(arg2_00 + 0x76) = uVar1 & 1;
                iVar3 = sym.hw_fence_alloc_client_resources(iVar6,arg2_00,param_2);
                if ((iVar3 == 0) &&
                   (iVar3 = sym.hw_fence_init_controller_signal(CONCAT44(*0x8000004,_segment.ehdr),arg2_00),
                   iVar3 == 0)) {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                        _printk(0x8005bb6,"msm_hw_fence_register",0x78,arg2_00,*arg2_00,arg2_00[0x1a],
                                arg2_00[0x1b],arg2_00[0x1c]);
                    }
                    __init_waitqueue_head
                              (arg2_00 + 0x1e,"&hw_fence_client->wait_queue",
                               reloc.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt);
                    return arg2_00;
                }
                goto code_r0x0800abbc;
            }
            uVar4 = 0x8002e50;
            uVar5 = 0x5a;
        }
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar8 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar8 = uVar7 | unaff_x30;
        }
        _printk(uVar4,"msm_hw_fence_register",uVar5,uVar8,uVar9);
    }
    iVar3 = -0x16;
code_r0x0800abbc:
    sym.hw_fence_cleanup_client(CONCAT44(*0x8000004,_segment.ehdr),arg2_00);
    uVar8 = -1L << (_simple_open & 0x3f);
    uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
    if ((unaff_x30 & 0x80000000000000) != 0) {
        uVar9 = uVar8 | unaff_x30;
    }
    _printk(0x80027b5,"msm_hw_fence_register",0x84,uVar9,iVar3);
    return iVar3;
}


// ===== sym.msm_hw_fence_update_txq.cfi_jt @ 0x0800a658 (size 8) =====

ulong sym.msm_hw_fence_update_txq.cfi_jt(uint64_t param_1,uint64_t param_2)

{
    uint64_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) || (*(_segment.ehdr + 8) == '\0')) ||
       (*(_segment.ehdr + 0x2d0) == '\0')) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x800654c,"msm_hw_fence_update_txq",0x1ae,uVar1);
        uVar2 = 0xfffffff5;
    }
    else if ((0xfffffffffffff000 < param_1 == (param_1 == 0)) && (param_2 < *(_segment.ehdr + 0x40))) {
        iVar4 = *(_segment.ehdr + 0x38) + param_2 * 0xa0;
        sym.hw_fence_update_queue(_segment.ehdr,param_1,*(iVar4 + 8),*(iVar4 + 0x10));
        uVar2 = 0;
    }
    else {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x800766c,"msm_hw_fence_update_txq",0x1b3,uVar1,param_2,
                param_1 == 0 || 0xfffffffffffff000 < param_1);
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.msm_hw_fence_destroy_with_handle.cfi_jt @ 0x0800a660 (size 8) =====

int sym.msm_hw_fence_destroy_with_handle.cfi_jt(uint32_t *param_1,ulong param_2)

{
    uint64_t uVar1;
    int iVar2;
    int64_t arg1;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (0xfffffffffffff000 < param_1)) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x80027e7,"msm_hw_fence_destroy_with_handle",0x10b,uVar1);
        iVar2 = -0x16;
    }
    else {
        arg1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (*param_1 < *(arg1 + 0x34)) {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8005635,"msm_hw_fence_destroy_with_handle",0x115);
                arg1 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            iVar2 = sym.hw_fence_destroy_with_hash(arg1,param_1,param_2);
            if (iVar2 == 0) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x800753d,"msm_hw_fence_destroy_with_handle",0x11f);
                }
                iVar2 = 0;
            }
            else {
                uVar3 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar3 | unaff_x30;
                }
                _printk(0x80049da,"msm_hw_fence_destroy_with_handle",0x11b,uVar1,param_2,*param_1);
            }
        }
        else {
            uVar3 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar3 | unaff_x30;
            }
            _printk(0x80052b6,"msm_hw_fence_destroy_with_handle",0x111,uVar1);
            iVar2 = -0x16;
        }
    }
    return iVar2;
}


// ===== sym.__typeid__ZTSFvP20hw_fence_driver_dataP12msm_hw_fencejyyjjE_global_addr @ 0x0800a668 (size 8) =====

void sym.__typeid__ZTSFvP20hw_fence_driver_dataP12msm_hw_fencejyyjjE_global_addr
               (ulong param_1,uint *param_2,uint param_3,ulong param_4,ulong param_5,uint param_6)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_2[1] = 0;
    DataSynchronizationBarrier(3,2,0);
    *param_2 = 0;
    *(param_2 + 2) = 0;
    *(param_2 + 4) = 0;
    *(param_2 + 0xc) = 0;
    *(param_2 + 0xe) = 0xffffffffffffffff;
    *(param_2 + 0x10) = 0xffffffffffffffff;
    *(param_2 + 0x12) = 0xffffffffffffffff;
    *(param_2 + 6) = 0;
    *(param_2 + 8) = 0;
    *(param_2 + 0x14) = 0;
    *(param_2 + 0x16) = 0;
    uVar1 = _segment.ehdr;
    *(param_2 + 0x18) = 0;
    *(param_2 + 0x1a) = 0;
    *(param_2 + 0x1c) = 0;
    *(param_2 + 0x1e) = 0;
    *(param_2 + 0x20) = 0;
    *(param_2 + 0x22) = 0;
    *(param_2 + 0x24) = 0;
    *(param_2 + 0x26) = 0;
    if (((uVar1 ^ 0xffffffff) & 0x10020) == 0) {
        _printk(0x8002fe9,"_unreserve_hw_fence",0x31a,param_3,param_4,param_5,param_6);
    }
    return;
}


// ===== sym._reserve_hw_fence.bc17693702868612c84a1a00a4b4bed1.cfi_jt @ 0x0800a670 (size 8) =====

void sym._reserve_hw_fence.bc17693702868612c84a1a00a4b4bed1.cfi_jt
               (ulong param_1,uint *param_2,uint param_3,ulong param_4,ulong param_5,uint param_6)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_2[1] = 0;
    DataSynchronizationBarrier(3,2,0);
    *(param_2 + 0x10) = 0xffffffffffffffff;
    *(param_2 + 0x12) = 0xffffffffffffffff;
    *(param_2 + 0xc) = 0;
    *(param_2 + 0xe) = 0xffffffffffffffff;
    *(param_2 + 6) = 0;
    *(param_2 + 8) = 0;
    param_2[8] = param_3;
    *param_2 = 1;
    *(param_2 + 0x14) = 0;
    *(param_2 + 0x16) = 0;
    *(param_2 + 0x18) = 0;
    *(param_2 + 0x1a) = 0;
    pcVar2 = _kmem_cache_alloc_trace;
    *(param_2 + 0x1c) = 0;
    *(param_2 + 0x1e) = 0;
    *(param_2 + 0x20) = 0;
    *(param_2 + 0x22) = 0;
    *(param_2 + 0x24) = 0;
    *(param_2 + 0x26) = 0;
    *(param_2 + 2) = param_4;
    *(param_2 + 4) = param_5;
    __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar2,0x8002730);
    uVar3 = (*pcVar2)();
    *(param_2 + 0x16) = uVar3;
    uVar1 = _segment.ehdr ^ 0xffffffff;
    *(param_2 + 0x1c) = *(param_2 + 0x1c) + 1;
    if ((uVar1 & 0x10020) == 0) {
        _printk(0x80066b9,"_reserve_hw_fence",0x30c,param_3,param_4,param_5,param_6);
    }
    return;
}


// ===== sym._reserve_join_fence.bc17693702868612c84a1a00a4b4bed1.cfi_jt @ 0x0800a678 (size 8) =====

void sym._reserve_join_fence.bc17693702868612c84a1a00a4b4bed1.cfi_jt
               (ulong param_1,uint *param_2,uint param_3,ulong param_4,ulong param_5,uint param_6,uint param_7)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    param_2[1] = 0;
    DataSynchronizationBarrier(3,2,0);
    *(param_2 + 0x10) = 0xffffffffffffffff;
    *(param_2 + 0x12) = 0xffffffffffffffff;
    *(param_2 + 0xc) = 0;
    *(param_2 + 0xe) = 0xffffffffffffffff;
    *(param_2 + 6) = 0;
    *(param_2 + 8) = 0;
    param_2[8] = param_3;
    *param_2 = 1;
    *(param_2 + 0x14) = 0;
    *(param_2 + 0x16) = 0;
    *(param_2 + 0x18) = 0;
    *(param_2 + 0x1a) = 0;
    pcVar2 = _kmem_cache_alloc_trace;
    *(param_2 + 0x1c) = 0;
    *(param_2 + 0x1e) = 0;
    *(param_2 + 0x20) = 0;
    *(param_2 + 0x22) = 0;
    *(param_2 + 0x24) = 0;
    *(param_2 + 0x26) = 0;
    *(param_2 + 2) = param_4;
    *(param_2 + 4) = param_5;
    __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar2,0x8002730);
    uVar3 = (*pcVar2)();
    *(param_2 + 0x16) = uVar3;
    param_2[0x15] = param_7;
    uVar1 = _segment.ehdr ^ 0xffffffff;
    *(param_2 + 0x1c) = *(param_2 + 0x1c) + 1;
    if ((uVar1 & 0x10020) == 0) {
        _printk(0x800361b,"_reserve_join_fence",0x330,param_3,param_4,param_5,param_6);
    }
    return;
}


// ===== sym._fence_found.bc17693702868612c84a1a00a4b4bed1.cfi_jt @ 0x0800a680 (size 8) =====

void sym._fence_found.bc17693702868612c84a1a00a4b4bed1.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,ulong param_4,ulong param_5,uint param_6)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10020) == 0) {
        _printk(0x8006d62,"_fence_found",0x33e,param_3,param_4,param_5,param_6);
    }
    return;
}


// ===== sym.__typeid__ZTSFbP12msm_hw_fenceyyE_global_addr @ 0x0800a688 (size 8) =====

bool sym.__typeid__ZTSFbP12msm_hw_fenceyyE_global_addr(int64_t param_1,int64_t param_2,int64_t param_3)

{
    if (*(param_1 + 8) == param_2) {
        return *(param_1 + 0x10) == param_3;
    }
    return false;
}


// ===== sym._is_hw_fence_free.bc17693702868612c84a1a00a4b4bed1.cfi_jt @ 0x0800a690 (size 8) =====

bool sym._is_hw_fence_free.bc17693702868612c84a1a00a4b4bed1.cfi_jt(int *param_1)

{
    return *param_1 == 0;
}


// ===== sym._hw_fence_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt @ 0x0800a698 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080107cc)
//WARNING: Removing unreachable block (ram,0x08010724)
//WARNING: Removing unreachable block (ram,0x08010684)
//WARNING: Removing unreachable block (ram,0x080106d0)
//WARNING: Removing unreachable block (ram,0x08010774)
//WARNING: Removing unreachable block (ram,0x08010870)
//WARNING: Removing unreachable block (ram,0x0801062c)

uint64_t sym._hw_fence_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt(uint64_t param_1,int64_t param_2)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    uint64_t unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iStack_40 = 0x7f;
    if (param_2 != 0) {
        iVar3 = gh_dbl_read_and_clean(*(param_2 + 0x198),&iStack_40,0);
        iVar7 = iStack_40;
        if (iVar3 == 0) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                uVar2 = *(param_2 + 400);
                uVar5 = sym.hw_fence_get_qtime(param_2);
                _printk(0x8007321,"_hw_fence_cb",0x131,uVar2,param_1 & 0xffffffff,iVar7,uVar5);
            }
            param_1 = sym.hw_fence_utils_process_doorbell_mask(param_2,iStack_40);
        }
        else {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar9 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar10 | unaff_x30;
            }
            param_1 = _printk(0x8004b52,"_hw_fence_cb",300,uVar9,iVar3);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return param_1;
    }
    piVar6 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_utils_alloc_mem;
    iVar11 = *piVar6;
    iVar7 = of_find_compatible_node(*(iVar11 + 0x2f0),0,"qcom,msm-hw-fence-mem");
    if (iVar7 == 0) {
        _printk(0x8006abf,"hw_fence_utils_alloc_mem",0x1c4,~(-1L << (_simple_open & 0x3f)) & 0x8010478,
                "qcom,msm-hw-fence-mem");
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = of_property_read_variable_u32_array(iVar7,"gunyah-label",piVar6 + 0x2d,1,0);
        if (uVar4 < 0) {
            _printk(0x8005059,"hw_fence_utils_alloc_mem",0x1ca,~(-1L << (_simple_open & 0x3f)) & 0x8010478,uVar4);
        }
        else {
            iVar8 = of_parse_phandle(iVar7,"shared-buffer",0);
            if (iVar8 == 0) {
                _printk(0x8007ba6,"hw_fence_utils_alloc_mem",0x1d0,~(-1L << (_simple_open & 0x3f)) & 0x8010478);
                uVar4 = 0xfffffff4;
            }
            else {
                iVar3 = of_address_to_resource(iVar8,0,piVar6 + 0x20);
                if (iVar3 == 0) {
                    iVar11 = devm_ioremap_wc(iVar11,piVar6[0x20],(piVar6[0x21] - piVar6[0x20]) + 1);
                    piVar6[0x1f] = iVar11;
                    if (iVar11 == 0) {
                        _printk(0x8007981,"hw_fence_utils_alloc_mem",0x1de,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8010478);
                        uVar4 = 0xfffffffa;
                    }
                    else {
                        uVar9 = (piVar6[0x21] - piVar6[0x20]) + 1;
                        piVar6[0x2c] = uVar9;
                        if (uVar9 < *(piVar6 + 0x18c)) {
                            _printk(0x80072b4,"hw_fence_utils_alloc_mem",0x1e4,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8010478,uVar9,*(piVar6 + 0x18c));
                            uVar4 = 0xfffffff4;
                        }
                        else {
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                                _printk(0x8006339,"hw_fence_utils_alloc_mem",0x1ea);
                                iVar11 = piVar6[0x1f];
                                uVar9 = piVar6[0x2c];
                            }
                            __memset_io(iVar11,0,uVar9);
                            puVar1 = piVar6 + 0x16c;
                            uVar4 = of_property_read_variable_u32_array(iVar7,"peer-name",puVar1,1,0);
                            if (uVar4 < 0) {
                                *puVar1 = 0;
                            }
                            piVar6[0x2e] = sym.hw_fence_rm_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt;
                            *(piVar6 + 0x30) = 0x7fffffff;
                            iVar3 = gh_rm_register_notifier(piVar6 + 0x2e);
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                                _printk(0x8002cbf,"hw_fence_utils_alloc_mem",0x1f7,uVar4 & uVar4 >> 0x1f,*puVar1,
                                        iVar3);
                            }
                            if (iVar3 == 0) {
                                uVar4 = 0;
                            }
                            else {
                                _printk(0x800303a,"hw_fence_utils_alloc_mem",0x1f9,
                                        ~(-1L << (_simple_open & 0x3f)) & 0x8010478,iVar3);
                                uVar4 = 0xfffffdfb;
                            }
                        }
                    }
                }
                else {
                    _printk(0x8007be5,"hw_fence_utils_alloc_mem",0x1d7,~(-1L << (_simple_open & 0x3f)) & 0x8010478,
                            iVar3);
                    uVar4 = 0xffffffea;
                }
            }
        }
    }
    return uVar4;
}


// ===== sym.hw_fence_dbg_get_driver_name.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a6a0 (size 8) =====

int64_t sym.hw_fence_dbg_get_driver_name.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1)

{
    return param_1 + 0x40;
}


// ===== sym.hw_fence_dbg_get_driver_name.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a6a8 (size 8) =====

int64_t sym.hw_fence_dbg_get_driver_name.cbd65a651d105b5a53f49d19393c623c.cfi_jt(int64_t param_1)

{
    return param_1 + 0x40;
}


// ===== sym.hw_fence_dbg_get_timeline_name.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a6b0 (size 8) =====

int64_t sym.hw_fence_dbg_get_timeline_name.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1)

{
    return param_1 + 0x40;
}


// ===== sym.hw_fence_dbg_get_timeline_name.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a6b8 (size 8) =====

int64_t sym.hw_fence_dbg_get_timeline_name.cbd65a651d105b5a53f49d19393c623c.cfi_jt(int64_t param_1)

{
    return param_1 + 0x40;
}


// ===== sym.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt @ 0x0800a6c0 (size 8) =====

int sym.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8005635,"msm_hw_fence_probe",0x214);
    }
    if (param_1 == 0) {
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar6 | unaff_x30;
        }
        _printk(0x8002ec1,"msm_hw_fence_probe",0x217,uVar2);
        iVar4 = -0x16;
    }
    else if (reloc.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt == 0x0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10004) == 0) {
            _printk(0x80078a9,"msm_hw_fence_probe",0x21c);
        }
        iVar4 = -0x5f;
    }
    else {
        iVar4 = of_device_is_compatible(*(param_1 + 0x300),0x800531d);
        if (iVar4 == 0) {
            iVar4 = -0x16;
        }
        else {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8005635,"msm_hw_fence_probe_init",0x1f0);
            }
            piVar5 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x2d8);
            if (piVar5 == NULL) {
                iVar4 = -0xc;
                _segment.ehdr = NULL;
            }
            else {
                _segment.ehdr = piVar5;
                *(param_1 + 0xa8) = piVar5;
                *piVar5 = param_1 + 0x10;
                iVar4 = sym.hw_fence_init(piVar5);
                piVar5 = _segment.ehdr;
                if (iVar4 == 0) {
                    __mutex_init(_segment.ehdr + 0x53,"&hw_fence_drv_data->clients_register_lock",0x8000741);
                    uVar3 = _segment.ehdr;
                    uVar1 = _segment.ehdr ^ 0xffffffff;
                    *(_segment.ehdr + 1) = 1;
                    if ((uVar1 & 0x10001) == 0) {
                        _printk(0x800753d,"msm_hw_fence_probe_init",0x203);
                        uVar3 = _segment.ehdr;
                    }
                    if (((uVar3 ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x800753d,"msm_hw_fence_probe",0x225);
                    }
                    return 0;
                }
                *(param_1 + 0xa8) = 0;
                kfree(piVar5);
                _segment.ehdr = 0xfffffffffffffdfb;
                uVar6 = -1L << (_simple_open & 0x3f);
                uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar2 = uVar6 | unaff_x30;
                }
                _printk(0x8006cea,"msm_hw_fence_probe_init",0x20c,uVar2,iVar4);
            }
        }
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar6 | unaff_x30;
        }
        _printk(0x8006cea,"msm_hw_fence_probe",0x22a,uVar2,iVar4);
    }
    return iVar4;
}


// ===== sym.msm_hw_fence_remove.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt @ 0x0800a6c8 (size 8) =====

ulong sym.msm_hw_fence_remove.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8005635,"msm_hw_fence_remove",0x230);
    }
    if (param_1 == 0) {
        uVar3 = 0x8002ec1;
        uVar4 = 0x233;
    }
    else {
        _segment.ehdr = *(param_1 + 0xa8);
        if (_segment.ehdr != 0) {
            *(param_1 + 0xa8) = 0;
            kfree();
            uVar1 = _segment.ehdr ^ 0xffffffff;
            _segment.ehdr = 0xfffffffffffffdfb;
            if ((uVar1 & 0x10001) == 0) {
                _printk(0x800753d,"msm_hw_fence_remove",0x241);
            }
            return 0;
        }
        uVar3 = 0x80078dd;
        uVar4 = 0x239;
        _segment.ehdr = 0;
    }
    uVar5 = -1L << (_simple_open & 0x3f);
    uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
    if ((unaff_x30 & 0x80000000000000) != 0) {
        uVar2 = uVar5 | unaff_x30;
    }
    _printk(uVar3,"msm_hw_fence_remove",uVar4,uVar2);
    return 0xffffffea;
}


// ===== sym.hw_fence_dbg_enable_signaling.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a6d0 (size 8) =====

ulong sym.hw_fence_dbg_enable_signaling.cbd65a651d105b5a53f49d19393c623c.cfi_jt(void)

{
    return 1;
}


// ===== sym.hw_fence_dbg_enable_signaling.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a6d8 (size 8) =====

ulong sym.hw_fence_dbg_enable_signaling.d62a3c34d04a440c8d646fa43596128c.cfi_jt(void)

{
    return 1;
}


// ===== sym.__typeid__ZTSFlP11hw_sync_objmE_global_addr @ 0x0800a6e0 (size 8) =====

int64_t sym.__typeid__ZTSFlP11hw_sync_objmE_global_addr(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint64_t uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    iStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    iStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    if (param_1 != 0) {
        if (*(param_1 + 8) - 0xfU < 0xfffffff9) {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar12 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar10 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar12,*(param_1 + 8),8,0xe);
        }
        else {
            iVar5 = sym._copy_from_user_1(&uStack_a8,param_2,0x10);
            uVar12 = uStack_a8;
            if (iVar5 != 0) {
                iVar5 = -0xe;
                goto code_r0x080177f4;
            }
            if ((uStack_a8 < 0) || (iVar6 = sync_file_get_fence(uStack_a8 & 0xffffffff), iVar6 == 0)) {
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar10 = uVar11 | unaff_x30;
                }
                _printk(0x80032a8,"hw_sync_ioctl_fence_wait",0x23d,uVar10,uVar12 & 0xffffffff);
            }
            else {
                iVar5 = *(param_1 + 0x10);
                if (iVar5 != 0) {
                    iVar7 = __msecs_to_jiffies(uStack_a0 & 0xffffffff);
                    iVar4 = *(iVar5 + 0x90);
                    if (iVar7 == 0 && 0 < iVar4) {
                        iVar7 = 1;
                    }
                    if ((iVar4 < 1) && (iVar7 != 0)) {
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uStack_c8 = 0;
                        uStack_c0 = 0;
                        uStack_d0 = 0;
                        iVar8 = __msecs_to_jiffies(uStack_a0 & 0xffffffff);
                        init_wait_entry(&uStack_d0,0);
                        iVar1 = iVar5 + 0x78;
                        prepare_to_wait_event(iVar1,&uStack_d0,2);
                        iVar4 = *(iVar5 + 0x90);
                        if (iVar8 == 0 && 0 < iVar4) {
                            iVar8 = 1;
                        }
                        while ((iVar7 = iVar8, iVar4 < 1 && (iVar7 = 0, iVar8 != 0))) {
                            iVar8 = schedule_timeout(iVar8);
                            prepare_to_wait_event(iVar1,&uStack_d0,2);
                            iVar4 = *(iVar5 + 0x90);
                            if (iVar8 == 0 && 0 < iVar4) {
                                iVar8 = 1;
                            }
                        }
                        finish_wait(iVar1,&uStack_d0);
                    }
                    if (iVar7 == 0) {
                        uVar10 = -1L << (_simple_open & 0x3f);
                        uVar12 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar12 = uVar10 | unaff_x30;
                        }
                        _printk(0x800590b,"hw_sync_ioctl_fence_wait",0x24d,uVar12,uStack_a0);
                        sym.dma_fence_put_1(iVar6);
                        iVar5 = -0x6e;
                    }
                    else {
                        *(iVar5 + 0x90) = 0;
                        do {
                            iVar4 = sym.hw_fence_read_queue(*(param_1 + 0x10),&uStack_98,1);
                            if (iVar4 < 0) {
                                uVar10 = -1L << (_simple_open & 0x3f);
                                uVar12 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar12 = uVar10 | unaff_x30;
                                }
                                _printk(0x8007aae,"hw_sync_ioctl_fence_wait",0x259,uVar12,*(param_1 + 8));
                                iVar5 = iVar4;
                                goto code_r0x08017770;
                            }
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                _printk(0x8005953,"hw_sync_ioctl_fence_wait",0x25d,uStack_80,uStack_78,
                                        uStack_68 & 0xffffffff);
                            }
                            if ((iStack_90 == *(iVar6 + 0x20)) && (iStack_88 == *(iVar6 + 0x28))) {
                                piVar9 = iVar6 + 0x38;
                                goto code_r0x08017894;
                            }
                        } while (iVar4 != 0);
                        iVar5 = 0;
code_r0x08017770:
                        piVar9 = iVar6 + 0x38;
                        Hint_Prefetch(piVar9,2,0,1);
                        do {
                            iVar4 = *piVar9;
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(piVar9,0x10);
                            if (bVar3) {
                                *piVar9 = iVar4 + -1;
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        if (iVar4 == 1) {
                            DataMemoryBarrier(2,1);
                            dma_fence_release();
                        }
                        else if (iVar4 < 1) {
                            refcount_warn_saturate(piVar9,3);
                        }
                        uVar12 = -1L << (_simple_open & 0x3f);
                        if ((unaff_x30 >> 0x37 & 1) == 0) {
                            _printk(0x80032f3,"hw_sync_ioctl_fence_wait",0x268,
                                    (~uVar12 | 0xff80000000000000) & unaff_x30);
                            uVar12 = (~(-1L << (_simple_open & 0x3f)) | 0xff80000000000000U) & unaff_x30;
                        }
                        else {
                            _printk(0x80032f3,"hw_sync_ioctl_fence_wait",0x268,uVar12 | unaff_x30);
                            uVar12 = -1L << (_simple_open & 0x3f) | unaff_x30;
                        }
                        _printk(0x80055d0,"hw_sync_ioctl_fence_wait",0x26a,uVar12,iStack_90,iStack_88,
                                *(iVar6 + 0x20),*(iVar6 + 0x28));
                    }
                    goto code_r0x080177f4;
                }
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar10 = uVar11 | unaff_x30;
                }
                _printk(0x8004054,"hw_sync_ioctl_fence_wait",0x243,uVar10,uVar12 & 0xffffffff);
                sym.dma_fence_put_1(iVar6);
            }
        }
    }
    iVar5 = -0x16;
code_r0x080177f4:
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_58) {
        piVar9 = __stack_chk_fail();
code_r0x08017894:
        Hint_Prefetch(piVar9,2,0,1);
        do {
            iVar4 = *piVar9;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
                *piVar9 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
            iVar5 = 0;
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar9,3);
            iVar5 = 0;
        }
        else {
            iVar5 = 0;
        }
    }
    return iVar5;
}


// ===== sym.hw_sync_ioctl_create_fence.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a6e8 (size 8) =====

int64_t sym.hw_sync_ioctl_create_fence.d62a3c34d04a440c8d646fa43596128c.cfi_jt(ulong *param_1,int64_t param_2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint *puVar5;
    int *arg1;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    uint *unaff_x20;
    ulong *unaff_x21;
    int *unaff_x22;
    uint64_t unaff_x30;
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong *puStack_60;
    int *piStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    piStack_58 = NULL;
    uStack_50 = 0;
    uStack_68 = 0;
    puStack_60 = NULL;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (param_1 != NULL) {
        unaff_x21 = param_1;
        if (*(param_1 + 1) - 0xfU < 0xfffffff9) {
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar9 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar6,*(param_1 + 1),8,0xe);
        }
        else if ((param_1[2] == 0) || (0xfffffffffffff000 < param_1[2])) {
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar9 | unaff_x30;
            }
            _printk(0x800325c,"hw_sync_ioctl_create_fence",0xec,uVar6);
        }
        else {
            iVar4 = sym._copy_from_user_1(&uStack_80,param_2,0x18);
            if (iVar4 != 0) {
                param_2 = -0xe;
                goto code_r0x080161c4;
            }
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,4);
            if (puVar5 == NULL) {
                param_2 = -0xc;
                goto code_r0x080161c4;
            }
            arg1 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
            unaff_x20 = puVar5;
            if (arg1 == NULL) {
                kfree(puVar5);
                param_2 = -0xc;
                goto code_r0x080161c4;
            }
            snprintf(arg1 + 0x10,0x40,"hwfence:id:%d:ctx=%lu:seqno:%lu",*(param_1 + 1),*param_1,uStack_80);
            uVar7 = *param_1;
            *puVar5 = 0;
            dma_fence_init(arg1,obj.hw_fence_dbg_ops_1,puVar5,uVar7,uStack_80);
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8004c0b,"hw_sync_ioctl_create_fence",0x105,*(param_1 + 1),*param_1,uStack_80);
            }
            puStack_60 = &uStack_88;
            piStack_58 = arg1;
            iVar3 = sym.msm_hw_fence_create(param_1[2],&uStack_68);
            unaff_x22 = arg1;
            if (iVar3 == 0) {
                *(arg1 + 0x20) = param_1[2];
                if (uStack_78 != '\0') {
                    uVar7 = dma_fence_context_alloc(1);
                    *param_1 = uVar7;
                }
                uVar6 = get_unused_fd_flags(0);
                unaff_x20 = uVar6 & 0xffffffff;
                if (-1 < uVar6) {
                    unaff_x21 = sync_file_create(arg1);
                    if (unaff_x21 != NULL) {
                        unaff_x22 = arg1 + 0xe;
                        noname_1 = extraout_q0;
                        goto code_r0x08016344;
                    }
                    uVar9 = -1L << (_simple_open & 0x3f);
                    uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar6 = uVar9 | unaff_x30;
                    }
                    _printk(0x80045a8,"hw_sync_ioctl_create_fence",0x122,uVar6,unaff_x20);
                    sym.dma_fence_put_1(arg1);
                    param_2 = -0x16;
                    goto code_r0x080163f4;
                }
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar9 = uVar8 | unaff_x30;
                }
                _printk(0x8006510,"hw_sync_ioctl_create_fence",0x11b,uVar9,*(param_1 + 1));
                sym.dma_fence_put_1(arg1);
                param_2 = uVar6;
                goto code_r0x080161c4;
            }
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar9 | unaff_x30;
            }
            _printk(0x80073e8,"hw_sync_ioctl_create_fence",0x10d,uVar6,*(param_1 + 1),*param_1,uStack_80);
            sym.dma_fence_put_1(arg1);
        }
    }
    param_2 = -0x16;
code_r0x080161c4:
    while( true ) {
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) break;
        noname_1 = __stack_chk_fail();
code_r0x08016344:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            iVar3 = *unaff_x22;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            noname_1 = dma_fence_release(unaff_x22);
        }
        else if (iVar3 < 1) {
            noname_1 = refcount_warn_saturate(unaff_x22,3);
        }
        uStack_78 = CONCAT44(unaff_x20,uStack_78);
        uStack_70 = uStack_88;
        iVar4 = sym._copy_to_user_1(param_2,noname_1,0x18);
        if (iVar4 == 0) {
            fd_install(unaff_x20 & 0xffffffff,*unaff_x21);
            param_2 = 0;
        }
        else {
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                iVar3 = *unaff_x22;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = iVar3 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release(unaff_x22);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(unaff_x22,3);
            }
            fput(*unaff_x21);
            param_2 = -0xe;
            param_1 = unaff_x21;
            arg1 = unaff_x22;
code_r0x080163f4:
            put_unused_fd(unaff_x20 & 0xffffffff);
            unaff_x21 = param_1;
            unaff_x22 = arg1;
        }
    }
    return param_2;
}


// ===== sym.hw_sync_ioctl_reg_client.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a6f0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08016324)
//WARNING: Removing unreachable block (ram,0x08016270)
//WARNING: Removing unreachable block (ram,0x08015f00)
//WARNING: Removing unreachable block (ram,0x080162c8)
//WARNING: Removing unreachable block (ram,0x080161b8)
//WARNING: Removing unreachable block (ram,0x0801616c)

int64_t sym.hw_sync_ioctl_reg_client.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int *arg1;
    int *piVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    code *pcVar12;
    int *piVar13;
    int *unaff_x22;
    uint64_t unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar14 [16];
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong *puStack_e0;
    int *piStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t *puStack_60;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_3c = 0;
    iVar4 = sym._copy_from_user_1(&uStack_3c,param_2,4);
    if (iVar4 == 0) {
        if (param_1 != 0) {
            uVar8 = uStack_3c;
            if (0xfffffff8 < uStack_3c - 0xf) goto code_r0x08015d8c;
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar10 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar10 = uVar9 | unaff_x30;
            }
            _printk(0x800583f,"_get_client_id",0x9c,uVar10,uVar8,8,0xe);
        }
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0xfffffff2;
    }
code_r0x08015d8c:
    uStack_3c = uVar8;
    if (&uStack_3c < 0xfffffffffffff001) {
        if (*(param_1 + 0x10) == 0) {
            *(param_1 + 8) = uStack_3c;
            uVar8 = sym.msm_hw_fence_register(uVar8,param_1 + 0x18);
            iVar4 = -0x16;
            if (uVar8 < 0xfffffffffffff001 && uVar8 != 0) {
                iVar4 = 0;
            }
            *(param_1 + 0x10) = uVar8;
        }
        else {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar8 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar10 | unaff_x30;
            }
            _printk(0x8003e77,"hw_sync_ioctl_reg_client",0xc9,uVar8);
            iVar4 = -0x16;
        }
    }
    else {
        iVar4 = uStack_3c;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    auVar14 = __stack_chk_fail(iVar4);
    *extraout_x18 = sym.hw_sync_ioctl_unreg_client;
    pcStack_68 = sym.hw_sync_ioctl_unreg_client;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    pcVar12 = sym.hw_sync_ioctl_unreg_client;
    iStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    puStack_60 = &uStack_3c;
    iVar4 = sym._copy_from_user_1(&iStack_7c,auVar14._8_8_,4);
    if (iVar4 == 0) {
        if (auVar14._0_8_ != 0) {
            if (0xfffffff8 < iStack_7c - 0xfU) goto code_r0x08015f0c;
            _printk(0x800583f,"_get_client_id",0x9c,~(-1L << (_simple_open & 0x3f)) & 0x8015e54,iStack_7c,8,0xe);
        }
        iStack_7c = -0x16;
    }
    else {
        iStack_7c = -0xe;
    }
code_r0x08015f0c:
    iVar3 = iStack_7c;
    if (&iStack_7c < 0xfffffffffffff001) {
        iVar3 = sym.msm_hw_fence_deregister(*(auVar14._0_8_ + 0x10));
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    auVar14 = __stack_chk_fail();
    iVar11 = auVar14._8_8_;
    piVar13 = auVar14._0_8_;
    *extraout_x18_00 = sym.hw_sync_ioctl_create_fence;
    pcStack_b8 = sym.hw_sync_ioctl_create_fence;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    piStack_d8 = NULL;
    uStack_d0 = 0;
    uStack_e8 = 0;
    puStack_e0 = NULL;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    piVar6 = &iStack_7c;
    ppuStack_c0 = &puStack_70;
    if (piVar13 != NULL) {
        piVar6 = piVar13;
        if (piVar13[2] - 0xfU < 0xfffffff9) {
            _printk(0x800583f,"_is_valid_client",0x89,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,piVar13[2],8,0xe
                   );
        }
        else if ((*(piVar13 + 4) == 0) || (0xfffffffffffff000 < *(piVar13 + 4))) {
            _printk(0x800325c,"hw_sync_ioctl_create_fence",0xec,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c);
        }
        else {
            iVar4 = sym._copy_from_user_1(&uStack_100,iVar11,0x18);
            if (iVar4 != 0) {
                iVar11 = -0xe;
                goto code_r0x080161c4;
            }
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            pcVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,4);
            if (pcVar5 == NULL) {
                iVar11 = -0xc;
                goto code_r0x080161c4;
            }
            arg1 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
            pcVar12 = pcVar5;
            if (arg1 == NULL) {
                kfree(pcVar5);
                iVar11 = -0xc;
                goto code_r0x080161c4;
            }
            snprintf(arg1 + 0x10,0x40,"hwfence:id:%d:ctx=%lu:seqno:%lu",piVar13[2],*piVar13,uStack_100);
            uVar7 = *piVar13;
            *pcVar5 = 0;
            dma_fence_init(arg1,obj.hw_fence_dbg_ops_1,pcVar5,uVar7,uStack_100);
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8004c0b,"hw_sync_ioctl_create_fence",0x105,piVar13[2],*piVar13,uStack_100);
            }
            puStack_e0 = &uStack_108;
            piStack_d8 = arg1;
            iVar3 = sym.msm_hw_fence_create(*(piVar13 + 4),&uStack_e8);
            unaff_x22 = arg1;
            if (iVar3 == 0) {
                *(arg1 + 0x20) = *(piVar13 + 4);
                if (uStack_f8 != '\0') {
                    uVar7 = dma_fence_context_alloc(1);
                    *piVar13 = uVar7;
                }
                uVar8 = get_unused_fd_flags(0);
                pcVar12 = uVar8 & 0xffffffff;
                if (-1 < uVar8) {
                    piVar6 = sync_file_create(arg1);
                    if (piVar6 == NULL) {
                        _printk(0x80045a8,"hw_sync_ioctl_create_fence",0x122,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,pcVar12);
                        sym.dma_fence_put_1(arg1);
                        iVar11 = -0x16;
                        goto code_r0x080163f4;
                    }
                    unaff_x22 = arg1 + 0xe;
                    auVar14 = extraout_q0;
                    goto code_r0x08016344;
                }
                _printk(0x8006510,"hw_sync_ioctl_create_fence",0x11b,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,
                        piVar13[2]);
                sym.dma_fence_put_1(arg1);
                iVar11 = uVar8;
                goto code_r0x080161c4;
            }
            _printk(0x80073e8,"hw_sync_ioctl_create_fence",0x10d,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,
                    piVar13[2],*piVar13,uStack_100);
            sym.dma_fence_put_1(arg1);
        }
    }
    iVar11 = -0x16;
code_r0x080161c4:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_c8) {
        auVar14 = __stack_chk_fail();
code_r0x08016344:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            iVar3 = *unaff_x22;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            auVar14 = dma_fence_release(unaff_x22);
        }
        else if (iVar3 < 1) {
            auVar14 = refcount_warn_saturate(unaff_x22,3);
        }
        uStack_f8 = CONCAT44(pcVar12,uStack_f8);
        uStack_f0 = uStack_108;
        iVar4 = sym._copy_to_user_1(iVar11,auVar14,0x18);
        if (iVar4 == 0) {
            fd_install(pcVar12 & 0xffffffff,*piVar6);
            iVar11 = 0;
        }
        else {
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                iVar3 = *unaff_x22;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = iVar3 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release(unaff_x22);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(unaff_x22,3);
            }
            fput(*piVar6);
            iVar11 = -0xe;
            piVar13 = piVar6;
            arg1 = unaff_x22;
code_r0x080163f4:
            put_unused_fd(pcVar12 & 0xffffffff);
            piVar6 = piVar13;
            unaff_x22 = arg1;
        }
    }
    return iVar11;
}


// ===== sym.hw_sync_ioctl_destroy_fence_array.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a6f8 (size 8) =====

void sym.hw_sync_ioctl_destroy_fence_array.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int iVar11;
    int extraout_w9;
    uint64_t *in_x18;
    uint64_t unaff_x19;
    uint64_t unaff_x20;
    int *unaff_x21;
    int64_t unaff_x22;
    uint64_t unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
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
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    iVar7 = unaff_x22;
    if (param_1 == 0) {
        uVar6 = 0xffffffffffffffea;
    }
    else {
        unaff_x20 = unaff_x30;
        if (*(param_1 + 8) - 0xfU < 0xfffffff9) {
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar4 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar4 = uVar9 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar4,*(param_1 + 8),8,0xe);
            uVar6 = 0xffffffffffffffea;
        }
        else {
            iVar5 = sym._copy_from_user_1(&uStack_a0,param_2,0x68);
            if (iVar5 == 0) {
                unaff_x19 = uStack_40 & 0xffffffff;
                if ((-1 < uStack_40) && (iVar7 = sync_file_get_fence(uStack_40 & 0xffffffff), iVar7 != 0)) {
                    unaff_x21 = iVar7 + 0x38;
                    iVar11 = 1;
                    goto code_r0x08016fdc;
                }
                uVar6 = 0x80032a8;
                uVar4 = unaff_x30 & 0x80000000000000;
                uVar8 = 0x1d0;
                goto code_r0x08016f40;
            }
            uVar6 = 0xfffffffffffffff2;
        }
    }
    while( true ) {
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(uVar6);
        unaff_x30 = unaff_x20;
        iVar11 = extraout_w9;
code_r0x08016fdc:
        Hint_Prefetch(unaff_x21,2,0,1);
        do {
            iVar1 = *unaff_x21;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x21,0x10);
            if (bVar3) {
                *unaff_x21 = iVar1 - iVar11;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release(unaff_x21);
        }
        else if (iVar1 < 1) {
            refcount_warn_saturate(unaff_x21,3);
        }
        if (*(iVar7 + 8) == dma_fence_array_ops) {
            Hint_Prefetch(unaff_x21,2,0,1);
            do {
                iVar11 = *unaff_x21;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(unaff_x21,0x10);
                if (bVar3) {
                    *unaff_x21 = iVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar11 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release(unaff_x21);
            }
            else if (iVar11 < 1) {
                refcount_warn_saturate(unaff_x21,3);
            }
            uVar6 = 0;
            unaff_x20 = unaff_x30;
        }
        else {
            uVar6 = 0x8004e6f;
            uVar4 = unaff_x30 & 0x80000000000000;
            uVar8 = 0x1d9;
            unaff_x22 = iVar7;
code_r0x08016f40:
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar9 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if (uVar4 != 0) {
                uVar9 = uVar10 | unaff_x30;
            }
            _printk(uVar6,"hw_sync_ioctl_destroy_fence_array",uVar8,uVar9,unaff_x19 & 0xffffffff);
            uVar6 = 0xffffffffffffffea;
            unaff_x20 = unaff_x30;
            iVar7 = unaff_x22;
        }
    }
    return;
}


// ===== sym.hw_sync_ioctl_reg_for_wait.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a700 (size 8) =====

void sym.hw_sync_ioctl_reg_for_wait.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    uint64_t uVar8;
    int iVar9;
    int extraout_w9;
    uint64_t *in_x18;
    uint64_t unaff_x19;
    uint64_t unaff_x30;
    int iStack_34;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iStack_34 = 0;
    if (param_1 == 0) {
        iVar5 = -0x16;
    }
    else {
        unaff_x19 = unaff_x30;
        if (*(param_1 + 8) - 0xfU < 0xfffffff9) {
            uVar8 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar8 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar6,*(param_1 + 8),8,0xe);
            iVar5 = -0x16;
        }
        else {
            iVar5 = sym._copy_from_user_1(&iStack_34,param_2,4);
            if (iVar5 == 0) {
                if (iStack_34 < 0) {
                    iStack_30 = 0;
                }
                else {
                    iStack_30 = sync_file_get_fence(iStack_34);
                    if (iStack_30 != 0) {
                        uVar6 = sym.msm_hw_fence_wait_update_v2(*(param_1 + 0x10),&iStack_30,0,0);
                        unaff_x19 = uVar6 & 0xffffffff;
                        if (iStack_30 == 0) goto code_r0x080171ac;
                        piVar7 = iStack_30 + 0x38;
                        iVar9 = 1;
                        goto code_r0x080171ec;
                    }
                }
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar6 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar6 = uVar8 | unaff_x30;
                }
                _printk(0x80032a8,"hw_sync_ioctl_reg_for_wait",0x1f5,uVar6,iStack_34);
                iVar5 = -0x16;
            }
            else {
                iVar5 = -0xe;
            }
        }
    }
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_28) {
        piVar7 = __stack_chk_fail(iVar5);
        iVar9 = extraout_w9;
code_r0x080171ec:
        Hint_Prefetch(piVar7,2,0,1);
        do {
            iVar1 = *piVar7;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
                *piVar7 = iVar1 - iVar9;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar1 < 1) {
            refcount_warn_saturate(piVar7,3);
        }
code_r0x080171ac:
        iVar5 = unaff_x19;
    }
    return;
}


// ===== sym.hw_sync_ioctl_reset_client.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a708 (size 8) =====

int64_t sym.hw_sync_ioctl_reset_client.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    if (param_1 == 0) {
        iVar4 = -0x16;
    }
    else if (*(param_1 + 8) - 0xfU < 0xfffffff9) {
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar5 | unaff_x30;
        }
        _printk(0x800583f,"_is_valid_client",0x89,uVar1,*(param_1 + 8),8,0xe);
        iVar4 = -0x16;
    }
    else if ((*(param_1 + 0x10) == 0) || (0xfffffffffffff000 < *(param_1 + 0x10))) {
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar5 | unaff_x30;
        }
        _printk(0x8002b08,"hw_sync_ioctl_reset_client",0x277,uVar1);
        iVar4 = -0x16;
    }
    else {
        iVar4 = sym._copy_from_user_1(&uStack_30,param_2,8);
        if (iVar4 == 0) {
            iVar3 = sym.msm_hw_fence_reset_client(*(param_1 + 0x10),uStack_30 >> 0x20);
            if (iVar3 == 0) {
                iVar4 = 0;
            }
            else {
                uVar5 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar5 | unaff_x30;
                }
                _printk(0x8004ea7,"hw_sync_ioctl_reset_client",0x280,uVar1);
                iVar4 = iVar3;
            }
        }
        else {
            iVar4 = -0xe;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail(iVar4);
    return iVar4 + 0x40;
}


// ===== sym.hw_sync_ioctl_fence_signal.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a710 (size 8) =====

void sym.hw_sync_ioctl_fence_signal.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t uVar6;
    uint64_t unaff_x30;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    if (param_1 == 0) {
        iVar4 = -0x16;
    }
    else if (*(param_1 + 8) - 0xfU < 0xfffffff9) {
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar6 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar6 = uVar5 | unaff_x30;
        }
        _printk(0x800583f,"_is_valid_client",0x89,uVar6,*(param_1 + 8),8,0xe);
        iVar4 = -0x16;
    }
    else {
        uVar6 = *(param_1 + 0x10);
        if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
            uVar5 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar5 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar5 | unaff_x30;
            }
            _printk(0x80058c2,"hw_sync_ioctl_fence_signal",0x20a,uVar6);
            iVar4 = -0x16;
        }
        else {
            iVar4 = sym._copy_from_user_1(&iStack_48,param_2,0x10);
            if (iVar4 == 0) {
                iVar3 = sym.msm_hw_fence_update_txq(*(param_1 + 0x10),iStack_48,0,uStack_40 & 0xffffffff);
                if (iVar3 == 0) {
                    if (0xe < *(param_1 + 8)) goto code_r0x08017450;
                    iVar3 = sym.msm_hw_fence_trigger_signal
                                      (*(param_1 + 0x10),*(uVar6 + 0x6c),*(uVar6 + 0x70),
                                       *(*(param_1 + 8) * 0xc + 0x8008f70));
                    if (iVar3 == 0) {
                        iVar4 = 0;
                    }
                    else {
                        uVar5 = -1L << (_simple_open & 0x3f);
                        uVar6 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar6 = uVar5 | unaff_x30;
                        }
                        _printk(0x8005b76,"hw_sync_ioctl_fence_signal",0x225,uVar6);
                        iVar4 = iVar3;
                    }
                }
                else {
                    uVar5 = -1L << (_simple_open & 0x3f);
                    uVar6 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar6 = uVar5 | unaff_x30;
                    }
                    _printk(0x8002abe,"hw_sync_ioctl_fence_signal",0x219,uVar6,*(param_1 + 8));
                    iVar4 = iVar3;
                }
            }
            else {
                iVar4 = -0xe;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08017450:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8017454);
    (*pcVar2)();
}


// ===== sym.hw_sync_ioctl_unreg_client.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a718 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080162c8)
//WARNING: Removing unreachable block (ram,0x080161b8)
//WARNING: Removing unreachable block (ram,0x08016324)
//WARNING: Removing unreachable block (ram,0x08016270)
//WARNING: Removing unreachable block (ram,0x0801616c)

int64_t sym.hw_sync_ioctl_unreg_client.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint *puVar5;
    int *arg1;
    uint64_t uVar6;
    int *piVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg2;
    int *piVar10;
    int *unaff_x22;
    uint *unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar11 [16];
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong *puStack_a0;
    int *piStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_3c = 0;
    iVar4 = sym._copy_from_user_1(&iStack_3c,param_2,4);
    if (iVar4 == 0) {
        if (param_1 != 0) {
            if (0xfffffff8 < iStack_3c - 0xfU) goto code_r0x08015f0c;
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar9 | unaff_x30;
            }
            _printk(0x800583f,"_get_client_id",0x9c,uVar6,iStack_3c,8,0xe);
        }
        iStack_3c = -0x16;
    }
    else {
        iStack_3c = -0xe;
    }
code_r0x08015f0c:
    iVar3 = iStack_3c;
    if (&iStack_3c < 0xfffffffffffff001) {
        iVar3 = sym.msm_hw_fence_deregister(*(param_1 + 0x10));
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    auVar11 = __stack_chk_fail();
    arg2 = auVar11._8_8_;
    piVar10 = auVar11._0_8_;
    *extraout_x18 = sym.hw_sync_ioctl_create_fence;
    pcStack_78 = sym.hw_sync_ioctl_create_fence;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    piStack_98 = NULL;
    uStack_90 = 0;
    uStack_a8 = 0;
    puStack_a0 = NULL;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    piVar7 = &iStack_3c;
    puStack_80 = &stack0xffffffffffffffd0;
    if (piVar10 != NULL) {
        piVar7 = piVar10;
        if (piVar10[2] - 0xfU < 0xfffffff9) {
            _printk(0x800583f,"_is_valid_client",0x89,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,piVar10[2],8,0xe
                   );
        }
        else if ((*(piVar10 + 4) == 0) || (0xfffffffffffff000 < *(piVar10 + 4))) {
            _printk(0x800325c,"hw_sync_ioctl_create_fence",0xec,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c);
        }
        else {
            iVar4 = sym._copy_from_user_1(&uStack_c0,arg2,0x18);
            if (iVar4 != 0) {
                arg2 = -0xe;
                goto code_r0x080161c4;
            }
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,4);
            if (puVar5 == NULL) {
                arg2 = -0xc;
                goto code_r0x080161c4;
            }
            arg1 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
            unaff_x30 = puVar5;
            if (arg1 == NULL) {
                kfree(puVar5);
                arg2 = -0xc;
                goto code_r0x080161c4;
            }
            snprintf(arg1 + 0x10,0x40,"hwfence:id:%d:ctx=%lu:seqno:%lu",piVar10[2],*piVar10,uStack_c0);
            uVar8 = *piVar10;
            *puVar5 = 0;
            dma_fence_init(arg1,obj.hw_fence_dbg_ops_1,puVar5,uVar8,uStack_c0);
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8004c0b,"hw_sync_ioctl_create_fence",0x105,piVar10[2],*piVar10,uStack_c0);
            }
            puStack_a0 = &uStack_c8;
            piStack_98 = arg1;
            iVar3 = sym.msm_hw_fence_create(*(piVar10 + 4),&uStack_a8);
            unaff_x22 = arg1;
            if (iVar3 == 0) {
                *(arg1 + 0x20) = *(piVar10 + 4);
                if (uStack_b8 != '\0') {
                    uVar8 = dma_fence_context_alloc(1);
                    *piVar10 = uVar8;
                }
                uVar6 = get_unused_fd_flags(0);
                unaff_x30 = uVar6 & 0xffffffff;
                if (-1 < uVar6) {
                    piVar7 = sync_file_create(arg1);
                    if (piVar7 == NULL) {
                        _printk(0x80045a8,"hw_sync_ioctl_create_fence",0x122,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,unaff_x30);
                        sym.dma_fence_put_1(arg1);
                        arg2 = -0x16;
                        goto code_r0x080163f4;
                    }
                    unaff_x22 = arg1 + 0xe;
                    auVar11 = extraout_q0;
                    goto code_r0x08016344;
                }
                _printk(0x8006510,"hw_sync_ioctl_create_fence",0x11b,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,
                        piVar10[2]);
                sym.dma_fence_put_1(arg1);
                arg2 = uVar6;
                goto code_r0x080161c4;
            }
            _printk(0x80073e8,"hw_sync_ioctl_create_fence",0x10d,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,
                    piVar10[2],*piVar10,uStack_c0);
            sym.dma_fence_put_1(arg1);
        }
    }
    arg2 = -0x16;
code_r0x080161c4:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_88) {
        auVar11 = __stack_chk_fail();
code_r0x08016344:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            iVar3 = *unaff_x22;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            auVar11 = dma_fence_release(unaff_x22);
        }
        else if (iVar3 < 1) {
            auVar11 = refcount_warn_saturate(unaff_x22,3);
        }
        uStack_b8 = CONCAT44(unaff_x30,uStack_b8);
        uStack_b0 = uStack_c8;
        iVar4 = sym._copy_to_user_1(arg2,auVar11,0x18);
        if (iVar4 == 0) {
            fd_install(unaff_x30 & 0xffffffff,*piVar7);
            arg2 = 0;
        }
        else {
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                iVar3 = *unaff_x22;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = iVar3 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release(unaff_x22);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(unaff_x22,3);
            }
            fput(*piVar7);
            arg2 = -0xe;
            piVar10 = piVar7;
            arg1 = unaff_x22;
code_r0x080163f4:
            put_unused_fd(unaff_x30 & 0xffffffff);
            piVar7 = piVar10;
            unaff_x22 = arg1;
        }
    }
    return arg2;
}


// ===== sym.hw_sync_ioctl_destroy_fence.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a720 (size 8) =====

void sym.hw_sync_ioctl_destroy_fence.d62a3c34d04a440c8d646fa43596128c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    int iVar9;
    int extraout_w9;
    ulong *in_x18;
    int *unaff_x19;
    int *unaff_x30;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    if (param_1 == 0) {
        uVar7 = 0xffffffffffffffea;
    }
    else {
        unaff_x19 = unaff_x30;
        if (*(param_1 + 8) - 0xfU < 0xfffffff9) {
            uVar8 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar8 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar1,*(param_1 + 8),8,0xe);
            uVar7 = 0xffffffffffffffea;
        }
        else {
            iVar6 = sym._copy_from_user_1(&uStack_40,param_2,0x18);
            if (iVar6 == 0) {
                uVar5 = uStack_38._4_4_;
                if ((-1 < uStack_38) && (iVar6 = sync_file_get_fence(uStack_38._4_4_), iVar6 != 0)) {
                    unaff_x19 = iVar6 + 0x38;
                    iVar9 = 1;
                    goto code_r0x0801664c;
                }
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar8 | unaff_x30;
                }
                _printk(0x8005e41,"hw_sync_ioctl_destroy_fence",0x14d,uVar1,uVar5);
                uVar7 = 0xffffffffffffffea;
            }
            else {
                uVar7 = 0xfffffffffffffff2;
            }
        }
    }
    while( true ) {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_28) break;
        __stack_chk_fail(uVar7);
        iVar9 = extraout_w9;
code_r0x0801664c:
        Hint_Prefetch(unaff_x19,2,0,1);
        do {
            iVar2 = *unaff_x19;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x19,0x10);
            if (bVar4) {
                *unaff_x19 = iVar2 - iVar9;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release(unaff_x19);
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(unaff_x19,3);
        }
        Hint_Prefetch(unaff_x19,2,0,1);
        do {
            iVar9 = *unaff_x19;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x19,0x10);
            if (bVar4) {
                *unaff_x19 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar9 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release(unaff_x19);
        }
        else if (iVar9 < 1) {
            refcount_warn_saturate(unaff_x19,3);
        }
        uVar7 = 0;
    }
    return;
}


// ===== sym.hw_sync_ioctl_create_fence_array.d62a3c34d04a440c8d646fa43596128c.cfi_jt @ 0x0800a728 (size 8) =====

int64_t sym.hw_sync_ioctl_create_fence_array.d62a3c34d04a440c8d646fa43596128c.cfi_jt(ulong *param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *puVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    int64_t *unaff_x19;
    uint64_t uVar12;
    int iVar13;
    int64_t *piVar14;
    uint64_t unaff_x30;
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    if (param_1 == NULL) goto code_r0x08016b68;
    if (*(param_1 + 1) - 0xfU < 0xfffffff9) {
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar12 = uVar11 | unaff_x30;
        }
        _printk(0x800583f,"_is_valid_client",0x89,uVar12,*(param_1 + 1),8,0xe);
        goto code_r0x08016b68;
    }
    if ((param_1[2] == 0) || (0xfffffffffffff000 < param_1[2])) {
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar12 = uVar11 | unaff_x30;
        }
        _printk(0x800325c,"hw_sync_ioctl_create_fence_array",0x16e,uVar12);
        goto code_r0x08016b68;
    }
    iVar7 = sym._copy_from_user_1(&uStack_b0,param_2,0x68);
    uVar12 = uStack_a8;
    if (iVar7 == 0) {
        iVar13 = uStack_a8;
        if (9 < uStack_a8) {
            uVar11 = -1L << (_simple_open & 0x3f);
            uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar11 | unaff_x30;
            }
            _printk(0x8002dfd,"hw_sync_ioctl_create_fence_array",0x178,uVar12,uStack_a8 & 0xffffffff,10);
            goto code_r0x08016b68;
        }
        if ((uStack_a8 >> 0x3d == 0) && (piVar8 = __kmalloc(uStack_a8 << 3,0xdc0), piVar8 != NULL)) {
            if (0 < iVar13) {
                if (uStack_a0 < 1) goto code_r0x08016b60;
                iVar7 = sync_file_get_fence();
                if (iVar7 == 0) goto code_r0x08016b60;
                *piVar8 = iVar7;
                if (iVar13 != 1) {
                    if (uStack_98 < 1) goto code_r0x08016b60;
                    iVar7 = sync_file_get_fence();
                    if (iVar7 == 0) {
                        uVar6 = 0;
                        goto code_r0x08016aec;
                    }
                    piVar8[1] = iVar7;
                    if (iVar13 != 2) {
                        if (uStack_90 < 1) goto code_r0x08016b60;
                        iVar7 = sync_file_get_fence();
                        if (iVar7 == 0) {
                            uVar6 = 1;
                            goto code_r0x08016aec;
                        }
                        piVar8[2] = iVar7;
                        if (iVar13 != 3) {
                            if (uStack_88 < 1) goto code_r0x08016b60;
                            iVar7 = sync_file_get_fence();
                            if (iVar7 == 0) {
                                uVar6 = 2;
                                goto code_r0x08016aec;
                            }
                            piVar8[3] = iVar7;
                            if (iVar13 != 4) {
                                if (uStack_80 < 1) goto code_r0x08016b60;
                                iVar7 = sync_file_get_fence();
                                if (iVar7 == 0) {
                                    uVar6 = 3;
                                    goto code_r0x08016aec;
                                }
                                piVar8[4] = iVar7;
                                if (iVar13 != 5) {
                                    if (uStack_78 < 1) goto code_r0x08016b60;
                                    iVar7 = sync_file_get_fence();
                                    if (iVar7 == 0) {
                                        uVar6 = 4;
                                        goto code_r0x08016aec;
                                    }
                                    piVar8[5] = iVar7;
                                    if (iVar13 != 6) {
                                        if (uStack_70 < 1) goto code_r0x08016b60;
                                        iVar7 = sync_file_get_fence();
                                        if (iVar7 == 0) {
                                            uVar6 = 5;
                                            goto code_r0x08016aec;
                                        }
                                        piVar8[6] = iVar7;
                                        if (iVar13 != 7) {
                                            if (uStack_68 < 1) goto code_r0x08016b60;
                                            iVar7 = sync_file_get_fence();
                                            if (iVar7 == 0) goto code_r0x08016c34;
                                            piVar8[7] = iVar7;
                                            if (iVar13 != 8) {
                                                if (uStack_60 < 1) goto code_r0x08016b60;
                                                iVar7 = sync_file_get_fence();
                                                if (iVar7 == 0) {
                                                    uVar6 = 7;
                                                    goto code_r0x08016aec;
                                                }
                                                piVar8[8] = iVar7;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            iVar7 = dma_fence_array_create(uVar12 & 0xffffffff,piVar8,*param_1,uStack_b0 & 0xffffffff,0);
            if (iVar7 == 0) {
                uVar10 = -1L << (_simple_open & 0x3f);
                uVar11 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar11 = uVar10 | unaff_x30;
                }
                _printk(0x80073b0,"hw_sync_ioctl_create_fence_array",0x193,uVar11);
                if (iVar13 < 1) goto code_r0x08016b60;
                uVar12 = uVar12 & 0xffffffff;
                piVar14 = piVar8;
                do {
                    if (*piVar14 != 0) {
                        piVar1 = *piVar14 + 0x38;
                        Hint_Prefetch(piVar1,2,0,1);
                        do {
                            iVar13 = *piVar1;
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar4) {
                                *piVar1 = iVar13 + -1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        if (iVar13 == 1) {
                            DataMemoryBarrier(2,1);
                            dma_fence_release();
                        }
                        else if (iVar13 < 1) {
                            refcount_warn_saturate(piVar1,3);
                        }
                    }
                    uVar12 = uVar12 - 1;
                    piVar14 = piVar14 + 1;
                    if (uVar12 == 0) goto code_r0x08016b60;
                } while( true );
            }
            uVar6 = get_unused_fd_flags(0);
            unaff_x19 = uVar6;
            if (uVar6 < 1) {
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar12 = uVar11 | unaff_x30;
                }
                _printk(0x8006510,"hw_sync_ioctl_create_fence_array",0x19e,uVar12,*(param_1 + 1));
                sym.dma_fence_put_1(iVar7);
                iVar7 = uVar6;
            }
            else {
                puVar9 = sync_file_create(iVar7);
                if (puVar9 == NULL) {
                    uVar11 = -1L << (_simple_open & 0x3f);
                    uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar12 = uVar11 | unaff_x30;
                    }
                    _printk(0x80045a8,"hw_sync_ioctl_create_fence_array",0x1a5,uVar12,unaff_x19);
                    sym.dma_fence_put_1(iVar7);
                    kfree(iVar7);
                    iVar7 = -0x16;
                }
                else {
                    piVar1 = iVar7 + 0x38;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar13 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = iVar13 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (iVar13 == 1) {
                        DataMemoryBarrier(2,1);
                        noname_1 = dma_fence_release(piVar1);
                    }
                    else {
                        noname_1 = extraout_q0;
                        if (iVar13 < 1) {
                            noname_1 = refcount_warn_saturate(piVar1,3);
                        }
                    }
                    uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
                    iVar7 = sym._copy_to_user_1(param_2,noname_1,0x68);
                    if (iVar7 == 0) {
                        fd_install(unaff_x19);
                        iVar7 = 0;
                        goto code_r0x08016b6c;
                    }
                    fput(*puVar9);
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar13 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = iVar13 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (iVar13 == 1) {
                        DataMemoryBarrier(2,1);
                        dma_fence_release(piVar1);
                    }
                    else if (iVar13 < 1) {
                        refcount_warn_saturate(piVar1,3);
                    }
                    iVar7 = -0xe;
                }
                put_unused_fd(unaff_x19);
            }
        }
        else {
            iVar7 = -0xc;
        }
    }
    else {
        iVar7 = -0xe;
    }
code_r0x08016b6c:
    while( true ) {
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        piVar8 = unaff_x19;
code_r0x08016c34:
        uVar6 = 6;
code_r0x08016aec:
        iVar13 = uVar6 + 1;
        do {
            if (piVar8[uVar6] != 0) {
                piVar1 = piVar8[uVar6] + 0x38;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = iVar2 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (iVar2 == 1) {
                    DataMemoryBarrier(2,1);
                    dma_fence_release();
                }
                else if (iVar2 < 1) {
                    refcount_warn_saturate(piVar1,3);
                }
            }
            iVar13 = iVar13 + -1;
        } while (0 < iVar13);
code_r0x08016b60:
        kfree(piVar8);
        unaff_x19 = piVar8;
code_r0x08016b68:
        iVar7 = -0x16;
    }
    return iVar7;
}


// ===== sym.hw_fence_dbg_register_clients_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a730 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08013888)
//WARNING: Removing unreachable block (ram,0x080132a4)
//WARNING: Removing unreachable block (ram,0x08013414)
//WARNING: Removing unreachable block (ram,0x08013348)
//WARNING: Removing unreachable block (ram,0x080133c8)
//WARNING: Removing unreachable block (ram,0x080132f0)
//WARNING: Removing unreachable block (ram,0x08013060)
//WARNING: Removing unreachable block (ram,0x080138d8)
//WARNING: Removing unreachable block (ram,0x08013a5c)
//WARNING: Removing unreachable block (ram,0x08013aac)

uint32_t *
sym.hw_fence_dbg_register_clients_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt
          (uint32_t param_1,int64_t param_2,uint32_t *param_3)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    code *arg1;
    uint *puVar10;
    int64_t iVar11;
    code *pcVar12;
    uint32_t *arg3;
    int64_t *piVar13;
    uint64_t uVar14;
    uint32_t *puVar15;
    int64_t *piVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *arg2;
    int64_t unaff_x21;
    int64_t *unaff_x22;
    uint32_t *unaff_x24;
    uint32_t *unaff_x25;
    int64_t unaff_x26;
    int *piVar17;
    uint32_t *unaff_x27;
    int *piVar18;
    uint64_t unaff_x28;
    uint32_t *unaff_x30;
    uchar auVar19 [16];
    ulong uStack_178;
    ulong uStack_170;
    ulong *puStack_168;
    int64_t iStack_160;
    ulong uStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    uint32_t *puStack_128;
    int64_t iStack_120;
    uint32_t *puStack_118;
    uint32_t *puStack_110;
    uint32_t *puStack_108;
    int64_t *piStack_100;
    int64_t iStack_f8;
    code *pcStack_f0;
    uint32_t *puStack_e8;
    uint32_t uStack_e0;
    ulong uStack_d8;
    uint32_t uStack_cc;
    uint32_t auStack_c8 [2];
    ushort uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iStack_50 = 0;
    arg3 = param_3;
    uVar3 = sym._get_debugfs_input_client(param_1,param_2,param_3,&iStack_50);
    iVar7 = iStack_50;
    if (uVar3 < 0) {
        param_3 = 0xffffffffffffffea;
    }
    else {
        unaff_x21 = iStack_50 + 0x1d8;
        mutex_lock(unaff_x21);
        unaff_x22 = iVar7 + 0x1c8;
        for (piVar13 = *(iVar7 + 0x1c8); unaff_x22 != piVar13; piVar13 = *piVar13) {
            unaff_x24 = piVar13 + -8;
            if (*unaff_x24 == uVar3) {
                mutex_unlock(unaff_x21);
                if (unaff_x24 == NULL) goto code_r0x08012d90;
                arg3 = 0xe1;
                uVar14 = -1L << (_simple_open & 0x3f);
                uVar6 = (~uVar14 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar6 = uVar14 | unaff_x30;
                }
                _printk(0x80079e8,"hw_fence_dbg_register_clients_wr",0xe1,uVar6,uVar3);
                param_3 = 0xffffffffffffffea;
                goto code_r0x08012e2c;
            }
        }
        mutex_unlock(unaff_x21);
code_r0x08012d90:
        arg3 = 0x50;
        puVar5 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
        if (puVar5 == NULL) {
            param_3 = 0xfffffffffffffff4;
        }
        else {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8006b6d,"hw_fence_dbg_register_clients_wr",0xe9,uVar3);
            }
            uVar6 = sym.msm_hw_fence_register(uVar3,puVar5 + 8);
            *(puVar5 + 6) = uVar6;
            unaff_x24 = puVar5;
            if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                arg3 = 0xed;
                uVar14 = -1L << (_simple_open & 0x3f);
                uVar6 = (~uVar14 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar6 = uVar14 | unaff_x30;
                }
                _printk(0x8002a18,"hw_fence_dbg_register_clients_wr",0xed,uVar6,uVar3);
                param_3 = 0xfffffffffffffff2;
                puVar5[6] = 0;
                puVar5[7] = 0;
            }
            else {
                iVar7 = dma_fence_context_alloc(1);
                *(puVar5 + 2) = iVar7;
                *puVar5 = uVar3;
                mutex_lock(unaff_x21);
                unaff_x30 = *unaff_x22;
                puVar15 = puVar5 + 0x10;
                arg3 = unaff_x30;
                uVar6 = __list_add_valid(puVar15,unaff_x22);
                if ((uVar6 & 1) != 0) {
                    *(unaff_x30 + 2) = puVar15;
                    *(puVar5 + 0x10) = unaff_x30;
                    *(puVar5 + 0x12) = unaff_x22;
                    *unaff_x22 = puVar15;
                }
                mutex_unlock(unaff_x21);
            }
        }
    }
code_r0x08012e2c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return param_3;
    }
    auVar19 = __stack_chk_fail();
    piVar13 = auVar19._8_8_;
    *extraout_x18 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    pcStack_a8 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iVar7 = sp_el0;
    arg2 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_cc = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    puStack_b0 = &stack0xffffffffffffffc0;
    if ((auVar19._0_8_ == 0) || (unaff_x21 = *(auVar19._0_8_ + 0xd8), unaff_x21 == 0)) {
        puVar5 = 0x115;
        _printk(0x800317d,"hw_fence_dbg_tx_and_signal_clients_wr",0x115,~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
        piVar13 = unaff_x22;
code_r0x08013068:
        arg3 = 0xffffffffffffffea;
    }
    else {
        puVar5 = arg3;
        if (arg3 < 0xa) {
            unaff_x30 = auStack_c8;
            __check_object_size(auStack_c8,arg3,0);
            iVar7 = sym._copy_from_user(auStack_c8,piVar13,arg3);
            unaff_x22 = piVar13;
            if (iVar7 == 0) {
                puVar5 = &uStack_cc;
                *(unaff_x30 + arg3) = 0;
                iVar4 = kstrtouint(auStack_c8,0,puVar5);
                if (iVar4 == 0) {
                    if (uStack_cc == 0) {
                        puVar5 = 0x126;
                        _printk(0x800644c,"hw_fence_dbg_tx_and_signal_clients_wr",0x126,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                        arg3 = NULL;
                    }
                    else {
                        if (200 < uStack_cc) {
                            puVar5 = 0x12a;
                            _printk(0x8002d3e,"hw_fence_dbg_tx_and_signal_clients_wr",0x12a,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34,uStack_cc,200);
                            uStack_cc = 200;
                        }
                        piVar13 = unaff_x21 + 0x1d8;
                        mutex_lock(piVar13);
                        unaff_x30 = unaff_x21 + 0x1c8;
                        for (puVar15 = *(unaff_x21 + 0x1c8); unaff_x30 != puVar15; puVar15 = *puVar15) {
                            unaff_x25 = puVar15 + -0x10;
                            if (*unaff_x25 == 2) goto code_r0x080130bc;
                        }
                        unaff_x25 = NULL;
code_r0x080130bc:
                        mutex_unlock(piVar13);
                        mutex_lock(piVar13);
                        for (puVar15 = *unaff_x30; unaff_x30 != puVar15; puVar15 = *puVar15) {
                            unaff_x24 = puVar15 + -0x10;
                            if (*unaff_x24 == 3) goto code_r0x080130f8;
                        }
                        unaff_x24 = NULL;
code_r0x080130f8:
                        mutex_unlock(piVar13);
                        if ((((unaff_x25 == NULL) || (piVar13 = *(unaff_x25 + 6), piVar13 == NULL)) ||
                            (0xfffffffffffff000 < piVar13)) ||
                           (((unaff_x24 == NULL || (unaff_x30 = *(unaff_x24 + 6), unaff_x30 == NULL)) ||
                            (0xfffffffffffff000 < unaff_x30)))) {
                            puVar5 = 0x138;
                            _printk(0x80077ed,"hw_fence_dbg_tx_and_signal_clients_wr",0x138,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34,2,3);
                            goto code_r0x08013068;
                        }
                        if ((*(unaff_x21 + 0x1c4) != '\0') && (uStack_cc != 0)) {
                            while( true ) {
                                unaff_x27 = *(unaff_x25 + 2);
                                unaff_x26 = *(unaff_x25 + 4);
                                *(unaff_x25 + 4) = unaff_x26 + 1;
                                iVar4 = sym.hw_fence_create(unaff_x21,piVar13,unaff_x27,unaff_x26);
                                if (iVar4 != 0) break;
                                uStack_e0 = 0;
                                sym.hw_fence_update_queue(unaff_x21,piVar13,unaff_x27,unaff_x26);
                                iVar4 = sym.hw_fence_register_wait_client(unaff_x21,0,unaff_x30,unaff_x27);
                                if (iVar4 != 0) {
                                    puVar5 = 0x15e;
                                    _printk(0x8006b98,"hw_fence_dbg_tx_and_signal_clients_wr",0x15e,
                                            ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                                    goto code_r0x08013068;
                                }
                                unaff_x24 = *(unaff_x21 + 0x22c);
                                unaff_x28 = *(unaff_x21 + 0x228);
                                if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                                    uStack_e0 = uStack_cc;
                                    _printk(0x8003686,"hw_fence_dbg_tx_and_signal_clients_wr",0x174,2,unaff_x24,
                                            unaff_x28,2,*(unaff_x21 + 0x1c0));
                                }
                                sym.hw_fence_ipcc_trigger_signal(unaff_x21,unaff_x24,unaff_x28,2);
                                usleep_range_state(*(unaff_x21 + 0x1c0),*(unaff_x21 + 0x1c0) + 5,2);
                                puVar5 = unaff_x27;
                                iVar4 = sym.hw_fence_destroy(unaff_x21,piVar13,unaff_x27,unaff_x26);
                                if (iVar4 != 0) {
                                    uVar8 = 0x80031ad;
                                    puVar5 = 0x187;
                                    goto code_r0x08013400;
                                }
                                uStack_cc = uStack_cc - 1;
                                if ((*(unaff_x21 + 0x1c4) == '\0') || (uStack_cc == 0)) goto code_r0x08012fe0;
                            }
                            uVar8 = 0x8004821;
                            puVar5 = 0x14f;
code_r0x08013400:
                            _printk(uVar8,"hw_fence_dbg_tx_and_signal_clients_wr",puVar5,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                        }
                    }
                    goto code_r0x08012fe0;
                }
            }
        }
        piVar13 = unaff_x22;
        arg3 = 0xfffffffffffffff2;
    }
code_r0x08012fe0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return arg3;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.hw_fence_dbg_create_join_fence;
    pcStack_138 = sym.hw_fence_dbg_create_join_fence;
    pcStack_f0 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    iStack_150 = 0;
    iStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    puStack_168 = NULL;
    uStack_178 = 0;
    ppuStack_140 = &puStack_b0;
    uStack_130 = unaff_x28;
    puStack_128 = unaff_x27;
    iStack_120 = unaff_x26;
    puStack_118 = unaff_x25;
    puStack_110 = unaff_x24;
    puStack_108 = unaff_x30;
    piStack_100 = piVar13;
    iStack_f8 = unaff_x21;
    puStack_e8 = arg3;
    if ((iVar9 == 0) || (iVar7 = *(iVar9 + 0xd8), iVar7 == 0)) {
        _printk(0x800317d,"hw_fence_dbg_create_join_fence",0x313,~(-1L << (_simple_open & 0x3f)) & 0x8013424);
        puVar5 = 0xffffffffffffffea;
        goto code_r0x080139dc;
    }
    pcVar12 = iVar7 + 0x1d8;
    mutex_lock(pcVar12);
    piVar13 = iVar7 + 0x1c8;
    for (piVar16 = *(iVar7 + 0x1c8); piVar13 != piVar16; piVar16 = *piVar16) {
        piVar17 = piVar16 + -8;
        if (*piVar17 == 2) goto code_r0x080134bc;
    }
    piVar17 = NULL;
code_r0x080134bc:
    mutex_unlock(pcVar12);
    mutex_lock(pcVar12);
    for (piVar16 = *piVar13; piVar13 != piVar16; piVar16 = *piVar16) {
        piVar18 = piVar16 + -8;
        if (*piVar18 == 3) goto code_r0x080134f8;
    }
    piVar18 = NULL;
code_r0x080134f8:
    mutex_unlock(pcVar12);
    if (((((piVar17 == NULL) || (uVar6 = *(piVar17 + 6), uVar6 == 0)) || (0xfffffffffffff000 < uVar6)) ||
        ((piVar18 == NULL || (*(piVar18 + 6) == 0)))) || (0xfffffffffffff000 < *(piVar18 + 6))) {
        _printk(0x80051e6,"hw_fence_dbg_create_join_fence",0x31e,~(-1L << (_simple_open & 0x3f)) & 0x8013424,2,3);
        puVar5 = 0xffffffffffffffea;
        arg2 = pcVar12;
        goto code_r0x080139dc;
    }
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    arg2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x18);
    if (arg2 != NULL) {
        iVar9 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar9 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x18);
        pcVar12 = arg2;
        if (arg1 != NULL) {
            iVar9 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar9 = 0x30;
            }
            puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,4);
            *arg2 = puVar10;
            pcVar12 = arg1;
            if (puVar10 == NULL) {
                iVar9 = 0;
                bVar2 = true;
code_r0x08013904:
                kfree(*(arg2 + iVar9 * 8));
                kfree(*(arg1 + iVar9 * 8));
                if (!bVar2) {
                    iVar7 = iVar9 + -1;
                    kfree(*(arg2 + iVar7 * 8));
                    kfree(*(arg1 + iVar7 * 8));
                    if (iVar7 != 0) {
                        kfree(*(arg2 + (iVar9 + -2) * 8));
                        kfree(*(arg1 + (iVar9 + -2) * 8));
                    }
                }
                kfree(arg2);
            }
            else {
                iVar11 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                if (iVar11 == 0) {
                    iVar7 = 0;
                    bVar2 = true;
                }
                else {
                    *puVar10 = 0;
                    *arg1 = iVar11;
                    iVar9 = 1;
                    dma_fence_init(iVar11,obj.hw_fence_dbg_ops,puVar10,*(piVar17 + 2),1);
                    iVar11 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar11 = 0x30;
                    }
                    puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,4);
                    *(arg2 + 8) = puVar10;
                    if (puVar10 == NULL) {
code_r0x08013900:
                        bVar2 = false;
                        goto code_r0x08013904;
                    }
                    iVar11 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                    if (iVar11 == 0) {
                        bVar2 = false;
                        iVar7 = 1;
                    }
                    else {
                        *puVar10 = 0;
                        *(arg1 + 8) = iVar11;
                        iVar9 = 2;
                        dma_fence_init(iVar11,obj.hw_fence_dbg_ops,puVar10,*(piVar17 + 2),2);
                        iVar11 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar11 = 0x30;
                        }
                        puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,4);
                        *(arg2 + 0x10) = puVar10;
                        if (puVar10 == NULL) goto code_r0x08013900;
                        iVar9 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                        if (iVar9 != 0) {
                            *puVar10 = 0;
                            *(arg1 + 0x10) = iVar9;
                            dma_fence_init(iVar9,obj.hw_fence_dbg_ops,puVar10,*(piVar17 + 2),3);
                            iVar9 = dma_fence_array_create(3,arg1,*(piVar17 + 2),4,0);
                            if (iVar9 == 0) {
                                _printk(0x80073b0,"hw_fence_dbg_create_join_fence",0x347,
                                        ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                                sym._cleanup_fences(arg1,arg2);
                                puVar5 = 0xffffffffffffffea;
                                goto code_r0x080139dc;
                            }
                            iStack_160 = *arg1;
                            puStack_168 = &uStack_178;
                            iVar4 = sym.msm_hw_fence_create(*(piVar17 + 6),&uStack_170);
                            if (iVar4 == 0) {
                                sym.hw_fence_update_queue(iVar7,uVar6,*(piVar17 + 2),1);
                                iStack_160 = *(arg1 + 8);
                                puStack_168 = &uStack_178;
                                iVar4 = sym.msm_hw_fence_create(*(piVar17 + 6),&uStack_170);
                                if (iVar4 == 0) {
                                    sym.hw_fence_update_queue(iVar7,uVar6,*(piVar17 + 2),2);
                                    iStack_160 = *(arg1 + 0x10);
                                    puStack_168 = &uStack_178;
                                    iVar4 = sym.msm_hw_fence_create(*(piVar17 + 6),&uStack_170);
                                    if (iVar4 == 0) {
                                        sym.hw_fence_update_queue(iVar7,uVar6,*(piVar17 + 2),3);
                                        iStack_150 = iVar9;
                                        sym.msm_hw_fence_wait_update_v2(*(piVar18 + 6),&iStack_150,0,0);
                                        sym.hw_fence_ipcc_trigger_signal(iVar7,*(iVar7 + 0x22c),*(iVar7 + 0x228),2);
                                        usleep_range_state(*(iVar7 + 0x1c0),*(iVar7 + 0x1c0) + 5,2);
                                        goto code_r0x0801380c;
                                    }
                                }
                            }
                            _printk(0x8004821,"hw_fence_dbg_create_join_fence",0x353,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                            puVar5 = 0xffffffffffffffea;
code_r0x0801380c:
                            piVar17 = iVar9 + 0x38;
                            goto code_r0x08013ad0;
                        }
                        bVar2 = false;
                        iVar7 = 2;
                    }
                }
                kfree(*(arg2 + iVar7 * 8));
                kfree(*(arg1 + iVar7 * 8));
                if (!bVar2) {
                    iVar9 = iVar7 + -1;
                    kfree(*(arg2 + iVar9 * 8));
                    kfree(*(arg1 + iVar9 * 8));
                    if (iVar9 != 0) {
                        kfree(*(arg2 + (iVar7 + -2) * 8));
                        kfree(*(arg1 + (iVar7 + -2) * 8));
                    }
                }
                kfree(arg2);
            }
        }
        kfree(pcVar12);
        pcVar12 = arg2;
    }
    puVar5 = 0xfffffffffffffff4;
    arg2 = pcVar12;
code_r0x080139dc:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_148) {
        piVar17 = __stack_chk_fail();
code_r0x08013ad0:
        Hint_Prefetch(piVar17,2,0,1);
        do {
            iVar4 = *piVar17;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar17,0x10);
            if (bVar2) {
                *piVar17 = iVar4 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar17,3);
        }
        kfree(arg2);
    }
    return puVar5;
}


// ===== sym.hw_fence_dbg_dump_queues_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a738 (size 8) =====

uint64_t sym.hw_fence_dbg_dump_queues_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    uint uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    int64_t iVar12;
    uint32_t uVar13;
    uint64_t unaff_x30;
    uchar auVar14 [12];
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    if ((param_1 == 0) || (*(param_1 + 0xd8) == 0)) {
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar8 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar8 = uVar11 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_dump_queues_wr",0x236,uVar8);
        param_3 = 0xffffffffffffffea;
    }
    else {
        iStack_70 = *(param_1 + 0xd8);
        uVar1 = sym._get_debugfs_input_client(param_1,param_2,param_3,&iStack_70);
        iVar10 = iStack_70;
        if (uVar1 < 0) {
            param_3 = 0xffffffffffffffea;
        }
        else {
            iVar12 = *(*(iStack_70 + 0x2c8) + uVar1 * 8);
            if ((((iVar12 == 0) || (iVar12 == -0x48)) || (0xfffffffffffff000 < iVar12 + 0x48U)) ||
               ((iVar12 == -0x28 || (0xfffffffffffff000 < iVar12 + 0x28U)))) {
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar8 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar8 = uVar11 | unaff_x30;
                }
                _printk(0x80075e1,"hw_fence_dbg_dump_queues_wr",0x242,uVar8);
                param_3 = 0xffffffffffffffea;
            }
            else {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8004016,"hw_fence_dbg_dump_queues_wr",0x246,uVar1);
                    iVar12 = *(*(iVar10 + 0x2c8) + uVar1 * 8);
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8007e43,"hw_fence_dbg_dump_queues_wr",0x24b);
                }
                uVar1 = 0;
                if (*(iVar10 + 0x14) != 0) {
                    uVar13 = 0;
                    do {
                        iVar9 = *(iVar12 + 0x48) + uVar13 * 0x40;
                        uVar3 = sym.readq_relaxed_1(iVar9 + 8);
                        uVar4 = sym.readq_relaxed_1(iVar9 + 0x10);
                        uVar5 = sym.readq_relaxed_1(iVar9 + 0x18);
                        uVar6 = sym.readq_relaxed_1(iVar9 + 0x20);
                        uVar7 = sym.readq_relaxed_1(iVar9 + 0x28);
                        uVar2 = sym.readl_relaxed_1(iVar9 + 0x30);
                        uVar8 = sym.readl_relaxed_1(iVar9 + 0x34);
                        iVar9 = sym.readl_relaxed_1(iVar9 + 0x38);
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            _printk(0x80060c7,"hw_fence_dbg_dump_queues_wr",0x25b,uVar13,uVar5,uVar3,uVar4,uVar6
                                    ,uVar7,uVar2,uVar8 & 0xffffffff | iVar9 << 0x20);
                        }
                        uVar13 = uVar13 + 1;
                        uVar1 = *(iVar10 + 0x14);
                    } while (uVar13 < uVar1);
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8005d91,"hw_fence_dbg_dump_queues_wr",0x25e);
                    uVar1 = *(iVar10 + 0x14);
                }
                if (uVar1 != 0) {
                    uVar1 = 0;
                    do {
                        iVar9 = *(iVar12 + 0x28) + uVar1 * 0x40;
                        uVar3 = sym.readq_relaxed_1(iVar9 + 8);
                        uVar4 = sym.readq_relaxed_1(iVar9 + 0x10);
                        uVar5 = sym.readq_relaxed_1(iVar9 + 0x18);
                        uVar6 = sym.readq_relaxed_1(iVar9 + 0x20);
                        uVar2 = sym.readl_relaxed_1(iVar9 + 0x30);
                        uVar8 = sym.readl_relaxed_1(iVar9 + 0x34);
                        iVar9 = sym.readl_relaxed_1(iVar9 + 0x38);
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            _printk(0x800497d,"hw_fence_dbg_dump_queues_wr",0x26c,uVar1,uVar5,uVar3,uVar4,uVar6,
                                    uVar2,uVar8 & 0xffffffff | iVar9 << 0x20);
                        }
                        uVar1 = uVar1 + 1;
                    } while (uVar1 < *(iVar10 + 0x14));
                }
            }
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return param_3;
    }
    auVar14 = __stack_chk_fail(param_3);
    iVar10 = auVar14._0_8_;
    if ((iVar10 != 0) && (auVar14._8_4_ < *(iVar10 + 0x34))) {
        return *(*(iVar10 + 0x230) + auVar14._8_4_ * 0x10);
    }
    return 0xffffffea;
}


// ===== sym.hw_fence_dbg_reset_client_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a740 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08013888)
//WARNING: Removing unreachable block (ram,0x080132f0)
//WARNING: Removing unreachable block (ram,0x080132a4)
//WARNING: Removing unreachable block (ram,0x08013414)
//WARNING: Removing unreachable block (ram,0x08012ec8)
//WARNING: Removing unreachable block (ram,0x08012f20)
//WARNING: Removing unreachable block (ram,0x08013348)
//WARNING: Removing unreachable block (ram,0x080133c8)
//WARNING: Removing unreachable block (ram,0x08013060)
//WARNING: Removing unreachable block (ram,0x080138d8)
//WARNING: Removing unreachable block (ram,0x08013a5c)
//WARNING: Removing unreachable block (ram,0x08013aac)

code * sym.hw_fence_dbg_reset_client_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt
                 (uint32_t param_1,int64_t param_2,code *param_3)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint *puVar11;
    int64_t iVar12;
    int64_t arg2;
    code *pcVar13;
    uint64_t uVar14;
    code *pcVar15;
    code *pcVar16;
    int64_t *piVar17;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar18;
    code *unaff_x22;
    code *unaff_x23;
    code *pcVar19;
    code *unaff_x24;
    code *unaff_x25;
    int64_t unaff_x26;
    int *piVar20;
    code *unaff_x27;
    int *piVar21;
    uint64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar22 [16];
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong *puStack_1b8;
    int64_t iStack_1b0;
    ulong uStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_198;
    uchar ***pppuStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    code *pcStack_178;
    int64_t iStack_170;
    code *pcStack_168;
    code *pcStack_160;
    code *pcStack_158;
    code *pcStack_150;
    uint64_t uStack_148;
    code *pcStack_140;
    code *pcStack_138;
    uint32_t uStack_130;
    ulong uStack_128;
    uint32_t uStack_11c;
    int64_t iStack_118;
    ushort uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    code *pcStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    pcStack_50 = NULL;
    pcVar13 = param_3;
    uVar4 = sym._get_debugfs_input_client(param_1,param_2,param_3,&pcStack_50);
    pcVar19 = pcStack_50;
    if (-1 < uVar4) {
        unaff_x22 = pcStack_50 + 0x1d8;
        mutex_lock(unaff_x22);
        unaff_x24 = pcVar19;
        for (unaff_x23 = *(pcVar19 + 0x1c8); pcVar19 + 0x1c8 != unaff_x23; unaff_x23 = *unaff_x23) {
            unaff_x24 = unaff_x23 + -0x40;
            if (*unaff_x24 == uVar4) {
                mutex_unlock(unaff_x22);
                if (((unaff_x24 == NULL) || (uVar7 = *(unaff_x23 + -0x28), uVar7 == 0)) || (0xfffffffffffff000 < uVar7)
                   ) goto code_r0x08012c3c;
                if ((~_segment.ehdr & 0x10001) == 0) {
                    pcVar13 = 0xc0;
                    _printk(0x80070f0,"hw_fence_dbg_reset_client_wr",0xc0,uVar4);
                    uVar7 = *(unaff_x23 + -0x28);
                }
                iVar5 = sym.msm_hw_fence_reset_client(uVar7,0);
                if (iVar5 != 0) {
                    pcVar13 = 0xc3;
                    uVar14 = -1L << (_simple_open & 0x3f);
                    uVar7 = (~uVar14 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar7 = uVar14 | unaff_x30;
                    }
                    _printk(0x800347a,"hw_fence_dbg_reset_client_wr",0xc3,uVar7,uVar4);
                }
                goto code_r0x08012c8c;
            }
        }
        mutex_unlock(unaff_x22);
code_r0x08012c3c:
        pcVar13 = 0xbc;
        uVar14 = -1L << (_simple_open & 0x3f);
        uVar7 = (~uVar14 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar7 = uVar14 | unaff_x30;
        }
        _printk(0x800399a,"hw_fence_dbg_reset_client_wr",0xbc,uVar7,uVar4);
    }
    param_3 = 0xffffffffffffffea;
code_r0x08012c8c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return param_3;
    }
    uVar4 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_dbg_register_clients_wr;
    pcStack_88 = sym.hw_fence_dbg_register_clients_wr;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    pcVar19 = sym.hw_fence_dbg_register_clients_wr;
    iStack_a0 = 0;
    pcVar15 = pcVar13;
    puStack_90 = &stack0xffffffffffffffc0;
    pcStack_80 = unaff_x24;
    pcStack_78 = unaff_x23;
    pcStack_70 = unaff_x22;
    uVar4 = sym._get_debugfs_input_client(uVar4,arg2,pcVar13,&iStack_a0);
    iVar8 = iStack_a0;
    if (uVar4 < 0) {
        pcVar13 = 0xffffffffffffffea;
    }
    else {
        unaff_x30 = iStack_a0 + 0x1d8;
        mutex_lock(unaff_x30);
        unaff_x22 = iVar8 + 0x1c8;
        for (pcVar15 = *(iVar8 + 0x1c8); unaff_x22 != pcVar15; pcVar15 = *pcVar15) {
            unaff_x24 = pcVar15 + -0x40;
            if (*unaff_x24 == uVar4) {
                mutex_unlock(unaff_x30);
                if (unaff_x24 == NULL) goto code_r0x08012d90;
                pcVar15 = 0xe1;
                _printk(0x80079e8,"hw_fence_dbg_register_clients_wr",0xe1,~(-1L << (_simple_open & 0x3f)) & 0x8012cec
                        ,uVar4);
                pcVar13 = 0xffffffffffffffea;
                goto code_r0x08012e2c;
            }
        }
        mutex_unlock(unaff_x30);
code_r0x08012d90:
        pcVar15 = 0x50;
        pcVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
        if (pcVar6 == NULL) {
            pcVar13 = 0xfffffffffffffff4;
        }
        else {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8006b6d,"hw_fence_dbg_register_clients_wr",0xe9,uVar4);
            }
            uVar7 = sym.msm_hw_fence_register(uVar4,pcVar6 + 0x20);
            *(pcVar6 + 0x18) = uVar7;
            unaff_x24 = pcVar6;
            if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                pcVar15 = 0xed;
                _printk(0x8002a18,"hw_fence_dbg_register_clients_wr",0xed,~(-1L << (_simple_open & 0x3f)) & 0x8012cec
                        ,uVar4);
                pcVar13 = 0xfffffffffffffff2;
                *(pcVar6 + 0x18) = 0;
            }
            else {
                iVar8 = dma_fence_context_alloc(1);
                *(pcVar6 + 8) = iVar8;
                *pcVar6 = uVar4;
                mutex_lock(unaff_x30);
                pcVar19 = *unaff_x22;
                pcVar18 = pcVar6 + 0x40;
                pcVar15 = pcVar19;
                uVar7 = __list_add_valid(pcVar18,unaff_x22);
                if ((uVar7 & 1) != 0) {
                    *(pcVar19 + 8) = pcVar18;
                    *(pcVar6 + 0x40) = pcVar19;
                    *(pcVar6 + 0x48) = unaff_x22;
                    *unaff_x22 = pcVar18;
                }
                mutex_unlock(unaff_x30);
            }
        }
    }
code_r0x08012e2c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return pcVar13;
    }
    auVar22 = __stack_chk_fail();
    pcVar13 = auVar22._8_8_;
    *extraout_x18_00 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    pcStack_f8 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iVar8 = sp_el0;
    pcVar6 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iStack_108 = *(iVar8 + 0x5e0);
    uStack_11c = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    iStack_118 = 0;
    ppuStack_100 = &puStack_90;
    if ((auVar22._0_8_ == 0) || (unaff_x30 = *(auVar22._0_8_ + 0xd8), unaff_x30 == 0)) {
        pcVar18 = 0x115;
        _printk(0x800317d,"hw_fence_dbg_tx_and_signal_clients_wr",0x115,~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
        pcVar13 = unaff_x22;
code_r0x08013068:
        pcVar15 = 0xffffffffffffffea;
    }
    else {
        pcVar18 = pcVar15;
        if (pcVar15 < 0xa) {
            pcVar19 = &iStack_118;
            __check_object_size(&iStack_118,pcVar15,0);
            iVar8 = sym._copy_from_user(&iStack_118,pcVar13,pcVar15);
            unaff_x22 = pcVar13;
            if (iVar8 == 0) {
                pcVar18 = &uStack_11c;
                pcVar19[pcVar15] = 0x0;
                iVar5 = kstrtouint(&iStack_118,0,pcVar18);
                if (iVar5 == 0) {
                    if (uStack_11c == 0) {
                        pcVar18 = 0x126;
                        _printk(0x800644c,"hw_fence_dbg_tx_and_signal_clients_wr",0x126,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                        pcVar15 = NULL;
                    }
                    else {
                        if (200 < uStack_11c) {
                            pcVar18 = 0x12a;
                            _printk(0x8002d3e,"hw_fence_dbg_tx_and_signal_clients_wr",0x12a,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34,uStack_11c,200);
                            uStack_11c = 200;
                        }
                        pcVar13 = unaff_x30 + 0x1d8;
                        mutex_lock(pcVar13);
                        pcVar19 = unaff_x30 + 0x1c8;
                        for (pcVar16 = *(unaff_x30 + 0x1c8); pcVar19 != pcVar16; pcVar16 = *pcVar16) {
                            unaff_x25 = pcVar16 + -0x40;
                            if (*unaff_x25 == 2) goto code_r0x080130bc;
                        }
                        unaff_x25 = NULL;
code_r0x080130bc:
                        mutex_unlock(pcVar13);
                        mutex_lock(pcVar13);
                        for (pcVar16 = *pcVar19; pcVar19 != pcVar16; pcVar16 = *pcVar16) {
                            unaff_x24 = pcVar16 + -0x40;
                            if (*unaff_x24 == 3) goto code_r0x080130f8;
                        }
                        unaff_x24 = NULL;
code_r0x080130f8:
                        mutex_unlock(pcVar13);
                        if (((((unaff_x25 == NULL) || (pcVar13 = *(unaff_x25 + 0x18), pcVar13 == NULL)) ||
                             (0xfffffffffffff000 < pcVar13)) ||
                            ((unaff_x24 == NULL || (pcVar19 = *(unaff_x24 + 0x18), pcVar19 == NULL)))) ||
                           (0xfffffffffffff000 < pcVar19)) {
                            pcVar18 = 0x138;
                            _printk(0x80077ed,"hw_fence_dbg_tx_and_signal_clients_wr",0x138,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34,2,3);
                            goto code_r0x08013068;
                        }
                        if ((*(unaff_x30 + 0x1c4) != '\0') && (uStack_11c != 0)) {
                            while( true ) {
                                unaff_x27 = *(unaff_x25 + 8);
                                unaff_x26 = *(unaff_x25 + 0x10);
                                *(unaff_x25 + 0x10) = unaff_x26 + 1;
                                iVar5 = sym.hw_fence_create(unaff_x30,pcVar13,unaff_x27,unaff_x26);
                                if (iVar5 != 0) break;
                                uStack_130 = 0;
                                sym.hw_fence_update_queue(unaff_x30,pcVar13,unaff_x27,unaff_x26);
                                iVar5 = sym.hw_fence_register_wait_client(unaff_x30,0,pcVar19,unaff_x27);
                                if (iVar5 != 0) {
                                    pcVar18 = 0x15e;
                                    _printk(0x8006b98,"hw_fence_dbg_tx_and_signal_clients_wr",0x15e,
                                            ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                                    goto code_r0x08013068;
                                }
                                unaff_x24 = *(unaff_x30 + 0x22c);
                                unaff_x28 = *(unaff_x30 + 0x228);
                                if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                                    uStack_130 = uStack_11c;
                                    _printk(0x8003686,"hw_fence_dbg_tx_and_signal_clients_wr",0x174,2,unaff_x24,
                                            unaff_x28,2,*(unaff_x30 + 0x1c0));
                                }
                                sym.hw_fence_ipcc_trigger_signal(unaff_x30,unaff_x24,unaff_x28,2);
                                usleep_range_state(*(unaff_x30 + 0x1c0),*(unaff_x30 + 0x1c0) + 5,2);
                                pcVar18 = unaff_x27;
                                iVar5 = sym.hw_fence_destroy(unaff_x30,pcVar13,unaff_x27,unaff_x26);
                                if (iVar5 != 0) {
                                    uVar9 = 0x80031ad;
                                    pcVar18 = 0x187;
                                    goto code_r0x08013400;
                                }
                                uStack_11c = uStack_11c - 1;
                                if ((*(unaff_x30 + 0x1c4) == '\0') || (uStack_11c == 0)) goto code_r0x08012fe0;
                            }
                            uVar9 = 0x8004821;
                            pcVar18 = 0x14f;
code_r0x08013400:
                            _printk(uVar9,"hw_fence_dbg_tx_and_signal_clients_wr",pcVar18,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                        }
                    }
                    goto code_r0x08012fe0;
                }
            }
        }
        pcVar13 = unaff_x22;
        pcVar15 = 0xfffffffffffffff2;
    }
code_r0x08012fe0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_108) {
        return pcVar15;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_01 = sym.hw_fence_dbg_create_join_fence;
    pcStack_188 = sym.hw_fence_dbg_create_join_fence;
    pcStack_140 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iVar8 = sp_el0;
    iStack_198 = *(iVar8 + 0x5e0);
    iStack_1a0 = 0;
    iStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    puStack_1b8 = NULL;
    uStack_1c8 = 0;
    pppuStack_190 = &ppuStack_100;
    uStack_180 = unaff_x28;
    pcStack_178 = unaff_x27;
    iStack_170 = unaff_x26;
    pcStack_168 = unaff_x25;
    pcStack_160 = unaff_x24;
    pcStack_158 = pcVar19;
    pcStack_150 = pcVar13;
    uStack_148 = unaff_x30;
    pcStack_138 = pcVar15;
    if ((iVar10 == 0) || (iVar8 = *(iVar10 + 0xd8), iVar8 == 0)) {
        _printk(0x800317d,"hw_fence_dbg_create_join_fence",0x313,~(-1L << (_simple_open & 0x3f)) & 0x8013424);
        pcVar18 = 0xffffffffffffffea;
        goto code_r0x080139dc;
    }
    pcVar19 = iVar8 + 0x1d8;
    mutex_lock(pcVar19);
    piVar1 = iVar8 + 0x1c8;
    for (piVar17 = *(iVar8 + 0x1c8); piVar1 != piVar17; piVar17 = *piVar17) {
        piVar20 = piVar17 + -8;
        if (*piVar20 == 2) goto code_r0x080134bc;
    }
    piVar20 = NULL;
code_r0x080134bc:
    mutex_unlock(pcVar19);
    mutex_lock(pcVar19);
    for (piVar17 = *piVar1; piVar1 != piVar17; piVar17 = *piVar17) {
        piVar21 = piVar17 + -8;
        if (*piVar21 == 3) goto code_r0x080134f8;
    }
    piVar21 = NULL;
code_r0x080134f8:
    mutex_unlock(pcVar19);
    if ((((piVar20 == NULL) || (uVar7 = *(piVar20 + 6), uVar7 == 0)) || (0xfffffffffffff000 < uVar7)) ||
       (((piVar21 == NULL || (*(piVar21 + 6) == 0)) || (0xfffffffffffff000 < *(piVar21 + 6))))) {
        _printk(0x80051e6,"hw_fence_dbg_create_join_fence",0x31e,~(-1L << (_simple_open & 0x3f)) & 0x8013424,2,3);
        pcVar18 = 0xffffffffffffffea;
        pcVar6 = pcVar19;
        goto code_r0x080139dc;
    }
    iVar10 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar10 = 0x30;
    }
    pcVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x18);
    if (pcVar6 != NULL) {
        iVar10 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar10 = 0x30;
        }
        pcVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x18);
        pcVar19 = pcVar6;
        if (pcVar13 != NULL) {
            iVar10 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar10 = 0x30;
            }
            puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,4);
            *pcVar6 = puVar11;
            pcVar19 = pcVar13;
            if (puVar11 == NULL) {
                iVar10 = 0;
                bVar3 = true;
code_r0x08013904:
                kfree(*(pcVar6 + iVar10 * 8));
                kfree(*(pcVar13 + iVar10 * 8));
                if (!bVar3) {
                    iVar8 = iVar10 + -1;
                    kfree(*(pcVar6 + iVar8 * 8));
                    kfree(*(pcVar13 + iVar8 * 8));
                    if (iVar8 != 0) {
                        kfree(*(pcVar6 + (iVar10 + -2) * 8));
                        kfree(*(pcVar13 + (iVar10 + -2) * 8));
                    }
                }
                kfree(pcVar6);
            }
            else {
                iVar12 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                if (iVar12 == 0) {
                    iVar8 = 0;
                    bVar3 = true;
                }
                else {
                    *puVar11 = 0;
                    *pcVar13 = iVar12;
                    iVar10 = 1;
                    dma_fence_init(iVar12,obj.hw_fence_dbg_ops,puVar11,*(piVar20 + 2),1);
                    iVar12 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar12 = 0x30;
                    }
                    puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,4);
                    *(pcVar6 + 8) = puVar11;
                    if (puVar11 == NULL) {
code_r0x08013900:
                        bVar3 = false;
                        goto code_r0x08013904;
                    }
                    iVar12 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                    if (iVar12 == 0) {
                        bVar3 = false;
                        iVar8 = 1;
                    }
                    else {
                        *puVar11 = 0;
                        *(pcVar13 + 8) = iVar12;
                        iVar10 = 2;
                        dma_fence_init(iVar12,obj.hw_fence_dbg_ops,puVar11,*(piVar20 + 2),2);
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,4);
                        *(pcVar6 + 0x10) = puVar11;
                        if (puVar11 == NULL) goto code_r0x08013900;
                        iVar10 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                        if (iVar10 != 0) {
                            *puVar11 = 0;
                            *(pcVar13 + 0x10) = iVar10;
                            dma_fence_init(iVar10,obj.hw_fence_dbg_ops,puVar11,*(piVar20 + 2),3);
                            iVar10 = dma_fence_array_create(3,pcVar13,*(piVar20 + 2),4,0);
                            if (iVar10 == 0) {
                                _printk(0x80073b0,"hw_fence_dbg_create_join_fence",0x347,
                                        ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                                sym._cleanup_fences(pcVar13,pcVar6);
                                pcVar18 = 0xffffffffffffffea;
                                goto code_r0x080139dc;
                            }
                            iStack_1b0 = *pcVar13;
                            puStack_1b8 = &uStack_1c8;
                            iVar5 = sym.msm_hw_fence_create(*(piVar20 + 6),&uStack_1c0);
                            if (iVar5 == 0) {
                                sym.hw_fence_update_queue(iVar8,uVar7,*(piVar20 + 2),1);
                                iStack_1b0 = *(pcVar13 + 8);
                                puStack_1b8 = &uStack_1c8;
                                iVar5 = sym.msm_hw_fence_create(*(piVar20 + 6),&uStack_1c0);
                                if (iVar5 == 0) {
                                    sym.hw_fence_update_queue(iVar8,uVar7,*(piVar20 + 2),2);
                                    iStack_1b0 = *(pcVar13 + 0x10);
                                    puStack_1b8 = &uStack_1c8;
                                    iVar5 = sym.msm_hw_fence_create(*(piVar20 + 6),&uStack_1c0);
                                    if (iVar5 == 0) {
                                        sym.hw_fence_update_queue(iVar8,uVar7,*(piVar20 + 2),3);
                                        iStack_1a0 = iVar10;
                                        sym.msm_hw_fence_wait_update_v2(*(piVar21 + 6),&iStack_1a0,0,0);
                                        sym.hw_fence_ipcc_trigger_signal(iVar8,*(iVar8 + 0x22c),*(iVar8 + 0x228),2);
                                        usleep_range_state(*(iVar8 + 0x1c0),*(iVar8 + 0x1c0) + 5,2);
                                        goto code_r0x0801380c;
                                    }
                                }
                            }
                            _printk(0x8004821,"hw_fence_dbg_create_join_fence",0x353,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                            pcVar18 = 0xffffffffffffffea;
code_r0x0801380c:
                            piVar20 = iVar10 + 0x38;
                            goto code_r0x08013ad0;
                        }
                        bVar3 = false;
                        iVar8 = 2;
                    }
                }
                kfree(*(pcVar6 + iVar8 * 8));
                kfree(*(pcVar13 + iVar8 * 8));
                if (!bVar3) {
                    iVar10 = iVar8 + -1;
                    kfree(*(pcVar6 + iVar10 * 8));
                    kfree(*(pcVar13 + iVar10 * 8));
                    if (iVar10 != 0) {
                        kfree(*(pcVar6 + (iVar8 + -2) * 8));
                        kfree(*(pcVar13 + (iVar8 + -2) * 8));
                    }
                }
                kfree(pcVar6);
            }
        }
        kfree(pcVar19);
        pcVar19 = pcVar6;
    }
    pcVar18 = 0xfffffffffffffff4;
    pcVar6 = pcVar19;
code_r0x080139dc:
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_198) {
        piVar20 = __stack_chk_fail();
code_r0x08013ad0:
        Hint_Prefetch(piVar20,2,0,1);
        do {
            iVar5 = *piVar20;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar20,0x10);
            if (bVar3) {
                *piVar20 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar5 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar5 < 1) {
            refcount_warn_saturate(piVar20,3);
        }
        kfree(pcVar6);
    }
    return pcVar18;
}


// ===== sym.hw_fence_dbg_create_join_fence.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a748 (size 8) =====

ulong sym.hw_fence_dbg_create_join_fence.cbd65a651d105b5a53f49d19393c623c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t *piVar4;
    uint *puVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    int64_t *unaff_x20;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int *piVar13;
    int *piVar14;
    uint64_t unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong *puStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iStack_70 = 0;
    iStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    puStack_88 = NULL;
    uStack_98 = 0;
    if ((param_1 == 0) || (iVar10 = *(param_1 + 0xd8), iVar10 == 0)) {
        uVar9 = -1L << (_simple_open & 0x3f);
        uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar12 = uVar9 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_create_join_fence",0x313,uVar12);
        param_3 = 0xffffffffffffffea;
        goto code_r0x080139dc;
    }
    piVar7 = iVar10 + 0x1d8;
    mutex_lock(piVar7);
    piVar4 = iVar10 + 0x1c8;
    for (piVar8 = *(iVar10 + 0x1c8); piVar4 != piVar8; piVar8 = *piVar8) {
        piVar13 = piVar8 + -8;
        if (*piVar13 == 2) goto code_r0x080134bc;
    }
    piVar13 = NULL;
code_r0x080134bc:
    mutex_unlock(piVar7);
    mutex_lock(piVar7);
    for (piVar8 = *piVar4; piVar4 != piVar8; piVar8 = *piVar8) {
        piVar14 = piVar8 + -8;
        if (*piVar14 == 3) goto code_r0x080134f8;
    }
    piVar14 = NULL;
code_r0x080134f8:
    mutex_unlock(piVar7);
    if ((((piVar13 == NULL) || (uVar12 = *(piVar13 + 6), uVar12 == 0)) || (0xfffffffffffff000 < uVar12)) ||
       (((piVar14 == NULL || (*(piVar14 + 6) == 0)) || (0xfffffffffffff000 < *(piVar14 + 6))))) {
        uVar9 = -1L << (_simple_open & 0x3f);
        uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar12 = uVar9 | unaff_x30;
        }
        _printk(0x80051e6,"hw_fence_dbg_create_join_fence",0x31e,uVar12,2,3);
        param_3 = 0xffffffffffffffea;
        unaff_x20 = piVar7;
        goto code_r0x080139dc;
    }
    iVar11 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar11 = 0x30;
    }
    unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x18);
    if (unaff_x20 != NULL) {
        iVar11 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar11 = 0x30;
        }
        piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x18);
        piVar7 = unaff_x20;
        if (piVar4 != NULL) {
            iVar11 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar11 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,4);
            *unaff_x20 = puVar5;
            piVar7 = piVar4;
            if (puVar5 == NULL) {
                iVar11 = 0;
                bVar2 = true;
code_r0x08013904:
                kfree(unaff_x20[iVar11]);
                kfree(piVar4[iVar11]);
                if (!bVar2) {
                    iVar10 = iVar11 + -1;
                    kfree(unaff_x20[iVar10]);
                    kfree(piVar4[iVar10]);
                    if (iVar10 != 0) {
                        kfree(unaff_x20[iVar11 + -2]);
                        kfree(piVar4[iVar11 + -2]);
                    }
                }
                kfree(unaff_x20);
            }
            else {
                iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                if (iVar6 == 0) {
                    iVar10 = 0;
                    bVar2 = true;
                }
                else {
                    *puVar5 = 0;
                    *piVar4 = iVar6;
                    iVar11 = 1;
                    dma_fence_init(iVar6,obj.hw_fence_dbg_ops,puVar5,*(piVar13 + 2),1);
                    iVar6 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar6 = 0x30;
                    }
                    puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,4);
                    unaff_x20[1] = puVar5;
                    if (puVar5 == NULL) {
code_r0x08013900:
                        bVar2 = false;
                        goto code_r0x08013904;
                    }
                    iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                    if (iVar6 == 0) {
                        bVar2 = false;
                        iVar10 = 1;
                    }
                    else {
                        *puVar5 = 0;
                        piVar4[1] = iVar6;
                        iVar11 = 2;
                        dma_fence_init(iVar6,obj.hw_fence_dbg_ops,puVar5,*(piVar13 + 2),2);
                        iVar6 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar6 = 0x30;
                        }
                        puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,4);
                        unaff_x20[2] = puVar5;
                        if (puVar5 == NULL) goto code_r0x08013900;
                        iVar11 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                        if (iVar11 != 0) {
                            *puVar5 = 0;
                            piVar4[2] = iVar11;
                            dma_fence_init(iVar11,obj.hw_fence_dbg_ops,puVar5,*(piVar13 + 2),3);
                            iVar11 = dma_fence_array_create(3,piVar4,*(piVar13 + 2),4,0);
                            if (iVar11 == 0) {
                                uVar9 = -1L << (_simple_open & 0x3f);
                                uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar12 = uVar9 | unaff_x30;
                                }
                                _printk(0x80073b0,"hw_fence_dbg_create_join_fence",0x347,uVar12);
                                sym._cleanup_fences(piVar4,unaff_x20);
                                param_3 = 0xffffffffffffffea;
                                goto code_r0x080139dc;
                            }
                            iStack_80 = *piVar4;
                            puStack_88 = &uStack_98;
                            iVar3 = sym.msm_hw_fence_create(*(piVar13 + 6),&uStack_90);
                            if (iVar3 == 0) {
                                sym.hw_fence_update_queue(iVar10,uVar12,*(piVar13 + 2),1);
                                iStack_80 = piVar4[1];
                                puStack_88 = &uStack_98;
                                iVar3 = sym.msm_hw_fence_create(*(piVar13 + 6),&uStack_90);
                                if (iVar3 == 0) {
                                    sym.hw_fence_update_queue(iVar10,uVar12,*(piVar13 + 2),2);
                                    iStack_80 = piVar4[2];
                                    puStack_88 = &uStack_98;
                                    iVar3 = sym.msm_hw_fence_create(*(piVar13 + 6),&uStack_90);
                                    if (iVar3 == 0) {
                                        sym.hw_fence_update_queue(iVar10,uVar12,*(piVar13 + 2),3);
                                        iStack_70 = iVar11;
                                        sym.msm_hw_fence_wait_update_v2(*(piVar14 + 6),&iStack_70,0,0);
                                        sym.hw_fence_ipcc_trigger_signal
                                                  (iVar10,*(iVar10 + 0x22c),*(iVar10 + 0x228),2);
                                        usleep_range_state(*(iVar10 + 0x1c0),*(iVar10 + 0x1c0) + 5,2);
                                        goto code_r0x0801380c;
                                    }
                                }
                            }
                            uVar9 = -1L << (_simple_open & 0x3f);
                            uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar12 = uVar9 | unaff_x30;
                            }
                            _printk(0x8004821,"hw_fence_dbg_create_join_fence",0x353,uVar12);
                            param_3 = 0xffffffffffffffea;
code_r0x0801380c:
                            piVar13 = iVar11 + 0x38;
                            goto code_r0x08013ad0;
                        }
                        bVar2 = false;
                        iVar10 = 2;
                    }
                }
                kfree(unaff_x20[iVar10]);
                kfree(piVar4[iVar10]);
                if (!bVar2) {
                    iVar11 = iVar10 + -1;
                    kfree(unaff_x20[iVar11]);
                    kfree(piVar4[iVar11]);
                    if (iVar11 != 0) {
                        kfree(unaff_x20[iVar10 + -2]);
                        kfree(piVar4[iVar10 + -2]);
                    }
                }
                kfree(unaff_x20);
            }
        }
        kfree(piVar7);
        piVar7 = unaff_x20;
    }
    param_3 = 0xfffffffffffffff4;
    unaff_x20 = piVar7;
code_r0x080139dc:
    while (iVar10 = sp_el0, *(iVar10 + 0x5e0) != iStack_68) {
        piVar13 = __stack_chk_fail();
code_r0x08013ad0:
        Hint_Prefetch(piVar13,2,0,1);
        do {
            iVar3 = *piVar13;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar13,0x10);
            if (bVar2) {
                *piVar13 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar3 < 1) {
            refcount_warn_saturate(piVar13,3);
        }
        kfree(unaff_x20);
    }
    return param_3;
}


// ===== sym.hw_fence_dbg_dump_table_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a750 (size 8) =====

ulong * sym.hw_fence_dbg_dump_table_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt
                  (int64_t param_1,int64_t param_2,ulong *param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    uint64_t unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    if ((param_1 == 0) || (iVar10 = *(param_1 + 0xd8), iVar10 == 0)) {
        puVar8 = 0x2ce;
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar3 = uVar7 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_dump_table_wr",0x2ce,uVar3);
        param_3 = 0xffffffffffffffea;
        goto code_r0x08014808;
    }
    if (param_3 < 0x18) {
        __check_object_size(&uStack_60,param_3,0);
        puVar8 = param_3;
        iVar6 = sym._copy_from_user(&uStack_60,param_2,param_3);
        if (iVar6 == 0) {
            puVar8 = &uStack_68;
            *(&uStack_60 + param_3) = 0;
            iVar5 = sscanf(&uStack_60,"%lu %lu",puVar8,&uStack_70);
            if (iVar5 == 1) {
                *(iVar10 + 0x1a8) = 0;
                *(iVar10 + 0x1b0) = 0;
                *(iVar10 + 0x1b8) = 0;
                goto code_r0x08014808;
            }
            if (iVar5 == 2) {
                *(iVar10 + 0x1a8) = 1;
                *(iVar10 + 0x1b0) = uStack_68;
                *(iVar10 + 0x1b8) = uStack_70;
                goto code_r0x08014808;
            }
            puVar8 = 0x2e9;
            uVar7 = -1L << (_simple_open & 0x3f);
            uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar7 | unaff_x30;
            }
            _printk(0x8005d5e,"hw_fence_dbg_dump_table_wr",0x2e9,uVar3,iVar5);
        }
    }
    else {
        puVar8 = 0x2d4;
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar3 = uVar7 | unaff_x30;
        }
        _printk(0x8007a44,"hw_fence_dbg_dump_table_wr",0x2d4,uVar3,param_3,0x18);
    }
    param_3 = 0xfffffffffffffff2;
code_r0x08014808:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return param_3;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar3 = (uVar7 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar7, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar9 = uVar7 & uVar3;
    }
    bVar4 = CARRY8(uVar9,puVar8);
    uVar9 = uVar9 + puVar8;
    uVar1 = 0;
    if (!bVar4 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar4) || uVar9 == uVar1 + !bVar4) {
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        if ((uVar7 & uVar3 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        puVar8 = __arch_copy_to_user(uVar7);
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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
    return puVar8;
}


// ===== sym.hw_fence_dbg_tx_and_signal_clients_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a758 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08013888)
//WARNING: Removing unreachable block (ram,0x080138d8)
//WARNING: Removing unreachable block (ram,0x08013a5c)
//WARNING: Removing unreachable block (ram,0x08013aac)

uint32_t *
sym.hw_fence_dbg_tx_and_signal_clients_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt
          (int64_t param_1,uint64_t param_2,uint32_t *param_3)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint *puVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar13;
    int64_t unaff_x21;
    uint64_t unaff_x22;
    int64_t *unaff_x23;
    int *unaff_x24;
    uint64_t uVar14;
    int *unaff_x25;
    int64_t unaff_x26;
    int *piVar15;
    uint32_t *unaff_x27;
    int *piVar16;
    uint64_t unaff_x28;
    int64_t *unaff_x30;
    ulong uStack_128;
    ulong uStack_120;
    ulong *puStack_118;
    int64_t iStack_110;
    ulong uStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    uint32_t *puStack_d8;
    int64_t iStack_d0;
    int *piStack_c8;
    int *piStack_c0;
    int64_t *piStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_7c;
    int64_t iStack_78;
    ushort uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_7c = 0;
    uStack_70 = 0;
    iStack_78 = 0;
    if ((param_1 == 0) || (unaff_x21 = *(param_1 + 0xd8), unaff_x21 == 0)) {
        puVar13 = 0x115;
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar14 = uVar11 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_tx_and_signal_clients_wr",0x115,uVar14);
        param_2 = unaff_x22;
code_r0x08013068:
        param_3 = 0xffffffffffffffea;
    }
    else {
        puVar13 = param_3;
        if (param_3 < 0xa) {
            unaff_x23 = &iStack_78;
            __check_object_size(&iStack_78,param_3,0);
            iVar4 = sym._copy_from_user(&iStack_78,param_2,param_3);
            unaff_x22 = param_2;
            if (iVar4 == 0) {
                puVar13 = &uStack_7c;
                *(unaff_x23 + param_3) = 0;
                iVar3 = kstrtouint(&iStack_78,0,puVar13);
                if (iVar3 == 0) {
                    if (uStack_7c == 0) {
                        puVar13 = 0x126;
                        uVar11 = -1L << (_simple_open & 0x3f);
                        uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar14 = uVar11 | unaff_x30;
                        }
                        _printk(0x800644c,"hw_fence_dbg_tx_and_signal_clients_wr",0x126,uVar14);
                        param_3 = NULL;
                    }
                    else {
                        if (200 < uStack_7c) {
                            puVar13 = 0x12a;
                            uVar11 = -1L << (_simple_open & 0x3f);
                            uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar14 = uVar11 | unaff_x30;
                            }
                            _printk(0x8002d3e,"hw_fence_dbg_tx_and_signal_clients_wr",0x12a,uVar14,uStack_7c,200);
                            uStack_7c = 200;
                        }
                        param_2 = unaff_x21 + 0x1d8;
                        mutex_lock(param_2);
                        unaff_x23 = unaff_x21 + 0x1c8;
                        for (piVar10 = *(unaff_x21 + 0x1c8); unaff_x23 != piVar10; piVar10 = *piVar10) {
                            unaff_x25 = piVar10 + -8;
                            if (*unaff_x25 == 2) goto code_r0x080130bc;
                        }
                        unaff_x25 = NULL;
code_r0x080130bc:
                        mutex_unlock(param_2);
                        mutex_lock(param_2);
                        for (piVar10 = *unaff_x23; unaff_x23 != piVar10; piVar10 = *piVar10) {
                            unaff_x24 = piVar10 + -8;
                            if (*unaff_x24 == 3) goto code_r0x080130f8;
                        }
                        unaff_x24 = NULL;
code_r0x080130f8:
                        mutex_unlock(param_2);
                        if ((((unaff_x25 == NULL) || (param_2 = *(unaff_x25 + 6), param_2 == 0)) ||
                            (0xfffffffffffff000 < param_2)) ||
                           (((unaff_x24 == NULL || (unaff_x23 = *(unaff_x24 + 6), unaff_x23 == NULL)) ||
                            (0xfffffffffffff000 < unaff_x23)))) {
                            puVar13 = 0x138;
                            uVar11 = -1L << (_simple_open & 0x3f);
                            uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar14 = uVar11 | unaff_x30;
                            }
                            _printk(0x80077ed,"hw_fence_dbg_tx_and_signal_clients_wr",0x138,uVar14,2,3);
                            goto code_r0x08013068;
                        }
                        if ((*(unaff_x21 + 0x1c4) != '\0') && (uStack_7c != 0)) {
                            while( true ) {
                                unaff_x27 = *(unaff_x25 + 2);
                                unaff_x26 = *(unaff_x25 + 4);
                                *(unaff_x25 + 4) = unaff_x26 + 1;
                                iVar3 = sym.hw_fence_create(unaff_x21,param_2,unaff_x27,unaff_x26);
                                if (iVar3 != 0) break;
                                sym.hw_fence_update_queue(unaff_x21,param_2,unaff_x27,unaff_x26);
                                iVar3 = sym.hw_fence_register_wait_client(unaff_x21,0,unaff_x23,unaff_x27);
                                if (iVar3 != 0) {
                                    puVar13 = 0x15e;
                                    uVar11 = -1L << (_simple_open & 0x3f);
                                    uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                                    if ((unaff_x30 & 0x80000000000000) != 0) {
                                        uVar14 = uVar11 | unaff_x30;
                                    }
                                    _printk(0x8006b98,"hw_fence_dbg_tx_and_signal_clients_wr",0x15e,uVar14);
                                    goto code_r0x08013068;
                                }
                                unaff_x24 = *(unaff_x21 + 0x22c);
                                unaff_x28 = *(unaff_x21 + 0x228);
                                if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                                    _printk(0x8003686,"hw_fence_dbg_tx_and_signal_clients_wr",0x174,2,unaff_x24,
                                            unaff_x28,2,*(unaff_x21 + 0x1c0));
                                }
                                sym.hw_fence_ipcc_trigger_signal(unaff_x21,unaff_x24,unaff_x28,2);
                                usleep_range_state(*(unaff_x21 + 0x1c0),*(unaff_x21 + 0x1c0) + 5,2);
                                puVar13 = unaff_x27;
                                iVar3 = sym.hw_fence_destroy(unaff_x21,param_2,unaff_x27,unaff_x26);
                                if (iVar3 != 0) {
                                    uVar5 = 0x80031ad;
                                    puVar13 = 0x187;
                                    goto code_r0x08013400;
                                }
                                uStack_7c = uStack_7c - 1;
                                if ((*(unaff_x21 + 0x1c4) == '\0') || (uStack_7c == 0)) goto code_r0x08012fe0;
                            }
                            uVar5 = 0x8004821;
                            puVar13 = 0x14f;
code_r0x08013400:
                            uVar11 = -1L << (_simple_open & 0x3f);
                            uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar14 = uVar11 | unaff_x30;
                            }
                            _printk(uVar5,"hw_fence_dbg_tx_and_signal_clients_wr",puVar13,uVar14);
                        }
                    }
                    goto code_r0x08012fe0;
                }
            }
        }
        param_2 = unaff_x22;
        param_3 = 0xfffffffffffffff2;
    }
code_r0x08012fe0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return param_3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_dbg_create_join_fence;
    pcStack_e8 = sym.hw_fence_dbg_create_join_fence;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    iStack_100 = 0;
    iStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    puStack_118 = NULL;
    uStack_128 = 0;
    puStack_f0 = &stack0xffffffffffffffa0;
    uStack_e0 = unaff_x28;
    puStack_d8 = unaff_x27;
    iStack_d0 = unaff_x26;
    piStack_c8 = unaff_x25;
    piStack_c0 = unaff_x24;
    piStack_b8 = unaff_x23;
    uStack_b0 = param_2;
    iStack_a8 = unaff_x21;
    if ((iVar6 == 0) || (iVar4 = *(iVar6 + 0xd8), iVar4 == 0)) {
        _printk(0x800317d,"hw_fence_dbg_create_join_fence",0x313,~(-1L << (_simple_open & 0x3f)) & 0x8013424);
        puVar13 = 0xffffffffffffffea;
        goto code_r0x080139dc;
    }
    piVar10 = iVar4 + 0x1d8;
    mutex_lock(piVar10);
    piVar7 = iVar4 + 0x1c8;
    for (piVar12 = *(iVar4 + 0x1c8); piVar7 != piVar12; piVar12 = *piVar12) {
        piVar15 = piVar12 + -8;
        if (*piVar15 == 2) goto code_r0x080134bc;
    }
    piVar15 = NULL;
code_r0x080134bc:
    mutex_unlock(piVar10);
    mutex_lock(piVar10);
    for (piVar12 = *piVar7; piVar7 != piVar12; piVar12 = *piVar12) {
        piVar16 = piVar12 + -8;
        if (*piVar16 == 3) goto code_r0x080134f8;
    }
    piVar16 = NULL;
code_r0x080134f8:
    mutex_unlock(piVar10);
    if (((((piVar15 == NULL) || (uVar14 = *(piVar15 + 6), uVar14 == 0)) || (0xfffffffffffff000 < uVar14)) ||
        ((piVar16 == NULL || (*(piVar16 + 6) == 0)))) || (0xfffffffffffff000 < *(piVar16 + 6))) {
        _printk(0x80051e6,"hw_fence_dbg_create_join_fence",0x31e,~(-1L << (_simple_open & 0x3f)) & 0x8013424,2,3);
        puVar13 = 0xffffffffffffffea;
        unaff_x30 = piVar10;
        goto code_r0x080139dc;
    }
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    unaff_x30 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x18);
    if (unaff_x30 != NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x18);
        piVar10 = unaff_x30;
        if (piVar7 != NULL) {
            iVar6 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar6 = 0x30;
            }
            puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,4);
            *unaff_x30 = puVar8;
            piVar10 = piVar7;
            if (puVar8 == NULL) {
                iVar6 = 0;
                bVar2 = true;
code_r0x08013904:
                kfree(unaff_x30[iVar6]);
                kfree(piVar7[iVar6]);
                if (!bVar2) {
                    iVar4 = iVar6 + -1;
                    kfree(unaff_x30[iVar4]);
                    kfree(piVar7[iVar4]);
                    if (iVar4 != 0) {
                        kfree(unaff_x30[iVar6 + -2]);
                        kfree(piVar7[iVar6 + -2]);
                    }
                }
                kfree(unaff_x30);
            }
            else {
                iVar9 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                if (iVar9 == 0) {
                    iVar4 = 0;
                    bVar2 = true;
                }
                else {
                    *puVar8 = 0;
                    *piVar7 = iVar9;
                    iVar6 = 1;
                    dma_fence_init(iVar9,obj.hw_fence_dbg_ops,puVar8,*(piVar15 + 2),1);
                    iVar9 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar9 = 0x30;
                    }
                    puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,4);
                    unaff_x30[1] = puVar8;
                    if (puVar8 == NULL) {
code_r0x08013900:
                        bVar2 = false;
                        goto code_r0x08013904;
                    }
                    iVar9 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                    if (iVar9 == 0) {
                        bVar2 = false;
                        iVar4 = 1;
                    }
                    else {
                        *puVar8 = 0;
                        piVar7[1] = iVar9;
                        iVar6 = 2;
                        dma_fence_init(iVar9,obj.hw_fence_dbg_ops,puVar8,*(piVar15 + 2),2);
                        iVar9 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar9 = 0x30;
                        }
                        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,4);
                        unaff_x30[2] = puVar8;
                        if (puVar8 == NULL) goto code_r0x08013900;
                        iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                        if (iVar6 != 0) {
                            *puVar8 = 0;
                            piVar7[2] = iVar6;
                            dma_fence_init(iVar6,obj.hw_fence_dbg_ops,puVar8,*(piVar15 + 2),3);
                            iVar6 = dma_fence_array_create(3,piVar7,*(piVar15 + 2),4,0);
                            if (iVar6 == 0) {
                                _printk(0x80073b0,"hw_fence_dbg_create_join_fence",0x347,
                                        ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                                sym._cleanup_fences(piVar7,unaff_x30);
                                puVar13 = 0xffffffffffffffea;
                                goto code_r0x080139dc;
                            }
                            iStack_110 = *piVar7;
                            puStack_118 = &uStack_128;
                            iVar3 = sym.msm_hw_fence_create(*(piVar15 + 6),&uStack_120);
                            if (iVar3 == 0) {
                                sym.hw_fence_update_queue(iVar4,uVar14,*(piVar15 + 2),1);
                                iStack_110 = piVar7[1];
                                puStack_118 = &uStack_128;
                                iVar3 = sym.msm_hw_fence_create(*(piVar15 + 6),&uStack_120);
                                if (iVar3 == 0) {
                                    sym.hw_fence_update_queue(iVar4,uVar14,*(piVar15 + 2),2);
                                    iStack_110 = piVar7[2];
                                    puStack_118 = &uStack_128;
                                    iVar3 = sym.msm_hw_fence_create(*(piVar15 + 6),&uStack_120);
                                    if (iVar3 == 0) {
                                        sym.hw_fence_update_queue(iVar4,uVar14,*(piVar15 + 2),3);
                                        iStack_100 = iVar6;
                                        sym.msm_hw_fence_wait_update_v2(*(piVar16 + 6),&iStack_100,0,0);
                                        sym.hw_fence_ipcc_trigger_signal(iVar4,*(iVar4 + 0x22c),*(iVar4 + 0x228),2);
                                        usleep_range_state(*(iVar4 + 0x1c0),*(iVar4 + 0x1c0) + 5,2);
                                        goto code_r0x0801380c;
                                    }
                                }
                            }
                            _printk(0x8004821,"hw_fence_dbg_create_join_fence",0x353,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                            puVar13 = 0xffffffffffffffea;
code_r0x0801380c:
                            piVar15 = iVar6 + 0x38;
                            goto code_r0x08013ad0;
                        }
                        bVar2 = false;
                        iVar4 = 2;
                    }
                }
                kfree(unaff_x30[iVar4]);
                kfree(piVar7[iVar4]);
                if (!bVar2) {
                    iVar6 = iVar4 + -1;
                    kfree(unaff_x30[iVar6]);
                    kfree(piVar7[iVar6]);
                    if (iVar6 != 0) {
                        kfree(unaff_x30[iVar4 + -2]);
                        kfree(piVar7[iVar4 + -2]);
                    }
                }
                kfree(unaff_x30);
            }
        }
        kfree(piVar10);
        piVar10 = unaff_x30;
    }
    puVar13 = 0xfffffffffffffff4;
    unaff_x30 = piVar10;
code_r0x080139dc:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_f8) {
        piVar15 = __stack_chk_fail();
code_r0x08013ad0:
        Hint_Prefetch(piVar15,2,0,1);
        do {
            iVar3 = *piVar15;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar15,0x10);
            if (bVar2) {
                *piVar15 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar3 < 1) {
            refcount_warn_saturate(piVar15,3);
        }
        kfree(unaff_x30);
    }
    return puVar13;
}


// ===== sym.hw_fence_dbg_ipcc_dpu_write.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a760 (size 8) =====

int64_t sym.hw_fence_dbg_ipcc_dpu_write.cbd65a651d105b5a53f49d19393c623c.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0xd8) + 0x22c);
    noname_1 = sym.hw_fence_ipcc_get_client_virt_id(*(param_1 + 0xd8),2);
    iVar2 = sym._debugfs_ipcc_trigger(param_1,noname_1,param_3,uVar1);
    return iVar2;
}


// ===== sym.hw_fence_dbg_ipcc_write.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a768 (size 8) =====

int64_t sym.hw_fence_dbg_ipcc_write.cbd65a651d105b5a53f49d19393c623c.cfi_jt
                  (uchar param_1 [16],int64_t param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym._debugfs_ipcc_trigger(param_2,param_1,param_4,*(*(param_2 + 0xd8) + 0x22c));
    return iVar1;
}


// ===== sym.hw_fence_dbg_create_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt @ 0x0800a770 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080148d4)
//WARNING: Removing unreachable block (ram,0x08014278)
//WARNING: Removing unreachable block (ram,0x08014660)
//WARNING: Removing unreachable block (ram,0x080144e8)
//WARNING: Removing unreachable block (ram,0x08014598)
//WARNING: Removing unreachable block (ram,0x08014888)
//WARNING: Removing unreachable block (ram,0x080147fc)

int64_t ****
sym.hw_fence_dbg_create_wr.cbd65a651d105b5a53f49d19393c623c.cfi_jt
          (uint32_t param_1,int64_t param_2,int64_t ****param_3)

{
    uint64_t uVar1;
    int64_t arg4;
    ulong *puVar2;
    uint uVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    uint *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t ****ppppiVar11;
    int64_t ****ppppiVar12;
    int64_t ****ppppiVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t ****unaff_x20;
    code *pcVar16;
    int64_t ****unaff_x23;
    int64_t iVar17;
    int64_t ****ppppiVar18;
    int64_t iVar19;
    int64_t ****ppppiVar20;
    code *unaff_x30;
    uchar auVar21 [16];
    ulong uStack_1f0;
    int64_t **ppiStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    uchar **ppuStack_1c0;
    code *pcStack_1b8;
    int64_t ***pppiStack_1b0;
    code *pcStack_1a0;
    code *pcStack_198;
    int64_t ***pppiStack_190;
    int64_t ***pppiStack_188;
    ulong uStack_180;
    ulong uStack_178;
    uint uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong *puStack_148;
    ulong *puStack_140;
    ulong *puStack_138;
    uint uStack_12c;
    int64_t iStack_128;
    int64_t ***pppiStack_120;
    code *pcStack_118;
    int64_t ***pppiStack_110;
    int64_t ***pppiStack_108;
    uint64_t uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_88;
    int64_t ***pppiStack_80;
    ulong uStack_78;
    ulong *puStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    ppppiVar11 = &pppiStack_80;
    iStack_58 = *(iVar19 + 0x5e0);
    iStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    puStack_70 = NULL;
    uStack_88 = 0;
    pppiStack_80 = NULL;
    ppppiVar12 = param_3;
    uVar5 = sym._get_debugfs_input_client(param_1,param_2,param_3,ppppiVar11);
    ppppiVar13 = pppiStack_80;
    if (uVar5 < 0) {
        param_3 = 0xffffffffffffffea;
    }
    else {
        unaff_x20 = uVar5;
        ppppiVar12 = pppiStack_80 + 0x3b;
        mutex_lock(ppppiVar12);
        ppppiVar20 = ppppiVar13 + 0x39;
        for (ppppiVar18 = ppppiVar13[0x39]; ppppiVar20 != ppppiVar18; ppppiVar18 = *ppppiVar18) {
            ppppiVar13 = ppppiVar18 + -8;
            if (*ppppiVar13 == uVar5) {
                mutex_unlock(ppppiVar12);
                if (((ppppiVar13 == NULL) || (ppppiVar18[-5] == NULL)) || (0xfffffffffffff000 < ppppiVar18[-5]))
                goto code_r0x08013f98;
                ppppiVar12 = 0x4;
                iVar19 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar19 = 0x30;
                }
                ppppiVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xdc0);
                unaff_x23 = ppppiVar13;
                if (ppppiVar20 != NULL) {
                    ppppiVar12 = 0x88;
                    iVar19 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
                    unaff_x23 = ppppiVar20;
                    if (iVar19 != 0) {
                        snprintf(iVar19 + 0x40,0x40,"hwfence:id:%d:ctx=%lu:seqno:%lu",uVar5,ppppiVar18[-7],
                                 _segment.ehdr);
                        *ppppiVar20 = 0;
                        ppppiVar11 = ppppiVar18[-7];
                        ppppiVar12 = ppppiVar20;
                        dma_fence_init(iVar19,obj.hw_fence_dbg_ops,ppppiVar20,ppppiVar11,_segment.ehdr);
                        if ((~_segment.ehdr & 0x10001) == 0) {
                            ppppiVar12 = 0x1c7;
                            ppppiVar11 = unaff_x20;
                            _printk(0x8004c0b,"hw_fence_dbg_create_wr",0x1c7,unaff_x20,ppppiVar18[-7],_segment.ehdr
                                   );
                        }
                        puStack_70 = &uStack_88;
                        iStack_68 = iVar19;
                        iVar7 = sym.msm_hw_fence_create(ppppiVar18[-5],&uStack_78);
                        if (iVar7 == 0) {
                            _segment.ehdr = _segment.ehdr + 1;
                            *(iVar19 + 0x80) = ppppiVar18[-5];
                        }
                        else {
                            uVar14 = -1L << (_simple_open & 0x3f);
                            ppppiVar12 = 0x1cd;
                            ppppiVar11 = (~uVar14 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                ppppiVar11 = uVar14 | unaff_x30;
                            }
                            _printk(0x80073e8,"hw_fence_dbg_create_wr",0x1cd,ppppiVar11,unaff_x20,ppppiVar18[-7],
                                    _segment.ehdr);
                            sym.dma_fence_put(iVar19);
                            param_3 = 0xffffffffffffffea;
                        }
                        goto code_r0x08013ff8;
                    }
                    kfree(ppppiVar20);
                }
                param_3 = 0xfffffffffffffff4;
                goto code_r0x08013ff8;
            }
        }
        mutex_unlock(ppppiVar12);
code_r0x08013f98:
        ppppiVar12 = 0x1b0;
        uVar14 = -1L << (_simple_open & 0x3f);
        ppppiVar11 = (~uVar14 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            ppppiVar11 = uVar14 | unaff_x30;
        }
        _printk(0x800399a,"hw_fence_dbg_create_wr",0x1b0,ppppiVar11,unaff_x20);
        param_3 = 0xffffffffffffffea;
        unaff_x23 = ppppiVar13;
    }
code_r0x08013ff8:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_58) {
        return param_3;
    }
    auVar21 = __stack_chk_fail();
    iVar10 = auVar21._8_8_;
    *extraout_x18 = sym.hw_fence_dbg_dump_table_rd;
    pcStack_e8 = sym.hw_fence_dbg_dump_table_rd;
    iVar19 = sp_el0;
    pcVar16 = sym.hw_fence_dbg_dump_table_rd;
    iStack_f8 = *(iVar19 + 0x5e0);
    puStack_f0 = &stack0xffffffffffffffb0;
    if ((auVar21._0_8_ == 0) || (iVar19 = *(auVar21._0_8_ + 0xd8), iVar19 == 0)) {
        ppppiVar13 = 0x288;
        _printk(0x800317d,"hw_fence_dbg_dump_table_rd",0x288,~(-1L << (_simple_open & 0x3f)) & 0x80140c4);
        ppppiVar20 = 0xffffffffffffffea;
    }
    else if (*(iVar19 + 0x38) == 0) {
        ppppiVar13 = 0x28e;
        _printk(0x8002a5a,"hw_fence_dbg_dump_table_rd",0x28e,~(-1L << (_simple_open & 0x3f)) & 0x80140c4);
        ppppiVar20 = 0xffffffffffffffea;
    }
    else {
        unaff_x30 = segment.ehdr;
        unaff_x23 = ppppiVar11;
        if (_segment.ehdr < *(iVar19 + 0x40)) {
            param_3 = ppppiVar12;
            if (ppppiVar12 < 0xa0) {
                ppppiVar13 = 0x29a;
                _printk(0x80031e4,"hw_fence_dbg_dump_table_rd",0x29a,~(-1L << (_simple_open & 0x3f)) & 0x80140c4,
                        ppppiVar12,0xa0);
                ppppiVar20 = 0xffffffffffffffea;
            }
            else {
                ppppiVar13 = 0x1000;
                ppppiVar18 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
                if (ppppiVar18 == NULL) {
                    ppppiVar20 = 0xfffffffffffffff4;
                }
                else {
                    if (*(iVar19 + 0x1a8) == '\0') {
                        ppppiVar20 = NULL;
                        do {
                            unaff_x30 = segment.ehdr;
                            uVar3 = _segment.ehdr;
                            uVar14 = _segment.ehdr & 0xffffffff;
                            do {
                                iVar7 = ppppiVar20;
                                if ((*(iVar19 + 0x40) <= uVar14) || (0xf5f < iVar7)) {
                                    _segment.ehdr = CONCAT44(*0x8000004,uVar14 + 1);
                                    if (iVar7 < 1) goto code_r0x080144f8;
                                    goto code_r0x08014424;
                                }
                                uVar9 = uVar14 + 1 & 0xffffffff;
                                uVar14 = uVar14 + 1;
                                unaff_x30 = *(iVar19 + 0x38) + uVar9 * 0xa0;
                            } while (*unaff_x30 == 0);
                            iVar17 = *(iVar19 + 0x38) + uVar9 * 0xa0;
                            uVar9 = _segment.ehdr & 0xffffffff;
                            _segment.ehdr = CONCAT44(*0x8000004,uVar14);
                            puStack_138 = iVar17 + 8;
                            puStack_140 = iVar17 + 0x10;
                            uStack_180 = *puStack_140;
                            puStack_148 = iVar17 + 0x18;
                            uStack_178 = *puStack_148;
                            uStack_170 = *(iVar17 + 0x20);
                            uStack_168 = *(iVar17 + 0x30);
                            uStack_160 = *(iVar17 + 0x60);
                            uStack_158 = *(iVar17 + 0x68);
                            uStack_12c = uVar3;
                            iStack_128 = iVar10;
                            pppiStack_120 = ppppiVar11;
                            pcStack_118 = pcVar16;
                            pppiStack_110 = ppppiVar18;
                            pppiStack_108 = ppppiVar12;
                            iVar6 = scnprintf(ppppiVar18 + iVar7,0x1000 - iVar7,
                                              "[%d]hfence[%d] v:%d err:%d ctx:%d seqno:%d wait:0x%llx alloc:%d f:0x%lx tt:%llu wt:%llu\n"
                                              ,uVar9,uVar14 & 0xffffffff,*unaff_x30,*(iVar17 + 4),*puStack_138);
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                uStack_168 = *(iVar17 + 0x30);
                                uStack_170 = *(iVar17 + 0x20);
                                uStack_178 = *puStack_148;
                                uStack_180 = *puStack_140;
                                uStack_160 = *(iVar17 + 0x60);
                                uStack_158 = *(iVar17 + 0x68);
                                _printk(0x800523e,"_dump_fence",0x1eb,uStack_12c,uVar14 & 0xffffffff,*unaff_x30,
                                        *(iVar17 + 4),*puStack_138);
                            }
                            ppppiVar20 = iVar6 + iVar7;
                            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
                            ppppiVar12 = pppiStack_108;
                            ppppiVar18 = pppiStack_110;
                            pcVar16 = pcStack_118;
                            ppppiVar11 = pppiStack_120;
                            iVar10 = iStack_128;
                        } while( true );
                    }
                    iVar17 = *(iVar19 + 0x1b0);
                    arg4 = *(iVar19 + 0x1b8);
                    uStack_100 = 0;
                    puVar8 = sym.msm_hw_fence_find(iVar19,0,iVar17,arg4);
                    uVar14 = uStack_100;
                    if (puVar8 == NULL) {
                        _printk(0x8002d89,"dump_single_entry",0x1fc,~(-1L << (_simple_open & 0x3f)) & 0x80140c4,
                                iVar17,arg4,uStack_100);
                        uVar14 = scnprintf(ppppiVar18,0x1000,
                                           "no valid hfence found for context:%lu seqno:%lu hash:%lu\n",iVar17,arg4,
                                           uStack_100);
                        ppppiVar20 = uVar14 & 0xffffffff;
                    }
                    else {
                        uStack_180 = *(puVar8 + 4);
                        uStack_160 = *(puVar8 + 0x18);
                        uStack_158 = *(puVar8 + 0x1a);
                        uStack_178 = *(puVar8 + 6);
                        uStack_170 = puVar8[8];
                        uStack_168 = *(puVar8 + 0xc);
                        uVar9 = scnprintf(ppppiVar18,0x1000,
                                          "[%d]hfence[%d] v:%d err:%d ctx:%d seqno:%d wait:0x%llx alloc:%d f:0x%lx tt:%llu wt:%llu\n"
                                          ,0,uStack_100 & 0xffffffff,*puVar8,puVar8[1],*(puVar8 + 2));
                        ppppiVar20 = uVar9 & 0xffffffff;
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            uStack_180 = *(puVar8 + 4);
                            uStack_160 = *(puVar8 + 0x18);
                            uStack_158 = *(puVar8 + 0x1a);
                            uStack_178 = *(puVar8 + 6);
                            uStack_170 = puVar8[8];
                            uStack_168 = *(puVar8 + 0xc);
                            _printk(0x800523e,"_dump_fence",0x1eb,0,uVar14 & 0xffffffff,*puVar8,puVar8[1],
                                    *(puVar8 + 2));
                        }
                    }
                    _segment.ehdr = CONCAT44(*0x8000004,*(iVar19 + 0x40));
                    if (ppppiVar20 < 1) {
code_r0x080144f8:
                        ppppiVar13 = 0x2a7;
                        uVar9 = -1L << (_simple_open & 0x3f);
                        uVar14 = (~uVar9 | 0xff80000000000000) & pcVar16;
                        if ((pcVar16 & 0x80000000000000) != 0) {
                            uVar14 = uVar9 | pcVar16;
                        }
                        _printk(0x8005d25,"hw_fence_dbg_dump_table_rd",0x2a7,uVar14,ppppiVar20,ppppiVar12);
                        iVar7 = 0;
                    }
                    else {
code_r0x08014424:
                        iVar7 = ppppiVar20;
                        if (ppppiVar12 < ppppiVar20) goto code_r0x080144f8;
                        auVar21 = __check_object_size(ppppiVar18,ppppiVar20,1);
                        ppppiVar13 = ppppiVar20;
                        iVar19 = sym._copy_to_user(iVar10,auVar21,ppppiVar20);
                        if (iVar19 == 0) {
                            *ppppiVar11 = *ppppiVar11 + ppppiVar20;
                        }
                        else {
                            ppppiVar13 = 0x2ad;
                            uVar9 = -1L << (_simple_open & 0x3f);
                            uVar14 = (~uVar9 | 0xff80000000000000) & pcVar16;
                            if ((pcVar16 & 0x80000000000000) != 0) {
                                uVar14 = uVar9 | pcVar16;
                            }
                            _printk(0x8004dbf,"hw_fence_dbg_dump_table_rd",0x2ad,uVar14);
                            iVar7 = -0xe;
                        }
                    }
                    kfree(ppppiVar18);
                    ppppiVar20 = iVar7;
                    param_3 = ppppiVar12;
                    unaff_x20 = ppppiVar18;
                    unaff_x23 = ppppiVar11;
                }
            }
        }
        else {
            ppppiVar13 = ppppiVar12;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                ppppiVar13 = 0x293;
                _printk(0x8007441,"hw_fence_dbg_dump_table_rd");
            }
            ppppiVar20 = NULL;
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        }
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_f8) {
        return ppppiVar20;
    }
    auVar21 = __stack_chk_fail(ppppiVar20);
    *extraout_x18_00 = sym.hw_fence_dbg_dump_table_wr;
    pcStack_1b8 = sym.hw_fence_dbg_dump_table_wr;
    iVar19 = sp_el0;
    iStack_1c8 = *(iVar19 + 0x5e0);
    uStack_1f0 = 0;
    ppiStack_1e8 = NULL;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    ppuStack_1c0 = &puStack_f0;
    pppiStack_1b0 = unaff_x23;
    pcStack_1a0 = pcVar16;
    pcStack_198 = unaff_x30;
    pppiStack_190 = unaff_x20;
    pppiStack_188 = param_3;
    if ((auVar21._0_8_ == 0) || (iVar19 = *(auVar21._0_8_ + 0xd8), iVar19 == 0)) {
        ppppiVar11 = 0x2ce;
        _printk(0x800317d,"hw_fence_dbg_dump_table_wr",0x2ce,~(-1L << (_simple_open & 0x3f)) & 0x80146e0);
        ppppiVar13 = 0xffffffffffffffea;
        goto code_r0x08014808;
    }
    if (ppppiVar13 < 0x18) {
        __check_object_size(&uStack_1e0,ppppiVar13,0);
        ppppiVar11 = ppppiVar13;
        iVar10 = sym._copy_from_user(&uStack_1e0,auVar21._8_8_,ppppiVar13);
        if (iVar10 == 0) {
            ppppiVar11 = &ppiStack_1e8;
            *(&uStack_1e0 + ppppiVar13) = 0;
            iVar7 = sscanf(&uStack_1e0,"%lu %lu",ppppiVar11,&uStack_1f0);
            if (iVar7 == 1) {
                *(iVar19 + 0x1a8) = 0;
                *(iVar19 + 0x1b0) = 0;
                *(iVar19 + 0x1b8) = 0;
                goto code_r0x08014808;
            }
            if (iVar7 == 2) {
                *(iVar19 + 0x1a8) = 1;
                *(iVar19 + 0x1b0) = ppiStack_1e8;
                *(iVar19 + 0x1b8) = uStack_1f0;
                goto code_r0x08014808;
            }
            ppppiVar11 = 0x2e9;
            _printk(0x8005d5e,"hw_fence_dbg_dump_table_wr",0x2e9,~(-1L << (_simple_open & 0x3f)) & 0x80146e0,iVar7);
        }
    }
    else {
        ppppiVar11 = 0x2d4;
        _printk(0x8007a44,"hw_fence_dbg_dump_table_wr",0x2d4,~(-1L << (_simple_open & 0x3f)) & 0x80146e0,ppppiVar13
                ,0x18);
    }
    ppppiVar13 = 0xfffffffffffffff2;
code_r0x08014808:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_1c8) {
        uVar9 = __stack_chk_fail();
        *extraout_x18_01 = sym._copy_to_user;
        puVar2 = sp_el0;
        uVar14 = (uVar9 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar15 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar15 = uVar9 & uVar14;
        }
        bVar4 = CARRY8(uVar15,ppppiVar11);
        uVar15 = uVar15 + ppppiVar11;
        uVar1 = 0;
        if (!bVar4 || uVar15 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar15 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar15,~uVar1) && !CARRY8(uVar15 + ~uVar1,bVar4) || uVar15 == uVar1 + !bVar4) {
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar15 = daif;
                if ((uVar15 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar15;
            }
            if ((uVar9 & uVar14 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            ppppiVar11 = __arch_copy_to_user(uVar9);
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar14 = daif;
                if ((uVar14 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar14;
            }
        }
        return ppppiVar11;
    }
    return ppppiVar13;
}


// ===== sym.msm_hw_fence_register @ 0x0800a778 (size 1220) =====

uint32_t * sym.msm_hw_fence_register(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t arg2_00;
    uint32_t uVar2;
    int iVar3;
    uint32_t *arg2_01;
    ulong uVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = arg1 & 0xffffffff;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8004091,"msm_hw_fence_register",0x1b,uVar10);
    }
    uVar9 = CONCAT44(*0x8000004,_segment.ehdr);
    if (((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) || (*(uVar9 + 8) == '\0')) {
        uVar9 = -1L << (_simple_open & 0x3f);
        uVar10 = (~uVar9 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar10 = uVar9 | unaff_x30;
        }
        _printk(0x8006c35,"msm_hw_fence_register",0x1e,uVar10);
        return 0xfffffffffffffff5;
    }
    if ((0x28e < arg1) || (arg2 == 0)) {
        uVar9 = arg2 == 0;
        uVar4 = 0x80074a7;
        uVar5 = 0x24;
code_r0x0800aa2c:
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar8 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar8 = uVar7 | unaff_x30;
        }
        _printk(uVar4,"msm_hw_fence_register",uVar5,uVar8,uVar9,uVar10);
        return 0xffffffffffffffea;
    }
    arg2_00 = sym.hw_fence_utils_get_client_id_priv(uVar9,uVar10);
    uVar9 = arg2_00;
    if (0x28e < arg2_00) {
        uVar4 = 0x8007168;
        uVar5 = 0x2b;
        goto code_r0x0800aa2c;
    }
    arg2_01 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x98);
    if (arg2_01 == NULL) {
        return 0xfffffffffffffff4;
    }
    mutex_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0x298);
    iVar6 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c8);
    if (*(iVar6 + uVar9 * 8) != 0) {
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar10 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar10 = uVar8 | unaff_x30;
        }
        _printk(0x8007867,"msm_hw_fence_register",0x37,uVar10,uVar9);
        mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x298);
        kfree(arg2_01);
        return 0xffffffffffffffea;
    }
    *(iVar6 + uVar9 * 8) = arg2_01;
    mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0x298);
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    *arg2_01 = arg2_00;
    arg2_01[1] = arg1;
    uVar2 = sym.hw_fence_ipcc_get_client_virt_id(iVar6,arg2_00);
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    arg2_01[0x1b] = uVar2;
    uVar2 = sym.hw_fence_ipcc_get_client_phys_id(iVar6,arg2_00);
    arg2_01[0x1c] = uVar2;
    if ((arg2_01[0x1b] < 1) || (uVar2 < 1)) {
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar10 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar10 = uVar8 | unaff_x30;
        }
        _printk(0x8004334,"msm_hw_fence_register",0x4a,uVar10,uVar9);
    }
    else {
        uVar2 = sym.hw_fence_ipcc_get_signal_id(CONCAT44(*0x8000004,_segment.ehdr),arg2_00);
        arg2_01[0x1a] = uVar2;
        if (uVar2 < 0) {
            uVar4 = 0x80074e8;
            uVar5 = 0x51;
        }
        else {
            uVar1 = sym.hw_fence_ipcc_needs_rxq_update(CONCAT44(*0x8000004,_segment.ehdr),arg2_00);
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            *(arg2_01 + 0x1d) = uVar1 & 1;
            if (((uVar1 & 1) == 0) || (1 < *(*(iVar6 + 0x20) + uVar9 * 0x14))) {
                uVar1 = sym.hw_fence_ipcc_needs_ipc_irq(iVar6,uVar9);
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                *(arg2_01 + 0x75) = uVar1 & 1;
                uVar1 = sym.hw_fence_utils_skips_txq_wr_idx(iVar6,arg2_00);
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                *(arg2_01 + 0x76) = uVar1 & 1;
                iVar3 = sym.hw_fence_alloc_client_resources(iVar6,arg2_01,arg2);
                if ((iVar3 == 0) &&
                   (iVar3 = sym.hw_fence_init_controller_signal(CONCAT44(*0x8000004,_segment.ehdr),arg2_01),
                   iVar3 == 0)) {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                        _printk(0x8005bb6,"msm_hw_fence_register",0x78,arg2_01,*arg2_01,arg2_01[0x1a],
                                arg2_01[0x1b],arg2_01[0x1c]);
                    }
                    __init_waitqueue_head
                              (arg2_01 + 0x1e,"&hw_fence_client->wait_queue",
                               reloc.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt);
                    return arg2_01;
                }
                goto code_r0x0800abbc;
            }
            uVar4 = 0x8002e50;
            uVar5 = 0x5a;
        }
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar10 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar10 = uVar8 | unaff_x30;
        }
        _printk(uVar4,"msm_hw_fence_register",uVar5,uVar10,uVar9);
    }
    iVar3 = -0x16;
code_r0x0800abbc:
    sym.hw_fence_cleanup_client(CONCAT44(*0x8000004,_segment.ehdr),arg2_01);
    uVar9 = -1L << (_simple_open & 0x3f);
    uVar10 = (~uVar9 | 0xff80000000000000) & unaff_x30;
    if ((unaff_x30 & 0x80000000000000) != 0) {
        uVar10 = uVar9 | unaff_x30;
    }
    _printk(0x80027b5,"msm_hw_fence_register",0x84,uVar10,iVar3);
    return iVar3;
}


// ===== sym.msm_hw_fence_deregister @ 0x0800ac3c (size 348) =====

ulong sym.msm_hw_fence_deregister(uint32_t arg1)

{
    uint64_t uVar1;
    uint32_t *arg2;
    int64_t arg1_00;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    arg2 = arg1;
    *in_x18 = unaff_x30;
    if ((arg2 == NULL) || (0xfffffffffffff000 < arg2)) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x8004ee5,"msm_hw_fence_deregister",0x8e,uVar1);
        uVar2 = 0xffffffea;
    }
    else {
        arg1_00 = CONCAT44(*0x8000004,_segment.ehdr);
        if (*arg2 < *(arg1_00 + 0x34)) {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8005635,"msm_hw_fence_deregister",0x98);
                arg1_00 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            sym.hw_fence_cleanup_client(arg1_00,arg2);
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x800753d,"msm_hw_fence_deregister",0x9d);
            }
            uVar2 = 0;
        }
        else {
            uVar3 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar3 | unaff_x30;
            }
            _printk(0x80052b6,"msm_hw_fence_deregister",0x94,uVar1);
            uVar2 = 0xffffffea;
        }
    }
    return uVar2;
}


// ===== sym.msm_hw_fence_create @ 0x0800ad98 (size 640) =====

int sym.msm_hw_fence_create(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    int64_t iVar8;
    uint64_t *puVar9;
    uint64_t unaff_x30;
    
    uVar4 = arg1;
    *in_x18 = unaff_x30;
    if ((((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) || (arg2 == 0)) ||
       ((iVar8 = *(arg2 + 0x10), iVar8 == 0 || (*(arg2 + 8) == 0)))) {
        uVar5 = 0x80061c1;
        bVar2 = (unaff_x30 & 0x80000000000000) == 0;
        uVar6 = 0xac;
    }
    else {
        if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x2d0) == '\0') {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) != 0) {
                return -0xb;
            }
            _printk(0x8003729,"msm_hw_fence_create",0xb1);
            return -0xb;
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8005635,"msm_hw_fence_create",0xb8);
        }
        if (*(iVar8 + 8) == dma_fence_array_ops) {
            uVar5 = 0x80045e2;
            bVar2 = (unaff_x30 & 0x80000000000000) == 0;
            uVar6 = 0xbd;
        }
        else {
            puVar9 = iVar8 + 0x30;
            if (-1 < *puVar9) {
                iVar3 = sym.hw_fence_create(CONCAT44(*0x8000004,_segment.ehdr),uVar4,*(iVar8 + 0x20),*(iVar8 + 0x28)
                                           );
                if (iVar3 == 0) {
                    Hint_Prefetch(puVar9,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(puVar9,0x10);
                        if (bVar2) {
                            *puVar9 = *puVar9 | 0x80000000;
                            cVar1 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar1 != '\0');
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x800753d,"msm_hw_fence_create",0xd2);
                    }
                    return 0;
                }
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar4 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar4 = uVar7 | unaff_x30;
                }
                _printk(0x8004821,"msm_hw_fence_create",0xcb,uVar4);
                return iVar3;
            }
            uVar5 = 0x8003340;
            bVar2 = (unaff_x30 & 0x80000000000000) == 0;
            uVar6 = 0xc3;
        }
    }
    uVar7 = -1L << (_simple_open & 0x3f);
    uVar4 = (~uVar7 | 0xff80000000000000) & unaff_x30;
    if (!bVar2) {
        uVar4 = uVar7 | unaff_x30;
    }
    _printk(uVar5,"msm_hw_fence_create",uVar6,uVar4);
    return -0x16;
}


// ===== sym.msm_hw_fence_destroy @ 0x0800b018 (size 584) =====

int sym.msm_hw_fence_destroy(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    uint64_t *puVar8;
    uint64_t unaff_x30;
    
    uVar4 = arg1;
    *in_x18 = unaff_x30;
    if (((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) || (arg2 == 0)) {
        uVar5 = 0x80027e7;
        uVar6 = 0xe0;
    }
    else {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8005635,"msm_hw_fence_destroy",0xe5);
        }
        if (*(arg2 + 8) != dma_fence_array_ops) {
            puVar8 = arg2 + 0x30;
            if (-1 < *puVar8) {
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar4 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar4 = uVar7 | unaff_x30;
                }
                _printk(0x8002b45,"msm_hw_fence_destroy",0xf0,uVar4);
                return -0x16;
            }
            iVar3 = sym.hw_fence_destroy(CONCAT44(*0x8000004,_segment.ehdr),uVar4,*(arg2 + 0x20),*(arg2 + 0x28));
            if (iVar3 == 0) {
                Hint_Prefetch(puVar8,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(puVar8,0x10);
                    if (bVar2) {
                        *puVar8 = *puVar8 & 0xffffffff7fffffff;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x800753d,"msm_hw_fence_destroy",0xff);
                }
                return 0;
            }
            uVar7 = -1L << (_simple_open & 0x3f);
            uVar4 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar4 = uVar7 | unaff_x30;
            }
            _printk(0x8006871,"msm_hw_fence_destroy",0xf8,uVar4);
            return iVar3;
        }
        uVar5 = 0x8006c6c;
        uVar6 = 0xea;
    }
    uVar7 = -1L << (_simple_open & 0x3f);
    uVar4 = (~uVar7 | 0xff80000000000000) & unaff_x30;
    if ((unaff_x30 & 0x80000000000000) != 0) {
        uVar4 = uVar7 | unaff_x30;
    }
    _printk(uVar5,"msm_hw_fence_destroy",uVar6,uVar4);
    return -0x16;
}


// ===== sym.msm_hw_fence_destroy_with_handle @ 0x0800b260 (size 472) =====

int sym.msm_hw_fence_destroy_with_handle(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t *arg2_00;
    int64_t arg1_00;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    arg2_00 = arg1;
    *in_x18 = unaff_x30;
    if ((arg2_00 == NULL) || (0xfffffffffffff000 < arg2_00)) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x80027e7,"msm_hw_fence_destroy_with_handle",0x10b,uVar1);
        iVar2 = -0x16;
    }
    else {
        arg1_00 = CONCAT44(*0x8000004,_segment.ehdr);
        if (*arg2_00 < *(arg1_00 + 0x34)) {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8005635,"msm_hw_fence_destroy_with_handle",0x115);
                arg1_00 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            iVar2 = sym.hw_fence_destroy_with_hash(arg1_00,arg2_00,arg2);
            if (iVar2 == 0) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x800753d,"msm_hw_fence_destroy_with_handle",0x11f);
                }
                iVar2 = 0;
            }
            else {
                uVar3 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar3 | unaff_x30;
                }
                _printk(0x80049da,"msm_hw_fence_destroy_with_handle",0x11b,uVar1,arg2,*arg2_00);
            }
        }
        else {
            uVar3 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar3 | unaff_x30;
            }
            _printk(0x80052b6,"msm_hw_fence_destroy_with_handle",0x111,uVar1);
            iVar2 = -0x16;
        }
    }
    return iVar2;
}


// ===== sym.msm_hw_fence_wait_update_v2 @ 0x0800b438 (size 900) =====

uint64_t sym.msm_hw_fence_wait_update_v2(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t *arg2_00;
    ulong uVar2;
    uint64_t uVar3;
    int64_t arg2_01;
    int64_t iVar4;
    ulong uVar5;
    int in_w4;
    int iVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    arg2_00 = arg1;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    if ((((arg2_00 == NULL) || (0xfffffffffffff000 < arg2_00)) || (arg2 == 0)) || (*arg2 == 0)) {
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar3 = uVar7 | unaff_x30;
        }
        _printk(0x80027e7,"msm_hw_fence_wait_update_v2",0x12f,uVar3);
        uVar1 = 0xffffffea;
    }
    else if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x2d0) == '\0') {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8004c89,"msm_hw_fence_wait_update_v2",0x134);
            uVar1 = 0xfffffff5;
        }
        else {
            uVar1 = 0xfffffff5;
        }
    }
    else {
        uVar1 = sym.hw_fence_get_client_data_id(*arg2_00);
        if ((arg4 == 0) || (uVar1 < 5)) {
            if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x30) < *arg2_00) {
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar3 = uVar7 | unaff_x30;
                }
                _printk(0x800486b,"msm_hw_fence_wait_update_v2",0x142,uVar3,*arg2_00,arg2_00[1]);
                uVar1 = 0xffffffea;
            }
            else {
                if ((~_segment.ehdr & 0x10001) == 0) {
                    _printk(0x8005635,"msm_hw_fence_wait_update_v2",0x146);
                }
                if (in_w4 != 0) {
                    iVar6 = 0;
                    do {
                        iVar4 = *(arg2 + iVar6 * 8);
                        uStack_70 = 0;
                        if (*(iVar4 + 8) == dma_fence_array_ops && iVar4 != 0) {
                            uVar1 = sym.hw_fence_process_fence_array
                                              (CONCAT44(*0x8000004,_segment.ehdr),arg2_00,iVar4,&uStack_70);
                            if (uVar1 != 0) {
                                uVar2 = 0x800564f;
                                uVar5 = 0x156;
                                goto code_r0x0800b798;
                            }
                        }
                        else {
                            uVar1 = sym.hw_fence_process_fence
                                              (CONCAT44(*0x8000004,_segment.ehdr),arg2_00,iVar4,&uStack_70);
                            if (uVar1 != 0) {
                                uVar2 = 0x80052e8;
                                uVar5 = 0x15e;
code_r0x0800b798:
                                uVar7 = -1L << (_simple_open & 0x3f);
                                uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar3 = uVar7 | unaff_x30;
                                }
                                _printk(uVar2,"msm_hw_fence_wait_update_v2",uVar5,uVar3);
                                goto code_r0x0800b6b8;
                            }
                        }
                        if (arg3 != 0) {
                            *(arg3 + iVar6 * 8) = uStack_70;
                        }
                        iVar6 = iVar6 + 1;
                    } while (in_w4 != iVar6);
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                    _printk(0x800753d,"msm_hw_fence_wait_update_v2",0x167);
                }
                uVar1 = 0;
            }
        }
        else {
            uVar7 = -1L << (_simple_open & 0x3f);
            uVar3 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar7 | unaff_x30;
            }
            _printk(0x80068ac,"msm_hw_fence_wait_update_v2",0x13c,uVar3,*arg2_00);
            uVar1 = 0xffffffea;
        }
    }
code_r0x0800b6b8:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        uVar1 = __stack_chk_fail();
        *extraout_x18 = sym.msm_hw_fence_wait_update;
        uVar3 = sym.msm_hw_fence_wait_update_v2(uVar1,arg2_01,0,0);
        return uVar3;
    }
    return uVar1;
}


// ===== sym.msm_hw_fence_wait_update @ 0x0800b7bc (size 52) =====

void sym.msm_hw_fence_wait_update(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.msm_hw_fence_wait_update_v2(arg1,arg2,0,0);
    return;
}


// ===== sym.msm_hw_fence_reset_client @ 0x0800b7f0 (size 360) =====

ulong sym.msm_hw_fence_reset_client(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int iVar2;
    uint *arg2_00;
    int64_t arg1_00;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t unaff_x30;
    
    arg2_00 = arg1;
    *in_x18 = unaff_x30;
    if ((arg2_00 == NULL) || (0xfffffffffffff000 < arg2_00)) {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar4 | unaff_x30;
        }
        _printk(0x8007638,"msm_hw_fence_reset_client",0x17c,uVar1);
        uVar3 = 0xffffffea;
    }
    else {
        arg1_00 = CONCAT44(*0x8000004,_segment.ehdr);
        if (*(arg1_00 + 0x2d0) == '\0') {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8007af2,"msm_hw_fence_reset_client",0x181);
            }
            uVar3 = 0xfffffff5;
        }
        else {
            iVar5 = *(arg1_00 + 0x38);
            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                _printk(0x8005689,"msm_hw_fence_reset_client",0x188,*arg2_00);
                arg1_00 = CONCAT44(*0x8000004,_segment.ehdr);
                iVar2 = *(arg1_00 + 0x40);
            }
            else {
                iVar2 = *(arg1_00 + 0x40);
            }
            if (iVar2 != 0) {
                uVar6 = 0;
                do {
                    sym.hw_fence_utils_cleanup_fence(arg1_00,arg2_00,iVar5 + uVar6 * 0xa0,uVar6);
                    arg1_00 = CONCAT44(*0x8000004,_segment.ehdr);
                    uVar6 = uVar6 + 1;
                } while (uVar6 < *(arg1_00 + 0x40));
            }
            sym.hw_fence_utils_reset_queues(arg1_00,arg2_00);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.msm_hw_fence_reset_client_by_id @ 0x0800b958 (size 284) =====

ulong sym.msm_hw_fence_reset_client_by_id(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    uint64_t arg2_00;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = arg1;
    if (arg1 < 0x28f) {
        uVar2 = sym.hw_fence_utils_get_client_id_priv(_segment.ehdr,arg2_00);
        if (uVar2 < 0x28f) {
            uVar3 = sym.msm_hw_fence_reset_client(*(*(_segment.ehdr + 0x2c8) + uVar2 * 8),arg2 & 0xffffffff);
        }
        else {
            uVar4 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar4 | unaff_x30;
            }
            _printk(0x8004a4e,"msm_hw_fence_reset_client_by_id",0x19f,uVar1,uVar2,arg2_00);
            uVar3 = 0xffffffea;
        }
    }
    else {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar4 | unaff_x30;
        }
        _printk(0x800377d,"msm_hw_fence_reset_client_by_id",0x198,uVar1,arg2_00);
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.msm_hw_fence_update_txq @ 0x0800ba74 (size 336) =====

ulong sym.msm_hw_fence_update_txq(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    uVar1 = arg1;
    *in_x18 = unaff_x30;
    if ((((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) || (*(_segment.ehdr + 8) == '\0')) ||
       (*(_segment.ehdr + 0x2d0) == '\0')) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x800654c,"msm_hw_fence_update_txq",0x1ae,uVar1);
        uVar2 = 0xfffffff5;
    }
    else if ((0xfffffffffffff000 < uVar1 == (uVar1 == 0)) && (arg2 < *(_segment.ehdr + 0x40))) {
        iVar5 = *(_segment.ehdr + 0x38) + arg2 * 0xa0;
        sym.hw_fence_update_queue(_segment.ehdr,uVar1,*(iVar5 + 8),*(iVar5 + 0x10));
        uVar2 = 0;
    }
    else {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar3 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar3 = uVar4 | unaff_x30;
        }
        _printk(0x800766c,"msm_hw_fence_update_txq",0x1b3,uVar3,arg2,uVar1 == 0 || 0xfffffffffffff000 < uVar1);
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.msm_hw_fence_trigger_signal @ 0x0800bbc4 (size 340) =====

ulong sym.msm_hw_fence_trigger_signal(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    puVar1 = arg1;
    *in_x18 = unaff_x30;
    uVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) || (*(uVar3 + 8) == '\0')) || (*(uVar3 + 0x2d0) == '\0')) {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar3 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar3 = uVar4 | unaff_x30;
        }
        _printk(0x80040bd,"msm_hw_fence_trigger_signal",0x1cb,uVar3);
        uVar2 = 0xfffffff5;
    }
    else if ((puVar1 == NULL) || (0xfffffffffffff000 < puVar1)) {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar3 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar3 = uVar4 | unaff_x30;
        }
        _printk(0x8004394,"msm_hw_fence_trigger_signal",0x1ce,uVar3);
        uVar2 = 0xffffffea;
    }
    else {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x8006cb8,"msm_hw_fence_trigger_signal",0x1d3,*puVar1);
            uVar3 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        sym.hw_fence_ipcc_trigger_signal(uVar3,arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.msm_hw_fence_driver_doorbell_sim @ 0x0800bd18 (size 236) =====

ulong sym.msm_hw_fence_driver_doorbell_sim(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) || (*(uVar2 + 8) == '\0')) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar3 | unaff_x30;
        }
        _printk(0x8006c35,"msm_hw_fence_driver_doorbell_sim",0x1df,uVar2);
        uVar1 = 0xfffffff5;
    }
    else {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
            uVar1 = sym.hw_fence_get_qtime(uVar2);
            _printk(0x8007ddf,"msm_hw_fence_driver_doorbell_sim",0x1e4,arg1,uVar1);
            uVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        sym.hw_fence_utils_process_doorbell_mask(uVar2,arg1);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.msm_hw_fence_probe @ 0x0800be04 (size 704) =====

int sym.msm_hw_fence_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8005635,"msm_hw_fence_probe",0x214);
    }
    if (arg1 == 0) {
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar6 | unaff_x30;
        }
        _printk(0x8002ec1,"msm_hw_fence_probe",0x217,uVar2);
        iVar4 = -0x16;
    }
    else if (reloc.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt == 0x0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10004) == 0) {
            _printk(0x80078a9,"msm_hw_fence_probe",0x21c);
        }
        iVar4 = -0x5f;
    }
    else {
        iVar4 = of_device_is_compatible(*(arg1 + 0x300),0x800531d);
        if (iVar4 == 0) {
            iVar4 = -0x16;
        }
        else {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                _printk(0x8005635,"msm_hw_fence_probe_init",0x1f0);
            }
            piVar5 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x2d8);
            if (piVar5 == NULL) {
                iVar4 = -0xc;
                _segment.ehdr = NULL;
            }
            else {
                _segment.ehdr = piVar5;
                *(arg1 + 0xa8) = piVar5;
                *piVar5 = arg1 + 0x10;
                iVar4 = sym.hw_fence_init(piVar5);
                piVar5 = _segment.ehdr;
                if (iVar4 == 0) {
                    __mutex_init(_segment.ehdr + 0x53,"&hw_fence_drv_data->clients_register_lock",0x8000741);
                    uVar3 = _segment.ehdr;
                    uVar1 = _segment.ehdr ^ 0xffffffff;
                    *(_segment.ehdr + 1) = 1;
                    if ((uVar1 & 0x10001) == 0) {
                        _printk(0x800753d,"msm_hw_fence_probe_init",0x203);
                        uVar3 = _segment.ehdr;
                    }
                    if (((uVar3 ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x800753d,"msm_hw_fence_probe",0x225);
                    }
                    return 0;
                }
                *(arg1 + 0xa8) = 0;
                kfree(piVar5);
                _segment.ehdr = 0xfffffffffffffdfb;
                uVar6 = -1L << (_simple_open & 0x3f);
                uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar2 = uVar6 | unaff_x30;
                }
                _printk(0x8006cea,"msm_hw_fence_probe_init",0x20c,uVar2,iVar4);
            }
        }
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar6 | unaff_x30;
        }
        _printk(0x8006cea,"msm_hw_fence_probe",0x22a,uVar2,iVar4);
    }
    return iVar4;
}


// ===== sym.msm_hw_fence_remove @ 0x0800c0c4 (size 316) =====

ulong sym.msm_hw_fence_remove(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8005635,"msm_hw_fence_remove",0x230);
    }
    if (arg1 == 0) {
        uVar3 = 0x8002ec1;
        uVar4 = 0x233;
    }
    else {
        _segment.ehdr = *(arg1 + 0xa8);
        if (_segment.ehdr != 0) {
            *(arg1 + 0xa8) = 0;
            kfree();
            uVar1 = _segment.ehdr ^ 0xffffffff;
            _segment.ehdr = 0xfffffffffffffdfb;
            if ((uVar1 & 0x10001) == 0) {
                _printk(0x800753d,"msm_hw_fence_remove",0x241);
            }
            return 0;
        }
        uVar3 = 0x80078dd;
        uVar4 = 0x239;
        _segment.ehdr = 0;
    }
    uVar5 = -1L << (_simple_open & 0x3f);
    uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
    if ((unaff_x30 & 0x80000000000000) != 0) {
        uVar2 = uVar5 | unaff_x30;
    }
    _printk(uVar3,"msm_hw_fence_remove",uVar4,uVar2);
    return 0xffffffea;
}


// ===== sym.__cfi_check_fail @ 0x0800c200 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800c244

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
    //switch table (4 cases) at 0x80027b0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800c258);
    (*pcVar1)();
}


// ===== sym.hw_fence_get_qtime @ 0x0800c258 (size 84) =====

void sym.hw_fence_get_qtime(void)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _kmem_cache_alloc_trace;
    __cfi_slowpath_diag(0x19e9081ee75ef79b,_kmem_cache_alloc_trace,0x8002730);
    (*pcVar1)();
    return;
}


// ===== sym._get_queue_type @ 0x0800c2ac (size 36) =====

ulong sym._get_queue_type(uint32_t arg1)

{
    ulong uVar1;
    
    uVar1 = 0x80059da;
    if (arg1 != 1) {
        uVar1 = 0x80069a5;
    }
    return uVar1;
}


// ===== sym.hw_fence_read_queue @ 0x0800c2d0 (size 736) =====

uint64_t sym.hw_fence_read_queue(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    int64_t iVar10;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg2 == 0) || (arg1 == 0)) || (1 < arg3)) {
        uVar9 = -1L << (_simple_open & 0x3f);
        uVar7 = (~uVar9 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar7 = uVar9 | unaff_x30;
        }
        _printk(0x8006e0a,"hw_fence_read_queue",0xa3,uVar7,arg3 & 0xffffffff,arg1,arg2);
        uVar7 = 0xffffffea;
    }
    else {
        if (2 < arg3) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x800c5b0);
            (*pcVar3)();
        }
        iVar1 = arg1 + (arg3 & 0xffffffffU) * 0x20;
        iVar10 = *(iVar1 + 0x38);
        uVar2 = *(iVar1 + 0x30);
        if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x8003523,"hw_fence_read_queue",0xac,0x40);
        }
        if (iVar10 == 0) {
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar7 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar7 = uVar9 | unaff_x30;
            }
            _printk(0x8005e95,"hw_fence_read_queue",0xaf,uVar7);
            uVar7 = 0xffffffea;
        }
        else {
            DataSynchronizationBarrier(3,3,0);
            arg1_00 = iVar10 + 0x30;
            uVar4 = sym.readl_relaxed(arg1_00);
            uVar5 = sym.readl_relaxed(iVar10 + 0x34);
            if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
                _printk(0x800462e,"hw_fence_read_queue",0xbc,*arg1,arg1_00,iVar10 + 0x34,uVar4,uVar5,
                        iVar1 + 0x28);
            }
            if (uVar4 == uVar5) {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
                    _printk(0x8004aa4,"hw_fence_read_queue",0xbf);
                    uVar7 = 0;
                }
                else {
                    uVar7 = 0;
                }
            }
            else {
                iVar10 = *(iVar1 + 0x28);
                iVar1 = iVar10 + uVar4 * 4;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
                    _printk(0x8002ef0,"hw_fence_read_queue",199,iVar1,iVar10,
                            *(arg1 + (arg3 & 0xffffffffU) * 0x20 + 0x40),iVar1);
                }
                uVar4 = uVar4 + 0x10;
                if (uVar2 >> 2 <= uVar4) {
                    uVar4 = 0;
                }
                uVar8 = sym.readq_relaxed(iVar1 + 8);
                *(arg2 + 8) = uVar8;
                uVar8 = sym.readq_relaxed(iVar1 + 0x10);
                *(arg2 + 0x10) = uVar8;
                uVar8 = sym.readq_relaxed(iVar1 + 0x18);
                *(arg2 + 0x18) = uVar8;
                uVar8 = sym.readq_relaxed(iVar1 + 0x20);
                *(arg2 + 0x20) = uVar8;
                uVar8 = sym.readq_relaxed(iVar1 + 0x28);
                *(arg2 + 0x28) = uVar8;
                uVar6 = sym.readl_relaxed(iVar1 + 0x30);
                *(arg2 + 0x30) = uVar6;
                sym.writel_relaxed(uVar4,arg1_00);
                DataSynchronizationBarrier(3,2,0);
                uVar7 = uVar4 != uVar5;
            }
        }
    }
    return uVar7;
}


// ===== sym.readl_relaxed @ 0x0800c5b0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800c5b4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800c5e8);
    return uVar1;
}


// ===== sym.readl_relaxed_1 @ 0x0800c620 (size 108) =====

uint sym.readl_relaxed_1(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800c624);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800c658);
    return uVar1;
}


// ===== sym.readl_relaxed_2 @ 0x0800c690 (size 108) =====

uint sym.readl_relaxed_2(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x800c694);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800c6c8);
    return uVar1;
}


// ===== sym.readq_relaxed @ 0x0800c700 (size 108) =====

ulong sym.readq_relaxed(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x800c704);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x40,arg1,0x800c738);
    return uVar1;
}


// ===== sym.readq_relaxed_1 @ 0x0800c770 (size 108) =====

ulong sym.readq_relaxed_1(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x800c774);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x40,arg1,0x800c7a8);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x0800c7e0 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800c7fc);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800c824);
    return;
}


// ===== sym.writel_relaxed_1 @ 0x0800c858 (size 120) =====

void sym.writel_relaxed_1(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800c874);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800c89c);
    return;
}


// ===== sym.hw_fence_update_queue @ 0x0800c8d0 (size 1348) =====

uint sym.hw_fence_update_queue(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    bool bVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong uVar9;
    int64_t in_x4;
    int64_t in_x5;
    uint64_t uVar10;
    int64_t in_x6;
    uint32_t in_w7;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t *in_x18;
    uint uVar13;
    int64_t iVar14;
    int64_t arg1_00;
    uint64_t unaff_x30;
    uint32_t in_stack_00000000;
    uint64_t uStack_b0;
    
    *in_x18 = unaff_x30;
    uVar6 = *arg2;
    uVar10 = uVar6;
    if (*(*(arg1 + 0x20) + uVar10 * 0x14) <= in_stack_00000000) {
        uVar8 = 0x800285c;
        uVar9 = 0x101;
        uVar12 = -1L << (_simple_open & 0x3f);
        uVar11 = (~uVar12 | 0xff80000000000000) & unaff_x30;
        uVar6 = in_stack_00000000;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar11 = uVar12 | unaff_x30;
        }
code_r0x0800cde0:
        _printk(uVar8,"hw_fence_update_queue",uVar9,uVar11,uVar6,uVar10);
        return 0xffffffea;
    }
    if (2 < in_stack_00000000) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x800ce14);
        (*pcVar5)();
    }
    iVar2 = arg2 + in_stack_00000000 * 0x20;
    iVar14 = *(iVar2 + 0x38);
    if (iVar14 == 0) {
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar10 = uVar11 | unaff_x30;
        }
        _printk(0x8005e95,"hw_fence_update_queue",0x10d,uVar10);
        return 0xffffffea;
    }
    uVar3 = *(iVar2 + 0x30);
    if (in_stack_00000000 == 0) {
        if (*(arg2 + 0x76) == '\0') goto code_r0x0800c9e0;
        arg1_00 = iVar14 + 0x1c;
    }
    else {
        arg1_00 = iVar14 + 0x34;
        if (in_stack_00000000 == 1) {
            uStack_b0 = uVar6 - 1;
            if (*(arg1 + 0x50) <= uVar6 - 1) {
                uVar8 = 0x8006e61;
                uVar9 = 0x122;
                uVar10 = *(arg1 + 0x50);
                uVar12 = -1L << (_simple_open & 0x3f);
                uVar11 = (~uVar12 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar11 = uVar12 | unaff_x30;
                }
                goto code_r0x0800cde0;
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
                _printk(0x8003ab2,"hw_fence_update_queue",0x125,uVar10,uStack_b0);
            }
            sym.global_atomic_store(arg1,*(arg1 + 0x48) + uStack_b0 * 8);
            bVar4 = false;
            uVar8 = 0x80059da;
            goto code_r0x0800c9f4;
        }
code_r0x0800c9e0:
        arg1_00 = iVar14 + 0x34;
    }
    uStack_b0 = 0;
    bVar4 = true;
    uVar8 = 0x80069a5;
code_r0x0800c9f4:
    uVar3 = uVar3 >> 2;
    DataSynchronizationBarrier(3,3,0);
    uVar6 = sym.readl_relaxed(iVar14 + 0x30);
    uVar7 = sym.readl_relaxed(arg1_00);
    if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
        _printk(0x8003c30,"hw_fence_update_queue",0x135,*arg2,iVar14 + 0x30,arg1_00,uVar6,uVar7,iVar2 + 0x28);
    }
    uVar1 = 0;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
        uVar1 = uVar3;
    }
    uVar1 = uVar1 + (uVar6 - uVar7);
    if (uVar1 < 0x11) {
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar10 = uVar11 | unaff_x30;
        }
        _printk(0x8004f4d,"hw_fence_update_queue",0x13b,uVar10,0x10);
        uVar13 = 0xffffffea;
    }
    else {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x8003c9a,"hw_fence_update_queue",0x13f,uVar1,0x10);
        }
        iVar14 = *(iVar2 + 0x28);
        iVar2 = iVar14 + uVar7 * 4;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x80061ec,"hw_fence_update_queue",0x145,iVar2,iVar14,*(arg2 + in_stack_00000000 * 0x20 + 0x40)
                    ,iVar2);
        }
        uVar6 = uVar7 + 0x10;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
            _printk(0x8005ec0,"hw_fence_update_queue",0x14b,uVar6,uVar7,0x10);
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
            _printk(0x800659c,"hw_fence_update_queue",0x14e,*arg2,uVar8,in_x4,arg3,arg4,in_x5,in_w7);
        }
        if (uVar3 <= uVar6) {
            uVar6 = 0;
        }
        sym.writeq_relaxed(0x40,iVar2);
        sym.writew_relaxed(1,iVar2 + 4);
        sym.writew_relaxed(0x100,iVar2 + 6);
        sym.writeq_relaxed(arg3,iVar2 + 8);
        sym.writeq_relaxed(arg4,iVar2 + 0x10);
        sym.writeq_relaxed(in_x4,iVar2 + 0x18);
        sym.writeq_relaxed(in_x5,iVar2 + 0x20);
        sym.writeq_relaxed(in_x6,iVar2 + 0x28);
        sym.writel_relaxed(in_w7,iVar2 + 0x30);
        pcVar5 = _kmem_cache_alloc_trace;
        __cfi_slowpath_diag(0x19e9081ee75ef79b,_kmem_cache_alloc_trace,0x8002730);
        uVar10 = (*pcVar5)();
        sym.writel_relaxed(uVar10,iVar2 + 0x34);
        sym.writel_relaxed(uVar10 >> 0x20,iVar2 + 0x38);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(uVar6,arg1_00);
        DataSynchronizationBarrier(3,2,0);
        uVar13 = 0;
    }
    if (!bVar4) {
        sym.global_atomic_store(arg1,*(arg1 + 0x48) + uStack_b0 * 8);
    }
    return uVar13;
}


// ===== sym.writeq_relaxed @ 0x0800ce14 (size 108) =====

void sym.writeq_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1,0x40,arg2,0x800ce18);
    *arg2 = arg1;
    log_post_write_mmio(arg1,0x40,arg2,0x800ce50);
    return;
}


// ===== sym.writew_relaxed @ 0x0800ce80 (size 120) =====

void sym.writew_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffU,0x10,arg2,0x800cea0);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffU,0x10,arg2,0x800cec4);
    return;
}


// ===== sym.hw_fence_init @ 0x0800cef8 (size 1272) =====

//WARNING: Removing unreachable block (ram,0x0800d4bc)

int sym.hw_fence_init(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    char *pcVar9;
    uint *puVar10;
    ulong *arg3;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar12 [16];
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar7 = sym.hw_fence_utils_parse_dt_props(arg1);
    if (iVar7 == 0) {
        iVar7 = sym.hw_fence_utils_alloc_mem(arg1);
        if (iVar7 == 0) {
            iVar7 = sym.init_hw_fences_queues(arg1,0,arg1 + 0x98,arg1 + 0xb8);
            if (iVar7 == 0) {
                uStack_58 = 0;
                uStack_50 = 0;
                iVar7 = sym.hw_fence_utils_reserve_mem(arg1,1,&uStack_50,&uStack_58);
                if (iVar7 == 0) {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                        _printk(0x8007b37,"init_global_locks",0x184,uStack_50,uStack_58,0);
                    }
                    uVar1 = _segment.ehdr ^ 0xffffffff;
                    *(arg1 + 0x88) = 0;
                    *(arg1 + 0x90) = 0;
                    *(arg1 + 0x48) = uStack_58;
                    *(arg1 + 0x78) = uStack_58;
                    *(arg1 + 0x80) = uStack_50;
                    *(arg1 + 0x50) = 0;
                    if ((uVar1 & 0x10008) == 0) {
                        _printk(0x8003ae7,"hw_fence_init",0x1e2);
                    }
                    arg3 = &uStack_50;
                    uStack_58 = 0;
                    uStack_50 = 0;
                    iVar7 = sym.hw_fence_utils_reserve_mem(arg1,2,arg3,&uStack_58);
                    if (iVar7 == 0) {
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                            arg3 = 0x1a2;
                            _printk(0x8007b37,"init_hw_fences_table",0x1a2,uStack_50,uStack_58,0);
                        }
                        uVar1 = _segment.ehdr ^ 0xffffffff;
                        *(arg1 + 0x68) = 0;
                        *(arg1 + 0x70) = 0;
                        *(arg1 + 0x38) = uStack_58;
                        *(arg1 + 0x58) = uStack_58;
                        *(arg1 + 0x60) = uStack_50;
                        *(arg1 + 0x40) = 0;
                        if ((uVar1 & 0x10008) == 0) {
                            arg3 = 0x1b1;
                            _printk(0x80040fa,"init_hw_fences_table");
                        }
                        iVar7 = sym.hw_fence_utils_map_ipcc(arg1);
                        if (iVar7 == 0) {
                            iVar7 = sym.hw_fence_utils_map_qtime(arg1);
                            if (iVar7 == 0) {
                                iVar7 = sym.hw_fence_utils_map_ctl_start(arg1);
                                if (iVar7 != 0) {
                                    arg3 = 0x1fd;
                                    uVar11 = -1L << (_simple_open & 0x3f);
                                    uVar2 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                                    if ((unaff_x30 & 0x80000000000000) != 0) {
                                        uVar2 = uVar11 | unaff_x30;
                                    }
                                    _printk(0x8003ec6,"hw_fence_init",0x1fd,uVar2);
                                }
                                iVar7 = sym.hw_fence_debug_debugfs_register(arg1);
                                if (iVar7 == 0) {
                                    iVar7 = sym.hw_fence_utils_init_virq(arg1);
                                    if (iVar7 == 0) {
                                        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                                            arg3 = 0x20f;
                                            _printk(0x800790b,"hw_fence_init",0x20f,*(arg1 + 0xf8),**(arg1 + 0xf8));
                                        }
                                        if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                                            arg3 = 0x212;
                                            _printk(0x8003385,"hw_fence_init",0x212,*(arg1 + 0x38),*(arg1 + 0x40));
                                        }
                                        iVar7 = 0;
                                        goto code_r0x0800d364;
                                    }
                                    bVar6 = (unaff_x30 & 0x80000000000000) == 0;
                                    uVar8 = 0x80069df;
                                    pcVar9 = "hw_fence_init";
                                    arg3 = 0x20a;
                                }
                                else {
                                    bVar6 = (unaff_x30 & 0x80000000000000) == 0;
                                    uVar8 = 0x80043cd;
                                    pcVar9 = "hw_fence_init";
                                    arg3 = 0x203;
                                }
                            }
                            else {
                                bVar6 = (unaff_x30 & 0x80000000000000) == 0;
                                uVar8 = 0x8007701;
                                pcVar9 = "hw_fence_init";
                                arg3 = 0x1f3;
                            }
                        }
                        else {
                            bVar6 = (unaff_x30 & 0x80000000000000) == 0;
                            uVar8 = 0x80069a9;
                            pcVar9 = "hw_fence_init";
                            arg3 = 0x1ec;
                        }
                        goto code_r0x0800d348;
                    }
                    uVar8 = 0x8005f5a;
                    pcVar9 = "init_hw_fences_table";
                    arg3 = 0x19f;
                }
                else {
                    uVar8 = 0x8002925;
                    pcVar9 = "init_global_locks";
                    arg3 = 0x181;
                }
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar2 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar2 = uVar11 | unaff_x30;
                }
                _printk(uVar8,pcVar9,arg3,uVar2,iVar7);
                iVar7 = -0xc;
                goto code_r0x0800d364;
            }
            bVar6 = (unaff_x30 & 0x80000000000000) == 0;
            uVar8 = 0x8006671;
            pcVar9 = "init_ctrl_queue";
            arg3 = 0x1c2;
        }
        else {
            bVar6 = (unaff_x30 & 0x80000000000000) == 0;
            uVar8 = 0x80076c8;
            pcVar9 = "hw_fence_init";
            arg3 = 0x1d5;
        }
    }
    else {
        bVar6 = (unaff_x30 & 0x80000000000000) == 0;
        uVar8 = 0x800354d;
        pcVar9 = "hw_fence_init";
        arg3 = 0x1ce;
    }
code_r0x0800d348:
    uVar11 = -1L << (_simple_open & 0x3f);
    uVar2 = (~uVar11 | 0xff80000000000000) & unaff_x30;
    if (!bVar6) {
        uVar2 = uVar11 | unaff_x30;
    }
    _printk(uVar8,pcVar9,arg3,uVar2);
code_r0x0800d364:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        auVar12 = __stack_chk_fail();
        puVar10 = auVar12._8_8_;
        *extraout_x18 = sym.hw_fence_alloc_client_resources;
        iVar7 = sym.init_hw_fences_queues(auVar12._0_8_,3,puVar10 + 2,puVar10 + 10);
        if (iVar7 == 0) {
            uVar3 = *(puVar10 + 8);
            uVar8 = *(puVar10 + 2);
            uVar4 = *(puVar10 + 4);
            arg3[2] = *(puVar10 + 6);
            arg3[3] = uVar3;
            *arg3 = uVar8;
            arg3[1] = uVar4;
        }
        else {
            _printk(0x80071b3,"hw_fence_alloc_client_resources",0x225,~(-1L << (_simple_open & 0x3f)) & 0x800d3f0,
                    *puVar10);
        }
        return iVar7;
    }
    return iVar7;
}


// ===== sym.hw_fence_alloc_client_resources @ 0x0800d3f0 (size 216) =====

int sym.hw_fence_alloc_client_resources(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sym.init_hw_fences_queues(arg1,3,arg2 + 8,arg2 + 0x28);
    if (iVar5 == 0) {
        uVar3 = *(arg2 + 0x20);
        uVar2 = *(arg2 + 8);
        uVar4 = *(arg2 + 0x10);
        *(arg3 + 0x10) = *(arg2 + 0x18);
        *(arg3 + 0x18) = uVar3;
        *arg3 = uVar2;
        *(arg3 + 8) = uVar4;
    }
    else {
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar6 | unaff_x30;
        }
        _printk(0x80071b3,"hw_fence_alloc_client_resources",0x225,uVar1,*arg2);
    }
    return iVar5;
}


// ===== sym.init_hw_fences_queues @ 0x0800d4c8 (size 1008) =====

//WARNING: Removing unreachable block (ram,0x0800d9c8)

ulong sym.init_hw_fences_queues(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    char *pcVar5;
    char cVar6;
    int iVar7;
    ulong uVar8;
    ulong uVar9;
    uint32_t in_w4;
    uint64_t in_x5;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint uVar12;
    uint *puVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    uint uVar17;
    uint64_t uVar18;
    int iVar19;
    uint64_t unaff_x30;
    uchar auVar20 [16];
    int64_t iStack_78;
    uint *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    uVar18 = in_x5 & 0xffffffff;
    uVar14 = arg2 & 0xffffffff;
    iStack_78 = 0;
    puStack_70 = NULL;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
        _printk(0x8002c75,"init_hw_fences_queues",0x29,uVar14,uVar18);
    }
    if (arg2 == 3) {
        if (*(arg1 + 0x34) <= in_x5) {
            uVar8 = 0x800446b;
            uVar9 = 0x32;
            goto code_r0x0800d890;
        }
        uVar12 = 0x40;
        uVar15 = in_w4 * 0x38 + 0x18;
        iVar19 = *(*(arg1 + 0x20) + in_x5 * 0x14 + 4) << 6;
    }
    else {
        if (arg2 != 0) {
            uVar8 = 0x8003800;
            uVar9 = 0x3c;
            uVar18 = uVar14;
code_r0x0800d890:
            uVar11 = -1L << (_simple_open & 0x3f);
            uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar14 = uVar11 | unaff_x30;
            }
            _printk(uVar8,"init_hw_fences_queues",uVar9,uVar14,uVar18);
            uVar8 = 0xffffffea;
            goto code_r0x0800d7f0;
        }
        iVar19 = *(arg1 + 0x18);
        uVar15 = 0x88;
        uVar12 = 0x18;
    }
    iVar7 = sym.hw_fence_utils_reserve_mem(arg1,uVar14,&iStack_78,&puStack_70);
    if (iVar7 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
            _printk(0x8007b37,"init_hw_fences_queues",0x46,iStack_78,puStack_70,0);
        }
        uVar4 = _segment.ehdr ^ 0xffffffff;
        *arg3 = puStack_70;
        *(arg3 + 8) = iStack_78;
        *(arg3 + 0x10) = 0;
        *(arg3 + 0x18) = 0;
        if ((uVar4 & 0x10008) == 0) {
            _printk(0x8004cc4,"init_hw_fences_queues",0x4e);
        }
        *puStack_70 = 0;
        uVar4 = _segment.ehdr;
        puStack_70[4] = in_w4;
        puStack_70[5] = in_w4;
        *(puStack_70 + 2) = 0x3800000018;
        puStack_70[1] = 0;
        if (((uVar4 ^ 0xffffffff) & 0x10008) == 0) {
            _printk(0x800491d,"init_hw_fences_queues",0x61);
        }
        if (0 < in_w4) {
            iVar7 = 0;
            iVar16 = 0;
            puVar13 = puStack_70 + 6;
            do {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x80035f5,"init_hw_fences_queues",0x65,iVar7);
                }
                puVar13[3] = iVar19;
                puVar13[4] = uVar12;
                iVar1 = iStack_78 + uVar15;
                uVar17 = 1;
                if (iVar16 != 0) {
                    uVar17 = 2;
                }
                iVar2 = puStack_70 + uVar15;
                puVar13[1] = iVar1;
                puVar13[2] = uVar17;
                piVar3 = arg4 + iVar16;
                *piVar3 = iVar2;
                piVar3[2] = puVar13;
                piVar3[3] = iVar1;
                *(piVar3 + 1) = iVar19;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    pcVar5 = "TX_QUEUE";
                    if (puVar13[2] != 1) {
                        pcVar5 = "RX_QUEUE";
                    }
                    _printk(0x8006a69,"init_hw_fences_queues",0x80,pcVar5,in_x5 & 0xffffffff,iVar7,iVar2,iVar1,
                            puVar13,iVar19,uVar12);
                }
                puVar13 = puVar13 + 0xe;
                iVar16 = iVar16 + 0x20;
                iVar7 = iVar7 + 1;
                uVar15 = uVar15 + iVar19;
            } while (in_w4 * 0x20 - iVar16 != 0);
        }
        uVar8 = 0;
    }
    else {
        uVar10 = -1L << (_simple_open & 0x3f);
        uVar11 = (~uVar10 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar11 = uVar10 | unaff_x30;
        }
        _printk(0x800468f,"init_hw_fences_queues",0x43,uVar11,uVar14,uVar18);
        uVar8 = 0xfffffff4;
    }
code_r0x0800d7f0:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    auVar20 = __stack_chk_fail(uVar8);
    iVar16 = auVar20._0_8_;
    *extraout_x18 = sym.hw_fence_init_controller_signal;
    iVar19 = *auVar20._8_8_;
    switch(iVar19) {
    case 1:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x4f:
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80037b3,"hw_fence_init_controller_signal",0x256,iVar19,*(iVar16 + 0x2d1));
            cVar6 = *(iVar16 + 0x2d1);
        }
        else {
            cVar6 = *(iVar16 + 0x2d1);
        }
        if (cVar6 == '\0') {
            *(iVar16 + 0x2d1) = 1;
            sym.hw_fence_ipcc_enable_dpu_signaling(iVar16);
        }
        break;
    default:
        if (0x1ff < iVar19 - 0x8fU) {
            _printk(0x800624f,"hw_fence_init_controller_signal",0x26a,~(-1L << (_simple_open & 0x3f)) & 0x800d8b8,
                    iVar19);
            return 0xffffffea;
        }
    }
    return 0;
}


// ===== sym.hw_fence_init_controller_signal @ 0x0800d8b8 (size 288) =====

ulong sym.hw_fence_init_controller_signal(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int iVar2;
    char cVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *arg2;
    if (iVar2 - 1U < 0x4f) {
    //switch table (79 cases) at 0x8008058
        switch(*((iVar2 - 1U) + 0x8008058) * 4 + 0x800d8fc) {
        case 0x800d900:
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x80037b3,"hw_fence_init_controller_signal",0x256,iVar2,*(arg1 + 0x2d1));
                cVar3 = *(arg1 + 0x2d1);
            }
            else {
                cVar3 = *(arg1 + 0x2d1);
            }
            if (cVar3 == '\0') {
                *(arg1 + 0x2d1) = 1;
                sym.hw_fence_ipcc_enable_dpu_signaling(arg1);
            }
            break;
        case 0x800d934:
            goto code_r0x0800d934;
        }
    }
    else {
code_r0x0800d934:
        if (0x1ff < iVar2 - 0x8fU) {
            uVar4 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar4 | unaff_x30;
            }
            _printk(0x800624f,"hw_fence_init_controller_signal",0x26a,uVar1,iVar2);
            return 0xffffffea;
        }
    }
    return 0;
}


// ===== sym.hw_fence_init_controller_resources @ 0x0800d9d8 (size 16) =====

ulong sym.hw_fence_init_controller_resources(int64_t arg1)

{
    return 0;
}


// ===== sym.hw_fence_cleanup_client @ 0x0800d9e8 (size 152) =====

void sym.hw_fence_cleanup_client(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x298);
    *(*(arg1 + 0x2c8) + *arg2 * 8) = 0;
    mutex_unlock(arg1 + 0x298);
    if (((_segment.ehdr ^ 0xffffffff) & 0x10020) == 0) {
        _printk(0x800532f,"hw_fence_cleanup_client",0x299,*arg2);
    }
    kfree(arg2);
    return;
}


// ===== sym._get_op_mode @ 0x0800da80 (size 52) =====

char * sym._get_op_mode(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 - 1;
    if (uVar1 < 4) {
        return *(uVar1 * 8 + 0x8009268);
    }
    return "UNKNOWN";
}


// ===== sym._hw_fence_lookup_and_process @ 0x0800dab4 (size 1624) =====

uint * sym._hw_fence_lookup_and_process(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *arg2_00;
    uint32_t uVar1;
    uint in_w4;
    char *pcVar2;
    uint in_w5;
    uint64_t uVar3;
    uint32_t in_w6;
    uint uVar4;
    uint64_t *in_x7;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    code *pcVar8;
    uint64_t *in_x18;
    ulong uVar9;
    code *pcVar10;
    uint *puVar11;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg2 == 0) || (arg1 == 0)) || (in_x7 == NULL)) {
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar5 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar5 = uVar6 | unaff_x30;
        }
        _printk(0x8007737,"_hw_fence_lookup_and_process",0x360,uVar5);
        puVar11 = NULL;
    }
    else {
        *in_x7 = 0xffffffffffffffff;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10020) == 0) {
            _printk(0x80071ff,"_hw_fence_lookup_and_process",0x366,in_w6);
        }
        uVar1 = in_w6 - 1;
        if (uVar1 < 4) {
            uVar5 = *(arg1 + 0xc);
            if (*(arg1 + 0xc) == 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = -(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar1 << 3;
                pcVar8 = *(reloc._reserve_hw_fence.bc17693702868612c84a1a00a4b4bed1.cfi_jt + uVar6);
                pcVar10 = *(uVar6 + 0x8009248);
                uVar6 = 0;
                do {
                    uVar3 = arg3 * 0x38b + arg4 * (arg3 * 2 + -1) * 0x1369;
                    if (uVar6 != 0) {
                        uVar3 = *in_x7 + 1;
                    }
                    uVar7 = 0;
                    if (uVar5 != 0) {
                        uVar7 = uVar3 / uVar5;
                    }
                    uVar3 = uVar3 - uVar7 * uVar5;
                    *in_x7 = uVar3;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10020) == 0) {
                        _printk(0x800535e,"_hw_fence_lookup_and_process",0x388,uVar3,arg3,arg4);
                        uVar3 = *in_x7;
                    }
                    if (*(arg1 + 0xc) <= uVar3) {
                        uVar7 = -1L << (_simple_open & 0x3f);
                        uVar5 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar5 = uVar7 | unaff_x30;
                        }
                        _printk(0x8005448,"_get_hw_fence",0x2cc,uVar5,uVar3,*(arg1 + 0xc));
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10020) == 0) {
                            uVar3 = *in_x7;
                            puVar11 = NULL;
                            uVar4 = 0xbad;
                            goto code_r0x0800dd74;
                        }
code_r0x0800df20:
                        uVar3 = -1L << (_simple_open & 0x3f);
                        uVar5 = unaff_x30 & (~uVar3 | 0xff80000000000000);
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar5 = uVar3 | unaff_x30;
                        }
                        _printk(0x80059f2,"_hw_fence_lookup_and_process",0x390,uVar5,arg3,arg4,*in_x7);
                        break;
                    }
                    puVar11 = arg2 + uVar3 * 0xa0;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10020) == 0) {
                        if (puVar11 == NULL) {
                            uVar4 = 0xbad;
                        }
                        else {
                            uVar4 = *puVar11;
                        }
code_r0x0800dd74:
                        _printk(0x8006d10,"_hw_fence_lookup_and_process",0x38d,arg2,puVar11,uVar3,uVar4);
                    }
                    if (puVar11 == NULL) goto code_r0x0800df20;
                    arg2_00 = puVar11 + 10;
                    sym.global_atomic_store(arg1,arg2_00);
                    if (1 < (pcVar10 + -0x800a688 >> 3 | pcVar10 << 0x3d)) {
                        __cfi_slowpath_diag(0xa566f7703da8f02a,pcVar10,0x8002750);
                    }
                    uVar5 = (*pcVar10)(puVar11,arg3,arg4);
                    if ((uVar5 & 1) != 0) {
                        if (3 < (pcVar8 + -0x800a668 >> 3 | pcVar8 << 0x3d)) {
                            __cfi_slowpath_diag(0xa075b6c64ea605c3,pcVar8,0x8002770);
                        }
                        (*pcVar8)(arg1,puVar11,in_w4,arg3,arg4,*in_x7,in_w5);
                        DataSynchronizationBarrier(3,2,0);
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            if (uVar1 < 4) {
                                pcVar2 = *(uVar1 * 8 + 0x8009268);
                            }
                            else {
                                pcVar2 = "UNKNOWN";
                            }
                            _printk(0x8006ea2,"_hw_fence_lookup_and_process",0x3a3,in_w4,pcVar2,arg3,arg4,*in_x7
                                    ,uVar6);
                        }
                        sym.global_atomic_store(arg1,arg2_00);
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10020) != 0) {
                            return puVar11;
                        }
                        uVar9 = *(puVar11 + 0xc);
                        goto code_r0x0800dfc4;
                    }
                    if ((((in_w6 & 0xfffffffd) == 1) && (*(puVar11 + 4) == arg4)) && (*(puVar11 + 2) == arg3)) {
                        uVar3 = -1L << (_simple_open & 0x3f);
                        uVar5 = (~uVar3 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar5 = uVar3 | unaff_x30;
                        }
                        _printk(0x80056dd,"_hw_fence_lookup_and_process",0x3ac,uVar5,arg3,arg4);
                        sym.global_atomic_store(arg1,arg2_00);
                        break;
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x80033d2,"_hw_fence_lookup_and_process",0x3b2,*in_x7,arg3,arg4);
                    }
                    sym.global_atomic_store(arg1,arg2_00);
                    uVar5 = *(arg1 + 0xc);
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar5);
            }
            uVar9 = 0xffffffffffffffff;
            uVar3 = -1L << (_simple_open & 0x3f);
            uVar5 = unaff_x30 & (~uVar3 | 0xff80000000000000);
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar5 = uVar3 | unaff_x30;
            }
            _printk(0x8003f0f,"_hw_fence_lookup_and_process",0x3bd,uVar5,uVar6);
            puVar11 = NULL;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10020) == 0) {
code_r0x0800dfc4:
                _printk(0x80053a3,"_hw_fence_lookup_and_process",0x3c2,in_w6,puVar11,arg3,arg4,*in_x7,uVar9);
            }
        }
        else {
            uVar6 = -1L << (_simple_open & 0x3f);
            uVar5 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar5 = uVar6 | unaff_x30;
            }
            _printk(0x8003cd4,"_hw_fence_lookup_and_process",0x37a,uVar5,in_w6);
            puVar11 = NULL;
        }
    }
    return puVar11;
}


// ===== sym._is_hw_fence_free @ 0x0800e10c (size 24) =====

bool sym._is_hw_fence_free(int64_t arg1)

{
    return *arg1 == 0;
}


// ===== sym._reserve_hw_fence @ 0x0800e124 (size 264) =====

void sym._reserve_hw_fence(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg2 + 4) = 0;
    DataSynchronizationBarrier(3,2,0);
    *(arg2 + 0x40) = 0xffffffffffffffff;
    *(arg2 + 0x48) = 0xffffffffffffffff;
    *(arg2 + 0x30) = 0;
    *(arg2 + 0x38) = 0xffffffffffffffff;
    *(arg2 + 0x18) = 0;
    *(arg2 + 0x20) = 0;
    *(arg2 + 0x20) = arg3;
    *arg2 = 1;
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x58) = 0;
    *(arg2 + 0x60) = 0;
    *(arg2 + 0x68) = 0;
    pcVar2 = _kmem_cache_alloc_trace;
    *(arg2 + 0x70) = 0;
    *(arg2 + 0x78) = 0;
    *(arg2 + 0x80) = 0;
    *(arg2 + 0x88) = 0;
    *(arg2 + 0x90) = 0;
    *(arg2 + 0x98) = 0;
    *(arg2 + 8) = arg4;
    *(arg2 + 0x10) = in_x4;
    __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar2,0x8002730);
    uVar3 = (*pcVar2)();
    *(arg2 + 0x58) = uVar3;
    uVar1 = _segment.ehdr ^ 0xffffffff;
    *(arg2 + 0x70) = *(arg2 + 0x70) + 1;
    if ((uVar1 & 0x10020) == 0) {
        _printk(0x80066b9,"_reserve_hw_fence",0x30c,arg3 & 0xffffffff,arg4);
    }
    return;
}


// ===== sym._hw_fence_match @ 0x0800e22c (size 48) =====

bool sym._hw_fence_match(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    if (*(arg1 + 8) == arg2) {
        return *(arg1 + 0x10) == arg3;
    }
    return false;
}


// ===== sym._unreserve_hw_fence @ 0x0800e25c (size 152) =====

int64_t sym._unreserve_hw_fence(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg2 + 4) = 0;
    DataSynchronizationBarrier(3,2,0);
    *arg2 = 0;
    *(arg2 + 8) = 0;
    *(arg2 + 0x10) = 0;
    *(arg2 + 0x30) = 0;
    *(arg2 + 0x38) = 0xffffffffffffffff;
    *(arg2 + 0x40) = 0xffffffffffffffff;
    *(arg2 + 0x48) = 0xffffffffffffffff;
    *(arg2 + 0x18) = 0;
    *(arg2 + 0x20) = 0;
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x58) = 0;
    uVar1 = _segment.ehdr;
    *(arg2 + 0x60) = 0;
    *(arg2 + 0x68) = 0;
    *(arg2 + 0x70) = 0;
    *(arg2 + 0x78) = 0;
    *(arg2 + 0x80) = 0;
    *(arg2 + 0x88) = 0;
    *(arg2 + 0x90) = 0;
    *(arg2 + 0x98) = 0;
    if (((uVar1 ^ 0xffffffff) & 0x10020) == 0) {
        arg1 = _printk(0x8002fe9,"_unreserve_hw_fence",0x31a,arg3 & 0xffffffff,arg4);
    }
    return arg1;
}


// ===== sym._reserve_join_fence @ 0x0800e2f4 (size 280) =====

void sym._reserve_join_fence(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong in_x4;
    uint in_w6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg2 + 4) = 0;
    DataSynchronizationBarrier(3,2,0);
    *(arg2 + 0x40) = 0xffffffffffffffff;
    *(arg2 + 0x48) = 0xffffffffffffffff;
    *(arg2 + 0x30) = 0;
    *(arg2 + 0x38) = 0xffffffffffffffff;
    *(arg2 + 0x18) = 0;
    *(arg2 + 0x20) = 0;
    *(arg2 + 0x20) = arg3;
    *arg2 = 1;
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x58) = 0;
    *(arg2 + 0x60) = 0;
    *(arg2 + 0x68) = 0;
    pcVar2 = _kmem_cache_alloc_trace;
    *(arg2 + 0x70) = 0;
    *(arg2 + 0x78) = 0;
    *(arg2 + 0x80) = 0;
    *(arg2 + 0x88) = 0;
    *(arg2 + 0x90) = 0;
    *(arg2 + 0x98) = 0;
    *(arg2 + 8) = arg4;
    *(arg2 + 0x10) = in_x4;
    __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar2,0x8002730);
    uVar3 = (*pcVar2)();
    *(arg2 + 0x58) = uVar3;
    *(arg2 + 0x54) = in_w6;
    uVar1 = _segment.ehdr ^ 0xffffffff;
    *(arg2 + 0x70) = *(arg2 + 0x70) + 1;
    if ((uVar1 & 0x10020) == 0) {
        _printk(0x800361b,"_reserve_join_fence",0x330,arg3 & 0xffffffff,arg4);
    }
    return;
}


// ===== sym._fence_found @ 0x0800e40c (size 100) =====

uchar  [16] sym._fence_found(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10020) == 0) {
        noname_1 = _printk(0x8006d62,"_fence_found",0x33e,arg1 & 0xffffffff,arg2);
    }
    return noname_1;
}


// ===== sym.hw_fence_create @ 0x0800e470 (size 192) =====

ulong sym.hw_fence_create(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *arg2;
    iVar3 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),arg3,arg4);
    uVar4 = 0;
    if (iVar3 == 0) {
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar5 | unaff_x30;
        }
        _printk(0x8006620,"hw_fence_create",0x3d4,uVar1,uVar2,arg3,arg4);
        uVar4 = 0xffffffea;
    }
    return uVar4;
}


// ===== sym.hw_fence_destroy @ 0x0800e530 (size 240) =====

//WARNING: Removing unreachable block (ram,0x0800e7c0)
//WARNING: Removing unreachable block (ram,0x0800e814)
//WARNING: Removing unreachable block (ram,0x0800e710)
//WARNING: Removing unreachable block (ram,0x0800e764)
//WARNING: Removing unreachable block (ram,0x0800e928)

int64_t sym.hw_fence_destroy(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t arg3_00;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t *puVar11;
    uint64_t unaff_x30;
    uchar auVar12 [16];
    ulong uVar13;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar6 = *(iVar2 + 0x5e0);
    uVar8 = *arg2;
    uVar4 = arg3;
    iVar2 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),arg3,arg4);
    iVar3 = 0;
    if (iVar2 == 0) {
        uVar4 = 0x3f1;
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar5 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar5 = uVar7 | unaff_x30;
        }
        _printk(0x8006ef6,"hw_fence_destroy",0x3f1,uVar5,uVar8,arg3,arg4);
        iVar3 = 0xffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar6) {
        return iVar3;
    }
    auVar12 = __stack_chk_fail(iVar3);
    iVar3 = auVar12._0_8_;
    *extraout_x18 = sym.hw_fence_destroy_with_hash;
    iVar2 = sp_el0;
    iVar2 = *(iVar2 + 0x5e0);
    iVar1 = *auVar12._8_8_;
    if (uVar4 < *(iVar3 + 0xc)) {
        iVar6 = *(iVar3 + 0x38);
        if (iVar6 + uVar4 * 0xa0 == 0) goto code_r0x0800e780;
        if (*(iVar6 + uVar4 * 0xa0 + 0x20) == iVar1) {
            iVar9 = iVar6 + uVar4 * 0xa0;
            piVar10 = iVar9 + 8;
            arg3_00 = *piVar10;
            puVar11 = iVar9 + 0x10;
            uVar5 = *puVar11;
            uVar13 = 0;
            iVar3 = sym._hw_fence_lookup_and_process(iVar3,iVar6,arg3_00,uVar5);
            iVar6 = 0;
            if (iVar3 != 0) goto code_r0x0800e820;
            arg3_00 = 0x410;
            uVar5 = ~(-1L << (_simple_open & 0x3f)) & 0x800e620;
            _printk(0x80028b7,"hw_fence_destroy_with_hash",0x410,uVar5,iVar1,*piVar10,*puVar11,uVar4,uVar13);
        }
        else {
            arg3_00 = 0x408;
            uVar5 = ~(-1L << (_simple_open & 0x3f)) & 0x800e620;
            _printk(0x8002b8b,"hw_fence_destroy_with_hash",0x408,uVar5,iVar1,uVar4);
        }
    }
    else {
        _printk(0x8005448,"_get_hw_fence",0x2cc,~(-1L << (_simple_open & 0x3f)) & 0x800e620,uVar4);
code_r0x0800e780:
        arg3_00 = 0x402;
        uVar5 = ~(-1L << (_simple_open & 0x3f)) & 0x800e620;
        _printk(0x800793d,"hw_fence_destroy_with_hash",0x402,uVar5,uVar4,iVar1);
    }
    iVar6 = 0xffffffea;
code_r0x0800e820:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iVar2) {
        return iVar6;
    }
    auVar12 = __stack_chk_fail(iVar6);
    *extraout_x18_00 = sym.msm_hw_fence_find;
    if (auVar12._8_8_ == NULL) {
        uVar8 = 0xff;
    }
    else {
        uVar8 = *auVar12._8_8_;
    }
    iVar2 = sym._hw_fence_lookup_and_process(auVar12._0_8_,*(auVar12._0_8_ + 0x38),arg3_00,uVar5);
    if (iVar2 == 0) {
        _printk(0x800572f,"msm_hw_fence_find",0x44f,~(-1L << (_simple_open & 0x3f)) & 0x800e858,uVar8,arg3_00,
                uVar5);
    }
    return iVar2;
}


// ===== sym.hw_fence_destroy_with_hash @ 0x0800e620 (size 568) =====

//WARNING: Removing unreachable block (ram,0x0800e928)

int64_t sym.hw_fence_destroy_with_hash(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t arg3_00;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint64_t *puVar10;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    ulong uVar12;
    
    uVar3 = arg3;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar5 = *(iVar5 + 0x5e0);
    iVar1 = *arg2;
    if (uVar3 < *(arg1 + 0xc)) {
        iVar2 = *(arg1 + 0x38);
        if (iVar2 + uVar3 * 0xa0 == 0) goto code_r0x0800e780;
        if (*(iVar2 + uVar3 * 0xa0 + 0x20) == iVar1) {
            iVar8 = iVar2 + uVar3 * 0xa0;
            piVar9 = iVar8 + 8;
            arg3_00 = *piVar9;
            puVar10 = iVar8 + 0x10;
            uVar4 = *puVar10;
            uVar12 = 0;
            iVar2 = sym._hw_fence_lookup_and_process(arg1,iVar2,arg3_00,uVar4);
            iVar8 = 0;
            if (iVar2 != 0) goto code_r0x0800e820;
            uVar6 = -1L << (_simple_open & 0x3f);
            arg3_00 = 0x410;
            uVar4 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar4 = uVar6 | unaff_x30;
            }
            _printk(0x80028b7,"hw_fence_destroy_with_hash",0x410,uVar4,iVar1,*piVar9,*puVar10,uVar3,uVar12);
        }
        else {
            arg3_00 = 0x408;
            uVar6 = -1L << (_simple_open & 0x3f);
            uVar4 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar4 = uVar6 | unaff_x30;
            }
            _printk(0x8002b8b,"hw_fence_destroy_with_hash",0x408,uVar4,iVar1,uVar3);
        }
    }
    else {
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar4 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar4 = uVar6 | unaff_x30;
        }
        _printk(0x8005448,"_get_hw_fence",0x2cc,uVar4,uVar3);
code_r0x0800e780:
        arg3_00 = 0x402;
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar4 = unaff_x30 & (~uVar6 | 0xff80000000000000);
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar4 = uVar6 | unaff_x30;
        }
        _printk(0x800793d,"hw_fence_destroy_with_hash",0x402,uVar4,uVar3,iVar1);
    }
    iVar8 = 0xffffffea;
code_r0x0800e820:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iVar5) {
        return iVar8;
    }
    auVar11 = __stack_chk_fail(iVar8);
    *extraout_x18 = sym.msm_hw_fence_find;
    if (auVar11._8_8_ == NULL) {
        uVar7 = 0xff;
    }
    else {
        uVar7 = *auVar11._8_8_;
    }
    iVar5 = sym._hw_fence_lookup_and_process(auVar11._0_8_,*(auVar11._0_8_ + 0x38),arg3_00,uVar4);
    if (iVar5 == 0) {
        _printk(0x800572f,"msm_hw_fence_find",0x44f,~(-1L << (_simple_open & 0x3f)) & 0x800e858,uVar7,arg3_00,
                uVar4);
    }
    return iVar5;
}


// ===== sym.msm_hw_fence_find @ 0x0800e858 (size 220) =====

int64_t sym.msm_hw_fence_find(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint uVar4;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar4 = 0xff;
    }
    else {
        uVar4 = *arg2;
    }
    iVar2 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),arg3,arg4);
    if (iVar2 == 0) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x800572f,"msm_hw_fence_find",0x44f,uVar1,uVar4,arg3,arg4);
    }
    return iVar2;
}


// ===== sym.hw_fence_process_fence_array @ 0x0800e934 (size 2352) =====

void sym.hw_fence_process_fence_array(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg3_00;
    int64_t arg4_00;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong uVar8;
    int64_t in_x4;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *extraout_x8;
    uint64_t *puVar12;
    int64_t *piVar13;
    uint64_t *in_x18;
    uint32_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint uVar19;
    uint64_t unaff_x30;
    uint64_t in_stack_ffffffffffffff50;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar9 = *(iVar9 + 0x5e0);
    if (in_x4 == 0) {
        iVar15 = 0;
        goto code_r0x0800e9ec;
    }
    uVar17 = *arg2 - 1;
    if (0xe < uVar17) {
        if (*arg2 != 0x4f) goto code_r0x0800f198;
        iVar15 = 2;
        goto code_r0x0800e9ec;
    }
    iVar15 = 0;
    //switch table (15 cases) at 0x80080a8
    switch(*(uVar17 * 4 + 0x80080a8) + 0x800e9a0) {
    case 0x800e9b4:
        iVar15 = 3;
        break;
    case 0x800e9d8:
        iVar15 = 4;
        break;
    case 0x800e9e4:
        iVar15 = 1;
        break;
    case 0x800f198:
code_r0x0800f198:
        uVar10 = -1L << (_simple_open & 0x3f);
        uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar18 = uVar10 | unaff_x30;
        }
        _printk(0x8006a10,"hw_fence_process_fence_array",0x4bd,uVar18);
        unaff_x30 = in_stack_ffffffffffffff50;
        goto code_r0x0800f154;
    }
code_r0x0800e9ec:
    iVar1 = *(arg3 + 0x20);
    iVar16 = *(arg3 + 0x28);
    iVar5 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),iVar1,iVar16);
    if (iVar5 == 0) {
        uVar10 = -1L << (_simple_open & 0x3f);
        uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar18 = uVar10 | unaff_x30;
        }
        _printk(0x8004fb5,"_hw_fence_process_join_fence",0x437,uVar18,0xffffffff,iVar1,iVar16);
        uVar10 = -1L << (_simple_open & 0x3f);
        uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar18 = uVar10 | unaff_x30;
        }
        _printk(0x8004423,"hw_fence_process_fence_array",0x4ca,uVar18);
        arg1 = dma_fence_release;
        unaff_x30 = in_stack_ffffffffffffff50;
    }
    else {
        iVar1 = iVar5 + 0x28;
        sym.global_atomic_store(arg1,iVar1);
        *(iVar5 + 0x18) = 1L << (*arg2 & 0x3f) | *(iVar5 + 0x18);
        sym.global_atomic_store(arg1,iVar1);
        if (*(arg3 + 0x44) == 0) {
            uVar17 = 0;
            bVar3 = false;
        }
        else {
            bVar3 = false;
            uVar17 = 0;
            do {
                iVar16 = *(*(arg3 + 0x50) + uVar17 * 8);
                if (*(iVar16 + 8) == dma_fence_array_ops && iVar16 != 0) {
                    uVar7 = 0x8002be6;
                    uVar8 = 0x4d9;
code_r0x0800ed5c:
                    uVar10 = -1L << (_simple_open & 0x3f);
                    uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar18 = uVar10 | unaff_x30;
                    }
                    _printk(uVar7,"hw_fence_process_fence_array",uVar8,uVar18);
                    goto code_r0x0800eeec;
                }
                if (-1 < *(iVar16 + 0x30)) {
                    uVar7 = 0x8005f13;
                    uVar8 = 0x4e0;
                    goto code_r0x0800ed5c;
                }
                if (arg2 == 0) {
                    uVar19 = 0xff;
                }
                else {
                    uVar19 = *arg2;
                }
                arg3_00 = *(iVar16 + 0x20);
                arg4_00 = *(iVar16 + 0x28);
                iVar6 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),arg3_00,arg4_00);
                if (iVar6 == 0) {
                    uVar10 = -1L << (_simple_open & 0x3f);
                    uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar18 = uVar10 | unaff_x30;
                    }
                    _printk(0x800572f,"msm_hw_fence_find",0x44f,uVar18,uVar19,arg3_00,arg4_00);
                    uVar10 = -1L << (_simple_open & 0x3f);
                    uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar18 = uVar10 | unaff_x30;
                    }
                    _printk(0x8002c21,"hw_fence_process_fence_array",0x4ea,uVar18,*(iVar16 + 0x20),*(iVar16 + 0x28)
                            ,0);
                    goto code_r0x0800eeec;
                }
                iVar16 = iVar6 + 0x28;
                sym.global_atomic_store(arg1,iVar16);
                if ((*(iVar6 + 0x30) & 1) == 0) {
                    uVar14 = *(iVar6 + 0x50);
                    *(iVar6 + 0x50) = uVar14 + 1;
                    if (1 < uVar14) {
                        uVar10 = -1L << (_simple_open & 0x3f);
                        uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar18 = uVar10 | unaff_x30;
                        }
                        _printk(0x80048d5,"hw_fence_process_fence_array",0x505,uVar18);
                        *(iVar6 + 0x50) = *(iVar6 + 0x50) + -1;
                        DataSynchronizationBarrier(3,2,0);
                        sym.global_atomic_store(arg1,iVar16);
                        goto code_r0x0800eeec;
                    }
                    *(iVar6 + uVar14 * 8 + 0x38) = *arg4;
                    DataSynchronizationBarrier(3,2,0);
                }
                else {
                    sym.global_atomic_store(arg1,iVar1);
                    iVar4 = *(iVar5 + 0x54) + -1;
                    bVar3 = iVar4 == 0 | bVar3;
                    *(iVar5 + 0x54) = iVar4;
                    DataSynchronizationBarrier(3,2,0);
                    sym.global_atomic_store(arg1,iVar1);
                }
                sym.global_atomic_store(arg1,iVar16);
                uVar17 = uVar17 + 1;
            } while (uVar17 < *(arg3 + 0x44));
        }
        if (in_x4 != 0) {
            *(iVar5 + iVar15 * 8 + 0x78) = in_x4;
        }
        if (bVar3) {
            sym._fence_ctl_signal(arg1,arg2,iVar5,*arg4);
            puVar12 = arg3 + 0x30;
            goto code_r0x0800f244;
        }
        if (*(arg3 + 0x44) != 0) {
            uVar7 = 0;
            goto code_r0x0800f158;
        }
        uVar10 = -1L << (_simple_open & 0x3f);
        uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar18 = uVar10 | unaff_x30;
        }
        _printk(0x8002f47,"hw_fence_process_fence_array",0x533,uVar18,*(arg3 + 0x20),*(arg3 + 0x28));
code_r0x0800eeec:
        arg4 = *arg4;
        if ((*(arg3 + 0x50) != 0) && (-1 < uVar17)) {
            uVar18 = uVar17;
            iVar15 = *(*(arg3 + 0x50) + uVar18 * 8);
            if (iVar15 == 0) goto code_r0x0800ef9c;
            do {
                if (arg2 == 0) {
                    uVar19 = 0xff;
                }
                else {
                    uVar19 = *arg2;
                }
                iVar1 = *(iVar15 + 0x20);
                iVar16 = *(iVar15 + 0x28);
                iVar5 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),iVar1,iVar16);
                if (iVar5 == 0) {
                    uVar11 = -1L << (_simple_open & 0x3f);
                    uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar10 = uVar11 | unaff_x30;
                    }
                    _printk(0x800572f,"msm_hw_fence_find",0x44f,uVar10,uVar19,iVar1,iVar16);
                    uVar11 = -1L << (_simple_open & 0x3f);
                    uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar10 = uVar11 | unaff_x30;
                    }
                    _printk(0x80057b4,"_cleanup_join_and_child_fences",0x486,uVar10,*(iVar15 + 0x20),
                            *(iVar15 + 0x28),0);
                }
                else {
                    sym.global_atomic_store(arg1,iVar5 + 0x28);
                    uVar17 = *(iVar5 + 0x50);
                    if (0 < uVar17) {
                        do {
                            uVar14 = uVar17;
                            if (3 < uVar17) {
                                uVar11 = -1L << (_simple_open & 0x3f);
                                uVar14 = 3;
                                uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar10 = uVar11 | unaff_x30;
                                }
                                _printk(0x800500b,"_cleanup_join_and_child_fences",0x495,uVar10,*(iVar5 + 0x50),3);
                            }
                            uVar17 = uVar14 - 1;
                            piVar13 = iVar5 + uVar17 * 8 + 0x38;
                            if (*piVar13 == arg4) {
                                *piVar13 = -1;
                                if (*(iVar5 + 0x50) != 0) {
                                    *(iVar5 + 0x50) = *(iVar5 + 0x50) + -1;
                                }
                                DataSynchronizationBarrier(3,2,0);
                            }
                        } while (1 < uVar14);
                    }
                    sym.global_atomic_store(arg1,iVar5 + 0x28);
                }
                while( true ) {
                    if (uVar18 < 1) goto code_r0x0800f124;
                    uVar18 = uVar18 - 1;
                    iVar15 = *(*(arg3 + 0x50) + uVar18 * 8);
                    if (iVar15 != 0) break;
code_r0x0800ef9c:
                    uVar11 = -1L << (_simple_open & 0x3f);
                    uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar10 = uVar11 | unaff_x30;
                    }
                    _printk(0x8003d04,"_cleanup_join_and_child_fences",0x47e,uVar10,uVar18 & 0xffffffff);
                }
            } while( true );
        }
code_r0x0800f124:
        iVar15 = *(arg3 + 0x20);
        iVar1 = *(arg3 + 0x28);
        iVar16 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),iVar15,iVar1);
        if (iVar16 == 0) {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar18 = uVar10 | unaff_x30;
            }
            _printk(0x8003b26,"_hw_fence_process_join_fence",0x43c,uVar18,0xffffffff,iVar15,iVar1);
        }
    }
code_r0x0800f154:
    uVar7 = 0xffffffea;
code_r0x0800f158:
    while (iVar15 = sp_el0, *(iVar15 + 0x5e0) != iVar9) {
        __stack_chk_fail(uVar7);
        puVar12 = extraout_x8;
code_r0x0800f244:
        Hint_Prefetch(puVar12,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar12,0x10);
            if (bVar3) {
                *puVar12 = *puVar12 | 0x40000000;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar15 = *(arg3 + 0x20);
        iVar1 = *(arg3 + 0x28);
        iVar16 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),iVar15,iVar1);
        uVar7 = 0;
        if (iVar16 == 0) {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar18 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar18 = uVar10 | unaff_x30;
            }
            _printk(0x8003b26,"_hw_fence_process_join_fence",0x43c,uVar18,0xffffffff,iVar15,iVar1);
            uVar7 = 0;
        }
    }
    return;
}


// ===== sym.hw_fence_get_client_data_id @ 0x0800f264 (size 132) =====

ulong sym.hw_fence_get_client_data_id(uint32_t arg1)

{
    if (arg1 - 1 < 0xf) {
    //switch table (15 cases) at 0x80080e4
        switch("\v\t\t\t\t\t\t"[arg1 - 1] * 4 + 0x800f290) {
        case 0x800f294:
            return 3;
        case 0x800f2c4:
            return 0;
        case 0x800f2cc:
            return 4;
        case 0x800f2dc:
            return 1;
        }
    }
    else if (arg1 == 0x4f) {
        return 2;
    }
    return 5;
}


// ===== sym._fence_ctl_signal @ 0x0800f2e8 (size 264) =====

void sym._fence_ctl_signal(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char cVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x22c);
    uVar2 = *(arg2 + 0x6c);
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8006716,"_fence_ctl_signal",0x45b,arg4);
        cVar3 = *(arg2 + 0x74);
    }
    else {
        cVar3 = *(arg2 + 0x74);
    }
    if (cVar3 != '\0') {
        sym.hw_fence_update_queue(arg1,arg2,*(arg3 + 8),*(arg3 + 0x10));
    }
    if (*(arg2 + 0x75) != '\0') {
        sym.hw_fence_ipcc_trigger_signal(arg1,uVar1,uVar2,*(arg2 + 0x68));
    }
    if (*arg2 - 8 < 7) {
        sym.process_validation_client_loopback(arg1,*arg2);
    }
    return;
}


// ===== sym.hw_fence_register_wait_client @ 0x0800f3f0 (size 756) =====

ulong sym.hw_fence_register_wait_client(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    code *pcVar6;
    int64_t arg3_00;
    ulong uVar7;
    int64_t in_x4;
    int64_t *in_x5;
    int64_t in_x6;
    uint64_t uVar8;
    uint64_t *in_x18;
    int64_t iVar9;
    uint uVar10;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x6 == 0) {
        iVar9 = 0;
    }
    else {
        uVar5 = *arg3 - 1;
        if (uVar5 < 0xf) {
            iVar9 = 0;
    //switch table (15 cases) at 0x80080f4
            switch(*(uVar5 * 4 + 0x80080f4) + 0x800f450) {
            case 0x800f464:
                iVar9 = 3;
                break;
            case 0x800f488:
                iVar9 = 4;
                break;
            case 0x800f494:
                iVar9 = 1;
                break;
            case 0x800f670:
code_r0x0800f670:
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar2 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar2 = uVar8 | unaff_x30;
                }
                _printk(0x8006a10,"hw_fence_register_wait_client",0x54b,uVar2);
                return 0xffffffea;
            }
        }
        else {
            if (*arg3 != 0x4f) goto code_r0x0800f670;
            iVar9 = 2;
        }
    }
    if (arg3 == 0) {
        uVar10 = 0xff;
    }
    else {
        uVar10 = *arg3;
    }
    arg3_00 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),arg4,in_x4);
    if (arg3_00 == 0) {
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar8 | unaff_x30;
        }
        _printk(0x800572f,"msm_hw_fence_find",0x44f,uVar2,uVar10,arg4);
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar8 | unaff_x30;
        }
        _printk(0x8002fb9,"hw_fence_register_wait_client",0x553,uVar2);
        uVar7 = 0xffffffea;
    }
    else {
        sym.global_atomic_store(arg1,arg3_00 + 0x28);
        pcVar6 = _kmem_cache_alloc_trace;
        *(arg3_00 + 0x18) = 1L << (*arg3 & 0x3f) | *(arg3_00 + 0x18);
        __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar6,0x8002730);
        uVar7 = (*pcVar6)();
        *(arg3_00 + 0x68) = uVar7;
        *(arg3_00 + 0x70) = *(arg3_00 + 0x70) + 1;
        if (in_x6 != 0) {
            *(arg3_00 + iVar9 * 8 + 0x78) = in_x6;
        }
        DataSynchronizationBarrier(3,2,0);
        sym.global_atomic_store(arg1,arg3_00 + 0x28);
        uVar7 = 0;
        if ((*(arg3_00 + 0x30) & 1) != 0) {
            if (arg2 != 0) {
                puVar1 = arg2 + 0x30;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                        *puVar1 = *puVar1 | 0x40000000;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
            }
            sym._fence_ctl_signal(arg1,arg3,arg3_00,*in_x5);
            uVar7 = 0;
        }
    }
    return uVar7;
}


// ===== sym.hw_fence_process_fence @ 0x0800f6e4 (size 352) =====

int sym.hw_fence_process_fence(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x8004f89,"hw_fence_process_fence",0x576,uVar1);
        iVar2 = -0x16;
    }
    else if (*(arg3 + 0x30) < 0) {
        iVar2 = sym.hw_fence_register_wait_client(arg1,arg3,arg2,*(arg3 + 0x20));
        if (iVar2 != 0) {
            uVar3 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar3 | unaff_x30;
            }
            _printk(0x8005c23,"hw_fence_process_fence",0x582,uVar1,*arg2);
        }
    }
    else {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x80053ff,"hw_fence_process_fence",0x57b,uVar1);
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.hw_fence_utils_reset_queues @ 0x0800f844 (size 324) =====

void sym.hw_fence_utils_reset_queues(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    int64_t iVar5;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg2 + 0x38);
    DataSynchronizationBarrier(3,3,0);
    iVar3 = sym.readl_relaxed(iVar5 + 0x34);
    sym.writel_relaxed(iVar3,iVar5 + 0x30);
    DataSynchronizationBarrier(3,2,0);
    if (*(arg2 + 0x74) != '\0') {
        uVar2 = *arg2 - 1;
        if (uVar2 < *(arg1 + 0x50)) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10010) == 0) {
                _printk(0x8003ab2,"hw_fence_utils_reset_queues",0x5b8,*arg2,uVar2);
            }
            sym.global_atomic_store(arg1,*(arg1 + 0x48) + uVar2 * 8);
            iVar5 = *(arg2 + 0x58);
            DataSynchronizationBarrier(3,3,0);
            iVar3 = sym.readl_relaxed(iVar5 + 0x30);
            sym.writel_relaxed(iVar3,iVar5 + 0x34);
            DataSynchronizationBarrier(3,2,0);
            sym.global_atomic_store(arg1,*(arg1 + 0x48) + uVar2 * 8);
        }
        else {
            uVar4 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar4 | unaff_x30;
            }
            _printk(0x800723d,"hw_fence_utils_reset_queues",0x5b5,uVar1);
        }
    }
    return;
}


// ===== sym.hw_fence_utils_cleanup_fence @ 0x0800f988 (size 724) =====

void sym.hw_fence_utils_cleanup_fence(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t in_w4;
    int iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar14 [16];
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iVar10 = *(iVar10 + 0x5e0);
    sym.global_atomic_store(arg1,arg3 + 0x28);
    uVar11 = *(arg3 + 0x18);
    uVar13 = 1L << (*arg2 & 0x3f);
    if ((uVar13 & uVar11) != 0) {
        if ((~_segment.ehdr & 0x10001) == 0) {
            _printk(0x80035a6,"hw_fence_utils_cleanup_fence",0x5d5,*arg2,*(arg3 + 8),*(arg3 + 0x10));
            uVar11 = *(arg3 + 0x18);
            uVar13 = 1L << (*arg2 & 0x3f);
        }
        *(arg3 + 0x18) = uVar11 & (uVar13 ^ 0xffffffffffffffff);
        DataSynchronizationBarrier(3,2,0);
    }
    uVar11 = 0;
    sym.global_atomic_store(arg1,arg3 + 0x28);
    uVar5 = 0;
    if (*(arg3 + 0x20) == *arg2) {
        if ((*(arg3 + 0x30) & 1) == 0) {
            uVar13 = 0;
            do {
                iVar9 = uVar13;
                if ((*(arg3 + 0x18) >> (uVar13 & 0x3f) & 1) == 0) goto code_r0x0800fa64;
                iVar7 = *(*(arg1 + 0x2c8) + uVar13 * 8);
    //switch table (68 cases) at 0x8008130
                switch(iVar9) {
                case 1:
                    break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                    goto code_r0x0800faec;
                case 8:
                    break;
                case 9:
                    break;
                case 0xf:
                    break;
                default:
                    if (iVar9 == 0x4f) break;
                    goto code_r0x0800faec;
                }
code_r0x0800faec:
                if (iVar7 != 0) {
                    uVar11 = arg3;
                    sym._fence_ctl_signal(arg1,iVar7,arg3,arg4);
                }
code_r0x0800fa64:
                uVar13 = iVar9 + 1U;
            } while (iVar9 + 1U <= *(arg1 + 0x30));
        }
        if ((in_w4 >> 1 & 1) == 0) {
            uVar13 = *(arg3 + 8);
            iVar7 = *(arg3 + 0x10);
            uVar2 = *arg2;
            uVar11 = uVar13;
            iVar6 = sym._hw_fence_lookup_and_process(arg1,*(arg1 + 0x38),uVar13,iVar7);
            uVar5 = 0;
            if (iVar6 == 0) {
                uVar12 = -1L << (_simple_open & 0x3f);
                uVar11 = (~uVar12 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar11 = uVar12 | unaff_x30;
                }
                _printk(0x8006ef6,"hw_fence_destroy",0x3f1,uVar11,uVar2,uVar13,iVar7);
                uVar12 = -1L << (_simple_open & 0x3f);
                uVar11 = 0;
                uVar13 = (~uVar12 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar13 = uVar12 | unaff_x30;
                }
                _printk(0x8006281,"hw_fence_utils_cleanup_fence",0x5ea,uVar13,*(arg3 + 8),*(arg3 + 0x10));
                uVar5 = 0xffffffea;
            }
        }
        else {
            uVar5 = 0;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar10) {
        return;
    }
    auVar14 = __stack_chk_fail(uVar5);
    puVar8 = auVar14._8_8_;
    iVar10 = auVar14._0_8_;
    *extraout_x18 = sym.global_atomic_store;
    if ((uVar11 & 1) == 0) {
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar4) {
                *puVar8 = *puVar8 & 0xfffffffe;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataSynchronizationBarrier(3,3,0);
        uVar5 = *puVar8;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10080) == 0) {
            _printk(0x80077b4,"_unlock",0x88,uVar5);
        }
        if ((uVar5 >> 1 & 1) != 0) {
            uVar1 = _segment.ehdr ^ 0xffffffff;
            *(iVar10 + 0x208) = *(iVar10 + 0x208) + 1;
            if ((uVar1 & 0x10080) == 0) {
                _printk(0x80046f8,"_unlock",0x91,uVar5);
            }
            sym.hw_fence_ipcc_trigger_signal(iVar10,*(iVar10 + 0x22c),*(iVar10 + 0x228),0x1e);
        }
        iVar7 = sp_el0;
        iVar10 = *(iVar7 + 0x10) + -1;
        *(iVar7 + 0x10) = iVar10;
        if ((iVar10 == 0) || (*(iVar7 + 0x10) == 0)) {
            preempt_schedule();
        }
    }
    else {
        iVar10 = sp_el0;
        *(iVar10 + 0x10) = *(iVar10 + 0x10) + 1;
        Hint_Prefetch(puVar8,2,0,0);
        do {
            do {
            } while (*puVar8 != 0);
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar4) {
                *puVar8 = 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
    }
    return;
}


// ===== sym.global_atomic_store @ 0x0800fc5c (size 308) =====

void sym.global_atomic_store(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t in_x2;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x2 & 1) == 0) {
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar3) {
                *arg2 = *arg2 & 0xfffffffe;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataSynchronizationBarrier(3,3,0);
        uVar6 = *arg2;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10080) == 0) {
            _printk(0x80077b4,"_unlock",0x88,uVar6);
        }
        if ((uVar6 >> 1 & 1) != 0) {
            uVar1 = _segment.ehdr ^ 0xffffffff;
            *(arg1 + 0x208) = *(arg1 + 0x208) + 1;
            if ((uVar1 & 0x10080) == 0) {
                _printk(0x80046f8,"_unlock",0x91,uVar6);
            }
            sym.hw_fence_ipcc_trigger_signal(arg1,*(arg1 + 0x22c),*(arg1 + 0x228),0x1e);
        }
        iVar5 = sp_el0;
        iVar4 = *(iVar5 + 0x10) + -1;
        *(iVar5 + 0x10) = iVar4;
        if ((iVar4 == 0) || (*(iVar5 + 0x10) == 0)) {
            preempt_schedule();
        }
    }
    else {
        iVar4 = sp_el0;
        *(iVar4 + 0x10) = *(iVar4 + 0x10) + 1;
        Hint_Prefetch(arg2,2,0,0);
        do {
            do {
            } while (*arg2 != 0);
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar3) {
                *arg2 = 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    return;
}


// ===== sym.hw_fence_utils_process_doorbell_mask @ 0x0800fd9c (size 976) =====

//WARNING: Removing unreachable block (ram,0x080102c8)
//WARNING: Removing unreachable block (ram,0x08010334)
//WARNING: Removing unreachable block (ram,0x08010270)

uint64_t sym.hw_fence_utils_process_doorbell_mask(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t *piVar4;
    char *pcVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    int64_t iVar11;
    uint64_t unaff_x30;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    uVar8 = 0;
    iStack_68 = *(iVar11 + 0x5e0);
    uVar2 = arg1;
    do {
        uVar1 = uVar8;
        uVar9 = 1 << (uVar1 & 0x1f);
        if ((arg2 & uVar9) != 0) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar2 = _printk(0x8007b6a,"hw_fence_utils_process_doorbell_mask",0x110,uVar8 & 0xffffffff,arg2);
            }
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar2 = _printk(0x80038b4,"_process_doorbell_client",0xe8,uVar8 & 0xffffffff);
            }
            if (uVar1 - 8 < 7) {
                uVar2 = sym.process_validation_client_loopback(arg1,uVar8 & 0xffffffff);
                iVar10 = uVar2;
code_r0x0800fed4:
                if (iVar10 != 0) goto code_r0x08010050;
            }
            else {
                if (uVar1 < 6) {
                    iVar11 = *(arg1 + uVar8 * 8 + 0x250);
                    if (iVar11 != 0) {
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                            uVar2 = _printk(0x80038ed,"_process_dpu_client_loopback",0xbc,uVar8 & 0xffffffff);
                        }
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                            uVar2 = _printk(0x80050e0,"_process_dpu_client_loopback",0xc4,uVar8 & 0xffffffff,iVar11
                                            ,1);
                        }
                        goto code_r0x0800fee0;
                    }
                    uVar3 = 0x8005fec;
                    pcVar5 = "_process_dpu_client_loopback";
                    uVar6 = 0xb8;
                }
                else {
                    if (uVar1 == 6) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_98 = 0;
                        uStack_90 = 0;
                        uStack_a8 = 0;
                        uStack_a0 = 0;
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                            _printk(0x80067d5,"_process_gfx_client_loopback",0xd1,6);
                        }
                        do {
                            uVar2 = sym.hw_fence_read_queue(*(*(arg1 + 0x2c8) + 8),&uStack_a8,1);
                            iVar10 = uVar2;
                            if (iVar10 < 0) {
                                uVar7 = -1L << (_simple_open & 0x3f);
                                uVar2 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar2 = uVar7 | unaff_x30;
                                }
                                uVar2 = _printk(0x8005a50,"_process_gfx_client_loopback",0xda,uVar2);
                                break;
                            }
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                uVar2 = _printk(0x8005a84,"_process_gfx_client_loopback",0xde,uStack_90,uStack_a0,
                                                uStack_98,uStack_88,uStack_78 & 0xffffffff);
                            }
                        } while (iVar10 != 0);
                        goto code_r0x0800fed4;
                    }
                    uVar3 = 0x8004b23;
                    pcVar5 = "_process_doorbell_client";
                    uVar6 = 0x101;
                }
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar2 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar2 = uVar7 | unaff_x30;
                }
                _printk(uVar3,pcVar5,uVar6,uVar2,uVar8 & 0xffffffff);
code_r0x08010050:
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar2 = unaff_x30 & (~uVar7 | 0xff80000000000000);
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar2 = uVar7 | unaff_x30;
                }
                uVar2 = _printk(0x8006763,"hw_fence_utils_process_doorbell_mask",0x114,uVar2,uVar8 & 0xffffffff);
            }
code_r0x0800fee0:
            arg2 = arg2 & (uVar9 ^ 0xffffffffffffffff);
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                uVar2 = _printk(0x80062cd,"hw_fence_utils_process_doorbell_mask",0x119,uVar8 & 0xffffffff,arg2,
                                uVar9,~uVar9);
            }
            if (arg2 == 0) break;
        }
        uVar8 = uVar8 + 1;
    } while (uVar8 != 0xf);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        piVar4 = __stack_chk_fail();
        *extraout_x18 = sym.hw_fence_utils_init_virq;
        iVar11 = of_find_compatible_node(*(*piVar4 + 0x2f0),0,"qcom,msm-hw-fence-db");
        if (iVar11 == 0) {
            _printk(0x8006abf,"hw_fence_utils_init_virq",0x13f,~(-1L << (_simple_open & 0x3f)) & 0x801016c,
                    "qcom,msm-hw-fence-db");
            uVar8 = 0xffffffea;
        }
        else {
            uVar1 = of_property_read_variable_u32_array(iVar11,"gunyah-label",piVar4 + 0x32,1,0);
            if (uVar1 < 0) {
                uVar8 = uVar1;
                _printk(0x8005059,"hw_fence_utils_init_virq",0x145,~(-1L << (_simple_open & 0x3f)) & 0x801016c,uVar8
                       );
            }
            else {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                    _printk(0x8005f96,"hw_fence_utils_init_virq",0x149,piVar4[0x32]);
                }
                uVar8 = gh_dbl_rx_register(piVar4[0x32],sym._hw_fence_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt,
                                           piVar4);
                piVar4[0x33] = uVar8;
                if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
                    _printk(0x8003f5b,"hw_fence_utils_init_virq",0x14d,~(-1L << (_simple_open & 0x3f)) & 0x801016c);
                }
                else {
                    uVar8 = 0;
                }
            }
        }
        return uVar8 & 0xffffffff;
    }
    return uVar2;
}


// ===== sym.hw_fence_utils_init_virq @ 0x0801016c (size 468) =====

uint64_t sym.hw_fence_utils_init_virq(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_compatible_node(*(*arg1 + 0x2f0),0,"qcom,msm-hw-fence-db");
    if (iVar2 == 0) {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar3 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar3 = uVar4 | unaff_x30;
        }
        _printk(0x8006abf,"hw_fence_utils_init_virq",0x13f,uVar3,"qcom,msm-hw-fence-db");
        uVar3 = 0xffffffea;
    }
    else {
        uVar1 = of_property_read_variable_u32_array(iVar2,"gunyah-label",arg1 + 400,1,0);
        if (uVar1 < 0) {
            uVar3 = uVar1;
            uVar5 = -1L << (_simple_open & 0x3f);
            uVar4 = (~uVar5 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar4 = uVar5 | unaff_x30;
            }
            _printk(0x8005059,"hw_fence_utils_init_virq",0x145,uVar4,uVar3);
        }
        else {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                _printk(0x8005f96,"hw_fence_utils_init_virq",0x149,*(arg1 + 400));
            }
            uVar3 = gh_dbl_rx_register(*(arg1 + 400),sym._hw_fence_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt,arg1);
            *(arg1 + 0x198) = uVar3;
            if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
                uVar5 = -1L << (_simple_open & 0x3f);
                uVar4 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar4 = uVar5 | unaff_x30;
                }
                _printk(0x8003f5b,"hw_fence_utils_init_virq",0x14d,uVar4);
            }
            else {
                uVar3 = 0;
            }
        }
    }
    return uVar3 & 0xffffffff;
}


// ===== sym._hw_fence_cb @ 0x08010340 (size 312) =====

//WARNING: Removing unreachable block (ram,0x080107cc)
//WARNING: Removing unreachable block (ram,0x08010724)
//WARNING: Removing unreachable block (ram,0x08010684)
//WARNING: Removing unreachable block (ram,0x080106d0)
//WARNING: Removing unreachable block (ram,0x08010774)
//WARNING: Removing unreachable block (ram,0x08010870)
//WARNING: Removing unreachable block (ram,0x0801062c)

int64_t sym._hw_fence_cb(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    uint64_t unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iStack_40 = 0x7f;
    if (arg2 != 0) {
        iVar3 = gh_dbl_read_and_clean(*(arg2 + 0x198),&iStack_40,0);
        iVar7 = iStack_40;
        if (iVar3 == 0) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                uVar2 = *(arg2 + 400);
                uVar5 = sym.hw_fence_get_qtime(arg2);
                _printk(0x8007321,"_hw_fence_cb",0x131,uVar2,arg1 & 0xffffffff,iVar7,uVar5);
            }
            arg1 = sym.hw_fence_utils_process_doorbell_mask(arg2,iStack_40);
        }
        else {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar9 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar10 | unaff_x30;
            }
            arg1 = _printk(0x8004b52,"_hw_fence_cb",300,uVar9,iVar3);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return arg1;
    }
    piVar6 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_utils_alloc_mem;
    iVar11 = *piVar6;
    iVar7 = of_find_compatible_node(*(iVar11 + 0x2f0),0,"qcom,msm-hw-fence-mem");
    if (iVar7 == 0) {
        _printk(0x8006abf,"hw_fence_utils_alloc_mem",0x1c4,~(-1L << (_simple_open & 0x3f)) & 0x8010478,
                "qcom,msm-hw-fence-mem");
        uVar4 = 0xffffffea;
    }
    else {
        uVar4 = of_property_read_variable_u32_array(iVar7,"gunyah-label",piVar6 + 0x2d,1,0);
        if (uVar4 < 0) {
            _printk(0x8005059,"hw_fence_utils_alloc_mem",0x1ca,~(-1L << (_simple_open & 0x3f)) & 0x8010478,uVar4);
        }
        else {
            iVar8 = of_parse_phandle(iVar7,"shared-buffer",0);
            if (iVar8 == 0) {
                _printk(0x8007ba6,"hw_fence_utils_alloc_mem",0x1d0,~(-1L << (_simple_open & 0x3f)) & 0x8010478);
                uVar4 = 0xfffffff4;
            }
            else {
                iVar3 = of_address_to_resource(iVar8,0,piVar6 + 0x20);
                if (iVar3 == 0) {
                    iVar11 = devm_ioremap_wc(iVar11,piVar6[0x20],(piVar6[0x21] - piVar6[0x20]) + 1);
                    piVar6[0x1f] = iVar11;
                    if (iVar11 == 0) {
                        _printk(0x8007981,"hw_fence_utils_alloc_mem",0x1de,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8010478);
                        uVar4 = 0xfffffffa;
                    }
                    else {
                        uVar9 = (piVar6[0x21] - piVar6[0x20]) + 1;
                        piVar6[0x2c] = uVar9;
                        if (uVar9 < *(piVar6 + 0x18c)) {
                            _printk(0x80072b4,"hw_fence_utils_alloc_mem",0x1e4,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8010478,uVar9,*(piVar6 + 0x18c));
                            uVar4 = 0xfffffff4;
                        }
                        else {
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                                _printk(0x8006339,"hw_fence_utils_alloc_mem",0x1ea);
                                iVar11 = piVar6[0x1f];
                                uVar9 = piVar6[0x2c];
                            }
                            __memset_io(iVar11,0,uVar9);
                            puVar1 = piVar6 + 0x16c;
                            uVar4 = of_property_read_variable_u32_array(iVar7,"peer-name",puVar1,1,0);
                            if (uVar4 < 0) {
                                *puVar1 = 0;
                            }
                            piVar6[0x2e] = sym.hw_fence_rm_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt;
                            *(piVar6 + 0x30) = 0x7fffffff;
                            iVar3 = gh_rm_register_notifier(piVar6 + 0x2e);
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                                _printk(0x8002cbf,"hw_fence_utils_alloc_mem",0x1f7,uVar4 & uVar4 >> 0x1f,*puVar1,
                                        iVar3);
                            }
                            if (iVar3 == 0) {
                                uVar4 = 0;
                            }
                            else {
                                _printk(0x800303a,"hw_fence_utils_alloc_mem",0x1f9,
                                        ~(-1L << (_simple_open & 0x3f)) & 0x8010478,iVar3);
                                uVar4 = 0xfffffdfb;
                            }
                        }
                    }
                }
                else {
                    _printk(0x8007be5,"hw_fence_utils_alloc_mem",0x1d7,~(-1L << (_simple_open & 0x3f)) & 0x8010478,
                            iVar3);
                    uVar4 = 0xffffffea;
                }
            }
        }
    }
    return uVar4;
}


// ===== sym.hw_fence_utils_alloc_mem @ 0x08010478 (size 1032) =====

int sym.hw_fence_utils_alloc_mem(int64_t arg1)

{
    uint *puVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    int64_t iVar9;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *arg1;
    iVar4 = of_find_compatible_node(*(iVar9 + 0x2f0),0,"qcom,msm-hw-fence-mem");
    if (iVar4 == 0) {
        uVar7 = -1L << (_simple_open & 0x3f);
        uVar6 = (~uVar7 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar6 = uVar7 | unaff_x30;
        }
        _printk(0x8006abf,"hw_fence_utils_alloc_mem",0x1c4,uVar6,"qcom,msm-hw-fence-mem");
        iVar2 = -0x16;
    }
    else {
        iVar2 = of_property_read_variable_u32_array(iVar4,"gunyah-label",arg1 + 0x168,1,0);
        if (iVar2 < 0) {
            uVar7 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar7 | unaff_x30;
            }
            _printk(0x8005059,"hw_fence_utils_alloc_mem",0x1ca,uVar6,iVar2);
        }
        else {
            iVar5 = of_parse_phandle(iVar4,"shared-buffer",0);
            if (iVar5 == 0) {
                uVar7 = -1L << (_simple_open & 0x3f);
                uVar6 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar6 = uVar7 | unaff_x30;
                }
                _printk(0x8007ba6,"hw_fence_utils_alloc_mem",0x1d0,uVar6);
                iVar2 = -0xc;
            }
            else {
                iVar2 = of_address_to_resource(iVar5,0,arg1 + 0x100);
                if (iVar2 == 0) {
                    iVar9 = devm_ioremap_wc(iVar9,*(arg1 + 0x100),(*(arg1 + 0x108) - *(arg1 + 0x100)) + 1);
                    *(arg1 + 0xf8) = iVar9;
                    if (iVar9 == 0) {
                        uVar7 = -1L << (_simple_open & 0x3f);
                        uVar6 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar6 = uVar7 | unaff_x30;
                        }
                        _printk(0x8007981,"hw_fence_utils_alloc_mem",0x1de,uVar6);
                        iVar2 = -6;
                    }
                    else {
                        uVar6 = (*(arg1 + 0x108) - *(arg1 + 0x100)) + 1;
                        *(arg1 + 0x160) = uVar6;
                        if (uVar6 < *(arg1 + 0x18c)) {
                            uVar8 = -1L << (_simple_open & 0x3f);
                            uVar7 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar7 = uVar8 | unaff_x30;
                            }
                            _printk(0x80072b4,"hw_fence_utils_alloc_mem",0x1e4,uVar7,uVar6,*(arg1 + 0x18c));
                            iVar2 = -0xc;
                        }
                        else {
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                                _printk(0x8006339,"hw_fence_utils_alloc_mem",0x1ea);
                                iVar9 = *(arg1 + 0xf8);
                                uVar6 = *(arg1 + 0x160);
                            }
                            __memset_io(iVar9,0,uVar6);
                            puVar1 = arg1 + 0x16c;
                            uVar3 = of_property_read_variable_u32_array(iVar4,"peer-name",puVar1,1,0);
                            if (uVar3 < 0) {
                                *puVar1 = 0;
                            }
                            *(arg1 + 0x170) = sym.hw_fence_rm_cb.ac794d652d7ec631b0cc319f35c84869.cfi_jt;
                            *(arg1 + 0x180) = 0x7fffffff;
                            iVar2 = gh_rm_register_notifier(arg1 + 0x170);
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                                _printk(0x8002cbf,"hw_fence_utils_alloc_mem",0x1f7,uVar3 & uVar3 >> 0x1f,*puVar1,
                                        iVar2);
                            }
                            if (iVar2 == 0) {
                                iVar2 = 0;
                            }
                            else {
                                uVar7 = -1L << (_simple_open & 0x3f);
                                uVar6 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar6 = uVar7 | unaff_x30;
                                }
                                _printk(0x800303a,"hw_fence_utils_alloc_mem",0x1f9,uVar6,iVar2);
                                iVar2 = -0x205;
                            }
                        }
                    }
                }
                else {
                    uVar7 = -1L << (_simple_open & 0x3f);
                    uVar6 = (~uVar7 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar6 = uVar7 | unaff_x30;
                    }
                    _printk(0x8007be5,"hw_fence_utils_alloc_mem",0x1d7,uVar6,iVar2);
                    iVar2 = -0x16;
                }
            }
        }
    }
    return iVar2;
}


// ===== sym.hw_fence_rm_cb @ 0x08010880 (size 524) =====

char * sym.hw_fence_rm_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    uint16_t auStack_50 [2];
    uint16_t auStack_4c [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    auStack_4c[0] = 0;
    auStack_50[0] = 0;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
        _printk(0x8007002,"hw_fence_rm_cb",0x194,arg2);
    }
    if (arg2 == 0x56100008) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
            _printk(0x8003d55,"hw_fence_rm_cb",0x199,*(arg3 + 4));
        }
        if ((*(arg3 + 4) == '\v') || (*(arg3 + 4) == '\x02')) {
            iVar3 = gh_rm_get_vmid(*(arg1 + -4),auStack_4c);
            if ((iVar3 == 0) && ((iVar3 = gh_rm_get_vmid(1,auStack_50), iVar3 == 0 && (auStack_4c[0] == *arg3)))) {
                if (*(arg3 + 4) == '\v') {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                        _printk(0x8005500,"hw_fence_rm_cb",0x1b0);
                    }
                }
                else if (*(arg3 + 4) == '\x02') {
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                        _printk(0x8002d04,"hw_fence_rm_cb",0x1a9);
                    }
                    iVar3 = sym.hw_fence_gunyah_share_mem(arg1 + -0x170,auStack_50[0],auStack_4c[0]);
                    if (iVar3 == 0) {
                        *(arg1 + 0x160) = 1;
                    }
                    else {
                        uVar5 = -1L << (_simple_open & 0x3f);
                        uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar1 = uVar5 | unaff_x30;
                        }
                        _printk(0x800580b,"hw_fence_rm_cb",0x1ab,uVar1);
                    }
                }
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return NULL;
    }
    uVar4 = __stack_chk_fail();
    if (uVar4 < 4) {
        return *(uVar4 * 8 + 0x8009288);
    }
    return "Unknown";
}


// ===== sym._get_mem_reserve_type @ 0x08010a8c (size 48) =====

char * sym._get_mem_reserve_type(uint32_t arg1)

{
    if (arg1 < 4) {
        return *(arg1 * 8 + 0x8009288);
    }
    return "Unknown";
}


// ===== sym.hw_fence_utils_reserve_mem @ 0x08010abc (size 788) =====

uint sym.hw_fence_utils_reserve_mem(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int iVar2;
    uint32_t uVar3;
    char *pcVar4;
    int *in_x4;
    uint32_t in_w5;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t *in_x18;
    uint uVar7;
    uint32_t uVar8;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg2;
    if (uVar3 < 4) {
    //switch table (3 cases) at 0x8008190
        switch(*((arg2 & 0xffffffffU) + 0x8008190) * 4 + 0x8010b1c) {
        case 0x8010b20:
            uVar8 = 0;
            uVar7 = 0;
            *in_x4 = *(arg1 + 0x1c);
            break;
        case 0x8010b38:
            uVar7 = 0;
            uVar8 = *(arg1 + 0x1c);
            *in_x4 = *(arg1 + 0x30) << 3;
            break;
        case 0x8010b54:
            uVar7 = 0;
            uVar8 = *(arg1 + 0x1c) + *(arg1 + 0x30) * 8;
            *in_x4 = *(arg1 + 0x10);
            break;
        case 0x8010b74:
            if (*(arg1 + 0x34) <= in_w5) {
                uVar6 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar6 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar6 | unaff_x30;
                }
                _printk(0x80044ab,"hw_fence_utils_reserve_mem",0x229,uVar1,in_w5);
                return 0xffffffea;
            }
            iVar5 = *(arg1 + 0x20) + in_w5 * 0x14;
            iVar2 = *(iVar5 + 8);
            uVar8 = *(iVar5 + 0xc);
            *in_x4 = iVar2;
            if (iVar2 != 0) {
                uVar7 = 0;
                break;
            }
            uVar6 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar6 | unaff_x30;
            }
            _printk(0x8006387,"hw_fence_utils_reserve_mem",0x236,uVar1,in_w5);
            goto code_r0x08010dc8;
        }
    }
    else {
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar6 | unaff_x30;
        }
        _printk(0x800679c,"hw_fence_utils_reserve_mem",0x23b,uVar1,arg2 & 0xffffffffU);
        uVar8 = 0;
code_r0x08010dc8:
        uVar7 = 0xffffffea;
    }
    if (*(arg1 + 0x160) < *in_x4 + uVar8) {
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar6 | unaff_x30;
        }
        _printk(0x800548a,"hw_fence_utils_reserve_mem",0x242,uVar1);
        uVar7 = 0xfffffff4;
    }
    else {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
            if (uVar3 < 4) {
                pcVar4 = *(uVar3 * 8 + 0x8009288);
            }
            else {
                pcVar4 = "Unknown";
            }
            _printk(0x8002969,"hw_fence_utils_reserve_mem",0x248,pcVar4,arg2 & 0xffffffff,*(arg1 + 0xf8),
                    *(arg1 + 0x100),uVar8,*in_x4);
        }
        uVar3 = _segment.ehdr ^ 0xffffffff;
        *arg3 = *(arg1 + 0x100) + uVar8;
        *arg4 = *(arg1 + 0xf8) + uVar8;
        if ((uVar3 & 0x10001) == 0) {
            _printk(0x80054d5,"hw_fence_utils_reserve_mem",0x24d,*arg3);
        }
    }
    return uVar7;
}


// ===== sym.hw_fence_utils_parse_dt_props @ 0x08010dd0 (size 2520) =====

//WARNING: Removing unreachable block (ram,0x08011a80)
//WARNING: Removing unreachable block (ram,0x08011908)
//WARNING: Removing unreachable block (ram,0x080118bc)
//WARNING: Removing unreachable block (ram,0x08011a34)
//WARNING: Removing unreachable block (ram,0x08011b40)
//WARNING: Removing unreachable block (ram,0x08011b78)

uint64_t sym.hw_fence_utils_parse_dt_props(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    uchar uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    ulong uVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong uVar13;
    ulong uVar14;
    uint *puVar15;
    int64_t iVar16;
    uint32_t uVar17;
    int64_t iVar18;
    int *piVar19;
    int64_t iVar20;
    int64_t iVar21;
    uint64_t uVar22;
    int iVar23;
    uint64_t uVar24;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar25;
    uint64_t uVar26;
    uint32_t *unaff_x21;
    int *unaff_x22;
    int iVar27;
    uint64_t unaff_x23;
    uchar *unaff_x24;
    char *unaff_x25;
    char *unaff_x26;
    uint64_t unaff_x27;
    code *unaff_x28;
    uint64_t unaff_x30;
    uchar auVar28 [16];
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    unkbyte6 Stack_1b8;
    ushort uStack_1b2;
    unkbyte6 Stack_1b0;
    int64_t iStack_1a8;
    uchar ***pppuStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
    uint64_t uStack_188;
    char *pcStack_180;
    int *piStack_178;
    uchar *puStack_170;
    uint64_t uStack_168;
    int *piStack_160;
    uint64_t uStack_158;
    int64_t *piStack_150;
    code *pcStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    code *pcStack_110;
    int64_t *piStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint32_t *puStack_e0;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    char *pcStack_c0;
    int64_t iStack_b0;
    uint32_t uStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    unkbyte7 Stack_78;
    uchar uStack_71;
    unkbyte7 Stack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_9c = 0;
    uVar7 = of_property_read_variable_u32_array(*(*arg1 + 0x2f0),"qcom,hw-fence-table-entries",&uStack_9c,1,0);
    if ((uVar7 < 0) || (uStack_9c == 0)) {
        uVar7 = uVar7 & uVar7 >> 0x1f;
        uVar10 = 0x80029c4;
        uVar13 = 0x2db;
code_r0x0801143c:
        uVar25 = uVar7;
        uVar22 = -1L << (_simple_open & 0x3f);
        uVar26 = (~uVar22 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar26 = uVar22 | unaff_x30;
        }
        _printk(uVar10,"hw_fence_utils_parse_dt_props",uVar13,uVar26,uVar25);
    }
    else {
        *(arg1 + 0xc) = uStack_9c;
        if (uStack_9c < 0x1999999) {
            *(arg1 + 0x10) = uStack_9c * 0xa0;
            uVar7 = of_property_read_variable_u32_array
                              (*(*arg1 + 0x2f0),"qcom,hw-fence-queue-entries",&uStack_9c,1,0);
            if ((uVar7 < 0) || (uStack_9c == 0)) {
                uVar7 = uVar7 & uVar7 >> 0x1f;
                uVar10 = 0x8006f51;
                uVar13 = 0x2ea;
                goto code_r0x0801143c;
            }
            *(arg1 + 0x14) = uStack_9c;
            if (0xaaaaaa9 < uStack_9c) {
                uVar10 = 0x8004cfc;
                uVar13 = 0x2f3;
                goto code_r0x0801148c;
            }
            uVar7 = uStack_9c * 0x18;
            *(arg1 + 0x18) = uVar7;
            if (0x7fffffba < uVar7) {
                uVar10 = 0x8003078;
                uVar13 = 0x2fc;
                uVar22 = -1L << (_simple_open & 0x3f);
                uVar26 = (~uVar22 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar26 = uVar22 | unaff_x30;
                }
                goto code_r0x080114f0;
            }
            unaff_x27 = 0;
            unaff_x24 = NULL;
            unaff_x28 = obj.hw_fence_client_types;
            uVar26 = 0x3ffffff;
            unaff_x22 = 0x38;
            unaff_x23 = 0xffffefe8;
            unaff_x21 = 0x1017;
            unaff_x25 = "true";
            unaff_x26 = "false";
            *(arg1 + 0x30) = 0xe;
            *(arg1 + 0x1c) = uStack_9c * 0x30 + 0x88;
            do {
                Stack_70 = 0;
                uStack_80 = 0;
                Stack_78 = 0;
                uStack_71 = 0;
                uStack_88 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                snprintf(&uStack_88,0x1f,"qcom,hw-fence-client-type-%s",*unaff_x28);
                iVar8 = of_property_read_variable_u32_array(*(*arg1 + 0x2f0),&uStack_88,&uStack_98,4,0);
                if (-1 < iVar8) {
                    *(unaff_x28 + 0x18) = uStack_90;
                    *(unaff_x28 + 0x10) = uStack_98;
                    *(unaff_x28 + 0x14) = uStack_98._4_4_;
                    if (uStack_90._4_4_ < 2) {
                        unaff_x28[0x20] = uStack_90._4_4_ != 0;
                        uVar17 = uStack_98;
                        uVar7 = uStack_90;
                        goto code_r0x08010fb8;
                    }
                    uVar10 = 0x8005adc;
                    uVar14 = *unaff_x28;
                    uVar13 = 0x268;
                    uVar7 = uStack_90._4_4_;
code_r0x08011638:
                    uVar22 = -1L << (_simple_open & 0x3f);
                    uVar26 = (~uVar22 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar26 = uVar22 | unaff_x30;
                    }
code_r0x08011640:
                    _printk(uVar10,"_parse_client_queue_dt_props_indv",uVar13,uVar26,uVar14,uVar7);
code_r0x08011644:
                    uVar26 = unaff_x30 & 0x80000000000000;
                    uVar25 = -1L << (_simple_open & 0x3f);
                    uVar22 = unaff_x30 & (~uVar25 | 0xff80000000000000);
                    if (uVar26 != 0) {
                        uVar22 = uVar25 | unaff_x30;
                    }
                    _printk(0x8005133,"_parse_client_queue_dt_props",0x2a2,uVar22,*unaff_x28);
                    goto code_r0x08011688;
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x80063f0,"_parse_client_queue_dt_props_indv",0x260,*unaff_x28,iVar8);
                }
                uVar7 = *(arg1 + 0x14);
                uVar17 = *(unaff_x28 + 0x10);
                *(unaff_x28 + 0x18) = uVar7;
code_r0x08010fb8:
                if (((*(unaff_x28 + 0xc) < uVar17) || (uVar1 = *(unaff_x28 + 0x14), uVar1 - 3 < 0xfffffffe)) ||
                   (uVar7 == 0)) {
                    uVar22 = -1L << (_simple_open & 0x3f);
                    uVar26 = (~uVar22 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar26 = uVar22 | unaff_x30;
                    }
                    _printk(0x800311f,"_parse_client_queue_dt_props_indv",0x271,uVar26,*unaff_x28,uVar17,
                            *(unaff_x28 + 0x14),uVar7);
                    goto code_r0x08011644;
                }
                if (0x3fffffe < uVar7) {
                    uVar10 = 0x8004ba0;
                    uVar14 = *unaff_x28;
                    uVar22 = -1L << (_simple_open & 0x3f);
                    uVar13 = 0x278;
                    uVar26 = (~uVar22 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar26 = uVar22 | unaff_x30;
                    }
                    goto code_r0x08011640;
                }
                uVar5 = 0;
                if (uVar1 != 0) {
                    uVar5 = (uVar1 * -0x38 - 0x1018) / uVar1;
                }
                uVar4 = uVar7 * 0x40;
                if (uVar5 <= uVar4) {
                    uVar10 = 0x80041b4;
                    uVar14 = *unaff_x28;
                    uVar13 = 0x280;
                    uVar7 = uVar4;
                    goto code_r0x08011638;
                }
                uVar5 = uVar1 * 0x38 + uVar1 * uVar4 + 0x1017 & 0xfffff000;
                *(unaff_x28 + 0x1c) = uVar5;
                if (0x100000 < uVar5) {
                    uVar22 = -1L << (_simple_open & 0x3f);
                    uVar26 = (~uVar22 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar26 = uVar22 | unaff_x30;
                    }
                    _printk(0x8005185,"_parse_client_queue_dt_props_indv",0x289,uVar26,*unaff_x28,uVar5,0x100000);
                    goto code_r0x08011644;
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    pcStack_c0 = unaff_x26;
                    if (unaff_x28[0x20] != 0x0) {
                        pcStack_c0 = unaff_x25;
                    }
                    _printk(0x8003d81,"_parse_client_queue_dt_props_indv",0x28f,*unaff_x28,uVar17,uVar1,uVar7);
                }
                if (2 < unaff_x27) {
                    if (*(unaff_x28 + 0x14) == 2) {
                        *(arg1 + 0x30) = *(arg1 + 0x30) + *(unaff_x28 + 0x10);
                    }
                    if (4 < unaff_x27) {
                        unaff_x24 = *(unaff_x28 + 0x10) + unaff_x24;
                    }
                }
                unaff_x27 = unaff_x27 + 1;
                unaff_x28 = unaff_x28 + 0x28;
            } while (unaff_x27 != 0xd);
            uVar7 = unaff_x24 + 0x8f;
            *(arg1 + 0x34) = uVar7;
            *(arg1 + 0x28) = obj.hw_fence_client_types;
            iVar9 = __kmalloc(uVar7 * 0x14,0xdc0);
            *(arg1 + 0x20) = iVar9;
            if (iVar9 == 0) {
code_r0x08011688:
                uVar25 = -1L << (_simple_open & 0x3f);
                uVar22 = (~uVar25 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar22 = uVar25 | unaff_x30;
                }
                _printk(0x8004136,"hw_fence_utils_parse_dt_props",0x306,uVar22);
                unaff_x30 = uVar26;
                goto code_r0x080116d0;
            }
            iVar9 = 0;
            unaff_x30 = *(arg1 + 0x1c) + *(arg1 + 0x30) * 8 + *(arg1 + 0x10) + 0xfffU & 0xfffff000;
            iStack_b0 = arg1;
            do {
                iVar21 = iVar9 * 0x28;
                unaff_x21 = iVar21 + 0x8000840;
                if (*unaff_x21 != 0) {
                    unaff_x27 = 0;
                    unaff_x25 = iVar21 + 0x8000838;
                    unaff_x26 = iVar21 + 0x8000844;
                    unaff_x28 = iVar21 + 0x8000848;
                    unaff_x22 = iVar21 + 0x800084c;
                    unaff_x24 = iVar21 + 0x8000850;
                    unaff_x23 = 0xffffff71;
                    do {
                        iVar8 = *unaff_x25;
                        uVar7 = iVar8 + unaff_x27;
                        uVar17 = uVar7 - 0x8f;
                        iVar27 = unaff_x23;
                        uVar26 = uVar7;
                        if (0x8e < uVar7) {
                            iVar18 = *(arg1 + 0x28);
                            uVar1 = (uVar17 >> 6) + 5;
                            if ((uVar17 & 0x3f) < *(iVar18 + uVar1 * 0x28 + 0x10)) {
                                uVar26 = (uVar17 & 0x3f) + 0x8f;
                                if (0x3f < uVar17) {
                                    if (uVar1 < 7) {
                                        uVar1 = 6;
                                    }
                                    uVar22 = uVar1 - 5;
                                    if (uVar22 < 2) {
                                        iVar20 = 5;
                                    }
                                    else {
                                        iVar23 = 0;
                                        uVar17 = (iVar8 + iVar27 >> 6) + 5;
                                        if (uVar17 < 7) {
                                            uVar17 = 6;
                                        }
                                        iVar20 = (uVar22 & 0xfffffffffffffffe) + 5;
                                        uVar25 = uVar17 - 5 & 0xfffffffffffffffe;
                                        piVar19 = iVar18 + 0x100;
                                        do {
                                            uVar25 = uVar25 - 2;
                                            uVar17 = piVar19[-10] + uVar26;
                                            uVar26 = uVar17;
                                            iVar23 = *piVar19 + iVar23;
                                            piVar19 = piVar19 + 0x14;
                                        } while (uVar25 != 0);
                                        uVar26 = iVar23 + uVar17;
                                        if (uVar22 == (uVar22 & 0xfffffffffffffffe)) goto code_r0x08011180;
                                    }
                                    uVar17 = (iVar8 + iVar27 >> 6) + 5;
                                    if (uVar17 < 7) {
                                        uVar17 = 6;
                                    }
                                    iVar16 = iVar20 - uVar17;
                                    piVar19 = iVar18 + iVar20 * 0x28 + 0x10;
                                    do {
                                        bVar6 = iVar16 != -1;
                                        iVar16 = iVar16 + 1;
                                        uVar26 = *piVar19 + uVar26;
                                        piVar19 = piVar19 + 10;
                                    } while (bVar6);
                                }
                            }
                            else {
                                uVar26 = 0x28f;
                            }
                        }
code_r0x08011180:
                        uVar2 = *unaff_x28;
                        puVar15 = *(arg1 + 0x20) + uVar26 * 0x14;
                        iVar8 = *unaff_x22;
                        uVar3 = *unaff_x24;
                        *puVar15 = *unaff_x26;
                        puVar15[1] = uVar2;
                        puVar15[2] = iVar8;
                        puVar15[3] = unaff_x30;
                        *(puVar15 + 4) = uVar3;
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                            _printk(0x8005cb0,"_parse_client_queue_dt_props",0x2ca,
                                    *(obj.hw_fence_client_types + iVar21),uVar7,uVar26,unaff_x30);
                            arg1 = iStack_b0;
                        }
                        uVar7 = unaff_x27 + 1;
                        unaff_x27 = uVar7;
                        unaff_x23 = iVar27 + 1;
                        unaff_x30 = *unaff_x22 + unaff_x30;
                    } while (uVar7 < *unaff_x21);
                }
                iVar9 = iVar9 + 1;
            } while (iVar9 != 0xd);
            *(arg1 + 0x18c) = unaff_x30;
            iVar9 = __kmalloc(*(arg1 + 0x34) << 3,0xdc0);
            *(arg1 + 0x2c8) = iVar9;
            if (iVar9 == 0) {
                uVar25 = 0xfffffff4;
            }
            else {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x8007c23,"hw_fence_utils_parse_dt_props",0x313,*(arg1 + 0xc),*(arg1 + 0x10),
                            *(arg1 + 0x14));
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    unaff_x30 = 0x8000000;
                    _printk(0x800417b,"hw_fence_utils_parse_dt_props",0x315,*(arg1 + 0x18),*(arg1 + 0x1c));
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x8006fa9,"hw_fence_utils_parse_dt_props",0x317,*(arg1 + 0x34),*(arg1 + 0x18c));
                }
                uVar25 = 0;
            }
        }
        else {
            uVar10 = 0x8003b7d;
            uVar13 = 0x2e2;
code_r0x0801148c:
            uVar22 = -1L << (_simple_open & 0x3f);
            uVar26 = (~uVar22 | 0xff80000000000000) & unaff_x30;
            uVar7 = uStack_9c;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar26 = uVar22 | unaff_x30;
            }
code_r0x080114f0:
            _printk(uVar10,"hw_fence_utils_parse_dt_props",uVar13,uVar26,uVar7);
code_r0x080116d0:
            uVar25 = 0xffffffea;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar25;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_utils_map_ipcc;
    pcStack_e8 = sym.hw_fence_utils_map_ipcc;
    iVar9 = sp_el0;
    iStack_f8 = *(iVar9 + 0x5e0);
    uStack_100 = 0;
    puStack_f0 = &stack0xffffffffffffffa0;
    puStack_e0 = unaff_x21;
    uStack_d0 = unaff_x30;
    uStack_c8 = uVar25;
    uVar7 = of_property_read_variable_u32_array(*(*piVar11 + 0x2f0),"qcom,ipcc-reg",&uStack_100,2,0);
    if (uVar7 < 0) {
        uVar26 = uVar7;
        _printk(0x8005c77,"hw_fence_utils_map_ipcc",0x326,~(-1L << (_simple_open & 0x3f)) & 0x80117a8,uVar26);
    }
    else {
        piVar11[0x42] = uStack_100 & 0xffffffff;
        *(piVar11 + 0x44) = uStack_100._4_4_;
        iVar9 = devm_ioremap(*piVar11);
        if (iVar9 == 0) {
            _printk(0x8003fb2,"hw_fence_utils_map_ipcc",0x32f,~(-1L << (_simple_open & 0x3f)) & 0x80117a8);
            uVar26 = 0xfffffff4;
        }
        else {
            piVar11[0x43] = iVar9;
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8003437,"hw_fence_utils_map_ipcc",0x336,piVar11[0x42],piVar11[0x44],iVar9);
            }
            sym.hw_fence_ipcc_enable_signaling(piVar11);
            uVar26 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_f8) {
        return uVar26;
    }
    piVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.hw_fence_utils_map_qtime;
    pcStack_128 = sym.hw_fence_utils_map_qtime;
    pcStack_110 = sym.hw_fence_utils_map_ipcc;
    iVar9 = sp_el0;
    iStack_138 = *(iVar9 + 0x5e0);
    uStack_140 = 0;
    ppuStack_130 = &puStack_f0;
    uStack_120 = uVar26;
    piStack_108 = piVar11;
    uVar7 = of_property_read_variable_u32_array(*(*piVar12 + 0x2f0),"qcom,qtime-reg",&uStack_140,2,0);
    if (uVar7 < 0) {
        uVar26 = uVar7;
        _printk(0x800383f,"hw_fence_utils_map_qtime",0x346,~(-1L << (_simple_open & 0x3f)) & 0x8011940,uVar26);
    }
    else {
        piVar12[0x47] = uStack_140 & 0xffffffff;
        *(piVar12 + 0x49) = uStack_140._4_4_;
        iVar9 = devm_ioremap(*piVar12);
        if (iVar9 == 0) {
            _printk(0x800387a,"hw_fence_utils_map_qtime",0x34f,~(-1L << (_simple_open & 0x3f)) & 0x8011940);
            uVar26 = 0xfffffff4;
        }
        else {
            uVar26 = 0;
            piVar12[0x48] = iVar9;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_138) {
        return uVar26;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18_01 = sym.hw_fence_utils_map_ctl_start;
    pcStack_198 = sym.hw_fence_utils_map_ctl_start;
    pcStack_148 = sym.hw_fence_utils_map_qtime;
    iVar9 = sp_el0;
    uVar22 = 0;
    iStack_1a8 = *(iVar9 + 0x5e0);
    pppuStack_1a0 = &ppuStack_130;
    pcStack_190 = unaff_x28;
    uStack_188 = unaff_x27;
    pcStack_180 = unaff_x26;
    piStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    piStack_160 = unaff_x22;
    uStack_158 = uVar26;
    piStack_150 = piVar12;
    do {
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        Stack_1b0 = 0;
        uStack_1c0 = 0;
        Stack_1b8 = 0;
        uStack_1b2 = 0;
        snprintf(&uStack_1c8,0x1e,"qcom,dpu-ctl-start-%d-reg",uVar22 & 0xffffffff);
        iVar8 = of_property_read_variable_u32_array(*(*piVar11 + 0x2f0),&uStack_1c8,&uStack_1d0,2,0);
        if (iVar8 < 0) {
code_r0x08011bfc:
            iVar9 = piVar11[uVar22 + 0x4a];
            if (iVar9 != 0) {
code_r0x08011c04:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x8006b1c,"hw_fence_utils_map_ctl_start",0x381,uVar22 & 0xffffffff,iVar9,
                            *(piVar11 + uVar22 * 4 + 0x280));
                }
            }
        }
        else {
            iVar9 = devm_ioremap(*piVar11,uStack_1d0 & 0xffffffff,uStack_1d0._4_4_);
            if (iVar9 != 0) {
                piVar11[uVar22 + 0x4a] = iVar9;
                *(piVar11 + uVar22 * 4 + 0x280) = uStack_1d0._4_4_;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) != 0) goto code_r0x08011bfc;
                _printk(0x8007092,"_map_ctl_start",0x370,uVar22 & 0xffffffff,&uStack_1c8,uStack_1d0 & 0xffffffff,
                        uStack_1d0._4_4_,iVar9);
                iVar9 = piVar11[uVar22 + 0x4a];
                if (iVar9 == 0) goto code_r0x08011b80;
                goto code_r0x08011c04;
            }
            _printk(0x8004d66,"_map_ctl_start",0x368,~(-1L << (_simple_open & 0x3f)) & 0x8011a94,&uStack_1c8);
            _printk(0x80030c6,"hw_fence_utils_map_ctl_start",0x37c,~(-1L << (_simple_open & 0x3f)) & 0x8011a94,
                    uVar22 & 0xffffffff);
        }
code_r0x08011b80:
        uVar22 = uVar22 + 1;
    } while (uVar22 != 6);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1a8) {
        return 0;
    }
    auVar28 = __stack_chk_fail();
    uVar26 = auVar28._8_8_;
    uVar7 = auVar28._8_4_ - 0x8f;
    if (0x8e < auVar28._8_4_) {
        iVar9 = *(auVar28._0_8_ + 0x28);
        uVar17 = (uVar7 >> 6) + 5;
        if ((uVar7 & 0x3f) < *(iVar9 + uVar17 * 0x28 + 0x10)) {
            uVar26 = (uVar7 & 0x3f) + 0x8f;
            if (0x3f < uVar7) {
                if (uVar17 < 7) {
                    uVar17 = 6;
                }
                uVar22 = uVar17 - 5;
                if (uVar22 < 2) {
                    iVar21 = 5;
                }
                else {
                    uVar24 = uVar22 & 0xfffffffffffffffe;
                    iVar8 = 0;
                    iVar21 = uVar24 + 5;
                    piVar19 = iVar9 + 0x100;
                    uVar25 = uVar24;
                    do {
                        uVar25 = uVar25 - 2;
                        uVar7 = piVar19[-10] + uVar26;
                        uVar26 = uVar7;
                        iVar8 = *piVar19 + iVar8;
                        piVar19 = piVar19 + 0x14;
                    } while (uVar25 != 0);
                    uVar26 = iVar8 + uVar7;
                    if (uVar22 == uVar24) goto code_r0x08011d60;
                }
                iVar18 = iVar21 - uVar17;
                piVar19 = iVar9 + iVar21 * 0x28 + 0x10;
                do {
                    bVar6 = iVar18 != -1;
                    iVar18 = iVar18 + 1;
                    uVar26 = *piVar19 + uVar26;
                    piVar19 = piVar19 + 10;
                } while (bVar6);
            }
        }
        else {
            uVar26 = 0x28f;
        }
    }
code_r0x08011d60:
    return uVar26 & 0xffffffff;
}


// ===== sym.hw_fence_utils_map_ipcc @ 0x080117a8 (size 408) =====

//WARNING: Removing unreachable block (ram,0x08011a80)
//WARNING: Removing unreachable block (ram,0x08011a34)
//WARNING: Removing unreachable block (ram,0x08011b40)
//WARNING: Removing unreachable block (ram,0x08011b78)

uint64_t sym.hw_fence_utils_map_ipcc(int64_t arg1)

{
    uint32_t uVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int *piVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t unaff_x30;
    uchar auVar14 [16];
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    unkbyte6 Stack_f8;
    ushort uStack_f2;
    unkbyte6 Stack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_40 = 0;
    uVar3 = of_property_read_variable_u32_array(*(*arg1 + 0x2f0),"qcom,ipcc-reg",&uStack_40,2,0);
    if (uVar3 < 0) {
        uVar12 = uVar3;
        uVar10 = -1L << (_simple_open & 0x3f);
        uVar13 = (~uVar10 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar13 = uVar10 | unaff_x30;
        }
        _printk(0x8005c77,"hw_fence_utils_map_ipcc",0x326,uVar13,uVar12);
    }
    else {
        *(arg1 + 0x210) = uStack_40 & 0xffffffff;
        *(arg1 + 0x220) = uStack_40._4_4_;
        iVar5 = devm_ioremap(*arg1);
        if (iVar5 == 0) {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar13 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar13 = uVar10 | unaff_x30;
            }
            _printk(0x8003fb2,"hw_fence_utils_map_ipcc",0x32f,uVar13);
            uVar12 = 0xfffffff4;
        }
        else {
            *(arg1 + 0x218) = iVar5;
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8003437,"hw_fence_utils_map_ipcc",0x336,*(arg1 + 0x210),*(arg1 + 0x220),iVar5);
            }
            sym.hw_fence_ipcc_enable_signaling(arg1);
            uVar12 = 0;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar12;
    }
    piVar6 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_utils_map_qtime;
    pcStack_68 = sym.hw_fence_utils_map_qtime;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar12;
    uVar3 = of_property_read_variable_u32_array(*(*piVar6 + 0x2f0),"qcom,qtime-reg",&uStack_80,2,0);
    if (uVar3 < 0) {
        uVar13 = uVar3;
        _printk(0x800383f,"hw_fence_utils_map_qtime",0x346,~(-1L << (_simple_open & 0x3f)) & 0x8011940,uVar13);
    }
    else {
        piVar6[0x47] = uStack_80 & 0xffffffff;
        *(piVar6 + 0x49) = uStack_80._4_4_;
        iVar5 = devm_ioremap(*piVar6);
        if (iVar5 == 0) {
            _printk(0x800387a,"hw_fence_utils_map_qtime",0x34f,~(-1L << (_simple_open & 0x3f)) & 0x8011940);
            uVar13 = 0xfffffff4;
        }
        else {
            uVar13 = 0;
            piVar6[0x48] = iVar5;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_78) {
        return uVar13;
    }
    piVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.hw_fence_utils_map_ctl_start;
    pcStack_d8 = sym.hw_fence_utils_map_ctl_start;
    iVar5 = sp_el0;
    uVar13 = 0;
    iStack_e8 = *(iVar5 + 0x5e0);
    ppuStack_e0 = &puStack_70;
    do {
        uStack_110 = 0;
        uStack_108 = 0;
        Stack_f0 = 0;
        uStack_100 = 0;
        Stack_f8 = 0;
        uStack_f2 = 0;
        snprintf(&uStack_108,0x1e,"qcom,dpu-ctl-start-%d-reg",uVar13 & 0xffffffff);
        iVar4 = of_property_read_variable_u32_array(*(*piVar6 + 0x2f0),&uStack_108,&uStack_110,2,0);
        if (iVar4 < 0) {
code_r0x08011bfc:
            iVar5 = piVar6[uVar13 + 0x4a];
            if (iVar5 != 0) {
code_r0x08011c04:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x8006b1c,"hw_fence_utils_map_ctl_start",0x381,uVar13 & 0xffffffff,iVar5,
                            *(piVar6 + uVar13 * 4 + 0x280));
                }
            }
        }
        else {
            iVar5 = devm_ioremap(*piVar6,uStack_110 & 0xffffffff,uStack_110._4_4_);
            if (iVar5 != 0) {
                piVar6[uVar13 + 0x4a] = iVar5;
                *(piVar6 + uVar13 * 4 + 0x280) = uStack_110._4_4_;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) != 0) goto code_r0x08011bfc;
                _printk(0x8007092,"_map_ctl_start",0x370,uVar13 & 0xffffffff,&uStack_108,uStack_110 & 0xffffffff,
                        uStack_110._4_4_,iVar5);
                iVar5 = piVar6[uVar13 + 0x4a];
                if (iVar5 == 0) goto code_r0x08011b80;
                goto code_r0x08011c04;
            }
            _printk(0x8004d66,"_map_ctl_start",0x368,~(-1L << (_simple_open & 0x3f)) & 0x8011a94,&uStack_108);
            _printk(0x80030c6,"hw_fence_utils_map_ctl_start",0x37c,~(-1L << (_simple_open & 0x3f)) & 0x8011a94,
                    uVar13 & 0xffffffff);
        }
code_r0x08011b80:
        uVar13 = uVar13 + 1;
    } while (uVar13 != 6);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_e8) {
        return 0;
    }
    auVar14 = __stack_chk_fail();
    uVar13 = auVar14._8_8_;
    uVar3 = auVar14._8_4_ - 0x8f;
    if (0x8e < auVar14._8_4_) {
        iVar5 = *(auVar14._0_8_ + 0x28);
        uVar1 = (uVar3 >> 6) + 5;
        if ((uVar3 & 0x3f) < *(iVar5 + uVar1 * 0x28 + 0x10)) {
            uVar13 = (uVar3 & 0x3f) + 0x8f;
            if (0x3f < uVar3) {
                if (uVar1 < 7) {
                    uVar1 = 6;
                }
                uVar10 = uVar1 - 5;
                if (uVar10 < 2) {
                    iVar9 = 5;
                }
                else {
                    uVar11 = uVar10 & 0xfffffffffffffffe;
                    iVar4 = 0;
                    iVar9 = uVar11 + 5;
                    piVar8 = iVar5 + 0x100;
                    uVar12 = uVar11;
                    do {
                        uVar12 = uVar12 - 2;
                        uVar3 = piVar8[-10] + uVar13;
                        uVar13 = uVar3;
                        iVar4 = *piVar8 + iVar4;
                        piVar8 = piVar8 + 0x14;
                    } while (uVar12 != 0);
                    uVar13 = iVar4 + uVar3;
                    if (uVar10 == uVar11) goto code_r0x08011d60;
                }
                iVar7 = iVar9 - uVar1;
                piVar8 = iVar5 + iVar9 * 0x28 + 0x10;
                do {
                    bVar2 = iVar7 != -1;
                    iVar7 = iVar7 + 1;
                    uVar13 = *piVar8 + uVar13;
                    piVar8 = piVar8 + 10;
                } while (bVar2);
            }
        }
        else {
            uVar13 = 0x28f;
        }
    }
code_r0x08011d60:
    return uVar13 & 0xffffffff;
}


// ===== sym.hw_fence_utils_map_qtime @ 0x08011940 (size 340) =====

//WARNING: Removing unreachable block (ram,0x08011b40)
//WARNING: Removing unreachable block (ram,0x08011b78)

uint64_t sym.hw_fence_utils_map_qtime(int64_t arg1)

{
    uint32_t uVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int *piVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t unaff_x30;
    uchar auVar14 [16];
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    unkbyte6 Stack_b8;
    ushort uStack_b2;
    unkbyte6 Stack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_40 = 0;
    uVar3 = of_property_read_variable_u32_array(*(*arg1 + 0x2f0),"qcom,qtime-reg",&uStack_40,2,0);
    if (uVar3 < 0) {
        uVar12 = uVar3;
        uVar10 = -1L << (_simple_open & 0x3f);
        uVar13 = (~uVar10 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar13 = uVar10 | unaff_x30;
        }
        _printk(0x800383f,"hw_fence_utils_map_qtime",0x346,uVar13,uVar12);
    }
    else {
        *(arg1 + 0x238) = uStack_40 & 0xffffffff;
        *(arg1 + 0x248) = uStack_40._4_4_;
        iVar5 = devm_ioremap(*arg1);
        if (iVar5 == 0) {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar13 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar13 = uVar10 | unaff_x30;
            }
            _printk(0x800387a,"hw_fence_utils_map_qtime",0x34f,uVar13);
            uVar12 = 0xfffffff4;
        }
        else {
            uVar12 = 0;
            *(arg1 + 0x240) = iVar5;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar12;
    }
    piVar6 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_utils_map_ctl_start;
    pcStack_98 = sym.hw_fence_utils_map_ctl_start;
    iVar5 = sp_el0;
    uVar13 = 0;
    iStack_a8 = *(iVar5 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffd0;
    do {
        uStack_d0 = 0;
        uStack_c8 = 0;
        Stack_b0 = 0;
        uStack_c0 = 0;
        Stack_b8 = 0;
        uStack_b2 = 0;
        snprintf(&uStack_c8,0x1e,"qcom,dpu-ctl-start-%d-reg",uVar13 & 0xffffffff);
        iVar4 = of_property_read_variable_u32_array(*(*piVar6 + 0x2f0),&uStack_c8,&uStack_d0,2,0);
        if (iVar4 < 0) {
code_r0x08011bfc:
            iVar5 = piVar6[uVar13 + 0x4a];
            if (iVar5 != 0) {
code_r0x08011c04:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x8006b1c,"hw_fence_utils_map_ctl_start",0x381,uVar13 & 0xffffffff,iVar5,
                            *(piVar6 + uVar13 * 4 + 0x280));
                }
            }
        }
        else {
            iVar5 = devm_ioremap(*piVar6,uStack_d0 & 0xffffffff,uStack_d0._4_4_);
            if (iVar5 != 0) {
                piVar6[uVar13 + 0x4a] = iVar5;
                *(piVar6 + uVar13 * 4 + 0x280) = uStack_d0._4_4_;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) != 0) goto code_r0x08011bfc;
                _printk(0x8007092,"_map_ctl_start",0x370,uVar13 & 0xffffffff,&uStack_c8,uStack_d0 & 0xffffffff,
                        uStack_d0._4_4_,iVar5);
                iVar5 = piVar6[uVar13 + 0x4a];
                if (iVar5 == 0) goto code_r0x08011b80;
                goto code_r0x08011c04;
            }
            _printk(0x8004d66,"_map_ctl_start",0x368,~(-1L << (_simple_open & 0x3f)) & 0x8011a94,&uStack_c8);
            _printk(0x80030c6,"hw_fence_utils_map_ctl_start",0x37c,~(-1L << (_simple_open & 0x3f)) & 0x8011a94,
                    uVar13 & 0xffffffff);
        }
code_r0x08011b80:
        uVar13 = uVar13 + 1;
    } while (uVar13 != 6);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_a8) {
        return 0;
    }
    auVar14 = __stack_chk_fail();
    uVar13 = auVar14._8_8_;
    uVar3 = auVar14._8_4_ - 0x8f;
    if (0x8e < auVar14._8_4_) {
        iVar5 = *(auVar14._0_8_ + 0x28);
        uVar1 = (uVar3 >> 6) + 5;
        if ((uVar3 & 0x3f) < *(iVar5 + uVar1 * 0x28 + 0x10)) {
            uVar13 = (uVar3 & 0x3f) + 0x8f;
            if (0x3f < uVar3) {
                if (uVar1 < 7) {
                    uVar1 = 6;
                }
                uVar10 = uVar1 - 5;
                if (uVar10 < 2) {
                    iVar9 = 5;
                }
                else {
                    uVar11 = uVar10 & 0xfffffffffffffffe;
                    iVar4 = 0;
                    iVar9 = uVar11 + 5;
                    piVar8 = iVar5 + 0x100;
                    uVar12 = uVar11;
                    do {
                        uVar12 = uVar12 - 2;
                        uVar3 = piVar8[-10] + uVar13;
                        uVar13 = uVar3;
                        iVar4 = *piVar8 + iVar4;
                        piVar8 = piVar8 + 0x14;
                    } while (uVar12 != 0);
                    uVar13 = iVar4 + uVar3;
                    if (uVar10 == uVar11) goto code_r0x08011d60;
                }
                iVar7 = iVar9 - uVar1;
                piVar8 = iVar5 + iVar9 * 0x28 + 0x10;
                do {
                    bVar2 = iVar7 != -1;
                    iVar7 = iVar7 + 1;
                    uVar13 = *piVar8 + uVar13;
                    piVar8 = piVar8 + 10;
                } while (bVar2);
            }
        }
        else {
            uVar13 = 0x28f;
        }
    }
code_r0x08011d60:
    return uVar13 & 0xffffffff;
}


// ===== sym.hw_fence_utils_map_ctl_start @ 0x08011a94 (size 528) =====

uint64_t sym.hw_fence_utils_map_ctl_start(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    uint64_t uVar12;
    uint64_t unaff_x30;
    uchar auVar13 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    unkbyte6 Stack_78;
    ushort uStack_72;
    unkbyte6 Stack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    uVar12 = 0;
    iStack_68 = *(iVar8 + 0x5e0);
    iVar8 = arg1 + 0x280;
    do {
        uStack_90 = 0;
        uStack_88 = 0;
        iVar6 = iVar8 + uVar12 * 8;
        Stack_70 = 0;
        uStack_80 = 0;
        Stack_78 = 0;
        uStack_72 = 0;
        snprintf(&uStack_88,0x1e,"qcom,dpu-ctl-start-%d-reg",uVar12 & 0xffffffff);
        iVar4 = of_property_read_variable_u32_array(*(*arg1 + 0x2f0),&uStack_88,&uStack_90,2,0);
        if (iVar4 < 0) {
code_r0x08011bfc:
            iVar6 = *(iVar6 + -0x30);
            if (iVar6 != 0) {
code_r0x08011c04:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x8006b1c,"hw_fence_utils_map_ctl_start",0x381,uVar12 & 0xffffffff,iVar6,
                            *(iVar8 + uVar12 * 4));
                }
            }
        }
        else {
            iVar5 = devm_ioremap(*arg1,uStack_90 & 0xffffffff,uStack_90._4_4_);
            if (iVar5 != 0) {
                *(iVar6 + -0x30) = iVar5;
                *(iVar8 + uVar12 * 4) = uStack_90._4_4_;
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) != 0) goto code_r0x08011bfc;
                _printk(0x8007092,"_map_ctl_start",0x370,uVar12 & 0xffffffff,&uStack_88,uStack_90 & 0xffffffff,
                        uStack_90._4_4_,iVar5);
                iVar6 = *(iVar6 + -0x30);
                if (iVar6 == 0) goto code_r0x08011b80;
                goto code_r0x08011c04;
            }
            uVar7 = -1L << (_simple_open & 0x3f);
            uVar10 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar10 = uVar7 | unaff_x30;
            }
            _printk(0x8004d66,"_map_ctl_start",0x368,uVar10,&uStack_88);
            uVar7 = -1L << (_simple_open & 0x3f);
            uVar10 = (~uVar7 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar10 = uVar7 | unaff_x30;
            }
            _printk(0x80030c6,"hw_fence_utils_map_ctl_start",0x37c,uVar10,uVar12 & 0xffffffff);
        }
code_r0x08011b80:
        uVar12 = uVar12 + 1;
    } while (uVar12 != 6);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return 0;
    }
    auVar13 = __stack_chk_fail();
    uVar12 = auVar13._8_8_;
    uVar2 = auVar13._8_4_ - 0x8f;
    if (0x8e < auVar13._8_4_) {
        iVar8 = *(auVar13._0_8_ + 0x28);
        uVar1 = (uVar2 >> 6) + 5;
        if ((uVar2 & 0x3f) < *(iVar8 + uVar1 * 0x28 + 0x10)) {
            uVar12 = (uVar2 & 0x3f) + 0x8f;
            if (0x3f < uVar2) {
                if (uVar1 < 7) {
                    uVar1 = 6;
                }
                uVar10 = uVar1 - 5;
                if (uVar10 < 2) {
                    iVar6 = 5;
                }
                else {
                    uVar11 = uVar10 & 0xfffffffffffffffe;
                    iVar4 = 0;
                    iVar6 = uVar11 + 5;
                    piVar9 = iVar8 + 0x100;
                    uVar7 = uVar11;
                    do {
                        uVar7 = uVar7 - 2;
                        uVar2 = piVar9[-10] + uVar12;
                        uVar12 = uVar2;
                        iVar4 = *piVar9 + iVar4;
                        piVar9 = piVar9 + 0x14;
                    } while (uVar7 != 0);
                    uVar12 = iVar4 + uVar2;
                    if (uVar10 == uVar11) goto code_r0x08011d60;
                }
                iVar5 = iVar6 - uVar1;
                piVar9 = iVar8 + iVar6 * 0x28 + 0x10;
                do {
                    bVar3 = iVar5 != -1;
                    iVar5 = iVar5 + 1;
                    uVar12 = *piVar9 + uVar12;
                    piVar9 = piVar9 + 10;
                } while (bVar3);
            }
        }
        else {
            uVar12 = 0x28f;
        }
    }
code_r0x08011d60:
    return uVar12 & 0xffffffff;
}


// ===== sym.hw_fence_utils_get_client_id_priv @ 0x08011ca4 (size 200) =====

uint64_t sym.hw_fence_utils_get_client_id_priv(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    int *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int iVar10;
    uint64_t uVar11;
    
    uVar2 = arg2 - 0x8f;
    if (0x8e < arg2) {
        iVar4 = *(arg1 + 0x28);
        uVar1 = (uVar2 >> 6) + 5;
        if ((uVar2 & 0x3f) < *(iVar4 + uVar1 * 0x28 + 0x10)) {
            arg2 = (uVar2 & 0x3f) + 0x8f;
            if (0x3f < uVar2) {
                if (uVar1 < 7) {
                    uVar1 = 6;
                }
                uVar8 = uVar1 - 5;
                if (uVar8 < 2) {
                    iVar7 = 5;
                }
                else {
                    uVar9 = uVar8 & 0xfffffffffffffffe;
                    iVar10 = 0;
                    iVar7 = uVar9 + 5;
                    piVar6 = iVar4 + 0x100;
                    uVar11 = uVar9;
                    do {
                        uVar11 = uVar11 - 2;
                        uVar2 = piVar6[-10] + arg2;
                        arg2 = uVar2;
                        iVar10 = *piVar6 + iVar10;
                        piVar6 = piVar6 + 0x14;
                    } while (uVar11 != 0);
                    arg2 = iVar10 + uVar2;
                    if (uVar8 == uVar9) goto code_r0x08011d60;
                }
                iVar5 = iVar7 - uVar1;
                piVar6 = iVar4 + iVar7 * 0x28 + 0x10;
                do {
                    bVar3 = iVar5 != -1;
                    iVar5 = iVar5 + 1;
                    arg2 = *piVar6 + arg2;
                    piVar6 = piVar6 + 10;
                } while (bVar3);
            }
        }
        else {
            arg2 = 0x28f;
        }
    }
code_r0x08011d60:
    return arg2 & 0xffffffff;
}


// ===== sym.hw_fence_utils_skips_txq_wr_idx @ 0x08011d6c (size 64) =====

bool sym.hw_fence_utils_skips_txq_wr_idx(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    
    bVar1 = false;
    if (arg1 != 0) {
        if (*(arg1 + 0x34) <= arg2) {
            return false;
        }
        bVar1 = *(*(arg1 + 0x20) + arg2 * 0x14 + 0x10) != '\0';
    }
    return bVar1;
}


// ===== sym.hw_fence_gunyah_share_mem @ 0x08011dac (size 668) =====

int * sym.hw_fence_gunyah_share_mem(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    uint *puVar6;
    ushort *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    int *piVar11;
    uint64_t unaff_x30;
    uchar auVar12 [12];
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint32_t auStack_70 [3];
    uint uStack_64;
    uint32_t uStack_60;
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    auStack_70[0] = arg2 & 0xffff;
    auStack_70[1] = 7;
    uStack_60 = arg3 & 0xffff;
    uStack_64 = 6;
    uStack_74 = 1L << (arg2 & 0x3fU);
    uStack_78 = 1L << (arg3 & 0x3fU) | uStack_74;
    uStack_5c = 6;
    auStack_70[2] = auStack_70[0];
    uVar4 = qcom_scm_assign_mem(*(arg1 + 0x100),(*(arg1 + 0x108) - *(arg1 + 0x100)) + 1,&uStack_74,auStack_70 + 2,2)
    ;
    if (uVar4 == 0) {
        iVar8 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar8 = 0x30;
        }
        puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0xc);
        if (puVar6 == NULL) {
            uVar4 = 0xfffffff4;
        }
        else {
            iVar8 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar8 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x14);
            if (puVar7 == NULL) {
                kfree(puVar6);
                uVar4 = 0xfffffff4;
            }
            else {
                iVar8 = *(arg1 + 0x100);
                iVar2 = *(arg1 + 0x108);
                *puVar6 = 2;
                *(puVar6 + 6) = 6;
                uVar3 = *(arg1 + 0x168);
                *(puVar6 + 10) = 6;
                *puVar7 = 1;
                *(puVar7 + 2) = iVar8;
                *(puVar6 + 1) = arg2;
                *(puVar7 + 6) = (iVar2 - iVar8) + 1;
                *(puVar6 + 2) = arg3;
                iVar5 = gh_rm_mem_share(0,0,uVar3,puVar6,puVar7,0,arg1 + 0x188);
                uVar4 = 0;
                if (iVar5 != 0) {
                    uVar9 = -1L << (_simple_open & 0x3f);
                    uVar1 = (~uVar9 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar1 = uVar9 | unaff_x30;
                    }
                    _printk(0x8007026,"hw_fence_gunyah_share_mem",0x17e,uVar1,"hw_fence_gunyah_share_mem",
                            *(arg1 + 0x100),*(arg1 + 0x160),iVar5);
                    qcom_scm_assign_mem(*(arg1 + 0x100),(*(arg1 + 0x108) - *(arg1 + 0x100)) + 1,&uStack_78,auStack_70
                                        ,1);
                    uVar4 = 0xfffffdfb;
                }
                kfree(puVar6);
                kfree(puVar7);
            }
        }
    }
    else {
        uVar9 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar9 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar9 | unaff_x30;
        }
        _printk(0x800602f,"hw_fence_gunyah_share_mem",0x164,uVar1,"hw_fence_gunyah_share_mem",*(arg1 + 0x100),
                *(arg1 + 0x160),uVar4);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    auVar12 = __stack_chk_fail();
    iVar8 = auVar12._0_8_;
    *extraout_x18 = sym._get_client_node;
    mutex_lock(iVar8 + 0x1d8);
    for (piVar10 = *(iVar8 + 0x1c8); iVar8 + 0x1c8 != piVar10; piVar10 = *piVar10) {
        piVar11 = piVar10 + -8;
        if (*piVar11 == auVar12._8_4_) goto code_r0x080120a4;
    }
    piVar11 = NULL;
code_r0x080120a4:
    mutex_unlock(iVar8 + 0x1d8);
    return piVar11;
}


// ===== sym._get_client_node @ 0x08012048 (size 128) =====

int * sym._get_client_node(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x1d8);
    for (piVar1 = *(arg1 + 0x1c8); arg1 + 0x1c8 != piVar1; piVar1 = *piVar1) {
        piVar2 = piVar1 + -8;
        if (*piVar2 == arg2) goto code_r0x080120a4;
    }
    piVar2 = NULL;
code_r0x080120a4:
    mutex_unlock(arg1 + 0x1d8);
    return piVar2;
}


// ===== sym.process_validation_client_loopback @ 0x080120c8 (size 288) =====

ulong sym.process_validation_client_loopback(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg2 & 0xffffffff;
    if (arg2 - 0xfU < 0xfffffff9) {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar3 | unaff_x30;
        }
        _printk(0x800420e,"process_validation_client_loopback",0x385,uVar2,uVar4,8,0xe);
    }
    else {
        iVar1 = arg1 + 0x298;
        mutex_lock(iVar1);
        iVar5 = *(*(arg1 + 0x2c8) + uVar4 * 8);
        if (iVar5 != 0) {
            if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                _printk(0x8004251,"process_validation_client_loopback",0x392,uVar4);
            }
            *(iVar5 + 0x90) = 1;
            __wake_up(iVar5 + 0x78,3,0,0);
            mutex_unlock(iVar1);
            return 0;
        }
        mutex_unlock(iVar1);
    }
    return 0xffffffea;
}


// ===== sym.hw_fence_debug_debugfs_register @ 0x080121e8 (size 664) =====

ulong sym.hw_fence_debug_debugfs_register(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = debugfs_create_dir("hw_fence",0);
    if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar4 | unaff_x30;
        }
        _printk(0x8006082,"hw_fence_debug_debugfs_register",0x3ca,uVar1,uVar2);
        uVar3 = 0xffffffea;
        *(arg1 + 0x1a0) = 0;
    }
    else {
        __mutex_init(arg1 + 0x1d8,"&drv_data->debugfs_data.clients_list_lock",obj.msm_hw_fence_probe_init.__key);
        *(arg1 + 0x1c8) = arg1 + 0x1c8;
        *(arg1 + 0x1d0) = arg1 + 0x1c8;
        *(arg1 + 0x1a0) = uVar2;
        *(arg1 + 0x1c4) = 1;
        *(arg1 + 0x1c0) = 0x208d;
        debugfs_create_file("ipc_trigger",0x180,uVar2,arg1,obj.hw_fence_dbg_ipcc_fops);
        debugfs_create_file("dpu_trigger",0x180,uVar2,arg1,obj.hw_fence_dbg_ipcc_dpu_fops);
        debugfs_create_file("hw_fence_reset_client",0x180,uVar2,arg1,obj.hw_fence_reset_client_fops);
        debugfs_create_file("hw_fence_register_clients",0x180,uVar2,arg1,obj.hw_fence_register_clients_fops);
        debugfs_create_file("hw_fence_tx_and_signal",0x180,uVar2,arg1,obj.hw_fence_tx_and_signal_clients_fops);
        debugfs_create_file("hw_fence_create_join_fence",0x180,uVar2,arg1,obj.hw_fence_create_join_fence_fops);
        debugfs_create_bool("create_hw_fences",0x180,uVar2,arg1 + 0x1c4);
        debugfs_create_u32("sleep_range_us",0x180,uVar2,arg1 + 0x1c0);
        debugfs_create_file("hw_fence_create",0x180,uVar2,arg1,obj.hw_fence_create_fops);
        debugfs_create_u32("hw_fence_debug_level",0x180,uVar2,obj.msm_hw_fence_debug_level);
        debugfs_create_file("hw_fence_dump_table",0x180,uVar2,arg1,obj.hw_fence_dump_table_fops);
        debugfs_create_file("hw_fence_dump_queues",0x180,uVar2,arg1,obj.hw_fence_dump_queues_fops);
        debugfs_create_file("hw_sync",0x180,uVar2,0,obj.hw_sync_debugfs_fops);
        debugfs_create_u64("hw_fence_lock_wake_cnt",0x180,uVar2,arg1 + 0x208);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.hw_fence_dbg_ipcc_write @ 0x08012480 (size 52) =====

int64_t sym.hw_fence_dbg_ipcc_write(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sym._debugfs_ipcc_trigger(arg1,in_q0,in_x2,*(*(arg1 + 0xd8) + 0x22c));
    return iVar1;
}


// ===== sym._debugfs_ipcc_trigger @ 0x080124b4 (size 268) =====

//WARNING: Removing unreachable block (ram,0x08012740)
//WARNING: Removing unreachable block (ram,0x080126d8)

uint32_t * sym._debugfs_ipcc_trigger(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    uint32_t arg2_00;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t in_x1;
    uint64_t uVar9;
    uint64_t in_x4;
    uint32_t *puVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *puVar12;
    uint64_t uVar13;
    int64_t unaff_x22;
    int64_t *arg4;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint32_t uStack_9c;
    ulong uStack_98;
    ushort uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uint64_t uStack_68;
    uint32_t *puStack_60;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    arg4 = &iStack_50;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    uVar13 = arg3 & 0xffffffff;
    iStack_48 = *(iVar8 + 0x5e0);
    puVar12 = in_x4 & 0xffffffff;
    iStack_50 = 0;
    puVar10 = arg2;
    arg2_00 = sym._get_debugfs_input_client(arg1,in_x1,arg2,&iStack_50);
    iVar8 = iStack_50;
    iStack_70 = unaff_x22;
    if (arg2_00 < 0) {
code_r0x08012548:
        arg2 = 0xffffffea;
    }
    else {
        uVar4 = sym.hw_fence_ipcc_get_signal_id(iStack_50,arg2_00);
        iStack_70 = iVar8;
        if (uVar4 < 0) goto code_r0x08012548;
        arg4 = uVar4;
        if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
            uVar6 = sym.hw_fence_get_qtime(iVar8);
            _printk(0x8003936,"_debugfs_ipcc_trigger",0x5a,arg2_00,uVar13,puVar12,arg4,uVar6);
        }
        puVar10 = puVar12;
        sym.hw_fence_ipcc_trigger_signal(iVar8,uVar13,puVar12,arg4);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return arg2 & 0xffffffff;
    }
    auVar14 = __stack_chk_fail();
    iVar7 = auVar14._0_8_;
    *extraout_x18 = sym._get_debugfs_input_client;
    pcStack_78 = sym._get_debugfs_input_client;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_9c = 0;
    puStack_80 = &stack0xffffffffffffffc0;
    uStack_68 = uVar13;
    puStack_60 = puVar12;
    uStack_58 = arg2;
    if ((iVar7 == 0) || (*(iVar7 + 0xd8) == 0)) {
        puVar12 = 0x31;
        _printk(0x800317d,"_get_debugfs_input_client",0x31,~(-1L << (_simple_open & 0x3f)) & 0x80125c0,iVar7 == 0);
code_r0x080126e0:
        puVar10 = 0xffffffea;
    }
    else {
        *arg4 = *(iVar7 + 0xd8);
        puVar12 = puVar10;
        if (puVar10 < 0xa) {
            __check_object_size(&uStack_98,puVar10,0);
            iVar8 = sym._copy_from_user(&uStack_98,auVar14._8_8_,puVar10);
            if (iVar8 == 0) {
                puVar12 = &uStack_9c;
                *(&uStack_98 + puVar10) = 0;
                iVar5 = kstrtouint(&uStack_98,0);
                if (iVar5 == 0) {
                    puVar10 = uStack_9c;
                    if (0xfffffd71 < uStack_9c - 0x28f) goto code_r0x0801265c;
                    puVar12 = 0x43;
                    _printk(0x800583f,"_get_debugfs_input_client",0x43,~(-1L << (_simple_open & 0x3f)) & 0x80125c0,
                            puVar10,1,0x28f);
                    goto code_r0x080126e0;
                }
            }
        }
        puVar10 = 0xfffffff2;
    }
code_r0x0801265c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_88) {
        auVar14 = __stack_chk_fail();
        uVar9 = auVar14._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar13 = (uVar9 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar11 = uVar9 & uVar13;
        }
        bVar3 = CARRY8(uVar11,puVar12);
        uVar11 = uVar11 + puVar12;
        uVar1 = 0;
        if (!bVar3 || uVar11 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar11 = 0xffffffffffffffff;
        }
        puVar10 = puVar12;
        if (!CARRY8(uVar11,~uVar1) && !CARRY8(uVar11 + ~uVar1,bVar3) || uVar11 == uVar1 + !bVar3) {
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
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
            if ((uVar9 & uVar13 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            puVar10 = __arch_copy_from_user(auVar14._0_8_,uVar9,puVar12);
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar13 = daif;
                if ((uVar13 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar13;
            }
        }
        if (puVar10 != NULL) {
            memset(puVar12 + (auVar14._0_8_ - puVar10),0,puVar10);
        }
        return puVar10;
    }
    return puVar10;
}


// ===== sym._get_debugfs_input_client @ 0x080125c0 (size 400) =====

uint32_t * sym._get_debugfs_input_client(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    uint32_t uStack_4c;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    puVar8 = arg3;
    uVar5 = arg1;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    if ((uVar5 == 0) || (*(uVar5 + 0xd8) == 0)) {
        uVar10 = -1L << (_simple_open & 0x3f);
        puVar7 = 0x31;
        uVar9 = (~uVar10 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar9 = uVar10 | unaff_x30;
        }
        _printk(0x800317d,"_get_debugfs_input_client",0x31,uVar9,uVar5 == 0);
code_r0x080126e0:
        puVar8 = 0xffffffea;
    }
    else {
        *arg4 = *(uVar5 + 0xd8);
        puVar7 = puVar8;
        if (puVar8 < 0xa) {
            __check_object_size(&uStack_48,puVar8,0);
            iVar6 = sym._copy_from_user(&uStack_48,arg2,puVar8);
            if (iVar6 == 0) {
                puVar7 = &uStack_4c;
                *(&uStack_48 + puVar8) = 0;
                iVar4 = kstrtouint(&uStack_48,0);
                if (iVar4 == 0) {
                    puVar8 = uStack_4c;
                    if (0xfffffd71 < uStack_4c - 0x28f) goto code_r0x0801265c;
                    puVar7 = 0x43;
                    uVar9 = -1L << (_simple_open & 0x3f);
                    uVar5 = (~uVar9 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar5 = uVar9 | unaff_x30;
                    }
                    _printk(0x800583f,"_get_debugfs_input_client",0x43,uVar5,puVar8,1,0x28f);
                    goto code_r0x080126e0;
                }
            }
        }
        puVar8 = 0xfffffff2;
    }
code_r0x0801265c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return puVar8;
    }
    auVar11 = __stack_chk_fail();
    uVar9 = auVar11._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar5 = (uVar9 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar10 = uVar9 & uVar5;
    }
    bVar3 = CARRY8(uVar10,puVar7);
    uVar10 = uVar10 + puVar7;
    uVar1 = 0;
    if (!bVar3 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar10 = 0xffffffffffffffff;
    }
    puVar8 = puVar7;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar3) || uVar10 == uVar1 + !bVar3) {
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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
        if ((uVar9 & uVar5 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        puVar8 = __arch_copy_from_user(auVar11._0_8_,uVar9,puVar7);
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
    }
    if (puVar8 != NULL) {
        memset(puVar7 + (auVar11._0_8_ - puVar8),0,puVar8);
    }
    return puVar8;
}


// ===== sym._copy_from_user @ 0x08012750 (size 376) =====

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
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user_1 @ 0x08012904 (size 376) =====

int64_t sym._copy_from_user_1(int64_t arg1,int64_t arg2,int64_t arg3)

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
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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


// ===== sym.hw_fence_dbg_ipcc_dpu_write @ 0x08012ab8 (size 104) =====

int64_t sym.hw_fence_dbg_ipcc_dpu_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0xd8) + 0x22c);
    noname_1 = sym.hw_fence_ipcc_get_client_virt_id(*(arg1 + 0xd8),2);
    iVar2 = sym._debugfs_ipcc_trigger(arg1,noname_1,arg3,uVar1);
    return iVar2;
}


// ===== sym.hw_fence_dbg_reset_client_wr @ 0x08012b20 (size 460) =====

//WARNING: Removing unreachable block (ram,0x08013888)
//WARNING: Removing unreachable block (ram,0x080132f0)
//WARNING: Removing unreachable block (ram,0x080132a4)
//WARNING: Removing unreachable block (ram,0x08013414)
//WARNING: Removing unreachable block (ram,0x08012ec8)
//WARNING: Removing unreachable block (ram,0x08012f20)
//WARNING: Removing unreachable block (ram,0x08013348)
//WARNING: Removing unreachable block (ram,0x080133c8)
//WARNING: Removing unreachable block (ram,0x08013060)
//WARNING: Removing unreachable block (ram,0x080138d8)
//WARNING: Removing unreachable block (ram,0x08013a5c)
//WARNING: Removing unreachable block (ram,0x08013aac)

code * sym.hw_fence_dbg_reset_client_wr(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint *puVar11;
    int64_t iVar12;
    int64_t in_x1;
    int64_t arg2_00;
    code *pcVar13;
    uint64_t uVar14;
    code *pcVar15;
    code *pcVar16;
    int64_t *piVar17;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar18;
    code *unaff_x22;
    code *unaff_x23;
    code *pcVar19;
    code *unaff_x24;
    code *unaff_x25;
    int64_t unaff_x26;
    int *piVar20;
    code *unaff_x27;
    int *piVar21;
    uint64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar22 [16];
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong *puStack_1b8;
    int64_t iStack_1b0;
    ulong uStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_198;
    uchar ***pppuStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    code *pcStack_178;
    int64_t iStack_170;
    code *pcStack_168;
    code *pcStack_160;
    code *pcStack_158;
    code *pcStack_150;
    uint64_t uStack_148;
    code *pcStack_140;
    code *pcStack_138;
    uint32_t uStack_130;
    ulong uStack_128;
    uint32_t uStack_11c;
    int64_t iStack_118;
    ushort uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    code *pcStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    pcStack_50 = NULL;
    pcVar13 = arg2;
    uVar4 = sym._get_debugfs_input_client(arg1,in_x1,arg2,&pcStack_50);
    pcVar19 = pcStack_50;
    if (-1 < uVar4) {
        unaff_x22 = pcStack_50 + 0x1d8;
        mutex_lock(unaff_x22);
        unaff_x24 = pcVar19;
        for (unaff_x23 = *(pcVar19 + 0x1c8); pcVar19 + 0x1c8 != unaff_x23; unaff_x23 = *unaff_x23) {
            unaff_x24 = unaff_x23 + -0x40;
            if (*unaff_x24 == uVar4) {
                mutex_unlock(unaff_x22);
                if (((unaff_x24 == NULL) || (uVar7 = *(unaff_x23 + -0x28), uVar7 == 0)) || (0xfffffffffffff000 < uVar7)
                   ) goto code_r0x08012c3c;
                if ((~_segment.ehdr & 0x10001) == 0) {
                    pcVar13 = 0xc0;
                    _printk(0x80070f0,"hw_fence_dbg_reset_client_wr",0xc0,uVar4);
                    uVar7 = *(unaff_x23 + -0x28);
                }
                iVar5 = sym.msm_hw_fence_reset_client(uVar7,0);
                if (iVar5 != 0) {
                    pcVar13 = 0xc3;
                    uVar14 = -1L << (_simple_open & 0x3f);
                    uVar7 = (~uVar14 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar7 = uVar14 | unaff_x30;
                    }
                    _printk(0x800347a,"hw_fence_dbg_reset_client_wr",0xc3,uVar7,uVar4);
                }
                goto code_r0x08012c8c;
            }
        }
        mutex_unlock(unaff_x22);
code_r0x08012c3c:
        pcVar13 = 0xbc;
        uVar14 = -1L << (_simple_open & 0x3f);
        uVar7 = (~uVar14 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar7 = uVar14 | unaff_x30;
        }
        _printk(0x800399a,"hw_fence_dbg_reset_client_wr",0xbc,uVar7,uVar4);
    }
    arg2 = -0x16;
code_r0x08012c8c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return arg2;
    }
    uVar4 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_dbg_register_clients_wr;
    pcStack_88 = sym.hw_fence_dbg_register_clients_wr;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    pcVar19 = sym.hw_fence_dbg_register_clients_wr;
    iStack_a0 = 0;
    pcVar15 = pcVar13;
    puStack_90 = &stack0xffffffffffffffc0;
    pcStack_80 = unaff_x24;
    pcStack_78 = unaff_x23;
    pcStack_70 = unaff_x22;
    uVar4 = sym._get_debugfs_input_client(uVar4,arg2_00,pcVar13,&iStack_a0);
    iVar8 = iStack_a0;
    if (uVar4 < 0) {
        pcVar13 = 0xffffffffffffffea;
    }
    else {
        unaff_x30 = iStack_a0 + 0x1d8;
        mutex_lock(unaff_x30);
        unaff_x22 = iVar8 + 0x1c8;
        for (pcVar15 = *(iVar8 + 0x1c8); unaff_x22 != pcVar15; pcVar15 = *pcVar15) {
            unaff_x24 = pcVar15 + -0x40;
            if (*unaff_x24 == uVar4) {
                mutex_unlock(unaff_x30);
                if (unaff_x24 == NULL) goto code_r0x08012d90;
                pcVar15 = 0xe1;
                _printk(0x80079e8,"hw_fence_dbg_register_clients_wr",0xe1,~(-1L << (_simple_open & 0x3f)) & 0x8012cec
                        ,uVar4);
                pcVar13 = 0xffffffffffffffea;
                goto code_r0x08012e2c;
            }
        }
        mutex_unlock(unaff_x30);
code_r0x08012d90:
        pcVar15 = 0x50;
        pcVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
        if (pcVar6 == NULL) {
            pcVar13 = 0xfffffffffffffff4;
        }
        else {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8006b6d,"hw_fence_dbg_register_clients_wr",0xe9,uVar4);
            }
            uVar7 = sym.msm_hw_fence_register(uVar4,pcVar6 + 0x20);
            *(pcVar6 + 0x18) = uVar7;
            unaff_x24 = pcVar6;
            if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                pcVar15 = 0xed;
                _printk(0x8002a18,"hw_fence_dbg_register_clients_wr",0xed,~(-1L << (_simple_open & 0x3f)) & 0x8012cec
                        ,uVar4);
                pcVar13 = 0xfffffffffffffff2;
                *(pcVar6 + 0x18) = 0;
            }
            else {
                iVar8 = dma_fence_context_alloc(1);
                *(pcVar6 + 8) = iVar8;
                *pcVar6 = uVar4;
                mutex_lock(unaff_x30);
                pcVar19 = *unaff_x22;
                pcVar18 = pcVar6 + 0x40;
                pcVar15 = pcVar19;
                uVar7 = __list_add_valid(pcVar18,unaff_x22);
                if ((uVar7 & 1) != 0) {
                    *(pcVar19 + 8) = pcVar18;
                    *(pcVar6 + 0x40) = pcVar19;
                    *(pcVar6 + 0x48) = unaff_x22;
                    *unaff_x22 = pcVar18;
                }
                mutex_unlock(unaff_x30);
            }
        }
    }
code_r0x08012e2c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return pcVar13;
    }
    auVar22 = __stack_chk_fail();
    pcVar13 = auVar22._8_8_;
    *extraout_x18_00 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    pcStack_f8 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iVar8 = sp_el0;
    pcVar6 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iStack_108 = *(iVar8 + 0x5e0);
    uStack_11c = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    iStack_118 = 0;
    ppuStack_100 = &puStack_90;
    if ((auVar22._0_8_ == 0) || (unaff_x30 = *(auVar22._0_8_ + 0xd8), unaff_x30 == 0)) {
        pcVar18 = 0x115;
        _printk(0x800317d,"hw_fence_dbg_tx_and_signal_clients_wr",0x115,~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
        pcVar13 = unaff_x22;
code_r0x08013068:
        pcVar15 = 0xffffffffffffffea;
    }
    else {
        pcVar18 = pcVar15;
        if (pcVar15 < 0xa) {
            pcVar19 = &iStack_118;
            __check_object_size(&iStack_118,pcVar15,0);
            iVar8 = sym._copy_from_user(&iStack_118,pcVar13,pcVar15);
            unaff_x22 = pcVar13;
            if (iVar8 == 0) {
                pcVar18 = &uStack_11c;
                pcVar19[pcVar15] = 0x0;
                iVar5 = kstrtouint(&iStack_118,0,pcVar18);
                if (iVar5 == 0) {
                    if (uStack_11c == 0) {
                        pcVar18 = 0x126;
                        _printk(0x800644c,"hw_fence_dbg_tx_and_signal_clients_wr",0x126,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                        pcVar15 = NULL;
                    }
                    else {
                        if (200 < uStack_11c) {
                            pcVar18 = 0x12a;
                            _printk(0x8002d3e,"hw_fence_dbg_tx_and_signal_clients_wr",0x12a,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34,uStack_11c,200);
                            uStack_11c = 200;
                        }
                        pcVar13 = unaff_x30 + 0x1d8;
                        mutex_lock(pcVar13);
                        pcVar19 = unaff_x30 + 0x1c8;
                        for (pcVar16 = *(unaff_x30 + 0x1c8); pcVar19 != pcVar16; pcVar16 = *pcVar16) {
                            unaff_x25 = pcVar16 + -0x40;
                            if (*unaff_x25 == 2) goto code_r0x080130bc;
                        }
                        unaff_x25 = NULL;
code_r0x080130bc:
                        mutex_unlock(pcVar13);
                        mutex_lock(pcVar13);
                        for (pcVar16 = *pcVar19; pcVar19 != pcVar16; pcVar16 = *pcVar16) {
                            unaff_x24 = pcVar16 + -0x40;
                            if (*unaff_x24 == 3) goto code_r0x080130f8;
                        }
                        unaff_x24 = NULL;
code_r0x080130f8:
                        mutex_unlock(pcVar13);
                        if (((((unaff_x25 == NULL) || (pcVar13 = *(unaff_x25 + 0x18), pcVar13 == NULL)) ||
                             (0xfffffffffffff000 < pcVar13)) ||
                            ((unaff_x24 == NULL || (pcVar19 = *(unaff_x24 + 0x18), pcVar19 == NULL)))) ||
                           (0xfffffffffffff000 < pcVar19)) {
                            pcVar18 = 0x138;
                            _printk(0x80077ed,"hw_fence_dbg_tx_and_signal_clients_wr",0x138,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34,2,3);
                            goto code_r0x08013068;
                        }
                        if ((*(unaff_x30 + 0x1c4) != '\0') && (uStack_11c != 0)) {
                            while( true ) {
                                unaff_x27 = *(unaff_x25 + 8);
                                unaff_x26 = *(unaff_x25 + 0x10);
                                *(unaff_x25 + 0x10) = unaff_x26 + 1;
                                iVar5 = sym.hw_fence_create(unaff_x30,pcVar13,unaff_x27,unaff_x26);
                                if (iVar5 != 0) break;
                                uStack_130 = 0;
                                sym.hw_fence_update_queue(unaff_x30,pcVar13,unaff_x27,unaff_x26);
                                iVar5 = sym.hw_fence_register_wait_client(unaff_x30,0,pcVar19,unaff_x27);
                                if (iVar5 != 0) {
                                    pcVar18 = 0x15e;
                                    _printk(0x8006b98,"hw_fence_dbg_tx_and_signal_clients_wr",0x15e,
                                            ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                                    goto code_r0x08013068;
                                }
                                unaff_x24 = *(unaff_x30 + 0x22c);
                                unaff_x28 = *(unaff_x30 + 0x228);
                                if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                                    uStack_130 = uStack_11c;
                                    _printk(0x8003686,"hw_fence_dbg_tx_and_signal_clients_wr",0x174,2,unaff_x24,
                                            unaff_x28,2,*(unaff_x30 + 0x1c0));
                                }
                                sym.hw_fence_ipcc_trigger_signal(unaff_x30,unaff_x24,unaff_x28,2);
                                usleep_range_state(*(unaff_x30 + 0x1c0),*(unaff_x30 + 0x1c0) + 5,2);
                                pcVar18 = unaff_x27;
                                iVar5 = sym.hw_fence_destroy(unaff_x30,pcVar13,unaff_x27,unaff_x26);
                                if (iVar5 != 0) {
                                    uVar9 = 0x80031ad;
                                    pcVar18 = 0x187;
                                    goto code_r0x08013400;
                                }
                                uStack_11c = uStack_11c - 1;
                                if ((*(unaff_x30 + 0x1c4) == '\0') || (uStack_11c == 0)) goto code_r0x08012fe0;
                            }
                            uVar9 = 0x8004821;
                            pcVar18 = 0x14f;
code_r0x08013400:
                            _printk(uVar9,"hw_fence_dbg_tx_and_signal_clients_wr",pcVar18,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                        }
                    }
                    goto code_r0x08012fe0;
                }
            }
        }
        pcVar13 = unaff_x22;
        pcVar15 = 0xfffffffffffffff2;
    }
code_r0x08012fe0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_108) {
        return pcVar15;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18_01 = sym.hw_fence_dbg_create_join_fence;
    pcStack_188 = sym.hw_fence_dbg_create_join_fence;
    pcStack_140 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iVar8 = sp_el0;
    iStack_198 = *(iVar8 + 0x5e0);
    iStack_1a0 = 0;
    iStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    puStack_1b8 = NULL;
    uStack_1c8 = 0;
    pppuStack_190 = &ppuStack_100;
    uStack_180 = unaff_x28;
    pcStack_178 = unaff_x27;
    iStack_170 = unaff_x26;
    pcStack_168 = unaff_x25;
    pcStack_160 = unaff_x24;
    pcStack_158 = pcVar19;
    pcStack_150 = pcVar13;
    uStack_148 = unaff_x30;
    pcStack_138 = pcVar15;
    if ((iVar10 == 0) || (iVar8 = *(iVar10 + 0xd8), iVar8 == 0)) {
        _printk(0x800317d,"hw_fence_dbg_create_join_fence",0x313,~(-1L << (_simple_open & 0x3f)) & 0x8013424);
        pcVar18 = 0xffffffffffffffea;
        goto code_r0x080139dc;
    }
    pcVar19 = iVar8 + 0x1d8;
    mutex_lock(pcVar19);
    piVar1 = iVar8 + 0x1c8;
    for (piVar17 = *(iVar8 + 0x1c8); piVar1 != piVar17; piVar17 = *piVar17) {
        piVar20 = piVar17 + -8;
        if (*piVar20 == 2) goto code_r0x080134bc;
    }
    piVar20 = NULL;
code_r0x080134bc:
    mutex_unlock(pcVar19);
    mutex_lock(pcVar19);
    for (piVar17 = *piVar1; piVar1 != piVar17; piVar17 = *piVar17) {
        piVar21 = piVar17 + -8;
        if (*piVar21 == 3) goto code_r0x080134f8;
    }
    piVar21 = NULL;
code_r0x080134f8:
    mutex_unlock(pcVar19);
    if ((((piVar20 == NULL) || (uVar7 = *(piVar20 + 6), uVar7 == 0)) || (0xfffffffffffff000 < uVar7)) ||
       (((piVar21 == NULL || (*(piVar21 + 6) == 0)) || (0xfffffffffffff000 < *(piVar21 + 6))))) {
        _printk(0x80051e6,"hw_fence_dbg_create_join_fence",0x31e,~(-1L << (_simple_open & 0x3f)) & 0x8013424,2,3);
        pcVar18 = 0xffffffffffffffea;
        pcVar6 = pcVar19;
        goto code_r0x080139dc;
    }
    iVar10 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar10 = 0x30;
    }
    pcVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x18);
    if (pcVar6 != NULL) {
        iVar10 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar10 = 0x30;
        }
        pcVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x18);
        pcVar19 = pcVar6;
        if (pcVar13 != NULL) {
            iVar10 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar10 = 0x30;
            }
            puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,4);
            *pcVar6 = puVar11;
            pcVar19 = pcVar13;
            if (puVar11 == NULL) {
                iVar10 = 0;
                bVar3 = true;
code_r0x08013904:
                kfree(*(pcVar6 + iVar10 * 8));
                kfree(*(pcVar13 + iVar10 * 8));
                if (!bVar3) {
                    iVar8 = iVar10 + -1;
                    kfree(*(pcVar6 + iVar8 * 8));
                    kfree(*(pcVar13 + iVar8 * 8));
                    if (iVar8 != 0) {
                        kfree(*(pcVar6 + (iVar10 + -2) * 8));
                        kfree(*(pcVar13 + (iVar10 + -2) * 8));
                    }
                }
                kfree(pcVar6);
            }
            else {
                iVar12 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                if (iVar12 == 0) {
                    iVar8 = 0;
                    bVar3 = true;
                }
                else {
                    *puVar11 = 0;
                    *pcVar13 = iVar12;
                    iVar10 = 1;
                    dma_fence_init(iVar12,obj.hw_fence_dbg_ops,puVar11,*(piVar20 + 2),1);
                    iVar12 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar12 = 0x30;
                    }
                    puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,4);
                    *(pcVar6 + 8) = puVar11;
                    if (puVar11 == NULL) {
code_r0x08013900:
                        bVar3 = false;
                        goto code_r0x08013904;
                    }
                    iVar12 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                    if (iVar12 == 0) {
                        bVar3 = false;
                        iVar8 = 1;
                    }
                    else {
                        *puVar11 = 0;
                        *(pcVar13 + 8) = iVar12;
                        iVar10 = 2;
                        dma_fence_init(iVar12,obj.hw_fence_dbg_ops,puVar11,*(piVar20 + 2),2);
                        iVar12 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar12 = 0x30;
                        }
                        puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar12),0xdc0,4);
                        *(pcVar6 + 0x10) = puVar11;
                        if (puVar11 == NULL) goto code_r0x08013900;
                        iVar10 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                        if (iVar10 != 0) {
                            *puVar11 = 0;
                            *(pcVar13 + 0x10) = iVar10;
                            dma_fence_init(iVar10,obj.hw_fence_dbg_ops,puVar11,*(piVar20 + 2),3);
                            iVar10 = dma_fence_array_create(3,pcVar13,*(piVar20 + 2),4,0);
                            if (iVar10 == 0) {
                                _printk(0x80073b0,"hw_fence_dbg_create_join_fence",0x347,
                                        ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                                sym._cleanup_fences(pcVar13,pcVar6);
                                pcVar18 = 0xffffffffffffffea;
                                goto code_r0x080139dc;
                            }
                            iStack_1b0 = *pcVar13;
                            puStack_1b8 = &uStack_1c8;
                            iVar5 = sym.msm_hw_fence_create(*(piVar20 + 6),&uStack_1c0);
                            if (iVar5 == 0) {
                                sym.hw_fence_update_queue(iVar8,uVar7,*(piVar20 + 2),1);
                                iStack_1b0 = *(pcVar13 + 8);
                                puStack_1b8 = &uStack_1c8;
                                iVar5 = sym.msm_hw_fence_create(*(piVar20 + 6),&uStack_1c0);
                                if (iVar5 == 0) {
                                    sym.hw_fence_update_queue(iVar8,uVar7,*(piVar20 + 2),2);
                                    iStack_1b0 = *(pcVar13 + 0x10);
                                    puStack_1b8 = &uStack_1c8;
                                    iVar5 = sym.msm_hw_fence_create(*(piVar20 + 6),&uStack_1c0);
                                    if (iVar5 == 0) {
                                        sym.hw_fence_update_queue(iVar8,uVar7,*(piVar20 + 2),3);
                                        iStack_1a0 = iVar10;
                                        sym.msm_hw_fence_wait_update_v2(*(piVar21 + 6),&iStack_1a0,0,0);
                                        sym.hw_fence_ipcc_trigger_signal(iVar8,*(iVar8 + 0x22c),*(iVar8 + 0x228),2);
                                        usleep_range_state(*(iVar8 + 0x1c0),*(iVar8 + 0x1c0) + 5,2);
                                        goto code_r0x0801380c;
                                    }
                                }
                            }
                            _printk(0x8004821,"hw_fence_dbg_create_join_fence",0x353,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                            pcVar18 = 0xffffffffffffffea;
code_r0x0801380c:
                            piVar20 = iVar10 + 0x38;
                            goto code_r0x08013ad0;
                        }
                        bVar3 = false;
                        iVar8 = 2;
                    }
                }
                kfree(*(pcVar6 + iVar8 * 8));
                kfree(*(pcVar13 + iVar8 * 8));
                if (!bVar3) {
                    iVar10 = iVar8 + -1;
                    kfree(*(pcVar6 + iVar10 * 8));
                    kfree(*(pcVar13 + iVar10 * 8));
                    if (iVar10 != 0) {
                        kfree(*(pcVar6 + (iVar8 + -2) * 8));
                        kfree(*(pcVar13 + (iVar8 + -2) * 8));
                    }
                }
                kfree(pcVar6);
            }
        }
        kfree(pcVar19);
        pcVar19 = pcVar6;
    }
    pcVar18 = 0xfffffffffffffff4;
    pcVar6 = pcVar19;
code_r0x080139dc:
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_198) {
        piVar20 = __stack_chk_fail();
code_r0x08013ad0:
        Hint_Prefetch(piVar20,2,0,1);
        do {
            iVar5 = *piVar20;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar20,0x10);
            if (bVar3) {
                *piVar20 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar5 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar5 < 1) {
            refcount_warn_saturate(piVar20,3);
        }
        kfree(pcVar6);
    }
    return pcVar18;
}


// ===== sym.hw_fence_dbg_register_clients_wr @ 0x08012cec (size 584) =====

//WARNING: Removing unreachable block (ram,0x08013888)
//WARNING: Removing unreachable block (ram,0x080132a4)
//WARNING: Removing unreachable block (ram,0x08013414)
//WARNING: Removing unreachable block (ram,0x08013348)
//WARNING: Removing unreachable block (ram,0x080133c8)
//WARNING: Removing unreachable block (ram,0x080132f0)
//WARNING: Removing unreachable block (ram,0x08013060)
//WARNING: Removing unreachable block (ram,0x080138d8)
//WARNING: Removing unreachable block (ram,0x08013a5c)
//WARNING: Removing unreachable block (ram,0x08013aac)

uint32_t * sym.hw_fence_dbg_register_clients_wr(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    code *arg1_00;
    uint *puVar10;
    int64_t iVar11;
    code *pcVar12;
    int64_t in_x1;
    uint32_t *arg3;
    int64_t *piVar13;
    uint64_t uVar14;
    uint32_t *puVar15;
    int64_t *piVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *arg2_00;
    int64_t unaff_x21;
    int64_t *unaff_x22;
    uint32_t *unaff_x24;
    uint32_t *unaff_x25;
    int64_t unaff_x26;
    int *piVar17;
    uint32_t *unaff_x27;
    int *piVar18;
    uint64_t unaff_x28;
    uint32_t *unaff_x30;
    uchar auVar19 [16];
    ulong uStack_178;
    ulong uStack_170;
    ulong *puStack_168;
    int64_t iStack_160;
    ulong uStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    uint32_t *puStack_128;
    int64_t iStack_120;
    uint32_t *puStack_118;
    uint32_t *puStack_110;
    uint32_t *puStack_108;
    int64_t *piStack_100;
    int64_t iStack_f8;
    code *pcStack_f0;
    uint32_t *puStack_e8;
    uint32_t uStack_e0;
    ulong uStack_d8;
    uint32_t uStack_cc;
    uint32_t auStack_c8 [2];
    ushort uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iStack_50 = 0;
    arg3 = arg2;
    uVar3 = sym._get_debugfs_input_client(arg1,in_x1,arg2,&iStack_50);
    iVar7 = iStack_50;
    if (uVar3 < 0) {
        arg2 = -0x16;
    }
    else {
        unaff_x21 = iStack_50 + 0x1d8;
        mutex_lock(unaff_x21);
        unaff_x22 = iVar7 + 0x1c8;
        for (piVar13 = *(iVar7 + 0x1c8); unaff_x22 != piVar13; piVar13 = *piVar13) {
            unaff_x24 = piVar13 + -8;
            if (*unaff_x24 == uVar3) {
                mutex_unlock(unaff_x21);
                if (unaff_x24 == NULL) goto code_r0x08012d90;
                arg3 = 0xe1;
                uVar14 = -1L << (_simple_open & 0x3f);
                uVar6 = (~uVar14 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar6 = uVar14 | unaff_x30;
                }
                _printk(0x80079e8,"hw_fence_dbg_register_clients_wr",0xe1,uVar6,uVar3);
                arg2 = -0x16;
                goto code_r0x08012e2c;
            }
        }
        mutex_unlock(unaff_x21);
code_r0x08012d90:
        arg3 = 0x50;
        puVar5 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
        if (puVar5 == NULL) {
            arg2 = -0xc;
        }
        else {
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8006b6d,"hw_fence_dbg_register_clients_wr",0xe9,uVar3);
            }
            uVar6 = sym.msm_hw_fence_register(uVar3,puVar5 + 8);
            *(puVar5 + 6) = uVar6;
            unaff_x24 = puVar5;
            if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                arg3 = 0xed;
                uVar14 = -1L << (_simple_open & 0x3f);
                uVar6 = (~uVar14 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar6 = uVar14 | unaff_x30;
                }
                _printk(0x8002a18,"hw_fence_dbg_register_clients_wr",0xed,uVar6,uVar3);
                arg2 = -0xe;
                puVar5[6] = 0;
                puVar5[7] = 0;
            }
            else {
                iVar7 = dma_fence_context_alloc(1);
                *(puVar5 + 2) = iVar7;
                *puVar5 = uVar3;
                mutex_lock(unaff_x21);
                unaff_x30 = *unaff_x22;
                puVar15 = puVar5 + 0x10;
                arg3 = unaff_x30;
                uVar6 = __list_add_valid(puVar15,unaff_x22);
                if ((uVar6 & 1) != 0) {
                    *(unaff_x30 + 2) = puVar15;
                    *(puVar5 + 0x10) = unaff_x30;
                    *(puVar5 + 0x12) = unaff_x22;
                    *unaff_x22 = puVar15;
                }
                mutex_unlock(unaff_x21);
            }
        }
    }
code_r0x08012e2c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return arg2;
    }
    auVar19 = __stack_chk_fail();
    piVar13 = auVar19._8_8_;
    *extraout_x18 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    pcStack_a8 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iVar7 = sp_el0;
    arg2_00 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_cc = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    puStack_b0 = &stack0xffffffffffffffc0;
    if ((auVar19._0_8_ == 0) || (unaff_x21 = *(auVar19._0_8_ + 0xd8), unaff_x21 == 0)) {
        puVar5 = 0x115;
        _printk(0x800317d,"hw_fence_dbg_tx_and_signal_clients_wr",0x115,~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
        piVar13 = unaff_x22;
code_r0x08013068:
        arg3 = 0xffffffffffffffea;
    }
    else {
        puVar5 = arg3;
        if (arg3 < 0xa) {
            unaff_x30 = auStack_c8;
            __check_object_size(auStack_c8,arg3,0);
            iVar7 = sym._copy_from_user(auStack_c8,piVar13,arg3);
            unaff_x22 = piVar13;
            if (iVar7 == 0) {
                puVar5 = &uStack_cc;
                *(unaff_x30 + arg3) = 0;
                iVar4 = kstrtouint(auStack_c8,0,puVar5);
                if (iVar4 == 0) {
                    if (uStack_cc == 0) {
                        puVar5 = 0x126;
                        _printk(0x800644c,"hw_fence_dbg_tx_and_signal_clients_wr",0x126,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                        arg3 = NULL;
                    }
                    else {
                        if (200 < uStack_cc) {
                            puVar5 = 0x12a;
                            _printk(0x8002d3e,"hw_fence_dbg_tx_and_signal_clients_wr",0x12a,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34,uStack_cc,200);
                            uStack_cc = 200;
                        }
                        piVar13 = unaff_x21 + 0x1d8;
                        mutex_lock(piVar13);
                        unaff_x30 = unaff_x21 + 0x1c8;
                        for (puVar15 = *(unaff_x21 + 0x1c8); unaff_x30 != puVar15; puVar15 = *puVar15) {
                            unaff_x25 = puVar15 + -0x10;
                            if (*unaff_x25 == 2) goto code_r0x080130bc;
                        }
                        unaff_x25 = NULL;
code_r0x080130bc:
                        mutex_unlock(piVar13);
                        mutex_lock(piVar13);
                        for (puVar15 = *unaff_x30; unaff_x30 != puVar15; puVar15 = *puVar15) {
                            unaff_x24 = puVar15 + -0x10;
                            if (*unaff_x24 == 3) goto code_r0x080130f8;
                        }
                        unaff_x24 = NULL;
code_r0x080130f8:
                        mutex_unlock(piVar13);
                        if ((((unaff_x25 == NULL) || (piVar13 = *(unaff_x25 + 6), piVar13 == NULL)) ||
                            (0xfffffffffffff000 < piVar13)) ||
                           (((unaff_x24 == NULL || (unaff_x30 = *(unaff_x24 + 6), unaff_x30 == NULL)) ||
                            (0xfffffffffffff000 < unaff_x30)))) {
                            puVar5 = 0x138;
                            _printk(0x80077ed,"hw_fence_dbg_tx_and_signal_clients_wr",0x138,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34,2,3);
                            goto code_r0x08013068;
                        }
                        if ((*(unaff_x21 + 0x1c4) != '\0') && (uStack_cc != 0)) {
                            while( true ) {
                                unaff_x27 = *(unaff_x25 + 2);
                                unaff_x26 = *(unaff_x25 + 4);
                                *(unaff_x25 + 4) = unaff_x26 + 1;
                                iVar4 = sym.hw_fence_create(unaff_x21,piVar13,unaff_x27,unaff_x26);
                                if (iVar4 != 0) break;
                                uStack_e0 = 0;
                                sym.hw_fence_update_queue(unaff_x21,piVar13,unaff_x27,unaff_x26);
                                iVar4 = sym.hw_fence_register_wait_client(unaff_x21,0,unaff_x30,unaff_x27);
                                if (iVar4 != 0) {
                                    puVar5 = 0x15e;
                                    _printk(0x8006b98,"hw_fence_dbg_tx_and_signal_clients_wr",0x15e,
                                            ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                                    goto code_r0x08013068;
                                }
                                unaff_x24 = *(unaff_x21 + 0x22c);
                                unaff_x28 = *(unaff_x21 + 0x228);
                                if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                                    uStack_e0 = uStack_cc;
                                    _printk(0x8003686,"hw_fence_dbg_tx_and_signal_clients_wr",0x174,2,unaff_x24,
                                            unaff_x28,2,*(unaff_x21 + 0x1c0));
                                }
                                sym.hw_fence_ipcc_trigger_signal(unaff_x21,unaff_x24,unaff_x28,2);
                                usleep_range_state(*(unaff_x21 + 0x1c0),*(unaff_x21 + 0x1c0) + 5,2);
                                puVar5 = unaff_x27;
                                iVar4 = sym.hw_fence_destroy(unaff_x21,piVar13,unaff_x27,unaff_x26);
                                if (iVar4 != 0) {
                                    uVar8 = 0x80031ad;
                                    puVar5 = 0x187;
                                    goto code_r0x08013400;
                                }
                                uStack_cc = uStack_cc - 1;
                                if ((*(unaff_x21 + 0x1c4) == '\0') || (uStack_cc == 0)) goto code_r0x08012fe0;
                            }
                            uVar8 = 0x8004821;
                            puVar5 = 0x14f;
code_r0x08013400:
                            _printk(uVar8,"hw_fence_dbg_tx_and_signal_clients_wr",puVar5,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8012f34);
                        }
                    }
                    goto code_r0x08012fe0;
                }
            }
        }
        piVar13 = unaff_x22;
        arg3 = 0xfffffffffffffff2;
    }
code_r0x08012fe0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return arg3;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.hw_fence_dbg_create_join_fence;
    pcStack_138 = sym.hw_fence_dbg_create_join_fence;
    pcStack_f0 = sym.hw_fence_dbg_tx_and_signal_clients_wr;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    iStack_150 = 0;
    iStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    puStack_168 = NULL;
    uStack_178 = 0;
    ppuStack_140 = &puStack_b0;
    uStack_130 = unaff_x28;
    puStack_128 = unaff_x27;
    iStack_120 = unaff_x26;
    puStack_118 = unaff_x25;
    puStack_110 = unaff_x24;
    puStack_108 = unaff_x30;
    piStack_100 = piVar13;
    iStack_f8 = unaff_x21;
    puStack_e8 = arg3;
    if ((iVar9 == 0) || (iVar7 = *(iVar9 + 0xd8), iVar7 == 0)) {
        _printk(0x800317d,"hw_fence_dbg_create_join_fence",0x313,~(-1L << (_simple_open & 0x3f)) & 0x8013424);
        puVar5 = 0xffffffffffffffea;
        goto code_r0x080139dc;
    }
    pcVar12 = iVar7 + 0x1d8;
    mutex_lock(pcVar12);
    piVar13 = iVar7 + 0x1c8;
    for (piVar16 = *(iVar7 + 0x1c8); piVar13 != piVar16; piVar16 = *piVar16) {
        piVar17 = piVar16 + -8;
        if (*piVar17 == 2) goto code_r0x080134bc;
    }
    piVar17 = NULL;
code_r0x080134bc:
    mutex_unlock(pcVar12);
    mutex_lock(pcVar12);
    for (piVar16 = *piVar13; piVar13 != piVar16; piVar16 = *piVar16) {
        piVar18 = piVar16 + -8;
        if (*piVar18 == 3) goto code_r0x080134f8;
    }
    piVar18 = NULL;
code_r0x080134f8:
    mutex_unlock(pcVar12);
    if (((((piVar17 == NULL) || (uVar6 = *(piVar17 + 6), uVar6 == 0)) || (0xfffffffffffff000 < uVar6)) ||
        ((piVar18 == NULL || (*(piVar18 + 6) == 0)))) || (0xfffffffffffff000 < *(piVar18 + 6))) {
        _printk(0x80051e6,"hw_fence_dbg_create_join_fence",0x31e,~(-1L << (_simple_open & 0x3f)) & 0x8013424,2,3);
        puVar5 = 0xffffffffffffffea;
        arg2_00 = pcVar12;
        goto code_r0x080139dc;
    }
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    arg2_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x18);
    if (arg2_00 != NULL) {
        iVar9 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar9 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x18);
        pcVar12 = arg2_00;
        if (arg1_00 != NULL) {
            iVar9 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar9 = 0x30;
            }
            puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,4);
            *arg2_00 = puVar10;
            pcVar12 = arg1_00;
            if (puVar10 == NULL) {
                iVar9 = 0;
                bVar2 = true;
code_r0x08013904:
                kfree(*(arg2_00 + iVar9 * 8));
                kfree(*(arg1_00 + iVar9 * 8));
                if (!bVar2) {
                    iVar7 = iVar9 + -1;
                    kfree(*(arg2_00 + iVar7 * 8));
                    kfree(*(arg1_00 + iVar7 * 8));
                    if (iVar7 != 0) {
                        kfree(*(arg2_00 + (iVar9 + -2) * 8));
                        kfree(*(arg1_00 + (iVar9 + -2) * 8));
                    }
                }
                kfree(arg2_00);
            }
            else {
                iVar11 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                if (iVar11 == 0) {
                    iVar7 = 0;
                    bVar2 = true;
                }
                else {
                    *puVar10 = 0;
                    *arg1_00 = iVar11;
                    iVar9 = 1;
                    dma_fence_init(iVar11,obj.hw_fence_dbg_ops,puVar10,*(piVar17 + 2),1);
                    iVar11 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar11 = 0x30;
                    }
                    puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,4);
                    *(arg2_00 + 8) = puVar10;
                    if (puVar10 == NULL) {
code_r0x08013900:
                        bVar2 = false;
                        goto code_r0x08013904;
                    }
                    iVar11 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                    if (iVar11 == 0) {
                        bVar2 = false;
                        iVar7 = 1;
                    }
                    else {
                        *puVar10 = 0;
                        *(arg1_00 + 8) = iVar11;
                        iVar9 = 2;
                        dma_fence_init(iVar11,obj.hw_fence_dbg_ops,puVar10,*(piVar17 + 2),2);
                        iVar11 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar11 = 0x30;
                        }
                        puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,4);
                        *(arg2_00 + 0x10) = puVar10;
                        if (puVar10 == NULL) goto code_r0x08013900;
                        iVar9 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                        if (iVar9 != 0) {
                            *puVar10 = 0;
                            *(arg1_00 + 0x10) = iVar9;
                            dma_fence_init(iVar9,obj.hw_fence_dbg_ops,puVar10,*(piVar17 + 2),3);
                            iVar9 = dma_fence_array_create(3,arg1_00,*(piVar17 + 2),4,0);
                            if (iVar9 == 0) {
                                _printk(0x80073b0,"hw_fence_dbg_create_join_fence",0x347,
                                        ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                                sym._cleanup_fences(arg1_00,arg2_00);
                                puVar5 = 0xffffffffffffffea;
                                goto code_r0x080139dc;
                            }
                            iStack_160 = *arg1_00;
                            puStack_168 = &uStack_178;
                            iVar4 = sym.msm_hw_fence_create(*(piVar17 + 6),&uStack_170);
                            if (iVar4 == 0) {
                                sym.hw_fence_update_queue(iVar7,uVar6,*(piVar17 + 2),1);
                                iStack_160 = *(arg1_00 + 8);
                                puStack_168 = &uStack_178;
                                iVar4 = sym.msm_hw_fence_create(*(piVar17 + 6),&uStack_170);
                                if (iVar4 == 0) {
                                    sym.hw_fence_update_queue(iVar7,uVar6,*(piVar17 + 2),2);
                                    iStack_160 = *(arg1_00 + 0x10);
                                    puStack_168 = &uStack_178;
                                    iVar4 = sym.msm_hw_fence_create(*(piVar17 + 6),&uStack_170);
                                    if (iVar4 == 0) {
                                        sym.hw_fence_update_queue(iVar7,uVar6,*(piVar17 + 2),3);
                                        iStack_150 = iVar9;
                                        sym.msm_hw_fence_wait_update_v2(*(piVar18 + 6),&iStack_150,0,0);
                                        sym.hw_fence_ipcc_trigger_signal(iVar7,*(iVar7 + 0x22c),*(iVar7 + 0x228),2);
                                        usleep_range_state(*(iVar7 + 0x1c0),*(iVar7 + 0x1c0) + 5,2);
                                        goto code_r0x0801380c;
                                    }
                                }
                            }
                            _printk(0x8004821,"hw_fence_dbg_create_join_fence",0x353,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                            puVar5 = 0xffffffffffffffea;
code_r0x0801380c:
                            piVar17 = iVar9 + 0x38;
                            goto code_r0x08013ad0;
                        }
                        bVar2 = false;
                        iVar7 = 2;
                    }
                }
                kfree(*(arg2_00 + iVar7 * 8));
                kfree(*(arg1_00 + iVar7 * 8));
                if (!bVar2) {
                    iVar9 = iVar7 + -1;
                    kfree(*(arg2_00 + iVar9 * 8));
                    kfree(*(arg1_00 + iVar9 * 8));
                    if (iVar9 != 0) {
                        kfree(*(arg2_00 + (iVar7 + -2) * 8));
                        kfree(*(arg1_00 + (iVar7 + -2) * 8));
                    }
                }
                kfree(arg2_00);
            }
        }
        kfree(pcVar12);
        pcVar12 = arg2_00;
    }
    puVar5 = 0xfffffffffffffff4;
    arg2_00 = pcVar12;
code_r0x080139dc:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_148) {
        piVar17 = __stack_chk_fail();
code_r0x08013ad0:
        Hint_Prefetch(piVar17,2,0,1);
        do {
            iVar4 = *piVar17;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar17,0x10);
            if (bVar2) {
                *piVar17 = iVar4 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar17,3);
        }
        kfree(arg2_00);
    }
    return puVar5;
}


// ===== sym.hw_fence_dbg_tx_and_signal_clients_wr @ 0x08012f34 (size 1264) =====

//WARNING: Removing unreachable block (ram,0x08013888)
//WARNING: Removing unreachable block (ram,0x080138d8)
//WARNING: Removing unreachable block (ram,0x08013a5c)
//WARNING: Removing unreachable block (ram,0x08013aac)

uint32_t * sym.hw_fence_dbg_tx_and_signal_clients_wr(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint *puVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *arg3_00;
    uint32_t *puVar13;
    int64_t unaff_x21;
    uint64_t unaff_x22;
    int64_t *unaff_x23;
    int *unaff_x24;
    uint64_t uVar14;
    int *unaff_x25;
    int64_t unaff_x26;
    int *piVar15;
    uint32_t *unaff_x27;
    int *piVar16;
    uint64_t unaff_x28;
    int64_t *unaff_x30;
    ulong uStack_128;
    ulong uStack_120;
    ulong *puStack_118;
    int64_t iStack_110;
    ulong uStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    uint32_t *puStack_d8;
    int64_t iStack_d0;
    int *piStack_c8;
    int *piStack_c0;
    int64_t *piStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t uStack_7c;
    int64_t iStack_78;
    ushort uStack_70;
    int64_t iStack_68;
    
    arg3_00 = arg3;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_7c = 0;
    uStack_70 = 0;
    iStack_78 = 0;
    if ((arg1 == 0) || (unaff_x21 = *(arg1 + 0xd8), unaff_x21 == 0)) {
        puVar13 = 0x115;
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar14 = uVar11 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_tx_and_signal_clients_wr",0x115,uVar14);
        arg2 = unaff_x22;
code_r0x08013068:
        arg3_00 = 0xffffffffffffffea;
    }
    else {
        puVar13 = arg3_00;
        if (arg3_00 < 0xa) {
            unaff_x23 = &iStack_78;
            __check_object_size(&iStack_78,arg3_00,0);
            iVar4 = sym._copy_from_user(&iStack_78,arg2,arg3_00);
            unaff_x22 = arg2;
            if (iVar4 == 0) {
                puVar13 = &uStack_7c;
                *(unaff_x23 + arg3_00) = 0;
                iVar3 = kstrtouint(&iStack_78,0,puVar13);
                if (iVar3 == 0) {
                    if (uStack_7c == 0) {
                        puVar13 = 0x126;
                        uVar11 = -1L << (_simple_open & 0x3f);
                        uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar14 = uVar11 | unaff_x30;
                        }
                        _printk(0x800644c,"hw_fence_dbg_tx_and_signal_clients_wr",0x126,uVar14);
                        arg3_00 = NULL;
                    }
                    else {
                        if (200 < uStack_7c) {
                            puVar13 = 0x12a;
                            uVar11 = -1L << (_simple_open & 0x3f);
                            uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar14 = uVar11 | unaff_x30;
                            }
                            _printk(0x8002d3e,"hw_fence_dbg_tx_and_signal_clients_wr",0x12a,uVar14,uStack_7c,200);
                            uStack_7c = 200;
                        }
                        arg2 = unaff_x21 + 0x1d8;
                        mutex_lock(arg2);
                        unaff_x23 = unaff_x21 + 0x1c8;
                        for (piVar10 = *(unaff_x21 + 0x1c8); unaff_x23 != piVar10; piVar10 = *piVar10) {
                            unaff_x25 = piVar10 + -8;
                            if (*unaff_x25 == 2) goto code_r0x080130bc;
                        }
                        unaff_x25 = NULL;
code_r0x080130bc:
                        mutex_unlock(arg2);
                        mutex_lock(arg2);
                        for (piVar10 = *unaff_x23; unaff_x23 != piVar10; piVar10 = *piVar10) {
                            unaff_x24 = piVar10 + -8;
                            if (*unaff_x24 == 3) goto code_r0x080130f8;
                        }
                        unaff_x24 = NULL;
code_r0x080130f8:
                        mutex_unlock(arg2);
                        if ((((unaff_x25 == NULL) || (arg2 = *(unaff_x25 + 6), arg2 == 0)) ||
                            (0xfffffffffffff000 < arg2)) ||
                           (((unaff_x24 == NULL || (unaff_x23 = *(unaff_x24 + 6), unaff_x23 == NULL)) ||
                            (0xfffffffffffff000 < unaff_x23)))) {
                            puVar13 = 0x138;
                            uVar11 = -1L << (_simple_open & 0x3f);
                            uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar14 = uVar11 | unaff_x30;
                            }
                            _printk(0x80077ed,"hw_fence_dbg_tx_and_signal_clients_wr",0x138,uVar14,2,3);
                            goto code_r0x08013068;
                        }
                        if ((*(unaff_x21 + 0x1c4) != '\0') && (uStack_7c != 0)) {
                            while( true ) {
                                unaff_x27 = *(unaff_x25 + 2);
                                unaff_x26 = *(unaff_x25 + 4);
                                *(unaff_x25 + 4) = unaff_x26 + 1;
                                iVar3 = sym.hw_fence_create(unaff_x21,arg2,unaff_x27,unaff_x26);
                                if (iVar3 != 0) break;
                                sym.hw_fence_update_queue(unaff_x21,arg2,unaff_x27,unaff_x26);
                                iVar3 = sym.hw_fence_register_wait_client(unaff_x21,0,unaff_x23,unaff_x27);
                                if (iVar3 != 0) {
                                    puVar13 = 0x15e;
                                    uVar11 = -1L << (_simple_open & 0x3f);
                                    uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                                    if ((unaff_x30 & 0x80000000000000) != 0) {
                                        uVar14 = uVar11 | unaff_x30;
                                    }
                                    _printk(0x8006b98,"hw_fence_dbg_tx_and_signal_clients_wr",0x15e,uVar14);
                                    goto code_r0x08013068;
                                }
                                unaff_x24 = *(unaff_x21 + 0x22c);
                                unaff_x28 = *(unaff_x21 + 0x228);
                                if (((_segment.ehdr ^ 0xffffffff) & 0x10040) == 0) {
                                    _printk(0x8003686,"hw_fence_dbg_tx_and_signal_clients_wr",0x174,2,unaff_x24,
                                            unaff_x28,2,*(unaff_x21 + 0x1c0));
                                }
                                sym.hw_fence_ipcc_trigger_signal(unaff_x21,unaff_x24,unaff_x28,2);
                                usleep_range_state(*(unaff_x21 + 0x1c0),*(unaff_x21 + 0x1c0) + 5,2);
                                puVar13 = unaff_x27;
                                iVar3 = sym.hw_fence_destroy(unaff_x21,arg2,unaff_x27,unaff_x26);
                                if (iVar3 != 0) {
                                    uVar5 = 0x80031ad;
                                    puVar13 = 0x187;
                                    goto code_r0x08013400;
                                }
                                uStack_7c = uStack_7c - 1;
                                if ((*(unaff_x21 + 0x1c4) == '\0') || (uStack_7c == 0)) goto code_r0x08012fe0;
                            }
                            uVar5 = 0x8004821;
                            puVar13 = 0x14f;
code_r0x08013400:
                            uVar11 = -1L << (_simple_open & 0x3f);
                            uVar14 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar14 = uVar11 | unaff_x30;
                            }
                            _printk(uVar5,"hw_fence_dbg_tx_and_signal_clients_wr",puVar13,uVar14);
                        }
                    }
                    goto code_r0x08012fe0;
                }
            }
        }
        arg2 = unaff_x22;
        arg3_00 = 0xfffffffffffffff2;
    }
code_r0x08012fe0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return arg3_00;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.hw_fence_dbg_create_join_fence;
    pcStack_e8 = sym.hw_fence_dbg_create_join_fence;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    iStack_100 = 0;
    iStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    puStack_118 = NULL;
    uStack_128 = 0;
    puStack_f0 = &stack0xffffffffffffffa0;
    uStack_e0 = unaff_x28;
    puStack_d8 = unaff_x27;
    iStack_d0 = unaff_x26;
    piStack_c8 = unaff_x25;
    piStack_c0 = unaff_x24;
    piStack_b8 = unaff_x23;
    uStack_b0 = arg2;
    iStack_a8 = unaff_x21;
    if ((iVar6 == 0) || (iVar4 = *(iVar6 + 0xd8), iVar4 == 0)) {
        _printk(0x800317d,"hw_fence_dbg_create_join_fence",0x313,~(-1L << (_simple_open & 0x3f)) & 0x8013424);
        puVar13 = 0xffffffffffffffea;
        goto code_r0x080139dc;
    }
    piVar10 = iVar4 + 0x1d8;
    mutex_lock(piVar10);
    piVar7 = iVar4 + 0x1c8;
    for (piVar12 = *(iVar4 + 0x1c8); piVar7 != piVar12; piVar12 = *piVar12) {
        piVar15 = piVar12 + -8;
        if (*piVar15 == 2) goto code_r0x080134bc;
    }
    piVar15 = NULL;
code_r0x080134bc:
    mutex_unlock(piVar10);
    mutex_lock(piVar10);
    for (piVar12 = *piVar7; piVar7 != piVar12; piVar12 = *piVar12) {
        piVar16 = piVar12 + -8;
        if (*piVar16 == 3) goto code_r0x080134f8;
    }
    piVar16 = NULL;
code_r0x080134f8:
    mutex_unlock(piVar10);
    if (((((piVar15 == NULL) || (uVar14 = *(piVar15 + 6), uVar14 == 0)) || (0xfffffffffffff000 < uVar14)) ||
        ((piVar16 == NULL || (*(piVar16 + 6) == 0)))) || (0xfffffffffffff000 < *(piVar16 + 6))) {
        _printk(0x80051e6,"hw_fence_dbg_create_join_fence",0x31e,~(-1L << (_simple_open & 0x3f)) & 0x8013424,2,3);
        puVar13 = 0xffffffffffffffea;
        unaff_x30 = piVar10;
        goto code_r0x080139dc;
    }
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    unaff_x30 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x18);
    if (unaff_x30 != NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x18);
        piVar10 = unaff_x30;
        if (piVar7 != NULL) {
            iVar6 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar6 = 0x30;
            }
            puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,4);
            *unaff_x30 = puVar8;
            piVar10 = piVar7;
            if (puVar8 == NULL) {
                iVar6 = 0;
                bVar2 = true;
code_r0x08013904:
                kfree(unaff_x30[iVar6]);
                kfree(piVar7[iVar6]);
                if (!bVar2) {
                    iVar4 = iVar6 + -1;
                    kfree(unaff_x30[iVar4]);
                    kfree(piVar7[iVar4]);
                    if (iVar4 != 0) {
                        kfree(unaff_x30[iVar6 + -2]);
                        kfree(piVar7[iVar6 + -2]);
                    }
                }
                kfree(unaff_x30);
            }
            else {
                iVar9 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                if (iVar9 == 0) {
                    iVar4 = 0;
                    bVar2 = true;
                }
                else {
                    *puVar8 = 0;
                    *piVar7 = iVar9;
                    iVar6 = 1;
                    dma_fence_init(iVar9,obj.hw_fence_dbg_ops,puVar8,*(piVar15 + 2),1);
                    iVar9 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar9 = 0x30;
                    }
                    puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,4);
                    unaff_x30[1] = puVar8;
                    if (puVar8 == NULL) {
code_r0x08013900:
                        bVar2 = false;
                        goto code_r0x08013904;
                    }
                    iVar9 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                    if (iVar9 == 0) {
                        bVar2 = false;
                        iVar4 = 1;
                    }
                    else {
                        *puVar8 = 0;
                        piVar7[1] = iVar9;
                        iVar6 = 2;
                        dma_fence_init(iVar9,obj.hw_fence_dbg_ops,puVar8,*(piVar15 + 2),2);
                        iVar9 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar9 = 0x30;
                        }
                        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,4);
                        unaff_x30[2] = puVar8;
                        if (puVar8 == NULL) goto code_r0x08013900;
                        iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                        if (iVar6 != 0) {
                            *puVar8 = 0;
                            piVar7[2] = iVar6;
                            dma_fence_init(iVar6,obj.hw_fence_dbg_ops,puVar8,*(piVar15 + 2),3);
                            iVar6 = dma_fence_array_create(3,piVar7,*(piVar15 + 2),4,0);
                            if (iVar6 == 0) {
                                _printk(0x80073b0,"hw_fence_dbg_create_join_fence",0x347,
                                        ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                                sym._cleanup_fences(piVar7,unaff_x30);
                                puVar13 = 0xffffffffffffffea;
                                goto code_r0x080139dc;
                            }
                            iStack_110 = *piVar7;
                            puStack_118 = &uStack_128;
                            iVar3 = sym.msm_hw_fence_create(*(piVar15 + 6),&uStack_120);
                            if (iVar3 == 0) {
                                sym.hw_fence_update_queue(iVar4,uVar14,*(piVar15 + 2),1);
                                iStack_110 = piVar7[1];
                                puStack_118 = &uStack_128;
                                iVar3 = sym.msm_hw_fence_create(*(piVar15 + 6),&uStack_120);
                                if (iVar3 == 0) {
                                    sym.hw_fence_update_queue(iVar4,uVar14,*(piVar15 + 2),2);
                                    iStack_110 = piVar7[2];
                                    puStack_118 = &uStack_128;
                                    iVar3 = sym.msm_hw_fence_create(*(piVar15 + 6),&uStack_120);
                                    if (iVar3 == 0) {
                                        sym.hw_fence_update_queue(iVar4,uVar14,*(piVar15 + 2),3);
                                        iStack_100 = iVar6;
                                        sym.msm_hw_fence_wait_update_v2(*(piVar16 + 6),&iStack_100,0,0);
                                        sym.hw_fence_ipcc_trigger_signal(iVar4,*(iVar4 + 0x22c),*(iVar4 + 0x228),2);
                                        usleep_range_state(*(iVar4 + 0x1c0),*(iVar4 + 0x1c0) + 5,2);
                                        goto code_r0x0801380c;
                                    }
                                }
                            }
                            _printk(0x8004821,"hw_fence_dbg_create_join_fence",0x353,
                                    ~(-1L << (_simple_open & 0x3f)) & 0x8013424);
                            puVar13 = 0xffffffffffffffea;
code_r0x0801380c:
                            piVar15 = iVar6 + 0x38;
                            goto code_r0x08013ad0;
                        }
                        bVar2 = false;
                        iVar4 = 2;
                    }
                }
                kfree(unaff_x30[iVar4]);
                kfree(piVar7[iVar4]);
                if (!bVar2) {
                    iVar6 = iVar4 + -1;
                    kfree(unaff_x30[iVar6]);
                    kfree(piVar7[iVar6]);
                    if (iVar6 != 0) {
                        kfree(unaff_x30[iVar4 + -2]);
                        kfree(piVar7[iVar4 + -2]);
                    }
                }
                kfree(unaff_x30);
            }
        }
        kfree(piVar10);
        piVar10 = unaff_x30;
    }
    puVar13 = 0xfffffffffffffff4;
    unaff_x30 = piVar10;
code_r0x080139dc:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_f8) {
        piVar15 = __stack_chk_fail();
code_r0x08013ad0:
        Hint_Prefetch(piVar15,2,0,1);
        do {
            iVar3 = *piVar15;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar15,0x10);
            if (bVar2) {
                *piVar15 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar3 < 1) {
            refcount_warn_saturate(piVar15,3);
        }
        kfree(unaff_x30);
    }
    return puVar13;
}


// ===== sym.hw_fence_dbg_create_join_fence @ 0x08013424 (size 1780) =====

int64_t sym.hw_fence_dbg_create_join_fence(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t *piVar4;
    uint *puVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    int64_t *unaff_x20;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int *piVar13;
    int *piVar14;
    uint64_t unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong *puStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iStack_70 = 0;
    iStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    puStack_88 = NULL;
    uStack_98 = 0;
    if ((arg1 == 0) || (iVar10 = *(arg1 + 0xd8), iVar10 == 0)) {
        uVar9 = -1L << (_simple_open & 0x3f);
        uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar12 = uVar9 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_create_join_fence",0x313,uVar12);
        arg2 = -0x16;
        goto code_r0x080139dc;
    }
    piVar7 = iVar10 + 0x1d8;
    mutex_lock(piVar7);
    piVar4 = iVar10 + 0x1c8;
    for (piVar8 = *(iVar10 + 0x1c8); piVar4 != piVar8; piVar8 = *piVar8) {
        piVar13 = piVar8 + -8;
        if (*piVar13 == 2) goto code_r0x080134bc;
    }
    piVar13 = NULL;
code_r0x080134bc:
    mutex_unlock(piVar7);
    mutex_lock(piVar7);
    for (piVar8 = *piVar4; piVar4 != piVar8; piVar8 = *piVar8) {
        piVar14 = piVar8 + -8;
        if (*piVar14 == 3) goto code_r0x080134f8;
    }
    piVar14 = NULL;
code_r0x080134f8:
    mutex_unlock(piVar7);
    if ((((piVar13 == NULL) || (uVar12 = *(piVar13 + 6), uVar12 == 0)) || (0xfffffffffffff000 < uVar12)) ||
       (((piVar14 == NULL || (*(piVar14 + 6) == 0)) || (0xfffffffffffff000 < *(piVar14 + 6))))) {
        uVar9 = -1L << (_simple_open & 0x3f);
        uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar12 = uVar9 | unaff_x30;
        }
        _printk(0x80051e6,"hw_fence_dbg_create_join_fence",0x31e,uVar12,2,3);
        arg2 = -0x16;
        unaff_x20 = piVar7;
        goto code_r0x080139dc;
    }
    iVar11 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar11 = 0x30;
    }
    unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x18);
    if (unaff_x20 != NULL) {
        iVar11 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar11 = 0x30;
        }
        piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x18);
        piVar7 = unaff_x20;
        if (piVar4 != NULL) {
            iVar11 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar11 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,4);
            *unaff_x20 = puVar5;
            piVar7 = piVar4;
            if (puVar5 == NULL) {
                iVar11 = 0;
                bVar2 = true;
code_r0x08013904:
                kfree(unaff_x20[iVar11]);
                kfree(piVar4[iVar11]);
                if (!bVar2) {
                    iVar10 = iVar11 + -1;
                    kfree(unaff_x20[iVar10]);
                    kfree(piVar4[iVar10]);
                    if (iVar10 != 0) {
                        kfree(unaff_x20[iVar11 + -2]);
                        kfree(piVar4[iVar11 + -2]);
                    }
                }
                kfree(unaff_x20);
            }
            else {
                iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                if (iVar6 == 0) {
                    iVar10 = 0;
                    bVar2 = true;
                }
                else {
                    *puVar5 = 0;
                    *piVar4 = iVar6;
                    iVar11 = 1;
                    dma_fence_init(iVar6,obj.hw_fence_dbg_ops,puVar5,*(piVar13 + 2),1);
                    iVar6 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar6 = 0x30;
                    }
                    puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,4);
                    unaff_x20[1] = puVar5;
                    if (puVar5 == NULL) {
code_r0x08013900:
                        bVar2 = false;
                        goto code_r0x08013904;
                    }
                    iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                    if (iVar6 == 0) {
                        bVar2 = false;
                        iVar10 = 1;
                    }
                    else {
                        *puVar5 = 0;
                        piVar4[1] = iVar6;
                        iVar11 = 2;
                        dma_fence_init(iVar6,obj.hw_fence_dbg_ops,puVar5,*(piVar13 + 2),2);
                        iVar6 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar6 = 0x30;
                        }
                        puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,4);
                        unaff_x20[2] = puVar5;
                        if (puVar5 == NULL) goto code_r0x08013900;
                        iVar11 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
                        if (iVar11 != 0) {
                            *puVar5 = 0;
                            piVar4[2] = iVar11;
                            dma_fence_init(iVar11,obj.hw_fence_dbg_ops,puVar5,*(piVar13 + 2),3);
                            iVar11 = dma_fence_array_create(3,piVar4,*(piVar13 + 2),4,0);
                            if (iVar11 == 0) {
                                uVar9 = -1L << (_simple_open & 0x3f);
                                uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar12 = uVar9 | unaff_x30;
                                }
                                _printk(0x80073b0,"hw_fence_dbg_create_join_fence",0x347,uVar12);
                                sym._cleanup_fences(piVar4,unaff_x20);
                                arg2 = -0x16;
                                goto code_r0x080139dc;
                            }
                            iStack_80 = *piVar4;
                            puStack_88 = &uStack_98;
                            iVar3 = sym.msm_hw_fence_create(*(piVar13 + 6),&uStack_90);
                            if (iVar3 == 0) {
                                sym.hw_fence_update_queue(iVar10,uVar12,*(piVar13 + 2),1);
                                iStack_80 = piVar4[1];
                                puStack_88 = &uStack_98;
                                iVar3 = sym.msm_hw_fence_create(*(piVar13 + 6),&uStack_90);
                                if (iVar3 == 0) {
                                    sym.hw_fence_update_queue(iVar10,uVar12,*(piVar13 + 2),2);
                                    iStack_80 = piVar4[2];
                                    puStack_88 = &uStack_98;
                                    iVar3 = sym.msm_hw_fence_create(*(piVar13 + 6),&uStack_90);
                                    if (iVar3 == 0) {
                                        sym.hw_fence_update_queue(iVar10,uVar12,*(piVar13 + 2),3);
                                        iStack_70 = iVar11;
                                        sym.msm_hw_fence_wait_update_v2(*(piVar14 + 6),&iStack_70,0,0);
                                        sym.hw_fence_ipcc_trigger_signal
                                                  (iVar10,*(iVar10 + 0x22c),*(iVar10 + 0x228),2);
                                        usleep_range_state(*(iVar10 + 0x1c0),*(iVar10 + 0x1c0) + 5,2);
                                        goto code_r0x0801380c;
                                    }
                                }
                            }
                            uVar9 = -1L << (_simple_open & 0x3f);
                            uVar12 = (~uVar9 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar12 = uVar9 | unaff_x30;
                            }
                            _printk(0x8004821,"hw_fence_dbg_create_join_fence",0x353,uVar12);
                            arg2 = -0x16;
code_r0x0801380c:
                            piVar13 = iVar11 + 0x38;
                            goto code_r0x08013ad0;
                        }
                        bVar2 = false;
                        iVar10 = 2;
                    }
                }
                kfree(unaff_x20[iVar10]);
                kfree(piVar4[iVar10]);
                if (!bVar2) {
                    iVar11 = iVar10 + -1;
                    kfree(unaff_x20[iVar11]);
                    kfree(piVar4[iVar11]);
                    if (iVar11 != 0) {
                        kfree(unaff_x20[iVar10 + -2]);
                        kfree(piVar4[iVar10 + -2]);
                    }
                }
                kfree(unaff_x20);
            }
        }
        kfree(piVar7);
        piVar7 = unaff_x20;
    }
    arg2 = -0xc;
    unaff_x20 = piVar7;
code_r0x080139dc:
    while (iVar10 = sp_el0, *(iVar10 + 0x5e0) != iStack_68) {
        piVar13 = __stack_chk_fail();
code_r0x08013ad0:
        Hint_Prefetch(piVar13,2,0,1);
        do {
            iVar3 = *piVar13;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar13,0x10);
            if (bVar2) {
                *piVar13 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar3 < 1) {
            refcount_warn_saturate(piVar13,3);
        }
        kfree(unaff_x20);
    }
    return arg2;
}


// ===== sym._cleanup_fences @ 0x08013b18 (size 112) =====

void sym._cleanup_fences(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(arg2 + 0x10));
    kfree(*(arg1 + 0x10));
    kfree(*(arg2 + 8));
    kfree(*(arg1 + 8));
    kfree(*arg2);
    kfree(*arg1);
    kfree(arg2);
    kfree(arg1);
    return;
}


// ===== sym.dma_fence_put @ 0x08013b88 (size 144) =====

void sym.dma_fence_put(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        piVar1 = arg1 + 0x38;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return;
}


// ===== sym.dma_fence_put_1 @ 0x08013c18 (size 144) =====

void sym.dma_fence_put_1(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        piVar1 = arg1 + 0x38;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return;
}


// ===== sym.hw_fence_dbg_get_driver_name @ 0x08013ca8 (size 16) =====

int64_t sym.hw_fence_dbg_get_driver_name(int64_t arg1)

{
    return arg1 + 0x40;
}


// ===== sym.hw_fence_dbg_get_timeline_name @ 0x08013cb8 (size 16) =====

int64_t sym.hw_fence_dbg_get_timeline_name(int64_t arg1)

{
    return arg1 + 0x40;
}


// ===== sym.hw_fence_dbg_enable_signaling @ 0x08013cc8 (size 16) =====

ulong sym.hw_fence_dbg_enable_signaling(void)

{
    return 1;
}


// ===== sym.hw_fence_dbg_release @ 0x08013cd8 (size 292) =====

void sym.hw_fence_dbg_release(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    if (arg1 == 0) {
        return;
    }
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x800450b,"hw_fence_dbg_release",0xb3,arg1);
        iVar1 = *(arg1 + 0x30);
    }
    else {
        iVar1 = *(arg1 + 0x30);
    }
    if (iVar1 < 0) {
        uVar2 = *(arg1 + 0x80);
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            uVar3 = 0x800453d;
            uVar4 = 0xa3;
        }
        else {
            iVar1 = sym.msm_hw_fence_destroy(uVar2,arg1);
            if (iVar1 == 0) goto code_r0x08013d34;
            uVar3 = 0x8006814;
            uVar4 = 0xa9;
        }
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        _printk(uVar3,"_hw_fence_release",uVar4,uVar2);
    }
code_r0x08013d34:
    kfree(*arg1);
    kfree(arg1);
    return;
}


// ===== sym.hw_fence_dbg_create_wr @ 0x08013dfc (size 712) =====

//WARNING: Removing unreachable block (ram,0x080148d4)
//WARNING: Removing unreachable block (ram,0x08014278)
//WARNING: Removing unreachable block (ram,0x08014660)
//WARNING: Removing unreachable block (ram,0x080144e8)
//WARNING: Removing unreachable block (ram,0x08014598)
//WARNING: Removing unreachable block (ram,0x08014888)
//WARNING: Removing unreachable block (ram,0x080147fc)

int64_t **** sym.hw_fence_dbg_create_wr(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    int64_t arg4;
    ulong *puVar2;
    uint uVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    uint *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t ****ppppiVar11;
    int64_t in_x1;
    int64_t ****ppppiVar12;
    int64_t ****ppppiVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t ****unaff_x20;
    code *pcVar16;
    int64_t ****unaff_x23;
    int64_t iVar17;
    int64_t ****ppppiVar18;
    int64_t iVar19;
    int64_t ****ppppiVar20;
    code *unaff_x30;
    uchar auVar21 [16];
    ulong uStack_1f0;
    int64_t **ppiStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    uchar **ppuStack_1c0;
    code *pcStack_1b8;
    int64_t ***pppiStack_1b0;
    code *pcStack_1a0;
    code *pcStack_198;
    int64_t ***pppiStack_190;
    int64_t ***pppiStack_188;
    ulong uStack_180;
    ulong uStack_178;
    uint uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong *puStack_148;
    ulong *puStack_140;
    ulong *puStack_138;
    uint uStack_12c;
    int64_t iStack_128;
    int64_t ***pppiStack_120;
    code *pcStack_118;
    int64_t ***pppiStack_110;
    int64_t ***pppiStack_108;
    uint64_t uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_88;
    int64_t ***pppiStack_80;
    ulong uStack_78;
    ulong *puStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    ppppiVar11 = &pppiStack_80;
    iStack_58 = *(iVar19 + 0x5e0);
    iStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    puStack_70 = NULL;
    uStack_88 = 0;
    pppiStack_80 = NULL;
    ppppiVar12 = arg2;
    uVar5 = sym._get_debugfs_input_client(arg1,in_x1,arg2,ppppiVar11);
    ppppiVar13 = pppiStack_80;
    if (uVar5 < 0) {
        arg2 = -0x16;
    }
    else {
        unaff_x20 = uVar5;
        ppppiVar12 = pppiStack_80 + 0x3b;
        mutex_lock(ppppiVar12);
        ppppiVar20 = ppppiVar13 + 0x39;
        for (ppppiVar18 = ppppiVar13[0x39]; ppppiVar20 != ppppiVar18; ppppiVar18 = *ppppiVar18) {
            ppppiVar13 = ppppiVar18 + -8;
            if (*ppppiVar13 == uVar5) {
                mutex_unlock(ppppiVar12);
                if (((ppppiVar13 == NULL) || (ppppiVar18[-5] == NULL)) || (0xfffffffffffff000 < ppppiVar18[-5]))
                goto code_r0x08013f98;
                ppppiVar12 = 0x4;
                iVar19 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar19 = 0x30;
                }
                ppppiVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xdc0);
                unaff_x23 = ppppiVar13;
                if (ppppiVar20 != NULL) {
                    ppppiVar12 = 0x88;
                    iVar19 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
                    unaff_x23 = ppppiVar20;
                    if (iVar19 != 0) {
                        snprintf(iVar19 + 0x40,0x40,"hwfence:id:%d:ctx=%lu:seqno:%lu",uVar5,ppppiVar18[-7],
                                 _segment.ehdr);
                        *ppppiVar20 = 0;
                        ppppiVar11 = ppppiVar18[-7];
                        ppppiVar12 = ppppiVar20;
                        dma_fence_init(iVar19,obj.hw_fence_dbg_ops,ppppiVar20,ppppiVar11,_segment.ehdr);
                        if ((~_segment.ehdr & 0x10001) == 0) {
                            ppppiVar12 = 0x1c7;
                            ppppiVar11 = unaff_x20;
                            _printk(0x8004c0b,"hw_fence_dbg_create_wr",0x1c7,unaff_x20,ppppiVar18[-7],_segment.ehdr
                                   );
                        }
                        puStack_70 = &uStack_88;
                        iStack_68 = iVar19;
                        iVar7 = sym.msm_hw_fence_create(ppppiVar18[-5],&uStack_78);
                        if (iVar7 == 0) {
                            _segment.ehdr = _segment.ehdr + 1;
                            *(iVar19 + 0x80) = ppppiVar18[-5];
                        }
                        else {
                            uVar14 = -1L << (_simple_open & 0x3f);
                            ppppiVar12 = 0x1cd;
                            ppppiVar11 = (~uVar14 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                ppppiVar11 = uVar14 | unaff_x30;
                            }
                            _printk(0x80073e8,"hw_fence_dbg_create_wr",0x1cd,ppppiVar11,unaff_x20,ppppiVar18[-7],
                                    _segment.ehdr);
                            sym.dma_fence_put(iVar19);
                            arg2 = -0x16;
                        }
                        goto code_r0x08013ff8;
                    }
                    kfree(ppppiVar20);
                }
                arg2 = -0xc;
                goto code_r0x08013ff8;
            }
        }
        mutex_unlock(ppppiVar12);
code_r0x08013f98:
        ppppiVar12 = 0x1b0;
        uVar14 = -1L << (_simple_open & 0x3f);
        ppppiVar11 = (~uVar14 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            ppppiVar11 = uVar14 | unaff_x30;
        }
        _printk(0x800399a,"hw_fence_dbg_create_wr",0x1b0,ppppiVar11,unaff_x20);
        arg2 = -0x16;
        unaff_x23 = ppppiVar13;
    }
code_r0x08013ff8:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_58) {
        return arg2;
    }
    auVar21 = __stack_chk_fail();
    iVar10 = auVar21._8_8_;
    *extraout_x18 = sym.hw_fence_dbg_dump_table_rd;
    pcStack_e8 = sym.hw_fence_dbg_dump_table_rd;
    iVar19 = sp_el0;
    pcVar16 = sym.hw_fence_dbg_dump_table_rd;
    iStack_f8 = *(iVar19 + 0x5e0);
    puStack_f0 = &stack0xffffffffffffffb0;
    if ((auVar21._0_8_ == 0) || (iVar19 = *(auVar21._0_8_ + 0xd8), iVar19 == 0)) {
        ppppiVar13 = 0x288;
        _printk(0x800317d,"hw_fence_dbg_dump_table_rd",0x288,~(-1L << (_simple_open & 0x3f)) & 0x80140c4);
        ppppiVar20 = 0xffffffffffffffea;
    }
    else if (*(iVar19 + 0x38) == 0) {
        ppppiVar13 = 0x28e;
        _printk(0x8002a5a,"hw_fence_dbg_dump_table_rd",0x28e,~(-1L << (_simple_open & 0x3f)) & 0x80140c4);
        ppppiVar20 = 0xffffffffffffffea;
    }
    else {
        unaff_x30 = segment.ehdr;
        unaff_x23 = ppppiVar11;
        if (_segment.ehdr < *(iVar19 + 0x40)) {
            arg2 = ppppiVar12;
            if (ppppiVar12 < 0xa0) {
                ppppiVar13 = 0x29a;
                _printk(0x80031e4,"hw_fence_dbg_dump_table_rd",0x29a,~(-1L << (_simple_open & 0x3f)) & 0x80140c4,
                        ppppiVar12,0xa0);
                ppppiVar20 = 0xffffffffffffffea;
            }
            else {
                ppppiVar13 = 0x1000;
                ppppiVar18 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
                if (ppppiVar18 == NULL) {
                    ppppiVar20 = 0xfffffffffffffff4;
                }
                else {
                    if (*(iVar19 + 0x1a8) == '\0') {
                        ppppiVar20 = NULL;
                        do {
                            unaff_x30 = segment.ehdr;
                            uVar3 = _segment.ehdr;
                            uVar14 = _segment.ehdr & 0xffffffff;
                            do {
                                iVar7 = ppppiVar20;
                                if ((*(iVar19 + 0x40) <= uVar14) || (0xf5f < iVar7)) {
                                    _segment.ehdr = CONCAT44(*0x8000004,uVar14 + 1);
                                    if (iVar7 < 1) goto code_r0x080144f8;
                                    goto code_r0x08014424;
                                }
                                uVar9 = uVar14 + 1 & 0xffffffff;
                                uVar14 = uVar14 + 1;
                                unaff_x30 = *(iVar19 + 0x38) + uVar9 * 0xa0;
                            } while (*unaff_x30 == 0);
                            iVar17 = *(iVar19 + 0x38) + uVar9 * 0xa0;
                            uVar9 = _segment.ehdr & 0xffffffff;
                            _segment.ehdr = CONCAT44(*0x8000004,uVar14);
                            puStack_138 = iVar17 + 8;
                            puStack_140 = iVar17 + 0x10;
                            uStack_180 = *puStack_140;
                            puStack_148 = iVar17 + 0x18;
                            uStack_178 = *puStack_148;
                            uStack_170 = *(iVar17 + 0x20);
                            uStack_168 = *(iVar17 + 0x30);
                            uStack_160 = *(iVar17 + 0x60);
                            uStack_158 = *(iVar17 + 0x68);
                            uStack_12c = uVar3;
                            iStack_128 = iVar10;
                            pppiStack_120 = ppppiVar11;
                            pcStack_118 = pcVar16;
                            pppiStack_110 = ppppiVar18;
                            pppiStack_108 = ppppiVar12;
                            iVar6 = scnprintf(ppppiVar18 + iVar7,0x1000 - iVar7,
                                              "[%d]hfence[%d] v:%d err:%d ctx:%d seqno:%d wait:0x%llx alloc:%d f:0x%lx tt:%llu wt:%llu\n"
                                              ,uVar9,uVar14 & 0xffffffff,*unaff_x30,*(iVar17 + 4),*puStack_138);
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                uStack_168 = *(iVar17 + 0x30);
                                uStack_170 = *(iVar17 + 0x20);
                                uStack_178 = *puStack_148;
                                uStack_180 = *puStack_140;
                                uStack_160 = *(iVar17 + 0x60);
                                uStack_158 = *(iVar17 + 0x68);
                                _printk(0x800523e,"_dump_fence",0x1eb,uStack_12c,uVar14 & 0xffffffff,*unaff_x30,
                                        *(iVar17 + 4),*puStack_138);
                            }
                            ppppiVar20 = iVar6 + iVar7;
                            _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
                            ppppiVar12 = pppiStack_108;
                            ppppiVar18 = pppiStack_110;
                            pcVar16 = pcStack_118;
                            ppppiVar11 = pppiStack_120;
                            iVar10 = iStack_128;
                        } while( true );
                    }
                    iVar17 = *(iVar19 + 0x1b0);
                    arg4 = *(iVar19 + 0x1b8);
                    uStack_100 = 0;
                    puVar8 = sym.msm_hw_fence_find(iVar19,0,iVar17,arg4);
                    uVar14 = uStack_100;
                    if (puVar8 == NULL) {
                        _printk(0x8002d89,"dump_single_entry",0x1fc,~(-1L << (_simple_open & 0x3f)) & 0x80140c4,
                                iVar17,arg4,uStack_100);
                        uVar14 = scnprintf(ppppiVar18,0x1000,
                                           "no valid hfence found for context:%lu seqno:%lu hash:%lu\n",iVar17,arg4,
                                           uStack_100);
                        ppppiVar20 = uVar14 & 0xffffffff;
                    }
                    else {
                        uStack_180 = *(puVar8 + 4);
                        uStack_160 = *(puVar8 + 0x18);
                        uStack_158 = *(puVar8 + 0x1a);
                        uStack_178 = *(puVar8 + 6);
                        uStack_170 = puVar8[8];
                        uStack_168 = *(puVar8 + 0xc);
                        uVar9 = scnprintf(ppppiVar18,0x1000,
                                          "[%d]hfence[%d] v:%d err:%d ctx:%d seqno:%d wait:0x%llx alloc:%d f:0x%lx tt:%llu wt:%llu\n"
                                          ,0,uStack_100 & 0xffffffff,*puVar8,puVar8[1],*(puVar8 + 2));
                        ppppiVar20 = uVar9 & 0xffffffff;
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            uStack_180 = *(puVar8 + 4);
                            uStack_160 = *(puVar8 + 0x18);
                            uStack_158 = *(puVar8 + 0x1a);
                            uStack_178 = *(puVar8 + 6);
                            uStack_170 = puVar8[8];
                            uStack_168 = *(puVar8 + 0xc);
                            _printk(0x800523e,"_dump_fence",0x1eb,0,uVar14 & 0xffffffff,*puVar8,puVar8[1],
                                    *(puVar8 + 2));
                        }
                    }
                    _segment.ehdr = CONCAT44(*0x8000004,*(iVar19 + 0x40));
                    if (ppppiVar20 < 1) {
code_r0x080144f8:
                        ppppiVar13 = 0x2a7;
                        uVar9 = -1L << (_simple_open & 0x3f);
                        uVar14 = (~uVar9 | 0xff80000000000000) & pcVar16;
                        if ((pcVar16 & 0x80000000000000) != 0) {
                            uVar14 = uVar9 | pcVar16;
                        }
                        _printk(0x8005d25,"hw_fence_dbg_dump_table_rd",0x2a7,uVar14,ppppiVar20,ppppiVar12);
                        iVar7 = 0;
                    }
                    else {
code_r0x08014424:
                        iVar7 = ppppiVar20;
                        if (ppppiVar12 < ppppiVar20) goto code_r0x080144f8;
                        auVar21 = __check_object_size(ppppiVar18,ppppiVar20,1);
                        ppppiVar13 = ppppiVar20;
                        iVar19 = sym._copy_to_user(iVar10,auVar21,ppppiVar20);
                        if (iVar19 == 0) {
                            *ppppiVar11 = *ppppiVar11 + ppppiVar20;
                        }
                        else {
                            ppppiVar13 = 0x2ad;
                            uVar9 = -1L << (_simple_open & 0x3f);
                            uVar14 = (~uVar9 | 0xff80000000000000) & pcVar16;
                            if ((pcVar16 & 0x80000000000000) != 0) {
                                uVar14 = uVar9 | pcVar16;
                            }
                            _printk(0x8004dbf,"hw_fence_dbg_dump_table_rd",0x2ad,uVar14);
                            iVar7 = -0xe;
                        }
                    }
                    kfree(ppppiVar18);
                    ppppiVar20 = iVar7;
                    arg2 = ppppiVar12;
                    unaff_x20 = ppppiVar18;
                    unaff_x23 = ppppiVar11;
                }
            }
        }
        else {
            ppppiVar13 = ppppiVar12;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                ppppiVar13 = 0x293;
                _printk(0x8007441,"hw_fence_dbg_dump_table_rd");
            }
            ppppiVar20 = NULL;
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        }
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_f8) {
        return ppppiVar20;
    }
    auVar21 = __stack_chk_fail(ppppiVar20);
    *extraout_x18_00 = sym.hw_fence_dbg_dump_table_wr;
    pcStack_1b8 = sym.hw_fence_dbg_dump_table_wr;
    iVar19 = sp_el0;
    iStack_1c8 = *(iVar19 + 0x5e0);
    uStack_1f0 = 0;
    ppiStack_1e8 = NULL;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    ppuStack_1c0 = &puStack_f0;
    pppiStack_1b0 = unaff_x23;
    pcStack_1a0 = pcVar16;
    pcStack_198 = unaff_x30;
    pppiStack_190 = unaff_x20;
    pppiStack_188 = arg2;
    if ((auVar21._0_8_ == 0) || (iVar19 = *(auVar21._0_8_ + 0xd8), iVar19 == 0)) {
        ppppiVar11 = 0x2ce;
        _printk(0x800317d,"hw_fence_dbg_dump_table_wr",0x2ce,~(-1L << (_simple_open & 0x3f)) & 0x80146e0);
        ppppiVar13 = 0xffffffffffffffea;
        goto code_r0x08014808;
    }
    if (ppppiVar13 < 0x18) {
        __check_object_size(&uStack_1e0,ppppiVar13,0);
        ppppiVar11 = ppppiVar13;
        iVar10 = sym._copy_from_user(&uStack_1e0,auVar21._8_8_,ppppiVar13);
        if (iVar10 == 0) {
            ppppiVar11 = &ppiStack_1e8;
            *(&uStack_1e0 + ppppiVar13) = 0;
            iVar7 = sscanf(&uStack_1e0,"%lu %lu",ppppiVar11,&uStack_1f0);
            if (iVar7 == 1) {
                *(iVar19 + 0x1a8) = 0;
                *(iVar19 + 0x1b0) = 0;
                *(iVar19 + 0x1b8) = 0;
                goto code_r0x08014808;
            }
            if (iVar7 == 2) {
                *(iVar19 + 0x1a8) = 1;
                *(iVar19 + 0x1b0) = ppiStack_1e8;
                *(iVar19 + 0x1b8) = uStack_1f0;
                goto code_r0x08014808;
            }
            ppppiVar11 = 0x2e9;
            _printk(0x8005d5e,"hw_fence_dbg_dump_table_wr",0x2e9,~(-1L << (_simple_open & 0x3f)) & 0x80146e0,iVar7);
        }
    }
    else {
        ppppiVar11 = 0x2d4;
        _printk(0x8007a44,"hw_fence_dbg_dump_table_wr",0x2d4,~(-1L << (_simple_open & 0x3f)) & 0x80146e0,ppppiVar13
                ,0x18);
    }
    ppppiVar13 = 0xfffffffffffffff2;
code_r0x08014808:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_1c8) {
        uVar9 = __stack_chk_fail();
        *extraout_x18_01 = sym._copy_to_user;
        puVar2 = sp_el0;
        uVar14 = (uVar9 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar15 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar15 = uVar9 & uVar14;
        }
        bVar4 = CARRY8(uVar15,ppppiVar11);
        uVar15 = uVar15 + ppppiVar11;
        uVar1 = 0;
        if (!bVar4 || uVar15 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar15 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar15,~uVar1) && !CARRY8(uVar15 + ~uVar1,bVar4) || uVar15 == uVar1 + !bVar4) {
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar15 = daif;
                if ((uVar15 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar15;
            }
            if ((uVar9 & uVar14 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            ppppiVar11 = __arch_copy_to_user(uVar9);
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar14 = daif;
                if ((uVar14 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar14;
            }
        }
        return ppppiVar11;
    }
    return ppppiVar13;
}


// ===== sym.hw_fence_dbg_dump_table_rd @ 0x080140c4 (size 1564) =====

//WARNING: Removing unreachable block (ram,0x08014888)
//WARNING: Removing unreachable block (ram,0x080148d4)
//WARNING: Removing unreachable block (ram,0x080147fc)

ulong * sym.hw_fence_dbg_dump_table_rd(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t arg4_00;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong *puVar11;
    uint64_t uVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *unaff_x19;
    int64_t unaff_x20;
    code *unaff_x21;
    int64_t *unaff_x23;
    int64_t iVar13;
    int64_t iVar14;
    ulong *puVar15;
    uint64_t unaff_x30;
    uchar auVar16 [16];
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    int64_t *piStack_120;
    code *pcStack_108;
    int64_t iStack_100;
    ulong *puStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    uint uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong *puStack_b8;
    ulong *puStack_b0;
    ulong *puStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    int64_t *piStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    ulong *puStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    puVar10 = arg3;
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    if ((arg1 == 0) || (iVar14 = *(arg1 + 0xd8), iVar14 == 0)) {
        puVar11 = 0x288;
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar9 = uVar8 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_dump_table_rd",0x288,uVar9);
        puVar15 = 0xffffffffffffffea;
    }
    else if (*(iVar14 + 0x38) == 0) {
        puVar11 = 0x28e;
        uVar8 = -1L << (_simple_open & 0x3f);
        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar9 = uVar8 | unaff_x30;
        }
        _printk(0x8002a5a,"hw_fence_dbg_dump_table_rd",0x28e,uVar9);
        puVar15 = 0xffffffffffffffea;
    }
    else {
        unaff_x21 = segment.ehdr;
        unaff_x23 = arg4;
        if (_segment.ehdr < *(iVar14 + 0x40)) {
            unaff_x19 = puVar10;
            if (puVar10 < 0xa0) {
                puVar11 = 0x29a;
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar9 = uVar8 | unaff_x30;
                }
                _printk(0x80031e4,"hw_fence_dbg_dump_table_rd",0x29a,uVar9,puVar10,0xa0);
                puVar15 = 0xffffffffffffffea;
            }
            else {
                puVar11 = 0x1000;
                iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
                if (iVar6 == 0) {
                    puVar15 = 0xfffffffffffffff4;
                }
                else {
                    if (*(iVar14 + 0x1a8) == '\0') {
                        puVar15 = NULL;
                        do {
                            uVar2 = _segment.ehdr;
                            unaff_x21 = segment.ehdr;
                            uVar9 = _segment.ehdr;
                            do {
                                iVar5 = puVar15;
                                if ((*(iVar14 + 0x40) <= uVar9) || (0xf5f < iVar5)) {
                                    _segment.ehdr = uVar9 + 1;
                                    unaff_x20 = iVar6;
                                    goto joined_r0x08014420;
                                }
                                uVar8 = uVar9 + 1 & 0xffffffff;
                                uVar9 = uVar9 + 1;
                                unaff_x21 = *(iVar14 + 0x38) + uVar8 * 0xa0;
                            } while (*unaff_x21 == 0);
                            iVar13 = *(iVar14 + 0x38) + uVar8 * 0xa0;
                            puStack_a8 = iVar13 + 8;
                            puStack_b0 = iVar13 + 0x10;
                            uStack_f0 = *puStack_b0;
                            puStack_b8 = iVar13 + 0x18;
                            uStack_e8 = *puStack_b8;
                            uStack_e0 = *(iVar13 + 0x20);
                            uStack_d8 = *(iVar13 + 0x30);
                            uStack_d0 = *(iVar13 + 0x60);
                            uStack_c8 = *(iVar13 + 0x68);
                            uStack_9c = _segment.ehdr;
                            _segment.ehdr = uVar9;
                            iStack_98 = arg2;
                            piStack_90 = arg4;
                            uStack_88 = unaff_x30;
                            iStack_80 = iVar6;
                            puStack_78 = puVar10;
                            iVar4 = scnprintf(iVar6 + iVar5,0x1000 - iVar5,
                                              "[%d]hfence[%d] v:%d err:%d ctx:%d seqno:%d wait:0x%llx alloc:%d f:0x%lx tt:%llu wt:%llu\n"
                                              ,uVar2,uVar9 & 0xffffffff,*unaff_x21,*(iVar13 + 4),*puStack_a8);
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                uStack_d8 = *(iVar13 + 0x30);
                                uStack_e0 = *(iVar13 + 0x20);
                                uStack_e8 = *puStack_b8;
                                uStack_f0 = *puStack_b0;
                                uStack_d0 = *(iVar13 + 0x60);
                                uStack_c8 = *(iVar13 + 0x68);
                                _printk(0x800523e,"_dump_fence",0x1eb,uStack_9c,uVar9 & 0xffffffff,*unaff_x21,
                                        *(iVar13 + 4),*puStack_a8);
                            }
                            puVar15 = iVar4 + iVar5;
                            _segment.ehdr = _segment.ehdr + 1;
                            puVar10 = puStack_78;
                            iVar6 = iStack_80;
                            unaff_x30 = uStack_88;
                            arg4 = piStack_90;
                            arg2 = iStack_98;
                        } while( true );
                    }
                    iVar13 = *(iVar14 + 0x1b0);
                    arg4_00 = *(iVar14 + 0x1b8);
                    uStack_70 = 0;
                    puVar7 = sym.msm_hw_fence_find(iVar14,0,iVar13,arg4_00);
                    uVar9 = uStack_70;
                    if (puVar7 == NULL) {
                        uVar8 = -1L << (_simple_open & 0x3f);
                        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar9 = uVar8 | unaff_x30;
                        }
                        _printk(0x8002d89,"dump_single_entry",0x1fc,uVar9,iVar13,arg4_00,uStack_70);
                        uVar9 = scnprintf(iVar6,0x1000,"no valid hfence found for context:%lu seqno:%lu hash:%lu\n",
                                          iVar13,arg4_00,uStack_70);
                        puVar15 = uVar9 & 0xffffffff;
                    }
                    else {
                        uStack_f0 = *(puVar7 + 4);
                        uStack_d0 = *(puVar7 + 0x18);
                        uStack_c8 = *(puVar7 + 0x1a);
                        uStack_e8 = *(puVar7 + 6);
                        uStack_e0 = puVar7[8];
                        uStack_d8 = *(puVar7 + 0xc);
                        uVar8 = scnprintf(iVar6,0x1000,
                                          "[%d]hfence[%d] v:%d err:%d ctx:%d seqno:%d wait:0x%llx alloc:%d f:0x%lx tt:%llu wt:%llu\n"
                                          ,0,uStack_70 & 0xffffffff,*puVar7,puVar7[1],*(puVar7 + 2));
                        puVar15 = uVar8 & 0xffffffff;
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            uStack_f0 = *(puVar7 + 4);
                            uStack_d0 = *(puVar7 + 0x18);
                            uStack_c8 = *(puVar7 + 0x1a);
                            uStack_e8 = *(puVar7 + 6);
                            uStack_e0 = puVar7[8];
                            uStack_d8 = *(puVar7 + 0xc);
                            _printk(0x800523e,"_dump_fence",0x1eb,0,uVar9 & 0xffffffff,*puVar7,puVar7[1],
                                    *(puVar7 + 2));
                        }
                    }
                    _segment.ehdr = *(iVar14 + 0x40);
                    iVar5 = puVar15;
                    unaff_x20 = iVar6;
joined_r0x08014420:
                    if ((iVar5 < 1) || (iVar5 = puVar15, puVar10 < puVar15)) {
                        puVar11 = 0x2a7;
                        uVar8 = -1L << (_simple_open & 0x3f);
                        uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar9 = uVar8 | unaff_x30;
                        }
                        _printk(0x8005d25,"hw_fence_dbg_dump_table_rd",0x2a7,uVar9,puVar15,puVar10);
                        iVar5 = 0;
                    }
                    else {
                        auVar16 = __check_object_size(unaff_x20,puVar15,1);
                        puVar11 = puVar15;
                        iVar14 = sym._copy_to_user(arg2,auVar16,puVar15);
                        if (iVar14 == 0) {
                            *arg4 = *arg4 + puVar15;
                        }
                        else {
                            puVar11 = 0x2ad;
                            uVar8 = -1L << (_simple_open & 0x3f);
                            uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                            if ((unaff_x30 & 0x80000000000000) != 0) {
                                uVar9 = uVar8 | unaff_x30;
                            }
                            _printk(0x8004dbf,"hw_fence_dbg_dump_table_rd",0x2ad,uVar9);
                            iVar5 = -0xe;
                        }
                    }
                    kfree(unaff_x20);
                    puVar15 = iVar5;
                    unaff_x19 = puVar10;
                    unaff_x23 = arg4;
                }
            }
        }
        else {
            puVar11 = puVar10;
            if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                puVar11 = 0x293;
                _printk(0x8007441,"hw_fence_dbg_dump_table_rd");
            }
            puVar15 = NULL;
            _segment.ehdr = 0;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return puVar15;
    }
    auVar16 = __stack_chk_fail(puVar15);
    *extraout_x18 = sym.hw_fence_dbg_dump_table_wr;
    pcStack_128 = sym.hw_fence_dbg_dump_table_wr;
    iVar14 = sp_el0;
    iStack_138 = *(iVar14 + 0x5e0);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    puStack_130 = &stack0xffffffffffffffa0;
    piStack_120 = unaff_x23;
    pcStack_108 = unaff_x21;
    iStack_100 = unaff_x20;
    puStack_f8 = unaff_x19;
    if ((auVar16._0_8_ == 0) || (iVar14 = *(auVar16._0_8_ + 0xd8), iVar14 == 0)) {
        puVar10 = 0x2ce;
        _printk(0x800317d,"hw_fence_dbg_dump_table_wr",0x2ce,~(-1L << (_simple_open & 0x3f)) & 0x80146e0);
        puVar11 = 0xffffffffffffffea;
        goto code_r0x08014808;
    }
    if (puVar11 < 0x18) {
        __check_object_size(&uStack_150,puVar11,0);
        puVar10 = puVar11;
        iVar6 = sym._copy_from_user(&uStack_150,auVar16._8_8_,puVar11);
        if (iVar6 == 0) {
            puVar10 = &uStack_158;
            *(&uStack_150 + puVar11) = 0;
            iVar5 = sscanf(&uStack_150,"%lu %lu",puVar10,&uStack_160);
            if (iVar5 == 1) {
                *(iVar14 + 0x1a8) = 0;
                *(iVar14 + 0x1b0) = 0;
                *(iVar14 + 0x1b8) = 0;
                goto code_r0x08014808;
            }
            if (iVar5 == 2) {
                *(iVar14 + 0x1a8) = 1;
                *(iVar14 + 0x1b0) = uStack_158;
                *(iVar14 + 0x1b8) = uStack_160;
                goto code_r0x08014808;
            }
            puVar10 = 0x2e9;
            _printk(0x8005d5e,"hw_fence_dbg_dump_table_wr",0x2e9,~(-1L << (_simple_open & 0x3f)) & 0x80146e0,iVar5);
        }
    }
    else {
        puVar10 = 0x2d4;
        _printk(0x8007a44,"hw_fence_dbg_dump_table_wr",0x2d4,~(-1L << (_simple_open & 0x3f)) & 0x80146e0,puVar11,
                0x18);
    }
    puVar11 = 0xfffffffffffffff2;
code_r0x08014808:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_138) {
        uVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym._copy_to_user;
        puVar11 = sp_el0;
        uVar9 = (uVar8 << 8) >> 8;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar8, (*puVar11 >> 0x1a & 1) != 0)) {
            uVar12 = uVar8 & uVar9;
        }
        bVar3 = CARRY8(uVar12,puVar10);
        uVar12 = uVar12 + puVar10;
        uVar1 = 0;
        if (!bVar3 || uVar12 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar12 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar12,~uVar1) && !CARRY8(uVar12 + ~uVar1,bVar3) || uVar12 == uVar1 + !bVar3) {
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar12 = daif;
                if ((uVar12 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar12;
            }
            if ((uVar8 & uVar9 & 0xffffff8000000000) != 0) {
                uVar8 = 0;
            }
            puVar10 = __arch_copy_to_user(uVar8);
            if ((_mutex_unlock >> 0x18 & 1) == 0) {
                uVar9 = daif;
                if ((uVar9 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar9;
            }
        }
        return puVar10;
    }
    return puVar11;
}


// ===== sym.hw_fence_dbg_dump_table_wr @ 0x080146e0 (size 516) =====

ulong * sym.hw_fence_dbg_dump_table_wr(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    uint64_t uVar8;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    int64_t iVar10;
    uint64_t unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    puVar9 = arg3;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    if ((arg1 == 0) || (iVar10 = *(arg1 + 0xd8), iVar10 == 0)) {
        puVar7 = 0x2ce;
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar6 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_dump_table_wr",0x2ce,uVar2);
        puVar9 = 0xffffffffffffffea;
        goto code_r0x08014808;
    }
    if (puVar9 < 0x18) {
        __check_object_size(&uStack_60,puVar9,0);
        puVar7 = puVar9;
        iVar5 = sym._copy_from_user(&uStack_60,arg2,puVar9);
        if (iVar5 == 0) {
            puVar7 = &uStack_68;
            *(&uStack_60 + puVar9) = 0;
            iVar4 = sscanf(&uStack_60,"%lu %lu",puVar7,&uStack_70);
            if (iVar4 == 1) {
                *(iVar10 + 0x1a8) = 0;
                *(iVar10 + 0x1b0) = 0;
                *(iVar10 + 0x1b8) = 0;
                goto code_r0x08014808;
            }
            if (iVar4 == 2) {
                *(iVar10 + 0x1a8) = 1;
                *(iVar10 + 0x1b0) = uStack_68;
                *(iVar10 + 0x1b8) = uStack_70;
                goto code_r0x08014808;
            }
            puVar7 = 0x2e9;
            uVar6 = -1L << (_simple_open & 0x3f);
            uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar6 | unaff_x30;
            }
            _printk(0x8005d5e,"hw_fence_dbg_dump_table_wr",0x2e9,uVar2,iVar4);
        }
    }
    else {
        puVar7 = 0x2d4;
        uVar6 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar6 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar6 | unaff_x30;
        }
        _printk(0x8007a44,"hw_fence_dbg_dump_table_wr",0x2d4,uVar2,puVar9,0x18);
    }
    puVar9 = 0xfffffffffffffff2;
code_r0x08014808:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return puVar9;
    }
    uVar6 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar9 = sp_el0;
    uVar2 = (uVar6 << 8) >> 8;
    if (((*(puVar9 + 0x3e) >> 5 & 1) != 0) || (uVar8 = uVar6, (*puVar9 >> 0x1a & 1) != 0)) {
        uVar8 = uVar6 & uVar2;
    }
    bVar3 = CARRY8(uVar8,puVar7);
    uVar8 = uVar8 + puVar7;
    uVar1 = 0;
    if (!bVar3 || uVar8 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar8 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar8,~uVar1) && !CARRY8(uVar8 + ~uVar1,bVar3) || uVar8 == uVar1 + !bVar3) {
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar9[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar9[1];
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
        if ((uVar6 & uVar2 & 0xffffff8000000000) != 0) {
            uVar6 = 0;
        }
        puVar7 = __arch_copy_to_user(uVar6);
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
    }
    return puVar7;
}


// ===== sym._copy_to_user @ 0x080148e4 (size 312) =====

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
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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


// ===== sym._copy_to_user_1 @ 0x08014a58 (size 312) =====

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
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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
        if ((_mutex_unlock >> 0x18 & 1) == 0) {
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


// ===== sym.hw_fence_dbg_dump_queues_wr @ 0x08014bcc (size 1028) =====

int64_t sym.hw_fence_dbg_dump_queues_wr(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t in_x1;
    uint64_t uVar11;
    uint64_t *in_x18;
    int64_t iVar12;
    uint32_t uVar13;
    uint64_t unaff_x30;
    uchar auVar14 [12];
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    if ((arg1 == 0) || (*(arg1 + 0xd8) == 0)) {
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar8 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar8 = uVar11 | unaff_x30;
        }
        _printk(0x800317d,"hw_fence_dbg_dump_queues_wr",0x236,uVar8);
        arg2 = 0xffffffffffffffea;
    }
    else {
        iStack_70 = *(arg1 + 0xd8);
        uVar1 = sym._get_debugfs_input_client(arg1,in_x1,arg2,&iStack_70);
        iVar10 = iStack_70;
        if (uVar1 < 0) {
            arg2 = 0xffffffffffffffea;
        }
        else {
            iVar12 = *(*(iStack_70 + 0x2c8) + uVar1 * 8);
            if ((((iVar12 == 0) || (iVar12 == -0x48)) || (0xfffffffffffff000 < iVar12 + 0x48U)) ||
               ((iVar12 == -0x28 || (0xfffffffffffff000 < iVar12 + 0x28U)))) {
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar8 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar8 = uVar11 | unaff_x30;
                }
                _printk(0x80075e1,"hw_fence_dbg_dump_queues_wr",0x242,uVar8);
                arg2 = 0xffffffffffffffea;
            }
            else {
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8004016,"hw_fence_dbg_dump_queues_wr",0x246,uVar1);
                    iVar12 = *(*(iVar10 + 0x2c8) + uVar1 * 8);
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8007e43,"hw_fence_dbg_dump_queues_wr",0x24b);
                }
                uVar1 = 0;
                if (*(iVar10 + 0x14) != 0) {
                    uVar13 = 0;
                    do {
                        iVar9 = *(iVar12 + 0x48) + uVar13 * 0x40;
                        uVar3 = sym.readq_relaxed_1(iVar9 + 8);
                        uVar4 = sym.readq_relaxed_1(iVar9 + 0x10);
                        uVar5 = sym.readq_relaxed_1(iVar9 + 0x18);
                        uVar6 = sym.readq_relaxed_1(iVar9 + 0x20);
                        uVar7 = sym.readq_relaxed_1(iVar9 + 0x28);
                        uVar2 = sym.readl_relaxed_1(iVar9 + 0x30);
                        uVar8 = sym.readl_relaxed_1(iVar9 + 0x34);
                        iVar9 = sym.readl_relaxed_1(iVar9 + 0x38);
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            _printk(0x80060c7,"hw_fence_dbg_dump_queues_wr",0x25b,uVar13,uVar5,uVar3,uVar4,uVar6
                                    ,uVar7,uVar2,uVar8 & 0xffffffff | iVar9 << 0x20);
                        }
                        uVar13 = uVar13 + 1;
                        uVar1 = *(iVar10 + 0x14);
                    } while (uVar13 < uVar1);
                }
                if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                    _printk(0x8005d91,"hw_fence_dbg_dump_queues_wr",0x25e);
                    uVar1 = *(iVar10 + 0x14);
                }
                if (uVar1 != 0) {
                    uVar1 = 0;
                    do {
                        iVar9 = *(iVar12 + 0x28) + uVar1 * 0x40;
                        uVar3 = sym.readq_relaxed_1(iVar9 + 8);
                        uVar4 = sym.readq_relaxed_1(iVar9 + 0x10);
                        uVar5 = sym.readq_relaxed_1(iVar9 + 0x18);
                        uVar6 = sym.readq_relaxed_1(iVar9 + 0x20);
                        uVar2 = sym.readl_relaxed_1(iVar9 + 0x30);
                        uVar8 = sym.readl_relaxed_1(iVar9 + 0x34);
                        iVar9 = sym.readl_relaxed_1(iVar9 + 0x38);
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                            _printk(0x800497d,"hw_fence_dbg_dump_queues_wr",0x26c,uVar1,uVar5,uVar3,uVar4,uVar6,
                                    uVar2,uVar8 & 0xffffffff | iVar9 << 0x20);
                        }
                        uVar1 = uVar1 + 1;
                    } while (uVar1 < *(iVar10 + 0x14));
                }
            }
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return arg2;
    }
    auVar14 = __stack_chk_fail(arg2);
    iVar10 = auVar14._0_8_;
    if ((iVar10 != 0) && (auVar14._8_4_ < *(iVar10 + 0x34))) {
        return *(*(iVar10 + 0x230) + auVar14._8_4_ * 0x10);
    }
    return 0xffffffea;
}


// ===== sym.hw_fence_ipcc_get_client_virt_id @ 0x08014fd0 (size 56) =====

uint sym.hw_fence_ipcc_get_client_virt_id(int64_t arg1,uint32_t arg2)

{
    if ((arg1 != 0) && (arg2 < *(arg1 + 0x34))) {
        return *(*(arg1 + 0x230) + arg2 * 0x10);
    }
    return 0xffffffea;
}


// ===== sym.hw_fence_ipcc_get_client_phys_id @ 0x08015008 (size 52) =====

uint sym.hw_fence_ipcc_get_client_phys_id(int64_t arg1,uint32_t arg2)

{
    if ((arg1 != 0) && (arg2 < *(arg1 + 0x34))) {
        return *(*(arg1 + 0x230) + arg2 * 0x10 + 4);
    }
    return 0xffffffea;
}


// ===== sym.hw_fence_ipcc_get_signal_id @ 0x0801503c (size 52) =====

uint sym.hw_fence_ipcc_get_signal_id(int64_t arg1,uint32_t arg2)

{
    if ((arg1 != 0) && (arg2 < *(arg1 + 0x34))) {
        return *(*(arg1 + 0x230) + arg2 * 0x10 + 8);
    }
    return 0xffffffea;
}


// ===== sym.hw_fence_ipcc_needs_rxq_update @ 0x08015070 (size 60) =====

bool sym.hw_fence_ipcc_needs_rxq_update(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    
    bVar1 = false;
    if (arg1 != 0) {
        if (*(arg1 + 0x34) <= arg2) {
            return false;
        }
        bVar1 = *(*(arg1 + 0x230) + arg2 * 0x10 + 0xc) != '\0';
    }
    return bVar1;
}


// ===== sym.hw_fence_ipcc_needs_ipc_irq @ 0x080150ac (size 56) =====

bool sym.hw_fence_ipcc_needs_ipc_irq(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    
    bVar1 = false;
    if ((arg1 != 0) && (arg2 < 0x28f)) {
        bVar1 = *(*(arg1 + 0x230) + arg2 * 0x10 + 0xd) != '\0';
    }
    return bVar1;
}


// ===== sym.hw_fence_ipcc_trigger_signal @ 0x080150e4 (size 516) =====

void sym.hw_fence_ipcc_trigger_signal(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    uint32_t uVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg4 | arg3 << 0x10;
    arg2_00 = *(arg1 + 0x218) + (*(arg1 + 0x224) << 0x12) + (arg2 << 0xc) + 0xc;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10040) != 0) goto joined_r0x080152c0;
    uVar2 = arg2 - 3;
    if (uVar2 < 0x10) {
        pcVar3 = *(uVar2 * 8 + 0x80092a8);
    }
    else {
        pcVar3 = "UNKNOWN_PID";
    }
    uVar2 = arg3 - 8;
    if (uVar2 < 0x80) {
        pcVar4 = "APPS_VID";
    //switch table (128 cases) at 0x8008bb8
        switch(*(uVar2 * 4 + 0x8008bb8) + 0x80151b8) {
        case 0x80151cc:
            pcVar4 = "GPU_VID";
            break;
        case 0x80151dc:
            goto code_r0x080151dc;
        case 0x80151ec:
            pcVar4 = "IPE_VID";
            break;
        case 0x80151fc:
            pcVar4 = "VPU_VID";
            break;
        case 0x801520c:
            pcVar4 = "DPU_VID";
            break;
        case 0x801521c:
            pcVar4 = "IFE0_VID";
            break;
        case 0x801522c:
            pcVar4 = "IFE1_VID";
            break;
        case 0x801523c:
            pcVar4 = "IFE2_VID";
            break;
        case 0x801524c:
            pcVar4 = "IFE3_VID";
            break;
        case 0x801525c:
            pcVar4 = "IFE4_VID";
            break;
        case 0x801526c:
            pcVar4 = "IFE5_VID";
            break;
        case 0x801527c:
            pcVar4 = "IFE6_VID";
            break;
        case 0x801528c:
            pcVar4 = "IFE7_VID";
        }
    }
    else {
code_r0x080151dc:
        pcVar4 = "UNKNOWN_VID";
    }
    _printk(0x8005552,"hw_fence_ipcc_trigger_signal",0x119,pcVar3,arg2 & 0xffffffff,pcVar4,arg3 & 0xffffffff,
            arg4 & 0xffffffff,uVar1,arg2_00);
joined_r0x080152c0:
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x80042b6,"hw_fence_ipcc_trigger_signal",0x11a,uVar1,arg2_00);
    }
    sym.writel_relaxed_1(uVar1,arg2_00);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.hw_fence_ipcc_enable_signaling @ 0x080152e8 (size 1308) =====

//WARNING: Removing unreachable block (ram,0x08015a10)

ulong sym.hw_fence_ipcc_enable_signaling(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    ulong *puVar3;
    int iVar4;
    bool bVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int iVar12;
    uint32_t uVar13;
    int iVar14;
    uint64_t *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    int64_t iVar16;
    uint64_t unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_4c = 0;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x80036e1,"hw_fence_ipcc_enable_signaling",0x17e);
    }
    uVar6 = of_property_read_variable_u32_array(*(*arg1 + 0x2f0),"qcom,hw-fence-ipc-ver",&uStack_4c,1,0);
    if ((uVar6 < 0) || (uStack_4c == 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8007ce5,"hw_fence_ipcc_enable_signaling",0x187,uVar6 & uVar6 >> 0x1f);
        }
        uStack_4c = sym.readl_relaxed_2(*(arg1 + 0x218) + 0x88000);
        if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
            _printk(0x800587f,"hw_fence_ipcc_enable_signaling",0x18d,uStack_4c);
        }
    }
    if (uStack_4c < 0x10700) {
        if (uStack_4c == 0x10000) {
            uVar6 = _segment.ehdr ^ 0xffffffff;
            *(arg1 + 0x22c) = 8;
            *(arg1 + 0x224) = 0x800000002;
            *(arg1 + 0x230) = obj.hw_fence_clients_ipc_map_no_dpu;
            if ((uVar6 & 0x10008) == 0) {
                uVar8 = 0x8007476;
                uVar10 = 0x159;
code_r0x08015584:
                _printk(uVar8,"_hw_fence_ipcc_hwrev_init",uVar10);
            }
        }
        else {
            if (uStack_4c != 0x10100) goto code_r0x080157b0;
            uVar6 = _segment.ehdr ^ 0xffffffff;
            *(arg1 + 0x22c) = 8;
            *(arg1 + 0x224) = 0x800000001;
            *(arg1 + 0x230) = obj.hw_fence_clients_ipc_map_no_dpu;
            if ((uVar6 & 0x10008) == 0) {
                uVar8 = 0x800322c;
                uVar10 = 0x160;
                goto code_r0x08015584;
            }
        }
    }
    else {
        if (uStack_4c != 0x10700) {
            if (uStack_4c == 0x20003) {
                *(arg1 + 0x22c) = 3;
                *(arg1 + 0x224) = 0x800000004;
                iVar9 = __kmalloc(*(arg1 + 0x34) << 4,0xdc0);
                *(arg1 + 0x230) = iVar9;
                if (iVar9 == 0) {
                    bVar5 = false;
                }
                else {
                    memcpy(iVar9,obj.hw_fence_clients_ipc_map_v2,0x8f0);
                    iVar9 = 0;
                    iVar12 = 0x8f;
                    do {
                        iVar4 = *(*(arg1 + 0x28) + (iVar9 + 5) * 0x28 + 0x10);
                        if (0 < iVar4) {
                            iVar14 = 0;
                            do {
                                uVar6 = iVar12 + iVar14;
                                if (*(arg1 + 0x34) <= uVar6) {
                                    uVar11 = -1L << (_simple_open & 0x3f);
                                    uVar7 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                                    if ((unaff_x30 & 0x80000000000000) != 0) {
                                        uVar7 = uVar11 | unaff_x30;
                                    }
                                    _printk(0x8005def,"_hw_fence_ipcc_init_map_with_configurable_clients",0x13c,uVar7
                                            ,*(*(arg1 + 0x28) + (iVar9 + 5) * 0x28));
                                    bVar5 = false;
                                    goto code_r0x080155f8;
                                }
                                uVar7 = -(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4;
                                uVar8 = *(iVar9 * 0x10 + 0x80026ac);
                                puVar3 = *(arg1 + 0x230) + uVar7;
                                *puVar3 = *(iVar9 * 0x10 + 0x80026a4);
                                puVar3[1] = uVar8;
                                *(*(arg1 + 0x230) + uVar7 + 8) = iVar14;
                                iVar14 = iVar14 + 1;
                            } while (iVar4 != iVar14);
                            iVar12 = iVar12 + iVar14;
                        }
                        iVar9 = iVar9 + 1;
                    } while (iVar9 != 8);
                    bVar5 = true;
                }
code_r0x080155f8:
                if (((_segment.ehdr ^ 0xffffffff) & 0x10008) == 0) {
                    _printk(0x8004e3c,"_hw_fence_ipcc_hwrev_init",0x16f);
                }
                if (bVar5) goto code_r0x0801560c;
            }
code_r0x080157b0:
            uVar11 = -1L << (_simple_open & 0x3f);
            uVar7 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar7 = uVar11 | unaff_x30;
            }
            _printk(0x8003a5a,"hw_fence_ipcc_enable_signaling",0x191,uVar7);
            uVar8 = 0xffffffea;
            goto code_r0x08015694;
        }
        uVar6 = _segment.ehdr ^ 0xffffffff;
        *(arg1 + 0x22c) = 8;
        *(arg1 + 0x224) = 0x800000002;
        *(arg1 + 0x230) = obj.hw_fence_clients_ipc_map;
        if ((uVar6 & 0x10008) == 0) {
            uVar8 = 0x8005dbf;
            uVar10 = 0x167;
            goto code_r0x08015584;
        }
    }
code_r0x0801560c:
    uVar7 = 0;
    uStack_4c = 0;
    iVar9 = *(arg1 + 0x218) + (*(arg1 + 0x224) << 0x12) + (*(arg1 + 0x22c) << 0xc) + 8;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x80042b6,"hw_fence_ipcc_enable_signaling",0x199,0,iVar9);
        uVar7 = uStack_4c;
    }
    sym.writel_relaxed_1(uVar7,iVar9);
    uVar7 = 0x80000;
    uStack_4c = 0x80000;
    iVar9 = *(arg1 + 0x218) + (*(arg1 + 0x224) << 0x12) + (*(arg1 + 0x22c) << 0xc) + 0x14;
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x80042b6,"hw_fence_ipcc_enable_signaling",0x1a0,0x80000,iVar9);
        uVar7 = uStack_4c;
    }
    sym.writel_relaxed_1(uVar7,iVar9);
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x8004df4,"hw_fence_ipcc_enable_signaling",0x1a3);
    }
    uVar8 = 0;
code_r0x08015694:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.hw_fence_ipcc_enable_dpu_signaling;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x80047c3,"hw_fence_ipcc_enable_dpu_signaling",0x1b1);
    }
    if (((iVar9 != 0) && (*(iVar9 + 0x224) != 0)) && (*(iVar9 + 0x230) != 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8007e94,"hw_fence_ipcc_enable_dpu_signaling",0x1b8,*(iVar9 + 0x218));
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x80034b1,"hw_fence_ipcc_enable_dpu_signaling",0x1ba);
            uVar6 = *(iVar9 + 0x34);
        }
        else {
            uVar6 = *(iVar9 + 0x34);
        }
        if (uVar6 != 0) {
            bVar5 = false;
            uVar13 = 0;
            do {
                iVar16 = *(iVar9 + 0x230);
                iVar15 = uVar13;
                piVar1 = iVar16 + uVar13 * 0x10;
                if (*piVar1 == 0x19) {
                    if (!bVar5) {
                        iVar2 = *(iVar9 + 0x218) + (*(iVar9 + 0x224) << 0x12) + (*(iVar16 + iVar15 * 0x10 + 4) << 0xc) +
                                8;
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                            _printk(0x8007d36,"hw_fence_ipcc_enable_dpu_signaling",0x1cd,1,iVar2);
                        }
                        sym.writel_relaxed_1(1,iVar2);
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        iVar2 = iVar16 + iVar15 * 0x10;
                        _printk(0x8007d6c,"hw_fence_ipcc_enable_dpu_signaling",0x1d6,uVar13,*piVar1,*(iVar2 + 4),
                                *(iVar2 + 8));
                    }
                    iVar16 = iVar16 + iVar15 * 0x10;
                    uVar7 = *(iVar16 + 8) | 0x80000;
                    iVar16 = *(iVar9 + 0x218) + (*(iVar9 + 0x224) << 0x12) + (*(iVar16 + 4) << 0xc) + 0x14;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8007d36,"hw_fence_ipcc_enable_dpu_signaling",0x1dd,uVar7,iVar16);
                    }
                    sym.writel_relaxed_1(uVar7,iVar16);
                    uVar6 = *(iVar9 + 0x34);
                    bVar5 = true;
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 < uVar6);
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x80042ec,"hw_fence_ipcc_enable_dpu_signaling",0x1e1);
        }
        return 0;
    }
    _printk(0x8007a77,"hw_fence_ipcc_enable_dpu_signaling",0x1b4,~(-1L << (_simple_open & 0x3f)) & 0x8015804);
    return 0xffffffff;
}


// ===== sym.hw_fence_ipcc_enable_dpu_signaling @ 0x08015804 (size 692) =====

ulong sym.hw_fence_ipcc_enable_dpu_signaling(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x80047c3,"hw_fence_ipcc_enable_dpu_signaling",0x1b1);
    }
    if (((arg1 != 0) && (*(arg1 + 0x224) != 0)) && (*(arg1 + 0x230) != 0)) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x8007e94,"hw_fence_ipcc_enable_dpu_signaling",0x1b8,*(arg1 + 0x218));
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x80034b1,"hw_fence_ipcc_enable_dpu_signaling",0x1ba);
            uVar4 = *(arg1 + 0x34);
        }
        else {
            uVar4 = *(arg1 + 0x34);
        }
        if (uVar4 != 0) {
            bVar3 = false;
            uVar6 = 0;
            do {
                iVar8 = *(arg1 + 0x230);
                iVar7 = uVar6;
                piVar1 = iVar8 + uVar6 * 0x10;
                if (*piVar1 == 0x19) {
                    if (!bVar3) {
                        iVar2 = *(arg1 + 0x218) + (*(arg1 + 0x224) << 0x12) + (*(iVar8 + iVar7 * 0x10 + 4) << 0xc) + 8;
                        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                            _printk(0x8007d36,"hw_fence_ipcc_enable_dpu_signaling",0x1cd,1,iVar2);
                        }
                        sym.writel_relaxed_1(1,iVar2);
                    }
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        iVar2 = iVar8 + iVar7 * 0x10;
                        _printk(0x8007d6c,"hw_fence_ipcc_enable_dpu_signaling",0x1d6,uVar6,*piVar1,*(iVar2 + 4),
                                *(iVar2 + 8));
                    }
                    iVar8 = iVar8 + iVar7 * 0x10;
                    uVar9 = *(iVar8 + 8) | 0x80000;
                    iVar8 = *(arg1 + 0x218) + (*(arg1 + 0x224) << 0x12) + (*(iVar8 + 4) << 0xc) + 0x14;
                    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
                        _printk(0x8007d36,"hw_fence_ipcc_enable_dpu_signaling",0x1dd,uVar9,iVar8);
                    }
                    sym.writel_relaxed_1(uVar9,iVar8);
                    uVar4 = *(arg1 + 0x34);
                    bVar3 = true;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar4);
        }
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x80042ec,"hw_fence_ipcc_enable_dpu_signaling",0x1e1);
        }
        return 0;
    }
    uVar5 = -1L << (_simple_open & 0x3f);
    uVar9 = (~uVar5 | 0xff80000000000000) & unaff_x30;
    if ((unaff_x30 & 0x80000000000000) != 0) {
        uVar9 = uVar5 | unaff_x30;
    }
    _printk(0x8007a77,"hw_fence_ipcc_enable_dpu_signaling",0x1b4,uVar9);
    return 0xffffffff;
}


// ===== sym.hw_sync_debugfs_ioctl @ 0x08015ab8 (size 352) =====

ulong sym.hw_sync_debugfs_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    code *pcVar3;
    uint64_t uVar4;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = (arg2 & 0xffU) - 2;
    if (uVar2 < 0x12) {
        if (uVar2 * 0x18 - 0x1a9 < 0xfffffffffffffe4f) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x8015be0);
            (*pcVar3)();
        }
        if ((uVar2 & 0x1ffffffffffffff8) == 0) {
            uVar4 = -1L << (_simple_open & 0x3f);
            uVar2 = (~uVar4 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar4 | unaff_x30;
            }
            _printk(0x8007136,"hw_sync_debugfs_ioctl",0x2a1,uVar2);
            uVar1 = 0xffffffffffffffe7;
        }
        else {
            uVar1 = *(arg1 + 0xd8);
            pcVar3 = *(uVar2 * 0x18 + 0x8008dc0);
            if (9 < (pcVar3 + -0x800a6e0 >> 3 | pcVar3 << 0x3d)) {
                __cfi_slowpath_diag(0x9014caba79f8fed0,pcVar3,0x8002790);
            }
            uVar1 = (*pcVar3)(uVar1,arg3);
        }
    }
    else {
        uVar4 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar4 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar4 | unaff_x30;
        }
        _printk(0x8003e2a,"hw_sync_debugfs_ioctl",0x29b,uVar2);
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.hw_sync_debugfs_open @ 0x08015c18 (size 132) =====

ulong sym.hw_sync_debugfs_open(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x38);
    if (puVar2 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        uVar3 = dma_fence_context_alloc(1);
        uVar4 = 0;
        *(arg1 + 0xd8) = puVar2;
        *puVar2 = uVar3;
    }
    return uVar4;
}


// ===== sym.hw_sync_debugfs_release @ 0x08015c9c (size 56) =====

ulong sym.hw_sync_debugfs_release(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd8) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        kfree();
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.hw_sync_ioctl_reg_client @ 0x08015cd4 (size 384) =====

//WARNING: Removing unreachable block (ram,0x08016324)
//WARNING: Removing unreachable block (ram,0x08016270)
//WARNING: Removing unreachable block (ram,0x08015f00)
//WARNING: Removing unreachable block (ram,0x080162c8)
//WARNING: Removing unreachable block (ram,0x080161b8)
//WARNING: Removing unreachable block (ram,0x0801616c)

int64_t sym.hw_sync_ioctl_reg_client(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    int *arg1_00;
    int *piVar6;
    int64_t in_x1;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    code *pcVar12;
    int *piVar13;
    int *unaff_x22;
    uint64_t unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar14 [16];
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong *puStack_e0;
    int *piStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t *puStack_60;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_3c = 0;
    iVar4 = sym._copy_from_user_1(&uStack_3c,in_x1,4);
    if (iVar4 == 0) {
        if (arg1 != 0) {
            uVar8 = uStack_3c;
            if (0xfffffff8 < uStack_3c - 0xf) goto code_r0x08015d8c;
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar10 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar10 = uVar9 | unaff_x30;
            }
            _printk(0x800583f,"_get_client_id",0x9c,uVar10,uVar8,8,0xe);
        }
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0xfffffff2;
    }
code_r0x08015d8c:
    uStack_3c = uVar8;
    if (&uStack_3c < 0xfffffffffffff001) {
        if (*(arg1 + 0x10) == 0) {
            *(arg1 + 8) = uStack_3c;
            uVar8 = sym.msm_hw_fence_register(uVar8,arg1 + 0x18);
            iVar4 = -0x16;
            if (uVar8 < 0xfffffffffffff001 && uVar8 != 0) {
                iVar4 = 0;
            }
            *(arg1 + 0x10) = uVar8;
        }
        else {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar8 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar10 | unaff_x30;
            }
            _printk(0x8003e77,"hw_sync_ioctl_reg_client",0xc9,uVar8);
            iVar4 = -0x16;
        }
    }
    else {
        iVar4 = uStack_3c;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    auVar14 = __stack_chk_fail(iVar4);
    *extraout_x18 = sym.hw_sync_ioctl_unreg_client;
    pcStack_68 = sym.hw_sync_ioctl_unreg_client;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    pcVar12 = sym.hw_sync_ioctl_unreg_client;
    iStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    puStack_60 = &uStack_3c;
    iVar4 = sym._copy_from_user_1(&iStack_7c,auVar14._8_8_,4);
    if (iVar4 == 0) {
        if (auVar14._0_8_ != 0) {
            if (0xfffffff8 < iStack_7c - 0xfU) goto code_r0x08015f0c;
            _printk(0x800583f,"_get_client_id",0x9c,~(-1L << (_simple_open & 0x3f)) & 0x8015e54,iStack_7c,8,0xe);
        }
        iStack_7c = -0x16;
    }
    else {
        iStack_7c = -0xe;
    }
code_r0x08015f0c:
    iVar3 = iStack_7c;
    if (&iStack_7c < 0xfffffffffffff001) {
        iVar3 = sym.msm_hw_fence_deregister(*(auVar14._0_8_ + 0x10));
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    auVar14 = __stack_chk_fail();
    iVar11 = auVar14._8_8_;
    piVar13 = auVar14._0_8_;
    *extraout_x18_00 = sym.hw_sync_ioctl_create_fence;
    pcStack_b8 = sym.hw_sync_ioctl_create_fence;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    piStack_d8 = NULL;
    uStack_d0 = 0;
    uStack_e8 = 0;
    puStack_e0 = NULL;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    piVar6 = &iStack_7c;
    ppuStack_c0 = &puStack_70;
    if (piVar13 != NULL) {
        piVar6 = piVar13;
        if (piVar13[2] - 0xfU < 0xfffffff9) {
            _printk(0x800583f,"_is_valid_client",0x89,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,piVar13[2],8,0xe
                   );
        }
        else if ((*(piVar13 + 4) == 0) || (0xfffffffffffff000 < *(piVar13 + 4))) {
            _printk(0x800325c,"hw_sync_ioctl_create_fence",0xec,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c);
        }
        else {
            iVar4 = sym._copy_from_user_1(&uStack_100,iVar11,0x18);
            if (iVar4 != 0) {
                iVar11 = -0xe;
                goto code_r0x080161c4;
            }
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            pcVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,4);
            if (pcVar5 == NULL) {
                iVar11 = -0xc;
                goto code_r0x080161c4;
            }
            arg1_00 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
            pcVar12 = pcVar5;
            if (arg1_00 == NULL) {
                kfree(pcVar5);
                iVar11 = -0xc;
                goto code_r0x080161c4;
            }
            snprintf(arg1_00 + 0x10,0x40,"hwfence:id:%d:ctx=%lu:seqno:%lu",piVar13[2],*piVar13,uStack_100);
            uVar7 = *piVar13;
            *pcVar5 = 0;
            dma_fence_init(arg1_00,obj.hw_fence_dbg_ops_1,pcVar5,uVar7,uStack_100);
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8004c0b,"hw_sync_ioctl_create_fence",0x105,piVar13[2],*piVar13,uStack_100);
            }
            puStack_e0 = &uStack_108;
            piStack_d8 = arg1_00;
            iVar3 = sym.msm_hw_fence_create(*(piVar13 + 4),&uStack_e8);
            unaff_x22 = arg1_00;
            if (iVar3 == 0) {
                *(arg1_00 + 0x20) = *(piVar13 + 4);
                if (uStack_f8 != '\0') {
                    uVar7 = dma_fence_context_alloc(1);
                    *piVar13 = uVar7;
                }
                uVar8 = get_unused_fd_flags(0);
                pcVar12 = uVar8 & 0xffffffff;
                if (-1 < uVar8) {
                    piVar6 = sync_file_create(arg1_00);
                    if (piVar6 == NULL) {
                        _printk(0x80045a8,"hw_sync_ioctl_create_fence",0x122,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,pcVar12);
                        sym.dma_fence_put_1(arg1_00);
                        iVar11 = -0x16;
                        goto code_r0x080163f4;
                    }
                    unaff_x22 = arg1_00 + 0xe;
                    auVar14 = extraout_q0;
                    goto code_r0x08016344;
                }
                _printk(0x8006510,"hw_sync_ioctl_create_fence",0x11b,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,
                        piVar13[2]);
                sym.dma_fence_put_1(arg1_00);
                iVar11 = uVar8;
                goto code_r0x080161c4;
            }
            _printk(0x80073e8,"hw_sync_ioctl_create_fence",0x10d,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,
                    piVar13[2],*piVar13,uStack_100);
            sym.dma_fence_put_1(arg1_00);
        }
    }
    iVar11 = -0x16;
code_r0x080161c4:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_c8) {
        auVar14 = __stack_chk_fail();
code_r0x08016344:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            iVar3 = *unaff_x22;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            auVar14 = dma_fence_release(unaff_x22);
        }
        else if (iVar3 < 1) {
            auVar14 = refcount_warn_saturate(unaff_x22,3);
        }
        uStack_f8 = CONCAT44(pcVar12,uStack_f8);
        uStack_f0 = uStack_108;
        iVar4 = sym._copy_to_user_1(iVar11,auVar14,0x18);
        if (iVar4 == 0) {
            fd_install(pcVar12 & 0xffffffff,*piVar6);
            iVar11 = 0;
        }
        else {
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                iVar3 = *unaff_x22;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = iVar3 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release(unaff_x22);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(unaff_x22,3);
            }
            fput(*piVar6);
            iVar11 = -0xe;
            piVar13 = piVar6;
            arg1_00 = unaff_x22;
code_r0x080163f4:
            put_unused_fd(pcVar12 & 0xffffffff);
            piVar6 = piVar13;
            unaff_x22 = arg1_00;
        }
    }
    return iVar11;
}


// ===== sym.hw_sync_ioctl_unreg_client @ 0x08015e54 (size 264) =====

//WARNING: Removing unreachable block (ram,0x080162c8)
//WARNING: Removing unreachable block (ram,0x080161b8)
//WARNING: Removing unreachable block (ram,0x08016324)
//WARNING: Removing unreachable block (ram,0x08016270)
//WARNING: Removing unreachable block (ram,0x0801616c)

int64_t sym.hw_sync_ioctl_unreg_client(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint *puVar5;
    int *arg1_00;
    uint64_t uVar6;
    int *piVar7;
    int64_t in_x1;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg2;
    int *piVar10;
    int *unaff_x22;
    uint *unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar11 [16];
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong *puStack_a0;
    int *piStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_3c = 0;
    iVar4 = sym._copy_from_user_1(&iStack_3c,in_x1,4);
    if (iVar4 == 0) {
        if (arg1 != 0) {
            if (0xfffffff8 < iStack_3c - 0xfU) goto code_r0x08015f0c;
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar9 | unaff_x30;
            }
            _printk(0x800583f,"_get_client_id",0x9c,uVar6,iStack_3c,8,0xe);
        }
        iStack_3c = -0x16;
    }
    else {
        iStack_3c = -0xe;
    }
code_r0x08015f0c:
    iVar3 = iStack_3c;
    if (&iStack_3c < 0xfffffffffffff001) {
        iVar3 = sym.msm_hw_fence_deregister(*(arg1 + 0x10));
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    auVar11 = __stack_chk_fail();
    arg2 = auVar11._8_8_;
    piVar10 = auVar11._0_8_;
    *extraout_x18 = sym.hw_sync_ioctl_create_fence;
    pcStack_78 = sym.hw_sync_ioctl_create_fence;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    piStack_98 = NULL;
    uStack_90 = 0;
    uStack_a8 = 0;
    puStack_a0 = NULL;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    piVar7 = &iStack_3c;
    puStack_80 = &stack0xffffffffffffffd0;
    if (piVar10 != NULL) {
        piVar7 = piVar10;
        if (piVar10[2] - 0xfU < 0xfffffff9) {
            _printk(0x800583f,"_is_valid_client",0x89,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,piVar10[2],8,0xe
                   );
        }
        else if ((*(piVar10 + 4) == 0) || (0xfffffffffffff000 < *(piVar10 + 4))) {
            _printk(0x800325c,"hw_sync_ioctl_create_fence",0xec,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c);
        }
        else {
            iVar4 = sym._copy_from_user_1(&uStack_c0,arg2,0x18);
            if (iVar4 != 0) {
                arg2 = -0xe;
                goto code_r0x080161c4;
            }
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,4);
            if (puVar5 == NULL) {
                arg2 = -0xc;
                goto code_r0x080161c4;
            }
            arg1_00 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
            unaff_x30 = puVar5;
            if (arg1_00 == NULL) {
                kfree(puVar5);
                arg2 = -0xc;
                goto code_r0x080161c4;
            }
            snprintf(arg1_00 + 0x10,0x40,"hwfence:id:%d:ctx=%lu:seqno:%lu",piVar10[2],*piVar10,uStack_c0);
            uVar8 = *piVar10;
            *puVar5 = 0;
            dma_fence_init(arg1_00,obj.hw_fence_dbg_ops_1,puVar5,uVar8,uStack_c0);
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8004c0b,"hw_sync_ioctl_create_fence",0x105,piVar10[2],*piVar10,uStack_c0);
            }
            puStack_a0 = &uStack_c8;
            piStack_98 = arg1_00;
            iVar3 = sym.msm_hw_fence_create(*(piVar10 + 4),&uStack_a8);
            unaff_x22 = arg1_00;
            if (iVar3 == 0) {
                *(arg1_00 + 0x20) = *(piVar10 + 4);
                if (uStack_b8 != '\0') {
                    uVar8 = dma_fence_context_alloc(1);
                    *piVar10 = uVar8;
                }
                uVar6 = get_unused_fd_flags(0);
                unaff_x30 = uVar6 & 0xffffffff;
                if (-1 < uVar6) {
                    piVar7 = sync_file_create(arg1_00);
                    if (piVar7 == NULL) {
                        _printk(0x80045a8,"hw_sync_ioctl_create_fence",0x122,
                                ~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,unaff_x30);
                        sym.dma_fence_put_1(arg1_00);
                        arg2 = -0x16;
                        goto code_r0x080163f4;
                    }
                    unaff_x22 = arg1_00 + 0xe;
                    auVar11 = extraout_q0;
                    goto code_r0x08016344;
                }
                _printk(0x8006510,"hw_sync_ioctl_create_fence",0x11b,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,
                        piVar10[2]);
                sym.dma_fence_put_1(arg1_00);
                arg2 = uVar6;
                goto code_r0x080161c4;
            }
            _printk(0x80073e8,"hw_sync_ioctl_create_fence",0x10d,~(-1L << (_simple_open & 0x3f)) & 0x8015f5c,
                    piVar10[2],*piVar10,uStack_c0);
            sym.dma_fence_put_1(arg1_00);
        }
    }
    arg2 = -0x16;
code_r0x080161c4:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_88) {
        auVar11 = __stack_chk_fail();
code_r0x08016344:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            iVar3 = *unaff_x22;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            auVar11 = dma_fence_release(unaff_x22);
        }
        else if (iVar3 < 1) {
            auVar11 = refcount_warn_saturate(unaff_x22,3);
        }
        uStack_b8 = CONCAT44(unaff_x30,uStack_b8);
        uStack_b0 = uStack_c8;
        iVar4 = sym._copy_to_user_1(arg2,auVar11,0x18);
        if (iVar4 == 0) {
            fd_install(unaff_x30 & 0xffffffff,*piVar7);
            arg2 = 0;
        }
        else {
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                iVar3 = *unaff_x22;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = iVar3 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release(unaff_x22);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(unaff_x22,3);
            }
            fput(*piVar7);
            arg2 = -0xe;
            piVar10 = piVar7;
            arg1_00 = unaff_x22;
code_r0x080163f4:
            put_unused_fd(unaff_x30 & 0xffffffff);
            piVar7 = piVar10;
            unaff_x22 = arg1_00;
        }
    }
    return arg2;
}


// ===== sym.hw_sync_ioctl_create_fence @ 0x08015f5c (size 1252) =====

int64_t sym.hw_sync_ioctl_create_fence(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint *puVar5;
    int *arg1_00;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    uint *unaff_x20;
    ulong *unaff_x21;
    int *unaff_x22;
    uint64_t unaff_x30;
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong *puStack_60;
    int *piStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    piStack_58 = NULL;
    uStack_50 = 0;
    uStack_68 = 0;
    puStack_60 = NULL;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (arg1 != 0) {
        unaff_x21 = arg1;
        if (*(arg1 + 8) - 0xfU < 0xfffffff9) {
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar9 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar6,*(arg1 + 8),8,0xe);
        }
        else if ((*(arg1 + 0x10) == 0) || (0xfffffffffffff000 < *(arg1 + 0x10))) {
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar9 | unaff_x30;
            }
            _printk(0x800325c,"hw_sync_ioctl_create_fence",0xec,uVar6);
        }
        else {
            iVar4 = sym._copy_from_user_1(&uStack_80,arg2,0x18);
            if (iVar4 != 0) {
                arg2 = -0xe;
                goto code_r0x080161c4;
            }
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,4);
            if (puVar5 == NULL) {
                arg2 = -0xc;
                goto code_r0x080161c4;
            }
            arg1_00 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0,0x88);
            unaff_x20 = puVar5;
            if (arg1_00 == NULL) {
                kfree(puVar5);
                arg2 = -0xc;
                goto code_r0x080161c4;
            }
            snprintf(arg1_00 + 0x10,0x40,"hwfence:id:%d:ctx=%lu:seqno:%lu",*(arg1 + 8),*arg1,uStack_80);
            uVar7 = *arg1;
            *puVar5 = 0;
            dma_fence_init(arg1_00,obj.hw_fence_dbg_ops_1,puVar5,uVar7,uStack_80);
            if ((~_segment.ehdr & 0x10001) == 0) {
                _printk(0x8004c0b,"hw_sync_ioctl_create_fence",0x105,*(arg1 + 8),*arg1,uStack_80);
            }
            puStack_60 = &uStack_88;
            piStack_58 = arg1_00;
            iVar3 = sym.msm_hw_fence_create(*(arg1 + 0x10),&uStack_68);
            unaff_x22 = arg1_00;
            if (iVar3 == 0) {
                *(arg1_00 + 0x20) = *(arg1 + 0x10);
                if (uStack_78 != '\0') {
                    uVar7 = dma_fence_context_alloc(1);
                    *arg1 = uVar7;
                }
                uVar6 = get_unused_fd_flags(0);
                unaff_x20 = uVar6 & 0xffffffff;
                if (-1 < uVar6) {
                    unaff_x21 = sync_file_create(arg1_00);
                    if (unaff_x21 != NULL) {
                        unaff_x22 = arg1_00 + 0xe;
                        noname_1 = extraout_q0;
                        goto code_r0x08016344;
                    }
                    uVar9 = -1L << (_simple_open & 0x3f);
                    uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar6 = uVar9 | unaff_x30;
                    }
                    _printk(0x80045a8,"hw_sync_ioctl_create_fence",0x122,uVar6,unaff_x20);
                    sym.dma_fence_put_1(arg1_00);
                    arg2 = -0x16;
                    goto code_r0x080163f4;
                }
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar9 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar9 = uVar8 | unaff_x30;
                }
                _printk(0x8006510,"hw_sync_ioctl_create_fence",0x11b,uVar9,*(arg1 + 8));
                sym.dma_fence_put_1(arg1_00);
                arg2 = uVar6;
                goto code_r0x080161c4;
            }
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar9 | unaff_x30;
            }
            _printk(0x80073e8,"hw_sync_ioctl_create_fence",0x10d,uVar6,*(arg1 + 8),*arg1,uStack_80);
            sym.dma_fence_put_1(arg1_00);
        }
    }
    arg2 = -0x16;
code_r0x080161c4:
    while( true ) {
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) break;
        noname_1 = __stack_chk_fail();
code_r0x08016344:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            iVar3 = *unaff_x22;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar2) {
                *unaff_x22 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            noname_1 = dma_fence_release(unaff_x22);
        }
        else if (iVar3 < 1) {
            noname_1 = refcount_warn_saturate(unaff_x22,3);
        }
        uStack_78 = CONCAT44(unaff_x20,uStack_78);
        uStack_70 = uStack_88;
        iVar4 = sym._copy_to_user_1(arg2,noname_1,0x18);
        if (iVar4 == 0) {
            fd_install(unaff_x20 & 0xffffffff,*unaff_x21);
            arg2 = 0;
        }
        else {
            Hint_Prefetch(unaff_x22,2,0,1);
            do {
                iVar3 = *unaff_x22;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(unaff_x22,0x10);
                if (bVar2) {
                    *unaff_x22 = iVar3 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release(unaff_x22);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(unaff_x22,3);
            }
            fput(*unaff_x21);
            arg2 = -0xe;
            arg1 = unaff_x21;
            arg1_00 = unaff_x22;
code_r0x080163f4:
            put_unused_fd(unaff_x20 & 0xffffffff);
            unaff_x21 = arg1;
            unaff_x22 = arg1_00;
        }
    }
    return arg2;
}


// ===== sym.hw_sync_ioctl_destroy_fence @ 0x08016440 (size 572) =====

void sym.hw_sync_ioctl_destroy_fence(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint uVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t in_x1;
    uint64_t uVar8;
    int iVar9;
    int extraout_w9;
    ulong *in_x18;
    int *unaff_x19;
    int *unaff_x30;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    if (arg1 == 0) {
        uVar7 = 0xffffffffffffffea;
    }
    else {
        unaff_x19 = unaff_x30;
        if (*(arg1 + 8) - 0xfU < 0xfffffff9) {
            uVar8 = -1L << (_simple_open & 0x3f);
            uVar1 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar1 = uVar8 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar1,*(arg1 + 8),8,0xe);
            uVar7 = 0xffffffffffffffea;
        }
        else {
            iVar6 = sym._copy_from_user_1(&uStack_40,in_x1,0x18);
            if (iVar6 == 0) {
                uVar5 = uStack_38._4_4_;
                if ((-1 < uStack_38) && (iVar6 = sync_file_get_fence(uStack_38._4_4_), iVar6 != 0)) {
                    unaff_x19 = iVar6 + 0x38;
                    iVar9 = 1;
                    goto code_r0x0801664c;
                }
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar8 | unaff_x30;
                }
                _printk(0x8005e41,"hw_sync_ioctl_destroy_fence",0x14d,uVar1,uVar5);
                uVar7 = 0xffffffffffffffea;
            }
            else {
                uVar7 = 0xfffffffffffffff2;
            }
        }
    }
    while( true ) {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_28) break;
        __stack_chk_fail(uVar7);
        iVar9 = extraout_w9;
code_r0x0801664c:
        Hint_Prefetch(unaff_x19,2,0,1);
        do {
            iVar2 = *unaff_x19;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x19,0x10);
            if (bVar4) {
                *unaff_x19 = iVar2 - iVar9;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release(unaff_x19);
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(unaff_x19,3);
        }
        Hint_Prefetch(unaff_x19,2,0,1);
        do {
            iVar9 = *unaff_x19;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x19,0x10);
            if (bVar4) {
                *unaff_x19 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar9 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release(unaff_x19);
        }
        else if (iVar9 < 1) {
            refcount_warn_saturate(unaff_x19,3);
        }
        uVar7 = 0;
    }
    return;
}


// ===== sym.hw_sync_ioctl_create_fence_array @ 0x0801667c (size 1776) =====

int64_t sym.hw_sync_ioctl_create_fence_array(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *puVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t *in_x18;
    int64_t *unaff_x19;
    uint64_t uVar12;
    int iVar13;
    int64_t *piVar14;
    uint64_t unaff_x30;
    uchar extraout_q0 [16];
    uchar noname_1 [16];
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    if (arg1 == 0) goto code_r0x08016b68;
    if (*(arg1 + 8) - 0xfU < 0xfffffff9) {
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar12 = uVar11 | unaff_x30;
        }
        _printk(0x800583f,"_is_valid_client",0x89,uVar12,*(arg1 + 8),8,0xe);
        goto code_r0x08016b68;
    }
    if ((*(arg1 + 0x10) == 0) || (0xfffffffffffff000 < *(arg1 + 0x10))) {
        uVar11 = -1L << (_simple_open & 0x3f);
        uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar12 = uVar11 | unaff_x30;
        }
        _printk(0x800325c,"hw_sync_ioctl_create_fence_array",0x16e,uVar12);
        goto code_r0x08016b68;
    }
    iVar7 = sym._copy_from_user_1(&uStack_b0,arg2,0x68);
    uVar12 = uStack_a8;
    if (iVar7 == 0) {
        iVar13 = uStack_a8;
        if (9 < uStack_a8) {
            uVar11 = -1L << (_simple_open & 0x3f);
            uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar11 | unaff_x30;
            }
            _printk(0x8002dfd,"hw_sync_ioctl_create_fence_array",0x178,uVar12,uStack_a8 & 0xffffffff,10);
            goto code_r0x08016b68;
        }
        if ((uStack_a8 >> 0x3d == 0) && (piVar8 = __kmalloc(uStack_a8 << 3,0xdc0), piVar8 != NULL)) {
            if (0 < iVar13) {
                if (uStack_a0 < 1) goto code_r0x08016b60;
                iVar7 = sync_file_get_fence();
                if (iVar7 == 0) goto code_r0x08016b60;
                *piVar8 = iVar7;
                if (iVar13 != 1) {
                    if (uStack_98 < 1) goto code_r0x08016b60;
                    iVar7 = sync_file_get_fence();
                    if (iVar7 == 0) {
                        uVar6 = 0;
                        goto code_r0x08016aec;
                    }
                    piVar8[1] = iVar7;
                    if (iVar13 != 2) {
                        if (uStack_90 < 1) goto code_r0x08016b60;
                        iVar7 = sync_file_get_fence();
                        if (iVar7 == 0) {
                            uVar6 = 1;
                            goto code_r0x08016aec;
                        }
                        piVar8[2] = iVar7;
                        if (iVar13 != 3) {
                            if (uStack_88 < 1) goto code_r0x08016b60;
                            iVar7 = sync_file_get_fence();
                            if (iVar7 == 0) {
                                uVar6 = 2;
                                goto code_r0x08016aec;
                            }
                            piVar8[3] = iVar7;
                            if (iVar13 != 4) {
                                if (uStack_80 < 1) goto code_r0x08016b60;
                                iVar7 = sync_file_get_fence();
                                if (iVar7 == 0) {
                                    uVar6 = 3;
                                    goto code_r0x08016aec;
                                }
                                piVar8[4] = iVar7;
                                if (iVar13 != 5) {
                                    if (uStack_78 < 1) goto code_r0x08016b60;
                                    iVar7 = sync_file_get_fence();
                                    if (iVar7 == 0) {
                                        uVar6 = 4;
                                        goto code_r0x08016aec;
                                    }
                                    piVar8[5] = iVar7;
                                    if (iVar13 != 6) {
                                        if (uStack_70 < 1) goto code_r0x08016b60;
                                        iVar7 = sync_file_get_fence();
                                        if (iVar7 == 0) {
                                            uVar6 = 5;
                                            goto code_r0x08016aec;
                                        }
                                        piVar8[6] = iVar7;
                                        if (iVar13 != 7) {
                                            if (uStack_68 < 1) goto code_r0x08016b60;
                                            iVar7 = sync_file_get_fence();
                                            if (iVar7 == 0) goto code_r0x08016c34;
                                            piVar8[7] = iVar7;
                                            if (iVar13 != 8) {
                                                if (uStack_60 < 1) goto code_r0x08016b60;
                                                iVar7 = sync_file_get_fence();
                                                if (iVar7 == 0) {
                                                    uVar6 = 7;
                                                    goto code_r0x08016aec;
                                                }
                                                piVar8[8] = iVar7;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            iVar7 = dma_fence_array_create(uVar12 & 0xffffffff,piVar8,*arg1,uStack_b0 & 0xffffffff,0);
            if (iVar7 == 0) {
                uVar10 = -1L << (_simple_open & 0x3f);
                uVar11 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar11 = uVar10 | unaff_x30;
                }
                _printk(0x80073b0,"hw_sync_ioctl_create_fence_array",0x193,uVar11);
                if (iVar13 < 1) goto code_r0x08016b60;
                uVar12 = uVar12 & 0xffffffff;
                piVar14 = piVar8;
                do {
                    if (*piVar14 != 0) {
                        piVar1 = *piVar14 + 0x38;
                        Hint_Prefetch(piVar1,2,0,1);
                        do {
                            iVar13 = *piVar1;
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar4) {
                                *piVar1 = iVar13 + -1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        if (iVar13 == 1) {
                            DataMemoryBarrier(2,1);
                            dma_fence_release();
                        }
                        else if (iVar13 < 1) {
                            refcount_warn_saturate(piVar1,3);
                        }
                    }
                    uVar12 = uVar12 - 1;
                    piVar14 = piVar14 + 1;
                    if (uVar12 == 0) goto code_r0x08016b60;
                } while( true );
            }
            uVar6 = get_unused_fd_flags(0);
            unaff_x19 = uVar6;
            if (uVar6 < 1) {
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar12 = uVar11 | unaff_x30;
                }
                _printk(0x8006510,"hw_sync_ioctl_create_fence_array",0x19e,uVar12,*(arg1 + 8));
                sym.dma_fence_put_1(iVar7);
                iVar7 = uVar6;
            }
            else {
                puVar9 = sync_file_create(iVar7);
                if (puVar9 == NULL) {
                    uVar11 = -1L << (_simple_open & 0x3f);
                    uVar12 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar12 = uVar11 | unaff_x30;
                    }
                    _printk(0x80045a8,"hw_sync_ioctl_create_fence_array",0x1a5,uVar12,unaff_x19);
                    sym.dma_fence_put_1(iVar7);
                    kfree(iVar7);
                    iVar7 = -0x16;
                }
                else {
                    piVar1 = iVar7 + 0x38;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar13 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = iVar13 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (iVar13 == 1) {
                        DataMemoryBarrier(2,1);
                        noname_1 = dma_fence_release(piVar1);
                    }
                    else {
                        noname_1 = extraout_q0;
                        if (iVar13 < 1) {
                            noname_1 = refcount_warn_saturate(piVar1,3);
                        }
                    }
                    uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
                    iVar7 = sym._copy_to_user_1(arg2,noname_1,0x68);
                    if (iVar7 == 0) {
                        fd_install(unaff_x19);
                        iVar7 = 0;
                        goto code_r0x08016b6c;
                    }
                    fput(*puVar9);
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar13 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = iVar13 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (iVar13 == 1) {
                        DataMemoryBarrier(2,1);
                        dma_fence_release(piVar1);
                    }
                    else if (iVar13 < 1) {
                        refcount_warn_saturate(piVar1,3);
                    }
                    iVar7 = -0xe;
                }
                put_unused_fd(unaff_x19);
            }
        }
        else {
            iVar7 = -0xc;
        }
    }
    else {
        iVar7 = -0xe;
    }
code_r0x08016b6c:
    while( true ) {
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        piVar8 = unaff_x19;
code_r0x08016c34:
        uVar6 = 6;
code_r0x08016aec:
        iVar13 = uVar6 + 1;
        do {
            if (piVar8[uVar6] != 0) {
                piVar1 = piVar8[uVar6] + 0x38;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = iVar2 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (iVar2 == 1) {
                    DataMemoryBarrier(2,1);
                    dma_fence_release();
                }
                else if (iVar2 < 1) {
                    refcount_warn_saturate(piVar1,3);
                }
            }
            iVar13 = iVar13 + -1;
        } while (0 < iVar13);
code_r0x08016b60:
        kfree(piVar8);
        unaff_x19 = piVar8;
code_r0x08016b68:
        iVar7 = -0x16;
    }
    return iVar7;
}


// ===== sym.hw_sync_ioctl_destroy_fence_array @ 0x08016d6c (size 672) =====

void sym.hw_sync_ioctl_destroy_fence_array(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t in_x1;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int iVar11;
    int extraout_w9;
    uint64_t *in_x18;
    uint64_t unaff_x19;
    uint64_t unaff_x20;
    int *unaff_x21;
    int64_t unaff_x22;
    uint64_t unaff_x30;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
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
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    iVar7 = unaff_x22;
    if (arg1 == 0) {
        uVar6 = 0xffffffffffffffea;
    }
    else {
        unaff_x20 = unaff_x30;
        if (*(arg1 + 8) - 0xfU < 0xfffffff9) {
            uVar9 = -1L << (_simple_open & 0x3f);
            uVar4 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar4 = uVar9 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar4,*(arg1 + 8),8,0xe);
            uVar6 = 0xffffffffffffffea;
        }
        else {
            iVar5 = sym._copy_from_user_1(&uStack_a0,in_x1,0x68);
            if (iVar5 == 0) {
                unaff_x19 = uStack_40 & 0xffffffff;
                if ((-1 < uStack_40) && (iVar7 = sync_file_get_fence(uStack_40 & 0xffffffff), iVar7 != 0)) {
                    unaff_x21 = iVar7 + 0x38;
                    iVar11 = 1;
                    goto code_r0x08016fdc;
                }
                uVar6 = 0x80032a8;
                uVar4 = unaff_x30 & 0x80000000000000;
                uVar8 = 0x1d0;
                goto code_r0x08016f40;
            }
            uVar6 = 0xfffffffffffffff2;
        }
    }
    while( true ) {
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(uVar6);
        unaff_x30 = unaff_x20;
        iVar11 = extraout_w9;
code_r0x08016fdc:
        Hint_Prefetch(unaff_x21,2,0,1);
        do {
            iVar1 = *unaff_x21;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x21,0x10);
            if (bVar3) {
                *unaff_x21 = iVar1 - iVar11;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release(unaff_x21);
        }
        else if (iVar1 < 1) {
            refcount_warn_saturate(unaff_x21,3);
        }
        if (*(iVar7 + 8) == dma_fence_array_ops) {
            Hint_Prefetch(unaff_x21,2,0,1);
            do {
                iVar11 = *unaff_x21;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(unaff_x21,0x10);
                if (bVar3) {
                    *unaff_x21 = iVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar11 == 1) {
                DataMemoryBarrier(2,1);
                dma_fence_release(unaff_x21);
            }
            else if (iVar11 < 1) {
                refcount_warn_saturate(unaff_x21,3);
            }
            uVar6 = 0;
            unaff_x20 = unaff_x30;
        }
        else {
            uVar6 = 0x8004e6f;
            uVar4 = unaff_x30 & 0x80000000000000;
            uVar8 = 0x1d9;
            unaff_x22 = iVar7;
code_r0x08016f40:
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar9 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if (uVar4 != 0) {
                uVar9 = uVar10 | unaff_x30;
            }
            _printk(uVar6,"hw_sync_ioctl_destroy_fence_array",uVar8,uVar9,unaff_x19 & 0xffffffff);
            uVar6 = 0xffffffffffffffea;
            unaff_x20 = unaff_x30;
            iVar7 = unaff_x22;
        }
    }
    return;
}


// ===== sym.hw_sync_ioctl_reg_for_wait @ 0x0801700c (size 504) =====

void sym.hw_sync_ioctl_reg_for_wait(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    int64_t in_x1;
    uint64_t uVar8;
    int iVar9;
    int extraout_w9;
    uint64_t *in_x18;
    uint64_t unaff_x19;
    uint64_t unaff_x30;
    int iStack_34;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iStack_34 = 0;
    if (arg1 == 0) {
        iVar5 = -0x16;
    }
    else {
        unaff_x19 = unaff_x30;
        if (*(arg1 + 8) - 0xfU < 0xfffffff9) {
            uVar8 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar8 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar6,*(arg1 + 8),8,0xe);
            iVar5 = -0x16;
        }
        else {
            iVar5 = sym._copy_from_user_1(&iStack_34,in_x1,4);
            if (iVar5 == 0) {
                if (iStack_34 < 0) {
                    iStack_30 = 0;
                }
                else {
                    iStack_30 = sync_file_get_fence(iStack_34);
                    if (iStack_30 != 0) {
                        uVar6 = sym.msm_hw_fence_wait_update_v2(*(arg1 + 0x10),&iStack_30,0,0);
                        unaff_x19 = uVar6 & 0xffffffff;
                        if (iStack_30 == 0) goto code_r0x080171ac;
                        piVar7 = iStack_30 + 0x38;
                        iVar9 = 1;
                        goto code_r0x080171ec;
                    }
                }
                uVar8 = -1L << (_simple_open & 0x3f);
                uVar6 = (~uVar8 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar6 = uVar8 | unaff_x30;
                }
                _printk(0x80032a8,"hw_sync_ioctl_reg_for_wait",0x1f5,uVar6,iStack_34);
                iVar5 = -0x16;
            }
            else {
                iVar5 = -0xe;
            }
        }
    }
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_28) {
        piVar7 = __stack_chk_fail(iVar5);
        iVar9 = extraout_w9;
code_r0x080171ec:
        Hint_Prefetch(piVar7,2,0,1);
        do {
            iVar1 = *piVar7;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
                *piVar7 = iVar1 - iVar9;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar1 < 1) {
            refcount_warn_saturate(piVar7,3);
        }
code_r0x080171ac:
        iVar5 = unaff_x19;
    }
    return;
}


// ===== sym.hw_sync_ioctl_fence_signal @ 0x08017204 (size 592) =====

void sym.hw_sync_ioctl_fence_signal(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t in_x1;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t uVar6;
    uint64_t unaff_x30;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    if (arg1 == 0) {
        iVar4 = -0x16;
    }
    else if (*(arg1 + 8) - 0xfU < 0xfffffff9) {
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar6 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar6 = uVar5 | unaff_x30;
        }
        _printk(0x800583f,"_is_valid_client",0x89,uVar6,*(arg1 + 8),8,0xe);
        iVar4 = -0x16;
    }
    else {
        uVar6 = *(arg1 + 0x10);
        if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
            uVar5 = -1L << (_simple_open & 0x3f);
            uVar6 = (~uVar5 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar6 = uVar5 | unaff_x30;
            }
            _printk(0x80058c2,"hw_sync_ioctl_fence_signal",0x20a,uVar6);
            iVar4 = -0x16;
        }
        else {
            iVar4 = sym._copy_from_user_1(&iStack_48,in_x1,0x10);
            if (iVar4 == 0) {
                iVar3 = sym.msm_hw_fence_update_txq(*(arg1 + 0x10),iStack_48,0,uStack_40 & 0xffffffff);
                if (iVar3 == 0) {
                    if (0xe < *(arg1 + 8)) goto code_r0x08017450;
                    iVar3 = sym.msm_hw_fence_trigger_signal
                                      (*(arg1 + 0x10),*(uVar6 + 0x6c),*(uVar6 + 0x70),
                                       *(*(arg1 + 8) * 0xc + 0x8008f70));
                    if (iVar3 == 0) {
                        iVar4 = 0;
                    }
                    else {
                        uVar5 = -1L << (_simple_open & 0x3f);
                        uVar6 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar6 = uVar5 | unaff_x30;
                        }
                        _printk(0x8005b76,"hw_sync_ioctl_fence_signal",0x225,uVar6);
                        iVar4 = iVar3;
                    }
                }
                else {
                    uVar5 = -1L << (_simple_open & 0x3f);
                    uVar6 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                    if ((unaff_x30 & 0x80000000000000) != 0) {
                        uVar6 = uVar5 | unaff_x30;
                    }
                    _printk(0x8002abe,"hw_sync_ioctl_fence_signal",0x219,uVar6,*(arg1 + 8));
                    iVar4 = iVar3;
                }
            }
            else {
                iVar4 = -0xe;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08017450:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8017454);
    (*pcVar2)();
}


// ===== sym.hw_sync_ioctl_fence_wait @ 0x08017454 (size 1404) =====

int64_t sym.hw_sync_ioctl_fence_wait(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int *piVar9;
    int64_t in_x1;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint64_t uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    iStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    iStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    if (arg1 != 0) {
        if (*(arg1 + 8) - 0xfU < 0xfffffff9) {
            uVar10 = -1L << (_simple_open & 0x3f);
            uVar12 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar10 | unaff_x30;
            }
            _printk(0x800583f,"_is_valid_client",0x89,uVar12,*(arg1 + 8),8,0xe);
        }
        else {
            iVar5 = sym._copy_from_user_1(&uStack_a8,in_x1,0x10);
            uVar12 = uStack_a8;
            if (iVar5 != 0) {
                iVar5 = -0xe;
                goto code_r0x080177f4;
            }
            if ((uStack_a8 < 0) || (iVar6 = sync_file_get_fence(uStack_a8 & 0xffffffff), iVar6 == 0)) {
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar10 = uVar11 | unaff_x30;
                }
                _printk(0x80032a8,"hw_sync_ioctl_fence_wait",0x23d,uVar10,uVar12 & 0xffffffff);
            }
            else {
                iVar5 = *(arg1 + 0x10);
                if (iVar5 != 0) {
                    iVar7 = __msecs_to_jiffies(uStack_a0 & 0xffffffff);
                    iVar4 = *(iVar5 + 0x90);
                    if (iVar7 == 0 && 0 < iVar4) {
                        iVar7 = 1;
                    }
                    if ((iVar4 < 1) && (iVar7 != 0)) {
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uStack_c8 = 0;
                        uStack_c0 = 0;
                        uStack_d0 = 0;
                        iVar8 = __msecs_to_jiffies(uStack_a0 & 0xffffffff);
                        init_wait_entry(&uStack_d0,0);
                        iVar1 = iVar5 + 0x78;
                        prepare_to_wait_event(iVar1,&uStack_d0,2);
                        iVar4 = *(iVar5 + 0x90);
                        if (iVar8 == 0 && 0 < iVar4) {
                            iVar8 = 1;
                        }
                        while ((iVar7 = iVar8, iVar4 < 1 && (iVar7 = 0, iVar8 != 0))) {
                            iVar8 = schedule_timeout(iVar8);
                            prepare_to_wait_event(iVar1,&uStack_d0,2);
                            iVar4 = *(iVar5 + 0x90);
                            if (iVar8 == 0 && 0 < iVar4) {
                                iVar8 = 1;
                            }
                        }
                        finish_wait(iVar1,&uStack_d0);
                    }
                    if (iVar7 == 0) {
                        uVar10 = -1L << (_simple_open & 0x3f);
                        uVar12 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                        if ((unaff_x30 & 0x80000000000000) != 0) {
                            uVar12 = uVar10 | unaff_x30;
                        }
                        _printk(0x800590b,"hw_sync_ioctl_fence_wait",0x24d,uVar12,uStack_a0);
                        sym.dma_fence_put_1(iVar6);
                        iVar5 = -0x6e;
                    }
                    else {
                        *(iVar5 + 0x90) = 0;
                        do {
                            iVar4 = sym.hw_fence_read_queue(*(arg1 + 0x10),&uStack_98,1);
                            if (iVar4 < 0) {
                                uVar10 = -1L << (_simple_open & 0x3f);
                                uVar12 = (~uVar10 | 0xff80000000000000) & unaff_x30;
                                if ((unaff_x30 & 0x80000000000000) != 0) {
                                    uVar12 = uVar10 | unaff_x30;
                                }
                                _printk(0x8007aae,"hw_sync_ioctl_fence_wait",0x259,uVar12,*(arg1 + 8));
                                iVar5 = iVar4;
                                goto code_r0x08017770;
                            }
                            if (((_segment.ehdr ^ 0xffffffff) & 0x10002) == 0) {
                                _printk(0x8005953,"hw_sync_ioctl_fence_wait",0x25d,uStack_80,uStack_78,
                                        uStack_68 & 0xffffffff);
                            }
                            if ((iStack_90 == *(iVar6 + 0x20)) && (iStack_88 == *(iVar6 + 0x28))) {
                                piVar9 = iVar6 + 0x38;
                                goto code_r0x08017894;
                            }
                        } while (iVar4 != 0);
                        iVar5 = 0;
code_r0x08017770:
                        piVar9 = iVar6 + 0x38;
                        Hint_Prefetch(piVar9,2,0,1);
                        do {
                            iVar4 = *piVar9;
                            cVar2 = '\x01';
                            bVar3 = ExclusiveMonitorPass(piVar9,0x10);
                            if (bVar3) {
                                *piVar9 = iVar4 + -1;
                                cVar2 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar2 != '\0');
                        if (iVar4 == 1) {
                            DataMemoryBarrier(2,1);
                            dma_fence_release();
                        }
                        else if (iVar4 < 1) {
                            refcount_warn_saturate(piVar9,3);
                        }
                        uVar12 = -1L << (_simple_open & 0x3f);
                        if ((unaff_x30 >> 0x37 & 1) == 0) {
                            _printk(0x80032f3,"hw_sync_ioctl_fence_wait",0x268,
                                    (~uVar12 | 0xff80000000000000) & unaff_x30);
                            uVar12 = (~(-1L << (_simple_open & 0x3f)) | 0xff80000000000000U) & unaff_x30;
                        }
                        else {
                            _printk(0x80032f3,"hw_sync_ioctl_fence_wait",0x268,uVar12 | unaff_x30);
                            uVar12 = -1L << (_simple_open & 0x3f) | unaff_x30;
                        }
                        _printk(0x80055d0,"hw_sync_ioctl_fence_wait",0x26a,uVar12,iStack_90,iStack_88,
                                *(iVar6 + 0x20),*(iVar6 + 0x28));
                    }
                    goto code_r0x080177f4;
                }
                uVar11 = -1L << (_simple_open & 0x3f);
                uVar10 = (~uVar11 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar10 = uVar11 | unaff_x30;
                }
                _printk(0x8004054,"hw_sync_ioctl_fence_wait",0x243,uVar10,uVar12 & 0xffffffff);
                sym.dma_fence_put_1(iVar6);
            }
        }
    }
    iVar5 = -0x16;
code_r0x080177f4:
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_58) {
        piVar9 = __stack_chk_fail();
code_r0x08017894:
        Hint_Prefetch(piVar9,2,0,1);
        do {
            iVar4 = *piVar9;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
                *piVar9 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
            iVar5 = 0;
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar9,3);
            iVar5 = 0;
        }
        else {
            iVar5 = 0;
        }
    }
    return iVar5;
}


// ===== sym.hw_sync_ioctl_reset_client @ 0x080179d0 (size 436) =====

int64_t sym.hw_sync_ioctl_reset_client(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    int64_t in_x1;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    if (arg1 == 0) {
        iVar4 = -0x16;
    }
    else if (*(arg1 + 8) - 0xfU < 0xfffffff9) {
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar5 | unaff_x30;
        }
        _printk(0x800583f,"_is_valid_client",0x89,uVar1,*(arg1 + 8),8,0xe);
        iVar4 = -0x16;
    }
    else if ((*(arg1 + 0x10) == 0) || (0xfffffffffffff000 < *(arg1 + 0x10))) {
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar5 | unaff_x30;
        }
        _printk(0x8002b08,"hw_sync_ioctl_reset_client",0x277,uVar1);
        iVar4 = -0x16;
    }
    else {
        iVar4 = sym._copy_from_user_1(&uStack_30,in_x1,8);
        if (iVar4 == 0) {
            iVar3 = sym.msm_hw_fence_reset_client(*(arg1 + 0x10),uStack_30 >> 0x20);
            if (iVar3 == 0) {
                iVar4 = 0;
            }
            else {
                uVar5 = -1L << (_simple_open & 0x3f);
                uVar1 = (~uVar5 | 0xff80000000000000) & unaff_x30;
                if ((unaff_x30 & 0x80000000000000) != 0) {
                    uVar1 = uVar5 | unaff_x30;
                }
                _printk(0x8004ea7,"hw_sync_ioctl_reset_client",0x280,uVar1);
                iVar4 = iVar3;
            }
        }
        else {
            iVar4 = -0xe;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail(iVar4);
    return iVar4 + 0x40;
}


// ===== sym.hw_fence_dbg_get_driver_name_1 @ 0x08017b84 (size 16) =====

int64_t sym.hw_fence_dbg_get_driver_name_1(int64_t arg1)

{
    return arg1 + 0x40;
}


// ===== sym.hw_fence_dbg_get_timeline_name_1 @ 0x08017b94 (size 16) =====

int64_t sym.hw_fence_dbg_get_timeline_name_1(int64_t arg1)

{
    return arg1 + 0x40;
}


// ===== sym.hw_fence_dbg_enable_signaling_1 @ 0x08017ba4 (size 16) =====

ulong sym.hw_fence_dbg_enable_signaling_1(void)

{
    return 1;
}


// ===== sym.hw_fence_dbg_release_1 @ 0x08017bb4 (size 292) =====

void sym.hw_fence_dbg_release_1(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    if (arg1 == 0) {
        return;
    }
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x800450b,"hw_fence_dbg_release",0xb3,arg1);
        iVar1 = *(arg1 + 0x30);
    }
    else {
        iVar1 = *(arg1 + 0x30);
    }
    if (iVar1 < 0) {
        uVar2 = *(arg1 + 0x80);
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            uVar3 = 0x800453d;
            uVar4 = 0xa3;
        }
        else {
            iVar1 = sym.msm_hw_fence_destroy(uVar2,arg1);
            if (iVar1 == 0) goto code_r0x08017c10;
            uVar3 = 0x8006814;
            uVar4 = 0xa9;
        }
        uVar5 = -1L << (_simple_open & 0x3f);
        uVar2 = (~uVar5 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar2 = uVar5 | unaff_x30;
        }
        _printk(uVar3,"_hw_fence_release",uVar4,uVar2);
    }
code_r0x08017c10:
    kfree(*arg1);
    kfree(arg1);
    return;
}


// ===== sym.init_module @ 0x08017e20 (size 256) =====

int sym.init_module(void)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t *in_x18;
    uint64_t unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8005635,"msm_hw_fence_init",600);
    }
    iVar2 = __platform_driver_register
                      (reloc.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt,obj.__this_module);
    if (iVar2 == 0) {
        if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
            _printk(0x800753d,"msm_hw_fence_init",0x261);
        }
    }
    else {
        uVar3 = -1L << (_simple_open & 0x3f);
        uVar1 = (~uVar3 | 0xff80000000000000) & unaff_x30;
        if ((unaff_x30 & 0x80000000000000) != 0) {
            uVar1 = uVar3 | unaff_x30;
        }
        _printk(0x8005996,"msm_hw_fence_init",0x25d,uVar1,"msm_hw_fence_init");
    }
    return iVar2;
}


// ===== sym.cleanup_module @ 0x08017f20 (size 144) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((~_segment.ehdr & 0x10001) == 0) {
        _printk(0x8005635,"msm_hw_fence_exit",0x268);
    }
    platform_driver_unregister(reloc.msm_hw_fence_probe.3b9f86ed4ee2ada62029b164c3bd13ac.cfi_jt);
    if (((_segment.ehdr ^ 0xffffffff) & 0x10001) == 0) {
        _printk(0x800753d,"msm_hw_fence_exit",0x26c);
    }
    return;
}

