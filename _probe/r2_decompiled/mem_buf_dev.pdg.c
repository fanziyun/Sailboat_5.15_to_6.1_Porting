// decompiled from mem_buf_dev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08007000 (size 2372) =====

//WARNING: Switch with 1 destination removed at 0x08008040

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3c22412e94cb903b) {
            if (arg1 < -0x5571fafd09e24d95) {
                if (arg1 < -0x5fda9da0a7870f32) {
                    if (arg1 == -0x7c3b5be053b632ef) {
                        pcVar2 = sym.__bpf_trace_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt;
code_r0x08007900:
                        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                            return;
                        }
                        goto code_r0x08008000;
                    }
                    if (arg1 == -0x784b477596115e07) {
                        pcVar2 = sym.mem_buf_map_mem_s2.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x64fe5f9f6f6b91c6) goto code_r0x08008000;
                        pcVar2 = sym.mem_buf_vmperm_alloc_staticvm.cfi_jt;
                    }
                }
                else if (arg1 == -0x5fda9da0a7870f32) {
                    pcVar2 = sym.mem_buf_sgt_to_gh_sgl_desc.cfi_jt;
                }
                else if (arg1 == -0x5a826c093947f94a) {
                    pcVar2 = sym.mem_buf_vmperm_release.cfi_jt;
                }
                else {
                    if (arg1 != -0x55eb3dcc4b231b81) goto code_r0x08008000;
                    pcVar2 = sym.mem_buf_get_sgl_buf_size.cfi_jt;
                }
            }
            else {
                if (-0x4b59c551905f3920 < arg1) {
                    if (arg1 != -0x4b59c551905f391f) {
                        if (arg1 == -0x45044d076f4a4116) {
                            pcVar2 = sym.trace_event_raw_event_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt;
                        }
                        else {
                            if (arg1 != -0x401f9783f62d042e) goto code_r0x08008000;
                            pcVar2 = sym.perf_trace_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt;
                        }
                        goto code_r0x08007900;
                    }
                    pcVar2 = sym.mem_buf_vmperm_unpin.cfi_jt;
                    goto code_r0x080078e4;
                }
                if (arg1 == -0x5571fafd09e24d95) {
                    pcVar2 = sym.mem_buf_vmperm_can_mmap.cfi_jt;
                }
                else {
                    if (arg1 != -0x53c887a672ae5243) {
                        if (arg1 != -0x4f0409d7bc8431f3) goto code_r0x08008000;
                        pcVar2 = sym.mem_buf_map_mem_s1.cfi_jt;
                        goto code_r0x080078e4;
                    }
                    pcVar2 = sym.mem_buf_unmap_mem_s2.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x28edafa2775cf84f) {
            if (arg1 < -0x2d1ef4d8549a89e5) {
                if (arg1 == -0x3c22412e94cb903b) {
                    pcVar2 = sym.mem_buf_reclaim.cfi_jt;
                }
                else {
                    if (arg1 != -0x36a439683ff074eb) {
                        if (arg1 != -0x3557318fb8d07b71) goto code_r0x08008000;
                        pcVar2 = sym.mem_buf_probe.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt;
                        goto code_r0x080078e4;
                    }
                    pcVar2 = sym.__traceiter_map_mem_s2.cfi_jt;
                }
            }
            else if (arg1 == -0x2d1ef4d8549a89e5) {
                pcVar2 = sym.mem_buf_vm_put_class_device_cb.3c5cee5da827797dc8cc101f32c847f9.cfi_jt;
            }
            else {
                if (arg1 != -0x2c2ee0445421b947) {
                    if ((arg1 == -0x29281a1c72b88dfb) && ((pcVar1 + -0x8007af8 >> 3 | pcVar1 << 0x3d) < 6)) {
                        return;
                    }
                    goto code_r0x08008000;
                }
                pcVar2 = sym.mem_buf_gh_acl_desc_to_vmid_perm_list.cfi_jt;
            }
        }
        else if (arg1 < -0x1693799a3f89b0ed) {
            if (arg1 == -0x28edafa2775cf84f) {
                pcVar2 = sym.__traceiter_send_alloc_resp_msg.cfi_jt;
                goto code_r0x080078e4;
            }
            if (arg1 == -0x2292d34b9e8ba949) {
                pcVar2 = sym.mem_buf_dma_buf_copy_vmperm.cfi_jt;
            }
            else {
                if (arg1 != -0x218c0108fde83420) goto code_r0x08008000;
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 != -0x1693799a3f89b0ed) {
                if (arg1 != -0x12489211b89250c7) goto code_r0x08008000;
                pcVar2 = sym.__bpf_trace_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt;
                goto code_r0x08007900;
            }
            pcVar2 = sym.mem_buf_vm_uses_gunyah.cfi_jt;
        }
        else if (arg1 == -0x8dc801903aca538) {
            pcVar2 = sym.mem_buf_vm_open.3c5cee5da827797dc8cc101f32c847f9.cfi_jt;
        }
        else {
            if (arg1 != -0x7ab0fa496749a83) goto code_r0x08008000;
            pcVar2 = sym.__traceiter_lookup_sgl.cfi_jt;
        }
    }
    else if (arg1 < 0x547401c04b8af610) {
        if (arg1 < 0x1c5cb0457cff8c85) {
            if (arg1 < 0x14cb58972129a218) {
                if (arg1 == 0x2b3a43e29242445) {
                    pcVar2 = sym.init_module.cfi_jt;
                }
                else {
                    if (arg1 != 0x8f7b5e5e34c8f92) {
                        if (arg1 != 0x11c22ae055e925cd) goto code_r0x08008000;
                        pcVar2 = sym.mem_buf_vmid_perm_list_to_gh_acl.cfi_jt;
                        goto code_r0x08007934;
                    }
                    pcVar2 = sym.mem_buf_share.cfi_jt;
                }
code_r0x080078e4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08008000;
            }
            if (arg1 == 0x14cb58972129a218) {
                pcVar2 = sym.mem_buf_dma_buf_export.cfi_jt;
            }
            else {
                if (arg1 == 0x184c88d6c1d42139) {
                    if ((pcVar1 + -0x8007bc8 >> 3 | pcVar1 << 0x3d) < 4) {
                        return;
                    }
                    goto code_r0x08008000;
                }
                if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x08008000;
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
        }
        else if (arg1 < 0x3ff7a6cb82cd3150) {
            if (arg1 == 0x1c5cb0457cff8c85) {
                pcVar2 = sym.mem_buf_dma_buf_exclusive_owner.cfi_jt;
            }
            else {
                if (arg1 != 0x3144dda6905032fe) {
                    if ((arg1 == 0x3dd1a39e589289fe) && ((pcVar1 + -0x8007b50 >> 3 | pcVar1 << 0x3d) < 7)) {
                        return;
                    }
                    goto code_r0x08008000;
                }
                pcVar2 = sym.mem_buf_dma_buf_set_destructor.cfi_jt;
            }
        }
        else if (arg1 < 0x47ce015a85343a42) {
            if (arg1 == 0x3ff7a6cb82cd3150) {
                pcVar2 = sym.trace_event_raw_event_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt;
                goto code_r0x08007900;
            }
            if (arg1 != 0x461b2d254775a0ca) goto code_r0x08008000;
            pcVar2 = sym.mem_buf_vmperm_alloc_accept.cfi_jt;
        }
        else if (arg1 == 0x47ce015a85343a42) {
            pcVar2 = sym.mem_buf_fd_to_vmid.cfi_jt;
        }
        else {
            if (arg1 != 0x51c64f65e6fe8366) goto code_r0x08008000;
            pcVar2 = sym.mem_buf_unassign_mem.cfi_jt;
        }
    }
    else if (arg1 < 0x60a56c7f215bc103) {
        if (arg1 < 0x5b83a3fd302a5421) {
            if (arg1 == 0x547401c04b8af610) {
                pcVar2 = sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr;
            }
            else if (arg1 == 0x578d36349d978035) {
                pcVar2 = sym.__traceiter_mem_buf_alloc_info.cfi_jt;
            }
            else {
                if (arg1 != 0x59ed1ebb6f525684) goto code_r0x08008000;
                pcVar2 = sym.dup_gh_sgl_desc_to_sgt.cfi_jt;
            }
        }
        else if (arg1 == 0x5b83a3fd302a5421) {
            pcVar2 = sym.mem_buf_vm_device_release.3c5cee5da827797dc8cc101f32c847f9.cfi_jt;
        }
        else if (arg1 == 0x5ba7ff64adaaba04) {
            pcVar2 = sym.dup_gh_sgl_desc.cfi_jt;
        }
        else {
            if (arg1 != 0x5c6c625b20f0ff15) goto code_r0x08008000;
            pcVar2 = sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr;
        }
    }
    else if (arg1 < 0x749c0a833d8ee06a) {
        if (arg1 == 0x60a56c7f215bc103) {
            pcVar2 = sym.mem_buf_vmperm_alloc.cfi_jt;
        }
        else if (arg1 == 0x67739f2577b5eaa1) {
            pcVar2 = sym.mem_buf_assign_mem.cfi_jt;
        }
        else {
            if (arg1 != 0x741b966c574d47b1) goto code_r0x08008000;
            pcVar2 = sym.mem_buf_vm_uses_hyp_assign.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x7761400d4586b6e2) {
            if (arg1 == 0x749c0a833d8ee06a) {
                pcVar2 = sym.mem_buf_vmperm_can_vmap.cfi_jt;
            }
            else {
                if (arg1 != 0x759e5fda25b09c74) goto code_r0x08008000;
                pcVar2 = sym.__traceiter_send_alloc_req.cfi_jt;
            }
            goto code_r0x080078e4;
        }
        if (arg1 == 0x7761400d4586b6e2) {
            pcVar2 = sym.mem_buf_vm_devnode.3c5cee5da827797dc8cc101f32c847f9.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08008000;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
code_r0x08007934:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08008000:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8008054);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr @ 0x08007950 (size 8) =====

ulong sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr(int64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar2 = *(*(param_1 + 0x20) + -0x10);
        if (pcVar2 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar2,0x8005bd0);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    else {
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.mem_buf_unassign_mem.cfi_jt @ 0x08007958 (size 8) =====

int sym.mem_buf_unassign_mem.cfi_jt(int64_t param_1,int *param_2,int param_3,uint32_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    char extraout_w0;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_50;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iVar3 = -0x16;
    uStack_50 = 7;
    iStack_4c = _segment.ehdr;
    if (((param_1 != 0) && (param_2 != NULL)) && (param_3 != 0)) {
        if (param_4 != 0xffffffff) {
            iVar3 = sym.mem_buf_unassign_mem_gunyah(param_4);
            if (iVar3 != 0) goto code_r0x08007ea8;
        }
        if (_segment.ehdr == 3) {
            iVar2 = *param_2;
            iVar3 = hyp_assign_table(param_1,param_2,param_3,&iStack_4c,&uStack_50,1);
            if (iVar3 < 0) {
                pcVar5 = "Assign";
                if (iVar2 != 3) {
                    pcVar5 = "Unassign";
                }
                _printk(0x8005ff8,pcVar5,iVar3);
            }
        }
        else {
            iVar3 = 0;
        }
    }
code_r0x08007ea8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_probe;
    iVar1 = iVar4 + 0x10;
    iVar3 = of_property_match_string(*(iVar4 + 0x300),"qcom,mem-buf-capabilities","supplier");
    if (iVar3 < 0) {
        iVar3 = of_property_match_string(*(iVar4 + 0x300),"qcom,mem-buf-capabilities","consumer");
        if (iVar3 < 0) {
            of_property_match_string(*(iVar4 + 0x300),"qcom,mem-buf-capabilities","dual");
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = (extraout_w0 >> 7 ^ 0xffU) & 3;
        }
        else {
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x2;
        }
    }
    else {
        reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x1;
    }
    iVar3 = dma_set_mask(iVar1,0xffffffffffffffff);
    if (iVar3 == 0) {
        dma_set_coherent_mask(iVar1,0xffffffffffffffff);
        iVar3 = sym.mem_buf_vm_init(iVar1);
        if (iVar3 == 0) {
            _segment.ehdr = iVar1;
            return 0;
        }
        pcVar5 = "mem_buf_vm_init failed %d\n";
    }
    else {
        pcVar5 = "Unable to set dma mask: %d\n";
    }
    _dev_err(iVar1,pcVar5,iVar3);
    return iVar3;
}


// ===== sym.mem_buf_vmid_perm_list_to_gh_acl.cfi_jt @ 0x08007960 (size 8) =====

uint32_t * sym.mem_buf_vmid_perm_list_to_gh_acl.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = __kmalloc(param_3 * 4 + 4,0xcc0);
    if (puVar3 == NULL) {
        puVar3 = 0xfffffffffffffff4;
    }
    else {
        *puVar3 = param_3;
        if (param_3 != 0) {
            iVar4 = 0;
            do {
                uVar2 = *(param_2 + iVar4);
                iVar1 = iVar4 + 4;
                *(puVar3 + iVar4 + 4) = *(param_1 + iVar4);
                *(puVar3 + iVar4 + 6) = uVar2;
                iVar4 = iVar1;
            } while (param_3 * 4 - iVar1 != 0);
        }
    }
    return puVar3;
}


// ===== sym.mem_buf_dma_buf_export.cfi_jt @ 0x08007968 (size 8) =====

uint64_t sym.mem_buf_dma_buf_export.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x18) != sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        if (*(param_2 + 0x18) != NULL) {
            _printk(0x8005ce8,*(param_1 + 0x10));
            return 0xffffffffffffffea;
        }
        *(param_2 + 0x18) = sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr;
    }
    *(param_1 + 0x10) = param_2 + 0x10;
    uVar2 = dma_buf_export();
    if (0xfffffffffffff000 < uVar2) {
        return uVar2;
    }
    if (*(*(uVar2 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar1 = *(*(uVar2 + 0x20) + -0x10);
        if (pcVar1 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar1,0x8005bd0);
        }
        uVar3 = (*pcVar1)(uVar2);
        if (uVar3 < 0xfffffffffffff001) {
            *(uVar3 + 0x28) = uVar2;
            return uVar2;
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8008770);
    (*pcVar1)();
}


// ===== sym.mem_buf_vm_put_class_device_cb.3c5cee5da827797dc8cc101f32c847f9.cfi_jt @ 0x08007970 (size 8) =====

ulong sym.mem_buf_vm_put_class_device_cb.3c5cee5da827797dc8cc101f32c847f9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cdev_device_del(param_1 + -0x88,param_1);
    return 0;
}


// ===== sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr @ 0x08007978 (size 8) =====

void sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr(int64_t param_1,ulong param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(param_1 + 0x20) + -8);
    if (pcVar1 != sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        __cfi_slowpath_diag(0x5c6c625b20f0ff15,pcVar1,0x8005bb0);
    }
    (*pcVar1)(param_1,param_2);
    return;
}


// ===== sym.mem_buf_vmperm_alloc_staticvm.cfi_jt @ 0x08007980 (size 8) =====

void sym.mem_buf_vmperm_alloc_staticvm.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mem_buf_vmperm_alloc_flags(param_1,1,param_2,param_3);
    return;
}


// ===== sym.dup_gh_sgl_desc.cfi_jt @ 0x08007988 (size 8) =====

int64_t sym.dup_gh_sgl_desc.cfi_jt(uint16_t *param_1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        iVar2 = 0;
    }
    else {
        uVar1 = *param_1 << 4 | 4;
        iVar2 = kvmalloc_node(uVar1,0xcc0,0xffffffff);
        if (iVar2 == 0) {
            iVar2 = -0xc;
        }
        else {
            memcpy(iVar2,param_1,uVar1);
        }
    }
    return iVar2;
}


// ===== sym.mem_buf_vm_open.3c5cee5da827797dc8cc101f32c847f9.cfi_jt @ 0x08007990 (size 8) =====

ulong sym.mem_buf_vm_open.3c5cee5da827797dc8cc101f32c847f9.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0xd8) = *(param_1 + 0x2b0) + -0x10;
    return 0;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08007998 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mem_buf_vmperm_can_mmap.cfi_jt @ 0x080079a0 (size 8) =====

uint sym.mem_buf_vmperm_can_mmap.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x40);
    if (*(param_1 + 8) != 0) {
        uVar1 = *(param_1 + 4);
        if ((((uVar1 >> 2 & 1) != 0) && (((uVar1 >> 1 & 1) != 0 || ((*(param_2 + 0x50) >> 1 & 1) == 0)))) &&
           (((uVar1 & 1) != 0 || ((*(param_2 + 0x50) >> 2 & 1) == 0)))) {
            uVar2 = 1;
            goto code_r0x08008950;
        }
    }
    uVar2 = 0;
code_r0x08008950:
    mutex_unlock(param_1 + 0x40);
    return uVar2;
}


// ===== sym.mem_buf_map_mem_s2.cfi_jt @ 0x080079a8 (size 8) =====

uint64_t sym.mem_buf_map_mem_s2.cfi_jt(int param_1,uint *param_2,uint32_t *param_3,uint64_t *param_4,uint param_5)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    int16_t *piVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    int64_t *piVar13;
    uint8_t *puVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    ulong *in_x18;
    uint64_t *unaff_x19;
    uint64_t unaff_x20;
    int64_t *piVar19;
    uint64_t uVar20;
    uint unaff_w28;
    ulong unaff_x30;
    ulong uStack_98;
    uint *puStack_90;
    uint *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar20 = 0xffffffea;
    iStack_68 = *(iVar7 + 0x5e0);
    if ((param_3 == NULL) || (unaff_x19 = param_4, param_4 == NULL)) goto code_r0x0800c030;
    unaff_w28 = *param_2;
    piVar10 = *param_4;
    if ((_segment.ehdr == 3) && ((piVar10 == NULL || (*piVar10 != 1)))) {
        uVar9 = 0x82;
    }
    else {
        uVar9 = 0x92;
    }
    unaff_x20 = gh_rm_mem_accept(unaff_w28,0,param_1,uVar9,0,param_3,piVar10,0,0);
    if (0xfffffffffffff000 < unaff_x20) {
        _printk(0x800606a,"mem_buf_map_mem_s2",unaff_x20);
        uVar20 = unaff_x20 & 0xffffffff;
        goto code_r0x0800c030;
    }
    if (param_1 == 0) {
        *param_2 = 0xffffffff;
    }
    uStack_98 = CONCAT44(uStack_98._4_4_,param_5);
    uVar6 = sym.dup_gh_sgl_desc_to_sgt(unaff_x20);
    if (uVar6 < 0xfffffffffffff001) {
        uVar1 = *param_3;
        uVar20 = uVar1;
        iVar7 = __kmalloc(uVar20 << 2,0xcc0);
        if (iVar7 == 0) {
            uVar20 = 0xfffffff4;
        }
        else {
            iVar8 = __kmalloc(uVar20 << 2,0xcc0);
            if (iVar8 == 0) {
                uVar20 = 0xfffffff4;
            }
            else {
                if (uVar1 != 0) {
                    if (uVar1 == 1) {
                        uVar11 = 0;
                    }
                    else {
                        uVar11 = uVar20 & 0xfffffffe;
                        puVar12 = iVar8 + 4;
                        puVar17 = iVar7 + 4;
                        puVar14 = param_3 + 10;
                        uVar18 = uVar11;
                        do {
                            uVar18 = uVar18 - 2;
                            uVar4 = *(puVar14 + -2);
                            uVar3 = puVar14[-4];
                            uVar2 = *puVar14;
                            puVar17[-1] = *(puVar14 + -6);
                            *puVar17 = uVar4;
                            puVar17 = puVar17 + 2;
                            puVar12[-1] = uVar3;
                            *puVar12 = uVar2;
                            puVar12 = puVar12 + 2;
                            puVar14 = puVar14 + 8;
                        } while (uVar18 != 0);
                        if (uVar11 == uVar20) goto code_r0x0800bfdc;
                    }
                    iVar16 = uVar11 * 4;
                    iVar15 = uVar20 - uVar11;
                    puVar12 = iVar8 + iVar16;
                    puVar14 = param_3 + iVar16 + 6;
                    puVar17 = iVar7 + iVar16;
                    do {
                        iVar15 = iVar15 + -1;
                        uVar2 = *puVar14;
                        *puVar17 = *(puVar14 + -2);
                        *puVar12 = uVar2;
                        puVar12 = puVar12 + 1;
                        puVar14 = puVar14 + 4;
                        puVar17 = puVar17 + 1;
                    } while (iVar15 != 0);
                }
code_r0x0800bfdc:
                uVar20 = sym.mem_buf_hyp_assign_table(uVar6,&uStack_98);
                uVar20 = uVar20 & 0xffffffff;
                kfree(iVar7);
                iVar7 = iVar8;
            }
            kfree(iVar7);
        }
        sg_free_table(uVar6);
        kfree(uVar6);
        iVar5 = uVar20;
    }
    else {
        uVar20 = uVar6 & 0xffffffff;
        iVar5 = uVar6;
    }
    if (iVar5 == 0) goto code_r0x0800c028;
    if (param_1 == 0) {
        puStack_90 = &uStack_6c;
        puStack_88 = &uStack_70;
        uStack_78 = 0;
        uStack_70 = 7;
        uStack_98 = 1;
        uStack_80 = 0;
        uStack_6c = param_5;
        uVar6 = sym.dup_gh_sgl_desc_to_sgt(unaff_x20);
        if (uVar6 < 0xfffffffffffff001) {
            iVar5 = sym.mem_buf_assign_mem_gunyah(0,uVar6,&uStack_98);
            if (iVar5 == 0) {
                *param_2 = uStack_80;
            }
            sg_free_table(uVar6);
            kfree(uVar6);
        }
        else {
            iVar5 = uVar6;
        }
    }
    else {
        iVar5 = gh_rm_mem_release(unaff_w28,0);
        if (iVar5 < 0) {
            _printk(0x800643f,"mem_buf_unmap_mem_s2",unaff_w28,iVar5);
            iVar5 = 1;
        }
    }
    if (unaff_x20 != *param_4) {
        kvfree(unaff_x20);
    }
    if (iVar5 != 0) {
        _printk(0x80060ff,"mem_buf_map_mem_s2");
        uVar20 = 0xffffff9d;
    }
code_r0x0800c030:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        iVar7 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar7 = sp_el0;
            *(iVar7 + 0x10) = *(iVar7 + 0x10) + 1;
            piVar19 = *0x800d6d8;
            piVar13 = *0x800d6d8;
            while (piVar13 != NULL) {
                (**piVar19)(piVar19[1],unaff_w28,unaff_x20);
                piVar19 = piVar19 + 3;
                piVar13 = *piVar19;
            }
            iVar8 = *(iVar7 + 0x10) + -1;
            *(iVar7 + 0x10) = iVar8;
            if ((iVar8 == 0) || (*(iVar7 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x0800c028:
        uVar20 = 0;
        *unaff_x19 = unaff_x20;
    }
    return uVar20;
}


// ===== sym.mem_buf_dma_buf_set_destructor.cfi_jt @ 0x080079b0 (size 8) =====

uint64_t sym.mem_buf_dma_buf_set_destructor.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar2 = *(*(param_1 + 0x20) + -0x10);
        if (pcVar2 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar2,0x8005bd0);
        }
        uVar1 = (*pcVar2)(param_1);
        if (uVar1 < 0xfffffffffffff001) {
            *(uVar1 + 0x70) = param_2;
            *(uVar1 + 0x78) = param_3;
            uVar1 = 0;
        }
    }
    else {
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.__traceiter_lookup_sgl.cfi_jt @ 0x080079b8 (size 8) =====

ulong sym.__traceiter_lookup_sgl.cfi_jt(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d690;
    piVar1 = *0x800d690;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.mem_buf_assign_mem.cfi_jt @ 0x080079c0 (size 8) =====

uint32_t * sym.mem_buf_assign_mem.cfi_jt(uint64_t param_1,uint32_t *param_2,uint32_t *param_3,int64_t param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    char extraout_w0;
    int64_t iVar6;
    int *piVar7;
    char *pcVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *unaff_x20;
    uint32_t *unaff_x21;
    uint64_t unaff_x22;
    uint32_t *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_a0;
    int iStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_80;
    uint64_t uStack_70;
    uint32_t *puStack_68;
    uint32_t *puStack_60;
    uint32_t *puStack_58;
    uint uStack_50;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uStack_50 = 7;
    iStack_4c = _segment.ehdr;
    if ((((param_2 == NULL) || (unaff_x21 = param_3, *param_3 == 0)) || (param_4 = *(param_3 + 2), param_4 == 0)) ||
       (*(param_3 + 4) == 0)) {
        uVar4 = param_4;
        puStack_58 = 0xffffffea;
        puVar9 = param_3;
    }
    else {
        unaff_x22 = param_1 & 0xffffffff;
        unaff_x20 = param_2;
        if (_segment.ehdr == 3) {
            puVar9 = 0x1;
            uVar2 = hyp_assign_table(param_2,&iStack_4c);
            uVar4 = param_4;
            puStack_58 = uVar2;
            if (uVar2 < 0) {
                puVar9 = puStack_58;
                _printk(0x8005ff8,"Assign");
            }
            else if (uVar2 == 0) goto code_r0x08007cec;
        }
        else {
code_r0x08007cec:
            uVar4 = param_4;
            puVar9 = param_3;
            uVar2 = sym.mem_buf_assign_mem_gunyah(unaff_x22,param_2,param_3);
            puStack_58 = uVar2;
            if ((uVar2 != 0) && (_segment.ehdr == 3)) {
                uVar4 = &iStack_4c;
                puVar9 = *param_3;
                uVar2 = **(param_3 + 2);
                uVar3 = hyp_assign_table(param_2);
                unaff_x21 = uVar2;
                if (uVar3 < 0) {
                    unaff_x20 = uVar3;
                    pcVar8 = "Assign";
                    if (uVar2 != 3) {
                        pcVar8 = "Unassign";
                    }
                    puVar9 = unaff_x20;
                    _printk(0x8005ff8,pcVar8);
                    _printk(0x8006097,unaff_x20);
                    puStack_58 = 0xffffff9d;
                }
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return puStack_58;
    }
    auVar11 = __stack_chk_fail();
    piVar7 = auVar11._8_8_;
    *extraout_x18 = sym.mem_buf_unassign_mem;
    pcStack_88 = sym.mem_buf_unassign_mem;
    uStack_80 = 0x8000000;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    puVar10 = 0xffffffea;
    uStack_a0 = 7;
    iStack_9c = _segment.ehdr;
    puStack_90 = &stack0xffffffffffffffc0;
    uStack_70 = unaff_x22;
    puStack_68 = unaff_x21;
    puStack_60 = unaff_x20;
    if (((auVar11._0_8_ != 0) && (piVar7 != NULL)) && (puVar9 != 0)) {
        if (uVar4 != 0xffffffff) {
            uVar4 = sym.mem_buf_unassign_mem_gunyah(uVar4);
            puVar10 = uVar4;
            if (uVar4 != 0) goto code_r0x08007ea8;
        }
        if (_segment.ehdr == 3) {
            iVar5 = *piVar7;
            uVar4 = hyp_assign_table(auVar11._0_8_,piVar7,puVar9 & 0xffffffff,&iStack_9c,&uStack_a0,1);
            puVar10 = uVar4;
            if (uVar4 < 0) {
                pcVar8 = "Assign";
                if (iVar5 != 3) {
                    pcVar8 = "Unassign";
                }
                _printk(0x8005ff8,pcVar8,puVar10);
            }
        }
        else {
            puVar10 = NULL;
        }
    }
code_r0x08007ea8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return puVar10;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.mem_buf_probe;
    iVar1 = iVar6 + 0x10;
    iVar5 = of_property_match_string(*(iVar6 + 0x300),"qcom,mem-buf-capabilities","supplier");
    if (iVar5 < 0) {
        iVar5 = of_property_match_string(*(iVar6 + 0x300),"qcom,mem-buf-capabilities","consumer");
        if (iVar5 < 0) {
            of_property_match_string(*(iVar6 + 0x300),"qcom,mem-buf-capabilities","dual");
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = (extraout_w0 >> 7 ^ 0xffU) & 3;
        }
        else {
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x2;
        }
    }
    else {
        reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x1;
    }
    uVar4 = dma_set_mask(iVar1,0xffffffffffffffff);
    if (uVar4 == 0) {
        dma_set_coherent_mask(iVar1,0xffffffffffffffff);
        uVar4 = sym.mem_buf_vm_init(iVar1);
        if (uVar4 == 0) {
            _segment.ehdr = iVar1;
            return NULL;
        }
        pcVar8 = "mem_buf_vm_init failed %d\n";
    }
    else {
        pcVar8 = "Unable to set dma mask: %d\n";
    }
    _dev_err(iVar1,pcVar8,uVar4);
    return uVar4;
}


// ===== sym.mem_buf_vm_devnode.3c5cee5da827797dc8cc101f32c847f9.cfi_jt @ 0x080079c8 (size 8) =====

void sym.mem_buf_vm_devnode.3c5cee5da827797dc8cc101f32c847f9.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1[0xe];
    if (iVar1 == 0) {
        iVar1 = *param_1;
    }
    kasprintf(0xcc0,"mem_buf_vm/%s",iVar1);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080079d0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.mem_buf_probe.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.mem_buf_current_vmid.cfi_jt @ 0x080079d8 (size 8) =====

uint sym.mem_buf_current_vmid.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.mem_buf_dma_buf_copy_vmperm.cfi_jt @ 0x080079e0 (size 8) =====

uint64_t sym.mem_buf_dma_buf_copy_vmperm.cfi_jt(int64_t param_1,int64_t *param_2,int64_t *param_3,uint *param_4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar4 = *(*(param_1 + 0x20) + -0x10);
        if (pcVar4 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar4,0x8005bd0);
        }
        uVar3 = (*pcVar4)(param_1);
        if (uVar3 < 0xfffffffffffff001) {
            iVar1 = uVar3 + 0x40;
            mutex_lock(iVar1);
            iVar5 = *(uVar3 + 0x20) << 2;
            iVar2 = kmemdup(*(uVar3 + 0x10),iVar5,0xcc0);
            if (iVar2 != 0) {
                iVar5 = kmemdup(*(uVar3 + 0x18),iVar5,0xcc0);
                if (iVar5 != 0) {
                    *param_2 = iVar2;
                    *param_3 = iVar5;
                    *param_4 = *(uVar3 + 0x20);
                    mutex_unlock(iVar1);
                    uVar3 = 0;
                    goto code_r0x08009190;
                }
                kfree(iVar2);
            }
            mutex_unlock(iVar1);
            uVar3 = 0xfffffff4;
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
code_r0x08009190:
    return uVar3 & 0xffffffff;
}


// ===== sym.mem_buf_dma_buf_exclusive_owner.cfi_jt @ 0x080079e8 (size 8) =====

bool sym.mem_buf_dma_buf_exclusive_owner.cfi_jt(int64_t param_1)

{
    int iVar1;
    code *pcVar2;
    int *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar2 = *(*(param_1 + 0x20) + -0x10);
        if (pcVar2 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar2,0x8005bd0);
        }
        piVar3 = (*pcVar2)(param_1);
        if (piVar3 < 0xfffffffffffff001) {
            mutex_lock(piVar3 + 0x10);
            iVar1 = *piVar3;
            mutex_unlock(piVar3 + 0x10);
            return iVar1 == 0;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8009018);
    (*pcVar2)();
}


// ===== sym.mem_buf_vmperm_release.cfi_jt @ 0x080079f0 (size 8) =====

uint64_t sym.mem_buf_vmperm_release.cfi_jt(uint32_t *param_1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(param_1 + 0x1c);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x641d19c7be126e92,pcVar3,0x8005b90);
        uVar1 = (*pcVar3)(*(param_1 + 0x1e));
        uVar4 = uVar1 & 0xffffffff;
        if (uVar1 != 0) goto code_r0x080083c8;
    }
    mutex_lock(param_1 + 0x10);
    if ((*param_1 >> 1 & 1) == 0) {
        if ((*param_1 >> 2 & 1) == 0) {
            uVar4 = 0;
        }
        else {
            uVar1 = sym.mem_buf_sgt_to_gh_sgl_desc(*(param_1 + 0xc));
            if (uVar1 < 0xfffffffffffff001) {
                uVar2 = sym.mem_buf_unmap_mem_s1(uVar1);
                uVar4 = uVar2 & 0xffffffff;
                kvfree(uVar1);
                if (uVar2 == 0) {
                    uVar4 = sym.mem_buf_unmap_mem_s2(param_1[0xe]);
                    goto code_r0x080083bc;
                }
            }
            else {
                uVar4 = uVar1 & 0xffffffff;
            }
        }
    }
    else {
        uVar4 = sym.__mem_buf_vmperm_reclaim(param_1);
code_r0x080083bc:
        uVar4 = uVar4 & 0xffffffff;
    }
    mutex_unlock(param_1 + 0x10);
code_r0x080083c8:
    kfree(*(param_1 + 6));
    kfree(*(param_1 + 4));
    kfree(param_1);
    return uVar4;
}


// ===== sym.mem_buf_probe.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt @ 0x080079f8 (size 8) =====

int sym.mem_buf_probe.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    int iVar1;
    char extraout_w0;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + 0x10;
    iVar1 = of_property_match_string(*(param_1 + 0x300),"qcom,mem-buf-capabilities","supplier");
    if (iVar1 < 0) {
        iVar1 = of_property_match_string(*(param_1 + 0x300),"qcom,mem-buf-capabilities","consumer");
        if (iVar1 < 0) {
            of_property_match_string(*(param_1 + 0x300),"qcom,mem-buf-capabilities","dual");
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = (extraout_w0 >> 7 ^ 0xffU) & 3;
        }
        else {
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x2;
        }
    }
    else {
        reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x1;
    }
    iVar1 = dma_set_mask(arg1,0xffffffffffffffff);
    if (iVar1 == 0) {
        dma_set_coherent_mask(arg1,0xffffffffffffffff);
        iVar1 = sym.mem_buf_vm_init(arg1);
        if (iVar1 == 0) {
            _segment.ehdr = arg1;
            return 0;
        }
        pcVar2 = "mem_buf_vm_init failed %d\n";
    }
    else {
        pcVar2 = "Unable to set dma mask: %d\n";
    }
    _dev_err(arg1,pcVar2,iVar1);
    return iVar1;
}


// ===== sym.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt @ 0x08007a00 (size 8) =====

ulong sym.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt(void)

{
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.__traceiter_send_alloc_req.cfi_jt @ 0x08007a08 (size 8) =====

ulong sym.__traceiter_send_alloc_req.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d450;
    piVar1 = *0x800d450;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_receive_alloc_req.cfi_jt @ 0x08007a10 (size 8) =====

ulong sym.__traceiter_receive_alloc_req.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d498;
    piVar1 = *0x800d498;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.mem_buf_vmperm_can_vmap.cfi_jt @ 0x08007a18 (size 8) =====

bool sym.mem_buf_vmperm_can_vmap.cfi_jt(int64_t param_1)

{
    bool bVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x40);
    if ((~*(param_1 + 4) & 6) == 0) {
        bVar1 = *(param_1 + 8) != 0;
    }
    else {
        bVar1 = false;
    }
    mutex_unlock(param_1 + 0x40);
    return bVar1;
}


// ===== sym.mem_buf_vmperm_can_cmo.cfi_jt @ 0x08007a20 (size 8) =====

bool sym.mem_buf_vmperm_can_cmo.cfi_jt(int64_t param_1)

{
    bool bVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x40);
    if ((~*(param_1 + 4) & 6) == 0) {
        bVar1 = *(param_1 + 8) != 0;
    }
    else {
        bVar1 = false;
    }
    mutex_unlock(param_1 + 0x40);
    return bVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08007a28 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mem_buf_vm_exit();
    platform_driver_unregister(reloc.mem_buf_probe.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt);
    return;
}


// ===== sym.__traceiter_send_alloc_resp_msg.cfi_jt @ 0x08007a30 (size 8) =====

ulong sym.__traceiter_send_alloc_resp_msg.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d570;
    piVar1 = *0x800d570;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_receive_alloc_resp_msg.cfi_jt @ 0x08007a38 (size 8) =====

ulong sym.__traceiter_receive_alloc_resp_msg.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d5b8;
    piVar1 = *0x800d5b8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.mem_buf_vmperm_alloc.cfi_jt @ 0x08007a40 (size 8) =====

uint64_t sym.mem_buf_vmperm_alloc.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t *arg1;
    uint64_t arg1_00;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong unaff_x30;
    uint uStack_20;
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_20 = 7;
    uStack_1c = _segment.ehdr;
    uVar3 = sym.mem_buf_vmperm_alloc_flags(param_1,0,&uStack_1c,&uStack_20);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    arg1 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_vmperm_release;
    pcVar4 = *(arg1 + 0x1c);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0x641d19c7be126e92,pcVar4,0x8005b90);
        uVar2 = (*pcVar4)(*(arg1 + 0x1e));
        uVar3 = uVar2;
        if (uVar2 != 0) goto code_r0x080083c8;
    }
    mutex_lock(arg1 + 0x10);
    if ((*arg1 >> 1 & 1) == 0) {
        if ((*arg1 >> 2 & 1) == 0) {
            uVar3 = 0;
        }
        else {
            arg1_00 = sym.mem_buf_sgt_to_gh_sgl_desc(*(arg1 + 0xc));
            if (arg1_00 < 0xfffffffffffff001) {
                uVar2 = sym.mem_buf_unmap_mem_s1(arg1_00);
                uVar3 = uVar2;
                kvfree(arg1_00);
                if (uVar2 == 0) {
                    uVar3 = sym.mem_buf_unmap_mem_s2(arg1[0xe]);
                    goto code_r0x080083bc;
                }
            }
            else {
                uVar3 = arg1_00 & 0xffffffff;
            }
        }
    }
    else {
        uVar3 = sym.__mem_buf_vmperm_reclaim(arg1);
code_r0x080083bc:
        uVar3 = uVar3 & 0xffffffff;
    }
    mutex_unlock(arg1 + 0x10);
code_r0x080083c8:
    kfree(*(arg1 + 6));
    kfree(*(arg1 + 4));
    kfree(arg1);
    return uVar3;
}


// ===== sym.mem_buf_vm_uses_gunyah.cfi_jt @ 0x08007a48 (size 8) =====

uint64_t sym.mem_buf_vm_uses_gunyah.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != 0) {
        iVar4 = 0;
        do {
            iVar2 = xa_load(obj.mem_buf_vms,*(param_1 + iVar4 * 4));
            if (iVar2 == 0) {
                iVar1 = ___ratelimit(obj.mem_buf_vm_uses_gunyah._rs,"mem_buf_vm_uses_gunyah");
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                _printk(0x800641b,*(param_1 + iVar4 * 4));
                return 0xffffffea;
            }
            if ((*(iVar2 + 0xc) >> 1 & 1) != 0) {
                return 1;
            }
            iVar4 = iVar4 + 1;
        } while (param_2 != iVar4);
    }
    iVar2 = xa_load(obj.mem_buf_vms,_segment.ehdr);
    if (iVar2 == 0) {
        uVar3 = ___ratelimit(obj.mem_buf_vm_uses_gunyah._rs.1,"mem_buf_vm_uses_gunyah");
        if (uVar3 != 0) {
            _printk(0x800641b,_segment.ehdr);
            uVar3 = 0;
        }
    }
    else {
        uVar3 = *(iVar2 + 0xc) >> 1 & 1;
    }
    return uVar3;
}


// ===== sym.__traceiter_mem_buf_alloc_info.cfi_jt @ 0x08007a50 (size 8) =====

ulong sym.__traceiter_mem_buf_alloc_info.cfi_jt(ulong param_1,ulong param_2,uint param_3,uint param_4,ulong param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d408;
    piVar1 = *0x800d408;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.mem_buf_get_sgl_buf_size.cfi_jt @ 0x08007a58 (size 8) =====

int64_t sym.mem_buf_get_sgl_buf_size.cfi_jt(uint16_t *param_1)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint16_t *puVar6;
    uint64_t uVar7;
    
    uVar1 = *param_1;
    uVar3 = uVar1;
    if (uVar1 == 0) {
        iVar2 = 0;
    }
    else {
        if (uVar1 == 1) {
            uVar5 = 0;
            iVar2 = 0;
        }
        else {
            uVar5 = uVar3 & 0xfffe;
            iVar4 = 0;
            iVar2 = 0;
            puVar6 = param_1 + 0xe;
            uVar7 = uVar5;
            do {
                uVar7 = uVar7 - 2;
                iVar4 = *(puVar6 + -8) + iVar4;
                iVar2 = *puVar6 + iVar2;
                puVar6 = puVar6 + 0x10;
            } while (uVar7 != 0);
            iVar2 = iVar2 + iVar4;
            if (uVar5 == uVar3) {
                return iVar2;
            }
        }
        iVar4 = uVar3 - uVar5;
        puVar6 = param_1 + uVar5 * 8 + 6;
        do {
            iVar4 = iVar4 + -1;
            iVar2 = *puVar6 + iVar2;
            puVar6 = puVar6 + 8;
        } while (iVar4 != 0);
    }
    return iVar2;
}


// ===== sym.trace_event_raw_event_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007a60 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,uint *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong uVar8;
    uint16_t *puVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint16_t *puVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x22;
    int64_t *piVar24;
    int64_t unaff_x23;
    code *pcVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auVar29 [12];
    uchar auStack_3a0 [12];
    uint32_t uStack_394;
    int64_t iStack_390;
    int64_t iStack_388;
    ulong ***pppuStack_380;
    code *pcStack_378;
    code *pcStack_370;
    code *pcStack_360;
    int64_t *piStack_358;
    int64_t *piStack_350;
    int64_t iStack_348;
    uint64_t uStack_340;
    uint32_t *puStack_338;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    int64_t iStack_2f8;
    ulong ***pppuStack_2f0;
    ulong uStack_2e8;
    int64_t *piStack_2e0;
    uint16_t *puStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uchar auStack_2b0 [12];
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong ***pppuStack_290;
    code *pcStack_288;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    int64_t iStack_208;
    ulong ***pppuStack_200;
    ulong uStack_1f8;
    code *pcStack_1f0;
    int64_t iStack_1e8;
    uint64_t uStack_1e0;
    int64_t *piStack_1d8;
    uint *puStack_1d0;
    uint64_t uStack_1c8;
    uchar auStack_1c0 [12];
    uint32_t uStack_1b4;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    uchar ***pppuStack_1a0;
    code *pcStack_198;
    ulong uStack_190;
    code *pcStack_180;
    int64_t iStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [16];
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    int64_t *piStack_100;
    uint *puStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    uint *puVar9;
    uint *puVar10;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar21 = *(param_1 + 0x48);
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) == 0))))
        goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        if (param_2[1] < 4) {
            pcVar6 = *(param_2[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        param_3 = iVar4 + 1 + 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = (iVar4 + 1) * 0x10000 | 0x18;
            *(iVar7 + 8) = *param_2;
            if (param_2[1] < 4) {
                pcVar6 = *(param_2[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar6);
            *(iVar7 + 0x10) = param_2[3];
            *(iVar7 + 0x14) = param_2[4];
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar9 = auVar26._8_8_;
    uVar5 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_alloc_resp_class;
    pcStack_b8 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    uVar8 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_d4;
        unaff_x22 = (uVar8 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_d0);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800ad34;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar8 * 0x10000 + 0x10018;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar6);
            param_3 = uStack_d4;
            *(iVar7 + 0x10) = puVar9[3];
            *(iVar7 + 0x14) = puVar9[4];
            param_4 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar5,1,iStack_d0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar10 = auVar27._8_8_;
    iVar18 = auVar27._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_00 = 0x800aee4;
    uStack_108 = 0x800aee4;
    iVar7 = sp_el0;
    iStack_118 = *(iVar7 + 0x5e0);
    uVar22 = *(iVar18 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar21 = uVar22;
    ppuStack_110 = &puStack_c0;
    piStack_100 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_f0 = puVar9;
            uStack_e8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar26._8_8_ = puStack_f0;
            auVar26._0_8_ = uStack_e8;
        }
        puStack_f0 = auVar26._8_8_;
        uStack_e8 = auVar26._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar26._8_8_ = puStack_f0, auVar26._0_8_ = uStack_e8,
            (uVar5 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_f0 = auVar26._8_8_;
        uStack_e8 = auVar26._0_8_;
        if (puVar10[1] < 4) {
            pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        uVar21 = iVar4 + 1;
        uVar22 = uVar21;
        param_3 = uVar21 + 0x10;
        iVar7 = trace_event_buffer_reserve(&uStack_148,iVar18);
        auVar26._8_8_ = puStack_f0;
        auVar26._0_8_ = uStack_e8;
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = uVar21 * 0x10000 | 0x10;
            *(iVar7 + 8) = *puVar10;
            if (puVar10[1] < 4) {
                pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            trace_event_buffer_commit(&uStack_148);
            auVar26._8_8_ = puStack_f0;
            auVar26._0_8_ = uStack_e8;
        }
    }
    puStack_f0 = auVar26._8_8_;
    uStack_e8 = auVar26._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_118) {
        return;
    }
    auVar28 = __stack_chk_fail();
    puVar9 = auVar28._8_8_;
    uVar5 = auVar28._0_8_;
    *extraout_x18_01 = sym.perf_trace_relinquish_resp_class;
    pcStack_198 = sym.perf_trace_relinquish_resp_class;
    pcStack_180 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    pcVar25 = sym.perf_trace_relinquish_resp_class;
    iStack_1a8 = *(iVar7 + 0x5e0);
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    pppuStack_1a0 = &ppuStack_110;
    uStack_190 = uVar8;
    iStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    uStack_168 = uVar22;
    auStack_160 = auVar27;
    iVar4 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_1b4;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_1b0);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_1b0 + 0xe8) = &pppuStack_1a0;
            *(iStack_1b0 + 0xf8) = auStack_1c0;
            *(iStack_1b0 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800b020;
            *(iStack_1b0 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            param_3 = uStack_1b4;
            param_4 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar5,1,iStack_1b0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar11 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_02 = 0x800b1c0;
    uStack_1f8 = 0x800b1c0;
    pcStack_1f0 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_208 = *(iVar7 + 0x5e0);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uVar21 = *(iVar18 + 0x48);
    uVar22 = param_4;
    pppuStack_200 = &pppuStack_1a0;
    iStack_1e8 = unaff_x23;
    uStack_1e0 = unaff_x22;
    piStack_1d8 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar12 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar22 = 0;
            puStack_1d0 = puVar9;
            uStack_1c8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar28._8_8_ = puStack_1d0;
            auVar28._0_8_ = uStack_1c8;
        }
        puStack_1d0 = auVar28._8_8_;
        uStack_1c8 = auVar28._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar28._8_8_ = puStack_1d0, auVar28._0_8_ = uStack_1c8,
            (uVar5 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_1d0 = auVar28._8_8_;
        uStack_1c8 = auVar28._0_8_;
        uVar2 = *puVar11;
        pcVar25 = uVar2;
        puVar12 = pcVar25 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_238,iVar18);
        auVar28._8_8_ = puStack_1d0;
        auVar28._0_8_ = uStack_1c8;
        if (iVar7 != 0) {
            uVar21 = uVar2 << 0x13;
            uVar5 = pcVar25 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar21 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar21;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar14 = 0;
                puVar16 = puVar11 + 6;
                do {
                    iVar18 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar14 < *puVar11);
            }
            *(iVar7 + 0x14) = param_3;
            *(iVar7 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_238);
            auVar28._8_8_ = puStack_1d0;
            auVar28._0_8_ = uStack_1c8;
        }
    }
    puStack_1d0 = auVar28._8_8_;
    uStack_1c8 = auVar28._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_208) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar11 = auVar27._8_8_;
    uVar14 = auVar27._0_8_;
    *extraout_x18_03 = sym.perf_trace_lookup_sgl;
    pcStack_288 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_298 = *(iVar7 + 0x5e0);
    uVar20 = uVar22 & 0xffffffff;
    uVar23 = puVar12 & 0xffffffff;
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    uVar2 = *puVar11;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    uVar5 = uVar22;
    pppuStack_290 = &pppuStack_200;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_2a4;
        pcVar25 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar25,&iStack_2a0);
        if (iVar7 != 0) {
            uVar15 = _hyp_assign_table & 0x3f;
            *(iStack_2a0 + 0xe8) = &pppuStack_290;
            *(iStack_2a0 + 0xf8) = auStack_2b0;
            uVar5 = uVar2 * 8 + 0x1c;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar15) & 0x800b30c;
            *(iStack_2a0 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar15 = 0;
                puVar16 = puVar11 + 6;
                do {
                    iVar18 = uVar15 * 8;
                    uVar15 = uVar15 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar15 < *puVar11);
            }
            puVar13 = uStack_2a4;
            *(iVar7 + 0x14) = puVar12;
            *(iVar7 + 0x18) = uVar22;
            uVar5 = uVar14;
            perf_trace_run_bpf_submit(iVar7,pcVar25,puVar13,uVar14,1,iStack_2a0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_298) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar18 = auVar26._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x800b4ac;
    uStack_2e8 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_2f8 = *(iVar7 + 0x5e0);
    uVar22 = auVar26._8_8_ & 0xffffffff;
    piVar24 = *(iVar18 + 0x48);
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uVar21 = piVar24;
    pppuStack_2f0 = &pppuStack_290;
    piStack_2e0 = piVar1;
    uStack_2c8 = uVar23;
    uStack_2c0 = uVar20;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar5 = 0;
            puStack_2d0 = puVar11;
            uStack_2b8 = uVar14;
            event_triggers_call(iVar18,0,0,0);
            auVar27._8_8_ = puStack_2d0;
            auVar27._0_8_ = uStack_2b8;
        }
        puStack_2d0 = auVar27._8_8_;
        uStack_2b8 = auVar27._0_8_;
        piStack_358 = piVar1;
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 &&
            (uVar14 = trace_event_ignore_this_pid(iVar18), auVar27._8_8_ = puStack_2d0, auVar27._0_8_ = uStack_2b8,
            (uVar14 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_2d0 = auVar27._8_8_;
    uStack_2b8 = auVar27._0_8_;
    uVar21 = *puVar13;
    piVar24 = uVar21;
    puVar12 = piVar24 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_328,iVar18);
    auVar27._8_8_ = puStack_2d0;
    auVar27._0_8_ = uStack_2b8;
    piStack_358 = piVar24;
    if (iVar7 != 0) {
        uVar21 = uVar21 << 0x13;
        uVar14 = piVar24 * 8 + 0x18;
        *(iVar7 + 8) = auVar26._8_4_;
        *(iVar7 + 0x10) = uVar21 | 0x18;
        *(iVar7 + 0x14) = uVar14 | uVar21;
        *(iVar7 + 0xc) = *puVar13;
        if (*puVar13 != 0) {
            uVar20 = 0;
            puVar17 = puVar13 + 3;
            do {
                iVar19 = uVar20 * 8;
                uVar20 = uVar20 + 1;
                *(iVar7 + 0x18 + iVar19) = *(puVar17 + -2);
                *(iVar7 + (uVar14 & 0xfff8) + iVar19) = *puVar17;
                puVar17 = puVar17 + 4;
            } while (uVar20 < *puVar13);
        }
        trace_event_buffer_commit(&uStack_328);
        auVar27._8_8_ = puStack_2d0;
        auVar27._0_8_ = uStack_2b8;
    }
code_r0x0800b5bc:
    puStack_2d0 = auVar27._8_8_;
    uStack_2b8 = auVar27._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_2f8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    uVar14 = auVar29._0_8_;
    *extraout_x18_05 = sym.perf_trace_map_mem_s2;
    pcStack_378 = sym.perf_trace_map_mem_s2;
    pcStack_370 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_388 = *(iVar7 + 0x5e0);
    iStack_390 = 0;
    uStack_394 = 0;
    uVar2 = *puVar12;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    pppuStack_380 = &pppuStack_2f0;
    pcStack_360 = pcVar25;
    piStack_350 = piVar24;
    iStack_348 = iVar18;
    uStack_340 = uVar22;
    puStack_338 = puVar13;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_394;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_390,puVar13);
        if (iVar7 != 0) {
            uVar22 = _hyp_assign_table & 0x3f;
            *(iStack_390 + 0xe8) = &pppuStack_380;
            *(iStack_390 + 0xf8) = auStack_3a0;
            uVar5 = uVar2 * 8 + 0x18;
            *(iStack_390 + 0x100) = ~(-1L << uVar22) & 0x800b5f4;
            *(iStack_390 + 0x108) = 5;
            *(iVar7 + 8) = auVar29._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar12;
            if (*puVar12 != 0) {
                uVar22 = 0;
                puVar13 = puVar12 + 3;
                do {
                    iVar18 = uVar22 * 8;
                    uVar22 = uVar22 + 1;
                    *(iVar7 + 0x18 + iVar18) = *(puVar13 + -2);
                    *(iVar7 + (uVar5 & 0xfff8) + iVar18) = *puVar13;
                    puVar13 = puVar13 + 4;
                } while (uVar22 < *puVar12);
            }
            puVar13 = uStack_394;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar13,uVar14,1,iStack_390,piVar1,0);
            uVar5 = uVar14;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_388) {
        auVar26 = __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_06 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_,puVar13 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007a68 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (uint64_t param_1,uint *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint16_t *puVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t unaff_x22;
    int64_t *piVar23;
    int64_t unaff_x23;
    code *pcVar24;
    uint64_t unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [16];
    uchar auVar27 [12];
    uchar auStack_330 [12];
    uint32_t uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    ulong ***pppuStack_310;
    code *pcStack_308;
    code *pcStack_300;
    code *pcStack_2f0;
    int64_t *piStack_2e8;
    int64_t *piStack_2e0;
    int64_t iStack_2d8;
    uint64_t uStack_2d0;
    uint32_t *puStack_2c8;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    ulong uStack_278;
    int64_t *piStack_270;
    uint16_t *puStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uchar auStack_240 [12];
    uint32_t uStack_234;
    int64_t iStack_230;
    int64_t iStack_228;
    ulong ***pppuStack_220;
    code *pcStack_218;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar ***pppuStack_190;
    ulong uStack_188;
    code *pcStack_180;
    int64_t iStack_178;
    uint64_t uStack_170;
    int64_t *piStack_168;
    uint *puStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong uStack_120;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    uint *puStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    uint *puVar9;
    uint16_t *puVar10;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    if (param_2[1] < 4) {
        pcVar5 = *(param_2[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    uVar6 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_64;
        unaff_x22 = (uVar6 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_60);
        uVar8 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar15 = -1L << (uVar8 & 0x3f);
            uVar8 = (~uVar15 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar15 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar8;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar6 * 0x10000 + 0x10018;
            *(iVar7 + 8) = *param_2;
            if (param_2[1] < 4) {
                pcVar5 = *(param_2[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar5);
            param_3 = uStack_64;
            *(iVar7 + 0x10) = param_2[3];
            *(iVar7 + 0x14) = param_2[4];
            param_4 = param_1;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,param_1,1,iStack_60,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar9 = auVar25._8_8_;
    iVar18 = auVar25._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x800aee4;
    uStack_98 = 0x800aee4;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar21 = *(iVar18 + 0x48);
    puStack_a0 = &stack0xffffffffffffffb0;
    piStack_90 = piVar1;
    puStack_80 = param_2;
    uStack_78 = param_1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(iVar18,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(iVar18), (uVar8 & 1) == 0))))
        goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        if (puVar9[1] < 4) {
            pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar5 = "(null)";
        }
        iVar4 = strlen(pcVar5);
        param_3 = iVar4 + 1 + 0x10;
        iVar7 = trace_event_buffer_reserve(&uStack_d8,iVar18);
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = (iVar4 + 1) * 0x10000 | 0x10;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar5);
            trace_event_buffer_commit(&uStack_d8);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar9 = auVar25._8_8_;
    uVar8 = auVar25._0_8_;
    *extraout_x18_00 = sym.perf_trace_relinquish_resp_class;
    pcStack_128 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    pcVar24 = sym.perf_trace_relinquish_resp_class;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_140 = 0;
    uStack_144 = 0;
    if (puVar9[1] < 4) {
        pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    ppuStack_130 = &puStack_a0;
    uStack_120 = uVar6;
    iVar4 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_144;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_140);
        uVar15 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_140 + 0xe8) = &ppuStack_130;
            *(iStack_140 + 0xf8) = auStack_150;
            *(iStack_140 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x800b020;
            *(iStack_140 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar5);
            param_3 = uStack_144;
            param_4 = uVar8;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar8,1,iStack_140,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar10 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_01 = 0x800b1c0;
    uStack_188 = 0x800b1c0;
    pcStack_180 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_198 = *(iVar7 + 0x5e0);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar21 = *(iVar18 + 0x48);
    uVar15 = param_4;
    pppuStack_190 = &ppuStack_130;
    iStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    piStack_168 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar11 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar15 = 0;
            puStack_160 = puVar9;
            uStack_158 = uVar8;
            event_triggers_call(iVar18,0);
            auVar25._8_8_ = puStack_160;
            auVar25._0_8_ = uStack_158;
        }
        puStack_160 = auVar25._8_8_;
        uStack_158 = auVar25._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar8 = trace_event_ignore_this_pid(iVar18), auVar25._8_8_ = puStack_160, auVar25._0_8_ = uStack_158,
            (uVar8 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_160 = auVar25._8_8_;
        uStack_158 = auVar25._0_8_;
        uVar2 = *puVar10;
        pcVar24 = uVar2;
        puVar11 = pcVar24 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_1c8,iVar18);
        auVar25._8_8_ = puStack_160;
        auVar25._0_8_ = uStack_158;
        if (iVar7 != 0) {
            uVar21 = uVar2 << 0x13;
            uVar8 = pcVar24 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar21 | 0x1c;
            *(iVar7 + 0x10) = uVar8 | uVar21;
            *(iVar7 + 8) = *puVar10;
            if (*puVar10 != 0) {
                uVar13 = 0;
                puVar16 = puVar10 + 6;
                do {
                    iVar18 = uVar13 * 8;
                    uVar13 = uVar13 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar8 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar13 < *puVar10);
            }
            *(iVar7 + 0x14) = param_3;
            *(iVar7 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_1c8);
            auVar25._8_8_ = puStack_160;
            auVar25._0_8_ = uStack_158;
        }
    }
    puStack_160 = auVar25._8_8_;
    uStack_158 = auVar25._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_198) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar10 = auVar26._8_8_;
    uVar13 = auVar26._0_8_;
    *extraout_x18_02 = sym.perf_trace_lookup_sgl;
    pcStack_218 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_228 = *(iVar7 + 0x5e0);
    uVar20 = uVar15 & 0xffffffff;
    uVar22 = puVar11 & 0xffffffff;
    iStack_230 = 0;
    uStack_234 = 0;
    uVar2 = *puVar10;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    uVar8 = uVar15;
    pppuStack_220 = &pppuStack_190;
    if ((*(uVar13 + 0x80) != 0) || (puVar12 = puVar11, *piVar1 != 0)) {
        puVar12 = &uStack_234;
        pcVar24 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar24,&iStack_230);
        if (iVar7 != 0) {
            uVar14 = _hyp_assign_table & 0x3f;
            *(iStack_230 + 0xe8) = &pppuStack_220;
            *(iStack_230 + 0xf8) = auStack_240;
            uVar8 = uVar2 * 8 + 0x1c;
            *(iStack_230 + 0x100) = ~(-1L << uVar14) & 0x800b30c;
            *(iStack_230 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar8 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar10;
            if (*puVar10 != 0) {
                uVar14 = 0;
                puVar16 = puVar10 + 6;
                do {
                    iVar18 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar8 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar14 < *puVar10);
            }
            puVar12 = uStack_234;
            *(iVar7 + 0x14) = puVar11;
            *(iVar7 + 0x18) = uVar15;
            uVar8 = uVar13;
            perf_trace_run_bpf_submit(iVar7,pcVar24,puVar12,uVar13,1,iStack_230,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_228) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar18 = auVar25._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x800b4ac;
    uStack_278 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_288 = *(iVar7 + 0x5e0);
    uVar15 = auVar25._8_8_ & 0xffffffff;
    piVar23 = *(iVar18 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar21 = piVar23;
    pppuStack_280 = &pppuStack_220;
    piStack_270 = piVar1;
    uStack_258 = uVar22;
    uStack_250 = uVar20;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar8 = 0;
            puStack_260 = puVar10;
            uStack_248 = uVar13;
            event_triggers_call(iVar18,0,0,0);
            auVar26._8_8_ = puStack_260;
            auVar26._0_8_ = uStack_248;
        }
        puStack_260 = auVar26._8_8_;
        uStack_248 = auVar26._0_8_;
        piStack_2e8 = piVar1;
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 &&
            (uVar13 = trace_event_ignore_this_pid(iVar18), auVar26._8_8_ = puStack_260, auVar26._0_8_ = uStack_248,
            (uVar13 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_260 = auVar26._8_8_;
    uStack_248 = auVar26._0_8_;
    uVar21 = *puVar12;
    piVar23 = uVar21;
    puVar11 = piVar23 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_2b8,iVar18);
    auVar26._8_8_ = puStack_260;
    auVar26._0_8_ = uStack_248;
    piStack_2e8 = piVar23;
    if (iVar7 != 0) {
        uVar21 = uVar21 << 0x13;
        uVar13 = piVar23 * 8 + 0x18;
        *(iVar7 + 8) = auVar25._8_4_;
        *(iVar7 + 0x10) = uVar21 | 0x18;
        *(iVar7 + 0x14) = uVar13 | uVar21;
        *(iVar7 + 0xc) = *puVar12;
        if (*puVar12 != 0) {
            uVar20 = 0;
            puVar17 = puVar12 + 3;
            do {
                iVar19 = uVar20 * 8;
                uVar20 = uVar20 + 1;
                *(iVar7 + 0x18 + iVar19) = *(puVar17 + -2);
                *(iVar7 + (uVar13 & 0xfff8) + iVar19) = *puVar17;
                puVar17 = puVar17 + 4;
            } while (uVar20 < *puVar12);
        }
        trace_event_buffer_commit(&uStack_2b8);
        auVar26._8_8_ = puStack_260;
        auVar26._0_8_ = uStack_248;
    }
code_r0x0800b5bc:
    puStack_260 = auVar26._8_8_;
    uStack_248 = auVar26._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_288) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar13 = auVar27._0_8_;
    *extraout_x18_04 = sym.perf_trace_map_mem_s2;
    pcStack_308 = sym.perf_trace_map_mem_s2;
    pcStack_300 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_318 = *(iVar7 + 0x5e0);
    iStack_320 = 0;
    uStack_324 = 0;
    uVar2 = *puVar11;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    pppuStack_310 = &pppuStack_280;
    pcStack_2f0 = pcVar24;
    piStack_2e0 = piVar23;
    iStack_2d8 = iVar18;
    uStack_2d0 = uVar15;
    puStack_2c8 = puVar12;
    if ((*(uVar13 + 0x80) != 0) || (puVar12 = puVar11, *piVar1 != 0)) {
        puVar12 = &uStack_324;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_320,puVar12);
        if (iVar7 != 0) {
            uVar15 = _hyp_assign_table & 0x3f;
            *(iStack_320 + 0xe8) = &pppuStack_310;
            *(iStack_320 + 0xf8) = auStack_330;
            uVar8 = uVar2 * 8 + 0x18;
            *(iStack_320 + 0x100) = ~(-1L << uVar15) & 0x800b5f4;
            *(iStack_320 + 0x108) = 5;
            *(iVar7 + 8) = auVar27._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar8 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar11;
            if (*puVar11 != 0) {
                uVar15 = 0;
                puVar12 = puVar11 + 3;
                do {
                    iVar18 = uVar15 * 8;
                    uVar15 = uVar15 + 1;
                    *(iVar7 + 0x18 + iVar18) = *(puVar12 + -2);
                    *(iVar7 + (uVar8 & 0xfff8) + iVar18) = *puVar12;
                    puVar12 = puVar12 + 4;
                } while (uVar15 < *puVar11);
            }
            puVar12 = uStack_324;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar12,uVar13,1,iStack_320,piVar1,0);
            uVar8 = uVar13;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_318) {
        auVar25 = __stack_chk_fail();
        uVar6 = tpidr_el2;
        *extraout_x18_05 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar25._0_8_,auVar25._8_8_,puVar12 & 0xffffffff,uVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007a70 (size 8) =====

void sym.__bpf_trace_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.mem_buf_sgt_to_gh_sgl_desc.cfi_jt @ 0x08007a78 (size 8) =====

ushort * sym.mem_buf_sgt_to_gh_sgl_desc.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    ushort *puVar2;
    uint64_t *puVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = kvmalloc_node(*(param_1 + 0xc) << 4 | 4,0xcc0,0xffffffff);
    if (puVar2 == NULL) {
        puVar2 = 0xfffffffffffffff4;
    }
    else {
        *puVar2 = *(param_1 + 0xc);
        if (*(param_1 + 0xc) != 0) {
            uVar4 = 0;
            puVar3 = *param_1;
            do {
                iVar1 = uVar4;
                uVar4 = uVar4 + 1;
                *(puVar2 + iVar1 * 8 + 2) =
                     puVar3[1] + ((*puVar3 & 0x3fffffffffffffc) + (___stack_chk_fail >> 0xc) * 0x40) * 0x40 +
                     0x8000000000;
                *(puVar2 + iVar1 * 8 + 2 + 8) = *(puVar3 + 0xc);
                puVar3 = sg_next();
            } while (uVar4 < *(param_1 + 0xc));
        }
    }
    return puVar2;
}


// ===== sym.mem_buf_vm_device_release.3c5cee5da827797dc8cc101f32c847f9.cfi_jt @ 0x08007a80 (size 8) =====

void sym.mem_buf_vm_device_release.3c5cee5da827797dc8cc101f32c847f9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(param_1 + -0x98);
    return;
}


// ===== sym.mem_buf_share.cfi_jt @ 0x08007a88 (size 8) =====

uint sym.mem_buf_share.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int *piVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *param_2;
    uVar9 = uVar4;
    if (0 < uVar4) {
        piVar8 = *(param_2 + 2);
        do {
            if (*piVar8 == _segment.ehdr) {
                uVar5 = sym.mem_buf_lend_internal(param_1,param_2,2);
                return uVar5;
            }
            uVar9 = uVar9 - 1;
            piVar8 = piVar8 + 1;
        } while (uVar9 != 0);
    }
    uVar1 = uVar4 + 1;
    if (uVar1 >> 0x3e == 0) {
        uVar9 = -(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar1 << 2;
        iVar6 = __kmalloc(uVar9,0xcc0);
        if (iVar6 != 0) {
            iVar7 = __kmalloc(uVar9,0xcc0);
            if (iVar7 != 0) {
                iVar10 = uVar4 * 4;
                memcpy(iVar6,*(param_2 + 2),iVar10);
                memcpy(iVar7,*(param_2 + 4),iVar10);
                uVar4 = *param_2;
                *(iVar6 + iVar10) = _segment.ehdr;
                *(iVar7 + iVar10) = 7;
                uVar2 = *(param_2 + 2);
                uVar3 = *(param_2 + 4);
                *(param_2 + 2) = iVar6;
                *(param_2 + 4) = iVar7;
                *param_2 = uVar4 + 1;
                uVar5 = sym.mem_buf_lend_internal(param_1,param_2,2);
                *(param_2 + 2) = uVar2;
                *(param_2 + 4) = uVar3;
                *param_2 = *param_2 - 1;
                kfree(iVar6);
                kfree(iVar7);
                return uVar5;
            }
            kfree(iVar6);
        }
    }
    return 0xfffffff4;
}


// ===== sym.mem_buf_lend.cfi_jt @ 0x08007a90 (size 8) =====

void sym.mem_buf_lend.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mem_buf_lend_internal(param_1,param_2,1);
    return;
}


// ===== sym.mem_buf_vm_uses_hyp_assign.cfi_jt @ 0x08007a98 (size 8) =====

bool sym.mem_buf_vm_uses_hyp_assign.cfi_jt(void)

{
    return _segment.ehdr == 3;
}


// ===== sym.__traceiter_map_mem_s2.cfi_jt @ 0x08007aa0 (size 8) =====

ulong sym.__traceiter_map_mem_s2.cfi_jt(ulong param_1,uint param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d6d8;
    piVar1 = *0x800d6d8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.mem_buf_map_mem_s1.cfi_jt @ 0x08007aa8 (size 8) =====

int sym.mem_buf_map_mem_s1.cfi_jt(uint16_t *param_1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint16_t *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_1 != 0) {
        uVar7 = 0;
        puVar6 = param_1 + -2;
        do {
            uVar1 = *(puVar6 + 4);
            uVar2 = *(puVar6 + 8);
            uVar3 = tpidr_el1;
            iVar4 = add_memory_subsection(uVar3,0,uVar1,uVar2);
            if (iVar4 != 0) {
                _printk(0x8005e24,"mem_buf_map_mem_s1",uVar1,uVar2,iVar4);
                if (uVar7 == 0) {
                    return iVar4;
                }
                iVar5 = uVar7 + 1;
                do {
                    remove_memory_subsection(*(puVar6 + -4),*puVar6);
                    iVar5 = iVar5 + -1;
                    puVar6 = puVar6 + -8;
                } while (1 < iVar5);
                return iVar4;
            }
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 8;
        } while (uVar7 < *param_1);
    }
    return 0;
}


// ===== sym.mem_buf_unmap_mem_s1.cfi_jt @ 0x08007ab0 (size 8) =====

int sym.mem_buf_unmap_mem_s1.cfi_jt(uint16_t *param_1)

{
    ulong uVar1;
    ulong uVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint16_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_1 == 0) {
        iVar3 = 0;
    }
    else {
        uVar4 = 0;
        puVar5 = param_1 + 6;
        do {
            uVar1 = *(puVar5 + -4);
            uVar2 = *puVar5;
            iVar3 = remove_memory_subsection(uVar1,uVar2);
            if (iVar3 != 0) {
                _printk(0x8005cab,"mem_buf_unmap_mem_s1",uVar1,uVar2,iVar3);
            }
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 8;
        } while (uVar4 < *param_1);
    }
    return iVar3;
}


// ===== sym.mem_buf_vmperm_unpin.cfi_jt @ 0x08007ab8 (size 8) =====

void sym.mem_buf_vmperm_unpin.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x40);
    if (*(param_1 + 8) != 0) {
        *(param_1 + 8) = *(param_1 + 8) + -1;
        mutex_unlock(param_1 + 0x40);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80088a4);
    (*pcVar1)();
}


// ===== sym.mem_buf_vmperm_pin.cfi_jt @ 0x08007ac0 (size 8) =====

void sym.mem_buf_vmperm_pin.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0x40);
    *(param_1 + 8) = *(param_1 + 8) + 1;
    mutex_unlock(param_1 + 0x40);
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08007ac8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mem_buf_reclaim.cfi_jt @ 0x08007ad0 (size 8) =====

uint sym.mem_buf_reclaim.cfi_jt(int64_t param_1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    uint32_t *arg1;
    ulong uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x20) + 8) != sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
code_r0x08008ec4:
        iVar3 = ___ratelimit(obj.mem_buf_reclaim._rs,"mem_buf_reclaim");
        if (iVar3 != 0) {
            _printk(0x8005d81,*(param_1 + 0x20));
        }
        return 0xffffffea;
    }
    pcVar6 = *(*(param_1 + 0x20) + -0x10);
    if (pcVar6 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
        __cfi_slowpath_diag(0x547401c04b8af610,pcVar6,0x8005bd0);
    }
    arg1 = (*pcVar6)(param_1);
    if (0xfffffffffffff000 < arg1) goto code_r0x08008ec4;
    puVar1 = arg1 + 0x10;
    mutex_lock(puVar1);
    uVar2 = *arg1;
    if ((uVar2 & 1) == 0) {
        if ((uVar2 >> 1 & 1) == 0) {
            iVar3 = ___ratelimit(obj.mem_buf_reclaim._rs.4,"mem_buf_reclaim");
            if (iVar3 == 0) goto code_r0x08008f50;
            uVar5 = 0x800631f;
        }
        else {
            if ((uVar2 >> 2 & 1) == 0) {
                uVar4 = sym.__mem_buf_vmperm_reclaim(arg1);
                mutex_unlock(puVar1);
                return uVar4;
            }
            iVar3 = ___ratelimit(obj.mem_buf_reclaim._rs.6,"mem_buf_reclaim");
            if (iVar3 == 0) goto code_r0x08008f50;
            uVar5 = 0x800660f;
        }
    }
    else {
        iVar3 = ___ratelimit(obj.mem_buf_reclaim._rs.2,"mem_buf_reclaim");
        if (iVar3 == 0) goto code_r0x08008f50;
        uVar5 = 0x800666a;
    }
    _printk(uVar5);
code_r0x08008f50:
    mutex_unlock(puVar1);
    return 0xffffffea;
}


// ===== sym.mem_buf_gh_acl_desc_to_vmid_perm_list.cfi_jt @ 0x08007ad8 (size 8) =====

ulong sym.mem_buf_gh_acl_desc_to_vmid_perm_list.cfi_jt(uint32_t *param_1,int64_t *param_2,int64_t *param_3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == NULL) {
        return 0xffffffea;
    }
    if (param_3 == NULL) {
        return 0xffffffea;
    }
    uVar1 = *param_1;
    uVar14 = uVar1;
    iVar5 = __kmalloc(uVar14 << 2,0xcc0);
    if (iVar5 == 0) {
        return 0xfffffff4;
    }
    iVar6 = __kmalloc(uVar14 << 2,0xcc0);
    if (iVar6 != 0) {
        *param_2 = iVar5;
        *param_3 = iVar6;
        if (uVar1 == 0) {
            return 0;
        }
        if (uVar1 == 1) {
            uVar7 = 0;
        }
        else {
            uVar7 = uVar14 & 0xfffffffe;
            puVar8 = iVar6 + 4;
            puVar12 = iVar5 + 4;
            puVar9 = param_1 + 10;
            uVar13 = uVar7;
            do {
                uVar13 = uVar13 - 2;
                uVar4 = *(puVar9 + -2);
                uVar3 = puVar9[-4];
                uVar2 = *puVar9;
                puVar12[-1] = *(puVar9 + -6);
                *puVar12 = uVar4;
                puVar12 = puVar12 + 2;
                puVar8[-1] = uVar3;
                *puVar8 = uVar2;
                puVar8 = puVar8 + 2;
                puVar9 = puVar9 + 8;
            } while (uVar13 != 0);
            if (uVar7 == uVar14) {
                return 0;
            }
        }
        iVar11 = uVar7 * 4;
        iVar10 = uVar14 - uVar7;
        puVar8 = iVar6 + iVar11;
        puVar9 = param_1 + iVar11 + 6;
        puVar12 = iVar5 + iVar11;
        do {
            iVar10 = iVar10 + -1;
            uVar2 = *puVar9;
            *puVar12 = *(puVar9 + -2);
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 4;
            puVar12 = puVar12 + 1;
        } while (iVar10 != 0);
        return 0;
    }
    kfree(iVar5);
    return 0xfffffff4;
}


// ===== sym.__bpf_trace_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007ae0 (size 8) =====

void sym.__bpf_trace_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.trace_event_raw_event_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007ae8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800a7c4)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,uint *param_2,uint32_t *param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    ulong uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    char *pcVar14;
    uint16_t *puVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uchar *puVar23;
    uint16_t *puVar24;
    uint32_t *puVar25;
    int64_t iVar26;
    int64_t iVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    uint64_t uVar28;
    uint32_t uVar29;
    char *pcVar30;
    uint64_t uVar31;
    char *unaff_x22;
    int64_t *piVar32;
    uint64_t unaff_x23;
    code *pcVar33;
    ulong unaff_x30;
    uchar auVar34 [16];
    uchar auVar35 [16];
    uchar auVar36 [16];
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [12];
    uchar auStack_5a0 [12];
    uint32_t uStack_594;
    int64_t iStack_590;
    int64_t iStack_588;
    ulong ***pppuStack_580;
    code *pcStack_578;
    code *pcStack_570;
    code *pcStack_560;
    int64_t *piStack_558;
    int64_t *piStack_550;
    int64_t iStack_548;
    uint64_t uStack_540;
    uint32_t *puStack_538;
    ulong uStack_528;
    ulong uStack_520;
    ulong uStack_518;
    ulong uStack_510;
    ulong uStack_508;
    ulong uStack_500;
    int64_t iStack_4f8;
    ulong ***pppuStack_4f0;
    ulong uStack_4e8;
    int64_t *piStack_4e0;
    uint16_t *puStack_4d0;
    uint64_t uStack_4c8;
    uint64_t uStack_4c0;
    uint64_t uStack_4b8;
    uchar auStack_4b0 [12];
    uint32_t uStack_4a4;
    int64_t iStack_4a0;
    int64_t iStack_498;
    ulong ***pppuStack_490;
    code *pcStack_488;
    uint64_t uStack_480;
    ulong uStack_478;
    code *pcStack_470;
    code *pcStack_468;
    uchar auStack_460 [16];
    uint64_t uStack_450;
    uint64_t uStack_448;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    ulong uStack_418;
    ulong uStack_410;
    int64_t iStack_408;
    ulong ***pppuStack_400;
    ulong uStack_3f8;
    code *pcStack_3f0;
    uint64_t uStack_3e8;
    char *pcStack_3e0;
    int64_t *piStack_3d8;
    uint *puStack_3d0;
    uint64_t uStack_3c8;
    uchar auStack_3c0 [12];
    uint32_t uStack_3b4;
    int64_t iStack_3b0;
    int64_t iStack_3a8;
    ulong ***pppuStack_3a0;
    code *pcStack_398;
    ulong uStack_390;
    code *pcStack_380;
    uint64_t uStack_378;
    char *pcStack_370;
    uint64_t uStack_368;
    uchar auStack_360 [16];
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    ulong ***pppuStack_310;
    ulong uStack_308;
    int64_t *piStack_300;
    uint *puStack_2f0;
    uint64_t uStack_2e8;
    uchar auStack_2e0 [12];
    uint32_t uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    ulong uStack_2b0;
    code *pcStack_2a0;
    uint64_t uStack_298;
    char *pcStack_290;
    uint64_t uStack_288;
    int64_t iStack_280;
    uint *puStack_278;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    ulong uStack_228;
    int64_t *piStack_220;
    uint *puStack_210;
    uint64_t uStack_208;
    uchar auStack_200 [12];
    uint32_t uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uchar ***pppuStack_1e0;
    code *pcStack_1d8;
    code *pcStack_1d0;
    ulong uStack_1c0;
    uint64_t uStack_1b8;
    char *pcStack_1b0;
    uint64_t uStack_1a8;
    int64_t iStack_1a0;
    uint *puStack_198;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    ulong uStack_148;
    char *pcStack_140;
    uint *puStack_130;
    uint64_t uStack_128;
    uchar auStack_120 [12];
    int iStack_114;
    int64_t *piStack_110;
    uint32_t uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uint *puVar15;
    uint *puVar16;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    pcVar30 = *(param_1 + 0x48);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar20 = pcVar30;
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(param_1), (uVar10 & 1) == 0))))
        goto code_r0x0800a50c;
    }
    else {
code_r0x0800a50c:
        if (param_2[1] < 4) {
            pcVar30 = *(param_2[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        pcVar30 = strlen(pcVar30);
        uVar29 = param_2[7];
        unaff_x22 = uVar29;
        iVar9 = pcVar30 + 1;
        uVar20 = 0xd;
        if (param_2[5] != 0) {
            uVar20 = 7;
        }
        unaff_x23 = uVar20;
        iVar3 = uVar20 + iVar9;
        iVar4 = iVar3 + uVar29 * 2;
        param_3 = iVar4 + uVar29 + 0x28;
        iVar11 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (iVar11 != 0) {
            uVar1 = pcVar30 + 0x29;
            pcVar30 = uVar1;
            *(iVar11 + 0xc) = iVar9 * 0x10000 | 0x28;
            unaff_x22 = "(null)";
            *(iVar11 + 0x18) = uVar1 | uVar20 << 0x10;
            *(iVar11 + 0x20) = iVar3 + 0x28U | uVar29 << 0x11;
            *(iVar11 + 0x24) = iVar4 + 0x28U | uVar29 << 0x10;
            *(iVar11 + 8) = *param_2;
            pcVar14 = unaff_x22;
            if (param_2[1] < 4) {
                pcVar14 = *(param_2[1] * 8 + 0x8006aa0);
            }
            strcpy(iVar11 + 0x28,pcVar14);
            *(iVar11 + 0x10) = *(param_2 + 3);
            pcVar14 = "ION_MEM_TYPE";
            if (param_2[5] != 0) {
                pcVar14 = unaff_x22;
            }
            strcpy(iVar11 + (uVar1 & 0xffff),pcVar14);
            *(iVar11 + 0x1c) = param_2[7];
            if (param_2[7] != 0) {
                uVar6 = *(iVar11 + 0x20);
                uVar10 = 0;
                uVar7 = *(iVar11 + 0x24);
                puVar23 = param_2 + 0x22;
                do {
                    *(iVar11 + uVar6 + uVar10 * 2) = *(puVar23 + -2);
                    *(iVar11 + uVar7 + uVar10) = *puVar23;
                    uVar10 = uVar10 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar10 < param_2[7]);
            }
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar15 = auVar34._8_8_;
    uVar10 = auVar34._0_8_;
    *extraout_x18 = sym.perf_trace_alloc_req_msg_class;
    pcStack_e8 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    if (puVar15[1] < 4) {
        pcVar14 = *(puVar15[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar14 = "(null)";
    }
    puStack_f0 = &stack0xffffffffffffffb0;
    uVar12 = strlen(pcVar14);
    uVar20 = puVar15[7];
    iVar11 = tpidr_el1;
    iVar9 = 0xd;
    if (puVar15[5] != 0) {
        iVar9 = 7;
    }
    piStack_110 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piStack_110 != 0)) {
        uVar29 = uVar12 + 1;
        unaff_x22 = uVar29;
        param_3 = &uStack_104;
        uVar1 = iVar9 + uVar29 + uVar20 * 2;
        pcVar30 = uVar1;
        iStack_114 = (uVar20 + uVar1 + 0x33 & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(iStack_114,&iStack_100);
        if (uVar13 != 0) {
            uVar2 = uVar12 + 0x29;
            unaff_x22 = uVar2;
            uVar21 = _hyp_assign_table & 0x3f;
            *(iStack_100 + 0xf8) = auStack_120;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0x100) = ~(-1L << uVar21) & 0x800a690;
            *(iStack_100 + 0x108) = 5;
            *(uVar13 + 0xc) = uVar29 * 0x10000 | 0x28;
            pcVar30 = "(null)";
            *(uVar13 + 0x18) = uVar2 | iVar9 << 0x10;
            *(uVar13 + 0x20) = iVar9 + uVar29 + 0x28 | uVar20 << 0x11;
            *(uVar13 + 0x24) = uVar1 + 0x28 | uVar20 << 0x10;
            *(uVar13 + 8) = *puVar15;
            pcVar14 = pcVar30;
            if (puVar15[1] < 4) {
                pcVar14 = *(puVar15[1] * 8 + 0x8006aa0);
            }
            strcpy(uVar13 + 0x28,pcVar14);
            *(uVar13 + 0x10) = *(puVar15 + 3);
            pcVar14 = "ION_MEM_TYPE";
            if (puVar15[5] != 0) {
                pcVar14 = pcVar30;
            }
            strcpy(uVar13 + (uVar2 & 0xffff),pcVar14);
            *(uVar13 + 0x1c) = puVar15[7];
            if (puVar15[7] != 0) {
                uVar6 = *(uVar13 + 0x20);
                uVar21 = 0;
                uVar7 = *(uVar13 + 0x24);
                puVar23 = puVar15 + 0x22;
                do {
                    *(uVar13 + uVar6 + uVar21 * 2) = *(puVar23 + -2);
                    *(uVar13 + uVar7 + uVar21) = *puVar23;
                    uVar21 = uVar21 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar21 < puVar15[7]);
            }
            param_3 = uStack_104;
            param_4 = uVar10;
            perf_trace_run_bpf_submit(uVar13,iStack_114,param_3,uVar10,1,iStack_100,piStack_110,0);
            unaff_x23 = uVar13;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar35 = __stack_chk_fail();
    puVar16 = auVar35._8_8_;
    iVar26 = auVar35._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_00 = 0x800a8f4;
    uStack_148 = 0x800a8f4;
    iVar11 = sp_el0;
    iStack_158 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar26 + 0x48);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar29 = uVar13;
    ppuStack_150 = &puStack_f0;
    pcStack_140 = pcVar30;
    iStack_1a0 = iVar26;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_130 = puVar15;
            uStack_128 = uVar10;
            event_triggers_call(iVar26,0);
            auVar34._8_8_ = puStack_130;
            auVar34._0_8_ = uStack_128;
        }
        puStack_130 = auVar34._8_8_;
        uStack_128 = auVar34._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar10 = trace_event_ignore_this_pid(iVar26), auVar34._8_8_ = puStack_130, auVar34._0_8_ = uStack_128,
            (uVar10 & 1) == 0)))) goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        puStack_130 = auVar34._8_8_;
        uStack_128 = auVar34._0_8_;
        if (puVar16[1] < 4) {
            pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar13 = uVar29;
        param_3 = uVar29 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_188,iVar26);
        auVar34._8_8_ = puStack_130;
        auVar34._0_8_ = uStack_128;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar29 * 0x10000 | 0x14;
            if (puVar16[1] < 4) {
                pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x14,pcVar30);
            *(iVar11 + 0xc) = puVar16[3];
            *(iVar11 + 0x10) = *puVar16;
            trace_event_buffer_commit(&uStack_188);
            auVar34._8_8_ = puStack_130;
            auVar34._0_8_ = uStack_128;
            iStack_1a0 = iVar11;
        }
    }
    puStack_130 = auVar34._8_8_;
    uStack_128 = auVar34._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_158) {
        return;
    }
    auVar35 = __stack_chk_fail();
    puVar15 = auVar35._8_8_;
    uVar10 = auVar35._0_8_;
    *extraout_x18_01 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_1d8 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_1d0 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_1e8 = *(iVar11 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    if (puVar15[1] < 4) {
        pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_1e0 = &ppuStack_150;
    uStack_1c0 = uVar12;
    uStack_1b8 = unaff_x23;
    pcStack_1b0 = unaff_x22;
    uStack_1a8 = uVar13;
    puStack_198 = puVar16;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar5 != 0)) {
        param_3 = &uStack_1f4;
        unaff_x22 = (uVar12 + 0x20U & 0xfffffff8) - 4;
        uVar21 = perf_trace_buf_alloc(unaff_x22,&iStack_1f0);
        uVar13 = _hyp_assign_table;
        if (uVar21 != 0) {
            *(iStack_1f0 + 0xe8) = &pppuStack_1e0;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800aa3c;
            *(iStack_1f0 + 0x108) = 5;
            *(uVar21 + 8) = uVar12 * 0x10000 + 0x10014;
            if (puVar15[1] < 4) {
                pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar21 + 0x14,pcVar30);
            param_3 = uStack_1f4;
            *(uVar21 + 0xc) = puVar15[3];
            *(uVar21 + 0x10) = *puVar15;
            param_4 = uVar10;
            perf_trace_run_bpf_submit(uVar21,unaff_x22,param_3,uVar10,1,iStack_1f0,piVar5,0);
            unaff_x23 = uVar21;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar16 = auVar34._8_8_;
    iVar26 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_02 = 0x800abe4;
    uStack_228 = 0x800abe4;
    iVar11 = sp_el0;
    iStack_238 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar26 + 0x48);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar29 = uVar13;
    pppuStack_230 = &pppuStack_1e0;
    piStack_220 = piVar5;
    iStack_280 = iVar26;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_210 = puVar15;
            uStack_208 = uVar10;
            event_triggers_call(iVar26,0);
            auVar35._8_8_ = puStack_210;
            auVar35._0_8_ = uStack_208;
        }
        puStack_210 = auVar35._8_8_;
        uStack_208 = auVar35._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar10 = trace_event_ignore_this_pid(iVar26), auVar35._8_8_ = puStack_210, auVar35._0_8_ = uStack_208,
            (uVar10 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_210 = auVar35._8_8_;
        uStack_208 = auVar35._0_8_;
        if (puVar16[1] < 4) {
            pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar13 = uVar29;
        param_3 = uVar29 + 0x18;
        iVar11 = trace_event_buffer_reserve(&uStack_268,iVar26);
        auVar35._8_8_ = puStack_210;
        auVar35._0_8_ = uStack_208;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar29 * 0x10000 | 0x18;
            *(iVar11 + 8) = *puVar16;
            if (puVar16[1] < 4) {
                pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x18,pcVar30);
            *(iVar11 + 0x10) = puVar16[3];
            *(iVar11 + 0x14) = puVar16[4];
            trace_event_buffer_commit(&uStack_268);
            auVar35._8_8_ = puStack_210;
            auVar35._0_8_ = uStack_208;
            iStack_280 = iVar11;
        }
    }
    puStack_210 = auVar35._8_8_;
    uStack_208 = auVar35._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_238) {
        return;
    }
    auVar36 = __stack_chk_fail();
    puVar15 = auVar36._8_8_;
    uVar10 = auVar36._0_8_;
    *extraout_x18_03 = sym.perf_trace_alloc_resp_class;
    pcStack_2b8 = sym.perf_trace_alloc_resp_class;
    pcStack_2a0 = sym.perf_trace_relinquish_req_msg_class;
    iVar11 = sp_el0;
    iStack_2c8 = *(iVar11 + 0x5e0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    if (puVar15[1] < 4) {
        pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_2c0 = &pppuStack_230;
    uStack_2b0 = uVar12;
    uStack_298 = unaff_x23;
    pcStack_290 = unaff_x22;
    uStack_288 = uVar13;
    puStack_278 = puVar16;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar5 != 0)) {
        param_3 = &uStack_2d4;
        unaff_x22 = (uVar12 + 0x24U & 0xfffffff8) - 4;
        uVar21 = perf_trace_buf_alloc(unaff_x22,&iStack_2d0);
        uVar13 = _hyp_assign_table;
        if (uVar21 != 0) {
            *(iStack_2d0 + 0xe8) = &pppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800ad34;
            *(iStack_2d0 + 0x108) = 5;
            *(uVar21 + 0xc) = uVar12 * 0x10000 + 0x10018;
            *(uVar21 + 8) = *puVar15;
            if (puVar15[1] < 4) {
                pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar21 + 0x18,pcVar30);
            param_3 = uStack_2d4;
            *(uVar21 + 0x10) = puVar15[3];
            *(uVar21 + 0x14) = puVar15[4];
            param_4 = uVar10;
            perf_trace_run_bpf_submit(uVar21,unaff_x22,param_3,uVar10,1,iStack_2d0,piVar5,0);
            unaff_x23 = uVar21;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2c8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar16 = auVar34._8_8_;
    iVar26 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x800aee4;
    uStack_308 = 0x800aee4;
    iVar11 = sp_el0;
    iStack_318 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar26 + 0x48);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar29 = uVar13;
    pppuStack_310 = &pppuStack_2c0;
    piStack_300 = piVar5;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_2f0 = puVar15;
            uStack_2e8 = uVar10;
            event_triggers_call(iVar26,0);
            auVar36._8_8_ = puStack_2f0;
            auVar36._0_8_ = uStack_2e8;
        }
        puStack_2f0 = auVar36._8_8_;
        uStack_2e8 = auVar36._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar10 = trace_event_ignore_this_pid(iVar26), auVar36._8_8_ = puStack_2f0, auVar36._0_8_ = uStack_2e8,
            (uVar10 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_2f0 = auVar36._8_8_;
        uStack_2e8 = auVar36._0_8_;
        if (puVar16[1] < 4) {
            pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar13 = uVar29;
        param_3 = uVar29 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_348,iVar26);
        auVar36._8_8_ = puStack_2f0;
        auVar36._0_8_ = uStack_2e8;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar29 * 0x10000 | 0x10;
            *(iVar11 + 8) = *puVar16;
            if (puVar16[1] < 4) {
                pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x10,pcVar30);
            trace_event_buffer_commit(&uStack_348);
            auVar36._8_8_ = puStack_2f0;
            auVar36._0_8_ = uStack_2e8;
        }
    }
    puStack_2f0 = auVar36._8_8_;
    uStack_2e8 = auVar36._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_318) {
        return;
    }
    auVar37 = __stack_chk_fail();
    puVar15 = auVar37._8_8_;
    uVar10 = auVar37._0_8_;
    *extraout_x18_05 = sym.perf_trace_relinquish_resp_class;
    pcStack_398 = sym.perf_trace_relinquish_resp_class;
    pcStack_380 = sym.perf_trace_alloc_resp_class;
    iVar11 = sp_el0;
    iStack_3a8 = *(iVar11 + 0x5e0);
    iStack_3b0 = 0;
    uStack_3b4 = 0;
    if (puVar15[1] < 4) {
        pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_3a0 = &pppuStack_310;
    uStack_390 = uVar12;
    uStack_378 = unaff_x23;
    pcStack_370 = unaff_x22;
    uStack_368 = uVar13;
    auStack_360 = auVar34;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar5 != 0)) {
        param_3 = &uStack_3b4;
        unaff_x22 = (uVar12 + 0x1cU & 0xfffffff8) - 4;
        uVar21 = perf_trace_buf_alloc(unaff_x22,&iStack_3b0);
        uVar13 = _hyp_assign_table;
        if (uVar21 != 0) {
            *(iStack_3b0 + 0xe8) = &pppuStack_3a0;
            *(iStack_3b0 + 0xf8) = auStack_3c0;
            *(iStack_3b0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800b020;
            *(iStack_3b0 + 0x108) = 5;
            *(uVar21 + 0xc) = uVar12 * 0x10000 + 0x10010;
            *(uVar21 + 8) = *puVar15;
            if (puVar15[1] < 4) {
                pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar21 + 0x10,pcVar30);
            param_3 = uStack_3b4;
            param_4 = uVar10;
            perf_trace_run_bpf_submit(uVar21,unaff_x22,param_3,uVar10,1,iStack_3b0,piVar5,0);
            unaff_x23 = uVar21;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar17 = auVar34._8_8_;
    iVar26 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_06 = 0x800b1c0;
    uStack_3f8 = 0x800b1c0;
    pcStack_3f0 = sym.perf_trace_relinquish_resp_class;
    iVar11 = sp_el0;
    iStack_408 = *(iVar11 + 0x5e0);
    pcVar33 = *(iVar26 + 0x48);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uVar29 = pcVar33;
    uVar13 = param_4;
    pppuStack_400 = &pppuStack_3a0;
    uStack_3e8 = unaff_x23;
    pcStack_3e0 = unaff_x22;
    piStack_3d8 = piVar5;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar18 = param_3;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar13 = 0;
            puStack_3d0 = puVar15;
            uStack_3c8 = uVar10;
            event_triggers_call(iVar26,0);
            auVar37._8_8_ = puStack_3d0;
            auVar37._0_8_ = uStack_3c8;
        }
        puStack_3d0 = auVar37._8_8_;
        uStack_3c8 = auVar37._0_8_;
        pcStack_470 = sym.perf_trace_relinquish_resp_class;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar10 = trace_event_ignore_this_pid(iVar26), auVar37._8_8_ = puStack_3d0, auVar37._0_8_ = uStack_3c8,
            (uVar10 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_3d0 = auVar37._8_8_;
        uStack_3c8 = auVar37._0_8_;
        uVar6 = *puVar17;
        pcVar33 = uVar6;
        puVar18 = pcVar33 * 0x10 + 0x1c;
        iVar11 = trace_event_buffer_reserve(&uStack_438,iVar26);
        auVar37._8_8_ = puStack_3d0;
        auVar37._0_8_ = uStack_3c8;
        pcStack_470 = pcVar33;
        if (iVar11 != 0) {
            uVar29 = uVar6 << 0x13;
            uVar10 = pcVar33 * 8 + 0x1c;
            *(iVar11 + 0xc) = uVar29 | 0x1c;
            *(iVar11 + 0x10) = uVar10 | uVar29;
            *(iVar11 + 8) = *puVar17;
            if (*puVar17 != 0) {
                uVar21 = 0;
                puVar24 = puVar17 + 6;
                do {
                    iVar26 = uVar21 * 8;
                    uVar21 = uVar21 + 1;
                    *(iVar11 + 0x1c + iVar26) = *(puVar24 + -4);
                    *(iVar11 + (uVar10 & 0xfffc) + iVar26) = *puVar24;
                    puVar24 = puVar24 + 8;
                } while (uVar21 < *puVar17);
            }
            *(iVar11 + 0x14) = param_3;
            *(iVar11 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_438);
            auVar37._8_8_ = puStack_3d0;
            auVar37._0_8_ = uStack_3c8;
        }
    }
    puStack_3d0 = auVar37._8_8_;
    uStack_3c8 = auVar37._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_408) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar17 = auVar38._8_8_;
    uVar21 = auVar38._0_8_;
    *extraout_x18_07 = sym.perf_trace_lookup_sgl;
    pcStack_488 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_498 = *(iVar11 + 0x5e0);
    uVar28 = uVar13 & 0xffffffff;
    uVar31 = puVar18 & 0xffffffff;
    iStack_4a0 = 0;
    uStack_4a4 = 0;
    uVar6 = *puVar17;
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar21 + 0x78);
    uVar10 = uVar13;
    pppuStack_490 = &pppuStack_400;
    uStack_480 = uVar20;
    uStack_478 = uVar12;
    pcStack_468 = pcVar33;
    uStack_450 = param_3 & 0xffffffff;
    uStack_448 = param_4 & 0xffffffff;
    auStack_460 = auVar34;
    if ((*(uVar21 + 0x80) != 0) || (puVar19 = puVar18, pcVar33 = pcStack_470, *piVar5 != 0)) {
        puVar19 = &uStack_4a4;
        pcVar33 = (uVar6 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar33,&iStack_4a0);
        if (iVar11 != 0) {
            uVar22 = _hyp_assign_table & 0x3f;
            *(iStack_4a0 + 0xe8) = &pppuStack_490;
            *(iStack_4a0 + 0xf8) = auStack_4b0;
            uVar10 = uVar6 * 8 + 0x1c;
            *(iStack_4a0 + 0x100) = ~(-1L << uVar22) & 0x800b30c;
            *(iStack_4a0 + 0x108) = 5;
            *(iVar11 + 0xc) = uVar6 << 0x13 | 0x1c;
            *(iVar11 + 0x10) = uVar10 | uVar6 << 0x13;
            *(iVar11 + 8) = *puVar17;
            if (*puVar17 != 0) {
                uVar22 = 0;
                puVar24 = puVar17 + 6;
                do {
                    iVar26 = uVar22 * 8;
                    uVar22 = uVar22 + 1;
                    *(iVar11 + 0x1c + iVar26) = *(puVar24 + -4);
                    *(iVar11 + (uVar10 & 0xfffc) + iVar26) = *puVar24;
                    puVar24 = puVar24 + 8;
                } while (uVar22 < *puVar17);
            }
            puVar19 = uStack_4a4;
            *(iVar11 + 0x14) = puVar18;
            *(iVar11 + 0x18) = uVar13;
            uVar10 = uVar21;
            perf_trace_run_bpf_submit(iVar11,pcVar33,puVar19,uVar21,1,iStack_4a0,piVar5,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_498) {
        return;
    }
    auVar34 = __stack_chk_fail();
    iVar26 = auVar34._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_08 = 0x800b4ac;
    uStack_4e8 = 0x800b4ac;
    iVar11 = sp_el0;
    iStack_4f8 = *(iVar11 + 0x5e0);
    uVar13 = auVar34._8_8_ & 0xffffffff;
    piVar32 = *(iVar26 + 0x48);
    uStack_508 = 0;
    uStack_500 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_528 = 0;
    uStack_520 = 0;
    uVar20 = piVar32;
    pppuStack_4f0 = &pppuStack_490;
    piStack_4e0 = piVar5;
    uStack_4c8 = uVar31;
    uStack_4c0 = uVar28;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar18 = puVar19;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar10 = 0;
            puStack_4d0 = puVar17;
            uStack_4b8 = uVar21;
            event_triggers_call(iVar26,0,0,0);
            auVar38._8_8_ = puStack_4d0;
            auVar38._0_8_ = uStack_4b8;
        }
        puStack_4d0 = auVar38._8_8_;
        uStack_4b8 = auVar38._0_8_;
        piStack_558 = piVar5;
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 &&
            (uVar21 = trace_event_ignore_this_pid(iVar26), auVar38._8_8_ = puStack_4d0, auVar38._0_8_ = uStack_4b8,
            (uVar21 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_4d0 = auVar38._8_8_;
    uStack_4b8 = auVar38._0_8_;
    uVar20 = *puVar19;
    piVar32 = uVar20;
    puVar18 = piVar32 * 0x10 + 0x18;
    iVar11 = trace_event_buffer_reserve(&uStack_528,iVar26);
    auVar38._8_8_ = puStack_4d0;
    auVar38._0_8_ = uStack_4b8;
    piStack_558 = piVar32;
    if (iVar11 != 0) {
        uVar20 = uVar20 << 0x13;
        uVar21 = piVar32 * 8 + 0x18;
        *(iVar11 + 8) = auVar34._8_4_;
        *(iVar11 + 0x10) = uVar20 | 0x18;
        *(iVar11 + 0x14) = uVar21 | uVar20;
        *(iVar11 + 0xc) = *puVar19;
        if (*puVar19 != 0) {
            uVar28 = 0;
            puVar25 = puVar19 + 3;
            do {
                iVar27 = uVar28 * 8;
                uVar28 = uVar28 + 1;
                *(iVar11 + 0x18 + iVar27) = *(puVar25 + -2);
                *(iVar11 + (uVar21 & 0xfff8) + iVar27) = *puVar25;
                puVar25 = puVar25 + 4;
            } while (uVar28 < *puVar19);
        }
        trace_event_buffer_commit(&uStack_528);
        auVar38._8_8_ = puStack_4d0;
        auVar38._0_8_ = uStack_4b8;
    }
code_r0x0800b5bc:
    puStack_4d0 = auVar38._8_8_;
    uStack_4b8 = auVar38._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_4f8) {
        return;
    }
    auVar39 = __stack_chk_fail();
    uVar21 = auVar39._0_8_;
    *extraout_x18_09 = sym.perf_trace_map_mem_s2;
    pcStack_578 = sym.perf_trace_map_mem_s2;
    pcStack_570 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_588 = *(iVar11 + 0x5e0);
    iStack_590 = 0;
    uStack_594 = 0;
    uVar6 = *puVar18;
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar21 + 0x78);
    pppuStack_580 = &pppuStack_4f0;
    pcStack_560 = pcVar33;
    piStack_550 = piVar32;
    iStack_548 = iVar26;
    uStack_540 = uVar13;
    puStack_538 = puVar19;
    if ((*(uVar21 + 0x80) != 0) || (puVar19 = puVar18, *piVar5 != 0)) {
        puVar19 = &uStack_594;
        iVar9 = (uVar6 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(iVar9,&iStack_590,puVar19);
        if (iVar11 != 0) {
            uVar13 = _hyp_assign_table & 0x3f;
            *(iStack_590 + 0xe8) = &pppuStack_580;
            *(iStack_590 + 0xf8) = auStack_5a0;
            uVar10 = uVar6 * 8 + 0x18;
            *(iStack_590 + 0x100) = ~(-1L << uVar13) & 0x800b5f4;
            *(iStack_590 + 0x108) = 5;
            *(iVar11 + 8) = auVar39._8_4_;
            *(iVar11 + 0x10) = uVar6 << 0x13 | 0x18;
            *(iVar11 + 0x14) = uVar10 | uVar6 << 0x13;
            *(iVar11 + 0xc) = *puVar18;
            if (*puVar18 != 0) {
                uVar13 = 0;
                puVar19 = puVar18 + 3;
                do {
                    iVar26 = uVar13 * 8;
                    uVar13 = uVar13 + 1;
                    *(iVar11 + 0x18 + iVar26) = *(puVar19 + -2);
                    *(iVar11 + (uVar10 & 0xfff8) + iVar26) = *puVar19;
                    puVar19 = puVar19 + 4;
                } while (uVar13 < *puVar18);
            }
            puVar19 = uStack_594;
            perf_trace_run_bpf_submit(iVar11,iVar9,puVar19,uVar21,1,iStack_590,piVar5,0);
            uVar10 = uVar21;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_588) {
        auVar34 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_10 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar34._0_8_,auVar34._8_8_,puVar19 & 0xffffffff,uVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007af0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (uint64_t param_1,uint *param_2,uint32_t *param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    ulong uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    char *pcVar9;
    int64_t iVar10;
    int iVar8;
    ulong uVar11;
    uint16_t *puVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uchar *puVar21;
    uint16_t *puVar22;
    uint32_t *puVar23;
    int64_t iVar24;
    int64_t iVar25;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    uint64_t uVar26;
    uint32_t uVar27;
    char *unaff_x21;
    uint64_t uVar28;
    uint32_t uVar29;
    uint64_t unaff_x22;
    int64_t *piVar30;
    int64_t unaff_x23;
    code *pcVar31;
    uint64_t unaff_x30;
    uchar auVar32 [16];
    uchar auVar33 [16];
    uchar auVar34 [16];
    uchar auVar35 [16];
    uchar auVar36 [12];
    uchar auStack_510 [12];
    uint32_t uStack_504;
    int64_t iStack_500;
    int64_t iStack_4f8;
    ulong ***pppuStack_4f0;
    code *pcStack_4e8;
    code *pcStack_4e0;
    code *pcStack_4d0;
    int64_t *piStack_4c8;
    int64_t *piStack_4c0;
    int64_t iStack_4b8;
    uint64_t uStack_4b0;
    uint32_t *puStack_4a8;
    ulong uStack_498;
    ulong uStack_490;
    ulong uStack_488;
    ulong uStack_480;
    ulong uStack_478;
    ulong uStack_470;
    int64_t iStack_468;
    ulong ***pppuStack_460;
    ulong uStack_458;
    int64_t *piStack_450;
    uint16_t *puStack_440;
    uint64_t uStack_438;
    uint64_t uStack_430;
    uint64_t uStack_428;
    uchar auStack_420 [12];
    uint32_t uStack_414;
    int64_t iStack_410;
    int64_t iStack_408;
    ulong ***pppuStack_400;
    code *pcStack_3f8;
    uint64_t uStack_3f0;
    ulong uStack_3e8;
    code *pcStack_3e0;
    code *pcStack_3d8;
    uchar auStack_3d0 [16];
    uint64_t uStack_3c0;
    uint64_t uStack_3b8;
    ulong uStack_3a8;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    int64_t iStack_378;
    ulong ***pppuStack_370;
    ulong uStack_368;
    code *pcStack_360;
    int64_t iStack_358;
    uint64_t uStack_350;
    int64_t *piStack_348;
    uint *puStack_340;
    uint64_t uStack_338;
    uchar auStack_330 [12];
    uint32_t uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    ulong ***pppuStack_310;
    code *pcStack_308;
    ulong uStack_300;
    code *pcStack_2f0;
    int64_t iStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    uchar auStack_2d0 [16];
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    ulong uStack_278;
    int64_t *piStack_270;
    uint *puStack_260;
    uint64_t uStack_258;
    uchar auStack_250 [12];
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    ulong uStack_220;
    code *pcStack_210;
    int64_t iStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    int64_t iStack_1f0;
    uint *puStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar ***pppuStack_1a0;
    ulong uStack_198;
    int64_t *piStack_190;
    uint *puStack_180;
    uint64_t uStack_178;
    uchar auStack_170 [12];
    uint32_t uStack_164;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    char *pcStack_b0;
    uint *puStack_a0;
    uint64_t uStack_98;
    uchar auStack_90 [12];
    int iStack_84;
    int64_t *piStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    uint *puVar12;
    uint *puVar13;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    if (param_2[1] < 4) {
        pcVar9 = *(param_2[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar9 = "(null)";
    }
    iVar7 = strlen(pcVar9);
    uVar29 = param_2[7];
    iVar10 = tpidr_el1;
    iVar8 = 0xd;
    if (param_2[5] != 0) {
        iVar8 = 7;
    }
    piStack_80 = iVar10 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piStack_80 != 0)) {
        uVar27 = iVar7 + 1;
        unaff_x22 = uVar27;
        param_3 = &uStack_74;
        uVar2 = iVar8 + uVar27 + uVar29 * 2;
        unaff_x21 = uVar2;
        iStack_84 = (uVar29 + uVar2 + 0x33 & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iStack_84,&iStack_70);
        if (iVar10 != 0) {
            uVar1 = iVar7 + 0x29;
            unaff_x22 = uVar1;
            uVar20 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_70 + 0xf8) = auStack_90;
            uVar17 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar17 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0x100) = uVar17;
            *(iStack_70 + 0x108) = 5;
            *(iVar10 + 0xc) = uVar27 * 0x10000 | 0x28;
            unaff_x21 = "(null)";
            *(iVar10 + 0x18) = uVar1 | iVar8 << 0x10;
            *(iVar10 + 0x20) = iVar8 + uVar27 + 0x28 | uVar29 << 0x11;
            *(iVar10 + 0x24) = uVar2 + 0x28 | uVar29 << 0x10;
            *(iVar10 + 8) = *param_2;
            pcVar9 = unaff_x21;
            if (param_2[1] < 4) {
                pcVar9 = *(param_2[1] * 8 + 0x8006aa0);
            }
            strcpy(iVar10 + 0x28,pcVar9);
            *(iVar10 + 0x10) = *(param_2 + 3);
            pcVar9 = "ION_MEM_TYPE";
            if (param_2[5] != 0) {
                pcVar9 = unaff_x21;
            }
            strcpy(iVar10 + (uVar1 & 0xffff),pcVar9);
            *(iVar10 + 0x1c) = param_2[7];
            if (param_2[7] != 0) {
                uVar4 = *(iVar10 + 0x20);
                uVar17 = 0;
                uVar5 = *(iVar10 + 0x24);
                puVar21 = param_2 + 0x22;
                do {
                    *(iVar10 + uVar4 + uVar17 * 2) = *(puVar21 + -2);
                    *(iVar10 + uVar5 + uVar17) = *puVar21;
                    uVar17 = uVar17 + 1;
                    puVar21 = puVar21 + 4;
                } while (uVar17 < param_2[7]);
            }
            param_3 = uStack_74;
            param_4 = param_1;
            perf_trace_run_bpf_submit(iVar10,iStack_84,param_3,param_1,1,iStack_70,piStack_80,0);
            unaff_x23 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    auVar32 = __stack_chk_fail();
    puVar12 = auVar32._8_8_;
    iVar24 = auVar32._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x800a8f4;
    uStack_b8 = 0x800a8f4;
    iVar10 = sp_el0;
    iStack_c8 = *(iVar10 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar27 = *(iVar24 + 0x48);
    puStack_c0 = &stack0xffffffffffffffa0;
    pcStack_b0 = unaff_x21;
    puStack_a0 = param_2;
    uStack_98 = param_1;
    if ((uVar27 >> 8 & 1) == 0) {
        if ((uVar27 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(iVar24,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar24), (uVar17 & 1) == 0))))
        goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        if (puVar12[1] < 4) {
            pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar9 = "(null)";
        }
        iVar8 = strlen(pcVar9);
        param_3 = iVar8 + 1 + 0x14;
        iVar10 = trace_event_buffer_reserve(&uStack_f8,iVar24);
        if (iVar10 != 0) {
            *(iVar10 + 8) = (iVar8 + 1) * 0x10000 | 0x14;
            if (puVar12[1] < 4) {
                pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x14,pcVar9);
            *(iVar10 + 0xc) = puVar12[3];
            *(iVar10 + 0x10) = *puVar12;
            trace_event_buffer_commit(&uStack_f8);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar32 = __stack_chk_fail();
    puVar12 = auVar32._8_8_;
    uVar17 = auVar32._0_8_;
    *extraout_x18_00 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_148 = sym.perf_trace_relinquish_req_msg_class;
    iVar10 = sp_el0;
    iStack_158 = *(iVar10 + 0x5e0);
    iStack_160 = 0;
    uStack_164 = 0;
    if (puVar12[1] < 4) {
        pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar9 = "(null)";
    }
    ppuStack_150 = &puStack_c0;
    uVar11 = strlen(pcVar9);
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar3 != 0)) {
        param_3 = &uStack_164;
        unaff_x22 = (uVar11 + 0x20U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(unaff_x22,&iStack_160);
        uVar20 = _hyp_assign_table;
        if (iVar10 != 0) {
            *(iStack_160 + 0xe8) = &ppuStack_150;
            *(iStack_160 + 0xf8) = auStack_170;
            *(iStack_160 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x800aa3c;
            *(iStack_160 + 0x108) = 5;
            *(iVar10 + 8) = uVar11 * 0x10000 + 0x10014;
            if (puVar12[1] < 4) {
                pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x14,pcVar9);
            param_3 = uStack_164;
            *(iVar10 + 0xc) = puVar12[3];
            *(iVar10 + 0x10) = *puVar12;
            param_4 = uVar17;
            perf_trace_run_bpf_submit(iVar10,unaff_x22,param_3,uVar17,1,iStack_160,piVar3,0);
            unaff_x23 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_158) {
        return;
    }
    auVar33 = __stack_chk_fail();
    puVar13 = auVar33._8_8_;
    iVar24 = auVar33._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_01 = 0x800abe4;
    uStack_198 = 0x800abe4;
    iVar10 = sp_el0;
    iStack_1a8 = *(iVar10 + 0x5e0);
    uVar20 = *(iVar24 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar27 = uVar20;
    pppuStack_1a0 = &ppuStack_150;
    piStack_190 = piVar3;
    iStack_1f0 = iVar24;
    if ((uVar27 >> 8 & 1) == 0) {
        if ((uVar27 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_180 = puVar12;
            uStack_178 = uVar17;
            event_triggers_call(iVar24,0);
            auVar32._8_8_ = puStack_180;
            auVar32._0_8_ = uStack_178;
        }
        puStack_180 = auVar32._8_8_;
        uStack_178 = auVar32._0_8_;
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 ||
            (uVar17 = trace_event_ignore_this_pid(iVar24), auVar32._8_8_ = puStack_180, auVar32._0_8_ = uStack_178,
            (uVar17 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_180 = auVar32._8_8_;
        uStack_178 = auVar32._0_8_;
        if (puVar13[1] < 4) {
            pcVar9 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar9 = "(null)";
        }
        iVar8 = strlen(pcVar9);
        uVar27 = iVar8 + 1;
        uVar20 = uVar27;
        param_3 = uVar27 + 0x18;
        iVar10 = trace_event_buffer_reserve(&uStack_1d8,iVar24);
        auVar32._8_8_ = puStack_180;
        auVar32._0_8_ = uStack_178;
        if (iVar10 != 0) {
            *(iVar10 + 0xc) = uVar27 * 0x10000 | 0x18;
            *(iVar10 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar9 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x18,pcVar9);
            *(iVar10 + 0x10) = puVar13[3];
            *(iVar10 + 0x14) = puVar13[4];
            trace_event_buffer_commit(&uStack_1d8);
            auVar32._8_8_ = puStack_180;
            auVar32._0_8_ = uStack_178;
            iStack_1f0 = iVar10;
        }
    }
    puStack_180 = auVar32._8_8_;
    uStack_178 = auVar32._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar33 = __stack_chk_fail();
    puVar12 = auVar33._8_8_;
    uVar17 = auVar33._0_8_;
    *extraout_x18_02 = sym.perf_trace_alloc_resp_class;
    pcStack_228 = sym.perf_trace_alloc_resp_class;
    pcStack_210 = sym.perf_trace_relinquish_req_msg_class;
    iVar10 = sp_el0;
    iStack_238 = *(iVar10 + 0x5e0);
    iStack_240 = 0;
    uStack_244 = 0;
    if (puVar12[1] < 4) {
        pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar9 = "(null)";
    }
    pppuStack_230 = &pppuStack_1a0;
    uStack_220 = uVar11;
    iStack_208 = unaff_x23;
    uStack_200 = unaff_x22;
    uStack_1f8 = uVar20;
    puStack_1e8 = puVar13;
    uVar11 = strlen(pcVar9);
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar3 != 0)) {
        param_3 = &uStack_244;
        unaff_x22 = (uVar11 + 0x24U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(unaff_x22,&iStack_240);
        uVar20 = _hyp_assign_table;
        if (iVar10 != 0) {
            *(iStack_240 + 0xe8) = &pppuStack_230;
            *(iStack_240 + 0xf8) = auStack_250;
            *(iStack_240 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x800ad34;
            *(iStack_240 + 0x108) = 5;
            *(iVar10 + 0xc) = uVar11 * 0x10000 + 0x10018;
            *(iVar10 + 8) = *puVar12;
            if (puVar12[1] < 4) {
                pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x18,pcVar9);
            param_3 = uStack_244;
            *(iVar10 + 0x10) = puVar12[3];
            *(iVar10 + 0x14) = puVar12[4];
            param_4 = uVar17;
            perf_trace_run_bpf_submit(iVar10,unaff_x22,param_3,uVar17,1,iStack_240,piVar3,0);
            unaff_x23 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_238) {
        return;
    }
    auVar32 = __stack_chk_fail();
    puVar13 = auVar32._8_8_;
    iVar24 = auVar32._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x800aee4;
    uStack_278 = 0x800aee4;
    iVar10 = sp_el0;
    iStack_288 = *(iVar10 + 0x5e0);
    uVar20 = *(iVar24 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar27 = uVar20;
    pppuStack_280 = &pppuStack_230;
    piStack_270 = piVar3;
    if ((uVar27 >> 8 & 1) == 0) {
        if ((uVar27 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_260 = puVar12;
            uStack_258 = uVar17;
            event_triggers_call(iVar24,0);
            auVar33._8_8_ = puStack_260;
            auVar33._0_8_ = uStack_258;
        }
        puStack_260 = auVar33._8_8_;
        uStack_258 = auVar33._0_8_;
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 ||
            (uVar17 = trace_event_ignore_this_pid(iVar24), auVar33._8_8_ = puStack_260, auVar33._0_8_ = uStack_258,
            (uVar17 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_260 = auVar33._8_8_;
        uStack_258 = auVar33._0_8_;
        if (puVar13[1] < 4) {
            pcVar9 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar9 = "(null)";
        }
        iVar8 = strlen(pcVar9);
        uVar27 = iVar8 + 1;
        uVar20 = uVar27;
        param_3 = uVar27 + 0x10;
        iVar10 = trace_event_buffer_reserve(&uStack_2b8,iVar24);
        auVar33._8_8_ = puStack_260;
        auVar33._0_8_ = uStack_258;
        if (iVar10 != 0) {
            *(iVar10 + 0xc) = uVar27 * 0x10000 | 0x10;
            *(iVar10 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar9 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x10,pcVar9);
            trace_event_buffer_commit(&uStack_2b8);
            auVar33._8_8_ = puStack_260;
            auVar33._0_8_ = uStack_258;
        }
    }
    puStack_260 = auVar33._8_8_;
    uStack_258 = auVar33._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_288) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar12 = auVar34._8_8_;
    uVar17 = auVar34._0_8_;
    *extraout_x18_04 = sym.perf_trace_relinquish_resp_class;
    pcStack_308 = sym.perf_trace_relinquish_resp_class;
    pcStack_2f0 = sym.perf_trace_alloc_resp_class;
    iVar10 = sp_el0;
    iStack_318 = *(iVar10 + 0x5e0);
    iStack_320 = 0;
    uStack_324 = 0;
    if (puVar12[1] < 4) {
        pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar9 = "(null)";
    }
    pppuStack_310 = &pppuStack_280;
    uStack_300 = uVar11;
    iStack_2e8 = unaff_x23;
    uStack_2e0 = unaff_x22;
    uStack_2d8 = uVar20;
    auStack_2d0 = auVar32;
    uVar11 = strlen(pcVar9);
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar3 != 0)) {
        param_3 = &uStack_324;
        unaff_x22 = (uVar11 + 0x1cU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(unaff_x22,&iStack_320);
        uVar20 = _hyp_assign_table;
        if (iVar10 != 0) {
            *(iStack_320 + 0xe8) = &pppuStack_310;
            *(iStack_320 + 0xf8) = auStack_330;
            *(iStack_320 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x800b020;
            *(iStack_320 + 0x108) = 5;
            *(iVar10 + 0xc) = uVar11 * 0x10000 + 0x10010;
            *(iVar10 + 8) = *puVar12;
            if (puVar12[1] < 4) {
                pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x10,pcVar9);
            param_3 = uStack_324;
            param_4 = uVar17;
            perf_trace_run_bpf_submit(iVar10,unaff_x22,param_3,uVar17,1,iStack_320,piVar3,0);
            unaff_x23 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_318) {
        return;
    }
    auVar32 = __stack_chk_fail();
    puVar14 = auVar32._8_8_;
    iVar24 = auVar32._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_05 = 0x800b1c0;
    uStack_368 = 0x800b1c0;
    pcStack_360 = sym.perf_trace_relinquish_resp_class;
    iVar10 = sp_el0;
    iStack_378 = *(iVar10 + 0x5e0);
    pcVar31 = *(iVar24 + 0x48);
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uVar27 = pcVar31;
    uVar20 = param_4;
    pppuStack_370 = &pppuStack_310;
    iStack_358 = unaff_x23;
    uStack_350 = unaff_x22;
    piStack_348 = piVar3;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar15 = param_3;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar20 = 0;
            puStack_340 = puVar12;
            uStack_338 = uVar17;
            event_triggers_call(iVar24,0);
            auVar34._8_8_ = puStack_340;
            auVar34._0_8_ = uStack_338;
        }
        puStack_340 = auVar34._8_8_;
        uStack_338 = auVar34._0_8_;
        pcStack_3e0 = sym.perf_trace_relinquish_resp_class;
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 ||
            (uVar17 = trace_event_ignore_this_pid(iVar24), auVar34._8_8_ = puStack_340, auVar34._0_8_ = uStack_338,
            (uVar17 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_340 = auVar34._8_8_;
        uStack_338 = auVar34._0_8_;
        uVar4 = *puVar14;
        pcVar31 = uVar4;
        puVar15 = pcVar31 * 0x10 + 0x1c;
        iVar10 = trace_event_buffer_reserve(&uStack_3a8,iVar24);
        auVar34._8_8_ = puStack_340;
        auVar34._0_8_ = uStack_338;
        pcStack_3e0 = pcVar31;
        if (iVar10 != 0) {
            uVar27 = uVar4 << 0x13;
            uVar17 = pcVar31 * 8 + 0x1c;
            *(iVar10 + 0xc) = uVar27 | 0x1c;
            *(iVar10 + 0x10) = uVar17 | uVar27;
            *(iVar10 + 8) = *puVar14;
            if (*puVar14 != 0) {
                uVar18 = 0;
                puVar22 = puVar14 + 6;
                do {
                    iVar24 = uVar18 * 8;
                    uVar18 = uVar18 + 1;
                    *(iVar10 + 0x1c + iVar24) = *(puVar22 + -4);
                    *(iVar10 + (uVar17 & 0xfffc) + iVar24) = *puVar22;
                    puVar22 = puVar22 + 8;
                } while (uVar18 < *puVar14);
            }
            *(iVar10 + 0x14) = param_3;
            *(iVar10 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_3a8);
            auVar34._8_8_ = puStack_340;
            auVar34._0_8_ = uStack_338;
        }
    }
    puStack_340 = auVar34._8_8_;
    uStack_338 = auVar34._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_378) {
        return;
    }
    auVar35 = __stack_chk_fail();
    puVar14 = auVar35._8_8_;
    uVar18 = auVar35._0_8_;
    *extraout_x18_06 = sym.perf_trace_lookup_sgl;
    pcStack_3f8 = sym.perf_trace_lookup_sgl;
    iVar10 = sp_el0;
    iStack_408 = *(iVar10 + 0x5e0);
    uVar26 = uVar20 & 0xffffffff;
    uVar28 = puVar15 & 0xffffffff;
    iStack_410 = 0;
    uStack_414 = 0;
    uVar4 = *puVar14;
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar18 + 0x78);
    uVar17 = uVar20;
    pppuStack_400 = &pppuStack_370;
    uStack_3f0 = uVar29;
    uStack_3e8 = uVar11;
    pcStack_3d8 = pcVar31;
    uStack_3c0 = param_3 & 0xffffffff;
    uStack_3b8 = param_4 & 0xffffffff;
    auStack_3d0 = auVar32;
    if ((*(uVar18 + 0x80) != 0) || (puVar16 = puVar15, pcVar31 = pcStack_3e0, *piVar3 != 0)) {
        puVar16 = &uStack_414;
        pcVar31 = (uVar4 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar10 = perf_trace_buf_alloc(pcVar31,&iStack_410);
        if (iVar10 != 0) {
            uVar19 = _hyp_assign_table & 0x3f;
            *(iStack_410 + 0xe8) = &pppuStack_400;
            *(iStack_410 + 0xf8) = auStack_420;
            uVar17 = uVar4 * 8 + 0x1c;
            *(iStack_410 + 0x100) = ~(-1L << uVar19) & 0x800b30c;
            *(iStack_410 + 0x108) = 5;
            *(iVar10 + 0xc) = uVar4 << 0x13 | 0x1c;
            *(iVar10 + 0x10) = uVar17 | uVar4 << 0x13;
            *(iVar10 + 8) = *puVar14;
            if (*puVar14 != 0) {
                uVar19 = 0;
                puVar22 = puVar14 + 6;
                do {
                    iVar24 = uVar19 * 8;
                    uVar19 = uVar19 + 1;
                    *(iVar10 + 0x1c + iVar24) = *(puVar22 + -4);
                    *(iVar10 + (uVar17 & 0xfffc) + iVar24) = *puVar22;
                    puVar22 = puVar22 + 8;
                } while (uVar19 < *puVar14);
            }
            puVar16 = uStack_414;
            *(iVar10 + 0x14) = puVar15;
            *(iVar10 + 0x18) = uVar20;
            uVar17 = uVar18;
            perf_trace_run_bpf_submit(iVar10,pcVar31,puVar16,uVar18,1,iStack_410,piVar3,0);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_408) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar24 = auVar32._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18_07 = 0x800b4ac;
    uStack_458 = 0x800b4ac;
    iVar10 = sp_el0;
    iStack_468 = *(iVar10 + 0x5e0);
    uVar20 = auVar32._8_8_ & 0xffffffff;
    piVar30 = *(iVar24 + 0x48);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_488 = 0;
    uStack_480 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    uVar29 = piVar30;
    pppuStack_460 = &pppuStack_400;
    piStack_450 = piVar3;
    uStack_438 = uVar28;
    uStack_430 = uVar26;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar17 = 0;
            puStack_440 = puVar14;
            uStack_428 = uVar18;
            event_triggers_call(iVar24,0,0,0);
            auVar35._8_8_ = puStack_440;
            auVar35._0_8_ = uStack_428;
        }
        puStack_440 = auVar35._8_8_;
        uStack_428 = auVar35._0_8_;
        piStack_4c8 = piVar3;
        if (((uVar29 >> 6 & 1) != 0) ||
           (((uVar29 >> 9 & 1) != 0 &&
            (uVar18 = trace_event_ignore_this_pid(iVar24), auVar35._8_8_ = puStack_440, auVar35._0_8_ = uStack_428,
            (uVar18 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_440 = auVar35._8_8_;
    uStack_428 = auVar35._0_8_;
    uVar29 = *puVar16;
    piVar30 = uVar29;
    puVar15 = piVar30 * 0x10 + 0x18;
    iVar10 = trace_event_buffer_reserve(&uStack_498,iVar24);
    auVar35._8_8_ = puStack_440;
    auVar35._0_8_ = uStack_428;
    piStack_4c8 = piVar30;
    if (iVar10 != 0) {
        uVar29 = uVar29 << 0x13;
        uVar18 = piVar30 * 8 + 0x18;
        *(iVar10 + 8) = auVar32._8_4_;
        *(iVar10 + 0x10) = uVar29 | 0x18;
        *(iVar10 + 0x14) = uVar18 | uVar29;
        *(iVar10 + 0xc) = *puVar16;
        if (*puVar16 != 0) {
            uVar26 = 0;
            puVar23 = puVar16 + 3;
            do {
                iVar25 = uVar26 * 8;
                uVar26 = uVar26 + 1;
                *(iVar10 + 0x18 + iVar25) = *(puVar23 + -2);
                *(iVar10 + (uVar18 & 0xfff8) + iVar25) = *puVar23;
                puVar23 = puVar23 + 4;
            } while (uVar26 < *puVar16);
        }
        trace_event_buffer_commit(&uStack_498);
        auVar35._8_8_ = puStack_440;
        auVar35._0_8_ = uStack_428;
    }
code_r0x0800b5bc:
    puStack_440 = auVar35._8_8_;
    uStack_428 = auVar35._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_468) {
        return;
    }
    auVar36 = __stack_chk_fail();
    uVar18 = auVar36._0_8_;
    *extraout_x18_08 = sym.perf_trace_map_mem_s2;
    pcStack_4e8 = sym.perf_trace_map_mem_s2;
    pcStack_4e0 = sym.perf_trace_lookup_sgl;
    iVar10 = sp_el0;
    iStack_4f8 = *(iVar10 + 0x5e0);
    iStack_500 = 0;
    uStack_504 = 0;
    uVar4 = *puVar15;
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar18 + 0x78);
    pppuStack_4f0 = &pppuStack_460;
    pcStack_4d0 = pcVar31;
    piStack_4c0 = piVar30;
    iStack_4b8 = iVar24;
    uStack_4b0 = uVar20;
    puStack_4a8 = puVar16;
    if ((*(uVar18 + 0x80) != 0) || (puVar16 = puVar15, *piVar3 != 0)) {
        puVar16 = &uStack_504;
        iVar8 = (uVar4 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar10 = perf_trace_buf_alloc(iVar8,&iStack_500,puVar16);
        if (iVar10 != 0) {
            uVar20 = _hyp_assign_table & 0x3f;
            *(iStack_500 + 0xe8) = &pppuStack_4f0;
            *(iStack_500 + 0xf8) = auStack_510;
            uVar17 = uVar4 * 8 + 0x18;
            *(iStack_500 + 0x100) = ~(-1L << uVar20) & 0x800b5f4;
            *(iStack_500 + 0x108) = 5;
            *(iVar10 + 8) = auVar36._8_4_;
            *(iVar10 + 0x10) = uVar4 << 0x13 | 0x18;
            *(iVar10 + 0x14) = uVar17 | uVar4 << 0x13;
            *(iVar10 + 0xc) = *puVar15;
            if (*puVar15 != 0) {
                uVar20 = 0;
                puVar16 = puVar15 + 3;
                do {
                    iVar24 = uVar20 * 8;
                    uVar20 = uVar20 + 1;
                    *(iVar10 + 0x18 + iVar24) = *(puVar16 + -2);
                    *(iVar10 + (uVar17 & 0xfff8) + iVar24) = *puVar16;
                    puVar16 = puVar16 + 4;
                } while (uVar20 < *puVar15);
            }
            puVar16 = uStack_504;
            perf_trace_run_bpf_submit(iVar10,iVar8,puVar16,uVar18,1,iStack_500,piVar3,0);
            uVar17 = uVar18;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_4f8) {
        auVar32 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_09 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar32._0_8_,auVar32._8_8_,puVar16 & 0xffffffff,uVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_relinquish_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007af8 (size 8) =====

void sym.__bpf_trace_relinquish_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.perf_trace_relinquish_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b00 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_relinquish_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (uint64_t param_1,uint *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint16_t *puVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint16_t *puVar17;
    uint32_t *puVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x22;
    int64_t *piVar24;
    int64_t unaff_x23;
    code *pcVar25;
    uint64_t unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auVar29 [12];
    uchar auStack_410 [12];
    uint32_t uStack_404;
    int64_t iStack_400;
    int64_t iStack_3f8;
    ulong ***pppuStack_3f0;
    code *pcStack_3e8;
    code *pcStack_3e0;
    code *pcStack_3d0;
    int64_t *piStack_3c8;
    int64_t *piStack_3c0;
    int64_t iStack_3b8;
    uint64_t uStack_3b0;
    uint32_t *puStack_3a8;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    ulong uStack_378;
    ulong uStack_370;
    int64_t iStack_368;
    ulong ***pppuStack_360;
    ulong uStack_358;
    int64_t *piStack_350;
    uint16_t *puStack_340;
    uint64_t uStack_338;
    uint64_t uStack_330;
    uint64_t uStack_328;
    uchar auStack_320 [12];
    uint32_t uStack_314;
    int64_t iStack_310;
    int64_t iStack_308;
    ulong ***pppuStack_300;
    code *pcStack_2f8;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    ulong ***pppuStack_270;
    ulong uStack_268;
    code *pcStack_260;
    int64_t iStack_258;
    uint64_t uStack_250;
    int64_t *piStack_248;
    uint *puStack_240;
    uint64_t uStack_238;
    uchar auStack_230 [12];
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    code *pcStack_208;
    ulong uStack_200;
    code *pcStack_1f0;
    int64_t iStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [16];
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar ***pppuStack_180;
    ulong uStack_178;
    int64_t *piStack_170;
    uint *puStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong uStack_120;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    uint *puStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    uint *puVar9;
    uint *puVar10;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    if (param_2[1] < 4) {
        pcVar5 = *(param_2[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    uVar6 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_64;
        unaff_x22 = (uVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_60);
        uVar8 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar16 = -1L << (uVar8 & 0x3f);
            uVar8 = (~uVar16 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar16 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar8;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 8) = uVar6 * 0x10000 + 0x10014;
            if (param_2[1] < 4) {
                pcVar5 = *(param_2[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x14,pcVar5);
            param_3 = uStack_64;
            *(iVar7 + 0xc) = param_2[3];
            *(iVar7 + 0x10) = *param_2;
            param_4 = param_1;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,param_1,1,iStack_60,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar9 = auVar26._8_8_;
    iVar19 = auVar26._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x800abe4;
    uStack_98 = 0x800abe4;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar22 = *(iVar19 + 0x48);
    puStack_a0 = &stack0xffffffffffffffb0;
    piStack_90 = piVar1;
    puStack_80 = param_2;
    uStack_78 = param_1;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(iVar19,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(iVar19), (uVar8 & 1) == 0))))
        goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        if (puVar9[1] < 4) {
            pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar5 = "(null)";
        }
        iVar4 = strlen(pcVar5);
        param_3 = iVar4 + 1 + 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_d8,iVar19);
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = (iVar4 + 1) * 0x10000 | 0x18;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar5);
            *(iVar7 + 0x10) = puVar9[3];
            *(iVar7 + 0x14) = puVar9[4];
            trace_event_buffer_commit(&uStack_d8);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar9 = auVar26._8_8_;
    uVar8 = auVar26._0_8_;
    *extraout_x18_00 = sym.perf_trace_alloc_resp_class;
    pcStack_128 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_140 = 0;
    uStack_144 = 0;
    if (puVar9[1] < 4) {
        pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    ppuStack_130 = &puStack_a0;
    uStack_120 = uVar6;
    uVar6 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_144;
        unaff_x22 = (uVar6 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_140);
        uVar16 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_140 + 0xe8) = &ppuStack_130;
            *(iStack_140 + 0xf8) = auStack_150;
            *(iStack_140 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x800ad34;
            *(iStack_140 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar6 * 0x10000 + 0x10018;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar5);
            param_3 = uStack_144;
            *(iVar7 + 0x10) = puVar9[3];
            *(iVar7 + 0x14) = puVar9[4];
            param_4 = uVar8;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar8,1,iStack_140,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar10 = auVar27._8_8_;
    iVar19 = auVar27._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_01 = 0x800aee4;
    uStack_178 = 0x800aee4;
    iVar7 = sp_el0;
    iStack_188 = *(iVar7 + 0x5e0);
    uVar16 = *(iVar19 + 0x48);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar22 = uVar16;
    pppuStack_180 = &ppuStack_130;
    piStack_170 = piVar1;
    if ((uVar22 >> 8 & 1) == 0) {
        if ((uVar22 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_160 = puVar9;
            uStack_158 = uVar8;
            event_triggers_call(iVar19,0);
            auVar26._8_8_ = puStack_160;
            auVar26._0_8_ = uStack_158;
        }
        puStack_160 = auVar26._8_8_;
        uStack_158 = auVar26._0_8_;
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 ||
            (uVar8 = trace_event_ignore_this_pid(iVar19), auVar26._8_8_ = puStack_160, auVar26._0_8_ = uStack_158,
            (uVar8 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_160 = auVar26._8_8_;
        uStack_158 = auVar26._0_8_;
        if (puVar10[1] < 4) {
            pcVar5 = *(puVar10[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar5 = "(null)";
        }
        iVar4 = strlen(pcVar5);
        uVar22 = iVar4 + 1;
        uVar16 = uVar22;
        param_3 = uVar22 + 0x10;
        iVar7 = trace_event_buffer_reserve(&uStack_1b8,iVar19);
        auVar26._8_8_ = puStack_160;
        auVar26._0_8_ = uStack_158;
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = uVar22 * 0x10000 | 0x10;
            *(iVar7 + 8) = *puVar10;
            if (puVar10[1] < 4) {
                pcVar5 = *(puVar10[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar5);
            trace_event_buffer_commit(&uStack_1b8);
            auVar26._8_8_ = puStack_160;
            auVar26._0_8_ = uStack_158;
        }
    }
    puStack_160 = auVar26._8_8_;
    uStack_158 = auVar26._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_188) {
        return;
    }
    auVar28 = __stack_chk_fail();
    puVar9 = auVar28._8_8_;
    uVar8 = auVar28._0_8_;
    *extraout_x18_02 = sym.perf_trace_relinquish_resp_class;
    pcStack_208 = sym.perf_trace_relinquish_resp_class;
    pcStack_1f0 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    pcVar25 = sym.perf_trace_relinquish_resp_class;
    iStack_218 = *(iVar7 + 0x5e0);
    iStack_220 = 0;
    uStack_224 = 0;
    if (puVar9[1] < 4) {
        pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    pppuStack_210 = &pppuStack_180;
    uStack_200 = uVar6;
    iStack_1e8 = unaff_x23;
    uStack_1e0 = unaff_x22;
    uStack_1d8 = uVar16;
    auStack_1d0 = auVar27;
    iVar4 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_224;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_220);
        uVar16 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_220 + 0xe8) = &pppuStack_210;
            *(iStack_220 + 0xf8) = auStack_230;
            *(iStack_220 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x800b020;
            *(iStack_220 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar5);
            param_3 = uStack_224;
            param_4 = uVar8;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar8,1,iStack_220,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_218) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar11 = auVar26._8_8_;
    iVar19 = auVar26._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x800b1c0;
    uStack_268 = 0x800b1c0;
    pcStack_260 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_278 = *(iVar7 + 0x5e0);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar22 = *(iVar19 + 0x48);
    uVar16 = param_4;
    pppuStack_270 = &pppuStack_210;
    iStack_258 = unaff_x23;
    uStack_250 = unaff_x22;
    piStack_248 = piVar1;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = param_3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            puStack_240 = puVar9;
            uStack_238 = uVar8;
            event_triggers_call(iVar19,0);
            auVar28._8_8_ = puStack_240;
            auVar28._0_8_ = uStack_238;
        }
        puStack_240 = auVar28._8_8_;
        uStack_238 = auVar28._0_8_;
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 ||
            (uVar8 = trace_event_ignore_this_pid(iVar19), auVar28._8_8_ = puStack_240, auVar28._0_8_ = uStack_238,
            (uVar8 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_240 = auVar28._8_8_;
        uStack_238 = auVar28._0_8_;
        uVar2 = *puVar11;
        pcVar25 = uVar2;
        puVar12 = pcVar25 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_2a8,iVar19);
        auVar28._8_8_ = puStack_240;
        auVar28._0_8_ = uStack_238;
        if (iVar7 != 0) {
            uVar22 = uVar2 << 0x13;
            uVar8 = pcVar25 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar22 | 0x1c;
            *(iVar7 + 0x10) = uVar8 | uVar22;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar14 = 0;
                puVar17 = puVar11 + 6;
                do {
                    iVar19 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar19) = *(puVar17 + -4);
                    *(iVar7 + (uVar8 & 0xfffc) + iVar19) = *puVar17;
                    puVar17 = puVar17 + 8;
                } while (uVar14 < *puVar11);
            }
            *(iVar7 + 0x14) = param_3;
            *(iVar7 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_2a8);
            auVar28._8_8_ = puStack_240;
            auVar28._0_8_ = uStack_238;
        }
    }
    puStack_240 = auVar28._8_8_;
    uStack_238 = auVar28._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_278) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar11 = auVar27._8_8_;
    uVar14 = auVar27._0_8_;
    *extraout_x18_04 = sym.perf_trace_lookup_sgl;
    pcStack_2f8 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_308 = *(iVar7 + 0x5e0);
    uVar21 = uVar16 & 0xffffffff;
    uVar23 = puVar12 & 0xffffffff;
    iStack_310 = 0;
    uStack_314 = 0;
    uVar2 = *puVar11;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    uVar8 = uVar16;
    pppuStack_300 = &pppuStack_270;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_314;
        pcVar25 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar25,&iStack_310);
        if (iVar7 != 0) {
            uVar15 = _hyp_assign_table & 0x3f;
            *(iStack_310 + 0xe8) = &pppuStack_300;
            *(iStack_310 + 0xf8) = auStack_320;
            uVar8 = uVar2 * 8 + 0x1c;
            *(iStack_310 + 0x100) = ~(-1L << uVar15) & 0x800b30c;
            *(iStack_310 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar8 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar15 = 0;
                puVar17 = puVar11 + 6;
                do {
                    iVar19 = uVar15 * 8;
                    uVar15 = uVar15 + 1;
                    *(iVar7 + 0x1c + iVar19) = *(puVar17 + -4);
                    *(iVar7 + (uVar8 & 0xfffc) + iVar19) = *puVar17;
                    puVar17 = puVar17 + 8;
                } while (uVar15 < *puVar11);
            }
            puVar13 = uStack_314;
            *(iVar7 + 0x14) = puVar12;
            *(iVar7 + 0x18) = uVar16;
            uVar8 = uVar14;
            perf_trace_run_bpf_submit(iVar7,pcVar25,puVar13,uVar14,1,iStack_310,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_308) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar19 = auVar26._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_05 = 0x800b4ac;
    uStack_358 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_368 = *(iVar7 + 0x5e0);
    uVar16 = auVar26._8_8_ & 0xffffffff;
    piVar24 = *(iVar19 + 0x48);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uVar22 = piVar24;
    pppuStack_360 = &pppuStack_300;
    piStack_350 = piVar1;
    uStack_338 = uVar23;
    uStack_330 = uVar21;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar8 = 0;
            puStack_340 = puVar11;
            uStack_328 = uVar14;
            event_triggers_call(iVar19,0,0,0);
            auVar27._8_8_ = puStack_340;
            auVar27._0_8_ = uStack_328;
        }
        puStack_340 = auVar27._8_8_;
        uStack_328 = auVar27._0_8_;
        piStack_3c8 = piVar1;
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 &&
            (uVar14 = trace_event_ignore_this_pid(iVar19), auVar27._8_8_ = puStack_340, auVar27._0_8_ = uStack_328,
            (uVar14 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_340 = auVar27._8_8_;
    uStack_328 = auVar27._0_8_;
    uVar22 = *puVar13;
    piVar24 = uVar22;
    puVar12 = piVar24 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_398,iVar19);
    auVar27._8_8_ = puStack_340;
    auVar27._0_8_ = uStack_328;
    piStack_3c8 = piVar24;
    if (iVar7 != 0) {
        uVar22 = uVar22 << 0x13;
        uVar14 = piVar24 * 8 + 0x18;
        *(iVar7 + 8) = auVar26._8_4_;
        *(iVar7 + 0x10) = uVar22 | 0x18;
        *(iVar7 + 0x14) = uVar14 | uVar22;
        *(iVar7 + 0xc) = *puVar13;
        if (*puVar13 != 0) {
            uVar21 = 0;
            puVar18 = puVar13 + 3;
            do {
                iVar20 = uVar21 * 8;
                uVar21 = uVar21 + 1;
                *(iVar7 + 0x18 + iVar20) = *(puVar18 + -2);
                *(iVar7 + (uVar14 & 0xfff8) + iVar20) = *puVar18;
                puVar18 = puVar18 + 4;
            } while (uVar21 < *puVar13);
        }
        trace_event_buffer_commit(&uStack_398);
        auVar27._8_8_ = puStack_340;
        auVar27._0_8_ = uStack_328;
    }
code_r0x0800b5bc:
    puStack_340 = auVar27._8_8_;
    uStack_328 = auVar27._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_368) {
        return;
    }
    auVar29 = __stack_chk_fail();
    uVar14 = auVar29._0_8_;
    *extraout_x18_06 = sym.perf_trace_map_mem_s2;
    pcStack_3e8 = sym.perf_trace_map_mem_s2;
    pcStack_3e0 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_3f8 = *(iVar7 + 0x5e0);
    iStack_400 = 0;
    uStack_404 = 0;
    uVar2 = *puVar12;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    pppuStack_3f0 = &pppuStack_360;
    pcStack_3d0 = pcVar25;
    piStack_3c0 = piVar24;
    iStack_3b8 = iVar19;
    uStack_3b0 = uVar16;
    puStack_3a8 = puVar13;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_404;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_400,puVar13);
        if (iVar7 != 0) {
            uVar16 = _hyp_assign_table & 0x3f;
            *(iStack_400 + 0xe8) = &pppuStack_3f0;
            *(iStack_400 + 0xf8) = auStack_410;
            uVar8 = uVar2 * 8 + 0x18;
            *(iStack_400 + 0x100) = ~(-1L << uVar16) & 0x800b5f4;
            *(iStack_400 + 0x108) = 5;
            *(iVar7 + 8) = auVar29._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar8 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar12;
            if (*puVar12 != 0) {
                uVar16 = 0;
                puVar13 = puVar12 + 3;
                do {
                    iVar19 = uVar16 * 8;
                    uVar16 = uVar16 + 1;
                    *(iVar7 + 0x18 + iVar19) = *(puVar13 + -2);
                    *(iVar7 + (uVar8 & 0xfff8) + iVar19) = *puVar13;
                    puVar13 = puVar13 + 4;
                } while (uVar16 < *puVar12);
            }
            puVar13 = uStack_404;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar13,uVar14,1,iStack_400,piVar1,0);
            uVar8 = uVar14;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_3f8) {
        auVar26 = __stack_chk_fail();
        uVar6 = tpidr_el2;
        *extraout_x18_07 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_,puVar13 & 0xffffffff,uVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_relinquish_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b08 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_relinquish_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,uint *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint16_t *puVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t unaff_x22;
    int64_t *piVar22;
    int64_t unaff_x23;
    code *pcVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uchar auVar26 [12];
    uchar auStack_2c0 [12];
    uint32_t uStack_2b4;
    int64_t iStack_2b0;
    int64_t iStack_2a8;
    ulong ***pppuStack_2a0;
    code *pcStack_298;
    code *pcStack_290;
    code *pcStack_280;
    int64_t *piStack_278;
    int64_t *piStack_270;
    int64_t iStack_268;
    uint64_t uStack_260;
    uint32_t *puStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    uint16_t *puStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    code *pcStack_110;
    int64_t iStack_108;
    uint64_t uStack_100;
    int64_t *piStack_f8;
    uint *puStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    uint *puVar8;
    uint16_t *puVar9;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar20 = *(param_1 + 0x48);
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) == 0))))
        goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        if (param_2[1] < 4) {
            pcVar6 = *(param_2[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        param_3 = iVar4 + 1 + 0x10;
        iVar7 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = (iVar4 + 1) * 0x10000 | 0x10;
            *(iVar7 + 8) = *param_2;
            if (param_2[1] < 4) {
                pcVar6 = *(param_2[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar8 = auVar24._8_8_;
    uVar5 = auVar24._0_8_;
    *extraout_x18 = sym.perf_trace_relinquish_resp_class;
    pcStack_b8 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    pcVar23 = sym.perf_trace_relinquish_resp_class;
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    if (puVar8[1] < 4) {
        pcVar6 = *(puVar8[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    iVar4 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_d4;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_d0);
        uVar12 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x800b020;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar8;
            if (puVar8[1] < 4) {
                pcVar6 = *(puVar8[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            param_3 = uStack_d4;
            param_4 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar5,1,iStack_d0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar9 = auVar25._8_8_;
    iVar17 = auVar25._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_00 = 0x800b1c0;
    uStack_118 = 0x800b1c0;
    pcStack_110 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_128 = *(iVar7 + 0x5e0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar20 = *(iVar17 + 0x48);
    uVar12 = param_4;
    ppuStack_120 = &puStack_c0;
    iStack_108 = unaff_x23;
    uStack_100 = unaff_x22;
    piStack_f8 = piVar1;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = param_3;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar12 = 0;
            puStack_f0 = puVar8;
            uStack_e8 = uVar5;
            event_triggers_call(iVar17,0);
            auVar24._8_8_ = puStack_f0;
            auVar24._0_8_ = uStack_e8;
        }
        puStack_f0 = auVar24._8_8_;
        uStack_e8 = auVar24._0_8_;
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar17), auVar24._8_8_ = puStack_f0, auVar24._0_8_ = uStack_e8,
            (uVar5 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_f0 = auVar24._8_8_;
        uStack_e8 = auVar24._0_8_;
        uVar2 = *puVar9;
        pcVar23 = uVar2;
        puVar10 = pcVar23 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_158,iVar17);
        auVar24._8_8_ = puStack_f0;
        auVar24._0_8_ = uStack_e8;
        if (iVar7 != 0) {
            uVar20 = uVar2 << 0x13;
            uVar5 = pcVar23 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar20 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar20;
            *(iVar7 + 8) = *puVar9;
            if (*puVar9 != 0) {
                uVar13 = 0;
                puVar15 = puVar9 + 6;
                do {
                    iVar17 = uVar13 * 8;
                    uVar13 = uVar13 + 1;
                    *(iVar7 + 0x1c + iVar17) = *(puVar15 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar17) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar13 < *puVar9);
            }
            *(iVar7 + 0x14) = param_3;
            *(iVar7 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_158);
            auVar24._8_8_ = puStack_f0;
            auVar24._0_8_ = uStack_e8;
        }
    }
    puStack_f0 = auVar24._8_8_;
    uStack_e8 = auVar24._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_128) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar9 = auVar25._8_8_;
    uVar13 = auVar25._0_8_;
    *extraout_x18_01 = sym.perf_trace_lookup_sgl;
    pcStack_1a8 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    uVar19 = uVar12 & 0xffffffff;
    uVar21 = puVar10 & 0xffffffff;
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    uVar2 = *puVar9;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    uVar5 = uVar12;
    pppuStack_1b0 = &ppuStack_120;
    if ((*(uVar13 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_1c4;
        pcVar23 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar23,&iStack_1c0);
        if (iVar7 != 0) {
            uVar14 = _hyp_assign_table & 0x3f;
            *(iStack_1c0 + 0xe8) = &pppuStack_1b0;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            uVar5 = uVar2 * 8 + 0x1c;
            *(iStack_1c0 + 0x100) = ~(-1L << uVar14) & 0x800b30c;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar9;
            if (*puVar9 != 0) {
                uVar14 = 0;
                puVar15 = puVar9 + 6;
                do {
                    iVar17 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar17) = *(puVar15 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar17) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar14 < *puVar9);
            }
            puVar11 = uStack_1c4;
            *(iVar7 + 0x14) = puVar10;
            *(iVar7 + 0x18) = uVar12;
            uVar5 = uVar13;
            perf_trace_run_bpf_submit(iVar7,pcVar23,puVar11,uVar13,1,iStack_1c0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar17 = auVar24._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_02 = 0x800b4ac;
    uStack_208 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_218 = *(iVar7 + 0x5e0);
    uVar12 = auVar24._8_8_ & 0xffffffff;
    piVar22 = *(iVar17 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar20 = piVar22;
    pppuStack_210 = &pppuStack_1b0;
    piStack_200 = piVar1;
    uStack_1e8 = uVar21;
    uStack_1e0 = uVar19;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar5 = 0;
            puStack_1f0 = puVar9;
            uStack_1d8 = uVar13;
            event_triggers_call(iVar17,0,0,0);
            auVar25._8_8_ = puStack_1f0;
            auVar25._0_8_ = uStack_1d8;
        }
        puStack_1f0 = auVar25._8_8_;
        uStack_1d8 = auVar25._0_8_;
        piStack_278 = piVar1;
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 &&
            (uVar13 = trace_event_ignore_this_pid(iVar17), auVar25._8_8_ = puStack_1f0, auVar25._0_8_ = uStack_1d8,
            (uVar13 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_1f0 = auVar25._8_8_;
    uStack_1d8 = auVar25._0_8_;
    uVar20 = *puVar11;
    piVar22 = uVar20;
    puVar10 = piVar22 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_248,iVar17);
    auVar25._8_8_ = puStack_1f0;
    auVar25._0_8_ = uStack_1d8;
    piStack_278 = piVar22;
    if (iVar7 != 0) {
        uVar20 = uVar20 << 0x13;
        uVar13 = piVar22 * 8 + 0x18;
        *(iVar7 + 8) = auVar24._8_4_;
        *(iVar7 + 0x10) = uVar20 | 0x18;
        *(iVar7 + 0x14) = uVar13 | uVar20;
        *(iVar7 + 0xc) = *puVar11;
        if (*puVar11 != 0) {
            uVar19 = 0;
            puVar16 = puVar11 + 3;
            do {
                iVar18 = uVar19 * 8;
                uVar19 = uVar19 + 1;
                *(iVar7 + 0x18 + iVar18) = *(puVar16 + -2);
                *(iVar7 + (uVar13 & 0xfff8) + iVar18) = *puVar16;
                puVar16 = puVar16 + 4;
            } while (uVar19 < *puVar11);
        }
        trace_event_buffer_commit(&uStack_248);
        auVar25._8_8_ = puStack_1f0;
        auVar25._0_8_ = uStack_1d8;
    }
code_r0x0800b5bc:
    puStack_1f0 = auVar25._8_8_;
    uStack_1d8 = auVar25._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_218) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar13 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_map_mem_s2;
    pcStack_298 = sym.perf_trace_map_mem_s2;
    pcStack_290 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_2a8 = *(iVar7 + 0x5e0);
    iStack_2b0 = 0;
    uStack_2b4 = 0;
    uVar2 = *puVar10;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    pppuStack_2a0 = &pppuStack_210;
    pcStack_280 = pcVar23;
    piStack_270 = piVar22;
    iStack_268 = iVar17;
    uStack_260 = uVar12;
    puStack_258 = puVar11;
    if ((*(uVar13 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_2b4;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_2b0,puVar11);
        if (iVar7 != 0) {
            uVar12 = _hyp_assign_table & 0x3f;
            *(iStack_2b0 + 0xe8) = &pppuStack_2a0;
            *(iStack_2b0 + 0xf8) = auStack_2c0;
            uVar5 = uVar2 * 8 + 0x18;
            *(iStack_2b0 + 0x100) = ~(-1L << uVar12) & 0x800b5f4;
            *(iStack_2b0 + 0x108) = 5;
            *(iVar7 + 8) = auVar26._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar10;
            if (*puVar10 != 0) {
                uVar12 = 0;
                puVar11 = puVar10 + 3;
                do {
                    iVar17 = uVar12 * 8;
                    uVar12 = uVar12 + 1;
                    *(iVar7 + 0x18 + iVar17) = *(puVar11 + -2);
                    *(iVar7 + (uVar5 & 0xfff8) + iVar17) = *puVar11;
                    puVar11 = puVar11 + 4;
                } while (uVar12 < *puVar10);
            }
            puVar11 = uStack_2b4;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar11,uVar13,1,iStack_2b0,piVar1,0);
            uVar5 = uVar13;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_2a8) {
        auVar24 = __stack_chk_fail();
        uVar3 = tpidr_el2;
        *extraout_x18_04 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar24._0_8_,auVar24._8_8_,puVar11 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_relinquish_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b10 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_relinquish_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,uint *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong uVar8;
    uint16_t *puVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint16_t *puVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x22;
    int64_t *piVar24;
    int64_t unaff_x23;
    code *pcVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auVar29 [16];
    uchar auVar30 [12];
    uchar auStack_480 [12];
    uint32_t uStack_474;
    int64_t iStack_470;
    int64_t iStack_468;
    ulong ***pppuStack_460;
    code *pcStack_458;
    code *pcStack_450;
    code *pcStack_440;
    int64_t *piStack_438;
    int64_t *piStack_430;
    int64_t iStack_428;
    uint64_t uStack_420;
    uint32_t *puStack_418;
    ulong uStack_408;
    ulong uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    ulong uStack_3e8;
    ulong uStack_3e0;
    int64_t iStack_3d8;
    ulong ***pppuStack_3d0;
    ulong uStack_3c8;
    int64_t *piStack_3c0;
    uint16_t *puStack_3b0;
    uint64_t uStack_3a8;
    uint64_t uStack_3a0;
    uint64_t uStack_398;
    uchar auStack_390 [12];
    uint32_t uStack_384;
    int64_t iStack_380;
    int64_t iStack_378;
    ulong ***pppuStack_370;
    code *pcStack_368;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    int64_t iStack_2e8;
    ulong ***pppuStack_2e0;
    ulong uStack_2d8;
    code *pcStack_2d0;
    int64_t iStack_2c8;
    uint64_t uStack_2c0;
    int64_t *piStack_2b8;
    uint *puStack_2b0;
    uint64_t uStack_2a8;
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    ulong uStack_270;
    code *pcStack_260;
    int64_t iStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uchar auStack_240 [16];
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    ulong uStack_1e8;
    int64_t *piStack_1e0;
    uint *puStack_1d0;
    uint64_t uStack_1c8;
    uchar auStack_1c0 [12];
    uint32_t uStack_1b4;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    uchar ***pppuStack_1a0;
    code *pcStack_198;
    ulong uStack_190;
    code *pcStack_180;
    int64_t iStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    int64_t iStack_160;
    uint *puStack_158;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    int64_t *piStack_100;
    uint *puStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    uint *puVar9;
    uint *puVar10;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar21 = *(param_1 + 0x48);
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) == 0))))
        goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        if (param_2[1] < 4) {
            pcVar6 = *(param_2[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        param_3 = iVar4 + 1 + 0x14;
        iVar7 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar7 != 0) {
            *(iVar7 + 8) = (iVar4 + 1) * 0x10000 | 0x14;
            if (param_2[1] < 4) {
                pcVar6 = *(param_2[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x14,pcVar6);
            *(iVar7 + 0xc) = param_2[3];
            *(iVar7 + 0x10) = *param_2;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar9 = auVar26._8_8_;
    uVar5 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_b8 = sym.perf_trace_relinquish_req_msg_class;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    uVar8 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_d4;
        unaff_x22 = (uVar8 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_d0);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800aa3c;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 8) = uVar8 * 0x10000 + 0x10014;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x14,pcVar6);
            param_3 = uStack_d4;
            *(iVar7 + 0xc) = puVar9[3];
            *(iVar7 + 0x10) = *puVar9;
            param_4 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar5,1,iStack_d0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar10 = auVar27._8_8_;
    iVar18 = auVar27._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_00 = 0x800abe4;
    uStack_108 = 0x800abe4;
    iVar7 = sp_el0;
    iStack_118 = *(iVar7 + 0x5e0);
    uVar22 = *(iVar18 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar21 = uVar22;
    ppuStack_110 = &puStack_c0;
    piStack_100 = piVar1;
    iStack_160 = iVar18;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_f0 = puVar9;
            uStack_e8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar26._8_8_ = puStack_f0;
            auVar26._0_8_ = uStack_e8;
        }
        puStack_f0 = auVar26._8_8_;
        uStack_e8 = auVar26._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar26._8_8_ = puStack_f0, auVar26._0_8_ = uStack_e8,
            (uVar5 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_f0 = auVar26._8_8_;
        uStack_e8 = auVar26._0_8_;
        if (puVar10[1] < 4) {
            pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        uVar21 = iVar4 + 1;
        uVar22 = uVar21;
        param_3 = uVar21 + 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_148,iVar18);
        auVar26._8_8_ = puStack_f0;
        auVar26._0_8_ = uStack_e8;
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = uVar21 * 0x10000 | 0x18;
            *(iVar7 + 8) = *puVar10;
            if (puVar10[1] < 4) {
                pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar6);
            *(iVar7 + 0x10) = puVar10[3];
            *(iVar7 + 0x14) = puVar10[4];
            trace_event_buffer_commit(&uStack_148);
            auVar26._8_8_ = puStack_f0;
            auVar26._0_8_ = uStack_e8;
            iStack_160 = iVar7;
        }
    }
    puStack_f0 = auVar26._8_8_;
    uStack_e8 = auVar26._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_118) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar9 = auVar27._8_8_;
    uVar5 = auVar27._0_8_;
    *extraout_x18_01 = sym.perf_trace_alloc_resp_class;
    pcStack_198 = sym.perf_trace_alloc_resp_class;
    pcStack_180 = sym.perf_trace_relinquish_req_msg_class;
    iVar7 = sp_el0;
    iStack_1a8 = *(iVar7 + 0x5e0);
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    pppuStack_1a0 = &ppuStack_110;
    uStack_190 = uVar8;
    iStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    uStack_168 = uVar22;
    puStack_158 = puVar10;
    uVar8 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_1b4;
        unaff_x22 = (uVar8 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_1b0);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_1b0 + 0xe8) = &pppuStack_1a0;
            *(iStack_1b0 + 0xf8) = auStack_1c0;
            *(iStack_1b0 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800ad34;
            *(iStack_1b0 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar8 * 0x10000 + 0x10018;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar6);
            param_3 = uStack_1b4;
            *(iVar7 + 0x10) = puVar9[3];
            *(iVar7 + 0x14) = puVar9[4];
            param_4 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar5,1,iStack_1b0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar10 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_02 = 0x800aee4;
    uStack_1e8 = 0x800aee4;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    uVar22 = *(iVar18 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar21 = uVar22;
    pppuStack_1f0 = &pppuStack_1a0;
    piStack_1e0 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_1d0 = puVar9;
            uStack_1c8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar27._8_8_ = puStack_1d0;
            auVar27._0_8_ = uStack_1c8;
        }
        puStack_1d0 = auVar27._8_8_;
        uStack_1c8 = auVar27._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar27._8_8_ = puStack_1d0, auVar27._0_8_ = uStack_1c8,
            (uVar5 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_1d0 = auVar27._8_8_;
        uStack_1c8 = auVar27._0_8_;
        if (puVar10[1] < 4) {
            pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        uVar21 = iVar4 + 1;
        uVar22 = uVar21;
        param_3 = uVar21 + 0x10;
        iVar7 = trace_event_buffer_reserve(&uStack_228,iVar18);
        auVar27._8_8_ = puStack_1d0;
        auVar27._0_8_ = uStack_1c8;
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = uVar21 * 0x10000 | 0x10;
            *(iVar7 + 8) = *puVar10;
            if (puVar10[1] < 4) {
                pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            trace_event_buffer_commit(&uStack_228);
            auVar27._8_8_ = puStack_1d0;
            auVar27._0_8_ = uStack_1c8;
        }
    }
    puStack_1d0 = auVar27._8_8_;
    uStack_1c8 = auVar27._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar28 = __stack_chk_fail();
    puVar9 = auVar28._8_8_;
    uVar5 = auVar28._0_8_;
    *extraout_x18_03 = sym.perf_trace_relinquish_resp_class;
    pcStack_278 = sym.perf_trace_relinquish_resp_class;
    pcStack_260 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    pcVar25 = sym.perf_trace_relinquish_resp_class;
    iStack_288 = *(iVar7 + 0x5e0);
    iStack_290 = 0;
    uStack_294 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    pppuStack_280 = &pppuStack_1f0;
    uStack_270 = uVar8;
    iStack_258 = unaff_x23;
    uStack_250 = unaff_x22;
    uStack_248 = uVar22;
    auStack_240 = auVar26;
    iVar4 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_294;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_290);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_290 + 0xe8) = &pppuStack_280;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800b020;
            *(iStack_290 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            param_3 = uStack_294;
            param_4 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,param_3,uVar5,1,iStack_290,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_288) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar11 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x800b1c0;
    uStack_2d8 = 0x800b1c0;
    pcStack_2d0 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_2e8 = *(iVar7 + 0x5e0);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uVar21 = *(iVar18 + 0x48);
    uVar22 = param_4;
    pppuStack_2e0 = &pppuStack_280;
    iStack_2c8 = unaff_x23;
    uStack_2c0 = unaff_x22;
    piStack_2b8 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar12 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar22 = 0;
            puStack_2b0 = puVar9;
            uStack_2a8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar28._8_8_ = puStack_2b0;
            auVar28._0_8_ = uStack_2a8;
        }
        puStack_2b0 = auVar28._8_8_;
        uStack_2a8 = auVar28._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar28._8_8_ = puStack_2b0, auVar28._0_8_ = uStack_2a8,
            (uVar5 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_2b0 = auVar28._8_8_;
        uStack_2a8 = auVar28._0_8_;
        uVar2 = *puVar11;
        pcVar25 = uVar2;
        puVar12 = pcVar25 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_318,iVar18);
        auVar28._8_8_ = puStack_2b0;
        auVar28._0_8_ = uStack_2a8;
        if (iVar7 != 0) {
            uVar21 = uVar2 << 0x13;
            uVar5 = pcVar25 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar21 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar21;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar14 = 0;
                puVar16 = puVar11 + 6;
                do {
                    iVar18 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar14 < *puVar11);
            }
            *(iVar7 + 0x14) = param_3;
            *(iVar7 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_318);
            auVar28._8_8_ = puStack_2b0;
            auVar28._0_8_ = uStack_2a8;
        }
    }
    puStack_2b0 = auVar28._8_8_;
    uStack_2a8 = auVar28._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_2e8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    puVar11 = auVar29._8_8_;
    uVar14 = auVar29._0_8_;
    *extraout_x18_05 = sym.perf_trace_lookup_sgl;
    pcStack_368 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_378 = *(iVar7 + 0x5e0);
    uVar20 = uVar22 & 0xffffffff;
    uVar23 = puVar12 & 0xffffffff;
    iStack_380 = 0;
    uStack_384 = 0;
    uVar2 = *puVar11;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    uVar5 = uVar22;
    pppuStack_370 = &pppuStack_2e0;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_384;
        pcVar25 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar25,&iStack_380);
        if (iVar7 != 0) {
            uVar15 = _hyp_assign_table & 0x3f;
            *(iStack_380 + 0xe8) = &pppuStack_370;
            *(iStack_380 + 0xf8) = auStack_390;
            uVar5 = uVar2 * 8 + 0x1c;
            *(iStack_380 + 0x100) = ~(-1L << uVar15) & 0x800b30c;
            *(iStack_380 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar15 = 0;
                puVar16 = puVar11 + 6;
                do {
                    iVar18 = uVar15 * 8;
                    uVar15 = uVar15 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar15 < *puVar11);
            }
            puVar13 = uStack_384;
            *(iVar7 + 0x14) = puVar12;
            *(iVar7 + 0x18) = uVar22;
            uVar5 = uVar14;
            perf_trace_run_bpf_submit(iVar7,pcVar25,puVar13,uVar14,1,iStack_380,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_378) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar18 = auVar26._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_06 = 0x800b4ac;
    uStack_3c8 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_3d8 = *(iVar7 + 0x5e0);
    uVar22 = auVar26._8_8_ & 0xffffffff;
    piVar24 = *(iVar18 + 0x48);
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    uVar21 = piVar24;
    pppuStack_3d0 = &pppuStack_370;
    piStack_3c0 = piVar1;
    uStack_3a8 = uVar23;
    uStack_3a0 = uVar20;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar5 = 0;
            puStack_3b0 = puVar11;
            uStack_398 = uVar14;
            event_triggers_call(iVar18,0,0,0);
            auVar29._8_8_ = puStack_3b0;
            auVar29._0_8_ = uStack_398;
        }
        puStack_3b0 = auVar29._8_8_;
        uStack_398 = auVar29._0_8_;
        piStack_438 = piVar1;
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 &&
            (uVar14 = trace_event_ignore_this_pid(iVar18), auVar29._8_8_ = puStack_3b0, auVar29._0_8_ = uStack_398,
            (uVar14 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_3b0 = auVar29._8_8_;
    uStack_398 = auVar29._0_8_;
    uVar21 = *puVar13;
    piVar24 = uVar21;
    puVar12 = piVar24 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_408,iVar18);
    auVar29._8_8_ = puStack_3b0;
    auVar29._0_8_ = uStack_398;
    piStack_438 = piVar24;
    if (iVar7 != 0) {
        uVar21 = uVar21 << 0x13;
        uVar14 = piVar24 * 8 + 0x18;
        *(iVar7 + 8) = auVar26._8_4_;
        *(iVar7 + 0x10) = uVar21 | 0x18;
        *(iVar7 + 0x14) = uVar14 | uVar21;
        *(iVar7 + 0xc) = *puVar13;
        if (*puVar13 != 0) {
            uVar20 = 0;
            puVar17 = puVar13 + 3;
            do {
                iVar19 = uVar20 * 8;
                uVar20 = uVar20 + 1;
                *(iVar7 + 0x18 + iVar19) = *(puVar17 + -2);
                *(iVar7 + (uVar14 & 0xfff8) + iVar19) = *puVar17;
                puVar17 = puVar17 + 4;
            } while (uVar20 < *puVar13);
        }
        trace_event_buffer_commit(&uStack_408);
        auVar29._8_8_ = puStack_3b0;
        auVar29._0_8_ = uStack_398;
    }
code_r0x0800b5bc:
    puStack_3b0 = auVar29._8_8_;
    uStack_398 = auVar29._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_3d8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar14 = auVar30._0_8_;
    *extraout_x18_07 = sym.perf_trace_map_mem_s2;
    pcStack_458 = sym.perf_trace_map_mem_s2;
    pcStack_450 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_468 = *(iVar7 + 0x5e0);
    iStack_470 = 0;
    uStack_474 = 0;
    uVar2 = *puVar12;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    pppuStack_460 = &pppuStack_3d0;
    pcStack_440 = pcVar25;
    piStack_430 = piVar24;
    iStack_428 = iVar18;
    uStack_420 = uVar22;
    puStack_418 = puVar13;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_474;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_470,puVar13);
        if (iVar7 != 0) {
            uVar22 = _hyp_assign_table & 0x3f;
            *(iStack_470 + 0xe8) = &pppuStack_460;
            *(iStack_470 + 0xf8) = auStack_480;
            uVar5 = uVar2 * 8 + 0x18;
            *(iStack_470 + 0x100) = ~(-1L << uVar22) & 0x800b5f4;
            *(iStack_470 + 0x108) = 5;
            *(iVar7 + 8) = auVar30._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar12;
            if (*puVar12 != 0) {
                uVar22 = 0;
                puVar13 = puVar12 + 3;
                do {
                    iVar18 = uVar22 * 8;
                    uVar22 = uVar22 + 1;
                    *(iVar7 + 0x18 + iVar18) = *(puVar13 + -2);
                    *(iVar7 + (uVar5 & 0xfff8) + iVar18) = *puVar13;
                    puVar13 = puVar13 + 4;
                } while (uVar22 < *puVar12);
            }
            puVar13 = uStack_474;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar13,uVar14,1,iStack_470,piVar1,0);
            uVar5 = uVar14;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_468) {
        auVar26 = __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_08 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_,puVar13 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_relinquish_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b18 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_relinquish_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (uint64_t param_1,uint *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    int iVar5;
    char *pcVar6;
    int64_t iVar7;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint16_t *puVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    int64_t iVar18;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    int64_t *piVar22;
    uint64_t unaff_x30;
    uchar auVar23 [16];
    uchar auVar24 [16];
    uchar auVar25 [12];
    uchar auStack_250 [12];
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    code *pcStack_220;
    uint64_t uStack_210;
    int64_t *piStack_208;
    int64_t *piStack_200;
    int64_t iStack_1f8;
    uint64_t uStack_1f0;
    uint32_t *puStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar ***pppuStack_1a0;
    ulong uStack_198;
    int64_t *piStack_190;
    uint16_t *puStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    uint16_t *puVar8;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    if (param_2[1] < 4) {
        pcVar6 = *(param_2[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    iVar5 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_64;
        iVar3 = (iVar5 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_60);
        uVar11 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar14 = -1L << (uVar11 & 0x3f);
            uVar11 = (~uVar14 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar11 = uVar14 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar11;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar5 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *param_2;
            if (param_2[1] < 4) {
                pcVar6 = *(param_2[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            param_3 = uStack_64;
            perf_trace_run_bpf_submit(iVar7,iVar3,param_3,param_1,1,iStack_60,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar23 = __stack_chk_fail();
    puVar8 = auVar23._8_8_;
    iVar17 = auVar23._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800b1c0;
    uStack_a8 = 0x800b1c0;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar21 = *(iVar17 + 0x48);
    uVar11 = param_4;
    puStack_b0 = &stack0xffffffffffffffb0;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar17,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar14 = trace_event_ignore_this_pid(iVar17), (uVar14 & 1) == 0))))
        goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        uVar2 = *puVar8;
        unaff_x30 = uVar2;
        puVar9 = unaff_x30 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_e8,iVar17);
        if (iVar7 != 0) {
            uVar21 = uVar2 << 0x13;
            uVar14 = unaff_x30 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar21 | 0x1c;
            *(iVar7 + 0x10) = uVar14 | uVar21;
            *(iVar7 + 8) = *puVar8;
            if (*puVar8 != 0) {
                uVar12 = 0;
                puVar15 = puVar8 + 6;
                do {
                    iVar17 = uVar12 * 8;
                    uVar12 = uVar12 + 1;
                    *(iVar7 + 0x1c + iVar17) = *(puVar15 + -4);
                    *(iVar7 + (uVar14 & 0xfffc) + iVar17) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar12 < *puVar8);
            }
            *(iVar7 + 0x14) = param_3;
            *(iVar7 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    puVar8 = auVar23._8_8_;
    uVar12 = auVar23._0_8_;
    *extraout_x18_00 = sym.perf_trace_lookup_sgl;
    pcStack_138 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    uVar19 = uVar11 & 0xffffffff;
    uVar20 = puVar9 & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    uVar2 = *puVar8;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar12 + 0x78);
    uVar14 = uVar11;
    ppuStack_140 = &puStack_b0;
    if ((*(uVar12 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_154;
        unaff_x30 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x30,&iStack_150);
        if (iVar7 != 0) {
            uVar13 = _hyp_assign_table & 0x3f;
            *(iStack_150 + 0xe8) = &ppuStack_140;
            *(iStack_150 + 0xf8) = auStack_160;
            uVar14 = uVar2 * 8 + 0x1c;
            *(iStack_150 + 0x100) = ~(-1L << uVar13) & 0x800b30c;
            *(iStack_150 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar14 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar8;
            if (*puVar8 != 0) {
                uVar13 = 0;
                puVar15 = puVar8 + 6;
                do {
                    iVar17 = uVar13 * 8;
                    uVar13 = uVar13 + 1;
                    *(iVar7 + 0x1c + iVar17) = *(puVar15 + -4);
                    *(iVar7 + (uVar14 & 0xfffc) + iVar17) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar13 < *puVar8);
            }
            puVar10 = uStack_154;
            *(iVar7 + 0x14) = puVar9;
            *(iVar7 + 0x18) = uVar11;
            uVar14 = uVar12;
            perf_trace_run_bpf_submit(iVar7,unaff_x30,puVar10,uVar12,1,iStack_150,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_148) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar17 = auVar24._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_01 = 0x800b4ac;
    uStack_198 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_1a8 = *(iVar7 + 0x5e0);
    uVar11 = auVar24._8_8_ & 0xffffffff;
    piVar22 = *(iVar17 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar21 = piVar22;
    pppuStack_1a0 = &ppuStack_140;
    piStack_190 = piVar1;
    uStack_178 = uVar20;
    uStack_170 = uVar19;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar9 = puVar10;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar14 = 0;
            puStack_180 = puVar8;
            uStack_168 = uVar12;
            event_triggers_call(iVar17,0,0,0);
            auVar23._8_8_ = puStack_180;
            auVar23._0_8_ = uStack_168;
        }
        puStack_180 = auVar23._8_8_;
        uStack_168 = auVar23._0_8_;
        piStack_208 = piVar1;
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 &&
            (uVar12 = trace_event_ignore_this_pid(iVar17), auVar23._8_8_ = puStack_180, auVar23._0_8_ = uStack_168,
            (uVar12 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_180 = auVar23._8_8_;
    uStack_168 = auVar23._0_8_;
    uVar21 = *puVar10;
    piVar22 = uVar21;
    puVar9 = piVar22 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_1d8,iVar17);
    auVar23._8_8_ = puStack_180;
    auVar23._0_8_ = uStack_168;
    piStack_208 = piVar22;
    if (iVar7 != 0) {
        uVar21 = uVar21 << 0x13;
        uVar12 = piVar22 * 8 + 0x18;
        *(iVar7 + 8) = auVar24._8_4_;
        *(iVar7 + 0x10) = uVar21 | 0x18;
        *(iVar7 + 0x14) = uVar12 | uVar21;
        *(iVar7 + 0xc) = *puVar10;
        if (*puVar10 != 0) {
            uVar19 = 0;
            puVar16 = puVar10 + 3;
            do {
                iVar18 = uVar19 * 8;
                uVar19 = uVar19 + 1;
                *(iVar7 + 0x18 + iVar18) = *(puVar16 + -2);
                *(iVar7 + (uVar12 & 0xfff8) + iVar18) = *puVar16;
                puVar16 = puVar16 + 4;
            } while (uVar19 < *puVar10);
        }
        trace_event_buffer_commit(&uStack_1d8);
        auVar23._8_8_ = puStack_180;
        auVar23._0_8_ = uStack_168;
    }
code_r0x0800b5bc:
    puStack_180 = auVar23._8_8_;
    uStack_168 = auVar23._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar12 = auVar25._0_8_;
    *extraout_x18_02 = sym.perf_trace_map_mem_s2;
    pcStack_228 = sym.perf_trace_map_mem_s2;
    pcStack_220 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_238 = *(iVar7 + 0x5e0);
    iStack_240 = 0;
    uStack_244 = 0;
    uVar2 = *puVar9;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar12 + 0x78);
    pppuStack_230 = &pppuStack_1a0;
    uStack_210 = unaff_x30;
    piStack_200 = piVar22;
    iStack_1f8 = iVar17;
    uStack_1f0 = uVar11;
    puStack_1e8 = puVar10;
    if ((*(uVar12 + 0x80) != 0) || (puVar10 = puVar9, *piVar1 != 0)) {
        puVar10 = &uStack_244;
        iVar5 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar5,&iStack_240,puVar10);
        if (iVar7 != 0) {
            uVar14 = _hyp_assign_table & 0x3f;
            *(iStack_240 + 0xe8) = &pppuStack_230;
            *(iStack_240 + 0xf8) = auStack_250;
            uVar11 = uVar2 * 8 + 0x18;
            *(iStack_240 + 0x100) = ~(-1L << uVar14) & 0x800b5f4;
            *(iStack_240 + 0x108) = 5;
            *(iVar7 + 8) = auVar25._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar11 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar9;
            if (*puVar9 != 0) {
                uVar14 = 0;
                puVar10 = puVar9 + 3;
                do {
                    iVar17 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x18 + iVar17) = *(puVar10 + -2);
                    *(iVar7 + (uVar11 & 0xfff8) + iVar17) = *puVar10;
                    puVar10 = puVar10 + 4;
                } while (uVar14 < *puVar9);
            }
            puVar10 = uStack_244;
            perf_trace_run_bpf_submit(iVar7,iVar5,puVar10,uVar12,1,iStack_240,piVar1,0);
            uVar14 = uVar12;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_238) {
        auVar23 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_03 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar23._0_8_,auVar23._8_8_,puVar10 & 0xffffffff,uVar14 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_relinquish_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b20 (size 8) =====

void sym.__bpf_trace_relinquish_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.mem_buf_unmap_mem_s2.cfi_jt @ 0x08007b28 (size 8) =====

int sym.mem_buf_unmap_mem_s2.cfi_jt(uint64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gh_rm_mem_release(param_1,0);
    if (iVar1 < 0) {
        _printk(0x800643f,"mem_buf_unmap_mem_s2",param_1 & 0xffffffff,iVar1);
    }
    return iVar1;
}


// ===== sym.perf_trace_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b30 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800a7c4)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (uint64_t param_1,ulong param_2,uint32_t *param_3,uint64_t param_4,uint32_t *param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint *puVar14;
    uint16_t *puVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    int iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uchar *puVar23;
    uint16_t *puVar24;
    uint32_t *puVar25;
    int64_t iVar26;
    int64_t iVar27;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    char *unaff_x19;
    uint32_t uVar28;
    char *pcVar29;
    char *pcVar30;
    char *unaff_x22;
    int64_t *piVar31;
    uint64_t unaff_x23;
    code *pcVar32;
    uint64_t uVar33;
    uint64_t uVar34;
    uint64_t unaff_x26;
    uint64_t uVar35;
    uint64_t unaff_x30;
    uchar auVar36 [16];
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [12];
    uchar auStack_640 [12];
    uint32_t uStack_634;
    int64_t iStack_630;
    int64_t iStack_628;
    ulong ***pppuStack_620;
    code *pcStack_618;
    code *pcStack_610;
    code *pcStack_600;
    int64_t *piStack_5f8;
    int64_t *piStack_5f0;
    int64_t iStack_5e8;
    uint64_t uStack_5e0;
    uint32_t *puStack_5d8;
    ulong uStack_5c8;
    ulong uStack_5c0;
    ulong uStack_5b8;
    ulong uStack_5b0;
    ulong uStack_5a8;
    ulong uStack_5a0;
    int64_t iStack_598;
    ulong ***pppuStack_590;
    ulong uStack_588;
    int64_t *piStack_580;
    uint16_t *puStack_570;
    uint64_t uStack_568;
    uint64_t uStack_560;
    uint64_t uStack_558;
    uchar auStack_550 [12];
    uint32_t uStack_544;
    int64_t iStack_540;
    int64_t iStack_538;
    ulong ***pppuStack_530;
    code *pcStack_528;
    uint64_t uStack_520;
    ulong uStack_518;
    code *pcStack_510;
    code *pcStack_508;
    uchar auStack_500 [16];
    uint64_t uStack_4f0;
    uint64_t uStack_4e8;
    ulong uStack_4d8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    ulong uStack_4c0;
    ulong uStack_4b8;
    ulong uStack_4b0;
    int64_t iStack_4a8;
    ulong ***pppuStack_4a0;
    ulong uStack_498;
    code *pcStack_490;
    uint64_t uStack_488;
    char *pcStack_480;
    int64_t *piStack_478;
    uint *puStack_470;
    uint64_t uStack_468;
    uchar auStack_460 [12];
    uint32_t uStack_454;
    int64_t iStack_450;
    int64_t iStack_448;
    ulong ***pppuStack_440;
    code *pcStack_438;
    ulong uStack_430;
    code *pcStack_420;
    uint64_t uStack_418;
    char *pcStack_410;
    uint64_t uStack_408;
    uchar auStack_400 [16];
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    int64_t iStack_3b8;
    ulong ***pppuStack_3b0;
    ulong uStack_3a8;
    int64_t *piStack_3a0;
    uint *puStack_390;
    uint64_t uStack_388;
    uchar auStack_380 [12];
    uint32_t uStack_374;
    int64_t iStack_370;
    int64_t iStack_368;
    ulong ***pppuStack_360;
    code *pcStack_358;
    ulong uStack_350;
    code *pcStack_340;
    uint64_t uStack_338;
    char *pcStack_330;
    uint64_t uStack_328;
    int64_t iStack_320;
    uint *puStack_318;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    int64_t iStack_2d8;
    ulong ***pppuStack_2d0;
    ulong uStack_2c8;
    int64_t *piStack_2c0;
    uint *puStack_2b0;
    uint64_t uStack_2a8;
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    code *pcStack_270;
    ulong uStack_260;
    uint64_t uStack_258;
    char *pcStack_250;
    uint64_t uStack_248;
    int64_t iStack_240;
    uint *puStack_238;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    uchar ***pppuStack_1f0;
    ulong uStack_1e8;
    char *pcStack_1e0;
    uint *puStack_1d0;
    uint64_t uStack_1c8;
    uchar auStack_1c0 [12];
    int iStack_1b4;
    int64_t *piStack_1b0;
    uint32_t uStack_1a4;
    int64_t iStack_1a0;
    int64_t iStack_198;
    uchar **ppuStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    char *pcStack_150;
    char *pcStack_148;
    int64_t iStack_140;
    uint *puStack_138;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    ulong uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    char *pcStack_c0;
    char *pcStack_b8;
    uint32_t *puStack_b0;
    char *pcStack_a8;
    uchar auStack_a0 [4];
    int iStack_9c;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    uint *puVar13;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iVar9 = param_3;
    uVar34 = param_3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    uVar28 = *param_5;
    uVar19 = 0xc;
    if (iVar9 != 0) {
        uVar19 = 6;
    }
    uVar35 = uVar19;
    iVar11 = tpidr_el1;
    iVar18 = param_4;
    uVar33 = param_4 & 0xffffffff;
    uVar20 = 0xd;
    if (iVar18 != 0) {
        uVar20 = 7;
    }
    pcVar29 = uVar20;
    piVar4 = iVar11 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar4 != 0)) {
        uVar7 = uVar19 | 1;
        unaff_x19 = uVar7;
        uVar2 = uVar7 + uVar20;
        unaff_x26 = uVar2;
        param_3 = &uStack_74;
        uVar3 = uVar2 + uVar28 * 2;
        unaff_x22 = uVar3;
        iStack_9c = (uVar28 + uVar3 + 0x33 & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(iStack_9c,&iStack_70);
        if (uVar10 != 0) {
            uVar35 = uVar19 + 0x25;
            uVar2 = uVar2 | uVar28 << 0x11;
            unaff_x26 = uVar2;
            uVar22 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_70 + 0xf8) = auStack_a0;
            uVar21 = (~uVar22 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar21 = uVar22 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar21;
            *(iStack_70 + 0x108) = 5;
            unaff_x19 = "(null)";
            pcVar29 = "ION_MEM_TYPE";
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            pcVar30 = pcVar29;
            if (iVar9 != 0) {
                pcVar30 = unaff_x19;
            }
            *(uVar10 + 0x14) = uVar7 << 0x10 | 0x24;
            *(uVar10 + 0x18) = uVar19 + 0x25 | uVar20 << 0x10;
            *(uVar10 + 0x1c) = uVar2 + 0x24;
            *(uVar10 + 0x20) = uVar3 + 0x24 | uVar28 << 0x10;
            *(uVar10 + 8) = param_2;
            strcpy(uVar10 + 0x24,pcVar30);
            pcVar30 = pcVar29;
            if (iVar18 != 0) {
                pcVar30 = unaff_x19;
            }
            strcpy(uVar10 + uVar35,pcVar30);
            *(uVar10 + 0x10) = *param_5;
            if (*param_5 != 0) {
                uVar5 = *(uVar10 + 0x1c);
                uVar21 = 0;
                uVar6 = *(uVar10 + 0x20);
                puVar23 = param_5 + 6;
                do {
                    *(uVar10 + uVar5 + uVar21 * 2) = *(puVar23 + -2);
                    *(uVar10 + uVar6 + uVar21) = *puVar23;
                    uVar21 = uVar21 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar21 < *param_5);
            }
            param_3 = uStack_74;
            perf_trace_run_bpf_submit(uVar10,iStack_9c,param_3,param_1,1,iStack_70,piVar4,0);
            param_4 = param_1;
            unaff_x23 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar36 = __stack_chk_fail();
    puVar13 = auVar36._8_8_;
    iVar26 = auVar36._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18 = 0x800a488;
    uStack_e8 = 0x800a488;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    pcVar30 = *(iVar26 + 0x48);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar19 = pcVar30;
    puStack_f0 = &stack0xffffffffffffffa0;
    uStack_e0 = unaff_x26;
    uStack_d8 = uVar34;
    uStack_d0 = uVar33;
    uStack_c8 = unaff_x23;
    pcStack_c0 = unaff_x22;
    pcStack_b8 = pcVar29;
    puStack_b0 = param_5;
    pcStack_a8 = unaff_x19;
    iStack_140 = iVar26;
    if ((uVar19 >> 8 & 1) == 0) {
        if ((uVar19 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(iVar26,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar26), (uVar10 & 1) == 0))))
        goto code_r0x0800a50c;
    }
    else {
code_r0x0800a50c:
        if (puVar13[1] < 4) {
            pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar29 = "(null)";
        }
        pcVar30 = strlen(pcVar29);
        uVar2 = puVar13[7];
        unaff_x22 = uVar2;
        uVar19 = pcVar30 + 1;
        uVar33 = uVar19;
        uVar20 = 0xd;
        if (puVar13[5] != 0) {
            uVar20 = 7;
        }
        unaff_x23 = uVar20;
        uVar3 = uVar20 + uVar19;
        unaff_x26 = uVar3;
        uVar7 = uVar3 + uVar2 * 2;
        uVar34 = uVar7;
        param_3 = uVar7 + uVar2 + 0x28;
        iVar11 = trace_event_buffer_reserve(&uStack_128,iVar26);
        if (iVar11 != 0) {
            uVar1 = pcVar30 + 0x29;
            pcVar30 = uVar1;
            *(iVar11 + 0xc) = uVar19 * 0x10000 | 0x28;
            unaff_x22 = "(null)";
            *(iVar11 + 0x18) = uVar1 | uVar20 << 0x10;
            *(iVar11 + 0x20) = uVar3 + 0x28 | uVar2 << 0x11;
            *(iVar11 + 0x24) = uVar7 + 0x28 | uVar2 << 0x10;
            *(iVar11 + 8) = *puVar13;
            pcVar29 = unaff_x22;
            if (puVar13[1] < 4) {
                pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            strcpy(iVar11 + 0x28,pcVar29);
            *(iVar11 + 0x10) = *(puVar13 + 3);
            pcVar29 = "ION_MEM_TYPE";
            if (puVar13[5] != 0) {
                pcVar29 = unaff_x22;
            }
            strcpy(iVar11 + (uVar1 & 0xffff),pcVar29);
            *(iVar11 + 0x1c) = puVar13[7];
            if (puVar13[7] != 0) {
                uVar5 = *(iVar11 + 0x20);
                uVar10 = 0;
                uVar6 = *(iVar11 + 0x24);
                puVar23 = puVar13 + 0x22;
                do {
                    *(iVar11 + uVar5 + uVar10 * 2) = *(puVar23 + -2);
                    *(iVar11 + uVar6 + uVar10) = *puVar23;
                    uVar10 = uVar10 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar10 < puVar13[7]);
            }
            trace_event_buffer_commit(&uStack_128);
            iStack_140 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar36 = __stack_chk_fail();
    puVar14 = auVar36._8_8_;
    uVar10 = auVar36._0_8_;
    *extraout_x18_00 = sym.perf_trace_alloc_req_msg_class;
    pcStack_188 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_198 = *(iVar11 + 0x5e0);
    iStack_1a0 = 0;
    uStack_1a4 = 0;
    if (puVar14[1] < 4) {
        pcVar29 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar29 = "(null)";
    }
    ppuStack_190 = &puStack_f0;
    uStack_180 = uVar28;
    uStack_178 = uVar35;
    uStack_170 = unaff_x26;
    uStack_168 = uVar34;
    uStack_160 = uVar33;
    uStack_158 = unaff_x23;
    pcStack_150 = unaff_x22;
    pcStack_148 = pcVar30;
    puStack_138 = puVar13;
    uVar12 = strlen(pcVar29);
    uVar19 = puVar14[7];
    iVar11 = tpidr_el1;
    iVar9 = 0xd;
    if (puVar14[5] != 0) {
        iVar9 = 7;
    }
    piStack_1b0 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piStack_1b0 != 0)) {
        uVar28 = uVar12 + 1;
        unaff_x22 = uVar28;
        param_3 = &uStack_1a4;
        uVar20 = iVar9 + uVar28 + uVar19 * 2;
        pcVar30 = uVar20;
        iStack_1b4 = (uVar19 + uVar20 + 0x33 & 0xfffffff8) - 4;
        uVar34 = perf_trace_buf_alloc(iStack_1b4,&iStack_1a0);
        if (uVar34 != 0) {
            uVar2 = uVar12 + 0x29;
            unaff_x22 = uVar2;
            uVar33 = _hyp_assign_table & 0x3f;
            *(iStack_1a0 + 0xf8) = auStack_1c0;
            *(iStack_1a0 + 0xe8) = &ppuStack_190;
            *(iStack_1a0 + 0x100) = ~(-1L << uVar33) & 0x800a690;
            *(iStack_1a0 + 0x108) = 5;
            *(uVar34 + 0xc) = uVar28 * 0x10000 | 0x28;
            pcVar30 = "(null)";
            *(uVar34 + 0x18) = uVar2 | iVar9 << 0x10;
            *(uVar34 + 0x20) = iVar9 + uVar28 + 0x28 | uVar19 << 0x11;
            *(uVar34 + 0x24) = uVar20 + 0x28 | uVar19 << 0x10;
            *(uVar34 + 8) = *puVar14;
            pcVar29 = pcVar30;
            if (puVar14[1] < 4) {
                pcVar29 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            strcpy(uVar34 + 0x28,pcVar29);
            *(uVar34 + 0x10) = *(puVar14 + 3);
            pcVar29 = "ION_MEM_TYPE";
            if (puVar14[5] != 0) {
                pcVar29 = pcVar30;
            }
            strcpy(uVar34 + (uVar2 & 0xffff),pcVar29);
            *(uVar34 + 0x1c) = puVar14[7];
            if (puVar14[7] != 0) {
                uVar5 = *(uVar34 + 0x20);
                uVar33 = 0;
                uVar6 = *(uVar34 + 0x24);
                puVar23 = puVar14 + 0x22;
                do {
                    *(uVar34 + uVar5 + uVar33 * 2) = *(puVar23 + -2);
                    *(uVar34 + uVar6 + uVar33) = *puVar23;
                    uVar33 = uVar33 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar33 < puVar14[7]);
            }
            param_3 = uStack_1a4;
            param_4 = uVar10;
            perf_trace_run_bpf_submit(uVar34,iStack_1b4,param_3,uVar10,1,iStack_1a0,piStack_1b0,0);
            unaff_x23 = uVar34;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_198) {
        return;
    }
    auVar37 = __stack_chk_fail();
    puVar13 = auVar37._8_8_;
    iVar26 = auVar37._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_01 = 0x800a8f4;
    uStack_1e8 = 0x800a8f4;
    iVar11 = sp_el0;
    iStack_1f8 = *(iVar11 + 0x5e0);
    uVar34 = *(iVar26 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar28 = uVar34;
    pppuStack_1f0 = &ppuStack_190;
    pcStack_1e0 = pcVar30;
    iStack_240 = iVar26;
    if ((uVar28 >> 8 & 1) == 0) {
        if ((uVar28 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_1d0 = puVar14;
            uStack_1c8 = uVar10;
            event_triggers_call(iVar26,0);
            auVar36._8_8_ = puStack_1d0;
            auVar36._0_8_ = uStack_1c8;
        }
        puStack_1d0 = auVar36._8_8_;
        uStack_1c8 = auVar36._0_8_;
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 ||
            (uVar33 = trace_event_ignore_this_pid(iVar26), auVar36._8_8_ = puStack_1d0, auVar36._0_8_ = uStack_1c8,
            (uVar33 & 1) == 0)))) goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        puStack_1d0 = auVar36._8_8_;
        uStack_1c8 = auVar36._0_8_;
        if (puVar13[1] < 4) {
            pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar29 = "(null)";
        }
        iVar9 = strlen(pcVar29);
        uVar28 = iVar9 + 1;
        uVar34 = uVar28;
        param_3 = uVar28 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_228,iVar26);
        auVar36._8_8_ = puStack_1d0;
        auVar36._0_8_ = uStack_1c8;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar28 * 0x10000 | 0x14;
            if (puVar13[1] < 4) {
                pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar29 = "(null)";
            }
            strcpy(iVar11 + 0x14,pcVar29);
            *(iVar11 + 0xc) = puVar13[3];
            *(iVar11 + 0x10) = *puVar13;
            trace_event_buffer_commit(&uStack_228);
            auVar36._8_8_ = puStack_1d0;
            auVar36._0_8_ = uStack_1c8;
            iStack_240 = iVar11;
        }
    }
    puStack_1d0 = auVar36._8_8_;
    uStack_1c8 = auVar36._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    puVar14 = auVar37._8_8_;
    uVar33 = auVar37._0_8_;
    *extraout_x18_02 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_278 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_270 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_288 = *(iVar11 + 0x5e0);
    iStack_290 = 0;
    uStack_294 = 0;
    if (puVar14[1] < 4) {
        pcVar29 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar29 = "(null)";
    }
    pppuStack_280 = &pppuStack_1f0;
    uStack_260 = uVar12;
    uStack_258 = unaff_x23;
    pcStack_250 = unaff_x22;
    uStack_248 = uVar34;
    puStack_238 = puVar13;
    uVar12 = strlen(pcVar29);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar33 + 0x78);
    if ((*(uVar33 + 0x80) != 0) || (*piVar4 != 0)) {
        param_3 = &uStack_294;
        unaff_x22 = (uVar12 + 0x20U & 0xfffffff8) - 4;
        uVar35 = perf_trace_buf_alloc(unaff_x22,&iStack_290);
        uVar34 = _hyp_assign_table;
        if (uVar35 != 0) {
            *(iStack_290 + 0xe8) = &pppuStack_280;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar34 & 0x3f)) & 0x800aa3c;
            *(iStack_290 + 0x108) = 5;
            *(uVar35 + 8) = uVar12 * 0x10000 + 0x10014;
            if (puVar14[1] < 4) {
                pcVar29 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar29 = "(null)";
            }
            strcpy(uVar35 + 0x14,pcVar29);
            param_3 = uStack_294;
            *(uVar35 + 0xc) = puVar14[3];
            *(uVar35 + 0x10) = *puVar14;
            param_4 = uVar33;
            perf_trace_run_bpf_submit(uVar35,unaff_x22,param_3,uVar33,1,iStack_290,piVar4,0);
            unaff_x23 = uVar35;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_288) {
        return;
    }
    auVar36 = __stack_chk_fail();
    puVar13 = auVar36._8_8_;
    iVar26 = auVar36._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_03 = 0x800abe4;
    uStack_2c8 = 0x800abe4;
    iVar11 = sp_el0;
    iStack_2d8 = *(iVar11 + 0x5e0);
    uVar34 = *(iVar26 + 0x48);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uVar28 = uVar34;
    pppuStack_2d0 = &pppuStack_280;
    piStack_2c0 = piVar4;
    iStack_320 = iVar26;
    if ((uVar28 >> 8 & 1) == 0) {
        if ((uVar28 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_2b0 = puVar14;
            uStack_2a8 = uVar33;
            event_triggers_call(iVar26,0);
            auVar37._8_8_ = puStack_2b0;
            auVar37._0_8_ = uStack_2a8;
        }
        puStack_2b0 = auVar37._8_8_;
        uStack_2a8 = auVar37._0_8_;
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 ||
            (uVar33 = trace_event_ignore_this_pid(iVar26), auVar37._8_8_ = puStack_2b0, auVar37._0_8_ = uStack_2a8,
            (uVar33 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_2b0 = auVar37._8_8_;
        uStack_2a8 = auVar37._0_8_;
        if (puVar13[1] < 4) {
            pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar29 = "(null)";
        }
        iVar9 = strlen(pcVar29);
        uVar28 = iVar9 + 1;
        uVar34 = uVar28;
        param_3 = uVar28 + 0x18;
        iVar11 = trace_event_buffer_reserve(&uStack_308,iVar26);
        auVar37._8_8_ = puStack_2b0;
        auVar37._0_8_ = uStack_2a8;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar28 * 0x10000 | 0x18;
            *(iVar11 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar29 = "(null)";
            }
            strcpy(iVar11 + 0x18,pcVar29);
            *(iVar11 + 0x10) = puVar13[3];
            *(iVar11 + 0x14) = puVar13[4];
            trace_event_buffer_commit(&uStack_308);
            auVar37._8_8_ = puStack_2b0;
            auVar37._0_8_ = uStack_2a8;
            iStack_320 = iVar11;
        }
    }
    puStack_2b0 = auVar37._8_8_;
    uStack_2a8 = auVar37._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2d8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar14 = auVar38._8_8_;
    uVar33 = auVar38._0_8_;
    *extraout_x18_04 = sym.perf_trace_alloc_resp_class;
    pcStack_358 = sym.perf_trace_alloc_resp_class;
    pcStack_340 = sym.perf_trace_relinquish_req_msg_class;
    iVar11 = sp_el0;
    iStack_368 = *(iVar11 + 0x5e0);
    iStack_370 = 0;
    uStack_374 = 0;
    if (puVar14[1] < 4) {
        pcVar29 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar29 = "(null)";
    }
    pppuStack_360 = &pppuStack_2d0;
    uStack_350 = uVar12;
    uStack_338 = unaff_x23;
    pcStack_330 = unaff_x22;
    uStack_328 = uVar34;
    puStack_318 = puVar13;
    uVar12 = strlen(pcVar29);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar33 + 0x78);
    if ((*(uVar33 + 0x80) != 0) || (*piVar4 != 0)) {
        param_3 = &uStack_374;
        unaff_x22 = (uVar12 + 0x24U & 0xfffffff8) - 4;
        uVar35 = perf_trace_buf_alloc(unaff_x22,&iStack_370);
        uVar34 = _hyp_assign_table;
        if (uVar35 != 0) {
            *(iStack_370 + 0xe8) = &pppuStack_360;
            *(iStack_370 + 0xf8) = auStack_380;
            *(iStack_370 + 0x100) = ~(-1L << (uVar34 & 0x3f)) & 0x800ad34;
            *(iStack_370 + 0x108) = 5;
            *(uVar35 + 0xc) = uVar12 * 0x10000 + 0x10018;
            *(uVar35 + 8) = *puVar14;
            if (puVar14[1] < 4) {
                pcVar29 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar29 = "(null)";
            }
            strcpy(uVar35 + 0x18,pcVar29);
            param_3 = uStack_374;
            *(uVar35 + 0x10) = puVar14[3];
            *(uVar35 + 0x14) = puVar14[4];
            param_4 = uVar33;
            perf_trace_run_bpf_submit(uVar35,unaff_x22,param_3,uVar33,1,iStack_370,piVar4,0);
            unaff_x23 = uVar35;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_368) {
        return;
    }
    auVar36 = __stack_chk_fail();
    puVar13 = auVar36._8_8_;
    iVar26 = auVar36._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_05 = 0x800aee4;
    uStack_3a8 = 0x800aee4;
    iVar11 = sp_el0;
    iStack_3b8 = *(iVar11 + 0x5e0);
    uVar34 = *(iVar26 + 0x48);
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uVar28 = uVar34;
    pppuStack_3b0 = &pppuStack_360;
    piStack_3a0 = piVar4;
    if ((uVar28 >> 8 & 1) == 0) {
        if ((uVar28 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            puStack_390 = puVar14;
            uStack_388 = uVar33;
            event_triggers_call(iVar26,0);
            auVar38._8_8_ = puStack_390;
            auVar38._0_8_ = uStack_388;
        }
        puStack_390 = auVar38._8_8_;
        uStack_388 = auVar38._0_8_;
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 ||
            (uVar33 = trace_event_ignore_this_pid(iVar26), auVar38._8_8_ = puStack_390, auVar38._0_8_ = uStack_388,
            (uVar33 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_390 = auVar38._8_8_;
        uStack_388 = auVar38._0_8_;
        if (puVar13[1] < 4) {
            pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar29 = "(null)";
        }
        iVar9 = strlen(pcVar29);
        uVar28 = iVar9 + 1;
        uVar34 = uVar28;
        param_3 = uVar28 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_3e8,iVar26);
        auVar38._8_8_ = puStack_390;
        auVar38._0_8_ = uStack_388;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar28 * 0x10000 | 0x10;
            *(iVar11 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar29 = "(null)";
            }
            strcpy(iVar11 + 0x10,pcVar29);
            trace_event_buffer_commit(&uStack_3e8);
            auVar38._8_8_ = puStack_390;
            auVar38._0_8_ = uStack_388;
        }
    }
    puStack_390 = auVar38._8_8_;
    uStack_388 = auVar38._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_3b8) {
        return;
    }
    auVar39 = __stack_chk_fail();
    puVar13 = auVar39._8_8_;
    uVar33 = auVar39._0_8_;
    *extraout_x18_06 = sym.perf_trace_relinquish_resp_class;
    pcStack_438 = sym.perf_trace_relinquish_resp_class;
    pcStack_420 = sym.perf_trace_alloc_resp_class;
    iVar11 = sp_el0;
    iStack_448 = *(iVar11 + 0x5e0);
    iStack_450 = 0;
    uStack_454 = 0;
    if (puVar13[1] < 4) {
        pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar29 = "(null)";
    }
    pppuStack_440 = &pppuStack_3b0;
    uStack_430 = uVar12;
    uStack_418 = unaff_x23;
    pcStack_410 = unaff_x22;
    uStack_408 = uVar34;
    auStack_400 = auVar36;
    uVar12 = strlen(pcVar29);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar33 + 0x78);
    if ((*(uVar33 + 0x80) != 0) || (*piVar4 != 0)) {
        param_3 = &uStack_454;
        unaff_x22 = (uVar12 + 0x1cU & 0xfffffff8) - 4;
        uVar35 = perf_trace_buf_alloc(unaff_x22,&iStack_450);
        uVar34 = _hyp_assign_table;
        if (uVar35 != 0) {
            *(iStack_450 + 0xe8) = &pppuStack_440;
            *(iStack_450 + 0xf8) = auStack_460;
            *(iStack_450 + 0x100) = ~(-1L << (uVar34 & 0x3f)) & 0x800b020;
            *(iStack_450 + 0x108) = 5;
            *(uVar35 + 0xc) = uVar12 * 0x10000 + 0x10010;
            *(uVar35 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar29 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar29 = "(null)";
            }
            strcpy(uVar35 + 0x10,pcVar29);
            param_3 = uStack_454;
            param_4 = uVar33;
            perf_trace_run_bpf_submit(uVar35,unaff_x22,param_3,uVar33,1,iStack_450,piVar4,0);
            unaff_x23 = uVar35;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_448) {
        return;
    }
    auVar36 = __stack_chk_fail();
    puVar15 = auVar36._8_8_;
    iVar26 = auVar36._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_07 = 0x800b1c0;
    uStack_498 = 0x800b1c0;
    pcStack_490 = sym.perf_trace_relinquish_resp_class;
    iVar11 = sp_el0;
    iStack_4a8 = *(iVar11 + 0x5e0);
    pcVar32 = *(iVar26 + 0x48);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uVar28 = pcVar32;
    uVar34 = param_4;
    pppuStack_4a0 = &pppuStack_440;
    uStack_488 = unaff_x23;
    pcStack_480 = unaff_x22;
    piStack_478 = piVar4;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar16 = param_3;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar34 = 0;
            puStack_470 = puVar13;
            uStack_468 = uVar33;
            event_triggers_call(iVar26,0);
            auVar39._8_8_ = puStack_470;
            auVar39._0_8_ = uStack_468;
        }
        puStack_470 = auVar39._8_8_;
        uStack_468 = auVar39._0_8_;
        pcStack_510 = sym.perf_trace_relinquish_resp_class;
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 ||
            (uVar33 = trace_event_ignore_this_pid(iVar26), auVar39._8_8_ = puStack_470, auVar39._0_8_ = uStack_468,
            (uVar33 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_470 = auVar39._8_8_;
        uStack_468 = auVar39._0_8_;
        uVar5 = *puVar15;
        pcVar32 = uVar5;
        puVar16 = pcVar32 * 0x10 + 0x1c;
        iVar11 = trace_event_buffer_reserve(&uStack_4d8,iVar26);
        auVar39._8_8_ = puStack_470;
        auVar39._0_8_ = uStack_468;
        pcStack_510 = pcVar32;
        if (iVar11 != 0) {
            uVar28 = uVar5 << 0x13;
            uVar33 = pcVar32 * 8 + 0x1c;
            *(iVar11 + 0xc) = uVar28 | 0x1c;
            *(iVar11 + 0x10) = uVar33 | uVar28;
            *(iVar11 + 8) = *puVar15;
            if (*puVar15 != 0) {
                uVar35 = 0;
                puVar24 = puVar15 + 6;
                do {
                    iVar26 = uVar35 * 8;
                    uVar35 = uVar35 + 1;
                    *(iVar11 + 0x1c + iVar26) = *(puVar24 + -4);
                    *(iVar11 + (uVar33 & 0xfffc) + iVar26) = *puVar24;
                    puVar24 = puVar24 + 8;
                } while (uVar35 < *puVar15);
            }
            *(iVar11 + 0x14) = param_3;
            *(iVar11 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_4d8);
            auVar39._8_8_ = puStack_470;
            auVar39._0_8_ = uStack_468;
        }
    }
    puStack_470 = auVar39._8_8_;
    uStack_468 = auVar39._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_4a8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar15 = auVar40._8_8_;
    uVar35 = auVar40._0_8_;
    *extraout_x18_08 = sym.perf_trace_lookup_sgl;
    pcStack_528 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_538 = *(iVar11 + 0x5e0);
    uVar10 = uVar34 & 0xffffffff;
    uVar21 = puVar16 & 0xffffffff;
    iStack_540 = 0;
    uStack_544 = 0;
    uVar5 = *puVar15;
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar35 + 0x78);
    uVar33 = uVar34;
    pppuStack_530 = &pppuStack_4a0;
    uStack_520 = uVar19;
    uStack_518 = uVar12;
    pcStack_508 = pcVar32;
    uStack_4f0 = param_3 & 0xffffffff;
    uStack_4e8 = param_4 & 0xffffffff;
    auStack_500 = auVar36;
    if ((*(uVar35 + 0x80) != 0) || (puVar17 = puVar16, pcVar32 = pcStack_510, *piVar4 != 0)) {
        puVar17 = &uStack_544;
        pcVar32 = (uVar5 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar32,&iStack_540);
        if (iVar11 != 0) {
            uVar22 = _hyp_assign_table & 0x3f;
            *(iStack_540 + 0xe8) = &pppuStack_530;
            *(iStack_540 + 0xf8) = auStack_550;
            uVar33 = uVar5 * 8 + 0x1c;
            *(iStack_540 + 0x100) = ~(-1L << uVar22) & 0x800b30c;
            *(iStack_540 + 0x108) = 5;
            *(iVar11 + 0xc) = uVar5 << 0x13 | 0x1c;
            *(iVar11 + 0x10) = uVar33 | uVar5 << 0x13;
            *(iVar11 + 8) = *puVar15;
            if (*puVar15 != 0) {
                uVar22 = 0;
                puVar24 = puVar15 + 6;
                do {
                    iVar26 = uVar22 * 8;
                    uVar22 = uVar22 + 1;
                    *(iVar11 + 0x1c + iVar26) = *(puVar24 + -4);
                    *(iVar11 + (uVar33 & 0xfffc) + iVar26) = *puVar24;
                    puVar24 = puVar24 + 8;
                } while (uVar22 < *puVar15);
            }
            puVar17 = uStack_544;
            *(iVar11 + 0x14) = puVar16;
            *(iVar11 + 0x18) = uVar34;
            uVar33 = uVar35;
            perf_trace_run_bpf_submit(iVar11,pcVar32,puVar17,uVar35,1,iStack_540,piVar4,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_538) {
        return;
    }
    auVar36 = __stack_chk_fail();
    iVar26 = auVar36._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_09 = 0x800b4ac;
    uStack_588 = 0x800b4ac;
    iVar11 = sp_el0;
    iStack_598 = *(iVar11 + 0x5e0);
    uVar34 = auVar36._8_8_ & 0xffffffff;
    piVar31 = *(iVar26 + 0x48);
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5c8 = 0;
    uStack_5c0 = 0;
    uVar19 = piVar31;
    pppuStack_590 = &pppuStack_530;
    piStack_580 = piVar4;
    uStack_568 = uVar21;
    uStack_560 = uVar10;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar33 = 0;
            puStack_570 = puVar15;
            uStack_558 = uVar35;
            event_triggers_call(iVar26,0,0,0);
            auVar40._8_8_ = puStack_570;
            auVar40._0_8_ = uStack_558;
        }
        puStack_570 = auVar40._8_8_;
        uStack_558 = auVar40._0_8_;
        piStack_5f8 = piVar4;
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 &&
            (uVar35 = trace_event_ignore_this_pid(iVar26), auVar40._8_8_ = puStack_570, auVar40._0_8_ = uStack_558,
            (uVar35 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_570 = auVar40._8_8_;
    uStack_558 = auVar40._0_8_;
    uVar19 = *puVar17;
    piVar31 = uVar19;
    puVar16 = piVar31 * 0x10 + 0x18;
    iVar11 = trace_event_buffer_reserve(&uStack_5c8,iVar26);
    auVar40._8_8_ = puStack_570;
    auVar40._0_8_ = uStack_558;
    piStack_5f8 = piVar31;
    if (iVar11 != 0) {
        uVar19 = uVar19 << 0x13;
        uVar35 = piVar31 * 8 + 0x18;
        *(iVar11 + 8) = auVar36._8_4_;
        *(iVar11 + 0x10) = uVar19 | 0x18;
        *(iVar11 + 0x14) = uVar35 | uVar19;
        *(iVar11 + 0xc) = *puVar17;
        if (*puVar17 != 0) {
            uVar10 = 0;
            puVar25 = puVar17 + 3;
            do {
                iVar27 = uVar10 * 8;
                uVar10 = uVar10 + 1;
                *(iVar11 + 0x18 + iVar27) = *(puVar25 + -2);
                *(iVar11 + (uVar35 & 0xfff8) + iVar27) = *puVar25;
                puVar25 = puVar25 + 4;
            } while (uVar10 < *puVar17);
        }
        trace_event_buffer_commit(&uStack_5c8);
        auVar40._8_8_ = puStack_570;
        auVar40._0_8_ = uStack_558;
    }
code_r0x0800b5bc:
    puStack_570 = auVar40._8_8_;
    uStack_558 = auVar40._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_598) {
        return;
    }
    auVar41 = __stack_chk_fail();
    uVar35 = auVar41._0_8_;
    *extraout_x18_10 = sym.perf_trace_map_mem_s2;
    pcStack_618 = sym.perf_trace_map_mem_s2;
    pcStack_610 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_628 = *(iVar11 + 0x5e0);
    iStack_630 = 0;
    uStack_634 = 0;
    uVar5 = *puVar16;
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar35 + 0x78);
    pppuStack_620 = &pppuStack_590;
    pcStack_600 = pcVar32;
    piStack_5f0 = piVar31;
    iStack_5e8 = iVar26;
    uStack_5e0 = uVar34;
    puStack_5d8 = puVar17;
    if ((*(uVar35 + 0x80) != 0) || (puVar17 = puVar16, *piVar4 != 0)) {
        puVar17 = &uStack_634;
        iVar9 = (uVar5 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(iVar9,&iStack_630,puVar17);
        if (iVar11 != 0) {
            uVar33 = _hyp_assign_table & 0x3f;
            *(iStack_630 + 0xe8) = &pppuStack_620;
            *(iStack_630 + 0xf8) = auStack_640;
            uVar34 = uVar5 * 8 + 0x18;
            *(iStack_630 + 0x100) = ~(-1L << uVar33) & 0x800b5f4;
            *(iStack_630 + 0x108) = 5;
            *(iVar11 + 8) = auVar41._8_4_;
            *(iVar11 + 0x10) = uVar5 << 0x13 | 0x18;
            *(iVar11 + 0x14) = uVar34 | uVar5 << 0x13;
            *(iVar11 + 0xc) = *puVar16;
            if (*puVar16 != 0) {
                uVar33 = 0;
                puVar17 = puVar16 + 3;
                do {
                    iVar26 = uVar33 * 8;
                    uVar33 = uVar33 + 1;
                    *(iVar11 + 0x18 + iVar26) = *(puVar17 + -2);
                    *(iVar11 + (uVar34 & 0xfff8) + iVar26) = *puVar17;
                    puVar17 = puVar17 + 4;
                } while (uVar33 < *puVar16);
            }
            puVar17 = uStack_634;
            perf_trace_run_bpf_submit(iVar11,iVar9,puVar17,uVar35,1,iStack_630,piVar4,0);
            uVar33 = uVar35;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_628) {
        auVar36 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_11 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar36._0_8_,auVar36._8_8_,puVar17 & 0xffffffff,uVar33 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b38 (size 8) =====

void sym.__bpf_trace_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.trace_event_raw_event_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b40 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800a7c4)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (uint64_t param_1,ulong param_2,uint32_t *param_3,uint64_t param_4,uint32_t *param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint *puVar13;
    uint16_t *puVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    int iVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uchar *puVar25;
    uint16_t *puVar26;
    int64_t iVar27;
    int64_t iVar28;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    ulong *extraout_x18_12;
    char *pcVar29;
    uint32_t uVar30;
    char *unaff_x21;
    char *pcVar31;
    char *pcVar32;
    char *pcVar33;
    int64_t *piVar34;
    code *pcVar35;
    uint64_t uVar36;
    uint64_t unaff_x25;
    char *unaff_x26;
    char *pcVar37;
    uint64_t unaff_x27;
    uint64_t uVar38;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    uchar auVar43 [16];
    uchar auVar44 [16];
    uchar auVar45 [12];
    uchar auStack_6e0 [12];
    uint32_t uStack_6d4;
    int64_t iStack_6d0;
    int64_t iStack_6c8;
    ulong ***pppuStack_6c0;
    code *pcStack_6b8;
    code *pcStack_6b0;
    code *pcStack_6a0;
    int64_t *piStack_698;
    int64_t *piStack_690;
    int64_t iStack_688;
    uint64_t uStack_680;
    uint32_t *puStack_678;
    ulong uStack_668;
    ulong uStack_660;
    ulong uStack_658;
    ulong uStack_650;
    ulong uStack_648;
    ulong uStack_640;
    int64_t iStack_638;
    ulong ***pppuStack_630;
    ulong uStack_628;
    int64_t *piStack_620;
    uint16_t *puStack_610;
    uint64_t uStack_608;
    uint64_t uStack_600;
    uint64_t uStack_5f8;
    uchar auStack_5f0 [12];
    uint32_t uStack_5e4;
    int64_t iStack_5e0;
    int64_t iStack_5d8;
    ulong ***pppuStack_5d0;
    code *pcStack_5c8;
    uint64_t uStack_5c0;
    ulong uStack_5b8;
    code *pcStack_5b0;
    code *pcStack_5a8;
    uchar auStack_5a0 [16];
    uint64_t uStack_590;
    uint64_t uStack_588;
    ulong uStack_578;
    ulong uStack_570;
    ulong uStack_568;
    ulong uStack_560;
    ulong uStack_558;
    ulong uStack_550;
    int64_t iStack_548;
    ulong ***pppuStack_540;
    ulong uStack_538;
    code *pcStack_530;
    uint64_t uStack_528;
    char *pcStack_520;
    int64_t *piStack_518;
    uint *puStack_510;
    uint64_t uStack_508;
    uchar auStack_500 [12];
    uint32_t uStack_4f4;
    int64_t iStack_4f0;
    int64_t iStack_4e8;
    ulong ***pppuStack_4e0;
    code *pcStack_4d8;
    ulong uStack_4d0;
    code *pcStack_4c0;
    uint64_t uStack_4b8;
    char *pcStack_4b0;
    uint64_t uStack_4a8;
    uchar auStack_4a0 [16];
    ulong uStack_488;
    ulong uStack_480;
    ulong uStack_478;
    ulong uStack_470;
    ulong uStack_468;
    ulong uStack_460;
    int64_t iStack_458;
    ulong ***pppuStack_450;
    ulong uStack_448;
    int64_t *piStack_440;
    uint *puStack_430;
    uint64_t uStack_428;
    uchar auStack_420 [12];
    uint32_t uStack_414;
    int64_t iStack_410;
    int64_t iStack_408;
    ulong ***pppuStack_400;
    code *pcStack_3f8;
    ulong uStack_3f0;
    code *pcStack_3e0;
    uint64_t uStack_3d8;
    char *pcStack_3d0;
    uint64_t uStack_3c8;
    int64_t iStack_3c0;
    uint *puStack_3b8;
    ulong uStack_3a8;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    int64_t iStack_378;
    ulong ***pppuStack_370;
    ulong uStack_368;
    int64_t *piStack_360;
    uint *puStack_350;
    uint64_t uStack_348;
    uchar auStack_340 [12];
    uint32_t uStack_334;
    int64_t iStack_330;
    int64_t iStack_328;
    ulong ***pppuStack_320;
    code *pcStack_318;
    code *pcStack_310;
    ulong uStack_300;
    uint64_t uStack_2f8;
    char *pcStack_2f0;
    uint64_t uStack_2e8;
    int64_t iStack_2e0;
    uint *puStack_2d8;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    ulong ***pppuStack_290;
    ulong uStack_288;
    char *pcStack_280;
    uint *puStack_270;
    uint64_t uStack_268;
    uchar auStack_260 [12];
    int iStack_254;
    int64_t *piStack_250;
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    uchar ***pppuStack_230;
    code *pcStack_228;
    uint64_t uStack_220;
    uint64_t uStack_218;
    char *pcStack_210;
    uint64_t uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    char *pcStack_1f0;
    char *pcStack_1e8;
    int64_t iStack_1e0;
    uint *puStack_1d8;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar **ppuStack_190;
    ulong uStack_188;
    char *pcStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    char *pcStack_160;
    char *pcStack_158;
    uint32_t *puStack_150;
    uint32_t *puStack_148;
    uchar auStack_140 [4];
    int iStack_13c;
    code *pcStack_138;
    ulong uStack_130;
    uint64_t uStack_128;
    int64_t *piStack_120;
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    char *pcStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    char *pcStack_c0;
    char *pcStack_b8;
    uint64_t uStack_b0;
    uint32_t *puStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uint *puVar14;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    pcVar33 = param_3 & 0xffffffff;
    uVar36 = *(param_1 + 0x48);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar21 = uVar36;
    uVar20 = param_4;
    puVar17 = param_5;
    uStack_a0 = param_2;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar16 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(param_1), (uVar10 & 1) == 0))))
        goto code_r0x0800a120;
    }
    else {
code_r0x0800a120:
        uVar30 = *param_5;
        uVar36 = uVar30;
        uVar21 = 0xc;
        if (param_3 != 0) {
            uVar21 = 6;
        }
        unaff_x28 = uVar21;
        uVar7 = uVar21 | 1;
        unaff_x27 = uVar7;
        uVar22 = 0xd;
        if (param_4 != 0) {
            uVar22 = 7;
        }
        unaff_x26 = uVar22;
        uVar2 = uVar7 + uVar22;
        unaff_x25 = uVar2;
        uVar3 = uVar2 + uVar30 * 2;
        unaff_x21 = uVar3;
        puVar16 = uVar3 + uVar30 + 0x28;
        uVar10 = trace_event_buffer_reserve(&uStack_98,param_1);
        if (uVar10 != 0) {
            unaff_x28 = uVar21 + 0x25;
            uVar2 = uVar2 | uVar30 << 0x11;
            unaff_x25 = uVar2;
            unaff_x21 = "(null)";
            unaff_x26 = "ION_MEM_TYPE";
            *(uVar10 + 0x14) = uVar7 << 0x10 | 0x24;
            *(uVar10 + 0x18) = uVar21 + 0x25 | uVar22 << 0x10;
            pcVar31 = unaff_x26;
            if (param_3 != 0) {
                pcVar31 = unaff_x21;
            }
            *(uVar10 + 0x1c) = uVar2 + 0x24;
            *(uVar10 + 0x20) = uVar3 + 0x24 | uVar30 << 0x10;
            *(uVar10 + 8) = uStack_a0;
            strcpy(uVar10 + 0x24,pcVar31);
            pcVar31 = unaff_x26;
            if (param_4 != 0) {
                pcVar31 = unaff_x21;
            }
            strcpy(uVar10 + unaff_x28,pcVar31);
            *(uVar10 + 0x10) = *param_5;
            if (*param_5 != 0) {
                uVar5 = *(uVar10 + 0x1c);
                uVar23 = 0;
                uVar6 = *(uVar10 + 0x20);
                pcVar31 = param_5 + 6;
                do {
                    *(uVar10 + uVar5 + uVar23 * 2) = *(pcVar31 + -2);
                    *(uVar10 + uVar6 + uVar23) = *pcVar31;
                    uVar23 = uVar23 + 1;
                    pcVar31 = pcVar31 + 4;
                } while (uVar23 < *param_5);
            }
            trace_event_buffer_commit(&uStack_98);
            param_1 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar39 = __stack_chk_fail();
    uStack_130 = auVar39._8_8_;
    uStack_128 = auVar39._0_8_;
    *extraout_x18 = sym.perf_trace_mem_buf_alloc_info;
    pcStack_f8 = sym.perf_trace_mem_buf_alloc_info;
    pcStack_138 = sym.perf_trace_mem_buf_alloc_info;
    iVar11 = sp_el0;
    iStack_108 = *(iVar11 + 0x5e0);
    iVar9 = puVar16;
    uVar10 = puVar16 & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    uVar30 = *puVar17;
    uVar21 = 0xc;
    if (iVar9 != 0) {
        uVar21 = 6;
    }
    uVar38 = uVar21;
    iVar11 = tpidr_el1;
    iVar19 = uVar20;
    uVar23 = uVar20 & 0xffffffff;
    uVar22 = 0xd;
    if (iVar19 != 0) {
        uVar22 = 7;
    }
    pcVar31 = uVar22;
    piStack_120 = iVar11 + *(uStack_128 + 0x78);
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_f0 = unaff_x28;
    uStack_e8 = unaff_x27;
    pcStack_e0 = unaff_x26;
    uStack_d8 = unaff_x25;
    uStack_d0 = uVar36;
    uStack_c8 = param_1;
    pcStack_c0 = pcVar33;
    pcStack_b8 = unaff_x21;
    uStack_b0 = param_4 & 0xffffffff;
    puStack_a8 = param_5;
    if ((*(uStack_128 + 0x80) != 0) || (pcVar29 = param_5, pcVar37 = unaff_x26, *piStack_120 != 0)) {
        uVar3 = uVar21 | 1;
        pcVar29 = uVar3;
        uVar7 = uVar3 + uVar22;
        pcVar37 = uVar7;
        puVar16 = &uStack_114;
        uVar2 = uVar7 + uVar30 * 2;
        pcVar33 = uVar2;
        iStack_13c = (uVar30 + uVar2 + 0x33 & 0xfffffff8) - 4;
        uVar36 = perf_trace_buf_alloc(iStack_13c,&iStack_110);
        auVar39._8_8_ = uStack_130;
        auVar39._0_8_ = uStack_128;
        if (uVar36 != 0) {
            uVar38 = uVar21 + 0x25;
            uVar7 = uVar7 | uVar30 << 0x11;
            pcVar37 = uVar7;
            uVar24 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_110 + 0xf8) = auStack_140;
            uVar20 = (~uVar24 | 0xff80000000000000) & pcStack_138;
            if ((pcStack_138 & 0x80000000000000) != 0) {
                uVar20 = uVar24 | pcStack_138;
            }
            *(iStack_110 + 0x100) = uVar20;
            *(iStack_110 + 0x108) = 5;
            pcVar29 = "(null)";
            pcVar31 = "ION_MEM_TYPE";
            *(iStack_110 + 0xe8) = &puStack_100;
            pcVar32 = pcVar31;
            if (iVar9 != 0) {
                pcVar32 = pcVar29;
            }
            *(uVar36 + 0x14) = uVar3 << 0x10 | 0x24;
            *(uVar36 + 0x18) = uVar21 + 0x25 | uVar22 << 0x10;
            *(uVar36 + 0x1c) = uVar7 + 0x24;
            *(uVar36 + 0x20) = uVar2 + 0x24 | uVar30 << 0x10;
            *(uVar36 + 8) = uStack_130;
            strcpy(uVar36 + 0x24,pcVar32);
            pcVar32 = pcVar31;
            if (iVar19 != 0) {
                pcVar32 = pcVar29;
            }
            strcpy(uVar36 + uVar38,pcVar32);
            *(uVar36 + 0x10) = *puVar17;
            if (*puVar17 != 0) {
                uVar5 = *(uVar36 + 0x1c);
                uVar20 = 0;
                uVar6 = *(uVar36 + 0x20);
                pcVar32 = puVar17 + 6;
                do {
                    *(uVar36 + uVar5 + uVar20 * 2) = *(pcVar32 + -2);
                    *(uVar36 + uVar6 + uVar20) = *pcVar32;
                    uVar20 = uVar20 + 1;
                    pcVar32 = pcVar32 + 4;
                } while (uVar20 < *puVar17);
            }
            puVar16 = uStack_114;
            uVar20 = uStack_128;
            perf_trace_run_bpf_submit(uVar36,iStack_13c,puVar16,uStack_128,1,iStack_110,piStack_120,0);
            auVar39._8_8_ = uStack_130;
            auVar39._0_8_ = uStack_128;
            param_1 = uVar36;
        }
    }
    uStack_130 = auVar39._8_8_;
    uStack_128 = auVar39._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_108) {
        return;
    }
    auVar39 = __stack_chk_fail();
    puVar13 = auVar39._8_8_;
    iVar27 = auVar39._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_00 = 0x800a488;
    uStack_188 = 0x800a488;
    iVar11 = sp_el0;
    iStack_198 = *(iVar11 + 0x5e0);
    pcVar32 = *(iVar27 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar21 = pcVar32;
    ppuStack_190 = &puStack_100;
    pcStack_180 = pcVar37;
    uStack_178 = uVar10;
    uStack_170 = uVar23;
    uStack_168 = param_1;
    pcStack_160 = pcVar33;
    pcStack_158 = pcVar31;
    puStack_150 = puVar17;
    puStack_148 = pcVar29;
    iStack_1e0 = iVar27;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar27,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar36 = trace_event_ignore_this_pid(iVar27), (uVar36 & 1) == 0))))
        goto code_r0x0800a50c;
    }
    else {
code_r0x0800a50c:
        if (puVar13[1] < 4) {
            pcVar33 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar33 = "(null)";
        }
        pcVar32 = strlen(pcVar33);
        uVar7 = puVar13[7];
        pcVar33 = uVar7;
        uVar21 = pcVar32 + 1;
        uVar23 = uVar21;
        uVar22 = 0xd;
        if (puVar13[5] != 0) {
            uVar22 = 7;
        }
        param_1 = uVar22;
        uVar2 = uVar22 + uVar21;
        pcVar37 = uVar2;
        uVar3 = uVar2 + uVar7 * 2;
        uVar10 = uVar3;
        puVar16 = uVar3 + uVar7 + 0x28;
        iVar11 = trace_event_buffer_reserve(&uStack_1c8,iVar27);
        if (iVar11 != 0) {
            uVar1 = pcVar32 + 0x29;
            pcVar32 = uVar1;
            *(iVar11 + 0xc) = uVar21 * 0x10000 | 0x28;
            pcVar33 = "(null)";
            *(iVar11 + 0x18) = uVar1 | uVar22 << 0x10;
            *(iVar11 + 0x20) = uVar2 + 0x28 | uVar7 << 0x11;
            *(iVar11 + 0x24) = uVar3 + 0x28 | uVar7 << 0x10;
            *(iVar11 + 8) = *puVar13;
            pcVar31 = pcVar33;
            if (puVar13[1] < 4) {
                pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            strcpy(iVar11 + 0x28,pcVar31);
            *(iVar11 + 0x10) = *(puVar13 + 3);
            pcVar31 = "ION_MEM_TYPE";
            if (puVar13[5] != 0) {
                pcVar31 = pcVar33;
            }
            strcpy(iVar11 + (uVar1 & 0xffff),pcVar31);
            *(iVar11 + 0x1c) = puVar13[7];
            if (puVar13[7] != 0) {
                uVar5 = *(iVar11 + 0x20);
                uVar36 = 0;
                uVar6 = *(iVar11 + 0x24);
                puVar25 = puVar13 + 0x22;
                do {
                    *(iVar11 + uVar5 + uVar36 * 2) = *(puVar25 + -2);
                    *(iVar11 + uVar6 + uVar36) = *puVar25;
                    uVar36 = uVar36 + 1;
                    puVar25 = puVar25 + 4;
                } while (uVar36 < puVar13[7]);
            }
            trace_event_buffer_commit(&uStack_1c8);
            iStack_1e0 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_198) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar14 = auVar40._8_8_;
    uVar36 = auVar40._0_8_;
    *extraout_x18_01 = sym.perf_trace_alloc_req_msg_class;
    pcStack_228 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_238 = *(iVar11 + 0x5e0);
    iStack_240 = 0;
    uStack_244 = 0;
    if (puVar14[1] < 4) {
        pcVar31 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar31 = "(null)";
    }
    pppuStack_230 = &ppuStack_190;
    uStack_220 = uVar30;
    uStack_218 = uVar38;
    pcStack_210 = pcVar37;
    uStack_208 = uVar10;
    uStack_200 = uVar23;
    uStack_1f8 = param_1;
    pcStack_1f0 = pcVar33;
    pcStack_1e8 = pcVar32;
    puStack_1d8 = puVar13;
    uVar12 = strlen(pcVar31);
    uVar21 = puVar14[7];
    iVar11 = tpidr_el1;
    iVar9 = 0xd;
    if (puVar14[5] != 0) {
        iVar9 = 7;
    }
    piStack_250 = iVar11 + *(uVar36 + 0x78);
    if ((*(uVar36 + 0x80) != 0) || (*piStack_250 != 0)) {
        uVar30 = uVar12 + 1;
        pcVar33 = uVar30;
        puVar16 = &uStack_244;
        uVar22 = iVar9 + uVar30 + uVar21 * 2;
        pcVar32 = uVar22;
        iStack_254 = (uVar21 + uVar22 + 0x33 & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(iStack_254,&iStack_240);
        if (uVar10 != 0) {
            uVar7 = uVar12 + 0x29;
            pcVar33 = uVar7;
            uVar20 = _hyp_assign_table & 0x3f;
            *(iStack_240 + 0xf8) = auStack_260;
            *(iStack_240 + 0xe8) = &pppuStack_230;
            *(iStack_240 + 0x100) = ~(-1L << uVar20) & 0x800a690;
            *(iStack_240 + 0x108) = 5;
            *(uVar10 + 0xc) = uVar30 * 0x10000 | 0x28;
            pcVar32 = "(null)";
            *(uVar10 + 0x18) = uVar7 | iVar9 << 0x10;
            *(uVar10 + 0x20) = iVar9 + uVar30 + 0x28 | uVar21 << 0x11;
            *(uVar10 + 0x24) = uVar22 + 0x28 | uVar21 << 0x10;
            *(uVar10 + 8) = *puVar14;
            pcVar31 = pcVar32;
            if (puVar14[1] < 4) {
                pcVar31 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            strcpy(uVar10 + 0x28,pcVar31);
            *(uVar10 + 0x10) = *(puVar14 + 3);
            pcVar31 = "ION_MEM_TYPE";
            if (puVar14[5] != 0) {
                pcVar31 = pcVar32;
            }
            strcpy(uVar10 + (uVar7 & 0xffff),pcVar31);
            *(uVar10 + 0x1c) = puVar14[7];
            if (puVar14[7] != 0) {
                uVar5 = *(uVar10 + 0x20);
                uVar20 = 0;
                uVar6 = *(uVar10 + 0x24);
                puVar25 = puVar14 + 0x22;
                do {
                    *(uVar10 + uVar5 + uVar20 * 2) = *(puVar25 + -2);
                    *(uVar10 + uVar6 + uVar20) = *puVar25;
                    uVar20 = uVar20 + 1;
                    puVar25 = puVar25 + 4;
                } while (uVar20 < puVar14[7]);
            }
            puVar16 = uStack_244;
            uVar20 = uVar36;
            perf_trace_run_bpf_submit(uVar10,iStack_254,puVar16,uVar36,1,iStack_240,piStack_250,0);
            param_1 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_238) {
        return;
    }
    auVar39 = __stack_chk_fail();
    puVar13 = auVar39._8_8_;
    iVar27 = auVar39._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_02 = 0x800a8f4;
    uStack_288 = 0x800a8f4;
    iVar11 = sp_el0;
    iStack_298 = *(iVar11 + 0x5e0);
    uVar10 = *(iVar27 + 0x48);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uVar30 = uVar10;
    pppuStack_290 = &pppuStack_230;
    pcStack_280 = pcVar32;
    iStack_2e0 = iVar27;
    if ((uVar30 >> 8 & 1) == 0) {
        if ((uVar30 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            puStack_270 = puVar14;
            uStack_268 = uVar36;
            event_triggers_call(iVar27,0);
            auVar40._8_8_ = puStack_270;
            auVar40._0_8_ = uStack_268;
        }
        puStack_270 = auVar40._8_8_;
        uStack_268 = auVar40._0_8_;
        if (((uVar30 >> 6 & 1) == 0) &&
           (((uVar30 >> 9 & 1) == 0 ||
            (uVar36 = trace_event_ignore_this_pid(iVar27), auVar40._8_8_ = puStack_270, auVar40._0_8_ = uStack_268,
            (uVar36 & 1) == 0)))) goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        puStack_270 = auVar40._8_8_;
        uStack_268 = auVar40._0_8_;
        if (puVar13[1] < 4) {
            pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar31 = "(null)";
        }
        iVar9 = strlen(pcVar31);
        uVar30 = iVar9 + 1;
        uVar10 = uVar30;
        puVar16 = uVar30 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_2c8,iVar27);
        auVar40._8_8_ = puStack_270;
        auVar40._0_8_ = uStack_268;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar30 * 0x10000 | 0x14;
            if (puVar13[1] < 4) {
                pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar31 = "(null)";
            }
            strcpy(iVar11 + 0x14,pcVar31);
            *(iVar11 + 0xc) = puVar13[3];
            *(iVar11 + 0x10) = *puVar13;
            trace_event_buffer_commit(&uStack_2c8);
            auVar40._8_8_ = puStack_270;
            auVar40._0_8_ = uStack_268;
            iStack_2e0 = iVar11;
        }
    }
    puStack_270 = auVar40._8_8_;
    uStack_268 = auVar40._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_298) {
        return;
    }
    auVar41 = __stack_chk_fail();
    puVar14 = auVar41._8_8_;
    uVar36 = auVar41._0_8_;
    *extraout_x18_03 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_318 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_310 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_328 = *(iVar11 + 0x5e0);
    iStack_330 = 0;
    uStack_334 = 0;
    if (puVar14[1] < 4) {
        pcVar31 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar31 = "(null)";
    }
    pppuStack_320 = &pppuStack_290;
    uStack_300 = uVar12;
    uStack_2f8 = param_1;
    pcStack_2f0 = pcVar33;
    uStack_2e8 = uVar10;
    puStack_2d8 = puVar13;
    uVar12 = strlen(pcVar31);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar36 + 0x78);
    if ((*(uVar36 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar16 = &uStack_334;
        pcVar33 = (uVar12 + 0x20U & 0xfffffff8) - 4;
        uVar23 = perf_trace_buf_alloc(pcVar33,&iStack_330);
        uVar10 = _hyp_assign_table;
        if (uVar23 != 0) {
            *(iStack_330 + 0xe8) = &pppuStack_320;
            *(iStack_330 + 0xf8) = auStack_340;
            *(iStack_330 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800aa3c;
            *(iStack_330 + 0x108) = 5;
            *(uVar23 + 8) = uVar12 * 0x10000 + 0x10014;
            if (puVar14[1] < 4) {
                pcVar31 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar31 = "(null)";
            }
            strcpy(uVar23 + 0x14,pcVar31);
            puVar16 = uStack_334;
            *(uVar23 + 0xc) = puVar14[3];
            *(uVar23 + 0x10) = *puVar14;
            uVar20 = uVar36;
            perf_trace_run_bpf_submit(uVar23,pcVar33,puVar16,uVar36,1,iStack_330,piVar4,0);
            param_1 = uVar23;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_328) {
        return;
    }
    auVar39 = __stack_chk_fail();
    puVar13 = auVar39._8_8_;
    iVar27 = auVar39._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x800abe4;
    uStack_368 = 0x800abe4;
    iVar11 = sp_el0;
    iStack_378 = *(iVar11 + 0x5e0);
    uVar10 = *(iVar27 + 0x48);
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uVar30 = uVar10;
    pppuStack_370 = &pppuStack_320;
    piStack_360 = piVar4;
    iStack_3c0 = iVar27;
    if ((uVar30 >> 8 & 1) == 0) {
        if ((uVar30 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            puStack_350 = puVar14;
            uStack_348 = uVar36;
            event_triggers_call(iVar27,0);
            auVar41._8_8_ = puStack_350;
            auVar41._0_8_ = uStack_348;
        }
        puStack_350 = auVar41._8_8_;
        uStack_348 = auVar41._0_8_;
        if (((uVar30 >> 6 & 1) == 0) &&
           (((uVar30 >> 9 & 1) == 0 ||
            (uVar36 = trace_event_ignore_this_pid(iVar27), auVar41._8_8_ = puStack_350, auVar41._0_8_ = uStack_348,
            (uVar36 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_350 = auVar41._8_8_;
        uStack_348 = auVar41._0_8_;
        if (puVar13[1] < 4) {
            pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar31 = "(null)";
        }
        iVar9 = strlen(pcVar31);
        uVar30 = iVar9 + 1;
        uVar10 = uVar30;
        puVar16 = uVar30 + 0x18;
        iVar11 = trace_event_buffer_reserve(&uStack_3a8,iVar27);
        auVar41._8_8_ = puStack_350;
        auVar41._0_8_ = uStack_348;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar30 * 0x10000 | 0x18;
            *(iVar11 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar31 = "(null)";
            }
            strcpy(iVar11 + 0x18,pcVar31);
            *(iVar11 + 0x10) = puVar13[3];
            *(iVar11 + 0x14) = puVar13[4];
            trace_event_buffer_commit(&uStack_3a8);
            auVar41._8_8_ = puStack_350;
            auVar41._0_8_ = uStack_348;
            iStack_3c0 = iVar11;
        }
    }
    puStack_350 = auVar41._8_8_;
    uStack_348 = auVar41._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_378) {
        return;
    }
    auVar42 = __stack_chk_fail();
    puVar14 = auVar42._8_8_;
    uVar36 = auVar42._0_8_;
    *extraout_x18_05 = sym.perf_trace_alloc_resp_class;
    pcStack_3f8 = sym.perf_trace_alloc_resp_class;
    pcStack_3e0 = sym.perf_trace_relinquish_req_msg_class;
    iVar11 = sp_el0;
    iStack_408 = *(iVar11 + 0x5e0);
    iStack_410 = 0;
    uStack_414 = 0;
    if (puVar14[1] < 4) {
        pcVar31 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar31 = "(null)";
    }
    pppuStack_400 = &pppuStack_370;
    uStack_3f0 = uVar12;
    uStack_3d8 = param_1;
    pcStack_3d0 = pcVar33;
    uStack_3c8 = uVar10;
    puStack_3b8 = puVar13;
    uVar12 = strlen(pcVar31);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar36 + 0x78);
    if ((*(uVar36 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar16 = &uStack_414;
        pcVar33 = (uVar12 + 0x24U & 0xfffffff8) - 4;
        uVar23 = perf_trace_buf_alloc(pcVar33,&iStack_410);
        uVar10 = _hyp_assign_table;
        if (uVar23 != 0) {
            *(iStack_410 + 0xe8) = &pppuStack_400;
            *(iStack_410 + 0xf8) = auStack_420;
            *(iStack_410 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800ad34;
            *(iStack_410 + 0x108) = 5;
            *(uVar23 + 0xc) = uVar12 * 0x10000 + 0x10018;
            *(uVar23 + 8) = *puVar14;
            if (puVar14[1] < 4) {
                pcVar31 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar31 = "(null)";
            }
            strcpy(uVar23 + 0x18,pcVar31);
            puVar16 = uStack_414;
            *(uVar23 + 0x10) = puVar14[3];
            *(uVar23 + 0x14) = puVar14[4];
            uVar20 = uVar36;
            perf_trace_run_bpf_submit(uVar23,pcVar33,puVar16,uVar36,1,iStack_410,piVar4,0);
            param_1 = uVar23;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_408) {
        return;
    }
    auVar39 = __stack_chk_fail();
    puVar13 = auVar39._8_8_;
    iVar27 = auVar39._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_06 = 0x800aee4;
    uStack_448 = 0x800aee4;
    iVar11 = sp_el0;
    iStack_458 = *(iVar11 + 0x5e0);
    uVar10 = *(iVar27 + 0x48);
    uStack_468 = 0;
    uStack_460 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_488 = 0;
    uStack_480 = 0;
    uVar30 = uVar10;
    pppuStack_450 = &pppuStack_400;
    piStack_440 = piVar4;
    if ((uVar30 >> 8 & 1) == 0) {
        if ((uVar30 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            puStack_430 = puVar14;
            uStack_428 = uVar36;
            event_triggers_call(iVar27,0);
            auVar42._8_8_ = puStack_430;
            auVar42._0_8_ = uStack_428;
        }
        puStack_430 = auVar42._8_8_;
        uStack_428 = auVar42._0_8_;
        if (((uVar30 >> 6 & 1) == 0) &&
           (((uVar30 >> 9 & 1) == 0 ||
            (uVar36 = trace_event_ignore_this_pid(iVar27), auVar42._8_8_ = puStack_430, auVar42._0_8_ = uStack_428,
            (uVar36 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_430 = auVar42._8_8_;
        uStack_428 = auVar42._0_8_;
        if (puVar13[1] < 4) {
            pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar31 = "(null)";
        }
        iVar9 = strlen(pcVar31);
        uVar30 = iVar9 + 1;
        uVar10 = uVar30;
        puVar16 = uVar30 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_488,iVar27);
        auVar42._8_8_ = puStack_430;
        auVar42._0_8_ = uStack_428;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar30 * 0x10000 | 0x10;
            *(iVar11 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar31 = "(null)";
            }
            strcpy(iVar11 + 0x10,pcVar31);
            trace_event_buffer_commit(&uStack_488);
            auVar42._8_8_ = puStack_430;
            auVar42._0_8_ = uStack_428;
        }
    }
    puStack_430 = auVar42._8_8_;
    uStack_428 = auVar42._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_458) {
        return;
    }
    auVar43 = __stack_chk_fail();
    puVar13 = auVar43._8_8_;
    uVar36 = auVar43._0_8_;
    *extraout_x18_07 = sym.perf_trace_relinquish_resp_class;
    pcStack_4d8 = sym.perf_trace_relinquish_resp_class;
    pcStack_4c0 = sym.perf_trace_alloc_resp_class;
    iVar11 = sp_el0;
    iStack_4e8 = *(iVar11 + 0x5e0);
    iStack_4f0 = 0;
    uStack_4f4 = 0;
    if (puVar13[1] < 4) {
        pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar31 = "(null)";
    }
    pppuStack_4e0 = &pppuStack_450;
    uStack_4d0 = uVar12;
    uStack_4b8 = param_1;
    pcStack_4b0 = pcVar33;
    uStack_4a8 = uVar10;
    auStack_4a0 = auVar39;
    uVar12 = strlen(pcVar31);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar36 + 0x78);
    if ((*(uVar36 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar16 = &uStack_4f4;
        pcVar33 = (uVar12 + 0x1cU & 0xfffffff8) - 4;
        uVar23 = perf_trace_buf_alloc(pcVar33,&iStack_4f0);
        uVar10 = _hyp_assign_table;
        if (uVar23 != 0) {
            *(iStack_4f0 + 0xe8) = &pppuStack_4e0;
            *(iStack_4f0 + 0xf8) = auStack_500;
            *(iStack_4f0 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800b020;
            *(iStack_4f0 + 0x108) = 5;
            *(uVar23 + 0xc) = uVar12 * 0x10000 + 0x10010;
            *(uVar23 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar31 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar31 = "(null)";
            }
            strcpy(uVar23 + 0x10,pcVar31);
            puVar16 = uStack_4f4;
            uVar20 = uVar36;
            perf_trace_run_bpf_submit(uVar23,pcVar33,puVar16,uVar36,1,iStack_4f0,piVar4,0);
            param_1 = uVar23;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_4e8) {
        return;
    }
    auVar39 = __stack_chk_fail();
    puVar15 = auVar39._8_8_;
    iVar27 = auVar39._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_08 = 0x800b1c0;
    uStack_538 = 0x800b1c0;
    pcStack_530 = sym.perf_trace_relinquish_resp_class;
    iVar11 = sp_el0;
    iStack_548 = *(iVar11 + 0x5e0);
    pcVar35 = *(iVar27 + 0x48);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    uVar30 = pcVar35;
    uVar10 = uVar20;
    pppuStack_540 = &pppuStack_4e0;
    uStack_528 = param_1;
    pcStack_520 = pcVar33;
    piStack_518 = piVar4;
    if ((uVar30 >> 8 & 1) == 0) {
        puVar17 = puVar16;
        if ((uVar30 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar10 = 0;
            puStack_510 = puVar13;
            uStack_508 = uVar36;
            event_triggers_call(iVar27,0);
            auVar43._8_8_ = puStack_510;
            auVar43._0_8_ = uStack_508;
        }
        puStack_510 = auVar43._8_8_;
        uStack_508 = auVar43._0_8_;
        pcStack_5b0 = sym.perf_trace_relinquish_resp_class;
        if (((uVar30 >> 6 & 1) == 0) &&
           (((uVar30 >> 9 & 1) == 0 ||
            (uVar36 = trace_event_ignore_this_pid(iVar27), auVar43._8_8_ = puStack_510, auVar43._0_8_ = uStack_508,
            (uVar36 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_510 = auVar43._8_8_;
        uStack_508 = auVar43._0_8_;
        uVar5 = *puVar15;
        pcVar35 = uVar5;
        puVar17 = pcVar35 * 0x10 + 0x1c;
        iVar11 = trace_event_buffer_reserve(&uStack_578,iVar27);
        auVar43._8_8_ = puStack_510;
        auVar43._0_8_ = uStack_508;
        pcStack_5b0 = pcVar35;
        if (iVar11 != 0) {
            uVar30 = uVar5 << 0x13;
            uVar36 = pcVar35 * 8 + 0x1c;
            *(iVar11 + 0xc) = uVar30 | 0x1c;
            *(iVar11 + 0x10) = uVar36 | uVar30;
            *(iVar11 + 8) = *puVar15;
            if (*puVar15 != 0) {
                uVar23 = 0;
                puVar26 = puVar15 + 6;
                do {
                    iVar27 = uVar23 * 8;
                    uVar23 = uVar23 + 1;
                    *(iVar11 + 0x1c + iVar27) = *(puVar26 + -4);
                    *(iVar11 + (uVar36 & 0xfffc) + iVar27) = *puVar26;
                    puVar26 = puVar26 + 8;
                } while (uVar23 < *puVar15);
            }
            *(iVar11 + 0x14) = puVar16;
            *(iVar11 + 0x18) = uVar20;
            trace_event_buffer_commit(&uStack_578);
            auVar43._8_8_ = puStack_510;
            auVar43._0_8_ = uStack_508;
        }
    }
    puStack_510 = auVar43._8_8_;
    uStack_508 = auVar43._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_548) {
        return;
    }
    auVar44 = __stack_chk_fail();
    puVar15 = auVar44._8_8_;
    uVar23 = auVar44._0_8_;
    *extraout_x18_09 = sym.perf_trace_lookup_sgl;
    pcStack_5c8 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_5d8 = *(iVar11 + 0x5e0);
    uVar38 = uVar10 & 0xffffffff;
    uVar24 = puVar17 & 0xffffffff;
    iStack_5e0 = 0;
    uStack_5e4 = 0;
    uVar5 = *puVar15;
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar23 + 0x78);
    uVar36 = uVar10;
    pppuStack_5d0 = &pppuStack_540;
    uStack_5c0 = uVar21;
    uStack_5b8 = uVar12;
    pcStack_5a8 = pcVar35;
    uStack_590 = puVar16 & 0xffffffff;
    uStack_588 = uVar20 & 0xffffffff;
    auStack_5a0 = auVar39;
    if ((*(uVar23 + 0x80) != 0) || (puVar18 = puVar17, pcVar35 = pcStack_5b0, *piVar4 != 0)) {
        puVar18 = &uStack_5e4;
        pcVar35 = (uVar5 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar35,&iStack_5e0);
        if (iVar11 != 0) {
            uVar36 = _hyp_assign_table & 0x3f;
            *(iStack_5e0 + 0xe8) = &pppuStack_5d0;
            *(iStack_5e0 + 0xf8) = auStack_5f0;
            uVar20 = uVar5 * 8 + 0x1c;
            *(iStack_5e0 + 0x100) = ~(-1L << uVar36) & 0x800b30c;
            *(iStack_5e0 + 0x108) = 5;
            *(iVar11 + 0xc) = uVar5 << 0x13 | 0x1c;
            *(iVar11 + 0x10) = uVar20 | uVar5 << 0x13;
            *(iVar11 + 8) = *puVar15;
            if (*puVar15 != 0) {
                uVar36 = 0;
                puVar26 = puVar15 + 6;
                do {
                    iVar27 = uVar36 * 8;
                    uVar36 = uVar36 + 1;
                    *(iVar11 + 0x1c + iVar27) = *(puVar26 + -4);
                    *(iVar11 + (uVar20 & 0xfffc) + iVar27) = *puVar26;
                    puVar26 = puVar26 + 8;
                } while (uVar36 < *puVar15);
            }
            puVar18 = uStack_5e4;
            *(iVar11 + 0x14) = puVar17;
            *(iVar11 + 0x18) = uVar10;
            uVar36 = uVar23;
            perf_trace_run_bpf_submit(iVar11,pcVar35,puVar18,uVar23,1,iStack_5e0,piVar4,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_5d8) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar27 = auVar39._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_10 = 0x800b4ac;
    uStack_628 = 0x800b4ac;
    iVar11 = sp_el0;
    iStack_638 = *(iVar11 + 0x5e0);
    uVar20 = auVar39._8_8_ & 0xffffffff;
    piVar34 = *(iVar27 + 0x48);
    uStack_648 = 0;
    uStack_640 = 0;
    uStack_658 = 0;
    uStack_650 = 0;
    uStack_668 = 0;
    uStack_660 = 0;
    uVar21 = piVar34;
    pppuStack_630 = &pppuStack_5d0;
    piStack_620 = piVar4;
    uStack_608 = uVar24;
    uStack_600 = uVar38;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar36 = 0;
            puStack_610 = puVar15;
            uStack_5f8 = uVar23;
            event_triggers_call(iVar27,0,0,0);
            auVar44._8_8_ = puStack_610;
            auVar44._0_8_ = uStack_5f8;
        }
        puStack_610 = auVar44._8_8_;
        uStack_5f8 = auVar44._0_8_;
        piStack_698 = piVar4;
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 &&
            (uVar10 = trace_event_ignore_this_pid(iVar27), auVar44._8_8_ = puStack_610, auVar44._0_8_ = uStack_5f8,
            (uVar10 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_610 = auVar44._8_8_;
    uStack_5f8 = auVar44._0_8_;
    uVar21 = *puVar18;
    piVar34 = uVar21;
    puVar17 = piVar34 * 0x10 + 0x18;
    iVar11 = trace_event_buffer_reserve(&uStack_668,iVar27);
    auVar44._8_8_ = puStack_610;
    auVar44._0_8_ = uStack_5f8;
    piStack_698 = piVar34;
    if (iVar11 != 0) {
        uVar21 = uVar21 << 0x13;
        uVar10 = piVar34 * 8 + 0x18;
        *(iVar11 + 8) = auVar39._8_4_;
        *(iVar11 + 0x10) = uVar21 | 0x18;
        *(iVar11 + 0x14) = uVar10 | uVar21;
        *(iVar11 + 0xc) = *puVar18;
        if (*puVar18 != 0) {
            uVar23 = 0;
            puVar16 = puVar18 + 3;
            do {
                iVar28 = uVar23 * 8;
                uVar23 = uVar23 + 1;
                *(iVar11 + 0x18 + iVar28) = *(puVar16 + -2);
                *(iVar11 + (uVar10 & 0xfff8) + iVar28) = *puVar16;
                puVar16 = puVar16 + 4;
            } while (uVar23 < *puVar18);
        }
        trace_event_buffer_commit(&uStack_668);
        auVar44._8_8_ = puStack_610;
        auVar44._0_8_ = uStack_5f8;
    }
code_r0x0800b5bc:
    puStack_610 = auVar44._8_8_;
    uStack_5f8 = auVar44._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_638) {
        return;
    }
    auVar45 = __stack_chk_fail();
    uVar10 = auVar45._0_8_;
    *extraout_x18_11 = sym.perf_trace_map_mem_s2;
    pcStack_6b8 = sym.perf_trace_map_mem_s2;
    pcStack_6b0 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_6c8 = *(iVar11 + 0x5e0);
    iStack_6d0 = 0;
    uStack_6d4 = 0;
    uVar5 = *puVar17;
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar10 + 0x78);
    pppuStack_6c0 = &pppuStack_630;
    pcStack_6a0 = pcVar35;
    piStack_690 = piVar34;
    iStack_688 = iVar27;
    uStack_680 = uVar20;
    puStack_678 = puVar18;
    if ((*(uVar10 + 0x80) != 0) || (puVar16 = puVar17, *piVar4 != 0)) {
        puVar16 = &uStack_6d4;
        iVar9 = (uVar5 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(iVar9,&iStack_6d0,puVar16);
        if (iVar11 != 0) {
            uVar36 = _hyp_assign_table & 0x3f;
            *(iStack_6d0 + 0xe8) = &pppuStack_6c0;
            *(iStack_6d0 + 0xf8) = auStack_6e0;
            uVar20 = uVar5 * 8 + 0x18;
            *(iStack_6d0 + 0x100) = ~(-1L << uVar36) & 0x800b5f4;
            *(iStack_6d0 + 0x108) = 5;
            *(iVar11 + 8) = auVar45._8_4_;
            *(iVar11 + 0x10) = uVar5 << 0x13 | 0x18;
            *(iVar11 + 0x14) = uVar20 | uVar5 << 0x13;
            *(iVar11 + 0xc) = *puVar17;
            if (*puVar17 != 0) {
                uVar36 = 0;
                puVar16 = puVar17 + 3;
                do {
                    iVar27 = uVar36 * 8;
                    uVar36 = uVar36 + 1;
                    *(iVar11 + 0x18 + iVar27) = *(puVar16 + -2);
                    *(iVar11 + (uVar20 & 0xfff8) + iVar27) = *puVar16;
                    puVar16 = puVar16 + 4;
                } while (uVar36 < *puVar17);
            }
            puVar16 = uStack_6d4;
            perf_trace_run_bpf_submit(iVar11,iVar9,puVar16,uVar10,1,iStack_6d0,piVar4,0);
            uVar36 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_6c8) {
        auVar39 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_12 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar39._0_8_,auVar39._8_8_,puVar16 & 0xffffffff,uVar36 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.mem_buf_fd_to_vmid.cfi_jt @ 0x08007b48 (size 8) =====

uint64_t sym.mem_buf_fd_to_vmid.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = fget();
    if (iVar2 == 0) {
        uVar3 = 0xffffffea;
    }
    else {
        if (*(iVar2 + 0x28) == obj.mem_buf_vm_fops) {
            uVar3 = *(*(iVar2 + 0xd8) + 8);
        }
        else {
            iVar1 = ___ratelimit(obj.mem_buf_fd_to_vmid._rs,"mem_buf_fd_to_vmid");
            if (iVar1 == 0) {
                uVar3 = 0xffffffea;
            }
            else {
                _printk(0x8005e00);
                uVar3 = 0xffffffea;
            }
        }
        fput(iVar2);
    }
    return uVar3;
}


// ===== sym.trace_raw_output_relinquish_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b50 (size 8) =====

void sym.trace_raw_output_relinquish_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"msg_type: %s memparcel_hdl: 0x%x txn_id: 0x%x\n",iVar2 + *(iVar2 + 8),
                           *(iVar2 + 0xc),*(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b58 (size 8) =====

void sym.trace_raw_output_alloc_req_msg_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    uint uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(param_1 + 0x20e8);
    iVar5 = trace_raw_output_prep(param_1,param_3);
    if (iVar5 == 1) {
        uVar1 = *(iVar9 + 0x1c);
        uVar3 = *(iVar9 + 0xc);
        uVar4 = *(iVar9 + 0x18);
        uVar2 = *(iVar9 + 8);
        uVar8 = *(iVar9 + 0x10);
        uVar6 = trace_print_array_seq(param_1 + 0x88,iVar9 + *(iVar9 + 0x20),uVar1,2);
        uVar7 = trace_print_array_seq(param_1 + 0x88,iVar9 + *(iVar9 + 0x24),*(iVar9 + 0x1c),1);
        trace_event_printf(param_1,
                           "txn_id: %d msg_type: %s alloc_sz: 0x%lx src_mem_type: %s nr ACL entries: %d ACL VMIDs: %s ACL Perms: %s\n"
                           ,uVar2,iVar9 + uVar3,uVar8,iVar9 + uVar4,uVar1,uVar6,uVar7);
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b60 (size 8) =====

void sym.trace_raw_output_mem_buf_alloc_info.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x20e8);
    iVar4 = trace_raw_output_prep(param_1,param_3);
    if (iVar4 == 1) {
        uVar1 = *(iVar8 + 0x10);
        uVar2 = *(iVar8 + 0x14);
        uVar3 = *(iVar8 + 0x18);
        uVar7 = *(iVar8 + 8);
        uVar5 = trace_print_array_seq(param_1 + 0x88,iVar8 + *(iVar8 + 0x1c),uVar1,2);
        uVar6 = trace_print_array_seq(param_1 + 0x88,iVar8 + *(iVar8 + 0x20),*(iVar8 + 0x10),1);
        trace_event_printf(param_1,
                           "size: 0x%lx src mem type: %s dst mem type: %s nr ACL entries: %d ACL VMIDs: %s ACL Perms: %s\n"
                           ,uVar7,iVar8 + uVar2,iVar8 + uVar3,uVar1,uVar5,uVar6);
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b68 (size 8) =====

void sym.trace_raw_output_alloc_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"txn_id: %d msg_type: %s ret: %d memparcel_hdl: 0x%x\n",*(iVar2 + 8),
                           iVar2 + *(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b70 (size 8) =====

void sym.trace_raw_output_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    ushort uVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x20e8);
    iVar2 = trace_raw_output_prep(param_1,param_3);
    if (iVar2 == 1) {
        uVar1 = *(iVar5 + 8);
        uVar3 = trace_print_array_seq(param_1 + 0x88,iVar5 + *(iVar5 + 0xc),uVar1,8);
        uVar4 = trace_print_array_seq(param_1 + 0x88,iVar5 + *(iVar5 + 0x10),*(iVar5 + 8),8);
        trace_event_printf(param_1,"SGL entries: %d SGL IPA bases: %s SGL sizes: %s ret: %d memparcel_hdl: 0x%x\n",
                           uVar1,uVar3,uVar4,*(iVar5 + 0x14),*(iVar5 + 0x18));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_relinquish_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b78 (size 8) =====

void sym.trace_raw_output_relinquish_resp_class.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"txn_id: %d msg_type: %s\n",*(iVar2 + 8),iVar2 + *(iVar2 + 0xc));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b80 (size 8) =====

void sym.trace_raw_output_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    ushort uVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x20e8);
    iVar3 = trace_raw_output_prep(param_1,param_3);
    if (iVar3 == 1) {
        uVar2 = *(iVar6 + 0xc);
        uVar1 = *(iVar6 + 8);
        uVar4 = trace_print_array_seq(param_1 + 0x88,iVar6 + *(iVar6 + 0x10),uVar2,8);
        uVar5 = trace_print_array_seq(param_1 + 0x88,iVar6 + *(iVar6 + 0x14),*(iVar6 + 0xc),8);
        trace_event_printf(param_1,
                           "MEM_ACCEPT successful memparcel hdl: 0x%x SGL entries: %d SGL IPA bases: %s SGL sizes: %s\n"
                           ,uVar1,uVar2,uVar4,uVar5);
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.dup_gh_sgl_desc_to_sgt.cfi_jt @ 0x08007b88 (size 8) =====

ulong * sym.dup_gh_sgl_desc_to_sgt.cfi_jt(int16_t *param_1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *puVar3;
    uint64_t *puVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (*param_1 == 0)) {
        puVar3 = 0xffffffffffffffea;
    }
    else {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x10);
        if (puVar3 == NULL) {
            puVar3 = 0xfffffffffffffff4;
        }
        else {
            iVar2 = sg_alloc_table(puVar3,*param_1,0xcc0);
            if (iVar2 == 0) {
                if (*(puVar3 + 1) != 0) {
                    puVar4 = *puVar3;
                    uVar8 = 0;
                    do {
                        uVar1 = uVar8 + 1;
                        uVar7 = *(param_1 + uVar8 * 8 + 2);
                        iVar6 = ___stack_chk_fail >> 0xc;
                        uVar5 = *(param_1 + uVar8 * 8 + 6);
                        puVar4[2] = 0;
                        *(puVar4 + 3) = 0;
                        *(puVar4 + 1) = 0;
                        *(puVar4 + 0xc) = uVar5;
                        *puVar4 = ((uVar7 >> 6 & 0x3ffffffffffffc0) + iVar6 * -0x40 | *puVar4 & 3) - 0x200000000;
                        puVar4 = sg_next();
                        uVar8 = uVar1;
                    } while (uVar1 < *(puVar3 + 1));
                }
            }
            else {
                kfree(puVar3);
                puVar3 = 0xfffffffffffffff4;
            }
        }
    }
    return puVar3;
}


// ===== sym.__bpf_trace_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b90 (size 8) =====

void sym.__bpf_trace_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt(ulong param_1,uint param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2);
    return;
}


// ===== sym.perf_trace_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007b98 (size 8) =====

void sym.perf_trace_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (uint64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar10 [16];
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    uVar2 = *param_3;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (puVar6 = param_3, *piVar1 != 0)) {
        puVar6 = &uStack_64;
        iVar3 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar5 = perf_trace_buf_alloc(iVar3,&iStack_60,puVar6);
        if (iVar5 != 0) {
            uVar8 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar7 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar7 = uVar8 | unaff_x30;
            }
            uVar8 = uVar2 * 8 + 0x18;
            *(iStack_60 + 0x100) = uVar7;
            *(iStack_60 + 0x108) = 5;
            *(iVar5 + 8) = param_2;
            *(iVar5 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar5 + 0x14) = uVar8 | uVar2 << 0x13;
            *(iVar5 + 0xc) = *param_3;
            if (*param_3 != 0) {
                uVar7 = 0;
                puVar6 = param_3 + 3;
                do {
                    iVar9 = uVar7 * 8;
                    uVar7 = uVar7 + 1;
                    *(iVar5 + 0x18 + iVar9) = *(puVar6 + -2);
                    *(iVar5 + (uVar8 & 0xfff8) + iVar9) = *puVar6;
                    puVar6 = puVar6 + 4;
                } while (uVar7 < *param_3);
            }
            puVar6 = uStack_64;
            perf_trace_run_bpf_submit(iVar5,iVar3,puVar6,param_1,1,iStack_60,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar10 = __stack_chk_fail();
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800b790;
    bpf_trace_run4(in_tmp_ldXn,auVar10._0_8_,auVar10._8_8_,puVar6 & 0xffffffff,param_4 & 0xffffffff);
    return;
}


// ===== sym.trace_event_raw_event_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007ba0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_map_mem_s2.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [12];
    uchar auVar14 [16];
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(param_1 + 0x48);
    if ((uVar12 >> 8 & 1) == 0) {
        puVar7 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar7 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) != 0))))
        goto code_r0x0800b5bc;
    }
    uVar2 = *param_3;
    puVar7 = uVar2 * 0x10 + 0x18;
    iVar6 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar6 != 0) {
        uVar5 = uVar2 * 8 + 0x18;
        *(iVar6 + 8) = param_2;
        *(iVar6 + 0x10) = uVar2 << 0x13 | 0x18;
        *(iVar6 + 0x14) = uVar5 | uVar2 << 0x13;
        *(iVar6 + 0xc) = *param_3;
        if (*param_3 != 0) {
            uVar9 = 0;
            puVar8 = param_3 + 3;
            do {
                iVar11 = uVar9 * 8;
                uVar9 = uVar9 + 1;
                *(iVar6 + 0x18 + iVar11) = *(puVar8 + -2);
                *(iVar6 + (uVar5 & 0xfff8) + iVar11) = *puVar8;
                puVar8 = puVar8 + 4;
            } while (uVar9 < *param_3);
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x0800b5bc:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    uVar5 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_map_mem_s2;
    pcStack_c8 = sym.perf_trace_map_mem_s2;
    iVar6 = sp_el0;
    iStack_d8 = *(iVar6 + 0x5e0);
    iStack_e0 = 0;
    uStack_e4 = 0;
    uVar2 = *puVar7;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar5 + 0x80) != 0) || (puVar8 = puVar7, *piVar1 != 0)) {
        puVar8 = &uStack_e4;
        iVar3 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_e0,puVar8);
        if (iVar6 != 0) {
            uVar10 = _hyp_assign_table & 0x3f;
            *(iStack_e0 + 0xe8) = &puStack_d0;
            *(iStack_e0 + 0xf8) = auStack_f0;
            uVar9 = uVar2 * 8 + 0x18;
            *(iStack_e0 + 0x100) = ~(-1L << uVar10) & 0x800b5f4;
            *(iStack_e0 + 0x108) = 5;
            *(iVar6 + 8) = auVar13._8_4_;
            *(iVar6 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar6 + 0x14) = uVar9 | uVar2 << 0x13;
            *(iVar6 + 0xc) = *puVar7;
            if (*puVar7 != 0) {
                uVar10 = 0;
                puVar8 = puVar7 + 3;
                do {
                    iVar11 = uVar10 * 8;
                    uVar10 = uVar10 + 1;
                    *(iVar6 + 0x18 + iVar11) = *(puVar8 + -2);
                    *(iVar6 + (uVar9 & 0xfff8) + iVar11) = *puVar8;
                    puVar8 = puVar8 + 4;
                } while (uVar10 < *puVar7);
            }
            puVar8 = uStack_e4;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar8,uVar5,1,iStack_e0,piVar1,0);
            param_4 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_d8) {
        auVar14 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar14._0_8_,auVar14._8_8_,puVar8 & 0xffffffff,param_4 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007ba8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (int64_t param_1,uint16_t *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint16_t *puVar12;
    uint16_t *puVar13;
    uint32_t *puVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    int64_t *piVar20;
    uint64_t unaff_x24;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auVar23 [12];
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar ***pppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    uint64_t uStack_1a0;
    int64_t *piStack_198;
    int64_t *piStack_190;
    int64_t iStack_188;
    uint64_t uStack_180;
    uint32_t *puStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t *piStack_120;
    uint16_t *puStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar19 = *(param_1 + 0x48);
    uVar9 = param_4;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar7 = param_3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar9 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) == 0))))
        goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        uVar2 = *param_2;
        unaff_x24 = uVar2;
        puVar7 = unaff_x24 * 0x10 + 0x1c;
        iVar6 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar6 != 0) {
            uVar19 = uVar2 << 0x13;
            uVar5 = unaff_x24 * 8 + 0x1c;
            *(iVar6 + 0xc) = uVar19 | 0x1c;
            *(iVar6 + 0x10) = uVar5 | uVar19;
            *(iVar6 + 8) = *param_2;
            if (*param_2 != 0) {
                uVar10 = 0;
                puVar12 = param_2 + 6;
                do {
                    iVar15 = uVar10 * 8;
                    uVar10 = uVar10 + 1;
                    *(iVar6 + 0x1c + iVar15) = *(puVar12 + -4);
                    *(iVar6 + (uVar5 & 0xfffc) + iVar15) = *puVar12;
                    puVar12 = puVar12 + 8;
                } while (uVar10 < *param_2);
            }
            *(iVar6 + 0x14) = param_3;
            *(iVar6 + 0x18) = param_4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar21 = __stack_chk_fail();
    puVar12 = auVar21._8_8_;
    uVar10 = auVar21._0_8_;
    *extraout_x18 = sym.perf_trace_lookup_sgl;
    pcStack_c8 = sym.perf_trace_lookup_sgl;
    iVar6 = sp_el0;
    iStack_d8 = *(iVar6 + 0x5e0);
    uVar17 = uVar9 & 0xffffffff;
    uVar18 = puVar7 & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    uVar2 = *puVar12;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar10 + 0x78);
    uVar5 = uVar9;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar10 + 0x80) != 0) || (puVar8 = puVar7, *piVar1 != 0)) {
        puVar8 = &uStack_e4;
        unaff_x24 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x24,&iStack_e0);
        if (iVar6 != 0) {
            uVar11 = _hyp_assign_table & 0x3f;
            *(iStack_e0 + 0xe8) = &puStack_d0;
            *(iStack_e0 + 0xf8) = auStack_f0;
            uVar5 = uVar2 * 8 + 0x1c;
            *(iStack_e0 + 0x100) = ~(-1L << uVar11) & 0x800b30c;
            *(iStack_e0 + 0x108) = 5;
            *(iVar6 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar6 + 0x10) = uVar5 | uVar2 << 0x13;
            *(iVar6 + 8) = *puVar12;
            if (*puVar12 != 0) {
                uVar11 = 0;
                puVar13 = puVar12 + 6;
                do {
                    iVar15 = uVar11 * 8;
                    uVar11 = uVar11 + 1;
                    *(iVar6 + 0x1c + iVar15) = *(puVar13 + -4);
                    *(iVar6 + (uVar5 & 0xfffc) + iVar15) = *puVar13;
                    puVar13 = puVar13 + 8;
                } while (uVar11 < *puVar12);
            }
            puVar8 = uStack_e4;
            *(iVar6 + 0x14) = puVar7;
            *(iVar6 + 0x18) = uVar9;
            uVar5 = uVar10;
            perf_trace_run_bpf_submit(iVar6,unaff_x24,puVar8,uVar10,1,iStack_e0,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar15 = auVar22._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_00 = 0x800b4ac;
    uStack_128 = 0x800b4ac;
    iVar6 = sp_el0;
    iStack_138 = *(iVar6 + 0x5e0);
    uVar9 = auVar22._8_8_ & 0xffffffff;
    piVar20 = *(iVar15 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar19 = piVar20;
    ppuStack_130 = &puStack_d0;
    piStack_120 = piVar1;
    uStack_108 = uVar18;
    uStack_100 = uVar17;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar7 = puVar8;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar5 = 0;
            puStack_110 = puVar12;
            uStack_f8 = uVar10;
            event_triggers_call(iVar15,0,0,0);
            auVar21._8_8_ = puStack_110;
            auVar21._0_8_ = uStack_f8;
        }
        puStack_110 = auVar21._8_8_;
        uStack_f8 = auVar21._0_8_;
        piStack_198 = piVar1;
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 &&
            (uVar10 = trace_event_ignore_this_pid(iVar15), auVar21._8_8_ = puStack_110, auVar21._0_8_ = uStack_f8,
            (uVar10 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_110 = auVar21._8_8_;
    uStack_f8 = auVar21._0_8_;
    uVar19 = *puVar8;
    piVar20 = uVar19;
    puVar7 = piVar20 * 0x10 + 0x18;
    iVar6 = trace_event_buffer_reserve(&uStack_168,iVar15);
    auVar21._8_8_ = puStack_110;
    auVar21._0_8_ = uStack_f8;
    piStack_198 = piVar20;
    if (iVar6 != 0) {
        uVar19 = uVar19 << 0x13;
        uVar10 = piVar20 * 8 + 0x18;
        *(iVar6 + 8) = auVar22._8_4_;
        *(iVar6 + 0x10) = uVar19 | 0x18;
        *(iVar6 + 0x14) = uVar10 | uVar19;
        *(iVar6 + 0xc) = *puVar8;
        if (*puVar8 != 0) {
            uVar17 = 0;
            puVar14 = puVar8 + 3;
            do {
                iVar16 = uVar17 * 8;
                uVar17 = uVar17 + 1;
                *(iVar6 + 0x18 + iVar16) = *(puVar14 + -2);
                *(iVar6 + (uVar10 & 0xfff8) + iVar16) = *puVar14;
                puVar14 = puVar14 + 4;
            } while (uVar17 < *puVar8);
        }
        trace_event_buffer_commit(&uStack_168);
        auVar21._8_8_ = puStack_110;
        auVar21._0_8_ = uStack_f8;
    }
code_r0x0800b5bc:
    puStack_110 = auVar21._8_8_;
    uStack_f8 = auVar21._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_138) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar10 = auVar23._0_8_;
    *extraout_x18_01 = sym.perf_trace_map_mem_s2;
    pcStack_1b8 = sym.perf_trace_map_mem_s2;
    pcStack_1b0 = sym.perf_trace_lookup_sgl;
    iVar6 = sp_el0;
    iStack_1c8 = *(iVar6 + 0x5e0);
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    uVar2 = *puVar7;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar10 + 0x78);
    pppuStack_1c0 = &ppuStack_130;
    uStack_1a0 = unaff_x24;
    piStack_190 = piVar20;
    iStack_188 = iVar15;
    uStack_180 = uVar9;
    puStack_178 = puVar8;
    if ((*(uVar10 + 0x80) != 0) || (puVar8 = puVar7, *piVar1 != 0)) {
        puVar8 = &uStack_1d4;
        iVar3 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_1d0,puVar8);
        if (iVar6 != 0) {
            uVar5 = _hyp_assign_table & 0x3f;
            *(iStack_1d0 + 0xe8) = &pppuStack_1c0;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            uVar9 = uVar2 * 8 + 0x18;
            *(iStack_1d0 + 0x100) = ~(-1L << uVar5) & 0x800b5f4;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar6 + 8) = auVar23._8_4_;
            *(iVar6 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar6 + 0x14) = uVar9 | uVar2 << 0x13;
            *(iVar6 + 0xc) = *puVar7;
            if (*puVar7 != 0) {
                uVar5 = 0;
                puVar8 = puVar7 + 3;
                do {
                    iVar15 = uVar5 * 8;
                    uVar5 = uVar5 + 1;
                    *(iVar6 + 0x18 + iVar15) = *(puVar8 + -2);
                    *(iVar6 + (uVar9 & 0xfff8) + iVar15) = *puVar8;
                    puVar8 = puVar8 + 4;
                } while (uVar5 < *puVar7);
            }
            puVar8 = uStack_1d4;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar8,uVar10,1,iStack_1d0,piVar1,0);
            uVar5 = uVar10;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_1c8) {
        auVar21 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_02 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_,puVar8 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007bb0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (uint64_t param_1,uint16_t *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint16_t *puVar10;
    uint32_t *puVar11;
    int64_t iVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    uint64_t unaff_x30;
    uchar auVar16 [12];
    uchar auVar17 [16];
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint16_t *puStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar13 = param_4 & 0xffffffff;
    uVar14 = param_3 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    uVar2 = *param_2;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(param_1 + 0x78);
    uVar8 = param_4;
    if ((*(param_1 + 0x80) != 0) || (puVar6 = param_3, *piVar1 != 0)) {
        puVar6 = &uStack_64;
        iVar3 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar5 = perf_trace_buf_alloc(iVar3,&iStack_60);
        if (iVar5 != 0) {
            uVar9 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar8 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar9 | unaff_x30;
            }
            uVar9 = uVar2 * 8 + 0x1c;
            *(iStack_60 + 0x100) = uVar8;
            *(iStack_60 + 0x108) = 5;
            *(iVar5 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar5 + 0x10) = uVar9 | uVar2 << 0x13;
            *(iVar5 + 8) = *param_2;
            if (*param_2 != 0) {
                uVar8 = 0;
                puVar10 = param_2 + 6;
                do {
                    iVar12 = uVar8 * 8;
                    uVar8 = uVar8 + 1;
                    *(iVar5 + 0x1c + iVar12) = *(puVar10 + -4);
                    *(iVar5 + (uVar9 & 0xfffc) + iVar12) = *puVar10;
                    puVar10 = puVar10 + 8;
                } while (uVar8 < *param_2);
            }
            puVar6 = uStack_64;
            *(iVar5 + 0x14) = param_3;
            *(iVar5 + 0x18) = param_4;
            uVar8 = param_1;
            perf_trace_run_bpf_submit(iVar5,iVar3,puVar6,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar16 = __stack_chk_fail();
    iVar12 = auVar16._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800b4ac;
    uStack_a8 = 0x800b4ac;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar15 = *(iVar12 + 0x48);
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    puStack_90 = param_2;
    uStack_88 = uVar14;
    uStack_80 = uVar13;
    uStack_78 = param_1;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar7 = puVar6;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar12,0,0,0);
        }
        if (((uVar15 >> 6 & 1) != 0) ||
           (((uVar15 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) != 0))))
        goto code_r0x0800b5bc;
    }
    uVar2 = *puVar6;
    puVar7 = uVar2 * 0x10 + 0x18;
    iVar5 = trace_event_buffer_reserve(&uStack_e8,iVar12);
    if (iVar5 != 0) {
        uVar13 = uVar2 * 8 + 0x18;
        *(iVar5 + 8) = auVar16._8_4_;
        *(iVar5 + 0x10) = uVar2 << 0x13 | 0x18;
        *(iVar5 + 0x14) = uVar13 | uVar2 << 0x13;
        *(iVar5 + 0xc) = *puVar6;
        if (*puVar6 != 0) {
            uVar14 = 0;
            puVar11 = puVar6 + 3;
            do {
                iVar12 = uVar14 * 8;
                uVar14 = uVar14 + 1;
                *(iVar5 + 0x18 + iVar12) = *(puVar11 + -2);
                *(iVar5 + (uVar13 & 0xfff8) + iVar12) = *puVar11;
                puVar11 = puVar11 + 4;
            } while (uVar14 < *puVar6);
        }
        trace_event_buffer_commit(&uStack_e8);
    }
code_r0x0800b5bc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar16 = __stack_chk_fail();
    uVar13 = auVar16._0_8_;
    *extraout_x18_00 = sym.perf_trace_map_mem_s2;
    pcStack_138 = sym.perf_trace_map_mem_s2;
    iVar5 = sp_el0;
    iStack_148 = *(iVar5 + 0x5e0);
    iStack_150 = 0;
    uStack_154 = 0;
    uVar2 = *puVar7;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar13 + 0x78);
    ppuStack_140 = &puStack_b0;
    if ((*(uVar13 + 0x80) != 0) || (puVar6 = puVar7, *piVar1 != 0)) {
        puVar6 = &uStack_154;
        iVar3 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar5 = perf_trace_buf_alloc(iVar3,&iStack_150,puVar6);
        if (iVar5 != 0) {
            uVar14 = _hyp_assign_table & 0x3f;
            *(iStack_150 + 0xe8) = &ppuStack_140;
            *(iStack_150 + 0xf8) = auStack_160;
            uVar8 = uVar2 * 8 + 0x18;
            *(iStack_150 + 0x100) = ~(-1L << uVar14) & 0x800b5f4;
            *(iStack_150 + 0x108) = 5;
            *(iVar5 + 8) = auVar16._8_4_;
            *(iVar5 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar5 + 0x14) = uVar8 | uVar2 << 0x13;
            *(iVar5 + 0xc) = *puVar7;
            if (*puVar7 != 0) {
                uVar14 = 0;
                puVar6 = puVar7 + 3;
                do {
                    iVar12 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar5 + 0x18 + iVar12) = *(puVar6 + -2);
                    *(iVar5 + (uVar8 & 0xfff8) + iVar12) = *puVar6;
                    puVar6 = puVar6 + 4;
                } while (uVar14 < *puVar7);
            }
            puVar6 = uStack_154;
            perf_trace_run_bpf_submit(iVar5,iVar3,puVar6,uVar13,1,iStack_150,piVar1,0);
            uVar8 = uVar13;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_148) {
        auVar17 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_01 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_,puVar6 & 0xffffffff,uVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt @ 0x08007bb8 (size 8) =====

void sym.__bpf_trace_lookup_sgl.ebf3f5d531d0788a8bc4de3dc328a9e3.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.mem_buf_vmperm_alloc_accept.cfi_jt @ 0x08007bc0 (size 8) =====

uint * sym.mem_buf_vmperm_alloc_accept.cfi_jt(int64_t param_1,uint param_2)

{
    uint *puVar1;
    code *pcVar2;
    int iVar3;
    uint *puVar4;
    uint32_t arg2;
    int *arg3;
    uint *puVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uint uStack_30;
    int iStack_2c;
    int64_t iStack_28;
    
    puVar5 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    arg3 = &iStack_2c;
    uVar6 = 1;
    uStack_30 = 7;
    iStack_2c = _segment.ehdr;
    puVar4 = sym.mem_buf_vmperm_alloc_flags(param_1,4,arg3,&uStack_30);
    if (puVar4 < 0xfffffffffffff001) {
        puVar4[0xe] = param_2;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return puVar4;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_vmperm_alloc_flags;
    puVar4 = kmem_cache_alloc_trace(_trace_event_raw_init,0xdc0,0x80);
    if (puVar4 != NULL) {
        puVar1 = puVar4 + 0x10;
        __mutex_init(puVar1,"&vmperm->lock",obj.mem_buf_vmperm_alloc_flags.__key);
        mutex_lock(puVar1);
        arg2 = uVar6;
        iVar3 = sym.mem_buf_vmperm_resize(puVar4,arg2);
        if (iVar3 == 0) {
            iVar9 = (uVar6 & 0xffffffff) << 2;
            if (puVar4[9] < arg2) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8008298);
                (*pcVar2)();
            }
            memcpy(*(puVar4 + 4),arg3,iVar9);
            memcpy(*(puVar4 + 6),puVar5,iVar9);
            puVar4[8] = arg2;
            puVar4[1] = 0;
            iVar3 = _segment.ehdr;
            if (arg2 != 0) {
                uVar7 = 0;
                if (arg2 != 1) {
                    if (arg2 - 1 < 0) {
                        uVar7 = 0;
                    }
                    else {
                        uVar8 = 0;
                        uVar7 = arg2 & 0xfffffffe;
                        do {
                            if (arg3[uVar8] == iVar3) {
                                puVar4[1] = *(puVar5 + uVar8 * 4);
                            }
                            if (arg3[uVar8 + 1] == iVar3) {
                                puVar4[1] = *(puVar5 + (uVar8 + 1) * 4);
                            }
                            uVar8 = uVar8 + 2;
                        } while (uVar7 != uVar8);
                        if (uVar7 == arg2) goto code_r0x08008228;
                    }
                }
                do {
                    if (arg3[uVar7] == iVar3) {
                        puVar4[1] = *(puVar5 + uVar7 * 4);
                    }
                    uVar7 = uVar7 + 1;
                } while (arg2 != uVar7);
            }
code_r0x08008228:
            mutex_unlock(puVar1);
            *(puVar4 + 0xc) = auVar10._0_8_;
            *puVar4 = auVar10._8_4_;
            puVar4[0xe] = 0xffffffff;
            return puVar4;
        }
        mutex_unlock(puVar1);
        kfree(puVar4);
    }
    return 0xfffffffffffffff4;
}


// ===== sym.__traceiter_receive_relinquish_resp_msg.cfi_jt @ 0x08007bc8 (size 8) =====

ulong sym.__traceiter_receive_relinquish_resp_msg.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d648;
    piVar1 = *0x800d648;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_send_relinquish_msg.cfi_jt @ 0x08007bd0 (size 8) =====

ulong sym.__traceiter_send_relinquish_msg.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d4e0;
    piVar1 = *0x800d4e0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_receive_relinquish_msg.cfi_jt @ 0x08007bd8 (size 8) =====

ulong sym.__traceiter_receive_relinquish_msg.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d528;
    piVar1 = *0x800d528;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_send_relinquish_resp_msg.cfi_jt @ 0x08007be0 (size 8) =====

ulong sym.__traceiter_send_relinquish_resp_msg.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d600;
    piVar1 = *0x800d600;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.mem_buf_hyp_assign_table @ 0x08007be8 (size 124) =====

int sym.mem_buf_hyp_assign_table(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 3) {
        iVar2 = *arg2;
        iVar3 = hyp_assign_table();
        if (iVar3 < 0) {
            pcVar1 = "Assign";
            if (iVar2 != 3) {
                pcVar1 = "Unassign";
            }
            _printk(0x8005ff8,pcVar1,iVar3);
        }
    }
    else {
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.mem_buf_assign_mem @ 0x08007c64 (size 368) =====

uint64_t sym.mem_buf_assign_mem(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    char extraout_w0;
    int64_t iVar6;
    int *piVar7;
    char *pcVar8;
    uint64_t uVar9;
    int64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x20;
    uint64_t unaff_x21;
    uint64_t unaff_x22;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint uStack_a0;
    int iStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_80;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    uint uStack_50;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    uStack_50 = 7;
    iStack_4c = _segment.ehdr;
    if ((((arg2 == 0) || (unaff_x21 = arg3, *arg3 == 0)) || (in_x3 = *(arg3 + 8), in_x3 == 0)) ||
       (*(arg3 + 0x10) == 0)) {
        uVar4 = in_x3;
        uStack_58 = 0xffffffea;
        uVar9 = arg3;
    }
    else {
        unaff_x22 = arg1 & 0xffffffff;
        unaff_x20 = arg2;
        if (_segment.ehdr == 3) {
            uVar9 = 1;
            uVar2 = hyp_assign_table(arg2,&iStack_4c);
            uVar4 = in_x3;
            uStack_58 = uVar2;
            if (uVar2 < 0) {
                uVar9 = uStack_58;
                _printk(0x8005ff8,"Assign");
            }
            else if (uVar2 == 0) goto code_r0x08007cec;
        }
        else {
code_r0x08007cec:
            uVar4 = in_x3;
            uVar9 = arg3;
            uVar2 = sym.mem_buf_assign_mem_gunyah(unaff_x22,arg2,arg3);
            uStack_58 = uVar2;
            if ((uVar2 != 0) && (_segment.ehdr == 3)) {
                uVar4 = &iStack_4c;
                uVar9 = *arg3;
                uVar2 = **(arg3 + 8);
                uVar3 = hyp_assign_table(arg2);
                unaff_x21 = uVar2;
                if (uVar3 < 0) {
                    unaff_x20 = uVar3;
                    pcVar8 = "Assign";
                    if (uVar2 != 3) {
                        pcVar8 = "Unassign";
                    }
                    uVar9 = unaff_x20;
                    _printk(0x8005ff8,pcVar8);
                    _printk(0x8006097,unaff_x20);
                    uStack_58 = 0xffffff9d;
                }
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uStack_58;
    }
    auVar11 = __stack_chk_fail();
    piVar7 = auVar11._8_8_;
    *extraout_x18 = sym.mem_buf_unassign_mem;
    pcStack_88 = sym.mem_buf_unassign_mem;
    uStack_80 = 0x8000000;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    uVar10 = 0xffffffea;
    uStack_a0 = 7;
    iStack_9c = _segment.ehdr;
    puStack_90 = &stack0xffffffffffffffc0;
    uStack_70 = unaff_x22;
    uStack_68 = unaff_x21;
    uStack_60 = unaff_x20;
    if (((auVar11._0_8_ != 0) && (piVar7 != NULL)) && (uVar9 != 0)) {
        if (uVar4 != 0xffffffff) {
            uVar4 = sym.mem_buf_unassign_mem_gunyah(uVar4);
            uVar10 = uVar4;
            if (uVar4 != 0) goto code_r0x08007ea8;
        }
        if (_segment.ehdr == 3) {
            iVar5 = *piVar7;
            uVar4 = hyp_assign_table(auVar11._0_8_,piVar7,uVar9 & 0xffffffff,&iStack_9c,&uStack_a0,1);
            uVar10 = uVar4;
            if (uVar4 < 0) {
                pcVar8 = "Assign";
                if (iVar5 != 3) {
                    pcVar8 = "Unassign";
                }
                _printk(0x8005ff8,pcVar8,uVar10);
            }
        }
        else {
            uVar10 = 0;
        }
    }
code_r0x08007ea8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return uVar10;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.mem_buf_probe;
    iVar1 = iVar6 + 0x10;
    iVar5 = of_property_match_string(*(iVar6 + 0x300),"qcom,mem-buf-capabilities","supplier");
    if (iVar5 < 0) {
        iVar5 = of_property_match_string(*(iVar6 + 0x300),"qcom,mem-buf-capabilities","consumer");
        if (iVar5 < 0) {
            of_property_match_string(*(iVar6 + 0x300),"qcom,mem-buf-capabilities","dual");
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = (extraout_w0 >> 7 ^ 0xffU) & 3;
        }
        else {
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x2;
        }
    }
    else {
        reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x1;
    }
    uVar4 = dma_set_mask(iVar1,0xffffffffffffffff);
    if (uVar4 == 0) {
        dma_set_coherent_mask(iVar1,0xffffffffffffffff);
        uVar4 = sym.mem_buf_vm_init(iVar1);
        if (uVar4 == 0) {
            _segment.ehdr = iVar1;
            return 0;
        }
        pcVar8 = "mem_buf_vm_init failed %d\n";
    }
    else {
        pcVar8 = "Unable to set dma mask: %d\n";
    }
    _dev_err(iVar1,pcVar8,uVar4);
    return uVar4;
}


// ===== sym.mem_buf_unassign_mem @ 0x08007dd4 (size 272) =====

int sym.mem_buf_unassign_mem(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    char extraout_w0;
    int64_t iVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_50;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iVar3 = -0x16;
    uStack_50 = 7;
    iStack_4c = _segment.ehdr;
    if (((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) {
        if (arg4 != 0xffffffff) {
            iVar3 = sym.mem_buf_unassign_mem_gunyah(arg4);
            if (iVar3 != 0) goto code_r0x08007ea8;
        }
        if (_segment.ehdr == 3) {
            iVar2 = *arg2;
            iVar3 = hyp_assign_table(arg1,arg2,arg3 & 0xffffffff,&iStack_4c,&uStack_50,1);
            if (iVar3 < 0) {
                pcVar5 = "Assign";
                if (iVar2 != 3) {
                    pcVar5 = "Unassign";
                }
                _printk(0x8005ff8,pcVar5,iVar3);
            }
        }
        else {
            iVar3 = 0;
        }
    }
code_r0x08007ea8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_probe;
    iVar1 = iVar4 + 0x10;
    iVar3 = of_property_match_string(*(iVar4 + 0x300),"qcom,mem-buf-capabilities","supplier");
    if (iVar3 < 0) {
        iVar3 = of_property_match_string(*(iVar4 + 0x300),"qcom,mem-buf-capabilities","consumer");
        if (iVar3 < 0) {
            of_property_match_string(*(iVar4 + 0x300),"qcom,mem-buf-capabilities","dual");
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = (extraout_w0 >> 7 ^ 0xffU) & 3;
        }
        else {
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x2;
        }
    }
    else {
        reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x1;
    }
    iVar3 = dma_set_mask(iVar1,0xffffffffffffffff);
    if (iVar3 == 0) {
        dma_set_coherent_mask(iVar1,0xffffffffffffffff);
        iVar3 = sym.mem_buf_vm_init(iVar1);
        if (iVar3 == 0) {
            _segment.ehdr = iVar1;
            return 0;
        }
        pcVar5 = "mem_buf_vm_init failed %d\n";
    }
    else {
        pcVar5 = "Unable to set dma mask: %d\n";
    }
    _dev_err(iVar1,pcVar5,iVar3);
    return iVar3;
}


// ===== sym.mem_buf_probe @ 0x08007ee4 (size 256) =====

int sym.mem_buf_probe(int64_t arg1)

{
    int64_t arg1_00;
    int iVar1;
    char extraout_w0;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0x10;
    iVar1 = of_property_match_string(*(arg1 + 0x300),"qcom,mem-buf-capabilities","supplier");
    if (iVar1 < 0) {
        iVar1 = of_property_match_string(*(arg1 + 0x300),"qcom,mem-buf-capabilities","consumer");
        if (iVar1 < 0) {
            of_property_match_string(*(arg1 + 0x300),"qcom,mem-buf-capabilities","dual");
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = (extraout_w0 >> 7 ^ 0xffU) & 3;
        }
        else {
            reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x2;
        }
    }
    else {
        reloc.mem_buf_remove.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt = 0x1;
    }
    iVar1 = dma_set_mask(arg1_00,0xffffffffffffffff);
    if (iVar1 == 0) {
        dma_set_coherent_mask(arg1_00,0xffffffffffffffff);
        iVar1 = sym.mem_buf_vm_init(arg1_00);
        if (iVar1 == 0) {
            _segment.ehdr = arg1_00;
            return 0;
        }
        pcVar2 = "mem_buf_vm_init failed %d\n";
    }
    else {
        pcVar2 = "Unable to set dma mask: %d\n";
    }
    _dev_err(arg1_00,pcVar2,iVar1);
    return iVar1;
}


// ===== sym.mem_buf_remove @ 0x08007fe4 (size 24) =====

ulong sym.mem_buf_remove(int64_t arg1)

{
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08007ffc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08008040

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
    //switch table (4 cases) at 0x8005bf0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8008054);
    (*pcVar1)();
}


// ===== sym.mem_buf_vmperm_alloc_accept @ 0x08008054 (size 136) =====

uint * sym.mem_buf_vmperm_alloc_accept(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    code *pcVar2;
    int iVar3;
    uint *puVar4;
    uint32_t arg2_00;
    int *arg3;
    uint *puVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uint uStack_30;
    int iStack_2c;
    int64_t iStack_28;
    
    puVar5 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    arg3 = &iStack_2c;
    uVar6 = 1;
    uStack_30 = 7;
    iStack_2c = _segment.ehdr;
    puVar4 = sym.mem_buf_vmperm_alloc_flags(arg1,4,arg3,&uStack_30);
    if (puVar4 < 0xfffffffffffff001) {
        puVar4[0xe] = arg2;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return puVar4;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_vmperm_alloc_flags;
    puVar4 = kmem_cache_alloc_trace(_trace_event_raw_init,0xdc0,0x80);
    if (puVar4 != NULL) {
        puVar1 = puVar4 + 0x10;
        __mutex_init(puVar1,"&vmperm->lock",obj.mem_buf_vmperm_alloc_flags.__key);
        mutex_lock(puVar1);
        arg2_00 = uVar6;
        iVar3 = sym.mem_buf_vmperm_resize(puVar4,arg2_00);
        if (iVar3 == 0) {
            iVar9 = (uVar6 & 0xffffffff) << 2;
            if (puVar4[9] < arg2_00) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8008298);
                (*pcVar2)();
            }
            memcpy(*(puVar4 + 4),arg3,iVar9);
            memcpy(*(puVar4 + 6),puVar5,iVar9);
            puVar4[8] = arg2_00;
            puVar4[1] = 0;
            iVar3 = _segment.ehdr;
            if (arg2_00 != 0) {
                uVar7 = 0;
                if (arg2_00 != 1) {
                    if (arg2_00 - 1 < 0) {
                        uVar7 = 0;
                    }
                    else {
                        uVar8 = 0;
                        uVar7 = arg2_00 & 0xfffffffe;
                        do {
                            if (arg3[uVar8] == iVar3) {
                                puVar4[1] = *(puVar5 + uVar8 * 4);
                            }
                            if (arg3[uVar8 + 1] == iVar3) {
                                puVar4[1] = *(puVar5 + (uVar8 + 1) * 4);
                            }
                            uVar8 = uVar8 + 2;
                        } while (uVar7 != uVar8);
                        if (uVar7 == arg2_00) goto code_r0x08008228;
                    }
                }
                do {
                    if (arg3[uVar7] == iVar3) {
                        puVar4[1] = *(puVar5 + uVar7 * 4);
                    }
                    uVar7 = uVar7 + 1;
                } while (arg2_00 != uVar7);
            }
code_r0x08008228:
            mutex_unlock(puVar1);
            *(puVar4 + 0xc) = auVar10._0_8_;
            *puVar4 = auVar10._8_4_;
            puVar4[0xe] = 0xffffffff;
            return puVar4;
        }
        mutex_unlock(puVar1);
        kfree(puVar4);
    }
    return 0xfffffffffffffff4;
}


// ===== sym.mem_buf_vmperm_alloc_flags @ 0x080080dc (size 444) =====

uint * sym.mem_buf_vmperm_alloc_flags(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    code *pcVar2;
    int iVar3;
    uint *arg1_00;
    uint32_t in_w4;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = kmem_cache_alloc_trace(_trace_event_raw_init,0xdc0,0x80);
    if (arg1_00 != NULL) {
        puVar1 = arg1_00 + 0x10;
        __mutex_init(puVar1,"&vmperm->lock",obj.mem_buf_vmperm_alloc_flags.__key);
        mutex_lock(puVar1);
        iVar3 = sym.mem_buf_vmperm_resize(arg1_00,in_w4);
        if (iVar3 == 0) {
            if (arg1_00[9] < in_w4) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8008298);
                (*pcVar2)();
            }
            memcpy(*(arg1_00 + 4),arg3,in_w4 << 2);
            memcpy(*(arg1_00 + 6),arg4,in_w4 << 2);
            arg1_00[8] = in_w4;
            arg1_00[1] = 0;
            iVar3 = _segment.ehdr;
            if (in_w4 != 0) {
                uVar4 = 0;
                if (in_w4 != 1) {
                    if (in_w4 - 1 < 0) {
                        uVar4 = 0;
                    }
                    else {
                        uVar5 = 0;
                        uVar4 = in_w4 & 0xfffffffe;
                        do {
                            if (*(arg3 + uVar5 * 4) == iVar3) {
                                arg1_00[1] = *(arg4 + uVar5 * 4);
                            }
                            if (*(arg3 + (uVar5 + 1) * 4) == iVar3) {
                                arg1_00[1] = *(arg4 + (uVar5 + 1) * 4);
                            }
                            uVar5 = uVar5 + 2;
                        } while (uVar4 != uVar5);
                        if (uVar4 == in_w4) goto code_r0x08008228;
                    }
                }
                do {
                    if (*(arg3 + uVar4 * 4) == iVar3) {
                        arg1_00[1] = *(arg4 + uVar4 * 4);
                    }
                    uVar4 = uVar4 + 1;
                } while (in_w4 != uVar4);
            }
code_r0x08008228:
            mutex_unlock(puVar1);
            *(arg1_00 + 0xc) = arg1;
            *arg1_00 = arg2;
            arg1_00[0xe] = 0xffffffff;
            return arg1_00;
        }
        mutex_unlock(puVar1);
        kfree(arg1_00);
    }
    return 0xfffffffffffffff4;
}


// ===== sym.mem_buf_vmperm_alloc_staticvm @ 0x0800829c (size 52) =====

void sym.mem_buf_vmperm_alloc_staticvm(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mem_buf_vmperm_alloc_flags(in_x0,1,arg1,arg2);
    return;
}


// ===== sym.mem_buf_vmperm_alloc @ 0x080082d0 (size 112) =====

uint64_t sym.mem_buf_vmperm_alloc(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t *arg1_00;
    uint64_t arg1_01;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong unaff_x30;
    uint uStack_20;
    uint uStack_1c;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_20 = 7;
    uStack_1c = _segment.ehdr;
    uVar3 = sym.mem_buf_vmperm_alloc_flags(arg1,0,&uStack_1c,&uStack_20);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar3;
    }
    arg1_00 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_vmperm_release;
    pcVar4 = *(arg1_00 + 0x1c);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0x641d19c7be126e92,pcVar4,0x8005b90);
        uVar2 = (*pcVar4)(*(arg1_00 + 0x1e));
        uVar3 = uVar2;
        if (uVar2 != 0) goto code_r0x080083c8;
    }
    mutex_lock(arg1_00 + 0x10);
    if ((*arg1_00 >> 1 & 1) == 0) {
        if ((*arg1_00 >> 2 & 1) == 0) {
            uVar3 = 0;
        }
        else {
            arg1_01 = sym.mem_buf_sgt_to_gh_sgl_desc(*(arg1_00 + 0xc));
            if (arg1_01 < 0xfffffffffffff001) {
                uVar2 = sym.mem_buf_unmap_mem_s1(arg1_01);
                uVar3 = uVar2;
                kvfree(arg1_01);
                if (uVar2 == 0) {
                    uVar3 = sym.mem_buf_unmap_mem_s2(arg1_00[0xe]);
                    goto code_r0x080083bc;
                }
            }
            else {
                uVar3 = arg1_01 & 0xffffffff;
            }
        }
    }
    else {
        uVar3 = sym.__mem_buf_vmperm_reclaim(arg1_00);
code_r0x080083bc:
        uVar3 = uVar3 & 0xffffffff;
    }
    mutex_unlock(arg1_00 + 0x10);
code_r0x080083c8:
    kfree(*(arg1_00 + 6));
    kfree(*(arg1_00 + 4));
    kfree(arg1_00);
    return uVar3;
}


// ===== sym.mem_buf_vmperm_release @ 0x08008340 (size 252) =====

uint64_t sym.mem_buf_vmperm_release(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(arg1 + 0x70);
    if (pcVar3 != NULL) {
        __cfi_slowpath_diag(0x641d19c7be126e92,pcVar3,0x8005b90);
        uVar1 = (*pcVar3)(*(arg1 + 0x78));
        uVar4 = uVar1 & 0xffffffff;
        if (uVar1 != 0) goto code_r0x080083c8;
    }
    mutex_lock(arg1 + 0x40);
    if ((*arg1 >> 1 & 1) == 0) {
        if ((*arg1 >> 2 & 1) == 0) {
            uVar4 = 0;
        }
        else {
            uVar1 = sym.mem_buf_sgt_to_gh_sgl_desc(*(arg1 + 0x30));
            if (uVar1 < 0xfffffffffffff001) {
                uVar2 = sym.mem_buf_unmap_mem_s1(uVar1);
                uVar4 = uVar2 & 0xffffffff;
                kvfree(uVar1);
                if (uVar2 == 0) {
                    uVar4 = sym.mem_buf_unmap_mem_s2(*(arg1 + 0x38));
                    goto code_r0x080083bc;
                }
            }
            else {
                uVar4 = uVar1 & 0xffffffff;
            }
        }
    }
    else {
        uVar4 = sym.__mem_buf_vmperm_reclaim(arg1);
code_r0x080083bc:
        uVar4 = uVar4 & 0xffffffff;
    }
    mutex_unlock(arg1 + 0x40);
code_r0x080083c8:
    kfree(*(arg1 + 0x18));
    kfree(*(arg1 + 0x10));
    kfree(arg1);
    return uVar4;
}


// ===== sym.__mem_buf_vmperm_reclaim @ 0x0800843c (size 288) =====

int sym.__mem_buf_vmperm_reclaim(int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = _segment.ehdr;
    iVar6 = sym.mem_buf_unassign_mem(*(arg1 + 0x30),*(arg1 + 0x10),*(arg1 + 0x20),*(arg1 + 0x38));
    if (iVar6 == 0) {
        if (*(arg1 + 0x24) == 0) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8008534);
            (*pcVar5)();
        }
        **(arg1 + 0x10) = iVar7;
        uVar8 = 7;
        **(arg1 + 0x18) = 7;
        iVar4 = _segment.ehdr;
        *(arg1 + 0x38) = 0xffffffff;
        if (iVar7 != iVar4) {
            uVar8 = 0;
        }
        *(arg1 + 0x20) = 1;
        *arg1 = *arg1 & 0xfffffffd;
        *(arg1 + 4) = uVar8;
    }
    else {
        iVar7 = ___ratelimit(obj.__mem_buf_vmperm_reclaim._rs,"__mem_buf_vmperm_reclaim");
        if (iVar7 != 0) {
            _printk(0x8005bfd);
        }
        piVar1 = *(*(arg1 + 0x28) + 8) + 0x38;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        *arg1 = *arg1 | 8;
    }
    return iVar6;
}


// ===== sym.mem_buf_dma_buf_attach @ 0x0800855c (size 120) =====

void sym.mem_buf_dma_buf_attach(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(*(arg1 + 0x20) + -8);
    if (pcVar1 != sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        __cfi_slowpath_diag(0x5c6c625b20f0ff15,pcVar1,0x8005bb0);
    }
    (*pcVar1)(arg1,arg2);
    return;
}


// ===== sym.to_mem_buf_vmperm @ 0x080085d4 (size 140) =====

ulong sym.to_mem_buf_vmperm(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar2 = *(*(arg1 + 0x20) + -0x10);
        if (pcVar2 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar2,0x8005bd0);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    else {
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.mem_buf_dma_buf_set_destructor @ 0x08008660 (size 172) =====

uint64_t sym.mem_buf_dma_buf_set_destructor(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar2 = *(*(arg1 + 0x20) + -0x10);
        if (pcVar2 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar2,0x8005bd0);
        }
        uVar1 = (*pcVar2)(arg1);
        if (uVar1 < 0xfffffffffffff001) {
            *(uVar1 + 0x70) = arg2;
            *(uVar1 + 0x78) = arg3;
            uVar1 = 0;
        }
    }
    else {
        uVar1 = 0xffffffffffffffea;
    }
    return uVar1;
}


// ===== sym.mem_buf_dma_buf_export @ 0x0800870c (size 248) =====

uint64_t sym.mem_buf_dma_buf_export(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x18) != sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        if (*(arg2 + 0x18) != NULL) {
            _printk(0x8005ce8,*(arg1 + 0x10));
            return 0xffffffffffffffea;
        }
        *(arg2 + 0x18) = sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr;
    }
    *(arg1 + 0x10) = arg2 + 0x10;
    uVar2 = dma_buf_export();
    if (0xfffffffffffff000 < uVar2) {
        return uVar2;
    }
    if (*(*(uVar2 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar1 = *(*(uVar2 + 0x20) + -0x10);
        if (pcVar1 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar1,0x8005bd0);
        }
        uVar3 = (*pcVar1)(uVar2);
        if (uVar3 < 0xfffffffffffff001) {
            *(uVar3 + 0x28) = uVar2;
            return uVar2;
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8008770);
    (*pcVar1)();
}


// ===== sym.mem_buf_vmperm_pin @ 0x08008804 (size 76) =====

void sym.mem_buf_vmperm_pin(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x40);
    *(arg1 + 8) = *(arg1 + 8) + 1;
    mutex_unlock(arg1 + 0x40);
    return;
}


// ===== sym.mem_buf_vmperm_unpin @ 0x08008850 (size 84) =====

void sym.mem_buf_vmperm_unpin(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x40);
    if (*(arg1 + 8) != 0) {
        *(arg1 + 8) = *(arg1 + 8) + -1;
        mutex_unlock(arg1 + 0x40);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80088a4);
    (*pcVar1)();
}


// ===== sym.mem_buf_vmperm_can_cmo @ 0x080088a8 (size 104) =====

bool sym.mem_buf_vmperm_can_cmo(int64_t arg1)

{
    bool bVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x40);
    if ((~*(arg1 + 4) & 6) == 0) {
        bVar1 = *(arg1 + 8) != 0;
    }
    else {
        bVar1 = false;
    }
    mutex_unlock(arg1 + 0x40);
    return bVar1;
}


// ===== sym.mem_buf_vmperm_can_mmap @ 0x08008910 (size 132) =====

uint sym.mem_buf_vmperm_can_mmap(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x40);
    if (*(arg1 + 8) != 0) {
        uVar1 = *(arg1 + 4);
        if ((((uVar1 >> 2 & 1) != 0) && (((uVar1 >> 1 & 1) != 0 || ((*(arg2 + 0x50) >> 1 & 1) == 0)))) &&
           (((uVar1 & 1) != 0 || ((*(arg2 + 0x50) >> 2 & 1) == 0)))) {
            uVar2 = 1;
            goto code_r0x08008950;
        }
    }
    uVar2 = 0;
code_r0x08008950:
    mutex_unlock(arg1 + 0x40);
    return uVar2;
}


// ===== sym.mem_buf_vmperm_can_vmap @ 0x08008994 (size 104) =====

bool sym.mem_buf_vmperm_can_vmap(int64_t arg1)

{
    bool bVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x40);
    if ((~*(arg1 + 4) & 6) == 0) {
        bVar1 = *(arg1 + 8) != 0;
    }
    else {
        bVar1 = false;
    }
    mutex_unlock(arg1 + 0x40);
    return bVar1;
}


// ===== sym.mem_buf_lend @ 0x080089fc (size 40) =====

void sym.mem_buf_lend(int64_t arg2,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mem_buf_lend_internal(arg2,arg1,1);
    return;
}


// ===== sym.mem_buf_lend_internal @ 0x08008a24 (size 752) =====

int sym.mem_buf_lend_internal(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    int iVar5;
    uint32_t *arg1_00;
    uint64_t uVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    code *pcVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg2 == 0) {
        return -0x16;
    }
    if (*(arg2 + 8) == 0) {
        return -0x16;
    }
    if (*(arg2 + 0x10) == 0) {
        return -0x16;
    }
    if (*(*(arg1 + 0x20) + 8) != sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
code_r0x08008aa0:
        iVar5 = ___ratelimit(obj.mem_buf_lend_internal._rs,"mem_buf_lend_internal");
        if (iVar5 != 0) {
            _printk(0x8005d81,*(arg1 + 0x20));
        }
        return -0x16;
    }
    pcVar9 = *(*(arg1 + 0x20) + -0x10);
    if (pcVar9 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
        __cfi_slowpath_diag(0x547401c04b8af610,pcVar9,0x8005bd0);
    }
    arg1_00 = (*pcVar9)(arg1);
    if (0xfffffffffffff000 < arg1_00) goto code_r0x08008aa0;
    uVar2 = *arg2;
    if (uVar2 == 0) {
code_r0x08008b60:
        if (arg3 == 2) {
            iVar5 = ___ratelimit(obj.validate_lend_vmids._rs.17,"validate_lend_vmids");
            if (iVar5 == 0) {
                return -0x16;
            }
            uVar7 = 0x80063e7;
code_r0x08008b88:
            _printk(uVar7);
            return -0x16;
        }
    }
    else {
        if (**(arg2 + 8) == _segment.ehdr) {
            bVar4 = true;
        }
        else {
            uVar3 = 1;
            do {
                uVar8 = uVar3;
                if (uVar2 == uVar8) goto code_r0x08008b60;
                uVar3 = uVar8 + 1;
            } while ((*(arg2 + 8))[uVar8] != _segment.ehdr);
            bVar4 = uVar8 < uVar2;
        }
        if ((arg3 == 1) && (bVar4)) {
            iVar5 = ___ratelimit(obj.validate_lend_vmids._rs,"validate_lend_vmids");
            if (iVar5 == 0) {
                return -0x16;
            }
            uVar7 = 0x8006228;
            goto code_r0x08008b88;
        }
    }
    puVar1 = arg1_00 + 0x10;
    mutex_lock(puVar1);
    uVar2 = *arg1_00;
    if ((uVar2 & 1) == 0) {
        if ((uVar2 >> 1 & 1) == 0) {
            if ((uVar2 >> 2 & 1) == 0) {
                uVar6 = sym.validate_lend_mapcount(arg1_00,arg2);
                if ((uVar6 & 1) != 0) {
                    dma_map_sgtable(CONCAT44(*0x8000004,_segment.ehdr),*(arg1_00 + 0xc),1,0);
                    dma_unmap_sg_attrs(CONCAT44(*0x8000004,_segment.ehdr),**(arg1_00 + 0xc),*(*(arg1_00 + 0xc) + 0xc)
                                       ,1,0);
                    iVar5 = sym.mem_buf_vmperm_resize(arg1_00,*arg2);
                    if (iVar5 == 0) {
                        iVar5 = sym.mem_buf_assign_mem(arg3 & 0xffffffff,*(arg1_00 + 0xc),arg2);
                        if (iVar5 == 0) {
                            sym.mem_buf_vmperm_update_state(arg1_00,*(arg2 + 8),*(arg2 + 0x10),*arg2);
                            *arg1_00 = *arg1_00 | 2;
                            arg1_00[0xe] = *(arg2 + 0x18);
                        }
                        else if (iVar5 == -99) {
                            sym.mem_buf_vmperm_set_err(arg1_00);
                        }
                    }
                    mutex_unlock(puVar1);
                    return iVar5;
                }
                goto code_r0x08008c90;
            }
            iVar5 = ___ratelimit(obj.mem_buf_lend_internal._rs.15,"mem_buf_lend_internal");
            if (iVar5 == 0) goto code_r0x08008c90;
            uVar7 = 0x800660f;
        }
        else {
            iVar5 = ___ratelimit(obj.mem_buf_lend_internal._rs.13,"mem_buf_lend_internal");
            if (iVar5 == 0) goto code_r0x08008c90;
            uVar7 = 0x8006697;
        }
    }
    else {
        iVar5 = ___ratelimit(obj.mem_buf_lend_internal._rs.12,"mem_buf_lend_internal");
        if (iVar5 == 0) goto code_r0x08008c90;
        uVar7 = 0x800666a;
    }
    _printk(uVar7);
code_r0x08008c90:
    mutex_unlock(puVar1);
    return -0x16;
}


// ===== sym.mem_buf_share @ 0x08008d14 (size 348) =====

uint sym.mem_buf_share(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    uint uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int *piVar9;
    ulong *in_x18;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = *arg2;
    uVar10 = uVar4;
    if (0 < uVar4) {
        piVar9 = *(arg2 + 8);
        do {
            if (*piVar9 == _segment.ehdr) {
                uVar6 = sym.mem_buf_lend_internal(arg1,arg2,2);
                return uVar6;
            }
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 1;
        } while (uVar10 != 0);
    }
    uVar1 = uVar4 + 1;
    if (uVar1 >> 0x3e == 0) {
        uVar10 = -(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar1 << 2;
        iVar7 = __kmalloc(uVar10,0xcc0);
        if (iVar7 != 0) {
            iVar8 = __kmalloc(uVar10,0xcc0);
            if (iVar8 != 0) {
                iVar11 = uVar4 * 4;
                memcpy(iVar7,*(arg2 + 8),iVar11);
                memcpy(iVar8,*(arg2 + 0x10),iVar11);
                iVar5 = *arg2;
                *(iVar7 + iVar11) = _segment.ehdr;
                *(iVar8 + iVar11) = 7;
                uVar2 = *(arg2 + 8);
                uVar3 = *(arg2 + 0x10);
                *(arg2 + 8) = iVar7;
                *(arg2 + 0x10) = iVar8;
                *arg2 = iVar5 + 1;
                uVar6 = sym.mem_buf_lend_internal(arg1,arg2,2);
                *(arg2 + 8) = uVar2;
                *(arg2 + 0x10) = uVar3;
                *arg2 = *arg2 + -1;
                kfree(iVar7);
                kfree(iVar8);
                return uVar6;
            }
            kfree(iVar7);
        }
    }
    return 0xfffffff4;
}


// ===== sym.mem_buf_reclaim @ 0x08008e70 (size 372) =====

uint sym.mem_buf_reclaim(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    uint32_t *arg1_00;
    ulong uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x20) + 8) != sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
code_r0x08008ec4:
        iVar3 = ___ratelimit(obj.mem_buf_reclaim._rs,"mem_buf_reclaim");
        if (iVar3 != 0) {
            _printk(0x8005d81,*(arg1 + 0x20));
        }
        return 0xffffffea;
    }
    pcVar6 = *(*(arg1 + 0x20) + -0x10);
    if (pcVar6 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
        __cfi_slowpath_diag(0x547401c04b8af610,pcVar6,0x8005bd0);
    }
    arg1_00 = (*pcVar6)(arg1);
    if (0xfffffffffffff000 < arg1_00) goto code_r0x08008ec4;
    puVar1 = arg1_00 + 0x10;
    mutex_lock(puVar1);
    uVar2 = *arg1_00;
    if ((uVar2 & 1) == 0) {
        if ((uVar2 >> 1 & 1) == 0) {
            iVar3 = ___ratelimit(obj.mem_buf_reclaim._rs.4,"mem_buf_reclaim");
            if (iVar3 == 0) goto code_r0x08008f50;
            uVar5 = 0x800631f;
        }
        else {
            if ((uVar2 >> 2 & 1) == 0) {
                uVar4 = sym.__mem_buf_vmperm_reclaim(arg1_00);
                mutex_unlock(puVar1);
                return uVar4;
            }
            iVar3 = ___ratelimit(obj.mem_buf_reclaim._rs.6,"mem_buf_reclaim");
            if (iVar3 == 0) goto code_r0x08008f50;
            uVar5 = 0x800660f;
        }
    }
    else {
        iVar3 = ___ratelimit(obj.mem_buf_reclaim._rs.2,"mem_buf_reclaim");
        if (iVar3 == 0) goto code_r0x08008f50;
        uVar5 = 0x800666a;
    }
    _printk(uVar5);
code_r0x08008f50:
    mutex_unlock(puVar1);
    return 0xffffffea;
}


// ===== sym.mem_buf_dma_buf_exclusive_owner @ 0x08008fe4 (size 192) =====

bool sym.mem_buf_dma_buf_exclusive_owner(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    int *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar2 = *(*(arg1 + 0x20) + -0x10);
        if (pcVar2 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar2,0x8005bd0);
        }
        piVar3 = (*pcVar2)(arg1);
        if (piVar3 < 0xfffffffffffff001) {
            mutex_lock(piVar3 + 0x10);
            iVar1 = *piVar3;
            mutex_unlock(piVar3 + 0x10);
            return iVar1 == 0;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8009018);
    (*pcVar2)();
}


// ===== sym.mem_buf_dma_buf_copy_vmperm @ 0x080090a4 (size 308) =====

uint64_t sym.mem_buf_dma_buf_copy_vmperm(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x20) + 8) == sym.__typeid__ZTSFiP7dma_bufP18dma_buf_attachmentE_global_addr) {
        pcVar4 = *(*(arg1 + 0x20) + -0x10);
        if (pcVar4 != sym.__typeid__ZTSFP14mem_buf_vmpermP7dma_bufE_global_addr) {
            __cfi_slowpath_diag(0x547401c04b8af610,pcVar4,0x8005bd0);
        }
        uVar3 = (*pcVar4)(arg1);
        if (uVar3 < 0xfffffffffffff001) {
            iVar1 = uVar3 + 0x40;
            mutex_lock(iVar1);
            iVar5 = *(uVar3 + 0x20) << 2;
            iVar2 = kmemdup(*(uVar3 + 0x10),iVar5,0xcc0);
            if (iVar2 != 0) {
                iVar5 = kmemdup(*(uVar3 + 0x18),iVar5,0xcc0);
                if (iVar5 != 0) {
                    *arg2 = iVar2;
                    *arg3 = iVar5;
                    *arg4 = *(uVar3 + 0x20);
                    mutex_unlock(iVar1);
                    uVar3 = 0;
                    goto code_r0x08009190;
                }
                kfree(iVar2);
            }
            mutex_unlock(iVar1);
            uVar3 = 0xfffffff4;
        }
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
code_r0x08009190:
    return uVar3 & 0xffffffff;
}


// ===== sym.mem_buf_vmperm_resize @ 0x080091d8 (size 240) =====

ulong sym.mem_buf_vmperm_resize(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x24);
    if (uVar2 < arg2) {
        uVar5 = *(arg1 + 0x10);
        uVar1 = *(arg1 + 0x18);
        iVar3 = __kmalloc(arg2 << 2,0xdc0);
        if (iVar3 != 0) {
            iVar4 = __kmalloc(arg2 << 2,0xdc0);
            if (iVar4 != 0) {
                iVar6 = uVar2 << 2;
                if (*(arg1 + 0x10) != 0) {
                    memcpy(iVar3,uVar5,iVar6);
                    kfree(uVar5);
                }
                if (*(arg1 + 0x18) != 0) {
                    memcpy(iVar4,uVar1,iVar6);
                    kfree(uVar1);
                }
                *(arg1 + 0x10) = iVar3;
                *(arg1 + 0x18) = iVar4;
                *(arg1 + 0x24) = arg2;
                return 0;
            }
            kfree(iVar3);
        }
        uVar5 = 0xfffffff4;
    }
    else {
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.mem_buf_vmperm_update_state @ 0x080092c8 (size 196) =====

void sym.mem_buf_vmperm_update_state(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    uVar3 = arg4;
    *in_x18 = unaff_x30;
    iVar5 = (arg4 & 0xffffffffU) << 2;
    if (uVar3 <= *(arg1 + 0x24)) {
        memcpy(*(arg1 + 0x10),arg2,iVar5);
        memcpy(*(arg1 + 0x18),arg3,iVar5);
        *(arg1 + 0x20) = uVar3;
        *(arg1 + 4) = 0;
        iVar1 = _segment.ehdr;
        if (uVar3 != 0) {
            uVar4 = 0;
            do {
                if (*(arg2 + uVar4 * 4) == iVar1) {
                    *(arg1 + 4) = *(arg3 + uVar4 * 4);
                }
                uVar4 = uVar4 + 1;
            } while (uVar3 != uVar4);
        }
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x800938c);
    (*pcVar2)();
}


// ===== sym.mem_buf_vmperm_set_err @ 0x08009390 (size 88) =====

void sym.mem_buf_vmperm_set_err(int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    
    piVar1 = *(*(arg1 + 0x28) + 8) + 0x38;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    *arg1 = *arg1 | 8;
    return;
}


// ===== sym.validate_lend_mapcount @ 0x080093e8 (size 312) =====

ulong sym.validate_lend_mapcount(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 8) == 0) {
code_r0x0800945c:
        uVar3 = 1;
    }
    else {
        if (*arg2 != 0) {
            iVar2 = 0;
            do {
                if ((*(*(arg2 + 8) + iVar2 * 4) == _segment.ehdr) && ((~*(*(arg2 + 0x10) + iVar2 * 4) & 6) == 0))
                goto code_r0x0800945c;
                iVar2 = iVar2 + 1;
            } while (*arg2 != iVar2);
        }
        iVar2 = ___ratelimit(obj.validate_lend_mapcount._rs,"validate_lend_mapcount");
        if (iVar2 == 0) {
            iVar2 = *arg2;
        }
        else {
            _printk(0x8005dc1,"validate_lend_mapcount");
            iVar2 = *arg2;
        }
        if (iVar2 != 0) {
            uVar5 = 0;
            do {
                iVar2 = ___ratelimit(obj.validate_lend_mapcount._rs.20,"validate_lend_mapcount");
                if (iVar2 != 0) {
                    uVar4 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
                    _printk(0x8006643,"validate_lend_mapcount",*(*(arg2 + 8) + uVar4),*(*(arg2 + 0x10) + uVar4));
                }
                uVar1 = uVar5 + 1;
                uVar5 = uVar1;
            } while (uVar1 < *arg2);
        }
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.mem_buf_current_vmid @ 0x08009520 (size 20) =====

uint sym.mem_buf_current_vmid(void)

{
    return _segment.ehdr;
}


// ===== sym.mem_buf_vm_uses_hyp_assign @ 0x08009534 (size 28) =====

bool sym.mem_buf_vm_uses_hyp_assign(void)

{
    return _segment.ehdr == 3;
}


// ===== sym.mem_buf_vm_uses_gunyah @ 0x08009550 (size 256) =====

uint64_t sym.mem_buf_vm_uses_gunyah(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 != 0) {
        iVar4 = 0;
        do {
            iVar2 = xa_load(obj.mem_buf_vms,*(arg1 + iVar4 * 4));
            if (iVar2 == 0) {
                iVar1 = ___ratelimit(obj.mem_buf_vm_uses_gunyah._rs,"mem_buf_vm_uses_gunyah");
                if (iVar1 == 0) {
                    return 0xffffffea;
                }
                _printk(0x800641b,*(arg1 + iVar4 * 4));
                return 0xffffffea;
            }
            if ((*(iVar2 + 0xc) >> 1 & 1) != 0) {
                return 1;
            }
            iVar4 = iVar4 + 1;
        } while (arg2 != iVar4);
    }
    iVar2 = xa_load(obj.mem_buf_vms,_segment.ehdr);
    if (iVar2 == 0) {
        uVar3 = ___ratelimit(obj.mem_buf_vm_uses_gunyah._rs.1,"mem_buf_vm_uses_gunyah");
        if (uVar3 != 0) {
            _printk(0x800641b,_segment.ehdr);
            uVar3 = 0;
        }
    }
    else {
        uVar3 = *(iVar2 + 0xc) >> 1 & 1;
    }
    return uVar3;
}


// ===== sym.mem_buf_fd_to_vmid @ 0x08009650 (size 152) =====

uint64_t sym.mem_buf_fd_to_vmid(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = fget();
    if (iVar2 == 0) {
        uVar3 = 0xffffffea;
    }
    else {
        if (*(iVar2 + 0x28) == obj.mem_buf_vm_fops) {
            uVar3 = *(*(iVar2 + 0xd8) + 8);
        }
        else {
            iVar1 = ___ratelimit(obj.mem_buf_fd_to_vmid._rs,"mem_buf_fd_to_vmid");
            if (iVar1 == 0) {
                uVar3 = 0xffffffea;
            }
            else {
                _printk(0x8005e00);
                uVar3 = 0xffffffea;
            }
        }
        fput(iVar2);
    }
    return uVar3;
}


// ===== sym.mem_buf_vm_init @ 0x080096e8 (size 520) =====

uint64_t sym.mem_buf_vm_init(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *arg1_00;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_4c = 0;
    uVar1 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),"qcom,vmid",&uStack_4c,1,0);
    if (uVar1 < 0) {
        uVar5 = uVar1;
        _dev_err(arg1,"missing qcom,vmid property\n");
    }
    else {
        _segment.ehdr = CONCAT44(*0x8000004,uStack_4c);
        uVar2 = alloc_chrdev_region(obj.mem_buf_vm_devt,0,0x80,"mem_buf_vm");
        uVar5 = uVar2 & 0xffffffff;
        if (uVar2 == 0) {
            uVar5 = __class_create(obj.__this_module,"mem_buf_vm",obj.mem_buf_vm_init.__key);
            iVar3 = *0x8004000;
            _segment.ehdr = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                *(uVar5 + 0x30) = sym.mem_buf_vm_devnode.3c5cee5da827797dc8cc101f32c847f9.cfi_jt;
                if (iVar3 != 0) {
                    piVar4 = 0x8004878;
                    do {
                        arg1_00 = kmemdup(iVar3,0x428,0xcc0);
                        if (arg1_00 == NULL) goto code_r0x08009840;
                        uVar1 = sym.mem_buf_vm_add(arg1_00);
                        if (uVar1 != 0) {
                            uVar5 = uVar1;
                            goto code_r0x08009864;
                        }
                        iVar3 = *piVar4;
                        piVar4 = piVar4 + 1;
                    } while (iVar3 != 0);
                }
                iVar3 = xa_load(obj.mem_buf_vms,_segment.ehdr);
                uVar5 = 0;
                if (iVar3 == 0) goto code_r0x080098b4;
                arg1_00 = kmem_cache_alloc_trace(_trace_event_raw_init,0xdc0,0x428);
                if (arg1_00 == NULL) {
code_r0x08009840:
                    uVar5 = 0xfffffff4;
                }
                else {
                    *arg1_00 = "qcom,self";
                    *(arg1_00 + 1) = *(iVar3 + 8);
                    *(arg1_00 + 0xc) = *(iVar3 + 0xc);
                    uVar2 = sym.mem_buf_vm_add(arg1_00);
                    uVar5 = uVar2 & 0xffffffff;
                    if (uVar2 == 0) goto code_r0x080098b4;
code_r0x08009864:
                    kfree(arg1_00);
                }
                xa_destroy(obj.mem_buf_vms);
                xa_destroy(obj.mem_buf_vm_minors);
                class_for_each_device
                          (_segment.ehdr,0,0,
                           sym.mem_buf_vm_put_class_device_cb.3c5cee5da827797dc8cc101f32c847f9.cfi_jt);
                class_destroy(_segment.ehdr);
            }
            unregister_chrdev_region(_segment.ehdr & 0xffffffff,0x80);
        }
    }
code_r0x080098b4:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        piVar4 = __stack_chk_fail();
        *extraout_x18 = sym.mem_buf_vm_devnode;
        iVar3 = piVar4[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar4;
        }
        uVar5 = kasprintf(0xcc0,"mem_buf_vm/%s",iVar3);
        return uVar5;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.mem_buf_vm_devnode @ 0x080098f0 (size 60) =====

void sym.mem_buf_vm_devnode(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x70);
    if (iVar1 == 0) {
        iVar1 = *arg1;
    }
    kasprintf(0xcc0,"mem_buf_vm/%s",iVar1);
    return;
}


// ===== sym.mem_buf_vm_put_class_device_cb @ 0x0800992c (size 48) =====

ulong sym.mem_buf_vm_put_class_device_cb(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cdev_device_del(arg1 + -0x88,arg1);
    return 0;
}


// ===== sym.mem_buf_vm_exit @ 0x0800995c (size 116) =====

void sym.mem_buf_vm_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    xa_destroy(obj.mem_buf_vms);
    xa_destroy(obj.mem_buf_vm_minors);
    class_for_each_device
              (CONCAT44(*0x8000004,_segment.ehdr),0,0,
               sym.mem_buf_vm_put_class_device_cb.3c5cee5da827797dc8cc101f32c847f9.cfi_jt);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    unregister_chrdev_region(_segment.ehdr,0x80);
    return;
}


// ===== sym.mem_buf_vm_open @ 0x080099d0 (size 28) =====

ulong sym.mem_buf_vm_open(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0xd8) = *(arg1 + 0x2b0) + -0x10;
    return 0;
}


// ===== sym.mem_buf_vm_add @ 0x080099ec (size 532) =====

uint64_t sym.mem_buf_vm_add(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    ulong uStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_3c = 0;
    uStack_48 = 0;
    puVar3 = xa_find(obj.mem_buf_vm_minors,&uStack_48,0xffffffffffffffff,8);
    while (puVar3 != NULL) {
        uVar6 = *puVar3;
        iVar2 = strcmp(uVar6,*arg1);
        if (iVar2 == 0) {
            _printk(0x80062d0,uVar6);
            uVar7 = 0xffffffea;
            goto code_r0x08009b7c;
        }
        puVar3 = xa_find_after(obj.mem_buf_vm_minors,&uStack_48,0xffffffffffffffff,8);
    }
    _raw_spin_lock(obj.mem_buf_vm_minors);
    uVar4 = __xa_alloc(obj.mem_buf_vm_minors,&uStack_3c,arg1,0x7f,0xcc0);
    uVar7 = uVar4 & 0xffffffff;
    _raw_spin_unlock(obj.mem_buf_vm_minors);
    if (uVar4 < 0) {
        _printk(0x8005c4e);
    }
    else {
        cdev_init(arg1 + 0x10,obj.mem_buf_vm_fops);
        iVar5 = arg1 + 0x98;
        device_initialize(iVar5);
        uVar1 = _segment.ehdr;
        uVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        *(arg1 + 0xf8) = 0;
        *(arg1 + 0x3c8) = sym.mem_buf_vm_device_release.3c5cee5da827797dc8cc101f32c847f9.cfi_jt;
        *(arg1 + 0x3b8) = uVar6;
        *(arg1 + 0x130) = arg1;
        *(arg1 + 0x398) = uVar1 & 0xfff00000 | uStack_3c;
        dev_set_name(iVar5,0x8005d70,*arg1);
        uVar7 = xa_store(obj.mem_buf_vms,*(arg1 + 8),arg1,0xcc0);
        if (((uVar7 < 0xffffffffffffc006) || ((uVar7 & 3) != 2)) || (uVar7 = uVar7 >> 2, uVar7 == 0)) {
            uVar4 = cdev_device_add(arg1 + 0x10,iVar5);
            uVar7 = uVar4 & 0xffffffff;
            if (uVar4 == 0) goto code_r0x08009b7c;
            _printk(0x8005e95,*arg1);
            xa_erase(obj.mem_buf_vms,*(arg1 + 8));
        }
        xa_erase(obj.mem_buf_vm_minors,uStack_3c);
        put_device(iVar5);
    }
code_r0x08009b7c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar7 & 0xffffffff;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.mem_buf_vm_device_release;
    uVar7 = kfree(iVar5 + -0x98);
    return uVar7;
}


// ===== sym.mem_buf_vm_device_release @ 0x08009c00 (size 40) =====

void sym.mem_buf_vm_device_release(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(arg1 + -0x98);
    return;
}


// ===== sym.__traceiter_mem_buf_alloc_info @ 0x08009c28 (size 128) =====

ulong sym.__traceiter_mem_buf_alloc_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800d408 != NULL) {
        piVar1 = *0x800d408;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_send_alloc_req @ 0x08009cb0 (size 88) =====

ulong sym.__traceiter_send_alloc_req(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d450;
    piVar1 = *0x800d450;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_receive_alloc_req @ 0x08009d10 (size 88) =====

ulong sym.__traceiter_receive_alloc_req(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d498;
    piVar1 = *0x800d498;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_send_relinquish_msg @ 0x08009d70 (size 88) =====

ulong sym.__traceiter_send_relinquish_msg(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d4e0;
    piVar1 = *0x800d4e0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_receive_relinquish_msg @ 0x08009dd0 (size 88) =====

ulong sym.__traceiter_receive_relinquish_msg(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d528;
    piVar1 = *0x800d528;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_send_alloc_resp_msg @ 0x08009e30 (size 88) =====

ulong sym.__traceiter_send_alloc_resp_msg(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d570;
    piVar1 = *0x800d570;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_receive_alloc_resp_msg @ 0x08009e90 (size 88) =====

ulong sym.__traceiter_receive_alloc_resp_msg(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d5b8;
    piVar1 = *0x800d5b8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_send_relinquish_resp_msg @ 0x08009ef0 (size 88) =====

ulong sym.__traceiter_send_relinquish_resp_msg(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d600;
    piVar1 = *0x800d600;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_receive_relinquish_resp_msg @ 0x08009f50 (size 88) =====

ulong sym.__traceiter_receive_relinquish_resp_msg(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800d648;
    piVar1 = *0x800d648;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_lookup_sgl @ 0x08009fb0 (size 112) =====

ulong sym.__traceiter_lookup_sgl(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800d690 != NULL) {
        piVar1 = *0x800d690;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_map_mem_s2 @ 0x0800a028 (size 104) =====

ulong sym.__traceiter_map_mem_s2(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800d6d8 != NULL) {
        piVar1 = *0x800d6d8;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_mem_buf_alloc_info @ 0x0800a098 (size 460) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800a7c4)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_mem_buf_alloc_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint *puVar13;
    uint16_t *puVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    int iVar19;
    uint64_t uVar20;
    char *in_x4;
    uint32_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uchar *puVar25;
    uint16_t *puVar26;
    int64_t iVar27;
    int64_t iVar28;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    ulong *extraout_x18_12;
    uint32_t uVar29;
    char *unaff_x21;
    char *pcVar30;
    char *pcVar31;
    char *pcVar32;
    int64_t *piVar33;
    code *pcVar34;
    uint64_t uVar35;
    uint64_t unaff_x25;
    char *unaff_x26;
    char *pcVar36;
    uint64_t unaff_x27;
    uint64_t uVar37;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    uchar auVar43 [16];
    uchar auVar44 [12];
    uchar auStack_6e0 [12];
    uint32_t uStack_6d4;
    int64_t iStack_6d0;
    int64_t iStack_6c8;
    ulong ***pppuStack_6c0;
    code *pcStack_6b8;
    code *pcStack_6b0;
    code *pcStack_6a0;
    int64_t *piStack_698;
    int64_t *piStack_690;
    int64_t iStack_688;
    uint64_t uStack_680;
    uint32_t *puStack_678;
    ulong uStack_668;
    ulong uStack_660;
    ulong uStack_658;
    ulong uStack_650;
    ulong uStack_648;
    ulong uStack_640;
    int64_t iStack_638;
    ulong ***pppuStack_630;
    ulong uStack_628;
    int64_t *piStack_620;
    uint16_t *puStack_610;
    uint64_t uStack_608;
    uint64_t uStack_600;
    uint64_t uStack_5f8;
    uchar auStack_5f0 [12];
    uint32_t uStack_5e4;
    int64_t iStack_5e0;
    int64_t iStack_5d8;
    ulong ***pppuStack_5d0;
    code *pcStack_5c8;
    uint64_t uStack_5c0;
    ulong uStack_5b8;
    code *pcStack_5b0;
    code *pcStack_5a8;
    uchar auStack_5a0 [16];
    uint64_t uStack_590;
    uint64_t uStack_588;
    ulong uStack_578;
    ulong uStack_570;
    ulong uStack_568;
    ulong uStack_560;
    ulong uStack_558;
    ulong uStack_550;
    int64_t iStack_548;
    ulong ***pppuStack_540;
    ulong uStack_538;
    code *pcStack_530;
    uint64_t uStack_528;
    char *pcStack_520;
    int64_t *piStack_518;
    uint *puStack_510;
    uint64_t uStack_508;
    uchar auStack_500 [12];
    uint32_t uStack_4f4;
    int64_t iStack_4f0;
    int64_t iStack_4e8;
    ulong ***pppuStack_4e0;
    code *pcStack_4d8;
    ulong uStack_4d0;
    code *pcStack_4c0;
    uint64_t uStack_4b8;
    char *pcStack_4b0;
    uint64_t uStack_4a8;
    uchar auStack_4a0 [16];
    ulong uStack_488;
    ulong uStack_480;
    ulong uStack_478;
    ulong uStack_470;
    ulong uStack_468;
    ulong uStack_460;
    int64_t iStack_458;
    ulong ***pppuStack_450;
    ulong uStack_448;
    int64_t *piStack_440;
    uint *puStack_430;
    uint64_t uStack_428;
    uchar auStack_420 [12];
    uint32_t uStack_414;
    int64_t iStack_410;
    int64_t iStack_408;
    ulong ***pppuStack_400;
    code *pcStack_3f8;
    ulong uStack_3f0;
    code *pcStack_3e0;
    uint64_t uStack_3d8;
    char *pcStack_3d0;
    uint64_t uStack_3c8;
    int64_t iStack_3c0;
    uint *puStack_3b8;
    ulong uStack_3a8;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    int64_t iStack_378;
    ulong ***pppuStack_370;
    ulong uStack_368;
    int64_t *piStack_360;
    uint *puStack_350;
    uint64_t uStack_348;
    uchar auStack_340 [12];
    uint32_t uStack_334;
    int64_t iStack_330;
    int64_t iStack_328;
    ulong ***pppuStack_320;
    code *pcStack_318;
    code *pcStack_310;
    ulong uStack_300;
    uint64_t uStack_2f8;
    char *pcStack_2f0;
    uint64_t uStack_2e8;
    int64_t iStack_2e0;
    uint *puStack_2d8;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    ulong ***pppuStack_290;
    ulong uStack_288;
    char *pcStack_280;
    uint *puStack_270;
    uint64_t uStack_268;
    uchar auStack_260 [12];
    int iStack_254;
    int64_t *piStack_250;
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    uchar ***pppuStack_230;
    code *pcStack_228;
    uint64_t uStack_220;
    uint64_t uStack_218;
    char *pcStack_210;
    uint64_t uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    char *pcStack_1f0;
    char *pcStack_1e8;
    int64_t iStack_1e0;
    uint *puStack_1d8;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar **ppuStack_190;
    ulong uStack_188;
    char *pcStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    char *pcStack_160;
    char *pcStack_158;
    uint32_t *puStack_148;
    uchar auStack_140 [4];
    int iStack_13c;
    code *pcStack_138;
    ulong uStack_130;
    uint64_t uStack_128;
    int64_t *piStack_120;
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    char *pcStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    char *pcStack_c0;
    char *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uint *puVar14;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    pcVar32 = arg3 & 0xffffffff;
    uVar35 = *(arg1 + 0x48);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar21 = uVar35;
    uVar20 = arg4;
    puVar17 = in_x4;
    iStack_a0 = arg2;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar16 = arg3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(arg1), (uVar10 & 1) == 0))))
        goto code_r0x0800a120;
    }
    else {
code_r0x0800a120:
        uVar29 = *in_x4;
        uVar35 = uVar29;
        uVar21 = 0xc;
        if (arg3 != 0) {
            uVar21 = 6;
        }
        unaff_x28 = uVar21;
        uVar7 = uVar21 | 1;
        unaff_x27 = uVar7;
        uVar22 = 0xd;
        if (arg4 != 0) {
            uVar22 = 7;
        }
        unaff_x26 = uVar22;
        uVar2 = uVar7 + uVar22;
        unaff_x25 = uVar2;
        uVar3 = uVar2 + uVar29 * 2;
        unaff_x21 = uVar3;
        puVar16 = uVar3 + uVar29 + 0x28;
        uVar10 = trace_event_buffer_reserve(&uStack_98,arg1);
        if (uVar10 != 0) {
            unaff_x28 = uVar21 + 0x25;
            uVar2 = uVar2 | uVar29 << 0x11;
            unaff_x25 = uVar2;
            unaff_x21 = "(null)";
            unaff_x26 = "ION_MEM_TYPE";
            *(uVar10 + 0x14) = uVar7 << 0x10 | 0x24;
            *(uVar10 + 0x18) = uVar21 + 0x25 | uVar22 << 0x10;
            pcVar30 = unaff_x26;
            if (arg3 != 0) {
                pcVar30 = unaff_x21;
            }
            *(uVar10 + 0x1c) = uVar2 + 0x24;
            *(uVar10 + 0x20) = uVar3 + 0x24 | uVar29 << 0x10;
            *(uVar10 + 8) = iStack_a0;
            strcpy(uVar10 + 0x24,pcVar30);
            pcVar30 = unaff_x26;
            if (arg4 != 0) {
                pcVar30 = unaff_x21;
            }
            strcpy(uVar10 + unaff_x28,pcVar30);
            *(uVar10 + 0x10) = *in_x4;
            if (*in_x4 != 0) {
                uVar5 = *(uVar10 + 0x1c);
                uVar23 = 0;
                uVar6 = *(uVar10 + 0x20);
                pcVar30 = in_x4 + 6;
                do {
                    *(uVar10 + uVar5 + uVar23 * 2) = *(pcVar30 + -2);
                    *(uVar10 + uVar6 + uVar23) = *pcVar30;
                    uVar23 = uVar23 + 1;
                    pcVar30 = pcVar30 + 4;
                } while (uVar23 < *in_x4);
            }
            trace_event_buffer_commit(&uStack_98);
            arg1 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uStack_130 = auVar38._8_8_;
    uStack_128 = auVar38._0_8_;
    *extraout_x18 = sym.perf_trace_mem_buf_alloc_info;
    pcStack_f8 = sym.perf_trace_mem_buf_alloc_info;
    pcStack_138 = sym.perf_trace_mem_buf_alloc_info;
    iVar11 = sp_el0;
    iStack_108 = *(iVar11 + 0x5e0);
    iVar9 = puVar16;
    uVar10 = puVar16 & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    uVar29 = *puVar17;
    uVar21 = 0xc;
    if (iVar9 != 0) {
        uVar21 = 6;
    }
    uVar37 = uVar21;
    iVar11 = tpidr_el1;
    iVar19 = uVar20;
    uVar23 = uVar20 & 0xffffffff;
    uVar22 = 0xd;
    if (iVar19 != 0) {
        uVar22 = 7;
    }
    pcVar30 = uVar22;
    piStack_120 = iVar11 + *(uStack_128 + 0x78);
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_f0 = unaff_x28;
    uStack_e8 = unaff_x27;
    pcStack_e0 = unaff_x26;
    uStack_d8 = unaff_x25;
    uStack_d0 = uVar35;
    uStack_c8 = arg1;
    pcStack_c0 = pcVar32;
    pcStack_b8 = unaff_x21;
    uStack_b0 = arg4 & 0xffffffff;
    if ((*(uStack_128 + 0x80) != 0) || (pcVar36 = unaff_x26, *piStack_120 != 0)) {
        uVar3 = uVar21 | 1;
        in_x4 = uVar3;
        uVar7 = uVar3 + uVar22;
        pcVar36 = uVar7;
        puVar16 = &uStack_114;
        uVar2 = uVar7 + uVar29 * 2;
        pcVar32 = uVar2;
        iStack_13c = (uVar29 + uVar2 + 0x33 & 0xfffffff8) - 4;
        uVar35 = perf_trace_buf_alloc(iStack_13c,&iStack_110);
        auVar38._8_8_ = uStack_130;
        auVar38._0_8_ = uStack_128;
        if (uVar35 != 0) {
            uVar37 = uVar21 + 0x25;
            uVar7 = uVar7 | uVar29 << 0x11;
            pcVar36 = uVar7;
            uVar24 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_110 + 0xf8) = auStack_140;
            uVar20 = (~uVar24 | 0xff80000000000000) & pcStack_138;
            if ((pcStack_138 & 0x80000000000000) != 0) {
                uVar20 = uVar24 | pcStack_138;
            }
            *(iStack_110 + 0x100) = uVar20;
            *(iStack_110 + 0x108) = 5;
            in_x4 = "(null)";
            pcVar30 = "ION_MEM_TYPE";
            *(iStack_110 + 0xe8) = &puStack_100;
            pcVar31 = pcVar30;
            if (iVar9 != 0) {
                pcVar31 = in_x4;
            }
            *(uVar35 + 0x14) = uVar3 << 0x10 | 0x24;
            *(uVar35 + 0x18) = uVar21 + 0x25 | uVar22 << 0x10;
            *(uVar35 + 0x1c) = uVar7 + 0x24;
            *(uVar35 + 0x20) = uVar2 + 0x24 | uVar29 << 0x10;
            *(uVar35 + 8) = uStack_130;
            strcpy(uVar35 + 0x24,pcVar31);
            pcVar31 = pcVar30;
            if (iVar19 != 0) {
                pcVar31 = in_x4;
            }
            strcpy(uVar35 + uVar37,pcVar31);
            *(uVar35 + 0x10) = *puVar17;
            if (*puVar17 != 0) {
                uVar5 = *(uVar35 + 0x1c);
                uVar20 = 0;
                uVar6 = *(uVar35 + 0x20);
                pcVar31 = puVar17 + 6;
                do {
                    *(uVar35 + uVar5 + uVar20 * 2) = *(pcVar31 + -2);
                    *(uVar35 + uVar6 + uVar20) = *pcVar31;
                    uVar20 = uVar20 + 1;
                    pcVar31 = pcVar31 + 4;
                } while (uVar20 < *puVar17);
            }
            puVar16 = uStack_114;
            uVar20 = uStack_128;
            perf_trace_run_bpf_submit(uVar35,iStack_13c,puVar16,uStack_128,1,iStack_110,piStack_120,0);
            auVar38._8_8_ = uStack_130;
            auVar38._0_8_ = uStack_128;
            arg1 = uVar35;
        }
    }
    uStack_130 = auVar38._8_8_;
    uStack_128 = auVar38._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_108) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar13 = auVar38._8_8_;
    iVar27 = auVar38._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_00 = 0x800a488;
    uStack_188 = 0x800a488;
    iVar11 = sp_el0;
    iStack_198 = *(iVar11 + 0x5e0);
    pcVar31 = *(iVar27 + 0x48);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar21 = pcVar31;
    ppuStack_190 = &puStack_100;
    pcStack_180 = pcVar36;
    uStack_178 = uVar10;
    uStack_170 = uVar23;
    uStack_168 = arg1;
    pcStack_160 = pcVar32;
    pcStack_158 = pcVar30;
    puStack_148 = in_x4;
    iStack_1e0 = iVar27;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar27,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar35 = trace_event_ignore_this_pid(iVar27), (uVar35 & 1) == 0))))
        goto code_r0x0800a50c;
    }
    else {
code_r0x0800a50c:
        if (puVar13[1] < 4) {
            pcVar32 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar32 = "(null)";
        }
        pcVar31 = strlen(pcVar32);
        uVar7 = puVar13[7];
        pcVar32 = uVar7;
        uVar21 = pcVar31 + 1;
        uVar23 = uVar21;
        uVar22 = 0xd;
        if (puVar13[5] != 0) {
            uVar22 = 7;
        }
        arg1 = uVar22;
        uVar2 = uVar22 + uVar21;
        pcVar36 = uVar2;
        uVar3 = uVar2 + uVar7 * 2;
        uVar10 = uVar3;
        puVar16 = uVar3 + uVar7 + 0x28;
        iVar11 = trace_event_buffer_reserve(&uStack_1c8,iVar27);
        if (iVar11 != 0) {
            uVar1 = pcVar31 + 0x29;
            pcVar31 = uVar1;
            *(iVar11 + 0xc) = uVar21 * 0x10000 | 0x28;
            pcVar32 = "(null)";
            *(iVar11 + 0x18) = uVar1 | uVar22 << 0x10;
            *(iVar11 + 0x20) = uVar2 + 0x28 | uVar7 << 0x11;
            *(iVar11 + 0x24) = uVar3 + 0x28 | uVar7 << 0x10;
            *(iVar11 + 8) = *puVar13;
            pcVar30 = pcVar32;
            if (puVar13[1] < 4) {
                pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            strcpy(iVar11 + 0x28,pcVar30);
            *(iVar11 + 0x10) = *(puVar13 + 3);
            pcVar30 = "ION_MEM_TYPE";
            if (puVar13[5] != 0) {
                pcVar30 = pcVar32;
            }
            strcpy(iVar11 + (uVar1 & 0xffff),pcVar30);
            *(iVar11 + 0x1c) = puVar13[7];
            if (puVar13[7] != 0) {
                uVar5 = *(iVar11 + 0x20);
                uVar35 = 0;
                uVar6 = *(iVar11 + 0x24);
                puVar25 = puVar13 + 0x22;
                do {
                    *(iVar11 + uVar5 + uVar35 * 2) = *(puVar25 + -2);
                    *(iVar11 + uVar6 + uVar35) = *puVar25;
                    uVar35 = uVar35 + 1;
                    puVar25 = puVar25 + 4;
                } while (uVar35 < puVar13[7]);
            }
            trace_event_buffer_commit(&uStack_1c8);
            iStack_1e0 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_198) {
        return;
    }
    auVar39 = __stack_chk_fail();
    puVar14 = auVar39._8_8_;
    uVar35 = auVar39._0_8_;
    *extraout_x18_01 = sym.perf_trace_alloc_req_msg_class;
    pcStack_228 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_238 = *(iVar11 + 0x5e0);
    iStack_240 = 0;
    uStack_244 = 0;
    if (puVar14[1] < 4) {
        pcVar30 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_230 = &ppuStack_190;
    uStack_220 = uVar29;
    uStack_218 = uVar37;
    pcStack_210 = pcVar36;
    uStack_208 = uVar10;
    uStack_200 = uVar23;
    uStack_1f8 = arg1;
    pcStack_1f0 = pcVar32;
    pcStack_1e8 = pcVar31;
    puStack_1d8 = puVar13;
    uVar12 = strlen(pcVar30);
    uVar21 = puVar14[7];
    iVar11 = tpidr_el1;
    iVar9 = 0xd;
    if (puVar14[5] != 0) {
        iVar9 = 7;
    }
    piStack_250 = iVar11 + *(uVar35 + 0x78);
    if ((*(uVar35 + 0x80) != 0) || (*piStack_250 != 0)) {
        uVar29 = uVar12 + 1;
        pcVar32 = uVar29;
        puVar16 = &uStack_244;
        uVar22 = iVar9 + uVar29 + uVar21 * 2;
        pcVar31 = uVar22;
        iStack_254 = (uVar21 + uVar22 + 0x33 & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(iStack_254,&iStack_240);
        if (uVar10 != 0) {
            uVar7 = uVar12 + 0x29;
            pcVar32 = uVar7;
            uVar20 = _hyp_assign_table & 0x3f;
            *(iStack_240 + 0xf8) = auStack_260;
            *(iStack_240 + 0xe8) = &pppuStack_230;
            *(iStack_240 + 0x100) = ~(-1L << uVar20) & 0x800a690;
            *(iStack_240 + 0x108) = 5;
            *(uVar10 + 0xc) = uVar29 * 0x10000 | 0x28;
            pcVar31 = "(null)";
            *(uVar10 + 0x18) = uVar7 | iVar9 << 0x10;
            *(uVar10 + 0x20) = iVar9 + uVar29 + 0x28 | uVar21 << 0x11;
            *(uVar10 + 0x24) = uVar22 + 0x28 | uVar21 << 0x10;
            *(uVar10 + 8) = *puVar14;
            pcVar30 = pcVar31;
            if (puVar14[1] < 4) {
                pcVar30 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            strcpy(uVar10 + 0x28,pcVar30);
            *(uVar10 + 0x10) = *(puVar14 + 3);
            pcVar30 = "ION_MEM_TYPE";
            if (puVar14[5] != 0) {
                pcVar30 = pcVar31;
            }
            strcpy(uVar10 + (uVar7 & 0xffff),pcVar30);
            *(uVar10 + 0x1c) = puVar14[7];
            if (puVar14[7] != 0) {
                uVar5 = *(uVar10 + 0x20);
                uVar20 = 0;
                uVar6 = *(uVar10 + 0x24);
                puVar25 = puVar14 + 0x22;
                do {
                    *(uVar10 + uVar5 + uVar20 * 2) = *(puVar25 + -2);
                    *(uVar10 + uVar6 + uVar20) = *puVar25;
                    uVar20 = uVar20 + 1;
                    puVar25 = puVar25 + 4;
                } while (uVar20 < puVar14[7]);
            }
            puVar16 = uStack_244;
            uVar20 = uVar35;
            perf_trace_run_bpf_submit(uVar10,iStack_254,puVar16,uVar35,1,iStack_240,piStack_250,0);
            arg1 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_238) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar13 = auVar38._8_8_;
    iVar27 = auVar38._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_02 = 0x800a8f4;
    uStack_288 = 0x800a8f4;
    iVar11 = sp_el0;
    iStack_298 = *(iVar11 + 0x5e0);
    uVar10 = *(iVar27 + 0x48);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uVar29 = uVar10;
    pppuStack_290 = &pppuStack_230;
    pcStack_280 = pcVar31;
    iStack_2e0 = iVar27;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            puStack_270 = puVar14;
            uStack_268 = uVar35;
            event_triggers_call(iVar27,0);
            auVar39._8_8_ = puStack_270;
            auVar39._0_8_ = uStack_268;
        }
        puStack_270 = auVar39._8_8_;
        uStack_268 = auVar39._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar35 = trace_event_ignore_this_pid(iVar27), auVar39._8_8_ = puStack_270, auVar39._0_8_ = uStack_268,
            (uVar35 & 1) == 0)))) goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        puStack_270 = auVar39._8_8_;
        uStack_268 = auVar39._0_8_;
        if (puVar13[1] < 4) {
            pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar10 = uVar29;
        puVar16 = uVar29 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_2c8,iVar27);
        auVar39._8_8_ = puStack_270;
        auVar39._0_8_ = uStack_268;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar29 * 0x10000 | 0x14;
            if (puVar13[1] < 4) {
                pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x14,pcVar30);
            *(iVar11 + 0xc) = puVar13[3];
            *(iVar11 + 0x10) = *puVar13;
            trace_event_buffer_commit(&uStack_2c8);
            auVar39._8_8_ = puStack_270;
            auVar39._0_8_ = uStack_268;
            iStack_2e0 = iVar11;
        }
    }
    puStack_270 = auVar39._8_8_;
    uStack_268 = auVar39._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_298) {
        return;
    }
    auVar40 = __stack_chk_fail();
    puVar14 = auVar40._8_8_;
    uVar35 = auVar40._0_8_;
    *extraout_x18_03 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_318 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_310 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_328 = *(iVar11 + 0x5e0);
    iStack_330 = 0;
    uStack_334 = 0;
    if (puVar14[1] < 4) {
        pcVar30 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_320 = &pppuStack_290;
    uStack_300 = uVar12;
    uStack_2f8 = arg1;
    pcStack_2f0 = pcVar32;
    uStack_2e8 = uVar10;
    puStack_2d8 = puVar13;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar35 + 0x78);
    if ((*(uVar35 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar16 = &uStack_334;
        pcVar32 = (uVar12 + 0x20U & 0xfffffff8) - 4;
        uVar23 = perf_trace_buf_alloc(pcVar32,&iStack_330);
        uVar10 = _hyp_assign_table;
        if (uVar23 != 0) {
            *(iStack_330 + 0xe8) = &pppuStack_320;
            *(iStack_330 + 0xf8) = auStack_340;
            *(iStack_330 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800aa3c;
            *(iStack_330 + 0x108) = 5;
            *(uVar23 + 8) = uVar12 * 0x10000 + 0x10014;
            if (puVar14[1] < 4) {
                pcVar30 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar23 + 0x14,pcVar30);
            puVar16 = uStack_334;
            *(uVar23 + 0xc) = puVar14[3];
            *(uVar23 + 0x10) = *puVar14;
            uVar20 = uVar35;
            perf_trace_run_bpf_submit(uVar23,pcVar32,puVar16,uVar35,1,iStack_330,piVar4,0);
            arg1 = uVar23;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_328) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar13 = auVar38._8_8_;
    iVar27 = auVar38._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x800abe4;
    uStack_368 = 0x800abe4;
    iVar11 = sp_el0;
    iStack_378 = *(iVar11 + 0x5e0);
    uVar10 = *(iVar27 + 0x48);
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uVar29 = uVar10;
    pppuStack_370 = &pppuStack_320;
    piStack_360 = piVar4;
    iStack_3c0 = iVar27;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            puStack_350 = puVar14;
            uStack_348 = uVar35;
            event_triggers_call(iVar27,0);
            auVar40._8_8_ = puStack_350;
            auVar40._0_8_ = uStack_348;
        }
        puStack_350 = auVar40._8_8_;
        uStack_348 = auVar40._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar35 = trace_event_ignore_this_pid(iVar27), auVar40._8_8_ = puStack_350, auVar40._0_8_ = uStack_348,
            (uVar35 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_350 = auVar40._8_8_;
        uStack_348 = auVar40._0_8_;
        if (puVar13[1] < 4) {
            pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar10 = uVar29;
        puVar16 = uVar29 + 0x18;
        iVar11 = trace_event_buffer_reserve(&uStack_3a8,iVar27);
        auVar40._8_8_ = puStack_350;
        auVar40._0_8_ = uStack_348;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar29 * 0x10000 | 0x18;
            *(iVar11 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x18,pcVar30);
            *(iVar11 + 0x10) = puVar13[3];
            *(iVar11 + 0x14) = puVar13[4];
            trace_event_buffer_commit(&uStack_3a8);
            auVar40._8_8_ = puStack_350;
            auVar40._0_8_ = uStack_348;
            iStack_3c0 = iVar11;
        }
    }
    puStack_350 = auVar40._8_8_;
    uStack_348 = auVar40._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_378) {
        return;
    }
    auVar41 = __stack_chk_fail();
    puVar14 = auVar41._8_8_;
    uVar35 = auVar41._0_8_;
    *extraout_x18_05 = sym.perf_trace_alloc_resp_class;
    pcStack_3f8 = sym.perf_trace_alloc_resp_class;
    pcStack_3e0 = sym.perf_trace_relinquish_req_msg_class;
    iVar11 = sp_el0;
    iStack_408 = *(iVar11 + 0x5e0);
    iStack_410 = 0;
    uStack_414 = 0;
    if (puVar14[1] < 4) {
        pcVar30 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_400 = &pppuStack_370;
    uStack_3f0 = uVar12;
    uStack_3d8 = arg1;
    pcStack_3d0 = pcVar32;
    uStack_3c8 = uVar10;
    puStack_3b8 = puVar13;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar35 + 0x78);
    if ((*(uVar35 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar16 = &uStack_414;
        pcVar32 = (uVar12 + 0x24U & 0xfffffff8) - 4;
        uVar23 = perf_trace_buf_alloc(pcVar32,&iStack_410);
        uVar10 = _hyp_assign_table;
        if (uVar23 != 0) {
            *(iStack_410 + 0xe8) = &pppuStack_400;
            *(iStack_410 + 0xf8) = auStack_420;
            *(iStack_410 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800ad34;
            *(iStack_410 + 0x108) = 5;
            *(uVar23 + 0xc) = uVar12 * 0x10000 + 0x10018;
            *(uVar23 + 8) = *puVar14;
            if (puVar14[1] < 4) {
                pcVar30 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar23 + 0x18,pcVar30);
            puVar16 = uStack_414;
            *(uVar23 + 0x10) = puVar14[3];
            *(uVar23 + 0x14) = puVar14[4];
            uVar20 = uVar35;
            perf_trace_run_bpf_submit(uVar23,pcVar32,puVar16,uVar35,1,iStack_410,piVar4,0);
            arg1 = uVar23;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_408) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar13 = auVar38._8_8_;
    iVar27 = auVar38._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_06 = 0x800aee4;
    uStack_448 = 0x800aee4;
    iVar11 = sp_el0;
    iStack_458 = *(iVar11 + 0x5e0);
    uVar10 = *(iVar27 + 0x48);
    uStack_468 = 0;
    uStack_460 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_488 = 0;
    uStack_480 = 0;
    uVar29 = uVar10;
    pppuStack_450 = &pppuStack_400;
    piStack_440 = piVar4;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            puStack_430 = puVar14;
            uStack_428 = uVar35;
            event_triggers_call(iVar27,0);
            auVar41._8_8_ = puStack_430;
            auVar41._0_8_ = uStack_428;
        }
        puStack_430 = auVar41._8_8_;
        uStack_428 = auVar41._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar35 = trace_event_ignore_this_pid(iVar27), auVar41._8_8_ = puStack_430, auVar41._0_8_ = uStack_428,
            (uVar35 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_430 = auVar41._8_8_;
        uStack_428 = auVar41._0_8_;
        if (puVar13[1] < 4) {
            pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar10 = uVar29;
        puVar16 = uVar29 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_488,iVar27);
        auVar41._8_8_ = puStack_430;
        auVar41._0_8_ = uStack_428;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar29 * 0x10000 | 0x10;
            *(iVar11 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x10,pcVar30);
            trace_event_buffer_commit(&uStack_488);
            auVar41._8_8_ = puStack_430;
            auVar41._0_8_ = uStack_428;
        }
    }
    puStack_430 = auVar41._8_8_;
    uStack_428 = auVar41._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_458) {
        return;
    }
    auVar42 = __stack_chk_fail();
    puVar13 = auVar42._8_8_;
    uVar35 = auVar42._0_8_;
    *extraout_x18_07 = sym.perf_trace_relinquish_resp_class;
    pcStack_4d8 = sym.perf_trace_relinquish_resp_class;
    pcStack_4c0 = sym.perf_trace_alloc_resp_class;
    iVar11 = sp_el0;
    iStack_4e8 = *(iVar11 + 0x5e0);
    iStack_4f0 = 0;
    uStack_4f4 = 0;
    if (puVar13[1] < 4) {
        pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_4e0 = &pppuStack_450;
    uStack_4d0 = uVar12;
    uStack_4b8 = arg1;
    pcStack_4b0 = pcVar32;
    uStack_4a8 = uVar10;
    auStack_4a0 = auVar38;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar35 + 0x78);
    if ((*(uVar35 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar16 = &uStack_4f4;
        pcVar32 = (uVar12 + 0x1cU & 0xfffffff8) - 4;
        uVar23 = perf_trace_buf_alloc(pcVar32,&iStack_4f0);
        uVar10 = _hyp_assign_table;
        if (uVar23 != 0) {
            *(iStack_4f0 + 0xe8) = &pppuStack_4e0;
            *(iStack_4f0 + 0xf8) = auStack_500;
            *(iStack_4f0 + 0x100) = ~(-1L << (uVar10 & 0x3f)) & 0x800b020;
            *(iStack_4f0 + 0x108) = 5;
            *(uVar23 + 0xc) = uVar12 * 0x10000 + 0x10010;
            *(uVar23 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar30 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar23 + 0x10,pcVar30);
            puVar16 = uStack_4f4;
            uVar20 = uVar35;
            perf_trace_run_bpf_submit(uVar23,pcVar32,puVar16,uVar35,1,iStack_4f0,piVar4,0);
            arg1 = uVar23;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_4e8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar15 = auVar38._8_8_;
    iVar27 = auVar38._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_08 = 0x800b1c0;
    uStack_538 = 0x800b1c0;
    pcStack_530 = sym.perf_trace_relinquish_resp_class;
    iVar11 = sp_el0;
    iStack_548 = *(iVar11 + 0x5e0);
    pcVar34 = *(iVar27 + 0x48);
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    uVar29 = pcVar34;
    uVar10 = uVar20;
    pppuStack_540 = &pppuStack_4e0;
    uStack_528 = arg1;
    pcStack_520 = pcVar32;
    piStack_518 = piVar4;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar16;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar10 = 0;
            puStack_510 = puVar13;
            uStack_508 = uVar35;
            event_triggers_call(iVar27,0);
            auVar42._8_8_ = puStack_510;
            auVar42._0_8_ = uStack_508;
        }
        puStack_510 = auVar42._8_8_;
        uStack_508 = auVar42._0_8_;
        pcStack_5b0 = sym.perf_trace_relinquish_resp_class;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar35 = trace_event_ignore_this_pid(iVar27), auVar42._8_8_ = puStack_510, auVar42._0_8_ = uStack_508,
            (uVar35 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_510 = auVar42._8_8_;
        uStack_508 = auVar42._0_8_;
        uVar5 = *puVar15;
        pcVar34 = uVar5;
        puVar17 = pcVar34 * 0x10 + 0x1c;
        iVar11 = trace_event_buffer_reserve(&uStack_578,iVar27);
        auVar42._8_8_ = puStack_510;
        auVar42._0_8_ = uStack_508;
        pcStack_5b0 = pcVar34;
        if (iVar11 != 0) {
            uVar29 = uVar5 << 0x13;
            uVar35 = pcVar34 * 8 + 0x1c;
            *(iVar11 + 0xc) = uVar29 | 0x1c;
            *(iVar11 + 0x10) = uVar35 | uVar29;
            *(iVar11 + 8) = *puVar15;
            if (*puVar15 != 0) {
                uVar23 = 0;
                puVar26 = puVar15 + 6;
                do {
                    iVar27 = uVar23 * 8;
                    uVar23 = uVar23 + 1;
                    *(iVar11 + 0x1c + iVar27) = *(puVar26 + -4);
                    *(iVar11 + (uVar35 & 0xfffc) + iVar27) = *puVar26;
                    puVar26 = puVar26 + 8;
                } while (uVar23 < *puVar15);
            }
            *(iVar11 + 0x14) = puVar16;
            *(iVar11 + 0x18) = uVar20;
            trace_event_buffer_commit(&uStack_578);
            auVar42._8_8_ = puStack_510;
            auVar42._0_8_ = uStack_508;
        }
    }
    puStack_510 = auVar42._8_8_;
    uStack_508 = auVar42._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_548) {
        return;
    }
    auVar43 = __stack_chk_fail();
    puVar15 = auVar43._8_8_;
    uVar23 = auVar43._0_8_;
    *extraout_x18_09 = sym.perf_trace_lookup_sgl;
    pcStack_5c8 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_5d8 = *(iVar11 + 0x5e0);
    uVar37 = uVar10 & 0xffffffff;
    uVar24 = puVar17 & 0xffffffff;
    iStack_5e0 = 0;
    uStack_5e4 = 0;
    uVar5 = *puVar15;
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar23 + 0x78);
    uVar35 = uVar10;
    pppuStack_5d0 = &pppuStack_540;
    uStack_5c0 = uVar21;
    uStack_5b8 = uVar12;
    pcStack_5a8 = pcVar34;
    uStack_590 = puVar16 & 0xffffffff;
    uStack_588 = uVar20 & 0xffffffff;
    auStack_5a0 = auVar38;
    if ((*(uVar23 + 0x80) != 0) || (puVar18 = puVar17, pcVar34 = pcStack_5b0, *piVar4 != 0)) {
        puVar18 = &uStack_5e4;
        pcVar34 = (uVar5 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar34,&iStack_5e0);
        if (iVar11 != 0) {
            uVar35 = _hyp_assign_table & 0x3f;
            *(iStack_5e0 + 0xe8) = &pppuStack_5d0;
            *(iStack_5e0 + 0xf8) = auStack_5f0;
            uVar20 = uVar5 * 8 + 0x1c;
            *(iStack_5e0 + 0x100) = ~(-1L << uVar35) & 0x800b30c;
            *(iStack_5e0 + 0x108) = 5;
            *(iVar11 + 0xc) = uVar5 << 0x13 | 0x1c;
            *(iVar11 + 0x10) = uVar20 | uVar5 << 0x13;
            *(iVar11 + 8) = *puVar15;
            if (*puVar15 != 0) {
                uVar35 = 0;
                puVar26 = puVar15 + 6;
                do {
                    iVar27 = uVar35 * 8;
                    uVar35 = uVar35 + 1;
                    *(iVar11 + 0x1c + iVar27) = *(puVar26 + -4);
                    *(iVar11 + (uVar20 & 0xfffc) + iVar27) = *puVar26;
                    puVar26 = puVar26 + 8;
                } while (uVar35 < *puVar15);
            }
            puVar18 = uStack_5e4;
            *(iVar11 + 0x14) = puVar17;
            *(iVar11 + 0x18) = uVar10;
            uVar35 = uVar23;
            perf_trace_run_bpf_submit(iVar11,pcVar34,puVar18,uVar23,1,iStack_5e0,piVar4,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_5d8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    iVar27 = auVar38._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_10 = 0x800b4ac;
    uStack_628 = 0x800b4ac;
    iVar11 = sp_el0;
    iStack_638 = *(iVar11 + 0x5e0);
    uVar20 = auVar38._8_8_ & 0xffffffff;
    piVar33 = *(iVar27 + 0x48);
    uStack_648 = 0;
    uStack_640 = 0;
    uStack_658 = 0;
    uStack_650 = 0;
    uStack_668 = 0;
    uStack_660 = 0;
    uVar21 = piVar33;
    pppuStack_630 = &pppuStack_5d0;
    piStack_620 = piVar4;
    uStack_608 = uVar24;
    uStack_600 = uVar37;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar35 = 0;
            puStack_610 = puVar15;
            uStack_5f8 = uVar23;
            event_triggers_call(iVar27,0,0,0);
            auVar43._8_8_ = puStack_610;
            auVar43._0_8_ = uStack_5f8;
        }
        puStack_610 = auVar43._8_8_;
        uStack_5f8 = auVar43._0_8_;
        piStack_698 = piVar4;
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 &&
            (uVar10 = trace_event_ignore_this_pid(iVar27), auVar43._8_8_ = puStack_610, auVar43._0_8_ = uStack_5f8,
            (uVar10 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_610 = auVar43._8_8_;
    uStack_5f8 = auVar43._0_8_;
    uVar21 = *puVar18;
    piVar33 = uVar21;
    puVar17 = piVar33 * 0x10 + 0x18;
    iVar11 = trace_event_buffer_reserve(&uStack_668,iVar27);
    auVar43._8_8_ = puStack_610;
    auVar43._0_8_ = uStack_5f8;
    piStack_698 = piVar33;
    if (iVar11 != 0) {
        uVar21 = uVar21 << 0x13;
        uVar10 = piVar33 * 8 + 0x18;
        *(iVar11 + 8) = auVar38._8_4_;
        *(iVar11 + 0x10) = uVar21 | 0x18;
        *(iVar11 + 0x14) = uVar10 | uVar21;
        *(iVar11 + 0xc) = *puVar18;
        if (*puVar18 != 0) {
            uVar23 = 0;
            puVar16 = puVar18 + 3;
            do {
                iVar28 = uVar23 * 8;
                uVar23 = uVar23 + 1;
                *(iVar11 + 0x18 + iVar28) = *(puVar16 + -2);
                *(iVar11 + (uVar10 & 0xfff8) + iVar28) = *puVar16;
                puVar16 = puVar16 + 4;
            } while (uVar23 < *puVar18);
        }
        trace_event_buffer_commit(&uStack_668);
        auVar43._8_8_ = puStack_610;
        auVar43._0_8_ = uStack_5f8;
    }
code_r0x0800b5bc:
    puStack_610 = auVar43._8_8_;
    uStack_5f8 = auVar43._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_638) {
        return;
    }
    auVar44 = __stack_chk_fail();
    uVar10 = auVar44._0_8_;
    *extraout_x18_11 = sym.perf_trace_map_mem_s2;
    pcStack_6b8 = sym.perf_trace_map_mem_s2;
    pcStack_6b0 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_6c8 = *(iVar11 + 0x5e0);
    iStack_6d0 = 0;
    uStack_6d4 = 0;
    uVar5 = *puVar17;
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar10 + 0x78);
    pppuStack_6c0 = &pppuStack_630;
    pcStack_6a0 = pcVar34;
    piStack_690 = piVar33;
    iStack_688 = iVar27;
    uStack_680 = uVar20;
    puStack_678 = puVar18;
    if ((*(uVar10 + 0x80) != 0) || (puVar16 = puVar17, *piVar4 != 0)) {
        puVar16 = &uStack_6d4;
        iVar9 = (uVar5 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(iVar9,&iStack_6d0,puVar16);
        if (iVar11 != 0) {
            uVar35 = _hyp_assign_table & 0x3f;
            *(iStack_6d0 + 0xe8) = &pppuStack_6c0;
            *(iStack_6d0 + 0xf8) = auStack_6e0;
            uVar20 = uVar5 * 8 + 0x18;
            *(iStack_6d0 + 0x100) = ~(-1L << uVar35) & 0x800b5f4;
            *(iStack_6d0 + 0x108) = 5;
            *(iVar11 + 8) = auVar44._8_4_;
            *(iVar11 + 0x10) = uVar5 << 0x13 | 0x18;
            *(iVar11 + 0x14) = uVar20 | uVar5 << 0x13;
            *(iVar11 + 0xc) = *puVar17;
            if (*puVar17 != 0) {
                uVar35 = 0;
                puVar16 = puVar17 + 3;
                do {
                    iVar27 = uVar35 * 8;
                    uVar35 = uVar35 + 1;
                    *(iVar11 + 0x18 + iVar27) = *(puVar16 + -2);
                    *(iVar11 + (uVar20 & 0xfff8) + iVar27) = *puVar16;
                    puVar16 = puVar16 + 4;
                } while (uVar35 < *puVar17);
            }
            puVar16 = uStack_6d4;
            perf_trace_run_bpf_submit(iVar11,iVar9,puVar16,uVar10,1,iStack_6d0,piVar4,0);
            uVar35 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_6c8) {
        auVar38 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_12 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar38._0_8_,auVar38._8_8_,puVar16 & 0xffffffff,uVar35 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_mem_buf_alloc_info @ 0x0800a264 (size 560) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800a7c4)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_mem_buf_alloc_info(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint *puVar14;
    uint16_t *puVar15;
    uint16_t *puVar16;
    uint16_t *puVar17;
    uint16_t *puVar18;
    uint32_t *in_x4;
    uint32_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uchar *puVar23;
    int64_t iVar24;
    int64_t iVar25;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    char *unaff_x19;
    uint32_t uVar26;
    char *pcVar27;
    char *pcVar28;
    char *unaff_x22;
    int64_t *piVar29;
    uint64_t unaff_x23;
    code *pcVar30;
    uint64_t uVar31;
    uint64_t uVar32;
    uint64_t unaff_x26;
    uint64_t uVar33;
    uint64_t unaff_x30;
    uchar auVar34 [16];
    uchar auVar35 [16];
    uchar auVar36 [16];
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [12];
    uchar auStack_640 [12];
    uint32_t uStack_634;
    int64_t iStack_630;
    int64_t iStack_628;
    uchar *puStack_620;
    code *pcStack_618;
    code *pcStack_610;
    code *pcStack_600;
    int64_t *piStack_5f8;
    int64_t *piStack_5f0;
    int64_t iStack_5e8;
    uint64_t uStack_5e0;
    uint16_t *puStack_5d8;
    ulong uStack_5c8;
    ulong uStack_5c0;
    ulong uStack_5b8;
    ulong uStack_5b0;
    ulong uStack_5a8;
    ulong uStack_5a0;
    int64_t iStack_598;
    uchar *puStack_590;
    ulong uStack_588;
    int64_t *piStack_580;
    uint16_t *puStack_570;
    uint64_t uStack_568;
    uint64_t uStack_560;
    uint64_t uStack_558;
    uchar auStack_550 [12];
    uint32_t uStack_544;
    int64_t iStack_540;
    int64_t iStack_538;
    uchar *puStack_530;
    code *pcStack_528;
    uint64_t uStack_520;
    ulong uStack_518;
    code *pcStack_510;
    code *pcStack_508;
    uchar auStack_500 [16];
    uint64_t uStack_4f0;
    uint64_t uStack_4e8;
    ulong uStack_4d8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    ulong uStack_4c0;
    ulong uStack_4b8;
    ulong uStack_4b0;
    int64_t iStack_4a8;
    uchar *puStack_4a0;
    ulong uStack_498;
    code *pcStack_490;
    uint64_t uStack_488;
    char *pcStack_480;
    int64_t *piStack_478;
    uint *puStack_470;
    uint64_t uStack_468;
    uchar auStack_460 [12];
    uint32_t uStack_454;
    int64_t iStack_450;
    int64_t iStack_448;
    uchar *puStack_440;
    code *pcStack_438;
    ulong uStack_430;
    code *pcStack_420;
    uint64_t uStack_418;
    char *pcStack_410;
    uint64_t uStack_408;
    uchar auStack_400 [16];
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    int64_t iStack_3b8;
    uchar *puStack_3b0;
    ulong uStack_3a8;
    int64_t *piStack_3a0;
    uint *puStack_390;
    uint64_t uStack_388;
    uchar auStack_380 [12];
    uint32_t uStack_374;
    int64_t iStack_370;
    int64_t iStack_368;
    uchar *puStack_360;
    code *pcStack_358;
    ulong uStack_350;
    code *pcStack_340;
    uint64_t uStack_338;
    char *pcStack_330;
    uint64_t uStack_328;
    int64_t iStack_320;
    uint *puStack_318;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    int64_t iStack_2d8;
    uchar *puStack_2d0;
    ulong uStack_2c8;
    int64_t *piStack_2c0;
    uint *puStack_2b0;
    uint64_t uStack_2a8;
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    uchar *puStack_280;
    code *pcStack_278;
    code *pcStack_270;
    ulong uStack_260;
    uint64_t uStack_258;
    char *pcStack_250;
    uint64_t uStack_248;
    int64_t iStack_240;
    uint *puStack_238;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    uchar *puStack_1f0;
    ulong uStack_1e8;
    char *pcStack_1e0;
    uint *puStack_1d0;
    uint64_t uStack_1c8;
    uchar auStack_1c0 [12];
    int iStack_1b4;
    int64_t *piStack_1b0;
    uint32_t uStack_1a4;
    int64_t iStack_1a0;
    int64_t iStack_198;
    uchar *puStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    char *pcStack_150;
    char *pcStack_148;
    int64_t iStack_140;
    uint *puStack_138;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    ulong uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    char *pcStack_c0;
    char *pcStack_b8;
    char *pcStack_a8;
    uchar auStack_a0 [4];
    int iStack_9c;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    uint *puVar13;
    
    uVar21 = arg4;
    puVar15 = arg3;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uVar32 = arg3;
    iStack_70 = 0;
    uStack_74 = 0;
    uVar26 = *in_x4;
    uVar19 = 0xc;
    if (arg3 != 0) {
        uVar19 = 6;
    }
    uVar33 = uVar19;
    iVar11 = tpidr_el1;
    uVar31 = arg4;
    uVar20 = 0xd;
    if (arg4 != 0) {
        uVar20 = 7;
    }
    pcVar27 = uVar20;
    piVar4 = iVar11 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar4 != 0)) {
        uVar7 = uVar19 | 1;
        unaff_x19 = uVar7;
        uVar2 = uVar7 + uVar20;
        unaff_x26 = uVar2;
        puVar15 = &stack0xffffffffffffff8c;
        uVar3 = uVar2 + uVar26 * 2;
        unaff_x22 = uVar3;
        iStack_9c = (uVar26 + uVar3 + 0x33 & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(iStack_9c,&stack0xffffffffffffff90);
        if (uVar10 != 0) {
            uVar33 = uVar19 + 0x25;
            uVar2 = uVar2 | uVar26 << 0x11;
            unaff_x26 = uVar2;
            uVar22 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff60;
            uVar21 = (~uVar22 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar21 = uVar22 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar21;
            *(iStack_70 + 0x108) = 5;
            unaff_x19 = "(null)";
            pcVar27 = "ION_MEM_TYPE";
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            pcVar28 = pcVar27;
            if (arg3 != 0) {
                pcVar28 = unaff_x19;
            }
            *(uVar10 + 0x14) = uVar7 << 0x10 | 0x24;
            *(uVar10 + 0x18) = uVar19 + 0x25 | uVar20 << 0x10;
            *(uVar10 + 0x1c) = uVar2 + 0x24;
            *(uVar10 + 0x20) = uVar3 + 0x24 | uVar26 << 0x10;
            *(uVar10 + 8) = arg2;
            strcpy(uVar10 + 0x24,pcVar28);
            pcVar28 = pcVar27;
            if (arg4 != 0) {
                pcVar28 = unaff_x19;
            }
            strcpy(uVar10 + uVar33,pcVar28);
            *(uVar10 + 0x10) = *in_x4;
            if (*in_x4 != 0) {
                uVar5 = *(uVar10 + 0x1c);
                uVar21 = 0;
                uVar6 = *(uVar10 + 0x20);
                puVar23 = in_x4 + 6;
                do {
                    *(uVar10 + uVar5 + uVar21 * 2) = *(puVar23 + -2);
                    *(uVar10 + uVar6 + uVar21) = *puVar23;
                    uVar21 = uVar21 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar21 < *in_x4);
            }
            puVar15 = uStack_74;
            perf_trace_run_bpf_submit(uVar10,iStack_9c,puVar15,arg1,1,iStack_70,piVar4,0);
            uVar21 = arg1;
            unaff_x23 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar13 = auVar34._8_8_;
    iVar24 = auVar34._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18 = 0x800a488;
    uStack_e8 = 0x800a488;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    pcVar28 = *(iVar24 + 0x48);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar19 = pcVar28;
    puStack_f0 = &stack0xffffffffffffffa0;
    uStack_e0 = unaff_x26;
    uStack_d8 = uVar32;
    uStack_d0 = uVar31;
    uStack_c8 = unaff_x23;
    pcStack_c0 = unaff_x22;
    pcStack_b8 = pcVar27;
    pcStack_a8 = unaff_x19;
    iStack_140 = iVar24;
    if ((uVar19 >> 8 & 1) == 0) {
        if ((uVar19 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar24,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar24), (uVar10 & 1) == 0))))
        goto code_r0x0800a50c;
    }
    else {
code_r0x0800a50c:
        if (puVar13[1] < 4) {
            pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar27 = "(null)";
        }
        pcVar28 = strlen(pcVar27);
        uVar2 = puVar13[7];
        unaff_x22 = uVar2;
        uVar19 = pcVar28 + 1;
        uVar31 = uVar19;
        uVar20 = 0xd;
        if (puVar13[5] != 0) {
            uVar20 = 7;
        }
        unaff_x23 = uVar20;
        uVar3 = uVar20 + uVar19;
        unaff_x26 = uVar3;
        uVar7 = uVar3 + uVar2 * 2;
        uVar32 = uVar7;
        puVar15 = uVar7 + uVar2 + 0x28;
        iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffed8,iVar24);
        if (iVar11 != 0) {
            uVar1 = pcVar28 + 0x29;
            pcVar28 = uVar1;
            *(iVar11 + 0xc) = uVar19 * 0x10000 | 0x28;
            unaff_x22 = "(null)";
            *(iVar11 + 0x18) = uVar1 | uVar20 << 0x10;
            *(iVar11 + 0x20) = uVar3 + 0x28 | uVar2 << 0x11;
            *(iVar11 + 0x24) = uVar7 + 0x28 | uVar2 << 0x10;
            *(iVar11 + 8) = *puVar13;
            pcVar27 = unaff_x22;
            if (puVar13[1] < 4) {
                pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            strcpy(iVar11 + 0x28,pcVar27);
            *(iVar11 + 0x10) = *(puVar13 + 3);
            pcVar27 = "ION_MEM_TYPE";
            if (puVar13[5] != 0) {
                pcVar27 = unaff_x22;
            }
            strcpy(iVar11 + (uVar1 & 0xffff),pcVar27);
            *(iVar11 + 0x1c) = puVar13[7];
            if (puVar13[7] != 0) {
                uVar5 = *(iVar11 + 0x20);
                uVar10 = 0;
                uVar6 = *(iVar11 + 0x24);
                puVar23 = puVar13 + 0x22;
                do {
                    *(iVar11 + uVar5 + uVar10 * 2) = *(puVar23 + -2);
                    *(iVar11 + uVar6 + uVar10) = *puVar23;
                    uVar10 = uVar10 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar10 < puVar13[7]);
            }
            trace_event_buffer_commit(&stack0xfffffffffffffed8);
            iStack_140 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar14 = auVar34._8_8_;
    uVar10 = auVar34._0_8_;
    *extraout_x18_00 = sym.perf_trace_alloc_req_msg_class;
    pcStack_188 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_198 = *(iVar11 + 0x5e0);
    iStack_1a0 = 0;
    uStack_1a4 = 0;
    if (puVar14[1] < 4) {
        pcVar27 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar27 = "(null)";
    }
    puStack_190 = &stack0xffffffffffffff10;
    uStack_180 = uVar26;
    uStack_178 = uVar33;
    uStack_170 = unaff_x26;
    uStack_168 = uVar32;
    uStack_160 = uVar31;
    uStack_158 = unaff_x23;
    pcStack_150 = unaff_x22;
    pcStack_148 = pcVar28;
    puStack_138 = puVar13;
    uVar12 = strlen(pcVar27);
    uVar19 = puVar14[7];
    iVar11 = tpidr_el1;
    iVar9 = 0xd;
    if (puVar14[5] != 0) {
        iVar9 = 7;
    }
    piStack_1b0 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piStack_1b0 != 0)) {
        uVar26 = uVar12 + 1;
        unaff_x22 = uVar26;
        puVar15 = &stack0xfffffffffffffe5c;
        uVar20 = iVar9 + uVar26 + uVar19 * 2;
        pcVar28 = uVar20;
        iStack_1b4 = (uVar19 + uVar20 + 0x33 & 0xfffffff8) - 4;
        uVar32 = perf_trace_buf_alloc(iStack_1b4,&stack0xfffffffffffffe60);
        if (uVar32 != 0) {
            uVar2 = uVar12 + 0x29;
            unaff_x22 = uVar2;
            uVar21 = _hyp_assign_table & 0x3f;
            *(iStack_1a0 + 0xf8) = &stack0xfffffffffffffe40;
            *(iStack_1a0 + 0xe8) = &stack0xfffffffffffffe70;
            *(iStack_1a0 + 0x100) = ~(-1L << uVar21) & 0x800a690;
            *(iStack_1a0 + 0x108) = 5;
            *(uVar32 + 0xc) = uVar26 * 0x10000 | 0x28;
            pcVar28 = "(null)";
            *(uVar32 + 0x18) = uVar2 | iVar9 << 0x10;
            *(uVar32 + 0x20) = iVar9 + uVar26 + 0x28 | uVar19 << 0x11;
            *(uVar32 + 0x24) = uVar20 + 0x28 | uVar19 << 0x10;
            *(uVar32 + 8) = *puVar14;
            pcVar27 = pcVar28;
            if (puVar14[1] < 4) {
                pcVar27 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            strcpy(uVar32 + 0x28,pcVar27);
            *(uVar32 + 0x10) = *(puVar14 + 3);
            pcVar27 = "ION_MEM_TYPE";
            if (puVar14[5] != 0) {
                pcVar27 = pcVar28;
            }
            strcpy(uVar32 + (uVar2 & 0xffff),pcVar27);
            *(uVar32 + 0x1c) = puVar14[7];
            if (puVar14[7] != 0) {
                uVar5 = *(uVar32 + 0x20);
                uVar21 = 0;
                uVar6 = *(uVar32 + 0x24);
                puVar23 = puVar14 + 0x22;
                do {
                    *(uVar32 + uVar5 + uVar21 * 2) = *(puVar23 + -2);
                    *(uVar32 + uVar6 + uVar21) = *puVar23;
                    uVar21 = uVar21 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar21 < puVar14[7]);
            }
            puVar15 = uStack_1a4;
            uVar21 = uVar10;
            perf_trace_run_bpf_submit(uVar32,iStack_1b4,puVar15,uVar10,1,iStack_1a0,piStack_1b0,0);
            unaff_x23 = uVar32;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_198) {
        return;
    }
    auVar35 = __stack_chk_fail();
    puVar13 = auVar35._8_8_;
    iVar24 = auVar35._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_01 = 0x800a8f4;
    uStack_1e8 = 0x800a8f4;
    iVar11 = sp_el0;
    iStack_1f8 = *(iVar11 + 0x5e0);
    uVar32 = *(iVar24 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar26 = uVar32;
    puStack_1f0 = &stack0xfffffffffffffe70;
    pcStack_1e0 = pcVar28;
    iStack_240 = iVar24;
    if ((uVar26 >> 8 & 1) == 0) {
        if ((uVar26 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar21 = 0;
            puStack_1d0 = puVar14;
            uStack_1c8 = uVar10;
            event_triggers_call(iVar24,0);
            auVar34._8_8_ = puStack_1d0;
            auVar34._0_8_ = uStack_1c8;
        }
        puStack_1d0 = auVar34._8_8_;
        uStack_1c8 = auVar34._0_8_;
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 ||
            (uVar31 = trace_event_ignore_this_pid(iVar24), auVar34._8_8_ = puStack_1d0, auVar34._0_8_ = uStack_1c8,
            (uVar31 & 1) == 0)))) goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        puStack_1d0 = auVar34._8_8_;
        uStack_1c8 = auVar34._0_8_;
        if (puVar13[1] < 4) {
            pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar27 = "(null)";
        }
        iVar9 = strlen(pcVar27);
        uVar26 = iVar9 + 1;
        uVar32 = uVar26;
        puVar15 = uVar26 + 0x14;
        iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffdd8,iVar24);
        auVar34._8_8_ = puStack_1d0;
        auVar34._0_8_ = uStack_1c8;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar26 * 0x10000 | 0x14;
            if (puVar13[1] < 4) {
                pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar27 = "(null)";
            }
            strcpy(iVar11 + 0x14,pcVar27);
            *(iVar11 + 0xc) = puVar13[3];
            *(iVar11 + 0x10) = *puVar13;
            trace_event_buffer_commit(&stack0xfffffffffffffdd8);
            auVar34._8_8_ = puStack_1d0;
            auVar34._0_8_ = uStack_1c8;
            iStack_240 = iVar11;
        }
    }
    puStack_1d0 = auVar34._8_8_;
    uStack_1c8 = auVar34._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar35 = __stack_chk_fail();
    puVar14 = auVar35._8_8_;
    uVar31 = auVar35._0_8_;
    *extraout_x18_02 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_278 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_270 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_288 = *(iVar11 + 0x5e0);
    iStack_290 = 0;
    uStack_294 = 0;
    if (puVar14[1] < 4) {
        pcVar27 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar27 = "(null)";
    }
    puStack_280 = &stack0xfffffffffffffe10;
    uStack_260 = uVar12;
    uStack_258 = unaff_x23;
    pcStack_250 = unaff_x22;
    uStack_248 = uVar32;
    puStack_238 = puVar13;
    uVar12 = strlen(pcVar27);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar31 + 0x78);
    if ((*(uVar31 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar15 = &stack0xfffffffffffffd6c;
        unaff_x22 = (uVar12 + 0x20U & 0xfffffff8) - 4;
        uVar33 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffd70);
        uVar32 = _hyp_assign_table;
        if (uVar33 != 0) {
            *(iStack_290 + 0xe8) = &stack0xfffffffffffffd80;
            *(iStack_290 + 0xf8) = &stack0xfffffffffffffd60;
            *(iStack_290 + 0x100) = ~(-1L << (uVar32 & 0x3f)) & 0x800aa3c;
            *(iStack_290 + 0x108) = 5;
            *(uVar33 + 8) = uVar12 * 0x10000 + 0x10014;
            if (puVar14[1] < 4) {
                pcVar27 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar27 = "(null)";
            }
            strcpy(uVar33 + 0x14,pcVar27);
            puVar15 = uStack_294;
            *(uVar33 + 0xc) = puVar14[3];
            *(uVar33 + 0x10) = *puVar14;
            uVar21 = uVar31;
            perf_trace_run_bpf_submit(uVar33,unaff_x22,puVar15,uVar31,1,iStack_290,piVar4,0);
            unaff_x23 = uVar33;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_288) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar13 = auVar34._8_8_;
    iVar24 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_03 = 0x800abe4;
    uStack_2c8 = 0x800abe4;
    iVar11 = sp_el0;
    iStack_2d8 = *(iVar11 + 0x5e0);
    uVar32 = *(iVar24 + 0x48);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uVar26 = uVar32;
    puStack_2d0 = &stack0xfffffffffffffd80;
    piStack_2c0 = piVar4;
    iStack_320 = iVar24;
    if ((uVar26 >> 8 & 1) == 0) {
        if ((uVar26 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar21 = 0;
            puStack_2b0 = puVar14;
            uStack_2a8 = uVar31;
            event_triggers_call(iVar24,0);
            auVar35._8_8_ = puStack_2b0;
            auVar35._0_8_ = uStack_2a8;
        }
        puStack_2b0 = auVar35._8_8_;
        uStack_2a8 = auVar35._0_8_;
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 ||
            (uVar31 = trace_event_ignore_this_pid(iVar24), auVar35._8_8_ = puStack_2b0, auVar35._0_8_ = uStack_2a8,
            (uVar31 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_2b0 = auVar35._8_8_;
        uStack_2a8 = auVar35._0_8_;
        if (puVar13[1] < 4) {
            pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar27 = "(null)";
        }
        iVar9 = strlen(pcVar27);
        uVar26 = iVar9 + 1;
        uVar32 = uVar26;
        puVar15 = uVar26 + 0x18;
        iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffcf8,iVar24);
        auVar35._8_8_ = puStack_2b0;
        auVar35._0_8_ = uStack_2a8;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar26 * 0x10000 | 0x18;
            *(iVar11 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar27 = "(null)";
            }
            strcpy(iVar11 + 0x18,pcVar27);
            *(iVar11 + 0x10) = puVar13[3];
            *(iVar11 + 0x14) = puVar13[4];
            trace_event_buffer_commit(&stack0xfffffffffffffcf8);
            auVar35._8_8_ = puStack_2b0;
            auVar35._0_8_ = uStack_2a8;
            iStack_320 = iVar11;
        }
    }
    puStack_2b0 = auVar35._8_8_;
    uStack_2a8 = auVar35._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2d8) {
        return;
    }
    auVar36 = __stack_chk_fail();
    puVar14 = auVar36._8_8_;
    uVar31 = auVar36._0_8_;
    *extraout_x18_04 = sym.perf_trace_alloc_resp_class;
    pcStack_358 = sym.perf_trace_alloc_resp_class;
    pcStack_340 = sym.perf_trace_relinquish_req_msg_class;
    iVar11 = sp_el0;
    iStack_368 = *(iVar11 + 0x5e0);
    iStack_370 = 0;
    uStack_374 = 0;
    if (puVar14[1] < 4) {
        pcVar27 = *(puVar14[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar27 = "(null)";
    }
    puStack_360 = &stack0xfffffffffffffd30;
    uStack_350 = uVar12;
    uStack_338 = unaff_x23;
    pcStack_330 = unaff_x22;
    uStack_328 = uVar32;
    puStack_318 = puVar13;
    uVar12 = strlen(pcVar27);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar31 + 0x78);
    if ((*(uVar31 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar15 = &stack0xfffffffffffffc8c;
        unaff_x22 = (uVar12 + 0x24U & 0xfffffff8) - 4;
        uVar33 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffc90);
        uVar32 = _hyp_assign_table;
        if (uVar33 != 0) {
            *(iStack_370 + 0xe8) = &stack0xfffffffffffffca0;
            *(iStack_370 + 0xf8) = &stack0xfffffffffffffc80;
            *(iStack_370 + 0x100) = ~(-1L << (uVar32 & 0x3f)) & 0x800ad34;
            *(iStack_370 + 0x108) = 5;
            *(uVar33 + 0xc) = uVar12 * 0x10000 + 0x10018;
            *(uVar33 + 8) = *puVar14;
            if (puVar14[1] < 4) {
                pcVar27 = *(puVar14[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar27 = "(null)";
            }
            strcpy(uVar33 + 0x18,pcVar27);
            puVar15 = uStack_374;
            *(uVar33 + 0x10) = puVar14[3];
            *(uVar33 + 0x14) = puVar14[4];
            uVar21 = uVar31;
            perf_trace_run_bpf_submit(uVar33,unaff_x22,puVar15,uVar31,1,iStack_370,piVar4,0);
            unaff_x23 = uVar33;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_368) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar13 = auVar34._8_8_;
    iVar24 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_05 = 0x800aee4;
    uStack_3a8 = 0x800aee4;
    iVar11 = sp_el0;
    iStack_3b8 = *(iVar11 + 0x5e0);
    uVar32 = *(iVar24 + 0x48);
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uVar26 = uVar32;
    puStack_3b0 = &stack0xfffffffffffffca0;
    piStack_3a0 = piVar4;
    if ((uVar26 >> 8 & 1) == 0) {
        if ((uVar26 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar21 = 0;
            puStack_390 = puVar14;
            uStack_388 = uVar31;
            event_triggers_call(iVar24,0);
            auVar36._8_8_ = puStack_390;
            auVar36._0_8_ = uStack_388;
        }
        puStack_390 = auVar36._8_8_;
        uStack_388 = auVar36._0_8_;
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 ||
            (uVar31 = trace_event_ignore_this_pid(iVar24), auVar36._8_8_ = puStack_390, auVar36._0_8_ = uStack_388,
            (uVar31 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_390 = auVar36._8_8_;
        uStack_388 = auVar36._0_8_;
        if (puVar13[1] < 4) {
            pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar27 = "(null)";
        }
        iVar9 = strlen(pcVar27);
        uVar26 = iVar9 + 1;
        uVar32 = uVar26;
        puVar15 = uVar26 + 0x10;
        iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffc18,iVar24);
        auVar36._8_8_ = puStack_390;
        auVar36._0_8_ = uStack_388;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar26 * 0x10000 | 0x10;
            *(iVar11 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar27 = "(null)";
            }
            strcpy(iVar11 + 0x10,pcVar27);
            trace_event_buffer_commit(&stack0xfffffffffffffc18);
            auVar36._8_8_ = puStack_390;
            auVar36._0_8_ = uStack_388;
        }
    }
    puStack_390 = auVar36._8_8_;
    uStack_388 = auVar36._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_3b8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    puVar13 = auVar37._8_8_;
    uVar31 = auVar37._0_8_;
    *extraout_x18_06 = sym.perf_trace_relinquish_resp_class;
    pcStack_438 = sym.perf_trace_relinquish_resp_class;
    pcStack_420 = sym.perf_trace_alloc_resp_class;
    iVar11 = sp_el0;
    iStack_448 = *(iVar11 + 0x5e0);
    iStack_450 = 0;
    uStack_454 = 0;
    if (puVar13[1] < 4) {
        pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar27 = "(null)";
    }
    puStack_440 = &stack0xfffffffffffffc50;
    uStack_430 = uVar12;
    uStack_418 = unaff_x23;
    pcStack_410 = unaff_x22;
    uStack_408 = uVar32;
    auStack_400 = auVar34;
    uVar12 = strlen(pcVar27);
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar31 + 0x78);
    if ((*(uVar31 + 0x80) != 0) || (*piVar4 != 0)) {
        puVar15 = &stack0xfffffffffffffbac;
        unaff_x22 = (uVar12 + 0x1cU & 0xfffffff8) - 4;
        uVar33 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffbb0);
        uVar32 = _hyp_assign_table;
        if (uVar33 != 0) {
            *(iStack_450 + 0xe8) = &stack0xfffffffffffffbc0;
            *(iStack_450 + 0xf8) = &stack0xfffffffffffffba0;
            *(iStack_450 + 0x100) = ~(-1L << (uVar32 & 0x3f)) & 0x800b020;
            *(iStack_450 + 0x108) = 5;
            *(uVar33 + 0xc) = uVar12 * 0x10000 + 0x10010;
            *(uVar33 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar27 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar27 = "(null)";
            }
            strcpy(uVar33 + 0x10,pcVar27);
            puVar15 = uStack_454;
            uVar21 = uVar31;
            perf_trace_run_bpf_submit(uVar33,unaff_x22,puVar15,uVar31,1,iStack_450,piVar4,0);
            unaff_x23 = uVar33;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_448) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar18 = auVar34._8_8_;
    iVar24 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_07 = 0x800b1c0;
    uStack_498 = 0x800b1c0;
    pcStack_490 = sym.perf_trace_relinquish_resp_class;
    iVar11 = sp_el0;
    iStack_4a8 = *(iVar11 + 0x5e0);
    pcVar30 = *(iVar24 + 0x48);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uVar26 = pcVar30;
    uVar32 = uVar21;
    puStack_4a0 = &stack0xfffffffffffffbc0;
    uStack_488 = unaff_x23;
    pcStack_480 = unaff_x22;
    piStack_478 = piVar4;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar15;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar32 = 0;
            puStack_470 = puVar13;
            uStack_468 = uVar31;
            event_triggers_call(iVar24,0);
            auVar37._8_8_ = puStack_470;
            auVar37._0_8_ = uStack_468;
        }
        puStack_470 = auVar37._8_8_;
        uStack_468 = auVar37._0_8_;
        pcStack_510 = sym.perf_trace_relinquish_resp_class;
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 ||
            (uVar31 = trace_event_ignore_this_pid(iVar24), auVar37._8_8_ = puStack_470, auVar37._0_8_ = uStack_468,
            (uVar31 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_470 = auVar37._8_8_;
        uStack_468 = auVar37._0_8_;
        uVar5 = *puVar18;
        pcVar30 = uVar5;
        puVar16 = pcVar30 * 0x10 + 0x1c;
        iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffb28,iVar24);
        auVar37._8_8_ = puStack_470;
        auVar37._0_8_ = uStack_468;
        pcStack_510 = pcVar30;
        if (iVar11 != 0) {
            uVar26 = uVar5 << 0x13;
            uVar31 = pcVar30 * 8 + 0x1c;
            *(iVar11 + 0xc) = uVar26 | 0x1c;
            *(iVar11 + 0x10) = uVar31 | uVar26;
            *(iVar11 + 8) = *puVar18;
            if (*puVar18 != 0) {
                uVar33 = 0;
                puVar17 = puVar18 + 6;
                do {
                    iVar24 = uVar33 * 8;
                    uVar33 = uVar33 + 1;
                    *(iVar11 + 0x1c + iVar24) = *(puVar17 + -4);
                    *(iVar11 + (uVar31 & 0xfffc) + iVar24) = *puVar17;
                    puVar17 = puVar17 + 8;
                } while (uVar33 < *puVar18);
            }
            *(iVar11 + 0x14) = puVar15;
            *(iVar11 + 0x18) = uVar21;
            trace_event_buffer_commit(&stack0xfffffffffffffb28);
            auVar37._8_8_ = puStack_470;
            auVar37._0_8_ = uStack_468;
        }
    }
    puStack_470 = auVar37._8_8_;
    uStack_468 = auVar37._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_4a8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar18 = auVar38._8_8_;
    uVar33 = auVar38._0_8_;
    *extraout_x18_08 = sym.perf_trace_lookup_sgl;
    pcStack_528 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_538 = *(iVar11 + 0x5e0);
    uVar10 = uVar32 & 0xffffffff;
    uVar22 = puVar16 & 0xffffffff;
    iStack_540 = 0;
    uStack_544 = 0;
    uVar5 = *puVar18;
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar33 + 0x78);
    uVar31 = uVar32;
    puStack_530 = &stack0xfffffffffffffb60;
    uStack_520 = uVar19;
    uStack_518 = uVar12;
    pcStack_508 = pcVar30;
    uStack_4f0 = puVar15 & 0xffffffff;
    uStack_4e8 = uVar21 & 0xffffffff;
    auStack_500 = auVar34;
    if ((*(uVar33 + 0x80) != 0) || (puVar17 = puVar16, pcVar30 = pcStack_510, *piVar4 != 0)) {
        puVar17 = &stack0xfffffffffffffabc;
        pcVar30 = (uVar5 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar30,&stack0xfffffffffffffac0);
        if (iVar11 != 0) {
            uVar31 = _hyp_assign_table & 0x3f;
            *(iStack_540 + 0xe8) = &stack0xfffffffffffffad0;
            *(iStack_540 + 0xf8) = &stack0xfffffffffffffab0;
            uVar21 = uVar5 * 8 + 0x1c;
            *(iStack_540 + 0x100) = ~(-1L << uVar31) & 0x800b30c;
            *(iStack_540 + 0x108) = 5;
            *(iVar11 + 0xc) = uVar5 << 0x13 | 0x1c;
            *(iVar11 + 0x10) = uVar21 | uVar5 << 0x13;
            *(iVar11 + 8) = *puVar18;
            if (*puVar18 != 0) {
                uVar31 = 0;
                puVar15 = puVar18 + 6;
                do {
                    iVar24 = uVar31 * 8;
                    uVar31 = uVar31 + 1;
                    *(iVar11 + 0x1c + iVar24) = *(puVar15 + -4);
                    *(iVar11 + (uVar21 & 0xfffc) + iVar24) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar31 < *puVar18);
            }
            puVar17 = uStack_544;
            *(iVar11 + 0x14) = puVar16;
            *(iVar11 + 0x18) = uVar32;
            uVar31 = uVar33;
            perf_trace_run_bpf_submit(iVar11,pcVar30,puVar17,uVar33,1,iStack_540,piVar4,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_538) {
        return;
    }
    auVar34 = __stack_chk_fail();
    iVar24 = auVar34._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_09 = 0x800b4ac;
    uStack_588 = 0x800b4ac;
    iVar11 = sp_el0;
    iStack_598 = *(iVar11 + 0x5e0);
    uVar21 = auVar34._8_8_ & 0xffffffff;
    piVar29 = *(iVar24 + 0x48);
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5c8 = 0;
    uStack_5c0 = 0;
    uVar19 = piVar29;
    puStack_590 = &stack0xfffffffffffffad0;
    piStack_580 = piVar4;
    uStack_568 = uVar22;
    uStack_560 = uVar10;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar31 = 0;
            puStack_570 = puVar18;
            uStack_558 = uVar33;
            event_triggers_call(iVar24,0,0,0);
            auVar38._8_8_ = puStack_570;
            auVar38._0_8_ = uStack_558;
        }
        puStack_570 = auVar38._8_8_;
        uStack_558 = auVar38._0_8_;
        piStack_5f8 = piVar4;
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 &&
            (uVar32 = trace_event_ignore_this_pid(iVar24), auVar38._8_8_ = puStack_570, auVar38._0_8_ = uStack_558,
            (uVar32 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_570 = auVar38._8_8_;
    uStack_558 = auVar38._0_8_;
    uVar5 = *puVar17;
    piVar29 = uVar5;
    puVar15 = piVar29 * 0x10 + 0x18;
    iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffa38,iVar24);
    auVar38._8_8_ = puStack_570;
    auVar38._0_8_ = uStack_558;
    piStack_5f8 = piVar29;
    if (iVar11 != 0) {
        uVar19 = uVar5 << 0x13;
        uVar32 = piVar29 * 8 + 0x18;
        *(iVar11 + 8) = auVar34._8_4_;
        *(iVar11 + 0x10) = uVar19 | 0x18;
        *(iVar11 + 0x14) = uVar32 | uVar19;
        *(iVar11 + 0xc) = *puVar17;
        if (*puVar17 != 0) {
            uVar33 = 0;
            puVar18 = puVar17 + 6;
            do {
                iVar25 = uVar33 * 8;
                uVar33 = uVar33 + 1;
                *(iVar11 + 0x18 + iVar25) = *(puVar18 + -4);
                *(iVar11 + (uVar32 & 0xfff8) + iVar25) = *puVar18;
                puVar18 = puVar18 + 8;
            } while (uVar33 < *puVar17);
        }
        trace_event_buffer_commit(&stack0xfffffffffffffa38);
        auVar38._8_8_ = puStack_570;
        auVar38._0_8_ = uStack_558;
    }
code_r0x0800b5bc:
    puStack_570 = auVar38._8_8_;
    uStack_558 = auVar38._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_598) {
        return;
    }
    auVar39 = __stack_chk_fail();
    uVar32 = auVar39._0_8_;
    *extraout_x18_10 = sym.perf_trace_map_mem_s2;
    pcStack_618 = sym.perf_trace_map_mem_s2;
    pcStack_610 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_628 = *(iVar11 + 0x5e0);
    iStack_630 = 0;
    uStack_634 = 0;
    uVar5 = *puVar15;
    iVar11 = tpidr_el1;
    piVar4 = iVar11 + *(uVar32 + 0x78);
    puStack_620 = &stack0xfffffffffffffa70;
    pcStack_600 = pcVar30;
    piStack_5f0 = piVar29;
    iStack_5e8 = iVar24;
    uStack_5e0 = uVar21;
    puStack_5d8 = puVar17;
    if ((*(uVar32 + 0x80) != 0) || (puVar18 = puVar15, *piVar4 != 0)) {
        puVar18 = &stack0xfffffffffffff9cc;
        iVar9 = (uVar5 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(iVar9,&stack0xfffffffffffff9d0,puVar18);
        if (iVar11 != 0) {
            uVar31 = _hyp_assign_table & 0x3f;
            *(iStack_630 + 0xe8) = &stack0xfffffffffffff9e0;
            *(iStack_630 + 0xf8) = &stack0xfffffffffffff9c0;
            uVar21 = uVar5 * 8 + 0x18;
            *(iStack_630 + 0x100) = ~(-1L << uVar31) & 0x800b5f4;
            *(iStack_630 + 0x108) = 5;
            *(iVar11 + 8) = auVar39._8_4_;
            *(iVar11 + 0x10) = uVar5 << 0x13 | 0x18;
            *(iVar11 + 0x14) = uVar21 | uVar5 << 0x13;
            *(iVar11 + 0xc) = *puVar15;
            if (*puVar15 != 0) {
                uVar31 = 0;
                puVar18 = puVar15 + 6;
                do {
                    iVar24 = uVar31 * 8;
                    uVar31 = uVar31 + 1;
                    *(iVar11 + 0x18 + iVar24) = *(puVar18 + -4);
                    *(iVar11 + (uVar21 & 0xfff8) + iVar24) = *puVar18;
                    puVar18 = puVar18 + 8;
                } while (uVar31 < *puVar15);
            }
            puVar18 = uStack_634;
            perf_trace_run_bpf_submit(iVar11,iVar9,puVar18,uVar32,1,iStack_630,piVar4,0);
            uVar31 = uVar32;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_628) {
        auVar34 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_11 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar34._0_8_,auVar34._8_8_,puVar18 & 0xffffffff,uVar31 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_alloc_req_msg_class @ 0x0800a494 (size 508) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800a7c4)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_alloc_req_msg_class(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    ulong uVar8;
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    char *pcVar14;
    uint16_t *puVar17;
    uint32_t *in_x2;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint64_t in_x3;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uchar *puVar23;
    uint16_t *puVar24;
    uint32_t *puVar25;
    int64_t iVar26;
    int64_t iVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    uint64_t uVar28;
    uint32_t uVar29;
    char *pcVar30;
    uint64_t uVar31;
    char *unaff_x22;
    int64_t *piVar32;
    uint64_t unaff_x23;
    code *pcVar33;
    ulong unaff_x30;
    uchar auVar34 [16];
    uchar auVar35 [16];
    uchar auVar36 [16];
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [12];
    uchar auStack_5a0 [12];
    uint32_t uStack_594;
    int64_t iStack_590;
    int64_t iStack_588;
    ulong ***pppuStack_580;
    code *pcStack_578;
    code *pcStack_570;
    code *pcStack_560;
    int64_t *piStack_558;
    int64_t *piStack_550;
    int64_t iStack_548;
    uint64_t uStack_540;
    uint32_t *puStack_538;
    ulong uStack_528;
    ulong uStack_520;
    ulong uStack_518;
    ulong uStack_510;
    ulong uStack_508;
    ulong uStack_500;
    int64_t iStack_4f8;
    ulong ***pppuStack_4f0;
    ulong uStack_4e8;
    int64_t *piStack_4e0;
    uint16_t *puStack_4d0;
    uint64_t uStack_4c8;
    uint64_t uStack_4c0;
    uint64_t uStack_4b8;
    uchar auStack_4b0 [12];
    uint32_t uStack_4a4;
    int64_t iStack_4a0;
    int64_t iStack_498;
    ulong ***pppuStack_490;
    code *pcStack_488;
    uint64_t uStack_480;
    ulong uStack_478;
    code *pcStack_470;
    code *pcStack_468;
    uchar auStack_460 [16];
    uint64_t uStack_450;
    uint64_t uStack_448;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    ulong uStack_418;
    ulong uStack_410;
    int64_t iStack_408;
    ulong ***pppuStack_400;
    ulong uStack_3f8;
    code *pcStack_3f0;
    uint64_t uStack_3e8;
    char *pcStack_3e0;
    int64_t *piStack_3d8;
    uint *puStack_3d0;
    uint64_t uStack_3c8;
    uchar auStack_3c0 [12];
    uint32_t uStack_3b4;
    int64_t iStack_3b0;
    int64_t iStack_3a8;
    ulong ***pppuStack_3a0;
    code *pcStack_398;
    ulong uStack_390;
    code *pcStack_380;
    uint64_t uStack_378;
    char *pcStack_370;
    uint64_t uStack_368;
    uchar auStack_360 [16];
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    ulong ***pppuStack_310;
    ulong uStack_308;
    int64_t *piStack_300;
    uint *puStack_2f0;
    uint64_t uStack_2e8;
    uchar auStack_2e0 [12];
    uint32_t uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong ***pppuStack_2c0;
    code *pcStack_2b8;
    ulong uStack_2b0;
    code *pcStack_2a0;
    uint64_t uStack_298;
    char *pcStack_290;
    uint64_t uStack_288;
    int64_t iStack_280;
    uint *puStack_278;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    ulong uStack_228;
    int64_t *piStack_220;
    uint *puStack_210;
    uint64_t uStack_208;
    uchar auStack_200 [12];
    uint32_t uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    uchar ***pppuStack_1e0;
    code *pcStack_1d8;
    code *pcStack_1d0;
    ulong uStack_1c0;
    uint64_t uStack_1b8;
    char *pcStack_1b0;
    uint64_t uStack_1a8;
    int64_t iStack_1a0;
    uint *puStack_198;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    ulong uStack_148;
    char *pcStack_140;
    uint *puStack_130;
    uint64_t uStack_128;
    uchar auStack_120 [12];
    int iStack_114;
    int64_t *piStack_110;
    uint32_t uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uint *puVar15;
    uint *puVar16;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    pcVar30 = *(arg1 + 0x48);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar20 = pcVar30;
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(arg1), (uVar10 & 1) == 0))))
        goto code_r0x0800a50c;
    }
    else {
code_r0x0800a50c:
        if (*(arg2 + 4) < 4) {
            pcVar30 = *(*(arg2 + 4) * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        pcVar30 = strlen(pcVar30);
        uVar29 = *(arg2 + 0x1c);
        unaff_x22 = uVar29;
        iVar9 = pcVar30 + 1;
        uVar20 = 0xd;
        if (*(arg2 + 0x14) != 0) {
            uVar20 = 7;
        }
        unaff_x23 = uVar20;
        iVar3 = uVar20 + iVar9;
        iVar4 = iVar3 + uVar29 * 2;
        in_x2 = iVar4 + uVar29 + 0x28;
        iVar11 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (iVar11 != 0) {
            uVar1 = pcVar30 + 0x29;
            pcVar30 = uVar1;
            *(iVar11 + 0xc) = iVar9 * 0x10000 | 0x28;
            unaff_x22 = "(null)";
            *(iVar11 + 0x18) = uVar1 | uVar20 << 0x10;
            *(iVar11 + 0x20) = iVar3 + 0x28U | uVar29 << 0x11;
            *(iVar11 + 0x24) = iVar4 + 0x28U | uVar29 << 0x10;
            *(iVar11 + 8) = *arg2;
            pcVar14 = unaff_x22;
            if (*(arg2 + 4) < 4) {
                pcVar14 = *(*(arg2 + 4) * 8 + 0x8006aa0);
            }
            strcpy(iVar11 + 0x28,pcVar14);
            *(iVar11 + 0x10) = *(arg2 + 0xc);
            pcVar14 = "ION_MEM_TYPE";
            if (*(arg2 + 0x14) != 0) {
                pcVar14 = unaff_x22;
            }
            strcpy(iVar11 + (uVar1 & 0xffff),pcVar14);
            *(iVar11 + 0x1c) = *(arg2 + 0x1c);
            if (*(arg2 + 0x1c) != 0) {
                uVar6 = *(iVar11 + 0x20);
                uVar10 = 0;
                uVar7 = *(iVar11 + 0x24);
                puVar23 = arg2 + 0x22;
                do {
                    *(iVar11 + uVar6 + uVar10 * 2) = *(puVar23 + -2);
                    *(iVar11 + uVar7 + uVar10) = *puVar23;
                    uVar10 = uVar10 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar10 < *(arg2 + 0x1c));
            }
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar15 = auVar34._8_8_;
    uVar10 = auVar34._0_8_;
    *extraout_x18 = sym.perf_trace_alloc_req_msg_class;
    pcStack_e8 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    if (puVar15[1] < 4) {
        pcVar14 = *(puVar15[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar14 = "(null)";
    }
    puStack_f0 = &stack0xffffffffffffffb0;
    uVar12 = strlen(pcVar14);
    uVar20 = puVar15[7];
    iVar11 = tpidr_el1;
    iVar9 = 0xd;
    if (puVar15[5] != 0) {
        iVar9 = 7;
    }
    piStack_110 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piStack_110 != 0)) {
        uVar29 = uVar12 + 1;
        unaff_x22 = uVar29;
        in_x2 = &uStack_104;
        uVar1 = iVar9 + uVar29 + uVar20 * 2;
        pcVar30 = uVar1;
        iStack_114 = (uVar20 + uVar1 + 0x33 & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(iStack_114,&iStack_100);
        if (uVar13 != 0) {
            uVar2 = uVar12 + 0x29;
            unaff_x22 = uVar2;
            uVar21 = _hyp_assign_table & 0x3f;
            *(iStack_100 + 0xf8) = auStack_120;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0x100) = ~(-1L << uVar21) & 0x800a690;
            *(iStack_100 + 0x108) = 5;
            *(uVar13 + 0xc) = uVar29 * 0x10000 | 0x28;
            pcVar30 = "(null)";
            *(uVar13 + 0x18) = uVar2 | iVar9 << 0x10;
            *(uVar13 + 0x20) = iVar9 + uVar29 + 0x28 | uVar20 << 0x11;
            *(uVar13 + 0x24) = uVar1 + 0x28 | uVar20 << 0x10;
            *(uVar13 + 8) = *puVar15;
            pcVar14 = pcVar30;
            if (puVar15[1] < 4) {
                pcVar14 = *(puVar15[1] * 8 + 0x8006aa0);
            }
            strcpy(uVar13 + 0x28,pcVar14);
            *(uVar13 + 0x10) = *(puVar15 + 3);
            pcVar14 = "ION_MEM_TYPE";
            if (puVar15[5] != 0) {
                pcVar14 = pcVar30;
            }
            strcpy(uVar13 + (uVar2 & 0xffff),pcVar14);
            *(uVar13 + 0x1c) = puVar15[7];
            if (puVar15[7] != 0) {
                uVar6 = *(uVar13 + 0x20);
                uVar21 = 0;
                uVar7 = *(uVar13 + 0x24);
                puVar23 = puVar15 + 0x22;
                do {
                    *(uVar13 + uVar6 + uVar21 * 2) = *(puVar23 + -2);
                    *(uVar13 + uVar7 + uVar21) = *puVar23;
                    uVar21 = uVar21 + 1;
                    puVar23 = puVar23 + 4;
                } while (uVar21 < puVar15[7]);
            }
            in_x2 = uStack_104;
            in_x3 = uVar10;
            perf_trace_run_bpf_submit(uVar13,iStack_114,in_x2,uVar10,1,iStack_100,piStack_110,0);
            unaff_x23 = uVar13;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar35 = __stack_chk_fail();
    puVar16 = auVar35._8_8_;
    iVar26 = auVar35._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_00 = 0x800a8f4;
    uStack_148 = 0x800a8f4;
    iVar11 = sp_el0;
    iStack_158 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar26 + 0x48);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar29 = uVar13;
    ppuStack_150 = &puStack_f0;
    pcStack_140 = pcVar30;
    iStack_1a0 = iVar26;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_130 = puVar15;
            uStack_128 = uVar10;
            event_triggers_call(iVar26,0);
            auVar34._8_8_ = puStack_130;
            auVar34._0_8_ = uStack_128;
        }
        puStack_130 = auVar34._8_8_;
        uStack_128 = auVar34._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar10 = trace_event_ignore_this_pid(iVar26), auVar34._8_8_ = puStack_130, auVar34._0_8_ = uStack_128,
            (uVar10 & 1) == 0)))) goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        puStack_130 = auVar34._8_8_;
        uStack_128 = auVar34._0_8_;
        if (puVar16[1] < 4) {
            pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar13 = uVar29;
        in_x2 = uVar29 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_188,iVar26);
        auVar34._8_8_ = puStack_130;
        auVar34._0_8_ = uStack_128;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar29 * 0x10000 | 0x14;
            if (puVar16[1] < 4) {
                pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x14,pcVar30);
            *(iVar11 + 0xc) = puVar16[3];
            *(iVar11 + 0x10) = *puVar16;
            trace_event_buffer_commit(&uStack_188);
            auVar34._8_8_ = puStack_130;
            auVar34._0_8_ = uStack_128;
            iStack_1a0 = iVar11;
        }
    }
    puStack_130 = auVar34._8_8_;
    uStack_128 = auVar34._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_158) {
        return;
    }
    auVar35 = __stack_chk_fail();
    puVar15 = auVar35._8_8_;
    uVar10 = auVar35._0_8_;
    *extraout_x18_01 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_1d8 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_1d0 = sym.perf_trace_alloc_req_msg_class;
    iVar11 = sp_el0;
    iStack_1e8 = *(iVar11 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    if (puVar15[1] < 4) {
        pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_1e0 = &ppuStack_150;
    uStack_1c0 = uVar12;
    uStack_1b8 = unaff_x23;
    pcStack_1b0 = unaff_x22;
    uStack_1a8 = uVar13;
    puStack_198 = puVar16;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar5 != 0)) {
        in_x2 = &uStack_1f4;
        unaff_x22 = (uVar12 + 0x20U & 0xfffffff8) - 4;
        uVar21 = perf_trace_buf_alloc(unaff_x22,&iStack_1f0);
        uVar13 = _hyp_assign_table;
        if (uVar21 != 0) {
            *(iStack_1f0 + 0xe8) = &pppuStack_1e0;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800aa3c;
            *(iStack_1f0 + 0x108) = 5;
            *(uVar21 + 8) = uVar12 * 0x10000 + 0x10014;
            if (puVar15[1] < 4) {
                pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar21 + 0x14,pcVar30);
            in_x2 = uStack_1f4;
            *(uVar21 + 0xc) = puVar15[3];
            *(uVar21 + 0x10) = *puVar15;
            in_x3 = uVar10;
            perf_trace_run_bpf_submit(uVar21,unaff_x22,in_x2,uVar10,1,iStack_1f0,piVar5,0);
            unaff_x23 = uVar21;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar16 = auVar34._8_8_;
    iVar26 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_02 = 0x800abe4;
    uStack_228 = 0x800abe4;
    iVar11 = sp_el0;
    iStack_238 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar26 + 0x48);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar29 = uVar13;
    pppuStack_230 = &pppuStack_1e0;
    piStack_220 = piVar5;
    iStack_280 = iVar26;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_210 = puVar15;
            uStack_208 = uVar10;
            event_triggers_call(iVar26,0);
            auVar35._8_8_ = puStack_210;
            auVar35._0_8_ = uStack_208;
        }
        puStack_210 = auVar35._8_8_;
        uStack_208 = auVar35._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar10 = trace_event_ignore_this_pid(iVar26), auVar35._8_8_ = puStack_210, auVar35._0_8_ = uStack_208,
            (uVar10 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_210 = auVar35._8_8_;
        uStack_208 = auVar35._0_8_;
        if (puVar16[1] < 4) {
            pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar13 = uVar29;
        in_x2 = uVar29 + 0x18;
        iVar11 = trace_event_buffer_reserve(&uStack_268,iVar26);
        auVar35._8_8_ = puStack_210;
        auVar35._0_8_ = uStack_208;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar29 * 0x10000 | 0x18;
            *(iVar11 + 8) = *puVar16;
            if (puVar16[1] < 4) {
                pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x18,pcVar30);
            *(iVar11 + 0x10) = puVar16[3];
            *(iVar11 + 0x14) = puVar16[4];
            trace_event_buffer_commit(&uStack_268);
            auVar35._8_8_ = puStack_210;
            auVar35._0_8_ = uStack_208;
            iStack_280 = iVar11;
        }
    }
    puStack_210 = auVar35._8_8_;
    uStack_208 = auVar35._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_238) {
        return;
    }
    auVar36 = __stack_chk_fail();
    puVar15 = auVar36._8_8_;
    uVar10 = auVar36._0_8_;
    *extraout_x18_03 = sym.perf_trace_alloc_resp_class;
    pcStack_2b8 = sym.perf_trace_alloc_resp_class;
    pcStack_2a0 = sym.perf_trace_relinquish_req_msg_class;
    iVar11 = sp_el0;
    iStack_2c8 = *(iVar11 + 0x5e0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    if (puVar15[1] < 4) {
        pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_2c0 = &pppuStack_230;
    uStack_2b0 = uVar12;
    uStack_298 = unaff_x23;
    pcStack_290 = unaff_x22;
    uStack_288 = uVar13;
    puStack_278 = puVar16;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar5 != 0)) {
        in_x2 = &uStack_2d4;
        unaff_x22 = (uVar12 + 0x24U & 0xfffffff8) - 4;
        uVar21 = perf_trace_buf_alloc(unaff_x22,&iStack_2d0);
        uVar13 = _hyp_assign_table;
        if (uVar21 != 0) {
            *(iStack_2d0 + 0xe8) = &pppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800ad34;
            *(iStack_2d0 + 0x108) = 5;
            *(uVar21 + 0xc) = uVar12 * 0x10000 + 0x10018;
            *(uVar21 + 8) = *puVar15;
            if (puVar15[1] < 4) {
                pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar21 + 0x18,pcVar30);
            in_x2 = uStack_2d4;
            *(uVar21 + 0x10) = puVar15[3];
            *(uVar21 + 0x14) = puVar15[4];
            in_x3 = uVar10;
            perf_trace_run_bpf_submit(uVar21,unaff_x22,in_x2,uVar10,1,iStack_2d0,piVar5,0);
            unaff_x23 = uVar21;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2c8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar16 = auVar34._8_8_;
    iVar26 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x800aee4;
    uStack_308 = 0x800aee4;
    iVar11 = sp_el0;
    iStack_318 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar26 + 0x48);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar29 = uVar13;
    pppuStack_310 = &pppuStack_2c0;
    piStack_300 = piVar5;
    if ((uVar29 >> 8 & 1) == 0) {
        if ((uVar29 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_2f0 = puVar15;
            uStack_2e8 = uVar10;
            event_triggers_call(iVar26,0);
            auVar36._8_8_ = puStack_2f0;
            auVar36._0_8_ = uStack_2e8;
        }
        puStack_2f0 = auVar36._8_8_;
        uStack_2e8 = auVar36._0_8_;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar10 = trace_event_ignore_this_pid(iVar26), auVar36._8_8_ = puStack_2f0, auVar36._0_8_ = uStack_2e8,
            (uVar10 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_2f0 = auVar36._8_8_;
        uStack_2e8 = auVar36._0_8_;
        if (puVar16[1] < 4) {
            pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar30 = "(null)";
        }
        iVar9 = strlen(pcVar30);
        uVar29 = iVar9 + 1;
        uVar13 = uVar29;
        in_x2 = uVar29 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_348,iVar26);
        auVar36._8_8_ = puStack_2f0;
        auVar36._0_8_ = uStack_2e8;
        if (iVar11 != 0) {
            *(iVar11 + 0xc) = uVar29 * 0x10000 | 0x10;
            *(iVar11 + 8) = *puVar16;
            if (puVar16[1] < 4) {
                pcVar30 = *(puVar16[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(iVar11 + 0x10,pcVar30);
            trace_event_buffer_commit(&uStack_348);
            auVar36._8_8_ = puStack_2f0;
            auVar36._0_8_ = uStack_2e8;
        }
    }
    puStack_2f0 = auVar36._8_8_;
    uStack_2e8 = auVar36._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_318) {
        return;
    }
    auVar37 = __stack_chk_fail();
    puVar15 = auVar37._8_8_;
    uVar10 = auVar37._0_8_;
    *extraout_x18_05 = sym.perf_trace_relinquish_resp_class;
    pcStack_398 = sym.perf_trace_relinquish_resp_class;
    pcStack_380 = sym.perf_trace_alloc_resp_class;
    iVar11 = sp_el0;
    iStack_3a8 = *(iVar11 + 0x5e0);
    iStack_3b0 = 0;
    uStack_3b4 = 0;
    if (puVar15[1] < 4) {
        pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar30 = "(null)";
    }
    pppuStack_3a0 = &pppuStack_310;
    uStack_390 = uVar12;
    uStack_378 = unaff_x23;
    pcStack_370 = unaff_x22;
    uStack_368 = uVar13;
    auStack_360 = auVar34;
    uVar12 = strlen(pcVar30);
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar5 != 0)) {
        in_x2 = &uStack_3b4;
        unaff_x22 = (uVar12 + 0x1cU & 0xfffffff8) - 4;
        uVar21 = perf_trace_buf_alloc(unaff_x22,&iStack_3b0);
        uVar13 = _hyp_assign_table;
        if (uVar21 != 0) {
            *(iStack_3b0 + 0xe8) = &pppuStack_3a0;
            *(iStack_3b0 + 0xf8) = auStack_3c0;
            *(iStack_3b0 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x800b020;
            *(iStack_3b0 + 0x108) = 5;
            *(uVar21 + 0xc) = uVar12 * 0x10000 + 0x10010;
            *(uVar21 + 8) = *puVar15;
            if (puVar15[1] < 4) {
                pcVar30 = *(puVar15[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar30 = "(null)";
            }
            strcpy(uVar21 + 0x10,pcVar30);
            in_x2 = uStack_3b4;
            in_x3 = uVar10;
            perf_trace_run_bpf_submit(uVar21,unaff_x22,in_x2,uVar10,1,iStack_3b0,piVar5,0);
            unaff_x23 = uVar21;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    puVar17 = auVar34._8_8_;
    iVar26 = auVar34._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_06 = 0x800b1c0;
    uStack_3f8 = 0x800b1c0;
    pcStack_3f0 = sym.perf_trace_relinquish_resp_class;
    iVar11 = sp_el0;
    iStack_408 = *(iVar11 + 0x5e0);
    pcVar33 = *(iVar26 + 0x48);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uVar29 = pcVar33;
    uVar13 = in_x3;
    pppuStack_400 = &pppuStack_3a0;
    uStack_3e8 = unaff_x23;
    pcStack_3e0 = unaff_x22;
    piStack_3d8 = piVar5;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar18 = in_x2;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar13 = 0;
            puStack_3d0 = puVar15;
            uStack_3c8 = uVar10;
            event_triggers_call(iVar26,0);
            auVar37._8_8_ = puStack_3d0;
            auVar37._0_8_ = uStack_3c8;
        }
        puStack_3d0 = auVar37._8_8_;
        uStack_3c8 = auVar37._0_8_;
        pcStack_470 = sym.perf_trace_relinquish_resp_class;
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 ||
            (uVar10 = trace_event_ignore_this_pid(iVar26), auVar37._8_8_ = puStack_3d0, auVar37._0_8_ = uStack_3c8,
            (uVar10 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_3d0 = auVar37._8_8_;
        uStack_3c8 = auVar37._0_8_;
        uVar6 = *puVar17;
        pcVar33 = uVar6;
        puVar18 = pcVar33 * 0x10 + 0x1c;
        iVar11 = trace_event_buffer_reserve(&uStack_438,iVar26);
        auVar37._8_8_ = puStack_3d0;
        auVar37._0_8_ = uStack_3c8;
        pcStack_470 = pcVar33;
        if (iVar11 != 0) {
            uVar29 = uVar6 << 0x13;
            uVar10 = pcVar33 * 8 + 0x1c;
            *(iVar11 + 0xc) = uVar29 | 0x1c;
            *(iVar11 + 0x10) = uVar10 | uVar29;
            *(iVar11 + 8) = *puVar17;
            if (*puVar17 != 0) {
                uVar21 = 0;
                puVar24 = puVar17 + 6;
                do {
                    iVar26 = uVar21 * 8;
                    uVar21 = uVar21 + 1;
                    *(iVar11 + 0x1c + iVar26) = *(puVar24 + -4);
                    *(iVar11 + (uVar10 & 0xfffc) + iVar26) = *puVar24;
                    puVar24 = puVar24 + 8;
                } while (uVar21 < *puVar17);
            }
            *(iVar11 + 0x14) = in_x2;
            *(iVar11 + 0x18) = in_x3;
            trace_event_buffer_commit(&uStack_438);
            auVar37._8_8_ = puStack_3d0;
            auVar37._0_8_ = uStack_3c8;
        }
    }
    puStack_3d0 = auVar37._8_8_;
    uStack_3c8 = auVar37._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_408) {
        return;
    }
    auVar38 = __stack_chk_fail();
    puVar17 = auVar38._8_8_;
    uVar21 = auVar38._0_8_;
    *extraout_x18_07 = sym.perf_trace_lookup_sgl;
    pcStack_488 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_498 = *(iVar11 + 0x5e0);
    uVar28 = uVar13 & 0xffffffff;
    uVar31 = puVar18 & 0xffffffff;
    iStack_4a0 = 0;
    uStack_4a4 = 0;
    uVar6 = *puVar17;
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar21 + 0x78);
    uVar10 = uVar13;
    pppuStack_490 = &pppuStack_400;
    uStack_480 = uVar20;
    uStack_478 = uVar12;
    pcStack_468 = pcVar33;
    uStack_450 = in_x2 & 0xffffffff;
    uStack_448 = in_x3 & 0xffffffff;
    auStack_460 = auVar34;
    if ((*(uVar21 + 0x80) != 0) || (puVar19 = puVar18, pcVar33 = pcStack_470, *piVar5 != 0)) {
        puVar19 = &uStack_4a4;
        pcVar33 = (uVar6 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar33,&iStack_4a0);
        if (iVar11 != 0) {
            uVar22 = _hyp_assign_table & 0x3f;
            *(iStack_4a0 + 0xe8) = &pppuStack_490;
            *(iStack_4a0 + 0xf8) = auStack_4b0;
            uVar10 = uVar6 * 8 + 0x1c;
            *(iStack_4a0 + 0x100) = ~(-1L << uVar22) & 0x800b30c;
            *(iStack_4a0 + 0x108) = 5;
            *(iVar11 + 0xc) = uVar6 << 0x13 | 0x1c;
            *(iVar11 + 0x10) = uVar10 | uVar6 << 0x13;
            *(iVar11 + 8) = *puVar17;
            if (*puVar17 != 0) {
                uVar22 = 0;
                puVar24 = puVar17 + 6;
                do {
                    iVar26 = uVar22 * 8;
                    uVar22 = uVar22 + 1;
                    *(iVar11 + 0x1c + iVar26) = *(puVar24 + -4);
                    *(iVar11 + (uVar10 & 0xfffc) + iVar26) = *puVar24;
                    puVar24 = puVar24 + 8;
                } while (uVar22 < *puVar17);
            }
            puVar19 = uStack_4a4;
            *(iVar11 + 0x14) = puVar18;
            *(iVar11 + 0x18) = uVar13;
            uVar10 = uVar21;
            perf_trace_run_bpf_submit(iVar11,pcVar33,puVar19,uVar21,1,iStack_4a0,piVar5,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_498) {
        return;
    }
    auVar34 = __stack_chk_fail();
    iVar26 = auVar34._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_08 = 0x800b4ac;
    uStack_4e8 = 0x800b4ac;
    iVar11 = sp_el0;
    iStack_4f8 = *(iVar11 + 0x5e0);
    uVar13 = auVar34._8_8_ & 0xffffffff;
    piVar32 = *(iVar26 + 0x48);
    uStack_508 = 0;
    uStack_500 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_528 = 0;
    uStack_520 = 0;
    uVar20 = piVar32;
    pppuStack_4f0 = &pppuStack_490;
    piStack_4e0 = piVar5;
    uStack_4c8 = uVar31;
    uStack_4c0 = uVar28;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar18 = puVar19;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar10 = 0;
            puStack_4d0 = puVar17;
            uStack_4b8 = uVar21;
            event_triggers_call(iVar26,0,0,0);
            auVar38._8_8_ = puStack_4d0;
            auVar38._0_8_ = uStack_4b8;
        }
        puStack_4d0 = auVar38._8_8_;
        uStack_4b8 = auVar38._0_8_;
        piStack_558 = piVar5;
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 &&
            (uVar21 = trace_event_ignore_this_pid(iVar26), auVar38._8_8_ = puStack_4d0, auVar38._0_8_ = uStack_4b8,
            (uVar21 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_4d0 = auVar38._8_8_;
    uStack_4b8 = auVar38._0_8_;
    uVar20 = *puVar19;
    piVar32 = uVar20;
    puVar18 = piVar32 * 0x10 + 0x18;
    iVar11 = trace_event_buffer_reserve(&uStack_528,iVar26);
    auVar38._8_8_ = puStack_4d0;
    auVar38._0_8_ = uStack_4b8;
    piStack_558 = piVar32;
    if (iVar11 != 0) {
        uVar20 = uVar20 << 0x13;
        uVar21 = piVar32 * 8 + 0x18;
        *(iVar11 + 8) = auVar34._8_4_;
        *(iVar11 + 0x10) = uVar20 | 0x18;
        *(iVar11 + 0x14) = uVar21 | uVar20;
        *(iVar11 + 0xc) = *puVar19;
        if (*puVar19 != 0) {
            uVar28 = 0;
            puVar25 = puVar19 + 3;
            do {
                iVar27 = uVar28 * 8;
                uVar28 = uVar28 + 1;
                *(iVar11 + 0x18 + iVar27) = *(puVar25 + -2);
                *(iVar11 + (uVar21 & 0xfff8) + iVar27) = *puVar25;
                puVar25 = puVar25 + 4;
            } while (uVar28 < *puVar19);
        }
        trace_event_buffer_commit(&uStack_528);
        auVar38._8_8_ = puStack_4d0;
        auVar38._0_8_ = uStack_4b8;
    }
code_r0x0800b5bc:
    puStack_4d0 = auVar38._8_8_;
    uStack_4b8 = auVar38._0_8_;
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_4f8) {
        return;
    }
    auVar39 = __stack_chk_fail();
    uVar21 = auVar39._0_8_;
    *extraout_x18_09 = sym.perf_trace_map_mem_s2;
    pcStack_578 = sym.perf_trace_map_mem_s2;
    pcStack_570 = sym.perf_trace_lookup_sgl;
    iVar11 = sp_el0;
    iStack_588 = *(iVar11 + 0x5e0);
    iStack_590 = 0;
    uStack_594 = 0;
    uVar6 = *puVar18;
    iVar11 = tpidr_el1;
    piVar5 = iVar11 + *(uVar21 + 0x78);
    pppuStack_580 = &pppuStack_4f0;
    pcStack_560 = pcVar33;
    piStack_550 = piVar32;
    iStack_548 = iVar26;
    uStack_540 = uVar13;
    puStack_538 = puVar19;
    if ((*(uVar21 + 0x80) != 0) || (puVar19 = puVar18, *piVar5 != 0)) {
        puVar19 = &uStack_594;
        iVar9 = (uVar6 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar11 = perf_trace_buf_alloc(iVar9,&iStack_590,puVar19);
        if (iVar11 != 0) {
            uVar13 = _hyp_assign_table & 0x3f;
            *(iStack_590 + 0xe8) = &pppuStack_580;
            *(iStack_590 + 0xf8) = auStack_5a0;
            uVar10 = uVar6 * 8 + 0x18;
            *(iStack_590 + 0x100) = ~(-1L << uVar13) & 0x800b5f4;
            *(iStack_590 + 0x108) = 5;
            *(iVar11 + 8) = auVar39._8_4_;
            *(iVar11 + 0x10) = uVar6 << 0x13 | 0x18;
            *(iVar11 + 0x14) = uVar10 | uVar6 << 0x13;
            *(iVar11 + 0xc) = *puVar18;
            if (*puVar18 != 0) {
                uVar13 = 0;
                puVar19 = puVar18 + 3;
                do {
                    iVar26 = uVar13 * 8;
                    uVar13 = uVar13 + 1;
                    *(iVar11 + 0x18 + iVar26) = *(puVar19 + -2);
                    *(iVar11 + (uVar10 & 0xfff8) + iVar26) = *puVar19;
                    puVar19 = puVar19 + 4;
                } while (uVar13 < *puVar18);
            }
            puVar19 = uStack_594;
            perf_trace_run_bpf_submit(iVar11,iVar9,puVar19,uVar21,1,iStack_590,piVar5,0);
            uVar10 = uVar21;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_588) {
        auVar34 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_10 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar34._0_8_,auVar34._8_8_,puVar19 & 0xffffffff,uVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_alloc_req_msg_class @ 0x0800a690 (size 624) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_alloc_req_msg_class(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    ulong uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    char *pcVar9;
    int64_t iVar10;
    int iVar8;
    ulong uVar11;
    uint16_t *in_x2;
    uint16_t *puVar14;
    uint16_t *puVar15;
    uint16_t *puVar16;
    uint64_t in_x3;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uchar *puVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    uint64_t uVar24;
    uint32_t uVar25;
    char *unaff_x21;
    uint64_t uVar26;
    uint32_t uVar27;
    uint64_t unaff_x22;
    int64_t *piVar28;
    int64_t unaff_x23;
    code *pcVar29;
    uint64_t unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    uchar auVar34 [12];
    uchar auStack_510 [12];
    uint32_t uStack_504;
    int64_t iStack_500;
    int64_t iStack_4f8;
    uchar *puStack_4f0;
    code *pcStack_4e8;
    code *pcStack_4e0;
    code *pcStack_4d0;
    int64_t *piStack_4c8;
    int64_t *piStack_4c0;
    int64_t iStack_4b8;
    uint64_t uStack_4b0;
    uint16_t *puStack_4a8;
    ulong uStack_498;
    ulong uStack_490;
    ulong uStack_488;
    ulong uStack_480;
    ulong uStack_478;
    ulong uStack_470;
    int64_t iStack_468;
    uchar *puStack_460;
    ulong uStack_458;
    int64_t *piStack_450;
    uint16_t *puStack_440;
    uint64_t uStack_438;
    uint64_t uStack_430;
    uint64_t uStack_428;
    uchar auStack_420 [12];
    uint32_t uStack_414;
    int64_t iStack_410;
    int64_t iStack_408;
    uchar *puStack_400;
    code *pcStack_3f8;
    uint64_t uStack_3f0;
    ulong uStack_3e8;
    code *pcStack_3e0;
    code *pcStack_3d8;
    uchar auStack_3d0 [16];
    uint64_t uStack_3c0;
    uint64_t uStack_3b8;
    ulong uStack_3a8;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    int64_t iStack_378;
    uchar *puStack_370;
    ulong uStack_368;
    code *pcStack_360;
    int64_t iStack_358;
    uint64_t uStack_350;
    int64_t *piStack_348;
    uint *puStack_340;
    uint64_t uStack_338;
    uchar auStack_330 [12];
    uint32_t uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    uchar *puStack_310;
    code *pcStack_308;
    ulong uStack_300;
    code *pcStack_2f0;
    int64_t iStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    uchar auStack_2d0 [16];
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    uchar *puStack_280;
    ulong uStack_278;
    int64_t *piStack_270;
    uint *puStack_260;
    uint64_t uStack_258;
    uchar auStack_250 [12];
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    uchar *puStack_230;
    code *pcStack_228;
    ulong uStack_220;
    code *pcStack_210;
    int64_t iStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    int64_t iStack_1f0;
    uint *puStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    ulong uStack_198;
    int64_t *piStack_190;
    uint *puStack_180;
    uint64_t uStack_178;
    uchar auStack_170 [12];
    uint32_t uStack_164;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    char *pcStack_b0;
    int64_t iStack_a0;
    int64_t iStack_98;
    uchar auStack_90 [12];
    int iStack_84;
    int64_t *piStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    uint *puVar12;
    uint *puVar13;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    if (*(arg2 + 4) < 4) {
        pcVar9 = *(*(arg2 + 4) * 8 + 0x8006aa0);
    }
    else {
        pcVar9 = "(null)";
    }
    iVar7 = strlen(pcVar9);
    uVar27 = *(arg2 + 0x1c);
    iVar10 = tpidr_el1;
    iVar8 = 0xd;
    if (*(arg2 + 0x14) != 0) {
        iVar8 = 7;
    }
    piStack_80 = iVar10 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piStack_80 != 0)) {
        uVar25 = iVar7 + 1;
        unaff_x22 = uVar25;
        in_x2 = &stack0xffffffffffffff8c;
        uVar2 = iVar8 + uVar25 + uVar27 * 2;
        unaff_x21 = uVar2;
        iStack_84 = (uVar27 + uVar2 + 0x33 & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iStack_84,&stack0xffffffffffffff90);
        if (iVar10 != 0) {
            uVar1 = iVar7 + 0x29;
            unaff_x22 = uVar1;
            uVar20 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff70;
            uVar17 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar17 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0x100) = uVar17;
            *(iStack_70 + 0x108) = 5;
            *(iVar10 + 0xc) = uVar25 * 0x10000 | 0x28;
            unaff_x21 = "(null)";
            *(iVar10 + 0x18) = uVar1 | iVar8 << 0x10;
            *(iVar10 + 0x20) = iVar8 + uVar25 + 0x28 | uVar27 << 0x11;
            *(iVar10 + 0x24) = uVar2 + 0x28 | uVar27 << 0x10;
            *(iVar10 + 8) = *arg2;
            pcVar9 = unaff_x21;
            if (*(arg2 + 4) < 4) {
                pcVar9 = *(*(arg2 + 4) * 8 + 0x8006aa0);
            }
            strcpy(iVar10 + 0x28,pcVar9);
            *(iVar10 + 0x10) = *(arg2 + 0xc);
            pcVar9 = "ION_MEM_TYPE";
            if (*(arg2 + 0x14) != 0) {
                pcVar9 = unaff_x21;
            }
            strcpy(iVar10 + (uVar1 & 0xffff),pcVar9);
            *(iVar10 + 0x1c) = *(arg2 + 0x1c);
            if (*(arg2 + 0x1c) != 0) {
                uVar4 = *(iVar10 + 0x20);
                uVar17 = 0;
                uVar5 = *(iVar10 + 0x24);
                puVar21 = arg2 + 0x22;
                do {
                    *(iVar10 + uVar4 + uVar17 * 2) = *(puVar21 + -2);
                    *(iVar10 + uVar5 + uVar17) = *puVar21;
                    uVar17 = uVar17 + 1;
                    puVar21 = puVar21 + 4;
                } while (uVar17 < *(arg2 + 0x1c));
            }
            in_x2 = uStack_74;
            in_x3 = arg1;
            perf_trace_run_bpf_submit(iVar10,iStack_84,in_x2,arg1,1,iStack_70,piStack_80,0);
            unaff_x23 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    auVar30 = __stack_chk_fail();
    puVar12 = auVar30._8_8_;
    iVar22 = auVar30._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18 = 0x800a8f4;
    uStack_b8 = 0x800a8f4;
    iVar10 = sp_el0;
    iStack_c8 = *(iVar10 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar25 = *(iVar22 + 0x48);
    puStack_c0 = &stack0xffffffffffffffa0;
    pcStack_b0 = unaff_x21;
    iStack_a0 = arg2;
    iStack_98 = arg1;
    if ((uVar25 >> 8 & 1) == 0) {
        if ((uVar25 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(iVar22,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar22), (uVar17 & 1) == 0))))
        goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        if (puVar12[1] < 4) {
            pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar9 = "(null)";
        }
        iVar8 = strlen(pcVar9);
        in_x2 = iVar8 + 1 + 0x14;
        iVar10 = trace_event_buffer_reserve(&stack0xffffffffffffff08,iVar22);
        if (iVar10 != 0) {
            *(iVar10 + 8) = (iVar8 + 1) * 0x10000 | 0x14;
            if (puVar12[1] < 4) {
                pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x14,pcVar9);
            *(iVar10 + 0xc) = puVar12[3];
            *(iVar10 + 0x10) = *puVar12;
            trace_event_buffer_commit(&stack0xffffffffffffff08);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    puVar12 = auVar30._8_8_;
    uVar17 = auVar30._0_8_;
    *extraout_x18_00 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_148 = sym.perf_trace_relinquish_req_msg_class;
    iVar10 = sp_el0;
    iStack_158 = *(iVar10 + 0x5e0);
    iStack_160 = 0;
    uStack_164 = 0;
    if (puVar12[1] < 4) {
        pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar9 = "(null)";
    }
    puStack_150 = &stack0xffffffffffffff40;
    uVar11 = strlen(pcVar9);
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar3 != 0)) {
        in_x2 = &stack0xfffffffffffffe9c;
        unaff_x22 = (uVar11 + 0x20U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffea0);
        uVar20 = _hyp_assign_table;
        if (iVar10 != 0) {
            *(iStack_160 + 0xe8) = &stack0xfffffffffffffeb0;
            *(iStack_160 + 0xf8) = &stack0xfffffffffffffe90;
            *(iStack_160 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x800aa3c;
            *(iStack_160 + 0x108) = 5;
            *(iVar10 + 8) = uVar11 * 0x10000 + 0x10014;
            if (puVar12[1] < 4) {
                pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x14,pcVar9);
            in_x2 = uStack_164;
            *(iVar10 + 0xc) = puVar12[3];
            *(iVar10 + 0x10) = *puVar12;
            in_x3 = uVar17;
            perf_trace_run_bpf_submit(iVar10,unaff_x22,in_x2,uVar17,1,iStack_160,piVar3,0);
            unaff_x23 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_158) {
        return;
    }
    auVar31 = __stack_chk_fail();
    puVar13 = auVar31._8_8_;
    iVar22 = auVar31._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_01 = 0x800abe4;
    uStack_198 = 0x800abe4;
    iVar10 = sp_el0;
    iStack_1a8 = *(iVar10 + 0x5e0);
    uVar20 = *(iVar22 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar25 = uVar20;
    puStack_1a0 = &stack0xfffffffffffffeb0;
    piStack_190 = piVar3;
    iStack_1f0 = iVar22;
    if ((uVar25 >> 8 & 1) == 0) {
        if ((uVar25 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_180 = puVar12;
            uStack_178 = uVar17;
            event_triggers_call(iVar22,0);
            auVar30._8_8_ = puStack_180;
            auVar30._0_8_ = uStack_178;
        }
        puStack_180 = auVar30._8_8_;
        uStack_178 = auVar30._0_8_;
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 ||
            (uVar17 = trace_event_ignore_this_pid(iVar22), auVar30._8_8_ = puStack_180, auVar30._0_8_ = uStack_178,
            (uVar17 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_180 = auVar30._8_8_;
        uStack_178 = auVar30._0_8_;
        if (puVar13[1] < 4) {
            pcVar9 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar9 = "(null)";
        }
        iVar8 = strlen(pcVar9);
        uVar25 = iVar8 + 1;
        uVar20 = uVar25;
        in_x2 = uVar25 + 0x18;
        iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffe28,iVar22);
        auVar30._8_8_ = puStack_180;
        auVar30._0_8_ = uStack_178;
        if (iVar10 != 0) {
            *(iVar10 + 0xc) = uVar25 * 0x10000 | 0x18;
            *(iVar10 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar9 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x18,pcVar9);
            *(iVar10 + 0x10) = puVar13[3];
            *(iVar10 + 0x14) = puVar13[4];
            trace_event_buffer_commit(&stack0xfffffffffffffe28);
            auVar30._8_8_ = puStack_180;
            auVar30._0_8_ = uStack_178;
            iStack_1f0 = iVar10;
        }
    }
    puStack_180 = auVar30._8_8_;
    uStack_178 = auVar30._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    puVar12 = auVar31._8_8_;
    uVar17 = auVar31._0_8_;
    *extraout_x18_02 = sym.perf_trace_alloc_resp_class;
    pcStack_228 = sym.perf_trace_alloc_resp_class;
    pcStack_210 = sym.perf_trace_relinquish_req_msg_class;
    iVar10 = sp_el0;
    iStack_238 = *(iVar10 + 0x5e0);
    iStack_240 = 0;
    uStack_244 = 0;
    if (puVar12[1] < 4) {
        pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar9 = "(null)";
    }
    puStack_230 = &stack0xfffffffffffffe60;
    uStack_220 = uVar11;
    iStack_208 = unaff_x23;
    uStack_200 = unaff_x22;
    uStack_1f8 = uVar20;
    puStack_1e8 = puVar13;
    uVar11 = strlen(pcVar9);
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar3 != 0)) {
        in_x2 = &stack0xfffffffffffffdbc;
        unaff_x22 = (uVar11 + 0x24U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffdc0);
        uVar20 = _hyp_assign_table;
        if (iVar10 != 0) {
            *(iStack_240 + 0xe8) = &stack0xfffffffffffffdd0;
            *(iStack_240 + 0xf8) = &stack0xfffffffffffffdb0;
            *(iStack_240 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x800ad34;
            *(iStack_240 + 0x108) = 5;
            *(iVar10 + 0xc) = uVar11 * 0x10000 + 0x10018;
            *(iVar10 + 8) = *puVar12;
            if (puVar12[1] < 4) {
                pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x18,pcVar9);
            in_x2 = uStack_244;
            *(iVar10 + 0x10) = puVar12[3];
            *(iVar10 + 0x14) = puVar12[4];
            in_x3 = uVar17;
            perf_trace_run_bpf_submit(iVar10,unaff_x22,in_x2,uVar17,1,iStack_240,piVar3,0);
            unaff_x23 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_238) {
        return;
    }
    auVar30 = __stack_chk_fail();
    puVar13 = auVar30._8_8_;
    iVar22 = auVar30._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x800aee4;
    uStack_278 = 0x800aee4;
    iVar10 = sp_el0;
    iStack_288 = *(iVar10 + 0x5e0);
    uVar20 = *(iVar22 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar25 = uVar20;
    puStack_280 = &stack0xfffffffffffffdd0;
    piStack_270 = piVar3;
    if ((uVar25 >> 8 & 1) == 0) {
        if ((uVar25 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_260 = puVar12;
            uStack_258 = uVar17;
            event_triggers_call(iVar22,0);
            auVar31._8_8_ = puStack_260;
            auVar31._0_8_ = uStack_258;
        }
        puStack_260 = auVar31._8_8_;
        uStack_258 = auVar31._0_8_;
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 ||
            (uVar17 = trace_event_ignore_this_pid(iVar22), auVar31._8_8_ = puStack_260, auVar31._0_8_ = uStack_258,
            (uVar17 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_260 = auVar31._8_8_;
        uStack_258 = auVar31._0_8_;
        if (puVar13[1] < 4) {
            pcVar9 = *(puVar13[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar9 = "(null)";
        }
        iVar8 = strlen(pcVar9);
        uVar25 = iVar8 + 1;
        uVar20 = uVar25;
        in_x2 = uVar25 + 0x10;
        iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffd48,iVar22);
        auVar31._8_8_ = puStack_260;
        auVar31._0_8_ = uStack_258;
        if (iVar10 != 0) {
            *(iVar10 + 0xc) = uVar25 * 0x10000 | 0x10;
            *(iVar10 + 8) = *puVar13;
            if (puVar13[1] < 4) {
                pcVar9 = *(puVar13[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x10,pcVar9);
            trace_event_buffer_commit(&stack0xfffffffffffffd48);
            auVar31._8_8_ = puStack_260;
            auVar31._0_8_ = uStack_258;
        }
    }
    puStack_260 = auVar31._8_8_;
    uStack_258 = auVar31._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_288) {
        return;
    }
    auVar32 = __stack_chk_fail();
    puVar12 = auVar32._8_8_;
    uVar17 = auVar32._0_8_;
    *extraout_x18_04 = sym.perf_trace_relinquish_resp_class;
    pcStack_308 = sym.perf_trace_relinquish_resp_class;
    pcStack_2f0 = sym.perf_trace_alloc_resp_class;
    iVar10 = sp_el0;
    iStack_318 = *(iVar10 + 0x5e0);
    iStack_320 = 0;
    uStack_324 = 0;
    if (puVar12[1] < 4) {
        pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar9 = "(null)";
    }
    puStack_310 = &stack0xfffffffffffffd80;
    uStack_300 = uVar11;
    iStack_2e8 = unaff_x23;
    uStack_2e0 = unaff_x22;
    uStack_2d8 = uVar20;
    auStack_2d0 = auVar30;
    uVar11 = strlen(pcVar9);
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar3 != 0)) {
        in_x2 = &stack0xfffffffffffffcdc;
        unaff_x22 = (uVar11 + 0x1cU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffce0);
        uVar20 = _hyp_assign_table;
        if (iVar10 != 0) {
            *(iStack_320 + 0xe8) = &stack0xfffffffffffffcf0;
            *(iStack_320 + 0xf8) = &stack0xfffffffffffffcd0;
            *(iStack_320 + 0x100) = ~(-1L << (uVar20 & 0x3f)) & 0x800b020;
            *(iStack_320 + 0x108) = 5;
            *(iVar10 + 0xc) = uVar11 * 0x10000 + 0x10010;
            *(iVar10 + 8) = *puVar12;
            if (puVar12[1] < 4) {
                pcVar9 = *(puVar12[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar9 = "(null)";
            }
            strcpy(iVar10 + 0x10,pcVar9);
            in_x2 = uStack_324;
            in_x3 = uVar17;
            perf_trace_run_bpf_submit(iVar10,unaff_x22,in_x2,uVar17,1,iStack_320,piVar3,0);
            unaff_x23 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_318) {
        return;
    }
    auVar30 = __stack_chk_fail();
    puVar16 = auVar30._8_8_;
    iVar22 = auVar30._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_05 = 0x800b1c0;
    uStack_368 = 0x800b1c0;
    pcStack_360 = sym.perf_trace_relinquish_resp_class;
    iVar10 = sp_el0;
    iStack_378 = *(iVar10 + 0x5e0);
    pcVar29 = *(iVar22 + 0x48);
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uVar25 = pcVar29;
    uVar20 = in_x3;
    puStack_370 = &stack0xfffffffffffffcf0;
    iStack_358 = unaff_x23;
    uStack_350 = unaff_x22;
    piStack_348 = piVar3;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar14 = in_x2;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar20 = 0;
            puStack_340 = puVar12;
            uStack_338 = uVar17;
            event_triggers_call(iVar22,0);
            auVar32._8_8_ = puStack_340;
            auVar32._0_8_ = uStack_338;
        }
        puStack_340 = auVar32._8_8_;
        uStack_338 = auVar32._0_8_;
        pcStack_3e0 = sym.perf_trace_relinquish_resp_class;
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 ||
            (uVar17 = trace_event_ignore_this_pid(iVar22), auVar32._8_8_ = puStack_340, auVar32._0_8_ = uStack_338,
            (uVar17 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_340 = auVar32._8_8_;
        uStack_338 = auVar32._0_8_;
        uVar4 = *puVar16;
        pcVar29 = uVar4;
        puVar14 = pcVar29 * 0x10 + 0x1c;
        iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffc58,iVar22);
        auVar32._8_8_ = puStack_340;
        auVar32._0_8_ = uStack_338;
        pcStack_3e0 = pcVar29;
        if (iVar10 != 0) {
            uVar25 = uVar4 << 0x13;
            uVar17 = pcVar29 * 8 + 0x1c;
            *(iVar10 + 0xc) = uVar25 | 0x1c;
            *(iVar10 + 0x10) = uVar17 | uVar25;
            *(iVar10 + 8) = *puVar16;
            if (*puVar16 != 0) {
                uVar18 = 0;
                puVar15 = puVar16 + 6;
                do {
                    iVar22 = uVar18 * 8;
                    uVar18 = uVar18 + 1;
                    *(iVar10 + 0x1c + iVar22) = *(puVar15 + -4);
                    *(iVar10 + (uVar17 & 0xfffc) + iVar22) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar18 < *puVar16);
            }
            *(iVar10 + 0x14) = in_x2;
            *(iVar10 + 0x18) = in_x3;
            trace_event_buffer_commit(&stack0xfffffffffffffc58);
            auVar32._8_8_ = puStack_340;
            auVar32._0_8_ = uStack_338;
        }
    }
    puStack_340 = auVar32._8_8_;
    uStack_338 = auVar32._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_378) {
        return;
    }
    auVar33 = __stack_chk_fail();
    puVar16 = auVar33._8_8_;
    uVar18 = auVar33._0_8_;
    *extraout_x18_06 = sym.perf_trace_lookup_sgl;
    pcStack_3f8 = sym.perf_trace_lookup_sgl;
    iVar10 = sp_el0;
    iStack_408 = *(iVar10 + 0x5e0);
    uVar24 = uVar20 & 0xffffffff;
    uVar26 = puVar14 & 0xffffffff;
    iStack_410 = 0;
    uStack_414 = 0;
    uVar4 = *puVar16;
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar18 + 0x78);
    uVar17 = uVar20;
    puStack_400 = &stack0xfffffffffffffc90;
    uStack_3f0 = uVar27;
    uStack_3e8 = uVar11;
    pcStack_3d8 = pcVar29;
    uStack_3c0 = in_x2 & 0xffffffff;
    uStack_3b8 = in_x3 & 0xffffffff;
    auStack_3d0 = auVar30;
    if ((*(uVar18 + 0x80) != 0) || (puVar15 = puVar14, pcVar29 = pcStack_3e0, *piVar3 != 0)) {
        puVar15 = &stack0xfffffffffffffbec;
        pcVar29 = (uVar4 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar10 = perf_trace_buf_alloc(pcVar29,&stack0xfffffffffffffbf0);
        if (iVar10 != 0) {
            uVar19 = _hyp_assign_table & 0x3f;
            *(iStack_410 + 0xe8) = &stack0xfffffffffffffc00;
            *(iStack_410 + 0xf8) = &stack0xfffffffffffffbe0;
            uVar17 = uVar4 * 8 + 0x1c;
            *(iStack_410 + 0x100) = ~(-1L << uVar19) & 0x800b30c;
            *(iStack_410 + 0x108) = 5;
            *(iVar10 + 0xc) = uVar4 << 0x13 | 0x1c;
            *(iVar10 + 0x10) = uVar17 | uVar4 << 0x13;
            *(iVar10 + 8) = *puVar16;
            if (*puVar16 != 0) {
                uVar19 = 0;
                puVar15 = puVar16 + 6;
                do {
                    iVar22 = uVar19 * 8;
                    uVar19 = uVar19 + 1;
                    *(iVar10 + 0x1c + iVar22) = *(puVar15 + -4);
                    *(iVar10 + (uVar17 & 0xfffc) + iVar22) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar19 < *puVar16);
            }
            puVar15 = uStack_414;
            *(iVar10 + 0x14) = puVar14;
            *(iVar10 + 0x18) = uVar20;
            uVar17 = uVar18;
            perf_trace_run_bpf_submit(iVar10,pcVar29,puVar15,uVar18,1,iStack_410,piVar3,0);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_408) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar22 = auVar30._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18_07 = 0x800b4ac;
    uStack_458 = 0x800b4ac;
    iVar10 = sp_el0;
    iStack_468 = *(iVar10 + 0x5e0);
    uVar20 = auVar30._8_8_ & 0xffffffff;
    piVar28 = *(iVar22 + 0x48);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_488 = 0;
    uStack_480 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    uVar27 = piVar28;
    puStack_460 = &stack0xfffffffffffffc00;
    piStack_450 = piVar3;
    uStack_438 = uVar26;
    uStack_430 = uVar24;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar17 = 0;
            puStack_440 = puVar16;
            uStack_428 = uVar18;
            event_triggers_call(iVar22,0,0,0);
            auVar33._8_8_ = puStack_440;
            auVar33._0_8_ = uStack_428;
        }
        puStack_440 = auVar33._8_8_;
        uStack_428 = auVar33._0_8_;
        piStack_4c8 = piVar3;
        if (((uVar27 >> 6 & 1) != 0) ||
           (((uVar27 >> 9 & 1) != 0 &&
            (uVar18 = trace_event_ignore_this_pid(iVar22), auVar33._8_8_ = puStack_440, auVar33._0_8_ = uStack_428,
            (uVar18 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_440 = auVar33._8_8_;
    uStack_428 = auVar33._0_8_;
    uVar4 = *puVar15;
    piVar28 = uVar4;
    puVar14 = piVar28 * 0x10 + 0x18;
    iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffb68,iVar22);
    auVar33._8_8_ = puStack_440;
    auVar33._0_8_ = uStack_428;
    piStack_4c8 = piVar28;
    if (iVar10 != 0) {
        uVar27 = uVar4 << 0x13;
        uVar18 = piVar28 * 8 + 0x18;
        *(iVar10 + 8) = auVar30._8_4_;
        *(iVar10 + 0x10) = uVar27 | 0x18;
        *(iVar10 + 0x14) = uVar18 | uVar27;
        *(iVar10 + 0xc) = *puVar15;
        if (*puVar15 != 0) {
            uVar24 = 0;
            puVar16 = puVar15 + 6;
            do {
                iVar23 = uVar24 * 8;
                uVar24 = uVar24 + 1;
                *(iVar10 + 0x18 + iVar23) = *(puVar16 + -4);
                *(iVar10 + (uVar18 & 0xfff8) + iVar23) = *puVar16;
                puVar16 = puVar16 + 8;
            } while (uVar24 < *puVar15);
        }
        trace_event_buffer_commit(&stack0xfffffffffffffb68);
        auVar33._8_8_ = puStack_440;
        auVar33._0_8_ = uStack_428;
    }
code_r0x0800b5bc:
    puStack_440 = auVar33._8_8_;
    uStack_428 = auVar33._0_8_;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_468) {
        return;
    }
    auVar34 = __stack_chk_fail();
    uVar18 = auVar34._0_8_;
    *extraout_x18_08 = sym.perf_trace_map_mem_s2;
    pcStack_4e8 = sym.perf_trace_map_mem_s2;
    pcStack_4e0 = sym.perf_trace_lookup_sgl;
    iVar10 = sp_el0;
    iStack_4f8 = *(iVar10 + 0x5e0);
    iStack_500 = 0;
    uStack_504 = 0;
    uVar4 = *puVar14;
    iVar10 = tpidr_el1;
    piVar3 = iVar10 + *(uVar18 + 0x78);
    puStack_4f0 = &stack0xfffffffffffffba0;
    pcStack_4d0 = pcVar29;
    piStack_4c0 = piVar28;
    iStack_4b8 = iVar22;
    uStack_4b0 = uVar20;
    puStack_4a8 = puVar15;
    if ((*(uVar18 + 0x80) != 0) || (puVar16 = puVar14, *piVar3 != 0)) {
        puVar16 = &stack0xfffffffffffffafc;
        iVar8 = (uVar4 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar10 = perf_trace_buf_alloc(iVar8,&stack0xfffffffffffffb00,puVar16);
        if (iVar10 != 0) {
            uVar20 = _hyp_assign_table & 0x3f;
            *(iStack_500 + 0xe8) = &stack0xfffffffffffffb10;
            *(iStack_500 + 0xf8) = &stack0xfffffffffffffaf0;
            uVar17 = uVar4 * 8 + 0x18;
            *(iStack_500 + 0x100) = ~(-1L << uVar20) & 0x800b5f4;
            *(iStack_500 + 0x108) = 5;
            *(iVar10 + 8) = auVar34._8_4_;
            *(iVar10 + 0x10) = uVar4 << 0x13 | 0x18;
            *(iVar10 + 0x14) = uVar17 | uVar4 << 0x13;
            *(iVar10 + 0xc) = *puVar14;
            if (*puVar14 != 0) {
                uVar20 = 0;
                puVar16 = puVar14 + 6;
                do {
                    iVar22 = uVar20 * 8;
                    uVar20 = uVar20 + 1;
                    *(iVar10 + 0x18 + iVar22) = *(puVar16 + -4);
                    *(iVar10 + (uVar17 & 0xfff8) + iVar22) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar20 < *puVar14);
            }
            puVar16 = uStack_504;
            perf_trace_run_bpf_submit(iVar10,iVar8,puVar16,uVar18,1,iStack_500,piVar3,0);
            uVar17 = uVar18;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_4f8) {
        auVar30 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_09 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar30._0_8_,auVar30._8_8_,puVar16 & 0xffffffff,uVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_relinquish_req_msg_class @ 0x0800a900 (size 316) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800ab30)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_relinquish_req_msg_class(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong uVar8;
    uint16_t *puVar11;
    uint32_t *in_x2;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint64_t in_x3;
    uint64_t uVar14;
    uint64_t uVar15;
    uint16_t *puVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x22;
    int64_t *piVar24;
    int64_t unaff_x23;
    code *pcVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auVar29 [16];
    uchar auVar30 [12];
    uchar auStack_480 [12];
    uint32_t uStack_474;
    int64_t iStack_470;
    int64_t iStack_468;
    ulong ***pppuStack_460;
    code *pcStack_458;
    code *pcStack_450;
    code *pcStack_440;
    int64_t *piStack_438;
    int64_t *piStack_430;
    int64_t iStack_428;
    uint64_t uStack_420;
    uint32_t *puStack_418;
    ulong uStack_408;
    ulong uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    ulong uStack_3e8;
    ulong uStack_3e0;
    int64_t iStack_3d8;
    ulong ***pppuStack_3d0;
    ulong uStack_3c8;
    int64_t *piStack_3c0;
    uint16_t *puStack_3b0;
    uint64_t uStack_3a8;
    uint64_t uStack_3a0;
    uint64_t uStack_398;
    uchar auStack_390 [12];
    uint32_t uStack_384;
    int64_t iStack_380;
    int64_t iStack_378;
    ulong ***pppuStack_370;
    code *pcStack_368;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    int64_t iStack_2e8;
    ulong ***pppuStack_2e0;
    ulong uStack_2d8;
    code *pcStack_2d0;
    int64_t iStack_2c8;
    uint64_t uStack_2c0;
    int64_t *piStack_2b8;
    uint *puStack_2b0;
    uint64_t uStack_2a8;
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    ulong uStack_270;
    code *pcStack_260;
    int64_t iStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uchar auStack_240 [16];
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong ***pppuStack_1f0;
    ulong uStack_1e8;
    int64_t *piStack_1e0;
    uint *puStack_1d0;
    uint64_t uStack_1c8;
    uchar auStack_1c0 [12];
    uint32_t uStack_1b4;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    uchar ***pppuStack_1a0;
    code *pcStack_198;
    ulong uStack_190;
    code *pcStack_180;
    int64_t iStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    int64_t iStack_160;
    uint *puStack_158;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    int64_t *piStack_100;
    uint *puStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    uint *puVar9;
    uint *puVar10;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar21 = *(arg1 + 0x48);
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) == 0))))
        goto code_r0x0800a970;
    }
    else {
code_r0x0800a970:
        if (*(arg2 + 4) < 4) {
            pcVar6 = *(*(arg2 + 4) * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        in_x2 = iVar4 + 1 + 0x14;
        iVar7 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar7 != 0) {
            *(iVar7 + 8) = (iVar4 + 1) * 0x10000 | 0x14;
            if (*(arg2 + 4) < 4) {
                pcVar6 = *(*(arg2 + 4) * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x14,pcVar6);
            *(iVar7 + 0xc) = *(arg2 + 0xc);
            *(iVar7 + 0x10) = *arg2;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar9 = auVar26._8_8_;
    uVar5 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_relinquish_req_msg_class;
    pcStack_b8 = sym.perf_trace_relinquish_req_msg_class;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    uVar8 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_d4;
        unaff_x22 = (uVar8 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_d0);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800aa3c;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 8) = uVar8 * 0x10000 + 0x10014;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x14,pcVar6);
            in_x2 = uStack_d4;
            *(iVar7 + 0xc) = puVar9[3];
            *(iVar7 + 0x10) = *puVar9;
            in_x3 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar5,1,iStack_d0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar10 = auVar27._8_8_;
    iVar18 = auVar27._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_00 = 0x800abe4;
    uStack_108 = 0x800abe4;
    iVar7 = sp_el0;
    iStack_118 = *(iVar7 + 0x5e0);
    uVar22 = *(iVar18 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar21 = uVar22;
    ppuStack_110 = &puStack_c0;
    piStack_100 = piVar1;
    iStack_160 = iVar18;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_f0 = puVar9;
            uStack_e8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar26._8_8_ = puStack_f0;
            auVar26._0_8_ = uStack_e8;
        }
        puStack_f0 = auVar26._8_8_;
        uStack_e8 = auVar26._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar26._8_8_ = puStack_f0, auVar26._0_8_ = uStack_e8,
            (uVar5 & 1) == 0)))) goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        puStack_f0 = auVar26._8_8_;
        uStack_e8 = auVar26._0_8_;
        if (puVar10[1] < 4) {
            pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        uVar21 = iVar4 + 1;
        uVar22 = uVar21;
        in_x2 = uVar21 + 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_148,iVar18);
        auVar26._8_8_ = puStack_f0;
        auVar26._0_8_ = uStack_e8;
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = uVar21 * 0x10000 | 0x18;
            *(iVar7 + 8) = *puVar10;
            if (puVar10[1] < 4) {
                pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar6);
            *(iVar7 + 0x10) = puVar10[3];
            *(iVar7 + 0x14) = puVar10[4];
            trace_event_buffer_commit(&uStack_148);
            auVar26._8_8_ = puStack_f0;
            auVar26._0_8_ = uStack_e8;
            iStack_160 = iVar7;
        }
    }
    puStack_f0 = auVar26._8_8_;
    uStack_e8 = auVar26._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_118) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar9 = auVar27._8_8_;
    uVar5 = auVar27._0_8_;
    *extraout_x18_01 = sym.perf_trace_alloc_resp_class;
    pcStack_198 = sym.perf_trace_alloc_resp_class;
    pcStack_180 = sym.perf_trace_relinquish_req_msg_class;
    iVar7 = sp_el0;
    iStack_1a8 = *(iVar7 + 0x5e0);
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    pppuStack_1a0 = &ppuStack_110;
    uStack_190 = uVar8;
    iStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    uStack_168 = uVar22;
    puStack_158 = puVar10;
    uVar8 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_1b4;
        unaff_x22 = (uVar8 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_1b0);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_1b0 + 0xe8) = &pppuStack_1a0;
            *(iStack_1b0 + 0xf8) = auStack_1c0;
            *(iStack_1b0 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800ad34;
            *(iStack_1b0 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar8 * 0x10000 + 0x10018;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar6);
            in_x2 = uStack_1b4;
            *(iVar7 + 0x10) = puVar9[3];
            *(iVar7 + 0x14) = puVar9[4];
            in_x3 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar5,1,iStack_1b0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar10 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_02 = 0x800aee4;
    uStack_1e8 = 0x800aee4;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    uVar22 = *(iVar18 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar21 = uVar22;
    pppuStack_1f0 = &pppuStack_1a0;
    piStack_1e0 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_1d0 = puVar9;
            uStack_1c8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar27._8_8_ = puStack_1d0;
            auVar27._0_8_ = uStack_1c8;
        }
        puStack_1d0 = auVar27._8_8_;
        uStack_1c8 = auVar27._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar27._8_8_ = puStack_1d0, auVar27._0_8_ = uStack_1c8,
            (uVar5 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_1d0 = auVar27._8_8_;
        uStack_1c8 = auVar27._0_8_;
        if (puVar10[1] < 4) {
            pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        uVar21 = iVar4 + 1;
        uVar22 = uVar21;
        in_x2 = uVar21 + 0x10;
        iVar7 = trace_event_buffer_reserve(&uStack_228,iVar18);
        auVar27._8_8_ = puStack_1d0;
        auVar27._0_8_ = uStack_1c8;
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = uVar21 * 0x10000 | 0x10;
            *(iVar7 + 8) = *puVar10;
            if (puVar10[1] < 4) {
                pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            trace_event_buffer_commit(&uStack_228);
            auVar27._8_8_ = puStack_1d0;
            auVar27._0_8_ = uStack_1c8;
        }
    }
    puStack_1d0 = auVar27._8_8_;
    uStack_1c8 = auVar27._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar28 = __stack_chk_fail();
    puVar9 = auVar28._8_8_;
    uVar5 = auVar28._0_8_;
    *extraout_x18_03 = sym.perf_trace_relinquish_resp_class;
    pcStack_278 = sym.perf_trace_relinquish_resp_class;
    pcStack_260 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    pcVar25 = sym.perf_trace_relinquish_resp_class;
    iStack_288 = *(iVar7 + 0x5e0);
    iStack_290 = 0;
    uStack_294 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    pppuStack_280 = &pppuStack_1f0;
    uStack_270 = uVar8;
    iStack_258 = unaff_x23;
    uStack_250 = unaff_x22;
    uStack_248 = uVar22;
    auStack_240 = auVar26;
    iVar4 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_294;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_290);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_290 + 0xe8) = &pppuStack_280;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800b020;
            *(iStack_290 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            in_x2 = uStack_294;
            in_x3 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar5,1,iStack_290,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_288) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar11 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x800b1c0;
    uStack_2d8 = 0x800b1c0;
    pcStack_2d0 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_2e8 = *(iVar7 + 0x5e0);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uVar21 = *(iVar18 + 0x48);
    uVar22 = in_x3;
    pppuStack_2e0 = &pppuStack_280;
    iStack_2c8 = unaff_x23;
    uStack_2c0 = unaff_x22;
    piStack_2b8 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar12 = in_x2;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar22 = 0;
            puStack_2b0 = puVar9;
            uStack_2a8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar28._8_8_ = puStack_2b0;
            auVar28._0_8_ = uStack_2a8;
        }
        puStack_2b0 = auVar28._8_8_;
        uStack_2a8 = auVar28._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar28._8_8_ = puStack_2b0, auVar28._0_8_ = uStack_2a8,
            (uVar5 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_2b0 = auVar28._8_8_;
        uStack_2a8 = auVar28._0_8_;
        uVar2 = *puVar11;
        pcVar25 = uVar2;
        puVar12 = pcVar25 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_318,iVar18);
        auVar28._8_8_ = puStack_2b0;
        auVar28._0_8_ = uStack_2a8;
        if (iVar7 != 0) {
            uVar21 = uVar2 << 0x13;
            uVar5 = pcVar25 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar21 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar21;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar14 = 0;
                puVar16 = puVar11 + 6;
                do {
                    iVar18 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar14 < *puVar11);
            }
            *(iVar7 + 0x14) = in_x2;
            *(iVar7 + 0x18) = in_x3;
            trace_event_buffer_commit(&uStack_318);
            auVar28._8_8_ = puStack_2b0;
            auVar28._0_8_ = uStack_2a8;
        }
    }
    puStack_2b0 = auVar28._8_8_;
    uStack_2a8 = auVar28._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_2e8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    puVar11 = auVar29._8_8_;
    uVar14 = auVar29._0_8_;
    *extraout_x18_05 = sym.perf_trace_lookup_sgl;
    pcStack_368 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_378 = *(iVar7 + 0x5e0);
    uVar20 = uVar22 & 0xffffffff;
    uVar23 = puVar12 & 0xffffffff;
    iStack_380 = 0;
    uStack_384 = 0;
    uVar2 = *puVar11;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    uVar5 = uVar22;
    pppuStack_370 = &pppuStack_2e0;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_384;
        pcVar25 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar25,&iStack_380);
        if (iVar7 != 0) {
            uVar15 = _hyp_assign_table & 0x3f;
            *(iStack_380 + 0xe8) = &pppuStack_370;
            *(iStack_380 + 0xf8) = auStack_390;
            uVar5 = uVar2 * 8 + 0x1c;
            *(iStack_380 + 0x100) = ~(-1L << uVar15) & 0x800b30c;
            *(iStack_380 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar15 = 0;
                puVar16 = puVar11 + 6;
                do {
                    iVar18 = uVar15 * 8;
                    uVar15 = uVar15 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar15 < *puVar11);
            }
            puVar13 = uStack_384;
            *(iVar7 + 0x14) = puVar12;
            *(iVar7 + 0x18) = uVar22;
            uVar5 = uVar14;
            perf_trace_run_bpf_submit(iVar7,pcVar25,puVar13,uVar14,1,iStack_380,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_378) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar18 = auVar26._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_06 = 0x800b4ac;
    uStack_3c8 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_3d8 = *(iVar7 + 0x5e0);
    uVar22 = auVar26._8_8_ & 0xffffffff;
    piVar24 = *(iVar18 + 0x48);
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    uVar21 = piVar24;
    pppuStack_3d0 = &pppuStack_370;
    piStack_3c0 = piVar1;
    uStack_3a8 = uVar23;
    uStack_3a0 = uVar20;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar5 = 0;
            puStack_3b0 = puVar11;
            uStack_398 = uVar14;
            event_triggers_call(iVar18,0,0,0);
            auVar29._8_8_ = puStack_3b0;
            auVar29._0_8_ = uStack_398;
        }
        puStack_3b0 = auVar29._8_8_;
        uStack_398 = auVar29._0_8_;
        piStack_438 = piVar1;
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 &&
            (uVar14 = trace_event_ignore_this_pid(iVar18), auVar29._8_8_ = puStack_3b0, auVar29._0_8_ = uStack_398,
            (uVar14 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_3b0 = auVar29._8_8_;
    uStack_398 = auVar29._0_8_;
    uVar21 = *puVar13;
    piVar24 = uVar21;
    puVar12 = piVar24 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_408,iVar18);
    auVar29._8_8_ = puStack_3b0;
    auVar29._0_8_ = uStack_398;
    piStack_438 = piVar24;
    if (iVar7 != 0) {
        uVar21 = uVar21 << 0x13;
        uVar14 = piVar24 * 8 + 0x18;
        *(iVar7 + 8) = auVar26._8_4_;
        *(iVar7 + 0x10) = uVar21 | 0x18;
        *(iVar7 + 0x14) = uVar14 | uVar21;
        *(iVar7 + 0xc) = *puVar13;
        if (*puVar13 != 0) {
            uVar20 = 0;
            puVar17 = puVar13 + 3;
            do {
                iVar19 = uVar20 * 8;
                uVar20 = uVar20 + 1;
                *(iVar7 + 0x18 + iVar19) = *(puVar17 + -2);
                *(iVar7 + (uVar14 & 0xfff8) + iVar19) = *puVar17;
                puVar17 = puVar17 + 4;
            } while (uVar20 < *puVar13);
        }
        trace_event_buffer_commit(&uStack_408);
        auVar29._8_8_ = puStack_3b0;
        auVar29._0_8_ = uStack_398;
    }
code_r0x0800b5bc:
    puStack_3b0 = auVar29._8_8_;
    uStack_398 = auVar29._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_3d8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar14 = auVar30._0_8_;
    *extraout_x18_07 = sym.perf_trace_map_mem_s2;
    pcStack_458 = sym.perf_trace_map_mem_s2;
    pcStack_450 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_468 = *(iVar7 + 0x5e0);
    iStack_470 = 0;
    uStack_474 = 0;
    uVar2 = *puVar12;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    pppuStack_460 = &pppuStack_3d0;
    pcStack_440 = pcVar25;
    piStack_430 = piVar24;
    iStack_428 = iVar18;
    uStack_420 = uVar22;
    puStack_418 = puVar13;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_474;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_470,puVar13);
        if (iVar7 != 0) {
            uVar22 = _hyp_assign_table & 0x3f;
            *(iStack_470 + 0xe8) = &pppuStack_460;
            *(iStack_470 + 0xf8) = auStack_480;
            uVar5 = uVar2 * 8 + 0x18;
            *(iStack_470 + 0x100) = ~(-1L << uVar22) & 0x800b5f4;
            *(iStack_470 + 0x108) = 5;
            *(iVar7 + 8) = auVar30._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar12;
            if (*puVar12 != 0) {
                uVar22 = 0;
                puVar13 = puVar12 + 3;
                do {
                    iVar18 = uVar22 * 8;
                    uVar22 = uVar22 + 1;
                    *(iVar7 + 0x18 + iVar18) = *(puVar13 + -2);
                    *(iVar7 + (uVar5 & 0xfff8) + iVar18) = *puVar13;
                    puVar13 = puVar13 + 4;
                } while (uVar22 < *puVar12);
            }
            puVar13 = uStack_474;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar13,uVar14,1,iStack_470,piVar1,0);
            uVar5 = uVar14;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_468) {
        auVar26 = __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_08 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_,puVar13 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_relinquish_req_msg_class @ 0x0800aa3c (size 436) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_relinquish_req_msg_class(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint16_t *in_x2;
    uint16_t *puVar11;
    uint16_t *puVar12;
    uint16_t *puVar13;
    uint64_t in_x3;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t unaff_x22;
    int64_t *piVar22;
    int64_t unaff_x23;
    code *pcVar23;
    uint64_t unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uchar auVar26 [16];
    uchar auVar27 [12];
    uchar auStack_410 [12];
    uint32_t uStack_404;
    int64_t iStack_400;
    int64_t iStack_3f8;
    uchar *puStack_3f0;
    code *pcStack_3e8;
    code *pcStack_3e0;
    code *pcStack_3d0;
    int64_t *piStack_3c8;
    int64_t *piStack_3c0;
    int64_t iStack_3b8;
    uint64_t uStack_3b0;
    uint16_t *puStack_3a8;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    ulong uStack_378;
    ulong uStack_370;
    int64_t iStack_368;
    uchar *puStack_360;
    ulong uStack_358;
    int64_t *piStack_350;
    uint16_t *puStack_340;
    uint64_t uStack_338;
    uint64_t uStack_330;
    uint64_t uStack_328;
    uchar auStack_320 [12];
    uint32_t uStack_314;
    int64_t iStack_310;
    int64_t iStack_308;
    uchar *puStack_300;
    code *pcStack_2f8;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    uchar *puStack_270;
    ulong uStack_268;
    code *pcStack_260;
    int64_t iStack_258;
    uint64_t uStack_250;
    int64_t *piStack_248;
    uint *puStack_240;
    uint64_t uStack_238;
    uchar auStack_230 [12];
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    uchar *puStack_210;
    code *pcStack_208;
    ulong uStack_200;
    code *pcStack_1f0;
    int64_t iStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [16];
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    ulong uStack_178;
    int64_t *piStack_170;
    uint *puStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    ulong uStack_120;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    uint *puVar9;
    uint *puVar10;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    if (*(arg2 + 4) < 4) {
        pcVar5 = *(*(arg2 + 4) * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    uVar6 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xffffffffffffff9c;
        unaff_x22 = (uVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&stack0xffffffffffffffa0);
        uVar8 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar16 = -1L << (uVar8 & 0x3f);
            uVar8 = (~uVar16 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar16 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar8;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 8) = uVar6 * 0x10000 + 0x10014;
            if (*(arg2 + 4) < 4) {
                pcVar5 = *(*(arg2 + 4) * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x14,pcVar5);
            in_x2 = uStack_64;
            *(iVar7 + 0xc) = *(arg2 + 0xc);
            *(iVar7 + 0x10) = *arg2;
            in_x3 = arg1;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,arg1,1,iStack_60,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar9 = auVar24._8_8_;
    iVar17 = auVar24._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x800abe4;
    uStack_98 = 0x800abe4;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar20 = *(iVar17 + 0x48);
    puStack_a0 = &stack0xffffffffffffffb0;
    piStack_90 = piVar1;
    iStack_80 = arg2;
    iStack_78 = arg1;
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(iVar17,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(iVar17), (uVar8 & 1) == 0))))
        goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        if (puVar9[1] < 4) {
            pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar5 = "(null)";
        }
        iVar4 = strlen(pcVar5);
        in_x2 = iVar4 + 1 + 0x18;
        iVar7 = trace_event_buffer_reserve(&stack0xffffffffffffff28,iVar17);
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = (iVar4 + 1) * 0x10000 | 0x18;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar5);
            *(iVar7 + 0x10) = puVar9[3];
            *(iVar7 + 0x14) = puVar9[4];
            trace_event_buffer_commit(&stack0xffffffffffffff28);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar9 = auVar24._8_8_;
    uVar8 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_alloc_resp_class;
    pcStack_128 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_140 = 0;
    uStack_144 = 0;
    if (puVar9[1] < 4) {
        pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    puStack_130 = &stack0xffffffffffffff60;
    uStack_120 = uVar6;
    uVar6 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xfffffffffffffebc;
        unaff_x22 = (uVar6 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffec0);
        uVar16 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_140 + 0xe8) = &stack0xfffffffffffffed0;
            *(iStack_140 + 0xf8) = &stack0xfffffffffffffeb0;
            *(iStack_140 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x800ad34;
            *(iStack_140 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar6 * 0x10000 + 0x10018;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar5);
            in_x2 = uStack_144;
            *(iVar7 + 0x10) = puVar9[3];
            *(iVar7 + 0x14) = puVar9[4];
            in_x3 = uVar8;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar8,1,iStack_140,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar10 = auVar25._8_8_;
    iVar17 = auVar25._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_01 = 0x800aee4;
    uStack_178 = 0x800aee4;
    iVar7 = sp_el0;
    iStack_188 = *(iVar7 + 0x5e0);
    uVar16 = *(iVar17 + 0x48);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar20 = uVar16;
    puStack_180 = &stack0xfffffffffffffed0;
    piStack_170 = piVar1;
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_160 = puVar9;
            uStack_158 = uVar8;
            event_triggers_call(iVar17,0);
            auVar24._8_8_ = puStack_160;
            auVar24._0_8_ = uStack_158;
        }
        puStack_160 = auVar24._8_8_;
        uStack_158 = auVar24._0_8_;
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 ||
            (uVar8 = trace_event_ignore_this_pid(iVar17), auVar24._8_8_ = puStack_160, auVar24._0_8_ = uStack_158,
            (uVar8 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_160 = auVar24._8_8_;
        uStack_158 = auVar24._0_8_;
        if (puVar10[1] < 4) {
            pcVar5 = *(puVar10[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar5 = "(null)";
        }
        iVar4 = strlen(pcVar5);
        uVar20 = iVar4 + 1;
        uVar16 = uVar20;
        in_x2 = uVar20 + 0x10;
        iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffe48,iVar17);
        auVar24._8_8_ = puStack_160;
        auVar24._0_8_ = uStack_158;
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = uVar20 * 0x10000 | 0x10;
            *(iVar7 + 8) = *puVar10;
            if (puVar10[1] < 4) {
                pcVar5 = *(puVar10[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar5);
            trace_event_buffer_commit(&stack0xfffffffffffffe48);
            auVar24._8_8_ = puStack_160;
            auVar24._0_8_ = uStack_158;
        }
    }
    puStack_160 = auVar24._8_8_;
    uStack_158 = auVar24._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_188) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar9 = auVar26._8_8_;
    uVar8 = auVar26._0_8_;
    *extraout_x18_02 = sym.perf_trace_relinquish_resp_class;
    pcStack_208 = sym.perf_trace_relinquish_resp_class;
    pcStack_1f0 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    pcVar23 = sym.perf_trace_relinquish_resp_class;
    iStack_218 = *(iVar7 + 0x5e0);
    iStack_220 = 0;
    uStack_224 = 0;
    if (puVar9[1] < 4) {
        pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    puStack_210 = &stack0xfffffffffffffe80;
    uStack_200 = uVar6;
    iStack_1e8 = unaff_x23;
    uStack_1e0 = unaff_x22;
    uStack_1d8 = uVar16;
    auStack_1d0 = auVar25;
    iVar4 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xfffffffffffffddc;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffde0);
        uVar16 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_220 + 0xe8) = &stack0xfffffffffffffdf0;
            *(iStack_220 + 0xf8) = &stack0xfffffffffffffdd0;
            *(iStack_220 + 0x100) = ~(-1L << (uVar16 & 0x3f)) & 0x800b020;
            *(iStack_220 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar5);
            in_x2 = uStack_224;
            in_x3 = uVar8;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar8,1,iStack_220,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_218) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar13 = auVar24._8_8_;
    iVar17 = auVar24._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x800b1c0;
    uStack_268 = 0x800b1c0;
    pcStack_260 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_278 = *(iVar7 + 0x5e0);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar20 = *(iVar17 + 0x48);
    uVar16 = in_x3;
    puStack_270 = &stack0xfffffffffffffdf0;
    iStack_258 = unaff_x23;
    uStack_250 = unaff_x22;
    piStack_248 = piVar1;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar11 = in_x2;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar16 = 0;
            puStack_240 = puVar9;
            uStack_238 = uVar8;
            event_triggers_call(iVar17,0);
            auVar26._8_8_ = puStack_240;
            auVar26._0_8_ = uStack_238;
        }
        puStack_240 = auVar26._8_8_;
        uStack_238 = auVar26._0_8_;
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 ||
            (uVar8 = trace_event_ignore_this_pid(iVar17), auVar26._8_8_ = puStack_240, auVar26._0_8_ = uStack_238,
            (uVar8 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_240 = auVar26._8_8_;
        uStack_238 = auVar26._0_8_;
        uVar2 = *puVar13;
        pcVar23 = uVar2;
        puVar11 = pcVar23 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffd58,iVar17);
        auVar26._8_8_ = puStack_240;
        auVar26._0_8_ = uStack_238;
        if (iVar7 != 0) {
            uVar20 = uVar2 << 0x13;
            uVar8 = pcVar23 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar20 | 0x1c;
            *(iVar7 + 0x10) = uVar8 | uVar20;
            *(iVar7 + 8) = *puVar13;
            if (*puVar13 != 0) {
                uVar14 = 0;
                puVar12 = puVar13 + 6;
                do {
                    iVar17 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar17) = *(puVar12 + -4);
                    *(iVar7 + (uVar8 & 0xfffc) + iVar17) = *puVar12;
                    puVar12 = puVar12 + 8;
                } while (uVar14 < *puVar13);
            }
            *(iVar7 + 0x14) = in_x2;
            *(iVar7 + 0x18) = in_x3;
            trace_event_buffer_commit(&stack0xfffffffffffffd58);
            auVar26._8_8_ = puStack_240;
            auVar26._0_8_ = uStack_238;
        }
    }
    puStack_240 = auVar26._8_8_;
    uStack_238 = auVar26._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_278) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar13 = auVar25._8_8_;
    uVar14 = auVar25._0_8_;
    *extraout_x18_04 = sym.perf_trace_lookup_sgl;
    pcStack_2f8 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_308 = *(iVar7 + 0x5e0);
    uVar19 = uVar16 & 0xffffffff;
    uVar21 = puVar11 & 0xffffffff;
    iStack_310 = 0;
    uStack_314 = 0;
    uVar2 = *puVar13;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    uVar8 = uVar16;
    puStack_300 = &stack0xfffffffffffffd90;
    if ((*(uVar14 + 0x80) != 0) || (puVar12 = puVar11, *piVar1 != 0)) {
        puVar12 = &stack0xfffffffffffffcec;
        pcVar23 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar23,&stack0xfffffffffffffcf0);
        if (iVar7 != 0) {
            uVar15 = _hyp_assign_table & 0x3f;
            *(iStack_310 + 0xe8) = &stack0xfffffffffffffd00;
            *(iStack_310 + 0xf8) = &stack0xfffffffffffffce0;
            uVar8 = uVar2 * 8 + 0x1c;
            *(iStack_310 + 0x100) = ~(-1L << uVar15) & 0x800b30c;
            *(iStack_310 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar8 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar13;
            if (*puVar13 != 0) {
                uVar15 = 0;
                puVar12 = puVar13 + 6;
                do {
                    iVar17 = uVar15 * 8;
                    uVar15 = uVar15 + 1;
                    *(iVar7 + 0x1c + iVar17) = *(puVar12 + -4);
                    *(iVar7 + (uVar8 & 0xfffc) + iVar17) = *puVar12;
                    puVar12 = puVar12 + 8;
                } while (uVar15 < *puVar13);
            }
            puVar12 = uStack_314;
            *(iVar7 + 0x14) = puVar11;
            *(iVar7 + 0x18) = uVar16;
            uVar8 = uVar14;
            perf_trace_run_bpf_submit(iVar7,pcVar23,puVar12,uVar14,1,iStack_310,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_308) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar17 = auVar24._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_05 = 0x800b4ac;
    uStack_358 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_368 = *(iVar7 + 0x5e0);
    uVar16 = auVar24._8_8_ & 0xffffffff;
    piVar22 = *(iVar17 + 0x48);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uVar20 = piVar22;
    puStack_360 = &stack0xfffffffffffffd00;
    piStack_350 = piVar1;
    uStack_338 = uVar21;
    uStack_330 = uVar19;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar8 = 0;
            puStack_340 = puVar13;
            uStack_328 = uVar14;
            event_triggers_call(iVar17,0,0,0);
            auVar25._8_8_ = puStack_340;
            auVar25._0_8_ = uStack_328;
        }
        puStack_340 = auVar25._8_8_;
        uStack_328 = auVar25._0_8_;
        piStack_3c8 = piVar1;
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 &&
            (uVar14 = trace_event_ignore_this_pid(iVar17), auVar25._8_8_ = puStack_340, auVar25._0_8_ = uStack_328,
            (uVar14 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_340 = auVar25._8_8_;
    uStack_328 = auVar25._0_8_;
    uVar2 = *puVar12;
    piVar22 = uVar2;
    puVar11 = piVar22 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffc68,iVar17);
    auVar25._8_8_ = puStack_340;
    auVar25._0_8_ = uStack_328;
    piStack_3c8 = piVar22;
    if (iVar7 != 0) {
        uVar20 = uVar2 << 0x13;
        uVar14 = piVar22 * 8 + 0x18;
        *(iVar7 + 8) = auVar24._8_4_;
        *(iVar7 + 0x10) = uVar20 | 0x18;
        *(iVar7 + 0x14) = uVar14 | uVar20;
        *(iVar7 + 0xc) = *puVar12;
        if (*puVar12 != 0) {
            uVar19 = 0;
            puVar13 = puVar12 + 6;
            do {
                iVar18 = uVar19 * 8;
                uVar19 = uVar19 + 1;
                *(iVar7 + 0x18 + iVar18) = *(puVar13 + -4);
                *(iVar7 + (uVar14 & 0xfff8) + iVar18) = *puVar13;
                puVar13 = puVar13 + 8;
            } while (uVar19 < *puVar12);
        }
        trace_event_buffer_commit(&stack0xfffffffffffffc68);
        auVar25._8_8_ = puStack_340;
        auVar25._0_8_ = uStack_328;
    }
code_r0x0800b5bc:
    puStack_340 = auVar25._8_8_;
    uStack_328 = auVar25._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_368) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar14 = auVar27._0_8_;
    *extraout_x18_06 = sym.perf_trace_map_mem_s2;
    pcStack_3e8 = sym.perf_trace_map_mem_s2;
    pcStack_3e0 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_3f8 = *(iVar7 + 0x5e0);
    iStack_400 = 0;
    uStack_404 = 0;
    uVar2 = *puVar11;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    puStack_3f0 = &stack0xfffffffffffffca0;
    pcStack_3d0 = pcVar23;
    piStack_3c0 = piVar22;
    iStack_3b8 = iVar17;
    uStack_3b0 = uVar16;
    puStack_3a8 = puVar12;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar11, *piVar1 != 0)) {
        puVar13 = &stack0xfffffffffffffbfc;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&stack0xfffffffffffffc00,puVar13);
        if (iVar7 != 0) {
            uVar16 = _hyp_assign_table & 0x3f;
            *(iStack_400 + 0xe8) = &stack0xfffffffffffffc10;
            *(iStack_400 + 0xf8) = &stack0xfffffffffffffbf0;
            uVar8 = uVar2 * 8 + 0x18;
            *(iStack_400 + 0x100) = ~(-1L << uVar16) & 0x800b5f4;
            *(iStack_400 + 0x108) = 5;
            *(iVar7 + 8) = auVar27._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar8 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar11;
            if (*puVar11 != 0) {
                uVar16 = 0;
                puVar13 = puVar11 + 6;
                do {
                    iVar17 = uVar16 * 8;
                    uVar16 = uVar16 + 1;
                    *(iVar7 + 0x18 + iVar17) = *(puVar13 + -4);
                    *(iVar7 + (uVar8 & 0xfff8) + iVar17) = *puVar13;
                    puVar13 = puVar13 + 8;
                } while (uVar16 < *puVar11);
            }
            puVar13 = uStack_404;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar13,uVar14,1,iStack_400,piVar1,0);
            uVar8 = uVar14;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_3f8) {
        auVar24 = __stack_chk_fail();
        uVar6 = tpidr_el2;
        *extraout_x18_07 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar24._0_8_,auVar24._8_8_,puVar13 & 0xffffffff,uVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_alloc_resp_class @ 0x0800abf0 (size 324) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800ae28)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_alloc_resp_class(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong uVar8;
    uint16_t *puVar11;
    uint32_t *in_x2;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint64_t in_x3;
    uint64_t uVar14;
    uint64_t uVar15;
    uint16_t *puVar16;
    uint32_t *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar20;
    uint32_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x22;
    int64_t *piVar24;
    int64_t unaff_x23;
    code *pcVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    uchar auVar29 [12];
    uchar auStack_3a0 [12];
    uint32_t uStack_394;
    int64_t iStack_390;
    int64_t iStack_388;
    ulong ***pppuStack_380;
    code *pcStack_378;
    code *pcStack_370;
    code *pcStack_360;
    int64_t *piStack_358;
    int64_t *piStack_350;
    int64_t iStack_348;
    uint64_t uStack_340;
    uint32_t *puStack_338;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    ulong uStack_300;
    int64_t iStack_2f8;
    ulong ***pppuStack_2f0;
    ulong uStack_2e8;
    int64_t *piStack_2e0;
    uint16_t *puStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uchar auStack_2b0 [12];
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong ***pppuStack_290;
    code *pcStack_288;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    int64_t iStack_208;
    ulong ***pppuStack_200;
    ulong uStack_1f8;
    code *pcStack_1f0;
    int64_t iStack_1e8;
    uint64_t uStack_1e0;
    int64_t *piStack_1d8;
    uint *puStack_1d0;
    uint64_t uStack_1c8;
    uchar auStack_1c0 [12];
    uint32_t uStack_1b4;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    uchar ***pppuStack_1a0;
    code *pcStack_198;
    ulong uStack_190;
    code *pcStack_180;
    int64_t iStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [16];
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    int64_t *piStack_100;
    uint *puStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    uint *puVar9;
    uint *puVar10;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar21 = *(arg1 + 0x48);
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) == 0))))
        goto code_r0x0800ac60;
    }
    else {
code_r0x0800ac60:
        if (*(arg2 + 4) < 4) {
            pcVar6 = *(*(arg2 + 4) * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        in_x2 = iVar4 + 1 + 0x18;
        iVar7 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = (iVar4 + 1) * 0x10000 | 0x18;
            *(iVar7 + 8) = *arg2;
            if (*(arg2 + 4) < 4) {
                pcVar6 = *(*(arg2 + 4) * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar6);
            *(iVar7 + 0x10) = *(arg2 + 0xc);
            *(iVar7 + 0x14) = *(arg2 + 0x10);
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar9 = auVar26._8_8_;
    uVar5 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_alloc_resp_class;
    pcStack_b8 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    uVar8 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_d4;
        unaff_x22 = (uVar8 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_d0);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800ad34;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar8 * 0x10000 + 0x10018;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar6);
            in_x2 = uStack_d4;
            *(iVar7 + 0x10) = puVar9[3];
            *(iVar7 + 0x14) = puVar9[4];
            in_x3 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar5,1,iStack_d0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar10 = auVar27._8_8_;
    iVar18 = auVar27._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_00 = 0x800aee4;
    uStack_108 = 0x800aee4;
    iVar7 = sp_el0;
    iStack_118 = *(iVar7 + 0x5e0);
    uVar22 = *(iVar18 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar21 = uVar22;
    ppuStack_110 = &puStack_c0;
    piStack_100 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        if ((uVar21 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            puStack_f0 = puVar9;
            uStack_e8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar26._8_8_ = puStack_f0;
            auVar26._0_8_ = uStack_e8;
        }
        puStack_f0 = auVar26._8_8_;
        uStack_e8 = auVar26._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar26._8_8_ = puStack_f0, auVar26._0_8_ = uStack_e8,
            (uVar5 & 1) == 0)))) goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        puStack_f0 = auVar26._8_8_;
        uStack_e8 = auVar26._0_8_;
        if (puVar10[1] < 4) {
            pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        uVar21 = iVar4 + 1;
        uVar22 = uVar21;
        in_x2 = uVar21 + 0x10;
        iVar7 = trace_event_buffer_reserve(&uStack_148,iVar18);
        auVar26._8_8_ = puStack_f0;
        auVar26._0_8_ = uStack_e8;
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = uVar21 * 0x10000 | 0x10;
            *(iVar7 + 8) = *puVar10;
            if (puVar10[1] < 4) {
                pcVar6 = *(puVar10[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            trace_event_buffer_commit(&uStack_148);
            auVar26._8_8_ = puStack_f0;
            auVar26._0_8_ = uStack_e8;
        }
    }
    puStack_f0 = auVar26._8_8_;
    uStack_e8 = auVar26._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_118) {
        return;
    }
    auVar28 = __stack_chk_fail();
    puVar9 = auVar28._8_8_;
    uVar5 = auVar28._0_8_;
    *extraout_x18_01 = sym.perf_trace_relinquish_resp_class;
    pcStack_198 = sym.perf_trace_relinquish_resp_class;
    pcStack_180 = sym.perf_trace_alloc_resp_class;
    iVar7 = sp_el0;
    pcVar25 = sym.perf_trace_relinquish_resp_class;
    iStack_1a8 = *(iVar7 + 0x5e0);
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    if (puVar9[1] < 4) {
        pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    pppuStack_1a0 = &ppuStack_110;
    uStack_190 = uVar8;
    iStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    uStack_168 = uVar22;
    auStack_160 = auVar27;
    iVar4 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_1b4;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_1b0);
        uVar22 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_1b0 + 0xe8) = &pppuStack_1a0;
            *(iStack_1b0 + 0xf8) = auStack_1c0;
            *(iStack_1b0 + 0x100) = ~(-1L << (uVar22 & 0x3f)) & 0x800b020;
            *(iStack_1b0 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar6 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            in_x2 = uStack_1b4;
            in_x3 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar5,1,iStack_1b0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    puVar11 = auVar26._8_8_;
    iVar18 = auVar26._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_02 = 0x800b1c0;
    uStack_1f8 = 0x800b1c0;
    pcStack_1f0 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_208 = *(iVar7 + 0x5e0);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uVar21 = *(iVar18 + 0x48);
    uVar22 = in_x3;
    pppuStack_200 = &pppuStack_1a0;
    iStack_1e8 = unaff_x23;
    uStack_1e0 = unaff_x22;
    piStack_1d8 = piVar1;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar12 = in_x2;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar22 = 0;
            puStack_1d0 = puVar9;
            uStack_1c8 = uVar5;
            event_triggers_call(iVar18,0);
            auVar28._8_8_ = puStack_1d0;
            auVar28._0_8_ = uStack_1c8;
        }
        puStack_1d0 = auVar28._8_8_;
        uStack_1c8 = auVar28._0_8_;
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar18), auVar28._8_8_ = puStack_1d0, auVar28._0_8_ = uStack_1c8,
            (uVar5 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_1d0 = auVar28._8_8_;
        uStack_1c8 = auVar28._0_8_;
        uVar2 = *puVar11;
        pcVar25 = uVar2;
        puVar12 = pcVar25 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_238,iVar18);
        auVar28._8_8_ = puStack_1d0;
        auVar28._0_8_ = uStack_1c8;
        if (iVar7 != 0) {
            uVar21 = uVar2 << 0x13;
            uVar5 = pcVar25 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar21 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar21;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar14 = 0;
                puVar16 = puVar11 + 6;
                do {
                    iVar18 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar14 < *puVar11);
            }
            *(iVar7 + 0x14) = in_x2;
            *(iVar7 + 0x18) = in_x3;
            trace_event_buffer_commit(&uStack_238);
            auVar28._8_8_ = puStack_1d0;
            auVar28._0_8_ = uStack_1c8;
        }
    }
    puStack_1d0 = auVar28._8_8_;
    uStack_1c8 = auVar28._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_208) {
        return;
    }
    auVar27 = __stack_chk_fail();
    puVar11 = auVar27._8_8_;
    uVar14 = auVar27._0_8_;
    *extraout_x18_03 = sym.perf_trace_lookup_sgl;
    pcStack_288 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_298 = *(iVar7 + 0x5e0);
    uVar20 = uVar22 & 0xffffffff;
    uVar23 = puVar12 & 0xffffffff;
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    uVar2 = *puVar11;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    uVar5 = uVar22;
    pppuStack_290 = &pppuStack_200;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_2a4;
        pcVar25 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar25,&iStack_2a0);
        if (iVar7 != 0) {
            uVar15 = _hyp_assign_table & 0x3f;
            *(iStack_2a0 + 0xe8) = &pppuStack_290;
            *(iStack_2a0 + 0xf8) = auStack_2b0;
            uVar5 = uVar2 * 8 + 0x1c;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar15) & 0x800b30c;
            *(iStack_2a0 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar11;
            if (*puVar11 != 0) {
                uVar15 = 0;
                puVar16 = puVar11 + 6;
                do {
                    iVar18 = uVar15 * 8;
                    uVar15 = uVar15 + 1;
                    *(iVar7 + 0x1c + iVar18) = *(puVar16 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar18) = *puVar16;
                    puVar16 = puVar16 + 8;
                } while (uVar15 < *puVar11);
            }
            puVar13 = uStack_2a4;
            *(iVar7 + 0x14) = puVar12;
            *(iVar7 + 0x18) = uVar22;
            uVar5 = uVar14;
            perf_trace_run_bpf_submit(iVar7,pcVar25,puVar13,uVar14,1,iStack_2a0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_298) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar18 = auVar26._0_8_;
    uVar8 = tpidr_el2;
    *extraout_x18_04 = 0x800b4ac;
    uStack_2e8 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_2f8 = *(iVar7 + 0x5e0);
    uVar22 = auVar26._8_8_ & 0xffffffff;
    piVar24 = *(iVar18 + 0x48);
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uVar21 = piVar24;
    pppuStack_2f0 = &pppuStack_290;
    piStack_2e0 = piVar1;
    uStack_2c8 = uVar23;
    uStack_2c0 = uVar20;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar5 = 0;
            puStack_2d0 = puVar11;
            uStack_2b8 = uVar14;
            event_triggers_call(iVar18,0,0,0);
            auVar27._8_8_ = puStack_2d0;
            auVar27._0_8_ = uStack_2b8;
        }
        puStack_2d0 = auVar27._8_8_;
        uStack_2b8 = auVar27._0_8_;
        piStack_358 = piVar1;
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 &&
            (uVar14 = trace_event_ignore_this_pid(iVar18), auVar27._8_8_ = puStack_2d0, auVar27._0_8_ = uStack_2b8,
            (uVar14 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_2d0 = auVar27._8_8_;
    uStack_2b8 = auVar27._0_8_;
    uVar21 = *puVar13;
    piVar24 = uVar21;
    puVar12 = piVar24 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_328,iVar18);
    auVar27._8_8_ = puStack_2d0;
    auVar27._0_8_ = uStack_2b8;
    piStack_358 = piVar24;
    if (iVar7 != 0) {
        uVar21 = uVar21 << 0x13;
        uVar14 = piVar24 * 8 + 0x18;
        *(iVar7 + 8) = auVar26._8_4_;
        *(iVar7 + 0x10) = uVar21 | 0x18;
        *(iVar7 + 0x14) = uVar14 | uVar21;
        *(iVar7 + 0xc) = *puVar13;
        if (*puVar13 != 0) {
            uVar20 = 0;
            puVar17 = puVar13 + 3;
            do {
                iVar19 = uVar20 * 8;
                uVar20 = uVar20 + 1;
                *(iVar7 + 0x18 + iVar19) = *(puVar17 + -2);
                *(iVar7 + (uVar14 & 0xfff8) + iVar19) = *puVar17;
                puVar17 = puVar17 + 4;
            } while (uVar20 < *puVar13);
        }
        trace_event_buffer_commit(&uStack_328);
        auVar27._8_8_ = puStack_2d0;
        auVar27._0_8_ = uStack_2b8;
    }
code_r0x0800b5bc:
    puStack_2d0 = auVar27._8_8_;
    uStack_2b8 = auVar27._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_2f8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    uVar14 = auVar29._0_8_;
    *extraout_x18_05 = sym.perf_trace_map_mem_s2;
    pcStack_378 = sym.perf_trace_map_mem_s2;
    pcStack_370 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_388 = *(iVar7 + 0x5e0);
    iStack_390 = 0;
    uStack_394 = 0;
    uVar2 = *puVar12;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar14 + 0x78);
    pppuStack_380 = &pppuStack_2f0;
    pcStack_360 = pcVar25;
    piStack_350 = piVar24;
    iStack_348 = iVar18;
    uStack_340 = uVar22;
    puStack_338 = puVar13;
    if ((*(uVar14 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_394;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_390,puVar13);
        if (iVar7 != 0) {
            uVar22 = _hyp_assign_table & 0x3f;
            *(iStack_390 + 0xe8) = &pppuStack_380;
            *(iStack_390 + 0xf8) = auStack_3a0;
            uVar5 = uVar2 * 8 + 0x18;
            *(iStack_390 + 0x100) = ~(-1L << uVar22) & 0x800b5f4;
            *(iStack_390 + 0x108) = 5;
            *(iVar7 + 8) = auVar29._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar12;
            if (*puVar12 != 0) {
                uVar22 = 0;
                puVar13 = puVar12 + 3;
                do {
                    iVar18 = uVar22 * 8;
                    uVar22 = uVar22 + 1;
                    *(iVar7 + 0x18 + iVar18) = *(puVar13 + -2);
                    *(iVar7 + (uVar5 & 0xfff8) + iVar18) = *puVar13;
                    puVar13 = puVar13 + 4;
                } while (uVar22 < *puVar12);
            }
            puVar13 = uStack_394;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar13,uVar14,1,iStack_390,piVar1,0);
            uVar5 = uVar14;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_388) {
        auVar26 = __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_06 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar26._0_8_,auVar26._8_8_,puVar13 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_alloc_resp_class @ 0x0800ad34 (size 444) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_alloc_resp_class(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint16_t *in_x2;
    uint16_t *puVar10;
    uint16_t *puVar11;
    uint16_t *puVar12;
    uint64_t in_x3;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    int64_t iVar17;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint64_t unaff_x22;
    int64_t *piVar21;
    int64_t unaff_x23;
    code *pcVar22;
    uint64_t unaff_x30;
    uchar auVar23 [16];
    uchar auVar24 [16];
    uchar auVar25 [12];
    uchar auStack_330 [12];
    uint32_t uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    uchar *puStack_310;
    code *pcStack_308;
    code *pcStack_300;
    code *pcStack_2f0;
    int64_t *piStack_2e8;
    int64_t *piStack_2e0;
    int64_t iStack_2d8;
    uint64_t uStack_2d0;
    uint16_t *puStack_2c8;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    uchar *puStack_280;
    ulong uStack_278;
    int64_t *piStack_270;
    uint16_t *puStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uchar auStack_240 [12];
    uint32_t uStack_234;
    int64_t iStack_230;
    int64_t iStack_228;
    uchar *puStack_220;
    code *pcStack_218;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    int64_t iStack_198;
    uchar *puStack_190;
    ulong uStack_188;
    code *pcStack_180;
    int64_t iStack_178;
    uint64_t uStack_170;
    int64_t *piStack_168;
    uint *puStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    ulong uStack_120;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    int64_t *piStack_90;
    int64_t iStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    uint *puVar9;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    if (*(arg2 + 4) < 4) {
        pcVar5 = *(*(arg2 + 4) * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    uVar6 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xffffffffffffff9c;
        unaff_x22 = (uVar6 + 0x24U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&stack0xffffffffffffffa0);
        uVar8 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar15 = -1L << (uVar8 & 0x3f);
            uVar8 = (~uVar15 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar15 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar8;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar6 * 0x10000 + 0x10018;
            *(iVar7 + 8) = *arg2;
            if (*(arg2 + 4) < 4) {
                pcVar5 = *(*(arg2 + 4) * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x18,pcVar5);
            in_x2 = uStack_64;
            *(iVar7 + 0x10) = *(arg2 + 0xc);
            *(iVar7 + 0x14) = *(arg2 + 0x10);
            in_x3 = arg1;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,arg1,1,iStack_60,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar23 = __stack_chk_fail();
    puVar9 = auVar23._8_8_;
    iVar16 = auVar23._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18 = 0x800aee4;
    uStack_98 = 0x800aee4;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar19 = *(iVar16 + 0x48);
    puStack_a0 = &stack0xffffffffffffffb0;
    piStack_90 = piVar1;
    iStack_80 = arg2;
    iStack_78 = arg1;
    if ((uVar19 >> 8 & 1) == 0) {
        if ((uVar19 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(iVar16), (uVar8 & 1) == 0))))
        goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        if (puVar9[1] < 4) {
            pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
        }
        else {
            pcVar5 = "(null)";
        }
        iVar4 = strlen(pcVar5);
        in_x2 = iVar4 + 1 + 0x10;
        iVar7 = trace_event_buffer_reserve(&stack0xffffffffffffff28,iVar16);
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = (iVar4 + 1) * 0x10000 | 0x10;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar5);
            trace_event_buffer_commit(&stack0xffffffffffffff28);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    puVar9 = auVar23._8_8_;
    uVar8 = auVar23._0_8_;
    *extraout_x18_00 = sym.perf_trace_relinquish_resp_class;
    pcStack_128 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    pcVar22 = sym.perf_trace_relinquish_resp_class;
    iStack_138 = *(iVar7 + 0x5e0);
    iStack_140 = 0;
    uStack_144 = 0;
    if (puVar9[1] < 4) {
        pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar5 = "(null)";
    }
    puStack_130 = &stack0xffffffffffffff60;
    uStack_120 = uVar6;
    iVar4 = strlen(pcVar5);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xfffffffffffffebc;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&stack0xfffffffffffffec0);
        uVar15 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_140 + 0xe8) = &stack0xfffffffffffffed0;
            *(iStack_140 + 0xf8) = &stack0xfffffffffffffeb0;
            *(iStack_140 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x800b020;
            *(iStack_140 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar9;
            if (puVar9[1] < 4) {
                pcVar5 = *(puVar9[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar5 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar5);
            in_x2 = uStack_144;
            in_x3 = uVar8;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar8,1,iStack_140,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_138) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar12 = auVar24._8_8_;
    iVar16 = auVar24._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_01 = 0x800b1c0;
    uStack_188 = 0x800b1c0;
    pcStack_180 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_198 = *(iVar7 + 0x5e0);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uVar19 = *(iVar16 + 0x48);
    uVar15 = in_x3;
    puStack_190 = &stack0xfffffffffffffed0;
    iStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    piStack_168 = piVar1;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = in_x2;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            puStack_160 = puVar9;
            uStack_158 = uVar8;
            event_triggers_call(iVar16,0);
            auVar23._8_8_ = puStack_160;
            auVar23._0_8_ = uStack_158;
        }
        puStack_160 = auVar23._8_8_;
        uStack_158 = auVar23._0_8_;
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 ||
            (uVar8 = trace_event_ignore_this_pid(iVar16), auVar23._8_8_ = puStack_160, auVar23._0_8_ = uStack_158,
            (uVar8 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_160 = auVar23._8_8_;
        uStack_158 = auVar23._0_8_;
        uVar2 = *puVar12;
        pcVar22 = uVar2;
        puVar10 = pcVar22 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffe38,iVar16);
        auVar23._8_8_ = puStack_160;
        auVar23._0_8_ = uStack_158;
        if (iVar7 != 0) {
            uVar19 = uVar2 << 0x13;
            uVar8 = pcVar22 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar19 | 0x1c;
            *(iVar7 + 0x10) = uVar8 | uVar19;
            *(iVar7 + 8) = *puVar12;
            if (*puVar12 != 0) {
                uVar13 = 0;
                puVar11 = puVar12 + 6;
                do {
                    iVar16 = uVar13 * 8;
                    uVar13 = uVar13 + 1;
                    *(iVar7 + 0x1c + iVar16) = *(puVar11 + -4);
                    *(iVar7 + (uVar8 & 0xfffc) + iVar16) = *puVar11;
                    puVar11 = puVar11 + 8;
                } while (uVar13 < *puVar12);
            }
            *(iVar7 + 0x14) = in_x2;
            *(iVar7 + 0x18) = in_x3;
            trace_event_buffer_commit(&stack0xfffffffffffffe38);
            auVar23._8_8_ = puStack_160;
            auVar23._0_8_ = uStack_158;
        }
    }
    puStack_160 = auVar23._8_8_;
    uStack_158 = auVar23._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_198) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar12 = auVar24._8_8_;
    uVar13 = auVar24._0_8_;
    *extraout_x18_02 = sym.perf_trace_lookup_sgl;
    pcStack_218 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_228 = *(iVar7 + 0x5e0);
    uVar18 = uVar15 & 0xffffffff;
    uVar20 = puVar10 & 0xffffffff;
    iStack_230 = 0;
    uStack_234 = 0;
    uVar2 = *puVar12;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    uVar8 = uVar15;
    puStack_220 = &stack0xfffffffffffffe70;
    if ((*(uVar13 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &stack0xfffffffffffffdcc;
        pcVar22 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar22,&stack0xfffffffffffffdd0);
        if (iVar7 != 0) {
            uVar14 = _hyp_assign_table & 0x3f;
            *(iStack_230 + 0xe8) = &stack0xfffffffffffffde0;
            *(iStack_230 + 0xf8) = &stack0xfffffffffffffdc0;
            uVar8 = uVar2 * 8 + 0x1c;
            *(iStack_230 + 0x100) = ~(-1L << uVar14) & 0x800b30c;
            *(iStack_230 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar8 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar12;
            if (*puVar12 != 0) {
                uVar14 = 0;
                puVar11 = puVar12 + 6;
                do {
                    iVar16 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar16) = *(puVar11 + -4);
                    *(iVar7 + (uVar8 & 0xfffc) + iVar16) = *puVar11;
                    puVar11 = puVar11 + 8;
                } while (uVar14 < *puVar12);
            }
            puVar11 = uStack_234;
            *(iVar7 + 0x14) = puVar10;
            *(iVar7 + 0x18) = uVar15;
            uVar8 = uVar13;
            perf_trace_run_bpf_submit(iVar7,pcVar22,puVar11,uVar13,1,iStack_230,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_228) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar16 = auVar23._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x800b4ac;
    uStack_278 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_288 = *(iVar7 + 0x5e0);
    uVar15 = auVar23._8_8_ & 0xffffffff;
    piVar21 = *(iVar16 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar19 = piVar21;
    puStack_280 = &stack0xfffffffffffffde0;
    piStack_270 = piVar1;
    uStack_258 = uVar20;
    uStack_250 = uVar18;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar8 = 0;
            puStack_260 = puVar12;
            uStack_248 = uVar13;
            event_triggers_call(iVar16,0,0,0);
            auVar24._8_8_ = puStack_260;
            auVar24._0_8_ = uStack_248;
        }
        puStack_260 = auVar24._8_8_;
        uStack_248 = auVar24._0_8_;
        piStack_2e8 = piVar1;
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 &&
            (uVar13 = trace_event_ignore_this_pid(iVar16), auVar24._8_8_ = puStack_260, auVar24._0_8_ = uStack_248,
            (uVar13 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_260 = auVar24._8_8_;
    uStack_248 = auVar24._0_8_;
    uVar2 = *puVar11;
    piVar21 = uVar2;
    puVar10 = piVar21 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffd48,iVar16);
    auVar24._8_8_ = puStack_260;
    auVar24._0_8_ = uStack_248;
    piStack_2e8 = piVar21;
    if (iVar7 != 0) {
        uVar19 = uVar2 << 0x13;
        uVar13 = piVar21 * 8 + 0x18;
        *(iVar7 + 8) = auVar23._8_4_;
        *(iVar7 + 0x10) = uVar19 | 0x18;
        *(iVar7 + 0x14) = uVar13 | uVar19;
        *(iVar7 + 0xc) = *puVar11;
        if (*puVar11 != 0) {
            uVar18 = 0;
            puVar12 = puVar11 + 6;
            do {
                iVar17 = uVar18 * 8;
                uVar18 = uVar18 + 1;
                *(iVar7 + 0x18 + iVar17) = *(puVar12 + -4);
                *(iVar7 + (uVar13 & 0xfff8) + iVar17) = *puVar12;
                puVar12 = puVar12 + 8;
            } while (uVar18 < *puVar11);
        }
        trace_event_buffer_commit(&stack0xfffffffffffffd48);
        auVar24._8_8_ = puStack_260;
        auVar24._0_8_ = uStack_248;
    }
code_r0x0800b5bc:
    puStack_260 = auVar24._8_8_;
    uStack_248 = auVar24._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_288) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar13 = auVar25._0_8_;
    *extraout_x18_04 = sym.perf_trace_map_mem_s2;
    pcStack_308 = sym.perf_trace_map_mem_s2;
    pcStack_300 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_318 = *(iVar7 + 0x5e0);
    iStack_320 = 0;
    uStack_324 = 0;
    uVar2 = *puVar10;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    puStack_310 = &stack0xfffffffffffffd80;
    pcStack_2f0 = pcVar22;
    piStack_2e0 = piVar21;
    iStack_2d8 = iVar16;
    uStack_2d0 = uVar15;
    puStack_2c8 = puVar11;
    if ((*(uVar13 + 0x80) != 0) || (puVar12 = puVar10, *piVar1 != 0)) {
        puVar12 = &stack0xfffffffffffffcdc;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&stack0xfffffffffffffce0,puVar12);
        if (iVar7 != 0) {
            uVar15 = _hyp_assign_table & 0x3f;
            *(iStack_320 + 0xe8) = &stack0xfffffffffffffcf0;
            *(iStack_320 + 0xf8) = &stack0xfffffffffffffcd0;
            uVar8 = uVar2 * 8 + 0x18;
            *(iStack_320 + 0x100) = ~(-1L << uVar15) & 0x800b5f4;
            *(iStack_320 + 0x108) = 5;
            *(iVar7 + 8) = auVar25._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar8 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar10;
            if (*puVar10 != 0) {
                uVar15 = 0;
                puVar12 = puVar10 + 6;
                do {
                    iVar16 = uVar15 * 8;
                    uVar15 = uVar15 + 1;
                    *(iVar7 + 0x18 + iVar16) = *(puVar12 + -4);
                    *(iVar7 + (uVar8 & 0xfff8) + iVar16) = *puVar12;
                    puVar12 = puVar12 + 8;
                } while (uVar15 < *puVar10);
            }
            puVar12 = uStack_324;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar12,uVar13,1,iStack_320,piVar1,0);
            uVar8 = uVar13;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_318) {
        auVar23 = __stack_chk_fail();
        uVar6 = tpidr_el2;
        *extraout_x18_05 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar23._0_8_,auVar23._8_8_,puVar12 & 0xffffffff,uVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_relinquish_resp_class @ 0x0800aef0 (size 304) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800b114)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_relinquish_resp_class(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    uint32_t *in_x2;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t in_x3;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint16_t *puVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    uint64_t unaff_x22;
    int64_t *piVar22;
    int64_t unaff_x23;
    code *pcVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    uchar auVar26 [12];
    uchar auStack_2c0 [12];
    uint32_t uStack_2b4;
    int64_t iStack_2b0;
    int64_t iStack_2a8;
    ulong ***pppuStack_2a0;
    code *pcStack_298;
    code *pcStack_290;
    code *pcStack_280;
    int64_t *piStack_278;
    int64_t *piStack_270;
    int64_t iStack_268;
    uint64_t uStack_260;
    uint32_t *puStack_258;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    ulong uStack_208;
    int64_t *piStack_200;
    uint16_t *puStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    uchar ***pppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    code *pcStack_110;
    int64_t iStack_108;
    uint64_t uStack_100;
    int64_t *piStack_f8;
    uint *puStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    uint *puVar8;
    uint16_t *puVar9;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar20 = *(arg1 + 0x48);
    if ((uVar20 >> 8 & 1) == 0) {
        if ((uVar20 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) == 0))))
        goto code_r0x0800af60;
    }
    else {
code_r0x0800af60:
        if (*(arg2 + 4) < 4) {
            pcVar6 = *(*(arg2 + 4) * 8 + 0x8006aa0);
        }
        else {
            pcVar6 = "(null)";
        }
        iVar4 = strlen(pcVar6);
        in_x2 = iVar4 + 1 + 0x10;
        iVar7 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar7 != 0) {
            *(iVar7 + 0xc) = (iVar4 + 1) * 0x10000 | 0x10;
            *(iVar7 + 8) = *arg2;
            if (*(arg2 + 4) < 4) {
                pcVar6 = *(*(arg2 + 4) * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return;
    }
    auVar24 = __stack_chk_fail();
    puVar8 = auVar24._8_8_;
    uVar5 = auVar24._0_8_;
    *extraout_x18 = sym.perf_trace_relinquish_resp_class;
    pcStack_b8 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    pcVar23 = sym.perf_trace_relinquish_resp_class;
    iStack_c8 = *(iVar7 + 0x5e0);
    iStack_d0 = 0;
    uStack_d4 = 0;
    if (puVar8[1] < 4) {
        pcVar6 = *(puVar8[1] * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    puStack_c0 = &stack0xffffffffffffffd0;
    iVar4 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_d4;
        unaff_x22 = (iVar4 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x22,&iStack_d0);
        uVar12 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar12 & 0x3f)) & 0x800b020;
            *(iStack_d0 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar4 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *puVar8;
            if (puVar8[1] < 4) {
                pcVar6 = *(puVar8[1] * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            in_x2 = uStack_d4;
            in_x3 = uVar5;
            perf_trace_run_bpf_submit(iVar7,unaff_x22,in_x2,uVar5,1,iStack_d0,piVar1,0);
            unaff_x23 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar9 = auVar25._8_8_;
    iVar17 = auVar25._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_00 = 0x800b1c0;
    uStack_118 = 0x800b1c0;
    pcStack_110 = sym.perf_trace_relinquish_resp_class;
    iVar7 = sp_el0;
    iStack_128 = *(iVar7 + 0x5e0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar20 = *(iVar17 + 0x48);
    uVar12 = in_x3;
    ppuStack_120 = &puStack_c0;
    iStack_108 = unaff_x23;
    uStack_100 = unaff_x22;
    piStack_f8 = piVar1;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = in_x2;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar12 = 0;
            puStack_f0 = puVar8;
            uStack_e8 = uVar5;
            event_triggers_call(iVar17,0);
            auVar24._8_8_ = puStack_f0;
            auVar24._0_8_ = uStack_e8;
        }
        puStack_f0 = auVar24._8_8_;
        uStack_e8 = auVar24._0_8_;
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 ||
            (uVar5 = trace_event_ignore_this_pid(iVar17), auVar24._8_8_ = puStack_f0, auVar24._0_8_ = uStack_e8,
            (uVar5 & 1) == 0)))) goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        puStack_f0 = auVar24._8_8_;
        uStack_e8 = auVar24._0_8_;
        uVar2 = *puVar9;
        pcVar23 = uVar2;
        puVar10 = pcVar23 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&uStack_158,iVar17);
        auVar24._8_8_ = puStack_f0;
        auVar24._0_8_ = uStack_e8;
        if (iVar7 != 0) {
            uVar20 = uVar2 << 0x13;
            uVar5 = pcVar23 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar20 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar20;
            *(iVar7 + 8) = *puVar9;
            if (*puVar9 != 0) {
                uVar13 = 0;
                puVar15 = puVar9 + 6;
                do {
                    iVar17 = uVar13 * 8;
                    uVar13 = uVar13 + 1;
                    *(iVar7 + 0x1c + iVar17) = *(puVar15 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar17) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar13 < *puVar9);
            }
            *(iVar7 + 0x14) = in_x2;
            *(iVar7 + 0x18) = in_x3;
            trace_event_buffer_commit(&uStack_158);
            auVar24._8_8_ = puStack_f0;
            auVar24._0_8_ = uStack_e8;
        }
    }
    puStack_f0 = auVar24._8_8_;
    uStack_e8 = auVar24._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_128) {
        return;
    }
    auVar25 = __stack_chk_fail();
    puVar9 = auVar25._8_8_;
    uVar13 = auVar25._0_8_;
    *extraout_x18_01 = sym.perf_trace_lookup_sgl;
    pcStack_1a8 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_1b8 = *(iVar7 + 0x5e0);
    uVar19 = uVar12 & 0xffffffff;
    uVar21 = puVar10 & 0xffffffff;
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    uVar2 = *puVar9;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    uVar5 = uVar12;
    pppuStack_1b0 = &ppuStack_120;
    if ((*(uVar13 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_1c4;
        pcVar23 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(pcVar23,&iStack_1c0);
        if (iVar7 != 0) {
            uVar14 = _hyp_assign_table & 0x3f;
            *(iStack_1c0 + 0xe8) = &pppuStack_1b0;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            uVar5 = uVar2 * 8 + 0x1c;
            *(iStack_1c0 + 0x100) = ~(-1L << uVar14) & 0x800b30c;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar9;
            if (*puVar9 != 0) {
                uVar14 = 0;
                puVar15 = puVar9 + 6;
                do {
                    iVar17 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x1c + iVar17) = *(puVar15 + -4);
                    *(iVar7 + (uVar5 & 0xfffc) + iVar17) = *puVar15;
                    puVar15 = puVar15 + 8;
                } while (uVar14 < *puVar9);
            }
            puVar11 = uStack_1c4;
            *(iVar7 + 0x14) = puVar10;
            *(iVar7 + 0x18) = uVar12;
            uVar5 = uVar13;
            perf_trace_run_bpf_submit(iVar7,pcVar23,puVar11,uVar13,1,iStack_1c0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar17 = auVar24._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_02 = 0x800b4ac;
    uStack_208 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_218 = *(iVar7 + 0x5e0);
    uVar12 = auVar24._8_8_ & 0xffffffff;
    piVar22 = *(iVar17 + 0x48);
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar20 = piVar22;
    pppuStack_210 = &pppuStack_1b0;
    piStack_200 = piVar1;
    uStack_1e8 = uVar21;
    uStack_1e0 = uVar19;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar5 = 0;
            puStack_1f0 = puVar9;
            uStack_1d8 = uVar13;
            event_triggers_call(iVar17,0,0,0);
            auVar25._8_8_ = puStack_1f0;
            auVar25._0_8_ = uStack_1d8;
        }
        puStack_1f0 = auVar25._8_8_;
        uStack_1d8 = auVar25._0_8_;
        piStack_278 = piVar1;
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 &&
            (uVar13 = trace_event_ignore_this_pid(iVar17), auVar25._8_8_ = puStack_1f0, auVar25._0_8_ = uStack_1d8,
            (uVar13 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_1f0 = auVar25._8_8_;
    uStack_1d8 = auVar25._0_8_;
    uVar20 = *puVar11;
    piVar22 = uVar20;
    puVar10 = piVar22 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&uStack_248,iVar17);
    auVar25._8_8_ = puStack_1f0;
    auVar25._0_8_ = uStack_1d8;
    piStack_278 = piVar22;
    if (iVar7 != 0) {
        uVar20 = uVar20 << 0x13;
        uVar13 = piVar22 * 8 + 0x18;
        *(iVar7 + 8) = auVar24._8_4_;
        *(iVar7 + 0x10) = uVar20 | 0x18;
        *(iVar7 + 0x14) = uVar13 | uVar20;
        *(iVar7 + 0xc) = *puVar11;
        if (*puVar11 != 0) {
            uVar19 = 0;
            puVar16 = puVar11 + 3;
            do {
                iVar18 = uVar19 * 8;
                uVar19 = uVar19 + 1;
                *(iVar7 + 0x18 + iVar18) = *(puVar16 + -2);
                *(iVar7 + (uVar13 & 0xfff8) + iVar18) = *puVar16;
                puVar16 = puVar16 + 4;
            } while (uVar19 < *puVar11);
        }
        trace_event_buffer_commit(&uStack_248);
        auVar25._8_8_ = puStack_1f0;
        auVar25._0_8_ = uStack_1d8;
    }
code_r0x0800b5bc:
    puStack_1f0 = auVar25._8_8_;
    uStack_1d8 = auVar25._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_218) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar13 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_map_mem_s2;
    pcStack_298 = sym.perf_trace_map_mem_s2;
    pcStack_290 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_2a8 = *(iVar7 + 0x5e0);
    iStack_2b0 = 0;
    uStack_2b4 = 0;
    uVar2 = *puVar10;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar13 + 0x78);
    pppuStack_2a0 = &pppuStack_210;
    pcStack_280 = pcVar23;
    piStack_270 = piVar22;
    iStack_268 = iVar17;
    uStack_260 = uVar12;
    puStack_258 = puVar11;
    if ((*(uVar13 + 0x80) != 0) || (puVar11 = puVar10, *piVar1 != 0)) {
        puVar11 = &uStack_2b4;
        iVar4 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_2b0,puVar11);
        if (iVar7 != 0) {
            uVar12 = _hyp_assign_table & 0x3f;
            *(iStack_2b0 + 0xe8) = &pppuStack_2a0;
            *(iStack_2b0 + 0xf8) = auStack_2c0;
            uVar5 = uVar2 * 8 + 0x18;
            *(iStack_2b0 + 0x100) = ~(-1L << uVar12) & 0x800b5f4;
            *(iStack_2b0 + 0x108) = 5;
            *(iVar7 + 8) = auVar26._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar5 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar10;
            if (*puVar10 != 0) {
                uVar12 = 0;
                puVar11 = puVar10 + 3;
                do {
                    iVar17 = uVar12 * 8;
                    uVar12 = uVar12 + 1;
                    *(iVar7 + 0x18 + iVar17) = *(puVar11 + -2);
                    *(iVar7 + (uVar5 & 0xfff8) + iVar17) = *puVar11;
                    puVar11 = puVar11 + 4;
                } while (uVar12 < *puVar10);
            }
            puVar11 = uStack_2b4;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar11,uVar13,1,iStack_2b0,piVar1,0);
            uVar5 = uVar13;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_2a8) {
        auVar24 = __stack_chk_fail();
        uVar3 = tpidr_el2;
        *extraout_x18_04 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar24._0_8_,auVar24._8_8_,puVar11 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_relinquish_resp_class @ 0x0800b020 (size 428) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_relinquish_resp_class(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    int iVar5;
    char *pcVar6;
    int64_t iVar7;
    uint16_t *in_x2;
    uint16_t *puVar8;
    uint16_t *puVar9;
    uint16_t *puVar10;
    uint64_t in_x3;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    int64_t *piVar20;
    uint64_t unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auVar23 [12];
    uchar auStack_250 [12];
    uint32_t uStack_244;
    int64_t iStack_240;
    int64_t iStack_238;
    uchar *puStack_230;
    code *pcStack_228;
    code *pcStack_220;
    uint64_t uStack_210;
    int64_t *piStack_208;
    int64_t *piStack_200;
    int64_t iStack_1f8;
    uint64_t uStack_1f0;
    uint16_t *puStack_1e8;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    ulong uStack_198;
    int64_t *piStack_190;
    uint16_t *puStack_180;
    uint64_t uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    if (*(arg2 + 4) < 4) {
        pcVar6 = *(*(arg2 + 4) * 8 + 0x8006aa0);
    }
    else {
        pcVar6 = "(null)";
    }
    iVar5 = strlen(pcVar6);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xffffffffffffff9c;
        iVar3 = (iVar5 + 0x1cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&stack0xffffffffffffffa0);
        uVar11 = _hyp_assign_table;
        if (iVar7 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar14 = -1L << (uVar11 & 0x3f);
            uVar11 = (~uVar14 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar11 = uVar14 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar11;
            *(iStack_60 + 0x108) = 5;
            *(iVar7 + 0xc) = iVar5 * 0x10000 + 0x10010;
            *(iVar7 + 8) = *arg2;
            if (*(arg2 + 4) < 4) {
                pcVar6 = *(*(arg2 + 4) * 8 + 0x8006aa0);
            }
            else {
                pcVar6 = "(null)";
            }
            strcpy(iVar7 + 0x10,pcVar6);
            in_x2 = uStack_64;
            perf_trace_run_bpf_submit(iVar7,iVar3,in_x2,arg1,1,iStack_60,piVar1,0);
            in_x3 = arg1;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    auVar21 = __stack_chk_fail();
    puVar10 = auVar21._8_8_;
    iVar15 = auVar21._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800b1c0;
    uStack_a8 = 0x800b1c0;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar19 = *(iVar15 + 0x48);
    uVar11 = in_x3;
    puStack_b0 = &stack0xffffffffffffffb0;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar8 = in_x2;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar14 = trace_event_ignore_this_pid(iVar15), (uVar14 & 1) == 0))))
        goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        uVar2 = *puVar10;
        unaff_x30 = uVar2;
        puVar8 = unaff_x30 * 0x10 + 0x1c;
        iVar7 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar15);
        if (iVar7 != 0) {
            uVar19 = uVar2 << 0x13;
            uVar14 = unaff_x30 * 8 + 0x1c;
            *(iVar7 + 0xc) = uVar19 | 0x1c;
            *(iVar7 + 0x10) = uVar14 | uVar19;
            *(iVar7 + 8) = *puVar10;
            if (*puVar10 != 0) {
                uVar12 = 0;
                puVar9 = puVar10 + 6;
                do {
                    iVar15 = uVar12 * 8;
                    uVar12 = uVar12 + 1;
                    *(iVar7 + 0x1c + iVar15) = *(puVar9 + -4);
                    *(iVar7 + (uVar14 & 0xfffc) + iVar15) = *puVar9;
                    puVar9 = puVar9 + 8;
                } while (uVar12 < *puVar10);
            }
            *(iVar7 + 0x14) = in_x2;
            *(iVar7 + 0x18) = in_x3;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    puVar10 = auVar21._8_8_;
    uVar12 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_lookup_sgl;
    pcStack_138 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    uVar17 = uVar11 & 0xffffffff;
    uVar18 = puVar8 & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    uVar2 = *puVar10;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar12 + 0x78);
    uVar14 = uVar11;
    puStack_140 = &stack0xffffffffffffff50;
    if ((*(uVar12 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &stack0xfffffffffffffeac;
        unaff_x30 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x30,&stack0xfffffffffffffeb0);
        if (iVar7 != 0) {
            uVar13 = _hyp_assign_table & 0x3f;
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            uVar14 = uVar2 * 8 + 0x1c;
            *(iStack_150 + 0x100) = ~(-1L << uVar13) & 0x800b30c;
            *(iStack_150 + 0x108) = 5;
            *(iVar7 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar7 + 0x10) = uVar14 | uVar2 << 0x13;
            *(iVar7 + 8) = *puVar10;
            if (*puVar10 != 0) {
                uVar13 = 0;
                puVar9 = puVar10 + 6;
                do {
                    iVar15 = uVar13 * 8;
                    uVar13 = uVar13 + 1;
                    *(iVar7 + 0x1c + iVar15) = *(puVar9 + -4);
                    *(iVar7 + (uVar14 & 0xfffc) + iVar15) = *puVar9;
                    puVar9 = puVar9 + 8;
                } while (uVar13 < *puVar10);
            }
            puVar9 = uStack_154;
            *(iVar7 + 0x14) = puVar8;
            *(iVar7 + 0x18) = uVar11;
            uVar14 = uVar12;
            perf_trace_run_bpf_submit(iVar7,unaff_x30,puVar9,uVar12,1,iStack_150,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_148) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar15 = auVar22._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_01 = 0x800b4ac;
    uStack_198 = 0x800b4ac;
    iVar7 = sp_el0;
    iStack_1a8 = *(iVar7 + 0x5e0);
    uVar11 = auVar22._8_8_ & 0xffffffff;
    piVar20 = *(iVar15 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar19 = piVar20;
    puStack_1a0 = &stack0xfffffffffffffec0;
    piStack_190 = piVar1;
    uStack_178 = uVar18;
    uStack_170 = uVar17;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar8 = puVar9;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar14 = 0;
            puStack_180 = puVar10;
            uStack_168 = uVar12;
            event_triggers_call(iVar15,0,0,0);
            auVar21._8_8_ = puStack_180;
            auVar21._0_8_ = uStack_168;
        }
        puStack_180 = auVar21._8_8_;
        uStack_168 = auVar21._0_8_;
        piStack_208 = piVar1;
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 &&
            (uVar12 = trace_event_ignore_this_pid(iVar15), auVar21._8_8_ = puStack_180, auVar21._0_8_ = uStack_168,
            (uVar12 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_180 = auVar21._8_8_;
    uStack_168 = auVar21._0_8_;
    uVar2 = *puVar9;
    piVar20 = uVar2;
    puVar8 = piVar20 * 0x10 + 0x18;
    iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffe28,iVar15);
    auVar21._8_8_ = puStack_180;
    auVar21._0_8_ = uStack_168;
    piStack_208 = piVar20;
    if (iVar7 != 0) {
        uVar19 = uVar2 << 0x13;
        uVar12 = piVar20 * 8 + 0x18;
        *(iVar7 + 8) = auVar22._8_4_;
        *(iVar7 + 0x10) = uVar19 | 0x18;
        *(iVar7 + 0x14) = uVar12 | uVar19;
        *(iVar7 + 0xc) = *puVar9;
        if (*puVar9 != 0) {
            uVar17 = 0;
            puVar10 = puVar9 + 6;
            do {
                iVar16 = uVar17 * 8;
                uVar17 = uVar17 + 1;
                *(iVar7 + 0x18 + iVar16) = *(puVar10 + -4);
                *(iVar7 + (uVar12 & 0xfff8) + iVar16) = *puVar10;
                puVar10 = puVar10 + 8;
            } while (uVar17 < *puVar9);
        }
        trace_event_buffer_commit(&stack0xfffffffffffffe28);
        auVar21._8_8_ = puStack_180;
        auVar21._0_8_ = uStack_168;
    }
code_r0x0800b5bc:
    puStack_180 = auVar21._8_8_;
    uStack_168 = auVar21._0_8_;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar12 = auVar23._0_8_;
    *extraout_x18_02 = sym.perf_trace_map_mem_s2;
    pcStack_228 = sym.perf_trace_map_mem_s2;
    pcStack_220 = sym.perf_trace_lookup_sgl;
    iVar7 = sp_el0;
    iStack_238 = *(iVar7 + 0x5e0);
    iStack_240 = 0;
    uStack_244 = 0;
    uVar2 = *puVar8;
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar12 + 0x78);
    puStack_230 = &stack0xfffffffffffffe60;
    uStack_210 = unaff_x30;
    piStack_200 = piVar20;
    iStack_1f8 = iVar15;
    uStack_1f0 = uVar11;
    puStack_1e8 = puVar9;
    if ((*(uVar12 + 0x80) != 0) || (puVar10 = puVar8, *piVar1 != 0)) {
        puVar10 = &stack0xfffffffffffffdbc;
        iVar5 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar7 = perf_trace_buf_alloc(iVar5,&stack0xfffffffffffffdc0,puVar10);
        if (iVar7 != 0) {
            uVar14 = _hyp_assign_table & 0x3f;
            *(iStack_240 + 0xe8) = &stack0xfffffffffffffdd0;
            *(iStack_240 + 0xf8) = &stack0xfffffffffffffdb0;
            uVar11 = uVar2 * 8 + 0x18;
            *(iStack_240 + 0x100) = ~(-1L << uVar14) & 0x800b5f4;
            *(iStack_240 + 0x108) = 5;
            *(iVar7 + 8) = auVar23._8_4_;
            *(iVar7 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar7 + 0x14) = uVar11 | uVar2 << 0x13;
            *(iVar7 + 0xc) = *puVar8;
            if (*puVar8 != 0) {
                uVar14 = 0;
                puVar10 = puVar8 + 6;
                do {
                    iVar15 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar7 + 0x18 + iVar15) = *(puVar10 + -4);
                    *(iVar7 + (uVar11 & 0xfff8) + iVar15) = *puVar10;
                    puVar10 = puVar10 + 8;
                } while (uVar14 < *puVar8);
            }
            puVar10 = uStack_244;
            perf_trace_run_bpf_submit(iVar7,iVar5,puVar10,uVar12,1,iStack_240,piVar1,0);
            uVar14 = uVar12;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_238) {
        auVar21 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_03 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_,puVar10 & 0xffffffff,uVar14 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_lookup_sgl @ 0x0800b1cc (size 320) =====

//WARNING: Removing unreachable block (ram,0x0800b3ec)
//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_lookup_sgl(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *puVar13;
    uint16_t *puVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    int64_t *piVar21;
    uint64_t unaff_x24;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [16];
    uchar auVar24 [12];
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uchar ***pppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    uint64_t uStack_1a0;
    int64_t *piStack_198;
    int64_t *piStack_190;
    int64_t iStack_188;
    uint64_t uStack_180;
    uint32_t *puStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t *piStack_120;
    uint16_t *puStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    uint16_t *puVar7;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar20 = *(arg1 + 0x48);
    uVar10 = arg4;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar8 = arg3;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar10 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) == 0))))
        goto code_r0x0800b248;
    }
    else {
code_r0x0800b248:
        uVar2 = *arg2;
        unaff_x24 = uVar2;
        puVar8 = unaff_x24 * 0x10 + 0x1c;
        iVar6 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar6 != 0) {
            uVar20 = uVar2 << 0x13;
            uVar5 = unaff_x24 * 8 + 0x1c;
            *(iVar6 + 0xc) = uVar20 | 0x1c;
            *(iVar6 + 0x10) = uVar5 | uVar20;
            *(iVar6 + 8) = *arg2;
            if (*arg2 != 0) {
                uVar11 = 0;
                puVar13 = arg2 + 0xc;
                do {
                    iVar16 = uVar11 * 8;
                    uVar11 = uVar11 + 1;
                    *(iVar6 + 0x1c + iVar16) = puVar13[-1];
                    *(iVar6 + (uVar5 & 0xfffc) + iVar16) = *puVar13;
                    puVar13 = puVar13 + 2;
                } while (uVar11 < *arg2);
            }
            *(iVar6 + 0x14) = arg3;
            *(iVar6 + 0x18) = arg4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar22 = __stack_chk_fail();
    puVar7 = auVar22._8_8_;
    uVar11 = auVar22._0_8_;
    *extraout_x18 = sym.perf_trace_lookup_sgl;
    pcStack_c8 = sym.perf_trace_lookup_sgl;
    iVar6 = sp_el0;
    iStack_d8 = *(iVar6 + 0x5e0);
    uVar18 = uVar10 & 0xffffffff;
    uVar19 = puVar8 & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    uVar2 = *puVar7;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar11 + 0x78);
    uVar5 = uVar10;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar11 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_e4;
        unaff_x24 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x24,&iStack_e0);
        if (iVar6 != 0) {
            uVar12 = _hyp_assign_table & 0x3f;
            *(iStack_e0 + 0xe8) = &puStack_d0;
            *(iStack_e0 + 0xf8) = auStack_f0;
            uVar5 = uVar2 * 8 + 0x1c;
            *(iStack_e0 + 0x100) = ~(-1L << uVar12) & 0x800b30c;
            *(iStack_e0 + 0x108) = 5;
            *(iVar6 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar6 + 0x10) = uVar5 | uVar2 << 0x13;
            *(iVar6 + 8) = *puVar7;
            if (*puVar7 != 0) {
                uVar12 = 0;
                puVar14 = puVar7 + 6;
                do {
                    iVar16 = uVar12 * 8;
                    uVar12 = uVar12 + 1;
                    *(iVar6 + 0x1c + iVar16) = *(puVar14 + -4);
                    *(iVar6 + (uVar5 & 0xfffc) + iVar16) = *puVar14;
                    puVar14 = puVar14 + 8;
                } while (uVar12 < *puVar7);
            }
            puVar9 = uStack_e4;
            *(iVar6 + 0x14) = puVar8;
            *(iVar6 + 0x18) = uVar10;
            uVar5 = uVar11;
            perf_trace_run_bpf_submit(iVar6,unaff_x24,puVar9,uVar11,1,iStack_e0,piVar1,0);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar16 = auVar23._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_00 = 0x800b4ac;
    uStack_128 = 0x800b4ac;
    iVar6 = sp_el0;
    iStack_138 = *(iVar6 + 0x5e0);
    uVar10 = auVar23._8_8_ & 0xffffffff;
    piVar21 = *(iVar16 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar20 = piVar21;
    ppuStack_130 = &puStack_d0;
    piStack_120 = piVar1;
    uStack_108 = uVar19;
    uStack_100 = uVar18;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar8 = puVar9;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar8 = NULL;
            uVar5 = 0;
            puStack_110 = puVar7;
            uStack_f8 = uVar11;
            event_triggers_call(iVar16,0,0,0);
            auVar22._8_8_ = puStack_110;
            auVar22._0_8_ = uStack_f8;
        }
        puStack_110 = auVar22._8_8_;
        uStack_f8 = auVar22._0_8_;
        piStack_198 = piVar1;
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 &&
            (uVar11 = trace_event_ignore_this_pid(iVar16), auVar22._8_8_ = puStack_110, auVar22._0_8_ = uStack_f8,
            (uVar11 & 1) != 0)))) goto code_r0x0800b5bc;
    }
    puStack_110 = auVar22._8_8_;
    uStack_f8 = auVar22._0_8_;
    uVar20 = *puVar9;
    piVar21 = uVar20;
    puVar8 = piVar21 * 0x10 + 0x18;
    iVar6 = trace_event_buffer_reserve(&uStack_168,iVar16);
    auVar22._8_8_ = puStack_110;
    auVar22._0_8_ = uStack_f8;
    piStack_198 = piVar21;
    if (iVar6 != 0) {
        uVar20 = uVar20 << 0x13;
        uVar11 = piVar21 * 8 + 0x18;
        *(iVar6 + 8) = auVar23._8_4_;
        *(iVar6 + 0x10) = uVar20 | 0x18;
        *(iVar6 + 0x14) = uVar11 | uVar20;
        *(iVar6 + 0xc) = *puVar9;
        if (*puVar9 != 0) {
            uVar18 = 0;
            puVar15 = puVar9 + 3;
            do {
                iVar17 = uVar18 * 8;
                uVar18 = uVar18 + 1;
                *(iVar6 + 0x18 + iVar17) = *(puVar15 + -2);
                *(iVar6 + (uVar11 & 0xfff8) + iVar17) = *puVar15;
                puVar15 = puVar15 + 4;
            } while (uVar18 < *puVar9);
        }
        trace_event_buffer_commit(&uStack_168);
        auVar22._8_8_ = puStack_110;
        auVar22._0_8_ = uStack_f8;
    }
code_r0x0800b5bc:
    puStack_110 = auVar22._8_8_;
    uStack_f8 = auVar22._0_8_;
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_138) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar11 = auVar24._0_8_;
    *extraout_x18_01 = sym.perf_trace_map_mem_s2;
    pcStack_1b8 = sym.perf_trace_map_mem_s2;
    pcStack_1b0 = sym.perf_trace_lookup_sgl;
    iVar6 = sp_el0;
    iStack_1c8 = *(iVar6 + 0x5e0);
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    uVar2 = *puVar8;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar11 + 0x78);
    pppuStack_1c0 = &ppuStack_130;
    uStack_1a0 = unaff_x24;
    piStack_190 = piVar21;
    iStack_188 = iVar16;
    uStack_180 = uVar10;
    puStack_178 = puVar9;
    if ((*(uVar11 + 0x80) != 0) || (puVar9 = puVar8, *piVar1 != 0)) {
        puVar9 = &uStack_1d4;
        iVar3 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_1d0,puVar9);
        if (iVar6 != 0) {
            uVar5 = _hyp_assign_table & 0x3f;
            *(iStack_1d0 + 0xe8) = &pppuStack_1c0;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            uVar10 = uVar2 * 8 + 0x18;
            *(iStack_1d0 + 0x100) = ~(-1L << uVar5) & 0x800b5f4;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar6 + 8) = auVar24._8_4_;
            *(iVar6 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar6 + 0x14) = uVar10 | uVar2 << 0x13;
            *(iVar6 + 0xc) = *puVar8;
            if (*puVar8 != 0) {
                uVar5 = 0;
                puVar9 = puVar8 + 3;
                do {
                    iVar16 = uVar5 * 8;
                    uVar5 = uVar5 + 1;
                    *(iVar6 + 0x18 + iVar16) = *(puVar9 + -2);
                    *(iVar6 + (uVar10 & 0xfff8) + iVar16) = *puVar9;
                    puVar9 = puVar9 + 4;
                } while (uVar5 < *puVar8);
            }
            puVar9 = uStack_1d4;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar9,uVar11,1,iStack_1d0,piVar1,0);
            uVar5 = uVar11;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_1c8) {
        auVar22 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_02 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar22._0_8_,auVar22._8_8_,puVar9 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_lookup_sgl @ 0x0800b30c (size 428) =====

//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.perf_trace_lookup_sgl(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    uint16_t *puVar6;
    uint16_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    uint16_t *puVar11;
    int64_t iVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    uint64_t unaff_x30;
    uchar auVar16 [12];
    uchar auVar17 [16];
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uVar13 = arg4 & 0xffffffff;
    uVar14 = arg3 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    uVar2 = *arg2;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(arg1 + 0x78);
    uVar8 = arg4;
    if ((*(arg1 + 0x80) != 0) || (puVar6 = arg3, *piVar1 != 0)) {
        puVar6 = &stack0xffffffffffffff9c;
        iVar3 = (uVar2 * 0x10 + 0x27 & 0x1ffff0) - 4;
        iVar5 = perf_trace_buf_alloc(iVar3,&stack0xffffffffffffffa0);
        if (iVar5 != 0) {
            uVar9 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar8 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar9 | unaff_x30;
            }
            uVar9 = uVar2 * 8 + 0x1c;
            *(iStack_60 + 0x100) = uVar8;
            *(iStack_60 + 0x108) = 5;
            *(iVar5 + 0xc) = uVar2 << 0x13 | 0x1c;
            *(iVar5 + 0x10) = uVar9 | uVar2 << 0x13;
            *(iVar5 + 8) = *arg2;
            if (*arg2 != 0) {
                uVar8 = 0;
                puVar10 = arg2 + 0xc;
                do {
                    iVar12 = uVar8 * 8;
                    uVar8 = uVar8 + 1;
                    *(iVar5 + 0x1c + iVar12) = puVar10[-1];
                    *(iVar5 + (uVar9 & 0xfffc) + iVar12) = *puVar10;
                    puVar10 = puVar10 + 2;
                } while (uVar8 < *arg2);
            }
            puVar6 = uStack_64;
            *(iVar5 + 0x14) = arg3;
            *(iVar5 + 0x18) = arg4;
            uVar8 = arg1;
            perf_trace_run_bpf_submit(iVar5,iVar3,puVar6,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar16 = __stack_chk_fail();
    iVar12 = auVar16._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800b4ac;
    uStack_a8 = 0x800b4ac;
    iVar5 = sp_el0;
    iStack_b8 = *(iVar5 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar15 = *(iVar12 + 0x48);
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    iStack_90 = arg2;
    uStack_88 = uVar14;
    uStack_80 = uVar13;
    iStack_78 = arg1;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar7 = puVar6;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar12,0,0,0);
        }
        if (((uVar15 >> 6 & 1) != 0) ||
           (((uVar15 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) != 0))))
        goto code_r0x0800b5bc;
    }
    uVar2 = *puVar6;
    puVar7 = uVar2 * 0x10 + 0x18;
    iVar5 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar12);
    if (iVar5 != 0) {
        uVar13 = uVar2 * 8 + 0x18;
        *(iVar5 + 8) = auVar16._8_4_;
        *(iVar5 + 0x10) = uVar2 << 0x13 | 0x18;
        *(iVar5 + 0x14) = uVar13 | uVar2 << 0x13;
        *(iVar5 + 0xc) = *puVar6;
        if (*puVar6 != 0) {
            uVar14 = 0;
            puVar11 = puVar6 + 6;
            do {
                iVar12 = uVar14 * 8;
                uVar14 = uVar14 + 1;
                *(iVar5 + 0x18 + iVar12) = *(puVar11 + -4);
                *(iVar5 + (uVar13 & 0xfff8) + iVar12) = *puVar11;
                puVar11 = puVar11 + 8;
            } while (uVar14 < *puVar6);
        }
        trace_event_buffer_commit(&stack0xffffffffffffff18);
    }
code_r0x0800b5bc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar16 = __stack_chk_fail();
    uVar13 = auVar16._0_8_;
    *extraout_x18_00 = sym.perf_trace_map_mem_s2;
    pcStack_138 = sym.perf_trace_map_mem_s2;
    iVar5 = sp_el0;
    iStack_148 = *(iVar5 + 0x5e0);
    iStack_150 = 0;
    uStack_154 = 0;
    uVar2 = *puVar7;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(uVar13 + 0x78);
    puStack_140 = &stack0xffffffffffffff50;
    if ((*(uVar13 + 0x80) != 0) || (puVar6 = puVar7, *piVar1 != 0)) {
        puVar6 = &stack0xfffffffffffffeac;
        iVar3 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar5 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffeb0,puVar6);
        if (iVar5 != 0) {
            uVar14 = _hyp_assign_table & 0x3f;
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            uVar8 = uVar2 * 8 + 0x18;
            *(iStack_150 + 0x100) = ~(-1L << uVar14) & 0x800b5f4;
            *(iStack_150 + 0x108) = 5;
            *(iVar5 + 8) = auVar16._8_4_;
            *(iVar5 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar5 + 0x14) = uVar8 | uVar2 << 0x13;
            *(iVar5 + 0xc) = *puVar7;
            if (*puVar7 != 0) {
                uVar14 = 0;
                puVar6 = puVar7 + 6;
                do {
                    iVar12 = uVar14 * 8;
                    uVar14 = uVar14 + 1;
                    *(iVar5 + 0x18 + iVar12) = *(puVar6 + -4);
                    *(iVar5 + (uVar8 & 0xfff8) + iVar12) = *puVar6;
                    puVar6 = puVar6 + 8;
                } while (uVar14 < *puVar7);
            }
            puVar6 = uStack_154;
            perf_trace_run_bpf_submit(iVar5,iVar3,puVar6,uVar13,1,iStack_150,piVar1,0);
            uVar8 = uVar13;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_148) {
        auVar17 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_01 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_,puVar6 & 0xffffffff,uVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_map_mem_s2 @ 0x0800b4b8 (size 316) =====

//WARNING: Removing unreachable block (ram,0x0800b6d0)

void sym.trace_event_raw_event_map_mem_s2(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint64_t in_x3;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *puVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [12];
    uchar auVar15 [16];
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar13 = *(arg1 + 0x48);
    if ((uVar13 >> 8 & 1) == 0) {
        puVar7 = arg3;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar7 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar13 >> 6 & 1) != 0) ||
           (((uVar13 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) != 0))))
        goto code_r0x0800b5bc;
    }
    uVar2 = *arg3;
    puVar7 = uVar2 * 0x10 + 0x18;
    iVar6 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar6 != 0) {
        uVar5 = uVar2 * 8 + 0x18;
        *(iVar6 + 8) = arg2;
        *(iVar6 + 0x10) = uVar2 << 0x13 | 0x18;
        *(iVar6 + 0x14) = uVar5 | uVar2 << 0x13;
        *(iVar6 + 0xc) = *arg3;
        if (*arg3 != 0) {
            uVar9 = 0;
            puVar11 = arg3 + 0xc;
            do {
                iVar12 = uVar9 * 8;
                uVar9 = uVar9 + 1;
                *(iVar6 + 0x18 + iVar12) = puVar11[-1];
                *(iVar6 + (uVar5 & 0xfff8) + iVar12) = *puVar11;
                puVar11 = puVar11 + 2;
            } while (uVar9 < *arg3);
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x0800b5bc:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar14 = __stack_chk_fail();
    uVar5 = auVar14._0_8_;
    *extraout_x18 = sym.perf_trace_map_mem_s2;
    pcStack_c8 = sym.perf_trace_map_mem_s2;
    iVar6 = sp_el0;
    iStack_d8 = *(iVar6 + 0x5e0);
    iStack_e0 = 0;
    uStack_e4 = 0;
    uVar2 = *puVar7;
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar5 + 0x80) != 0) || (puVar8 = puVar7, *piVar1 != 0)) {
        puVar8 = &uStack_e4;
        iVar3 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_e0,puVar8);
        if (iVar6 != 0) {
            uVar10 = _hyp_assign_table & 0x3f;
            *(iStack_e0 + 0xe8) = &puStack_d0;
            *(iStack_e0 + 0xf8) = auStack_f0;
            uVar9 = uVar2 * 8 + 0x18;
            *(iStack_e0 + 0x100) = ~(-1L << uVar10) & 0x800b5f4;
            *(iStack_e0 + 0x108) = 5;
            *(iVar6 + 8) = auVar14._8_4_;
            *(iVar6 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar6 + 0x14) = uVar9 | uVar2 << 0x13;
            *(iVar6 + 0xc) = *puVar7;
            if (*puVar7 != 0) {
                uVar10 = 0;
                puVar8 = puVar7 + 3;
                do {
                    iVar12 = uVar10 * 8;
                    uVar10 = uVar10 + 1;
                    *(iVar6 + 0x18 + iVar12) = *(puVar8 + -2);
                    *(iVar6 + (uVar9 & 0xfff8) + iVar12) = *puVar8;
                    puVar8 = puVar8 + 4;
                } while (uVar10 < *puVar7);
            }
            puVar8 = uStack_e4;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar8,uVar5,1,iStack_e0,piVar1,0);
            in_x3 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_d8) {
        auVar15 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x800b790;
        bpf_trace_run4(in_tmp_ldXn,auVar15._0_8_,auVar15._8_8_,puVar8 & 0xffffffff,in_x3 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_map_mem_s2 @ 0x0800b5f4 (size 424) =====

void sym.perf_trace_map_mem_s2(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong in_tmp_ldXn;
    int64_t iVar5;
    uchar *puVar6;
    uint64_t in_x3;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *puVar9;
    int64_t iVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    uVar2 = *arg3;
    iVar5 = tpidr_el1;
    piVar1 = iVar5 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (puVar6 = arg3, *piVar1 != 0)) {
        puVar6 = &stack0xffffffffffffff9c;
        iVar3 = (uVar2 * 0x10 + 0x23 & 0x1ffff0) - 4;
        iVar5 = perf_trace_buf_alloc(iVar3,&stack0xffffffffffffffa0,puVar6);
        if (iVar5 != 0) {
            uVar8 = -1L << (_hyp_assign_table & 0x3f);
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar7 = (~uVar8 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar7 = uVar8 | unaff_x30;
            }
            uVar8 = uVar2 * 8 + 0x18;
            *(iStack_60 + 0x100) = uVar7;
            *(iStack_60 + 0x108) = 5;
            *(iVar5 + 8) = arg2;
            *(iVar5 + 0x10) = uVar2 << 0x13 | 0x18;
            *(iVar5 + 0x14) = uVar8 | uVar2 << 0x13;
            *(iVar5 + 0xc) = *arg3;
            if (*arg3 != 0) {
                uVar7 = 0;
                puVar9 = arg3 + 0xc;
                do {
                    iVar10 = uVar7 * 8;
                    uVar7 = uVar7 + 1;
                    *(iVar5 + 0x18 + iVar10) = puVar9[-1];
                    *(iVar5 + (uVar8 & 0xfff8) + iVar10) = *puVar9;
                    puVar9 = puVar9 + 2;
                } while (uVar7 < *arg3);
            }
            puVar6 = uStack_64;
            perf_trace_run_bpf_submit(iVar5,iVar3,puVar6,arg1,1,iStack_60,piVar1,0);
            in_x3 = arg1;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return;
    }
    auVar11 = __stack_chk_fail();
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800b790;
    bpf_trace_run4(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_,puVar6 & 0xffffffff,in_x3 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_mem_buf_alloc_info @ 0x0800b79c (size 44) =====

void sym.__bpf_trace_mem_buf_alloc_info(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,in_x1,arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_alloc_req_msg_class @ 0x0800b7c8 (size 36) =====

void sym.__bpf_trace_alloc_req_msg_class(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_relinquish_req_msg_class @ 0x0800b7ec (size 36) =====

void sym.__bpf_trace_relinquish_req_msg_class(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_alloc_resp_class @ 0x0800b810 (size 36) =====

void sym.__bpf_trace_alloc_resp_class(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_relinquish_resp_class @ 0x0800b834 (size 36) =====

void sym.__bpf_trace_relinquish_resp_class(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1();
    return;
}


// ===== sym.__bpf_trace_lookup_sgl @ 0x0800b858 (size 44) =====

void sym.__bpf_trace_lookup_sgl(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,in_x1,arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_map_mem_s2 @ 0x0800b884 (size 40) =====

void sym.__bpf_trace_map_mem_s2(ulong noname_0,int64_t arg1)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,arg1 & 0xffffffff);
    return;
}


// ===== sym.mem_buf_vmid_perm_list_to_gh_acl @ 0x0800b8ac (size 136) =====

int * sym.mem_buf_vmid_perm_list_to_gh_acl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint uVar2;
    int *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = (arg3 & 0xffffffffU) * 4;
    piVar3 = __kmalloc(iVar5 + 4,0xcc0);
    if (piVar3 == NULL) {
        piVar3 = 0xfffffffffffffff4;
    }
    else {
        *piVar3 = arg3;
        if (arg3 != 0) {
            iVar4 = 0;
            do {
                uVar2 = *(arg2 + iVar4);
                iVar1 = iVar4 + 4;
                *(piVar3 + iVar4 + 4) = *(arg1 + iVar4);
                *(piVar3 + iVar4 + 6) = uVar2;
                iVar4 = iVar1;
            } while (iVar5 - iVar1 != 0);
        }
    }
    return piVar3;
}


// ===== sym.mem_buf_sgt_to_gh_sgl_desc @ 0x0800b934 (size 208) =====

ushort * sym.mem_buf_sgt_to_gh_sgl_desc(int64_t arg1)

{
    int64_t iVar1;
    ushort *puVar2;
    uint64_t *puVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = kvmalloc_node(*(arg1 + 0xc) << 4 | 4,0xcc0,0xffffffff);
    if (puVar2 == NULL) {
        puVar2 = 0xfffffffffffffff4;
    }
    else {
        *puVar2 = *(arg1 + 0xc);
        if (*(arg1 + 0xc) != 0) {
            uVar4 = 0;
            puVar3 = *arg1;
            do {
                iVar1 = uVar4;
                uVar4 = uVar4 + 1;
                *(puVar2 + iVar1 * 8 + 2) =
                     puVar3[1] + ((*puVar3 & 0x3fffffffffffffc) + (___stack_chk_fail >> 0xc) * 0x40) * 0x40 +
                     0x8000000000;
                *(puVar2 + iVar1 * 8 + 2 + 8) = *(puVar3 + 0xc);
                puVar3 = sg_next();
            } while (uVar4 < *(arg1 + 0xc));
        }
    }
    return puVar2;
}


// ===== sym.mem_buf_gh_acl_desc_to_vmid_perm_list @ 0x0800ba04 (size 300) =====

ulong sym.mem_buf_gh_acl_desc_to_vmid_perm_list(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        return 0xffffffea;
    }
    if (arg3 == 0) {
        return 0xffffffea;
    }
    uVar1 = *arg1;
    uVar14 = uVar1;
    iVar5 = __kmalloc(uVar14 << 2,0xcc0);
    if (iVar5 == 0) {
        return 0xfffffff4;
    }
    iVar6 = __kmalloc(uVar14 << 2,0xcc0);
    if (iVar6 != 0) {
        *arg2 = iVar5;
        *arg3 = iVar6;
        if (uVar1 == 0) {
            return 0;
        }
        if (uVar1 == 1) {
            uVar7 = 0;
        }
        else {
            uVar7 = uVar14 & 0xfffffffe;
            puVar8 = iVar6 + 4;
            puVar12 = iVar5 + 4;
            puVar9 = arg1 + 10;
            uVar13 = uVar7;
            do {
                uVar13 = uVar13 - 2;
                uVar4 = *(puVar9 + -2);
                uVar3 = puVar9[-4];
                uVar2 = *puVar9;
                puVar12[-1] = *(puVar9 + -6);
                *puVar12 = uVar4;
                puVar12 = puVar12 + 2;
                puVar8[-1] = uVar3;
                *puVar8 = uVar2;
                puVar8 = puVar8 + 2;
                puVar9 = puVar9 + 8;
            } while (uVar13 != 0);
            if (uVar7 == uVar14) {
                return 0;
            }
        }
        iVar11 = uVar7 * 4;
        iVar10 = uVar14 - uVar7;
        puVar8 = iVar6 + iVar11;
        puVar9 = iVar11 + arg1 + 6;
        puVar12 = iVar5 + iVar11;
        do {
            iVar10 = iVar10 + -1;
            uVar2 = *puVar9;
            *puVar12 = *(puVar9 + -2);
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 4;
            puVar12 = puVar12 + 1;
        } while (iVar10 != 0);
        return 0;
    }
    kfree(iVar5);
    return 0xfffffff4;
}


// ===== sym.dup_gh_sgl_desc_to_sgt @ 0x0800bb30 (size 284) =====

ulong * sym.dup_gh_sgl_desc_to_sgt(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    uint64_t *puVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*arg1 == 0)) {
        puVar3 = 0xffffffffffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x10);
        if (puVar3 == NULL) {
            puVar3 = 0xfffffffffffffff4;
        }
        else {
            iVar2 = sg_alloc_table(puVar3,*arg1,0xcc0);
            if (iVar2 == 0) {
                if (*(puVar3 + 1) != 0) {
                    uVar8 = 0;
                    puVar4 = *puVar3;
                    do {
                        iVar1 = arg1 + uVar8 * 0x10;
                        uVar8 = uVar8 + 1;
                        uVar7 = *(iVar1 + 4);
                        iVar6 = ___stack_chk_fail >> 0xc;
                        uVar5 = *(iVar1 + 0xc);
                        puVar4[2] = 0;
                        *(puVar4 + 3) = 0;
                        *(puVar4 + 1) = 0;
                        *(puVar4 + 0xc) = uVar5;
                        *puVar4 = ((uVar7 >> 6 & 0x3ffffffffffffc0) + iVar6 * -0x40 | *puVar4 & 3) - 0x200000000;
                        puVar4 = sg_next();
                    } while (uVar8 < *(puVar3 + 1));
                }
            }
            else {
                kfree(puVar3);
                puVar3 = 0xfffffffffffffff4;
            }
        }
    }
    return puVar3;
}


// ===== sym.dup_gh_sgl_desc @ 0x0800bc4c (size 124) =====

int64_t sym.dup_gh_sgl_desc(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = 0;
    }
    else {
        uVar1 = *arg1 << 4 | 4;
        iVar2 = kvmalloc_node(uVar1,0xcc0,0xffffffff);
        if (iVar2 == 0) {
            iVar2 = -0xc;
        }
        else {
            memcpy(iVar2,arg1,uVar1);
        }
    }
    return iVar2;
}


// ===== sym.mem_buf_get_sgl_buf_size @ 0x0800bcc8 (size 136) =====

int64_t sym.mem_buf_get_sgl_buf_size(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    
    uVar1 = *arg1;
    uVar3 = uVar1;
    if (uVar1 == 0) {
        iVar2 = 0;
    }
    else {
        if (uVar1 == 1) {
            uVar5 = 0;
            iVar2 = 0;
        }
        else {
            uVar5 = uVar3 & 0xfffe;
            iVar4 = 0;
            iVar2 = 0;
            piVar6 = arg1 + 0x1c;
            uVar7 = uVar5;
            do {
                uVar7 = uVar7 - 2;
                iVar4 = piVar6[-2] + iVar4;
                iVar2 = *piVar6 + iVar2;
                piVar6 = piVar6 + 4;
            } while (uVar7 != 0);
            iVar2 = iVar2 + iVar4;
            if (uVar5 == uVar3) {
                return iVar2;
            }
        }
        iVar4 = uVar3 - uVar5;
        piVar6 = arg1 + uVar5 * 0x10 + 0xc;
        do {
            iVar4 = iVar4 + -1;
            iVar2 = *piVar6 + iVar2;
            piVar6 = piVar6 + 2;
        } while (iVar4 != 0);
    }
    return iVar2;
}


// ===== sym.mem_buf_map_mem_s2 @ 0x0800bd50 (size 984) =====

uint64_t sym.mem_buf_map_mem_s2(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    uint in_w4;
    int16_t *piVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    int64_t *piVar13;
    uint8_t *puVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    ulong *in_x18;
    uint64_t *unaff_x19;
    uint64_t unaff_x20;
    int64_t *piVar19;
    uint64_t uVar20;
    uint unaff_w28;
    ulong unaff_x30;
    ulong uStack_98;
    uchar *puStack_90;
    uint *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar20 = 0xffffffea;
    iStack_68 = *(iVar7 + 0x5e0);
    if ((arg3 == 0) || (unaff_x19 = arg4, arg4 == 0)) goto code_r0x0800c030;
    unaff_w28 = *arg2;
    piVar10 = *arg4;
    if ((_segment.ehdr == 3) && ((piVar10 == NULL || (*piVar10 != 1)))) {
        uVar9 = 0x82;
    }
    else {
        uVar9 = 0x92;
    }
    unaff_x20 = gh_rm_mem_accept(unaff_w28,0,arg1 & 0xffffffff,uVar9,0,arg3,piVar10,0,0);
    if (0xfffffffffffff000 < unaff_x20) {
        _printk(0x800606a,"mem_buf_map_mem_s2",unaff_x20);
        uVar20 = unaff_x20 & 0xffffffff;
        goto code_r0x0800c030;
    }
    if (arg1 == 0) {
        *arg2 = 0xffffffff;
    }
    uStack_98 = CONCAT44(uStack_98._4_4_,in_w4);
    uVar6 = sym.dup_gh_sgl_desc_to_sgt(unaff_x20);
    if (uVar6 < 0xfffffffffffff001) {
        uVar1 = *arg3;
        uVar20 = uVar1;
        iVar7 = __kmalloc(uVar20 << 2,0xcc0);
        if (iVar7 == 0) {
            uVar20 = 0xfffffff4;
        }
        else {
            iVar8 = __kmalloc(uVar20 << 2,0xcc0);
            if (iVar8 == 0) {
                uVar20 = 0xfffffff4;
            }
            else {
                if (uVar1 != 0) {
                    if (uVar1 == 1) {
                        uVar11 = 0;
                    }
                    else {
                        uVar11 = uVar20 & 0xfffffffe;
                        puVar12 = iVar8 + 4;
                        puVar17 = iVar7 + 4;
                        puVar14 = arg3 + 10;
                        uVar18 = uVar11;
                        do {
                            uVar18 = uVar18 - 2;
                            uVar4 = *(puVar14 + -2);
                            uVar3 = puVar14[-4];
                            uVar2 = *puVar14;
                            puVar17[-1] = *(puVar14 + -6);
                            *puVar17 = uVar4;
                            puVar17 = puVar17 + 2;
                            puVar12[-1] = uVar3;
                            *puVar12 = uVar2;
                            puVar12 = puVar12 + 2;
                            puVar14 = puVar14 + 8;
                        } while (uVar18 != 0);
                        if (uVar11 == uVar20) goto code_r0x0800bfdc;
                    }
                    iVar16 = uVar11 * 4;
                    iVar15 = uVar20 - uVar11;
                    puVar12 = iVar8 + iVar16;
                    puVar14 = iVar16 + arg3 + 6;
                    puVar17 = iVar7 + iVar16;
                    do {
                        iVar15 = iVar15 + -1;
                        uVar2 = *puVar14;
                        *puVar17 = *(puVar14 + -2);
                        *puVar12 = uVar2;
                        puVar12 = puVar12 + 1;
                        puVar14 = puVar14 + 4;
                        puVar17 = puVar17 + 1;
                    } while (iVar15 != 0);
                }
code_r0x0800bfdc:
                uVar20 = sym.mem_buf_hyp_assign_table(uVar6,&uStack_98);
                uVar20 = uVar20 & 0xffffffff;
                kfree(iVar7);
                iVar7 = iVar8;
            }
            kfree(iVar7);
        }
        sg_free_table(uVar6);
        kfree(uVar6);
        iVar5 = uVar20;
    }
    else {
        uVar20 = uVar6 & 0xffffffff;
        iVar5 = uVar6;
    }
    if (iVar5 == 0) goto code_r0x0800c028;
    if (arg1 == 0) {
        puStack_90 = auStack_6c;
        puStack_88 = &uStack_70;
        uStack_78 = 0;
        uStack_70 = 7;
        uStack_98 = 1;
        uStack_80 = 0;
        uVar6 = sym.dup_gh_sgl_desc_to_sgt(unaff_x20);
        if (uVar6 < 0xfffffffffffff001) {
            iVar5 = sym.mem_buf_assign_mem_gunyah(0,uVar6,&uStack_98);
            if (iVar5 == 0) {
                *arg2 = uStack_80;
            }
            sg_free_table(uVar6);
            kfree(uVar6);
        }
        else {
            iVar5 = uVar6;
        }
    }
    else {
        iVar5 = gh_rm_mem_release(unaff_w28,0);
        if (iVar5 < 0) {
            _printk(0x800643f,"mem_buf_unmap_mem_s2",unaff_w28,iVar5);
            iVar5 = 1;
        }
    }
    if (unaff_x20 != *arg4) {
        kvfree(unaff_x20);
    }
    if (iVar5 != 0) {
        _printk(0x80060ff,"mem_buf_map_mem_s2");
        uVar20 = 0xffffff9d;
    }
code_r0x0800c030:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        iVar7 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar7 = sp_el0;
            *(iVar7 + 0x10) = *(iVar7 + 0x10) + 1;
            piVar19 = *0x800d6d8;
            piVar13 = *0x800d6d8;
            while (piVar13 != NULL) {
                (**piVar19)(piVar19[1],unaff_w28,unaff_x20);
                piVar19 = piVar19 + 3;
                piVar13 = *piVar19;
            }
            iVar8 = *(iVar7 + 0x10) + -1;
            *(iVar7 + 0x10) = iVar8;
            if ((iVar8 == 0) || (*(iVar7 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x0800c028:
        uVar20 = 0;
        *unaff_x19 = unaff_x20;
    }
    return uVar20;
}


// ===== sym.mem_buf_unmap_mem_s2 @ 0x0800c140 (size 96) =====

int sym.mem_buf_unmap_mem_s2(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gh_rm_mem_release(arg1,0);
    if (iVar1 < 0) {
        _printk(0x800643f,"mem_buf_unmap_mem_s2",arg1 & 0xffffffff,iVar1);
    }
    return iVar1;
}


// ===== sym.mem_buf_map_mem_s1 @ 0x0800c1a0 (size 204) =====

int sym.mem_buf_map_mem_s1(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg1 != 0) {
        uVar7 = 0;
        puVar6 = arg1 + -4;
        do {
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = tpidr_el1;
            iVar4 = add_memory_subsection(uVar3,0,uVar1,uVar2);
            if (iVar4 != 0) {
                _printk(0x8005e24,"mem_buf_map_mem_s1",uVar1,uVar2,iVar4);
                if (uVar7 == 0) {
                    return iVar4;
                }
                iVar5 = uVar7 + 1;
                do {
                    remove_memory_subsection(puVar6[-1],*puVar6);
                    iVar5 = iVar5 + -1;
                    puVar6 = puVar6 + -2;
                } while (1 < iVar5);
                return iVar4;
            }
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 2;
        } while (uVar7 < *arg1);
    }
    return 0;
}


// ===== sym.mem_buf_unmap_mem_s1 @ 0x0800c270 (size 184) =====

int sym.mem_buf_unmap_mem_s1(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg1 == 0) {
        iVar3 = 0;
    }
    else {
        uVar4 = 0;
        puVar5 = arg1 + 0xc;
        do {
            uVar1 = puVar5[-1];
            uVar2 = *puVar5;
            iVar3 = remove_memory_subsection(uVar1,uVar2);
            if (iVar3 != 0) {
                _printk(0x8005cab,"mem_buf_unmap_mem_s1",uVar1,uVar2,iVar3);
            }
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 2;
        } while (uVar4 < *arg1);
    }
    return iVar3;
}


// ===== sym.mem_buf_assign_mem_gunyah @ 0x0800c328 (size 576) =====

uint64_t sym.mem_buf_assign_mem_gunyah(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ushort *puVar4;
    uint64_t *puVar5;
    uint32_t *puVar6;
    uchar *puVar7;
    ulong *in_x18;
    uint *puVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    uint *puVar11;
    uint *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg1;
    puVar8 = arg3 + 0x18;
    *puVar8 = 0xffffffff;
    uVar3 = sym.mem_buf_vm_uses_gunyah(*(arg3 + 8),*arg3);
    if (uVar3 < 1) {
        puVar4 = uVar3;
        goto code_r0x0800c504;
    }
    puVar4 = kvmalloc_node(*(arg2 + 0xc) << 4 | 4,0xcc0,0xffffffff);
    if (puVar4 == NULL) {
        puVar4 = 0xfffffffffffffff4;
        goto code_r0x0800c504;
    }
    *puVar4 = *(arg2 + 0xc);
    if (*(arg2 + 0xc) != 0) {
        uVar3 = 0;
        puVar5 = *arg2;
        do {
            iVar1 = uVar3;
            uVar3 = uVar3 + 1;
            *(puVar4 + iVar1 * 8 + 2) =
                 puVar5[1] + ((*puVar5 & 0x3fffffffffffffc) + (___stack_chk_fail >> 0xc) * 0x40) * 0x40 + 0x8000000000;
            *(puVar4 + iVar1 * 8 + 2 + 8) = *(puVar5 + 0xc);
            puVar5 = sg_next();
        } while (uVar3 < *(arg2 + 0xc));
    }
    if (0xfffffffffffff000 < puVar4) goto code_r0x0800c504;
    uVar3 = *arg3;
    uVar10 = uVar3;
    puVar11 = *(arg3 + 8);
    puVar12 = *(arg3 + 0x10);
    puVar6 = __kmalloc(uVar10 * 4 + 4,0xcc0);
    if (puVar6 == NULL) {
        puVar9 = 0xfffffffffffffff4;
    }
    else {
        *puVar6 = uVar3;
        if (uVar3 != 0) {
            puVar7 = puVar6 + 6;
            do {
                uVar10 = uVar10 - 1;
                *(puVar7 + -2) = *puVar11;
                *puVar7 = *puVar12;
                puVar7 = puVar7 + 4;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
            } while (uVar10 != 0);
        }
        puVar9 = puVar6;
        if (puVar6 < 0xfffffffffffff001) {
            if (iVar2 == 0) {
                uVar10 = gh_rm_mem_donate(0,*(arg3 + 0x1c),*(arg3 + 0x20),puVar6,puVar4,0,puVar8);
code_r0x0800c4e8:
                puVar9 = uVar10 & 0xffffffff;
                if (-1 < uVar10) {
                    kfree(puVar6);
                    kvfree(puVar4);
                    puVar4 = NULL;
                    goto code_r0x0800c504;
                }
            }
            else {
                if (iVar2 == 2) {
                    uVar10 = gh_rm_mem_share(0,*(arg3 + 0x1c),*(arg3 + 0x20),puVar6,puVar4,0,puVar8);
                    goto code_r0x0800c4e8;
                }
                if (iVar2 == 1) {
                    uVar10 = gh_rm_mem_lend(0,*(arg3 + 0x1c),*(arg3 + 0x20),puVar6,puVar4,0,puVar8);
                    goto code_r0x0800c4e8;
                }
                _printk(0x8006127,arg1 & 0xffffffff);
                puVar9 = 0xffffffea;
            }
            _printk(0x8005fae,"mem_buf_assign_mem_gunyah",puVar9);
            kfree(puVar6);
        }
    }
    kvfree(puVar4);
    puVar4 = puVar9 & 0xffffffff;
code_r0x0800c504:
    return puVar4 & 0xffffffff;
}


// ===== sym.mem_buf_unassign_mem_gunyah @ 0x0800c568 (size 84) =====

int sym.mem_buf_unassign_mem_gunyah(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gh_rm_mem_reclaim(arg1,0);
    if (iVar1 != 0) {
        _printk(0x80064c3,"mem_buf_unassign_mem_gunyah");
    }
    return iVar1;
}


// ===== sym.trace_raw_output_mem_buf_alloc_info @ 0x0800c5bc (size 232) =====

void sym.trace_raw_output_mem_buf_alloc_info(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x20e8);
    iVar4 = trace_raw_output_prep(arg1,arg2);
    if (iVar4 == 1) {
        uVar1 = *(iVar8 + 0x10);
        uVar2 = *(iVar8 + 0x14);
        uVar3 = *(iVar8 + 0x18);
        uVar7 = *(iVar8 + 8);
        uVar5 = trace_print_array_seq(arg1 + 0x88,iVar8 + *(iVar8 + 0x1c),uVar1,2);
        uVar6 = trace_print_array_seq(arg1 + 0x88,iVar8 + *(iVar8 + 0x20),*(iVar8 + 0x10),1);
        trace_event_printf(arg1,
                           "size: 0x%lx src mem type: %s dst mem type: %s nr ACL entries: %d ACL VMIDs: %s ACL Perms: %s\n"
                           ,uVar7,iVar8 + uVar2,iVar8 + uVar3,uVar1,uVar5,uVar6);
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_alloc_req_msg_class @ 0x0800c6a4 (size 252) =====

void sym.trace_raw_output_alloc_req_msg_class(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0x20e8);
    iVar5 = trace_raw_output_prep(arg1,arg2);
    if (iVar5 == 1) {
        uVar1 = *(iVar9 + 0x1c);
        uVar3 = *(iVar9 + 0xc);
        uVar4 = *(iVar9 + 0x18);
        uVar2 = *(iVar9 + 8);
        uVar8 = *(iVar9 + 0x10);
        uVar6 = trace_print_array_seq(arg1 + 0x88,iVar9 + *(iVar9 + 0x20),uVar1,2);
        uVar7 = trace_print_array_seq(arg1 + 0x88,iVar9 + *(iVar9 + 0x24),*(iVar9 + 0x1c),1);
        trace_event_printf(arg1,
                           "txn_id: %d msg_type: %s alloc_sz: 0x%lx src_mem_type: %s nr ACL entries: %d ACL VMIDs: %s ACL Perms: %s\n"
                           ,uVar2,iVar9 + uVar3,uVar8,iVar9 + uVar4,uVar1,uVar6,uVar7);
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_relinquish_req_msg_class @ 0x0800c7a0 (size 116) =====

void sym.trace_raw_output_relinquish_req_msg_class(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"msg_type: %s memparcel_hdl: 0x%x txn_id: 0x%x\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc)
                           ,*(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_alloc_resp_class @ 0x0800c814 (size 120) =====

void sym.trace_raw_output_alloc_resp_class(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"txn_id: %d msg_type: %s ret: %d memparcel_hdl: 0x%x\n",*(iVar2 + 8),
                           iVar2 + *(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_relinquish_resp_class @ 0x0800c88c (size 116) =====

void sym.trace_raw_output_relinquish_resp_class(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"txn_id: %d msg_type: %s\n",*(iVar2 + 8),iVar2 + *(iVar2 + 0xc));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_lookup_sgl @ 0x0800c900 (size 188) =====

void sym.trace_raw_output_lookup_sgl(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ushort uVar1;
    int iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x20e8);
    iVar2 = trace_raw_output_prep(arg1,arg2);
    if (iVar2 == 1) {
        uVar1 = *(iVar5 + 8);
        uVar3 = trace_print_array_seq(arg1 + 0x88,iVar5 + *(iVar5 + 0xc),uVar1,8);
        uVar4 = trace_print_array_seq(arg1 + 0x88,iVar5 + *(iVar5 + 0x10),*(iVar5 + 8),8);
        trace_event_printf(arg1,"SGL entries: %d SGL IPA bases: %s SGL sizes: %s ret: %d memparcel_hdl: 0x%x\n",uVar1
                           ,uVar3,uVar4,*(iVar5 + 0x14),*(iVar5 + 0x18));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_map_mem_s2 @ 0x0800c9bc (size 200) =====

void sym.trace_raw_output_map_mem_s2(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    ushort uVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x20e8);
    iVar3 = trace_raw_output_prep(arg1,arg2);
    if (iVar3 == 1) {
        uVar2 = *(iVar6 + 0xc);
        uVar1 = *(iVar6 + 8);
        uVar4 = trace_print_array_seq(arg1 + 0x88,iVar6 + *(iVar6 + 0x10),uVar2,8);
        uVar5 = trace_print_array_seq(arg1 + 0x88,iVar6 + *(iVar6 + 0x14),*(iVar6 + 0xc),8);
        trace_event_printf(arg1,
                           "MEM_ACCEPT successful memparcel hdl: 0x%x SGL entries: %d SGL IPA bases: %s SGL sizes: %s\n"
                           ,uVar1,uVar2,uVar4,uVar5);
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.init_module @ 0x0800d168 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.mem_buf_probe.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800d19c (size 48) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mem_buf_vm_exit();
    platform_driver_unregister(reloc.mem_buf_probe.cfcb0aa7370d28f71e7d0e4a4a79144a.cfi_jt);
    return;
}

