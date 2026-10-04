// decompiled from msm_memshare by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 356) =====

//WARNING: Switch with 1 destination removed at 0x08002c2c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b1394c7097a0a26) {
        if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.memshare_init_worker.d67825d29decba99ff3cee19fde7e82c.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x8001198 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002bec;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002bec;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x2b1394c7097a0a26) {
            if ((pcVar1 + -0x80011a8 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08002bec;
        }
        if (arg1 != 0x7b38a7f1693a8f7b) goto code_r0x08002bec;
        pcVar2 = sym.mem_share_svc_disconnect_cb.d67825d29decba99ff3cee19fde7e82c.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.modem_notifier_cb.d67825d29decba99ff3cee19fde7e82c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002bec;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002bec:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002c40);
    (*pcVar1)();
}


// ===== sym.memshare_init_worker.d67825d29decba99ff3cee19fde7e82c.cfi_jt @ 0x08001170 (size 8) =====

void sym.memshare_init_worker.d67825d29decba99ff3cee19fde7e82c.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kmem_cache_alloc_trace(_of_device_is_compatible,0xdc0,0x140);
    if (_segment.ehdr == NULL) {
        return;
    }
    iVar1 = qmi_handle_init(_segment.ehdr,0x20,obj.server_ops,obj.qmi_memshare_handlers);
    if (iVar1 < 0) {
        _dev_err(*_segment.ehdr,"");
    }
    else {
        iVar1 = qmi_add_server(_segment.ehdr,0x34,1,1);
        if (-1 < iVar1) {
            return;
        }
        _dev_err(*_segment.ehdr,"memshare: Registering mem share svc failed %d\n",iVar1);
        if (_segment.ehdr == NULL) {
            return;
        }
        qmi_handle_release();
    }
    kfree(_segment.ehdr);
    _segment.ehdr = NULL;
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001178 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.memshare_probe.d67825d29decba99ff3cee19fde7e82c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001180 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.memshare_probe.d67825d29decba99ff3cee19fde7e82c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.modem_notifier_cb.d67825d29decba99ff3cee19fde7e82c.cfi_jt @ 0x08001188 (size 8) =====

//WARNING: Switch with 1 destination removed at 0x0800269c

ulong sym.modem_notifier_cb.d67825d29decba99ff3cee19fde7e82c.cfi_jt(ulong param_1,uint64_t param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar3 = *(iVar3 + 0x5e0);
    mutex_lock(_segment.ehdr + 1);
    if (3 < param_2) {
        mutex_unlock(_segment.ehdr + 1);
        _dev_info(*_segment.ehdr,"memshare: notifier_cb processed for code: %d\n",param_2);
        while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iVar3) {
            __stack_chk_fail();
            iVar2 = tpidr_el1;
            if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1)
                != 0) {
                iVar2 = sp_el0;
                piVar1 = iVar2 + 0x10;
                *(iVar2 + 0x10) = *piVar1 + 1;
                __traceiter_rproc_qcom_event(0,"","modem_notifier","exit");
                iVar4 = *piVar1;
                *(iVar2 + 0x10) = iVar4 + -1;
                if ((iVar4 + -1 == 0) || (*piVar1 == 0)) {
                    preempt_schedule_notrace();
                }
            }
        }
        return 0;
    }
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


// ===== sym.mem_share_svc_disconnect_cb.d67825d29decba99ff3cee19fde7e82c.cfi_jt @ 0x08001190 (size 8) =====

void sym.mem_share_svc_disconnect_cb.d67825d29decba99ff3cee19fde7e82c.cfi_jt(void)

{
    return;
}


// ===== sym.memshare_probe.d67825d29decba99ff3cee19fde7e82c.cfi_jt @ 0x08001198 (size 8) =====

int sym.memshare_probe.d67825d29decba99ff3cee19fde7e82c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    uint uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_58;
    uint uStack_50;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = param_1 + 0x10;
    iVar3 = of_device_is_compatible(*(param_1 + 0x300),0x80008c5);
    if (iVar3 == 0) {
        piVar4 = devm_kmalloc(iVar7,0x98,0xdc0);
        if (piVar4 == NULL) goto code_r0x080012a0;
        *piVar4 = iVar7;
        _segment.ehdr = piVar4;
        *(param_1 + 0xa8) = piVar4;
        __mutex_init(piVar4 + 7,"&drv->mem_free",reloc.memshare_remove.d67825d29decba99ff3cee19fde7e82c.cfi_jt);
        __mutex_init(piVar4 + 1,"&drv->mem_share",reloc.memshare_remove.d67825d29decba99ff3cee19fde7e82c.cfi_jt);
        piVar4[0xd] = 0xfffffffe0;
        piVar4[0xe] = piVar4 + 0xe;
        piVar4[0xf] = piVar4 + 0xe;
        uVar5 = _dma_alloc_attrs;
        piVar4[0x10] = sym.memshare_init_worker.d67825d29decba99ff3cee19fde7e82c.cfi_jt;
        queue_work_on(0x20,uVar5,piVar4 + 0xd);
        iVar6 = 0;
        do {
            iVar1 = iVar6 + 0x58;
            *(iVar6 + 0x80001c8) = 0;
            *(iVar6 + 0x8000198) = 0x1ffffffff;
            *(iVar6 + 0x80001a0) = 0;
            *(iVar6 + 0x80001d0) = 0;
            *(iVar6 + 0x80001d8) = 0;
            *(obj.memblock + iVar6) = 0xffffffff000003e8;
            *(iVar6 + 0x80001e0) = 0;
            iVar6 = iVar1;
        } while (iVar1 != 0x370);
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        iVar3 = of_platform_populate(*(param_1 + 0x300),0,0,iVar7);
        if (iVar3 == 0) {
            qcom_register_ssr_notifier("",reloc.modem_notifier_cb.d67825d29decba99ff3cee19fde7e82c.cfi_jt);
        }
        else {
            _dev_err(*_segment.ehdr,"memshare: error populating the devices\n");
        }
    }
    else {
        uStack_4c = 0;
        uStack_50 = 0;
        uStack_58 = 0;
        piVar4 = devm_kmalloc(iVar7,0x18,0xdc0);
        if (piVar4 == NULL) {
code_r0x080012a0:
            iVar3 = -0xc;
        }
        else {
            uVar5 = *(param_1 + 0x300);
            *piVar4 = iVar7;
            *(param_1 + 0xa8) = piVar4;
            iVar3 = of_property_read_variable_u32_array(uVar5,"qcom,peripheral-size",&uStack_4c,1,0);
            if (iVar3 < 0) {
                iVar7 = *piVar4;
                pcVar8 = "";
            }
            else {
                iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,client-id",&uStack_50,1,0);
                if (-1 < iVar3) {
                    iVar6 = of_find_property(*(param_1 + 0x300),"qcom,allocate-boot-time",0);
                    if (9 < _segment.ehdr) goto code_r0x080017f8;
                    *((_segment.ehdr & 0xffffffff) * 0x58 + 0x80001a0) = iVar6 != 0;
                    iVar6 = of_find_property(*(param_1 + 0x300),"qcom,allocate-on-request",0);
                    if (9 < _segment.ehdr) goto code_r0x080017f8;
                    *((_segment.ehdr & 0xffffffff) * 0x58 + 0x80001ac) = iVar6 != 0;
                    iVar6 = of_find_property(*(param_1 + 0x300),"qcom,guard-band",0);
                    if (9 < _segment.ehdr) goto code_r0x080017f8;
                    *((_segment.ehdr & 0xffffffff) * 0x58 + 0x80001b0) = iVar6 != 0;
                    iVar6 = of_find_property(*(param_1 + 0x300),"qcom,shared",0);
                    if (iVar6 == 0) {
                        if (9 < _segment.ehdr) goto code_r0x080017f8;
                        iVar6 = (_segment.ehdr & 0xffffffff) * 0x58;
                        *(iVar6 + 0x80001b4) = 0xf00000001;
                        *(iVar6 + 0x80001c0) = 6;
                    }
                    else {
                        if (9 < _segment.ehdr) goto code_r0x080017f8;
                        iVar6 = (_segment.ehdr & 0xffffffff) * 0x58;
                        *(iVar6 + 0x80001b4) = 0x300000002;
                        *(iVar6 + 0x80001bc) = 0x60000000f;
                        *(iVar6 + 0x80001c4) = 6;
                    }
                    iVar3 = of_property_read_string(*(param_1 + 0x300),"",&uStack_58);
                    uVar5 = uStack_58;
                    if (iVar3 != 0) {
                        pcVar8 = "memshare: Error reading peripheral info for client, rc: %d\n";
                        goto code_r0x080015f8;
                    }
                    iVar3 = strcmp(uStack_58,"");
                    if (iVar3 == 0) {
                        uVar9 = _segment.ehdr & 0xffffffff;
                        if (9 < _segment.ehdr) goto code_r0x080017f8;
                        if (0x370 < (uVar9 * 0x58 | 4)) {
code_r0x080017fc:
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(1,0x8001800);
                            (*pcVar2)();
                        }
                        *(uVar9 * 0x58 + 0x8000194) = 0;
                    }
                    else {
                        iVar3 = strcmp(uVar5,"adsp");
                        if (iVar3 == 0) {
                            uVar9 = _segment.ehdr & 0xffffffff;
                            if (9 < _segment.ehdr) goto code_r0x080017f8;
                            if (0x370 < (uVar9 * 0x58 | 4)) goto code_r0x080017fc;
                            uVar10 = 1;
                        }
                        else {
                            iVar3 = strcmp(uVar5,"wcnss");
                            uVar9 = _segment.ehdr & 0xffffffff;
                            if (iVar3 != 0) {
                                if (9 < _segment.ehdr) goto code_r0x080017f8;
                                goto code_r0x08001698;
                            }
                            if (9 < _segment.ehdr) goto code_r0x080017f8;
                            if (0x370 < (uVar9 * 0x58 | 4)) goto code_r0x080017fc;
                            uVar10 = 2;
                        }
                        *(uVar9 * 0x58 + 0x8000194) = uVar10;
                    }
code_r0x08001698:
                    *(piVar4 + 1) = uStack_50;
                    *(uVar9 * 0x58 + 0x80001cc) = uStack_4c;
                    *(obj.memblock + uVar9 * 0x58) = uStack_50;
                    iVar6 = of_parse_phandle(*(param_1 + 0x300),"",0);
                    if (iVar6 == 0) {
                        pcVar8 = "memshare: Continuing with allocation from CMA\n";
                    }
                    else {
                        iVar3 = of_reserved_mem_device_init_by_idx(iVar7,*(param_1 + 0x300),0);
                        if (iVar3 != 0) {
                            pcVar8 = "memshare: Failed to initialize memory region rc: %d\n";
                            goto code_r0x08001600;
                        }
                        pcVar8 = "memshare: Memory allocation from shared DMA pool\n";
                    }
                    _dev_info(iVar7,pcVar8);
                    uVar9 = _segment.ehdr & 0xffffffff;
                    if (9 < _segment.ehdr) goto code_r0x080017f8;
                    if (*(uVar9 * 0x58 + 0x80001a0) != 0) {
                        if (uStack_4c != 0) {
                            if (*(uVar9 * 0x58 + 0x80001b0) != 0) {
                                uStack_4c = uStack_4c + 0x1000;
                            }
                            iVar3 = sym.memshare_alloc(uVar9,uStack_4c,obj.memblock + uVar9 * 0x58);
                            if (iVar3 != 0) {
                                _dev_err(*_segment.ehdr,
                                         "memshare_child: Unable to allocate memory for guaranteed clients, rc: %d\n",
                                         iVar3);
                                iVar6 = of_parse_phandle(*(param_1 + 0x300),"",0);
                                if (iVar6 != 0) {
                                    of_reserved_mem_device_release(iVar7);
                                }
                                goto code_r0x080013ac;
                            }
                            uVar9 = _segment.ehdr & 0xffffffff;
                            if (9 < _segment.ehdr) goto code_r0x080017f8;
                            iVar7 = uVar9 * 0x58;
                            *(iVar7 + 0x80001c8) = uStack_4c;
                            *(iVar7 + 0x80001a4) = 1;
                            sym.shared_hyp_mapping(uVar9);
                            uVar9 = _segment.ehdr & 0xffffffff;
                            if (9 < _segment.ehdr) goto code_r0x080017f8;
                        }
                    }
                    iVar3 = 0;
                    *(obj.memsh_child + uVar9 * 8) = piVar4;
                    _segment.ehdr = CONCAT44(*0x8000004,uVar9 + 1);
                    goto code_r0x080013ac;
                }
                pcVar8 = "memshare: Error reading client id, rc: %d\n";
code_r0x080015f8:
                iVar7 = *_segment.ehdr;
            }
code_r0x08001600:
            _dev_err(iVar7,pcVar8,iVar3);
        }
    }
code_r0x080013ac:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x080017f8:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80017fc);
    (*pcVar2)();
}


// ===== sym.memshare_remove.d67825d29decba99ff3cee19fde7e82c.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.memshare_remove.d67825d29decba99ff3cee19fde7e82c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (_segment.ehdr != 0)) {
        qmi_handle_release();
        kfree(_segment.ehdr);
        _segment.ehdr = 0;
    }
    return 0;
}


// ===== sym.handle_query_size_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt @ 0x080011a8 (size 8) =====

void sym.handle_query_size_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,uint32_t *param_4)

{
    int64_t iVar1;
    uint uVar2;
    ulong *puVar3;
    uint32_t uVar4;
    int iVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(_segment.ehdr + 1);
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0xc);
    if (puVar6 != NULL) {
        uVar4 = sym.check_client(*param_4,param_4[2]);
        puVar3 = _segment.ehdr;
        if (uVar4 < 10) {
            *puVar6 = 0;
            *(puVar6 + 1) = 1;
            uVar2 = *(uVar4 * 0x58 + 0x80001cc);
            puVar6[2] = uVar2;
            mutex_unlock(puVar3 + 1);
            _dev_info(*_segment.ehdr,
                      "memshare_query: client_id : %d, query_resp.size :%d, query_resp.resp.result :%lx\n",*param_4,
                      uVar2,0);
            iVar5 = qmi_send_response(_segment.ehdr,param_2,param_3,0x24,0xff,mem_query_size_resp_msg_data_v01_ei,
                                      puVar6);
            if (iVar5 < 0) {
                _dev_err(*_segment.ehdr,"memshare_query: Error sending the query response: %d\n");
            }
            kfree(puVar6);
            return;
        }
        _dev_err(*_segment.ehdr,"",*param_4,param_4[2]);
        kfree(puVar6);
    }
    mutex_unlock(_segment.ehdr + 1);
    return;
}


// ===== sym.handle_alloc_generic_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt @ 0x080011b0 (size 8) =====

void sym.handle_alloc_generic_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint *arg1;
    ulong uVar7;
    ulong *in_x18;
    uint64_t arg2;
    int *piVar8;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_6c = 0;
    mutex_lock(_segment.ehdr + 1);
    _dev_info(*_segment.ehdr,
              "memshare_alloc: memory alloc request received for client id: %d, proc_id: %d, request size: %d\n",
              param_4[1],param_4[2],*param_4);
    arg1 = kmem_cache_alloc_trace(_of_device_is_compatible,0xdc0,0x418);
    if (arg1 == NULL) {
code_r0x08001a8c:
        mutex_unlock(_segment.ehdr + 1);
    }
    else {
        uVar5 = param_4[1];
        uVar1 = param_4[2];
        *arg1 = 0x20001;
        uVar5 = sym.check_client(uVar5,uVar1);
        puVar3 = _segment.ehdr;
        arg2 = uVar5;
        if (9 < uVar5) {
            _dev_err(*_segment.ehdr,
                     "memshare_alloc: client not found for index: %d, requested client: %d, proc_id: %d\n",arg2,
                     param_4[1],param_4[2]);
code_r0x08001c18:
            kfree(arg1);
            goto code_r0x08001a8c;
        }
        uVar5 = param_4[1];
        if (((((((*(_segment.ehdr + 1) != uVar5) && (*(_segment.ehdr + 1) != uVar5)) && (*(_segment.ehdr + 1) != uVar5))
              && ((*(_segment.ehdr + 1) != uVar5 && (*(_segment.ehdr + 1) != uVar5)))) &&
             ((*(_segment.ehdr + 1) != uVar5 && ((*(_segment.ehdr + 1) != uVar5 && (*(_segment.ehdr + 1) != uVar5))))))
            && ((*(_segment.ehdr + 1) != uVar5 && (*(_segment.ehdr + 1) != uVar5)))) ||
           (_dev_info(*_segment.ehdr,"memshare_alloc: found client with client_id: %d, index: %d\n",uVar5,arg2),
           puVar3 == NULL)) {
            _dev_err(*_segment.ehdr,"memshare_alloc: No valid client node found\n");
            goto code_r0x08001c18;
        }
        piVar8 = arg2 * 0x58 + 0x80001a4;
        if ((*piVar8 == 0) && (uVar5 = *param_4, uVar5 != 0)) {
            uVar1 = *(arg2 * 0x58 + 0x80001cc);
            if (uVar1 < uVar5) {
                *param_4 = uVar1;
                uVar5 = uVar1;
            }
            uVar1 = uVar5;
            if (*(arg2 * 0x58 + 0x80001b0) != 0) {
                uVar1 = uVar5 + 0x1000;
            }
            iVar6 = sym.memshare_alloc(uVar5,uVar1,obj.memblock + arg2 * 0x58);
            if (iVar6 == 0) {
                iVar2 = arg2 * 0x58;
                *piVar8 = 1;
                *(iVar2 + 0x80001e0) = *(iVar2 + 0x80001e0) + '\x01';
                *(iVar2 + 0x80001c8) = *param_4;
                if (0x370 < (arg2 * 0x58 | 4)) goto code_r0x08001e18;
                *(arg2 * 0x58 + 0x8000194) = param_4[2];
            }
            else {
                _dev_err(*_segment.ehdr,"memshare_alloc: unable to allocate memory of size: %d for requested client\n"
                         ,uVar1);
                uStack_6c = 1;
            }
        }
        if ((obj.memblock + arg2 * 0x58 != NULL) && (1 < *(arg2 * 0x58 + 0x80001b4))) {
            iVar2 = arg2 * 0x58;
            uVar7 = qcom_glink_mem_entry_init
                              (*puVar3,*(iVar2 + 0x80001d8),*(iVar2 + 0x80001d0),*(iVar2 + 0x80001c8),
                               *(iVar2 + 0x80001d0) & 0xffffffff);
            puVar3[2] = uVar7;
        }
        iVar2 = arg2 * 0x58;
        *(iVar2 + 0x8000198) = param_4[3];
        *(iVar2 + 0x80001a8) = 1;
        sym.fill_alloc_response(arg1,arg2,&uStack_6c);
        if ((*(iVar2 + 0x80001e1) == '\0') && (*piVar8 != 0)) {
            sym.shared_hyp_mapping(arg2);
        }
        mutex_unlock(_segment.ehdr + 1);
        _dev_info(*_segment.ehdr,"",param_4[1],arg1[8],*arg1);
        iVar6 = qmi_send_response(_segment.ehdr,param_2,param_3,0x22,0x418,mem_alloc_generic_resp_msg_data_v01_ei,
                                  arg1);
        if (iVar6 < 0) {
            _dev_err(*_segment.ehdr,"memshare_alloc: Error sending the alloc response: %d\n");
        }
        kfree(arg1);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08001e18:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(1,0x8001e1c);
    (*pcVar4)();
}


// ===== sym.handle_free_generic_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt @ 0x080011b8 (size 8) =====

void sym.handle_free_generic_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint32_t uVar6;
    int iVar7;
    uint *puVar8;
    ulong extraout_x1;
    uint64_t uVar9;
    uint32_t *puVar10;
    ushort uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar12;
    int *piVar13;
    int *piVar14;
    ulong *puVar15;
    ulong unaff_x30;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uStack_6c = 3;
    uStack_70 = 7;
    mutex_lock(_segment.ehdr + 7);
    puVar10 = *(param_4 + 0x414);
    uStack_74 = 0x30000;
    _dev_info(*_segment.ehdr,"memshare_free: handling memory free request with client id: %d, proc_id: %d\n",
              *(param_4 + 0x40c));
    uVar6 = sym.check_client(*(param_4 + 0x40c),*(param_4 + 0x414));
    puVar12 = uVar6;
    if (9 < uVar6) {
        _dev_err(*_segment.ehdr,"");
    }
    puVar5 = _segment.ehdr;
    uVar1 = *(param_4 + 0x40c);
    uVar9 = uVar1;
    if (((((((*(_segment.ehdr + 1) == uVar1) || (*(_segment.ehdr + 1) == uVar1)) || (*(_segment.ehdr + 1) == uVar1)) ||
          (((*(_segment.ehdr + 1) == uVar1 || (*(_segment.ehdr + 1) == uVar1)) ||
           ((*(_segment.ehdr + 1) == uVar1 || ((*(_segment.ehdr + 1) == uVar1 || (*(_segment.ehdr + 1) == uVar1))))))))
         || (*(_segment.ehdr + 1) == uVar1)) || (*(_segment.ehdr + 1) == uVar1)) &&
       (_dev_info(*_segment.ehdr,"memshare_free: found client with client_id: %d, index: %d\n"), puVar10 = puVar12,
       puVar5 != NULL)) {
        if (puVar5[2] != 0) {
            qcom_glink_mem_entry_free();
            puVar5[2] = 0;
        }
        if ((((uVar6 < 10) && (piVar13 = uVar6 * 0x58 + 0x80001a0, *piVar13 == 0)) &&
            (uVar9 = uVar6, *(uVar9 * 0x58 + 0x80001ac) == 0)) && (piVar14 = uVar9 * 0x58 + 0x80001a4, *piVar14 != 0))
        {
            iVar3 = uVar9 * 0x58;
            puVar15 = iVar3 + 0x80001d0;
            iVar7 = hyp_assign_phys(*puVar15,*(iVar3 + 0x80001c8),iVar3 + 0x80001b8,*(iVar3 + 0x80001b4),&uStack_6c
                                    ,&uStack_70,1);
            if ((iVar7 != 0) && (*(uVar9 * 0x58 + 0x80001e1) == '\x01')) {
                _dev_err(*_segment.ehdr,"",uVar6);
            }
            iVar4 = uVar9 * 0x58;
            iVar7 = *(iVar3 + 0x80001c8);
            if (*(iVar4 + 0x80001b0) != 0) {
                iVar7 = iVar7 + 0x1000;
            }
            dma_free_attrs(*puVar5,iVar7,*(iVar4 + 0x80001d8),*puVar15,0);
            *piVar14 = 0;
            *piVar13 = 0;
            *puVar15 = 0;
            *(iVar3 + 0x80001d8) = 0;
            *(iVar4 + 0x8000198) = 0x1ffffffff;
        }
        else {
            _dev_err(*_segment.ehdr,"",uVar6);
        }
        uVar11 = 0x29;
        if (uVar6 < 10) {
            uVar11 = 0;
        }
        uStack_74 = CONCAT22(uVar11,9 < uVar6);
        mutex_unlock(_segment.ehdr + 7);
        puVar10 = 0x23;
        uVar9 = qmi_send_response(_segment.ehdr,param_2,param_3,0x23,0xff,mem_free_generic_resp_msg_data_v01_ei,
                                  &uStack_74);
        if (uVar9 < 0) {
            _dev_err(*_segment.ehdr,"memshare_free: error sending the free response: %d\n");
        }
    }
    else {
        _dev_err(*_segment.ehdr,"memshare_free: No valid client node found\n");
        mutex_unlock(_segment.ehdr + 7);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.handle_query_size_req;
        mutex_lock(_segment.ehdr + 1);
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0xc);
        if (puVar8 != NULL) {
            uVar6 = sym.check_client(*puVar10,puVar10[2]);
            puVar5 = _segment.ehdr;
            if (uVar6 < 10) {
                *puVar8 = 0;
                *(puVar8 + 1) = 1;
                uVar2 = *(uVar6 * 0x58 + 0x80001cc);
                puVar8[2] = uVar2;
                mutex_unlock(puVar5 + 1);
                _dev_info(*_segment.ehdr,
                          "memshare_query: client_id : %d, query_resp.size :%d, query_resp.resp.result :%lx\n",*puVar10
                          ,uVar2,0);
                iVar7 = qmi_send_response(_segment.ehdr,extraout_x1,uVar9,0x24,0xff,
                                          mem_query_size_resp_msg_data_v01_ei,puVar8);
                if (iVar7 < 0) {
                    _dev_err(*_segment.ehdr,"memshare_query: Error sending the query response: %d\n");
                }
                kfree(puVar8);
                return;
            }
            _dev_err(*_segment.ehdr,"",*puVar10,puVar10[2]);
            kfree(puVar8);
        }
        mutex_unlock(_segment.ehdr + 1);
        return;
    }
    return;
}


// ===== sym.memshare_alloc @ 0x080011c0 (size 120) =====

uint sym.memshare_alloc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _dev_err(*_segment.ehdr,"");
        uVar2 = 0xfffffff4;
    }
    else {
        iVar1 = dma_alloc_attrs(in_x0,arg1 & 0xffffffff,arg2 + 0x40,0xcc0,0);
        uVar2 = 0xfffffff4;
        if (iVar1 != 0) {
            uVar2 = 0;
        }
        *(arg2 + 0x48) = iVar1;
    }
    return uVar2;
}


// ===== sym.memshare_probe @ 0x08001238 (size 1480) =====

int sym.memshare_probe(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    uint uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_58;
    uint uStack_50;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar7 = arg1 + 0x10;
    iVar3 = of_device_is_compatible(*(arg1 + 0x300),0x80008c5);
    if (iVar3 == 0) {
        piVar4 = devm_kmalloc(iVar7,0x98,0xdc0);
        if (piVar4 == NULL) goto code_r0x080012a0;
        *piVar4 = iVar7;
        _segment.ehdr = piVar4;
        *(arg1 + 0xa8) = piVar4;
        __mutex_init(piVar4 + 7,"&drv->mem_free",reloc.memshare_remove.d67825d29decba99ff3cee19fde7e82c.cfi_jt);
        __mutex_init(piVar4 + 1,"&drv->mem_share",reloc.memshare_remove.d67825d29decba99ff3cee19fde7e82c.cfi_jt);
        piVar4[0xd] = 0xfffffffe0;
        piVar4[0xe] = piVar4 + 0xe;
        piVar4[0xf] = piVar4 + 0xe;
        uVar5 = _dma_alloc_attrs;
        piVar4[0x10] = sym.memshare_init_worker.d67825d29decba99ff3cee19fde7e82c.cfi_jt;
        queue_work_on(0x20,uVar5,piVar4 + 0xd);
        iVar6 = 0;
        do {
            iVar1 = iVar6 + 0x58;
            *(iVar6 + 0x80001c8) = 0;
            *(iVar6 + 0x8000198) = 0x1ffffffff;
            *(iVar6 + 0x80001a0) = 0;
            *(iVar6 + 0x80001d0) = 0;
            *(iVar6 + 0x80001d8) = 0;
            *(obj.memblock + iVar6) = 0xffffffff000003e8;
            *(iVar6 + 0x80001e0) = 0;
            iVar6 = iVar1;
        } while (iVar1 != 0x370);
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        iVar3 = of_platform_populate(*(arg1 + 0x300),0,0,iVar7);
        if (iVar3 == 0) {
            qcom_register_ssr_notifier("",reloc.modem_notifier_cb.d67825d29decba99ff3cee19fde7e82c.cfi_jt);
        }
        else {
            _dev_err(*_segment.ehdr,"memshare: error populating the devices\n");
        }
    }
    else {
        uStack_4c = 0;
        uStack_50 = 0;
        uStack_58 = 0;
        piVar4 = devm_kmalloc(iVar7,0x18,0xdc0);
        if (piVar4 == NULL) {
code_r0x080012a0:
            iVar3 = -0xc;
        }
        else {
            uVar5 = *(arg1 + 0x300);
            *piVar4 = iVar7;
            *(arg1 + 0xa8) = piVar4;
            iVar3 = of_property_read_variable_u32_array(uVar5,"qcom,peripheral-size",&uStack_4c,1,0);
            if (iVar3 < 0) {
                iVar7 = *piVar4;
                pcVar8 = "";
            }
            else {
                iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,client-id",&uStack_50,1,0);
                if (-1 < iVar3) {
                    iVar6 = of_find_property(*(arg1 + 0x300),"qcom,allocate-boot-time",0);
                    if (9 < _segment.ehdr) goto code_r0x080017f8;
                    *((_segment.ehdr & 0xffffffff) * 0x58 + 0x80001a0) = iVar6 != 0;
                    iVar6 = of_find_property(*(arg1 + 0x300),"qcom,allocate-on-request",0);
                    if (9 < _segment.ehdr) goto code_r0x080017f8;
                    *((_segment.ehdr & 0xffffffff) * 0x58 + 0x80001ac) = iVar6 != 0;
                    iVar6 = of_find_property(*(arg1 + 0x300),"qcom,guard-band",0);
                    if (9 < _segment.ehdr) goto code_r0x080017f8;
                    *((_segment.ehdr & 0xffffffff) * 0x58 + 0x80001b0) = iVar6 != 0;
                    iVar6 = of_find_property(*(arg1 + 0x300),"qcom,shared",0);
                    if (iVar6 == 0) {
                        if (9 < _segment.ehdr) goto code_r0x080017f8;
                        iVar6 = (_segment.ehdr & 0xffffffff) * 0x58;
                        *(iVar6 + 0x80001b4) = 0xf00000001;
                        *(iVar6 + 0x80001c0) = 6;
                    }
                    else {
                        if (9 < _segment.ehdr) goto code_r0x080017f8;
                        iVar6 = (_segment.ehdr & 0xffffffff) * 0x58;
                        *(iVar6 + 0x80001b4) = 0x300000002;
                        *(iVar6 + 0x80001bc) = 0x60000000f;
                        *(iVar6 + 0x80001c4) = 6;
                    }
                    iVar3 = of_property_read_string(*(arg1 + 0x300),"",&uStack_58);
                    uVar5 = uStack_58;
                    if (iVar3 != 0) {
                        pcVar8 = "memshare: Error reading peripheral info for client, rc: %d\n";
                        goto code_r0x080015f8;
                    }
                    iVar3 = strcmp(uStack_58,"");
                    if (iVar3 == 0) {
                        uVar9 = _segment.ehdr & 0xffffffff;
                        if (9 < _segment.ehdr) goto code_r0x080017f8;
                        if (0x370 < (uVar9 * 0x58 | 4)) {
code_r0x080017fc:
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(1,0x8001800);
                            (*pcVar2)();
                        }
                        *(uVar9 * 0x58 + 0x8000194) = 0;
                    }
                    else {
                        iVar3 = strcmp(uVar5,"adsp");
                        if (iVar3 == 0) {
                            uVar9 = _segment.ehdr & 0xffffffff;
                            if (9 < _segment.ehdr) goto code_r0x080017f8;
                            if (0x370 < (uVar9 * 0x58 | 4)) goto code_r0x080017fc;
                            uVar10 = 1;
                        }
                        else {
                            iVar3 = strcmp(uVar5,"wcnss");
                            uVar9 = _segment.ehdr & 0xffffffff;
                            if (iVar3 != 0) {
                                if (9 < _segment.ehdr) goto code_r0x080017f8;
                                goto code_r0x08001698;
                            }
                            if (9 < _segment.ehdr) goto code_r0x080017f8;
                            if (0x370 < (uVar9 * 0x58 | 4)) goto code_r0x080017fc;
                            uVar10 = 2;
                        }
                        *(uVar9 * 0x58 + 0x8000194) = uVar10;
                    }
code_r0x08001698:
                    *(piVar4 + 1) = uStack_50;
                    *(uVar9 * 0x58 + 0x80001cc) = uStack_4c;
                    *(obj.memblock + uVar9 * 0x58) = uStack_50;
                    iVar6 = of_parse_phandle(*(arg1 + 0x300),"",0);
                    if (iVar6 == 0) {
                        pcVar8 = "memshare: Continuing with allocation from CMA\n";
                    }
                    else {
                        iVar3 = of_reserved_mem_device_init_by_idx(iVar7,*(arg1 + 0x300),0);
                        if (iVar3 != 0) {
                            pcVar8 = "memshare: Failed to initialize memory region rc: %d\n";
                            goto code_r0x08001600;
                        }
                        pcVar8 = "memshare: Memory allocation from shared DMA pool\n";
                    }
                    _dev_info(iVar7,pcVar8);
                    uVar9 = _segment.ehdr & 0xffffffff;
                    if (9 < _segment.ehdr) goto code_r0x080017f8;
                    if (*(uVar9 * 0x58 + 0x80001a0) != 0) {
                        if (uStack_4c != 0) {
                            if (*(uVar9 * 0x58 + 0x80001b0) != 0) {
                                uStack_4c = uStack_4c + 0x1000;
                            }
                            iVar3 = sym.memshare_alloc(uVar9,uStack_4c,obj.memblock + uVar9 * 0x58);
                            if (iVar3 != 0) {
                                _dev_err(*_segment.ehdr,
                                         "memshare_child: Unable to allocate memory for guaranteed clients, rc: %d\n",
                                         iVar3);
                                iVar6 = of_parse_phandle(*(arg1 + 0x300),"",0);
                                if (iVar6 != 0) {
                                    of_reserved_mem_device_release(iVar7);
                                }
                                goto code_r0x080013ac;
                            }
                            uVar9 = _segment.ehdr & 0xffffffff;
                            if (9 < _segment.ehdr) goto code_r0x080017f8;
                            iVar7 = uVar9 * 0x58;
                            *(iVar7 + 0x80001c8) = uStack_4c;
                            *(iVar7 + 0x80001a4) = 1;
                            sym.shared_hyp_mapping(uVar9);
                            uVar9 = _segment.ehdr & 0xffffffff;
                            if (9 < _segment.ehdr) goto code_r0x080017f8;
                        }
                    }
                    iVar3 = 0;
                    *(obj.memsh_child + uVar9 * 8) = piVar4;
                    _segment.ehdr = CONCAT44(*0x8000004,uVar9 + 1);
                    goto code_r0x080013ac;
                }
                pcVar8 = "memshare: Error reading client id, rc: %d\n";
code_r0x080015f8:
                iVar7 = *_segment.ehdr;
            }
code_r0x08001600:
            _dev_err(iVar7,pcVar8,iVar3);
        }
    }
code_r0x080013ac:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    __stack_chk_fail();
code_r0x080017f8:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80017fc);
    (*pcVar2)();
}


// ===== sym.memshare_remove @ 0x08001800 (size 84) =====

ulong sym.memshare_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (_segment.ehdr != 0)) {
        qmi_handle_release();
        kfree(_segment.ehdr);
        _segment.ehdr = 0;
    }
    return 0;
}


// ===== sym.memshare_init_worker @ 0x08001854 (size 208) =====

void sym.memshare_init_worker(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kmem_cache_alloc_trace(_of_device_is_compatible,0xdc0,0x140);
    if (_segment.ehdr == NULL) {
        return;
    }
    iVar1 = qmi_handle_init(_segment.ehdr,0x20,obj.server_ops,obj.qmi_memshare_handlers);
    if (iVar1 < 0) {
        _dev_err(*_segment.ehdr,"");
    }
    else {
        iVar1 = qmi_add_server(_segment.ehdr,0x34,1,1);
        if (-1 < iVar1) {
            return;
        }
        _dev_err(*_segment.ehdr,"memshare: Registering mem share svc failed %d\n",iVar1);
        if (_segment.ehdr == NULL) {
            return;
        }
        qmi_handle_release();
    }
    kfree(_segment.ehdr);
    _segment.ehdr = NULL;
    return;
}


// ===== sym.shared_hyp_mapping @ 0x08001924 (size 212) =====

void sym.shared_hyp_mapping(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iVar1 = (arg1 & 0xffffffffU) * 0x58;
    uStack_3c = 3;
    iVar2 = hyp_assign_phys(*(iVar1 + 0x80001d0),*(iVar1 + 0x80001c8),&uStack_3c,1,iVar1 + 0x80001b8,
                            iVar1 + 0x80001c0,*(iVar1 + 0x80001b4));
    if (iVar2 == 0) {
        *((arg1 & 0xffffffffU) * 0x58 + 0x80001e1) = 1;
    }
    else {
        _dev_err(*_segment.ehdr,"",*(iVar1 + 0x80001c8),iVar2);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    return;
}


// ===== sym.mem_share_svc_disconnect_cb @ 0x080019f8 (size 12) =====

void sym.mem_share_svc_disconnect_cb(void)

{
    return;
}


// ===== sym.handle_alloc_generic_req @ 0x08001a04 (size 1048) =====

void sym.handle_alloc_generic_req(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    code *pcVar4;
    uint32_t uVar5;
    int iVar6;
    uint *arg1_00;
    ulong uVar7;
    ulong *in_x18;
    uint64_t arg2_00;
    int *piVar8;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_6c = 0;
    mutex_lock(_segment.ehdr + 1);
    _dev_info(*_segment.ehdr,
              "memshare_alloc: memory alloc request received for client id: %d, proc_id: %d, request size: %d\n",
              *(arg4 + 4),*(arg4 + 8),*arg4);
    arg1_00 = kmem_cache_alloc_trace(_of_device_is_compatible,0xdc0,0x418);
    if (arg1_00 == NULL) {
code_r0x08001a8c:
        mutex_unlock(_segment.ehdr + 1);
    }
    else {
        uVar5 = *(arg4 + 4);
        uVar1 = *(arg4 + 8);
        *arg1_00 = 0x20001;
        uVar5 = sym.check_client(uVar5,uVar1);
        puVar3 = _segment.ehdr;
        arg2_00 = uVar5;
        if (9 < uVar5) {
            _dev_err(*_segment.ehdr,
                     "memshare_alloc: client not found for index: %d, requested client: %d, proc_id: %d\n",arg2_00,
                     *(arg4 + 4),*(arg4 + 8));
code_r0x08001c18:
            kfree(arg1_00);
            goto code_r0x08001a8c;
        }
        iVar6 = *(arg4 + 4);
        if (((((((*(_segment.ehdr + 1) != iVar6) && (*(_segment.ehdr + 1) != iVar6)) && (*(_segment.ehdr + 1) != iVar6))
              && ((*(_segment.ehdr + 1) != iVar6 && (*(_segment.ehdr + 1) != iVar6)))) &&
             ((*(_segment.ehdr + 1) != iVar6 && ((*(_segment.ehdr + 1) != iVar6 && (*(_segment.ehdr + 1) != iVar6))))))
            && ((*(_segment.ehdr + 1) != iVar6 && (*(_segment.ehdr + 1) != iVar6)))) ||
           (_dev_info(*_segment.ehdr,"memshare_alloc: found client with client_id: %d, index: %d\n",iVar6,arg2_00),
           puVar3 == NULL)) {
            _dev_err(*_segment.ehdr,"memshare_alloc: No valid client node found\n");
            goto code_r0x08001c18;
        }
        piVar8 = arg2_00 * 0x58 + 0x80001a4;
        if ((*piVar8 == 0) && (uVar5 = *arg4, uVar5 != 0)) {
            uVar1 = *(arg2_00 * 0x58 + 0x80001cc);
            if (uVar1 < uVar5) {
                *arg4 = uVar1;
                uVar5 = uVar1;
            }
            uVar1 = uVar5;
            if (*(arg2_00 * 0x58 + 0x80001b0) != 0) {
                uVar1 = uVar5 + 0x1000;
            }
            iVar6 = sym.memshare_alloc(uVar5,uVar1,obj.memblock + arg2_00 * 0x58);
            if (iVar6 == 0) {
                iVar2 = arg2_00 * 0x58;
                *piVar8 = 1;
                *(iVar2 + 0x80001e0) = *(iVar2 + 0x80001e0) + '\x01';
                *(iVar2 + 0x80001c8) = *arg4;
                if (0x370 < (arg2_00 * 0x58 | 4)) goto code_r0x08001e18;
                *(arg2_00 * 0x58 + 0x8000194) = *(arg4 + 8);
            }
            else {
                _dev_err(*_segment.ehdr,"memshare_alloc: unable to allocate memory of size: %d for requested client\n"
                         ,uVar1);
                uStack_6c = 1;
            }
        }
        if ((obj.memblock + arg2_00 * 0x58 != NULL) && (1 < *(arg2_00 * 0x58 + 0x80001b4))) {
            iVar2 = arg2_00 * 0x58;
            uVar7 = qcom_glink_mem_entry_init
                              (*puVar3,*(iVar2 + 0x80001d8),*(iVar2 + 0x80001d0),*(iVar2 + 0x80001c8),
                               *(iVar2 + 0x80001d0) & 0xffffffff);
            puVar3[2] = uVar7;
        }
        iVar2 = arg2_00 * 0x58;
        *(iVar2 + 0x8000198) = *(arg4 + 0xc);
        *(iVar2 + 0x80001a8) = 1;
        sym.fill_alloc_response(arg1_00,arg2_00,&uStack_6c);
        if ((*(iVar2 + 0x80001e1) == '\0') && (*piVar8 != 0)) {
            sym.shared_hyp_mapping(arg2_00);
        }
        mutex_unlock(_segment.ehdr + 1);
        _dev_info(*_segment.ehdr,"",*(arg4 + 4),arg1_00[8],*arg1_00);
        iVar6 = qmi_send_response(_segment.ehdr,arg2,arg3,0x22,0x418,mem_alloc_generic_resp_msg_data_v01_ei,
                                  arg1_00);
        if (iVar6 < 0) {
            _dev_err(*_segment.ehdr,"memshare_alloc: Error sending the alloc response: %d\n");
        }
        kfree(arg1_00);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08001e18:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(1,0x8001e1c);
    (*pcVar4)();
}


// ===== sym.handle_free_generic_req @ 0x08001e1c (size 908) =====

void sym.handle_free_generic_req(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint32_t uVar6;
    int iVar7;
    uint *puVar8;
    ulong extraout_x1;
    uint64_t uVar9;
    uint32_t *puVar10;
    ushort uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar12;
    int *piVar13;
    int *piVar14;
    ulong *puVar15;
    ulong unaff_x30;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uStack_6c = 3;
    uStack_70 = 7;
    mutex_lock(_segment.ehdr + 7);
    puVar10 = *(arg3 + 0x414);
    uStack_74 = 0x30000;
    _dev_info(*_segment.ehdr,"memshare_free: handling memory free request with client id: %d, proc_id: %d\n",
              *(arg3 + 0x40c));
    uVar6 = sym.check_client(*(arg3 + 0x40c),*(arg3 + 0x414));
    puVar12 = uVar6;
    if (9 < uVar6) {
        _dev_err(*_segment.ehdr,"");
    }
    puVar5 = _segment.ehdr;
    uVar1 = *(arg3 + 0x40c);
    uVar9 = uVar1;
    if (((((((*(_segment.ehdr + 1) == uVar1) || (*(_segment.ehdr + 1) == uVar1)) || (*(_segment.ehdr + 1) == uVar1)) ||
          (((*(_segment.ehdr + 1) == uVar1 || (*(_segment.ehdr + 1) == uVar1)) ||
           ((*(_segment.ehdr + 1) == uVar1 || ((*(_segment.ehdr + 1) == uVar1 || (*(_segment.ehdr + 1) == uVar1))))))))
         || (*(_segment.ehdr + 1) == uVar1)) || (*(_segment.ehdr + 1) == uVar1)) &&
       (_dev_info(*_segment.ehdr,"memshare_free: found client with client_id: %d, index: %d\n"), puVar10 = puVar12,
       puVar5 != NULL)) {
        if (puVar5[2] != 0) {
            qcom_glink_mem_entry_free();
            puVar5[2] = 0;
        }
        if ((((uVar6 < 10) && (piVar13 = uVar6 * 0x58 + 0x80001a0, *piVar13 == 0)) &&
            (uVar9 = uVar6, *(uVar9 * 0x58 + 0x80001ac) == 0)) && (piVar14 = uVar9 * 0x58 + 0x80001a4, *piVar14 != 0))
        {
            iVar3 = uVar9 * 0x58;
            puVar15 = iVar3 + 0x80001d0;
            iVar7 = hyp_assign_phys(*puVar15,*(iVar3 + 0x80001c8),iVar3 + 0x80001b8,*(iVar3 + 0x80001b4),&uStack_6c
                                    ,&uStack_70,1);
            if ((iVar7 != 0) && (*(uVar9 * 0x58 + 0x80001e1) == '\x01')) {
                _dev_err(*_segment.ehdr,"",uVar6);
            }
            iVar4 = uVar9 * 0x58;
            iVar7 = *(iVar3 + 0x80001c8);
            if (*(iVar4 + 0x80001b0) != 0) {
                iVar7 = iVar7 + 0x1000;
            }
            dma_free_attrs(*puVar5,iVar7,*(iVar4 + 0x80001d8),*puVar15,0);
            *piVar14 = 0;
            *piVar13 = 0;
            *puVar15 = 0;
            *(iVar3 + 0x80001d8) = 0;
            *(iVar4 + 0x8000198) = 0x1ffffffff;
        }
        else {
            _dev_err(*_segment.ehdr,"",uVar6);
        }
        uVar11 = 0x29;
        if (uVar6 < 10) {
            uVar11 = 0;
        }
        uStack_74 = CONCAT22(uVar11,9 < uVar6);
        mutex_unlock(_segment.ehdr + 7);
        puVar10 = 0x23;
        uVar9 = qmi_send_response(_segment.ehdr,arg1,arg2,0x23,0xff,mem_free_generic_resp_msg_data_v01_ei,
                                  &uStack_74);
        if (uVar9 < 0) {
            _dev_err(*_segment.ehdr,"memshare_free: error sending the free response: %d\n");
        }
    }
    else {
        _dev_err(*_segment.ehdr,"memshare_free: No valid client node found\n");
        mutex_unlock(_segment.ehdr + 7);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        *extraout_x18 = sym.handle_query_size_req;
        mutex_lock(_segment.ehdr + 1);
        iVar3 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar3 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0xc);
        if (puVar8 != NULL) {
            uVar6 = sym.check_client(*puVar10,puVar10[2]);
            puVar5 = _segment.ehdr;
            if (uVar6 < 10) {
                *puVar8 = 0;
                *(puVar8 + 1) = 1;
                uVar2 = *(uVar6 * 0x58 + 0x80001cc);
                puVar8[2] = uVar2;
                mutex_unlock(puVar5 + 1);
                _dev_info(*_segment.ehdr,
                          "memshare_query: client_id : %d, query_resp.size :%d, query_resp.resp.result :%lx\n",*puVar10
                          ,uVar2,0);
                iVar7 = qmi_send_response(_segment.ehdr,extraout_x1,uVar9,0x24,0xff,
                                          mem_query_size_resp_msg_data_v01_ei,puVar8);
                if (iVar7 < 0) {
                    _dev_err(*_segment.ehdr,"memshare_query: Error sending the query response: %d\n");
                }
                kfree(puVar8);
                return;
            }
            _dev_err(*_segment.ehdr,"",*puVar10,puVar10[2]);
            kfree(puVar8);
        }
        mutex_unlock(_segment.ehdr + 1);
        return;
    }
    return;
}


// ===== sym.handle_query_size_req @ 0x080021a8 (size 380) =====

void sym.handle_query_size_req(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint uVar2;
    ulong *puVar3;
    uint32_t uVar4;
    int iVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(_segment.ehdr + 1);
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0xc);
    if (puVar6 != NULL) {
        uVar4 = sym.check_client(*arg3,*(arg3 + 8));
        puVar3 = _segment.ehdr;
        if (uVar4 < 10) {
            *puVar6 = 0;
            *(puVar6 + 1) = 1;
            uVar2 = *(uVar4 * 0x58 + 0x80001cc);
            puVar6[2] = uVar2;
            mutex_unlock(puVar3 + 1);
            _dev_info(*_segment.ehdr,
                      "memshare_query: client_id : %d, query_resp.size :%d, query_resp.resp.result :%lx\n",*arg3,uVar2
                      ,0);
            iVar5 = qmi_send_response(_segment.ehdr,arg1,arg2,0x24,0xff,mem_query_size_resp_msg_data_v01_ei,puVar6
                                     );
            if (iVar5 < 0) {
                _dev_err(*_segment.ehdr,"memshare_query: Error sending the query response: %d\n");
            }
            kfree(puVar6);
            return;
        }
        _dev_err(*_segment.ehdr,"",*arg3,*(arg3 + 8));
        kfree(puVar6);
    }
    mutex_unlock(_segment.ehdr + 1);
    return;
}


// ===== sym.check_client @ 0x08002324 (size 680) =====

uint32_t sym.check_client(uint32_t arg1,uint32_t arg2)

{
    int in_w2;
    uint32_t uVar1;
    code *pcVar2;
    
    if (_obj.memblock == arg1 && *0x8000194 == arg2) {
        return 0;
    }
    if ((*0x80001e8 == arg1) && (*0x80001ec == arg2)) {
        return 1;
    }
    if ((*0x8000240 == arg1) && (*0x8000244 == arg2)) {
        return 2;
    }
    if ((*0x8000298 == arg1) && (*0x800029c == arg2)) {
        return 3;
    }
    if ((_reloc.handle_free_generic_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt == arg1) && (*0x80002f4 == arg2)) {
        return 4;
    }
    if ((*0x8000348 == arg1) && (*0x800034c == arg2)) {
        return 5;
    }
    if ((*0x80003a0 == arg1) && (*0x80003a4 == arg2)) {
        return 6;
    }
    if ((*0x80003f8 == arg1) && (*0x80003fc == arg2)) {
        return 7;
    }
    if ((*0x8000450 == arg1) && (*0x8000454 == arg2)) {
        return 8;
    }
    if ((*0x80004a8 == arg1) && (*0x80004ac == arg2)) {
        return 9;
    }
    if (in_w2 == 0) {
        pcVar2 = obj.memblock;
        if (_obj.memblock == 1000) {
            uVar1 = 0;
        }
        else if (*0x80001e8 == 1000) {
            uVar1 = 1;
            pcVar2 = 0x80001e8;
        }
        else if (*0x8000240 == 1000) {
            uVar1 = 2;
            pcVar2 = 0x8000240;
        }
        else if (*0x8000298 == 1000) {
            uVar1 = 3;
            pcVar2 = 0x8000298;
        }
        else if (_reloc.handle_free_generic_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt == 1000) {
            uVar1 = 4;
            pcVar2 = reloc.handle_free_generic_req.d67825d29decba99ff3cee19fde7e82c.cfi_jt;
        }
        else if (*0x8000348 == 1000) {
            uVar1 = 5;
            pcVar2 = 0x8000348;
        }
        else if (*0x80003a0 == 1000) {
            uVar1 = 6;
            pcVar2 = 0x80003a0;
        }
        else if (*0x80003f8 == 1000) {
            uVar1 = 7;
            pcVar2 = 0x80003f8;
        }
        else if (*0x8000450 == 1000) {
            uVar1 = 8;
            pcVar2 = 0x8000450;
        }
        else {
            if (*0x80004a8 != 1000) goto code_r0x080024bc;
            uVar1 = 9;
            pcVar2 = 0x80004a8;
        }
        *pcVar2 = arg1;
        *(uVar1 * 0x58 + 0x80001a0) = 0;
        *(uVar1 * 0x58 + 0x8000194) = arg2;
    }
    else {
code_r0x080024bc:
        uVar1 = 1000;
    }
    return uVar1;
}


// ===== sym.fill_alloc_response @ 0x080025cc (size 92) =====

void sym.fill_alloc_response(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    
    iVar3 = (arg2 & 0xffffffffU) * 0x58;
    *(arg1 + 4) = 1;
    uVar1 = *(iVar3 + 0x8000198);
    *(arg1 + 0xc) = 1;
    *(arg1 + 0x10) = 1;
    *(arg1 + 8) = uVar1;
    *(arg1 + 0x18) = *(iVar3 + 0x80001d0);
    *(arg1 + 0x20) = *(iVar3 + 0x80001c8);
    iVar2 = *arg3;
    *arg1 = iVar2 != 0;
    *(arg1 + 2) = (iVar2 != 0) << 1;
    return;
}


// ===== sym.modem_notifier_cb @ 0x08002628 (size 1128) =====

//WARNING: Switch with 1 destination removed at 0x0800269c

ulong sym.modem_notifier_cb(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar3 = *(iVar3 + 0x5e0);
    mutex_lock(_segment.ehdr + 1);
    if (3 < arg1) {
        mutex_unlock(_segment.ehdr + 1);
        _dev_info(*_segment.ehdr,"memshare: notifier_cb processed for code: %d\n",arg1);
        while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iVar3) {
            __stack_chk_fail();
            iVar2 = tpidr_el1;
            if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1)
                != 0) {
                iVar2 = sp_el0;
                piVar1 = iVar2 + 0x10;
                *(iVar2 + 0x10) = *piVar1 + 1;
                __traceiter_rproc_qcom_event(0,"","modem_notifier","exit");
                iVar4 = *piVar1;
                *(iVar2 + 0x10) = iVar4 + -1;
                if ((iVar4 + -1 == 0) || (*piVar1 == 0)) {
                    preempt_schedule_notrace();
                }
            }
        }
        return 0;
    }
    do {
    //WARNING: Do nothing block with infinite loop
    //switch table (4 cases) at 0x8000338
    } while( true );
}


// ===== sym.__cfi_check_fail @ 0x08002be8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002c2c

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
    //switch table (4 cases) at 0x8000348
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002c40);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002c44 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.memshare_probe.d67825d29decba99ff3cee19fde7e82c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002c78 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.memshare_probe.d67825d29decba99ff3cee19fde7e82c.cfi_jt);
    return;
}

