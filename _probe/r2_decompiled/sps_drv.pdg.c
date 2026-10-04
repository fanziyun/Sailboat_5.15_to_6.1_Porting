// decompiled from sps_drv by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800e000 (size 1404) =====

//WARNING: Switch with 1 destination removed at 0x0801520c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 < -0x10ea6cc0de3ab92) {
            if (arg1 < -0x440645e37e83dcb8) {
                if (arg1 == -0x7caeced4a6941824) {
                    pcVar2 = sym.sps_disconnect.cfi_jt;
                }
                else {
                    if (arg1 == -0x4df2ebd3ddc640f9) {
                        pcVar2 = sym.sps_alloc_endpoint.cfi_jt;
                        goto code_r0x0800e56c;
                    }
                    if (arg1 != -0x46df3424102a65ba) goto code_r0x080151cc;
                    pcVar2 = sym.sps_pipe_inject_zlt.cfi_jt;
                }
code_r0x0800e534:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x080151cc;
            }
            if (arg1 < -0x3557318fb8d07b71) {
                if (arg1 == -0x440645e37e83dcb8) {
                    pcVar2 = sym.sps_register_event.cfi_jt;
                }
                else {
                    if (arg1 != -0x3987c0e26ee29729) goto code_r0x080151cc;
                    pcVar2 = sym.bam_isr.9faaddcfa9895f87836a89dfb5e9db4a.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x3557318fb8d07b71) {
                    pcVar2 = sym.msm_sps_probe.639189d76e9915dcda9027510d7b62b6.cfi_jt;
code_r0x0800e550:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x080151cc;
                }
                if (arg1 != -0x93263c2673dfe4a) goto code_r0x080151cc;
                pcVar2 = sym.sps_flow_off.cfi_jt;
            }
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x10ea6cc0de3ab92) {
                pcVar2 = sym.sps_phy2h.cfi_jt;
            }
            else if (arg1 == -0xd0e7791fc72e4b) {
                pcVar2 = sym.sps_transfer.cfi_jt;
            }
            else {
                if (arg1 != 0x16160375c26fc5) goto code_r0x080151cc;
                pcVar2 = sym.sps_ctrl_bam_dma_clk.cfi_jt;
            }
        }
        else if (arg1 < 0x7ff5a213d37b1a6) {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x572fad0dd6115aa) goto code_r0x080151cc;
                pcVar2 = sym.sps_get_unused_desc_num.cfi_jt;
                goto code_r0x0800e534;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.sps_read_logging_option.639189d76e9915dcda9027510d7b62b6.cfi_jt;
                goto code_r0x0800e550;
            }
            if (arg1 != 0x16cf95b8a41ccaee) goto code_r0x080151cc;
            pcVar2 = sym.sps_register_bam_device.cfi_jt;
        }
    }
    else if (arg1 < 0x49b2efcfd2342172) {
        if (arg1 < 0x2b352c0b577ceedb) {
            if (arg1 == 0x1d7ed092cb04d3f1) {
                pcVar2 = sym.sps_set_logging_option.639189d76e9915dcda9027510d7b62b6.cfi_jt;
                goto code_r0x0800e534;
            }
            if (arg1 == 0x1e6293417e792e1a) {
                pcVar2 = sym.sps_pipe_pending_desc.cfi_jt;
            }
            else {
                if (arg1 != 0x21dc6d62ec03fd34) goto code_r0x080151cc;
                pcVar2 = sym.sps_alloc_mem.cfi_jt;
            }
        }
        else if (arg1 < 0x3bbd61eca24d1d1b) {
            if (arg1 == 0x2b352c0b577ceedb) {
                pcVar2 = sym.sps_transfer_one.cfi_jt;
            }
            else {
                if (arg1 != 0x2dd8d70fd4a109c0) goto code_r0x080151cc;
                pcVar2 = sym.sps_get_bam_addr.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x3bbd61eca24d1d1b) {
                pcVar2 = sym.sps_connect.cfi_jt;
                goto code_r0x0800e534;
            }
            if (arg1 != 0x42a6efd9559312c5) goto code_r0x080151cc;
            pcVar2 = sym.sps_timer_ctrl.cfi_jt;
        }
    }
    else if (arg1 < 0x5b25abe30df04fc4) {
        if (arg1 < 0x4b40259be6df0e71) {
            if (arg1 == 0x49b2efcfd2342172) {
                pcVar2 = sym.sps_setup_bam2bam_fifo.cfi_jt;
            }
            else {
                if (arg1 != 0x4aa0f93ee7ca0009) goto code_r0x080151cc;
                pcVar2 = sym.sps_free_mem.cfi_jt;
            }
        }
        else if (arg1 == 0x4b40259be6df0e71) {
            pcVar2 = sym.sps_get_event.cfi_jt;
        }
        else {
            if (arg1 != 0x53d3e032abca2d40) goto code_r0x080151cc;
            pcVar2 = sym.sps_set_owner.cfi_jt;
        }
    }
    else if (arg1 < 0x66cd52ac124e7d6b) {
        if (arg1 == 0x5b25abe30df04fc4) {
            if ((pcVar1 + -0x800e660 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x080151cc;
        }
        if (arg1 != 0x65458d5ee0633a9e) goto code_r0x080151cc;
        pcVar2 = sym.sps_get_iovec.cfi_jt;
    }
    else if (arg1 == 0x66cd52ac124e7d6b) {
        pcVar2 = sym.sps_get_bam_debug_info.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080151cc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x0800e56c:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080151cc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8015220);
    (*pcVar1)();
}


// ===== sym.sps_alloc_endpoint.cfi_jt @ 0x0800e588 (size 8) =====

int64_t sym.sps_alloc_endpoint.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar1 = ___ratelimit(obj.sps_alloc_endpoint._rs,"sps_alloc_endpoint"), iVar1 != 0)))) {
        _printk(0x8004ef6,"sps_alloc_endpoint");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
        ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps: Enter\n","sps_alloc_endpoint");
    }
    iVar2 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x288);
    if (iVar2 != 0) {
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_client_init._rs,"sps_client_init"), iVar1 != 0)))) {
            _printk(0x80084da,"sps_client_init");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: Enter\n","sps_client_init");
        }
        memset(iVar2,0,0x288);
        *(iVar2 + 0x28) = 0xcccccccccccccccc;
        *(iVar2 + 0x30) = 0xcccccccccccccccc;
        *(iVar2 + 0x38) = 0xcccccccccccccccc;
        *(iVar2 + 0x40) = 0xcccccccccccccccc;
        *(iVar2 + 0x48) = 0xcccccccccccccccc;
        *(iVar2 + 0x50) = 0xcccccccccccccccc;
        *(iVar2 + 0x58) = 0xcccccccccccccccc;
        *(iVar2 + 0x60) = 0xcccccccccccccccc;
        *(iVar2 + 0x68) = 0xcccccccccccccccc;
        *(iVar2 + 0x70) = 0xcccccccccccccccc;
        *(iVar2 + 0x78) = 0xcccccccccccccccc;
        *(iVar2 + 0x80) = 0xcccccccccccccccc;
        *(iVar2 + 0x88) = 0xcccccccccccccccc;
        *(iVar2 + 0x90) = 0xcccccccccccccccc;
        *(iVar2 + 0x98) = 0xcccccccccccccccc;
        *(iVar2 + 0xa0) = 0xcccccccccccccccc;
        *(iVar2 + 0xa8) = 0xcccccccccccccccc;
        *(iVar2 + 0x18) = 0;
        *(iVar2 + 0x20) = 0xcccccccccccccccc;
    }
    return iVar2;
}


// ===== sym.sps_set_owner.cfi_jt @ 0x0800e590 (size 8) =====

int sym.sps_set_owner.cfi_jt(int64_t param_1,int param_2,ulong *param_3)

{
    int iVar1;
    int64_t arg1;
    ulong uVar2;
    char *pcVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_set_owner._rs,"sps_set_owner"), iVar1 != 0)))
           ) {
            _printk(0x80074f8,"sps_set_owner");
        }
        if (_segment.ehdr != 0) {
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar3 = "%s: sps: pipe is NULL\n";
code_r0x0801edb4:
            ipc_log_string(uVar2,pcVar3,"sps_set_owner");
            return -1;
        }
    }
    else if (param_3 == NULL) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_set_owner._rs.115,"sps_set_owner"), iVar1 != 0)))) {
            _printk(0x8004eb8,"sps_set_owner");
        }
        if (_segment.ehdr != 0) {
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar3 = "%s: sps: connection is NULL\n";
            goto code_r0x0801edb4;
        }
    }
    else if (param_2 == 2) {
        arg1 = sym.sps_bam_lock(param_1);
        if (arg1 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_set_owner._rs.119,"sps_set_owner"), iVar1 != 0)))) {
                _printk(0x8008153,"sps_set_owner",arg1 + 0x18,*(param_1 + 0xbc));
            }
            if (*(arg1 + 0x238) == 0) {
                ipc_log_string(*(arg1 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_set_owner",arg1 + 0x18,
                               *(param_1 + 0xbc));
            }
            iVar1 = sym.sps_bam_set_satellite(arg1,*(param_1 + 0xbc));
            if (iVar1 == 0) {
                if (*(param_1 + 0x4c) == 0) {
                    *param_3 = *(*(param_1 + 0xb0) + 0x18);
                    puVar4 = *(param_1 + 0xb0) + 0x20;
                }
                else {
                    *param_3 = *(*(param_1 + 0xb0) + 0x40);
                    puVar4 = *(param_1 + 0xb0) + 0x48;
                }
                *(param_3 + 1) = *puVar4;
                *(param_3 + 0xc) = 0x11111111;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return iVar1;
        }
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_set_owner._rs.116,"sps_set_owner"), iVar1 != 0)))) {
            _printk(0x80095a6,"sps_set_owner",param_2);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Unsupported ownership state: %d\n","sps_set_owner",
                           param_2);
        }
    }
    return -1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800e598 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_sps_probe.639189d76e9915dcda9027510d7b62b6.cfi_jt);
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    debugfs_remove(0);
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x0800e5a0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.debugfs_record_enabled = 0x0;
    obj.logging_option = 0x0;
    obj.debug_level_option = 0x0;
    obj.reg_dump_option = 0x0;
    obj.print_limit_option = 0x0;
    _segment.ehdr = *0x8000004 << 0x20;
    obj.wraparound = 0x0;
    _segment.ehdr = debugfs_create_dir(0x80050cc,0);
    if (_segment.ehdr < 0xfffffffffffff001) {
        _segment.ehdr = debugfs_create_file("info",0x1b4,_segment.ehdr,0,obj.sps_info_ops);
        uVar1 = 0x800b809;
        if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
            _segment.ehdr = debugfs_create_file("logging_option",0x1b4,_segment.ehdr,0,obj.sps_logging_option_ops);
            uVar1 = 0x800b3a0;
            if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
                debugfs_create_u8("debug_level_option",0x1b4,_segment.ehdr,obj.debug_level_option);
                debugfs_create_u8("print_limit_option",0x1b4,_segment.ehdr,obj.print_limit_option);
                debugfs_create_u8("reg_dump_option",0x1b4,_segment.ehdr,obj.reg_dump_option);
                debugfs_create_u32("testbus_sel",0x1b4,_segment.ehdr,obj.testbus_sel);
                debugfs_create_u32("bam_pipe_sel",0x1b4,_segment.ehdr,obj.bam_pipe_sel);
                debugfs_create_u32("desc_option",0x1b4,_segment.ehdr,obj.desc_option);
                _segment.ehdr = debugfs_create_file("bam_addr",0x1b4,_segment.ehdr,0,obj.sps_bam_addr_ops);
                uVar1 = 0x8004676;
                if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
                    debugfs_create_u32("log_level_sel",0x1b4,_segment.ehdr,obj.log_level_sel);
                    __mutex_init(obj.sps_debugfs_lock,"&sps_debugfs_lock",obj.sps_debugfs_init.__key);
                    goto code_r0x080268c0;
                }
            }
        }
        _printk(uVar1);
        debugfs_remove(_segment.ehdr);
    }
    else {
        _printk(0x8007a94);
    }
code_r0x080268c0:
    _segment.ehdr = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x128);
    if (_segment.ehdr == 0) {
        uVar1 = 0xfffffff4;
    }
    else {
        iVar2 = ipc_log_context_create(10,"sps_ipc_log0",0);
        *(_segment.ehdr + 0xf8) = iVar2;
        if (iVar2 == 0) {
            _printk(0x800b054);
        }
        iVar2 = ipc_log_context_create(10,"sps_ipc_log1",0);
        *(_segment.ehdr + 0x100) = iVar2;
        if (iVar2 == 0) {
            _printk(0x80081c7);
        }
        iVar2 = ipc_log_context_create(10,"sps_ipc_log2",0);
        *(_segment.ehdr + 0x108) = iVar2;
        if (iVar2 == 0) {
            _printk(0x80075d5);
        }
        iVar2 = ipc_log_context_create(10,"sps_ipc_log3",0);
        *(_segment.ehdr + 0x110) = iVar2;
        if (iVar2 == 0) {
            _printk(0x8004f3d);
        }
        iVar2 = ipc_log_context_create(0x1e,"sps_ipc_log4",0);
        *(_segment.ehdr + 0x118) = iVar2;
        if (iVar2 == 0) {
            _printk(0x8007a77);
        }
        uVar1 = __platform_driver_register
                          (reloc.msm_sps_probe.639189d76e9915dcda9027510d7b62b6.cfi_jt,obj.__this_module);
    }
    return uVar1;
}


// ===== sym.sps_pipe_pending_desc.cfi_jt @ 0x0800e5a8 (size 8) =====

ulong sym.sps_pipe_pending_desc.cfi_jt(int64_t param_1,uint32_t param_2,uint8_t *param_3)

{
    uint8_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t arg1;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs,"sps_pipe_pending_desc"), iVar2 != 0)))) {
            _printk(0x800c13f,"sps_pipe_pending_desc");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM handle is NULL\n";
    }
    else if (param_2 < 0x1f) {
        if (param_3 == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs.237,"sps_pipe_pending_desc"), iVar2 != 0)))) {
                _printk(0x8006c04,"sps_pipe_pending_desc");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: input flag is NULL\n";
        }
        else {
            arg1 = sym.sps_h2bam(param_1);
            if (arg1 != 0) {
                if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs.243,"sps_pipe_pending_desc"), iVar2 != 0)))) {
                    _printk(0x8008153,"sps_pipe_pending_desc",arg1 + 0x18,param_2);
                }
                if (*(arg1 + 0x238) == 0) {
                    ipc_log_string(*(arg1 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_pipe_pending_desc",
                                   arg1 + 0x18,param_2);
                }
                uVar1 = sym.sps_bam_pipe_pending_desc(arg1,param_2);
                *param_3 = uVar1 & 1;
                return 0;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs.240,"sps_pipe_pending_desc"), iVar2 != 0)))) {
                _printk(0x8006c23,"sps_pipe_pending_desc");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: :BAM is not found by handle\n";
        }
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs.236,"sps_pipe_pending_desc"), iVar2 != 0)))) {
            _printk(0x80081a5,"sps_pipe_pending_desc");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe index is invalid\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_pipe_pending_desc");
    return 0xffffffff;
}


// ===== sym.sps_register_bam_device.cfi_jt @ 0x0800e5b0 (size 8) =====

uint8_t * sym.sps_register_bam_device.cfi_jt(uint8_t *param_1,ulong *param_2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t *arg1;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *puVar9;
    ulong *unaff_x20;
    uint8_t *puVar10;
    code *unaff_x25;
    int64_t unaff_x26;
    ulong unaff_x30;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
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
    if (param_1 == NULL) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs,"sps_register_bam_device"), iVar3 != 0)))) {
            _printk(0x8007098,"sps_register_bam_device");
        }
        if (_segment.ehdr == 0) goto code_r0x0801fbc4;
        uVar5 = *(_segment.ehdr + 0x110);
        pcVar7 = "%s: sps: bam_props is NULL\n";
    }
    else {
        unaff_x25 = segment.ehdr;
        if (param_2 != NULL) {
            if (_segment.ehdr != 0) {
                unaff_x26 = 0x8000000;
                iVar8 = _segment.ehdr;
                if (obj.logging_option < 2) goto code_r0x0801f9d0;
                if (obj.debug_level_option != 0x0) goto code_r0x08020378;
                goto code_r0x080201e0;
            }
            _printk(0x800b309);
            param_1 = 0xfffffdfb;
            goto code_r0x08020198;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.158,"sps_register_bam_device"), iVar3 != 0)))) {
            _printk(0x800aab4,"sps_register_bam_device");
        }
        unaff_x20 = param_2;
        if (_segment.ehdr == 0) goto code_r0x0801fbc4;
        uVar5 = *(_segment.ehdr + 0x110);
        pcVar7 = "%s: sps: device handle is NULL\n";
    }
    ipc_log_string(uVar5,pcVar7,"sps_register_bam_device");
code_r0x0801fbc4:
    do {
        param_1 = 0xffffffff;
        param_2 = unaff_x20;
code_r0x08020198:
        while( true ) {
            while( true ) {
                iVar8 = sp_el0;
                if (*(iVar8 + 0x5e0) == iStack_58) {
                    return param_1;
                }
                __stack_chk_fail();
code_r0x08020378:
                if ((obj.print_limit_option == 0x0) ||
                   (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.162,"sps_register_bam_device"), iVar3 != 0))
                {
                    _printk(0x80079e4,"sps_register_bam_device",param_1 + 8);
                }
code_r0x080201e0:
                iVar8 = *unaff_x25;
                if (iVar8 != 0) {
code_r0x0801f9d0:
                    if (*(iVar8 + 0x120) < 4) {
                        ipc_log_string(*(iVar8 + 0x110),"%s: sps: Client requests to register BAM %pa\n",
                                       "sps_register_bam_device",param_1 + 8);
                        iVar8 = *unaff_x25;
                    }
                }
                if ((*(iVar8 + 0x30) != 0) || ((*param_1 >> 2 & 1) != 0)) break;
                if ((*(unaff_x26 + 0x408) != '\x01') &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.165,"sps_register_bam_device"), iVar3 != 0))
                   )) {
                    _printk(0x800a28f,"sps_register_bam_device");
                }
                if (*unaff_x25 == 0) {
                    param_1 = 0xfffffff5;
                }
                else {
                    ipc_log_string(*(*unaff_x25 + 0x110),"%s: sps: sps driver not ready\n","sps_register_bam_device");
                    param_1 = 0xfffffff5;
                }
            }
            unaff_x20 = param_2;
            if ((((*(param_1 + 0x68) ^ 0xffffffff) & 0x1d) != 0) &&
               ((*(param_1 + 0x10) == 0 && (*(param_1 + 0x18) == 0)))) {
                if ((*(unaff_x26 + 0x408) != '\x01') &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.166,"sps_register_bam_device"), iVar3 != 0))
                   )) {
                    _printk(0x800c6ad,"sps_register_bam_device",param_1 + 8);
                }
                if (*unaff_x25 == 0) goto code_r0x0801fbc4;
                uVar5 = *(*unaff_x25 + 0x110);
                pcVar7 = "%s: sps:Invalid properties for BAM: %pa\n";
                goto code_r0x08020054;
            }
            if (((*(param_1 + 0x68) & 1) == 0) && (*(param_1 + 0x24) == 0)) break;
            *param_2 = 0;
            mutex_lock(*unaff_x25 + 0x70);
            puVar10 = param_1 + 8;
            iVar8 = sym.phy2bam(*puVar10);
            if (iVar8 == 0) {
                if ((((*(param_1 + 0x68) ^ 0xffffffff) & 0x1d) != 0) && (*(param_1 + 0x10) == 0)) {
                    uVar5 = 0x68000000000713;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar5 = 0x68000000000f13;
                    }
                    iVar8 = __ioremap(*(param_1 + 8),*(param_1 + 0x18),uVar5);
                    if (iVar8 != 0) goto code_r0x0801fbe8;
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.175,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8008d49,"sps_register_bam_device",puVar10,*(param_1 + 0x18));
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: sps:Unable to map BAM IO mem:%pa size:0x%x\n",
                                       "sps_register_bam_device",puVar10,*(param_1 + 0x18));
                    }
code_r0x08020188:
                    param_1 = 0xffffffff;
                    goto code_r0x0802018c;
                }
                iVar8 = 0;
code_r0x0801fbe8:
                arg1 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x340);
                if (arg1 == NULL) goto code_r0x08020188;
                memset(arg1,0,0x340);
                piVar1 = arg1 + 0x15;
                __mutex_init(piVar1,"&bam->lock",obj.bam_init._rs.5);
                mutex_lock(piVar1);
                memcpy(arg1 + 2,param_1,0x90);
                if (iVar8 != 0) {
                    arg1[4] = iVar8;
                }
                piVar2 = arg1 + 3;
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_0",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1[0x42] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.180,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8005de4,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 0 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_1",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1[0x43] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.184,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x800aad6,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 1 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_2",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1[0x44] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.188,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8009d88,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 2 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_3",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1[0x45] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.192,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8007a49,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 3 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_4",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1[0x46] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.196,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8008177,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 4 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                iVar3 = 3;
                if (*(param_1 + 0x74) != 0) {
                    iVar3 = *(param_1 + 0x74);
                }
                *(arg1 + 0x47) = iVar3;
                iVar3 = sym.sps_bam_device_init(arg1);
                mutex_unlock(piVar1);
                if (iVar3 == 0) {
                    iVar8 = *unaff_x25;
                    puVar9 = *(iVar8 + 0xa8);
                    uVar6 = __list_add_valid(arg1,puVar9,iVar8 + 0xa0);
                    if ((uVar6 & 1) != 0) {
                        *(iVar8 + 0xa8) = arg1;
                        *arg1 = iVar8 + 0xa0;
                        arg1[1] = puVar9;
                        *puVar9 = arg1;
                    }
                    *param_2 = arg1;
                    mutex_unlock(*unaff_x25 + 0x70);
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 2 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.202,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x80095d2,"sps_register_bam_device",piVar2);
                    }
                    ipc_log_string(arg1[0x45],"%s: sps:BAM %pa is registered\n","sps_register_bam_device",piVar2);
                    param_1 = NULL;
                }
                else {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.199,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x800af9c,"sps_register_bam_device",piVar2);
                    }
                    ipc_log_string(arg1[0x45],"%s: sps:Fail to init BAM device: phys %pa\n","sps_register_bam_device"
                                   ,piVar2);
                    mutex_unlock(*unaff_x25 + 0x70);
                    if (iVar8 != 0) {
                        iounmap(arg1[4]);
                    }
                    kfree(arg1);
                    param_1 = 0xffffffff;
                }
            }
            else {
                mutex_unlock(*unaff_x25 + 0x70);
                if ((*(unaff_x26 + 0x408) != '\x01') &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.172,"sps_register_bam_device"), iVar3 != 0))
                   )) {
                    _printk(0x800cbf5,"sps_register_bam_device",iVar8 + 0x18);
                }
                if (*unaff_x25 != 0) {
                    ipc_log_string(*(*unaff_x25 + 0x110),"%s: sps:BAM is already registered: %pa\n",
                                   "sps_register_bam_device",iVar8 + 0x18);
                }
                param_1 = 0xffffffef;
code_r0x0802018c:
                mutex_unlock(*unaff_x25 + 0x70);
            }
        }
        if ((*(unaff_x26 + 0x408) != '\x01') &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.169,"sps_register_bam_device"), iVar3 != 0)))) {
            _printk(0x800751f,"sps_register_bam_device",param_1 + 8);
        }
        if (*unaff_x25 != 0) {
            uVar5 = *(*unaff_x25 + 0x110);
            pcVar7 = "%s: sps:Invalid device ctrl properties for BAM: %pa\n";
code_r0x08020054:
            ipc_log_string(uVar5,pcVar7,"sps_register_bam_device",param_1 + 8);
        }
    } while( true );
}


// ===== sym.sps_timer_ctrl.cfi_jt @ 0x0800e5b8 (size 8) =====

uint sym.sps_timer_ctrl.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs,"sps_timer_ctrl"), iVar2 != 0)
            ))) {
            _printk(0x80074f8,"sps_timer_ctrl");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else if (param_2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs.218,"sps_timer_ctrl"), iVar2 != 0)))) {
            _printk(0x8004b85,"sps_timer_ctrl");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: timer_ctrl pointer is NULL\n";
    }
    else {
        if (param_3 == 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs.221,"sps_timer_ctrl"), iVar2 != 0)))) {
                _printk(0x800c0f2,"sps_timer_ctrl");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
                ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps: no result to return\n","sps_timer_ctrl");
            }
        }
        arg1 = sym.sps_bam_lock(param_1);
        if (arg1 != 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs.225,"sps_timer_ctrl"), iVar2 != 0)))) {
                _printk(0x8008153,"sps_timer_ctrl",arg1 + 0x18,*(param_1 + 0xbc));
            }
            if (*(arg1 + 0x238) < 3) {
                ipc_log_string(*(arg1 + 0x220),"%s: sps: BAM: %pa; pipe index:%d\n","sps_timer_ctrl",arg1 + 0x18,
                               *(param_1 + 0xbc));
            }
            uVar1 = sym.sps_bam_pipe_timer_ctrl(arg1,*(param_1 + 0xbc),param_2,param_3);
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs.224,"sps_timer_ctrl"), iVar2 != 0)))) {
            _printk(0x8007556,"sps_timer_ctrl");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_timer_ctrl");
    return 0xffffffff;
}


// ===== sym.sps_read_logging_option.639189d76e9915dcda9027510d7b62b6.cfi_jt @ 0x0800e5c0 (size 8) =====

uint64_t sym.sps_read_logging_option.639189d76e9915dcda9027510d7b62b6.cfi_jt
                   (ulong param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t *arg1;
    ulong *puVar1;
    ulong *puVar2;
    code cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int *piVar9;
    int64_t iVar10;
    ulong uVar11;
    ulong extraout_x1;
    ulong extraout_x1_00;
    char *pcVar12;
    uint uVar13;
    ulong *puVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_b0;
    ulong uStack_a0;
    uint64_t uStack_98;
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
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
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
    iVar5 = scnprintf(&uStack_88,0x50,0x8008dc5,obj.logging_option);
    uVar15 = param_4;
    uVar7 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_88,iVar5);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.sps_set_logging_option;
    pcStack_b8 = sym.sps_set_logging_option;
    iVar8 = sp_el0;
    iStack_c8 = *(iVar8 + 0x5e0);
    uVar7 = 10;
    uStack_cc = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    uStack_b0 = param_2;
    uStack_a0 = param_3;
    uStack_98 = param_4;
    iVar5 = kstrtouint_from_user(extraout_x1,uVar15,10,&uStack_cc);
    if (iVar5 == 0) {
        _printk(0x8004bdf,uStack_cc);
        if (uStack_cc < 4) {
            mutex_lock(obj.sps_debugfs_lock);
            if (((uStack_cc & 0xfffffffd) == 0) && ((obj.logging_option & 0xfd) == 1)) {
                obj.debugfs_record_enabled = 0x0;
                kfree(_segment.ehdr);
                _segment.ehdr = NULL;
                obj.wraparound = 0x0;
            }
            obj.logging_option = SUB41(uStack_cc,0);
            mutex_unlock(obj.sps_debugfs_lock);
        }
        else {
            _printk(0x80081f0);
        }
    }
    else {
        uVar15 = iVar5;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return uVar15;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.sps_set_bam_addr;
    pcStack_108 = sym.sps_set_bam_addr;
    iVar8 = sp_el0;
    iStack_118 = *(iVar8 + 0x5e0);
    uStack_11c = 0;
    ppuStack_110 = &puStack_c0;
    uVar6 = kstrtouint_from_user(extraout_x1_00,uVar7,10,&uStack_11c);
    if (uVar6 != 0) {
        uVar7 = uVar6;
        goto code_r0x080227c0;
    }
    _printk(0x8007e91,uStack_11c);
    iVar8 = sym.phy2bam(uStack_11c);
    if (iVar8 == 0) {
        _printk(0x80099a0,uStack_11c);
        goto code_r0x080227c0;
    }
    if (_segment.ehdr < 5) {
        *(iVar8 + 0x238) = _segment.ehdr;
    }
    if (0x62 < obj.reg_dump_option - 1) {
code_r0x08023088:
        _printk(0x800cd06);
        goto code_r0x080227c0;
    }
    uVar6 = *(iVar8 + 0x30);
    uVar15 = uVar6;
    arg1 = iVar8 + 0xd8;
    switch(obj.reg_dump_option) {
    case 1:
        sym.print_bam_reg(*arg1);
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1,uVar15);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 2:
        sym.print_bam_reg(*arg1);
        break;
    case 3:
code_r0x08022f94:
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        break;
    case 4:
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar15);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 5:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 6:
        sym.print_bam_pipe_selected_reg(arg1,4);
        sym.print_bam_pipe_selected_reg(arg1,5);
        break;
    case 7:
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1,uVar15,0);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 8:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 9:
        sym.print_bam_pipe_desc_fifo(arg1,4,0);
        goto code_r0x08022a84;
    case 10:
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar15);
                sym.print_bam_pipe_desc_fifo(arg1,uVar15,0);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 0xb:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0xc:
        sym.print_bam_pipe_selected_reg(arg1,4);
        sym.print_bam_pipe_desc_fifo(arg1,4,0);
        sym.print_bam_pipe_selected_reg(arg1,5);
code_r0x08022a84:
        sym.print_bam_pipe_desc_fifo(arg1,5,0);
        break;
    case 0xd:
        if (_segment.ehdr == 0) {
            _printk(0x8004f84);
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        break;
    case 0xe:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0xf:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x10:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_reg(*arg1,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    default:
        goto code_r0x08023088;
    case 0x5b:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar15);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 0x5c:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x5d:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
            uVar17 = 0;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x5e:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x5f:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
            uVar17 = 0;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x60:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x61:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
            uVar17 = 0;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
            uVar17 = 0;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x62:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar17 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,0);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar17 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 99:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_reg(*arg1);
        if (uVar6 == 0) goto code_r0x08022f94;
        uVar15 = 0;
        do {
            sym.print_bam_pipe_reg(*arg1,uVar15);
            uVar16 = uVar15 + 1;
            uVar15 = uVar16;
        } while (uVar6 != uVar16);
        sym.print_bam_selected_reg(arg1,*(iVar8 + 0x80));
        uVar16 = 0;
        do {
            sym.print_bam_pipe_selected_reg(arg1,uVar16);
            uVar16 = uVar16 + 1;
        } while (uVar6 != uVar16);
        uVar16 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1,uVar16,0);
            uVar16 = uVar16 + 1;
        } while (uVar6 != uVar16);
        uVar15 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1,uVar15,100);
            uVar16 = uVar15 + 1;
            uVar15 = uVar16;
        } while (uVar6 != uVar16);
    }
code_r0x080227c0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_118) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18_01 = sym.msm_sps_probe;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar5 = ___ratelimit(obj.msm_sps_probe._rs,"msm_sps_probe"), iVar5 != 0))))
    {
        _printk(0x8004ef6,"msm_sps_probe");
    }
    if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Enter\n","msm_sps_probe");
    }
    if (*(iVar8 + 0x300) == 0) {
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.get_platform_data._rs,"get_platform_data"), iVar5 != 0)))) {
            _printk(0x8004ef6,"get_platform_data");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Enter\n","get_platform_data");
        }
        uVar15 = _segment.ehdr;
        if (*(iVar8 + 0xa0) == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.get_platform_data._rs.376,"get_platform_data"), iVar5 != 0)))) {
                _printk(0x800bc66,"get_platform_data");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: invalid platform data\n","get_platform_data");
            }
            cVar3 = obj.logging_option;
            *(_segment.ehdr + 0x68) = 0;
            if ((cVar3 != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.341,"msm_sps_probe"), iVar5 != 0)))) {
                _printk(0x8005e33,"msm_sps_probe");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: :Fail to get platform data\n","msm_sps_probe");
                return 0xffffffed;
            }
            return 0xffffffed;
        }
        uVar13 = **(iVar8 + 0xa0);
        bVar4 = 1 < obj.logging_option;
        *(_segment.ehdr + 0x68) = uVar13;
        if ((bVar4) && (uVar15 = _segment.ehdr, obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option != 0x0) {
                iVar5 = ___ratelimit(obj.get_platform_data._rs.379,"get_platform_data");
                uVar15 = _segment.ehdr;
                if (iVar5 == 0) goto joined_r0x08023b90;
                uVar13 = *(_segment.ehdr + 0x68);
            }
            _printk(0x800c17f,"get_platform_data",uVar13);
            uVar15 = _segment.ehdr;
        }
joined_r0x08023b90:
        if ((uVar15 != 0) && (*(uVar15 + 0x120) < 4)) {
            ipc_log_string(*(uVar15 + 0x110),"%s: sps:bamdma_restricted_pipes=0x%x\n","get_platform_data",
                           *(uVar15 + 0x68));
        }
        piVar9 = platform_get_resource_byname(iVar8,0x200,"pipe_mem");
        uVar15 = _segment.ehdr;
        if (piVar9 != NULL) {
            puVar14 = _segment.ehdr + 0x38;
            *puVar14 = *piVar9;
            iVar5 = (piVar9[2] - *piVar9) + 1;
            bVar4 = 1 < obj.logging_option;
            *(uVar15 + 0x40) = iVar5;
            if ((bVar4) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option != 0x0) {
                    iVar5 = ___ratelimit(obj.get_platform_data._rs.383,"get_platform_data");
                    if (iVar5 == 0) goto code_r0x08023234;
                    puVar14 = _segment.ehdr + 0x38;
                    iVar5 = *(_segment.ehdr + 0x40);
                }
                _printk(0x8005e5a,"get_platform_data",puVar14,iVar5);
            }
code_r0x08023234:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:pipemem.base=%pa,size=0x%x\n","get_platform_data",
                               _segment.ehdr + 0x38,*(_segment.ehdr + 0x40));
            }
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.344,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get platform data\n");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: %s","msm_sps_probe","sps:get platform data\n");
        }
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    }
    else {
        iVar5 = of_property_read_variable_u32_array(*(iVar8 + 0x300),"qcom,device-type",obj.bam_init._rs.5,1,0);
        if (iVar5 < 0) {
            _segment.ehdr = CONCAT44(*0x8000004,3);
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option == 0x0) {
                    uVar15 = 3;
                }
                else {
                    iVar5 = ___ratelimit(obj.get_device_tree_data._rs,"get_device_tree_data");
                    if (iVar5 == 0) goto code_r0x080232c8;
                    uVar15 = _segment.ehdr & 0xffffffff;
                }
                _printk(0x8007ac2,"get_device_tree_data",uVar15);
            }
code_r0x080232c8:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                pcVar12 = "%s: sps:default device type %d\n";
                goto code_r0x080232e4;
            }
        }
        else {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.get_device_tree_data._rs.367,"get_device_tree_data"), iVar5 != 0)))) {
                _printk(0x8005a0b,"get_device_tree_data",_segment.ehdr & 0xffffffff);
            }
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                pcVar12 = "%s: sps:device type is %d\n";
code_r0x080232e4:
                ipc_log_string(*(_segment.ehdr + 0x110),pcVar12,"get_device_tree_data",_segment.ehdr & 0xffffffff);
            }
        }
        iVar10 = of_find_property(*(iVar8 + 0x300),"qcom,pipe-attr-ee",0);
        obj.enhd_pipe = iVar10 != 0;
        if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar11 = 0x800b728;
                if (iVar10 == 0) {
                    uVar11 = 0x8006670;
                }
            }
            else {
                iVar5 = ___ratelimit(obj.get_device_tree_data._rs.371,"get_device_tree_data");
                if (iVar5 == 0) goto code_r0x0802332c;
                uVar11 = 0x8006670;
                if (obj.enhd_pipe != 0x0) {
                    uVar11 = 0x800b728;
                }
            }
            _printk(0x8008e10,"get_device_tree_data",uVar11);
        }
code_r0x0802332c:
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
            uVar11 = 0x8006670;
            if (obj.enhd_pipe != 0x0) {
                uVar11 = 0x800b728;
            }
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:PIPE_ATTR_EE is %s supported\n","get_device_tree_data",
                           uVar11);
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.333,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get data from device tree\n");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: %s","msm_sps_probe","sps:get data from device tree\n");
        }
        iVar10 = of_match_device(obj.msm_sps_match,iVar8 + 0x10);
        if (iVar10 == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option == 0x0) {
                    uVar15 = 1;
                }
                else {
                    iVar5 = ___ratelimit(obj.msm_sps_probe._rs.338,"msm_sps_probe");
                    if (iVar5 == 0) goto code_r0x08023424;
                    uVar15 = _segment.ehdr & 0xffffffff;
                }
                _printk(0x800bc43,"msm_sps_probe",uVar15);
            }
code_r0x08023424:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                uVar11 = _segment.ehdr[0x22];
                pcVar12 = "%s: sps:use default BAM type:%d\n";
                goto code_r0x08023448;
            }
        }
        else {
            _segment.ehdr = CONCAT44(*0x8000004,**(iVar10 + 0xc0));
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                uVar13 = **(iVar10 + 0xc0);
                if (obj.print_limit_option != 0x0) {
                    iVar5 = ___ratelimit(obj.msm_sps_probe._rs.335,"msm_sps_probe");
                    if (iVar5 == 0) goto code_r0x080233e4;
                    uVar13 = _segment.ehdr;
                }
                _printk(0x80089dc,"msm_sps_probe",uVar13);
            }
code_r0x080233e4:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                uVar11 = _segment.ehdr[0x22];
                pcVar12 = "%s: sps:BAM type is:%d\n";
code_r0x08023448:
                ipc_log_string(uVar11,pcVar12,"msm_sps_probe",_segment.ehdr);
            }
        }
    }
    uVar11 = __class_create(obj.__this_module,"msm_sps",obj.sps_debugfs_init.__key);
    *_segment.ehdr = uVar11;
    uVar6 = alloc_chrdev_region(_segment.ehdr + 1,0,1,"msm_sps");
    if (uVar6 != 0) {
        uVar15 = uVar6;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.346,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8004c12,"msm_sps_probe");
        }
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr[0x22],"%s: sps: alloc_chrdev_region err\n","msm_sps_probe");
        }
        goto code_r0x08023978;
    }
    uVar15 = device_create(*_segment.ehdr,0,*(_segment.ehdr + 1),_segment.ehdr,"msm_sps");
    puVar14 = _segment.ehdr;
    _segment.ehdr[2] = uVar15;
    if (uVar15 < 0xfffffffffffff001) {
        if (*(iVar8 + 0x300) != 0) {
            *(uVar15 + 0x2f0) = *(iVar8 + 0x300);
        }
        if (_segment.ehdr == 0) {
            uVar15 = clk_get(puVar14[2],"mem_clk");
            _segment.ehdr[3] = uVar15;
            if (uVar15 < 0xfffffffffffff001) {
                uVar6 = clk_prepare(uVar15);
                if (uVar6 == 0) {
                    uVar6 = clk_enable(uVar15);
                    if (uVar6 == 0) goto code_r0x0802358c;
                    clk_unprepare(uVar15);
                }
                uVar15 = uVar6;
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.356,"msm_sps_probe"), iVar5 != 0)))) {
                    _printk(0x8008dea,"msm_sps_probe");
                }
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps: failed to enable pmem_clk\n","msm_sps_probe");
                }
                goto code_r0x0802393c;
            }
            if (uVar15 == 0xfffffffffffffdfb) {
                uVar15 = 0xfffffdfb;
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.353,"msm_sps_probe"), iVar5 != 0)))) {
                    _printk(0x8008dc9,"msm_sps_probe");
                }
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps: fail to get pmem_clk\n","msm_sps_probe");
                }
                uVar15 = 0;
            }
        }
        else {
code_r0x0802358c:
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.sps_device_init._rs,"sps_device_init"), iVar5 != 0)))) {
                _printk(0x80084da,"sps_device_init");
            }
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                ipc_log_string(_segment.ehdr[0x22],"%s: Enter\n","sps_device_init");
            }
            iVar5 = sym.sps_mem_init(_segment.ehdr[7],*(_segment.ehdr + 8));
            puVar14 = _segment.ehdr;
            if (iVar5 == 0) {
                puVar1 = _segment.ehdr + 0x14;
                puVar2 = _segment.ehdr + 0xe;
                _segment.ehdr[0x14] = puVar1;
                puVar14[0x15] = puVar1;
                __mutex_init(puVar2,"&sps->lock",obj.sps_debugfs_init.__key);
                iVar5 = sym.sps_rm_init(_segment.ehdr + 0x17);
                if (iVar5 == 0) {
                    iVar5 = sym.sps_map_init(0,*(_segment.ehdr + 0x6c));
                    puVar14 = _segment.ehdr;
                    if (iVar5 == 0) {
                        bVar4 = obj.logging_option != 0x1;
                        *(_segment.ehdr + 6) = 1;
                        if ((bVar4) &&
                           ((obj.print_limit_option < 2 ||
                            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.362,"msm_sps_probe"), puVar14 = _segment.ehdr
                            , iVar5 != 0)))) {
                            _printk(0x8007fbf,"msm_sps_probe","sps:sps is ready\n");
                            puVar14 = _segment.ehdr;
                        }
                        if (puVar14 != NULL) {
                            ipc_log_string(puVar14[0x22],"%s: %s","msm_sps_probe","sps:sps is ready\n");
                        }
                        return 0;
                    }
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_device_init._rs.396,"sps_device_init"), iVar5 != 0)))) {
                        _printk(0x8004fd7,"sps_device_init");
                    }
                    if (_segment.ehdr != NULL) {
                        pcVar12 = "%s: sps: SPS connection mapping init failed\n";
                        goto code_r0x080238b0;
                    }
                }
                else {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_device_init._rs.390,"sps_device_init"), iVar5 != 0)))) {
                        _printk(0x8004c5e,"sps_device_init");
                    }
                    if (_segment.ehdr != NULL) {
                        pcVar12 = "%s: sps: Fail to init SPS resource manager\n";
code_r0x080238b0:
                        ipc_log_string(_segment.ehdr[0x22],pcVar12,"sps_device_init");
                    }
                }
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.sps_device_init._rs.386,"sps_device_init"), iVar5 != 0)))) {
                    _printk(0x8004fb4,"sps_device_init");
                }
                if (_segment.ehdr != NULL) {
                    pcVar12 = "%s: sps: SPS memory init failed\n";
                    goto code_r0x080238b0;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.359,"msm_sps_probe"), iVar5 != 0)))) {
                _printk(0x8004c3e,"msm_sps_probe");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr[0x22],"%s: sps: sps_device_init err\n","msm_sps_probe");
            }
            if (_segment.ehdr == 0) {
                uVar11 = _segment.ehdr[3];
                clk_disable(uVar11);
                clk_unprepare(uVar11);
                uVar15 = 0xffffffff;
code_r0x0802393c:
                if (_segment.ehdr == 0) {
                    clk_put(_segment.ehdr[3]);
                }
            }
            else {
                uVar15 = 0xffffffff;
            }
        }
        device_destroy(*_segment.ehdr,*(_segment.ehdr + 1));
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.349,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x80046b9,"msm_sps_probe");
        }
        if (_segment.ehdr == NULL) {
            uVar15 = 0;
        }
        else {
            ipc_log_string(_segment.ehdr[0x22],"%s: sps: device_create err\n","msm_sps_probe");
            uVar15 = 0;
        }
    }
    unregister_chrdev_region(*(_segment.ehdr + 1),1);
code_r0x08023978:
    class_destroy(*_segment.ehdr);
    return uVar15;
}


// ===== sym.sps_read_info.639189d76e9915dcda9027510d7b62b6.cfi_jt @ 0x0800e5c8 (size 8) =====

int64_t sym.sps_read_info.639189d76e9915dcda9027510d7b62b6.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.sps_debugfs_lock);
    if (obj.debugfs_record_enabled == 0x0) {
        iVar2 = 0;
    }
    else {
        iVar1 = _segment.ehdr + -0x50;
        if (obj.wraparound == 0x0) {
            iVar1 = _segment.ehdr;
        }
        iVar1 = simple_read_from_buffer(param_2,param_3,param_4,CONCAT44(*0x8000004,_segment.ehdr),iVar1);
        iVar2 = iVar1;
    }
    mutex_unlock(obj.sps_debugfs_lock);
    return iVar2;
}


// ===== sym.sps_get_iovec.cfi_jt @ 0x0800e5d0 (size 8) =====

uint sym.sps_get_iovec.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_get_iovec._rs,"sps_get_iovec"), iVar2 != 0)))
           ) {
            _printk(0x80074f8,"sps_get_iovec");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else if (param_2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_iovec._rs.211,"sps_get_iovec"), iVar2 != 0)))) {
            _printk(0x800ab04,"sps_get_iovec");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec pointer is NULL\n";
    }
    else {
        arg1 = sym.sps_bam_lock(param_1);
        if (arg1 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_get_iovec._rs.217,"sps_get_iovec"), iVar2 != 0)))) {
                _printk(0x8008153,"sps_get_iovec",arg1 + 0x18,*(param_1 + 0xbc));
            }
            if (*(arg1 + 0x238) == 0) {
                ipc_log_string(*(arg1 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_get_iovec",arg1 + 0x18,
                               *(param_1 + 0xbc));
            }
            uVar1 = sym.sps_bam_pipe_get_iovec(arg1,*(param_1 + 0xbc),param_2);
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_iovec._rs.214,"sps_get_iovec"), iVar2 != 0)))) {
            _printk(0x8007556,"sps_get_iovec");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_iovec");
    return 0xffffffff;
}


// ===== sym.sps_transfer.cfi_jt @ 0x0800e5d8 (size 8) =====

uint sym.sps_transfer.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int iVar1;
    uint uVar2;
    int64_t arg1;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint32_t *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs,"sps_transfer"), iVar1 != 0))))
        {
            _printk(0x80074f8,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else if (param_2 == NULL) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.72,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x800a699,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: transfer is NULL\n";
    }
    else if (param_2[1] == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.75,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x800598a,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec list is NULL\n";
    }
    else if (param_2[2] == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.78,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x8009943,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec list is empty\n";
    }
    else if (*param_2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.81,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x800b279,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec list address is invalid\n";
    }
    else {
        uVar5 = 0;
        puVar6 = param_2[1] + 4;
        while ((*puVar6 >> 0xf & 1) == 0) {
            iVar1 = sym.sps_check_iovec_flags(*puVar6 >> 0x10);
            if (iVar1 != 0) {
                return 0xffffffff;
            }
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 2;
            if (*(param_2 + 2) <= uVar5) {
                arg1 = sym.sps_bam_lock(param_1);
                if (arg1 == 0) {
                    return 0xffffffff;
                }
                uVar2 = sym.sps_bam_pipe_transfer(arg1,*(param_1 + 0xbc),param_2);
                _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
                return uVar2;
            }
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.84,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x80059a9,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec size is invalid\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_transfer");
    return 0xffffffff;
}


// ===== sym.sps_disconnect.cfi_jt @ 0x0800e5e0 (size 8) =====

int sym.sps_disconnect.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_disconnect._rs,"sps_disconnect"), iVar2 != 0)
            ))) {
            _printk(0x8005971,"sps_disconnect");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: Invalid pipe\n";
    }
    else {
        iVar5 = *(param_1 + 0x18);
        if (iVar5 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_disconnect._rs.53,"sps_disconnect"), iVar2 != 0)))) {
                _printk(0x800c5da,"sps_disconnect");
            }
            if (_segment.ehdr == 0) {
                return -1;
            }
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: BAM device of this pipe is NULL\n";
        }
        else {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_disconnect._rs.56,"sps_disconnect"), iVar2 != 0)))) {
                pcVar4 = 0x8009cd7;
                if (*(param_1 + 0x4c) != 0) {
                    pcVar4 = "DEST";
                }
                _printk(0x8008122,"sps_disconnect",iVar5 + 0x18,*(param_1 + 0x20),*(param_1 + 0x38),pcVar4);
            }
            if (*(iVar5 + 0x238) < 3) {
                pcVar4 = 0x8009cd7;
                if (*(param_1 + 0x4c) != 0) {
                    pcVar4 = "DEST";
                }
                ipc_log_string(*(iVar5 + 0x220),"%s: sps: bam %pa src 0x%pK dest 0x%pK mode %s\n","sps_disconnect",
                               iVar5 + 0x18,*(param_1 + 0x20),*(param_1 + 0x38),pcVar4);
            }
            piVar1 = *(param_1 + 0xb0) + 0xa8;
            if (*(param_1 + 0x4c) != 0) {
                piVar1 = *(param_1 + 0xb0) + 0xb0;
            }
            if (*piVar1 == param_1) {
                mutex_lock(iVar5 + 0xa8);
                iVar2 = sym.sps_rm_state_change(param_1,0);
                mutex_unlock(iVar5 + 0xa8);
                if (iVar2 == 0) {
                    *(param_1 + 0xa0) = 0xcccccccccccccccc;
                    *(param_1 + 0xa8) = 0xcccccccccccccccc;
                    *(param_1 + 0x90) = 0xcccccccccccccccc;
                    *(param_1 + 0x98) = 0xcccccccccccccccc;
                    *(param_1 + 0x80) = 0xcccccccccccccccc;
                    *(param_1 + 0x88) = 0xcccccccccccccccc;
                    *(param_1 + 0x70) = 0xcccccccccccccccc;
                    *(param_1 + 0x78) = 0xcccccccccccccccc;
                    *(param_1 + 0x60) = 0xcccccccccccccccc;
                    *(param_1 + 0x68) = 0xcccccccccccccccc;
                    *(param_1 + 0x50) = 0xcccccccccccccccc;
                    *(param_1 + 0x58) = 0xcccccccccccccccc;
                    *(param_1 + 0x40) = 0xcccccccccccccccc;
                    *(param_1 + 0x48) = 0xcccccccccccccccc;
                    *(param_1 + 0x30) = 0xcccccccccccccccc;
                    *(param_1 + 0x38) = 0xcccccccccccccccc;
                    *(param_1 + 0x20) = 0xcccccccccccccccc;
                    *(param_1 + 0x28) = 0xcccccccccccccccc;
                    return 0;
                }
                return iVar2;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_disconnect._rs.57,"sps_disconnect"), iVar2 != 0)))) {
                _printk(0x8004add,"sps_disconnect");
            }
            if (_segment.ehdr == 0) {
                return -1;
            }
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: Client context is corrupt\n";
        }
    }
    ipc_log_string(uVar3,pcVar4,"sps_disconnect");
    return -1;
}


// ===== sym.sps_flow_on.cfi_jt @ 0x0800e5e8 (size 8) =====

ulong sym.sps_flow_on.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_flow_on._rs,"sps_flow_on"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_flow_on");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: pipe is NULL\n","sps_flow_on");
        }
    }
    else {
        iVar2 = sym.sps_bam_lock(param_1);
        if (iVar2 != 0) {
            sym.bam_write_reg_field.llvm.916431513089089357(iVar2 + 0xd8,0x1e,*(param_1 + 0xbc),1);
            _raw_spin_unlock_irqrestore(iVar2 + 0xe8,*(iVar2 + 0xf0));
            return 0;
        }
    }
    return 0xffffffff;
}


// ===== sym.sps_free_endpoint.cfi_jt @ 0x0800e5f0 (size 8) =====

ulong sym.sps_free_endpoint.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar1 = ___ratelimit(obj.sps_free_endpoint._rs,"sps_free_endpoint"), iVar1 != 0)))) {
        _printk(0x8004ef6,"sps_free_endpoint");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
        ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps: Enter\n","sps_free_endpoint");
    }
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_free_endpoint._rs.262,"sps_free_endpoint"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_free_endpoint");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: pipe is NULL\n","sps_free_endpoint");
        return 0xffffffff;
    }
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar1 = ___ratelimit(obj.sps_client_de_init._rs,"sps_client_de_init"), iVar1 != 0)))) {
        _printk(0x80084da,"sps_client_de_init");
    }
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x120) != 0)) {
        iVar1 = *(param_1 + 0x10);
    }
    else {
        ipc_log_string(*(_segment.ehdr + 0xf8),"%s: Enter\n","sps_client_de_init");
        iVar1 = *(param_1 + 0x10);
    }
    if (iVar1 == 0) {
        *(param_1 + 0xa8) = 0;
        *(param_1 + 0xb0) = 0;
        *(param_1 + 0x98) = 0;
        *(param_1 + 0xa0) = 0;
        *(param_1 + 0x88) = 0;
        *(param_1 + 0x90) = 0;
        *(param_1 + 0x78) = 0;
        *(param_1 + 0x80) = 0;
        *(param_1 + 0x68) = 0;
        *(param_1 + 0x70) = 0;
        *(param_1 + 0x58) = 0;
        *(param_1 + 0x60) = 0;
        *(param_1 + 0x48) = 0;
        *(param_1 + 0x50) = 0;
        *(param_1 + 0x38) = 0;
        *(param_1 + 0x40) = 0;
        *(param_1 + 0x28) = 0;
        *(param_1 + 0x30) = 0;
        *(param_1 + 0x18) = 0;
        *(param_1 + 0x20) = 0;
        kfree(param_1);
        return 0;
    }
    if (obj.logging_option != 0x1) {
        if (2 < obj.print_limit_option) {
            iVar1 = ___ratelimit(obj.sps_client_de_init._rs.286,"sps_client_de_init");
            if (iVar1 == 0) goto code_r0x08021f5c;
            iVar1 = *(param_1 + 0x10);
        }
        _printk(0x8004bac,"sps_client_de_init",iVar1);
    }
code_r0x08021f5c:
    if (_segment.ehdr != 0) {
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:De-init client in connected state: 0x%x\n",
                       "sps_client_de_init",*(param_1 + 0x10));
    }
    return 0xffffffff;
}


// ===== sym.sps_get_event.cfi_jt @ 0x0800e5f8 (size 8) =====

uint sym.sps_get_event.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_get_event._rs,"sps_get_event"), iVar2 != 0)))
           ) {
            _printk(0x80074f8,"sps_get_event");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else {
        if (param_2 != 0) {
            arg1 = sym.sps_bam_lock(param_1);
            if (arg1 == 0) {
                return 0xffffffff;
            }
            uVar1 = sym.sps_bam_pipe_get_event(arg1,*(param_1 + 0xbc),param_2);
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_event._rs.87,"sps_get_event"), iVar2 != 0)))) {
            _printk(0x800c019,"sps_get_event");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: event_notify is NULL\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_event");
    return 0xffffffff;
}


// ===== sym.sps_get_unused_desc_num.cfi_jt @ 0x0800e600 (size 8) =====

uint sym.sps_get_unused_desc_num.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_unused_desc_num._rs,"sps_get_unused_desc_num"), iVar2 != 0)))) {
            _printk(0x80074f8,"sps_get_unused_desc_num");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else {
        if (param_2 != 0) {
            arg1 = sym.sps_bam_lock(param_1);
            if (arg1 == 0) {
                return 0xffffffff;
            }
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_get_unused_desc_num._rs.146,"sps_get_unused_desc_num"), iVar2 != 0)))) {
                _printk(0x8008153,"sps_get_unused_desc_num",arg1 + 0x18,*(param_1 + 0xbc));
            }
            if (*(arg1 + 0x238) == 0) {
                ipc_log_string(*(arg1 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_get_unused_desc_num",
                               arg1 + 0x18,*(param_1 + 0xbc));
            }
            uVar1 = sym.sps_bam_pipe_get_unused_desc_num(arg1,*(param_1 + 0xbc),param_2);
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_unused_desc_num._rs.145,"sps_get_unused_desc_num"), iVar2 != 0)))) {
            _printk(0x80084e7,"sps_get_unused_desc_num");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: result pointer is NULL\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_unused_desc_num");
    return 0xffffffff;
}


// ===== sym.sps_get_free_count.cfi_jt @ 0x0800e608 (size 8) =====

uint sym.sps_get_free_count.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_free_count._rs,"sps_get_free_count"), iVar2 != 0)))) {
            _printk(0x80074f8,"sps_get_free_count");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else {
        if (param_2 != 0) {
            arg1 = sym.sps_bam_lock(param_1);
            if (arg1 == 0) {
                return 0xffffffff;
            }
            uVar1 = sym.sps_bam_get_free_count(arg1,*(param_1 + 0xbc),param_2);
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_free_count._rs.93,"sps_get_free_count"), iVar2 != 0)))) {
            _printk(0x80084e7,"sps_get_free_count");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: result pointer is NULL\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_free_count");
    return 0xffffffff;
}


// ===== sym.sps_is_pipe_empty.cfi_jt @ 0x0800e610 (size 8) =====

uint sym.sps_is_pipe_empty.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_is_pipe_empty._rs,"sps_is_pipe_empty"), iVar2 != 0)))) {
            _printk(0x80074f8,"sps_is_pipe_empty");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else {
        if (param_2 != 0) {
            arg1 = sym.sps_bam_lock(param_1);
            if (arg1 == 0) {
                return 0xffffffff;
            }
            uVar1 = sym.sps_bam_pipe_is_empty(arg1,*(param_1 + 0xbc),param_2);
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_is_pipe_empty._rs.90,"sps_is_pipe_empty"), iVar2 != 0)))) {
            _printk(0x80084e7,"sps_is_pipe_empty");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: result pointer is NULL\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_is_pipe_empty");
    return 0xffffffff;
}


// ===== sym.sps_get_bam_addr.cfi_jt @ 0x0800e618 (size 8) =====

ulong sym.sps_get_bam_addr.cfi_jt(int64_t param_1,ulong *param_2,uint *param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *puVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_get_bam_addr._rs,"sps_get_bam_addr"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_get_bam_addr");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        iVar2 = sym.sps_h2bam(param_1);
        if (iVar2 != 0) {
            puVar5 = iVar2 + 0x18;
            *param_2 = *puVar5;
            uVar6 = *(iVar2 + 0x28);
            *param_3 = uVar6;
            if ((1 < obj.logging_option) && (1 < obj.debug_level_option)) {
                if (obj.print_limit_option != 0x0) {
                    iVar1 = ___ratelimit(obj.sps_get_bam_addr._rs.253,"sps_get_bam_addr");
                    if (iVar1 == 0) goto code_r0x080218d4;
                    uVar6 = *param_3;
                }
                _printk(0x80061c0,"sps_get_bam_addr",puVar5,param_2,uVar6);
            }
code_r0x080218d4:
            if (*(iVar2 + 0x238) < 3) {
                ipc_log_string(*(iVar2 + 0x220),"%s: sps: BAM: %pa; base:%pa; size:%d\n","sps_get_bam_addr",puVar5,
                               param_2,*param_3);
            }
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_get_bam_addr._rs.252,"sps_get_bam_addr"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_get_bam_addr");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_bam_addr");
    return 0xffffffff;
}


// ===== sym.sps_setup_bam2bam_fifo.cfi_jt @ 0x0800e620 (size 8) =====

ulong sym.sps_setup_bam2bam_fifo.cfi_jt(ulong *param_1,uint32_t param_2,int param_3,int param_4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    code *pcVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar1 = ___ratelimit(obj.sps_setup_bam2bam_fifo._rs,"sps_setup_bam2bam_fifo"), iVar1 != 0)))) {
        _printk(0x80084da,"sps_setup_bam2bam_fifo");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 2)) {
        ipc_log_string(*(_segment.ehdr + 0x100),"%s: Enter\n","sps_setup_bam2bam_fifo");
    }
    if ((param_1 == NULL) || (param_3 == 0)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_setup_bam2bam_fifo._rs.20,"sps_setup_bam2bam_fifo"), iVar1 != 0)))) {
            _printk(0x800796a,"sps_setup_bam2bam_fifo");
        }
        if (_segment.ehdr != 0) {
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar5 = "%s: sps: invalid buffer address or size\n";
code_r0x0801ca78:
            ipc_log_string(uVar3,pcVar5,"sps_setup_bam2bam_fifo");
        }
code_r0x0801ca84:
        uVar3 = 0xffffffff;
    }
    else {
        if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x30) == 0)) {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_setup_bam2bam_fifo._rs.23,"sps_setup_bam2bam_fifo"), iVar1 != 0)))) {
                _printk(0x800700c,"sps_setup_bam2bam_fifo");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_setup_bam2bam_fifo")
                ;
            }
            return 0xfffffdfb;
        }
        if (param_4 == 0) {
            uVar2 = param_2;
            if ((uVar2 < *(_segment.ehdr + 0x38)) ||
               (*(_segment.ehdr + 0x38) + *(_segment.ehdr + 0x40) < param_3 + param_2)) {
                if (obj.logging_option != 0x1) {
                    if (2 < obj.print_limit_option) {
                        pcVar4 = obj.sps_setup_bam2bam_fifo._rs.27;
                        goto code_r0x0801cc08;
                    }
                    goto code_r0x0801cb0c;
                }
                goto code_r0x0801cb20;
            }
        }
        else {
            if (*(_segment.ehdr + 0x40) < param_3 + param_2) {
                if (obj.logging_option != 0x1) {
                    if (2 < obj.print_limit_option) {
                        pcVar4 = obj.sps_setup_bam2bam_fifo._rs.24;
code_r0x0801cc08:
                        iVar1 = ___ratelimit(pcVar4,"sps_setup_bam2bam_fifo");
                        if (iVar1 == 0) goto code_r0x0801cb20;
                    }
code_r0x0801cb0c:
                    _printk(0x8008cb3,"sps_setup_bam2bam_fifo");
                }
code_r0x0801cb20:
                if (_segment.ehdr != 0) {
                    uVar3 = *(_segment.ehdr + 0x110);
                    pcVar5 = "%s: sps: requested mem is out of pipe mem range\n";
                    goto code_r0x0801ca78;
                }
                goto code_r0x0801ca84;
            }
            uVar2 = *(_segment.ehdr + 0x38) + param_2;
        }
        param_1[1] = uVar2;
        uVar3 = sym.spsi_get_mem_ptr(uVar2);
        *param_1 = uVar3;
        *(param_1 + 3) = param_3;
        memset(uVar3,0,param_3);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.sps_alloc_mem.cfi_jt @ 0x0800e628 (size 8) =====

ulong sym.sps_alloc_mem.cfi_jt(int64_t param_1,ulong param_2,ulong *param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        return 0xffffffed;
    }
    if (*(_segment.ehdr + 0x30) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs,"sps_alloc_mem"), iVar1 != 0)))
           ) {
            _printk(0x8009574,"sps_alloc_mem");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_alloc_mem");
        }
        return 0xfffffff5;
    }
    if ((param_3 == NULL) || (*(param_3 + 3) == 0)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs.122,"sps_alloc_mem"), iVar1 != 0)))) {
            _printk(0x800c660,"sps_alloc_mem");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: invalid memory buffer address or size\n";
    }
    else {
        if (param_1 == 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs.125,"sps_alloc_mem"), iVar1 != 0)))) {
                _printk(0x8007995,"sps_alloc_mem");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
                ipc_log_string(*(_segment.ehdr + 0x108),"%s: sps: allocate pipe memory before setup pipe\n",
                               "sps_alloc_mem");
            }
        }
        else {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs.128,"sps_alloc_mem"), iVar1 != 0)))) {
                _printk(0x8007e06,"sps_alloc_mem",*(param_1 + 0xbc));
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
                ipc_log_string(*(_segment.ehdr + 0x108),"%s: sps:allocate pipe memory for pipe %d\n","sps_alloc_mem",
                               *(param_1 + 0xbc));
            }
        }
        iVar2 = sym.sps_mem_alloc_io(*(param_3 + 3));
        param_3[1] = iVar2;
        if (iVar2 != 0xdeadbeef) {
            uVar3 = sym.spsi_get_mem_ptr(iVar2);
            *param_3 = uVar3;
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs.131,"sps_alloc_mem"), iVar1 != 0)))) {
            _printk(0x8008516,"sps_alloc_mem");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: invalid address of allocated memory\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_alloc_mem");
    return 0xffffffff;
}


// ===== sym.sps_flow_off.cfi_jt @ 0x0800e630 (size 8) =====

ulong sym.sps_flow_off.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_flow_off._rs,"sps_flow_off"), iVar1 != 0))))
        {
            _printk(0x80074f8,"sps_flow_off");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: pipe is NULL\n","sps_flow_off");
        }
    }
    else {
        iVar2 = sym.sps_bam_lock(param_1);
        if (iVar2 != 0) {
            sym.bam_write_reg_field.llvm.916431513089089357(iVar2 + 0xd8,0x1e,*(param_1 + 0xbc),1);
            _raw_spin_unlock_irqrestore(iVar2 + 0xe8,*(iVar2 + 0xf0));
            return 0;
        }
    }
    return 0xffffffff;
}


// ===== sym.sps_get_bam_debug_info.cfi_jt @ 0x0800e638 (size 8) =====

ulong sym.sps_get_bam_debug_info.cfi_jt
                (int64_t param_1,int param_2,uint64_t param_3,uint32_t param_4,uint32_t param_5)

{
    int64_t *arg1;
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_bam_debug_info._rs,"sps_get_bam_debug_info"), iVar2 != 0)))) {
            _printk(0x80045c9,"sps_get_bam_debug_info");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: device handle should not be 0\n",
                           "sps_get_bam_debug_info");
        }
        return 0xffffffff;
    }
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x30) == 0)) {
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar2 = ___ratelimit(obj.sps_get_bam_debug_info._rs.3,"sps_get_bam_debug_info"), iVar2 != 0)))) {
            _printk(0x800700c,"sps_get_bam_debug_info");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_get_bam_debug_info");
            return 0xfffffdfb;
        }
        return 0xfffffdfb;
    }
    uVar6 = param_4;
    param_3 = param_3 & 0xffffffff;
    mutex_lock(_segment.ehdr + 0x70);
    iVar3 = sym.sps_h2bam(param_1);
    if (iVar3 == 0) {
        _printk(0x80074b1,param_1);
        mutex_unlock(_segment.ehdr + 0x70);
        return 0xffffffff;
    }
    mutex_unlock(_segment.ehdr + 0x70);
    uVar1 = *(iVar3 + 0x30);
    uVar7 = uVar1;
    if (_segment.ehdr != 0) {
        ipc_log_string(*(_segment.ehdr + 0x118),"%s: sps:<bam-addr> dump BAM:%pa\n","sps_get_bam_debug_info",
                       iVar3 + 0x18);
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
            _printk(0x8008c90,"sps_get_bam_debug_info",iVar3 + 0x18);
        }
    }
    if (0x62 < param_2 - 1U) {
code_r0x0801c4bc:
        uVar4 = 0x800bbac;
code_r0x0801c4d0:
        _printk(uVar4);
        return 0;
    }
    arg1 = iVar3 + 0xd8;
    switch(param_2) {
    case 1:
        sym.print_bam_reg(*arg1);
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 2:
        sym.print_bam_reg(*arg1);
        break;
    case 4:
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 5:
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 6:
        sym.print_bam_pipe_selected_reg(arg1,4);
        sym.print_bam_pipe_selected_reg(arg1,5);
        break;
    case 7:
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1,uVar5,0);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 8:
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,0);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 9:
        sym.print_bam_pipe_desc_fifo(arg1,4,0);
        goto code_r0x0801c0a8;
    case 10:
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar5);
                sym.print_bam_pipe_desc_fifo(arg1,uVar5,0);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 0xb:
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,0);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0xc:
        sym.print_bam_pipe_selected_reg(arg1,4);
        sym.print_bam_pipe_desc_fifo(arg1,4,0);
        sym.print_bam_pipe_selected_reg(arg1,5);
code_r0x0801c0a8:
        sym.print_bam_pipe_desc_fifo(arg1,5,0);
        break;
    case 0xd:
        if (param_4 != 0) {
            sym.print_bam_test_bus_reg(arg1,uVar6);
            return 0;
        }
        uVar4 = 0x8007943;
        goto code_r0x0801c4d0;
    case 0xe:
        if (param_5 == 0) {
            param_5 = 1;
        }
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,param_5);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0xf:
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,100);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0x10:
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_reg(*arg1,uVar6 & 0xffffffff);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    default:
        goto code_r0x0801c4bc;
    case 0x5b:
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 0x5c:
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0x5d:
        if (param_5 == 0) {
            param_5 = 1;
        }
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,param_5);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0x5e:
        if (param_5 == 0) {
            param_5 = 1;
        }
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,param_5);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0x5f:
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,0);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0x60:
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,0);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0x61:
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,0);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,100);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 0x62:
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar6 = 0;
            do {
                if ((param_3 >> (uVar6 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar6 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,0);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar6 & 0xffffffff,100);
                }
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
            return 0;
        }
        break;
    case 99:
        sym.print_bam_test_bus_reg(arg1,uVar6);
        sym.print_bam_reg(*arg1);
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
            uVar5 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            uVar5 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1,uVar5,0);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            uVar5 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1,uVar5,100);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
    case 3:
        sym.print_bam_selected_reg(arg1,*(iVar3 + 0x80));
    }
    return 0;
}


// ===== sym.sps_pipe_inject_zlt.cfi_jt @ 0x0800e640 (size 8) =====

int sym.sps_pipe_inject_zlt.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    int iVar2;
    int64_t arg1;
    char *pcVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_inject_zlt._rs,"sps_pipe_inject_zlt"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_pipe_inject_zlt");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        puVar4 = _segment.ehdr + 0x110;
        iVar1 = -1;
        pcVar3 = "%s: sps: BAM handle is NULL\n";
    }
    else if (param_2 < 0x1f) {
        arg1 = sym.sps_h2bam(param_1);
        if (arg1 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_inject_zlt._rs.257,"sps_pipe_inject_zlt"), iVar1 != 0)))) {
                _printk(0x8007556,"sps_pipe_inject_zlt");
            }
            if (_segment.ehdr == 0) {
                return -1;
            }
            puVar4 = _segment.ehdr + 0x110;
            iVar1 = -1;
            pcVar3 = "%s: sps: BAM is not found by handle\n";
        }
        else {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_inject_zlt._rs.258,"sps_pipe_inject_zlt"), iVar1 != 0)))) {
                _printk(0x8008153,"sps_pipe_inject_zlt",arg1 + 0x18,param_2);
            }
            if (*(arg1 + 0x238) == 0) {
                ipc_log_string(*(arg1 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_pipe_inject_zlt",arg1 + 0x18
                               ,param_2);
            }
            iVar1 = sym.sps_bam_pipe_inject_zlt(arg1,param_2);
            if (iVar1 == 0) {
                return 0;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_pipe_inject_zlt._rs.259,"sps_pipe_inject_zlt"), iVar2 != 0)))) {
                _printk(0x800b008,"sps_pipe_inject_zlt");
            }
            puVar4 = arg1 + 0x228;
            pcVar3 = "%s: sps: failed to inject a ZLT\n";
        }
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_inject_zlt._rs.256,"sps_pipe_inject_zlt"), iVar1 != 0)))) {
            _printk(0x80081a5,"sps_pipe_inject_zlt");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        puVar4 = _segment.ehdr + 0x110;
        iVar1 = -1;
        pcVar3 = "%s: sps: pipe index is invalid\n";
    }
    ipc_log_string(*puVar4,pcVar3,"sps_pipe_inject_zlt");
    return iVar1;
}


// ===== sym.sps_pipe_reset.cfi_jt @ 0x0800e648 (size 8) =====

ulong sym.sps_pipe_reset.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_pipe_reset._rs,"sps_pipe_reset"), iVar1 != 0)
            ))) {
            _printk(0x800c13f,"sps_pipe_reset");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM handle is NULL\n";
    }
    else if (param_2 < 0x1f) {
        iVar3 = sym.sps_h2bam(param_1);
        if (iVar3 != 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_reset._rs.232,"sps_pipe_reset"), iVar1 != 0)))) {
                _printk(0x8008153,"sps_pipe_reset",iVar3 + 0x18,param_2);
            }
            if (*(iVar3 + 0x238) < 3) {
                ipc_log_string(*(iVar3 + 0x220),"%s: sps: BAM: %pa; pipe index:%d\n","sps_pipe_reset",iVar3 + 0x18,
                               param_2);
            }
            sym.bam_pipe_reset(iVar3 + 0xd8,param_2);
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_reset._rs.231,"sps_pipe_reset"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_pipe_reset");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM is not found by handle\n";
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_reset._rs.228,"sps_pipe_reset"), iVar1 != 0)))) {
            _printk(0x80081a5,"sps_pipe_reset");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe index is invalid\n";
    }
    ipc_log_string(uVar2,pcVar4,"sps_pipe_reset");
    return 0xffffffff;
}


// ===== sym.sps_pipe_disable.cfi_jt @ 0x0800e650 (size 8) =====

ulong sym.sps_pipe_disable.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_disable._rs,"sps_pipe_disable"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_pipe_disable");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM handle is NULL\n";
    }
    else if (param_2 < 0x1f) {
        iVar3 = sym.sps_h2bam(param_1);
        if (iVar3 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_disable._rs.235,"sps_pipe_disable"), iVar1 != 0)))) {
                _printk(0x8008153,"sps_pipe_disable",iVar3 + 0x18,param_2);
            }
            if (*(iVar3 + 0x238) == 0) {
                ipc_log_string(*(iVar3 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_pipe_disable",iVar3 + 0x18
                               ,param_2);
            }
            sym.bam_disable_pipe(iVar3 + 0xd8,param_2);
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_disable._rs.234,"sps_pipe_disable"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_pipe_disable");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM is not found by handle\n";
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_disable._rs.233,"sps_pipe_disable"), iVar1 != 0)))) {
            _printk(0x80081a5,"sps_pipe_disable");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe index is invalid\n";
    }
    ipc_log_string(uVar2,pcVar4,"sps_pipe_disable");
    return 0xffffffff;
}


// ===== sym.sps_register_event.cfi_jt @ 0x0800e658 (size 8) =====

int sym.sps_register_event.cfi_jt(int64_t param_1,uint *param_2)

{
    int iVar1;
    int iVar2;
    int64_t arg1;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_register_event._rs,"sps_register_event"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_register_event");
        }
        if (_segment.ehdr != 0) {
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: pipe is NULL\n";
code_r0x0801d518:
            ipc_log_string(uVar3,pcVar4,"sps_register_event");
            return -1;
        }
    }
    else if (param_2 == NULL) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_register_event._rs.60,"sps_register_event"), iVar1 != 0)))) {
            _printk(0x800bfdb,"sps_register_event");
        }
        if (_segment.ehdr != 0) {
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: registered event is NULL\n";
            goto code_r0x0801d518;
        }
    }
    else {
        if (_segment.ehdr == 0) {
            return -0x13;
        }
        if (*(_segment.ehdr + 0x30) == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_register_event._rs.63,"sps_register_event"), iVar1 != 0)))) {
                _printk(0x800a28f,"sps_register_event");
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver not ready\n","sps_register_event");
            }
            return -0xb;
        }
        arg1 = sym.sps_bam_lock(param_1);
        if (arg1 != 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_register_event._rs.66,"sps_register_event"), iVar1 != 0)))) {
                _printk(0x800906b,"sps_register_event",*param_2);
            }
            if (*(arg1 + 0x238) < 3) {
                ipc_log_string(*(arg1 + 0x220),"%s: sps: events:%d\n","sps_register_event",*param_2);
            }
            iVar1 = sym.sps_bam_pipe_reg_event(arg1,*(param_1 + 0xbc),param_2);
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            if (iVar1 == 0) {
                return 0;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_register_event._rs.69,"sps_register_event"), iVar2 != 0)))) {
                _printk(0x8009081,"sps_register_event",*(param_1 + 0x18) + 0x18,*(param_1 + 0xbc));
            }
            ipc_log_string(*(arg1 + 0x228),"%s: sps:Fail to register event for BAM %pa pipe %d\n","sps_register_event"
                           ,*(param_1 + 0x18) + 0x18,*(param_1 + 0xbc));
            return iVar1;
        }
    }
    return -1;
}


// ===== sym.sps_bam_process_irq.cfi_jt @ 0x0800e660 (size 8) =====

ulong sym.sps_bam_process_irq.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t arg1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_process_irq._rs,"sps_bam_process_irq"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_bam_process_irq");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg1 = sym.sps_h2bam(param_1);
        if (arg1 != 0) {
            if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_bam_process_irq._rs.245,"sps_bam_process_irq"), iVar1 != 0)))) {
                _printk(0x800a2e2,"sps_bam_process_irq",arg1 + 0x18);
            }
            if (*(arg1 + 0x238) < 2) {
                ipc_log_string(*(arg1 + 0x218),"%s: sps: BAM: %pa\n","sps_bam_process_irq",arg1 + 0x18);
            }
            uVar2 = sym.sps_bam_check_irq(arg1);
            return uVar2;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_process_irq._rs.244,"sps_bam_process_irq"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_bam_process_irq");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar2,pcVar3,"sps_bam_process_irq");
    return 0xffffffff;
}


// ===== sym.sps_bam_disable_irqs.cfi_jt @ 0x0800e668 (size 8) =====

ulong sym.sps_bam_disable_irqs.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t arg1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_disable_irqs._rs,"sps_bam_disable_irqs"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_bam_disable_irqs");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg1 = sym.sps_h2bam(param_1);
        if (arg1 != 0) {
            if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_bam_disable_irqs._rs.251,"sps_bam_disable_irqs"), iVar1 != 0)))) {
                _printk(0x800a2e2,"sps_bam_disable_irqs",arg1 + 0x18);
            }
            if (*(arg1 + 0x238) < 2) {
                ipc_log_string(*(arg1 + 0x218),"%s: sps: BAM: %pa\n","sps_bam_disable_irqs",arg1 + 0x18);
            }
            sym.sps_bam_disable_all_irqs(arg1);
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_disable_irqs._rs.250,"sps_bam_disable_irqs"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_bam_disable_irqs");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar2,pcVar3,"sps_bam_disable_irqs");
    return 0xffffffff;
}


// ===== sym.sps_deregister_bam_device.cfi_jt @ 0x0800e670 (size 8) =====

ulong sym.sps_deregister_bam_device.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t *arg1;
    uint64_t uVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_deregister_bam_device._rs,"sps_deregister_bam_device"), iVar2 != 0)))) {
            _printk(0x80045c9,"sps_deregister_bam_device");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar4 = *(_segment.ehdr + 0x110);
        pcVar5 = "%s: sps: device handle should not be 0\n";
    }
    else {
        arg1 = sym.sps_h2bam(param_1);
        if (arg1 != NULL) {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_deregister_bam_device._rs.208,"sps_deregister_bam_device"), iVar2 != 0))
               )) {
                _printk(0x8007e68,"sps_deregister_bam_device",arg1 + 3);
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: SPS deregister BAM: phys %pa\n",
                               "sps_deregister_bam_device",arg1 + 3);
            }
            if ((*(arg1 + 0x11) & 1) != 0) {
                iVar6 = 0;
                do {
                    kfree(*(arg1 + iVar6 + 0x240));
                    iVar6 = iVar6 + 8;
                } while (iVar6 != 0xf8);
            }
            mutex_lock(_segment.ehdr + 0x70);
            uVar3 = __list_del_entry_valid(arg1);
            if ((uVar3 & 1) != 0) {
                iVar6 = *arg1;
                piVar1 = arg1[1];
                *(iVar6 + 8) = piVar1;
                *piVar1 = iVar6;
            }
            *arg1 = -0x2152ffffffffff00;
            arg1[1] = -0x2152fffffffffede;
            mutex_unlock(_segment.ehdr + 0x70);
            mutex_lock(arg1 + 0x15);
            sym.sps_bam_device_de_init(arg1);
            mutex_unlock(arg1 + 0x15);
            ipc_log_context_destroy(arg1[0x42]);
            ipc_log_context_destroy(arg1[0x43]);
            ipc_log_context_destroy(arg1[0x44]);
            ipc_log_context_destroy(arg1[0x45]);
            ipc_log_context_destroy(arg1[0x46]);
            if (arg1[5] != 0) {
                iounmap(arg1[4]);
            }
            kfree(arg1);
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_deregister_bam_device._rs.205,"sps_deregister_bam_device"), iVar2 != 0)))) {
            _printk(0x80070b6,"sps_deregister_bam_device");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar4 = *(_segment.ehdr + 0x110);
        pcVar5 = "%s: sps: did not find a BAM for this handle\n";
    }
    ipc_log_string(uVar4,pcVar5,"sps_deregister_bam_device");
    return 0xffffffff;
}


// ===== sym.sps_device_reset.cfi_jt @ 0x0800e678 (size 8) =====

int sym.sps_device_reset.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    int64_t arg1;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_device_reset._rs,"sps_device_reset"), iVar1 != 0)))) {
            _printk(0x80045c9,"sps_device_reset");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: device handle should not be 0\n","sps_device_reset");
        }
        return -1;
    }
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x30) == 0)) {
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_device_reset._rs.94,"sps_device_reset"), iVar1 != 0)))) {
            _printk(0x800700c,"sps_device_reset");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_device_reset");
            return -0x205;
        }
        return -0x205;
    }
    mutex_lock(_segment.ehdr + 0x70);
    arg1 = sym.sps_h2bam(param_1);
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_device_reset._rs.95,"sps_device_reset"), iVar1 != 0)))) {
            _printk(0x800af3b,"sps_device_reset",param_1);
        }
        iVar1 = -1;
        if (_segment.ehdr == 0) goto code_r0x0801e6d4;
        pcVar3 = "%s: sps:Invalid BAM device handle: 0x%pK\n";
    }
    else {
        mutex_lock(arg1 + 0xa8);
        iVar1 = sym.sps_bam_reset(arg1);
        mutex_unlock(arg1 + 0xa8);
        if (iVar1 == 0) goto code_r0x0801e6d4;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_device_reset._rs.96,"sps_device_reset"), iVar2 != 0)))) {
            _printk(0x8004b03,"sps_device_reset",param_1);
        }
        if (_segment.ehdr == 0) goto code_r0x0801e6d4;
        pcVar3 = "%s: sps:Fail to reset BAM device: 0x%pK\n";
    }
    ipc_log_string(*(_segment.ehdr + 0x110),pcVar3,"sps_device_reset",param_1);
code_r0x0801e6d4:
    mutex_unlock(_segment.ehdr + 0x70);
    return iVar1;
}


// ===== sym.sps_bam_enable_irqs.cfi_jt @ 0x0800e680 (size 8) =====

ulong sym.sps_bam_enable_irqs.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t arg1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_enable_irqs._rs,"sps_bam_enable_irqs"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_bam_enable_irqs");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg1 = sym.sps_h2bam(param_1);
        if (arg1 != 0) {
            if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_bam_enable_irqs._rs.249,"sps_bam_enable_irqs"), iVar1 != 0)))) {
                _printk(0x800a2e2,"sps_bam_enable_irqs",arg1 + 0x18);
            }
            if (*(arg1 + 0x238) < 2) {
                ipc_log_string(*(arg1 + 0x218),"%s: sps: BAM: %pa\n","sps_bam_enable_irqs",arg1 + 0x18);
            }
            sym.sps_bam_enable_all_irqs(arg1);
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_enable_irqs._rs.248,"sps_bam_enable_irqs"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_bam_enable_irqs");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar2,pcVar3,"sps_bam_enable_irqs");
    return 0xffffffff;
}


// ===== sym.sps_set_logging_option.639189d76e9915dcda9027510d7b62b6.cfi_jt @ 0x0800e688 (size 8) =====

uint64_t sym.sps_set_logging_option.639189d76e9915dcda9027510d7b62b6.cfi_jt
                   (ulong param_1,ulong param_2,uint64_t param_3)

{
    int64_t *arg1;
    ulong *puVar1;
    ulong *puVar2;
    code cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int *piVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong extraout_x1;
    char *pcVar11;
    uint uVar12;
    uint64_t uVar13;
    ulong *puVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar13 = 10;
    uStack_3c = 0;
    iVar5 = kstrtouint_from_user(param_2,param_3,10,&uStack_3c);
    if (iVar5 == 0) {
        _printk(0x8004bdf,uStack_3c);
        if (uStack_3c < 4) {
            mutex_lock(obj.sps_debugfs_lock);
            if (((uStack_3c & 0xfffffffd) == 0) && ((obj.logging_option & 0xfd) == 1)) {
                obj.debugfs_record_enabled = 0x0;
                kfree(_segment.ehdr);
                _segment.ehdr = NULL;
                obj.wraparound = 0x0;
            }
            obj.logging_option = SUB41(uStack_3c,0);
            mutex_unlock(obj.sps_debugfs_lock);
        }
        else {
            _printk(0x80081f0);
        }
    }
    else {
        param_3 = iVar5;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.sps_set_bam_addr;
    pcStack_78 = sym.sps_set_bam_addr;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    uStack_8c = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    uVar6 = kstrtouint_from_user(extraout_x1,uVar13,10,&uStack_8c);
    if (uVar6 != 0) {
        uVar13 = uVar6;
        goto code_r0x080227c0;
    }
    _printk(0x8007e91,uStack_8c);
    iVar7 = sym.phy2bam(uStack_8c);
    if (iVar7 == 0) {
        _printk(0x80099a0,uStack_8c);
        goto code_r0x080227c0;
    }
    if (_segment.ehdr < 5) {
        *(iVar7 + 0x238) = _segment.ehdr;
    }
    if (0x62 < obj.reg_dump_option - 1) {
code_r0x08023088:
        _printk(0x800cd06);
        goto code_r0x080227c0;
    }
    uVar6 = *(iVar7 + 0x30);
    uVar17 = uVar6;
    arg1 = iVar7 + 0xd8;
    switch(obj.reg_dump_option) {
    case 1:
        sym.print_bam_reg(*arg1);
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1,uVar17);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 2:
        sym.print_bam_reg(*arg1);
        break;
    case 3:
code_r0x08022f94:
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        break;
    case 4:
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar17);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 5:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 6:
        sym.print_bam_pipe_selected_reg(arg1,4);
        sym.print_bam_pipe_selected_reg(arg1,5);
        break;
    case 7:
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1,uVar17,0);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 8:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 9:
        sym.print_bam_pipe_desc_fifo(arg1,4,0);
        goto code_r0x08022a84;
    case 10:
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar17);
                sym.print_bam_pipe_desc_fifo(arg1,uVar17,0);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 0xb:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0xc:
        sym.print_bam_pipe_selected_reg(arg1,4);
        sym.print_bam_pipe_desc_fifo(arg1,4,0);
        sym.print_bam_pipe_selected_reg(arg1,5);
code_r0x08022a84:
        sym.print_bam_pipe_desc_fifo(arg1,5,0);
        break;
    case 0xd:
        if (_segment.ehdr == 0) {
            _printk(0x8004f84);
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        break;
    case 0xe:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0xf:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x10:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_reg(*arg1,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    default:
        goto code_r0x08023088;
    case 0x5b:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar17);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 0x5c:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x5d:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
            uVar16 = 0;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x5e:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x5f:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
            uVar16 = 0;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x60:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x61:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
            uVar16 = 0;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
            uVar16 = 0;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x62:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar16 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,0);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar16 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 99:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr & 0xffffffff);
        sym.print_bam_reg(*arg1);
        if (uVar6 == 0) goto code_r0x08022f94;
        uVar17 = 0;
        do {
            sym.print_bam_pipe_reg(*arg1,uVar17);
            uVar15 = uVar17 + 1;
            uVar17 = uVar15;
        } while (uVar6 != uVar15);
        sym.print_bam_selected_reg(arg1,*(iVar7 + 0x80));
        uVar15 = 0;
        do {
            sym.print_bam_pipe_selected_reg(arg1,uVar15);
            uVar15 = uVar15 + 1;
        } while (uVar6 != uVar15);
        uVar15 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1,uVar15,0);
            uVar15 = uVar15 + 1;
        } while (uVar6 != uVar15);
        uVar17 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1,uVar17,100);
            uVar15 = uVar17 + 1;
            uVar17 = uVar15;
        } while (uVar6 != uVar15);
    }
code_r0x080227c0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_88) {
        return uVar13;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_sps_probe;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar5 = ___ratelimit(obj.msm_sps_probe._rs,"msm_sps_probe"), iVar5 != 0))))
    {
        _printk(0x8004ef6,"msm_sps_probe");
    }
    if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Enter\n","msm_sps_probe");
    }
    if (*(iVar7 + 0x300) == 0) {
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.get_platform_data._rs,"get_platform_data"), iVar5 != 0)))) {
            _printk(0x8004ef6,"get_platform_data");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Enter\n","get_platform_data");
        }
        uVar13 = _segment.ehdr;
        if (*(iVar7 + 0xa0) == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.get_platform_data._rs.376,"get_platform_data"), iVar5 != 0)))) {
                _printk(0x800bc66,"get_platform_data");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: invalid platform data\n","get_platform_data");
            }
            cVar3 = obj.logging_option;
            *(_segment.ehdr + 0x68) = 0;
            if ((cVar3 != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.341,"msm_sps_probe"), iVar5 != 0)))) {
                _printk(0x8005e33,"msm_sps_probe");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: :Fail to get platform data\n","msm_sps_probe");
                return 0xffffffed;
            }
            return 0xffffffed;
        }
        uVar12 = **(iVar7 + 0xa0);
        bVar4 = 1 < obj.logging_option;
        *(_segment.ehdr + 0x68) = uVar12;
        if ((bVar4) && (uVar13 = _segment.ehdr, obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option != 0x0) {
                iVar5 = ___ratelimit(obj.get_platform_data._rs.379,"get_platform_data");
                uVar13 = _segment.ehdr;
                if (iVar5 == 0) goto joined_r0x08023b90;
                uVar12 = *(_segment.ehdr + 0x68);
            }
            _printk(0x800c17f,"get_platform_data",uVar12);
            uVar13 = _segment.ehdr;
        }
joined_r0x08023b90:
        if ((uVar13 != 0) && (*(uVar13 + 0x120) < 4)) {
            ipc_log_string(*(uVar13 + 0x110),"%s: sps:bamdma_restricted_pipes=0x%x\n","get_platform_data",
                           *(uVar13 + 0x68));
        }
        piVar8 = platform_get_resource_byname(iVar7,0x200,"pipe_mem");
        uVar13 = _segment.ehdr;
        if (piVar8 != NULL) {
            puVar14 = _segment.ehdr + 0x38;
            *puVar14 = *piVar8;
            iVar5 = (piVar8[2] - *piVar8) + 1;
            bVar4 = 1 < obj.logging_option;
            *(uVar13 + 0x40) = iVar5;
            if ((bVar4) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option != 0x0) {
                    iVar5 = ___ratelimit(obj.get_platform_data._rs.383,"get_platform_data");
                    if (iVar5 == 0) goto code_r0x08023234;
                    puVar14 = _segment.ehdr + 0x38;
                    iVar5 = *(_segment.ehdr + 0x40);
                }
                _printk(0x8005e5a,"get_platform_data",puVar14,iVar5);
            }
code_r0x08023234:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:pipemem.base=%pa,size=0x%x\n","get_platform_data",
                               _segment.ehdr + 0x38,*(_segment.ehdr + 0x40));
            }
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.344,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get platform data\n");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: %s","msm_sps_probe","sps:get platform data\n");
        }
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    }
    else {
        iVar5 = of_property_read_variable_u32_array(*(iVar7 + 0x300),"qcom,device-type",obj.bam_init._rs.5,1,0);
        if (iVar5 < 0) {
            _segment.ehdr = CONCAT44(*0x8000004,3);
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option == 0x0) {
                    uVar13 = 3;
                }
                else {
                    iVar5 = ___ratelimit(obj.get_device_tree_data._rs,"get_device_tree_data");
                    if (iVar5 == 0) goto code_r0x080232c8;
                    uVar13 = _segment.ehdr & 0xffffffff;
                }
                _printk(0x8007ac2,"get_device_tree_data",uVar13);
            }
code_r0x080232c8:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                pcVar11 = "%s: sps:default device type %d\n";
                goto code_r0x080232e4;
            }
        }
        else {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.get_device_tree_data._rs.367,"get_device_tree_data"), iVar5 != 0)))) {
                _printk(0x8005a0b,"get_device_tree_data",_segment.ehdr & 0xffffffff);
            }
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                pcVar11 = "%s: sps:device type is %d\n";
code_r0x080232e4:
                ipc_log_string(*(_segment.ehdr + 0x110),pcVar11,"get_device_tree_data",_segment.ehdr & 0xffffffff);
            }
        }
        iVar9 = of_find_property(*(iVar7 + 0x300),"qcom,pipe-attr-ee",0);
        obj.enhd_pipe = iVar9 != 0;
        if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar10 = 0x800b728;
                if (iVar9 == 0) {
                    uVar10 = 0x8006670;
                }
            }
            else {
                iVar5 = ___ratelimit(obj.get_device_tree_data._rs.371,"get_device_tree_data");
                if (iVar5 == 0) goto code_r0x0802332c;
                uVar10 = 0x8006670;
                if (obj.enhd_pipe != 0x0) {
                    uVar10 = 0x800b728;
                }
            }
            _printk(0x8008e10,"get_device_tree_data",uVar10);
        }
code_r0x0802332c:
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
            uVar10 = 0x8006670;
            if (obj.enhd_pipe != 0x0) {
                uVar10 = 0x800b728;
            }
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:PIPE_ATTR_EE is %s supported\n","get_device_tree_data",
                           uVar10);
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.333,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get data from device tree\n");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: %s","msm_sps_probe","sps:get data from device tree\n");
        }
        iVar9 = of_match_device(obj.msm_sps_match,iVar7 + 0x10);
        if (iVar9 == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option == 0x0) {
                    uVar13 = 1;
                }
                else {
                    iVar5 = ___ratelimit(obj.msm_sps_probe._rs.338,"msm_sps_probe");
                    if (iVar5 == 0) goto code_r0x08023424;
                    uVar13 = _segment.ehdr & 0xffffffff;
                }
                _printk(0x800bc43,"msm_sps_probe",uVar13);
            }
code_r0x08023424:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                uVar10 = _segment.ehdr[0x22];
                pcVar11 = "%s: sps:use default BAM type:%d\n";
                goto code_r0x08023448;
            }
        }
        else {
            _segment.ehdr = CONCAT44(*0x8000004,**(iVar9 + 0xc0));
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                uVar12 = **(iVar9 + 0xc0);
                if (obj.print_limit_option != 0x0) {
                    iVar5 = ___ratelimit(obj.msm_sps_probe._rs.335,"msm_sps_probe");
                    if (iVar5 == 0) goto code_r0x080233e4;
                    uVar12 = _segment.ehdr;
                }
                _printk(0x80089dc,"msm_sps_probe",uVar12);
            }
code_r0x080233e4:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                uVar10 = _segment.ehdr[0x22];
                pcVar11 = "%s: sps:BAM type is:%d\n";
code_r0x08023448:
                ipc_log_string(uVar10,pcVar11,"msm_sps_probe",_segment.ehdr);
            }
        }
    }
    uVar10 = __class_create(obj.__this_module,"msm_sps",obj.sps_debugfs_init.__key);
    *_segment.ehdr = uVar10;
    uVar6 = alloc_chrdev_region(_segment.ehdr + 1,0,1,"msm_sps");
    if (uVar6 != 0) {
        uVar13 = uVar6;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.346,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8004c12,"msm_sps_probe");
        }
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr[0x22],"%s: sps: alloc_chrdev_region err\n","msm_sps_probe");
        }
        goto code_r0x08023978;
    }
    uVar13 = device_create(*_segment.ehdr,0,*(_segment.ehdr + 1),_segment.ehdr,"msm_sps");
    puVar14 = _segment.ehdr;
    _segment.ehdr[2] = uVar13;
    if (uVar13 < 0xfffffffffffff001) {
        if (*(iVar7 + 0x300) != 0) {
            *(uVar13 + 0x2f0) = *(iVar7 + 0x300);
        }
        if (_segment.ehdr == 0) {
            uVar13 = clk_get(puVar14[2],"mem_clk");
            _segment.ehdr[3] = uVar13;
            if (uVar13 < 0xfffffffffffff001) {
                uVar6 = clk_prepare(uVar13);
                if (uVar6 == 0) {
                    uVar6 = clk_enable(uVar13);
                    if (uVar6 == 0) goto code_r0x0802358c;
                    clk_unprepare(uVar13);
                }
                uVar13 = uVar6;
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.356,"msm_sps_probe"), iVar5 != 0)))) {
                    _printk(0x8008dea,"msm_sps_probe");
                }
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps: failed to enable pmem_clk\n","msm_sps_probe");
                }
                goto code_r0x0802393c;
            }
            if (uVar13 == 0xfffffffffffffdfb) {
                uVar13 = 0xfffffdfb;
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.353,"msm_sps_probe"), iVar5 != 0)))) {
                    _printk(0x8008dc9,"msm_sps_probe");
                }
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps: fail to get pmem_clk\n","msm_sps_probe");
                }
                uVar13 = 0;
            }
        }
        else {
code_r0x0802358c:
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.sps_device_init._rs,"sps_device_init"), iVar5 != 0)))) {
                _printk(0x80084da,"sps_device_init");
            }
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                ipc_log_string(_segment.ehdr[0x22],"%s: Enter\n","sps_device_init");
            }
            iVar5 = sym.sps_mem_init(_segment.ehdr[7],*(_segment.ehdr + 8));
            puVar14 = _segment.ehdr;
            if (iVar5 == 0) {
                puVar1 = _segment.ehdr + 0x14;
                puVar2 = _segment.ehdr + 0xe;
                _segment.ehdr[0x14] = puVar1;
                puVar14[0x15] = puVar1;
                __mutex_init(puVar2,"&sps->lock",obj.sps_debugfs_init.__key);
                iVar5 = sym.sps_rm_init(_segment.ehdr + 0x17);
                if (iVar5 == 0) {
                    iVar5 = sym.sps_map_init(0,*(_segment.ehdr + 0x6c));
                    puVar14 = _segment.ehdr;
                    if (iVar5 == 0) {
                        bVar4 = obj.logging_option != 0x1;
                        *(_segment.ehdr + 6) = 1;
                        if ((bVar4) &&
                           ((obj.print_limit_option < 2 ||
                            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.362,"msm_sps_probe"), puVar14 = _segment.ehdr
                            , iVar5 != 0)))) {
                            _printk(0x8007fbf,"msm_sps_probe","sps:sps is ready\n");
                            puVar14 = _segment.ehdr;
                        }
                        if (puVar14 != NULL) {
                            ipc_log_string(puVar14[0x22],"%s: %s","msm_sps_probe","sps:sps is ready\n");
                        }
                        return 0;
                    }
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_device_init._rs.396,"sps_device_init"), iVar5 != 0)))) {
                        _printk(0x8004fd7,"sps_device_init");
                    }
                    if (_segment.ehdr != NULL) {
                        pcVar11 = "%s: sps: SPS connection mapping init failed\n";
                        goto code_r0x080238b0;
                    }
                }
                else {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_device_init._rs.390,"sps_device_init"), iVar5 != 0)))) {
                        _printk(0x8004c5e,"sps_device_init");
                    }
                    if (_segment.ehdr != NULL) {
                        pcVar11 = "%s: sps: Fail to init SPS resource manager\n";
code_r0x080238b0:
                        ipc_log_string(_segment.ehdr[0x22],pcVar11,"sps_device_init");
                    }
                }
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.sps_device_init._rs.386,"sps_device_init"), iVar5 != 0)))) {
                    _printk(0x8004fb4,"sps_device_init");
                }
                if (_segment.ehdr != NULL) {
                    pcVar11 = "%s: sps: SPS memory init failed\n";
                    goto code_r0x080238b0;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.359,"msm_sps_probe"), iVar5 != 0)))) {
                _printk(0x8004c3e,"msm_sps_probe");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr[0x22],"%s: sps: sps_device_init err\n","msm_sps_probe");
            }
            if (_segment.ehdr == 0) {
                uVar10 = _segment.ehdr[3];
                clk_disable(uVar10);
                clk_unprepare(uVar10);
                uVar13 = 0xffffffff;
code_r0x0802393c:
                if (_segment.ehdr == 0) {
                    clk_put(_segment.ehdr[3]);
                }
            }
            else {
                uVar13 = 0xffffffff;
            }
        }
        device_destroy(*_segment.ehdr,*(_segment.ehdr + 1));
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.349,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x80046b9,"msm_sps_probe");
        }
        if (_segment.ehdr == NULL) {
            uVar13 = 0;
        }
        else {
            ipc_log_string(_segment.ehdr[0x22],"%s: sps: device_create err\n","msm_sps_probe");
            uVar13 = 0;
        }
    }
    unregister_chrdev_region(*(_segment.ehdr + 1),1);
code_r0x08023978:
    class_destroy(*_segment.ehdr);
    return uVar13;
}


// ===== sym.sps_set_bam_addr.639189d76e9915dcda9027510d7b62b6.cfi_jt @ 0x0800e690 (size 8) =====

uint64_t sym.sps_set_bam_addr.639189d76e9915dcda9027510d7b62b6.cfi_jt(ulong param_1,ulong param_2,uint64_t param_3)

{
    int64_t *arg1;
    code cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int *piVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    uint uVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_4c = 0;
    uVar3 = kstrtouint_from_user(param_2,param_3,10,&uStack_4c);
    if (uVar3 != 0) {
        param_3 = uVar3;
        goto code_r0x080227c0;
    }
    _printk(0x8007e91,uStack_4c);
    iVar5 = sym.phy2bam(uStack_4c);
    if (iVar5 == 0) {
        _printk(0x80099a0,uStack_4c);
        goto code_r0x080227c0;
    }
    if (_segment.ehdr < 5) {
        *(iVar5 + 0x238) = _segment.ehdr;
    }
    if (0x62 < obj.reg_dump_option - 1) {
code_r0x08023088:
        _printk(0x800cd06);
        goto code_r0x080227c0;
    }
    uVar3 = *(iVar5 + 0x30);
    uVar12 = uVar3;
    arg1 = iVar5 + 0xd8;
    switch(obj.reg_dump_option) {
    case 1:
        sym.print_bam_reg(*arg1);
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1,uVar12);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 2:
        sym.print_bam_reg(*arg1);
        break;
    case 3:
code_r0x08022f94:
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        break;
    case 4:
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar12);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 5:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 6:
        sym.print_bam_pipe_selected_reg(arg1,4);
        sym.print_bam_pipe_selected_reg(arg1,5);
        break;
    case 7:
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1,uVar12,0);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 8:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 9:
        sym.print_bam_pipe_desc_fifo(arg1,4,0);
        goto code_r0x08022a84;
    case 10:
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar12);
                sym.print_bam_pipe_desc_fifo(arg1,uVar12,0);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 0xb:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0xc:
        sym.print_bam_pipe_selected_reg(arg1,4);
        sym.print_bam_pipe_desc_fifo(arg1,4,0);
        sym.print_bam_pipe_selected_reg(arg1,5);
code_r0x08022a84:
        sym.print_bam_pipe_desc_fifo(arg1,5,0);
        break;
    case 0xd:
        if (_segment.ehdr == 0) {
            _printk(0x8004f84);
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        break;
    case 0xe:
        if (_segment.ehdr == 0) {
            _segment.ehdr = 1;
        }
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,_segment.ehdr);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0xf:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,100);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x10:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_reg(*arg1,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    default:
        goto code_r0x08023088;
    case 0x5b:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1,uVar12);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 0x5c:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x5d:
        if (_segment.ehdr == 0) {
            _segment.ehdr = 1;
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
            uVar14 = 0;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,_segment.ehdr);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x5e:
        if (_segment.ehdr == 0) {
            _segment.ehdr = 1;
        }
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,_segment.ehdr);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x5f:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
            uVar14 = 0;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x60:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x61:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
            uVar14 = 0;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
            uVar14 = 0;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,100);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x62:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1,uVar14 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,0);
                    sym.print_bam_pipe_desc_fifo(arg1,uVar14 & 0xffffffff,100);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 99:
        sym.print_bam_test_bus_reg(arg1,_segment.ehdr);
        sym.print_bam_reg(*arg1);
        if (uVar3 == 0) goto code_r0x08022f94;
        uVar12 = 0;
        do {
            sym.print_bam_pipe_reg(*arg1,uVar12);
            uVar13 = uVar12 + 1;
            uVar12 = uVar13;
        } while (uVar3 != uVar13);
        sym.print_bam_selected_reg(arg1,*(iVar5 + 0x80));
        uVar13 = 0;
        do {
            sym.print_bam_pipe_selected_reg(arg1,uVar13);
            uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
        uVar13 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1,uVar13,0);
            uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
        uVar12 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1,uVar12,100);
            uVar13 = uVar12 + 1;
            uVar12 = uVar13;
        } while (uVar3 != uVar13);
    }
code_r0x080227c0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return param_3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.msm_sps_probe;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar4 = ___ratelimit(obj.msm_sps_probe._rs,"msm_sps_probe"), iVar4 != 0))))
    {
        _printk(0x8004ef6,"msm_sps_probe");
    }
    iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
        ipc_log_string(*(iVar7 + 0x110),"%s: sps: Enter\n","msm_sps_probe");
    }
    if (*(iVar5 + 0x300) == 0) {
        _segment.ehdr = 0;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar4 = ___ratelimit(obj.get_platform_data._rs,"get_platform_data"), iVar4 != 0)))) {
            _printk(0x8004ef6,"get_platform_data");
        }
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
            ipc_log_string(*(iVar7 + 0x110),"%s: sps: Enter\n","get_platform_data");
        }
        if (*(iVar5 + 0xa0) == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.get_platform_data._rs.376,"get_platform_data"), iVar4 != 0)))) {
                _printk(0x800bc66,"get_platform_data");
            }
            iVar5 = 0;
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: invalid platform data\n",
                               "get_platform_data");
                iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            cVar1 = obj.logging_option;
            *(iVar5 + 0x68) = 0;
            if ((cVar1 != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.341,"msm_sps_probe"), iVar4 != 0)))) {
                _printk(0x8005e33,"msm_sps_probe");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: :Fail to get platform data\n",
                               "msm_sps_probe");
                return 0xffffffed;
            }
            return 0xffffffed;
        }
        uVar10 = **(iVar5 + 0xa0);
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        bVar2 = 1 < obj.logging_option;
        *(iVar7 + 0x68) = uVar10;
        if (bVar2) {
            if (obj.debug_level_option != 0x0) {
                if (obj.print_limit_option != 0x0) {
                    iVar4 = ___ratelimit(obj.get_platform_data._rs.379,"get_platform_data");
                    if (iVar4 == 0) goto code_r0x08023b8c;
                    uVar10 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x68);
                }
                _printk(0x800c17f,"get_platform_data",uVar10);
            }
code_r0x08023b8c:
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
            ipc_log_string(*(iVar7 + 0x110),"%s: sps:bamdma_restricted_pipes=0x%x\n","get_platform_data",
                           *(iVar7 + 0x68));
        }
        piVar6 = platform_get_resource_byname(iVar5,0x200,"pipe_mem");
        if (piVar6 != NULL) {
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            puVar11 = iVar7 + 0x38;
            *puVar11 = *piVar6;
            iVar4 = (piVar6[2] - *piVar6) + 1;
            bVar2 = 1 < obj.logging_option;
            *(iVar7 + 0x40) = iVar4;
            if ((bVar2) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option != 0x0) {
                    iVar4 = ___ratelimit(obj.get_platform_data._rs.383,"get_platform_data");
                    if (iVar4 == 0) goto code_r0x08023234;
                    puVar11 = CONCAT44(*0x8000004,_segment.ehdr) + 0x38;
                    iVar4 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x40);
                }
                _printk(0x8005e5a,"get_platform_data",puVar11,iVar4);
            }
code_r0x08023234:
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                ipc_log_string(*(iVar7 + 0x110),"%s: sps:pipemem.base=%pa,size=0x%x\n","get_platform_data",
                               iVar7 + 0x38,*(iVar7 + 0x40));
            }
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.344,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get platform data\n");
        }
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x120) == 0)) {
            ipc_log_string(*(iVar7 + 0xf8),"%s: %s","msm_sps_probe","sps:get platform data\n");
        }
        _segment.ehdr = 0;
    }
    else {
        iVar4 = of_property_read_variable_u32_array(*(iVar5 + 0x300),"qcom,device-type",obj.bam_init._rs.5,1,0);
        if (iVar4 < 0) {
            _segment.ehdr = 3;
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.get_device_tree_data._rs,"get_device_tree_data"), iVar4 != 0)))) {
                _printk(0x8007ac2,"get_device_tree_data",_segment.ehdr);
            }
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                pcVar9 = "%s: sps:default device type %d\n";
                goto code_r0x080232e4;
            }
        }
        else {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.get_device_tree_data._rs.367,"get_device_tree_data"), iVar4 != 0)))) {
                _printk(0x8005a0b,"get_device_tree_data",_segment.ehdr);
            }
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                pcVar9 = "%s: sps:device type is %d\n";
code_r0x080232e4:
                ipc_log_string(*(iVar7 + 0x110),pcVar9,"get_device_tree_data",_segment.ehdr);
            }
        }
        iVar7 = of_find_property(*(iVar5 + 0x300),"qcom,pipe-attr-ee",0);
        obj.enhd_pipe = iVar7 != 0;
        if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar8 = 0x800b728;
                if (iVar7 == 0) {
                    uVar8 = 0x8006670;
                }
            }
            else {
                iVar4 = ___ratelimit(obj.get_device_tree_data._rs.371,"get_device_tree_data");
                if (iVar4 == 0) goto code_r0x0802332c;
                uVar8 = 0x8006670;
                if (obj.enhd_pipe != 0x0) {
                    uVar8 = 0x800b728;
                }
            }
            _printk(0x8008e10,"get_device_tree_data",uVar8);
        }
code_r0x0802332c:
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
            uVar8 = 0x8006670;
            if (obj.enhd_pipe != 0x0) {
                uVar8 = 0x800b728;
            }
            ipc_log_string(*(iVar7 + 0x110),"%s: sps:PIPE_ATTR_EE is %s supported\n","get_device_tree_data",uVar8);
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.333,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get data from device tree\n");
        }
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x120) == 0)) {
            ipc_log_string(*(iVar7 + 0xf8),"%s: %s","msm_sps_probe","sps:get data from device tree\n");
        }
        iVar7 = of_match_device(obj.msm_sps_match,iVar5 + 0x10);
        if (iVar7 == 0) {
            _segment.ehdr = 1;
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.338,"msm_sps_probe"), iVar4 != 0)))) {
                _printk(0x800bc43,"msm_sps_probe",_segment.ehdr);
            }
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                uVar8 = *(iVar7 + 0x110);
                pcVar9 = "%s: sps:use default BAM type:%d\n";
                goto code_r0x08023448;
            }
        }
        else {
            _segment.ehdr = **(iVar7 + 0xc0);
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.335,"msm_sps_probe"), iVar4 != 0)))) {
                _printk(0x80089dc,"msm_sps_probe",_segment.ehdr);
            }
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                uVar8 = *(iVar7 + 0x110);
                pcVar9 = "%s: sps:BAM type is:%d\n";
code_r0x08023448:
                ipc_log_string(uVar8,pcVar9,"msm_sps_probe",_segment.ehdr);
            }
        }
    }
    uVar8 = __class_create(obj.__this_module,"msm_sps",obj.sps_debugfs_init.__key);
    *CONCAT44(*0x8000004,_segment.ehdr) = uVar8;
    uVar3 = alloc_chrdev_region(CONCAT44(*0x8000004,_segment.ehdr) + 8,0,1,"msm_sps");
    if (uVar3 != 0) {
        uVar12 = uVar3;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.346,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x8004c12,"msm_sps_probe");
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: alloc_chrdev_region err\n",
                           "msm_sps_probe");
        }
        goto code_r0x08023978;
    }
    puVar11 = CONCAT44(*0x8000004,_segment.ehdr);
    uVar12 = device_create(*puVar11,0,*(puVar11 + 1),puVar11,"msm_sps");
    iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar7 + 0x10) = uVar12;
    if (uVar12 < 0xfffffffffffff001) {
        if (*(iVar5 + 0x300) != 0) {
            *(uVar12 + 0x2f0) = *(iVar5 + 0x300);
        }
        if (_segment.ehdr == 0) {
            uVar12 = clk_get(*(iVar7 + 0x10),"mem_clk");
            *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18) = uVar12;
            if (uVar12 < 0xfffffffffffff001) {
                uVar3 = clk_prepare(uVar12);
                if (uVar3 == 0) {
                    uVar3 = clk_enable(uVar12);
                    if (uVar3 == 0) goto code_r0x0802358c;
                    clk_unprepare(uVar12);
                }
                uVar12 = uVar3;
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.356,"msm_sps_probe"), iVar4 != 0)))) {
                    _printk(0x8008dea,"msm_sps_probe");
                }
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),
                                   "%s: sps: failed to enable pmem_clk\n","msm_sps_probe");
                }
                goto code_r0x0802393c;
            }
            if (uVar12 == 0xfffffffffffffdfb) {
                uVar12 = 0xfffffdfb;
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.353,"msm_sps_probe"), iVar4 != 0)))) {
                    _printk(0x8008dc9,"msm_sps_probe");
                }
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: fail to get pmem_clk\n",
                                   "msm_sps_probe");
                }
                uVar12 = 0;
            }
        }
        else {
code_r0x0802358c:
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.sps_device_init._rs,"sps_device_init"), iVar4 != 0)))) {
                _printk(0x80084da,"sps_device_init");
            }
            iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar5 != 0) && (*(iVar5 + 0x120) < 4)) {
                ipc_log_string(*(iVar5 + 0x110),"%s: Enter\n","sps_device_init");
                iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            iVar4 = sym.sps_mem_init(*(iVar5 + 0x38),*(iVar5 + 0x40));
            if (iVar4 == 0) {
                iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                *(iVar5 + 0xa0) = iVar5 + 0xa0;
                *(iVar5 + 0xa8) = iVar5 + 0xa0;
                __mutex_init(iVar5 + 0x70,"&sps->lock",obj.sps_debugfs_init.__key);
                iVar4 = sym.sps_rm_init(CONCAT44(*0x8000004,_segment.ehdr) + 0xb8);
                if (iVar4 == 0) {
                    iVar4 = sym.sps_map_init(0,*(CONCAT44(*0x8000004,_segment.ehdr) + 0x6c));
                    if (iVar4 == 0) {
                        iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                        bVar2 = obj.logging_option != 0x1;
                        *(iVar5 + 0x30) = 1;
                        if (bVar2) {
                            if ((obj.print_limit_option < 2) ||
                               (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.362,"msm_sps_probe"), iVar4 != 0)) {
                                _printk(0x8007fbf,"msm_sps_probe","sps:sps is ready\n");
                            }
                            iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                        }
                        if (iVar5 != 0) {
                            ipc_log_string(*(iVar5 + 0x110),"%s: %s","msm_sps_probe","sps:sps is ready\n");
                        }
                        return 0;
                    }
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar4 = ___ratelimit(obj.sps_device_init._rs.396,"sps_device_init"), iVar4 != 0)))) {
                        _printk(0x8004fd7,"sps_device_init");
                    }
                    iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                    if (iVar5 != 0) {
                        pcVar9 = "%s: sps: SPS connection mapping init failed\n";
                        goto code_r0x080238b0;
                    }
                }
                else {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar4 = ___ratelimit(obj.sps_device_init._rs.390,"sps_device_init"), iVar4 != 0)))) {
                        _printk(0x8004c5e,"sps_device_init");
                    }
                    iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                    if (iVar5 != 0) {
                        pcVar9 = "%s: sps: Fail to init SPS resource manager\n";
code_r0x080238b0:
                        ipc_log_string(*(iVar5 + 0x110),pcVar9,"sps_device_init");
                    }
                }
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar4 = ___ratelimit(obj.sps_device_init._rs.386,"sps_device_init"), iVar4 != 0)))) {
                    _printk(0x8004fb4,"sps_device_init");
                }
                iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                if (iVar5 != 0) {
                    pcVar9 = "%s: sps: SPS memory init failed\n";
                    goto code_r0x080238b0;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.359,"msm_sps_probe"), iVar4 != 0)))) {
                _printk(0x8004c3e,"msm_sps_probe");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: sps_device_init err\n",
                               "msm_sps_probe");
            }
            if (_segment.ehdr == 0) {
                uVar8 = *((*0x8000004 << 0x20) + 0x18);
                clk_disable(uVar8);
                clk_unprepare(uVar8);
                uVar12 = 0xffffffff;
code_r0x0802393c:
                if (_segment.ehdr == 0) {
                    clk_put(*((*0x8000004 << 0x20) + 0x18));
                }
            }
            else {
                uVar12 = 0xffffffff;
            }
        }
        device_destroy(*CONCAT44(*0x8000004,_segment.ehdr),*(CONCAT44(*0x8000004,_segment.ehdr) + 1));
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.349,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x80046b9,"msm_sps_probe");
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            uVar12 = 0;
        }
        else {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: device_create err\n",
                           "msm_sps_probe");
            uVar12 = 0;
        }
    }
    unregister_chrdev_region(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),1);
code_r0x08023978:
    class_destroy(*CONCAT44(*0x8000004,_segment.ehdr));
    return uVar12;
}


// ===== sym.sps_set_info.639189d76e9915dcda9027510d7b62b6.cfi_jt @ 0x0800e698 (size 8) =====

uint64_t sym.sps_set_info.639189d76e9915dcda9027510d7b62b6.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint8_t *puVar1;
    uint64_t uVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    bool bVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t arg3;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint8_t auStack_a8 [80];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    arg3 = param_3;
    if (0x4f < param_3) {
        arg3 = 0x50;
    }
    auStack_a8[0x40] = 0;
    auStack_a8[0x41] = 0;
    auStack_a8[0x42] = 0;
    auStack_a8[0x43] = 0;
    auStack_a8[0x44] = 0;
    auStack_a8[0x45] = 0;
    auStack_a8[0x46] = 0;
    auStack_a8[0x47] = 0;
    auStack_a8[0x48] = 0;
    auStack_a8[0x49] = 0;
    auStack_a8[0x4a] = 0;
    auStack_a8[0x4b] = 0;
    auStack_a8[0x4c] = 0;
    auStack_a8[0x4d] = 0;
    auStack_a8[0x4e] = 0;
    auStack_a8[0x4f] = 0;
    auStack_a8[0x30] = 0;
    auStack_a8[0x31] = 0;
    auStack_a8[0x32] = 0;
    auStack_a8[0x33] = 0;
    auStack_a8[0x34] = 0;
    auStack_a8[0x35] = 0;
    auStack_a8[0x36] = 0;
    auStack_a8[0x37] = 0;
    auStack_a8[0x38] = 0;
    auStack_a8[0x39] = 0;
    auStack_a8[0x3a] = 0;
    auStack_a8[0x3b] = 0;
    auStack_a8[0x3c] = 0;
    auStack_a8[0x3d] = 0;
    auStack_a8[0x3e] = 0;
    auStack_a8[0x3f] = 0;
    auStack_a8[0x20] = 0;
    auStack_a8[0x21] = 0;
    auStack_a8[0x22] = 0;
    auStack_a8[0x23] = 0;
    auStack_a8[0x24] = 0;
    auStack_a8[0x25] = 0;
    auStack_a8[0x26] = 0;
    auStack_a8[0x27] = 0;
    auStack_a8[0x28] = 0;
    auStack_a8[0x29] = 0;
    auStack_a8[0x2a] = 0;
    auStack_a8[0x2b] = 0;
    auStack_a8[0x2c] = 0;
    auStack_a8[0x2d] = 0;
    auStack_a8[0x2e] = 0;
    auStack_a8[0x2f] = 0;
    auStack_a8[0x10] = 0;
    auStack_a8[0x11] = 0;
    auStack_a8[0x12] = 0;
    auStack_a8[0x13] = 0;
    auStack_a8[0x14] = 0;
    auStack_a8[0x15] = 0;
    auStack_a8[0x16] = 0;
    auStack_a8[0x17] = 0;
    auStack_a8[0x18] = 0;
    auStack_a8[0x19] = 0;
    auStack_a8[0x1a] = 0;
    auStack_a8[0x1b] = 0;
    auStack_a8[0x1c] = 0;
    auStack_a8[0x1d] = 0;
    auStack_a8[0x1e] = 0;
    auStack_a8[0x1f] = 0;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    auStack_a8[2] = 0;
    auStack_a8[3] = 0;
    auStack_a8[4] = 0;
    auStack_a8[5] = 0;
    auStack_a8[6] = 0;
    auStack_a8[7] = 0;
    auStack_a8[8] = 0;
    auStack_a8[9] = 0;
    auStack_a8[10] = 0;
    auStack_a8[0xb] = 0;
    auStack_a8[0xc] = 0;
    auStack_a8[0xd] = 0;
    auStack_a8[0xe] = 0;
    auStack_a8[0xf] = 0;
    __check_object_size(auStack_a8,arg3,0);
    iVar7 = sym._copy_from_user(auStack_a8,param_2,arg3);
    if (iVar7 == 0) {
        iVar7 = 0;
        uVar12 = 0;
        do {
            puVar1 = auStack_a8 + iVar7;
            if (9 < *puVar1 - 0x30) break;
            iVar7 = iVar7 + 1;
            uVar12 = (*puVar1 + uVar12 * 10) - 0x30;
        } while (iVar7 != 0x50);
        _printk(0x8004f5a,uVar12);
        if ((obj.logging_option & 0xfd) == 0) {
            uVar8 = 0x800a306;
        }
        else if (uVar12 == 0) {
            uVar8 = 0x800b071;
        }
        else {
            if (uVar12 < 0x200000) {
                iVar3 = uVar12 << 10;
                mutex_lock(obj.sps_debugfs_lock);
                uVar5 = _segment.ehdr;
                if (obj.debugfs_record_enabled == 0x0) {
code_r0x0802235c:
                    _segment.ehdr = CONCAT44(*0x8000004,iVar3);
                    _segment.ehdr = __kmalloc(iVar3,0xdc0);
                    if (_segment.ehdr == 0) {
                        _segment.ehdr = 0;
                        mutex_unlock(obj.sps_debugfs_lock);
                        param_3 = 0xfffffffffffffff4;
                        goto code_r0x08022274;
                    }
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                    obj.wraparound = 0x0;
                    obj.debugfs_record_enabled = 0x1;
                }
                else {
                    if (_segment.ehdr != iVar3) {
                        obj.debugfs_record_enabled = 0x0;
                        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                        obj.wraparound = 0x0;
                        kfree(uVar5);
                        _segment.ehdr = 0;
                        goto code_r0x0802235c;
                    }
                    _printk(0x800ccce);
                }
                mutex_unlock(obj.sps_debugfs_lock);
                goto code_r0x08022274;
            }
            uVar8 = 0x800535f;
        }
        _printk(uVar8);
    }
    param_3 = 0xfffffffffffffff2;
code_r0x08022274:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return param_3;
    }
    auVar13 = __stack_chk_fail();
    uVar10 = auVar13._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar4 = sp_el0;
    uVar5 = (uVar10 << 8) >> 8;
    if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar10, (*puVar4 >> 0x1a & 1) != 0)) {
        uVar11 = uVar10 & uVar5;
    }
    bVar6 = CARRY8(uVar11,arg3);
    uVar11 = uVar11 + arg3;
    uVar2 = 0;
    if (!bVar6 || uVar11 == 0) {
        uVar2 = 0x7fffffffff;
    }
    if (bVar6) {
        uVar11 = 0xffffffffffffffff;
    }
    uVar9 = arg3;
    if (!CARRY8(uVar11,~uVar2) && !CARRY8(uVar11 + ~uVar2,bVar6) || uVar11 == uVar2 + !bVar6) {
        if ((_scnprintf >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar4[1];
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
        if ((uVar10 & uVar5 & 0xffffff8000000000) != 0) {
            uVar10 = 0;
        }
        uVar9 = __arch_copy_from_user(auVar13._0_8_,uVar10,arg3);
        if ((_scnprintf >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr0_el1 = (uVar10 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
    }
    if (uVar9 != 0) {
        memset(auVar13._0_8_ + (arg3 - uVar9),0,uVar9);
    }
    return uVar9;
}


// ===== sym.sps_transfer_one.cfi_jt @ 0x0800e6a0 (size 8) =====

uint sym.sps_transfer_one.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3,ulong param_4,uint64_t param_5)

{
    int iVar1;
    uint uVar2;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_transfer_one._rs,"sps_transfer_one"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_transfer_one");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: pipe is NULL\n","sps_transfer_one");
        }
    }
    else {
        iVar1 = sym.sps_check_iovec_flags(param_5 & 0xffffffff);
        if ((iVar1 == 0) && (arg1 = sym.sps_bam_lock(param_1), arg1 != 0)) {
            uVar2 = sym.sps_bam_pipe_transfer_one(arg1,*(param_1 + 0xbc),param_2 & 0xffffffff,param_3 & 0xffffffff);
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return uVar2;
        }
    }
    return 0xffffffff;
}


// ===== sym.sps_connect.cfi_jt @ 0x0800e6a8 (size 8) =====

int sym.sps_connect.cfi_jt(int64_t param_1,ulong *param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_connect._rs,"sps_connect"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_connect");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else if (param_2 == NULL) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_connect._rs.35,"sps_connect"), iVar1 != 0))))
        {
            _printk(0x8004eb8,"sps_connect");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: connection is NULL\n";
    }
    else {
        if (_segment.ehdr == 0) {
            return -0x13;
        }
        if (*(_segment.ehdr + 0x30) == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_connect._rs.38,"sps_connect"), iVar1 != 0)))) {
                _printk(0x8009574,"sps_connect");
            }
            if (_segment.ehdr == 0) {
                return -0xb;
            }
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_connect");
            return -0xb;
        }
        if ((*(param_2 + 0x7c) == 0xcccccccc) || (*(param_2 + 0x7c) < 0x20)) {
            mutex_lock(_segment.ehdr + 0x70);
            iVar3 = 0;
            if (*(param_2 + 0x2c) != 0) {
                iVar3 = 0x18;
            }
            iVar5 = *(param_2 + iVar3);
            iVar3 = sym.sps_h2bam(iVar5);
            if (iVar3 == 0) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar1 = ___ratelimit(obj.sps_connect._rs.43,"sps_connect"), iVar1 != 0)))) {
                    _printk(0x800af3b,"sps_connect",iVar5);
                }
                if (_segment.ehdr != 0) {
                    ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:Invalid BAM device handle: 0x%pK\n","sps_connect"
                                   ,iVar5);
                }
                iVar1 = -1;
            }
            else {
                iVar5 = iVar3 + 0xa8;
                mutex_lock(iVar5);
                if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar1 = ___ratelimit(obj.sps_connect._rs.46,"sps_connect"), iVar1 != 0)))) {
                    pcVar4 = 0x8009cd7;
                    if (*(param_2 + 0x2c) != 0) {
                        pcVar4 = "DEST";
                    }
                    _printk(0x8008122,"sps_connect",iVar3 + 0x18,*param_2,param_2[3],pcVar4);
                }
                if (*(iVar3 + 0x238) < 3) {
                    pcVar4 = 0x8009cd7;
                    if (*(param_2 + 0x2c) != 0) {
                        pcVar4 = "DEST";
                    }
                    ipc_log_string(*(iVar3 + 0x220),"%s: sps: bam %pa src 0x%pK dest 0x%pK mode %s\n","sps_connect",
                                   iVar3 + 0x18,*param_2,param_2[3],pcVar4);
                }
                memcpy(param_1 + 0x20,param_2,0x90);
                iVar1 = sym.sps_rm_state_change(param_1,0x1535053);
                if (iVar1 == 0) {
                    iVar1 = sym.sps_rm_state_change(param_1,0x2535053);
                    mutex_unlock(iVar5);
                    if (iVar1 != 0) {
                        sym.sps_disconnect(param_1);
                    }
                }
                else {
                    mutex_unlock(iVar5);
                }
            }
            mutex_unlock(_segment.ehdr + 0x70);
            return iVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_connect._rs.40,"sps_connect"), iVar1 != 0))))
        {
            _printk(0x800b76f,"sps_connect");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: The value of pipe lock group is invalid\n";
    }
    ipc_log_string(uVar2,pcVar4,"sps_connect");
    return -1;
}


// ===== sym.sps_get_config.cfi_jt @ 0x0800e6b0 (size 8) =====

ulong sym.sps_get_config.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_get_config._rs,"sps_get_config"), iVar1 != 0)
            ))) {
            _printk(0x80074f8,"sps_get_config");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: pipe is NULL\n";
code_r0x0801e8a4:
        ipc_log_string(uVar2,pcVar3,"sps_get_config");
        return 0xffffffff;
    }
    if (param_2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_get_config._rs.99,"sps_get_config"), iVar1 != 0)))) {
            _printk(0x8007075,"sps_get_config");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: config pointer is NULL\n";
        goto code_r0x0801e8a4;
    }
    iVar4 = *(param_1 + 0x18);
    if (iVar4 == 0) {
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_get_config._rs.102,"sps_get_config"), iVar1 != 0)))) {
            _printk(0x8008d2b,"sps_get_config","sps_get_config");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps:%s\n","sps_get_config","sps_get_config");
        }
        goto code_r0x0801e8ec;
    }
    if (1 < obj.logging_option) {
        if (3 < obj.debug_level_option) {
            if (obj.print_limit_option != 0x0) {
                iVar1 = ___ratelimit(obj.sps_get_config._rs.105,"sps_get_config");
                if (iVar1 == 0) goto code_r0x0801e924;
                iVar4 = *(param_1 + 0x18);
            }
            _printk(0x800a2b0,"sps_get_config",iVar4 + 0x18,*(param_1 + 0xbc),*(param_1 + 0x54));
        }
code_r0x0801e924:
        iVar4 = *(param_1 + 0x18);
        if (iVar4 == 0) goto code_r0x0801e8ec;
    }
    if (*(iVar4 + 0x238) == 0) {
        ipc_log_string(*(iVar4 + 0x210),"%s: sps: BAM: %pa; pipe index:%d; options:0x%x\n","sps_get_config",
                       iVar4 + 0x18,*(param_1 + 0xbc),*(param_1 + 0x54));
    }
code_r0x0801e8ec:
    memcpy(param_2,param_1 + 0x20,0x90);
    return 0;
}


// ===== sym.sps_set_config.cfi_jt @ 0x0800e6b8 (size 8) =====

int sym.sps_set_config.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t arg1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_set_config._rs,"sps_set_config"), iVar1 != 0)
            ))) {
            _printk(0x80074f8,"sps_set_config");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: pipe is NULL\n";
    }
    else if (param_2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_set_config._rs.108,"sps_set_config"), iVar1 != 0)))) {
            _printk(0x8007075,"sps_set_config");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: config pointer is NULL\n";
    }
    else {
        arg1 = sym.sps_bam_lock(param_1);
        if (arg1 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_set_config._rs.112,"sps_set_config"), iVar1 != 0)))) {
                _printk(0x8006bab,"sps_set_config",arg1 + 0x18,*(param_1 + 0xbc),*(param_2 + 0x34));
            }
            if (*(arg1 + 0x238) == 0) {
                ipc_log_string(*(arg1 + 0x210),"%s: sps: BAM: %pa; pipe index:%d, config-options:0x%x\n",
                               "sps_set_config",arg1 + 0x18,*(param_1 + 0xbc),*(param_2 + 0x34));
            }
            iVar1 = sym.sps_bam_pipe_set_params(arg1,*(param_1 + 0xbc),*(param_2 + 0x34));
            if (iVar1 == 0) {
                *(param_1 + 0x54) = *(param_2 + 0x34);
            }
            _raw_spin_unlock_irqrestore(arg1 + 0xe8,*(arg1 + 0xf0));
            return iVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_set_config._rs.109,"sps_set_config"), iVar1 != 0)))) {
            _printk(0x8009cdb,"sps_set_config");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM is NULL\n";
    }
    ipc_log_string(uVar2,pcVar3,"sps_set_config");
    return -1;
}


// ===== sym.sps_phy2h.cfi_jt @ 0x0800e6c0 (size 8) =====

void sym.sps_phy2h.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = param_1;
    if ((1 < obj.logging_option) && (1 < obj.debug_level_option)) {
        if (obj.print_limit_option != 0x0) goto code_r0x0801c938;
        goto code_r0x0801c8b4;
    }
    do {
        if ((_segment.ehdr == 0) ||
           (((*(_segment.ehdr + 0x120) < 3 &&
             (ipc_log_string(*(_segment.ehdr + 0x108),"%s: Enter\n","sps_phy2h"), _segment.ehdr == 0)) ||
            (*(_segment.ehdr + 0x30) == 0)))) {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 || (iVar2 = ___ratelimit(obj.sps_phy2h._rs.13,"sps_phy2h"), iVar2 != 0)
                ))) {
                _printk(0x800700c,"sps_phy2h");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_phy2h");
            }
            uVar3 = 0xfffffdfb;
        }
        else if (param_2 == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_phy2h._rs.14,"sps_phy2h"), iVar2 != 0))))
            {
                _printk(0x800aa15,"sps_phy2h");
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: handle is NULL\n","sps_phy2h");
            }
            uVar3 = 0xffffffff;
        }
        else {
            for (piVar4 = *(_segment.ehdr + 0xa0); piVar4 != _segment.ehdr + 0xa0; piVar4 = *piVar4) {
                if (piVar4[3] == param_1) {
                    uVar3 = 0;
                    *param_2 = piVar4;
                    goto code_r0x0801c804;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_phy2h._rs.17,"sps_phy2h"), iVar2 != 0))))
            {
                _printk(0x8004aac,"sps_phy2h",&iStack_40);
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: BAM device %pa is not registered yet\n","sps_phy2h"
                               ,&iStack_40);
            }
            uVar3 = 0xffffffed;
        }
code_r0x0801c804:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail(uVar3);
code_r0x0801c938:
        iVar2 = ___ratelimit(obj.sps_phy2h._rs,"sps_phy2h");
        if (iVar2 != 0) {
code_r0x0801c8b4:
            _printk(0x80084da,"sps_phy2h");
        }
    } while( true );
}


// ===== sym.bam_isr.9faaddcfa9895f87836a89dfb5e9db4a.cfi_jt @ 0x0800e6c8 (size 8) =====

ulong sym.bam_isr.9faaddcfa9895f87836a89dfb5e9db4a.cfi_jt(uint param_1,code *param_2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if ((1 < obj.logging_option) && (2 < obj.debug_level_option)) {
        if (obj.print_limit_option != 0x0) goto code_r0x08016c90;
        goto code_r0x08016b9c;
    }
    while( true ) {
        if ((param_2 != NULL) && (*(param_2 + 0x238) < 2)) {
            ipc_log_string(*(param_2 + 0x218),"%s: sps: bam:%pa; IRQ #:%d\n","bam_isr",param_2 + 0x18,param_1);
        }
        if (param_2[0x10] < '\0') {
            pcVar3 = *(param_2 + 0x68);
            if (pcVar3 == NULL) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.bam_isr._rs.277,"bam_isr"), iVar2 != 0)))
                   ) {
                    _printk(0x80078f0,"bam_isr",param_2 + 0x18);
                }
                if (param_2 != NULL) {
                    ipc_log_string(*(param_2 + 0x228),
                                   "%s: sps: Client of BAM %pa requires confirmation but does not register callback\n",
                                   "bam_isr",param_2 + 0x18);
                }
            }
            else {
                acStack_3c[0] = '\0';
                __cfi_slowpath_diag(0xde5889742f18337f,pcVar3,0x80041a0);
                (*pcVar3)(4,acStack_3c);
                if (acStack_3c[0] == '\0') {
                    if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar2 = ___ratelimit(obj.bam_isr._rs.274,"bam_isr"), iVar2 != 0)))) {
                        _printk(0x800a995,"bam_isr",param_2 + 0x18,param_1);
                    }
                    if ((param_2 != NULL) && (*(param_2 + 0x238) < 2)) {
                        ipc_log_string(*(param_2 + 0x218),
                                       "%s: sps: BAM is not ready and thus skip IRQ for bam:%pa IRQ #:%d\n","bam_isr",
                                       param_2 + 0x18,param_1);
                    }
                }
                else {
                    if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar2 = ___ratelimit(obj.bam_isr._rs.268,"bam_isr"), iVar2 != 0)))) {
                        _printk(0x8006fe0,"bam_isr",param_2 + 0x18,param_1);
                    }
                    if ((param_2 != NULL) && (*(param_2 + 0x238) < 2)) {
                        ipc_log_string(*(param_2 + 0x218),"%s: sps: handle IRQ for bam:%pa IRQ #:%d\n","bam_isr",
                                       param_2 + 0x18,param_1);
                    }
                    iVar2 = sym.sps_bam_check_irq(param_2);
                    if (iVar2 != 0) {
                        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                           ((obj.print_limit_option == 0x0 ||
                            (iVar2 = ___ratelimit(obj.bam_isr._rs.271,"bam_isr"), iVar2 != 0)))) {
                            _printk(0x800659e,"bam_isr",param_2 + 0x18,param_1);
                        }
                        if ((param_2 != NULL) && (*(param_2 + 0x238) < 3)) {
                            ipc_log_string(*(param_2 + 0x220),"%s: sps: callback bam:%pa IRQ #:%d to poll the pipes\n"
                                           ,"bam_isr",param_2 + 0x18,param_1);
                        }
                    }
                    param_2 = *(param_2 + 0x68);
                    __cfi_slowpath_diag(0xde5889742f18337f,param_2,0x80041c0);
                    (*param_2)(5,acStack_3c);
                }
            }
        }
        else {
            sym.sps_bam_check_irq(param_2);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
code_r0x08016c90:
        iVar2 = ___ratelimit(obj.bam_isr._rs,"bam_isr");
        if (iVar2 != 0) {
code_r0x08016b9c:
            _printk(0x8006580,"bam_isr",param_2 + 0x18,param_1);
        }
    }
    return 1;
}


// ===== sym.sps_ctrl_bam_dma_clk.cfi_jt @ 0x0800e6d0 (size 8) =====

int sym.sps_ctrl_bam_dma_clk.cfi_jt(uint64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x30) == 0)) {
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_ctrl_bam_dma_clk._rs,"sps_ctrl_bam_dma_clk"), iVar1 != 0)))) {
            _printk(0x800700c,"sps_ctrl_bam_dma_clk");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_ctrl_bam_dma_clk");
        }
        iVar1 = -0x205;
    }
    else if ((param_1 & 1) == 0) {
        if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_ctrl_bam_dma_clk._rs.154,"sps_ctrl_bam_dma_clk"), iVar1 != 0)))) {
            _printk(0x8007fbf,"sps_ctrl_bam_dma_clk","sps:relinquish bam dma clk\n");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 2)) {
            ipc_log_string(*(_segment.ehdr + 0x100),"%s: %s","sps_ctrl_bam_dma_clk","sps:relinquish bam dma clk\n");
        }
        uVar3 = *(_segment.ehdr + 0x20);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
        iVar1 = 0;
    }
    else {
        if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_ctrl_bam_dma_clk._rs.147,"sps_ctrl_bam_dma_clk"), iVar1 != 0)))) {
            _printk(0x8007fbf,"sps_ctrl_bam_dma_clk","sps:vote for bam dma clk\n");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 2)) {
            ipc_log_string(*(_segment.ehdr + 0x100),"%s: %s","sps_ctrl_bam_dma_clk","sps:vote for bam dma clk\n");
        }
        uVar3 = *(_segment.ehdr + 0x20);
        iVar1 = clk_prepare(uVar3);
        if (iVar1 == 0) {
            iVar1 = clk_enable(uVar3);
            if (iVar1 == 0) {
                return 0;
            }
            clk_unprepare(uVar3);
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_ctrl_bam_dma_clk._rs.151,"sps_ctrl_bam_dma_clk"), iVar2 != 0)))) {
            _printk(0x8009d5c,"sps_ctrl_bam_dma_clk",iVar1);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:fail to enable bamdma_clk:ret=%d\n",
                           "sps_ctrl_bam_dma_clk",iVar1);
        }
    }
    return iVar1;
}


// ===== sym.sps_free_mem.cfi_jt @ 0x0800e6d8 (size 8) =====

ulong sym.sps_free_mem.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.sps_free_mem._rs,"sps_free_mem"), iVar1 != 0)))) {
        _printk(0x8004ef6,"sps_free_mem");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
        ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps: Enter\n","sps_free_mem");
    }
    if ((param_2 == 0) || (*(param_2 + 8) == 0xdeadbeef)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_free_mem._rs.136,"sps_free_mem"), iVar1 != 0)
            ))) {
            _printk(0x800c07e,"sps_free_mem");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: invalid memory to free\n","sps_free_mem");
        }
        uVar2 = 0xffffffff;
    }
    else {
        if (param_1 == 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_free_mem._rs.139,"sps_free_mem"), iVar1 != 0)))) {
                _printk(0x800aa97,"sps_free_mem");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
                ipc_log_string(*(_segment.ehdr + 0x108),"%s: sps: free pipe memory\n","sps_free_mem");
            }
        }
        else {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_free_mem._rs.142,"sps_free_mem"), iVar1 != 0)))) {
                _printk(0x8006674,"sps_free_mem",*(param_1 + 0xbc));
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
                ipc_log_string(*(_segment.ehdr + 0x108),"%s: sps:free pipe memory for pipe %d\n","sps_free_mem",
                               *(param_1 + 0xbc));
            }
        }
        sym.sps_mem_free_io(*(param_2 + 8),*(param_2 + 0x18));
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.msm_sps_probe.639189d76e9915dcda9027510d7b62b6.cfi_jt @ 0x0800e6e0 (size 8) =====

int sym.msm_sps_probe.639189d76e9915dcda9027510d7b62b6.cfi_jt(int64_t param_1)

{
    code cVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint uVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar3 = ___ratelimit(obj.msm_sps_probe._rs,"msm_sps_probe"), iVar3 != 0))))
    {
        _printk(0x8004ef6,"msm_sps_probe");
    }
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
        ipc_log_string(*(iVar6 + 0x110),"%s: sps: Enter\n","msm_sps_probe");
    }
    if (*(param_1 + 0x300) == 0) {
        _segment.ehdr = 0;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar3 = ___ratelimit(obj.get_platform_data._rs,"get_platform_data"), iVar3 != 0)))) {
            _printk(0x8004ef6,"get_platform_data");
        }
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
            ipc_log_string(*(iVar6 + 0x110),"%s: sps: Enter\n","get_platform_data");
        }
        if (*(param_1 + 0xa0) == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.get_platform_data._rs.376,"get_platform_data"), iVar3 != 0)))) {
                _printk(0x800bc66,"get_platform_data");
            }
            iVar6 = 0;
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: invalid platform data\n",
                               "get_platform_data");
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            cVar1 = obj.logging_option;
            *(iVar6 + 0x68) = 0;
            if ((cVar1 != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.341,"msm_sps_probe"), iVar3 != 0)))) {
                _printk(0x8005e33,"msm_sps_probe");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: :Fail to get platform data\n",
                               "msm_sps_probe");
                return -0x13;
            }
            return -0x13;
        }
        uVar10 = **(param_1 + 0xa0);
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        bVar2 = 1 < obj.logging_option;
        *(iVar6 + 0x68) = uVar10;
        if (bVar2) {
            if (obj.debug_level_option != 0x0) {
                if (obj.print_limit_option != 0x0) {
                    iVar3 = ___ratelimit(obj.get_platform_data._rs.379,"get_platform_data");
                    if (iVar3 == 0) goto code_r0x08023b8c;
                    uVar10 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x68);
                }
                _printk(0x800c17f,"get_platform_data",uVar10);
            }
code_r0x08023b8c:
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
            ipc_log_string(*(iVar6 + 0x110),"%s: sps:bamdma_restricted_pipes=0x%x\n","get_platform_data",
                           *(iVar6 + 0x68));
        }
        piVar5 = platform_get_resource_byname(param_1,0x200,"pipe_mem");
        if (piVar5 != NULL) {
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            puVar11 = iVar6 + 0x38;
            *puVar11 = *piVar5;
            iVar3 = (piVar5[2] - *piVar5) + 1;
            bVar2 = 1 < obj.logging_option;
            *(iVar6 + 0x40) = iVar3;
            if ((bVar2) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option != 0x0) {
                    iVar3 = ___ratelimit(obj.get_platform_data._rs.383,"get_platform_data");
                    if (iVar3 == 0) goto code_r0x08023234;
                    puVar11 = CONCAT44(*0x8000004,_segment.ehdr) + 0x38;
                    iVar3 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x40);
                }
                _printk(0x8005e5a,"get_platform_data",puVar11,iVar3);
            }
code_r0x08023234:
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                ipc_log_string(*(iVar6 + 0x110),"%s: sps:pipemem.base=%pa,size=0x%x\n","get_platform_data",
                               iVar6 + 0x38,*(iVar6 + 0x40));
            }
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.344,"msm_sps_probe"), iVar3 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get platform data\n");
        }
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar6 != 0) && (*(iVar6 + 0x120) == 0)) {
            ipc_log_string(*(iVar6 + 0xf8),"%s: %s","msm_sps_probe","sps:get platform data\n");
        }
        _segment.ehdr = 0;
    }
    else {
        iVar3 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,device-type",obj.bam_init._rs.5,1,0);
        if (iVar3 < 0) {
            _segment.ehdr = 3;
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.get_device_tree_data._rs,"get_device_tree_data"), iVar3 != 0)))) {
                _printk(0x8007ac2,"get_device_tree_data",_segment.ehdr);
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                pcVar9 = "%s: sps:default device type %d\n";
                goto code_r0x080232e4;
            }
        }
        else {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.get_device_tree_data._rs.367,"get_device_tree_data"), iVar3 != 0)))) {
                _printk(0x8005a0b,"get_device_tree_data",_segment.ehdr);
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                pcVar9 = "%s: sps:device type is %d\n";
code_r0x080232e4:
                ipc_log_string(*(iVar6 + 0x110),pcVar9,"get_device_tree_data",_segment.ehdr);
            }
        }
        iVar6 = of_find_property(*(param_1 + 0x300),"qcom,pipe-attr-ee",0);
        obj.enhd_pipe = iVar6 != 0;
        if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar7 = 0x800b728;
                if (iVar6 == 0) {
                    uVar7 = 0x8006670;
                }
            }
            else {
                iVar3 = ___ratelimit(obj.get_device_tree_data._rs.371,"get_device_tree_data");
                if (iVar3 == 0) goto code_r0x0802332c;
                uVar7 = 0x8006670;
                if (obj.enhd_pipe != 0x0) {
                    uVar7 = 0x800b728;
                }
            }
            _printk(0x8008e10,"get_device_tree_data",uVar7);
        }
code_r0x0802332c:
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
            uVar7 = 0x8006670;
            if (obj.enhd_pipe != 0x0) {
                uVar7 = 0x800b728;
            }
            ipc_log_string(*(iVar6 + 0x110),"%s: sps:PIPE_ATTR_EE is %s supported\n","get_device_tree_data",uVar7);
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.333,"msm_sps_probe"), iVar3 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get data from device tree\n");
        }
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar6 != 0) && (*(iVar6 + 0x120) == 0)) {
            ipc_log_string(*(iVar6 + 0xf8),"%s: %s","msm_sps_probe","sps:get data from device tree\n");
        }
        iVar6 = of_match_device(obj.msm_sps_match,param_1 + 0x10);
        if (iVar6 == 0) {
            _segment.ehdr = 1;
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.338,"msm_sps_probe"), iVar3 != 0)))) {
                _printk(0x800bc43,"msm_sps_probe",_segment.ehdr);
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                uVar7 = *(iVar6 + 0x110);
                pcVar9 = "%s: sps:use default BAM type:%d\n";
                goto code_r0x08023448;
            }
        }
        else {
            _segment.ehdr = **(iVar6 + 0xc0);
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.335,"msm_sps_probe"), iVar3 != 0)))) {
                _printk(0x80089dc,"msm_sps_probe",_segment.ehdr);
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                uVar7 = *(iVar6 + 0x110);
                pcVar9 = "%s: sps:BAM type is:%d\n";
code_r0x08023448:
                ipc_log_string(uVar7,pcVar9,"msm_sps_probe",_segment.ehdr);
            }
        }
    }
    uVar7 = __class_create(obj.__this_module,"msm_sps",obj.sps_debugfs_init.__key);
    *CONCAT44(*0x8000004,_segment.ehdr) = uVar7;
    iVar3 = alloc_chrdev_region(CONCAT44(*0x8000004,_segment.ehdr) + 8,0,1,"msm_sps");
    if (iVar3 != 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.346,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x8004c12,"msm_sps_probe");
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: alloc_chrdev_region err\n",
                           "msm_sps_probe");
        }
        goto code_r0x08023978;
    }
    puVar11 = CONCAT44(*0x8000004,_segment.ehdr);
    uVar8 = device_create(*puVar11,0,*(puVar11 + 1),puVar11,"msm_sps");
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar6 + 0x10) = uVar8;
    if (uVar8 < 0xfffffffffffff001) {
        if (*(param_1 + 0x300) != 0) {
            *(uVar8 + 0x2f0) = *(param_1 + 0x300);
        }
        if (_segment.ehdr == 0) {
            uVar8 = clk_get(*(iVar6 + 0x10),"mem_clk");
            *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18) = uVar8;
            if (uVar8 < 0xfffffffffffff001) {
                iVar3 = clk_prepare(uVar8);
                if (iVar3 == 0) {
                    iVar3 = clk_enable(uVar8);
                    if (iVar3 == 0) goto code_r0x0802358c;
                    clk_unprepare(uVar8);
                }
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.356,"msm_sps_probe"), iVar4 != 0)))) {
                    _printk(0x8008dea,"msm_sps_probe");
                }
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),
                                   "%s: sps: failed to enable pmem_clk\n","msm_sps_probe");
                }
                goto code_r0x0802393c;
            }
            if (uVar8 == 0xfffffffffffffdfb) {
                iVar3 = -0x205;
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.353,"msm_sps_probe"), iVar3 != 0)))) {
                    _printk(0x8008dc9,"msm_sps_probe");
                }
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: fail to get pmem_clk\n",
                                   "msm_sps_probe");
                }
                iVar3 = 0;
            }
        }
        else {
code_r0x0802358c:
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.sps_device_init._rs,"sps_device_init"), iVar3 != 0)))) {
                _printk(0x80084da,"sps_device_init");
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                ipc_log_string(*(iVar6 + 0x110),"%s: Enter\n","sps_device_init");
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            iVar3 = sym.sps_mem_init(*(iVar6 + 0x38),*(iVar6 + 0x40));
            if (iVar3 == 0) {
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                *(iVar6 + 0xa0) = iVar6 + 0xa0;
                *(iVar6 + 0xa8) = iVar6 + 0xa0;
                __mutex_init(iVar6 + 0x70,"&sps->lock",obj.sps_debugfs_init.__key);
                iVar3 = sym.sps_rm_init(CONCAT44(*0x8000004,_segment.ehdr) + 0xb8);
                if (iVar3 == 0) {
                    iVar3 = sym.sps_map_init(0,*(CONCAT44(*0x8000004,_segment.ehdr) + 0x6c));
                    if (iVar3 == 0) {
                        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                        bVar2 = obj.logging_option != 0x1;
                        *(iVar6 + 0x30) = 1;
                        if (bVar2) {
                            if ((obj.print_limit_option < 2) ||
                               (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.362,"msm_sps_probe"), iVar3 != 0)) {
                                _printk(0x8007fbf,"msm_sps_probe","sps:sps is ready\n");
                            }
                            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                        }
                        if (iVar6 != 0) {
                            ipc_log_string(*(iVar6 + 0x110),"%s: %s","msm_sps_probe","sps:sps is ready\n");
                        }
                        return 0;
                    }
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_device_init._rs.396,"sps_device_init"), iVar3 != 0)))) {
                        _printk(0x8004fd7,"sps_device_init");
                    }
                    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                    if (iVar6 != 0) {
                        pcVar9 = "%s: sps: SPS connection mapping init failed\n";
                        goto code_r0x080238b0;
                    }
                }
                else {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_device_init._rs.390,"sps_device_init"), iVar3 != 0)))) {
                        _printk(0x8004c5e,"sps_device_init");
                    }
                    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                    if (iVar6 != 0) {
                        pcVar9 = "%s: sps: Fail to init SPS resource manager\n";
code_r0x080238b0:
                        ipc_log_string(*(iVar6 + 0x110),pcVar9,"sps_device_init");
                    }
                }
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_device_init._rs.386,"sps_device_init"), iVar3 != 0)))) {
                    _printk(0x8004fb4,"sps_device_init");
                }
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                if (iVar6 != 0) {
                    pcVar9 = "%s: sps: SPS memory init failed\n";
                    goto code_r0x080238b0;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.359,"msm_sps_probe"), iVar3 != 0)))) {
                _printk(0x8004c3e,"msm_sps_probe");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: sps_device_init err\n",
                               "msm_sps_probe");
            }
            if (_segment.ehdr == 0) {
                uVar7 = *((*0x8000004 << 0x20) + 0x18);
                clk_disable(uVar7);
                clk_unprepare(uVar7);
                iVar3 = -1;
code_r0x0802393c:
                if (_segment.ehdr == 0) {
                    clk_put(*((*0x8000004 << 0x20) + 0x18));
                }
            }
            else {
                iVar3 = -1;
            }
        }
        device_destroy(*CONCAT44(*0x8000004,_segment.ehdr),*(CONCAT44(*0x8000004,_segment.ehdr) + 1));
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.349,"msm_sps_probe"), iVar3 != 0)))) {
            _printk(0x80046b9,"msm_sps_probe");
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            iVar3 = 0;
        }
        else {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: device_create err\n",
                           "msm_sps_probe");
            iVar3 = 0;
        }
    }
    unregister_chrdev_region(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),1);
code_r0x08023978:
    class_destroy(*CONCAT44(*0x8000004,_segment.ehdr));
    return iVar3;
}


// ===== sym.msm_sps_remove.639189d76e9915dcda9027510d7b62b6.cfi_jt @ 0x0800e6e8 (size 8) =====

ulong sym.msm_sps_remove.639189d76e9915dcda9027510d7b62b6.cfi_jt(void)

{
    int iVar1;
    int64_t arg1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.msm_sps_remove._rs,"msm_sps_remove"), iVar1 != 0))
       )) {
        _printk(0x8004ef6,"msm_sps_remove");
    }
    puVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((puVar2 != NULL) && (*(puVar2 + 0x24) < 4)) {
        ipc_log_string(puVar2[0x22],"%s: sps: Enter\n","msm_sps_remove");
        puVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    }
    device_destroy(*puVar2,*(puVar2 + 1));
    unregister_chrdev_region(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),1);
    arg1 = class_destroy(*CONCAT44(*0x8000004,_segment.ehdr));
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 ||
        (arg1 = ___ratelimit(obj.sps_device_de_init._rs,"sps_device_de_init"), arg1 != 0)))) {
        arg1 = _printk(0x80084da,"sps_device_de_init");
    }
    iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar3 != 0) {
        if (*(iVar3 + 0x120) < 4) {
            arg1 = ipc_log_string(*(iVar3 + 0x110),"%s: Enter\n","sps_device_de_init");
            iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
            if (iVar3 == 0) goto code_r0x08024090;
        }
        if (iVar3 + 0xa0 != *(iVar3 + 0xa0)) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (arg1 = ___ratelimit(obj.sps_device_de_init._rs.399,"sps_device_de_init"), arg1 != 0)))) {
                arg1 = _printk(0x80089f6,"sps_device_de_init");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                arg1 = ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),
                                      "%s: sps: BAMs are still registered\n","sps_device_de_init");
            }
        }
        _obj.sps_maps.llvm.13011040688875161606 = 0;
        *0x8000428 = 0;
    }
code_r0x08024090:
    sym.sps_mem_de_init(arg1);
    clk_put(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x28));
    if (_segment.ehdr == 0) {
        clk_put(*((*0x8000004 << 0x20) + 0x18));
    }
    clk_put(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x20));
    return 0;
}


// ===== sym.bam_init @ 0x0800e6f0 (size 1124) =====

ulong sym.bam_init(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    ulong *puVar4;
    ulong uVar5;
    int *in_x4;
    uint *in_x5;
    uint32_t in_w6;
    uint32_t uVar6;
    ulong *in_x18;
    uint64_t arg3_00;
    uint32_t uVar7;
    ulong unaff_x30;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    if (puVar4 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.bam_init._rs,"bam_init"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_init",0xd8);
        }
        if (_segment.ehdr == 0) {
            uVar5 = 0xffffffff;
        }
        else {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_init",0xd8);
            uVar5 = 0xffffffff;
        }
    }
    else {
        uVar7 = arg3;
        arg3_00 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.bam_init._rs.2,"bam_init"), iVar1 != 0)))) {
            _printk(0x80062a9,"bam_init",puVar4 + -0x18,*puVar4,arg3_00);
        }
        if (*(puVar4 + 0x2c) < 4) {
            ipc_log_string(puVar4[0x2a],"%s: sps: bam=%pa 0x%pK(va).ee=%d\n","bam_init",puVar4 + -0x18,*puVar4,
                           arg3_00);
        }
        iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,1,0,0xff);
        if (iVar1 - 0x30U < 0xffffffd2) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 || (iVar3 = ___ratelimit(obj.bam_init._rs.5,"bam_init"), iVar3 != 0)))) {
                _printk(0x800b89a,"bam_init",*puVar4,iVar1);
            }
            ipc_log_string(puVar4[0x2a],"%s: sps:bam 0x%pK(va) Invalid BAM REVISION 0x%x\n","bam_init",*puVar4,iVar1
                          );
            uVar5 = 0xffffffed;
        }
        else {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 || (iVar3 = ___ratelimit(obj.bam_init._rs.8,"bam_init"), iVar3 != 0))))
            {
                _printk(0x80099f6,"bam_init",*puVar4,iVar1);
            }
            if (*(puVar4 + 0x2c) == 0) {
                ipc_log_string(puVar4[0x27],"%s: sps:REVISION of BAM 0x%pK is 0x%x\n","bam_init",*puVar4,iVar1);
            }
            if ((arg3 & 0xffffU) == 0) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 || (iVar3 = ___ratelimit(obj.bam_init._rs.11,"bam_init"), iVar3 != 0))
                   )) {
                    _printk(0x80082ea,"bam_init",*puVar4);
                }
                ipc_log_string(puVar4[0x2a],"%s: sps:bam 0x%pK(va) summing_threshold is zero,use default 4\n",
                               "bam_init",*puVar4);
                uVar7 = 4;
            }
            uVar6 = 0xfffff7ff;
            if ((in_w6 & 0x10) != 0) {
                uVar6 = 0xffffe7ff;
            }
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0,0,1);
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0,0,1);
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0,0,2);
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0,0,0x80000);
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0,0,0x60000);
            if (obj.enhd_pipe != 0x0) {
                sym.bam_write_reg_field.llvm.916431513089089357(arg1,0,0,0x100000);
            }
            sym.bam_write_reg.llvm.916431513089089357(arg1,6,0,uVar7 & 0xffff);
            sym.bam_write_reg.llvm.916431513089089357(arg1,0x17,0,uVar6);
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x19,arg3_00,0x80000000);
            sym.bam_write_reg.llvm.916431513089089357(arg1,0xc,0,arg4 & 0xffffffff);
            uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,3,0,0xff);
            uVar5 = 0;
            *in_x5 = uVar2;
            *in_x4 = iVar1;
        }
    }
    return uVar5;
}


// ===== sym.bam_read_reg_field.llvm.916431513089089357 @ 0x0800eb54 (size 528) =====

uint32_t sym.bam_read_reg_field.llvm.916431513089089357(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    piVar6 = arg1;
    *in_x18 = unaff_x30;
    if (piVar6 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.bam_read_reg_field._rs,"bam_read_reg_field"), iVar5 != 0)))) {
            _printk(0x800627c,"bam_read_reg_field",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_read_reg_field"
                           ,0xd8);
        }
    }
    else {
        uVar1 = arg4;
        uVar3 = sym.bam_get_register_offset(arg1,arg2,arg3);
        if (uVar3 != 0xffffffff) {
            uVar2 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
            uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
            uVar4 = sym.readl(*piVar6 + uVar3);
            uVar1 = (uVar4 & uVar1) >> (LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) & 0x1f);
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.bam_read_reg_field._rs.301,"bam_read_reg_field"), iVar5 != 0)))) {
                _printk(0x8008b19,"bam_read_reg_field",*piVar6,uVar3,arg4 & 0xffffffff,uVar1);
            }
            if (piVar6[0x2c] != 0) {
                return uVar1;
            }
            ipc_log_string(piVar6[0x27],"%s: sps:bam 0x%pK(va) read reg 0x%x mask 0x%x r_val 0x%x\n",
                           "bam_read_reg_field",*piVar6,uVar3,arg4 & 0xffffffff,uVar1);
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.bam_read_reg_field._rs.298,"bam_read_reg_field"), iVar5 != 0)))) {
            _printk(0x80063d0,"bam_read_reg_field",arg2 & 0xffffffffU);
        }
        ipc_log_string(piVar6[0x2a],"%s: Failed to get the register offset for %d\n","bam_read_reg_field",
                       arg2 & 0xffffffffU);
    }
    return 0xffffffff;
}


// ===== sym.bam_write_reg_field.llvm.916431513089089357 @ 0x0800ed64 (size 548) =====

void sym.bam_write_reg_field.llvm.916431513089089357(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t *piVar6;
    int in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    piVar6 = arg1;
    *in_x18 = unaff_x30;
    if (piVar6 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.bam_write_reg_field._rs,"bam_write_reg_field"), iVar5 != 0)))) {
            _printk(0x800627c,"bam_write_reg_field",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n",
                           "bam_write_reg_field",0xd8);
        }
    }
    else {
        uVar1 = arg4;
        uVar3 = sym.bam_get_register_offset(arg1,arg2,arg3);
        if (uVar3 == 0xffffffff) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.bam_write_reg_field._rs.304,"bam_write_reg_field"), iVar5 != 0)))) {
                _printk(0x80063d0,"bam_write_reg_field",arg2 & 0xffffffffU);
            }
            ipc_log_string(piVar6[0x2a],"%s: Failed to get the register offset for %d\n","bam_write_reg_field",
                           arg2 & 0xffffffffU);
        }
        else {
            uVar2 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
            uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
            uVar4 = sym.readl(*piVar6 + uVar3);
            uVar1 = uVar4 & (uVar1 ^ 0xffffffff) | in_w4 << (LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) & 0x1f);
            sym.writel(uVar1,*piVar6 + uVar3);
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.bam_write_reg_field._rs.305,"bam_write_reg_field"), iVar5 != 0)))) {
                _printk(0x800b157,"bam_write_reg_field",*piVar6,uVar3,uVar1);
            }
            if (piVar6[0x2c] == 0) {
                ipc_log_string(piVar6[0x27],"%s: sps:bam 0x%pK(va) write reg 0x%x w_val 0x%x\n","bam_write_reg_field"
                               ,*piVar6,uVar3,uVar1);
            }
        }
    }
    return;
}


// ===== sym.bam_write_reg.llvm.916431513089089357 @ 0x0800ef88 (size 500) =====

void sym.bam_write_reg.llvm.916431513089089357(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    uint64_t arg1_00;
    ulong unaff_x30;
    
    piVar3 = arg1;
    *in_x18 = unaff_x30;
    if (piVar3 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.bam_write_reg._rs,"bam_write_reg"), iVar2 != 0)))
           ) {
            _printk(0x800627c,"bam_write_reg",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_write_reg",
                           0xd8);
        }
    }
    else {
        arg1_00 = arg4 & 0xffffffff;
        uVar1 = sym.bam_get_register_offset(arg1,arg2,arg3);
        if (uVar1 == 0xffffffff) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.bam_write_reg._rs.308,"bam_write_reg"), iVar2 != 0)))) {
                _printk(0x80063d0,"bam_write_reg",arg2 & 0xffffffffU);
            }
            ipc_log_string(piVar3[0x2a],"%s: Failed to get the register offset for %d\n","bam_write_reg",
                           arg2 & 0xffffffffU);
        }
        else {
            sym.writel(arg1_00,*piVar3 + uVar1);
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.bam_write_reg._rs.309,"bam_write_reg"), iVar2 != 0)))) {
                _printk(0x800b157,"bam_write_reg",*piVar3,uVar1,arg1_00);
            }
            if (piVar3[0x2c] == 0) {
                ipc_log_string(piVar3[0x27],"%s: sps:bam 0x%pK(va) write reg 0x%x w_val 0x%x\n","bam_write_reg",
                               *piVar3,uVar1,arg1_00);
            }
        }
    }
    return;
}


// ===== sym.bam_set_global_irq @ 0x0800f17c (size 52) =====

void sym.bam_set_global_irq(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x19,arg2 & 0xffffffff,0x80000000);
    return;
}


// ===== sym.bam_security_init @ 0x0800f1b0 (size 840) =====

ulong sym.bam_security_init(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *puVar4;
    ulong uVar5;
    ulong *in_x18;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    if (puVar4 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.bam_security_init._rs,"bam_security_init"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_security_init",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_security_init"
                           ,0xd8);
        }
        uVar5 = 0xffffffff;
    }
    else {
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_security_init._rs.14,"bam_security_init"), iVar1 != 0)))) {
            _printk(0x8008666,"bam_security_init",puVar4 + -0x18,*puVar4);
        }
        if (*(puVar4 + 0x2c) < 4) {
            ipc_log_string(puVar4[0x2a],"%s: sps: bam=%pa 0x%pK(va)\n","bam_security_init",puVar4 + -0x18,*puVar4);
        }
        iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,1,0,0xff);
        uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,3,0,0xff);
        if (iVar1 - 0x20U < 0xffffffe3) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.bam_security_init._rs.17,"bam_security_init"), iVar3 != 0)))) {
                _printk(0x80062cd,"bam_security_init",*puVar4,iVar1);
            }
            ipc_log_string(puVar4[0x2a],"%s: sps:bam 0x%pK(va) security is not supported for this BAM version 0x%x\n",
                           "bam_security_init",*puVar4,iVar1);
        }
        else {
            if (uVar2 < 0x20) {
                if (uVar2 != 0) {
                    uVar6 = 0;
                    uVar7 = 1;
                    do {
                        if ((uVar7 & arg4) != 0) {
                            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x3a,uVar6,7);
                            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x3a,uVar6,0x1f00);
                        }
                        uVar6 = uVar6 + 1;
                        uVar7 = uVar7 << 1;
                    } while (uVar2 != uVar6);
                }
                if (arg4 < 0) {
                    sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x14,0,7);
                    sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x14,0,0x1f00);
                    sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x14,0,0x80);
                }
                return 0;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.bam_security_init._rs.20,"bam_security_init"), iVar1 != 0)))) {
                _printk(0x8005b1d,"bam_security_init",*puVar4);
            }
            ipc_log_string(puVar4[0x2a],
                           "%s: sps:bam 0x%pK(va) the number of pipes is more than the maximum number allowed\n",
                           "bam_security_init",*puVar4);
        }
        uVar5 = 0xffffffed;
    }
    return uVar5;
}


// ===== sym.bam_check @ 0x0800f4f8 (size 716) =====

ulong sym.bam_check(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    if (puVar4 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.bam_check._rs,"bam_check"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_check",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_check",0xd8);
        }
        return 0xffffffff;
    }
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.bam_check._rs.23,"bam_check"), iVar1 != 0)))) {
        _printk(0x8008666,"bam_check",puVar4 + -0x18,*puVar4);
    }
    if (*(puVar4 + 0x2c) < 4) {
        ipc_log_string(puVar4[0x2a],"%s: sps: bam=%pa 0x%pK(va)\n","bam_check",puVar4 + -0x18,*puVar4);
    }
    if (obj.enhd_pipe == 0x0) {
        iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,0,0,2);
    }
    else {
        iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,0x1b,arg3 & 0xffffffff,0x80000000);
    }
    if (iVar1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.bam_check._rs.24,"bam_check"), iVar1 != 0)))) {
            _printk(0x8009a1f,"bam_check",*puVar4);
        }
        ipc_log_string(puVar4[0x2a],"%s: sps: bam 0x%pK(va) is not enabled\n","bam_check",*puVar4);
    }
    else {
        uVar2 = sym.bam_read_reg.llvm.916431513089089357(arg1,1,0);
        uVar2 = uVar2 & 0xff;
        uVar3 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,3,0,0xff);
        *arg4 = uVar3;
        *arg2 = uVar2;
        if (0xffffffd1 < uVar2 - 0x30) {
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.bam_check._rs.27,"bam_check"), iVar1 != 0)))) {
            _printk(0x8007bc6,"bam_check",*puVar4,uVar2);
        }
        ipc_log_string(puVar4[0x2a],"%s: sps: bam 0x%pK(va) Invalid BAM version 0x%x\n","bam_check",*puVar4,uVar2);
    }
    return 0xffffffed;
}


// ===== sym.bam_read_reg.llvm.916431513089089357 @ 0x0800f7c4 (size 512) =====

uint sym.bam_read_reg.llvm.916431513089089357(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    piVar4 = arg1;
    *in_x18 = unaff_x30;
    if (piVar4 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar3 = ___ratelimit(obj.bam_read_reg._rs,"bam_read_reg"), iVar3 != 0))))
        {
            _printk(0x800627c,"bam_read_reg",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_read_reg",0xd8
                          );
        }
    }
    else {
        uVar5 = arg2 & 0xffffffff;
        uVar1 = sym.bam_get_register_offset(arg1,arg2,arg3);
        if (uVar1 != 0xffffffff) {
            uVar2 = sym.readl(*piVar4 + uVar1);
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.bam_read_reg._rs.311,"bam_read_reg"), iVar3 != 0)))) {
                _printk(0x800a8e0,"bam_read_reg",*piVar4,uVar1,uVar5,uVar2);
            }
            if (piVar4[0x2c] != 0) {
                return uVar2;
            }
            ipc_log_string(piVar4[0x27],"%s: sps:bam 0x%pK(va) offset 0x%x reg 0x%x r_val 0x%x\n","bam_read_reg",
                           *piVar4,uVar1,uVar5,uVar2);
            return uVar2;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar3 = ___ratelimit(obj.bam_read_reg._rs.310,"bam_read_reg"), iVar3 != 0)
            ))) {
            _printk(0x80063d0,"bam_read_reg",uVar5);
        }
        ipc_log_string(piVar4[0x2a],"%s: Failed to get the register offset for %d\n","bam_read_reg",uVar5);
    }
    return 0xffffffff;
}


// ===== sym.bam_exit @ 0x0800f9c4 (size 404) =====

void sym.bam_exit(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (puVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.bam_exit._rs,"bam_exit"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_exit",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_exit",0xd8);
        }
    }
    else {
        arg3 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.bam_exit._rs.30,"bam_exit"), iVar1 != 0)))) {
            _printk(0x80062a9,"bam_exit",puVar2 + -0x18,*puVar2,arg3);
        }
        if (*(puVar2 + 0x2c) < 4) {
            ipc_log_string(puVar2[0x2a],"%s: sps: bam=%pa 0x%pK(va).ee=%d\n","bam_exit",puVar2 + -0x18,*puVar2,arg3
                          );
        }
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x19,arg3,0x80000000);
        sym.bam_write_reg.llvm.916431513089089357(arg1,0xc,0,0);
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0,0,2);
    }
    return;
}


// ===== sym.bam_output_register_content @ 0x0800fb58 (size 500) =====

void sym.bam_output_register_content(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *arg1_00;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    arg1_00 = arg1;
    *in_x18 = unaff_x30;
    if (arg1_00 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.bam_output_register_content._rs,"bam_output_register_content"), iVar3 != 0)))) {
            _printk(0x800627c,"bam_output_register_content",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n",
                           "bam_output_register_content",0xd8);
        }
    }
    else {
        sym.print_bam_test_bus_reg(arg1_00,0);
        sym.print_bam_selected_reg(arg1_00,8);
        uVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,3,0,0xff);
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 2 ||
            (iVar3 = ___ratelimit(obj.bam_output_register_content._rs.31,"bam_output_register_content"), iVar3 != 0)))
           ) {
            _printk(0x800abb8,"bam_output_register_content",arg1_00 + -0x18,*arg1_00,uVar1);
        }
        ipc_log_string(arg1_00[0x2a],"%s: sps:bam %pa 0x%pK(va) has %d pipes\n","bam_output_register_content",
                       arg1_00 + -0x18,*arg1_00,uVar1);
        if (((obj.enhd_pipe == 0x0) ||
            (uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,0x1b,arg2 & 0xffffffff,0x7fffffff),
            obj.enhd_pipe == 0x0)) || (uVar2 == 0)) {
            if (uVar1 != 0) {
                uVar2 = 0;
                do {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar2);
                    uVar2 = uVar2 + 1;
                } while (uVar1 != uVar2);
            }
        }
        else if (uVar1 != 0) {
            uVar4 = 0;
            do {
                if ((uVar2 >> (uVar4 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar4 & 0xffffffff);
                }
                uVar4 = uVar4 + 1;
            } while (uVar1 != uVar4);
        }
    }
    return;
}


// ===== sym.print_bam_test_bus_reg @ 0x0800fd4c (size 784) =====

void sym.print_bam_test_bus_reg(int64_t arg1,int64_t arg2)

{
    uint32_t arg1_00;
    uint uVar1;
    uint uVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    arg1_00 = arg1;
    if (arg2 != 0) {
        if (((_segment.ehdr != 0) &&
            (ipc_log_string(*(_segment.ehdr + 0x118),"%s: \nsps:Specified TEST_BUS_SEL value: 0x%x\n",
                            "print_bam_test_bus_reg",arg2 & 0xffffffffU), _segment.ehdr != 0)) &&
           (*(_segment.ehdr + 0x118) == 0)) {
            _printk(0x800a538,"print_bam_test_bus_reg",arg2 & 0xffffffffU);
        }
        sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,0x15,0,0x7f);
        if (_segment.ehdr == 0) goto code_r0x0800fe6c;
        uVar3 = *(_segment.ehdr + 0x118);
        uVar1 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x16,0);
        uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x15,0,0x7f);
        ipc_log_string(uVar3,"%s: sps:BAM_TEST_BUS_REG:0x%x for TEST_BUS_SEL:0x%x\n\n","print_bam_test_bus_reg",uVar1
                       ,uVar2);
        if (_segment.ehdr == 0) goto code_r0x0800fe6c;
        if (*(_segment.ehdr + 0x118) == 0) {
            uVar1 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x16,0);
            uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x15,0,0x7f);
            _printk(0x800b11f,"print_bam_test_bus_reg",uVar1,uVar2);
        }
    }
    if (((_segment.ehdr != 0) &&
        (ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s","print_bam_test_bus_reg",
                        "\nsps:<testbus-begin> --- BAM TEST_BUS dump -----\n\n"), _segment.ehdr != 0)) &&
       (*(_segment.ehdr + 0x118) == 0)) {
        _printk(0x8007fbf,"print_bam_test_bus_reg","\nsps:<testbus-begin> --- BAM TEST_BUS dump -----\n\n");
    }
code_r0x0800fe6c:
    iVar4 = 0;
    do {
        sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,0x15,0,0x7f);
        if (_segment.ehdr != 0) {
            uVar3 = *(_segment.ehdr + 0x118);
            uVar1 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x16,0);
            uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x15,0,0x7f);
            ipc_log_string(uVar3,"%s: sps:TEST_BUS_REG:0x%x\t  TEST_BUS_SEL:0x%x\n","print_bam_test_bus_reg",uVar1,
                           uVar2);
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
                uVar1 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x16,0);
                uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x15,0,0x7f);
                _printk(0x8004358,"print_bam_test_bus_reg",uVar1,uVar2);
            }
        }
        iVar4 = iVar4 + 4;
    } while (iVar4 != 0x88);
    if (((_segment.ehdr != 0) &&
        (ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s","print_bam_test_bus_reg",
                        "\nsps:<testbus-end> --- BAM TEST_BUS dump -----\n\n"), _segment.ehdr != 0)) &&
       (*(_segment.ehdr + 0x118) == 0)) {
        _printk(0x8007fbf,"print_bam_test_bus_reg","\nsps:<testbus-end> --- BAM TEST_BUS dump -----\n\n");
    }
    return;
}


// ===== sym.print_bam_selected_reg @ 0x0801005c (size 2708) =====

void sym.print_bam_selected_reg(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    uint uVar17;
    uint uVar18;
    uint uVar19;
    uint uVar20;
    uint uVar21;
    uint uVar22;
    uint uVar23;
    uint uVar24;
    int64_t iVar25;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t arg1_00;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    uVar1 = arg2;
    arg1_00 = arg1;
    uVar2 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0,0);
    uVar3 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,1,0);
    uVar4 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,1,0,0xff);
    uVar5 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,1,0,0xf00);
    uVar6 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,3,0);
    uVar7 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,3,0,0xff);
    iVar8 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,3,0,0xc000);
    uVar9 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,6,0);
    uVar10 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,6,0,0xffff);
    uVar11 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0xc,0);
    uVar12 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,10,0);
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    if (uVar1 < 8) {
        uVar13 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x18,arg2 & 0xffffffff);
        uVar14 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x19,arg2 & 0xffffffff);
        uVar15 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x1a,arg2 & 0xffffffff);
    }
    uVar16 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0xe,0);
    uVar17 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0xf,0);
    uVar18 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x11,0);
    uVar19 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x17,0);
    uVar20 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,2,0);
    uVar21 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,4,0);
    uVar22 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,5,0);
    uVar23 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x10,0);
    uVar24 = 0;
    if ((uVar1 < 8) && (obj.enhd_pipe != 0x0)) {
        uVar24 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x1b,arg2 & 0xffffffff);
    }
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s","print_bam_selected_reg",
                       "\nsps:<bam-begin> --- BAM-level registers ---\n\n"), _segment.ehdr != 0)) {
        iVar25 = *(_segment.ehdr + 0x118);
        if (iVar25 == 0) {
            _printk(0x8007fbf,"print_bam_selected_reg","\nsps:<bam-begin> --- BAM-level registers ---\n\n");
            if (_segment.ehdr == 0) goto code_r0x080106d0;
            iVar25 = *(_segment.ehdr + 0x118);
        }
        ipc_log_string(iVar25,"%s: BAM_CTRL: 0x%x\n","print_bam_selected_reg",uVar2);
        if (_segment.ehdr != 0) {
            iVar25 = *(_segment.ehdr + 0x118);
            if (iVar25 == 0) {
                _printk(0x800bd0d,"print_bam_selected_reg",uVar2);
                if (_segment.ehdr == 0) goto code_r0x080106d0;
                iVar25 = *(_segment.ehdr + 0x118);
            }
            ipc_log_string(iVar25,"%s: BAM_REVISION: 0x%x\n","print_bam_selected_reg",uVar3);
            if (_segment.ehdr != 0) {
                iVar25 = *(_segment.ehdr + 0x118);
                if (iVar25 == 0) {
                    _printk(0x800ac33,"print_bam_selected_reg",uVar3);
                    if (_segment.ehdr == 0) goto code_r0x080106d0;
                    iVar25 = *(_segment.ehdr + 0x118);
                }
                ipc_log_string(iVar25,"%s:     REVISION: 0x%x\n","print_bam_selected_reg",uVar4);
                if (_segment.ehdr != 0) {
                    iVar25 = *(_segment.ehdr + 0x118);
                    if (iVar25 == 0) {
                        _printk(0x80042e6,"print_bam_selected_reg",uVar4);
                        if (_segment.ehdr == 0) goto code_r0x080106d0;
                        iVar25 = *(_segment.ehdr + 0x118);
                    }
                    ipc_log_string(iVar25,"%s:     NUM_EES: %d\n","print_bam_selected_reg",uVar5);
                    if (_segment.ehdr != 0) {
                        iVar25 = *(_segment.ehdr + 0x118);
                        if (iVar25 == 0) {
                            _printk(0x80047e3,"print_bam_selected_reg",uVar5);
                            if (_segment.ehdr == 0) goto code_r0x080106d0;
                            iVar25 = *(_segment.ehdr + 0x118);
                        }
                        ipc_log_string(iVar25,"%s: BAM_SW_REVISION: 0x%x\n","print_bam_selected_reg",uVar20);
                        if (_segment.ehdr != 0) {
                            iVar25 = *(_segment.ehdr + 0x118);
                            if (iVar25 == 0) {
                                _printk(0x800c93f,"print_bam_selected_reg",uVar20);
                                if (_segment.ehdr == 0) goto code_r0x080106d0;
                                iVar25 = *(_segment.ehdr + 0x118);
                            }
                            ipc_log_string(iVar25,"%s: BAM_NUM_PIPES: %d\n","print_bam_selected_reg",uVar6);
                            if (_segment.ehdr != 0) {
                                iVar25 = *(_segment.ehdr + 0x118);
                                if (iVar25 == 0) {
                                    _printk(0x80086ba,"print_bam_selected_reg",uVar6);
                                    if (_segment.ehdr == 0) goto code_r0x080106d0;
                                    iVar25 = *(_segment.ehdr + 0x118);
                                }
                                uVar2 = 0x20;
                                if (iVar8 != 0) {
                                    uVar2 = 0x24;
                                }
                                ipc_log_string(iVar25,"%s: BAM_DATA_ADDR_BUS_WIDTH: %d\n","print_bam_selected_reg",
                                               uVar2);
                                if (_segment.ehdr != 0) {
                                    iVar25 = *(_segment.ehdr + 0x118);
                                    if (iVar25 == 0) {
                                        _printk(0x8005413,"print_bam_selected_reg",uVar2);
                                        if (_segment.ehdr == 0) goto code_r0x080106d0;
                                        iVar25 = *(_segment.ehdr + 0x118);
                                    }
                                    ipc_log_string(iVar25,"%s:     NUM_PIPES: %d\n","print_bam_selected_reg",uVar7);
                                    if (_segment.ehdr != 0) {
                                        iVar25 = *(_segment.ehdr + 0x118);
                                        if (iVar25 == 0) {
                                            _printk(0x800b95a,"print_bam_selected_reg",uVar7);
                                            if (_segment.ehdr == 0) goto code_r0x080106d0;
                                            iVar25 = *(_segment.ehdr + 0x118);
                                        }
                                        ipc_log_string(iVar25,"%s: BAM_DESC_CNT_TRSHLD: 0x%x\n",
                                                       "print_bam_selected_reg",uVar9);
                                        if (_segment.ehdr != 0) {
                                            iVar25 = *(_segment.ehdr + 0x118);
                                            if (iVar25 == 0) {
                                                _printk(0x800bd23,"print_bam_selected_reg",uVar9);
                                                if (_segment.ehdr == 0) goto code_r0x080106d0;
                                                iVar25 = *(_segment.ehdr + 0x118);
                                            }
                                            ipc_log_string(iVar25,"%s:     DESC_CNT_TRSHLD: 0x%x (%d)\n",
                                                           "print_bam_selected_reg",uVar10,uVar10);
                                            if (_segment.ehdr != 0) {
                                                iVar25 = *(_segment.ehdr + 0x118);
                                                if (iVar25 == 0) {
                                                    _printk(0x8007c7e,"print_bam_selected_reg",uVar10,uVar10);
                                                    if (_segment.ehdr == 0) goto code_r0x080106d0;
                                                    iVar25 = *(_segment.ehdr + 0x118);
                                                }
                                                ipc_log_string(iVar25,"%s: BAM_IRQ_EN: 0x%x\n",
                                                               "print_bam_selected_reg",uVar11);
                                                if (_segment.ehdr != 0) {
                                                    iVar25 = *(_segment.ehdr + 0x118);
                                                    if (iVar25 == 0) {
                                                        _printk(0x8009f3c,"print_bam_selected_reg",uVar11);
                                                        if (_segment.ehdr == 0) goto code_r0x080106d0;
                                                        iVar25 = *(_segment.ehdr + 0x118);
                                                    }
                                                    ipc_log_string(iVar25,"%s: BAM_IRQ_STTS: 0x%x\n",
                                                                   "print_bam_selected_reg",uVar12);
                                                    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
                                                        _printk(0x800c97b,"print_bam_selected_reg",uVar12);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x080106d0:
    if (uVar1 < 8) {
        if (_segment.ehdr == 0) {
            return;
        }
        ipc_log_string(*(_segment.ehdr + 0x118),"%s: BAM_IRQ_SRCS_EE(%d): 0x%x\n","print_bam_selected_reg",
                       arg2 & 0xffffffff,uVar13);
        if (_segment.ehdr == 0) {
            return;
        }
        iVar25 = *(_segment.ehdr + 0x118);
        if (iVar25 == 0) {
            _printk(0x8007fdf,"print_bam_selected_reg",arg2 & 0xffffffff,uVar13);
            if (_segment.ehdr == 0) {
                return;
            }
            iVar25 = *(_segment.ehdr + 0x118);
        }
        ipc_log_string(iVar25,"%s: BAM_IRQ_SRCS_MSK_EE(%d): 0x%x\n","print_bam_selected_reg",arg2 & 0xffffffff,
                       uVar14);
        if (_segment.ehdr == 0) {
            return;
        }
        iVar25 = *(_segment.ehdr + 0x118);
        if (iVar25 == 0) {
            _printk(0x80056f9,"print_bam_selected_reg",arg2 & 0xffffffff,uVar14);
            if (_segment.ehdr == 0) {
                return;
            }
            iVar25 = *(_segment.ehdr + 0x118);
        }
        ipc_log_string(iVar25,"%s: BAM_IRQ_SRCS_UNMASKED_EE(%d): 0x%x\n","print_bam_selected_reg",arg2 & 0xffffffff,
                       uVar15);
        if (_segment.ehdr == 0) {
            return;
        }
        iVar25 = *(_segment.ehdr + 0x118);
        if (iVar25 == 0) {
            _printk(0x8008ab2,"print_bam_selected_reg",arg2 & 0xffffffff,uVar15);
            if (_segment.ehdr == 0) {
                return;
            }
            iVar25 = *(_segment.ehdr + 0x118);
        }
        ipc_log_string(iVar25,"%s: BAM_PIPE_ATTR_EE(%d): 0x%x\n","print_bam_selected_reg",arg2 & 0xffffffff,uVar24);
        if (_segment.ehdr == 0) {
            return;
        }
        if (*(_segment.ehdr + 0x118) == 0) {
            _printk(0x800a3ce,"print_bam_selected_reg",arg2 & 0xffffffff,uVar24);
        }
    }
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(*(_segment.ehdr + 0x118),"%s: BAM_AHB_MASTER_ERR_CTRLS: 0x%x\n","print_bam_selected_reg",
                       uVar16), _segment.ehdr != 0)) {
        iVar25 = *(_segment.ehdr + 0x118);
        if (iVar25 == 0) {
            _printk(0x800571e,"print_bam_selected_reg",uVar16);
            if (_segment.ehdr == 0) {
                return;
            }
            iVar25 = *(_segment.ehdr + 0x118);
        }
        ipc_log_string(iVar25,"%s: BAM_AHB_MASTER_ERR_ADDR: 0x%x\n","print_bam_selected_reg",uVar17);
        if (_segment.ehdr != 0) {
            iVar25 = *(_segment.ehdr + 0x118);
            if (iVar25 == 0) {
                _printk(0x800971b,"print_bam_selected_reg",uVar17);
                if (_segment.ehdr == 0) {
                    return;
                }
                iVar25 = *(_segment.ehdr + 0x118);
            }
            ipc_log_string(iVar25,"%s: BAM_AHB_MASTER_ERR_ADDR_MSB: 0x%x\n","print_bam_selected_reg",uVar23);
            if (_segment.ehdr != 0) {
                iVar25 = *(_segment.ehdr + 0x118);
                if (iVar25 == 0) {
                    _printk(0x8009abd,"print_bam_selected_reg",uVar23);
                    if (_segment.ehdr == 0) {
                        return;
                    }
                    iVar25 = *(_segment.ehdr + 0x118);
                }
                ipc_log_string(iVar25,"%s: BAM_AHB_MASTER_ERR_DATA: 0x%x\n","print_bam_selected_reg",uVar18);
                if (_segment.ehdr != 0) {
                    iVar25 = *(_segment.ehdr + 0x118);
                    if (iVar25 == 0) {
                        _printk(0x800837e,"print_bam_selected_reg",uVar18);
                        if (_segment.ehdr == 0) {
                            return;
                        }
                        iVar25 = *(_segment.ehdr + 0x118);
                    }
                    ipc_log_string(iVar25,"%s: BAM_CNFG_BITS: 0x%x\n","print_bam_selected_reg",uVar19);
                    if (_segment.ehdr != 0) {
                        iVar25 = *(_segment.ehdr + 0x118);
                        if (iVar25 == 0) {
                            _printk(0x8005767,"print_bam_selected_reg",uVar19);
                            if (_segment.ehdr == 0) {
                                return;
                            }
                            iVar25 = *(_segment.ehdr + 0x118);
                        }
                        ipc_log_string(iVar25,"%s: BAM_TIMER: 0x%x\n","print_bam_selected_reg",uVar21);
                        if (_segment.ehdr != 0) {
                            iVar25 = *(_segment.ehdr + 0x118);
                            if (iVar25 == 0) {
                                _printk(0x800c251,"print_bam_selected_reg",uVar21);
                                if (_segment.ehdr == 0) {
                                    return;
                                }
                                iVar25 = *(_segment.ehdr + 0x118);
                            }
                            ipc_log_string(iVar25,"%s: BAM_TIMER_CTRL: 0x%x\n","print_bam_selected_reg",uVar22);
                            if (_segment.ehdr != 0) {
                                iVar25 = *(_segment.ehdr + 0x118);
                                if (iVar25 == 0) {
                                    _printk(0x80071c8,"print_bam_selected_reg",uVar22);
                                    if (_segment.ehdr == 0) {
                                        return;
                                    }
                                    iVar25 = *(_segment.ehdr + 0x118);
                                }
                                ipc_log_string(iVar25,"%s: %s","print_bam_selected_reg",
                                               "\nsps:<bam-end> --- BAM-level registers ---\n\n");
                                if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
                                    _printk(0x8007fbf,"print_bam_selected_reg",
                                            "\nsps:<bam-end> --- BAM-level registers ---\n\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


// ===== sym.print_bam_pipe_selected_reg @ 0x08010af0 (size 4784) =====

void sym.print_bam_pipe_selected_reg(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    uint uVar17;
    uint uVar18;
    uint uVar19;
    uint uVar20;
    uint uVar21;
    uint uVar22;
    uint uVar23;
    uint uVar24;
    uint uVar25;
    uint uVar26;
    uint uVar27;
    uint uVar28;
    uint uVar29;
    uint uVar30;
    uint uVar31;
    uint uVar32;
    uint uVar33;
    uint uVar34;
    uint uVar35;
    uint uVar36;
    uint uVar37;
    uint uVar38;
    uint uVar39;
    uint uVar40;
    uint uVar41;
    uint uVar42;
    uint uVar43;
    uint uVar44;
    uint uVar45;
    uint uVar46;
    uint uVar47;
    uint uVar48;
    uint uVar49;
    uint uVar50;
    int64_t iVar51;
    ulong uVar52;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    uint32_t arg1_00;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    arg3 = arg2 & 0xffffffff;
    arg1_00 = arg1;
    uVar1 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x1c,arg3);
    uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x1c,arg3,0x20);
    iVar3 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x1c,arg3,8);
    uVar4 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x21,arg3);
    uVar5 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x1f,arg3);
    uVar6 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x1f,arg3,0x20);
    uVar7 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x1f,arg3,1);
    uVar8 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x24,arg3);
    uVar9 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x24,arg3,0xffff);
    uVar10 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x24,arg3,0xf0000);
    uVar11 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x24,arg3,0x100000);
    uVar12 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x24,arg3,0x1000000);
    uVar13 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x25,arg3);
    uVar14 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x25,arg3,0xffff);
    uVar15 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x25,arg3,0xf0000);
    uVar16 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x25,arg3,0x100000);
    uVar17 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x25,arg3,0x400000);
    uVar18 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x25,arg3,0x200000);
    uVar19 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x25,arg3,0x800000);
    uVar20 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x25,arg3,0x1000000);
    uVar21 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x29,arg3);
    uVar22 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x29,arg3,0xffff);
    uVar23 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x28,arg3);
    uVar24 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x28,arg3,0xffff);
    uVar25 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x26,arg3);
    uVar26 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x2c,arg3);
    uVar27 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x2f,arg3,0xffff);
    uVar28 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x2a,arg3);
    uVar29 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x2f,arg3,0xffff0000);
    uVar30 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x2f,arg3);
    uVar31 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x2e,arg3);
    uVar32 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x2e,arg3,0xffff);
    uVar33 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x31,arg3);
    uVar34 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x31,arg3,0xffff0000);
    uVar35 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x32,arg3);
    uVar36 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x32,arg3,0xffff);
    uVar37 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x34,arg3);
    uVar38 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x35,arg3);
    uVar39 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x36,arg3);
    uVar40 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x38,arg3);
    uVar41 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x39,arg3);
    uVar42 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x22,arg3);
    uVar43 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x23,arg3);
    uVar44 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x27,arg3);
    uVar45 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x2d,arg3);
    uVar46 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x2b,arg3);
    uVar47 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x36,arg3);
    uVar48 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x1c,arg3,0x1f0000);
    uVar49 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x33,arg3);
    uVar50 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x33,arg3,0xffff);
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(*(_segment.ehdr + 0x118),"%s: \nsps:<pipe-begin> --- Registers of Pipe %d ---\n\n",
                       "print_bam_pipe_selected_reg",arg3), _segment.ehdr != 0)) {
        iVar51 = *(_segment.ehdr + 0x118);
        if (iVar51 == 0) {
            _printk(0x8009ae6,"print_bam_pipe_selected_reg",arg3);
            if (_segment.ehdr == 0) goto code_r0x08010ff0;
            iVar51 = *(_segment.ehdr + 0x118);
        }
        ipc_log_string(iVar51,"%s: BAM_P_CTRL: 0x%x\n","print_bam_pipe_selected_reg",uVar1);
        if (_segment.ehdr != 0) {
            iVar51 = *(_segment.ehdr + 0x118);
            if (iVar51 == 0) {
                _printk(0x8006d64,"print_bam_pipe_selected_reg",uVar1);
                if (_segment.ehdr == 0) goto code_r0x08010ff0;
                iVar51 = *(_segment.ehdr + 0x118);
            }
            ipc_log_string(iVar51,"%s:     SYS_MODE: %d\n","print_bam_pipe_selected_reg",uVar2);
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
                _printk(0x800ac70,"print_bam_pipe_selected_reg",uVar2);
            }
        }
    }
code_r0x08010ff0:
    if (iVar3 == 0) {
        if (_segment.ehdr == 0) {
            return;
        }
        ipc_log_string(*(_segment.ehdr + 0x118),"%s:     DIRECTION:%d->Consumer\n","print_bam_pipe_selected_reg",0);
        if (_segment.ehdr == 0) {
            return;
        }
        if (*(_segment.ehdr + 0x118) != 0) goto joined_r0x08011070;
        uVar52 = 0x80071fa;
        iVar3 = 0;
    }
    else {
        if (_segment.ehdr == 0) {
            return;
        }
        ipc_log_string(*(_segment.ehdr + 0x118),"%s:     DIRECTION:%d->Producer\n","print_bam_pipe_selected_reg",
                       iVar3);
        if (_segment.ehdr == 0) {
            return;
        }
        if (*(_segment.ehdr + 0x118) != 0) goto joined_r0x08011070;
        uVar52 = 0x8006d7c;
    }
    _printk(uVar52,"print_bam_pipe_selected_reg",iVar3);
joined_r0x08011070:
    if ((_segment.ehdr != 0) &&
       (ipc_log_string(*(_segment.ehdr + 0x118),"%s:     LOCK_GROUP: 0x%x (%d)\n","print_bam_pipe_selected_reg",
                       uVar48,uVar48), _segment.ehdr != 0)) {
        iVar51 = *(_segment.ehdr + 0x118);
        if (iVar51 == 0) {
            _printk(0x800b0cc,"print_bam_pipe_selected_reg",uVar48,uVar48);
            if (_segment.ehdr == 0) {
                return;
            }
            iVar51 = *(_segment.ehdr + 0x118);
        }
        ipc_log_string(iVar51,"%s: BAM_P_IRQ_EN: 0x%x\n","print_bam_pipe_selected_reg",uVar4);
        if (_segment.ehdr != 0) {
            iVar51 = *(_segment.ehdr + 0x118);
            if (iVar51 == 0) {
                _printk(0x8006362,"print_bam_pipe_selected_reg",uVar4);
                if (_segment.ehdr == 0) {
                    return;
                }
                iVar51 = *(_segment.ehdr + 0x118);
            }
            ipc_log_string(iVar51,"%s: BAM_P_IRQ_STTS: 0x%x\n","print_bam_pipe_selected_reg",uVar5);
            if (_segment.ehdr != 0) {
                iVar51 = *(_segment.ehdr + 0x118);
                if (iVar51 == 0) {
                    _printk(0x8005bb9,"print_bam_pipe_selected_reg",uVar5);
                    if (_segment.ehdr == 0) {
                        return;
                    }
                    iVar51 = *(_segment.ehdr + 0x118);
                }
                ipc_log_string(iVar51,"%s:     TRNSFR_END_IRQ(EOT): 0x%x\n","print_bam_pipe_selected_reg",uVar6);
                if (_segment.ehdr != 0) {
                    iVar51 = *(_segment.ehdr + 0x118);
                    if (iVar51 == 0) {
                        _printk(0x8009b3d,"print_bam_pipe_selected_reg",uVar6);
                        if (_segment.ehdr == 0) {
                            return;
                        }
                        iVar51 = *(_segment.ehdr + 0x118);
                    }
                    ipc_log_string(iVar51,"%s:     PRCSD_DESC_IRQ(INT): 0x%x\n","print_bam_pipe_selected_reg",uVar7);
                    if (_segment.ehdr != 0) {
                        iVar51 = *(_segment.ehdr + 0x118);
                        if (iVar51 == 0) {
                            _printk(0x800a40f,"print_bam_pipe_selected_reg",uVar7);
                            if (_segment.ehdr == 0) {
                                return;
                            }
                            iVar51 = *(_segment.ehdr + 0x118);
                        }
                        ipc_log_string(iVar51,"%s: BAM_P_PRDCR_SDBND: 0x%x\n","print_bam_pipe_selected_reg",uVar8);
                        if (_segment.ehdr != 0) {
                            iVar51 = *(_segment.ehdr + 0x118);
                            if (iVar51 == 0) {
                                _printk(0x800637c,"print_bam_pipe_selected_reg",uVar8);
                                if (_segment.ehdr == 0) {
                                    return;
                                }
                                iVar51 = *(_segment.ehdr + 0x118);
                            }
                            ipc_log_string(iVar51,"%s:     BYTES_FREE: 0x%x (%d)\n","print_bam_pipe_selected_reg",
                                           uVar9,uVar9);
                            if (_segment.ehdr != 0) {
                                iVar51 = *(_segment.ehdr + 0x118);
                                if (iVar51 == 0) {
                                    _printk(0x800639b,"print_bam_pipe_selected_reg",uVar9,uVar9);
                                    if (_segment.ehdr == 0) {
                                        return;
                                    }
                                    iVar51 = *(_segment.ehdr + 0x118);
                                }
                                ipc_log_string(iVar51,"%s:     CTRL: 0x%x\n","print_bam_pipe_selected_reg",uVar10);
                                if (_segment.ehdr != 0) {
                                    iVar51 = *(_segment.ehdr + 0x118);
                                    if (iVar51 == 0) {
                                        _printk(0x8009f8d,"print_bam_pipe_selected_reg",uVar10);
                                        if (_segment.ehdr == 0) {
                                            return;
                                        }
                                        iVar51 = *(_segment.ehdr + 0x118);
                                    }
                                    ipc_log_string(iVar51,"%s:     TOGGLE: %d\n","print_bam_pipe_selected_reg",uVar11
                                                  );
                                    if (_segment.ehdr != 0) {
                                        iVar51 = *(_segment.ehdr + 0x118);
                                        if (iVar51 == 0) {
                                            _printk(0x8009fa3,"print_bam_pipe_selected_reg",uVar11);
                                            if (_segment.ehdr == 0) {
                                                return;
                                            }
                                            iVar51 = *(_segment.ehdr + 0x118);
                                        }
                                        ipc_log_string(iVar51,"%s:     SB_UPDATED: %d\n","print_bam_pipe_selected_reg"
                                                       ,uVar12);
                                        if (_segment.ehdr != 0) {
                                            iVar51 = *(_segment.ehdr + 0x118);
                                            if (iVar51 == 0) {
                                                _printk(0x8008015,"print_bam_pipe_selected_reg",uVar12);
                                                if (_segment.ehdr == 0) {
                                                    return;
                                                }
                                                iVar51 = *(_segment.ehdr + 0x118);
                                            }
                                            ipc_log_string(iVar51,"%s: BAM_P_CNSMR_SDBND: 0x%x\n",
                                                           "print_bam_pipe_selected_reg",uVar13);
                                            if (_segment.ehdr != 0) {
                                                iVar51 = *(_segment.ehdr + 0x118);
                                                if (iVar51 == 0) {
                                                    _printk(0x8009fb9,"print_bam_pipe_selected_reg",uVar13);
                                                    if (_segment.ehdr == 0) {
                                                        return;
                                                    }
                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                }
                                                ipc_log_string(iVar51,"%s:     WAIT_4_ACK: %d\n",
                                                               "print_bam_pipe_selected_reg",uVar19);
                                                if (_segment.ehdr != 0) {
                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                    if (iVar51 == 0) {
                                                        _printk(0x8005436,"print_bam_pipe_selected_reg",uVar19);
                                                        if (_segment.ehdr == 0) {
                                                            return;
                                                        }
                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                    }
                                                    ipc_log_string(iVar51,"%s:     BYTES_AVAIL: 0x%x (%d)\n",
                                                                   "print_bam_pipe_selected_reg",uVar14,uVar14);
                                                    if (_segment.ehdr != 0) {
                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                        if (iVar51 == 0) {
                                                            _printk(0x800bd44,"print_bam_pipe_selected_reg",uVar14,
                                                                    uVar14);
                                                            if (_segment.ehdr == 0) {
                                                                return;
                                                            }
                                                            iVar51 = *(_segment.ehdr + 0x118);
                                                        }
                                                        ipc_log_string(iVar51,"%s:     CTRL: 0x%x\n",
                                                                       "print_bam_pipe_selected_reg",uVar15);
                                                        if (_segment.ehdr != 0) {
                                                            iVar51 = *(_segment.ehdr + 0x118);
                                                            if (iVar51 == 0) {
                                                                _printk(0x8009f8d,"print_bam_pipe_selected_reg",uVar15
                                                                       );
                                                                if (_segment.ehdr == 0) {
                                                                    return;
                                                                }
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                            }
                                                            ipc_log_string(iVar51,"%s:     TOGGLE: %d\n",
                                                                           "print_bam_pipe_selected_reg",uVar16);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x8009fa3,"print_bam_pipe_selected_reg",
                                                                            uVar16);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s:     ACK_TOGGLE: %d\n",
                                                                               "print_bam_pipe_selected_reg",uVar17);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x800c268,"print_bam_pipe_selected_reg"
                                                                                ,uVar17);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,"%s:     ACK_TOGGLE_R: %d\n"
                                                                                   ,"print_bam_pipe_selected_reg",
                                                                                   uVar18);
                                                                    if (_segment.ehdr != 0) {
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                        if (iVar51 == 0) {
                                                                            _printk(0x80068e2,
                                                                                    "print_bam_pipe_selected_reg",
                                                                                    uVar18);
                                                                            if (_segment.ehdr == 0) {
                                                                                return;
                                                                            }
                                                                            iVar51 = *(_segment.ehdr + 0x118);
                                                                        }
                                                                        ipc_log_string(iVar51,
                                                            "%s:     SB_UPDATED: %d\n","print_bam_pipe_selected_reg",
                                                            uVar20);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x8008015,"print_bam_pipe_selected_reg",
                                                                            uVar20);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s: BAM_P_SW_DESC_OFST: 0x%x\n"
                                                                               ,"print_bam_pipe_selected_reg",uVar21);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x800a434,"print_bam_pipe_selected_reg"
                                                                                ,uVar21);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,
                                                            "%s:     SW_DESC_OFST: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar22);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800721c,"print_bam_pipe_selected_reg",
                                                                            uVar22);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s: BAM_P_EVNT_REG: 0x%x\n",
                                                                               "print_bam_pipe_selected_reg",uVar23);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x8005f31,"print_bam_pipe_selected_reg"
                                                                                ,uVar23);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,
                                                            "%s:     DESC_FIFO_PEER_OFST: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar24);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800691c,"print_bam_pipe_selected_reg",
                                                                            uVar24);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s: BAM_P_RETR_CNTXT: 0x%x\n",
                                                                               "print_bam_pipe_selected_reg",uVar33);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x800b9ba,"print_bam_pipe_selected_reg"
                                                                                ,uVar33);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,"%s:     RETR_OFFSET: 0x%x\n"
                                                                                   ,"print_bam_pipe_selected_reg",
                                                                                   uVar34);
                                                                    if (_segment.ehdr != 0) {
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                        if (iVar51 == 0) {
                                                                            _printk(0x800c2a5,
                                                                                    "print_bam_pipe_selected_reg",
                                                                                    uVar34);
                                                                            if (_segment.ehdr == 0) {
                                                                                return;
                                                                            }
                                                                            iVar51 = *(_segment.ehdr + 0x118);
                                                                        }
                                                                        ipc_log_string(iVar51,
                                                            "%s: BAM_P_SI_CNTXT: 0x%x\n","print_bam_pipe_selected_reg"
                                                            ,uVar35);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800a8c4,"print_bam_pipe_selected_reg",
                                                                            uVar35);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s:     SI_OFFSET: 0x%x\n",
                                                                               "print_bam_pipe_selected_reg",uVar36);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x8005f4d,"print_bam_pipe_selected_reg"
                                                                                ,uVar36);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,"%s: BAM_P_DF_CNTXT: 0x%x\n"
                                                                                   ,"print_bam_pipe_selected_reg",
                                                                                   uVar49);
                                                                    if (_segment.ehdr != 0) {
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                        if (iVar51 == 0) {
                                                                            _printk(0x8004323,
                                                                                    "print_bam_pipe_selected_reg",
                                                                                    uVar49);
                                                                            if (_segment.ehdr == 0) {
                                                                                return;
                                                                            }
                                                                            iVar51 = *(_segment.ehdr + 0x118);
                                                                        }
                                                                        ipc_log_string(iVar51,
                                                            "%s:     DF_OFFSET: 0x%x\n","print_bam_pipe_selected_reg",
                                                            uVar50);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x80091c8,"print_bam_pipe_selected_reg",
                                                                            uVar50);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_DESC_FIFO_ADDR: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar26);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x8005bee,"print_bam_pipe_selected_reg",
                                                                            uVar26);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_DESC_FIFO_ADDR_MSB: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar45);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x8005c10,"print_bam_pipe_selected_reg",
                                                                            uVar45);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_DATA_FIFO_ADDR: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar28);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800546a,"print_bam_pipe_selected_reg",
                                                                            uVar28);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_DATA_FIFO_ADDR_MSB: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar46);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800a454,"print_bam_pipe_selected_reg",
                                                                            uVar46);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s: BAM_P_FIFO_SIZES: 0x%x\n",
                                                                               "print_bam_pipe_selected_reg",uVar30);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x8005c36,"print_bam_pipe_selected_reg"
                                                                                ,uVar30);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,
                                                            "%s:     DESC_FIFO_SIZE: 0x%x (%d)\n",
                                                            "print_bam_pipe_selected_reg",uVar27,uVar27);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800b9d8,"print_bam_pipe_selected_reg",
                                                                            uVar27,uVar27);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s:     DATA_FIFO_SIZE: 0x%x (%d)\n",
                                                            "print_bam_pipe_selected_reg",uVar29,uVar29);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800a47a,"print_bam_pipe_selected_reg",
                                                                            uVar29,uVar29);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_EVNT_DEST_ADDR: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar25);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x80091e3,"print_bam_pipe_selected_reg",
                                                                            uVar25);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_EVNT_DEST_ADDR_MSB: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar44);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x80077a0,"print_bam_pipe_selected_reg",
                                                                            uVar44);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_EVNT_GEN_TRSHLD: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar31);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800870e,"print_bam_pipe_selected_reg",
                                                                            uVar31);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s:     EVNT_GEN_TRSHLD: 0x%x (%d)\n",
                                                            "print_bam_pipe_selected_reg",uVar32,uVar32);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x8005f8c,"print_bam_pipe_selected_reg",
                                                                            uVar32,uVar32);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_AU_PSM_CNTXT_1: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar37);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x80083a3,"print_bam_pipe_selected_reg",
                                                                            uVar37);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s: BAM_P_PSM_CNTXT_2: 0x%x\n",
                                                                               "print_bam_pipe_selected_reg",uVar38);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x800c9b5,"print_bam_pipe_selected_reg"
                                                                                ,uVar38);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,
                                                            "%s: BAM_P_PSM_CNTXT_3: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar39);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800c9d4,"print_bam_pipe_selected_reg",
                                                                            uVar39);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: BAM_P_PSM_CNTXT_3_MSB: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar47);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x8005c54,"print_bam_pipe_selected_reg",
                                                                            uVar47);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s: BAM_P_PSM_CNTXT_4: 0x%x\n",
                                                                               "print_bam_pipe_selected_reg",uVar40);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x800b9fd,"print_bam_pipe_selected_reg"
                                                                                ,uVar40);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,
                                                            "%s: BAM_P_PSM_CNTXT_5: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar41);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x800c2c2,"print_bam_pipe_selected_reg",
                                                                            uVar41);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,"%s: BAM_P_TIMER: 0x%x\n",
                                                                               "print_bam_pipe_selected_reg",uVar42);
                                                                if (_segment.ehdr != 0) {
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                    if (iVar51 == 0) {
                                                                        _printk(0x800924a,"print_bam_pipe_selected_reg"
                                                                                ,uVar42);
                                                                        if (_segment.ehdr == 0) {
                                                                            return;
                                                                        }
                                                                        iVar51 = *(_segment.ehdr + 0x118);
                                                                    }
                                                                    ipc_log_string(iVar51,
                                                            "%s: BAM_P_TIMER_CTRL: 0x%x\n",
                                                            "print_bam_pipe_selected_reg",uVar43);
                                                            if (_segment.ehdr != 0) {
                                                                iVar51 = *(_segment.ehdr + 0x118);
                                                                if (iVar51 == 0) {
                                                                    _printk(0x8008f81,"print_bam_pipe_selected_reg",
                                                                            uVar43);
                                                                    if (_segment.ehdr == 0) {
                                                                        return;
                                                                    }
                                                                    iVar51 = *(_segment.ehdr + 0x118);
                                                                }
                                                                ipc_log_string(iVar51,
                                                            "%s: \nsps:<pipe-end> --- Registers of Pipe %d ---\n\n",
                                                            "print_bam_pipe_selected_reg",arg3);
                                                            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0))
                                                            {
                                                                _printk(0x800ba1c,"print_bam_pipe_selected_reg",arg3);
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


// ===== sym.bam_check_irq_source @ 0x08012054 (size 856) =====

uint32_t sym.bam_check_irq_source(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *puVar4;
    uint uVar5;
    ulong *in_x18;
    uint64_t arg4_00;
    uint64_t arg3_00;
    ulong unaff_x30;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    if (puVar4 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.bam_check_irq_source._rs,"bam_check_irq_source"), iVar3 != 0)))) {
            _printk(0x800627c,"bam_check_irq_source",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n",
                           "bam_check_irq_source",0xd8);
        }
        return 0xffffffff;
    }
    arg3_00 = arg2 & 0xffffffff;
    uVar1 = sym.bam_read_reg.llvm.916431513089089357(arg1,0x18,arg3_00);
    if (-1 < uVar1) goto code_r0x080122c4;
    uVar2 = sym.bam_read_reg.llvm.916431513089089357(arg1,10,0);
    arg4_00 = uVar2;
    if ((uVar2 >> 2 & 1) == 0) {
        if ((uVar2 >> 1 & 1) != 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.bam_check_irq_source._rs.37,"bam_check_irq_source"), iVar3 != 0)))) {
                _printk(0x800c836,"bam_check_irq_source",puVar4 + -0x18,*puVar4,uVar2);
            }
            ipc_log_string(puVar4[0x2a],"%s: sps:bam %pa 0x%pK(va);bam irq status=0x%x\nsps: BAM_HRESP_ERR_IRQ\n",
                           "bam_check_irq_source",puVar4 + -0x18,*puVar4,uVar2);
            sym.bam_output_register_content(arg1,arg3_00);
            uVar5 = 2;
            goto code_r0x080122ac;
        }
        if ((uVar2 >> 4 & 1) != 0) {
            if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.bam_check_irq_source._rs.40,"bam_check_irq_source"), iVar3 != 0)))) {
                _printk(0x8005b72,"bam_check_irq_source",*puVar4);
            }
            if (*(puVar4 + 0x2c) < 2) {
                ipc_log_string(puVar4[0x28],"%s: sps:bam 0x%pK(va);receive BAM_TIMER_IRQ\n","bam_check_irq_source",
                               *puVar4);
            }
            uVar5 = 3;
            goto code_r0x080122ac;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 2 ||
            (iVar3 = ___ratelimit(obj.bam_check_irq_source._rs.43,"bam_check_irq_source"), iVar3 != 0)))) {
            _printk(0x800b4a1,"bam_check_irq_source",puVar4 + -0x18,*puVar4,uVar2);
        }
        ipc_log_string(puVar4[0x2a],"%s: sps:bam %pa 0x%pK(va);bam irq status=0x%x\n","bam_check_irq_source",
                       puVar4 + -0x18,*puVar4,uVar2);
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.bam_check_irq_source._rs.34,"bam_check_irq_source"), iVar3 != 0)))) {
            _printk(0x8008a57,"bam_check_irq_source",puVar4 + -0x18,*puVar4,arg4_00);
        }
        ipc_log_string(puVar4[0x2a],"%s: sps:bam %pa 0x%pK(va);bam irq status=0x%x\nsps: BAM_ERROR_IRQ\n",
                       "bam_check_irq_source",puVar4 + -0x18,*puVar4,arg4_00);
        sym.bam_output_register_content(arg1,arg3_00);
        uVar5 = 1;
code_r0x080122ac:
        *arg4 = uVar5;
    }
    sym.bam_write_reg.llvm.916431513089089357(arg1,0xb,0,arg4_00);
code_r0x080122c4:
    return uVar1 & (arg3 | 0x80000000);
}


// ===== sym.bam_pipe_reset @ 0x080123ac (size 388) =====

void sym.bam_pipe_reset(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (puVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.bam_pipe_reset._rs,"bam_pipe_reset"), iVar1 != 0)
            ))) {
            _printk(0x800627c,"bam_pipe_reset",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_pipe_reset",
                           0xd8);
        }
    }
    else {
        arg3 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_reset._rs.46,"bam_pipe_reset"), iVar1 != 0)))) {
            _printk(0x800a7ad,"bam_pipe_reset",puVar2 + -0x18,*puVar2,arg3);
        }
        if (*(puVar2 + 0x2c) < 3) {
            ipc_log_string(puVar2[0x29],"%s: sps: bam=%pa 0x%pK(va).pipe=%d\n","bam_pipe_reset",puVar2 + -0x18,
                           *puVar2,arg3);
        }
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x1d,arg3,1);
        DataSynchronizationBarrier(3,2,0);
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x1d,arg3,0);
        DataSynchronizationBarrier(3,2,0);
    }
    return;
}


// ===== sym.bam_disable_pipe @ 0x08012530 (size 352) =====

void sym.bam_disable_pipe(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    uVar2 = arg1;
    *in_x18 = unaff_x30;
    if (uVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.bam_disable_pipe._rs,"bam_disable_pipe"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_disable_pipe",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_disable_pipe",
                           0xd8);
        }
    }
    else {
        arg3 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_disable_pipe._rs.49,"bam_disable_pipe"), iVar1 != 0)))) {
            _printk(0x800c1f7,"bam_disable_pipe",uVar2,arg3);
        }
        if (*(uVar2 + 0x160) < 3) {
            ipc_log_string(*(uVar2 + 0x148),"%s: sps: bam=0x%pK(va).pipe=%d\n","bam_disable_pipe",uVar2,arg3);
        }
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg3,2);
        DataSynchronizationBarrier(3,2,0);
    }
    return;
}


// ===== sym.bam_pipe_check_zlt @ 0x08012690 (size 504) =====

ulong sym.bam_pipe_check_zlt(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    uVar2 = arg1;
    *in_x18 = unaff_x30;
    if (uVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_check_zlt._rs,"bam_pipe_check_zlt"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_pipe_check_zlt",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_pipe_check_zlt"
                           ,0xd8);
        }
    }
    else {
        arg3 = arg2 & 0xffffffff;
        iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,0x1e,arg3,4);
        if (iVar1 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.bam_pipe_check_zlt._rs.52,"bam_pipe_check_zlt"), iVar1 != 0)))) {
                _printk(0x800c219,"bam_pipe_check_zlt",uVar2,arg3);
            }
            if (*(uVar2 + 0x160) != 0) {
                return 1;
            }
            ipc_log_string(*(uVar2 + 0x138),"%s: sps: bam=0x%pK(va).pipe=%d: the last desc is ZLT\n",
                           "bam_pipe_check_zlt",uVar2,arg3);
            return 1;
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_check_zlt._rs.55,"bam_pipe_check_zlt"), iVar1 != 0)))) {
            _printk(0x800a809,"bam_pipe_check_zlt",uVar2,arg3);
        }
        if (*(uVar2 + 0x160) == 0) {
            ipc_log_string(*(uVar2 + 0x138),"%s: sps: bam=0x%pK(va).pipe=%d: the last desc is not ZLT\n",
                           "bam_pipe_check_zlt",uVar2,arg3);
        }
    }
    return 0;
}


// ===== sym.bam_pipe_check_pipe_empty @ 0x08012888 (size 504) =====

ulong sym.bam_pipe_check_pipe_empty(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    uVar2 = arg1;
    *in_x18 = unaff_x30;
    if (uVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_check_pipe_empty._rs,"bam_pipe_check_pipe_empty"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_pipe_check_pipe_empty",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n",
                           "bam_pipe_check_pipe_empty",0xd8);
        }
    }
    else {
        arg3 = arg2 & 0xffffffff;
        iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,0x1e,arg3,8);
        if (iVar1 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.bam_pipe_check_pipe_empty._rs.58,"bam_pipe_check_pipe_empty"), iVar1 != 0)))
               ) {
                _printk(0x8008684,"bam_pipe_check_pipe_empty",uVar2,arg3);
            }
            if (*(uVar2 + 0x160) != 0) {
                return 1;
            }
            ipc_log_string(*(uVar2 + 0x138),"%s: sps: bam=0x%pK(va).pipe=%d: desc FIFO is empty\n",
                           "bam_pipe_check_pipe_empty",uVar2,arg3);
            return 1;
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_check_pipe_empty._rs.61,"bam_pipe_check_pipe_empty"), iVar1 != 0)))) {
            _printk(0x80067d3,"bam_pipe_check_pipe_empty",uVar2,arg3);
        }
        if (*(uVar2 + 0x160) == 0) {
            ipc_log_string(*(uVar2 + 0x138),"%s: sps: bam=0x%pK(va).pipe=%d: desc FIFO is not empty\n",
                           "bam_pipe_check_pipe_empty",uVar2,arg3);
        }
    }
    return 0;
}


// ===== sym.bam_pipe_init @ 0x08012a80 (size 1432) =====

ulong sym.bam_pipe_init(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong *puVar6;
    ulong uVar7;
    ulong *in_x18;
    uint64_t arg3_00;
    uint64_t uVar8;
    int iVar9;
    ulong unaff_x30;
    
    puVar6 = arg1;
    *in_x18 = unaff_x30;
    if (puVar6 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar5 = ___ratelimit(obj.bam_pipe_init._rs,"bam_pipe_init"), iVar5 != 0)))
           ) {
            _printk(0x800627c,"bam_pipe_init",0xd8);
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            uVar7 = 0xffffffff;
        }
        else {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: Failed to get dev for base addr 0x%pK\n"
                           ,"bam_pipe_init",0xd8);
            uVar7 = 0xffffffff;
        }
    }
    else {
        arg3_00 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.bam_pipe_init._rs.64,"bam_pipe_init"), iVar5 != 0)))) {
            _printk(0x800a7ad,"bam_pipe_init",puVar6 + -0x18,*puVar6,arg3_00);
        }
        if (*(puVar6 + 0x2c) < 3) {
            ipc_log_string(puVar6[0x29],"%s: sps: bam=%pa 0x%pK(va).pipe=%d\n","bam_pipe_init",puVar6 + -0x18,
                           *puVar6,arg3_00);
        }
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x1d,arg3_00,1);
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x1d,arg3_00,0);
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x19,arg4 & 0xffffffff,1 << (arg2 & 0x1f));
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x21,arg3_00,*(arg3 + 4));
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg2 & 0xffffffff,8);
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg2 & 0xffffffff,0x20);
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x2e,arg2 & 0xffffffff,*arg3);
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x2c,arg3_00,*(arg3 + 0x18));
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x2f,arg2 & 0xffffffff,0xffff);
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg2 & 0xffffffff,0x10);
        if ((*(arg3 + 0x1c) & 0xf) != 0) {
            sym.bam_write_reg.llvm.916431513089089357(arg1,0x2d,arg2 & 0xffffffff,*(arg3 + 0x1c) & 0xf);
        }
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg2 & 0xffffffff,0x1f0000);
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.bam_pipe_init._rs.65,"bam_pipe_init"), iVar5 != 0)))) {
            _printk(0x800568e,"bam_pipe_init",*puVar6,arg2 & 0xffffffff,*(arg3 + 0x24));
        }
        if (*(puVar6 + 0x2c) == 0) {
            ipc_log_string(puVar6[0x27],"%s: sps:bam=0x%pK(va).pipe=%d.lock_group=%d\n","bam_pipe_init",*puVar6,
                           arg3_00,*(arg3 + 0x24));
            iVar5 = *(arg3 + 0xc);
        }
        else {
            iVar5 = *(arg3 + 0xc);
        }
        if (iVar5 == 0) {
            uVar8 = _segment.ehdr;
            if (3 < _segment.ehdr) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8012fa4);
                (*pcVar4)();
            }
            iVar5 = *(arg3 + 0x30);
            iVar2 = *(arg3 + 0x34);
            if (_segment.ehdr == 0) {
                iVar9 = 0x40;
            }
            else {
                if (0x223 < uVar8 * 0xec) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(1,0x8012fa8);
                    (*pcVar4)();
                }
                iVar9 = 0x1000;
            }
            sym.bam_write_reg.llvm.916431513089089357(arg1,0x2a,arg3_00,*(arg3 + 0x38));
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x2f,arg2 & 0xffffffff,0xffff0000);
            if (*(arg3 + 0x44) == '\0') {
                uVar3 = iVar5 + iVar9 * iVar2 + *(uVar8 * 0xec + 0x800ce9c);
            }
            else {
                uVar3 = *(arg3 + 0x30);
            }
            sym.bam_write_reg.llvm.916431513089089357(arg1,0x26,arg2 & 0xffffffff,uVar3);
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.bam_pipe_init._rs.68,"bam_pipe_init"), iVar5 != 0)))) {
                _printk(0x800c8b6,"bam_pipe_init",*puVar6,arg3_00,*(arg3 + 0x30),*(arg3 + 0x34));
            }
            if (*(puVar6 + 0x2c) < 3) {
                ipc_log_string(puVar6[0x29],"%s: sps:bam=0x%pK(va).pipe=%d.peer_bam=0x%x.peer_pipe=%d\n",
                               "bam_pipe_init",*puVar6,arg3_00,*(arg3 + 0x30),*(arg3 + 0x34));
            }
            if ((*(arg3 + 0x3c) & 0xf) != 0) {
                sym.bam_write_reg.llvm.916431513089089357(arg1,0x27,arg3_00,0);
                sym.bam_write_reg.llvm.916431513089089357(arg1,0x2b,arg3_00,*(arg3 + 0x3c) & 0xf);
            }
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg3_00,0x800);
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.bam_pipe_init._rs.71,"bam_pipe_init"), iVar5 != 0)))) {
                pcVar1 = "Do not set";
                if (*(arg3 + 0x10) != 0) {
                    pcVar1 = 0x800b4f6;
                }
                _printk(0x8009a48,"bam_pipe_init",pcVar1);
            }
            if (*(puVar6 + 0x2c) == 0) {
                pcVar1 = "Do not set";
                if (*(arg3 + 0x10) != 0) {
                    pcVar1 = 0x800b4f6;
                }
                ipc_log_string(puVar6[0x27],"%s: sps:%s WRITE_NWD bit for this bam2bam pipe\n","bam_pipe_init",pcVar1
                              );
            }
        }
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg3_00,2);
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.bam_get_register_offset @ 0x08013018 (size 512) =====

int sym.bam_get_register_offset(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (3 < _segment.ehdr) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x8013214);
        (*pcVar1)();
    }
    if (arg1 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.bam_get_register_offset._rs,"bam_get_register_offset"), iVar2 != 0)))) {
            _printk(0x800627c,"bam_get_register_offset",0xd8);
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: Failed to get dev for base addr 0x%pK\n"
                           ,"bam_get_register_offset",0xd8);
            return -1;
        }
code_r0x0801317c:
        iVar2 = -1;
    }
    else {
        iVar2 = 0x1000;
        if (_segment.ehdr != 2) {
            iVar2 = 0x80;
        }
        if ((arg2 & 0xfffffffc) != 0x18) {
            iVar2 = -(0x17 < arg2);
        }
        if (arg2 - 0x1c < 0x1e) {
            if (_segment.ehdr == 0) {
                iVar2 = 0x40;
                if (arg2 < 0x26) {
                    iVar2 = 0x80;
                }
            }
            else {
                iVar2 = 0x1000;
            }
        }
        else if (arg2 == 0x3a) {
            iVar3 = 4;
            if (_segment.ehdr != 2) {
                iVar3 = 0x1000;
            }
            iVar2 = 0x80;
            if (_segment.ehdr != 0) {
                iVar2 = iVar3;
            }
        }
        else if ((0x17 < arg2) && ((arg2 & 0xfffffffc) != 0x18)) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.bam_get_register_offset._rs.314,"bam_get_register_offset"), iVar2 != 0)))) {
                _printk(0x800932b,"bam_get_register_offset",arg2);
            }
            ipc_log_string(*(arg1 + 0x150),"%s: Failed to find register offset for %d\n","bam_get_register_offset",
                           arg2);
            goto code_r0x0801317c;
        }
        if (0x2c3 < _segment.ehdr * 0xec + arg2 * 4) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x8013218);
            (*pcVar1)();
        }
        iVar2 = *(obj.bam_regmap + arg2 * 4 + _segment.ehdr * 0xec) + iVar2 * arg3;
    }
    return iVar2;
}


// ===== sym.bam_pipe_exit @ 0x08013218 (size 424) =====

void sym.bam_pipe_exit(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t arg3_00;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (puVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.bam_pipe_exit._rs,"bam_pipe_exit"), iVar1 != 0)))
           ) {
            _printk(0x800627c,"bam_pipe_exit",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_pipe_exit",
                           0xd8);
        }
    }
    else {
        arg3_00 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_exit._rs.76,"bam_pipe_exit"), iVar1 != 0)))) {
            _printk(0x800a7ad,"bam_pipe_exit",puVar2 + -0x18,*puVar2,arg3_00);
        }
        if (*(puVar2 + 0x2c) < 3) {
            ipc_log_string(puVar2[0x29],"%s: sps: bam=%pa 0x%pK(va).pipe=%d\n","bam_pipe_exit",puVar2 + -0x18,
                           *puVar2,arg3_00);
        }
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x21,arg3_00,0);
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x19,arg3 & 0xffffffff,1 << (arg2 & 0x1f));
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg3_00,2);
    }
    return;
}


// ===== sym.bam_pipe_enable @ 0x080133c0 (size 544) =====

void sym.bam_pipe_enable(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (puVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_enable._rs,"bam_pipe_enable"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_pipe_enable",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_pipe_enable",
                           0xd8);
        }
    }
    else {
        arg3 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_enable._rs.77,"bam_pipe_enable"), iVar1 != 0)))) {
            _printk(0x800a7ad,"bam_pipe_enable",puVar2 + -0x18,*puVar2,arg3);
        }
        if (*(puVar2 + 0x2c) < 3) {
            ipc_log_string(puVar2[0x29],"%s: sps: bam=%pa 0x%pK(va).pipe=%d\n","bam_pipe_enable",puVar2 + -0x18,
                           *puVar2,arg3);
        }
        iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1,0x1c,arg3,2);
        if (iVar1 == 0) {
            sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg3,2);
        }
        else {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.bam_pipe_enable._rs.78,"bam_pipe_enable"), iVar1 != 0)))) {
                _printk(0x8007717,"bam_pipe_enable",*puVar2,arg3);
            }
            if (*(puVar2 + 0x2c) < 3) {
                ipc_log_string(puVar2[0x29],"%s: sps:bam=0x%pK(va).pipe=%d is already enabled\n","bam_pipe_enable",
                               *puVar2,arg3);
            }
        }
    }
    return;
}


// ===== sym.bam_pipe_disable @ 0x080135e0 (size 364) =====

void sym.bam_pipe_disable(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (puVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_disable._rs,"bam_pipe_disable"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_pipe_disable",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_pipe_disable",
                           0xd8);
        }
    }
    else {
        arg3 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_disable._rs.81,"bam_pipe_disable"), iVar1 != 0)))) {
            _printk(0x800a7ad,"bam_pipe_disable",puVar2 + -0x18,*puVar2,arg3);
        }
        if (*(puVar2 + 0x2c) < 3) {
            ipc_log_string(puVar2[0x29],"%s: sps: bam=%pa 0x%pK(va).pipe=%d\n","bam_pipe_disable",puVar2 + -0x18,
                           *puVar2,arg3);
        }
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1c,arg3,2);
    }
    return;
}


// ===== sym.bam_pipe_is_enabled @ 0x0801374c (size 48) =====

void sym.bam_pipe_is_enabled(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.bam_read_reg_field.llvm.916431513089089357(arg1,0x1c,arg2 & 0xffffffff,2);
    return;
}


// ===== sym.bam_pipe_set_irq @ 0x0801377c (size 820) =====

void sym.bam_pipe_set_irq(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong *puVar2;
    uint32_t in_w4;
    ulong *in_x18;
    uint64_t arg3_00;
    uint64_t arg4_00;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (puVar2 == 0xd8) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_set_irq._rs,"bam_pipe_set_irq"), iVar1 != 0)))) {
            _printk(0x800627c,"bam_pipe_set_irq",0xd8);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: Failed to get dev for base addr 0x%pK\n","bam_pipe_set_irq",
                           0xd8);
        }
    }
    else {
        arg4_00 = arg4 & 0xffffffff;
        arg3_00 = arg2 & 0xffffffff;
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.bam_pipe_set_irq._rs.82,"bam_pipe_set_irq"), iVar1 != 0)))) {
            _printk(0x8005e80,"bam_pipe_set_irq",puVar2 + -0x18,*puVar2,arg3_00,arg3 & 0xffffffffU,arg4_00,in_w4)
            ;
        }
        if (*(puVar2 + 0x2c) < 3) {
            ipc_log_string(puVar2[0x29],"%s: sps: bam=%pa 0x%pK(va).pipe=%d; irq_en:%d; src_mask:0x%x; ee:%d\n",
                           "bam_pipe_set_irq",puVar2 + -0x18,*puVar2,arg3_00,arg3 & 0xffffffffU,arg4_00);
        }
        if ((arg4 >> 6 & 1) != 0) {
            if (obj.enhd_pipe == 0x0) {
                arg4_00 = arg4 & 0xffffffbf;
                if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar1 = ___ratelimit(obj.bam_pipe_set_irq._rs.85,"bam_pipe_set_irq"), iVar1 != 0)))) {
                    _printk(0x800774b,"bam_pipe_set_irq",arg3_00);
                }
                if (*(puVar2 + 0x2c) < 3) {
                    ipc_log_string(puVar2[0x29],"%s: SPS_O_RST_ERROR is not supported, pipe %d\n","bam_pipe_set_irq",
                                   arg3_00);
                }
            }
            else {
                sym.bam_write_reg_field.llvm.916431513089089357(arg1,0xc,0,4);
            }
        }
        if ((arg4_00 >> 7 & 1) != 0) {
            if (obj.enhd_pipe == 0x0) {
                arg4_00 = arg4_00 & 0xffffff7f;
                if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar1 = ___ratelimit(obj.bam_pipe_set_irq._rs.88,"bam_pipe_set_irq"), iVar1 != 0)))) {
                    _printk(0x800680d,"bam_pipe_set_irq",arg3_00);
                }
                if (*(puVar2 + 0x2c) < 3) {
                    ipc_log_string(puVar2[0x29],"%s: SPS_O_HRESP_ERROR is not supported, pipe %d\n","bam_pipe_set_irq"
                                   ,arg3_00);
                }
            }
            else {
                sym.bam_write_reg_field.llvm.916431513089089357(arg1,0xc,0,2);
            }
        }
        sym.bam_write_reg.llvm.916431513089089357(arg1,0x21,arg3_00,arg4_00);
        sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x19,in_w4,1 << (arg2 & 0x1f));
    }
    return;
}


// ===== sym.bam_pipe_satellite_mti @ 0x08013ab0 (size 92) =====

void sym.bam_pipe_satellite_mti(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.bam_write_reg.llvm.916431513089089357(arg1,0x21,arg2 & 0xffffffff,0);
    sym.bam_write_reg_field.llvm.916431513089089357(arg1,8,0,1 << (arg2 & 0x1f));
    return;
}


// ===== sym.bam_pipe_set_mti @ 0x08013b0c (size 56) =====

void sym.bam_pipe_set_mti(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t in_w3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (arg3 != 0) {
        uVar1 = in_w3;
    }
    sym.bam_write_reg.llvm.916431513089089357(arg1,0x21,arg2 & 0xffffffff,uVar1);
    return;
}


// ===== sym.bam_pipe_get_and_clear_irq_status @ 0x08013b44 (size 96) =====

uint64_t sym.bam_pipe_get_and_clear_irq_status(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.bam_read_reg.llvm.916431513089089357(arg1,0x1f,arg2 & 0xffffffffU);
    sym.bam_write_reg.llvm.916431513089089357(arg1,0x20,arg2 & 0xffffffffU,uVar1 & 0xffffffff);
    return uVar1 & 0xffffffff;
}


// ===== sym.bam_pipe_set_desc_write_offset @ 0x08013ba4 (size 52) =====

void sym.bam_pipe_set_desc_write_offset(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x28,arg2 & 0xffffffff,0xffff);
    return;
}


// ===== sym.bam_pipe_get_desc_write_offset @ 0x08013bd8 (size 48) =====

void sym.bam_pipe_get_desc_write_offset(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.bam_read_reg_field.llvm.916431513089089357(arg1,0x28,arg2 & 0xffffffff,0xffff);
    return;
}


// ===== sym.bam_pipe_get_desc_read_offset @ 0x08013c08 (size 48) =====

void sym.bam_pipe_get_desc_read_offset(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.bam_read_reg_field.llvm.916431513089089357(arg1,0x29,arg2 & 0xffffffff,0xffff);
    return;
}


// ===== sym.bam_pipe_timer_config @ 0x08013c38 (size 172) =====

void sym.bam_pipe_timer_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t arg2_00;
    ulong *in_x18;
    uint64_t arg3_00;
    ulong unaff_x30;
    uint32_t arg1_00;
    
    *in_x18 = unaff_x30;
    arg3_00 = arg2 & 0xffffffff;
    arg1_00 = arg1;
    iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,1,0,0x100000);
    if (iVar1 == 0) {
        sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,0x23,arg3_00,0x20000000);
        arg2_00 = 0x23;
    }
    else {
        sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,5,0,0x20000000);
        arg2_00 = 5;
        arg3_00 = 0;
    }
    sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,arg2_00,arg3_00,0xffff);
    return;
}


// ===== sym.bam_pipe_timer_reset @ 0x08013ce4 (size 156) =====

void sym.bam_pipe_timer_reset(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg2_00;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    uint32_t arg1_00;
    
    *in_x18 = unaff_x30;
    arg3 = arg2 & 0xffffffff;
    arg1_00 = arg1;
    iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,1,0,0x100000);
    if (iVar1 == 0) {
        sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,0x23,arg3,0x80000000);
        arg2_00 = 0x23;
    }
    else {
        sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,5,0,0x80000000);
        arg2_00 = 5;
        arg3 = 0;
    }
    sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,arg2_00,arg3,0x80000000);
    return;
}


// ===== sym.bam_pipe_timer_get_count @ 0x08013d80 (size 44) =====

void sym.bam_pipe_timer_get_count(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.bam_read_reg.llvm.916431513089089357(arg1,0x22,arg2 & 0xffffffff);
    return;
}


// ===== sym.bam_pipe_halt @ 0x08013dac (size 56) =====

void sym.bam_pipe_halt(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.bam_write_reg_field.llvm.916431513089089357(arg1,0x1e,arg2 & 0xffffffff,1);
    return;
}


// ===== sym.print_bam_reg @ 0x08013de4 (size 956) =====

void sym.print_bam_reg(int64_t arg1)

{
    uint *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t uVar10;
    int iVar11;
    ulong *in_x18;
    uint64_t uVar12;
    int iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    iVar8 = 0x1008;
    if (_segment.ehdr != 2) {
        iVar8 = 0x3c;
    }
    iVar2 = 0x1000;
    if (_segment.ehdr != 2) {
        iVar2 = 4;
    }
    iVar9 = 0;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        uVar5 = *(arg1 + iVar2);
        uVar6 = *(arg1 + iVar8);
        uVar4 = *arg1;
        ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x118),"%s: %s","print_bam_reg",
                       "\nsps:<bam-begin> --- Content of BAM-level registers---\n");
        iVar9 = 0;
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            iVar8 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x118);
            if (iVar8 == 0) {
                _printk(0x8007fbf,"print_bam_reg","\nsps:<bam-begin> --- Content of BAM-level registers---\n");
                iVar9 = 0;
                if (CONCAT44(*0x8000004,_segment.ehdr) == 0) goto code_r0x08013ef4;
                iVar8 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x118);
            }
            ipc_log_string(iVar8,"%s: BAM_CTRL: 0x%x\n","print_bam_reg",uVar4);
            iVar9 = 0;
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                iVar8 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x118);
                if (iVar8 == 0) {
                    _printk(0x800bd0d,"print_bam_reg",uVar4);
                    iVar9 = 0;
                    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) goto code_r0x08013ef4;
                    iVar8 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x118);
                }
                ipc_log_string(iVar8,"%s: BAM_REVISION: 0x%x\n","print_bam_reg",uVar5);
                iVar9 = 0;
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    iVar8 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x118);
                    if (iVar8 == 0) {
                        _printk(0x800ac33,"print_bam_reg",uVar5);
                        iVar9 = 0;
                        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) goto code_r0x08013ef4;
                        iVar8 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x118);
                    }
                    ipc_log_string(iVar8,"%s: NUM_PIPES: 0x%x\n","print_bam_reg",uVar6);
                    iVar9 = CONCAT44(*0x8000004,_segment.ehdr);
                    if ((iVar9 != 0) && (*(iVar9 + 0x118) == 0)) {
                        _printk(0x8008a9b,"print_bam_reg",uVar6);
                        iVar9 = CONCAT44(*0x8000004,_segment.ehdr);
                    }
                }
            }
        }
    }
code_r0x08013ef4:
    uVar12 = 0;
    uVar3 = 0x301c;
    iVar8 = iVar9;
    if (_segment.ehdr != 2) {
        uVar3 = 0x80;
    }
    do {
        if (iVar8 != 0) {
            puVar1 = arg1 + uVar12;
            ipc_log_string(*(iVar8 + 0x118),"%s: bam addr 0x%x: 0x%x,0x%x,0x%x,0x%x\n","print_bam_reg",
                           uVar12 & 0xffffffff,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
            iVar9 = CONCAT44(*0x8000004,_segment.ehdr);
            if (iVar9 == 0) {
                iVar8 = 0;
            }
            else {
                iVar8 = iVar9;
                if (*(iVar9 + 0x118) == 0) {
                    _printk(0x800b8db,"print_bam_reg",uVar12 & 0xffffffff,*(arg1 + uVar12),puVar1[1],puVar1[2],
                            puVar1[3]);
                    iVar9 = CONCAT44(*0x8000004,_segment.ehdr);
                    iVar8 = iVar9;
                }
            }
        }
        uVar12 = uVar12 + 0x10;
    } while (uVar12 < uVar3);
    uVar10 = 0x3000;
    if (_segment.ehdr != 2) {
        uVar10 = 0x800;
    }
    iVar11 = 0x1000;
    if (_segment.ehdr != 2) {
        iVar11 = 0x80;
    }
    iVar13 = 1;
    iVar8 = iVar9;
    do {
        while (iVar8 == 0) {
code_r0x08014024:
            iVar13 = iVar13 + 1;
            if (iVar13 == 9) {
                if (iVar9 == 0) {
                    return;
                }
                ipc_log_string(*(iVar9 + 0x118),"%s: %s","print_bam_reg",
                               "\nsps:<bam-begin> --- Content of BAM-level registers ---\n");
                if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
                    return;
                }
                if (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x118) != 0) {
                    return;
                }
                _printk(0x8007fbf,"print_bam_reg","\nsps:<bam-begin> --- Content of BAM-level registers ---\n");
                return;
            }
            uVar10 = uVar10 + iVar11;
        }
        uVar7 = uVar10 >> 2;
        ipc_log_string(*(iVar8 + 0x118),"%s: bam addr 0x%x: 0x%x,0x%x,0x%x,0x%x\n","print_bam_reg",uVar10,
                       *(arg1 + uVar7 * 4),*(arg1 + (uVar7 | 1) * 4),*(arg1 + (uVar7 | 2) * 4),
                       *(arg1 + (uVar7 | 3) * 4));
        iVar9 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar9 != 0) {
            iVar8 = iVar9;
            if (*(iVar9 + 0x118) == 0) {
                _printk(0x800b8db,"print_bam_reg",uVar10,*(arg1 + uVar7 * 4),*(arg1 + (uVar7 | 1) * 4),
                        *(arg1 + (uVar7 | 2) * 4),*(arg1 + (uVar7 | 3) * 4));
                iVar9 = CONCAT44(*0x8000004,_segment.ehdr);
                iVar8 = iVar9;
            }
            goto code_r0x08014024;
        }
        iVar13 = iVar13 + 1;
        if (iVar13 == 9) {
            return;
        }
        iVar9 = 0;
        iVar8 = 0;
        uVar10 = uVar10 + iVar11;
    } while( true );
}


// ===== sym.print_bam_pipe_reg @ 0x080141a0 (size 1328) =====

void sym.print_bam_pipe_reg(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    iVar9 = arg2;
    iVar6 = 0;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x118),
                       "%s: \nsps:<pipe-begin> --- Content of Pipe %d registers ---\n","print_bam_pipe_reg",
                       arg2 & 0xffffffffU);
        iVar6 = 0;
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            iVar6 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x118);
            if (iVar6 == 0) {
                _printk(0x8005ec7,"print_bam_pipe_reg",arg2 & 0xffffffffU);
                iVar6 = 0;
                if (CONCAT44(*0x8000004,_segment.ehdr) == 0) goto code_r0x08014238;
                iVar6 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x118);
            }
            ipc_log_string(iVar6,"%s: %s","print_bam_pipe_reg","-- Pipe Management Registers --\n");
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x118) == 0)) {
                _printk(0x8007fbf,"print_bam_pipe_reg","-- Pipe Management Registers --\n");
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            }
        }
    }
code_r0x08014238:
    iVar2 = 0x13000;
    if (_segment.ehdr != 2) {
        iVar2 = 0x1000;
    }
    uVar1 = iVar2 + iVar9 * 0x1000;
    uVar3 = uVar1 | 0x80;
    iVar7 = iVar6;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 0x10) {
        iVar8 = 0;
        if (iVar7 != 0) {
            uVar4 = uVar1 + 3;
            if (-1 < uVar1) {
                uVar4 = uVar1;
            }
            iVar5 = (uVar4 << 0x20) >> 0x22;
            ipc_log_string(*(iVar7 + 0x118),"%s: bam addr 0x%x: 0x%x,0x%x,0x%x,0x%x\n","print_bam_pipe_reg",uVar1,
                           *(arg1 + (uVar4 >> 2) * 4),*(arg1 + (iVar5 + 1) * 4),*(arg1 + (iVar5 + 2) * 4),
                           *(arg1 + (iVar5 + 3) * 4));
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if (iVar6 == 0) {
                iVar8 = 0;
            }
            else {
                iVar8 = iVar6;
                if (*(iVar6 + 0x118) == 0) {
                    _printk(0x800b8db,"print_bam_pipe_reg",uVar1,*(arg1 + iVar5 * 4),*(arg1 + (iVar5 + 1) * 4),
                            *(arg1 + (iVar5 + 2) * 4),*(arg1 + (iVar5 + 3) * 4));
                    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                    iVar8 = iVar6;
                }
            }
        }
        iVar7 = iVar8;
    }
    iVar7 = 0;
    if (iVar6 != 0) {
        ipc_log_string(*(iVar6 + 0x118),"%s: %s","print_bam_pipe_reg",
                       "-- Pipe Configuration and Internal State Registers --\n");
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x118) == 0)) {
            _printk(0x8007fbf,"print_bam_pipe_reg","-- Pipe Configuration and Internal State Registers --\n");
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        }
    }
    iVar2 = 0x13800;
    if (_segment.ehdr != 2) {
        iVar2 = 0x1800;
    }
    uVar1 = iVar2 + iVar9 * 0x1000;
    if (uVar1 < (uVar1 | 0x40)) {
        if (iVar7 != 0) {
            uVar3 = uVar1 + 3;
            if (-1 < uVar1) {
                uVar3 = uVar1;
            }
            iVar6 = (uVar3 << 0x20) >> 0x22;
            ipc_log_string(*(iVar7 + 0x118),"%s: bam addr 0x%x: 0x%x,0x%x,0x%x,0x%x\n","print_bam_pipe_reg",uVar1,
                           *(arg1 + (uVar3 >> 2) * 4),*(arg1 + (iVar6 + 1) * 4),*(arg1 + (iVar6 + 2) * 4),
                           *(arg1 + (iVar6 + 3) * 4));
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x118) == 0)) {
                _printk(0x800b8db,"print_bam_pipe_reg",uVar1,*(arg1 + iVar6 * 4),*(arg1 + (iVar6 + 1) * 4),
                        *(arg1 + (iVar6 + 2) * 4),*(arg1 + (iVar6 + 3) * 4));
                iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            }
        }
        uVar3 = uVar1 | 0x10;
        if (uVar3 < (uVar1 | 0x40)) {
            if (iVar7 == 0) {
                return;
            }
            uVar4 = uVar3 + 3;
            if (-1 < uVar3) {
                uVar4 = uVar3;
            }
            iVar6 = (uVar4 << 0x20) >> 0x22;
            ipc_log_string(*(iVar7 + 0x118),"%s: bam addr 0x%x: 0x%x,0x%x,0x%x,0x%x\n","print_bam_pipe_reg",uVar3,
                           *(arg1 + (uVar4 >> 2) * 4),*(arg1 + (iVar6 + 1) * 4),*(arg1 + (iVar6 + 2) * 4),
                           *(arg1 + (iVar6 + 3) * 4));
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if (iVar7 == 0) {
                return;
            }
            if (*(iVar7 + 0x118) == 0) {
                _printk(0x800b8db,"print_bam_pipe_reg",uVar3,*(arg1 + iVar6 * 4),*(arg1 + (iVar6 + 1) * 4),
                        *(arg1 + (iVar6 + 2) * 4),*(arg1 + (iVar6 + 3) * 4));
                iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
                if (iVar7 == 0) {
                    return;
                }
            }
            uVar4 = uVar1 | 0x20;
            uVar3 = uVar4 + 3;
            if (-1 < uVar4) {
                uVar3 = uVar4;
            }
            iVar6 = (uVar3 << 0x20) >> 0x22;
            ipc_log_string(*(iVar7 + 0x118),"%s: bam addr 0x%x: 0x%x,0x%x,0x%x,0x%x\n","print_bam_pipe_reg",uVar4,
                           *(arg1 + (uVar3 >> 2) * 4),*(arg1 + (iVar6 + 1) * 4),*(arg1 + (iVar6 + 2) * 4),
                           *(arg1 + (iVar6 + 3) * 4));
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if (iVar7 == 0) {
                return;
            }
            if (*(iVar7 + 0x118) == 0) {
                _printk(0x800b8db,"print_bam_pipe_reg",uVar4,*(arg1 + iVar6 * 4),*(arg1 + (iVar6 + 1) * 4),
                        *(arg1 + (iVar6 + 2) * 4),*(arg1 + (iVar6 + 3) * 4));
                iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
                if (iVar7 == 0) {
                    return;
                }
            }
            uVar1 = uVar1 | 0x30;
            uVar3 = uVar1 + 3;
            if (-1 < uVar1) {
                uVar3 = uVar1;
            }
            iVar6 = (uVar3 << 0x20) >> 0x22;
            ipc_log_string(*(iVar7 + 0x118),"%s: bam addr 0x%x: 0x%x,0x%x,0x%x,0x%x\n","print_bam_pipe_reg",uVar1,
                           *(arg1 + (uVar3 >> 2) * 4),*(arg1 + (iVar6 + 1) * 4),*(arg1 + (iVar6 + 2) * 4),
                           *(arg1 + (iVar6 + 3) * 4));
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if (iVar7 == 0) {
                return;
            }
            if (*(iVar7 + 0x118) != 0) goto code_r0x08014588;
            _printk(0x800b8db,"print_bam_pipe_reg",uVar1,*(arg1 + iVar6 * 4),*(arg1 + (iVar6 + 1) * 4),
                    *(arg1 + (iVar6 + 2) * 4),*(arg1 + (iVar6 + 3) * 4));
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        }
    }
    if (iVar7 == 0) {
        return;
    }
code_r0x08014588:
    ipc_log_string(*(iVar7 + 0x118),"%s: \nsps:<pipe-end> --- Content of Pipe %d registers ---\n","print_bam_pipe_reg"
                   ,iVar9);
    if ((CONCAT44(*0x8000004,_segment.ehdr) != 0) && (*(CONCAT44(*0x8000004,_segment.ehdr) + 0x118) == 0)) {
        _printk(0x80056bd,"print_bam_pipe_reg",iVar9);
    }
    return;
}


// ===== sym.print_bam_pipe_desc_fifo @ 0x080146d0 (size 2556) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.print_bam_pipe_desc_fifo(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar12;
    uint32_t *puVar13;
    uint uVar14;
    char *pcVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar16;
    uint32_t uVar17;
    uint *puVar18;
    ulong unaff_x30;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uint32_t uVar6;
    
    *in_x18 = unaff_x30;
    uVar14 = arg2;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar9 = 0;
    if (arg1 == 0) goto code_r0x08014aa4;
    uVar17 = arg3;
    uVar6 = arg1;
    uVar5 = sym.bam_read_reg.llvm.916431513089089357(uVar6,0x2c,arg2 & 0xffffffffU);
    uVar9 = sym.bam_read_reg_field.llvm.916431513089089357(uVar6,0x2f,arg2 & 0xffffffffU,0xffff);
    if (uVar5 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (uVar9 = ___ratelimit(obj.print_bam_pipe_desc_fifo._rs,"print_bam_pipe_desc_fifo"), uVar9 != 0)))) {
            uVar9 = _printk(0x800c2e1,"print_bam_pipe_desc_fifo",uVar14);
        }
        if (_segment.ehdr == 0) goto code_r0x08014aa4;
        uVar12 = *(_segment.ehdr + 0x110);
        pcVar15 = "%s: sps: desc FIFO address of Pipe %d is NULL\n";
    }
    else {
        uVar16 = uVar9 & 0xffffffff;
        uVar7 = uVar9;
        if (uVar7 != 0) {
            if ((_segment.ehdr != 0) &&
               (uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),
                                       "%s: \nsps:<desc-begin> --- descriptor FIFO of Pipe %d -----\n\n",
                                       "print_bam_pipe_desc_fifo",arg2 & 0xffffffff), _segment.ehdr != 0)) {
                iVar10 = *(_segment.ehdr + 0x118);
                if (iVar10 == 0) {
                    uVar9 = _printk(0x8006dde,"print_bam_pipe_desc_fifo",arg2 & 0xffffffff);
                    if (_segment.ehdr == 0) goto code_r0x080147c4;
                    iVar10 = *(_segment.ehdr + 0x118);
                }
                uVar9 = ipc_log_string(iVar10,"%s: BAM_P_DESC_FIFO_ADDR: 0x%x\nBAM_P_DESC_FIFO_SIZE: 0x%x (%d)\n\n",
                                       "print_bam_pipe_desc_fifo",uVar5,uVar16,uVar16);
                if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
                    uVar9 = _printk(0x800c9f3,"print_bam_pipe_desc_fifo",uVar5,uVar16,uVar16);
                }
            }
code_r0x080147c4:
            uVar16 = uVar5 - _ipc_log_string | 0xffffff8000000000;
            if (uVar17 == 0) {
                if (((_segment.ehdr != 0) &&
                    (uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s","print_bam_pipe_desc_fifo",
                                            "---------------- begin of FIFO ----------------\n\n"), _segment.ehdr != 0)
                    ) && (*(_segment.ehdr + 0x118) == 0)) {
                    uVar9 = _printk(0x8007fbf,"print_bam_pipe_desc_fifo",
                                    "---------------- begin of FIFO ----------------\n\n");
                }
                uVar17 = 0;
                iVar10 = _segment.ehdr;
                iVar11 = _segment.ehdr;
                do {
                    while (iVar11 == 0) {
code_r0x08014e80:
                        uVar17 = uVar17 + 0x10;
                        if (uVar7 <= uVar17) {
                            if ((iVar10 != 0) &&
                               (uVar9 = ipc_log_string(*(iVar10 + 0x118),"%s: %s","print_bam_pipe_desc_fifo",
                                                       "\n----------------  end of FIFO  ----------------\n"),
                               _segment.ehdr != 0)) {
                                if (*(_segment.ehdr + 0x118) != 0) goto code_r0x08014f64;
                                pcVar15 = "\n----------------  end of FIFO  ----------------\n";
                                goto code_r0x0801504c;
                            }
                            goto code_r0x08014aa4;
                        }
                    }
                    uVar6 = uVar17 + 3;
                    if (-1 < uVar17) {
                        uVar6 = uVar17;
                    }
                    iVar2 = (uVar6 << 0x20) >> 0x22;
                    uVar9 = ipc_log_string(*(iVar11 + 0x118),"%s: addr 0x%x: 0x%x, 0x%x, 0x%x, 0x%x\n",
                                           "print_bam_pipe_desc_fifo",uVar17 + uVar5,*(uVar16 + (uVar6 >> 2) * 4),
                                           *(uVar16 + (iVar2 + 1) * 4),*(uVar16 + (iVar2 + 2) * 4),
                                           *(uVar16 + (iVar2 + 3) * 4));
                    iVar10 = _segment.ehdr;
                    if (_segment.ehdr != 0) {
                        iVar11 = _segment.ehdr;
                        if (*(_segment.ehdr + 0x118) == 0) {
                            uVar9 = _printk(0x800a50f,"print_bam_pipe_desc_fifo",uVar17 + uVar5,*(uVar16 + iVar2 * 4)
                                            ,*(uVar16 + (iVar2 + 1) * 4),*(uVar16 + (iVar2 + 2) * 4),
                                            *(uVar16 + (iVar2 + 3) * 4));
                            iVar10 = _segment.ehdr;
                            iVar11 = _segment.ehdr;
                        }
                        goto code_r0x08014e80;
                    }
                    iVar11 = 0;
                    uVar17 = uVar17 + 0x10;
                } while (uVar17 < uVar7);
                goto code_r0x08014aa4;
            }
            if (uVar17 == 100) {
                if (((_segment.ehdr != 0) &&
                    (uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s","print_bam_pipe_desc_fifo",
                                            "----- start of data blocks -----\n"), _segment.ehdr != 0)) &&
                   (*(_segment.ehdr + 0x118) == 0)) {
                    uVar9 = _printk(0x8007fbf,"print_bam_pipe_desc_fifo","----- start of data blocks -----\n");
                }
                uVar17 = 0;
                do {
                    iVar10 = _ipc_log_string;
                    uVar6 = uVar17 + 3;
                    if (-1 < uVar17) {
                        uVar6 = uVar17;
                    }
                    uVar6 = *(uVar16 + (uVar6 >> 2) * 4);
                    if ((uVar6 != 0) && (_segment.ehdr != 0)) {
                        uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),"%s: desc addr:0x%x; data addr:0x%x:\n",
                                               "print_bam_pipe_desc_fifo",uVar5 + uVar17,uVar6);
                        if (_segment.ehdr != 0) {
                            iVar11 = *(_segment.ehdr + 0x118);
                            if (iVar11 == 0) {
                                uVar9 = _printk(0x80054a5,"print_bam_pipe_desc_fifo",uVar5 + uVar17,uVar6);
                                if (_segment.ehdr == 0) goto code_r0x08014834;
                                iVar11 = *(_segment.ehdr + 0x118);
                            }
                            puVar18 = uVar6 - iVar10 | 0xffffff8000000000;
                            uVar9 = ipc_log_string(iVar11,"%s: 0x%x, 0x%x, 0x%x, 0x%x\n","print_bam_pipe_desc_fifo",
                                                   *puVar18,puVar18[1],puVar18[2],puVar18[3]);
                            if (_segment.ehdr != 0) {
                                iVar10 = *(_segment.ehdr + 0x118);
                                if (iVar10 == 0) {
                                    uVar9 = _printk(0x8008af6,"print_bam_pipe_desc_fifo",*puVar18,puVar18[1],
                                                    puVar18[2],puVar18[3]);
                                    if (_segment.ehdr == 0) goto code_r0x08014834;
                                    iVar10 = *(_segment.ehdr + 0x118);
                                }
                                uVar9 = ipc_log_string(iVar10,"%s: 0x%x, 0x%x, 0x%x, 0x%x\n",
                                                       "print_bam_pipe_desc_fifo",puVar18[4],puVar18[5],puVar18[6],
                                                       puVar18[7]);
                                if (_segment.ehdr != 0) {
                                    iVar10 = *(_segment.ehdr + 0x118);
                                    if (iVar10 == 0) {
                                        uVar9 = _printk(0x8008af6,"print_bam_pipe_desc_fifo",puVar18[4],puVar18[5],
                                                        puVar18[6],puVar18[7]);
                                        if (_segment.ehdr == 0) goto code_r0x08014834;
                                        iVar10 = *(_segment.ehdr + 0x118);
                                    }
                                    uVar9 = ipc_log_string(iVar10,"%s: 0x%x, 0x%x, 0x%x, 0x%x\n",
                                                           "print_bam_pipe_desc_fifo",puVar18[8],puVar18[9],
                                                           puVar18[10],puVar18[0xb]);
                                    if (_segment.ehdr != 0) {
                                        iVar10 = *(_segment.ehdr + 0x118);
                                        if (iVar10 == 0) {
                                            uVar9 = _printk(0x8008af6,"print_bam_pipe_desc_fifo",puVar18[8],
                                                            puVar18[9],puVar18[10],puVar18[0xb]);
                                            if (_segment.ehdr == 0) goto code_r0x08014834;
                                            iVar10 = *(_segment.ehdr + 0x118);
                                        }
                                        uVar9 = ipc_log_string(iVar10,"%s: 0x%x, 0x%x, 0x%x, 0x%x\n\n",
                                                               "print_bam_pipe_desc_fifo",puVar18[0xc],puVar18[0xd],
                                                               puVar18[0xe],puVar18[0xf]);
                                        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
                                            uVar9 = _printk(0x8006e1d,"print_bam_pipe_desc_fifo",puVar18[0xc],
                                                            puVar18[0xd],puVar18[0xe],puVar18[0xf]);
                                        }
                                    }
                                }
                            }
                        }
                    }
code_r0x08014834:
                    uVar17 = uVar17 + 8;
                } while (uVar17 < uVar7);
                if ((_segment.ehdr == 0) ||
                   (uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s","print_bam_pipe_desc_fifo",
                                           "----- end of data blocks -----\n"), _segment.ehdr == 0))
                goto code_r0x08014aa4;
                if (*(_segment.ehdr + 0x118) == 0) {
                    pcVar15 = "----- end of data blocks -----\n";
code_r0x0801504c:
                    uVar9 = _printk(0x8007fbf,"print_bam_pipe_desc_fifo",pcVar15);
                    if (_segment.ehdr == 0) goto code_r0x08014aa4;
                }
            }
            else {
                uVar9 = sym.bam_read_reg_field.llvm.916431513089089357(uVar6,0x29,arg2 & 0xffffffff,0xffff);
                uVar3 = (uVar17 & 0x1ffffff) * 0x40;
                uVar8 = uVar9;
                uVar1 = uVar8 + uVar3;
                uVar6 = 0;
                if (uVar3 <= uVar8) {
                    uVar6 = uVar8 + (uVar17 & 0x1ffffff) * -0x40;
                }
                if (uVar7 <= uVar1) {
                    uVar1 = uVar7;
                }
                if ((_segment.ehdr != 0) &&
                   (uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s","print_bam_pipe_desc_fifo",
                                           "------------ begin of partial FIFO ------------\n\n"), _segment.ehdr != 0))
                {
                    iVar10 = *(_segment.ehdr + 0x118);
                    if (iVar10 == 0) {
                        uVar9 = _printk(0x8007fbf,"print_bam_pipe_desc_fifo",
                                        "------------ begin of partial FIFO ------------\n\n");
                        if (_segment.ehdr == 0) goto joined_r0x08014bd4;
                        iVar10 = *(_segment.ehdr + 0x118);
                    }
                    uVar9 = ipc_log_string(iVar10,"%s: %s","print_bam_pipe_desc_fifo",
                                           "desc addr; desc content; desc flags\n");
                    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
                        uVar9 = _printk(0x8007fbf,"print_bam_pipe_desc_fifo","desc addr; desc content; desc flags\n");
                    }
                }
joined_r0x08014bd4:
                for (; uVar6 < uVar1; uVar6 = uVar6 + 8) {
                    uVar17 = uVar6 + 3;
                    if (-1 < uVar6) {
                        uVar17 = uVar6;
                    }
                    puVar18 = uVar16 + (uVar17 >> 2) * 4;
                    uVar7 = puVar18[1];
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uVar9 = scnprintf(&uStack_b8,0x28,"0x%x: 0x%x, 0x%x: ",uVar5 + uVar6,*puVar18,puVar18[1]);
                    uVar17 = uVar9;
                    if (uVar7 < 0) {
                        if (0x50 < uVar17) goto code_r0x080150c4;
                        uVar9 = scnprintf(&uStack_b8 + (uVar9 & 0xffffffff),5,"INT ");
                        uVar17 = uVar9 + uVar17;
                    }
                    if ((uVar7 >> 0x1e & 1) != 0) {
                        if (0x50 < uVar17) goto code_r0x080150c4;
                        uVar9 = scnprintf(&uStack_b8 + uVar17,5,"EOT ");
                        uVar17 = uVar9 + uVar17;
                    }
                    if ((uVar7 >> 0x1d & 1) != 0) {
                        if (0x50 < uVar17) goto code_r0x080150c4;
                        uVar9 = scnprintf(&uStack_b8 + uVar17,5,"EOB ");
                        uVar17 = uVar9 + uVar17;
                    }
                    if ((uVar7 >> 0x1c & 1) != 0) {
                        if (0x50 < uVar17) goto code_r0x080150c4;
                        uVar9 = scnprintf(&uStack_b8 + uVar17,5,"NWD ");
                        uVar17 = uVar9 + uVar17;
                    }
                    if ((uVar7 >> 0x1b & 1) != 0) {
                        if (0x50 < uVar17) goto code_r0x080150c4;
                        uVar9 = scnprintf(&uStack_b8 + uVar17,5,"CMD ");
                        uVar17 = uVar9 + uVar17;
                    }
                    if ((uVar7 >> 0x1a & 1) != 0) {
                        if (0x50 < uVar17) goto code_r0x080150c4;
                        uVar9 = scnprintf(&uStack_b8 + uVar17,5,"LCK ");
                        uVar17 = uVar9 + uVar17;
                    }
                    if ((uVar7 >> 0x19 & 1) != 0) {
                        if (0x50 < uVar17) goto code_r0x080150c4;
                        uVar9 = scnprintf(&uStack_b8 + uVar17,5,"UNL ");
                        uVar17 = uVar9 + uVar17;
                    }
                    if ((uVar7 >> 0x18 & 1) != 0) {
                        if (0x50 < uVar17) {
code_r0x080150c4:
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x80150c8);
                            (*pcVar4)();
                        }
                        uVar9 = scnprintf(&uStack_b8 + uVar17,5,"IMM ");
                    }
                    if (((_segment.ehdr != 0) &&
                        (uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s\n","print_bam_pipe_desc_fifo",
                                                &uStack_b8), _segment.ehdr != 0)) && (*(_segment.ehdr + 0x118) == 0)) {
                        uVar9 = _printk(0x8009b94,"print_bam_pipe_desc_fifo",&uStack_b8);
                    }
                }
                if ((_segment.ehdr == 0) ||
                   (uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),"%s: %s","print_bam_pipe_desc_fifo",
                                           "\n------------  end of partial FIFO  ------------\n"), _segment.ehdr == 0))
                goto code_r0x08014aa4;
                if (*(_segment.ehdr + 0x118) == 0) {
                    pcVar15 = "\n------------  end of partial FIFO  ------------\n";
                    goto code_r0x0801504c;
                }
            }
code_r0x08014f64:
            uVar9 = ipc_log_string(*(_segment.ehdr + 0x118),
                                   "%s: \nsps:<desc-end> --- descriptor FIFO of Pipe %d -----\n\n",
                                   "print_bam_pipe_desc_fifo",uVar14);
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
                uVar9 = _printk(0x80054cc,"print_bam_pipe_desc_fifo",uVar14);
            }
            goto code_r0x08014aa4;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (uVar9 = ___ratelimit(obj.print_bam_pipe_desc_fifo._rs.255,"print_bam_pipe_desc_fifo"), uVar9 != 0)))) {
            uVar9 = _printk(0x8009263,"print_bam_pipe_desc_fifo",uVar14);
        }
        if (_segment.ehdr == 0) goto code_r0x08014aa4;
        uVar12 = *(_segment.ehdr + 0x110);
        pcVar15 = "%s: sps: desc FIFO size of Pipe %d is 0\n";
    }
    uVar9 = ipc_log_string(uVar12,pcVar15,"print_bam_pipe_desc_fifo",uVar14);
code_r0x08014aa4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_68) {
        puVar13 = __stack_chk_fail();
        *extraout_x18 = sym.readl;
        log_read_mmio(0x20,puVar13,0x80150d0);
        uVar17 = *puVar13;
        DataMemoryBarrier(0,1);
        log_post_read_mmio(uVar17,0x20,puVar13,0x8015114);
        return uVar17;
    }
    return uVar9;
}


// ===== sym.readl @ 0x080150cc (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80150d0);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8015114);
    return uVar1;
}


// ===== sym.writel @ 0x0801514c (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8015168);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8015194);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080151c8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0801520c

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
    //switch table (4 cases) at 0x8004200
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8015220);
    (*pcVar1)();
}


// ===== sym.sps_bam_driver_init @ 0x08015220 (size 16) =====

ulong sym.sps_bam_driver_init(int64_t arg1)

{
    return 0;
}


// ===== sym.sps_bam_check_irq @ 0x08015230 (size 3052) =====

void sym.sps_bam_check_irq(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t arg2;
    uint32_t arg1_00;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    code *pcVar11;
    int64_t *arg2_00;
    uint32_t uVar12;
    uint64_t arg4;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iVar9 = 0x8000000;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = iVar9;
    if ((1 < obj.logging_option) && (2 < obj.debug_level_option)) {
        if (obj.print_limit_option != 0x0) goto code_r0x08015de4;
        goto code_r0x08015d6c;
    }
    do {
        if ((arg1 != 0) && (*(arg1 + 0x238) < 2)) {
            ipc_log_string(*(arg1 + 0x218),"%s: sps: bam=%pa\n","sps_bam_check_irq",arg1 + 0x18);
        }
        iVar9 = arg1 + 0xe4;
        uVar7 = _raw_spin_lock_irqsave(iVar9);
        if (*(arg1 + 0x338) == '\0') {
            iVar1 = arg1 + 0x18;
            arg1_00 = arg1 + 0xd8;
            piVar2 = arg1 + 0x1f8;
            do {
                uVar12 = *(arg1 + 0xf8);
                if ((*(arg1 + 0xa0) >> 5 & 1) == 0) {
                    uStack_6c = 0;
                    uVar4 = sym.bam_check_irq_source(arg1_00,*(arg1 + 0x80),uVar12,&uStack_6c);
                    if (((1 < *(iVar10 + 0x408)) && (2 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar6 = ___ratelimit(obj.sps_bam_check_irq._rs.7,"sps_bam_check_irq"), iVar6 != 0)))) {
                        _printk(0x800b57b,"sps_bam_check_irq",iVar1,uVar4,uVar12);
                    }
                    if ((arg1 != 0) && (*(arg1 + 0x238) < 2)) {
                        ipc_log_string(*(arg1 + 0x218),"%s: sps:bam=%pa;source=0x%x;mask=0x%x\n","sps_bam_check_irq",
                                       iVar1,uVar4,uVar12);
                    }
                    if (uVar4 == 0) {
                        if (*(arg1 + 0x10) < '\0') {
                            if (((1 < *(iVar10 + 0x408)) && (1 < obj.debug_level_option)) &&
                               ((obj.print_limit_option == 0x0 ||
                                (iVar6 = ___ratelimit(obj.sps_bam_check_irq._rs.10,"sps_bam_check_irq"), iVar6 != 0)))
                               ) {
                                _printk(0x800acd2,"sps_bam_check_irq",iVar1,0);
                            }
                            if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
                                ipc_log_string(*(arg1 + 0x220),"%s: sps: BAM %pa has no source (source = 0x%x)\n",
                                               "sps_bam_check_irq",iVar1,0);
                            }
                            _raw_spin_unlock_irqrestore(iVar9,uVar7);
                            uVar7 = 0xffffffff;
                            goto code_r0x08015cc0;
                        }
                    }
                    else if ((uVar4 < 0) && (*(arg1 + 0x68) != 0)) {
                        if (((1 < *(iVar10 + 0x408)) && (2 < obj.debug_level_option)) &&
                           ((obj.print_limit_option == 0x0 ||
                            (iVar6 = ___ratelimit(obj.sps_bam_check_irq._rs.13,"sps_bam_check_irq"), iVar6 != 0)))) {
                            _printk(0x800bd92,"sps_bam_check_irq",iVar1,uStack_6c);
                        }
                        if ((arg1 != 0) && (*(arg1 + 0x238) < 2)) {
                            ipc_log_string(*(arg1 + 0x218),"%s: sps:bam=%pa;callback for case %d\n",
                                           "sps_bam_check_irq",iVar1,uStack_6c);
                        }
                        pcVar11 = *(arg1 + 0x68);
                        __cfi_slowpath_diag(0xde5889742f18337f,pcVar11,0x8004160);
                        (*pcVar11)(uStack_6c,*(arg1 + 0x70));
                    }
                    uVar12 = *(arg1 + 0xf8) & uVar4;
                }
                else {
                    if (((1 < *(iVar10 + 0x408)) && (2 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar6 = ___ratelimit(obj.sps_bam_check_irq._rs.16,"sps_bam_check_irq"), iVar6 != 0)))) {
                        _printk(0x8004817,"sps_bam_check_irq",iVar1,uVar12);
                    }
                    if ((arg1 != 0) && (*(arg1 + 0x238) < 2)) {
                        ipc_log_string(*(arg1 + 0x218),"%s: sps:MTI:bam=%pa;source=0x%x\n","sps_bam_check_irq",iVar1
                                       ,uVar12);
                    }
                }
                arg2_00 = *piVar2;
                if (arg2_00 == piVar2) {
                    if (uVar12 != 0) goto code_r0x08015a04;
                }
                else {
                    do {
                        if ((((arg2_00 != 0xffffffff77777777) && (arg2_00 != NULL)) && (arg2_00[0x50] == '\0')) &&
                           ((*(arg2_00 + 0x18) & uVar12) != 0)) {
                            uVar3 = *(arg2_00 + 0xbc);
                            uVar4 = sym.bam_read_reg.llvm.916431513089089357(arg1_00,0x1f,uVar3);
                            arg4 = uVar4;
                            sym.bam_write_reg.llvm.916431513089089357(arg1_00,0x20,uVar3,arg4);
                            if (((1 < *(iVar10 + 0x408)) && (3 < obj.debug_level_option)) &&
                               ((obj.print_limit_option == 0x0 ||
                                (iVar6 = ___ratelimit(obj.pipe_handler._rs,"pipe_handler"), iVar6 != 0)))) {
                                _printk(0x800bb84,"pipe_handler",iVar1,uVar3,arg4);
                            }
                            if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                                ipc_log_string(*(arg1 + 0x210),"%s: sps: bam %pa.pipe %d.status=0x%x\n","pipe_handler"
                                               ,iVar1,uVar3,arg4);
                            }
                            uVar4 = *(arg2_00 + 0xc4) & uVar4;
                            if (uVar4 != 0) {
                                if (((uVar4 & 0x21) != 0) && ((*(arg2_00 + 0x17) >> 4 & 1) == 0)) {
                                    sym.pipe_handler_eot(arg1,arg2_00);
                                    if (arg2_00[0x4e] != 0) {
                                        iVar6 = 1;
                                        if ((uVar4 & 0x20) == 0) {
                                            iVar6 = 2;
                                        }
                                        arg2_00[0x4b] = 0;
                                        arg2_00[0x4d] = 0;
                                        arg2_00[0x4c] = 0;
                                        arg2_00[0x4a] = 0;
                                        arg2_00[0x49] = 0;
                                        arg2_00[0x48] = 0;
                                        iVar8 = arg2_00[(iVar6 - 1U) * 4 + 0x25];
                                        *(arg2_00 + 0x4b) = iVar6;
                                        arg2_00[0x4a] = iVar8;
                                        sym.trigger_event(arg1,arg2_00 + (iVar6 - 1U) * 4 + 0x22,arg2_00 + 0x48);
                                    }
                                    uVar4 = uVar4 & 0xffffffde;
                                    if (uVar4 == 0) goto code_r0x080158f4;
                                }
                                if ((uVar4 >> 2 & 1) != 0) {
                                    if (*(arg2_00 + 0xe4) != 0) {
                                        arg2 = *(arg2_00 + 0xbc);
                                        if (((1 < *(iVar10 + 0x408)) && (1 < obj.debug_level_option)) &&
                                           ((obj.print_limit_option == 0x0 ||
                                            (iVar6 = ___ratelimit(obj.pipe_handler_wakeup._rs,"pipe_handler_wakeup"),
                                            iVar6 != 0)))) {
                                            _printk(0x8009905,"pipe_handler_wakeup",iVar1,arg2,*(arg2_00 + 0xc4));
                                        }
                                        if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
                                            ipc_log_string(*(arg1 + 0x220),
                                                           "%s: sps:BAM:%pa pipe %d wake_up_is_one_shot; irq_mask:0x%x\n"
                                                           ,"pipe_handler_wakeup",iVar1,arg2,*(arg2_00 + 0xc4));
                                        }
                                        *(arg2_00 + 0xc4) = *(arg2_00 + 0xc4) & 0xfffffffb;
                                        sym.pipe_set_irq(arg1,arg2,*(arg2_00 + 0x19));
                                    }
                                    arg2_00[0x4b] = 0;
                                    arg2_00[0x4d] = 0;
                                    arg2_00[0x4c] = 0;
                                    arg2_00[0x49] = 0;
                                    arg2_00[0x48] = 0;
                                    *(arg2_00 + 0x4b) = 4;
                                    arg2_00[0x4a] = arg2_00[0x31];
                                    sym.trigger_event(arg1,arg2_00 + 0x2e,arg2_00 + 0x48);
                                    uVar4 = uVar4 & 0xfffffffb;
                                    if (uVar4 == 0) goto code_r0x080158f4;
                                }
                                if ((uVar4 >> 1 & 1) != 0) {
                                    arg2_00[0x4b] = 0;
                                    arg2_00[0x4d] = 0;
                                    arg2_00[0x4c] = 0;
                                    arg2_00[0x49] = 0;
                                    arg2_00[0x48] = 0;
                                    *(arg2_00 + 0x4b) = 6;
                                    arg2_00[0x4a] = arg2_00[0x39];
                                    sym.trigger_event(arg1,arg2_00 + 0x36,arg2_00 + 0x48);
                                    uVar4 = uVar4 & 0xfffffffd;
                                    if (uVar4 == 0) goto code_r0x080158f4;
                                }
                                if ((uVar4 >> 3 & 1) != 0) {
                                    arg2_00[0x4b] = 0;
                                    arg2_00[0x4d] = 0;
                                    arg2_00[0x4c] = 0;
                                    arg2_00[0x49] = 0;
                                    arg2_00[0x48] = 0;
                                    *(arg2_00 + 0x4b) = 3;
                                    arg2_00[0x4a] = arg2_00[0x2d];
                                    sym.trigger_event(arg1,arg2_00 + 0x2a,arg2_00 + 0x48);
                                    uVar4 = uVar4 & 0xfffffff7;
                                    if (uVar4 == 0) goto code_r0x080158f4;
                                }
                                if (((uVar4 >> 6 & 1) != 0) && (obj.enhd_pipe != 0x0)) {
                                    if ((*(iVar10 + 0x408) != '\x01') &&
                                       ((obj.print_limit_option < 3 ||
                                        (iVar6 = ___ratelimit(obj.pipe_handler._rs.314,"pipe_handler"), iVar6 != 0))))
                                    {
                                        _printk(0x8004a62,"pipe_handler",iVar1,uVar3,uVar4);
                                    }
                                    if (arg1 != 0) {
                                        ipc_log_string(*(arg1 + 0x228),
                                                       "%s: sps:bam %pa ;pipe 0x%x irq status=0x%x\nsps: BAM_PIPE_IRQ_RST_ERROR\n"
                                                       ,"pipe_handler",iVar1,uVar3,uVar4);
                                    }
                                    sym.bam_output_register_content(arg1_00,*(arg1 + 0x80));
                                    arg2_00[0x4b] = 0;
                                    arg2_00[0x4d] = 0;
                                    arg2_00[0x4c] = 0;
                                    arg2_00[0x49] = 0;
                                    arg2_00[0x48] = 0;
                                    *(arg2_00 + 0x4b) = 8;
                                    arg2_00[0x4a] = arg2_00[0x41];
                                    sym.trigger_event(arg1,arg2_00 + 0x3e,arg2_00 + 0x48);
                                    uVar4 = uVar4 & 0xffffffbf;
                                    if (uVar4 == 0) goto code_r0x080158f4;
                                }
                                if (((uVar4 >> 7 & 1) != 0) && (obj.enhd_pipe != 0x0)) {
                                    if ((*(iVar10 + 0x408) != '\x01') &&
                                       ((obj.print_limit_option < 3 ||
                                        (iVar6 = ___ratelimit(obj.pipe_handler._rs.317,"pipe_handler"), iVar6 != 0))))
                                    {
                                        _printk(0x8004e62,"pipe_handler",iVar1,uVar3,uVar4);
                                    }
                                    if (arg1 != 0) {
                                        ipc_log_string(*(arg1 + 0x228),
                                                       "%s: sps:bam %pa ;pipe 0x%x irq status=0x%x\nsps: BAM_PIPE_IRQ_HRESP_ERROR\n"
                                                       ,"pipe_handler",iVar1,uVar3,uVar4);
                                    }
                                    sym.bam_output_register_content(arg1_00,*(arg1 + 0x80));
                                    arg2_00[0x4b] = 0;
                                    arg2_00[0x4d] = 0;
                                    arg2_00[0x4c] = 0;
                                    arg2_00[0x49] = 0;
                                    arg2_00[0x48] = 0;
                                    *(arg2_00 + 0x4b) = 9;
                                    arg2_00[0x4a] = arg2_00[0x45];
                                    sym.trigger_event(arg1,arg2_00 + 0x42,arg2_00 + 0x48);
                                    uVar4 = uVar4 & 0xffffff7f;
                                    if (uVar4 == 0) goto code_r0x080158f4;
                                }
                                if ((uVar4 & 7) != 0) {
                                    arg2_00[0x4b] = 0;
                                    arg2_00[0x4d] = 0;
                                    arg2_00[0x4c] = 0;
                                    arg2_00[0x49] = 0;
                                    arg2_00[0x48] = 0;
                                    *(arg2_00 + 0x4b) = 7;
                                    arg2_00[0x4a] = arg2_00[0x3d];
                                    sym.trigger_event(arg1,arg2_00 + 0x3a,arg2_00 + 0x48);
                                }
                            }
code_r0x080158f4:
                            uVar12 = uVar12 & (*(arg2_00 + 0x18) ^ 0xffffffff);
                        }
                        if (uVar12 == 0) goto code_r0x08015a6c;
                        arg2_00 = *arg2_00;
                    } while (arg2_00 != piVar2);
code_r0x08015a04:
                    if ((*(iVar10 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar6 = ___ratelimit(obj.sps_bam_check_irq._rs.19,"sps_bam_check_irq"), iVar6 != 0)))) {
                        _printk(0x8009358,"sps_bam_check_irq",iVar1,uVar12);
                    }
                    if (arg1 != 0) {
                        ipc_log_string(*(arg1 + 0x228),"%s: sps:IRQ from BAM %pa inactive pipe(s) 0x%x\n",
                                       "sps_bam_check_irq",iVar1,uVar12);
                    }
                    *(arg1 + 0x208) = *(arg1 + 0x208) + 1;
                }
code_r0x08015a6c:
                if (-1 < *(arg1 + 0x10)) break;
                uVar12 = *(arg1 + 0xf8);
                uStack_6c = 0;
                iVar6 = sym.bam_check_irq_source(arg1_00,*(arg1 + 0x80),uVar12,&uStack_6c);
                if (((1 < *(iVar10 + 0x408)) && (2 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar5 = ___ratelimit(obj.sps_bam_check_irq._rs.22,"sps_bam_check_irq"), iVar5 != 0)))) {
                    _printk(0x800c367,"sps_bam_check_irq",iVar1,iVar6,uVar12);
                }
                if ((arg1 != 0) && (*(arg1 + 0x238) < 2)) {
                    ipc_log_string(*(arg1 + 0x218),
                                   "%s: sps:check if there is any new IRQ coming:bam=%pa;source=0x%x;mask=0x%x\n",
                                   "sps_bam_check_irq",iVar1,iVar6,uVar12);
                }
                if ((iVar6 < 0) && (*(arg1 + 0x68) != 0)) {
                    if (((1 < *(iVar10 + 0x408)) && (2 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar5 = ___ratelimit(obj.sps_bam_check_irq._rs.25,"sps_bam_check_irq"), iVar5 != 0)))) {
                        _printk(0x800bd92,"sps_bam_check_irq",iVar1,uStack_6c);
                    }
                    if ((arg1 != 0) && (*(arg1 + 0x238) < 2)) {
                        ipc_log_string(*(arg1 + 0x218),"%s: sps:bam=%pa;callback for case %d\n","sps_bam_check_irq",
                                       iVar1,uStack_6c);
                    }
                    pcVar11 = *(arg1 + 0x68);
                    __cfi_slowpath_diag(0xde5889742f18337f,pcVar11,0x8004180);
                    (*pcVar11)(uStack_6c,*(arg1 + 0x70));
                }
            } while (iVar6 != 0);
        }
        else {
            if ((*(iVar10 + 0x408) != '\x01') &&
               ((obj.print_limit_option < 3 ||
                (iVar6 = ___ratelimit(obj.sps_bam_check_irq._rs.4,"sps_bam_check_irq"), iVar6 != 0)))) {
                _printk(0x80097aa,"sps_bam_check_irq",arg1 + 0x18);
            }
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x228),"%s: sps:IRQ from BAM %pa can\'t be currently served\n",
                               "sps_bam_check_irq",arg1 + 0x18);
            }
        }
        _raw_spin_unlock_irqrestore(iVar9,uVar7);
        uVar7 = 0;
        iVar9 = iVar10;
code_r0x08015cc0:
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail(uVar7);
code_r0x08015de4:
        iVar6 = ___ratelimit(obj.sps_bam_check_irq._rs,"sps_bam_check_irq");
        iVar10 = iVar9;
        if (iVar6 != 0) {
code_r0x08015d6c:
            _printk(0x800a919,"sps_bam_check_irq",arg1 + 0x18);
            iVar10 = iVar9;
        }
    } while( true );
}


// ===== sym.sps_bam_enable @ 0x08015e1c (size 2856) =====

void sym.sps_bam_enable(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t arg1_00;
    int iVar3;
    int iVar4;
    ulong uVar5;
    char *pcVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    uint32_t uVar10;
    uint uVar11;
    uint32_t *puVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uVar5 = 0;
    iStack_4c = 0;
    if ((*(arg1 + 0xa0) >> 3 & 1) != 0) goto code_r0x080165cc;
    if (((*(arg1 + 0x78) ^ 0xffffffff) & 0x1d) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar3 = ___ratelimit(obj.sps_bam_enable._rs,"sps_bam_enable"), iVar3 != 0)
            ))) {
            _printk(0x8004d15,"sps_bam_enable",arg1 + 0x18);
        }
        if (arg1 == 0) goto code_r0x080165c8;
        uVar5 = *(arg1 + 0x228);
        pcVar6 = "%s: sps:No local access to BAM %pa\n";
        goto code_r0x08015eb8;
    }
    if (((*(arg1 + 0x10) >> 1 & 1) == 0) && (iVar3 = *(arg1 + 0x2c), iVar3 != 0)) {
        if ((*(arg1 + 0x10) >> 7 & 1) == 0) {
            iVar3 = request_threaded_irq
                              (iVar3,sym.bam_isr.9faaddcfa9895f87836a89dfb5e9db4a.cfi_jt,0,4,0x80050cc,arg1);
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.sps_bam_enable._rs.32,"sps_bam_enable"), iVar4 != 0)))) {
                _printk(0x80069d1,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0x2c));
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
                pcVar6 = "%s: sps:BAM %pa uses level for IRQ# %d\n";
code_r0x08016158:
                ipc_log_string(*(arg1 + 0x228),pcVar6,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0x2c));
            }
        }
        else {
            iVar3 = request_threaded_irq
                              (iVar3,sym.bam_isr.9faaddcfa9895f87836a89dfb5e9db4a.cfi_jt,0,1,0x80050cc,arg1);
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.sps_bam_enable._rs.29,"sps_bam_enable"), iVar4 != 0)))) {
                _printk(0x800a954,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0x2c));
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
                pcVar6 = "%s: sps:BAM %pa uses edge for IRQ# %d\n";
                goto code_r0x08016158;
            }
        }
        if (iVar3 == 0) {
            *(arg1 + 0xa0) = *(arg1 + 0xa0) | 4;
            if ((*(arg1 + 0x10) >> 3 & 1) != 0) {
                iVar3 = irq_set_irq_wake(*(arg1 + 0x2c),1);
                if (iVar3 != 0) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.41,"sps_bam_enable"), iVar3 != 0)))) {
                        _printk(0x800483a,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0x2c));
                    }
                    if (arg1 == 0) goto code_r0x080165c8;
                    uVar5 = *(arg1 + 0x228);
                    uVar11 = *(arg1 + 0x2c);
                    pcVar6 = "%s: sps:Fail to enable wakeup irq for BAM %pa IRQ %d\n";
                    goto code_r0x080161c8;
                }
                if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.44,"sps_bam_enable"), iVar3 != 0)))) {
                    _printk(0x800781e,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0x2c));
                }
                if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
                    ipc_log_string(*(arg1 + 0x228),"%s: sps:Enable wakeup irq for BAM %pa IRQ %d\n","sps_bam_enable",
                                   arg1 + 0x18,*(arg1 + 0x2c));
                }
            }
            iVar7 = 0x16;
            goto code_r0x08015f3c;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.38,"sps_bam_enable"), iVar3 != 0)))) {
            _printk(0x8004d3b,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0x2c));
        }
        if (arg1 == 0) goto code_r0x080165c8;
        uVar5 = *(arg1 + 0x228);
        uVar11 = *(arg1 + 0x2c);
        pcVar6 = "%s: sps:Failed to enable BAM %pa IRQ %d\n";
    }
    else {
        iVar7 = 0;
        *(arg1 + 0xa0) = *(arg1 + 0xa0) & 0xfffffffb;
code_r0x08015f3c:
        arg1_00 = arg1 + 0xd8;
        iStack_4c = 0;
        if ((*(arg1 + 0x78) & 1) == 0) {
            iVar3 = sym.bam_init(arg1_00,*(arg1 + 0x80),*(arg1 + 0x34),iVar7);
        }
        else {
            iVar3 = sym.bam_check(arg1_00,arg1 + 0xe0,*(arg1 + 0x80),&iStack_4c);
        }
        if (iVar3 == 0) {
            uVar9 = *(arg1 + 0xe0);
            if ((((~*(arg1 + 0x78) & 3) == 0) && (*(arg1 + 0x80) == 0)) && (uVar9 < 3)) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.50,"sps_bam_enable"), iVar3 != 0)))) {
                    _printk(0x800a597,"sps_bam_enable");
                }
                if (arg1 == 0) goto code_r0x080165c8;
                ipc_log_string(*(arg1 + 0x228),"%s: sps: EE for satellite BAM must be set to non-zero\n",
                               "sps_bam_enable");
                goto code_r0x080165c8;
            }
            if ((((*(arg1 + 0xa0) >> 2 & 1) != 0) && ((*(arg1 + 0x78) & 1) != 0)) && (uVar9 < 3)) {
                if ((*(arg1 + 0x88) == 0) || (*(arg1 + 0x88) == -0x21524111)) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.53,"sps_bam_enable"), iVar3 != 0)))) {
                        _printk(0x8006e5c,"sps_bam_enable",arg1 + 0x18);
                    }
                    if (arg1 == 0) goto code_r0x080165c8;
                    uVar5 = *(arg1 + 0x228);
                    pcVar6 = "%s: sps:MTI destination address not specified for BAM %pa\n";
                    goto code_r0x08015eb8;
                }
                *(arg1 + 0xa0) = *(arg1 + 0xa0) | 0x20;
            }
            if (iStack_4c != 0) {
                *(arg1 + 0x30) = iStack_4c;
                if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                    iVar3 = iStack_4c;
                    if (obj.print_limit_option != 0x0) {
                        iVar3 = ___ratelimit(obj.sps_bam_enable._rs.56,"sps_bam_enable");
                        if (iVar3 == 0) goto code_r0x08016078;
                        iVar3 = *(arg1 + 0x30);
                    }
                    _printk(0x8005126,"sps_bam_enable",arg1 + 0x18,iVar3);
                }
code_r0x08016078:
                if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
                    ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM %pa number of pipes reported by hw: %d\n",
                                   "sps_bam_enable",arg1 + 0x18,*(arg1 + 0x30));
                }
            }
            if (uVar9 < 3) {
                if (((*(arg1 + 0x78) & 1) == 0) && (uVar9 = *(arg1 + 0x30), uVar9 != 0)) {
                    uVar10 = 0;
                    uVar13 = 1;
                    do {
                        if ((*(arg1 + 0x7c) & uVar13) != 0) {
                            sym.bam_write_reg.llvm.916431513089089357(arg1_00,0x21,uVar10,0);
                            sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,8,0,1 << (uVar10 & 0x1f));
                            uVar9 = *(arg1 + 0x30);
                        }
                        uVar10 = uVar10 + 1;
                        uVar13 = uVar13 << 1;
                    } while (uVar10 < uVar9);
                }
            }
            else {
                uVar9 = *(arg1 + 0x80);
                uVar8 = uVar9;
                if (3 < uVar9) {
                    if (obj.logging_option != 0x1) {
                        if (2 < obj.print_limit_option) {
                            iVar3 = ___ratelimit(obj.sps_bam_enable._rs.59,"sps_bam_enable");
                            if (iVar3 == 0) goto code_r0x080162b0;
                            uVar8 = *(arg1 + 0x80);
                        }
                        _printk(0x8006462,"sps_bam_enable",arg1 + 0x18,uVar8);
                    }
code_r0x080162b0:
                    if (arg1 == 0) goto code_r0x080165c8;
                    uVar5 = *(arg1 + 0x228);
                    uVar11 = *(arg1 + 0x80);
                    pcVar6 = "%s: sps:Invalid EE BAM %pa: %d\n";
                    goto code_r0x080161c8;
                }
                if (*(arg1 + 0x8c) == 0xa434553) {
                    puVar12 = *(arg1 + 0x90);
                    if (puVar12 == NULL) {
                        if (obj.logging_option == 0x1) goto code_r0x08016404;
                        if (2 < obj.print_limit_option) goto code_r0x0801687c;
                        goto code_r0x080163ec;
                    }
                    *(arg1 + 0x7c) = ~puVar12[uVar8 * 2];
                    if ((*(arg1 + 0x78) & 1) == 0) {
                        uVar10 = *puVar12;
                        uVar13 = puVar12[2];
                        if ((uVar13 & uVar10) != 0) {
                            uVar11 = 0;
                            uVar5 = 1;
code_r0x08016560:
                            if ((obj.logging_option != 0x1) &&
                               ((obj.print_limit_option < 3 ||
                                (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.65,"sps_bam_enable"), iVar3 != 0)))) {
                                _printk(0x8008b9c,"sps_bam_enable",arg1 + 0x18,uVar11,uVar5);
                            }
                            if (arg1 == 0) goto code_r0x080165c8;
                            ipc_log_string(*(arg1 + 0x228),
                                           "%s: sps:Overlapping pipe assignments for BAM %pa: EEs %d and %d\n",
                                           "sps_bam_enable",arg1 + 0x18,uVar11,uVar5);
                            goto code_r0x080165c8;
                        }
                        uVar1 = puVar12[4];
                        if ((uVar1 & uVar10) != 0) {
                            uVar11 = 0;
                            uVar5 = 2;
                            goto code_r0x08016560;
                        }
                        uVar2 = puVar12[6];
                        if ((uVar2 & uVar10) != 0) {
                            uVar11 = 0;
                            uVar5 = 3;
                            goto code_r0x08016560;
                        }
                        if ((uVar1 & uVar13) != 0) {
                            uVar5 = 2;
                            uVar11 = 1;
                            goto code_r0x08016560;
                        }
                        if ((uVar2 & uVar13) != 0) {
                            uVar5 = 3;
                            uVar11 = 1;
                            goto code_r0x08016560;
                        }
                        if ((uVar2 & uVar1) != 0) {
                            uVar5 = 3;
                            uVar11 = 2;
                            goto code_r0x08016560;
                        }
                        sym.bam_security_init(arg1_00,0,puVar12[1],uVar10 & 0x7fffffff | (uVar9 == 0) << 0x1f);
                        sym.bam_security_init
                                  (arg1_00,1,puVar12[3],puVar12[2] & 0x7fffffff | (*(arg1 + 0x80) == 1) << 0x1f);
                        sym.bam_security_init
                                  (arg1_00,2,puVar12[5],puVar12[4] & 0x7fffffff | (*(arg1 + 0x80) == 2) << 0x1f);
                        sym.bam_security_init
                                  (arg1_00,3,puVar12[7],puVar12[6] & 0x7fffffff | (*(arg1 + 0x80) == 3) << 0x1f);
                    }
                }
            }
            iVar3 = *(arg1 + 0x9c);
            *(arg1 + 0xa0) = *(arg1 + 0xa0) | 8;
            if (*(arg1 + 0x98) == '\0') {
                if (iVar3 != 0) goto code_r0x080166dc;
code_r0x080166e4:
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 2 ||
                    (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.68,"sps_bam_enable"), iVar3 != 0)))) {
                    _printk(0x800515c,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0xd8),*(arg1 + 0xe0),*(arg1 + 0x30));
                }
                if (arg1 != 0) {
code_r0x0801672c:
                    ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM %pa (va:0x%pK) enabled: ver:0x%x, number of pipes:%d\n"
                                   ,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0xd8),*(arg1 + 0xe0),*(arg1 + 0x30));
                }
            }
            else {
                if (iVar3 != 0) {
code_r0x080166dc:
                    *(arg1 + 0x9c) = iVar3 + -1;
                    goto code_r0x080166e4;
                }
                if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.71,"sps_bam_enable"), iVar3 != 0)))) {
                    _printk(0x800515c,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0xd8),*(arg1 + 0xe0),*(arg1 + 0x30));
                }
                if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) goto code_r0x0801672c;
            }
            uVar5 = 0;
            goto code_r0x080165cc;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.sps_bam_enable._rs.47,"sps_bam_enable"), iVar3 != 0)))) {
            _printk(0x800c3b5,"sps_bam_enable",arg1 + 0x18,*(arg1 + 0x2c));
        }
        if (arg1 == 0) goto code_r0x080165c8;
        uVar5 = *(arg1 + 0x228);
        uVar11 = *(arg1 + 0x2c);
        pcVar6 = "%s: sps:Fail to init BAM %pa IRQ %d\n";
    }
code_r0x080161c8:
    ipc_log_string(uVar5,pcVar6,"sps_bam_enable",arg1 + 0x18,uVar11);
    uVar5 = 0xffffffff;
code_r0x080165cc:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_48) {
        __stack_chk_fail(uVar5);
code_r0x0801687c:
        iVar3 = ___ratelimit(obj.sps_bam_enable._rs.62,"sps_bam_enable");
        if (iVar3 != 0) {
code_r0x080163ec:
            _printk(0x8009805,"sps_bam_enable",arg1 + 0x18);
        }
code_r0x08016404:
        if (arg1 == 0) {
code_r0x080165c8:
            uVar5 = 0xffffffff;
        }
        else {
            uVar5 = *(arg1 + 0x228);
            pcVar6 = "%s: sps:EE config table is not specified for BAM %pa\n";
code_r0x08015eb8:
            ipc_log_string(uVar5,pcVar6,"sps_bam_enable",arg1 + 0x18);
            uVar5 = 0xffffffff;
        }
    }
    return;
}


// ===== sym.bam_isr @ 0x08016944 (size 956) =====

ulong sym.bam_isr(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    code *pcVar4;
    ulong unaff_x30;
    char acStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uVar3 = arg1 & 0xffffffff;
    if ((1 < obj.logging_option) && (2 < obj.debug_level_option)) {
        if (obj.print_limit_option != 0x0) goto code_r0x08016c90;
        goto code_r0x08016b9c;
    }
    while( true ) {
        if ((arg2 != NULL) && (*(arg2 + 0x238) < 2)) {
            ipc_log_string(*(arg2 + 0x218),"%s: sps: bam:%pa; IRQ #:%d\n","bam_isr",arg2 + 0x18,uVar3);
        }
        if (*(arg2 + 0x10) < '\0') {
            pcVar4 = *(arg2 + 0x68);
            if (pcVar4 == NULL) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.bam_isr._rs.277,"bam_isr"), iVar2 != 0)))
                   ) {
                    _printk(0x80078f0,"bam_isr",arg2 + 0x18);
                }
                if (arg2 != NULL) {
                    ipc_log_string(*(arg2 + 0x228),
                                   "%s: sps: Client of BAM %pa requires confirmation but does not register callback\n",
                                   "bam_isr",arg2 + 0x18);
                }
            }
            else {
                acStack_3c[0] = '\0';
                __cfi_slowpath_diag(0xde5889742f18337f,pcVar4,0x80041a0);
                (*pcVar4)(4,acStack_3c);
                if (acStack_3c[0] == '\0') {
                    if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar2 = ___ratelimit(obj.bam_isr._rs.274,"bam_isr"), iVar2 != 0)))) {
                        _printk(0x800a995,"bam_isr",arg2 + 0x18,uVar3);
                    }
                    if ((arg2 != NULL) && (*(arg2 + 0x238) < 2)) {
                        ipc_log_string(*(arg2 + 0x218),
                                       "%s: sps: BAM is not ready and thus skip IRQ for bam:%pa IRQ #:%d\n","bam_isr",
                                       arg2 + 0x18,uVar3);
                    }
                }
                else {
                    if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar2 = ___ratelimit(obj.bam_isr._rs.268,"bam_isr"), iVar2 != 0)))) {
                        _printk(0x8006fe0,"bam_isr",arg2 + 0x18,uVar3);
                    }
                    if ((arg2 != NULL) && (*(arg2 + 0x238) < 2)) {
                        ipc_log_string(*(arg2 + 0x218),"%s: sps: handle IRQ for bam:%pa IRQ #:%d\n","bam_isr",
                                       arg2 + 0x18,uVar3);
                    }
                    iVar2 = sym.sps_bam_check_irq(arg2);
                    if (iVar2 != 0) {
                        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                           ((obj.print_limit_option == 0x0 ||
                            (iVar2 = ___ratelimit(obj.bam_isr._rs.271,"bam_isr"), iVar2 != 0)))) {
                            _printk(0x800659e,"bam_isr",arg2 + 0x18,uVar3);
                        }
                        if ((arg2 != NULL) && (*(arg2 + 0x238) < 3)) {
                            ipc_log_string(*(arg2 + 0x220),"%s: sps: callback bam:%pa IRQ #:%d to poll the pipes\n",
                                           "bam_isr",arg2 + 0x18,uVar3);
                        }
                    }
                    arg2 = *(arg2 + 0x68);
                    __cfi_slowpath_diag(0xde5889742f18337f,arg2,0x80041c0);
                    (*arg2)(5,acStack_3c);
                }
            }
        }
        else {
            sym.sps_bam_check_irq(arg2);
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
code_r0x08016c90:
        iVar2 = ___ratelimit(obj.bam_isr._rs,"bam_isr");
        if (iVar2 != 0) {
code_r0x08016b9c:
            _printk(0x8006580,"bam_isr",arg2 + 0x18,uVar3);
        }
    }
    return 1;
}


// ===== sym.sps_bam_disable @ 0x08016d00 (size 460) =====

uint sym.sps_bam_disable(int64_t arg1)

{
    code cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 0xa0);
    if ((uVar3 >> 3 & 1) != 0) {
        if ((~*(arg1 + 0x78) & 0x1d) == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_bam_disable._rs,"sps_bam_disable"), iVar2 != 0)))) {
                _printk(0x8004d15,"sps_bam_disable",arg1 + 0x18);
            }
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x228),"%s: sps:No local access to BAM %pa\n","sps_bam_disable",arg1 + 0x18);
                return 0xffffffff;
            }
            return 0xffffffff;
        }
        if ((*(arg1 + 0x78) & 1) == 0) {
            if ((uVar3 >> 2 & 1) != 0) {
                sym.bam_exit(arg1 + 0xd8,*(arg1 + 0x80));
                uVar3 = *(arg1 + 0xa0);
                if (((uVar3 >> 2 & 1) != 0) && (*(arg1 + 0x2c) != 0)) {
                    free_irq(*(arg1 + 0x2c),arg1);
                    uVar3 = *(arg1 + 0xa0);
                }
                uVar3 = uVar3 & 0xfffffffb;
            }
            cVar1 = obj.logging_option;
            *(arg1 + 0xa0) = uVar3 & 0xfffffff7;
            if (((1 < cVar1) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_bam_disable._rs.72,"sps_bam_disable"), iVar2 != 0)))) {
                _printk(0x8009bc2,"sps_bam_disable",arg1 + 0x18);
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
                ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM %pa disabled\n","sps_bam_disable",arg1 + 0x18);
            }
        }
        else {
            *(arg1 + 0xa0) = uVar3 & 0xfffffff7;
            if ((uVar3 >> 2 & 1) != 0) {
                if (*(arg1 + 0x2c) == 0) {
                    return 0;
                }
                free_irq(*(arg1 + 0x2c),arg1);
                *(arg1 + 0xa0) = *(arg1 + 0xa0) & 0xfffffffb;
                return 0;
            }
        }
    }
    return 0;
}


// ===== sym.sps_bam_device_init @ 0x08016ecc (size 664) =====

ulong sym.sps_bam_device_init(int64_t arg1)

{
    code cVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    uint uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_bam_device_init._rs,"sps_bam_device_init"), iVar2 != 0)))) {
            _printk(0x8004389,"sps_bam_device_init");
        }
        if (arg1 == 0) {
            return 0xffffffff;
        }
        uVar3 = *(arg1 + 0x228);
        pcVar4 = "%s: sps: NULL BAM virtual address\n";
        goto code_r0x08016ffc;
    }
    *(arg1 + 0xd8) = *(arg1 + 0x20);
    cVar1 = obj.logging_option;
    if (*(arg1 + 0x30) == 0) {
        *(arg1 + 0x30) = 0x1f;
        if ((1 < cVar1) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar5 = 0x1f;
            }
            else {
                iVar2 = ___ratelimit(obj.sps_bam_device_init._rs.77,"sps_bam_device_init");
                if (iVar2 == 0) goto code_r0x08017038;
                uVar5 = *(arg1 + 0x30);
            }
            _printk(0x8005509,"sps_bam_device_init",arg1 + 0x18,uVar5);
        }
code_r0x08017038:
        if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
            ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM %pa: assuming max number of pipes: %d\n","sps_bam_device_init"
                           ,arg1 + 0x18,*(arg1 + 0x30));
        }
    }
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x338) = 0;
    *(arg1 + 0x1f8) = arg1 + 0x1f8;
    *(arg1 + 0x200) = arg1 + 0x1f8;
    *(arg1 + 0xe4) = 0;
    if (((*(arg1 + 0x10) & 1) == 0) || (iVar2 = sym.sps_bam_enable(arg1), iVar2 == 0)) {
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar2 = ___ratelimit(obj.sps_bam_device_init._rs.83,"sps_bam_device_init"), iVar2 != 0)))) {
            _printk(0x80043ae,"sps_bam_device_init",arg1 + 0x18,*(arg1 + 0x2c));
        }
        if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
            ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM device: phys %pa IRQ %d\n","sps_bam_device_init",arg1 + 0x18
                           ,*(arg1 + 0x2c));
        }
        return 0;
    }
    if ((obj.logging_option != 0x1) &&
       ((obj.print_limit_option < 3 ||
        (iVar2 = ___ratelimit(obj.sps_bam_device_init._rs.80,"sps_bam_device_init"), iVar2 != 0)))) {
        _printk(0x800ad18,"sps_bam_device_init");
    }
    if (arg1 == 0) {
        return 0xffffffff;
    }
    uVar3 = *(arg1 + 0x228);
    pcVar4 = "%s: sps: Fail to enable bam device\n";
code_r0x08016ffc:
    ipc_log_string(uVar3,pcVar4,"sps_bam_device_init");
    return 0xffffffff;
}


// ===== sym.sps_bam_device_de_init @ 0x08017164 (size 200) =====

void sym.sps_bam_device_de_init(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar1 = ___ratelimit(obj.sps_bam_device_de_init._rs,"sps_bam_device_de_init"), iVar1 != 0)))) {
        _printk(0x800983d,"sps_bam_device_de_init",arg1 + 0x18,*(arg1 + 0x2c));
    }
    if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
        ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM device DEINIT: phys %pa IRQ %d\n","sps_bam_device_de_init",
                       arg1 + 0x18,*(arg1 + 0x2c));
    }
    sym.sps_bam_disable(arg1);
    return;
}


// ===== sym.sps_bam_reset @ 0x0801722c (size 432) =====

ulong sym.sps_bam_reset(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar2 = ___ratelimit(obj.sps_bam_reset._rs,"sps_bam_reset"), iVar2 != 0))))
    {
        _printk(0x800b18a,"sps_bam_reset",arg1 + 0x18,*(arg1 + 0x2c));
    }
    if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
        ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM device RESET: phys %pa IRQ %d\n","sps_bam_reset",arg1 + 0x18,
                       *(arg1 + 0x2c));
    }
    if ((*(arg1 + 0xa0) >> 3 & 1) != 0) {
        if (*(arg1 + 0x30) != 0) {
            uVar5 = 0;
            do {
                if (uVar5 == 0x1f) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x80173c0);
                    (*pcVar1)();
                }
                iVar4 = *(arg1 + 0x100 + uVar5 * 8);
                if ((iVar4 != -0x88888889) && (iVar4 != 0)) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar2 = ___ratelimit(obj.sps_bam_reset._rs.90,"sps_bam_reset"), iVar2 != 0)))) {
                        _printk(0x800ca83,"sps_bam_reset",arg1 + 0x18,uVar5 & 0xffffffff);
                    }
                    if (arg1 == 0) {
                        return 0xffffffff;
                    }
                    ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM device %pa RESET failed: pipe %d in use\n",
                                   "sps_bam_reset",arg1 + 0x18,uVar5 & 0xffffffff);
                    return 0xffffffff;
                }
                uVar5 = uVar5 + 1;
            } while (*(arg1 + 0x30) != uVar5);
        }
        iVar2 = sym.sps_bam_disable(arg1);
        if (iVar2 != 0) {
            return 0xffffffff;
        }
    }
    uVar3 = sym.sps_bam_enable(arg1);
    return uVar3;
}


// ===== sym.sps_bam_pipe_alloc @ 0x080173dc (size 812) =====

uint64_t sym.sps_bam_pipe_alloc(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    uint32_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0xffffffff) {
        if ((*(arg1 + 0x78) >> 2 & 1) == 0) {
            if (*(arg1 + 0x30) != 0) {
                uVar6 = 0;
                uVar5 = 1;
                do {
                    if ((uVar5 & *(arg1 + 0x7c)) == 0) {
                        if (0x1e < uVar6) {
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x5512,0x8017708);
                            (*pcVar1)();
                        }
                        if (*(arg1 + 0x100 + uVar6 * 8) == 0) {
                            uVar7 = uVar6 & 0xffffffff;
                            goto code_r0x08017664;
                        }
                    }
                    uVar6 = uVar6 + 1;
                    uVar5 = uVar5 << 1;
                } while (*(arg1 + 0x30) != uVar6);
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_bam_pipe_alloc._rs.95,"sps_bam_pipe_alloc"), iVar2 != 0)))) {
                _printk(0x8005c94,"sps_bam_pipe_alloc",arg1 + 0x18);
            }
            if (arg1 == 0) {
                return 0xffffffff;
            }
            uVar3 = *(arg1 + 0x228);
            pcVar4 = "%s: sps:Fail to allocate pipe on BAM %pa\n";
        }
        else {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_bam_pipe_alloc._rs,"sps_bam_pipe_alloc"), iVar2 != 0)))) {
                _printk(0x800ad3e,"sps_bam_pipe_alloc",arg1 + 0x18);
            }
            if (arg1 == 0) {
                return 0xffffffff;
            }
            uVar3 = *(arg1 + 0x228);
            pcVar4 = "%s: sps:Restricted from allocating pipes on BAM %pa\n";
        }
        ipc_log_string(uVar3,pcVar4,"sps_bam_pipe_alloc",arg1 + 0x18);
        return 0xffffffff;
    }
    uVar6 = arg2;
    if ((arg2 < 0x1f) && (arg2 < *(arg1 + 0x30))) {
        if ((*(arg1 + 0x7c) >> (uVar6 & 0x3f) & 1) != 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_bam_pipe_alloc._rs.101,"sps_bam_pipe_alloc"), iVar2 != 0)))) {
                _printk(0x800440a,"sps_bam_pipe_alloc",arg1 + 0x18,uVar6);
            }
            if (arg1 == 0) {
                return 0xffffffff;
            }
            ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM %pa pipe %d is not local\n","sps_bam_pipe_alloc",arg1 + 0x18
                           ,uVar6);
            return 0xffffffff;
        }
        uVar7 = uVar6;
        if (*(arg1 + uVar6 * 8 + 0x100) == 0) {
code_r0x08017664:
            *(arg1 + uVar6 * 8 + 0x100) = 0xffffffff77777777;
            return uVar7;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_bam_pipe_alloc._rs.104,"sps_bam_pipe_alloc"), iVar2 != 0)))) {
            _printk(0x80048e3,"sps_bam_pipe_alloc",uVar6,arg1 + 0x18);
        }
        if (arg1 == 0) {
            return 0xffffffff;
        }
        uVar3 = *(arg1 + 0x228);
        pcVar4 = "%s: sps:Pipe %d already allocated on BAM %pa\n";
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_bam_pipe_alloc._rs.98,"sps_bam_pipe_alloc"), iVar2 != 0)))) {
            _printk(0x8006ec3,"sps_bam_pipe_alloc",uVar6,arg1 + 0x18);
        }
        if (arg1 == 0) {
            return 0xffffffff;
        }
        uVar3 = *(arg1 + 0x228);
        pcVar4 = "%s: sps:Invalid pipe %d for allocate on BAM %pa\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_bam_pipe_alloc",uVar6,arg1 + 0x18);
    return 0xffffffff;
}


// ===== sym.sps_bam_pipe_free @ 0x08017708 (size 684) =====

void sym.sps_bam_pipe_free(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    code *pcVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < *(arg1 + 0x30)) {
        if (0x1e < arg2) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x80179b4);
            (*pcVar4)();
        }
        iVar1 = arg1 + arg2 * 8;
        iVar8 = *(iVar1 + 0x100);
        *(iVar1 + 0x100) = 0;
        if (iVar8 != -0x88888889) {
            if (iVar8 == 0) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.sps_bam_pipe_free._rs.109,"sps_bam_pipe_free"), iVar5 != 0)))) {
                    _printk(0x800b5ca,"sps_bam_pipe_free",arg2,arg1 + 0x18);
                }
                if (arg1 != 0) {
                    ipc_log_string(*(arg1 + 0x228),"%s: sps:Attempt to free unallocated pipe %d on BAM %pa\n",
                                   "sps_bam_pipe_free",arg2,arg1 + 0x18);
                }
            }
            else {
                piVar2 = iVar8 + 0x230;
                if (piVar2 != *piVar2) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_bam_pipe_free._rs.112,"sps_bam_pipe_free"), iVar5 != 0)))) {
                        _printk(0x800ad75,"sps_bam_pipe_free",arg1 + 0x18,arg2);
                    }
                    if (arg1 != 0) {
                        ipc_log_string(*(arg1 + 0x228),"%s: sps:Disconnect BAM %pa pipe %d with events pending\n",
                                       "sps_bam_pipe_free",arg1 + 0x18,arg2);
                    }
                    piVar7 = *piVar2;
                    if (piVar7 != piVar2) {
                        uVar6 = __list_del_entry_valid(piVar7);
                        if ((uVar6 & 1) != 0) {
                            iVar1 = *piVar7;
                            piVar3 = piVar7[1];
                            *(iVar1 + 8) = piVar3;
                            *piVar3 = iVar1;
                        }
                        *piVar7 = -0x2152ffffffffff00;
                        piVar7[1] = -0x2152fffffffffede;
                        kfree(piVar7);
                        if (piVar2 != 0xdead000000000100) {
                            do {
                                uVar6 = __list_del_entry_valid(0xdead000000000100);
                                if ((uVar6 & 1) != 0) {
                                    *(*0xdead000000000100 + 8) = *0xdead000000000108;
                                    **0xdead000000000108 = *0xdead000000000100;
                                }
                                *0xdead000000000100 = -0x2152ffffffffff00;
                                *0xdead000000000108 = 0xdead000000000122;
                                kfree(0xdead000000000100);
                            } while( true );
                        }
                    }
                }
                *iVar8 = iVar8;
                *(iVar8 + 8) = iVar8;
                *(iVar8 + 0xb8) = 0xffffffff00000000;
                *(iVar8 + 0xc0) = 0;
                *(iVar8 + 0xd8) = 0xffffffff;
                *(iVar8 + 0xe0) = 0;
                *(iVar8 + 0xd0) = 0;
                memset(iVar8 + 0xe8,0,0x199);
                *(iVar8 + 0x230) = piVar2;
                *(iVar8 + 0x238) = piVar2;
            }
        }
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_free._rs,"sps_bam_pipe_free"), iVar5 != 0)))) {
            _printk(0x8005cc0,"sps_bam_pipe_free",arg1 + 0x18,arg2);
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x228),"%s: sps:Invalid BAM %pa pipe: %d\n","sps_bam_pipe_free",arg1 + 0x18,arg2
                          );
        }
    }
    return;
}


// ===== sym.sps_bam_pipe_connect @ 0x080179b8 (size 3256) =====

uint64_t sym.sps_bam_pipe_connect(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    ulong uVar8;
    char *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint uVar12;
    int *piVar13;
    uint64_t uVar14;
    int64_t extraout_x11;
    int64_t iVar15;
    ulong *in_x18;
    uint32_t uVar16;
    uint64_t arg3;
    int64_t arg1_00;
    int64_t *piVar17;
    int64_t iVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    piVar17 = arg1 + 0xe8;
    iVar1 = arg1 + 0x230;
    iVar18 = *(arg1 + 0xb0);
    *arg1 = arg1;
    *(arg1 + 8) = arg1;
    *(arg1 + 0xb8) = 0xffffffff00000000;
    *(arg1 + 0xc0) = 0;
    *(arg1 + 0xd8) = 0xffffffff;
    *(arg1 + 0xe0) = 0;
    *(arg1 + 0xd0) = 0;
    memset(piVar17,0,0x199);
    *(arg1 + 0x230) = iVar1;
    *(arg1 + 0x238) = iVar1;
    iVar6 = *arg2;
    iStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    *(arg1 + 0xd8) = iVar6;
    bVar5 = iVar6 == 0;
    uVar16 = *(arg2 + 4);
    uVar19 = iVar18 + 0x10U;
    if (!bVar5) {
        uVar19 = iVar18 + 0x38U;
    }
    iStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uVar10 = iVar18 + 0x38U;
    if (!bVar5) {
        uVar10 = iVar18 + 0x10U;
    }
    uStack_b0 = 0;
    uStack_a8 = bVar5;
    uStack_88 = uVar16 >> 0x10 & 0xffffffff00000001;
    arg1_00 = *(uVar19 + 0x20);
    uVar7 = *(uVar19 + 0x10);
    arg3 = uVar7;
    if ((1 < obj.logging_option) && (1 < obj.debug_level_option)) {
        if (obj.print_limit_option == 0x0) {
            uVar12 = *arg2;
        }
        else {
            iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs,"sps_bam_pipe_connect");
            if (iVar6 == 0) goto code_r0x08017a94;
            uVar12 = *arg2;
            uVar16 = *(arg2 + 4);
        }
        _printk(0x80058b7,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3,uVar12,uVar16);
    }
code_r0x08017a94:
    if ((arg1_00 != 0) && (*(arg1_00 + 0x238) < 3)) {
        ipc_log_string(*(arg1_00 + 0x220),"%s: sps:BAM %pa; pipe %d; mode:%d; options:0x%x\n","sps_bam_pipe_connect",
                       arg1_00 + 0x18,arg3,*arg2,*(arg2 + 4));
    }
    uVar14 = uStack_a8;
    if (*(arg1_00 + 0x30) <= uVar7) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.117,"sps_bam_pipe_connect"), iVar6 != 0)))) {
            _printk(0x8005cc0,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
        }
        if (arg1_00 == 0) goto code_r0x08017bb4;
        uVar8 = *(arg1_00 + 0x228);
        pcVar9 = "%s: sps:Invalid BAM %pa pipe: %d\n";
        goto code_r0x08017ba4;
    }
    uStack_88 = CONCAT44(*(arg1_00 + 0x80),uStack_88);
    uStack_b0 = CONCAT62(uStack_b0._2_6_,*(uVar19 + 0x14));
    uStack_90 = CONCAT44(*(uVar19 + 0x18),uStack_90);
    if (((*(arg1_00 + 0x78) >> 4 & 1) != 0) || (uVar19 = 1L << (arg3 & 0x3f), (uVar19 & *(arg1_00 + 0x7c)) != 0)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.118,"sps_bam_pipe_connect"), iVar6 != 0)))) {
            _printk(0x800440a,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
        }
        if (arg1_00 == 0) goto code_r0x08017bb4;
        uVar8 = *(arg1_00 + 0x228);
        pcVar9 = "%s: sps:BAM %pa pipe %d is not local\n";
        goto code_r0x08017ba4;
    }
    if ((*(arg1_00 + 0x78) >> 3 & 1) != 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.119,"sps_bam_pipe_connect"), iVar6 != 0)))) {
            _printk(0x8007865,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
        }
        if (arg1_00 == 0) goto code_r0x08017bb4;
        uVar8 = *(arg1_00 + 0x228);
        pcVar9 = "%s: sps:BAM %pa pipe %d remote config is not supported\n";
        goto code_r0x08017ba4;
    }
    uVar16 = *(arg1 + 0x54);
    iVar15 = 0xdeadbeef;
    if ((uVar16 >> 10 & 1) == 0) {
        if (*(uVar10 + 0x20) == 0) {
            uStack_a8 = CONCAT44(1,uStack_a8);
            *(arg1 + 0xe8) = *(iVar18 + 0x60);
            *(arg1 + 0xf0) = 0;
            goto code_r0x08017dd0;
        }
        uStack_a8 = uStack_a8 & 0xffffffff;
        *(arg1 + 0xb8) = *(arg1 + 0xb8) | 0x10;
        if ((*(arg1_00 + 0x11) >> 1 & 1) == 0) {
            uStack_80 = *(*(uVar10 + 0x20) + 0x18) & 0xffffffff;
        }
        else {
code_r0x08017ca4:
            uStack_a8 = uVar14 & 0xffffffff;
            iVar15 = 0x40;
            if (*(arg1 + 0xd8) != 0) {
                iVar15 = 0x28;
            }
            uVar14 = *(arg1 + iVar15);
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.122,"sps_bam_pipe_connect"), iVar6 != 0)))) {
                _printk(0x800986b,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3,uVar14);
            }
            if ((arg1_00 != 0) && (*(arg1_00 + 0x238) < 3)) {
                ipc_log_string(*(arg1_00 + 0x220),"%s: sps:BAM %pa pipe %d uses IOVA 0x%pK\n","sps_bam_pipe_connect",
                               arg1_00 + 0x18,arg3,uVar14);
            }
            uVar16 = *(arg1 + 0x54);
            uStack_80 = uVar14 & 0xffffffff;
        }
    }
    else {
        uStack_a8 = uStack_a8 & 0xffffffff;
        *(arg1 + 0xb8) = *(arg1 + 0xb8) | 0x10;
        if ((*(arg1_00 + 0x11) >> 1 & 1) != 0) goto code_r0x08017ca4;
    }
    iVar15 = 0xdeadbeef;
    if ((uVar16 >> 10 & 1) == 0) {
        uVar12 = *(uVar10 + 0x10);
    }
    else {
        uVar12 = *(arg1 + 0x48);
        uStack_80._0_4_ = *(arg1 + 0x38);
        uStack_70._0_5_ = CONCAT14(1,uStack_70);
    }
    uStack_80 = CONCAT44(uVar12,uStack_80);
    if ((((*(iVar18 + 0x68) != 0xdeadbeef) && (*(iVar18 + 0x88) != 0xdeadbeef)) && (*(iVar18 + 0x78) != 0)) &&
       (*(iVar18 + 0x98) != 0)) {
        iStack_78 = *(iVar18 + 0x88);
        if ((*(arg1_00 + 0x11) >> 1 & 1) == 0) goto code_r0x08018004;
        iStack_78 = *(arg1 + 0x88);
        if (1 < obj.logging_option) goto code_r0x080183f0;
        goto code_r0x08017fc8;
    }
    if ((obj.logging_option != 0x1) &&
       ((obj.print_limit_option < 3 ||
        (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.125,"sps_bam_pipe_connect"), iVar6 != 0)))) {
        _printk(0x800445b,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
    }
    if (arg1_00 == 0) goto code_r0x08017bb4;
    uVar8 = *(arg1_00 + 0x228);
    pcVar9 = "%s: sps:FIFO buffers are not allocated for BAM %pa pipe %d\n";
code_r0x08017ba4:
    ipc_log_string(uVar8,pcVar9,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
code_r0x08017bb4:
    arg3 = 0xffffffff;
code_r0x08017bb8:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return arg3;
    }
    __stack_chk_fail();
    iVar15 = extraout_x11;
code_r0x080183f0:
    if (1 < obj.debug_level_option) {
        if (obj.print_limit_option != 0x0) {
            iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.128,"sps_bam_pipe_connect");
            iVar15 = 0xdeadbeef;
            if (iVar6 == 0) goto code_r0x08017fc8;
        }
        _printk(0x8006032,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
        iVar15 = 0xdeadbeef;
    }
code_r0x08017fc8:
    if ((arg1_00 != 0) && (*(arg1_00 + 0x238) < 3)) {
        ipc_log_string(*(arg1_00 + 0x220),"%s: sps:BAM %pa pipe %d uses IOVA 0x%pK for data FIFO\n",
                       "sps_bam_pipe_connect",arg1_00 + 0x18,arg3,*(arg1 + 0x88));
        iVar15 = 0xdeadbeef;
    }
code_r0x08018004:
    uStack_70 = CONCAT44(uStack_70._4_4_,*(iVar18 + 0x98));
    if (*(iVar18 + 0x80) == 0) {
code_r0x0801802c:
        if (*(arg1 + 0xd8) == 0) {
            if ((*(arg2 + 6) >> 2 & 1) == 0) {
                uStack_a0 = uStack_a0._4_4_ << 0x20;
            }
            else {
                uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
            }
        }
    }
    else if (*(arg1 + 0xd8) == 0) {
        __memset_io(*(iVar18 + 0x80),0);
        iVar15 = 0xdeadbeef;
        goto code_r0x0801802c;
    }
code_r0x08017dd0:
    uVar16 = arg3;
    *(arg1 + 0xbc) = uVar16;
    *(arg1 + 0xc0) = uVar19;
    if (*(iVar18 + 0x68) != iVar15) {
        uVar7 = *(iVar18 + 0x78);
        if (uVar7 < 0x10) goto code_r0x08017ec8;
        iVar15 = *(iVar18 + 0x60);
        iStack_98 = *(iVar18 + 0x68);
        if ((*(arg1_00 + 0x11) >> 1 & 1) != 0) {
            iVar11 = *(arg1 + 0x68);
            iStack_98 = iVar11;
            if ((1 < obj.logging_option) && (1 < obj.debug_level_option)) {
                if (obj.print_limit_option != 0x0) {
                    iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.134,"sps_bam_pipe_connect");
                    if (iVar6 == 0) goto code_r0x08018058;
                    iVar11 = *(arg1 + 0x68);
                }
                _printk(0x80051e2,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3,iVar11);
            }
code_r0x08018058:
            if ((arg1_00 != 0) && (*(arg1_00 + 0x238) < 3)) {
                ipc_log_string(*(arg1_00 + 0x220),"%s: sps:BAM %pa pipe %d uses IOVA 0x%pK for desc FIFO\n",
                               "sps_bam_pipe_connect",arg1_00 + 0x18,arg3,*(arg1 + 0x68));
            }
        }
        uStack_90 = CONCAT44(uStack_90._4_4_,*(iVar18 + 0x78));
        if ((iVar15 != 0) && ((*(arg1 + 0xd8) == 0 || (uStack_a8._4_4_ == 1)))) {
            __memset_io(iVar15,0);
        }
    }
    *(arg1 + 0xdc) = uStack_90 >> 3;
    *(arg1 + 0xe0) = uStack_90;
    if (((*(arg1_00 + 0xa0) >> 3 & 1) == 0) && (iVar6 = sym.sps_bam_enable(arg1_00), iVar6 != 0)) {
code_r0x08017e00:
        arg3 = 0xffffffff;
        *arg1 = arg1;
        *(arg1 + 8) = arg1;
        *(arg1 + 0xb8) = 0xffffffff00000000;
        *(arg1 + 0xc0) = 0;
        *(arg1 + 0xd8) = 0xffffffff;
        *(arg1 + 0xe0) = 0;
        *(arg1 + 0xd0) = 0;
        memset(piVar17,0,0x199);
        *(arg1 + 0x230) = iVar1;
        *(arg1 + 0x238) = iVar1;
    }
    else {
        if (0x1e < uVar16) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8018588);
            (*pcVar4)();
        }
        iVar15 = arg1_00 + arg3 * 8;
        iVar18 = -0x88888889;
        if (*(iVar15 + 0x100) != -0x88888889) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.137,"sps_bam_pipe_connect"), iVar6 != 0)))) {
                _printk(0x8008fd5,"sps_bam_pipe_connect",arg3,arg1_00 + 0x18);
            }
            if (arg1_00 != 0) {
                ipc_log_string(*(arg1_00 + 0x228),"%s: sps:Invalid pipe %d on BAM %pa for connect\n",
                               "sps_bam_pipe_connect",arg3,arg1_00 + 0x18);
            }
            goto code_r0x08017bb4;
        }
        uVar7 = arg1_00 + 0xd8;
        iVar6 = sym.bam_read_reg_field.llvm.916431513089089357(uVar7,0x1c,arg3,2);
        if (iVar6 != 0) {
            if (-1 < *(arg2 + 6)) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.143,"sps_bam_pipe_connect"), iVar6 != 0)))) {
                    _printk(0x8008bdf,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
                }
                if (arg1_00 == 0) goto code_r0x08017bb4;
                uVar8 = *(arg1_00 + 0x228);
                pcVar9 = "%s: sps:BAM %pa pipe %d sharing violation\n";
                goto code_r0x08017ba4;
            }
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.140,"sps_bam_pipe_connect"), iVar6 != 0)))) {
                _printk(0x8006a2f,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
            }
            if ((arg1_00 != 0) && (*(arg1_00 + 0x238) < 3)) {
                ipc_log_string(*(arg1_00 + 0x220),"%s: sps:BAM %pa pipe %d is already enabled\n",
                               "sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
            }
        }
        iVar6 = sym.bam_pipe_init(uVar7,arg3,&uStack_b0,*(arg1_00 + 0x80));
        if (iVar6 != 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.146,"sps_bam_pipe_connect"), iVar6 != 0)))) {
                _printk(0x800494b,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
            }
            if (arg1_00 != 0) {
                ipc_log_string(*(arg1_00 + 0x228),"%s: sps:BAM %pa pipe %d init error\n","sps_bam_pipe_connect",
                               arg1_00 + 0x18,arg3);
            }
code_r0x08018224:
            if (*(arg2 + 6) < '\0') {
                if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.152,"sps_bam_pipe_connect"), iVar6 != 0)))) {
                    _printk(0x8006ef6,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
                }
                if ((arg1_00 != 0) && (*(arg1_00 + 0x238) < 3)) {
                    ipc_log_string(*(arg1_00 + 0x220),"%s: sps:BAM %pa pipe %d connection exits\n",
                                   "sps_bam_pipe_connect",arg1_00 + 0x18,arg3);
                }
            }
            else {
                sym.bam_pipe_exit(uVar7,arg3,*(arg1_00 + 0x80));
            }
            goto code_r0x08017e00;
        }
        piVar2 = iVar15 + 0x100;
        *piVar2 = arg1;
        uVar3 = *(arg2 + 4);
        uVar10 = uVar3;
        if (uVar3 == 0) {
            if ((*(arg1 + 0xb8) >> 4 & 1) == 0) goto code_r0x080181dc;
        }
        else {
            if ((uVar3 >> 0x11 & 1) == 0) {
code_r0x080181dc:
                if ((*(arg1_00 + 0xa0) >> 5 & 1) != 0) {
                    piVar13 = arg1_00 + 0x88;
                    goto code_r0x080181e8;
                }
            }
            else {
                piVar13 = arg2 + 8;
code_r0x080181e8:
                if (*piVar13 != -0x21524111) {
                    *(arg1 + 0xd4) = *piVar13;
                    *(arg1 + 0xb8) = *(arg1 + 0xb8) | 0x20;
                    uVar10 = *(arg2 + 4);
                }
            }
            iVar6 = sym.sps_bam_pipe_set_params(arg1_00,uVar16,uVar10);
            if (iVar6 != 0) {
                *piVar2 = -0x88888889;
                goto code_r0x08018224;
            }
        }
        *piVar2 = arg1;
        piVar17 = *(arg1_00 + 0x200);
        arg2 = arg1_00 + 0x1f8;
        *(arg1_00 + 0xf8) = *(arg1_00 + 0xf8) | uVar19;
        uVar10 = __list_add_valid(arg1,piVar17,arg2);
        if ((uVar10 & 1) != 0) {
            *(arg1_00 + 0x200) = arg1;
            *arg1 = arg2;
            *(arg1 + 8) = piVar17;
            *piVar17 = arg1;
        }
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.149,"sps_bam_pipe_connect"), iVar6 != 0)))) {
            _printk(0x80044d5,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3,*(arg1 + 0xc0),*(arg1_00 + 0xf8));
        }
        if ((arg1_00 != 0) && (*(arg1_00 + 0x238) < 3)) {
            ipc_log_string(*(arg1_00 + 0x220),"%s: sps:BAM %pa; pipe %d; pipe_index_mask:0x%x; pipe_active_mask:0x%x\n"
                           ,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3,*(arg1 + 0xc0),*(arg1_00 + 0xf8));
        }
        arg3 = 0;
        *(arg1 + 0xb8) = *(arg1 + 0xb8) | 2;
    }
    goto code_r0x08017bb8;
code_r0x08017ec8:
    if (obj.logging_option != 0x1) {
        if (2 < obj.print_limit_option) {
            iVar6 = ___ratelimit(obj.sps_bam_pipe_connect._rs.131,"sps_bam_pipe_connect");
            if (iVar6 == 0) goto code_r0x08017f00;
            uVar7 = *(iVar18 + 0x78);
        }
        _printk(0x8008075,"sps_bam_pipe_connect",arg1_00 + 0x18,arg3,uVar7);
    }
code_r0x08017f00:
    if (arg1_00 != 0) {
        ipc_log_string(*(arg1_00 + 0x228),"%s: sps:Invalid descriptor FIFO size for BAM %pa pipe %d: %d\n",
                       "sps_bam_pipe_connect",arg1_00 + 0x18,arg3,*(iVar18 + 0x78));
    }
    goto code_r0x08017bb4;
}


// ===== sym.sps_bam_pipe_set_params @ 0x08018670 (size 888) =====

ulong sym.sps_bam_pipe_set_params(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    if (0x1e < arg2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80189cc);
        (*pcVar3)();
    }
    *in_x18 = unaff_x30;
    uVar9 = arg3 & 0xffffffff;
    iVar10 = *(arg1 + arg2 * 8 + 0x100);
    uVar8 = arg3;
    if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar4 = ___ratelimit(obj.sps_bam_pipe_set_params._rs,"sps_bam_pipe_set_params"), iVar4 != 0)))) {
        _printk(0x8009416,"sps_bam_pipe_set_params",arg1 + 0x18,arg2,uVar9);
    }
    if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
        ipc_log_string(*(arg1 + 0x220),"%s: sps:BAM %pa pipe %d opt 0x%x\n","sps_bam_pipe_set_params",arg1 + 0x18,
                       arg2,uVar9);
    }
    *(iVar10 + 0xcc) = uVar8 & 0x80000000;
    *(iVar10 + 0xd0) = uVar8 >> 0x13 & 1;
    if (((arg3 & 0x13000021U) != 0) && ((*(iVar10 + 0xb8) >> 4 & 1) != 0)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.sps_bam_pipe_set_params._rs.163,"sps_bam_pipe_set_params"), iVar4 != 0)))) {
            _printk(0x8008c0c,"sps_bam_pipe_set_params",arg1 + 0x18,arg2,uVar9);
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x228),"%s: sps:Invalid option for BAM-to-BAM: BAM %pa pipe %d opt 0x%x\n",
                           "sps_bam_pipe_set_params",arg1 + 0x18,arg2,uVar9);
        }
        return 0xffffffff;
    }
    if (((((arg3 & 0x2000000U) != 0) || (*(iVar10 + 0xf8) != 0)) || (*(iVar10 + 0xdc) == 0)) ||
       ((*(iVar10 + 0xb8) >> 4 & 1) != 0)) goto code_r0x0801879c;
    uVar1 = *(iVar10 + 0xe0) + *(iVar10 + 0xdc) * 8;
    if (uVar1 < 0x1001) {
        if ((*(arg1 + 0x11) & 1) == 0) {
            iVar5 = __kmalloc(uVar1,0xdc0);
            *(iVar10 + 0xf8) = iVar5;
        }
        else {
            iVar2 = arg1 + arg2 * 8;
            iVar5 = *(iVar2 + 0x240);
            if (iVar5 != 0) {
                *(iVar10 + 0xf8) = iVar5;
                goto code_r0x080188b8;
            }
            uVar6 = __kmalloc(uVar1,0xdc0);
            *(iVar10 + 0xf8) = uVar6;
            *(iVar2 + 0x240) = uVar6;
            iVar5 = *(iVar10 + 0xf8);
        }
        if (iVar5 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.sps_bam_pipe_set_params._rs.166,"sps_bam_pipe_set_params"), iVar4 != 0)))) {
                _printk(0x800baa4,"sps_bam_pipe_set_params",arg2,arg1 + 0x18);
            }
            if (arg1 == 0) {
                return 0xfffffff4;
            }
            uVar6 = *(arg1 + 0x228);
            pcVar7 = "%s: sps:No memory for pipe%d of BAM %pa\n";
code_r0x0801891c:
            ipc_log_string(uVar6,pcVar7,"sps_bam_pipe_set_params",arg2,arg1 + 0x18);
            return 0xfffffff4;
        }
    }
    else {
        iVar5 = vzalloc(uVar1);
        *(iVar10 + 0xf8) = iVar5;
        if (iVar5 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.sps_bam_pipe_set_params._rs.169,"sps_bam_pipe_set_params"), iVar4 != 0)))) {
                _printk(0x8004dbd,"sps_bam_pipe_set_params",arg2,arg1 + 0x18);
            }
            if (arg1 == 0) {
                return 0xfffffff4;
            }
            uVar6 = *(arg1 + 0x228);
            pcVar7 = "%s: sps:No memory for pipe %d of BAM %pa\n";
            goto code_r0x0801891c;
        }
    }
code_r0x080188b8:
    *(iVar10 + 0x100) = *(iVar10 + 0xf4);
    *(iVar10 + 0x108) = iVar5 + *(iVar10 + 0xe0);
code_r0x0801879c:
    *(iVar10 + 0xc4) = uVar8 & 0xff;
    sym.pipe_set_irq(arg1,arg2,uVar8 & 0x1000000);
    *(iVar10 + 0xe4) = uVar8 & 0x8000000;
    *(iVar10 + 0x270) = uVar8 & 0x2000000;
    *(iVar10 + 0x274) = uVar8 & 0x10000000;
    return 0;
}


// ===== sym.sps_bam_pipe_disconnect @ 0x080189e8 (size 844) =====

uint sym.sps_bam_pipe_disconnect(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    uint64_t arg2_00;
    char *pcVar7;
    ulong *in_x18;
    int64_t *piVar8;
    uint uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    arg2_00 = arg2;
    *in_x18 = unaff_x30;
    if (arg2 < *(arg1 + 0x30)) {
        if (0x1e < arg2) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8018d18);
            (*pcVar4)();
        }
        iVar1 = arg1 + arg2_00 * 8;
        piVar8 = *(iVar1 + 0x100);
        if (piVar8 == 0xffffffff77777777 || piVar8 == NULL) {
            uVar9 = 0xffffffff;
        }
        else {
            uVar11 = 1L << (arg2_00 & 0x3f);
            uVar10 = uVar11;
            if ((uVar11 & *(arg1 + 0xf8)) != 0) {
                uVar6 = _raw_spin_lock_irqsave(arg1 + 0xe4);
                uVar11 = __list_del_entry_valid(piVar8);
                if ((uVar11 & 1) != 0) {
                    iVar2 = *piVar8;
                    piVar3 = piVar8[1];
                    *(iVar2 + 8) = piVar3;
                    *piVar3 = iVar2;
                }
                *piVar8 = -0x2152ffffffffff00;
                piVar8[1] = -0x2152fffffffffede;
                *(arg1 + 0xf8) = *(arg1 + 0xf8) & (uVar10 ^ 0xffffffff);
                _raw_spin_unlock_irqrestore(arg1 + 0xe4,uVar6);
            }
            *(arg1 + 0xfc) = *(arg1 + 0xfc) & ~uVar10;
            if (*(piVar8 + 0x56) < '\0') {
                if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar5 = ___ratelimit(obj.sps_bam_pipe_disconnect._rs.155,"sps_bam_pipe_disconnect"), iVar5 != 0))
                   )) {
                    _printk(0x8009bde,"sps_bam_pipe_disconnect",arg1 + 0x18,arg2_00);
                }
                if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
                    ipc_log_string(*(arg1 + 0x220),"%s: sps:BAM %pa pipe %d exits\n","sps_bam_pipe_disconnect",
                                   arg1 + 0x18,arg2_00);
                }
            }
            else {
                sym.bam_pipe_exit(arg1 + 0xd8,arg2_00,*(arg1 + 0x80));
            }
            if (piVar8[0x1f] != 0) {
                if (piVar8[0x1c] + *(piVar8 + 0xdc) * 8 < 0x1001) {
                    if ((*(arg1 + 0x11) & 1) == 0) {
                        kfree();
                    }
                    else {
                        memset(piVar8[0x1f],0);
                    }
                }
                else {
                    vfree();
                }
                piVar8[0x1f] = 0;
            }
            *(iVar1 + 0x100) = 0xffffffff77777777;
            *piVar8 = piVar8;
            piVar8[1] = piVar8;
            piVar8[0x17] = -0x100000000;
            piVar8[0x18] = 0;
            piVar8[0x1b] = 0xffffffff;
            *(piVar8 + 0x1c) = 0;
            *(piVar8 + 0x1a) = 0;
            memset(piVar8 + 0x1d,0,0x199);
            uVar9 = 0;
            piVar8[0x46] = piVar8 + 0x46;
            piVar8[0x47] = piVar8 + 0x46;
        }
        if ((piVar8 != NULL) && (piVar8 != 0xffffffff77777777)) {
            return uVar9;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_disconnect._rs.158,"sps_bam_pipe_disconnect"), iVar5 != 0)))) {
            _printk(0x800be5e,"sps_bam_pipe_disconnect",arg1 + 0x18,arg2_00);
        }
        if (arg1 == 0) {
            return uVar9;
        }
        pcVar7 = "%s: sps:BAM %pa pipe %d already disconnected\n";
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_disconnect._rs,"sps_bam_pipe_disconnect"), iVar5 != 0)))) {
            _printk(0x8005cc0,"sps_bam_pipe_disconnect",arg1 + 0x18,arg2_00);
        }
        uVar9 = 0xffffffff;
        if (arg1 == 0) {
            return 0xffffffff;
        }
        pcVar7 = "%s: sps:Invalid BAM %pa pipe: %d\n";
    }
    ipc_log_string(*(arg1 + 0x228),pcVar7,"sps_bam_pipe_disconnect",arg1 + 0x18,arg2_00);
    return uVar9;
}


// ===== sym.pipe_set_irq @ 0x08018d34 (size 648) =====

void sym.pipe_set_irq(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t arg3_00;
    ulong *in_x18;
    uint64_t arg3_01;
    int64_t iVar7;
    ulong unaff_x30;
    
    if (arg2 < 0x1f) {
        *in_x18 = unaff_x30;
        arg3_01 = arg2;
        iVar7 = *(arg1 + arg2 * 8 + 0x100);
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 || (iVar5 = ___ratelimit(obj.pipe_set_irq._rs,"pipe_set_irq"), iVar5 != 0))
           )) {
            _printk(0x800527d,"pipe_set_irq",arg1 + 0x18,arg3_01,arg3 & 0xffffffffU,*(iVar7 + 0xc4),
                    *(iVar7 + 0xb8),*(arg1 + 0xa0));
        }
        if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
            ipc_log_string(*(arg1 + 0x220),
                           "%s: sps:BAM:%pa; pipe %d; poll:%d, irq_mask:0x%x; pipe state:0x%x; dev state:0x%x\n",
                           "pipe_set_irq",arg1 + 0x18,arg3_01,arg3 & 0xffffffffU,*(iVar7 + 0xc4),*(iVar7 + 0xb8),
                           *(arg1 + 0xa0));
        }
        if ((arg3 == 0) && (*(iVar7 + 0xc4) != 0)) {
            uVar4 = *(iVar7 + 0xb8);
            if ((*(arg1 + 0xa0) >> 2 & 1) == 0) {
                bVar3 = 1 < obj.logging_option;
                *(iVar7 + 0xb8) = uVar4 & 0xfffffffb;
                *(iVar7 + 200) = 1;
                if (((bVar3) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar5 = ___ratelimit(obj.pipe_set_irq._rs.283,"pipe_set_irq"), iVar5 != 0)))) {
                    _printk(0x800c50d,"pipe_set_irq",arg1 + 0x18,arg3_01);
                }
                if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
                    ipc_log_string(*(arg1 + 0x220),"%s: sps:BAM %pa pipe %d forced to use polling\n","pipe_set_irq",
                                   arg1 + 0x18,arg3_01);
                }
                arg3_00 = 0;
                bVar3 = true;
            }
            else {
                if ((uVar4 & 0x14) == 0x10) {
                    uVar4 = arg1 + 0xd8;
                    uVar6 = sym.bam_read_reg.llvm.916431513089089357(uVar4,0x1f,arg3_01);
                    sym.bam_write_reg.llvm.916431513089089357(uVar4,0x20,arg3_01,uVar6 & 0xffffffff);
                    uVar4 = *(iVar7 + 0xb8);
                }
                bVar3 = false;
                arg3_00 = 1;
                *(iVar7 + 200) = 0;
                *(iVar7 + 0xb8) = uVar4 | 4;
            }
        }
        else {
            arg3_00 = 0;
            bVar3 = true;
            *(iVar7 + 0xb8) = *(iVar7 + 0xb8) & 0xfffffffb;
            *(iVar7 + 200) = 1;
        }
        uVar4 = arg1 + 0xd8;
        if ((*(iVar7 + 0xb8) >> 5 & 1) == 0) {
            sym.bam_pipe_set_irq(uVar4,arg3_01,arg3_00,*(iVar7 + 0xc4));
        }
        else {
            uVar1 = 0;
            if (!bVar3) {
                uVar1 = *(iVar7 + 0xc4);
            }
            sym.bam_write_reg.llvm.916431513089089357(uVar4,0x21,arg3_01,uVar1);
        }
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8018f84);
    (*pcVar2)();
}


// ===== sym.sps_bam_enable_all_irqs @ 0x08018fbc (size 220) =====

void sym.sps_bam_enable_all_irqs(int64_t arg1)

{
    uint32_t arg1_00;
    ulong uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0xe4);
    arg1_00 = arg1 + 0xd8;
    sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,0x19,*(arg1 + 0x80),0x80000000);
    for (piVar2 = *(arg1 + 0x1f8); piVar2 != arg1 + 0x1f8; piVar2 = *piVar2) {
        if (((piVar2 != 0xffffffff77777777) && (piVar2 != NULL)) && (*(piVar2 + 0x50) == '\0')) {
            sym.bam_pipe_set_irq(arg1_00,*(piVar2 + 0xbc),1,*(piVar2 + 0xc4));
        }
    }
    DataSynchronizationBarrier(3,2,0);
    *(arg1 + 0x338) = 0;
    _raw_spin_unlock_irqrestore(arg1 + 0xe4,uVar1);
    return;
}


// ===== sym.sps_bam_disable_all_irqs @ 0x08019098 (size 224) =====

void sym.sps_bam_disable_all_irqs(int64_t arg1)

{
    uint32_t arg1_00;
    ulong uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0xe4);
    arg1_00 = arg1 + 0xd8;
    sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,0x19,*(arg1 + 0x80),0x80000000);
    for (piVar2 = *(arg1 + 0x1f8); piVar2 != arg1 + 0x1f8; piVar2 = *piVar2) {
        if (((piVar2 != 0xffffffff77777777) && (piVar2 != NULL)) && (*(piVar2 + 0x50) == '\0')) {
            sym.bam_pipe_set_irq(arg1_00,*(piVar2 + 0xbc),0,0);
        }
    }
    DataSynchronizationBarrier(3,2,0);
    *(arg1 + 0x338) = 1;
    _raw_spin_unlock_irqrestore(arg1 + 0xe4,uVar1);
    return;
}


// ===== sym.sps_bam_pipe_enable @ 0x08019178 (size 88) =====

ulong sym.sps_bam_pipe_enable(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (arg2 < 0x1f) {
        *in_x18 = unaff_x30;
        iVar2 = *(arg1 + arg2 * 8 + 0x100);
        sym.bam_pipe_enable(arg1 + 0xd8,arg2);
        *(iVar2 + 0xb8) = *(iVar2 + 0xb8) | 8;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80191d0);
    (*pcVar1)();
}


// ===== sym.sps_bam_pipe_disable @ 0x080191d0 (size 296) =====

ulong sym.sps_bam_pipe_disable(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    if (arg2 < 0x1f) {
        *in_x18 = unaff_x30;
        iVar3 = *(arg1 + arg2 * 8 + 0x100);
        if (*(iVar3 + 0x56) < '\0') {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_bam_pipe_disable._rs,"sps_bam_pipe_disable"), iVar2 != 0)))) {
                _printk(0x800be8e,"sps_bam_pipe_disable",arg1 + 0x18,arg2);
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
                ipc_log_string(*(arg1 + 0x220),"%s: sps:BAM %pa pipe %d enters disable state\n","sps_bam_pipe_disable"
                               ,arg1 + 0x18,arg2);
            }
        }
        else {
            sym.bam_pipe_disable(arg1 + 0xd8,arg2);
        }
        *(iVar3 + 0xb8) = *(iVar3 + 0xb8) & 0xfffffff7;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80192d0);
    (*pcVar1)();
}


// ===== sym.sps_bam_pipe_reg_event @ 0x080192f8 (size 528) =====

ulong sym.sps_bam_pipe_reg_event(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x1e < arg2) {
code_r0x08019504:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8019508);
        (*pcVar3)();
    }
    iVar5 = *(arg1 + arg2 * 8 + 0x100);
    if (((*(iVar5 + 0x270) == 0) || (*(arg3 + 8) == 0)) || (iVar4 = *(arg3 + 4), iVar4 == 0)) {
        iVar6 = 0;
        do {
            if ((*(iVar6 + 0x800d0c4) & *arg3) != 0) {
                uVar2 = *(obj.opt_event_table + iVar6) - 1;
                if (uVar2 < 0) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar4 = ___ratelimit(obj.sps_bam_pipe_reg_event._rs.179,"sps_bam_pipe_reg_event"), iVar4 != 0
                        )))) {
                        _printk(0x8004de9,"sps_bam_pipe_reg_event",arg1 + 0x18,arg2,*(arg3 + 4));
                    }
                    if (arg1 != 0) {
                        ipc_log_string(*(arg1 + 0x228),"%s: sps:Negative event index: BAM %pa pipe %d mode %d\n",
                                       "sps_bam_pipe_reg_event",arg1 + 0x18,arg2,*(arg3 + 4));
                    }
                }
                else {
                    if (9 < uVar2) goto code_r0x08019504;
                    iVar1 = iVar5 + uVar2 * 0x20;
                    *(iVar1 + 0x110) = *(arg3 + 8);
                    *(iVar1 + 0x118) = *(arg3 + 0x10);
                    *(iVar1 + 0x120) = *(arg3 + 4);
                    *(iVar1 + 0x128) = *(arg3 + 0x18);
                }
            }
            iVar6 = iVar6 + 0xc;
            if (iVar6 == 0x60) {
                return 0;
            }
        } while( true );
    }
    if (obj.logging_option != 0x1) {
        if (2 < obj.print_limit_option) {
            iVar4 = ___ratelimit(obj.sps_bam_pipe_reg_event._rs,"sps_bam_pipe_reg_event");
            if (iVar4 == 0) goto code_r0x0801938c;
            iVar4 = *(arg3 + 4);
        }
        _printk(0x800b626,"sps_bam_pipe_reg_event",arg1 + 0x18,arg2,iVar4);
    }
code_r0x0801938c:
    if (arg1 != 0) {
        ipc_log_string(*(arg1 + 0x228),"%s: sps:Only callback events support for NO_Q: BAM %pa pipe %d mode %d\n",
                       "sps_bam_pipe_reg_event",arg1 + 0x18,arg2,*(arg3 + 4));
    }
    return 0xffffffff;
}


// ===== sym.sps_bam_pipe_transfer_one @ 0x08019508 (size 1620) =====

ulong sym.sps_bam_pipe_transfer_one(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    int64_t in_x4;
    uint32_t in_w5;
    ulong *puVar8;
    uint32_t uVar9;
    uint32_t *puVar10;
    ulong *in_x18;
    uint64_t arg3_00;
    int64_t arg2_00;
    ulong unaff_x30;
    ulong uStack_48;
    
    if (0x1e < arg2) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x8019aec);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    arg3_00 = arg2;
    arg2_00 = *(arg1 + arg2 * 8 + 0x100);
    uStack_48 = 0;
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar4 = ___ratelimit(obj.sps_bam_pipe_transfer_one._rs,"sps_bam_pipe_transfer_one"), iVar4 != 0)))) {
        _printk(0x8006aa5,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00,arg3 & 0xffffffffU,arg4 & 0xffffffffU,
                in_w5);
    }
    if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
        ipc_log_string(*(arg1 + 0x210),"%s: sps:BAM %pa pipe %d addr 0x%pK size 0x%x flags 0x%x\n",
                       "sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00,arg3 & 0xffffffffU,arg4 & 0xffffffffU,in_w5)
        ;
    }
    if ((*(arg2_00 + 0xb8) & 0x50) == 0) {
        iVar4 = *(arg2_00 + 0x270);
        if ((in_x4 == 0) || (iVar4 == 0)) {
            uVar1 = *(arg2_00 + 0xf0) + 8;
            if (*(arg2_00 + 0xe0) <= uVar1) {
                uVar1 = 0;
            }
            if (uVar1 != *(arg2_00 + 0xf4)) {
code_r0x0801981c:
                if (iVar4 == 0) {
                    puVar8 = *(arg2_00 + 0xf8) + *(arg2_00 + 0xf0);
                    puVar10 = puVar8 + 4;
                    uVar9 = *(puVar8 + 6) << 0x10;
                }
                else {
                    uVar9 = 0;
                    puVar10 = &uStack_48 | 4;
                    puVar8 = &uStack_48;
                }
                *puVar8 = arg3;
                *puVar10 = uVar9 | arg4 & 0xffff;
                if ((in_w5 >> 4 & 1) == 0) {
                    *(puVar8 + 6) = in_w5 & 0xff0f;
                }
                else {
                    uVar9 = *(puVar8 + 4) | (in_w5 & 0xf) << 0x10;
                    if (*(arg2_00 + 0xd8) == 0) {
                        uVar9 = uVar9 | 0x80000000;
                    }
                    else {
                        uVar9 = uVar9 | 0xc0000000;
                    }
                    *(puVar8 + 4) = uVar9;
                }
                *(*(arg2_00 + 0xe8) + *(arg2_00 + 0xf0)) = *puVar8;
                iVar4 = arg1;
                if (*(arg2_00 + 0x270) == 0) {
                    *(*(arg2_00 + 0x108) + (*(arg2_00 + 0xf0) & 0xfffffff8)) = in_x4;
                    *(arg2_00 + 0xf0) = uVar1;
                }
                else {
                    *(arg2_00 + 0xf0) = uVar1;
                }
                if ((in_w5 >> 5 & 1) == 0) {
                    DataSynchronizationBarrier(3,2,0);
                    sym.bam_write_reg_field.llvm.916431513089089357(iVar4 + 0xd8,0x28,arg3_00,0xffff);
                    iVar5 = *(arg1 + 0x238);
                }
                else {
                    iVar5 = *(arg1 + 0x238);
                }
                if (iVar5 == 0) {
                    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar5 = ___ratelimit(obj.sps_bam_pipe_transfer_one._rs.200,"sps_bam_pipe_transfer_one"),
                        iVar5 != 0)))) {
                        uVar3 = sym.bam_read_reg_field.llvm.916431513089089357(iVar4 + 0xd8,0x28,arg3_00,0xffff);
                        _printk(0x800b670,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00,uVar1,uVar3);
                    }
                    if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                        uVar6 = *(arg1 + 0x210);
                        uVar3 = sym.bam_read_reg_field.llvm.916431513089089357(iVar4 + 0xd8,0x28,arg3_00,0xffff);
                        ipc_log_string(uVar6,
                                       "%s: sps: BAM phy addr:%pa; pipe %d; write pointer to tell HW: 0x%x; write pointer read from HW: 0x%x\n"
                                       ,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00,uVar1,uVar3);
                    }
                }
                return 0;
            }
            if ((*(arg2_00 + 0x274) == 0) && (*(arg2_00 + 200) != 0)) {
                sym.pipe_handler_eot(arg1,arg2_00);
                if (uVar1 != *(arg2_00 + 0xf4)) {
                    iVar4 = *(arg2_00 + 0x270);
                    goto code_r0x0801981c;
                }
                if ((obj.bam_init._rs & 1) == 0) {
                    obj.bam_init._rs = 0x1;
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar4 = ___ratelimit(obj.sps_bam_pipe_transfer_one._rs.190,"sps_bam_pipe_transfer_one"),
                        iVar4 != 0)))) {
                        _printk(0x800943a,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
                    }
                    if (arg1 != 0) {
                        ipc_log_string(*(arg1 + 0x228),
                                       "%s: sps:Client of BAM %pa pipe %d is recommended to have flow control\n",
                                       "sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
                    }
                }
                if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar4 = ___ratelimit(obj.sps_bam_pipe_transfer_one._rs.193,"sps_bam_pipe_transfer_one"),
                    iVar4 != 0)))) {
                    _printk(0x8004989,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
                }
                if (arg1 == 0) {
                    return 0xffffffff;
                }
                if (1 < *(arg1 + 0x238)) {
                    return 0xffffffff;
                }
                uVar6 = *(arg1 + 0x218);
                pcVar7 = "%s: sps:Descriptor FIFO is full for BAM %pa pipe %d after pipe_handler_eot\n";
            }
            else {
                if ((obj.bam_init._rs & 1) == 0) {
                    obj.bam_init._rs = 0x1;
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar4 = ___ratelimit(obj.sps_bam_pipe_transfer_one._rs.196,"sps_bam_pipe_transfer_one"),
                        iVar4 != 0)))) {
                        _printk(0x800943a,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
                    }
                    if (arg1 != 0) {
                        ipc_log_string(*(arg1 + 0x228),
                                       "%s: sps:Client of BAM %pa pipe %d is recommended to have flow control\n",
                                       "sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
                    }
                }
                if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar4 = ___ratelimit(obj.sps_bam_pipe_transfer_one._rs.197,"sps_bam_pipe_transfer_one"),
                    iVar4 != 0)))) {
                    _printk(0x8005ce4,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
                }
                if (arg1 == 0) {
                    return 0xffffffff;
                }
                if (1 < *(arg1 + 0x238)) {
                    return 0xffffffff;
                }
                uVar6 = *(arg1 + 0x218);
                pcVar7 = "%s: sps:Descriptor FIFO is full for BAM %pa pipe %d\n";
            }
        }
        else {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.sps_bam_pipe_transfer_one._rs.187,"sps_bam_pipe_transfer_one"), iVar4 != 0))
               )) {
                _printk(0x800caf1,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
            }
            if (arg1 == 0) {
                return 0xffffffff;
            }
            uVar6 = *(arg1 + 0x228);
            pcVar7 = "%s: sps:User pointer arg non-NULL: BAM %pa pipe %d\n";
        }
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.sps_bam_pipe_transfer_one._rs.184,"sps_bam_pipe_transfer_one"), iVar4 != 0)))) {
            _printk(0x800addb,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
        }
        if (arg1 == 0) {
            return 0xffffffff;
        }
        uVar6 = *(arg1 + 0x228);
        pcVar7 = "%s: sps:Transfer on BAM-to-BAM: BAM %pa pipe %d\n";
    }
    ipc_log_string(uVar6,pcVar7,"sps_bam_pipe_transfer_one",arg1 + 0x18,arg3_00);
    return 0xffffffff;
}


// ===== sym.pipe_handler_eot @ 0x08019b5c (size 1552) =====

void sym.pipe_handler_eot(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    ulong uVar11;
    char *pcVar12;
    uint uVar13;
    ulong *puVar14;
    ulong *puVar15;
    ulong *puVar16;
    int64_t iVar17;
    ulong *puVar18;
    ulong *in_x18;
    uint64_t uVar19;
    uint32_t uVar20;
    ulong *puVar21;
    int64_t *piVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar20 = *(arg2 + 0xbc);
    if (*(arg2 + 0x278) == 0) {
        uVar6 = arg1 + 0xd8;
        iVar9 = *(arg2 + 0xd8);
        *(arg2 + 0x278) = 1;
        uVar7 = sym.bam_read_reg_field.llvm.916431513089089357(uVar6,0x29,uVar20,0xffff);
        uVar19 = uVar7;
        if (*(arg1 + 0x238) == 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar10 = ___ratelimit(obj.pipe_handler_eot._rs.288,"pipe_handler_eot"), iVar10 != 0)))) {
                uVar13 = *(arg2 + 0xbc);
                uVar8 = sym.bam_read_reg_field.llvm.916431513089089357(uVar6,0x28,uVar20,0xffff);
                _printk(0x8006618,"pipe_handler_eot",uVar13,uVar19,uVar8,*(arg2 + 0xf4));
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                uVar11 = *(arg1 + 0x210);
                uVar13 = *(arg2 + 0xbc);
                uVar8 = sym.bam_read_reg_field.llvm.916431513089089357(uVar6,0x28,uVar20,0xffff);
                ipc_log_string(uVar11,
                               "%s: sps: pipe index:%d; read pointer:0x%x; write pointer:0x%x; sys.acked_offset:0x%x\n"
                               ,"pipe_handler_eot",uVar13,uVar19,uVar8,*(arg2 + 0xf4));
            }
        }
        uVar20 = uVar7;
        if ((iVar9 == 0) && (*(arg2 + 0xd0) != '\0')) {
            if (uVar7 == 0) {
                uVar19 = *(arg2 + 0xe0);
            }
            uVar20 = uVar19 - 8;
            if ((*(*(arg2 + 0xe8) + uVar19 + -1) & 0x40) != 0) {
                uVar20 = uVar7;
            }
        }
        if (*(arg2 + 0x270) == 0) {
            iVar4 = 0xf4;
            if (*(arg2 + 0x274) != 0) {
                iVar4 = 0x100;
            }
            uVar6 = *(arg2 + iVar4);
            uVar19 = uVar6;
            if (uVar6 != uVar20) {
                uVar7 = (*(arg2 + 0xc4) & 0x20) << 9;
                uVar3 = uVar7 | (*(arg2 + 0xc4) & 1) << 0xf;
                if (iVar9 == 0) {
                    puVar18 = *(arg2 + 0xe8);
                    puVar15 = puVar18 + uVar19;
                    puVar21 = *(arg2 + 0xf8) + uVar19;
                    puVar14 = puVar21;
                    puVar16 = puVar15;
                    if ((uVar20 < uVar6) &&
                       (puVar1 = puVar18 + *(arg2 + 0xe0), puVar14 = *(arg2 + 0xf8), puVar16 = puVar18,
                       puVar15 < puVar1)) {
                        do {
                            puVar14 = puVar15 + 1;
                            *puVar21 = *puVar15;
                            puVar21 = puVar21 + 1;
                            puVar15 = puVar14;
                        } while (puVar14 < puVar1);
                        puVar18 = *(arg2 + 0xe8);
                        puVar14 = *(arg2 + 0xf8);
                        puVar16 = puVar18;
                    }
                    for (; puVar16 < puVar18 + uVar20; puVar16 = puVar16 + 1) {
                        *puVar14 = *puVar16;
                        puVar14 = puVar14 + 1;
                    }
                }
                puVar15 = arg2 + 0x240;
                puVar21 = *(arg2 + 0xf8) + uVar19;
                piVar22 = *(arg2 + 0x108) + (uVar19 & 0xfffffff8);
                while( true ) {
                    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar9 = ___ratelimit(obj.pipe_handler_eot._rs.297,"pipe_handler_eot"), iVar9 != 0)))) {
                        uVar11 = 0x800b728;
                        if (*piVar22 != 0) {
                            uVar11 = 0x8006670;
                        }
                        _printk(0x800b1f8,"pipe_handler_eot",*(arg2 + 0xbc),*puVar21,*(puVar21 + 4) & 0xffff,
                                *(puVar21 + 4) >> 0x10,uVar3,uVar11);
                    }
                    if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                        uVar11 = 0x800b728;
                        if (*piVar22 != 0) {
                            uVar11 = 0x8006670;
                        }
                        ipc_log_string(*(arg1 + 0x210),
                                       "%s: sps: pipe index:%d; iovec addr:0x%pK; size:0x%x; flags:0x%x; enabled:0x%x; *user is %s NULL\n"
                                       ,"pipe_handler_eot",*(arg2 + 0xbc),*puVar21,*(puVar21 + 4) & 0xffff,
                                       *(puVar21 + 4) >> 0x10,uVar3,uVar11);
                    }
                    uVar6 = uVar19 + 8;
                    if (*(arg2 + 0xe0) <= uVar6) {
                        uVar6 = 0;
                    }
                    uVar19 = uVar6;
                    *(arg2 + iVar4) = uVar6;
                    uVar5 = *(puVar21 + 4) >> 0x10;
                    if ((*piVar22 != 0) || ((uVar3 & uVar5) != 0)) {
                        *(arg2 + 0x260) = 0;
                        *(arg2 + 0x268) = 0;
                        *(arg2 + 0x250) = 0;
                        *(arg2 + 600) = 0;
                        *puVar15 = 0;
                        *(arg2 + 0x248) = 0;
                        iVar9 = 1;
                        if ((uVar5 & uVar7) == 0) {
                            iVar9 = 2;
                        }
                        if (puVar15 == NULL) {
                            if ((obj.logging_option != 0x1) &&
                               ((obj.print_limit_option < 3 ||
                                (iVar9 = ___ratelimit(obj.pipe_handler_eot._rs.301,"pipe_handler_eot"), iVar9 != 0))))
                            {
                                _printk(0x800746c,"pipe_handler_eot",*(arg2 + 0xbc));
                            }
                            if (arg1 != 0) {
                                ipc_log_string(*(arg1 + 0x228),"%s: sps: pipe %d: event is NULL\n","pipe_handler_eot"
                                               ,*(arg2 + 0xbc));
                            }
                        }
                        else {
                            iVar2 = arg2 + (iVar9 - 1) * 0x20;
                            *(arg2 + 0x260) = *puVar21;
                            iVar17 = *piVar22;
                            *(arg2 + 600) = iVar9;
                            *(arg2 + 0x268) = iVar17;
                            *(arg2 + 0x250) = *(iVar2 + 0x128);
                            sym.trigger_event(arg1,iVar2 + 0x110,puVar15);
                        }
                    }
                    if (uVar6 == uVar20) break;
                    if (uVar6 == 0) {
                        puVar21 = *(arg2 + 0xf8);
                        piVar22 = *(arg2 + 0x108);
                    }
                    else {
                        puVar21 = puVar21 + 1;
                        piVar22 = piVar22 + 1;
                    }
                }
                *(arg2 + 0x278) = 0;
                return;
            }
            *(arg2 + 0x278) = 0;
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar9 = ___ratelimit(obj.pipe_handler_eot._rs.294,"pipe_handler_eot"), iVar9 != 0)))) {
                _printk(0x800bf66,"pipe_handler_eot",*(arg2 + 0xbc));
            }
            if (arg1 == 0) {
                return;
            }
            if (*(arg1 + 0x238) != 0) {
                return;
            }
            uVar11 = *(arg1 + 0x210);
            uVar13 = *(arg2 + 0xbc);
            pcVar12 = "%s: sps: there is no completed desc to process for pipe %d\n";
        }
        else {
            if (*(arg2 + 0x274) == 0) {
                *(arg2 + 0xf4) = uVar20;
            }
            *(arg2 + 0x278) = 0;
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar9 = ___ratelimit(obj.pipe_handler_eot._rs.291,"pipe_handler_eot"), iVar9 != 0)))) {
                _printk(0x80094e1,"pipe_handler_eot",*(arg2 + 0xbc));
            }
            if (arg1 == 0) {
                return;
            }
            if (*(arg1 + 0x238) != 0) {
                return;
            }
            uVar11 = *(arg1 + 0x210);
            uVar13 = *(arg2 + 0xbc);
            pcVar12 = "%s: sps: pipe %d has no queue\n";
        }
        goto code_r0x08019d20;
    }
    if ((1 < obj.logging_option) && (3 < obj.debug_level_option)) {
        if (obj.print_limit_option != 0x0) {
            iVar9 = ___ratelimit(obj.pipe_handler_eot._rs,"pipe_handler_eot");
            if (iVar9 == 0) goto code_r0x08019ba8;
            uVar20 = *(arg2 + 0xbc);
        }
        _printk(0x800457d,"pipe_handler_eot",uVar20);
    }
code_r0x08019ba8:
    if (arg1 == 0) {
        return;
    }
    if (*(arg1 + 0x238) != 0) {
        return;
    }
    uVar11 = *(arg1 + 0x210);
    uVar13 = *(arg2 + 0xbc);
    pcVar12 = "%s: sps: still handling EOT for pipe %d\n";
code_r0x08019d20:
    ipc_log_string(uVar11,pcVar12,"pipe_handler_eot",uVar13);
    return;
}


// ===== sym.sps_bam_pipe_transfer @ 0x0801a16c (size 588) =====

ulong sym.sps_bam_pipe_transfer(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    char *arg3_00;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    uchar *puVar11;
    code *pcVar12;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    puVar11 = &stack0xffffffffffffffc0;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_4c = 0;
    if (0x1e < arg2) {
    //WARNING: Does not return
        pcVar12 = SoftwareBreakpoint(0x5512,0x801a3b4);
        (*pcVar12)();
    }
    uVar6 = arg2;
    if (*(arg3 + 0x10) == 0) {
        arg3_00 = arg3;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_pipe_transfer._rs,"sps_bam_pipe_transfer"), arg3_00 = arg3, iVar1 != 0)
            ))) {
            arg3_00 = arg1 + 0x18;
            _printk(0x8009c34,"sps_bam_pipe_transfer",arg3_00,uVar6);
        }
        if (arg1 != 0) {
            arg3_00 = "sps_bam_pipe_transfer";
            ipc_log_string(*(arg1 + 0x228),"%s: sps:iovec count zero: BAM %pa pipe %d\n","sps_bam_pipe_transfer",
                           arg1 + 0x18,uVar6);
        }
    }
    else {
        iVar7 = *(arg1 + uVar6 * 8 + 0x100);
        if ((*(iVar7 + 0x274) == 0) && (*(iVar7 + 200) != 0)) {
            arg3_00 = &uStack_4c;
            sym.sps_bam_pipe_get_unused_desc_num(arg1,arg2,arg3_00);
            uStack_4c = ~uStack_4c + (*(iVar7 + 0xe0) >> 3);
        }
        else {
            arg3_00 = &uStack_4c;
            sym.sps_bam_get_free_count(arg1,arg2,arg3_00);
        }
        uVar2 = uStack_4c;
        if (*(arg3 + 0x10) <= uStack_4c) {
            iVar1 = *(arg3 + 0x10) - 1;
            if (-1 < iVar1) {
                puVar8 = *(arg3 + 8) + 4;
                do {
                    arg3_00 = puVar8[-1];
                    iVar4 = sym.sps_bam_pipe_transfer_one(arg1,arg2,arg3_00,*puVar8 & 0xffff);
                    if (iVar4 != 0) goto code_r0x0801a2e4;
                    iVar1 = iVar1 + -1;
                    puVar8 = puVar8 + 2;
                } while (-1 < iVar1);
            }
            uVar5 = 0;
            goto code_r0x0801a344;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_pipe_transfer._rs.205,"sps_bam_pipe_transfer"), iVar1 != 0)))) {
            arg3_00 = arg1 + 0x18;
            _printk(0x800a112,"sps_bam_pipe_transfer",arg3_00,uVar6,uVar2);
        }
        if (arg1 != 0) {
            arg3_00 = "sps_bam_pipe_transfer";
            ipc_log_string(*(arg1 + 0x228),"%s: sps:Insufficient free desc: BAM %pa pipe %d: %d\n",
                           "sps_bam_pipe_transfer",arg1 + 0x18,uVar6,uVar2);
        }
    }
code_r0x0801a2e4:
    uVar5 = 0xffffffff;
code_r0x0801a344:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar10 = __stack_chk_fail(uVar5);
    uVar2 = auVar10._8_4_;
    iVar7 = auVar10._0_8_;
    if (0x1e < uVar2) {
    //WARNING: Does not return
        pcVar12 = SoftwareBreakpoint(0x5512,0x801a510);
        (*pcVar12)();
    }
    *extraout_x18 = sym.sps_bam_pipe_get_unused_desc_num;
    pcVar12 = sym.sps_bam_pipe_get_unused_desc_num;
    uVar6 = uVar2;
    iVar9 = *(iVar7 + uVar2 * 8 + 0x100);
    if (iVar9 == 0) {
        uVar5 = 0xffffffff;
    }
    else {
        uVar2 = auVar10._0_4_ + 0xd8;
        iVar1 = *(iVar9 + 0xe0);
        uVar3 = sym.bam_read_reg_field.llvm.916431513089089357(uVar2,0x29,uVar6,0xffff);
        if (((*(iVar7 + 0x11) >> 2 & 1) == 0) || ((*(iVar9 + 0xb8) >> 4 & 1) != 0)) {
            uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(uVar2,0x28,uVar6,0xffff);
        }
        else {
            uVar2 = *(iVar9 + 0xf0);
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.sps_bam_pipe_get_unused_desc_num._rs,"sps_bam_pipe_get_unused_desc_num"),
                iVar4 != 0)))) {
                _printk(0x8005247,"sps_bam_pipe_get_unused_desc_num",iVar7 + 0x18,uVar6,uVar2);
            }
            if ((iVar7 != 0) && (*(iVar7 + 0x238) == 0)) {
                ipc_log_string(*(iVar7 + 0x210),"%s: sps:BAM %pa pipe %d: peer offset in cache:0x%x\n",
                               "sps_bam_pipe_get_unused_desc_num",iVar7 + 0x18,uVar6,uVar2,in_x6,in_x7,puVar11,
                               pcVar12);
            }
        }
        uVar5 = 0;
        if (uVar3 <= uVar2) {
            iVar1 = 0;
        }
        *arg3_00 = (uVar2 - uVar3) + iVar1 >> 3;
    }
    return uVar5;
}


// ===== sym.sps_bam_pipe_get_unused_desc_num @ 0x0801a3b8 (size 372) =====

ulong sym.sps_bam_pipe_get_unused_desc_num(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t arg3_00;
    int64_t iVar7;
    ulong unaff_x30;
    
    if (arg2 < 0x1f) {
        *in_x18 = unaff_x30;
        arg3_00 = arg2;
        iVar7 = *(arg1 + arg2 * 8 + 0x100);
        if (iVar7 == 0) {
            uVar6 = 0xffffffff;
        }
        else {
            uVar3 = arg1 + 0xd8;
            iVar1 = *(iVar7 + 0xe0);
            uVar4 = sym.bam_read_reg_field.llvm.916431513089089357(uVar3,0x29,arg3_00,0xffff);
            if (((*(arg1 + 0x11) >> 2 & 1) == 0) || ((*(iVar7 + 0xb8) >> 4 & 1) != 0)) {
                uVar3 = sym.bam_read_reg_field.llvm.916431513089089357(uVar3,0x28,arg3_00,0xffff);
            }
            else {
                uVar3 = *(iVar7 + 0xf0);
                if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar5 = ___ratelimit(obj.sps_bam_pipe_get_unused_desc_num._rs,"sps_bam_pipe_get_unused_desc_num")
                    , iVar5 != 0)))) {
                    _printk(0x8005247,"sps_bam_pipe_get_unused_desc_num",arg1 + 0x18,arg3_00,uVar3);
                }
                if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                    ipc_log_string(*(arg1 + 0x210),"%s: sps:BAM %pa pipe %d: peer offset in cache:0x%x\n",
                                   "sps_bam_pipe_get_unused_desc_num",arg1 + 0x18,arg3_00,uVar3);
                }
            }
            uVar6 = 0;
            if (uVar4 <= uVar3) {
                iVar1 = 0;
            }
            *arg3 = (uVar3 - uVar4) + iVar1 >> 3;
        }
        return uVar6;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x801a510);
    (*pcVar2)();
}


// ===== sym.sps_bam_get_free_count @ 0x0801a52c (size 280) =====

ulong sym.sps_bam_get_free_count(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg2 < 0x1f) {
        *in_x18 = unaff_x30;
        iVar6 = *(arg1 + arg2 * 8 + 0x100);
        if ((*(iVar6 + 0xb8) & 0x50) == 0) {
            uVar1 = *(iVar6 + 0xe0);
            uVar4 = 0;
            uVar5 = *(iVar6 + 0xf0) + 8;
            if (uVar1 <= uVar5) {
                uVar5 = 0;
            }
            if (uVar5 <= *(iVar6 + 0xf4)) {
                uVar1 = 0;
            }
            uVar5 = (*(iVar6 + 0xf4) - uVar5) + uVar1 >> 3;
        }
        else {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.sps_bam_get_free_count._rs,"sps_bam_get_free_count"), iVar3 != 0)))) {
                _printk(0x8006b18,"sps_bam_get_free_count",arg1 + 0x18,arg2);
            }
            if (arg1 != 0) {
                ipc_log_string(*(arg1 + 0x228),"%s: sps:Free count on BAM-to-BAM or remote: BAM %pa pipe %d\n",
                               "sps_bam_get_free_count",arg1 + 0x18,arg2);
            }
            uVar5 = 0;
            uVar4 = 0xffffffff;
        }
        *arg3 = uVar5;
        return uVar4;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x801a644);
    (*pcVar2)();
}


// ===== sym.sps_bam_pipe_inject_zlt @ 0x0801a644 (size 1308) =====

ulong sym.sps_bam_pipe_inject_zlt(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    uint32_t arg1_00;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    char *pcVar6;
    ulong *in_x18;
    uint64_t arg3;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    if (0x1e < arg2) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x801aad4);
        (*pcVar1)();
    }
    *in_x18 = unaff_x30;
    arg3 = arg2;
    iVar9 = *(arg1 + arg2 * 8 + 0x100);
    if ((*(iVar9 + 0xb8) >> 4 & 1) == 0) {
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_inject_zlt._rs.210,"sps_bam_pipe_inject_zlt"), iVar5 != 0)))) {
            _printk(0x8009c61,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3);
        }
        if ((arg1 == 0) || (2 < *(arg1 + 0x238))) goto code_r0x0801a6e8;
        pcVar6 = "%s: sps: BAM-to-System pipe: BAM %pa pipe %d\n";
    }
    else {
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_inject_zlt._rs,"sps_bam_pipe_inject_zlt"), iVar5 != 0)))) {
            _printk(0x800a5d0,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3);
        }
        if ((arg1 == 0) || (2 < *(arg1 + 0x238))) goto code_r0x0801a6e8;
        pcVar6 = "%s: sps: BAM-to-BAM pipe: BAM %pa pipe %d\n";
    }
    ipc_log_string(*(arg1 + 0x220),pcVar6,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3);
code_r0x0801a6e8:
    if ((*(iVar9 + 0xb8) >> 3 & 1) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_inject_zlt._rs.213,"sps_bam_pipe_inject_zlt"), iVar5 != 0)))) {
            _printk(0x8008c65,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3);
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x228),"%s: sps: BAM %pa pipe %d is not enabled\n","sps_bam_pipe_inject_zlt",
                           arg1 + 0x18,arg3);
        }
    }
    else {
        arg1_00 = arg1 + 0xd8;
        uVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x29,arg3,0xffff);
        uVar3 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x28,arg3,0xffff);
        uVar7 = uVar3;
        if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_inject_zlt._rs.216,"sps_bam_pipe_inject_zlt"), iVar5 != 0)))) {
            _printk(0x80064fc,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3,uVar2,uVar7);
        }
        if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
            ipc_log_string(*(arg1 + 0x220),"%s: sps: BAM %pa pipe %d: read pointer:0x%x; write pointer:0x%x\n",
                           "sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3,uVar2,uVar7);
        }
        if (uVar2 != uVar3) {
            uVar3 = uVar3 + 8;
            if (*(iVar9 + 0xe0) <= uVar3) {
                if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar5 = ___ratelimit(obj.sps_bam_pipe_inject_zlt._rs.222,"sps_bam_pipe_inject_zlt"), iVar5 != 0))
                   )) {
                    _printk(0x800c4d0,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3,uVar3);
                }
                if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
                    ipc_log_string(*(arg1 + 0x220),"%s: sps: BAM %pa pipe %d: next write is 0x%x: wrap around\n",
                                   "sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3,uVar3);
                }
                uVar3 = 0;
            }
            *(*(iVar9 + 0x58) + uVar7) = 0x4000000000000000;
            sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,0x28,arg3,0xffff);
            DataSynchronizationBarrier(3,2,0);
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.sps_bam_pipe_inject_zlt._rs.225,"sps_bam_pipe_inject_zlt"), iVar5 != 0)))) {
                uVar4 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x28,arg3,0xffff);
                _printk(0x8009483,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3,uVar3,uVar4);
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) < 3)) {
                uVar8 = *(arg1 + 0x220);
                uVar4 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x28,arg3,0xffff);
                ipc_log_string(uVar8,
                               "%s: sps: BAM %pa pipe %d: write pointer to tell HW: 0x%x; write pointer read from HW: 0x%x\n"
                               ,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3,uVar3,uVar4);
            }
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_inject_zlt._rs.219,"sps_bam_pipe_inject_zlt"), iVar5 != 0)))) {
            _printk(0x800cb27,"sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3,uVar2);
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x228),
                           "%s: sps: BAM %pa pipe %d: read pointer 0x%x is already equal to write pointer\n",
                           "sps_bam_pipe_inject_zlt",arg1 + 0x18,arg3,uVar2);
        }
    }
    return 0xffffffff;
}


// ===== sym.sps_bam_pipe_get_event @ 0x0801ab60 (size 640) =====

ulong sym.sps_bam_pipe_get_event(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    int iVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    if (0x1e < arg2) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x801ada8);
        (*pcVar5)();
    }
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + arg2 * 8 + 0x100);
    if (*(iVar10 + 0x270) == 0) {
        if ((*(iVar10 + 200) != 0) && ((*(iVar10 + 0xb8) >> 4 & 1) == 0)) {
            sym.pipe_handler_eot(arg1,iVar10);
        }
        puVar1 = iVar10 + 0x230;
        if (puVar1 == *puVar1) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar6 = ___ratelimit(obj.sps_bam_pipe_get_event._rs.230,"sps_bam_pipe_get_event"), iVar6 != 0)))) {
                _printk(0x800a1b9,"sps_bam_pipe_get_event",arg1 + 0x18);
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                ipc_log_string(*(arg1 + 0x210),"%s: sps:events_q of bam %pa is empty\n","sps_bam_pipe_get_event",
                               arg1 + 0x18);
            }
        }
        else {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar6 = ___ratelimit(obj.sps_bam_pipe_get_event._rs.233,"sps_bam_pipe_get_event"), iVar6 != 0)))) {
                _printk(0x800ae93,"sps_bam_pipe_get_event",arg1 + 0x18);
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                ipc_log_string(*(arg1 + 0x210),"%s: sps:events_q of bam %pa is not empty\n","sps_bam_pipe_get_event",
                               arg1 + 0x18);
            }
            piVar9 = *puVar1;
            uVar8 = __list_del_entry_valid(piVar9);
            if ((uVar8 & 1) != 0) {
                iVar10 = *piVar9;
                piVar2 = piVar9[1];
                *(iVar10 + 8) = piVar2;
                *piVar2 = iVar10;
            }
            *piVar9 = -0x2152ffffffffff00;
            piVar9[1] = -0x2152fffffffffede;
            if (piVar9 != NULL) {
                iVar3 = piVar9[5];
                iVar10 = piVar9[2];
                iVar4 = piVar9[3];
                *(arg3 + 0x10) = piVar9[4];
                *(arg3 + 0x18) = iVar3;
                *arg3 = iVar10;
                *(arg3 + 8) = iVar4;
                kfree(piVar9);
                return 0;
            }
        }
        uVar7 = 0;
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar6 = ___ratelimit(obj.sps_bam_pipe_get_event._rs,"sps_bam_pipe_get_event"), iVar6 != 0)))) {
            _printk(0x8006f54,"sps_bam_pipe_get_event",arg1 + 0x18,arg2,iVar10);
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x228),"%s: sps:Invalid connection for event: BAM %pa pipe %d context 0x%pK\n",
                           "sps_bam_pipe_get_event",arg1 + 0x18,arg2,iVar10);
        }
        uVar7 = 0xffffffff;
    }
    *(arg3 + 8) = 0;
    return uVar7;
}


// ===== sym.sps_bam_pipe_get_iovec @ 0x0801ade4 (size 748) =====

ulong sym.sps_bam_pipe_get_iovec(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint uVar2;
    uint32_t uVar3;
    uint uVar4;
    code *pcVar5;
    bool bVar6;
    uint32_t uVar7;
    int iVar8;
    ulong *in_x18;
    int64_t arg2_00;
    uint64_t arg3_00;
    ulong unaff_x30;
    
    if (0x1e < arg2) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x801b06c);
        (*pcVar5)();
    }
    *in_x18 = unaff_x30;
    arg3_00 = arg2;
    arg2_00 = *(arg1 + arg2 * 8 + 0x100);
    if ((*(arg2_00 + 0x274) == 0) || ((*(arg2_00 + 0xb8) & 0x50) != 0)) {
        return 0xffffffff;
    }
    iVar8 = *(arg2_00 + 200);
    if (((iVar8 == 0) && (*(arg2_00 + 0xcc) == 0)) || (*(arg2_00 + 0x270) != 0)) {
        if (*(arg2_00 + 0x270) == 0) goto code_r0x0801aec8;
code_r0x0801ae5c:
        uVar7 = sym.bam_read_reg_field.llvm.916431513089089357(arg1 + 0xd8,0x29,arg3_00,0xffff);
    }
    else {
        if ((1 < obj.logging_option) && (3 < obj.debug_level_option)) {
            if (obj.print_limit_option != 0x0) {
                iVar8 = ___ratelimit(obj.sps_bam_pipe_get_iovec._rs,"sps_bam_pipe_get_iovec");
                if (iVar8 == 0) goto code_r0x0801ae84;
                iVar8 = *(arg2_00 + 200);
            }
            _printk(0x8004e22,"sps_bam_pipe_get_iovec",arg1 + 0x18,arg3_00,iVar8,*(arg2_00 + 0xcc));
        }
code_r0x0801ae84:
        if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
            ipc_log_string(*(arg1 + 0x210),"%s: sps: BAM: %pa; pipe index:%d; polled is %d; hybrid is %d\n",
                           "sps_bam_pipe_get_iovec",arg1 + 0x18,arg3_00,*(arg2_00 + 200),*(arg2_00 + 0xcc));
        }
        sym.pipe_handler_eot(arg1,arg2_00);
        if (*(arg2_00 + 0x270) != 0) goto code_r0x0801ae5c;
code_r0x0801aec8:
        uVar7 = *(arg2_00 + 0x100);
    }
    if (uVar7 == *(arg2_00 + 0xf4)) {
        *arg3 = 0;
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar8 = ___ratelimit(obj.sps_bam_pipe_get_iovec._rs.238,"sps_bam_pipe_get_iovec"), iVar8 != 0)))) {
            _printk(0x800b6ef,"sps_bam_pipe_get_iovec",arg1 + 0x18,arg3_00);
        }
        if (arg1 == 0) {
            return 0;
        }
        if (*(arg1 + 0x238) != 0) {
            return 0;
        }
        ipc_log_string(*(arg1 + 0x210),"%s: sps: BAM: %pa; pipe index:%d; no iovec to process\n",
                       "sps_bam_pipe_get_iovec",arg1 + 0x18,arg3_00);
        return 0;
    }
    puVar1 = *(arg2_00 + 0xe8) + *(arg2_00 + 0xf4);
    *arg3 = *puVar1;
    uVar7 = *(arg2_00 + 0xf4) + 8;
    if (*(arg2_00 + 0xe0) <= uVar7) {
        uVar7 = 0;
    }
    bVar6 = 1 < obj.logging_option;
    *(arg2_00 + 0xf4) = uVar7;
    if ((bVar6) && (3 < obj.debug_level_option)) {
        if (obj.print_limit_option == 0x0) {
            uVar2 = *puVar1;
            uVar3 = *(puVar1 + 4);
            uVar4 = *(arg2_00 + 0xbc);
        }
        else {
            iVar8 = ___ratelimit(obj.sps_bam_pipe_get_iovec._rs.241,"sps_bam_pipe_get_iovec");
            if (iVar8 == 0) goto code_r0x0801af54;
            uVar2 = *puVar1;
            uVar3 = *(puVar1 + 4);
            uVar4 = *(arg2_00 + 0xbc);
            uVar7 = *(arg2_00 + 0xf4);
        }
        _printk(0x800aebf,"sps_bam_pipe_get_iovec",uVar4,uVar2,uVar3 & 0xffff,uVar3 >> 0x10,uVar7);
    }
code_r0x0801af54:
    if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
        ipc_log_string(*(arg1 + 0x210),
                       "%s: sps: pipe index:%d; iovec addr:0x%pK; size:0x%x; flags:0x%x; acked_offset:0x%x\n",
                       "sps_bam_pipe_get_iovec",*(arg2_00 + 0xbc),*puVar1,*(puVar1 + 4) & 0xffff,
                       *(puVar1 + 4) >> 0x10,*(arg2_00 + 0xf4));
    }
    return 0;
}


// ===== sym.sps_bam_pipe_is_empty @ 0x0801b0d0 (size 924) =====

ulong sym.sps_bam_pipe_is_empty(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t arg1_00;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t arg3_00;
    int64_t iVar7;
    ulong unaff_x30;
    
    if (0x1e < arg2) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x801b418);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    arg3_00 = arg2;
    iVar7 = *(arg1 + arg2 * 8 + 0x100);
    if ((*(iVar7 + 0xb8) >> 6 & 1) != 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.sps_bam_pipe_is_empty._rs,"sps_bam_pipe_is_empty"), iVar5 != 0)))) {
            _printk(0x80058ea,"sps_bam_pipe_is_empty",arg1 + 0x18,arg3_00);
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x228),"%s: sps:Is empty on remote: BAM %pa pipe %d\n","sps_bam_pipe_is_empty",
                           arg1 + 0x18,arg3_00);
            return 0xffffffff;
        }
        return 0xffffffff;
    }
    arg1_00 = arg1 + 0xd8;
    uVar3 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x29,arg3_00,0xffff);
    if ((*(iVar7 + 0xb8) >> 4 & 1) == 0) {
        uVar4 = *(iVar7 + 0xf4);
    }
    else {
        uVar4 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x28,arg3_00,0xffff);
    }
    if (uVar3 == uVar4) {
        *arg3 = 1;
    }
    else {
        if ((*(iVar7 + 0xb8) >> 4 & 1) == 0) {
            *arg3 = 0;
            if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.sps_bam_pipe_is_empty._rs.246,"sps_bam_pipe_is_empty"), iVar5 != 0)))) {
                _printk(0x80073e1,"sps_bam_pipe_is_empty",*(iVar7 + 0xbc));
            }
            if (arg1 != 0) {
                if (*(arg1 + 0x238) < 2) {
                    ipc_log_string(*(arg1 + 0x218),"%s: sps: pipe index:%d; this sys2bam pipe is NOT empty\n",
                                   "sps_bam_pipe_is_empty",*(iVar7 + 0xbc));
                    return 0;
                }
                return 0;
            }
            return 0;
        }
        uVar6 = sym.bam_pipe_check_zlt(arg1_00,arg3_00);
        if ((uVar6 & 1) != 0) {
            uVar6 = sym.bam_pipe_check_pipe_empty(arg1_00,arg3_00);
            uVar4 = uVar4 + 8;
            if (*(iVar7 + 0xe0) <= uVar4) {
                uVar4 = 0;
            }
            if (uVar4 == uVar3) {
                *arg3 = 1;
                if ((uVar6 & 1) == 0) {
                    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar5 = ___ratelimit(obj.sps_bam_pipe_is_empty._rs.249,"sps_bam_pipe_is_empty"), iVar5 != 0))
                       )) {
                        _printk(0x800a1e1,"sps_bam_pipe_is_empty",arg1 + 0x18,arg3_00);
                    }
                    if ((arg1 != 0) && (*(arg1 + 0x238) < 4)) {
                        ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM %pa pipe %d pipe empty checking for ZLT\n",
                                       "sps_bam_pipe_is_empty",arg1 + 0x18,arg3_00);
                    }
                }
                goto code_r0x0801b2b8;
            }
        }
        *arg3 = 0;
    }
code_r0x0801b2b8:
    if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar5 = ___ratelimit(obj.sps_bam_pipe_is_empty._rs.252,"sps_bam_pipe_is_empty"), iVar5 != 0)))) {
        uVar1 = 0x800b729;
        if (*arg3 != 0) {
            uVar1 = 0x800b728;
        }
        _printk(0x800606b,"sps_bam_pipe_is_empty",*(iVar7 + 0xbc),uVar1);
    }
    if ((arg1 != 0) && (*(arg1 + 0x238) < 2)) {
        uVar1 = 0x800b729;
        if (*arg3 != 0) {
            uVar1 = 0x800b728;
        }
        ipc_log_string(*(arg1 + 0x218),"%s: sps: pipe index:%d; this pipe is %s empty\n","sps_bam_pipe_is_empty",
                       *(iVar7 + 0xbc),uVar1);
    }
    return 0;
}


// ===== sym.sps_bam_set_satellite @ 0x0801b46c (size 580) =====

ulong sym.sps_bam_set_satellite(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    code *pcVar3;
    uint32_t arg1_00;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    char *pcVar7;
    ulong *in_x18;
    int64_t *piVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    
    if (0x1e < arg2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x801b6b0);
        (*pcVar3)();
    }
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x78) & 3) == 2) {
        uVar9 = 1L << (arg2 & 0x3f);
        if ((uVar9 & *(arg1 + 0xf8)) != 0) {
            piVar8 = *(arg1 + arg2 * 8 + 0x100);
            if (piVar8[0x19] == 0) {
                sym.bam_pipe_set_irq(arg1 + 0xd8,arg2,0,*(piVar8 + 0xc4));
            }
            if ((*(arg1 + 0xe0) < 3) && (((*(piVar8 + 0x17) >> 5 & 1) == 0 || (piVar8[0x19] != 0)))) {
                arg1_00 = arg1 + 0xd8;
                sym.bam_write_reg.llvm.916431513089089357(arg1_00,0x21,arg2,0);
                sym.bam_write_reg_field.llvm.916431513089089357(arg1_00,8,0,1 << (arg2 & 0x1f));
                *(piVar8 + 0x17) = *(piVar8 + 0x17) | 0x20;
            }
            uVar5 = __list_del_entry_valid(piVar8);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar8;
                piVar2 = piVar8[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar8 = -0x2152ffffffffff00;
            piVar8[1] = -0x2152fffffffffede;
            *(arg1 + 0xf8) = *(arg1 + 0xf8) & (uVar9 ^ 0xffffffff);
            *(arg1 + 0xfc) = *(arg1 + 0xfc) | *(piVar8 + 0x18);
            *(piVar8 + 0x17) = *(piVar8 + 0x17) | 0x40;
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.sps_bam_set_satellite._rs.261,"sps_bam_set_satellite"), iVar4 != 0)))) {
            _printk(0x800741b,"sps_bam_set_satellite",arg1 + 0x18,arg2);
        }
        if (arg1 == 0) {
            return 0xffffffff;
        }
        uVar6 = *(arg1 + 0x228);
        pcVar7 = "%s: sps:BAM %pa pipe %d not local and active\n";
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.sps_bam_set_satellite._rs,"sps_bam_set_satellite"), iVar4 != 0)))) {
            _printk(0x800bf29,"sps_bam_set_satellite",arg1 + 0x18,arg2);
        }
        if (arg1 == 0) {
            return 0xffffffff;
        }
        uVar6 = *(arg1 + 0x228);
        pcVar7 = "%s: sps:Cannot grant satellite control to BAM %pa pipe %d\n";
    }
    ipc_log_string(uVar6,pcVar7,"sps_bam_set_satellite",arg1 + 0x18,arg2);
    return 0xffffffff;
}


// ===== sym.sps_bam_pipe_timer_ctrl @ 0x0801b6b0 (size 336) =====

uint sym.sps_bam_pipe_timer_ctrl(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t arg2_00;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = arg2 & 0xffffffff;
    if ((*(arg1 + 0xf8) >> (arg2 & 0x3fU) & 1) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_bam_pipe_timer_ctrl._rs,"sps_bam_pipe_timer_ctrl"), iVar2 != 0)))) {
            _printk(0x800741b,"sps_bam_pipe_timer_ctrl",arg1 + 0x18,arg2_00);
        }
        if (arg1 != 0) {
            ipc_log_string(*(arg1 + 0x228),"%s: sps:BAM %pa pipe %d not local and active\n","sps_bam_pipe_timer_ctrl"
                           ,arg1 + 0x18,arg2_00);
        }
        return 0xffffffff;
    }
    iVar2 = *arg3;
    if (iVar2 != 2) {
        if (iVar2 == 1) {
            sym.bam_pipe_timer_reset(arg1 + 0xd8,arg2_00);
            uVar3 = 0;
            goto joined_r0x0801b7a4;
        }
        if (iVar2 != 0) {
            uVar3 = 0xffffffff;
            goto joined_r0x0801b7a4;
        }
        sym.bam_pipe_timer_config(arg1 + 0xd8,arg2_00,*(arg3 + 4) != 0,*(arg3 + 8) << 3);
    }
    uVar3 = 0;
joined_r0x0801b7a4:
    if (arg4 != 0) {
        uVar1 = sym.bam_read_reg.llvm.916431513089089357(arg1 + 0xd8,0x22,arg2_00);
        *arg4 = uVar1;
    }
    return uVar3;
}


// ===== sym.sps_bam_pipe_pending_desc @ 0x0801b800 (size 108) =====

bool sym.sps_bam_pipe_pending_desc(int64_t arg1,int64_t arg2)

{
    uint32_t arg1_00;
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0xd8;
    iVar1 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x29,arg2 & 0xffffffffU,0xffff);
    iVar2 = sym.bam_read_reg_field.llvm.916431513089089357(arg1_00,0x28,arg2 & 0xffffffffU,0xffff);
    return iVar1 != iVar2;
}


// ===== sym.trigger_event @ 0x0801b86c (size 576) =====

void sym.trigger_event(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 == 0) {
        if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.trigger_event._rs,"trigger_event"), iVar1 != 0)))) {
            _printk(0x8007fbf,"trigger_event","sps:trigger_event.sps_event is NULL\n");
        }
        if ((arg1 != 0) && (*(arg1 + 0x238) < 2)) {
            ipc_log_string(*(arg1 + 0x218),"%s: %s","trigger_event","sps:trigger_event.sps_event is NULL\n");
        }
    }
    else {
        if (*arg2 != 0) {
            complete();
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.trigger_event._rs.307,"trigger_event"), iVar1 != 0)))) {
                _printk(0x800b73a,"trigger_event",**arg2);
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                ipc_log_string(*(arg1 + 0x210),"%s: sps: done=%d\n","trigger_event",**arg2);
            }
        }
        if (*(arg2 + 8) != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.trigger_event._rs.310,"trigger_event"), iVar1 != 0)))) {
                _printk(0x8007fbf,"trigger_event","sps:trigger_event.using callback\n");
            }
            if ((arg1 != 0) && (*(arg1 + 0x238) == 0)) {
                ipc_log_string(*(arg1 + 0x210),"%s: %s","trigger_event","sps:trigger_event.using callback\n");
            }
            pcVar2 = *(arg2 + 8);
            __cfi_slowpath_diag(0x89ee859b4d269e3e,pcVar2,0x80041e0);
            (*pcVar2)(arg3 + 0x10);
        }
    }
    return;
}


// ===== sym.sps_debugfs_record @ 0x0801baac (size 220) =====

void sym.sps_debugfs_record(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.sps_debugfs_lock);
    uVar1 = _segment.ehdr;
    if (obj.debugfs_record_enabled != 0x0) {
        if (_segment.ehdr <= _segment.ehdr + 0x50) {
            _segment.ehdr = 0;
            obj.wraparound = 0x1;
        }
        iVar2 = scnprintf(CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr,uVar1 - _segment.ehdr,arg1);
        _segment.ehdr = _segment.ehdr + iVar2;
        if (obj.wraparound == 0x1) {
            scnprintf(CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr,0,"\n**** end line of sps log ****\n\n");
        }
    }
    mutex_unlock(obj.sps_debugfs_lock);
    return;
}


// ===== sym.sps_get_bam_debug_info @ 0x0801bb88 (size 2488) =====

ulong sym.sps_get_bam_debug_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *arg1_00;
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t in_w4;
    ulong *in_x18;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_bam_debug_info._rs,"sps_get_bam_debug_info"), iVar2 != 0)))) {
            _printk(0x80045c9,"sps_get_bam_debug_info");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: device handle should not be 0\n",
                           "sps_get_bam_debug_info");
        }
        return 0xffffffff;
    }
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x30) == 0)) {
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar2 = ___ratelimit(obj.sps_get_bam_debug_info._rs.3,"sps_get_bam_debug_info"), iVar2 != 0)))) {
            _printk(0x800700c,"sps_get_bam_debug_info");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_get_bam_debug_info");
            return 0xfffffdfb;
        }
        return 0xfffffdfb;
    }
    uVar7 = arg4 & 0xffffffff;
    uVar6 = arg3 & 0xffffffff;
    mutex_lock(_segment.ehdr + 0x70);
    iVar3 = sym.sps_h2bam(arg1);
    if (iVar3 == 0) {
        _printk(0x80074b1,arg1);
        mutex_unlock(_segment.ehdr + 0x70);
        return 0xffffffff;
    }
    mutex_unlock(_segment.ehdr + 0x70);
    uVar1 = *(iVar3 + 0x30);
    uVar8 = uVar1;
    if (_segment.ehdr != 0) {
        ipc_log_string(*(_segment.ehdr + 0x118),"%s: sps:<bam-addr> dump BAM:%pa\n","sps_get_bam_debug_info",
                       iVar3 + 0x18);
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x118) == 0)) {
            _printk(0x8008c90,"sps_get_bam_debug_info",iVar3 + 0x18);
        }
    }
    uVar5 = arg2 - 1;
    if (0x62 < uVar5) {
code_r0x0801c4bc:
        uVar4 = 0x800bbac;
code_r0x0801c4d0:
        _printk(uVar4);
        return 0;
    }
    arg1_00 = iVar3 + 0xd8;
    //switch table (99 cases) at 0x800d120
    switch(*(uVar5 * 2 + 0x800d120) * 4 + 0x801bc5c) {
    case 0x801bc60:
        sym.print_bam_reg(*arg1_00);
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1_00,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 0x801bd60:
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,0);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801bdac:
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_reg(*arg1_00,uVar7 & 0xffffffff);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801bde8:
        sym.print_bam_reg(*arg1_00);
        break;
    case 0x801bdf8:
        if (arg4 != 0) {
            sym.print_bam_test_bus_reg(arg1_00,uVar7);
            return 0;
        }
        uVar4 = 0x8007943;
        goto code_r0x0801c4d0;
    case 0x801be10:
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 0x801be3c:
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801be78:
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,0);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801beb8:
        sym.print_bam_pipe_selected_reg(arg1_00,4);
        sym.print_bam_pipe_desc_fifo(arg1_00,4,0);
        sym.print_bam_pipe_selected_reg(arg1_00,5);
code_r0x0801c0a8:
        sym.print_bam_pipe_desc_fifo(arg1_00,5,0);
        break;
    case 0x801bee8:
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801bf3c:
        if (in_w4 == 0) {
            in_w4 = 1;
        }
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,in_w4);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801bf94:
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar5,0);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 0x801bfc4:
        sym.print_bam_pipe_selected_reg(arg1_00,4);
        sym.print_bam_pipe_selected_reg(arg1_00,5);
        break;
    case 0x801bfe4:
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,0);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801c034:
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,0);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801c098:
        sym.print_bam_pipe_desc_fifo(arg1_00,4,0);
        goto code_r0x0801c0a8;
    case 0x801c0c0:
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar5);
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar5,0);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 0x801c0fc:
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,0);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,100);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801c170:
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,100);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801c1b0:
        if (in_w4 == 0) {
            in_w4 = 1;
        }
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,in_w4);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801c1f8:
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
        break;
    case 0x801c23c:
        if (in_w4 == 0) {
            in_w4 = 1;
        }
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,in_w4);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801c2a8:
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        if (uVar1 != 0) {
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar7 & 0xffffffff);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,0);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            uVar7 = 0;
            do {
                if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar7 & 0xffffffff,100);
                }
                uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
            return 0;
        }
        break;
    case 0x801c2f8:
        sym.print_bam_test_bus_reg(arg1_00,uVar7);
        sym.print_bam_reg(*arg1_00);
        if (uVar1 != 0) {
            uVar5 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1_00,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
            uVar5 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar5);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            uVar5 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar5,0);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            uVar5 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar5,100);
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
            return 0;
        }
    case 0x801c3a0:
        sym.print_bam_selected_reg(arg1_00,*(iVar3 + 0x80));
        break;
    case 0x801c4bc:
        goto code_r0x0801c4bc;
    }
    return 0;
}


// ===== sym.sps_h2bam @ 0x0801c540 (size 380) =====

int64_t sym.sps_h2bam(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.sps_h2bam._rs,"sps_h2bam"), iVar1 != 0)))) {
        _printk(0x800904e,"sps_h2bam",arg1);
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 2)) {
        ipc_log_string(*(_segment.ehdr + 0x100),"%s: sps: BAM handle:0x%pK\n","sps_h2bam",arg1);
    }
    if ((arg1 != 0) && (arg1 != 0x7fffffffffffffff)) {
        for (piVar2 = *(_segment.ehdr + 0xa0); piVar2 != _segment.ehdr + 0xa0; piVar2 = *piVar2) {
            if (piVar2 == arg1) {
                return piVar2;
            }
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_h2bam._rs.30,"sps_h2bam"), iVar1 != 0)))) {
            _printk(0x80080f0,"sps_h2bam",arg1);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:Can\'t find BAM device for handle 0x%pK\n","sps_h2bam",
                           arg1);
        }
    }
    return 0;
}


// ===== sym.sps_phy2h @ 0x0801c6bc (size 692) =====

void sym.sps_phy2h(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_40 = arg1;
    if ((1 < obj.logging_option) && (1 < obj.debug_level_option)) {
        if (obj.print_limit_option != 0x0) goto code_r0x0801c938;
        goto code_r0x0801c8b4;
    }
    do {
        if ((_segment.ehdr == 0) ||
           (((*(_segment.ehdr + 0x120) < 3 &&
             (ipc_log_string(*(_segment.ehdr + 0x108),"%s: Enter\n","sps_phy2h"), _segment.ehdr == 0)) ||
            (*(_segment.ehdr + 0x30) == 0)))) {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 || (iVar2 = ___ratelimit(obj.sps_phy2h._rs.13,"sps_phy2h"), iVar2 != 0)
                ))) {
                _printk(0x800700c,"sps_phy2h");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_phy2h");
            }
            uVar3 = 0xfffffdfb;
        }
        else if (arg2 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_phy2h._rs.14,"sps_phy2h"), iVar2 != 0))))
            {
                _printk(0x800aa15,"sps_phy2h");
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: handle is NULL\n","sps_phy2h");
            }
            uVar3 = 0xffffffff;
        }
        else {
            for (piVar4 = *(_segment.ehdr + 0xa0); piVar4 != _segment.ehdr + 0xa0; piVar4 = *piVar4) {
                if (piVar4[3] == arg1) {
                    uVar3 = 0;
                    *arg2 = piVar4;
                    goto code_r0x0801c804;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_phy2h._rs.17,"sps_phy2h"), iVar2 != 0))))
            {
                _printk(0x8004aac,"sps_phy2h",&iStack_40);
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: BAM device %pa is not registered yet\n","sps_phy2h"
                               ,&iStack_40);
            }
            uVar3 = 0xffffffed;
        }
code_r0x0801c804:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail(uVar3);
code_r0x0801c938:
        iVar2 = ___ratelimit(obj.sps_phy2h._rs,"sps_phy2h");
        if (iVar2 != 0) {
code_r0x0801c8b4:
            _printk(0x80084da,"sps_phy2h");
        }
    } while( true );
}


// ===== sym.sps_setup_bam2bam_fifo @ 0x0801c970 (size 736) =====

ulong sym.sps_setup_bam2bam_fifo(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    char *pcVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg3;
    uVar6 = arg2 & 0xffffffff;
    if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar2 = ___ratelimit(obj.sps_setup_bam2bam_fifo._rs,"sps_setup_bam2bam_fifo"), iVar2 != 0)))) {
        _printk(0x80084da,"sps_setup_bam2bam_fifo");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 2)) {
        ipc_log_string(*(_segment.ehdr + 0x100),"%s: Enter\n","sps_setup_bam2bam_fifo");
    }
    if ((arg1 == 0) || (iVar1 == 0)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_setup_bam2bam_fifo._rs.20,"sps_setup_bam2bam_fifo"), iVar1 != 0)))) {
            _printk(0x800796a,"sps_setup_bam2bam_fifo");
        }
        if (_segment.ehdr != 0) {
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar5 = "%s: sps: invalid buffer address or size\n";
code_r0x0801ca78:
            ipc_log_string(uVar3,pcVar5,"sps_setup_bam2bam_fifo");
        }
code_r0x0801ca84:
        uVar3 = 0xffffffff;
    }
    else {
        if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x30) == 0)) {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_setup_bam2bam_fifo._rs.23,"sps_setup_bam2bam_fifo"), iVar1 != 0)))) {
                _printk(0x800700c,"sps_setup_bam2bam_fifo");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_setup_bam2bam_fifo")
                ;
            }
            return 0xfffffdfb;
        }
        if (arg4 == 0) {
            if ((uVar6 < *(_segment.ehdr + 0x38)) || (*(_segment.ehdr + 0x38) + *(_segment.ehdr + 0x40) < iVar1 + arg2))
            {
                if (obj.logging_option != 0x1) {
                    if (2 < obj.print_limit_option) {
                        pcVar4 = obj.sps_setup_bam2bam_fifo._rs.27;
                        goto code_r0x0801cc08;
                    }
                    goto code_r0x0801cb0c;
                }
                goto code_r0x0801cb20;
            }
        }
        else {
            if (*(_segment.ehdr + 0x40) < iVar1 + arg2) {
                if (obj.logging_option != 0x1) {
                    if (2 < obj.print_limit_option) {
                        pcVar4 = obj.sps_setup_bam2bam_fifo._rs.24;
code_r0x0801cc08:
                        iVar1 = ___ratelimit(pcVar4,"sps_setup_bam2bam_fifo");
                        if (iVar1 == 0) goto code_r0x0801cb20;
                    }
code_r0x0801cb0c:
                    _printk(0x8008cb3,"sps_setup_bam2bam_fifo");
                }
code_r0x0801cb20:
                if (_segment.ehdr != 0) {
                    uVar3 = *(_segment.ehdr + 0x110);
                    pcVar5 = "%s: sps: requested mem is out of pipe mem range\n";
                    goto code_r0x0801ca78;
                }
                goto code_r0x0801ca84;
            }
            uVar6 = *(_segment.ehdr + 0x38) + (arg2 & 0xffffffffU);
        }
        *(arg1 + 8) = uVar6;
        uVar3 = sym.spsi_get_mem_ptr(uVar6);
        *arg1 = uVar3;
        *(arg1 + 0x18) = iVar1;
        memset(uVar3,0,arg3 & 0xffffffff);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.sps_connect @ 0x0801cc50 (size 1100) =====

int sym.sps_connect(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_connect._rs,"sps_connect"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_connect");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else if (arg2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_connect._rs.35,"sps_connect"), iVar1 != 0))))
        {
            _printk(0x8004eb8,"sps_connect");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: connection is NULL\n";
    }
    else {
        if (_segment.ehdr == 0) {
            return -0x13;
        }
        if (*(_segment.ehdr + 0x30) == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_connect._rs.38,"sps_connect"), iVar1 != 0)))) {
                _printk(0x8009574,"sps_connect");
            }
            if (_segment.ehdr == 0) {
                return -0xb;
            }
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_connect");
            return -0xb;
        }
        if ((*(arg2 + 0x7c) == 0xcccccccc) || (*(arg2 + 0x7c) < 0x20)) {
            mutex_lock(_segment.ehdr + 0x70);
            iVar3 = 0;
            if (*(arg2 + 0x2c) != 0) {
                iVar3 = 0x18;
            }
            iVar5 = *(arg2 + iVar3);
            iVar3 = sym.sps_h2bam(iVar5);
            if (iVar3 == 0) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar1 = ___ratelimit(obj.sps_connect._rs.43,"sps_connect"), iVar1 != 0)))) {
                    _printk(0x800af3b,"sps_connect",iVar5);
                }
                if (_segment.ehdr != 0) {
                    ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:Invalid BAM device handle: 0x%pK\n","sps_connect"
                                   ,iVar5);
                }
                iVar1 = -1;
            }
            else {
                iVar5 = iVar3 + 0xa8;
                mutex_lock(iVar5);
                if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar1 = ___ratelimit(obj.sps_connect._rs.46,"sps_connect"), iVar1 != 0)))) {
                    pcVar4 = 0x8009cd7;
                    if (*(arg2 + 0x2c) != 0) {
                        pcVar4 = "DEST";
                    }
                    _printk(0x8008122,"sps_connect",iVar3 + 0x18,*arg2,*(arg2 + 0x18),pcVar4);
                }
                if (*(iVar3 + 0x238) < 3) {
                    pcVar4 = 0x8009cd7;
                    if (*(arg2 + 0x2c) != 0) {
                        pcVar4 = "DEST";
                    }
                    ipc_log_string(*(iVar3 + 0x220),"%s: sps: bam %pa src 0x%pK dest 0x%pK mode %s\n","sps_connect",
                                   iVar3 + 0x18,*arg2,*(arg2 + 0x18),pcVar4);
                }
                memcpy(arg1 + 0x20,arg2,0x90);
                iVar1 = sym.sps_rm_state_change(arg1,0x1535053);
                if (iVar1 == 0) {
                    iVar1 = sym.sps_rm_state_change(arg1,0x2535053);
                    mutex_unlock(iVar5);
                    if (iVar1 != 0) {
                        sym.sps_disconnect(arg1);
                    }
                }
                else {
                    mutex_unlock(iVar5);
                }
            }
            mutex_unlock(_segment.ehdr + 0x70);
            return iVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_connect._rs.40,"sps_connect"), iVar1 != 0))))
        {
            _printk(0x800b76f,"sps_connect");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: The value of pipe lock group is invalid\n";
    }
    ipc_log_string(uVar2,pcVar4,"sps_connect");
    return -1;
}


// ===== sym.sps_disconnect @ 0x0801d09c (size 728) =====

int sym.sps_disconnect(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_disconnect._rs,"sps_disconnect"), iVar2 != 0)
            ))) {
            _printk(0x8005971,"sps_disconnect");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: Invalid pipe\n";
    }
    else {
        iVar5 = *(arg1 + 0x18);
        if (iVar5 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_disconnect._rs.53,"sps_disconnect"), iVar2 != 0)))) {
                _printk(0x800c5da,"sps_disconnect");
            }
            if (_segment.ehdr == 0) {
                return -1;
            }
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: BAM device of this pipe is NULL\n";
        }
        else {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_disconnect._rs.56,"sps_disconnect"), iVar2 != 0)))) {
                pcVar4 = 0x8009cd7;
                if (*(arg1 + 0x4c) != 0) {
                    pcVar4 = "DEST";
                }
                _printk(0x8008122,"sps_disconnect",iVar5 + 0x18,*(arg1 + 0x20),*(arg1 + 0x38),pcVar4);
            }
            if (*(iVar5 + 0x238) < 3) {
                pcVar4 = 0x8009cd7;
                if (*(arg1 + 0x4c) != 0) {
                    pcVar4 = "DEST";
                }
                ipc_log_string(*(iVar5 + 0x220),"%s: sps: bam %pa src 0x%pK dest 0x%pK mode %s\n","sps_disconnect",
                               iVar5 + 0x18,*(arg1 + 0x20),*(arg1 + 0x38),pcVar4);
            }
            piVar1 = *(arg1 + 0xb0) + 0xa8;
            if (*(arg1 + 0x4c) != 0) {
                piVar1 = *(arg1 + 0xb0) + 0xb0;
            }
            if (*piVar1 == arg1) {
                mutex_lock(iVar5 + 0xa8);
                iVar2 = sym.sps_rm_state_change(arg1,0);
                mutex_unlock(iVar5 + 0xa8);
                if (iVar2 == 0) {
                    *(arg1 + 0xa0) = 0xcccccccccccccccc;
                    *(arg1 + 0xa8) = 0xcccccccccccccccc;
                    *(arg1 + 0x90) = 0xcccccccccccccccc;
                    *(arg1 + 0x98) = 0xcccccccccccccccc;
                    *(arg1 + 0x80) = 0xcccccccccccccccc;
                    *(arg1 + 0x88) = 0xcccccccccccccccc;
                    *(arg1 + 0x70) = 0xcccccccccccccccc;
                    *(arg1 + 0x78) = 0xcccccccccccccccc;
                    *(arg1 + 0x60) = 0xcccccccccccccccc;
                    *(arg1 + 0x68) = 0xcccccccccccccccc;
                    *(arg1 + 0x50) = 0xcccccccccccccccc;
                    *(arg1 + 0x58) = 0xcccccccccccccccc;
                    *(arg1 + 0x40) = 0xcccccccccccccccc;
                    *(arg1 + 0x48) = 0xcccccccccccccccc;
                    *(arg1 + 0x30) = 0xcccccccccccccccc;
                    *(arg1 + 0x38) = 0xcccccccccccccccc;
                    *(arg1 + 0x20) = 0xcccccccccccccccc;
                    *(arg1 + 0x28) = 0xcccccccccccccccc;
                    return 0;
                }
                return iVar2;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_disconnect._rs.57,"sps_disconnect"), iVar2 != 0)))) {
                _printk(0x8004add,"sps_disconnect");
            }
            if (_segment.ehdr == 0) {
                return -1;
            }
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: Client context is corrupt\n";
        }
    }
    ipc_log_string(uVar3,pcVar4,"sps_disconnect");
    return -1;
}


// ===== sym.sps_register_event @ 0x0801d374 (size 768) =====

int sym.sps_register_event(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t arg1_00;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_register_event._rs,"sps_register_event"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_register_event");
        }
        if (_segment.ehdr != 0) {
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: pipe is NULL\n";
code_r0x0801d518:
            ipc_log_string(uVar3,pcVar4,"sps_register_event");
            return -1;
        }
    }
    else if (arg2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_register_event._rs.60,"sps_register_event"), iVar1 != 0)))) {
            _printk(0x800bfdb,"sps_register_event");
        }
        if (_segment.ehdr != 0) {
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: registered event is NULL\n";
            goto code_r0x0801d518;
        }
    }
    else {
        if (_segment.ehdr == 0) {
            return -0x13;
        }
        if (*(_segment.ehdr + 0x30) == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_register_event._rs.63,"sps_register_event"), iVar1 != 0)))) {
                _printk(0x800a28f,"sps_register_event");
            }
            if (_segment.ehdr != 0) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver not ready\n","sps_register_event");
            }
            return -0xb;
        }
        arg1_00 = sym.sps_bam_lock(arg1);
        if (arg1_00 != 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_register_event._rs.66,"sps_register_event"), iVar1 != 0)))) {
                _printk(0x800906b,"sps_register_event",*arg2);
            }
            if (*(arg1_00 + 0x238) < 3) {
                ipc_log_string(*(arg1_00 + 0x220),"%s: sps: events:%d\n","sps_register_event",*arg2);
            }
            iVar1 = sym.sps_bam_pipe_reg_event(arg1_00,*(arg1 + 0xbc),arg2);
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            if (iVar1 == 0) {
                return 0;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_register_event._rs.69,"sps_register_event"), iVar2 != 0)))) {
                _printk(0x8009081,"sps_register_event",*(arg1 + 0x18) + 0x18,*(arg1 + 0xbc));
            }
            ipc_log_string(*(arg1_00 + 0x228),"%s: sps:Fail to register event for BAM %pa pipe %d\n",
                           "sps_register_event",*(arg1 + 0x18) + 0x18,*(arg1 + 0xbc));
            return iVar1;
        }
    }
    return -1;
}


// ===== sym.sps_bam_lock @ 0x0801d674 (size 388) =====

int64_t sym.sps_bam_lock(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x18);
    if (iVar6 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar3 = ___ratelimit(obj.sps_bam_lock._rs,"sps_bam_lock"), iVar3 != 0))))
        {
            _printk(0x800b33e,"sps_bam_lock");
        }
        if (_segment.ehdr == 0) {
            return 0;
        }
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Connection is not in connected state\n","sps_bam_lock");
        return 0;
    }
    uVar4 = _raw_spin_lock_irqsave(iVar6 + 0xe8);
    *(iVar6 + 0xf0) = uVar4;
    uVar5 = *(iVar6 + 0x30);
    uVar1 = *(arg1 + 0xbc);
    if (uVar1 < uVar5) {
        if (0x1e < uVar1) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x801d7f8);
            (*pcVar2)();
        }
        if (*(iVar6 + uVar1 * 8 + 0x100) == arg1) {
            return iVar6;
        }
    }
    if (obj.logging_option != 0x1) {
        if (2 < obj.print_limit_option) {
            iVar3 = ___ratelimit(obj.sps_bam_lock._rs.265,"sps_bam_lock");
            if (iVar3 == 0) goto code_r0x0801d70c;
            uVar5 = *(iVar6 + 0x30);
        }
        _printk(0x8008962,"sps_bam_lock",iVar6 + 0x18,uVar1,uVar5);
    }
code_r0x0801d70c:
    ipc_log_string(*(iVar6 + 0x228),"%s: sps:Client not owner of BAM %pa pipe: %d (max %d)\n","sps_bam_lock",
                   iVar6 + 0x18,uVar1,*(iVar6 + 0x30));
    _raw_spin_unlock_irqrestore(iVar6 + 0xe8,*(iVar6 + 0xf0));
    return 0;
}


// ===== sym.sps_flow_on @ 0x0801d7f8 (size 224) =====

ulong sym.sps_flow_on(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_flow_on._rs,"sps_flow_on"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_flow_on");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: pipe is NULL\n","sps_flow_on");
        }
    }
    else {
        iVar2 = sym.sps_bam_lock(arg1);
        if (iVar2 != 0) {
            sym.bam_write_reg_field.llvm.916431513089089357(iVar2 + 0xd8,0x1e,*(arg1 + 0xbc),1);
            _raw_spin_unlock_irqrestore(iVar2 + 0xe8,*(iVar2 + 0xf0));
            return 0;
        }
    }
    return 0xffffffff;
}


// ===== sym.sps_flow_off @ 0x0801d8d8 (size 224) =====

ulong sym.sps_flow_off(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_flow_off._rs,"sps_flow_off"), iVar1 != 0))))
        {
            _printk(0x80074f8,"sps_flow_off");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: pipe is NULL\n","sps_flow_off");
        }
    }
    else {
        iVar2 = sym.sps_bam_lock(arg1);
        if (iVar2 != 0) {
            sym.bam_write_reg_field.llvm.916431513089089357(iVar2 + 0xd8,0x1e,*(arg1 + 0xbc),1);
            _raw_spin_unlock_irqrestore(iVar2 + 0xe8,*(iVar2 + 0xf0));
            return 0;
        }
    }
    return 0xffffffff;
}


// ===== sym.sps_transfer @ 0x0801d9b8 (size 848) =====

uint sym.sps_transfer(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint uVar2;
    int64_t arg1_00;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint32_t *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs,"sps_transfer"), iVar1 != 0))))
        {
            _printk(0x80074f8,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else if (arg2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.72,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x800a699,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: transfer is NULL\n";
    }
    else if (*(arg2 + 8) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.75,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x800598a,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec list is NULL\n";
    }
    else if (*(arg2 + 0x10) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.78,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x8009943,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec list is empty\n";
    }
    else if (*arg2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.81,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x800b279,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec list address is invalid\n";
    }
    else {
        uVar5 = 0;
        puVar6 = *(arg2 + 8) + 4;
        while ((*puVar6 >> 0xf & 1) == 0) {
            iVar1 = sym.sps_check_iovec_flags(*puVar6 >> 0x10);
            if (iVar1 != 0) {
                return 0xffffffff;
            }
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 2;
            if (*(arg2 + 0x10) <= uVar5) {
                arg1_00 = sym.sps_bam_lock(arg1);
                if (arg1_00 == 0) {
                    return 0xffffffff;
                }
                uVar2 = sym.sps_bam_pipe_transfer(arg1_00,*(arg1 + 0xbc),arg2);
                _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
                return uVar2;
            }
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_transfer._rs.84,"sps_transfer"), iVar1 != 0))
           )) {
            _printk(0x80059a9,"sps_transfer");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec size is invalid\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_transfer");
    return 0xffffffff;
}


// ===== sym.sps_check_iovec_flags @ 0x0801dd08 (size 752) =====

ulong sym.sps_check_iovec_flags(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1;
    if ((uVar1 & 0x5800) == 0x1000) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_check_iovec_flags._rs,"sps_check_iovec_flags"), iVar2 != 0)))) {
            _printk(0x8009972,"sps_check_iovec_flags");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        pcVar3 = "%s: sps: NWD is only valid with EOT or CMD\n";
    }
    else if (((uVar1 ^ 0xffffffff) & 0x4800) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_check_iovec_flags._rs.270,"sps_check_iovec_flags"), iVar2 != 0)))) {
            _printk(0x800ab4b,"sps_check_iovec_flags");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        pcVar3 = "%s: sps: EOT and CMD are not allowed to coexist\n";
    }
    else if (((uVar1 >> 0xb & 1) == 0) && ((arg1 & 0x600U) != 0)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_check_iovec_flags._rs.273,"sps_check_iovec_flags"), iVar2 != 0)))) {
            _printk(0x8008d7b,"sps_check_iovec_flags");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        pcVar3 = "%s: sps: pipe lock/unlock flags are only valid with Command Descriptor\n";
    }
    else if ((uVar1 & 0x600) == 0x600) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_check_iovec_flags._rs.276,"sps_check_iovec_flags"), iVar2 != 0)))) {
            _printk(0x8005317,"sps_check_iovec_flags");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        pcVar3 = "%s: sps: Can\'t lock and unlock a pipe by the same Command Descriptor\n";
    }
    else if (((uVar1 ^ 0xffffffff) & 0x900) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_check_iovec_flags._rs.279,"sps_check_iovec_flags"), iVar2 != 0)))) {
            _printk(0x8009104,"sps_check_iovec_flags");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        pcVar3 = "%s: sps: Immediate and CMD are not allowed to coexist\n";
    }
    else {
        if (((uVar1 ^ 0xffffffff) & 0x1100) != 0) {
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_check_iovec_flags._rs.282,"sps_check_iovec_flags"), iVar2 != 0)))) {
            _printk(0x800899b,"sps_check_iovec_flags");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        pcVar3 = "%s: sps: Immediate and NWD are not allowed to coexist\n";
    }
    ipc_log_string(*(_segment.ehdr + 0x110),pcVar3,"sps_check_iovec_flags");
    return 0xffffffff;
}


// ===== sym.sps_transfer_one @ 0x0801dff8 (size 280) =====

uint sym.sps_transfer_one(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    int64_t arg1_00;
    uint64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_transfer_one._rs,"sps_transfer_one"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_transfer_one");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: pipe is NULL\n","sps_transfer_one");
        }
    }
    else {
        iVar1 = sym.sps_check_iovec_flags(in_x4 & 0xffffffff);
        if ((iVar1 == 0) && (arg1_00 = sym.sps_bam_lock(arg1), arg1_00 != 0)) {
            uVar2 = sym.sps_bam_pipe_transfer_one(arg1_00,*(arg1 + 0xbc),arg2 & 0xffffffff,arg3 & 0xffffffff);
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return uVar2;
        }
    }
    return 0xffffffff;
}


// ===== sym.sps_get_event @ 0x0801e110 (size 340) =====

uint sym.sps_get_event(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1_00;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_get_event._rs,"sps_get_event"), iVar2 != 0)))
           ) {
            _printk(0x80074f8,"sps_get_event");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else {
        if (arg2 != 0) {
            arg1_00 = sym.sps_bam_lock(arg1);
            if (arg1_00 == 0) {
                return 0xffffffff;
            }
            uVar1 = sym.sps_bam_pipe_get_event(arg1_00,*(arg1 + 0xbc),arg2);
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_event._rs.87,"sps_get_event"), iVar2 != 0)))) {
            _printk(0x800c019,"sps_get_event");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: event_notify is NULL\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_event");
    return 0xffffffff;
}


// ===== sym.sps_is_pipe_empty @ 0x0801e264 (size 340) =====

uint sym.sps_is_pipe_empty(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1_00;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_is_pipe_empty._rs,"sps_is_pipe_empty"), iVar2 != 0)))) {
            _printk(0x80074f8,"sps_is_pipe_empty");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else {
        if (arg2 != 0) {
            arg1_00 = sym.sps_bam_lock(arg1);
            if (arg1_00 == 0) {
                return 0xffffffff;
            }
            uVar1 = sym.sps_bam_pipe_is_empty(arg1_00,*(arg1 + 0xbc),arg2);
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_is_pipe_empty._rs.90,"sps_is_pipe_empty"), iVar2 != 0)))) {
            _printk(0x80084e7,"sps_is_pipe_empty");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: result pointer is NULL\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_is_pipe_empty");
    return 0xffffffff;
}


// ===== sym.sps_get_free_count @ 0x0801e3b8 (size 340) =====

uint sym.sps_get_free_count(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1_00;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_free_count._rs,"sps_get_free_count"), iVar2 != 0)))) {
            _printk(0x80074f8,"sps_get_free_count");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else {
        if (arg2 != 0) {
            arg1_00 = sym.sps_bam_lock(arg1);
            if (arg1_00 == 0) {
                return 0xffffffff;
            }
            uVar1 = sym.sps_bam_get_free_count(arg1_00,*(arg1 + 0xbc),arg2);
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_free_count._rs.93,"sps_get_free_count"), iVar2 != 0)))) {
            _printk(0x80084e7,"sps_get_free_count");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: result pointer is NULL\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_free_count");
    return 0xffffffff;
}


// ===== sym.sps_device_reset @ 0x0801e50c (size 656) =====

int sym.sps_device_reset(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t arg1_00;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_device_reset._rs,"sps_device_reset"), iVar1 != 0)))) {
            _printk(0x80045c9,"sps_device_reset");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: device handle should not be 0\n","sps_device_reset");
        }
        return -1;
    }
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x30) == 0)) {
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_device_reset._rs.94,"sps_device_reset"), iVar1 != 0)))) {
            _printk(0x800700c,"sps_device_reset");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_device_reset");
            return -0x205;
        }
        return -0x205;
    }
    mutex_lock(_segment.ehdr + 0x70);
    arg1_00 = sym.sps_h2bam(arg1);
    if (arg1_00 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_device_reset._rs.95,"sps_device_reset"), iVar1 != 0)))) {
            _printk(0x800af3b,"sps_device_reset",arg1);
        }
        iVar1 = -1;
        if (_segment.ehdr == 0) goto code_r0x0801e6d4;
        pcVar3 = "%s: sps:Invalid BAM device handle: 0x%pK\n";
    }
    else {
        mutex_lock(arg1_00 + 0xa8);
        iVar1 = sym.sps_bam_reset(arg1_00);
        mutex_unlock(arg1_00 + 0xa8);
        if (iVar1 == 0) goto code_r0x0801e6d4;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_device_reset._rs.96,"sps_device_reset"), iVar2 != 0)))) {
            _printk(0x8004b03,"sps_device_reset",arg1);
        }
        if (_segment.ehdr == 0) goto code_r0x0801e6d4;
        pcVar3 = "%s: sps:Fail to reset BAM device: 0x%pK\n";
    }
    ipc_log_string(*(_segment.ehdr + 0x110),pcVar3,"sps_device_reset",arg1);
code_r0x0801e6d4:
    mutex_unlock(_segment.ehdr + 0x70);
    return iVar1;
}


// ===== sym.sps_get_config @ 0x0801e79c (size 624) =====

ulong sym.sps_get_config(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_get_config._rs,"sps_get_config"), iVar1 != 0)
            ))) {
            _printk(0x80074f8,"sps_get_config");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: pipe is NULL\n";
code_r0x0801e8a4:
        ipc_log_string(uVar2,pcVar3,"sps_get_config");
        return 0xffffffff;
    }
    if (arg2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_get_config._rs.99,"sps_get_config"), iVar1 != 0)))) {
            _printk(0x8007075,"sps_get_config");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: config pointer is NULL\n";
        goto code_r0x0801e8a4;
    }
    iVar4 = *(arg1 + 0x18);
    if (iVar4 == 0) {
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_get_config._rs.102,"sps_get_config"), iVar1 != 0)))) {
            _printk(0x8008d2b,"sps_get_config","sps_get_config");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps:%s\n","sps_get_config","sps_get_config");
        }
        goto code_r0x0801e8ec;
    }
    if (1 < obj.logging_option) {
        if (3 < obj.debug_level_option) {
            if (obj.print_limit_option != 0x0) {
                iVar1 = ___ratelimit(obj.sps_get_config._rs.105,"sps_get_config");
                if (iVar1 == 0) goto code_r0x0801e924;
                iVar4 = *(arg1 + 0x18);
            }
            _printk(0x800a2b0,"sps_get_config",iVar4 + 0x18,*(arg1 + 0xbc),*(arg1 + 0x54));
        }
code_r0x0801e924:
        iVar4 = *(arg1 + 0x18);
        if (iVar4 == 0) goto code_r0x0801e8ec;
    }
    if (*(iVar4 + 0x238) == 0) {
        ipc_log_string(*(iVar4 + 0x210),"%s: sps: BAM: %pa; pipe index:%d; options:0x%x\n","sps_get_config",
                       iVar4 + 0x18,*(arg1 + 0xbc),*(arg1 + 0x54));
    }
code_r0x0801e8ec:
    memcpy(arg2,arg1 + 0x20,0x90);
    return 0;
}


// ===== sym.sps_set_config @ 0x0801ea0c (size 608) =====

int sym.sps_set_config(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_set_config._rs,"sps_set_config"), iVar1 != 0)
            ))) {
            _printk(0x80074f8,"sps_set_config");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: pipe is NULL\n";
    }
    else if (arg2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_set_config._rs.108,"sps_set_config"), iVar1 != 0)))) {
            _printk(0x8007075,"sps_set_config");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: config pointer is NULL\n";
    }
    else {
        arg1_00 = sym.sps_bam_lock(arg1);
        if (arg1_00 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_set_config._rs.112,"sps_set_config"), iVar1 != 0)))) {
                _printk(0x8006bab,"sps_set_config",arg1_00 + 0x18,*(arg1 + 0xbc),*(arg2 + 0x34));
            }
            if (*(arg1_00 + 0x238) == 0) {
                ipc_log_string(*(arg1_00 + 0x210),"%s: sps: BAM: %pa; pipe index:%d, config-options:0x%x\n",
                               "sps_set_config",arg1_00 + 0x18,*(arg1 + 0xbc),*(arg2 + 0x34));
            }
            iVar1 = sym.sps_bam_pipe_set_params(arg1_00,*(arg1 + 0xbc),*(arg2 + 0x34));
            if (iVar1 == 0) {
                *(arg1 + 0x54) = *(arg2 + 0x34);
            }
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return iVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_set_config._rs.109,"sps_set_config"), iVar1 != 0)))) {
            _printk(0x8009cdb,"sps_set_config");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM is NULL\n";
    }
    ipc_log_string(uVar2,pcVar3,"sps_set_config");
    return -1;
}


// ===== sym.sps_set_owner @ 0x0801ec6c (size 696) =====

int sym.sps_set_owner(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    char *pcVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_set_owner._rs,"sps_set_owner"), iVar1 != 0)))
           ) {
            _printk(0x80074f8,"sps_set_owner");
        }
        if (_segment.ehdr != 0) {
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar3 = "%s: sps: pipe is NULL\n";
code_r0x0801edb4:
            ipc_log_string(uVar2,pcVar3,"sps_set_owner");
            return -1;
        }
    }
    else if (arg3 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_set_owner._rs.115,"sps_set_owner"), iVar1 != 0)))) {
            _printk(0x8004eb8,"sps_set_owner");
        }
        if (_segment.ehdr != 0) {
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar3 = "%s: sps: connection is NULL\n";
            goto code_r0x0801edb4;
        }
    }
    else if (arg2 == 2) {
        arg1_00 = sym.sps_bam_lock(arg1);
        if (arg1_00 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_set_owner._rs.119,"sps_set_owner"), iVar1 != 0)))) {
                _printk(0x8008153,"sps_set_owner",arg1_00 + 0x18,*(arg1 + 0xbc));
            }
            if (*(arg1_00 + 0x238) == 0) {
                ipc_log_string(*(arg1_00 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_set_owner",arg1_00 + 0x18
                               ,*(arg1 + 0xbc));
            }
            iVar1 = sym.sps_bam_set_satellite(arg1_00,*(arg1 + 0xbc));
            if (iVar1 == 0) {
                if (*(arg1 + 0x4c) == 0) {
                    *arg3 = *(*(arg1 + 0xb0) + 0x18);
                    puVar4 = *(arg1 + 0xb0) + 0x20;
                }
                else {
                    *arg3 = *(*(arg1 + 0xb0) + 0x40);
                    puVar4 = *(arg1 + 0xb0) + 0x48;
                }
                *(arg3 + 8) = *puVar4;
                *(arg3 + 0xc) = 0x11111111;
            }
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return iVar1;
        }
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_set_owner._rs.116,"sps_set_owner"), iVar1 != 0)))) {
            _printk(0x80095a6,"sps_set_owner",arg2);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Unsupported ownership state: %d\n","sps_set_owner",arg2
                          );
        }
    }
    return -1;
}


// ===== sym.sps_alloc_mem @ 0x0801ef24 (size 780) =====

ulong sym.sps_alloc_mem(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        return 0xffffffed;
    }
    if (*(_segment.ehdr + 0x30) == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs,"sps_alloc_mem"), noname_1 = extraout_q0_00, iVar1 != 0)))) {
            _printk(noname_1,0x8009574,"sps_alloc_mem");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_alloc_mem");
        }
        return 0xfffffff5;
    }
    if ((arg2 == 0) || (*(arg2 + 0x18) == 0)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs.122,"sps_alloc_mem"), noname_1 = extraout_q0, iVar1 != 0))))
        {
            _printk(noname_1,0x800c660,"sps_alloc_mem");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: invalid memory buffer address or size\n";
    }
    else {
        if (arg1 == 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs.125,"sps_alloc_mem"), noname_1 = extraout_q0_02,
                iVar1 != 0)))) {
                _printk(noname_1,0x8007995,"sps_alloc_mem");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
                ipc_log_string(*(_segment.ehdr + 0x108),"%s: sps: allocate pipe memory before setup pipe\n",
                               "sps_alloc_mem");
            }
        }
        else {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs.128,"sps_alloc_mem"), noname_1 = extraout_q0_01,
                iVar1 != 0)))) {
                _printk(noname_1,0x8007e06,"sps_alloc_mem",*(arg1 + 0xbc));
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
                ipc_log_string(*(_segment.ehdr + 0x108),"%s: sps:allocate pipe memory for pipe %d\n","sps_alloc_mem",
                               *(arg1 + 0xbc));
            }
        }
        iVar2 = sym.sps_mem_alloc_io(*(arg2 + 0x18));
        *(arg2 + 8) = iVar2;
        if (iVar2 != 0xdeadbeef) {
            uVar3 = sym.spsi_get_mem_ptr(iVar2);
            *arg2 = uVar3;
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_alloc_mem._rs.131,"sps_alloc_mem"), iVar1 != 0)))) {
            _printk(0x8008516,"sps_alloc_mem");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: invalid address of allocated memory\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_alloc_mem");
    return 0xffffffff;
}


// ===== sym.sps_free_mem @ 0x0801f230 (size 636) =====

ulong sym.sps_free_mem(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.sps_free_mem._rs,"sps_free_mem"), iVar1 != 0)))) {
        _printk(0x8004ef6,"sps_free_mem");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
        ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps: Enter\n","sps_free_mem");
    }
    if ((arg2 == 0) || (*(arg2 + 8) == 0xdeadbeef)) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_free_mem._rs.136,"sps_free_mem"), iVar1 != 0)
            ))) {
            _printk(0x800c07e,"sps_free_mem");
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: invalid memory to free\n","sps_free_mem");
        }
        uVar2 = 0xffffffff;
    }
    else {
        if (arg1 == 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_free_mem._rs.139,"sps_free_mem"), iVar1 != 0)))) {
                _printk(0x800aa97,"sps_free_mem");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
                ipc_log_string(*(_segment.ehdr + 0x108),"%s: sps: free pipe memory\n","sps_free_mem");
            }
        }
        else {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_free_mem._rs.142,"sps_free_mem"), iVar1 != 0)))) {
                _printk(0x8006674,"sps_free_mem",*(arg1 + 0xbc));
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
                ipc_log_string(*(_segment.ehdr + 0x108),"%s: sps:free pipe memory for pipe %d\n","sps_free_mem",
                               *(arg1 + 0xbc));
            }
        }
        sym.sps_mem_free_io(*(arg2 + 8),*(arg2 + 0x18));
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.sps_get_unused_desc_num @ 0x0801f4ac (size 488) =====

uint sym.sps_get_unused_desc_num(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1_00;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_unused_desc_num._rs,"sps_get_unused_desc_num"), iVar2 != 0)))) {
            _printk(0x80074f8,"sps_get_unused_desc_num");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else {
        if (arg2 != 0) {
            arg1_00 = sym.sps_bam_lock(arg1);
            if (arg1_00 == 0) {
                return 0xffffffff;
            }
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_get_unused_desc_num._rs.146,"sps_get_unused_desc_num"), iVar2 != 0)))) {
                _printk(0x8008153,"sps_get_unused_desc_num",arg1_00 + 0x18,*(arg1 + 0xbc));
            }
            if (*(arg1_00 + 0x238) == 0) {
                ipc_log_string(*(arg1_00 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_get_unused_desc_num",
                               arg1_00 + 0x18,*(arg1 + 0xbc));
            }
            uVar1 = sym.sps_bam_pipe_get_unused_desc_num(arg1_00,*(arg1 + 0xbc),arg2);
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_unused_desc_num._rs.145,"sps_get_unused_desc_num"), iVar2 != 0)))) {
            _printk(0x80084e7,"sps_get_unused_desc_num");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: result pointer is NULL\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_unused_desc_num");
    return 0xffffffff;
}


// ===== sym.sps_ctrl_bam_dma_clk @ 0x0801f694 (size 716) =====

int sym.sps_ctrl_bam_dma_clk(uint64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x30) == 0)) {
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_ctrl_bam_dma_clk._rs,"sps_ctrl_bam_dma_clk"), iVar1 != 0)))) {
            _printk(0x800700c,"sps_ctrl_bam_dma_clk");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: sps driver is not ready\n","sps_ctrl_bam_dma_clk");
        }
        iVar1 = -0x205;
    }
    else if ((param_1 & 1) == 0) {
        if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_ctrl_bam_dma_clk._rs.154,"sps_ctrl_bam_dma_clk"), iVar1 != 0)))) {
            _printk(0x8007fbf,"sps_ctrl_bam_dma_clk","sps:relinquish bam dma clk\n");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 2)) {
            ipc_log_string(*(_segment.ehdr + 0x100),"%s: %s","sps_ctrl_bam_dma_clk","sps:relinquish bam dma clk\n");
        }
        uVar3 = *(_segment.ehdr + 0x20);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
        iVar1 = 0;
    }
    else {
        if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_ctrl_bam_dma_clk._rs.147,"sps_ctrl_bam_dma_clk"), iVar1 != 0)))) {
            _printk(0x8007fbf,"sps_ctrl_bam_dma_clk","sps:vote for bam dma clk\n");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 2)) {
            ipc_log_string(*(_segment.ehdr + 0x100),"%s: %s","sps_ctrl_bam_dma_clk","sps:vote for bam dma clk\n");
        }
        uVar3 = *(_segment.ehdr + 0x20);
        iVar1 = clk_prepare(uVar3);
        if (iVar1 == 0) {
            iVar1 = clk_enable(uVar3);
            if (iVar1 == 0) {
                return 0;
            }
            clk_unprepare(uVar3);
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_ctrl_bam_dma_clk._rs.151,"sps_ctrl_bam_dma_clk"), iVar2 != 0)))) {
            _printk(0x8009d5c,"sps_ctrl_bam_dma_clk",iVar1);
        }
        if (_segment.ehdr != 0) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:fail to enable bamdma_clk:ret=%d\n",
                           "sps_ctrl_bam_dma_clk",iVar1);
        }
    }
    return iVar1;
}


// ===== sym.sps_register_bam_device @ 0x0801f960 (size 2652) =====

uint8_t * sym.sps_register_bam_device(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t *arg1_00;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *puVar9;
    ulong *unaff_x20;
    uint8_t *puVar10;
    code *unaff_x25;
    int64_t unaff_x26;
    ulong unaff_x30;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
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
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs,"sps_register_bam_device"), iVar3 != 0)))) {
            _printk(0x8007098,"sps_register_bam_device");
        }
        if (_segment.ehdr == 0) goto code_r0x0801fbc4;
        uVar5 = *(_segment.ehdr + 0x110);
        pcVar7 = "%s: sps: bam_props is NULL\n";
    }
    else {
        unaff_x25 = segment.ehdr;
        if (arg2 != 0) {
            if (_segment.ehdr != 0) {
                unaff_x26 = 0x8000000;
                iVar8 = _segment.ehdr;
                if (obj.logging_option < 2) goto code_r0x0801f9d0;
                if (obj.debug_level_option != 0x0) goto code_r0x08020378;
                goto code_r0x080201e0;
            }
            _printk(0x800b309);
            arg1 = 0xfffffdfb;
            goto code_r0x08020198;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.158,"sps_register_bam_device"), iVar3 != 0)))) {
            _printk(0x800aab4,"sps_register_bam_device");
        }
        unaff_x20 = arg2;
        if (_segment.ehdr == 0) goto code_r0x0801fbc4;
        uVar5 = *(_segment.ehdr + 0x110);
        pcVar7 = "%s: sps: device handle is NULL\n";
    }
    ipc_log_string(uVar5,pcVar7,"sps_register_bam_device");
code_r0x0801fbc4:
    do {
        arg1 = 0xffffffff;
        arg2 = unaff_x20;
code_r0x08020198:
        while( true ) {
            while( true ) {
                iVar8 = sp_el0;
                if (*(iVar8 + 0x5e0) == iStack_58) {
                    return arg1;
                }
                __stack_chk_fail();
code_r0x08020378:
                if ((obj.print_limit_option == 0x0) ||
                   (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.162,"sps_register_bam_device"), iVar3 != 0))
                {
                    _printk(0x80079e4,"sps_register_bam_device",arg1 + 8);
                }
code_r0x080201e0:
                iVar8 = *unaff_x25;
                if (iVar8 != 0) {
code_r0x0801f9d0:
                    if (*(iVar8 + 0x120) < 4) {
                        ipc_log_string(*(iVar8 + 0x110),"%s: sps: Client requests to register BAM %pa\n",
                                       "sps_register_bam_device",arg1 + 8);
                        iVar8 = *unaff_x25;
                    }
                }
                if ((*(iVar8 + 0x30) != 0) || ((*arg1 >> 2 & 1) != 0)) break;
                if ((*(unaff_x26 + 0x408) != '\x01') &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.165,"sps_register_bam_device"), iVar3 != 0))
                   )) {
                    _printk(0x800a28f,"sps_register_bam_device");
                }
                if (*unaff_x25 == 0) {
                    arg1 = 0xfffffff5;
                }
                else {
                    ipc_log_string(*(*unaff_x25 + 0x110),"%s: sps: sps driver not ready\n","sps_register_bam_device");
                    arg1 = 0xfffffff5;
                }
            }
            unaff_x20 = arg2;
            if ((((*(arg1 + 0x68) ^ 0xffffffff) & 0x1d) != 0) && ((*(arg1 + 0x10) == 0 && (*(arg1 + 0x18) == 0)))) {
                if ((*(unaff_x26 + 0x408) != '\x01') &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.166,"sps_register_bam_device"), iVar3 != 0))
                   )) {
                    _printk(0x800c6ad,"sps_register_bam_device",arg1 + 8);
                }
                if (*unaff_x25 == 0) goto code_r0x0801fbc4;
                uVar5 = *(*unaff_x25 + 0x110);
                pcVar7 = "%s: sps:Invalid properties for BAM: %pa\n";
                goto code_r0x08020054;
            }
            if (((*(arg1 + 0x68) & 1) == 0) && (*(arg1 + 0x24) == 0)) break;
            *arg2 = 0;
            mutex_lock(*unaff_x25 + 0x70);
            puVar10 = arg1 + 8;
            iVar8 = sym.phy2bam(*puVar10);
            if (iVar8 == 0) {
                if ((((*(arg1 + 0x68) ^ 0xffffffff) & 0x1d) != 0) && (*(arg1 + 0x10) == 0)) {
                    uVar5 = 0x68000000000713;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar5 = 0x68000000000f13;
                    }
                    iVar8 = __ioremap(*(arg1 + 8),*(arg1 + 0x18),uVar5);
                    if (iVar8 != 0) goto code_r0x0801fbe8;
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.175,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8008d49,"sps_register_bam_device",puVar10,*(arg1 + 0x18));
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: sps:Unable to map BAM IO mem:%pa size:0x%x\n",
                                       "sps_register_bam_device",puVar10,*(arg1 + 0x18));
                    }
code_r0x08020188:
                    arg1 = 0xffffffff;
                    goto code_r0x0802018c;
                }
                iVar8 = 0;
code_r0x0801fbe8:
                arg1_00 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x340);
                if (arg1_00 == NULL) goto code_r0x08020188;
                memset(arg1_00,0,0x340);
                piVar1 = arg1_00 + 0x15;
                __mutex_init(piVar1,"&bam->lock",obj.bam_init._rs.5);
                mutex_lock(piVar1);
                memcpy(arg1_00 + 2,arg1,0x90);
                if (iVar8 != 0) {
                    arg1_00[4] = iVar8;
                }
                piVar2 = arg1_00 + 3;
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_0",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1_00[0x42] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.180,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8005de4,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 0 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_1",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1_00[0x43] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.184,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x800aad6,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 1 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_2",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1_00[0x44] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.188,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8009d88,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 2 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_3",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1_00[0x45] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.192,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8007a49,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 3 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                snprintf(&uStack_a8,0x50,"sps_bam_%pa_4",piVar2);
                iVar4 = ipc_log_context_create(10,&uStack_a8,0);
                arg1_00[0x46] = iVar4;
                if (iVar4 == 0) {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.196,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x8008177,"sps_register_bam_device",piVar2);
                    }
                    if (*unaff_x25 != 0) {
                        ipc_log_string(*(*unaff_x25 + 0x110),"%s: unable to create IPC Log 4 for bam %pa\n",
                                       "sps_register_bam_device",piVar2);
                    }
                }
                iVar3 = 3;
                if (*(arg1 + 0x74) != 0) {
                    iVar3 = *(arg1 + 0x74);
                }
                *(arg1_00 + 0x47) = iVar3;
                iVar3 = sym.sps_bam_device_init(arg1_00);
                mutex_unlock(piVar1);
                if (iVar3 == 0) {
                    iVar8 = *unaff_x25;
                    puVar9 = *(iVar8 + 0xa8);
                    uVar6 = __list_add_valid(arg1_00,puVar9,iVar8 + 0xa0);
                    if ((uVar6 & 1) != 0) {
                        *(iVar8 + 0xa8) = arg1_00;
                        *arg1_00 = iVar8 + 0xa0;
                        arg1_00[1] = puVar9;
                        *puVar9 = arg1_00;
                    }
                    *arg2 = arg1_00;
                    mutex_unlock(*unaff_x25 + 0x70);
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 2 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.202,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x80095d2,"sps_register_bam_device",piVar2);
                    }
                    ipc_log_string(arg1_00[0x45],"%s: sps:BAM %pa is registered\n","sps_register_bam_device",piVar2);
                    arg1 = 0;
                }
                else {
                    if ((*(unaff_x26 + 0x408) != '\x01') &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.199,"sps_register_bam_device"),
                        iVar3 != 0)))) {
                        _printk(0x800af9c,"sps_register_bam_device",piVar2);
                    }
                    ipc_log_string(arg1_00[0x45],"%s: sps:Fail to init BAM device: phys %pa\n",
                                   "sps_register_bam_device",piVar2);
                    mutex_unlock(*unaff_x25 + 0x70);
                    if (iVar8 != 0) {
                        iounmap(arg1_00[4]);
                    }
                    kfree(arg1_00);
                    arg1 = 0xffffffff;
                }
            }
            else {
                mutex_unlock(*unaff_x25 + 0x70);
                if ((*(unaff_x26 + 0x408) != '\x01') &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.172,"sps_register_bam_device"), iVar3 != 0))
                   )) {
                    _printk(0x800cbf5,"sps_register_bam_device",iVar8 + 0x18);
                }
                if (*unaff_x25 != 0) {
                    ipc_log_string(*(*unaff_x25 + 0x110),"%s: sps:BAM is already registered: %pa\n",
                                   "sps_register_bam_device",iVar8 + 0x18);
                }
                arg1 = 0xffffffef;
code_r0x0802018c:
                mutex_unlock(*unaff_x25 + 0x70);
            }
        }
        if ((*(unaff_x26 + 0x408) != '\x01') &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.sps_register_bam_device._rs.169,"sps_register_bam_device"), iVar3 != 0)))) {
            _printk(0x800751f,"sps_register_bam_device",arg1 + 8);
        }
        if (*unaff_x25 != 0) {
            uVar5 = *(*unaff_x25 + 0x110);
            pcVar7 = "%s: sps:Invalid device ctrl properties for BAM: %pa\n";
code_r0x08020054:
            ipc_log_string(uVar5,pcVar7,"sps_register_bam_device",arg1 + 8);
        }
    } while( true );
}


// ===== sym.phy2bam @ 0x080203bc (size 232) =====

int64_t sym.phy2bam(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.phy2bam._rs,"phy2bam"), iVar1 != 0)))) {
        _printk(0x80084da,"phy2bam");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 3)) {
        ipc_log_string(*(_segment.ehdr + 0x108),"%s: Enter\n","phy2bam");
    }
    piVar2 = *(_segment.ehdr + 0xa0);
    while( true ) {
        if (piVar2 == _segment.ehdr + 0xa0) {
            return 0;
        }
        if (piVar2[3] == arg1) break;
        piVar2 = *piVar2;
    }
    return piVar2;
}


// ===== sym.sps_deregister_bam_device @ 0x080204a4 (size 636) =====

ulong sym.sps_deregister_bam_device(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t *arg1_00;
    uint64_t uVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_deregister_bam_device._rs,"sps_deregister_bam_device"), iVar2 != 0)))) {
            _printk(0x80045c9,"sps_deregister_bam_device");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar4 = *(_segment.ehdr + 0x110);
        pcVar5 = "%s: sps: device handle should not be 0\n";
    }
    else {
        arg1_00 = sym.sps_h2bam(arg1);
        if (arg1_00 != NULL) {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_deregister_bam_device._rs.208,"sps_deregister_bam_device"), iVar2 != 0))
               )) {
                _printk(0x8007e68,"sps_deregister_bam_device",arg1_00 + 3);
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: SPS deregister BAM: phys %pa\n",
                               "sps_deregister_bam_device",arg1_00 + 3);
            }
            if ((*(arg1_00 + 0x11) & 1) != 0) {
                iVar6 = 0;
                do {
                    kfree(*(arg1_00 + iVar6 + 0x240));
                    iVar6 = iVar6 + 8;
                } while (iVar6 != 0xf8);
            }
            mutex_lock(_segment.ehdr + 0x70);
            uVar3 = __list_del_entry_valid(arg1_00);
            if ((uVar3 & 1) != 0) {
                iVar6 = *arg1_00;
                piVar1 = arg1_00[1];
                *(iVar6 + 8) = piVar1;
                *piVar1 = iVar6;
            }
            *arg1_00 = -0x2152ffffffffff00;
            arg1_00[1] = -0x2152fffffffffede;
            mutex_unlock(_segment.ehdr + 0x70);
            mutex_lock(arg1_00 + 0x15);
            sym.sps_bam_device_de_init(arg1_00);
            mutex_unlock(arg1_00 + 0x15);
            ipc_log_context_destroy(arg1_00[0x42]);
            ipc_log_context_destroy(arg1_00[0x43]);
            ipc_log_context_destroy(arg1_00[0x44]);
            ipc_log_context_destroy(arg1_00[0x45]);
            ipc_log_context_destroy(arg1_00[0x46]);
            if (arg1_00[5] != 0) {
                iounmap(arg1_00[4]);
            }
            kfree(arg1_00);
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_deregister_bam_device._rs.205,"sps_deregister_bam_device"), iVar2 != 0)))) {
            _printk(0x80070b6,"sps_deregister_bam_device");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar4 = *(_segment.ehdr + 0x110);
        pcVar5 = "%s: sps: did not find a BAM for this handle\n";
    }
    ipc_log_string(uVar4,pcVar5,"sps_deregister_bam_device");
    return 0xffffffff;
}


// ===== sym.sps_get_iovec @ 0x08020720 (size 588) =====

uint sym.sps_get_iovec(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1_00;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_get_iovec._rs,"sps_get_iovec"), iVar2 != 0)))
           ) {
            _printk(0x80074f8,"sps_get_iovec");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else if (arg2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_iovec._rs.211,"sps_get_iovec"), iVar2 != 0)))) {
            _printk(0x800ab04,"sps_get_iovec");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: iovec pointer is NULL\n";
    }
    else {
        arg1_00 = sym.sps_bam_lock(arg1);
        if (arg1_00 != 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_get_iovec._rs.217,"sps_get_iovec"), iVar2 != 0)))) {
                _printk(0x8008153,"sps_get_iovec",arg1_00 + 0x18,*(arg1 + 0xbc));
            }
            if (*(arg1_00 + 0x238) == 0) {
                ipc_log_string(*(arg1_00 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_get_iovec",arg1_00 + 0x18
                               ,*(arg1 + 0xbc));
            }
            uVar1 = sym.sps_bam_pipe_get_iovec(arg1_00,*(arg1 + 0xbc),arg2);
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_get_iovec._rs.214,"sps_get_iovec"), iVar2 != 0)))) {
            _printk(0x8007556,"sps_get_iovec");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_iovec");
    return 0xffffffff;
}


// ===== sym.sps_timer_ctrl @ 0x0802096c (size 756) =====

uint sym.sps_timer_ctrl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int iVar2;
    int64_t arg1_00;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs,"sps_timer_ctrl"), iVar2 != 0)
            ))) {
            _printk(0x80074f8,"sps_timer_ctrl");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: pipe is NULL\n";
    }
    else if (arg2 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs.218,"sps_timer_ctrl"), iVar2 != 0)))) {
            _printk(0x8004b85,"sps_timer_ctrl");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: timer_ctrl pointer is NULL\n";
    }
    else {
        if (arg3 == 0) {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs.221,"sps_timer_ctrl"), iVar2 != 0)))) {
                _printk(0x800c0f2,"sps_timer_ctrl");
            }
            if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
                ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps: no result to return\n","sps_timer_ctrl");
            }
        }
        arg1_00 = sym.sps_bam_lock(arg1);
        if (arg1_00 != 0) {
            if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs.225,"sps_timer_ctrl"), iVar2 != 0)))) {
                _printk(0x8008153,"sps_timer_ctrl",arg1_00 + 0x18,*(arg1 + 0xbc));
            }
            if (*(arg1_00 + 0x238) < 3) {
                ipc_log_string(*(arg1_00 + 0x220),"%s: sps: BAM: %pa; pipe index:%d\n","sps_timer_ctrl",
                               arg1_00 + 0x18,*(arg1 + 0xbc));
            }
            uVar1 = sym.sps_bam_pipe_timer_ctrl(arg1_00,*(arg1 + 0xbc),arg2,arg3);
            _raw_spin_unlock_irqrestore(arg1_00 + 0xe8,*(arg1_00 + 0xf0));
            return uVar1;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_timer_ctrl._rs.224,"sps_timer_ctrl"), iVar2 != 0)))) {
            _printk(0x8007556,"sps_timer_ctrl");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_timer_ctrl");
    return 0xffffffff;
}


// ===== sym.sps_pipe_reset @ 0x08020c60 (size 564) =====

ulong sym.sps_pipe_reset(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_pipe_reset._rs,"sps_pipe_reset"), iVar1 != 0)
            ))) {
            _printk(0x800c13f,"sps_pipe_reset");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg2_00 = arg2;
        if (arg2 < 0x1f) {
            iVar3 = sym.sps_h2bam(arg1);
            if (iVar3 != 0) {
                if (((1 < obj.logging_option) && (1 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar1 = ___ratelimit(obj.sps_pipe_reset._rs.232,"sps_pipe_reset"), iVar1 != 0)))) {
                    _printk(0x8008153,"sps_pipe_reset",iVar3 + 0x18,arg2_00);
                }
                if (*(iVar3 + 0x238) < 3) {
                    ipc_log_string(*(iVar3 + 0x220),"%s: sps: BAM: %pa; pipe index:%d\n","sps_pipe_reset",
                                   iVar3 + 0x18,arg2_00);
                }
                sym.bam_pipe_reset(iVar3 + 0xd8,arg2_00);
                return 0;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_reset._rs.231,"sps_pipe_reset"), iVar1 != 0)))) {
                _printk(0x8007556,"sps_pipe_reset");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: BAM is not found by handle\n";
        }
        else {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_reset._rs.228,"sps_pipe_reset"), iVar1 != 0)))) {
                _printk(0x80081a5,"sps_pipe_reset");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: pipe index is invalid\n";
        }
    }
    ipc_log_string(uVar2,pcVar4,"sps_pipe_reset");
    return 0xffffffff;
}


// ===== sym.sps_pipe_disable @ 0x08020e94 (size 560) =====

ulong sym.sps_pipe_disable(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_disable._rs,"sps_pipe_disable"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_pipe_disable");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg2_00 = arg2;
        if (arg2 < 0x1f) {
            iVar3 = sym.sps_h2bam(arg1);
            if (iVar3 != 0) {
                if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
                   ((obj.print_limit_option == 0x0 ||
                    (iVar1 = ___ratelimit(obj.sps_pipe_disable._rs.235,"sps_pipe_disable"), iVar1 != 0)))) {
                    _printk(0x8008153,"sps_pipe_disable",iVar3 + 0x18,arg2_00);
                }
                if (*(iVar3 + 0x238) == 0) {
                    ipc_log_string(*(iVar3 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_pipe_disable",
                                   iVar3 + 0x18,arg2_00);
                }
                sym.bam_disable_pipe(iVar3 + 0xd8,arg2_00);
                return 0;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_disable._rs.234,"sps_pipe_disable"), iVar1 != 0)))) {
                _printk(0x8007556,"sps_pipe_disable");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: BAM is not found by handle\n";
        }
        else {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_disable._rs.233,"sps_pipe_disable"), iVar1 != 0)))) {
                _printk(0x80081a5,"sps_pipe_disable");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: pipe index is invalid\n";
        }
    }
    ipc_log_string(uVar2,pcVar4,"sps_pipe_disable");
    return 0xffffffff;
}


// ===== sym.sps_pipe_pending_desc @ 0x080210c4 (size 692) =====

ulong sym.sps_pipe_pending_desc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t arg1_00;
    char *pcVar4;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs,"sps_pipe_pending_desc"), iVar2 != 0)))) {
            _printk(0x800c13f,"sps_pipe_pending_desc");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg2_00 = arg2;
        if (arg2 < 0x1f) {
            if (arg3 == 0) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs.237,"sps_pipe_pending_desc"), iVar2 != 0)))) {
                    _printk(0x8006c04,"sps_pipe_pending_desc");
                }
                if (_segment.ehdr == 0) {
                    return 0xffffffff;
                }
                uVar3 = *(_segment.ehdr + 0x110);
                pcVar4 = "%s: sps: input flag is NULL\n";
            }
            else {
                arg1_00 = sym.sps_h2bam(arg1);
                if (arg1_00 != 0) {
                    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
                       ((obj.print_limit_option == 0x0 ||
                        (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs.243,"sps_pipe_pending_desc"), iVar2 != 0))
                       )) {
                        _printk(0x8008153,"sps_pipe_pending_desc",arg1_00 + 0x18,arg2_00);
                    }
                    if (*(arg1_00 + 0x238) == 0) {
                        ipc_log_string(*(arg1_00 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_pipe_pending_desc"
                                       ,arg1_00 + 0x18,arg2_00);
                    }
                    uVar1 = sym.sps_bam_pipe_pending_desc(arg1_00,arg2_00);
                    *arg3 = uVar1 & 1;
                    return 0;
                }
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs.240,"sps_pipe_pending_desc"), iVar2 != 0)))) {
                    _printk(0x8006c23,"sps_pipe_pending_desc");
                }
                if (_segment.ehdr == 0) {
                    return 0xffffffff;
                }
                uVar3 = *(_segment.ehdr + 0x110);
                pcVar4 = "%s: sps: :BAM is not found by handle\n";
            }
        }
        else {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_pipe_pending_desc._rs.236,"sps_pipe_pending_desc"), iVar2 != 0)))) {
                _printk(0x80081a5,"sps_pipe_pending_desc");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            uVar3 = *(_segment.ehdr + 0x110);
            pcVar4 = "%s: sps: pipe index is invalid\n";
        }
    }
    ipc_log_string(uVar3,pcVar4,"sps_pipe_pending_desc");
    return 0xffffffff;
}


// ===== sym.sps_bam_process_irq @ 0x08021378 (size 428) =====

ulong sym.sps_bam_process_irq(int64_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_process_irq._rs,"sps_bam_process_irq"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_bam_process_irq");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg1_00 = sym.sps_h2bam(arg1);
        if (arg1_00 != 0) {
            if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_bam_process_irq._rs.245,"sps_bam_process_irq"), iVar1 != 0)))) {
                _printk(0x800a2e2,"sps_bam_process_irq",arg1_00 + 0x18);
            }
            if (*(arg1_00 + 0x238) < 2) {
                ipc_log_string(*(arg1_00 + 0x218),"%s: sps: BAM: %pa\n","sps_bam_process_irq",arg1_00 + 0x18);
            }
            uVar2 = sym.sps_bam_check_irq(arg1_00);
            return uVar2;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_process_irq._rs.244,"sps_bam_process_irq"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_bam_process_irq");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar2,pcVar3,"sps_bam_process_irq");
    return 0xffffffff;
}


// ===== sym.sps_bam_enable_irqs @ 0x08021524 (size 432) =====

ulong sym.sps_bam_enable_irqs(int64_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_enable_irqs._rs,"sps_bam_enable_irqs"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_bam_enable_irqs");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg1_00 = sym.sps_h2bam(arg1);
        if (arg1_00 != 0) {
            if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_bam_enable_irqs._rs.249,"sps_bam_enable_irqs"), iVar1 != 0)))) {
                _printk(0x800a2e2,"sps_bam_enable_irqs",arg1_00 + 0x18);
            }
            if (*(arg1_00 + 0x238) < 2) {
                ipc_log_string(*(arg1_00 + 0x218),"%s: sps: BAM: %pa\n","sps_bam_enable_irqs",arg1_00 + 0x18);
            }
            sym.sps_bam_enable_all_irqs(arg1_00);
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_enable_irqs._rs.248,"sps_bam_enable_irqs"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_bam_enable_irqs");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar2,pcVar3,"sps_bam_enable_irqs");
    return 0xffffffff;
}


// ===== sym.sps_bam_disable_irqs @ 0x080216d4 (size 432) =====

ulong sym.sps_bam_disable_irqs(int64_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_disable_irqs._rs,"sps_bam_disable_irqs"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_bam_disable_irqs");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        arg1_00 = sym.sps_h2bam(arg1);
        if (arg1_00 != 0) {
            if (((1 < obj.logging_option) && (2 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_bam_disable_irqs._rs.251,"sps_bam_disable_irqs"), iVar1 != 0)))) {
                _printk(0x800a2e2,"sps_bam_disable_irqs",arg1_00 + 0x18);
            }
            if (*(arg1_00 + 0x238) < 2) {
                ipc_log_string(*(arg1_00 + 0x218),"%s: sps: BAM: %pa\n","sps_bam_disable_irqs",arg1_00 + 0x18);
            }
            sym.sps_bam_disable_all_irqs(arg1_00);
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_bam_disable_irqs._rs.250,"sps_bam_disable_irqs"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_bam_disable_irqs");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar2 = *(_segment.ehdr + 0x110);
        pcVar3 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar2,pcVar3,"sps_bam_disable_irqs");
    return 0xffffffff;
}


// ===== sym.sps_get_bam_addr @ 0x08021884 (size 504) =====

ulong sym.sps_get_bam_addr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *puVar5;
    uint uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_get_bam_addr._rs,"sps_get_bam_addr"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_get_bam_addr");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM handle is NULL\n";
    }
    else {
        iVar2 = sym.sps_h2bam(arg1);
        if (iVar2 != 0) {
            puVar5 = iVar2 + 0x18;
            *arg2 = *puVar5;
            uVar6 = *(iVar2 + 0x28);
            *arg3 = uVar6;
            if ((1 < obj.logging_option) && (1 < obj.debug_level_option)) {
                if (obj.print_limit_option != 0x0) {
                    iVar1 = ___ratelimit(obj.sps_get_bam_addr._rs.253,"sps_get_bam_addr");
                    if (iVar1 == 0) goto code_r0x080218d4;
                    uVar6 = *arg3;
                }
                _printk(0x80061c0,"sps_get_bam_addr",puVar5,arg2,uVar6);
            }
code_r0x080218d4:
            if (*(iVar2 + 0x238) < 3) {
                ipc_log_string(*(iVar2 + 0x220),"%s: sps: BAM: %pa; base:%pa; size:%d\n","sps_get_bam_addr",puVar5,
                               arg2,*arg3);
            }
            return 0;
        }
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_get_bam_addr._rs.252,"sps_get_bam_addr"), iVar1 != 0)))) {
            _printk(0x8007556,"sps_get_bam_addr");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        uVar3 = *(_segment.ehdr + 0x110);
        pcVar4 = "%s: sps: BAM is not found by handle\n";
    }
    ipc_log_string(uVar3,pcVar4,"sps_get_bam_addr");
    return 0xffffffff;
}


// ===== sym.sps_pipe_inject_zlt @ 0x08021a7c (size 684) =====

int sym.sps_pipe_inject_zlt(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t arg1_00;
    char *pcVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_inject_zlt._rs,"sps_pipe_inject_zlt"), iVar1 != 0)))) {
            _printk(0x800c13f,"sps_pipe_inject_zlt");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        puVar4 = _segment.ehdr + 0x110;
        iVar1 = -1;
        pcVar3 = "%s: sps: BAM handle is NULL\n";
    }
    else if (arg2 < 0x1f) {
        arg1_00 = sym.sps_h2bam(arg1);
        if (arg1_00 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_inject_zlt._rs.257,"sps_pipe_inject_zlt"), iVar1 != 0)))) {
                _printk(0x8007556,"sps_pipe_inject_zlt");
            }
            if (_segment.ehdr == 0) {
                return -1;
            }
            puVar4 = _segment.ehdr + 0x110;
            iVar1 = -1;
            pcVar3 = "%s: sps: BAM is not found by handle\n";
        }
        else {
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar1 = ___ratelimit(obj.sps_pipe_inject_zlt._rs.258,"sps_pipe_inject_zlt"), iVar1 != 0)))) {
                _printk(0x8008153,"sps_pipe_inject_zlt",arg1_00 + 0x18,arg2);
            }
            if (*(arg1_00 + 0x238) == 0) {
                ipc_log_string(*(arg1_00 + 0x210),"%s: sps: BAM: %pa; pipe index:%d\n","sps_pipe_inject_zlt",
                               arg1_00 + 0x18,arg2);
            }
            iVar1 = sym.sps_bam_pipe_inject_zlt(arg1_00,arg2);
            if (iVar1 == 0) {
                return 0;
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_pipe_inject_zlt._rs.259,"sps_pipe_inject_zlt"), iVar2 != 0)))) {
                _printk(0x800b008,"sps_pipe_inject_zlt");
            }
            puVar4 = arg1_00 + 0x228;
            pcVar3 = "%s: sps: failed to inject a ZLT\n";
        }
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_pipe_inject_zlt._rs.256,"sps_pipe_inject_zlt"), iVar1 != 0)))) {
            _printk(0x80081a5,"sps_pipe_inject_zlt");
        }
        if (_segment.ehdr == 0) {
            return -1;
        }
        puVar4 = _segment.ehdr + 0x110;
        iVar1 = -1;
        pcVar3 = "%s: sps: pipe index is invalid\n";
    }
    ipc_log_string(*puVar4,pcVar3,"sps_pipe_inject_zlt");
    return iVar1;
}


// ===== sym.sps_alloc_endpoint @ 0x08021d28 (size 412) =====

int64_t sym.sps_alloc_endpoint(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar1 = ___ratelimit(obj.sps_alloc_endpoint._rs,"sps_alloc_endpoint"), iVar1 != 0)))) {
        _printk(0x8004ef6,"sps_alloc_endpoint");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
        ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps: Enter\n","sps_alloc_endpoint");
    }
    iVar2 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x288);
    if (iVar2 != 0) {
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_client_init._rs,"sps_client_init"), iVar1 != 0)))) {
            _printk(0x80084da,"sps_client_init");
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: Enter\n","sps_client_init");
        }
        memset(iVar2,0,0x288);
        *(iVar2 + 0x28) = 0xcccccccccccccccc;
        *(iVar2 + 0x30) = 0xcccccccccccccccc;
        *(iVar2 + 0x38) = 0xcccccccccccccccc;
        *(iVar2 + 0x40) = 0xcccccccccccccccc;
        *(iVar2 + 0x48) = 0xcccccccccccccccc;
        *(iVar2 + 0x50) = 0xcccccccccccccccc;
        *(iVar2 + 0x58) = 0xcccccccccccccccc;
        *(iVar2 + 0x60) = 0xcccccccccccccccc;
        *(iVar2 + 0x68) = 0xcccccccccccccccc;
        *(iVar2 + 0x70) = 0xcccccccccccccccc;
        *(iVar2 + 0x78) = 0xcccccccccccccccc;
        *(iVar2 + 0x80) = 0xcccccccccccccccc;
        *(iVar2 + 0x88) = 0xcccccccccccccccc;
        *(iVar2 + 0x90) = 0xcccccccccccccccc;
        *(iVar2 + 0x98) = 0xcccccccccccccccc;
        *(iVar2 + 0xa0) = 0xcccccccccccccccc;
        *(iVar2 + 0xa8) = 0xcccccccccccccccc;
        *(iVar2 + 0x18) = 0;
        *(iVar2 + 0x20) = 0xcccccccccccccccc;
    }
    return iVar2;
}


// ===== sym.sps_free_endpoint @ 0x08021ec4 (size 636) =====

ulong sym.sps_free_endpoint(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar1 = ___ratelimit(obj.sps_free_endpoint._rs,"sps_free_endpoint"), iVar1 != 0)))) {
        _printk(0x8004ef6,"sps_free_endpoint");
    }
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
        ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps: Enter\n","sps_free_endpoint");
    }
    if (arg1 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.sps_free_endpoint._rs.262,"sps_free_endpoint"), iVar1 != 0)))) {
            _printk(0x80074f8,"sps_free_endpoint");
        }
        if (_segment.ehdr == 0) {
            return 0xffffffff;
        }
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: pipe is NULL\n","sps_free_endpoint");
        return 0xffffffff;
    }
    if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
       ((obj.print_limit_option == 0x0 ||
        (iVar1 = ___ratelimit(obj.sps_client_de_init._rs,"sps_client_de_init"), iVar1 != 0)))) {
        _printk(0x80084da,"sps_client_de_init");
    }
    if ((_segment.ehdr == 0) || (*(_segment.ehdr + 0x120) != 0)) {
        iVar1 = *(arg1 + 0x10);
    }
    else {
        ipc_log_string(*(_segment.ehdr + 0xf8),"%s: Enter\n","sps_client_de_init");
        iVar1 = *(arg1 + 0x10);
    }
    if (iVar1 == 0) {
        *(arg1 + 0xa8) = 0;
        *(arg1 + 0xb0) = 0;
        *(arg1 + 0x98) = 0;
        *(arg1 + 0xa0) = 0;
        *(arg1 + 0x88) = 0;
        *(arg1 + 0x90) = 0;
        *(arg1 + 0x78) = 0;
        *(arg1 + 0x80) = 0;
        *(arg1 + 0x68) = 0;
        *(arg1 + 0x70) = 0;
        *(arg1 + 0x58) = 0;
        *(arg1 + 0x60) = 0;
        *(arg1 + 0x48) = 0;
        *(arg1 + 0x50) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x40) = 0;
        *(arg1 + 0x28) = 0;
        *(arg1 + 0x30) = 0;
        *(arg1 + 0x18) = 0;
        *(arg1 + 0x20) = 0;
        kfree(arg1);
        return 0;
    }
    if (obj.logging_option != 0x1) {
        if (2 < obj.print_limit_option) {
            iVar1 = ___ratelimit(obj.sps_client_de_init._rs.286,"sps_client_de_init");
            if (iVar1 == 0) goto code_r0x08021f5c;
            iVar1 = *(arg1 + 0x10);
        }
        _printk(0x8004bac,"sps_client_de_init",iVar1);
    }
code_r0x08021f5c:
    if (_segment.ehdr != 0) {
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:De-init client in connected state: 0x%x\n",
                       "sps_client_de_init",*(arg1 + 0x10));
    }
    return 0xffffffff;
}


// ===== sym.sps_read_info @ 0x08022140 (size 176) =====

int64_t sym.sps_read_info(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.sps_debugfs_lock);
    if (obj.debugfs_record_enabled == 0x0) {
        iVar2 = 0;
    }
    else {
        iVar1 = _segment.ehdr + -0x50;
        if (obj.wraparound == 0x0) {
            iVar1 = _segment.ehdr;
        }
        iVar1 = simple_read_from_buffer(arg1,arg2,arg3,CONCAT44(*0x8000004,_segment.ehdr),iVar1);
        iVar2 = iVar1;
    }
    mutex_unlock(obj.sps_debugfs_lock);
    return iVar2;
}


// ===== sym.sps_set_info @ 0x080221f0 (size 504) =====

uint64_t sym.sps_set_info(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint8_t *puVar1;
    uint64_t uVar2;
    int iVar3;
    ulong *puVar4;
    bool bVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t arg3;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint8_t auStack_a8 [80];
    int64_t iStack_58;
    
    uVar11 = arg2;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    arg3 = uVar11;
    if (0x4f < uVar11) {
        arg3 = 0x50;
    }
    auStack_a8[0x40] = 0;
    auStack_a8[0x41] = 0;
    auStack_a8[0x42] = 0;
    auStack_a8[0x43] = 0;
    auStack_a8[0x44] = 0;
    auStack_a8[0x45] = 0;
    auStack_a8[0x46] = 0;
    auStack_a8[0x47] = 0;
    auStack_a8[0x48] = 0;
    auStack_a8[0x49] = 0;
    auStack_a8[0x4a] = 0;
    auStack_a8[0x4b] = 0;
    auStack_a8[0x4c] = 0;
    auStack_a8[0x4d] = 0;
    auStack_a8[0x4e] = 0;
    auStack_a8[0x4f] = 0;
    auStack_a8[0x30] = 0;
    auStack_a8[0x31] = 0;
    auStack_a8[0x32] = 0;
    auStack_a8[0x33] = 0;
    auStack_a8[0x34] = 0;
    auStack_a8[0x35] = 0;
    auStack_a8[0x36] = 0;
    auStack_a8[0x37] = 0;
    auStack_a8[0x38] = 0;
    auStack_a8[0x39] = 0;
    auStack_a8[0x3a] = 0;
    auStack_a8[0x3b] = 0;
    auStack_a8[0x3c] = 0;
    auStack_a8[0x3d] = 0;
    auStack_a8[0x3e] = 0;
    auStack_a8[0x3f] = 0;
    auStack_a8[0x20] = 0;
    auStack_a8[0x21] = 0;
    auStack_a8[0x22] = 0;
    auStack_a8[0x23] = 0;
    auStack_a8[0x24] = 0;
    auStack_a8[0x25] = 0;
    auStack_a8[0x26] = 0;
    auStack_a8[0x27] = 0;
    auStack_a8[0x28] = 0;
    auStack_a8[0x29] = 0;
    auStack_a8[0x2a] = 0;
    auStack_a8[0x2b] = 0;
    auStack_a8[0x2c] = 0;
    auStack_a8[0x2d] = 0;
    auStack_a8[0x2e] = 0;
    auStack_a8[0x2f] = 0;
    auStack_a8[0x10] = 0;
    auStack_a8[0x11] = 0;
    auStack_a8[0x12] = 0;
    auStack_a8[0x13] = 0;
    auStack_a8[0x14] = 0;
    auStack_a8[0x15] = 0;
    auStack_a8[0x16] = 0;
    auStack_a8[0x17] = 0;
    auStack_a8[0x18] = 0;
    auStack_a8[0x19] = 0;
    auStack_a8[0x1a] = 0;
    auStack_a8[0x1b] = 0;
    auStack_a8[0x1c] = 0;
    auStack_a8[0x1d] = 0;
    auStack_a8[0x1e] = 0;
    auStack_a8[0x1f] = 0;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    auStack_a8[2] = 0;
    auStack_a8[3] = 0;
    auStack_a8[4] = 0;
    auStack_a8[5] = 0;
    auStack_a8[6] = 0;
    auStack_a8[7] = 0;
    auStack_a8[8] = 0;
    auStack_a8[9] = 0;
    auStack_a8[10] = 0;
    auStack_a8[0xb] = 0;
    auStack_a8[0xc] = 0;
    auStack_a8[0xd] = 0;
    auStack_a8[0xe] = 0;
    auStack_a8[0xf] = 0;
    __check_object_size(auStack_a8,arg3,0);
    iVar6 = sym._copy_from_user(auStack_a8,arg1,arg3);
    if (iVar6 == 0) {
        iVar6 = 0;
        uVar12 = 0;
        do {
            puVar1 = auStack_a8 + iVar6;
            if (9 < *puVar1 - 0x30) break;
            iVar6 = iVar6 + 1;
            uVar12 = (*puVar1 + uVar12 * 10) - 0x30;
        } while (iVar6 != 0x50);
        _printk(0x8004f5a,uVar12);
        if ((obj.logging_option & 0xfd) == 0) {
            uVar7 = 0x800a306;
        }
        else if (uVar12 == 0) {
            uVar7 = 0x800b071;
        }
        else {
            if (uVar12 < 0x200000) {
                iVar3 = uVar12 << 10;
                mutex_lock(obj.sps_debugfs_lock);
                uVar9 = _segment.ehdr;
                if (obj.debugfs_record_enabled == 0x0) {
code_r0x0802235c:
                    _segment.ehdr = CONCAT44(*0x8000004,iVar3);
                    _segment.ehdr = __kmalloc(iVar3,0xdc0);
                    if (_segment.ehdr == 0) {
                        _segment.ehdr = 0;
                        mutex_unlock(obj.sps_debugfs_lock);
                        uVar11 = 0xfffffffffffffff4;
                        goto code_r0x08022274;
                    }
                    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                    obj.wraparound = 0x0;
                    obj.debugfs_record_enabled = 0x1;
                }
                else {
                    if (_segment.ehdr != iVar3) {
                        obj.debugfs_record_enabled = 0x0;
                        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                        obj.wraparound = 0x0;
                        kfree(uVar9);
                        _segment.ehdr = 0;
                        goto code_r0x0802235c;
                    }
                    _printk(0x800ccce);
                }
                mutex_unlock(obj.sps_debugfs_lock);
                goto code_r0x08022274;
            }
            uVar7 = 0x800535f;
        }
        _printk(uVar7);
    }
    uVar11 = 0xfffffffffffffff2;
code_r0x08022274:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return uVar11;
    }
    auVar13 = __stack_chk_fail();
    uVar9 = auVar13._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar4 = sp_el0;
    uVar11 = (uVar9 << 8) >> 8;
    if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar9, (*puVar4 >> 0x1a & 1) != 0)) {
        uVar10 = uVar9 & uVar11;
    }
    bVar5 = CARRY8(uVar10,arg3);
    uVar10 = uVar10 + arg3;
    uVar2 = 0;
    if (!bVar5 || uVar10 == 0) {
        uVar2 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar10 = 0xffffffffffffffff;
    }
    uVar8 = arg3;
    if (!CARRY8(uVar10,~uVar2) && !CARRY8(uVar10 + ~uVar2,bVar5) || uVar10 == uVar2 + !bVar5) {
        if ((_scnprintf >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar4[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar9 & uVar11 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        uVar8 = __arch_copy_from_user(auVar13._0_8_,uVar9,arg3);
        if ((_scnprintf >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
    }
    if (uVar8 != 0) {
        memset(auVar13._0_8_ + (arg3 - uVar8),0,uVar8);
    }
    return uVar8;
}


// ===== sym._copy_from_user @ 0x080223e8 (size 376) =====

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
        if ((_scnprintf >> 0x18 & 1) == 0) {
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
        if ((_scnprintf >> 0x18 & 1) == 0) {
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


// ===== sym.sps_read_logging_option @ 0x0802259c (size 176) =====

uint64_t sym.sps_read_logging_option(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *arg1_00;
    ulong *puVar1;
    ulong *puVar2;
    code cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int *piVar9;
    int64_t iVar10;
    ulong uVar11;
    ulong extraout_x1;
    ulong extraout_x1_00;
    char *pcVar12;
    uint uVar13;
    ulong *puVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a0;
    int64_t iStack_98;
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
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
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
    iVar5 = scnprintf(&uStack_88,0x50,0x8008dc5,obj.logging_option);
    uVar15 = arg3;
    uVar7 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_88,iVar5);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.sps_set_logging_option;
    pcStack_b8 = sym.sps_set_logging_option;
    iVar8 = sp_el0;
    iStack_c8 = *(iVar8 + 0x5e0);
    uVar7 = 10;
    uStack_cc = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iStack_b0 = arg1;
    iStack_a0 = arg2;
    iStack_98 = arg3;
    iVar5 = kstrtouint_from_user(extraout_x1,uVar15,10,&uStack_cc);
    if (iVar5 == 0) {
        _printk(0x8004bdf,uStack_cc);
        if (uStack_cc < 4) {
            mutex_lock(obj.sps_debugfs_lock);
            if (((uStack_cc & 0xfffffffd) == 0) && ((obj.logging_option & 0xfd) == 1)) {
                obj.debugfs_record_enabled = 0x0;
                kfree(_segment.ehdr);
                _segment.ehdr = NULL;
                obj.wraparound = 0x0;
            }
            obj.logging_option = SUB41(uStack_cc,0);
            mutex_unlock(obj.sps_debugfs_lock);
        }
        else {
            _printk(0x80081f0);
        }
    }
    else {
        uVar15 = iVar5;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return uVar15;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.sps_set_bam_addr;
    pcStack_108 = sym.sps_set_bam_addr;
    iVar8 = sp_el0;
    iStack_118 = *(iVar8 + 0x5e0);
    uStack_11c = 0;
    ppuStack_110 = &puStack_c0;
    uVar6 = kstrtouint_from_user(extraout_x1_00,uVar7,10,&uStack_11c);
    if (uVar6 != 0) {
        uVar7 = uVar6;
        goto code_r0x080227c0;
    }
    _printk(0x8007e91,uStack_11c);
    iVar8 = sym.phy2bam(uStack_11c);
    if (iVar8 == 0) {
        _printk(0x80099a0,uStack_11c);
        goto code_r0x080227c0;
    }
    if (_segment.ehdr < 5) {
        *(iVar8 + 0x238) = _segment.ehdr;
    }
    if (0x62 < obj.reg_dump_option - 1) {
code_r0x08023088:
        _printk(0x800cd06);
        goto code_r0x080227c0;
    }
    uVar6 = *(iVar8 + 0x30);
    uVar15 = uVar6;
    arg1_00 = iVar8 + 0xd8;
    switch(obj.reg_dump_option) {
    case 1:
        sym.print_bam_reg(*arg1_00);
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1_00,uVar15);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 2:
        sym.print_bam_reg(*arg1_00);
        break;
    case 3:
code_r0x08022f94:
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        break;
    case 4:
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar15);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 5:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 6:
        sym.print_bam_pipe_selected_reg(arg1_00,4);
        sym.print_bam_pipe_selected_reg(arg1_00,5);
        break;
    case 7:
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar15,0);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 8:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 9:
        sym.print_bam_pipe_desc_fifo(arg1_00,4,0);
        goto code_r0x08022a84;
    case 10:
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar15);
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar15,0);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 0xb:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0xc:
        sym.print_bam_pipe_selected_reg(arg1_00,4);
        sym.print_bam_pipe_desc_fifo(arg1_00,4,0);
        sym.print_bam_pipe_selected_reg(arg1_00,5);
code_r0x08022a84:
        sym.print_bam_pipe_desc_fifo(arg1_00,5,0);
        break;
    case 0xd:
        if (_segment.ehdr == 0) {
            _printk(0x8004f84);
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        break;
    case 0xe:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0xf:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x10:
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_reg(*arg1_00,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    default:
        goto code_r0x08023088;
    case 0x5b:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar15 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar15);
                uVar16 = uVar15 + 1;
                uVar15 = uVar16;
            } while (uVar6 != uVar16);
        }
        break;
    case 0x5c:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x5d:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
            uVar17 = 0;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x5e:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x5f:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
            uVar17 = 0;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x60:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x61:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
            uVar17 = 0;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
            uVar17 = 0;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 0x62:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar17 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar17 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,0);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar17 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar17 = uVar17 + 1;
            } while (uVar15 != uVar17);
        }
        break;
    case 99:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_reg(*arg1_00);
        if (uVar6 == 0) goto code_r0x08022f94;
        uVar15 = 0;
        do {
            sym.print_bam_pipe_reg(*arg1_00,uVar15);
            uVar16 = uVar15 + 1;
            uVar15 = uVar16;
        } while (uVar6 != uVar16);
        sym.print_bam_selected_reg(arg1_00,*(iVar8 + 0x80));
        uVar16 = 0;
        do {
            sym.print_bam_pipe_selected_reg(arg1_00,uVar16);
            uVar16 = uVar16 + 1;
        } while (uVar6 != uVar16);
        uVar16 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1_00,uVar16,0);
            uVar16 = uVar16 + 1;
        } while (uVar6 != uVar16);
        uVar15 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1_00,uVar15,100);
            uVar16 = uVar15 + 1;
            uVar15 = uVar16;
        } while (uVar6 != uVar16);
    }
code_r0x080227c0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_118) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18_01 = sym.msm_sps_probe;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar5 = ___ratelimit(obj.msm_sps_probe._rs,"msm_sps_probe"), iVar5 != 0))))
    {
        _printk(0x8004ef6,"msm_sps_probe");
    }
    if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Enter\n","msm_sps_probe");
    }
    if (*(iVar8 + 0x300) == 0) {
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.get_platform_data._rs,"get_platform_data"), iVar5 != 0)))) {
            _printk(0x8004ef6,"get_platform_data");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Enter\n","get_platform_data");
        }
        uVar15 = _segment.ehdr;
        if (*(iVar8 + 0xa0) == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.get_platform_data._rs.376,"get_platform_data"), iVar5 != 0)))) {
                _printk(0x800bc66,"get_platform_data");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: invalid platform data\n","get_platform_data");
            }
            cVar3 = obj.logging_option;
            *(_segment.ehdr + 0x68) = 0;
            if ((cVar3 != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.341,"msm_sps_probe"), iVar5 != 0)))) {
                _printk(0x8005e33,"msm_sps_probe");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: :Fail to get platform data\n","msm_sps_probe");
                return 0xffffffed;
            }
            return 0xffffffed;
        }
        uVar13 = **(iVar8 + 0xa0);
        bVar4 = 1 < obj.logging_option;
        *(_segment.ehdr + 0x68) = uVar13;
        if ((bVar4) && (uVar15 = _segment.ehdr, obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option != 0x0) {
                iVar5 = ___ratelimit(obj.get_platform_data._rs.379,"get_platform_data");
                uVar15 = _segment.ehdr;
                if (iVar5 == 0) goto joined_r0x08023b90;
                uVar13 = *(_segment.ehdr + 0x68);
            }
            _printk(0x800c17f,"get_platform_data",uVar13);
            uVar15 = _segment.ehdr;
        }
joined_r0x08023b90:
        if ((uVar15 != 0) && (*(uVar15 + 0x120) < 4)) {
            ipc_log_string(*(uVar15 + 0x110),"%s: sps:bamdma_restricted_pipes=0x%x\n","get_platform_data",
                           *(uVar15 + 0x68));
        }
        piVar9 = platform_get_resource_byname(iVar8,0x200,"pipe_mem");
        uVar15 = _segment.ehdr;
        if (piVar9 != NULL) {
            puVar14 = _segment.ehdr + 0x38;
            *puVar14 = *piVar9;
            iVar5 = (piVar9[2] - *piVar9) + 1;
            bVar4 = 1 < obj.logging_option;
            *(uVar15 + 0x40) = iVar5;
            if ((bVar4) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option != 0x0) {
                    iVar5 = ___ratelimit(obj.get_platform_data._rs.383,"get_platform_data");
                    if (iVar5 == 0) goto code_r0x08023234;
                    puVar14 = _segment.ehdr + 0x38;
                    iVar5 = *(_segment.ehdr + 0x40);
                }
                _printk(0x8005e5a,"get_platform_data",puVar14,iVar5);
            }
code_r0x08023234:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:pipemem.base=%pa,size=0x%x\n","get_platform_data",
                               _segment.ehdr + 0x38,*(_segment.ehdr + 0x40));
            }
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.344,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get platform data\n");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: %s","msm_sps_probe","sps:get platform data\n");
        }
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    }
    else {
        iVar5 = of_property_read_variable_u32_array(*(iVar8 + 0x300),"qcom,device-type",obj.bam_init._rs.5,1,0);
        if (iVar5 < 0) {
            _segment.ehdr = CONCAT44(*0x8000004,3);
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option == 0x0) {
                    uVar15 = 3;
                }
                else {
                    iVar5 = ___ratelimit(obj.get_device_tree_data._rs,"get_device_tree_data");
                    if (iVar5 == 0) goto code_r0x080232c8;
                    uVar15 = _segment.ehdr & 0xffffffff;
                }
                _printk(0x8007ac2,"get_device_tree_data",uVar15);
            }
code_r0x080232c8:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                pcVar12 = "%s: sps:default device type %d\n";
                goto code_r0x080232e4;
            }
        }
        else {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.get_device_tree_data._rs.367,"get_device_tree_data"), iVar5 != 0)))) {
                _printk(0x8005a0b,"get_device_tree_data",_segment.ehdr & 0xffffffff);
            }
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                pcVar12 = "%s: sps:device type is %d\n";
code_r0x080232e4:
                ipc_log_string(*(_segment.ehdr + 0x110),pcVar12,"get_device_tree_data",_segment.ehdr & 0xffffffff);
            }
        }
        iVar10 = of_find_property(*(iVar8 + 0x300),"qcom,pipe-attr-ee",0);
        obj.enhd_pipe = iVar10 != 0;
        if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar11 = 0x800b728;
                if (iVar10 == 0) {
                    uVar11 = 0x8006670;
                }
            }
            else {
                iVar5 = ___ratelimit(obj.get_device_tree_data._rs.371,"get_device_tree_data");
                if (iVar5 == 0) goto code_r0x0802332c;
                uVar11 = 0x8006670;
                if (obj.enhd_pipe != 0x0) {
                    uVar11 = 0x800b728;
                }
            }
            _printk(0x8008e10,"get_device_tree_data",uVar11);
        }
code_r0x0802332c:
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
            uVar11 = 0x8006670;
            if (obj.enhd_pipe != 0x0) {
                uVar11 = 0x800b728;
            }
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:PIPE_ATTR_EE is %s supported\n","get_device_tree_data",
                           uVar11);
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.333,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get data from device tree\n");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: %s","msm_sps_probe","sps:get data from device tree\n");
        }
        iVar10 = of_match_device(obj.msm_sps_match,iVar8 + 0x10);
        if (iVar10 == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option == 0x0) {
                    uVar15 = 1;
                }
                else {
                    iVar5 = ___ratelimit(obj.msm_sps_probe._rs.338,"msm_sps_probe");
                    if (iVar5 == 0) goto code_r0x08023424;
                    uVar15 = _segment.ehdr & 0xffffffff;
                }
                _printk(0x800bc43,"msm_sps_probe",uVar15);
            }
code_r0x08023424:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                uVar11 = _segment.ehdr[0x22];
                pcVar12 = "%s: sps:use default BAM type:%d\n";
                goto code_r0x08023448;
            }
        }
        else {
            _segment.ehdr = CONCAT44(*0x8000004,**(iVar10 + 0xc0));
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                uVar13 = **(iVar10 + 0xc0);
                if (obj.print_limit_option != 0x0) {
                    iVar5 = ___ratelimit(obj.msm_sps_probe._rs.335,"msm_sps_probe");
                    if (iVar5 == 0) goto code_r0x080233e4;
                    uVar13 = _segment.ehdr;
                }
                _printk(0x80089dc,"msm_sps_probe",uVar13);
            }
code_r0x080233e4:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                uVar11 = _segment.ehdr[0x22];
                pcVar12 = "%s: sps:BAM type is:%d\n";
code_r0x08023448:
                ipc_log_string(uVar11,pcVar12,"msm_sps_probe",_segment.ehdr);
            }
        }
    }
    uVar11 = __class_create(obj.__this_module,"msm_sps",obj.sps_debugfs_init.__key);
    *_segment.ehdr = uVar11;
    uVar6 = alloc_chrdev_region(_segment.ehdr + 1,0,1,"msm_sps");
    if (uVar6 != 0) {
        uVar15 = uVar6;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.346,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8004c12,"msm_sps_probe");
        }
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr[0x22],"%s: sps: alloc_chrdev_region err\n","msm_sps_probe");
        }
        goto code_r0x08023978;
    }
    uVar15 = device_create(*_segment.ehdr,0,*(_segment.ehdr + 1),_segment.ehdr,"msm_sps");
    puVar14 = _segment.ehdr;
    _segment.ehdr[2] = uVar15;
    if (uVar15 < 0xfffffffffffff001) {
        if (*(iVar8 + 0x300) != 0) {
            *(uVar15 + 0x2f0) = *(iVar8 + 0x300);
        }
        if (_segment.ehdr == 0) {
            uVar15 = clk_get(puVar14[2],"mem_clk");
            _segment.ehdr[3] = uVar15;
            if (uVar15 < 0xfffffffffffff001) {
                uVar6 = clk_prepare(uVar15);
                if (uVar6 == 0) {
                    uVar6 = clk_enable(uVar15);
                    if (uVar6 == 0) goto code_r0x0802358c;
                    clk_unprepare(uVar15);
                }
                uVar15 = uVar6;
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.356,"msm_sps_probe"), iVar5 != 0)))) {
                    _printk(0x8008dea,"msm_sps_probe");
                }
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps: failed to enable pmem_clk\n","msm_sps_probe");
                }
                goto code_r0x0802393c;
            }
            if (uVar15 == 0xfffffffffffffdfb) {
                uVar15 = 0xfffffdfb;
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.353,"msm_sps_probe"), iVar5 != 0)))) {
                    _printk(0x8008dc9,"msm_sps_probe");
                }
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps: fail to get pmem_clk\n","msm_sps_probe");
                }
                uVar15 = 0;
            }
        }
        else {
code_r0x0802358c:
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.sps_device_init._rs,"sps_device_init"), iVar5 != 0)))) {
                _printk(0x80084da,"sps_device_init");
            }
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                ipc_log_string(_segment.ehdr[0x22],"%s: Enter\n","sps_device_init");
            }
            iVar5 = sym.sps_mem_init(_segment.ehdr[7],*(_segment.ehdr + 8));
            puVar14 = _segment.ehdr;
            if (iVar5 == 0) {
                puVar1 = _segment.ehdr + 0x14;
                puVar2 = _segment.ehdr + 0xe;
                _segment.ehdr[0x14] = puVar1;
                puVar14[0x15] = puVar1;
                __mutex_init(puVar2,"&sps->lock",obj.sps_debugfs_init.__key);
                iVar5 = sym.sps_rm_init(_segment.ehdr + 0x17);
                if (iVar5 == 0) {
                    iVar5 = sym.sps_map_init(0,*(_segment.ehdr + 0x6c));
                    puVar14 = _segment.ehdr;
                    if (iVar5 == 0) {
                        bVar4 = obj.logging_option != 0x1;
                        *(_segment.ehdr + 6) = 1;
                        if ((bVar4) &&
                           ((obj.print_limit_option < 2 ||
                            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.362,"msm_sps_probe"), puVar14 = _segment.ehdr
                            , iVar5 != 0)))) {
                            _printk(0x8007fbf,"msm_sps_probe","sps:sps is ready\n");
                            puVar14 = _segment.ehdr;
                        }
                        if (puVar14 != NULL) {
                            ipc_log_string(puVar14[0x22],"%s: %s","msm_sps_probe","sps:sps is ready\n");
                        }
                        return 0;
                    }
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_device_init._rs.396,"sps_device_init"), iVar5 != 0)))) {
                        _printk(0x8004fd7,"sps_device_init");
                    }
                    if (_segment.ehdr != NULL) {
                        pcVar12 = "%s: sps: SPS connection mapping init failed\n";
                        goto code_r0x080238b0;
                    }
                }
                else {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_device_init._rs.390,"sps_device_init"), iVar5 != 0)))) {
                        _printk(0x8004c5e,"sps_device_init");
                    }
                    if (_segment.ehdr != NULL) {
                        pcVar12 = "%s: sps: Fail to init SPS resource manager\n";
code_r0x080238b0:
                        ipc_log_string(_segment.ehdr[0x22],pcVar12,"sps_device_init");
                    }
                }
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.sps_device_init._rs.386,"sps_device_init"), iVar5 != 0)))) {
                    _printk(0x8004fb4,"sps_device_init");
                }
                if (_segment.ehdr != NULL) {
                    pcVar12 = "%s: sps: SPS memory init failed\n";
                    goto code_r0x080238b0;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.359,"msm_sps_probe"), iVar5 != 0)))) {
                _printk(0x8004c3e,"msm_sps_probe");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr[0x22],"%s: sps: sps_device_init err\n","msm_sps_probe");
            }
            if (_segment.ehdr == 0) {
                uVar11 = _segment.ehdr[3];
                clk_disable(uVar11);
                clk_unprepare(uVar11);
                uVar15 = 0xffffffff;
code_r0x0802393c:
                if (_segment.ehdr == 0) {
                    clk_put(_segment.ehdr[3]);
                }
            }
            else {
                uVar15 = 0xffffffff;
            }
        }
        device_destroy(*_segment.ehdr,*(_segment.ehdr + 1));
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.349,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x80046b9,"msm_sps_probe");
        }
        if (_segment.ehdr == NULL) {
            uVar15 = 0;
        }
        else {
            ipc_log_string(_segment.ehdr[0x22],"%s: sps: device_create err\n","msm_sps_probe");
            uVar15 = 0;
        }
    }
    unregister_chrdev_region(*(_segment.ehdr + 1),1);
code_r0x08023978:
    class_destroy(*_segment.ehdr);
    return uVar15;
}


// ===== sym.sps_set_logging_option @ 0x0802264c (size 292) =====

uint64_t sym.sps_set_logging_option(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *arg1_00;
    ulong *puVar1;
    ulong *puVar2;
    code cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int *piVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong extraout_x1;
    char *pcVar11;
    uint uVar12;
    uint64_t uVar13;
    ulong *puVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar13 = 10;
    uStack_3c = 0;
    iVar5 = kstrtouint_from_user(arg1,arg2,10,&uStack_3c);
    if (iVar5 == 0) {
        _printk(0x8004bdf,uStack_3c);
        if (uStack_3c < 4) {
            mutex_lock(obj.sps_debugfs_lock);
            if (((uStack_3c & 0xfffffffd) == 0) && ((obj.logging_option & 0xfd) == 1)) {
                obj.debugfs_record_enabled = 0x0;
                kfree(_segment.ehdr);
                _segment.ehdr = NULL;
                obj.wraparound = 0x0;
            }
            obj.logging_option = SUB41(uStack_3c,0);
            mutex_unlock(obj.sps_debugfs_lock);
        }
        else {
            _printk(0x80081f0);
        }
    }
    else {
        arg2 = iVar5;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.sps_set_bam_addr;
    pcStack_78 = sym.sps_set_bam_addr;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    uStack_8c = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    uVar6 = kstrtouint_from_user(extraout_x1,uVar13,10,&uStack_8c);
    if (uVar6 != 0) {
        uVar13 = uVar6;
        goto code_r0x080227c0;
    }
    _printk(0x8007e91,uStack_8c);
    iVar7 = sym.phy2bam(uStack_8c);
    if (iVar7 == 0) {
        _printk(0x80099a0,uStack_8c);
        goto code_r0x080227c0;
    }
    if (_segment.ehdr < 5) {
        *(iVar7 + 0x238) = _segment.ehdr;
    }
    if (0x62 < obj.reg_dump_option - 1) {
code_r0x08023088:
        _printk(0x800cd06);
        goto code_r0x080227c0;
    }
    uVar6 = *(iVar7 + 0x30);
    uVar17 = uVar6;
    arg1_00 = iVar7 + 0xd8;
    switch(obj.reg_dump_option) {
    case 1:
        sym.print_bam_reg(*arg1_00);
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1_00,uVar17);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 2:
        sym.print_bam_reg(*arg1_00);
        break;
    case 3:
code_r0x08022f94:
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        break;
    case 4:
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar17);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 5:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 6:
        sym.print_bam_pipe_selected_reg(arg1_00,4);
        sym.print_bam_pipe_selected_reg(arg1_00,5);
        break;
    case 7:
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar17,0);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 8:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 9:
        sym.print_bam_pipe_desc_fifo(arg1_00,4,0);
        goto code_r0x08022a84;
    case 10:
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar17);
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar17,0);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 0xb:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0xc:
        sym.print_bam_pipe_selected_reg(arg1_00,4);
        sym.print_bam_pipe_desc_fifo(arg1_00,4,0);
        sym.print_bam_pipe_selected_reg(arg1_00,5);
code_r0x08022a84:
        sym.print_bam_pipe_desc_fifo(arg1_00,5,0);
        break;
    case 0xd:
        if (_segment.ehdr == 0) {
            _printk(0x8004f84);
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        break;
    case 0xe:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0xf:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x10:
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_reg(*arg1_00,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    default:
        goto code_r0x08023088;
    case 0x5b:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar17 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar17);
                uVar15 = uVar17 + 1;
                uVar17 = uVar15;
            } while (uVar6 != uVar15);
        }
        break;
    case 0x5c:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x5d:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
            uVar16 = 0;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x5e:
        if (_segment.ehdr == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,_segment.ehdr & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x5f:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
            uVar16 = 0;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x60:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x61:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
            uVar16 = 0;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,0);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
            uVar16 = 0;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 0x62:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        if (uVar6 != 0) {
            uVar16 = 0;
            uVar6 = _segment.ehdr;
            do {
                if ((uVar6 >> (uVar16 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar16 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,0);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar16 & 0xffffffff,100);
                    uVar6 = _segment.ehdr;
                }
                uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
        }
        break;
    case 99:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr & 0xffffffff);
        sym.print_bam_reg(*arg1_00);
        if (uVar6 == 0) goto code_r0x08022f94;
        uVar17 = 0;
        do {
            sym.print_bam_pipe_reg(*arg1_00,uVar17);
            uVar15 = uVar17 + 1;
            uVar17 = uVar15;
        } while (uVar6 != uVar15);
        sym.print_bam_selected_reg(arg1_00,*(iVar7 + 0x80));
        uVar15 = 0;
        do {
            sym.print_bam_pipe_selected_reg(arg1_00,uVar15);
            uVar15 = uVar15 + 1;
        } while (uVar6 != uVar15);
        uVar15 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1_00,uVar15,0);
            uVar15 = uVar15 + 1;
        } while (uVar6 != uVar15);
        uVar17 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1_00,uVar17,100);
            uVar15 = uVar17 + 1;
            uVar17 = uVar15;
        } while (uVar6 != uVar15);
    }
code_r0x080227c0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_88) {
        return uVar13;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_sps_probe;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar5 = ___ratelimit(obj.msm_sps_probe._rs,"msm_sps_probe"), iVar5 != 0))))
    {
        _printk(0x8004ef6,"msm_sps_probe");
    }
    if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
        ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Enter\n","msm_sps_probe");
    }
    if (*(iVar7 + 0x300) == 0) {
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.get_platform_data._rs,"get_platform_data"), iVar5 != 0)))) {
            _printk(0x8004ef6,"get_platform_data");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: Enter\n","get_platform_data");
        }
        uVar13 = _segment.ehdr;
        if (*(iVar7 + 0xa0) == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.get_platform_data._rs.376,"get_platform_data"), iVar5 != 0)))) {
                _printk(0x800bc66,"get_platform_data");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: invalid platform data\n","get_platform_data");
            }
            cVar3 = obj.logging_option;
            *(_segment.ehdr + 0x68) = 0;
            if ((cVar3 != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.341,"msm_sps_probe"), iVar5 != 0)))) {
                _printk(0x8005e33,"msm_sps_probe");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps: :Fail to get platform data\n","msm_sps_probe");
                return 0xffffffed;
            }
            return 0xffffffed;
        }
        uVar12 = **(iVar7 + 0xa0);
        bVar4 = 1 < obj.logging_option;
        *(_segment.ehdr + 0x68) = uVar12;
        if ((bVar4) && (uVar13 = _segment.ehdr, obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option != 0x0) {
                iVar5 = ___ratelimit(obj.get_platform_data._rs.379,"get_platform_data");
                uVar13 = _segment.ehdr;
                if (iVar5 == 0) goto joined_r0x08023b90;
                uVar12 = *(_segment.ehdr + 0x68);
            }
            _printk(0x800c17f,"get_platform_data",uVar12);
            uVar13 = _segment.ehdr;
        }
joined_r0x08023b90:
        if ((uVar13 != 0) && (*(uVar13 + 0x120) < 4)) {
            ipc_log_string(*(uVar13 + 0x110),"%s: sps:bamdma_restricted_pipes=0x%x\n","get_platform_data",
                           *(uVar13 + 0x68));
        }
        piVar8 = platform_get_resource_byname(iVar7,0x200,"pipe_mem");
        uVar13 = _segment.ehdr;
        if (piVar8 != NULL) {
            puVar14 = _segment.ehdr + 0x38;
            *puVar14 = *piVar8;
            iVar5 = (piVar8[2] - *piVar8) + 1;
            bVar4 = 1 < obj.logging_option;
            *(uVar13 + 0x40) = iVar5;
            if ((bVar4) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option != 0x0) {
                    iVar5 = ___ratelimit(obj.get_platform_data._rs.383,"get_platform_data");
                    if (iVar5 == 0) goto code_r0x08023234;
                    puVar14 = _segment.ehdr + 0x38;
                    iVar5 = *(_segment.ehdr + 0x40);
                }
                _printk(0x8005e5a,"get_platform_data",puVar14,iVar5);
            }
code_r0x08023234:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:pipemem.base=%pa,size=0x%x\n","get_platform_data",
                               _segment.ehdr + 0x38,*(_segment.ehdr + 0x40));
            }
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.344,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get platform data\n");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: %s","msm_sps_probe","sps:get platform data\n");
        }
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    }
    else {
        iVar5 = of_property_read_variable_u32_array(*(iVar7 + 0x300),"qcom,device-type",obj.bam_init._rs.5,1,0);
        if (iVar5 < 0) {
            _segment.ehdr = CONCAT44(*0x8000004,3);
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option == 0x0) {
                    uVar13 = 3;
                }
                else {
                    iVar5 = ___ratelimit(obj.get_device_tree_data._rs,"get_device_tree_data");
                    if (iVar5 == 0) goto code_r0x080232c8;
                    uVar13 = _segment.ehdr & 0xffffffff;
                }
                _printk(0x8007ac2,"get_device_tree_data",uVar13);
            }
code_r0x080232c8:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                pcVar11 = "%s: sps:default device type %d\n";
                goto code_r0x080232e4;
            }
        }
        else {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.get_device_tree_data._rs.367,"get_device_tree_data"), iVar5 != 0)))) {
                _printk(0x8005a0b,"get_device_tree_data",_segment.ehdr & 0xffffffff);
            }
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
                pcVar11 = "%s: sps:device type is %d\n";
code_r0x080232e4:
                ipc_log_string(*(_segment.ehdr + 0x110),pcVar11,"get_device_tree_data",_segment.ehdr & 0xffffffff);
            }
        }
        iVar9 = of_find_property(*(iVar7 + 0x300),"qcom,pipe-attr-ee",0);
        obj.enhd_pipe = iVar9 != 0;
        if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar10 = 0x800b728;
                if (iVar9 == 0) {
                    uVar10 = 0x8006670;
                }
            }
            else {
                iVar5 = ___ratelimit(obj.get_device_tree_data._rs.371,"get_device_tree_data");
                if (iVar5 == 0) goto code_r0x0802332c;
                uVar10 = 0x8006670;
                if (obj.enhd_pipe != 0x0) {
                    uVar10 = 0x800b728;
                }
            }
            _printk(0x8008e10,"get_device_tree_data",uVar10);
        }
code_r0x0802332c:
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) < 4)) {
            uVar10 = 0x8006670;
            if (obj.enhd_pipe != 0x0) {
                uVar10 = 0x800b728;
            }
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:PIPE_ATTR_EE is %s supported\n","get_device_tree_data",
                           uVar10);
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.333,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get data from device tree\n");
        }
        if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: %s","msm_sps_probe","sps:get data from device tree\n");
        }
        iVar9 = of_match_device(obj.msm_sps_match,iVar7 + 0x10);
        if (iVar9 == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option == 0x0) {
                    uVar13 = 1;
                }
                else {
                    iVar5 = ___ratelimit(obj.msm_sps_probe._rs.338,"msm_sps_probe");
                    if (iVar5 == 0) goto code_r0x08023424;
                    uVar13 = _segment.ehdr & 0xffffffff;
                }
                _printk(0x800bc43,"msm_sps_probe",uVar13);
            }
code_r0x08023424:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                uVar10 = _segment.ehdr[0x22];
                pcVar11 = "%s: sps:use default BAM type:%d\n";
                goto code_r0x08023448;
            }
        }
        else {
            _segment.ehdr = CONCAT44(*0x8000004,**(iVar9 + 0xc0));
            if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
                uVar12 = **(iVar9 + 0xc0);
                if (obj.print_limit_option != 0x0) {
                    iVar5 = ___ratelimit(obj.msm_sps_probe._rs.335,"msm_sps_probe");
                    if (iVar5 == 0) goto code_r0x080233e4;
                    uVar12 = _segment.ehdr;
                }
                _printk(0x80089dc,"msm_sps_probe",uVar12);
            }
code_r0x080233e4:
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                uVar10 = _segment.ehdr[0x22];
                pcVar11 = "%s: sps:BAM type is:%d\n";
code_r0x08023448:
                ipc_log_string(uVar10,pcVar11,"msm_sps_probe",_segment.ehdr);
            }
        }
    }
    uVar10 = __class_create(obj.__this_module,"msm_sps",obj.sps_debugfs_init.__key);
    *_segment.ehdr = uVar10;
    uVar6 = alloc_chrdev_region(_segment.ehdr + 1,0,1,"msm_sps");
    if (uVar6 != 0) {
        uVar13 = uVar6;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.346,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x8004c12,"msm_sps_probe");
        }
        if (_segment.ehdr != NULL) {
            ipc_log_string(_segment.ehdr[0x22],"%s: sps: alloc_chrdev_region err\n","msm_sps_probe");
        }
        goto code_r0x08023978;
    }
    uVar13 = device_create(*_segment.ehdr,0,*(_segment.ehdr + 1),_segment.ehdr,"msm_sps");
    puVar14 = _segment.ehdr;
    _segment.ehdr[2] = uVar13;
    if (uVar13 < 0xfffffffffffff001) {
        if (*(iVar7 + 0x300) != 0) {
            *(uVar13 + 0x2f0) = *(iVar7 + 0x300);
        }
        if (_segment.ehdr == 0) {
            uVar13 = clk_get(puVar14[2],"mem_clk");
            _segment.ehdr[3] = uVar13;
            if (uVar13 < 0xfffffffffffff001) {
                uVar6 = clk_prepare(uVar13);
                if (uVar6 == 0) {
                    uVar6 = clk_enable(uVar13);
                    if (uVar6 == 0) goto code_r0x0802358c;
                    clk_unprepare(uVar13);
                }
                uVar13 = uVar6;
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.356,"msm_sps_probe"), iVar5 != 0)))) {
                    _printk(0x8008dea,"msm_sps_probe");
                }
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps: failed to enable pmem_clk\n","msm_sps_probe");
                }
                goto code_r0x0802393c;
            }
            if (uVar13 == 0xfffffffffffffdfb) {
                uVar13 = 0xfffffdfb;
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.353,"msm_sps_probe"), iVar5 != 0)))) {
                    _printk(0x8008dc9,"msm_sps_probe");
                }
                if (_segment.ehdr != NULL) {
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps: fail to get pmem_clk\n","msm_sps_probe");
                }
                uVar13 = 0;
            }
        }
        else {
code_r0x0802358c:
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar5 = ___ratelimit(obj.sps_device_init._rs,"sps_device_init"), iVar5 != 0)))) {
                _printk(0x80084da,"sps_device_init");
            }
            if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 0x24) < 4)) {
                ipc_log_string(_segment.ehdr[0x22],"%s: Enter\n","sps_device_init");
            }
            iVar5 = sym.sps_mem_init(_segment.ehdr[7],*(_segment.ehdr + 8));
            puVar14 = _segment.ehdr;
            if (iVar5 == 0) {
                puVar1 = _segment.ehdr + 0x14;
                puVar2 = _segment.ehdr + 0xe;
                _segment.ehdr[0x14] = puVar1;
                puVar14[0x15] = puVar1;
                __mutex_init(puVar2,"&sps->lock",obj.sps_debugfs_init.__key);
                iVar5 = sym.sps_rm_init(_segment.ehdr + 0x17);
                if (iVar5 == 0) {
                    iVar5 = sym.sps_map_init(0,*(_segment.ehdr + 0x6c));
                    puVar14 = _segment.ehdr;
                    if (iVar5 == 0) {
                        bVar4 = obj.logging_option != 0x1;
                        *(_segment.ehdr + 6) = 1;
                        if ((bVar4) &&
                           ((obj.print_limit_option < 2 ||
                            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.362,"msm_sps_probe"), puVar14 = _segment.ehdr
                            , iVar5 != 0)))) {
                            _printk(0x8007fbf,"msm_sps_probe","sps:sps is ready\n");
                            puVar14 = _segment.ehdr;
                        }
                        if (puVar14 != NULL) {
                            ipc_log_string(puVar14[0x22],"%s: %s","msm_sps_probe","sps:sps is ready\n");
                        }
                        return 0;
                    }
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_device_init._rs.396,"sps_device_init"), iVar5 != 0)))) {
                        _printk(0x8004fd7,"sps_device_init");
                    }
                    if (_segment.ehdr != NULL) {
                        pcVar11 = "%s: sps: SPS connection mapping init failed\n";
                        goto code_r0x080238b0;
                    }
                }
                else {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar5 = ___ratelimit(obj.sps_device_init._rs.390,"sps_device_init"), iVar5 != 0)))) {
                        _printk(0x8004c5e,"sps_device_init");
                    }
                    if (_segment.ehdr != NULL) {
                        pcVar11 = "%s: sps: Fail to init SPS resource manager\n";
code_r0x080238b0:
                        ipc_log_string(_segment.ehdr[0x22],pcVar11,"sps_device_init");
                    }
                }
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar5 = ___ratelimit(obj.sps_device_init._rs.386,"sps_device_init"), iVar5 != 0)))) {
                    _printk(0x8004fb4,"sps_device_init");
                }
                if (_segment.ehdr != NULL) {
                    pcVar11 = "%s: sps: SPS memory init failed\n";
                    goto code_r0x080238b0;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.359,"msm_sps_probe"), iVar5 != 0)))) {
                _printk(0x8004c3e,"msm_sps_probe");
            }
            if (_segment.ehdr != NULL) {
                ipc_log_string(_segment.ehdr[0x22],"%s: sps: sps_device_init err\n","msm_sps_probe");
            }
            if (_segment.ehdr == 0) {
                uVar10 = _segment.ehdr[3];
                clk_disable(uVar10);
                clk_unprepare(uVar10);
                uVar13 = 0xffffffff;
code_r0x0802393c:
                if (_segment.ehdr == 0) {
                    clk_put(_segment.ehdr[3]);
                }
            }
            else {
                uVar13 = 0xffffffff;
            }
        }
        device_destroy(*_segment.ehdr,*(_segment.ehdr + 1));
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar5 = ___ratelimit(obj.msm_sps_probe._rs.349,"msm_sps_probe"), iVar5 != 0)))) {
            _printk(0x80046b9,"msm_sps_probe");
        }
        if (_segment.ehdr == NULL) {
            uVar13 = 0;
        }
        else {
            ipc_log_string(_segment.ehdr[0x22],"%s: sps: device_create err\n","msm_sps_probe");
            uVar13 = 0;
        }
    }
    unregister_chrdev_region(*(_segment.ehdr + 1),1);
code_r0x08023978:
    class_destroy(*_segment.ehdr);
    return uVar13;
}


// ===== sym.sps_set_bam_addr @ 0x08022770 (size 2368) =====

uint64_t sym.sps_set_bam_addr(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *arg1_00;
    code cVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int *piVar6;
    int64_t iVar7;
    ulong uVar8;
    char *pcVar9;
    uint uVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_4c = 0;
    uVar3 = kstrtouint_from_user(arg1,arg2,10,&uStack_4c);
    if (uVar3 != 0) {
        arg2 = uVar3;
        goto code_r0x080227c0;
    }
    _printk(0x8007e91,uStack_4c);
    iVar5 = sym.phy2bam(uStack_4c);
    if (iVar5 == 0) {
        _printk(0x80099a0,uStack_4c);
        goto code_r0x080227c0;
    }
    if (_segment.ehdr < 5) {
        *(iVar5 + 0x238) = _segment.ehdr;
    }
    if (0x62 < obj.reg_dump_option - 1) {
code_r0x08023088:
        _printk(0x800cd06);
        goto code_r0x080227c0;
    }
    uVar3 = *(iVar5 + 0x30);
    uVar12 = uVar3;
    arg1_00 = iVar5 + 0xd8;
    //switch table (98 cases) at 0x800d1e6
    switch(obj.reg_dump_option) {
    case 1:
        sym.print_bam_reg(*arg1_00);
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_reg(*arg1_00,uVar12);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 2:
        sym.print_bam_reg(*arg1_00);
        break;
    case 3:
code_r0x08022f94:
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        break;
    case 4:
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar12);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 5:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 6:
        sym.print_bam_pipe_selected_reg(arg1_00,4);
        sym.print_bam_pipe_selected_reg(arg1_00,5);
        break;
    case 7:
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar12,0);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 8:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 9:
        sym.print_bam_pipe_desc_fifo(arg1_00,4,0);
        goto code_r0x08022a84;
    case 10:
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar12);
                sym.print_bam_pipe_desc_fifo(arg1_00,uVar12,0);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 0xb:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0xc:
        sym.print_bam_pipe_selected_reg(arg1_00,4);
        sym.print_bam_pipe_desc_fifo(arg1_00,4,0);
        sym.print_bam_pipe_selected_reg(arg1_00,5);
code_r0x08022a84:
        sym.print_bam_pipe_desc_fifo(arg1_00,5,0);
        break;
    case 0xd:
        if (_segment.ehdr == 0) {
            _printk(0x8004f84);
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        break;
    case 0xe:
        if (_segment.ehdr == 0) {
            _segment.ehdr = 1;
        }
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,_segment.ehdr);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0xf:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,100);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x10:
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_reg(*arg1_00,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    default:
        goto code_r0x08023088;
    case 0x5b:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar12 = 0;
            do {
                sym.print_bam_pipe_selected_reg(arg1_00,uVar12);
                uVar13 = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar3 != uVar13);
        }
        break;
    case 0x5c:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x5d:
        if (_segment.ehdr == 0) {
            _segment.ehdr = 1;
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
            uVar14 = 0;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,_segment.ehdr);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x5e:
        if (_segment.ehdr == 0) {
            _segment.ehdr = 1;
        }
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,_segment.ehdr);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x5f:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
            uVar14 = 0;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x60:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x61:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
            uVar14 = 0;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,0);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
            uVar14 = 0;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,100);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 0x62:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        if (uVar3 != 0) {
            uVar14 = 0;
            uVar3 = _segment.ehdr;
            do {
                if ((uVar3 >> (uVar14 & 0x3f) & 1) != 0) {
                    sym.print_bam_pipe_selected_reg(arg1_00,uVar14 & 0xffffffff);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,0);
                    sym.print_bam_pipe_desc_fifo(arg1_00,uVar14 & 0xffffffff,100);
                    uVar3 = _segment.ehdr;
                }
                uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
        }
        break;
    case 99:
        sym.print_bam_test_bus_reg(arg1_00,_segment.ehdr);
        sym.print_bam_reg(*arg1_00);
        if (uVar3 == 0) goto code_r0x08022f94;
        uVar12 = 0;
        do {
            sym.print_bam_pipe_reg(*arg1_00,uVar12);
            uVar13 = uVar12 + 1;
            uVar12 = uVar13;
        } while (uVar3 != uVar13);
        sym.print_bam_selected_reg(arg1_00,*(iVar5 + 0x80));
        uVar13 = 0;
        do {
            sym.print_bam_pipe_selected_reg(arg1_00,uVar13);
            uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
        uVar13 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1_00,uVar13,0);
            uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
        uVar12 = 0;
        do {
            sym.print_bam_pipe_desc_fifo(arg1_00,uVar12,100);
            uVar13 = uVar12 + 1;
            uVar12 = uVar13;
        } while (uVar3 != uVar13);
    }
code_r0x080227c0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return arg2;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.msm_sps_probe;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar4 = ___ratelimit(obj.msm_sps_probe._rs,"msm_sps_probe"), iVar4 != 0))))
    {
        _printk(0x8004ef6,"msm_sps_probe");
    }
    iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
        ipc_log_string(*(iVar7 + 0x110),"%s: sps: Enter\n","msm_sps_probe");
    }
    if (*(iVar5 + 0x300) == 0) {
        _segment.ehdr = 0;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar4 = ___ratelimit(obj.get_platform_data._rs,"get_platform_data"), iVar4 != 0)))) {
            _printk(0x8004ef6,"get_platform_data");
        }
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
            ipc_log_string(*(iVar7 + 0x110),"%s: sps: Enter\n","get_platform_data");
        }
        if (*(iVar5 + 0xa0) == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.get_platform_data._rs.376,"get_platform_data"), iVar4 != 0)))) {
                _printk(0x800bc66,"get_platform_data");
            }
            iVar5 = 0;
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: invalid platform data\n",
                               "get_platform_data");
                iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            cVar1 = obj.logging_option;
            *(iVar5 + 0x68) = 0;
            if ((cVar1 != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.341,"msm_sps_probe"), iVar4 != 0)))) {
                _printk(0x8005e33,"msm_sps_probe");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: :Fail to get platform data\n",
                               "msm_sps_probe");
                return 0xffffffed;
            }
            return 0xffffffed;
        }
        uVar10 = **(iVar5 + 0xa0);
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        bVar2 = 1 < obj.logging_option;
        *(iVar7 + 0x68) = uVar10;
        if (bVar2) {
            if (obj.debug_level_option != 0x0) {
                if (obj.print_limit_option != 0x0) {
                    iVar4 = ___ratelimit(obj.get_platform_data._rs.379,"get_platform_data");
                    if (iVar4 == 0) goto code_r0x08023b8c;
                    uVar10 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x68);
                }
                _printk(0x800c17f,"get_platform_data",uVar10);
            }
code_r0x08023b8c:
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
            ipc_log_string(*(iVar7 + 0x110),"%s: sps:bamdma_restricted_pipes=0x%x\n","get_platform_data",
                           *(iVar7 + 0x68));
        }
        piVar6 = platform_get_resource_byname(iVar5,0x200,"pipe_mem");
        if (piVar6 != NULL) {
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            puVar11 = iVar7 + 0x38;
            *puVar11 = *piVar6;
            iVar4 = (piVar6[2] - *piVar6) + 1;
            bVar2 = 1 < obj.logging_option;
            *(iVar7 + 0x40) = iVar4;
            if ((bVar2) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option != 0x0) {
                    iVar4 = ___ratelimit(obj.get_platform_data._rs.383,"get_platform_data");
                    if (iVar4 == 0) goto code_r0x08023234;
                    puVar11 = CONCAT44(*0x8000004,_segment.ehdr) + 0x38;
                    iVar4 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x40);
                }
                _printk(0x8005e5a,"get_platform_data",puVar11,iVar4);
            }
code_r0x08023234:
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                ipc_log_string(*(iVar7 + 0x110),"%s: sps:pipemem.base=%pa,size=0x%x\n","get_platform_data",
                               iVar7 + 0x38,*(iVar7 + 0x40));
            }
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.344,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get platform data\n");
        }
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x120) == 0)) {
            ipc_log_string(*(iVar7 + 0xf8),"%s: %s","msm_sps_probe","sps:get platform data\n");
        }
        _segment.ehdr = 0;
    }
    else {
        iVar4 = of_property_read_variable_u32_array(*(iVar5 + 0x300),"qcom,device-type",obj.bam_init._rs.5,1,0);
        if (iVar4 < 0) {
            _segment.ehdr = 3;
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.get_device_tree_data._rs,"get_device_tree_data"), iVar4 != 0)))) {
                _printk(0x8007ac2,"get_device_tree_data",_segment.ehdr);
            }
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                pcVar9 = "%s: sps:default device type %d\n";
                goto code_r0x080232e4;
            }
        }
        else {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.get_device_tree_data._rs.367,"get_device_tree_data"), iVar4 != 0)))) {
                _printk(0x8005a0b,"get_device_tree_data",_segment.ehdr);
            }
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                pcVar9 = "%s: sps:device type is %d\n";
code_r0x080232e4:
                ipc_log_string(*(iVar7 + 0x110),pcVar9,"get_device_tree_data",_segment.ehdr);
            }
        }
        iVar7 = of_find_property(*(iVar5 + 0x300),"qcom,pipe-attr-ee",0);
        obj.enhd_pipe = iVar7 != 0;
        if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar8 = 0x800b728;
                if (iVar7 == 0) {
                    uVar8 = 0x8006670;
                }
            }
            else {
                iVar4 = ___ratelimit(obj.get_device_tree_data._rs.371,"get_device_tree_data");
                if (iVar4 == 0) goto code_r0x0802332c;
                uVar8 = 0x8006670;
                if (obj.enhd_pipe != 0x0) {
                    uVar8 = 0x800b728;
                }
            }
            _printk(0x8008e10,"get_device_tree_data",uVar8);
        }
code_r0x0802332c:
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
            uVar8 = 0x8006670;
            if (obj.enhd_pipe != 0x0) {
                uVar8 = 0x800b728;
            }
            ipc_log_string(*(iVar7 + 0x110),"%s: sps:PIPE_ATTR_EE is %s supported\n","get_device_tree_data",uVar8);
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.333,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get data from device tree\n");
        }
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar7 != 0) && (*(iVar7 + 0x120) == 0)) {
            ipc_log_string(*(iVar7 + 0xf8),"%s: %s","msm_sps_probe","sps:get data from device tree\n");
        }
        iVar7 = of_match_device(obj.msm_sps_match,iVar5 + 0x10);
        if (iVar7 == 0) {
            _segment.ehdr = 1;
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.338,"msm_sps_probe"), iVar4 != 0)))) {
                _printk(0x800bc43,"msm_sps_probe",_segment.ehdr);
            }
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                uVar8 = *(iVar7 + 0x110);
                pcVar9 = "%s: sps:use default BAM type:%d\n";
                goto code_r0x08023448;
            }
        }
        else {
            _segment.ehdr = **(iVar7 + 0xc0);
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.335,"msm_sps_probe"), iVar4 != 0)))) {
                _printk(0x80089dc,"msm_sps_probe",_segment.ehdr);
            }
            iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar7 != 0) && (*(iVar7 + 0x120) < 4)) {
                uVar8 = *(iVar7 + 0x110);
                pcVar9 = "%s: sps:BAM type is:%d\n";
code_r0x08023448:
                ipc_log_string(uVar8,pcVar9,"msm_sps_probe",_segment.ehdr);
            }
        }
    }
    uVar8 = __class_create(obj.__this_module,"msm_sps",obj.sps_debugfs_init.__key);
    *CONCAT44(*0x8000004,_segment.ehdr) = uVar8;
    uVar3 = alloc_chrdev_region(CONCAT44(*0x8000004,_segment.ehdr) + 8,0,1,"msm_sps");
    if (uVar3 != 0) {
        uVar12 = uVar3;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.346,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x8004c12,"msm_sps_probe");
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: alloc_chrdev_region err\n",
                           "msm_sps_probe");
        }
        goto code_r0x08023978;
    }
    puVar11 = CONCAT44(*0x8000004,_segment.ehdr);
    uVar12 = device_create(*puVar11,0,*(puVar11 + 1),puVar11,"msm_sps");
    iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar7 + 0x10) = uVar12;
    if (uVar12 < 0xfffffffffffff001) {
        if (*(iVar5 + 0x300) != 0) {
            *(uVar12 + 0x2f0) = *(iVar5 + 0x300);
        }
        if (_segment.ehdr == 0) {
            uVar12 = clk_get(*(iVar7 + 0x10),"mem_clk");
            *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18) = uVar12;
            if (uVar12 < 0xfffffffffffff001) {
                uVar3 = clk_prepare(uVar12);
                if (uVar3 == 0) {
                    uVar3 = clk_enable(uVar12);
                    if (uVar3 == 0) goto code_r0x0802358c;
                    clk_unprepare(uVar12);
                }
                uVar12 = uVar3;
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.356,"msm_sps_probe"), iVar4 != 0)))) {
                    _printk(0x8008dea,"msm_sps_probe");
                }
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),
                                   "%s: sps: failed to enable pmem_clk\n","msm_sps_probe");
                }
                goto code_r0x0802393c;
            }
            if (uVar12 == 0xfffffffffffffdfb) {
                uVar12 = 0xfffffdfb;
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.353,"msm_sps_probe"), iVar4 != 0)))) {
                    _printk(0x8008dc9,"msm_sps_probe");
                }
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: fail to get pmem_clk\n",
                                   "msm_sps_probe");
                }
                uVar12 = 0;
            }
        }
        else {
code_r0x0802358c:
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.sps_device_init._rs,"sps_device_init"), iVar4 != 0)))) {
                _printk(0x80084da,"sps_device_init");
            }
            iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar5 != 0) && (*(iVar5 + 0x120) < 4)) {
                ipc_log_string(*(iVar5 + 0x110),"%s: Enter\n","sps_device_init");
                iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            iVar4 = sym.sps_mem_init(*(iVar5 + 0x38),*(iVar5 + 0x40));
            if (iVar4 == 0) {
                iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                *(iVar5 + 0xa0) = iVar5 + 0xa0;
                *(iVar5 + 0xa8) = iVar5 + 0xa0;
                __mutex_init(iVar5 + 0x70,"&sps->lock",obj.sps_debugfs_init.__key);
                iVar4 = sym.sps_rm_init(CONCAT44(*0x8000004,_segment.ehdr) + 0xb8);
                if (iVar4 == 0) {
                    iVar4 = sym.sps_map_init(0,*(CONCAT44(*0x8000004,_segment.ehdr) + 0x6c));
                    if (iVar4 == 0) {
                        iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                        bVar2 = obj.logging_option != 0x1;
                        *(iVar5 + 0x30) = 1;
                        if (bVar2) {
                            if ((obj.print_limit_option < 2) ||
                               (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.362,"msm_sps_probe"), iVar4 != 0)) {
                                _printk(0x8007fbf,"msm_sps_probe","sps:sps is ready\n");
                            }
                            iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                        }
                        if (iVar5 != 0) {
                            ipc_log_string(*(iVar5 + 0x110),"%s: %s","msm_sps_probe","sps:sps is ready\n");
                        }
                        return 0;
                    }
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar4 = ___ratelimit(obj.sps_device_init._rs.396,"sps_device_init"), iVar4 != 0)))) {
                        _printk(0x8004fd7,"sps_device_init");
                    }
                    iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                    if (iVar5 != 0) {
                        pcVar9 = "%s: sps: SPS connection mapping init failed\n";
                        goto code_r0x080238b0;
                    }
                }
                else {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar4 = ___ratelimit(obj.sps_device_init._rs.390,"sps_device_init"), iVar4 != 0)))) {
                        _printk(0x8004c5e,"sps_device_init");
                    }
                    iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                    if (iVar5 != 0) {
                        pcVar9 = "%s: sps: Fail to init SPS resource manager\n";
code_r0x080238b0:
                        ipc_log_string(*(iVar5 + 0x110),pcVar9,"sps_device_init");
                    }
                }
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar4 = ___ratelimit(obj.sps_device_init._rs.386,"sps_device_init"), iVar4 != 0)))) {
                    _printk(0x8004fb4,"sps_device_init");
                }
                iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                if (iVar5 != 0) {
                    pcVar9 = "%s: sps: SPS memory init failed\n";
                    goto code_r0x080238b0;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.359,"msm_sps_probe"), iVar4 != 0)))) {
                _printk(0x8004c3e,"msm_sps_probe");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: sps_device_init err\n",
                               "msm_sps_probe");
            }
            if (_segment.ehdr == 0) {
                uVar8 = *((*0x8000004 << 0x20) + 0x18);
                clk_disable(uVar8);
                clk_unprepare(uVar8);
                uVar12 = 0xffffffff;
code_r0x0802393c:
                if (_segment.ehdr == 0) {
                    clk_put(*((*0x8000004 << 0x20) + 0x18));
                }
            }
            else {
                uVar12 = 0xffffffff;
            }
        }
        device_destroy(*CONCAT44(*0x8000004,_segment.ehdr),*(CONCAT44(*0x8000004,_segment.ehdr) + 1));
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.349,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x80046b9,"msm_sps_probe");
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            uVar12 = 0;
        }
        else {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: device_create err\n",
                           "msm_sps_probe");
            uVar12 = 0;
        }
    }
    unregister_chrdev_region(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),1);
code_r0x08023978:
    class_destroy(*CONCAT44(*0x8000004,_segment.ehdr));
    return uVar12;
}


// ===== sym.msm_sps_probe @ 0x080230b0 (size 3764) =====

int sym.msm_sps_probe(int64_t arg1)

{
    code cVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint uVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar3 = ___ratelimit(obj.msm_sps_probe._rs,"msm_sps_probe"), iVar3 != 0))))
    {
        _printk(0x8004ef6,"msm_sps_probe");
    }
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
        ipc_log_string(*(iVar6 + 0x110),"%s: sps: Enter\n","msm_sps_probe");
    }
    if (*(arg1 + 0x300) == 0) {
        _segment.ehdr = 0;
        if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar3 = ___ratelimit(obj.get_platform_data._rs,"get_platform_data"), iVar3 != 0)))) {
            _printk(0x8004ef6,"get_platform_data");
        }
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
            ipc_log_string(*(iVar6 + 0x110),"%s: sps: Enter\n","get_platform_data");
        }
        if (*(arg1 + 0xa0) == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.get_platform_data._rs.376,"get_platform_data"), iVar3 != 0)))) {
                _printk(0x800bc66,"get_platform_data");
            }
            iVar6 = 0;
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: invalid platform data\n",
                               "get_platform_data");
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            cVar1 = obj.logging_option;
            *(iVar6 + 0x68) = 0;
            if ((cVar1 != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.341,"msm_sps_probe"), iVar3 != 0)))) {
                _printk(0x8005e33,"msm_sps_probe");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: :Fail to get platform data\n",
                               "msm_sps_probe");
                return -0x13;
            }
            return -0x13;
        }
        uVar10 = **(arg1 + 0xa0);
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        bVar2 = 1 < obj.logging_option;
        *(iVar6 + 0x68) = uVar10;
        if (bVar2) {
            if (obj.debug_level_option != 0x0) {
                if (obj.print_limit_option != 0x0) {
                    iVar3 = ___ratelimit(obj.get_platform_data._rs.379,"get_platform_data");
                    if (iVar3 == 0) goto code_r0x08023b8c;
                    uVar10 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x68);
                }
                _printk(0x800c17f,"get_platform_data",uVar10);
            }
code_r0x08023b8c:
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
            ipc_log_string(*(iVar6 + 0x110),"%s: sps:bamdma_restricted_pipes=0x%x\n","get_platform_data",
                           *(iVar6 + 0x68));
        }
        piVar5 = platform_get_resource_byname(arg1,0x200,"pipe_mem");
        if (piVar5 != NULL) {
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            puVar11 = iVar6 + 0x38;
            *puVar11 = *piVar5;
            iVar3 = (piVar5[2] - *piVar5) + 1;
            bVar2 = 1 < obj.logging_option;
            *(iVar6 + 0x40) = iVar3;
            if ((bVar2) && (obj.debug_level_option != 0x0)) {
                if (obj.print_limit_option != 0x0) {
                    iVar3 = ___ratelimit(obj.get_platform_data._rs.383,"get_platform_data");
                    if (iVar3 == 0) goto code_r0x08023234;
                    puVar11 = CONCAT44(*0x8000004,_segment.ehdr) + 0x38;
                    iVar3 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x40);
                }
                _printk(0x8005e5a,"get_platform_data",puVar11,iVar3);
            }
code_r0x08023234:
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                ipc_log_string(*(iVar6 + 0x110),"%s: sps:pipemem.base=%pa,size=0x%x\n","get_platform_data",
                               iVar6 + 0x38,*(iVar6 + 0x40));
            }
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.344,"msm_sps_probe"), iVar3 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get platform data\n");
        }
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar6 != 0) && (*(iVar6 + 0x120) == 0)) {
            ipc_log_string(*(iVar6 + 0xf8),"%s: %s","msm_sps_probe","sps:get platform data\n");
        }
        _segment.ehdr = 0;
    }
    else {
        iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,device-type",obj.bam_init._rs.5,1,0);
        if (iVar3 < 0) {
            _segment.ehdr = 3;
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.get_device_tree_data._rs,"get_device_tree_data"), iVar3 != 0)))) {
                _printk(0x8007ac2,"get_device_tree_data",_segment.ehdr);
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                pcVar9 = "%s: sps:default device type %d\n";
                goto code_r0x080232e4;
            }
        }
        else {
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.get_device_tree_data._rs.367,"get_device_tree_data"), iVar3 != 0)))) {
                _printk(0x8005a0b,"get_device_tree_data",_segment.ehdr);
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                pcVar9 = "%s: sps:device type is %d\n";
code_r0x080232e4:
                ipc_log_string(*(iVar6 + 0x110),pcVar9,"get_device_tree_data",_segment.ehdr);
            }
        }
        iVar6 = of_find_property(*(arg1 + 0x300),"qcom,pipe-attr-ee",0);
        obj.enhd_pipe = iVar6 != 0;
        if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
            if (obj.print_limit_option == 0x0) {
                uVar7 = 0x800b728;
                if (iVar6 == 0) {
                    uVar7 = 0x8006670;
                }
            }
            else {
                iVar3 = ___ratelimit(obj.get_device_tree_data._rs.371,"get_device_tree_data");
                if (iVar3 == 0) goto code_r0x0802332c;
                uVar7 = 0x8006670;
                if (obj.enhd_pipe != 0x0) {
                    uVar7 = 0x800b728;
                }
            }
            _printk(0x8008e10,"get_device_tree_data",uVar7);
        }
code_r0x0802332c:
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
            uVar7 = 0x8006670;
            if (obj.enhd_pipe != 0x0) {
                uVar7 = 0x800b728;
            }
            ipc_log_string(*(iVar6 + 0x110),"%s: sps:PIPE_ATTR_EE is %s supported\n","get_device_tree_data",uVar7);
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.333,"msm_sps_probe"), iVar3 != 0)))) {
            _printk(0x8007fbf,"msm_sps_probe","sps:get data from device tree\n");
        }
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar6 != 0) && (*(iVar6 + 0x120) == 0)) {
            ipc_log_string(*(iVar6 + 0xf8),"%s: %s","msm_sps_probe","sps:get data from device tree\n");
        }
        iVar6 = of_match_device(obj.msm_sps_match,arg1 + 0x10);
        if (iVar6 == 0) {
            _segment.ehdr = 1;
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.338,"msm_sps_probe"), iVar3 != 0)))) {
                _printk(0x800bc43,"msm_sps_probe",_segment.ehdr);
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                uVar7 = *(iVar6 + 0x110);
                pcVar9 = "%s: sps:use default BAM type:%d\n";
                goto code_r0x08023448;
            }
        }
        else {
            _segment.ehdr = **(iVar6 + 0xc0);
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.335,"msm_sps_probe"), iVar3 != 0)))) {
                _printk(0x80089dc,"msm_sps_probe",_segment.ehdr);
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                uVar7 = *(iVar6 + 0x110);
                pcVar9 = "%s: sps:BAM type is:%d\n";
code_r0x08023448:
                ipc_log_string(uVar7,pcVar9,"msm_sps_probe",_segment.ehdr);
            }
        }
    }
    uVar7 = __class_create(obj.__this_module,"msm_sps",obj.sps_debugfs_init.__key);
    *CONCAT44(*0x8000004,_segment.ehdr) = uVar7;
    iVar3 = alloc_chrdev_region(CONCAT44(*0x8000004,_segment.ehdr) + 8,0,1,"msm_sps");
    if (iVar3 != 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.346,"msm_sps_probe"), iVar4 != 0)))) {
            _printk(0x8004c12,"msm_sps_probe");
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: alloc_chrdev_region err\n",
                           "msm_sps_probe");
        }
        goto code_r0x08023978;
    }
    puVar11 = CONCAT44(*0x8000004,_segment.ehdr);
    uVar8 = device_create(*puVar11,0,*(puVar11 + 1),puVar11,"msm_sps");
    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
    *(iVar6 + 0x10) = uVar8;
    if (uVar8 < 0xfffffffffffff001) {
        if (*(arg1 + 0x300) != 0) {
            *(uVar8 + 0x2f0) = *(arg1 + 0x300);
        }
        if (_segment.ehdr == 0) {
            uVar8 = clk_get(*(iVar6 + 0x10),"mem_clk");
            *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18) = uVar8;
            if (uVar8 < 0xfffffffffffff001) {
                iVar3 = clk_prepare(uVar8);
                if (iVar3 == 0) {
                    iVar3 = clk_enable(uVar8);
                    if (iVar3 == 0) goto code_r0x0802358c;
                    clk_unprepare(uVar8);
                }
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar4 = ___ratelimit(obj.msm_sps_probe._rs.356,"msm_sps_probe"), iVar4 != 0)))) {
                    _printk(0x8008dea,"msm_sps_probe");
                }
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),
                                   "%s: sps: failed to enable pmem_clk\n","msm_sps_probe");
                }
                goto code_r0x0802393c;
            }
            if (uVar8 == 0xfffffffffffffdfb) {
                iVar3 = -0x205;
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.353,"msm_sps_probe"), iVar3 != 0)))) {
                    _printk(0x8008dc9,"msm_sps_probe");
                }
                if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                    ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: fail to get pmem_clk\n",
                                   "msm_sps_probe");
                }
                iVar3 = 0;
            }
        }
        else {
code_r0x0802358c:
            if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar3 = ___ratelimit(obj.sps_device_init._rs,"sps_device_init"), iVar3 != 0)))) {
                _printk(0x80084da,"sps_device_init");
            }
            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            if ((iVar6 != 0) && (*(iVar6 + 0x120) < 4)) {
                ipc_log_string(*(iVar6 + 0x110),"%s: Enter\n","sps_device_init");
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            iVar3 = sym.sps_mem_init(*(iVar6 + 0x38),*(iVar6 + 0x40));
            if (iVar3 == 0) {
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                *(iVar6 + 0xa0) = iVar6 + 0xa0;
                *(iVar6 + 0xa8) = iVar6 + 0xa0;
                __mutex_init(iVar6 + 0x70,"&sps->lock",obj.sps_debugfs_init.__key);
                iVar3 = sym.sps_rm_init(CONCAT44(*0x8000004,_segment.ehdr) + 0xb8);
                if (iVar3 == 0) {
                    iVar3 = sym.sps_map_init(0,*(CONCAT44(*0x8000004,_segment.ehdr) + 0x6c));
                    if (iVar3 == 0) {
                        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                        bVar2 = obj.logging_option != 0x1;
                        *(iVar6 + 0x30) = 1;
                        if (bVar2) {
                            if ((obj.print_limit_option < 2) ||
                               (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.362,"msm_sps_probe"), iVar3 != 0)) {
                                _printk(0x8007fbf,"msm_sps_probe","sps:sps is ready\n");
                            }
                            iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                        }
                        if (iVar6 != 0) {
                            ipc_log_string(*(iVar6 + 0x110),"%s: %s","msm_sps_probe","sps:sps is ready\n");
                        }
                        return 0;
                    }
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_device_init._rs.396,"sps_device_init"), iVar3 != 0)))) {
                        _printk(0x8004fd7,"sps_device_init");
                    }
                    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                    if (iVar6 != 0) {
                        pcVar9 = "%s: sps: SPS connection mapping init failed\n";
                        goto code_r0x080238b0;
                    }
                }
                else {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar3 = ___ratelimit(obj.sps_device_init._rs.390,"sps_device_init"), iVar3 != 0)))) {
                        _printk(0x8004c5e,"sps_device_init");
                    }
                    iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                    if (iVar6 != 0) {
                        pcVar9 = "%s: sps: Fail to init SPS resource manager\n";
code_r0x080238b0:
                        ipc_log_string(*(iVar6 + 0x110),pcVar9,"sps_device_init");
                    }
                }
            }
            else {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar3 = ___ratelimit(obj.sps_device_init._rs.386,"sps_device_init"), iVar3 != 0)))) {
                    _printk(0x8004fb4,"sps_device_init");
                }
                iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                if (iVar6 != 0) {
                    pcVar9 = "%s: sps: SPS memory init failed\n";
                    goto code_r0x080238b0;
                }
            }
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.359,"msm_sps_probe"), iVar3 != 0)))) {
                _printk(0x8004c3e,"msm_sps_probe");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: sps_device_init err\n",
                               "msm_sps_probe");
            }
            if (_segment.ehdr == 0) {
                uVar7 = *((*0x8000004 << 0x20) + 0x18);
                clk_disable(uVar7);
                clk_unprepare(uVar7);
                iVar3 = -1;
code_r0x0802393c:
                if (_segment.ehdr == 0) {
                    clk_put(*((*0x8000004 << 0x20) + 0x18));
                }
            }
            else {
                iVar3 = -1;
            }
        }
        device_destroy(*CONCAT44(*0x8000004,_segment.ehdr),*(CONCAT44(*0x8000004,_segment.ehdr) + 1));
    }
    else {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar3 = ___ratelimit(obj.msm_sps_probe._rs.349,"msm_sps_probe"), iVar3 != 0)))) {
            _printk(0x80046b9,"msm_sps_probe");
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            iVar3 = 0;
        }
        else {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps: device_create err\n",
                           "msm_sps_probe");
            iVar3 = 0;
        }
    }
    unregister_chrdev_region(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),1);
code_r0x08023978:
    class_destroy(*CONCAT44(*0x8000004,_segment.ehdr));
    return iVar3;
}


// ===== sym.msm_sps_remove @ 0x08023f64 (size 556) =====

ulong sym.msm_sps_remove(void)

{
    int iVar1;
    int64_t arg1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 || (iVar1 = ___ratelimit(obj.msm_sps_remove._rs,"msm_sps_remove"), iVar1 != 0))
       )) {
        _printk(0x8004ef6,"msm_sps_remove");
    }
    puVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((puVar2 != NULL) && (*(puVar2 + 0x24) < 4)) {
        ipc_log_string(puVar2[0x22],"%s: sps: Enter\n","msm_sps_remove");
        puVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    }
    device_destroy(*puVar2,*(puVar2 + 1));
    unregister_chrdev_region(*(CONCAT44(*0x8000004,_segment.ehdr) + 8),1);
    arg1 = class_destroy(*CONCAT44(*0x8000004,_segment.ehdr));
    if (((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) &&
       ((obj.print_limit_option == 0x0 ||
        (arg1 = ___ratelimit(obj.sps_device_de_init._rs,"sps_device_de_init"), arg1 != 0)))) {
        arg1 = _printk(0x80084da,"sps_device_de_init");
    }
    iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar3 != 0) {
        if (*(iVar3 + 0x120) < 4) {
            arg1 = ipc_log_string(*(iVar3 + 0x110),"%s: Enter\n","sps_device_de_init");
            iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
            if (iVar3 == 0) goto code_r0x08024090;
        }
        if (iVar3 + 0xa0 != *(iVar3 + 0xa0)) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (arg1 = ___ratelimit(obj.sps_device_de_init._rs.399,"sps_device_de_init"), arg1 != 0)))) {
                arg1 = _printk(0x80089f6,"sps_device_de_init");
            }
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                arg1 = ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),
                                      "%s: sps: BAMs are still registered\n","sps_device_de_init");
            }
        }
        _obj.sps_maps.llvm.13011040688875161606 = 0;
        *0x8000428 = 0;
    }
code_r0x08024090:
    sym.sps_mem_de_init(arg1);
    clk_put(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x28));
    if (_segment.ehdr == 0) {
        clk_put(*((*0x8000004 << 0x20) + 0x18));
    }
    clk_put(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x20));
    return 0;
}


// ===== sym.sps_map_init @ 0x08024194 (size 276) =====

ulong sym.sps_map_init(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.sps_maps.llvm.13011040688875161606 = 0;
    *0x8000428 = 0;
    if (arg1 != 0) {
        *0x8000428 = arg2 << 0x20;
        iVar3 = 0;
        for (piVar4 = arg1 + 8; (piVar4[-1] != -0x21524111 || (*piVar4 != 0xdeadbeef)); piVar4 = piVar4 + 0xb) {
            _segment.ehdr = iVar3 + 1;
            iVar3 = _segment.ehdr;
        }
        _obj.sps_maps.llvm.13011040688875161606 = arg1;
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar2 = ___ratelimit(obj.sps_map_init._rs,"sps_map_init"), iVar3 = _segment.ehdr, iVar2 != 0)))) {
            _printk(0x800c1b7,"sps_map_init",iVar3);
        }
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar1 != 0) && (*(iVar1 + 0x120) == 0)) {
            ipc_log_string(*(iVar1 + 0xf8),"%s: sps: %d mappings\n","sps_map_init",_segment.ehdr);
        }
    }
    return 0;
}


// ===== sym.sps_map_de_init @ 0x080242a8 (size 24) =====

void sym.sps_map_de_init(void)

{
    _obj.sps_maps.llvm.13011040688875161606 = 0;
    *0x8000428 = 0;
    return;
}


// ===== sym.sps_map_find @ 0x080242c0 (size 596) =====

ulong sym.sps_map_find(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *pcVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    uint *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        puVar8 = CONCAT44(*0x8000004,_segment.ehdr) + 0x28;
        iVar2 = _segment.ehdr;
        do {
            if (((puVar8[-10] == *arg1) && (puVar8[-4] == *(arg1 + 0x18))) && (puVar8[2] == *(arg1 + 0x30))) {
                piVar7 = puVar8 + 4;
                iVar3 = sym.spsi_get_mem_ptr(*piVar7);
                if (iVar3 == 0) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar2 = ___ratelimit(obj.sps_map_find._rs,"sps_map_find"), iVar2 != 0)))) {
                        _printk(0x800b3e4,"sps_map_find",piVar7);
                    }
                    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
                        return 0xffffffff;
                    }
                    uVar6 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x110);
                    pcVar5 = "%s: sps:Cannot get virt addr for I/O buffer: %pa\n";
code_r0x080243c4:
                    ipc_log_string(uVar6,pcVar5,"sps_map_find",piVar7);
                    return 0xffffffff;
                }
                if (puVar8[10] != 0) {
                    piVar7 = puVar8 + 8;
                    if (*piVar7 != 0xdeadbeef) {
                        iVar4 = sym.spsi_get_mem_ptr(*piVar7);
                        if (iVar4 == 0) {
                            if ((obj.logging_option != 0x1) &&
                               ((obj.print_limit_option < 3 ||
                                (iVar2 = ___ratelimit(obj.sps_map_find._rs.4,"sps_map_find"), iVar2 != 0)))) {
                                _printk(0x80053a7,"sps_map_find",piVar7);
                            }
                            if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
                                return 0xffffffff;
                            }
                            uVar6 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x110);
                            pcVar5 = "%s: sps:Can\'t get virt addr for I/O buffer: %pa\n";
                            goto code_r0x080243c4;
                        }
                        goto code_r0x08024400;
                    }
                }
                iVar4 = 0;
code_r0x08024400:
                if (*arg1 != 0x7fffffffffffffff) {
                    *(arg1 + 0x10) = puVar8[-6];
                }
                if (*(arg1 + 0x18) != 0x7fffffffffffffff) {
                    *(arg1 + 0x28) = *puVar8;
                }
                iVar1 = -0x14;
                if (*(arg1 + 0x2c) != 0) {
                    iVar1 = 4;
                }
                *(arg1 + 0x78) = *(puVar8 + iVar1);
                *(arg1 + 0x50) = puVar8[6];
                uVar6 = *(puVar8 + 4);
                *(arg1 + 0x38) = iVar3;
                *(arg1 + 0x40) = uVar6;
                if ((puVar8[10] != 0) && (*(puVar8 + 8) != 0xdeadbeef)) {
                    *(arg1 + 0x70) = puVar8[10];
                    uVar6 = *(puVar8 + 8);
                    *(arg1 + 0x58) = iVar4;
                    *(arg1 + 0x60) = uVar6;
                    return 0;
                }
                return 0;
            }
            iVar2 = iVar2 + -1;
            puVar8 = puVar8 + 0x16;
        } while (iVar2 != 0);
    }
    return 0xffffffff;
}


// ===== sym.spsi_get_mem_ptr @ 0x08024514 (size 296) =====

uint64_t sym.spsi_get_mem_ptr(uint32_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t in_x5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    uStack_30 = arg1;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((uStack_30 < uVar4) || (uVar4 + _segment.ehdr <= uStack_30)) {
        uVar4 = uStack_30 - _ipc_log_string | 0xffffff8000000000;
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar1 = ___ratelimit(obj.spsi_get_mem_ptr._rs,"spsi_get_mem_ptr"), iVar1 != 0)))) {
            _printk(0x800960f,"spsi_get_mem_ptr","spsi_get_mem_ptr",&uStack_30);
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps:%s.invalid phys addr=0x%pa\n",
                           "spsi_get_mem_ptr","spsi_get_mem_ptr",&uStack_30);
        }
    }
    else {
        uVar4 = CONCAT44(*0x8000004,_segment.ehdr) + (uStack_30 - uVar4);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        iVar1 = __stack_chk_fail();
        *extraout_x18 = sym.sps_mem_alloc_io;
        pcStack_48 = sym.sps_mem_alloc_io;
        iVar3 = sp_el0;
        iStack_58 = *(iVar3 + 0x5e0);
        iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
        puStack_50 = &stack0xffffffffffffffe0;
        iVar3 = gen_pool_alloc_algo_owner(iVar3,iVar1,*(iVar3 + 0x20),*(iVar3 + 0x28),0);
        if (iVar3 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar2 = ___ratelimit(obj.sps_mem_alloc_io._rs,"sps_mem_alloc_io"), iVar2 != 0)))) {
                _printk(0x8007117,"sps_mem_alloc_io",iVar1);
            }
            uVar4 = 0xdeadbeef;
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps:gen_pool_alloc %d bytes fail\n"
                               ,"sps_mem_alloc_io",iVar1);
            }
            while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_58) {
                __stack_chk_fail();
                iVar3 = in_x5;
code_r0x08024804:
                iVar2 = ___ratelimit(obj.sps_mem_alloc_io._rs.4,"sps_mem_alloc_io");
                in_x5 = iVar3;
                if (iVar2 != 0) {
code_r0x080247b4:
                    _printk(0x8007624,"sps_mem_alloc_io","sps_mem_alloc_io",&uStack_60,iVar3,iVar1);
                    in_x5 = iVar3;
                }
code_r0x080246c0:
                iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
                uVar4 = uStack_60;
                if ((iVar3 != 0) && (*(iVar3 + 0x120) < 4)) {
                    ipc_log_string(*(iVar3 + 0x110),"%s: sps:%s.phys=%pa.virt=0x%pK.size=0x%x\n","sps_mem_alloc_io",
                                   "sps_mem_alloc_io",&uStack_60,in_x5,iVar1);
                    uVar4 = uStack_60;
                }
            }
            return uVar4;
        }
        uStack_60 = (iVar3 - _segment.ehdr) + CONCAT44(*0x8000004,_segment.ehdr);
        _segment.ehdr = _segment.ehdr + iVar1;
        in_x5 = iVar3;
        if (obj.logging_option < 2) goto code_r0x080246c0;
        if (obj.debug_level_option == 0x0) goto code_r0x080246c0;
        if (obj.print_limit_option != 0x0) goto code_r0x08024804;
        goto code_r0x080247b4;
    }
    return uVar4;
}


// ===== sym.sps_mem_alloc_io @ 0x0802463c (size 492) =====

int64_t sym.sps_mem_alloc_io(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t in_x5;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uVar4 = arg1 & 0xffffffff;
    iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    iVar3 = gen_pool_alloc_algo_owner(iVar3,uVar4,*(iVar3 + 0x20),*(iVar3 + 0x28),0);
    if (iVar3 == 0) {
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar2 = ___ratelimit(obj.sps_mem_alloc_io._rs,"sps_mem_alloc_io"), iVar2 != 0)))) {
            _printk(0x8007117,"sps_mem_alloc_io",uVar4);
        }
        iVar3 = 0xdeadbeef;
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            ipc_log_string(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x110),"%s: sps:gen_pool_alloc %d bytes fail\n",
                           "sps_mem_alloc_io",uVar4);
        }
        while (iVar1 = sp_el0, *(iVar1 + 0x5e0) != iStack_28) {
            __stack_chk_fail();
            iVar3 = in_x5;
code_r0x08024804:
            iVar2 = ___ratelimit(obj.sps_mem_alloc_io._rs.4,"sps_mem_alloc_io");
            in_x5 = iVar3;
            if (iVar2 != 0) {
code_r0x080247b4:
                _printk(0x8007624,"sps_mem_alloc_io","sps_mem_alloc_io",&iStack_30,iVar3,uVar4);
                in_x5 = iVar3;
            }
code_r0x080246c0:
            iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
            iVar3 = iStack_30;
            if ((iVar1 != 0) && (*(iVar1 + 0x120) < 4)) {
                ipc_log_string(*(iVar1 + 0x110),"%s: sps:%s.phys=%pa.virt=0x%pK.size=0x%x\n","sps_mem_alloc_io",
                               "sps_mem_alloc_io",&iStack_30,in_x5,uVar4);
                iVar3 = iStack_30;
            }
        }
        return iVar3;
    }
    iStack_30 = (iVar3 - _segment.ehdr) + CONCAT44(*0x8000004,_segment.ehdr);
    _segment.ehdr = _segment.ehdr + arg1;
    in_x5 = iVar3;
    if (obj.logging_option < 2) goto code_r0x080246c0;
    if (obj.debug_level_option == 0x0) goto code_r0x080246c0;
    if (obj.print_limit_option != 0x0) goto code_r0x08024804;
    goto code_r0x080247b4;
}


// ===== sym.sps_mem_free_io @ 0x08024828 (size 328) =====

void sym.sps_mem_free_io(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar4 = arg2 & 0xffffffff;
    iVar1 = (arg1 - _segment.ehdr) + CONCAT44(*0x8000004,_segment.ehdr);
    iStack_30 = arg1;
    if ((1 < obj.logging_option) && (obj.debug_level_option != 0x0)) {
        if (obj.print_limit_option != 0x0) goto code_r0x08024954;
        goto code_r0x08024928;
    }
    while( true ) {
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar2 != 0) && (*(iVar2 + 0x120) < 4)) {
            ipc_log_string(*(iVar2 + 0x110),"%s: sps:%s.phys=%pa.virt=0x%pK.size=0x%x\n","sps_mem_free_io",
                           "sps_mem_free_io",&iStack_30,iVar1,uVar4);
        }
        gen_pool_free_owner(CONCAT44(*0x8000004,_segment.ehdr),iVar1,uVar4,0);
        _segment.ehdr = _segment.ehdr + arg2;
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_28) break;
        __stack_chk_fail();
code_r0x08024954:
        iVar3 = ___ratelimit(obj.sps_mem_free_io._rs,"sps_mem_free_io");
        if (iVar3 != 0) {
code_r0x08024928:
            _printk(0x8007624,"sps_mem_free_io","sps_mem_free_io",&iStack_30,iVar1,uVar4);
        }
    }
    return;
}


// ===== sym.sps_mem_init @ 0x08024970 (size 784) =====

ulong sym.sps_mem_init(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr & 0xfffffffd) == 0 || obj.imem != 0x0) {
        _segment.ehdr = CONCAT44(arg1 >> 0x20,arg2);
        if (arg1 == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_mem_init._rs,"sps_mem_init"), iVar1 != 0)
                ))) {
                _printk(0x800a748,"sps_mem_init","sps_mem_init");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            ipc_log_string(*(_segment.ehdr + 0x110),"%s: sps:%s:Invalid Pipe-Mem address\n","sps_mem_init",
                           "sps_mem_init");
            return 0xffffffff;
        }
        uVar2 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar2 = 0x68000000000f13;
        }
        _segment.ehdr = __ioremap(arg1,arg2 & 0xffffffff,uVar2);
        if (_segment.ehdr == 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar1 = ___ratelimit(obj.sps_mem_init._rs.9,"sps_mem_init"), iVar1 != 0)))) {
                _printk(0x800b86f,"sps_mem_init","sps_mem_init");
            }
            if (_segment.ehdr == 0) {
                return 0xfffffff4;
            }
            uVar2 = *(_segment.ehdr + 0x110);
            pcVar3 = "%s: sps:%s:Failed to IO map pipe memory\n";
            goto code_r0x08024b90;
        }
        if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
           ((obj.print_limit_option == 0x0 ||
            (iVar1 = ___ratelimit(obj.sps_mem_init._rs.12,"sps_mem_init"), iVar1 != 0)))) {
            _printk(0x8005006,"sps_mem_init","sps_mem_init",obj.iomem_phys,_segment.ehdr);
        }
        if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x120) == 0)) {
            ipc_log_string(*(_segment.ehdr + 0xf8),"%s: sps:%s.iomem_phys=%pa,iomem_virt=0x%pK\n","sps_mem_init",
                           "sps_mem_init",obj.iomem_phys,_segment.ehdr);
        }
    }
    _segment.ehdr = gen_pool_create(8,0xaa);
    if (_segment.ehdr != 0) {
        if ((((_segment.ehdr & 0xfffffffd) == 0) || (obj.imem != 0x0)) &&
           (uVar2 = gen_pool_add_owner(_segment.ehdr,_segment.ehdr,0xffffffffffffffff,_segment.ehdr & 0xffffffff,
                                       0xaa,0), uVar2 != 0)) {
            return uVar2;
        }
        return 0;
    }
    if ((obj.logging_option != 0x1) &&
       ((obj.print_limit_option < 3 || (iVar1 = ___ratelimit(obj.sps_mem_init._rs.15,"sps_mem_init"), iVar1 != 0)))) {
        _printk(0x800cd70,"sps_mem_init","sps_mem_init");
    }
    if (_segment.ehdr == 0) {
        return 0xfffffff4;
    }
    uVar2 = *(_segment.ehdr + 0x110);
    pcVar3 = "%s: sps:%s:Failed to create a new memory pool\n";
code_r0x08024b90:
    ipc_log_string(uVar2,pcVar3,"sps_mem_init","sps_mem_init");
    return 0xfffffff4;
}


// ===== sym.sps_mem_de_init @ 0x08024c80 (size 240) =====

//WARNING: Removing unreachable block (ram,0x08024cdc)
//WARNING: Removing unreachable block (ram,0x08024cec)
//WARNING: Removing unreachable block (ram,0x08024d54)
//WARNING: Removing unreachable block (ram,0x08024d6c)
//WARNING: Removing unreachable block (ram,0x08024cfc)
//WARNING: Removing unreachable block (ram,0x08024d14)
//WARNING: Removing unreachable block (ram,0x08024d20)
//WARNING: Removing unreachable block (ram,0x08024d3c)

ulong sym.sps_mem_de_init(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        gen_pool_destroy(_segment.ehdr);
        iVar1 = _segment.ehdr;
        _segment.ehdr = 0;
        iounmap(iVar1);
        _segment.ehdr = 0;
    }
    return 0;
}


// ===== sym.sps_rm_init @ 0x08024d70 (size 80) =====

ulong sym.sps_rm_init(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = arg1;
    *arg1 = arg1;
    *(arg1 + 8) = arg1;
    __mutex_init(arg1 + 0x10,"&sps_rm->lock",obj.bam_security_init._rs.14);
    return 0;
}


// ===== sym.sps_rm_config_init @ 0x08024dc0 (size 52) =====

void sym.sps_rm_config_init(int64_t arg1)

{
    *(arg1 + 0x80) = 0xcccccccccccccccc;
    *(arg1 + 0x88) = 0xcccccccccccccccc;
    *(arg1 + 0x70) = 0xcccccccccccccccc;
    *(arg1 + 0x78) = 0xcccccccccccccccc;
    *(arg1 + 0x60) = 0xcccccccccccccccc;
    *(arg1 + 0x68) = 0xcccccccccccccccc;
    *(arg1 + 0x50) = 0xcccccccccccccccc;
    *(arg1 + 0x58) = 0xcccccccccccccccc;
    *(arg1 + 0x40) = 0xcccccccccccccccc;
    *(arg1 + 0x48) = 0xcccccccccccccccc;
    *(arg1 + 0x30) = 0xcccccccccccccccc;
    *(arg1 + 0x38) = 0xcccccccccccccccc;
    *(arg1 + 0x20) = 0xcccccccccccccccc;
    *(arg1 + 0x28) = 0xcccccccccccccccc;
    *(arg1 + 0x10) = 0xcccccccccccccccc;
    *(arg1 + 0x18) = 0xcccccccccccccccc;
    *arg1 = 0xcccccccccccccccc;
    *(arg1 + 8) = 0xcccccccccccccccc;
    return;
}


// ===== sym.sps_rm_state_change @ 0x08024df4 (size 4752) =====

void sym.sps_rm_state_change(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    uint8_t uVar5;
    bool bVar6;
    bool bVar7;
    int iVar8;
    int64_t *piVar9;
    ulong uVar10;
    char *pcVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint uVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    int64_t iVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    int64_t *piVar22;
    ulong *in_x18;
    int64_t *unaff_x20;
    int64_t *piVar23;
    int64_t *piVar24;
    ulong *puVar25;
    int64_t *piVar26;
    ulong unaff_x30;
    uint uStack_78;
    ulong uStack_74;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    iVar8 = *(arg1 + 0x10);
    if ((arg2 == 0x1535053) && (iVar8 == 0)) {
        if (*(arg1 + 0xa8) == -0x33333334) {
            iVar8 = *(arg1 + 0x50);
        }
        else {
            iVar8 = *(arg1 + 0x50);
            uVar10 = *(arg1 + 0x38);
            *(arg1 + 0x28) = 0xcccccccccccccccc;
            *(arg1 + 0x30) = 0xcccccccccccccccc;
            *(arg1 + 0x58) = 0xcccccccccccccccc;
            *(arg1 + 0x60) = 0xcccccccccccccccc;
            *(arg1 + 0x68) = 0xcccccccccccccccc;
            *(arg1 + 0x70) = 0xcccccccccccccccc;
            *(arg1 + 0x78) = 0xcccccccccccccccc;
            *(arg1 + 0x80) = 0xcccccccccccccccc;
            *(arg1 + 0x88) = 0xcccccccccccccccc;
            *(arg1 + 0x90) = 0xcccccccccccccccc;
            *(arg1 + 0x98) = 0xcccccccccccccccc;
            *(arg1 + 0xa0) = 0xcccccccccccccccc;
            *(arg1 + 0xa8) = 0xcccccccccccccccc;
            *(arg1 + 0x38) = 0xcccccccccccccccc;
            *(arg1 + 0x40) = 0xcccccccccccccccc;
            *(arg1 + 0x48) = 0xcccccccccccccccc;
            *(arg1 + 0x50) = 0xcccccccccccccccc;
            *(arg1 + 0x38) = uVar10;
            *(arg1 + 0x4c) = *(arg1 + 0x4c);
            *(arg1 + 0x50) = iVar8;
        }
        if (iVar8 != 0) {
            if (iVar8 == -0x33333334) {
                *(arg1 + 0x50) = 0;
            }
            else {
                iVar8 = sym.sps_map_find(arg1 + 0x20);
                if (iVar8 != 0) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar8 = ___ratelimit(obj.sps_rm_alloc._rs,"sps_rm_alloc"), iVar8 != 0)))) {
                        _printk(0x8009150,"sps_rm_alloc","sps_rm_alloc");
                    }
                    piVar9 = unaff_x20;
                    if (_segment.ehdr == NULL) goto code_r0x08025da8;
                    ipc_log_string(_segment.ehdr[0x22],"%s: sps:%s:Failed to find connection mapping\n","sps_rm_alloc"
                                   ,"sps_rm_alloc");
                    goto code_r0x08025da8;
                }
            }
        }
        mutex_lock(_segment.ehdr + 2);
        if ((*(arg1 + 0x10) & 0xffffff) == 0x535053) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar8 = ___ratelimit(obj.sps_rm_alloc._rs.17,"sps_rm_alloc"), iVar8 != 0)))) {
                _printk(0x8005ac5,"sps_rm_alloc","sps_rm_alloc");
            }
            if (_segment.ehdr == NULL) goto code_r0x08025d9c;
            pcVar11 = "%s: sps:%s:Client connection already allocated\n";
            goto code_r0x08025d88;
        }
        unaff_x20 = *_segment.ehdr;
        if (unaff_x20 != _segment.ehdr) {
            do {
                if ((((((*(arg1 + 0x20) == unaff_x20[2]) && (*(arg1 + 0x38) == unaff_x20[7])) &&
                      ((*(arg1 + 0x30) == -0x33333334 || (*(arg1 + 0x30) == unaff_x20[4])))) &&
                     (((*(arg1 + 0x48) == -0x33333334 || (*(arg1 + 0x48) == unaff_x20[9])) &&
                      (*(arg1 + 0x50) == unaff_x20[0x14])))) &&
                    ((*(arg1 + 0x70) == -0x33333334 ||
                     ((*(arg1 + 0x70) == unaff_x20[0xf] &&
                      (((*(arg1 + 0x60) == -0x3333333333333334 || (*(arg1 + 0x58) == -0x3333333333333334)) ||
                       ((*(arg1 + 0x60) == unaff_x20[0xd] && (*(arg1 + 0x58) == unaff_x20[0xc])))))))))) &&
                   ((*(arg1 + 0x90) == -0x33333334 ||
                    ((*(arg1 + 0x90) == unaff_x20[0x13] &&
                     (((*(arg1 + 0x80) == -0x3333333333333334 || (*(arg1 + 0x78) == -0x3333333333333334)) ||
                      ((*(arg1 + 0x80) == unaff_x20[0x11] && (*(arg1 + 0x78) == unaff_x20[0x10])))))))))) {
                    if (*(arg1 + 0x4c) == 0) {
                        iVar17 = unaff_x20[0x15];
                    }
                    else {
                        iVar17 = unaff_x20[0x16];
                    }
                    if (iVar17 == 0) {
                        if ((unaff_x20 != NULL) &&
                           (iVar8 = sym.sps_rm_assign(arg1,unaff_x20), piVar9 = unaff_x20, iVar8 == 0))
                        goto code_r0x080257f4;
                        break;
                    }
                }
                unaff_x20 = *unaff_x20;
            } while (unaff_x20 != _segment.ehdr);
        }
        piVar9 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0xd8);
        if (piVar9 == NULL) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar8 = ___ratelimit(obj.sps_rm_create._rs,"sps_rm_create"), iVar8 != 0)))) {
                _printk(0x8007b93,"sps_rm_create","sps_rm_create");
            }
            if (_segment.ehdr == NULL) goto code_r0x08025d3c;
            ipc_log_string(_segment.ehdr[0x22],"%s: sps:%s:Failed to allocate connection struct\n","sps_rm_create",
                           "sps_rm_create");
            goto code_r0x08025d3c;
        }
        piVar9[0x16] = 0;
        piVar9[0x17] = 0;
        piVar9[0x14] = 0;
        piVar9[0x15] = 0;
        piVar9[0x12] = 0;
        piVar9[0x13] = 0;
        piVar9[0xe] = 0;
        piVar9[0xf] = 0;
        iVar8 = *(arg1 + 0x70);
        piVar26 = piVar9 + 0x10;
        *piVar26 = 0;
        piVar23 = piVar9 + 0x11;
        *piVar23 = 0;
        piVar15 = piVar9 + 0xd;
        *piVar15 = 0;
        piVar9[0x18] = 0;
        piVar9[0x19] = 0xdeadbeef;
        *piVar15 = 0xdeadbeef;
        *piVar23 = 0xdeadbeef;
        piVar9[0x1a] = 0xdeadbeef;
        iVar19 = *(arg1 + 0x38);
        piVar9[10] = 0;
        piVar9[0xb] = 0;
        piVar9[8] = 0;
        piVar9[9] = 0;
        piVar9[5] = 0;
        piVar9[6] = 0;
        piVar22 = piVar9 + 0xc;
        *piVar22 = 0;
        piVar24 = piVar9 + 7;
        *piVar24 = 0;
        piVar9[3] = 0;
        piVar9[4] = 0;
        *piVar9 = 0;
        piVar9[1] = 0;
        iVar17 = *(arg1 + 0x20);
        *(piVar9 + 0xbc) = 0xffffffffffffffff;
        iVar4 = *(arg1 + 0x90);
        *piVar24 = iVar19;
        uVar14 = *(arg1 + 0x50);
        piVar16 = piVar9 + 2;
        *piVar16 = 0;
        *piVar16 = iVar17;
        *(piVar9 + 0xf) = iVar8;
        *(piVar9 + 0x13) = iVar4;
        *(piVar9 + 0x14) = uVar14;
        if (((iVar8 != -0x33333334) && (*(arg1 + 0x60) != -0x3333333333333334)) &&
           (*(arg1 + 0x58) != -0x3333333333333334)) {
            iVar2 = *(arg1 + 0x60);
            iVar19 = *(arg1 + 0x68);
            iVar3 = *(arg1 + 0x70);
            *piVar22 = *(arg1 + 0x58);
            piVar9[0xd] = iVar2;
            piVar9[0xe] = iVar19;
            piVar9[0xf] = iVar3;
        }
        if (((iVar4 != -0x33333334) && (*(arg1 + 0x80) != -0x3333333333333334)) &&
           (*(arg1 + 0x78) != -0x3333333333333334)) {
            iVar2 = *(arg1 + 0x80);
            iVar19 = *(arg1 + 0x88);
            iVar3 = *(arg1 + 0x90);
            *piVar26 = *(arg1 + 0x78);
            piVar9[0x11] = iVar2;
            piVar9[0x12] = iVar19;
            piVar9[0x13] = iVar3;
        }
        iVar8 = *(arg1 + 0x30);
        iVar4 = *(arg1 + 0x48);
        iVar1 = *(arg1 + 0x4c);
        if (iVar8 == -0x33333334) {
            iVar8 = -1;
        }
        if (iVar4 == -0x33333334) {
            iVar4 = -1;
        }
        *(piVar9 + 4) = iVar8;
        *(piVar9 + 9) = iVar4;
        iVar17 = sym.sps_h2bam(iVar17);
        piVar9[6] = iVar17;
        if (iVar17 == 0) {
            if (*piVar16 != 0x7fffffffffffffff) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar8 = ___ratelimit(obj.sps_rm_create._rs.33,"sps_rm_create"), iVar8 != 0)))) {
                    _printk(0x800672d,"sps_rm_create",piVar16);
                }
                if (_segment.ehdr == NULL) goto code_r0x08025d28;
                iVar17 = _segment.ehdr[0x22];
                pcVar11 = "%s: sps:Invalid BAM handle: %pK\n";
                goto code_r0x08025d24;
            }
            *(piVar9 + 4) = 0xffffffff;
            uVar5 = *(arg1 + 0x55);
        }
        else {
            uVar5 = *(arg1 + 0x55);
        }
        if ((uVar5 >> 2 & 1) == 0) {
            iVar17 = sym.sps_h2bam(piVar9[7]);
            piVar9[0xb] = iVar17;
            if (iVar17 == 0) {
                if (*piVar24 != 0x7fffffffffffffff) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar8 = ___ratelimit(obj.sps_rm_create._rs.36,"sps_rm_create"), iVar8 != 0)))) {
                        _printk(0x8007650,"sps_rm_create",piVar24);
                    }
                    if (_segment.ehdr == NULL) goto code_r0x08025d28;
                    iVar17 = _segment.ehdr[0x22];
                    pcVar11 = "%s: sps:Invalid BAM handle: %pK";
                    piVar16 = piVar24;
                    goto code_r0x08025d24;
                }
                *(piVar9 + 9) = 0xffffffff;
            }
        }
        if (iVar1 == 0) {
            iVar17 = piVar9[6];
            if (iVar17 == 0) goto code_r0x08025394;
code_r0x08025320:
            iVar8 = sym.sps_bam_pipe_alloc(iVar17,*(piVar9 + 4));
            *(piVar9 + 0xbc) = iVar8;
            if (iVar8 == -1) goto code_r0x08025d28;
            iVar19 = piVar9[0xb];
            *(piVar9 + 4) = iVar8;
            piVar9[3] = *(iVar17 + 0x18);
            *(piVar9 + 0x24) = *(iVar17 + 0x54);
            if (iVar19 != 0) goto code_r0x08025358;
        }
        else {
            iVar19 = piVar9[0xb];
            if (iVar19 == 0) {
code_r0x08025394:
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar8 = ___ratelimit(obj.sps_rm_create._rs.39,"sps_rm_create"), iVar8 != 0)))) {
                    _printk(0x800c7cd,"sps_rm_create",iVar1,piVar16,piVar24);
                }
                if (_segment.ehdr == NULL) goto code_r0x08025d28;
                ipc_log_string(_segment.ehdr[0x22],"%s: sps:Invalid BAM endpt: dir %d src %pK dest %pK\n",
                               "sps_rm_create",iVar1,piVar16,piVar24);
                goto code_r0x08025d28;
            }
            iVar17 = piVar9[6];
            if (iVar17 != 0) goto code_r0x08025320;
code_r0x08025358:
            iVar8 = sym.sps_bam_pipe_alloc(iVar19,*(piVar9 + 9));
            *(piVar9 + 0x18) = iVar8;
            if (iVar8 == -1) goto code_r0x08025d28;
            *(piVar9 + 9) = iVar8;
            piVar9[8] = *(iVar19 + 0x18);
            *(piVar9 + 0x4c) = *(iVar19 + 0x54);
        }
        iVar17 = piVar9[6];
        if (iVar17 == 0) {
            uVar12 = 0;
            uVar20 = 0;
        }
        else {
            uVar20 = *(iVar17 + 0x58);
            uVar12 = *(iVar17 + 0x5c);
        }
        iVar19 = piVar9[0xb];
        uVar21 = uVar20;
        uVar13 = uVar12;
        if (iVar19 != 0) {
            uVar21 = *(iVar19 + 0x58);
            if (*(iVar19 + 0x58) <= uVar20) {
                uVar21 = uVar20;
            }
            uVar13 = *(iVar19 + 0x5c);
            if (*(iVar19 + 0x5c) <= uVar12) {
                uVar13 = uVar12;
            }
        }
        uVar20 = *(piVar9 + 0xf);
        if (*(piVar9 + 0xf) == 0xcccccccc) {
            *(piVar9 + 0xf) = uVar21;
            uVar20 = uVar21;
        }
        uVar18 = uVar20;
        if ((iVar17 != 0) && (iVar19 != 0)) {
            uVar12 = *(piVar9 + 0x13);
            if (uVar12 == 0xcccccccc) {
                *(piVar9 + 0x13) = uVar13;
                uVar12 = uVar13;
                if ((uVar20 & 0xffff0000) == 0) {
code_r0x08025558:
                    if (0xffff < uVar12) {
                        if (obj.logging_option == 0x1) goto code_r0x08025594;
                        if (2 < obj.print_limit_option) goto code_r0x08025ff4;
                        goto code_r0x08025580;
                    }
                    goto code_r0x08025620;
                }
            }
            else if (uVar20 < 0x10000) goto code_r0x08025558;
code_r0x080255bc:
            if (obj.logging_option != 0x1) {
                if (2 < obj.print_limit_option) {
                    iVar8 = ___ratelimit(obj.sps_rm_create._rs.42,"sps_rm_create");
                    if (iVar8 == 0) goto code_r0x080255f4;
                    uVar18 = *(piVar9 + 0xf);
                }
                _printk(0x8007672,"sps_rm_create",uVar18);
            }
code_r0x080255f4:
            if (_segment.ehdr == NULL) goto code_r0x08025d28;
            iVar17 = _segment.ehdr[0x22];
            uVar14 = piVar9[0xf];
            pcVar11 = "%s: sps:Invalid desc FIFO size: 0x%x\n";
            goto code_r0x08025610;
        }
        if ((*(arg1 + 0x55) >> 2 & 1) == 0) {
            uVar12 = uVar20 & 0xffff0000;
            *(piVar9 + 0x13) = 0;
        }
        else {
            uVar12 = uVar20 >> 0x10;
        }
        if (uVar12 != 0) goto code_r0x080255bc;
code_r0x08025620:
        if ((uVar20 != 0) && (*piVar15 == 0xdeadbeef)) {
            iVar17 = sym.sps_mem_alloc_io(uVar18);
            piVar9[0x19] = iVar17;
            if (iVar17 == 0xdeadbeef) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar8 = ___ratelimit(obj.sps_rm_create._rs.48,"sps_rm_create"), iVar8 != 0)))) {
                    _printk(0x8007ede,"sps_rm_create",piVar9[0xf]);
                }
                if (_segment.ehdr == NULL) goto code_r0x08025d28;
                iVar17 = _segment.ehdr[0x22];
                uVar14 = piVar9[0xf];
                goto code_r0x0802573c;
            }
            *piVar15 = iVar17;
            iVar17 = sym.spsi_get_mem_ptr(iVar17);
            *piVar22 = iVar17;
            if (iVar17 != 0) goto code_r0x080256b8;
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar8 = ___ratelimit(obj.sps_rm_create._rs.51,"sps_rm_create"), iVar8 != 0)))) {
                _printk(0x800c803,"sps_rm_create",piVar15);
            }
            if (_segment.ehdr == NULL) goto code_r0x08025d28;
            iVar17 = _segment.ehdr[0x22];
code_r0x08025d18:
            pcVar11 = "%s: sps:Cannot get virt addr for I/O buffer:%pa\n";
            piVar16 = piVar15;
code_r0x08025d24:
            ipc_log_string(iVar17,pcVar11,"sps_rm_create",piVar16);
            goto code_r0x08025d28;
        }
code_r0x080256b8:
        if ((*(piVar9 + 0x13) != 0) && (*piVar23 == 0xdeadbeef)) {
            iVar17 = sym.sps_mem_alloc_io(*(piVar9 + 0x13));
            piVar9[0x1a] = iVar17;
            if (iVar17 == 0xdeadbeef) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar8 = ___ratelimit(obj.sps_rm_create._rs.54,"sps_rm_create"), iVar8 != 0)))) {
                    _printk(0x8007ede,"sps_rm_create",piVar9[0x13]);
                }
                if (_segment.ehdr == NULL) goto code_r0x08025d28;
                iVar17 = _segment.ehdr[0x22];
                uVar14 = piVar9[0x13];
code_r0x0802573c:
                pcVar11 = "%s: sps:I/O memory allocation failure:0x%x\n";
                goto code_r0x08025610;
            }
            *piVar23 = iVar17;
            iVar17 = sym.spsi_get_mem_ptr(iVar17);
            *piVar26 = iVar17;
            if (iVar17 == 0) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar8 = ___ratelimit(obj.sps_rm_create._rs.55,"sps_rm_create"), iVar8 != 0)))) {
                    _printk(0x800c803,"sps_rm_create",piVar23);
                }
                if (_segment.ehdr == NULL) goto code_r0x08025d28;
                iVar17 = _segment.ehdr[0x22];
                piVar15 = piVar23;
                goto code_r0x08025d18;
            }
        }
        iVar8 = sym.sps_rm_assign(arg1,piVar9);
        piVar15 = _segment.ehdr;
        if (iVar8 != 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar8 = ___ratelimit(obj.sps_rm_create._rs.56,"sps_rm_create"), iVar8 != 0)))) {
                _printk(0x8007f0c,"sps_rm_create","sps_rm_create");
            }
            if (_segment.ehdr == NULL) goto code_r0x08025d28;
            iVar17 = _segment.ehdr[0x22];
            pcVar11 = "%s: sps:%s:failed to assign a connection to the client\n";
            piVar16 = "sps_rm_create";
            goto code_r0x08025d24;
        }
        puVar25 = _segment.ehdr[1];
        uVar18 = __list_add_valid(piVar9,puVar25,_segment.ehdr);
        if ((uVar18 & 1) != 0) {
            piVar15[1] = piVar9;
            *piVar9 = piVar15;
            piVar9[1] = puVar25;
            *puVar25 = piVar9;
        }
code_r0x080257f4:
        piVar15 = _segment.ehdr + 2;
        *(piVar9 + 0x17) = piVar9[0x17] + 1;
        mutex_unlock(piVar15);
        iVar8 = *(arg1 + 0x10);
    }
    piVar9 = 0x2535053;
    if ((arg2 == 0x2535053) && (iVar8 == 0x1535053)) {
        uStack_78 = *(arg1 + 0x4c);
        uStack_6c = 0;
        uStack_74 = 0;
        if (*(arg1 + 0x54) != -0x33333334) {
            uStack_6c = *(arg1 + 0xa4);
            uStack_74 = CONCAT44(*(arg1 + 0xa0),*(arg1 + 0x54));
        }
        iVar8 = sym.sps_bam_pipe_connect(arg1,&uStack_78);
        if (iVar8 != 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar8 = ___ratelimit(obj.sps_rm_state_change._rs.3,"sps_rm_state_change"), iVar8 != 0)))) {
                _printk(0x800b441,"sps_rm_state_change",*(arg1 + 0x18),*(arg1 + 0xbc));
            }
            iVar17 = *(arg1 + 0x18);
            if (iVar17 == 0) goto code_r0x08025e08;
            uVar10 = *(iVar17 + 0x228);
            pcVar11 = "%s: sps:Failed to connect BAM 0x%pK pipe %d\n";
            uVar14 = *(arg1 + 0xbc);
            goto code_r0x08025e00;
        }
        *(arg1 + 0x10) = 0x2535053;
        if (((*(arg1 + 0x20) == 0x7fffffffffffffff) || (*(arg1 + 0x38) == 0x7fffffffffffffff)) &&
           (*(*(arg1 + 0xb0) + 0x78) != 0)) {
            bVar6 = false;
            bVar7 = *(*(arg1 + 0xb0) + 0x68) != 0xdeadbeef;
        }
        else {
            bVar7 = false;
            bVar6 = false;
        }
code_r0x08025954:
        if (((arg2 != 0x3535053) && (!bVar7)) && ((*(arg1 + 0x57) >> 5 & 1) == 0)) {
code_r0x08025970:
            if (!bVar6) goto code_r0x08025b34;
code_r0x08025a78:
            iVar17 = *(arg1 + 0x18);
            iVar19 = 0x20;
            if (*(arg1 + 0x4c) != 0) {
                iVar19 = 0x48;
            }
            uVar20 = *(*(arg1 + 0xb0) + iVar19);
            piVar9 = uVar20;
            if (*(iVar17 + 0x2c) != 0) {
                synchronize_irq();
            }
            iVar17 = iVar17 + 0xe4;
            uVar10 = _raw_spin_lock_irqsave(iVar17);
            *(arg1 + 0x280) = 1;
            _raw_spin_unlock_irqrestore(iVar17,uVar10);
            iVar8 = sym.sps_bam_pipe_disconnect(*(arg1 + 0x18),uVar20);
            if (iVar8 != 0) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar8 = ___ratelimit(obj.sps_rm_state_change._rs.12,"sps_rm_state_change"), iVar8 != 0)))) {
                    _printk(0x8009679,"sps_rm_state_change",*(arg1 + 0x18) + 0x18,*(arg1 + 0xbc));
                }
                iVar17 = *(arg1 + 0x18);
                if (iVar17 == 0) goto code_r0x08025e08;
                uVar10 = *(iVar17 + 0x228);
                uVar14 = *(arg1 + 0xbc);
                iVar17 = iVar17 + 0x18;
                pcVar11 = "%s: sps:Failed to disconnect BAM %pa pipe %d\n";
                goto code_r0x08025e00;
            }
            piVar9 = *(arg1 + 0xb0);
            if (*(arg1 + 0x4c) == 1) {
                piVar9 = piVar9 + 0x16;
code_r0x08025b5c:
                *piVar9 = 0;
                piVar9 = *(arg1 + 0xb0);
            }
            else if (*(arg1 + 0x4c) == 0) {
                piVar9 = piVar9 + 0x15;
                goto code_r0x08025b5c;
            }
            mutex_lock(_segment.ehdr + 2);
            iVar17 = 0xa8;
            if (*(arg1 + 0x4c) != 0) {
                iVar17 = 0xb0;
            }
            *(piVar9 + iVar17) = 0;
            *(arg1 + 0xb0) = 0;
            *(arg1 + 0x10) = 0;
            sym.sps_rm_free_map_rsrc(piVar9);
            iVar8 = piVar9[0x17] + -1;
            *(piVar9 + 0x17) = iVar8;
            if (iVar8 < 1) {
                if ((piVar9[0x15] != 0) || (piVar9[0x16] != 0)) {
                    if ((obj.logging_option != 0x1) &&
                       ((obj.print_limit_option < 3 ||
                        (iVar8 = ___ratelimit(obj.sps_rm_remove_ref._rs,"sps_rm_remove_ref"), iVar8 != 0)))) {
                        _printk(0x8007b93,"sps_rm_remove_ref","sps_rm_remove_ref");
                    }
                    if (_segment.ehdr != NULL) {
                        ipc_log_string(_segment.ehdr[0x22],"%s: sps:%s:Failed to allocate connection struct\n",
                                       "sps_rm_remove_ref","sps_rm_remove_ref");
                    }
                }
                uVar18 = __list_del_entry_valid(piVar9);
                if ((uVar18 & 1) != 0) {
                    iVar17 = *piVar9;
                    piVar15 = piVar9[1];
                    *(iVar17 + 8) = piVar15;
                    *piVar15 = iVar17;
                }
                *piVar9 = -0x2152ffffffffff00;
                piVar9[1] = -0x2152fffffffffede;
                kfree(piVar9);
            }
            mutex_unlock(_segment.ehdr + 2);
            uVar10 = 0;
            *(arg1 + 0xb0) = 0;
            *(arg1 + 0x18) = 0;
            *(arg1 + 0x10) = 0;
            goto code_r0x08025e0c;
        }
        iVar8 = sym.sps_bam_pipe_enable(*(arg1 + 0x18),*(arg1 + 0xbc));
        if (iVar8 != 0) {
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar8 = ___ratelimit(obj.sps_rm_state_change._rs.6,"sps_rm_state_change"), iVar8 != 0)))) {
                _printk(0x80046fd,"sps_rm_state_change",*(arg1 + 0x18) + 0x18,*(arg1 + 0xbc));
            }
            iVar17 = *(arg1 + 0x18);
            if (iVar17 == 0) goto code_r0x08025e08;
            uVar10 = *(iVar17 + 0x228);
            uVar14 = *(arg1 + 0xbc);
            iVar17 = iVar17 + 0x18;
            pcVar11 = "%s: sps:Failed to set BAM %pa pipe %d flow on\n";
            goto code_r0x08025e00;
        }
        *(arg1 + 0x10) = 0x3535053;
code_r0x080259ec:
        if ((arg2 == 0x4535053) || (arg2 == 0)) {
            iVar8 = sym.sps_bam_pipe_disable(*(arg1 + 0x18),*(arg1 + 0xbc));
            if (iVar8 != 0) {
                if ((obj.logging_option != 0x1) &&
                   ((obj.print_limit_option < 3 ||
                    (iVar8 = ___ratelimit(obj.sps_rm_state_change._rs.9,"sps_rm_state_change"), iVar8 != 0)))) {
                    _printk(0x8008e7a,"sps_rm_state_change",*(arg1 + 0x18) + 0x18,*(arg1 + 0xbc));
                }
                iVar17 = *(arg1 + 0x18);
                if (iVar17 == 0) goto code_r0x08025e08;
                uVar10 = *(iVar17 + 0x228);
                uVar14 = *(arg1 + 0xbc);
                iVar17 = iVar17 + 0x18;
                pcVar11 = "%s: sps:Failed to set BAM %pa pipe %d flow off\n";
                goto code_r0x08025e00;
            }
            *(arg1 + 0x10) = 0x2535053;
            if (bVar6) goto code_r0x08025a78;
        }
    }
    else {
        bVar6 = arg2 == 0;
        if (iVar8 == 0x3535053) goto code_r0x080259ec;
        if (iVar8 == 0x2535053) {
            if ((arg2 != 0) && (arg2 != 0x4535053)) {
                bVar7 = false;
                goto code_r0x08025954;
            }
            goto code_r0x08025970;
        }
    }
code_r0x08025b34:
    uVar10 = 0;
code_r0x08025e0c:
    while (iVar17 = sp_el0, *(iVar17 + 0x5e0) != iStack_68) {
        __stack_chk_fail(uVar10);
code_r0x08025ff4:
        iVar8 = ___ratelimit(obj.sps_rm_create._rs.45,"sps_rm_create");
        if (iVar8 != 0) {
            uVar12 = *(piVar9 + 0x13);
code_r0x08025580:
            _printk(0x8005034,"sps_rm_create",uVar12);
        }
code_r0x08025594:
        if (_segment.ehdr != NULL) {
            iVar17 = _segment.ehdr[0x22];
            uVar14 = piVar9[0x13];
            pcVar11 = "%s: sps:Invalid data FIFO size: 0x%x\n";
code_r0x08025610:
            ipc_log_string(iVar17,pcVar11,"sps_rm_create",uVar14);
        }
code_r0x08025d28:
        sym.sps_rm_free_map_rsrc(piVar9);
        kfree(piVar9);
        unaff_x20 = piVar9;
code_r0x08025d3c:
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 || (iVar8 = ___ratelimit(obj.sps_rm_alloc._rs.20,"sps_rm_alloc"), iVar8 != 0))
           )) {
            _printk(0x8007b67,"sps_rm_alloc","sps_rm_alloc");
        }
        if (_segment.ehdr != NULL) {
            pcVar11 = "%s: sps:%s:Failed to allocate connection\n";
code_r0x08025d88:
            ipc_log_string(_segment.ehdr[0x22],pcVar11,"sps_rm_alloc","sps_rm_alloc");
        }
code_r0x08025d9c:
        mutex_unlock(_segment.ehdr + 2);
        piVar9 = unaff_x20;
code_r0x08025da8:
        if ((obj.logging_option != 0x1) &&
           ((obj.print_limit_option < 3 ||
            (iVar8 = ___ratelimit(obj.sps_rm_state_change._rs,"sps_rm_state_change"), iVar8 != 0)))) {
            _printk(0x8008a1c,"sps_rm_state_change",*(arg1 + 0x18),*(arg1 + 0xbc));
        }
        iVar17 = *(arg1 + 0x18);
        if (iVar17 != 0) {
            uVar10 = *(iVar17 + 0x228);
            uVar14 = *(arg1 + 0xbc);
            pcVar11 = "%s: sps:Fail to allocate resource for BAM 0x%pK pipe %d\n";
code_r0x08025e00:
            ipc_log_string(uVar10,pcVar11,"sps_rm_state_change",iVar17,uVar14);
        }
code_r0x08025e08:
        uVar10 = 0xffffffff;
    }
    return;
}


// ===== sym.sps_rm_assign @ 0x08026084 (size 720) =====

ulong sym.sps_rm_assign(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    char *pcVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x4c) == 0) {
        if (*(arg2 + 0xa8) != 0) goto code_r0x080260f8;
        if (*(arg2 + 0x30) != 0) {
            *(arg2 + 0xa8) = arg1;
            *(arg1 + 0x18) = *(arg2 + 0x30);
            *(arg1 + 0xbc) = *(arg2 + 0x20);
            if (*(arg1 + 0x98) != -0x33333334) {
                *(arg2 + 0x24) = *(arg1 + 0x98);
            }
            if (*(arg1 + 0x9c) != -0x33333334) {
                *(arg2 + 0x28) = *(arg1 + 0x9c);
            }
            goto code_r0x0802619c;
        }
    }
    else {
        if (*(arg2 + 0xb0) != 0) {
code_r0x080260f8:
            if ((obj.logging_option != 0x1) &&
               ((obj.print_limit_option < 3 ||
                (iVar4 = ___ratelimit(obj.sps_rm_assign._rs,"sps_rm_assign"), iVar4 != 0)))) {
                _printk(0x800a359,"sps_rm_assign","sps_rm_assign");
            }
            if (_segment.ehdr == 0) {
                return 0xffffffff;
            }
            uVar7 = *(_segment.ehdr + 0x110);
            pcVar5 = "%s: sps:%s:The end point is already connected\n";
            goto code_r0x08026148;
        }
        if (*(arg2 + 0x58) != 0) {
            *(arg2 + 0xb0) = arg1;
            *(arg1 + 0x18) = *(arg2 + 0x58);
            *(arg1 + 0xbc) = *(arg2 + 0x48);
            if (*(arg1 + 0x98) != -0x33333334) {
                *(arg2 + 0x4c) = *(arg1 + 0x98);
            }
            if (*(arg1 + 0x9c) != -0x33333334) {
                *(arg2 + 0x50) = *(arg1 + 0x9c);
            }
code_r0x0802619c:
            *(arg1 + 0xb0) = arg2;
            if (((1 < obj.logging_option) && (3 < obj.debug_level_option)) &&
               ((obj.print_limit_option == 0x0 ||
                (iVar4 = ___ratelimit(obj.sps_rm_assign._rs.28,"sps_rm_assign"), iVar4 != 0)))) {
                _printk(0x8008642,"sps_rm_assign","sps_rm_assign",*(arg1 + 0x18) + 0x18,*(arg1 + 0xbc));
            }
            iVar6 = *(arg1 + 0x18);
            if ((iVar6 != 0) && (*(iVar6 + 0x238) == 0)) {
                ipc_log_string(*(iVar6 + 0x210),"%s: sps:%s.bam %pa.pipe_index=%d\n","sps_rm_assign","sps_rm_assign"
                               ,iVar6 + 0x18,*(arg1 + 0xbc));
                iVar6 = *(arg1 + 0x18);
            }
            *(arg1 + 0x30) = *(arg2 + 0x20);
            *(arg1 + 0x48) = *(arg2 + 0x48);
            if ((*(iVar6 + 0x11) >> 1 & 1) == 0) {
                uVar7 = 0;
                uVar8 = 0;
            }
            else {
                uVar8 = *(arg1 + 0x68);
                uVar7 = *(arg1 + 0x88);
            }
            uVar2 = *(arg2 + 0x78);
            uVar1 = *(arg2 + 0x60);
            uVar3 = *(arg2 + 0x68);
            *(arg1 + 0x68) = *(arg2 + 0x70);
            *(arg1 + 0x70) = uVar2;
            *(arg1 + 0x58) = uVar1;
            *(arg1 + 0x60) = uVar3;
            uVar2 = *(arg2 + 0x98);
            uVar1 = *(arg2 + 0x80);
            uVar3 = *(arg2 + 0x88);
            *(arg1 + 0x88) = *(arg2 + 0x90);
            *(arg1 + 0x90) = uVar2;
            *(arg1 + 0x78) = uVar1;
            *(arg1 + 0x80) = uVar3;
            if ((*(iVar6 + 0x11) >> 1 & 1) != 0) {
                *(arg1 + 0x68) = uVar8;
                *(arg1 + 0x88) = uVar7;
            }
            *(arg1 + 0x10) = 0x1535053;
            return 0;
        }
    }
    if ((obj.logging_option != 0x1) &&
       ((obj.print_limit_option < 3 || (iVar4 = ___ratelimit(obj.sps_rm_assign._rs.25,"sps_rm_assign"), iVar4 != 0))))
    {
        _printk(0x800bc88,"sps_rm_assign","sps_rm_assign");
    }
    if (_segment.ehdr == 0) {
        return 0xffffffff;
    }
    uVar7 = *(_segment.ehdr + 0x110);
    pcVar5 = "%s: sps:%s:The end point is empty\n";
code_r0x08026148:
    ipc_log_string(uVar7,pcVar5,"sps_rm_assign","sps_rm_assign");
    return 0xffffffff;
}


// ===== sym.sps_rm_free_map_rsrc @ 0x08026354 (size 196) =====

void sym.sps_rm_free_map_rsrc(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0xa8) == 0) && (*(arg1 + 0xb0) == 0)) {
        if (*(arg1 + 0xbc) != -1) {
            sym.sps_bam_pipe_free(*(arg1 + 0x30),*(arg1 + 0x20));
            *(arg1 + 0xbc) = 0xffffffff;
            *(arg1 + 0x20) = 0xffffffff;
        }
        if (*(arg1 + 0xc0) != -1) {
            sym.sps_bam_pipe_free(*(arg1 + 0x58),*(arg1 + 0x48));
            *(arg1 + 0xc0) = 0xffffffff;
            *(arg1 + 0x48) = 0xffffffff;
        }
        if (*(arg1 + 200) != 0xdeadbeef) {
            sym.sps_mem_free_io(*(arg1 + 200),*(arg1 + 0x78));
            *(arg1 + 200) = 0xdeadbeef;
            *(arg1 + 0x68) = 0xdeadbeef;
        }
        if (*(arg1 + 0xd0) != 0xdeadbeef) {
            sym.sps_mem_free_io(*(arg1 + 0xd0),*(arg1 + 0x98));
            *(arg1 + 0xd0) = 0xdeadbeef;
            *(arg1 + 0x88) = 0xdeadbeef;
        }
    }
    return;
}


// ===== sym.init_module @ 0x08026688 (size 920) =====

ulong sym.init_module(void)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    obj.debugfs_record_enabled = 0x0;
    obj.logging_option = 0x0;
    obj.debug_level_option = 0x0;
    obj.reg_dump_option = 0x0;
    obj.print_limit_option = 0x0;
    _segment.ehdr = *0x8000004 << 0x20;
    obj.wraparound = 0x0;
    _segment.ehdr = debugfs_create_dir(0x80050cc,0);
    if (_segment.ehdr < 0xfffffffffffff001) {
        _segment.ehdr = debugfs_create_file("info",0x1b4,_segment.ehdr,0,obj.sps_info_ops);
        uVar1 = 0x800b809;
        if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
            _segment.ehdr = debugfs_create_file("logging_option",0x1b4,_segment.ehdr,0,obj.sps_logging_option_ops);
            uVar1 = 0x800b3a0;
            if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
                debugfs_create_u8("debug_level_option",0x1b4,_segment.ehdr,obj.debug_level_option);
                debugfs_create_u8("print_limit_option",0x1b4,_segment.ehdr,obj.print_limit_option);
                debugfs_create_u8("reg_dump_option",0x1b4,_segment.ehdr,obj.reg_dump_option);
                debugfs_create_u32("testbus_sel",0x1b4,_segment.ehdr,obj.testbus_sel);
                debugfs_create_u32("bam_pipe_sel",0x1b4,_segment.ehdr,obj.bam_pipe_sel);
                debugfs_create_u32("desc_option",0x1b4,_segment.ehdr,obj.desc_option);
                _segment.ehdr = debugfs_create_file("bam_addr",0x1b4,_segment.ehdr,0,obj.sps_bam_addr_ops);
                uVar1 = 0x8004676;
                if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
                    debugfs_create_u32("log_level_sel",0x1b4,_segment.ehdr,obj.log_level_sel);
                    __mutex_init(obj.sps_debugfs_lock,"&sps_debugfs_lock",obj.sps_debugfs_init.__key);
                    goto code_r0x080268c0;
                }
            }
        }
        _printk(uVar1);
        debugfs_remove(_segment.ehdr);
    }
    else {
        _printk(0x8007a94);
    }
code_r0x080268c0:
    _segment.ehdr = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x128);
    if (_segment.ehdr == 0) {
        uVar1 = 0xfffffff4;
    }
    else {
        iVar2 = ipc_log_context_create(10,"sps_ipc_log0",0);
        *(_segment.ehdr + 0xf8) = iVar2;
        if (iVar2 == 0) {
            _printk(0x800b054);
        }
        iVar2 = ipc_log_context_create(10,"sps_ipc_log1",0);
        *(_segment.ehdr + 0x100) = iVar2;
        if (iVar2 == 0) {
            _printk(0x80081c7);
        }
        iVar2 = ipc_log_context_create(10,"sps_ipc_log2",0);
        *(_segment.ehdr + 0x108) = iVar2;
        if (iVar2 == 0) {
            _printk(0x80075d5);
        }
        iVar2 = ipc_log_context_create(10,"sps_ipc_log3",0);
        *(_segment.ehdr + 0x110) = iVar2;
        if (iVar2 == 0) {
            _printk(0x8004f3d);
        }
        iVar2 = ipc_log_context_create(0x1e,"sps_ipc_log4",0);
        *(_segment.ehdr + 0x118) = iVar2;
        if (iVar2 == 0) {
            _printk(0x8007a77);
        }
        uVar1 = __platform_driver_register
                          (reloc.msm_sps_probe.639189d76e9915dcda9027510d7b62b6.cfi_jt,obj.__this_module);
    }
    return uVar1;
}


// ===== sym.cleanup_module @ 0x08026a20 (size 96) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_sps_probe.639189d76e9915dcda9027510d7b62b6.cfi_jt);
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    debugfs_remove(0);
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}

