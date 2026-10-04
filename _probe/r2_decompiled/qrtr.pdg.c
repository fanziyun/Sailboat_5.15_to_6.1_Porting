// decompiled from qrtr by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 1208) =====

//WARNING: Switch with 1 destination removed at 0x08005564

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x404f2fae296fbaf) {
        if (arg1 < -0x1790746e7e5567d4) {
            if (arg1 < -0x45bedcd2793f49bd) {
                if (arg1 == -0x7c835aae9636863e) {
                    pcVar2 = sym.sock_no_shutdown.cfi_jt;
code_r0x08001468:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08005524;
                }
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.qrtr_alloc_backup.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
                }
                else {
                    if (arg1 != -0x4c20f80aac6d4f13) goto code_r0x08005524;
                    pcVar2 = sym.qrtr_peek_pkt_size.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x45bedcd2793f49bd) {
                    if ((pcVar1 + -0x8001590 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08005524;
                }
                if (arg1 == -0x3ff87eea0daa0163) {
                    pcVar2 = sym.qrtr_node_rx_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
                    goto code_r0x08001468;
                }
                if (arg1 != -0x3cfcf2c210981b22) goto code_r0x08005524;
                pcVar2 = sym.datagram_poll.cfi_jt;
            }
        }
        else if (arg1 < -0x9073a3b2843f958) {
            if (arg1 == -0x1790746e7e5567d4) {
                pcVar2 = sym.sock_no_mmap.cfi_jt;
            }
            else if (arg1 == -0x173933f6970f3e5a) {
                pcVar2 = sym.qrtr_ioctl.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
            }
            else {
                if (arg1 != -0xbfba6ea79aaeb95) goto code_r0x08005524;
                pcVar2 = sym.qrtr_print_wakeup_reason.cfi_jt;
            }
        }
        else if (arg1 < 0xbb02ef458bb342) {
            if (arg1 == -0x9073a3b2843f958) {
                pcVar2 = sym.sock_gettstamp.cfi_jt;
            }
            else {
                if (arg1 != -0x2ac316d8df914f8) goto code_r0x08005524;
                pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
            }
        }
        else if (arg1 == 0xbb02ef458bb342) {
            pcVar2 = sym.qrtr_endpoint_unregister.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08005524;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x4e188bcd23ce9998) {
        if (arg1 < 0x1e6bd98e843aaf7c) {
            if (arg1 == 0x404f2fae296fbaf) {
                pcVar2 = sym.qrtr_getname.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
                goto code_r0x08001468;
            }
            if (arg1 == 0xada0f6b428226ac) {
                pcVar2 = sym.qrtr_connect.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
            }
            else {
                if (arg1 != 0xcd7361ead764e9e) goto code_r0x08005524;
                pcVar2 = sym.qrtr_endpoint_register.cfi_jt;
            }
        }
        else if (arg1 == 0x1e6bd98e843aaf7c) {
            pcVar2 = sym.sock_no_socketpair.cfi_jt;
        }
        else if (arg1 == 0x2a7569a430b26262) {
            pcVar2 = sym.qrtr_recvmsg.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
        }
        else {
            if (arg1 != 0x3dcc723c6fad42e2) goto code_r0x08005524;
            pcVar2 = sym.qrtr_create.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
        }
    }
    else if (arg1 < 0x641d19c7be126e92) {
        if (arg1 == 0x4e188bcd23ce9998) {
            pcVar2 = sym.qrtr_release.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
        }
        else if (arg1 == 0x57c16e3c88918e58) {
            pcVar2 = sym.sock_no_sendpage.cfi_jt;
        }
        else {
            if (arg1 != 0x597a454cf239759c) goto code_r0x08005524;
            pcVar2 = sym.qrtr_endpoint_post.cfi_jt;
        }
    }
    else if (arg1 < 0x78141c1759d3cef6) {
        if (arg1 == 0x641d19c7be126e92) {
            pcVar2 = sym.kthread_worker_fn.cfi_jt;
        }
        else {
            if (arg1 != 0x69cb8f4c4a850008) goto code_r0x08005524;
            pcVar2 = sym.sock_no_accept.cfi_jt;
        }
    }
    else if (arg1 == 0x78141c1759d3cef6) {
        pcVar2 = sym.qrtr_sendmsg.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005524;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005524:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005578);
    (*pcVar1)();
}


// ===== sym.qrtr_endpoint_post.cfi_jt @ 0x080014c0 (size 8) =====

void sym.qrtr_endpoint_post.cfi_jt(int64_t param_1,char *param_2,uint64_t param_3)

{
    char cVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint uStack_7c;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    iVar13 = *(param_1 + 8);
    uVar6 = 0xffffffea;
    uStack_7c = 0;
    if ((param_3 == 0) || ((param_3 & 3) != 0)) goto code_r0x08001ba4;
    iVar7 = alloc_skb_with_frags(0x20,param_3,0,&uStack_7c,0xa20);
    if (iVar7 == 0) {
        if (param_3 < 0x400) {
            pcVar8 = obj.qrtr_backup_lo;
code_r0x080017fc:
            iVar7 = skb_dequeue(pcVar8);
            if (iVar7 != 0) {
                queue_work_on(0x20,_datagram_poll,obj.qrtr_backup_work);
                goto code_r0x08001820;
            }
        }
        else if (param_3 >> 0xe == 0) {
            pcVar8 = obj.qrtr_backup_hi;
            goto code_r0x080017fc;
        }
        _printk(0x8000b55,param_3);
        uVar6 = 0xfffffff4;
        goto code_r0x08001ba4;
    }
code_r0x08001820:
    *(iVar7 + 0xd8) = *(iVar7 + 0xd8) + 0x20;
    *(iVar7 + 200) = *(iVar7 + 200) + 0x20;
    if (*param_2 == '\x03') {
        if (0xf < param_3) {
            uVar9 = param_2[1];
            uVar2 = param_2[3];
            *(iVar7 + 0x38) = param_2[1];
            iVar10 = uVar2 + 0x10;
            *(iVar7 + 0x39) = param_2[2] & 1;
            *(iVar7 + 0x28) = *(param_2 + 8);
            uVar3 = *(param_2 + 10);
            *(iVar7 + 0x2c) = uVar3;
            *(iVar7 + 0x30) = *(param_2 + 0xc);
            uVar11 = *(param_2 + 0xe);
            *(iVar7 + 0x34) = uVar11;
            if (uVar3 == 0xfffe) {
                *(iVar7 + 0x2c) = 0xfffffffe;
            }
            if (uVar11 != 0xfffe) {
                iVar12 = 4;
                goto code_r0x08001914;
            }
            uVar11 = 0xfffffffe;
            *(iVar7 + 0x34) = 0xfffffffe;
            uVar15 = *(param_2 + 4);
code_r0x0800192c:
            if ((uVar15 != 0) && ((uVar15 + 3 & 0x1fffffffc) + iVar10 == param_3)) {
                if (uVar11 != 0xfffffffe) {
                    if (((uVar9 & 0xff) != 7) && ((uVar9 & 0xff) != 1)) goto code_r0x08001b98;
                }
                *(iVar7 + 0x70) = uVar15;
                *(iVar7 + 0x74) = uVar15;
                skb_store_bits(iVar7,0,param_2 + iVar10,uVar15);
                iVar4 = *(iVar7 + 0x28);
                if ((iVar4 != -1) && (*(iVar13 + 0x3c) != iVar4)) {
                    uVar6 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
                    iVar12 = radix_tree_lookup(obj.qrtr_nodes,iVar4);
                    if (iVar12 == 0) {
                        radix_tree_insert(obj.qrtr_nodes,iVar4,iVar13);
                    }
                    if (*(iVar13 + 0x3c) == -1) {
                        *(iVar13 + 0x3c) = iVar4;
                    }
                    _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar6);
                }
                cVar1 = *(iVar7 + 0x38);
                if (cVar1 == '\x04') {
                    if (uVar15 < 0x14) goto code_r0x08001b98;
                    sym.qrtr_node_assign(iVar13,*(param_2 + iVar10 + 0xc));
                    cVar1 = *(iVar7 + 0x38);
                }
                uStack_60 = 0;
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_78 = 0;
                if (cVar1 == '\x01') {
                    skb_copy_bits(iVar7,0,&uStack_78,8);
                    ipc_log_string(*(iVar13 + 0x150),
                                   "RX DATA: Len:0x%x CF:0x%x src[0x%x:0x%x] dst[0x%x:0x%x] [%08x %08x]\n",
                                   *(iVar7 + 0x70),*(iVar7 + 0x39),*(iVar7 + 0x28),*(iVar7 + 0x2c),*(iVar7 + 0x30),
                                   *(iVar7 + 0x34),uStack_78,uStack_78 >> 0x20);
                }
                else {
                    skb_copy_bits(iVar7,0,&uStack_70,0x14);
                    uVar2 = *(iVar7 + 0x38);
                    if (uVar2 < 8) {
                        uVar9 = 1 << (uVar2 & 0x1f);
                        if ((uVar9 & 0xc) == 0) {
                            if ((uVar9 & 0x30) == 0) {
                                if ((1 << (uVar2 & 0x1f) & 0xc0U) != 0) {
                                    ipc_log_string(*(iVar13 + 0x150),"RX CTRL: cmd:0x%x addr[0x%x:0x%x]\n",uVar2,
                                                   uStack_70._4_4_,uStack_68 & 0xffffffff);
                                }
                            }
                            else {
                                ipc_log_string(*(iVar13 + 0x150),"RX CTRL: cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",
                                               uVar2,uStack_70._4_4_,uStack_68 & 0xffffffff,uStack_68._4_4_,
                                               uStack_60);
                            }
                        }
                        else {
                            ipc_log_string(*(iVar13 + 0x150),"RX CTRL: cmd:0x%x node[0x%x]\n",uVar2,*(iVar7 + 0x28));
                            if ((*(iVar7 + 0x28) == 3) || (*(iVar7 + 0x28) == 0)) {
                                _printk(0x80008fa,*(iVar7 + 0x38));
                            }
                        }
                    }
                }
                iVar4 = qrtr_get_service_id(*(iVar7 + 0x28),*(iVar7 + 0x2c));
                if ((*(iVar7 + 0x38) != '\x01') || (*(iVar7 + 0x30) != _segment.ehdr)) {
                    skb_queue_tail(iVar13 + 0x90,iVar7);
                    kthread_queue_work(iVar13 + 0xb8,iVar13 + 0xf8);
                    pm_wakeup_ws_event(*(iVar13 + 0x148),0,1);
                    uVar6 = 0;
                    goto code_r0x08001ba4;
                }
                iVar10 = sym.qrtr_port_lookup(*(iVar7 + 0x34));
                if (iVar10 == 0) {
                    kfree_skb(iVar7);
                    uVar6 = 0xffffffed;
                    goto code_r0x08001ba4;
                }
                iVar5 = sock_queue_rcv_skb(iVar10,iVar7);
                if (iVar5 == 0) {
                    iVar7 = xa_load(iVar13 + 0x158,iVar4);
                    if (iVar7 == 0) {
                        pm_wakeup_ws_event(*(iVar13 + 0x148),0,1);
                    }
                    sym.qrtr_port_put(iVar10);
                    uVar6 = 0;
                    goto code_r0x08001ba4;
                }
                sym.qrtr_port_put(iVar10);
            }
        }
    }
    else if (*param_2 == '\x01') {
        if (0x1f < param_3) {
            uVar9 = *(param_2 + 4);
            iVar12 = 0x14;
            *(iVar7 + 0x38) = uVar9;
            *(iVar7 + 0x28) = *(param_2 + 8);
            *(iVar7 + 0x2c) = *(param_2 + 0xc);
            *(iVar7 + 0x39) = *(param_2 + 0x10) != 0;
            *(iVar7 + 0x30) = *(param_2 + 0x18);
            iVar10 = 0x20;
            uVar11 = *(param_2 + 0x1c);
            *(iVar7 + 0x34) = uVar11;
code_r0x08001914:
            uVar15 = *(param_2 + iVar12);
            if (uVar11 == 0xffff) {
                uVar11 = 0xfffffffe;
                *(iVar7 + 0x34) = 0xfffffffe;
            }
            goto code_r0x0800192c;
        }
    }
    else {
        _printk(0x8000a93);
    }
code_r0x08001b98:
    kfree_skb(iVar7);
    uVar6 = 0xffffffea;
code_r0x08001ba4:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return;
    }
    auVar16 = __stack_chk_fail(uVar6);
    iVar13 = auVar16._0_8_;
    *extraout_x18 = sym.qrtr_node_assign;
    iVar4 = auVar16._8_4_;
    if (iVar4 != -1) {
        uVar14 = auVar16._8_8_ & 0xffffffff;
        if (*(iVar13 + 0x3c) != iVar4) {
            uVar6 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
            iVar7 = radix_tree_lookup(obj.qrtr_nodes,uVar14);
            if (iVar7 == 0) {
                radix_tree_insert(obj.qrtr_nodes,uVar14,iVar13);
            }
            if (*(iVar13 + 0x3c) == -1) {
                *(iVar13 + 0x3c) = iVar4;
            }
            _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar6);
        }
    }
    return;
}


// ===== sym.datagram_poll.cfi_jt @ 0x080014c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.datagram_poll.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qrtr_alloc_backup.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x080014d0 (size 8) =====

void sym.qrtr_alloc_backup.391ff6e3657b129d182c5f998852fdf4.cfi_jt(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_2c = 0;
    uVar1 = _segment.ehdr;
    while ((uVar2 = _segment.ehdr, uVar1 < 0x14 &&
           (iVar4 = alloc_skb_with_frags(0x20,0x400,0,&uStack_2c,0xcc0), uVar2 = _segment.ehdr, iVar4 != 0))) {
        skb_queue_tail(obj.qrtr_backup_lo,iVar4);
        uVar1 = *0x80005c0;
    }
    while ((uVar2 < 5 && (iVar4 = alloc_skb_with_frags(0x20,0x4000,0,&uStack_2c,0xcc0), iVar4 != 0))) {
        skb_queue_tail(obj.qrtr_backup_hi,iVar4);
        uVar2 = *0x80005d8;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail();
        puVar5 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x8005578);
        (*pcVar3)();
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080014d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qrtr_ns_remove();
    sock_unregister(0x2a);
    proto_unregister(obj.qrtr_proto);
    cancel_work_sync(obj.qrtr_backup_work);
    skb_queue_purge(obj.qrtr_backup_lo);
    skb_queue_purge(obj.qrtr_backup_hi);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080014e0 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar5 = 0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_3c = 0;
    do {
        iVar5 = of_find_compatible_node(iVar5,0,"qcom,qrtr");
        if (iVar5 == 0) goto code_r0x08005670;
        iVar2 = of_property_read_variable_u32_array(iVar5,"qcom,node-id",&uStack_3c,1,0);
    } while (iVar2 < 0);
    _segment.ehdr = uStack_3c;
code_r0x08005670:
    uVar3 = proto_register(obj.qrtr_proto,1);
    uVar4 = uVar3;
    if (uVar3 == 0) {
        uVar3 = sock_register(obj.qrtr_family);
        uVar4 = uVar3;
        if (uVar3 == 0) {
            uVar3 = qrtr_ns_init();
            uVar4 = uVar3;
            if (uVar3 == 0) {
                _obj.qrtr_backup_lo = obj.qrtr_backup_lo;
                _obj.qrtr_epts_lock = obj.qrtr_backup_lo;
                *0x80005c0 = 0;
                _obj.qrtr_backup_work = 0xfffffffe0;
                _obj.qrtr_backup_hi = obj.qrtr_backup_hi;
                *0x80005d0 = obj.qrtr_backup_hi;
                *0x80005d8 = 0;
                *0x80005e8 = 0x80005e8;
                *0x80005f0 = 0x80005e8;
                _obj.qrtr_all_epts = sym.qrtr_alloc_backup.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
                queue_work_on(0x20,_datagram_poll);
                goto code_r0x080056bc;
            }
            sock_unregister(0x2a);
        }
        proto_unregister(obj.qrtr_proto);
    }
code_r0x080056bc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cleanup_module;
    qrtr_ns_remove();
    sock_unregister(0x2a);
    proto_unregister(obj.qrtr_proto);
    cancel_work_sync(obj.qrtr_backup_work);
    skb_queue_purge(obj.qrtr_backup_lo);
    uVar4 = skb_queue_purge(obj.qrtr_backup_hi);
    return uVar4;
}


// ===== sym.qrtr_connect.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x080014e8 (size 8) =====

int sym.qrtr_connect.391ff6e3657b129d182c5f998852fdf4.cfi_jt(uint *param_1,int16_t *param_2,uint32_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 < 0xc) || (*param_2 != 0x2a)) {
        iVar1 = -0x16;
    }
    else {
        iVar3 = *(param_1 + 6);
        lock_sock_nested(iVar3,0);
        *(iVar3 + 0x12) = 7;
        *param_1 = 1;
        iVar1 = sym.qrtr_autobind(param_1);
        if (iVar1 == 0) {
            uVar2 = *param_2;
            *(iVar3 + 0x37c) = *(param_2 + 4);
            *(iVar3 + 0x374) = uVar2;
            *param_1 = 3;
            *(iVar3 + 0x12) = 1;
        }
        release_sock(iVar3);
    }
    return iVar1;
}


// ===== sym.qrtr_sendmsg.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x080014f0 (size 8) =====

uint64_t sym.qrtr_sendmsg.391ff6e3657b129d182c5f998852fdf4.cfi_jt(int64_t param_1,ulong *param_2,ulong *param_3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *puVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong *unaff_x20;
    ulong *unaff_x21;
    int16_t *piVar10;
    uint64_t arg1;
    code *unaff_x24;
    code *pcVar11;
    int64_t unaff_x25;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uint32_t uStack_74;
    ulong uStack_70;
    uint64_t uStack_68;
    uint uStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_5c = 1;
    piVar10 = *param_2;
    uStack_60 = 0;
    iVar9 = *(param_1 + 0x18);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_74 = 0;
    puVar6 = param_3;
    pcVar11 = unaff_x24;
    iVar5 = unaff_x25;
    if ((*(param_2 + 10) & 0xffffffbf) != 0) {
        arg1 = 0xffffffea;
        param_3 = unaff_x20;
        param_2 = unaff_x21;
        goto code_r0x08004acc;
    }
    if (param_3 >> 0x10 != 0) {
        arg1 = 0xffffffa6;
        param_2 = unaff_x21;
        goto code_r0x08004acc;
    }
    lock_sock_nested(iVar9,0);
    if (piVar10 == NULL) {
        if (*(iVar9 + 0x12) != '\x01') goto code_r0x080048a8;
        piVar10 = iVar9 + 0x374;
    }
    else {
        if ((*(param_2 + 1) < 0xc) || (*piVar10 != 0x2a)) {
            release_sock(iVar9);
            arg1 = 0xffffffea;
            goto code_r0x08004acc;
        }
        uStack_74 = sym.qrtr_autobind(param_1);
        if (uStack_74 != 0) {
            arg1 = uStack_74;
            release_sock(iVar9);
            goto code_r0x08004acc;
        }
    }
    uVar4 = *(piVar10 + 2);
    if (uVar4 == 0xffffffff) {
        arg1 = 0;
        unaff_x24 = sym.qrtr_bcast_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
        pcVar11 = sym.qrtr_bcast_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
        if ((*(piVar10 + 4) != -2) && (_segment.ehdr != -1)) {
code_r0x080048a8:
            release_sock(iVar9);
            arg1 = 0xffffff95;
            pcVar11 = unaff_x24;
            goto code_r0x08004acc;
        }
    }
    else if (uVar4 == *(iVar9 + 0x36c)) {
        arg1 = 0;
        pcVar11 = sym.qrtr_local_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
    }
    else {
        arg1 = sym.qrtr_node_lookup(uVar4);
        if (arg1 == 0) {
            release_sock(iVar9);
            arg1 = 0xffffff98;
            goto code_r0x08004acc;
        }
        iVar1 = *(iVar9 + 0x380);
        if (iVar1 < 0) {
            if (iVar1 == -1) {
                uVar7 = *(arg1 + 0x3c);
                goto code_r0x080048fc;
            }
        }
        else if (iVar1 != *(arg1 + 0x3c)) {
            uVar7 = 0xfffffffe;
code_r0x080048fc:
            *(iVar9 + 0x380) = uVar7;
        }
        pcVar11 = sym.__typeid__ZTSFiP9qrtr_nodeP7sk_buffiP13sockaddr_qrtrS4_jE_global_addr;
    }
    uVar8 = param_3 + 3U & 0xfffffffffffffffc;
    uVar4 = uVar8 - 16000;
    if (uVar8 < 0x3e81) {
        uVar4 = 0;
    }
    unaff_x26 = uVar4;
    puVar6 = uVar8 - 0x2e81 & 0xfffff000;
    if (uVar8 < 0x3e81) {
        puVar6 = NULL;
    }
    iVar5 = sock_alloc_send_pskb(iVar9,(uVar8 - unaff_x26) + 0x20,puVar6,*(param_2 + 10) & 0x40,&uStack_74,3);
    if (iVar5 == 0) {
        iVar5 = unaff_x25;
        uStack_74 = 0xfffffff4;
        goto code_r0x08004ab8;
    }
    *(iVar5 + 0xd8) = *(iVar5 + 0xd8) + 0x20;
    *(iVar5 + 200) = *(iVar5 + 200) + 0x20;
    skb_put(iVar5,param_3 - uVar4);
    puVar6 = param_2 + 2;
    *(iVar5 + 0x70) = param_3;
    *(iVar5 + 0x74) = uVar4;
    uStack_74 = skb_copy_datagram_from_iter(iVar5,0,puVar6,param_3 & 0xffffffff);
    if (uStack_74 != 0) {
code_r0x0800499c:
        kfree_skb(iVar5);
        goto code_r0x08004ab8;
    }
    if ((*(iVar9 + 0x370) == -2) || (*(piVar10 + 4) == -2)) {
        if (param_3 < 0x4) {
            uStack_74 = 0xffffffea;
            goto code_r0x0800499c;
        }
        skb_copy_bits(iVar5,0,&uStack_5c,4);
        puVar6 = uStack_5c;
        if ((*(piVar10 + 4) != -2) || (uStack_5c != 4)) goto code_r0x08004a78;
        puVar6 = &uStack_70;
        *(iVar9 + 0x380) = 0xfffffffe;
        skb_copy_bits(iVar5,0,puVar6,0x14);
        unaff_x26 = sym.qrtr_node_lookup(uStack_68 >> 0x20);
        if (unaff_x26 != 0) {
            if (((arg1 == 0) || (arg1 == unaff_x26)) || (*(arg1 + 0x3c) == -1)) {
code_r0x08004b08:
                uStack_74 = 0;
                kfree_skb(iVar5);
                sym.qrtr_node_release(unaff_x26);
                goto code_r0x08004ab8;
            }
            iVar2 = *(arg1 + 0x40) - *(unaff_x26 + 0x40);
            iVar1 = -iVar2;
            if (-1 < iVar2) {
                iVar1 = iVar2;
            }
            if (iVar1 < 2) goto code_r0x08004b08;
        }
        sym.qrtr_node_release(unaff_x26);
        puVar6 = 0x4;
    }
    else {
        puVar6 = 0x1;
    }
code_r0x08004a78:
    uVar4 = puVar6;
    unaff_x26 = iVar9 + 0x368;
    if (2 < pcVar11 + -0x8001590 >> 3) goto code_r0x08004b24;
    while( true ) {
        uVar4 = (*pcVar11)(arg1,iVar5,puVar6,unaff_x26,piVar10,*(param_2 + 10));
        uStack_74 = param_3;
        if (uVar4 < 0) {
            uStack_74 = uVar4;
        }
code_r0x08004ab8:
        sym.qrtr_node_release(arg1);
        release_sock(iVar9);
        arg1 = uStack_74;
code_r0x08004acc:
        uVar4 = puVar6;
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
code_r0x08004b24:
        __cfi_slowpath_diag(0xba41232d86c0b643,pcVar11,0x8000820);
        puVar6 = uVar4;
    }
    return arg1;
}


// ===== sym.qrtr_endpoint_unregister.cfi_jt @ 0x080014f8 (size 8) =====

ulong sym.qrtr_endpoint_unregister.cfi_jt
                (uchar param_1 [16],uchar param_2 [16],int64_t param_3,ulong param_4,ulong param_5,ulong *param_6,
                ulong *param_7)

{
    int *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    uint *puVar11;
    int64_t extraout_x1;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    code *arg1;
    int64_t iVar14;
    code *pcVar15;
    code *arg1_00;
    ulong unaff_x30;
    uint64_t uStack_c8;
    int64_t iStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    ulong uStack_88;
    uint uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    arg1 = *(param_3 + 8);
    uStack_90 = 0xfffffffe;
    uStack_a8 = 0x2a;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a4 = _segment.ehdr;
    uStack_a0 = 0xfffffffe;
    uStack_94 = *(arg1 + 0x3c);
    uStack_98 = 0x2a;
    mutex_lock(arg1);
    *(arg1 + 0x30) = 0;
    mutex_unlock(arg1);
    uVar8 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
    uStack_c8 = 0;
    iStack_c0 = 0;
code_r0x08002708:
    piVar9 = radix_tree_next_chunk(obj.qrtr_nodes,&uStack_c8,0);
    if (piVar9 != NULL) {
        do {
            if (*piVar9 == arg1) {
                param_6 = 0xffffffff;
                uStack_94 = uStack_c8;
                iVar10 = __alloc_skb(0x34,0xa20,0);
                if (iVar10 != 0) {
                    *(iVar10 + 0xd8) = *(iVar10 + 0xd8) + 0x20;
                    *(iVar10 + 200) = *(iVar10 + 200) + 0x20;
                    puVar11 = skb_put(iVar10,0x14);
                    param_6 = &uStack_98;
                    param_7 = &uStack_a8;
                    *(puVar11 + 1) = 0;
                    *(puVar11 + 3) = 0;
                    *puVar11 = 3;
                    sym.qrtr_local_enqueue(3,iVar10,param_2,param_6);
                }
                _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar8);
                uVar6 = uStack_c8;
                uStack_78 = *0x8000db8;
                uStack_70 = *0x8000dc0;
                uStack_88 = *0x8000db8;
                uStack_80 = *0x8000dc0;
                down_read(obj.qrtr_epts_lock);
                if (_obj.qrtr_all_epts != obj.qrtr_all_epts) {
                    uVar2 = (uVar6 >> 0x10) + (uVar6 & 0xffff) + 0xe11e;
                    pcVar15 = _obj.qrtr_all_epts;
                    do {
                        arg1_00 = pcVar15 + -0xa8;
                        if (arg1 == NULL) {
code_r0x0800286c:
                            param_6 = 0xffffffff;
                            iVar10 = __alloc_skb(0x34,0xcc0,0);
                            if (iVar10 == 0) goto code_r0x080028f0;
                            *(iVar10 + 0xd8) = *(iVar10 + 0xd8) + 0x20;
                            *(iVar10 + 200) = *(iVar10 + 200) + 0x20;
                            puVar11 = skb_put(iVar10,0x14);
                            *(puVar11 + 3) = 0;
                            *puVar11 = 0xd;
                            puVar11[2] = uVar6;
                            if (puVar11 == NULL) {
                                uVar12 = 0;
                            }
                            else {
                                uVar12 = uVar2;
                                if (0xffff < uVar2) {
                                    do {
                                        uVar12 = (uVar12 >> 0x10) + (uVar12 & 0xffff);
                                    } while (uVar12 >> 0x10 != 0);
                                }
                                uVar12 = uVar12 ^ 0xffff;
                            }
                            puVar11[1] = uVar12;
                            param_6 = &uStack_78;
                            param_7 = &uStack_88;
                            uStack_78 = CONCAT44(*(arg1 + 0x3c),uStack_78);
                            uStack_88 = CONCAT44(*(pcVar15 + -0x6c),uStack_88);
                            sym.qrtr_node_enqueue(arg1_00,iVar10,0xd,param_6);
                        }
                        else if (((arg1_00 != NULL) && (arg1 != arg1_00)) && (*(pcVar15 + -0x6c) != -1)) {
                            iVar5 = *(pcVar15 + -0x68) - *(arg1 + 0x40);
                            iVar7 = -iVar5;
                            if (-1 < iVar5) {
                                iVar7 = iVar5;
                            }
                            if (1 < iVar7) goto code_r0x0800286c;
                        }
                        pcVar15 = *pcVar15;
                    } while (pcVar15 != obj.qrtr_all_epts);
                }
                up_read(obj.qrtr_epts_lock);
code_r0x080028f0:
                uVar8 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
            }
            iVar10 = ~uStack_c8 + iStack_c0;
            do {
                uVar13 = uStack_c8 + 1;
                if (iVar10 < 1) goto code_r0x08002708;
                piVar9 = piVar9 + 1;
                iVar10 = iVar10 + -1;
                uStack_c8 = uVar13;
            } while (*piVar9 == 0);
        } while (piVar9 != NULL);
        goto code_r0x08002708;
    }
    _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar8);
    mutex_lock(arg1 + 0x60);
    uStack_c8 = 0;
    iStack_c0 = 0;
code_r0x08002968:
    piVar9 = radix_tree_next_chunk(arg1 + 0x50,&uStack_c8,0);
    if (piVar9 != NULL) {
        do {
            param_6 = NULL;
            __wake_up(*piVar9,1,0);
            iVar10 = ~uStack_c8 + iStack_c0;
            do {
                uVar13 = uStack_c8 + 1;
                if (iVar10 < 1) goto code_r0x08002968;
                piVar9 = piVar9 + 1;
                iVar10 = iVar10 + -1;
                uStack_c8 = uVar13;
            } while (*piVar9 == 0);
        } while (piVar9 != NULL);
        goto code_r0x08002968;
    }
    mutex_unlock(arg1 + 0x60);
    uVar8 = sym.qrtr_node_release(arg1);
    *(param_3 + 8) = 0;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qrtr_local_enqueue;
    iVar14 = *(extraout_x1 + 0x18);
    iVar10 = sym.qrtr_port_lookup(*(param_7 + 1));
    if (iVar10 == 0) {
        if (*(param_7 + 1) != -2) goto code_r0x08002b7c;
    }
    else {
        if (iVar10 == *(extraout_x1 + 0x18)) {
            piVar1 = iVar10 + 0x80;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar7 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar7 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(iVar10);
            }
            else if (iVar7 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
code_r0x08002b7c:
            kfree_skb(extraout_x1);
            return 0xffffffed;
        }
        if ((iVar14 == 0) || (*(iVar14 + 0x248) != 0x66)) {
            *(extraout_x1 + 0x28) = *(param_6 + 4);
            *(extraout_x1 + 0x2c) = *(param_6 + 1);
            iVar7 = sock_queue_rcv_skb(iVar10,extraout_x1);
            piVar1 = iVar10 + 0x80;
            if (iVar7 != 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar7 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = iVar7 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (iVar7 == 1) {
                    DataMemoryBarrier(2,1);
                    sk_free(iVar10);
                }
                else if (iVar7 < 1) {
                    refcount_warn_saturate(piVar1,3);
                }
                kfree_skb(extraout_x1);
                return 0xffffffe4;
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar7 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar7 != 1) {
                if (0 < iVar7) {
                    return 0;
                }
                refcount_warn_saturate(piVar1,3);
                return 0;
            }
            DataMemoryBarrier(2,1);
            sk_free(iVar10);
            return 0;
        }
        *(iVar14 + 0x248) = 0x66;
        sk_error_report(iVar14);
        piVar1 = iVar10 + 0x80;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar7 == 1) {
            DataMemoryBarrier(2,1);
            sk_free(iVar10);
        }
        else if (iVar7 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    kfree_skb(extraout_x1);
    return 0;
}


// ===== sym.qrtr_peek_pkt_size.cfi_jt @ 0x08001500 (size 8) =====

int sym.qrtr_peek_pkt_size.cfi_jt(char *param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_1 == '\x01') {
        iVar1 = 0x20;
        iVar2 = 0x14;
    }
    else {
        if (*param_1 != '\x03') {
            _printk(0x8000a93);
            return -0x16;
        }
        iVar2 = 4;
        iVar1 = param_1[3] + 0x10;
    }
    return (*(param_1 + iVar2) + 3U & 0xfffffffc) + iVar1;
}


// ===== sym.qrtr_getname.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001508 (size 8) =====

uint sym.qrtr_getname.391ff6e3657b129d182c5f998852fdf4.cfi_jt(int64_t param_1,ushort *param_2,uint32_t *param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ushort uVar3;
    bool bVar4;
    int iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *extraout_x8;
    ulong *puVar9;
    ulong uVar10;
    int64_t *piVar11;
    uint32_t *extraout_x9;
    uint32_t extraout_w10;
    uint32_t uVar12;
    uint32_t *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar14;
    uint uVar15;
    ulong unaff_x30;
    uchar auVar16 [12];
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    iVar14 = *(param_1 + 0x18);
    puVar6 = param_3;
    lock_sock_nested(iVar14,0);
    if (param_3 == 0) {
        iVar8 = 0x36a;
code_r0x080042f8:
        uVar10 = *(iVar14 + iVar8);
        uVar3 = *(iVar14 + iVar8 + 1);
        release_sock(iVar14);
        uVar15 = 0xc;
        *param_2 = 0x2a;
        *(param_2 + 1) = uVar10;
        param_2[5] = uVar3;
    }
    else {
        if (*(iVar14 + 0x12) == '\x01') {
            iVar8 = 0x376;
            goto code_r0x080042f8;
        }
        release_sock(iVar14);
        uVar15 = 0xffffff95;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iVar7) {
        return uVar15;
    }
    auVar16 = __stack_chk_fail(uVar15);
    iVar5 = auVar16._8_4_;
    *extraout_x18 = sym.qrtr_ioctl;
    pcStack_78 = sym.qrtr_ioctl;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar16._0_8_ + 0x18);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    lock_sock_nested(iVar7,0);
    uVar12 = iVar5 - 0x890b;
    if (uVar12 < 0x12) {
        uVar15 = 0xffffffea;
        if ((1 << (uVar12 & 0x1f) & 0x3f803U) != 0) goto code_r0x080043f0;
        if (uVar12 == 10) {
            iVar5 = get_user_ifreq(&uStack_b0,0,puVar6);
            uVar15 = 0xfffffff2;
            if (iVar5 == 0) {
                uStack_a0 = *(iVar7 + 0x368);
                uStack_98 = CONCAT44(uStack_98._4_4_,*(iVar7 + 0x370));
                iVar5 = put_user_ifreq(&uStack_b0,puVar6);
                uVar15 = 0;
                if (iVar5 != 0) {
                    uVar15 = 0xfffffff2;
                }
            }
            goto code_r0x080043f0;
        }
    }
    if (iVar5 == 0x541b) {
        uVar12 = 0;
        piVar11 = *(iVar7 + 0xd0);
        if ((piVar11 != iVar7 + 0xd0) && (piVar11 != NULL)) {
            uVar12 = *(piVar11 + 0xe);
        }
        puVar9 = sp_el0;
        if (((*(puVar9 + 0x3e) >> 5 & 1) != 0) || (puVar13 = puVar6, (*puVar9 >> 0x1a & 1) != 0)) {
            puVar13 = puVar6 & (puVar6 << 8) >> 8;
        }
        uVar15 = 0xfffffff2;
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar2 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar2) && !CARRY8(puVar13 + ~uVar2,bVar4) || puVar13 == uVar2 + !bVar4) {
            if ((puVar6 & (puVar6 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar6 = NULL;
            }
            if ((_sock_no_accept >> 0x18 & 1) == 0) {
                uVar2 = daif;
                if ((uVar2 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar9[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar9[1];
                InstructionSynchronizationBarrier();
                daif = uVar2;
            }
            uVar15 = 0;
            *puVar6 = uVar12;
            if ((_sock_no_accept >> 0x18 & 1) == 0) {
                uVar2 = daif;
                if ((uVar2 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar2;
            }
        }
    }
    else if (iVar5 == 0x5411) {
        puVar9 = sp_el0;
        uVar2 = (puVar6 << 8) >> 8;
        if (((*(puVar9 + 0x3e) >> 5 & 1) != 0) || (puVar13 = puVar6, (*puVar9 >> 0x1a & 1) != 0)) {
            puVar13 = puVar6 & uVar2;
        }
        uVar15 = 0xfffffff2;
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar1 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar1) && !CARRY8(puVar13 + ~uVar1,bVar4) || puVar13 == uVar1 + !bVar4) {
            uVar12 = (*(iVar7 + 0x14c) - *(iVar7 + 0x154)) + 1;
            if ((puVar6 & uVar2 & 0xffffff8000000000) != 0) {
                puVar6 = NULL;
            }
            uVar12 = uVar12 & (uVar12 >> 0x1f ^ 0xffffffffU);
            goto code_r0x080046ac;
        }
    }
    else {
        uVar15 = 0xfffffdfd;
    }
code_r0x080043f0:
    while( true ) {
        release_sock(iVar7);
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_88) break;
        __stack_chk_fail();
        puVar9 = extraout_x8;
        puVar6 = extraout_x9;
        uVar12 = extraout_w10;
code_r0x080046ac:
        if ((_sock_no_accept >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar9[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar9[1];
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        uVar15 = 0;
        *puVar6 = uVar12;
        if ((_sock_no_accept >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
    }
    return uVar15;
}


// ===== sym.qrtr_bind.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001510 (size 8) =====

int sym.qrtr_bind.391ff6e3657b129d182c5f998852fdf4.cfi_jt(int64_t param_1,int16_t *param_2,uint32_t param_3)

{
    int iVar1;
    uint *arg1;
    int16_t *piVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t arg1_00;
    uint32_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    if ((0xb < param_3) && (*param_2 == 0x2a)) {
        iVar4 = *(param_1 + 0x18);
        if (*(param_2 + 2) == *(iVar4 + 0x36c)) {
            lock_sock_nested(iVar4,0);
            arg1_00 = *(param_1 + 0x18);
            uVar5 = *(iVar4 + 0x60);
            if (((uVar5 >> 8 & 1) == 0) && (*(param_2 + 4) == *(arg1_00 + 0x370))) {
                iVar1 = 0;
            }
            else {
                uVar3 = _raw_spin_lock_irqsave(obj.qrtr_port_lock);
                iStack_4c = *(param_2 + 4);
                iVar1 = sym.qrtr_port_assign(arg1_00,&iStack_4c);
                if (iVar1 == 0) {
                    if (iStack_4c == -2) {
                        sym.qrtr_reset_ports();
                    }
                    _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar3);
                    if ((uVar5 >> 8 & 1) == 0) {
                        sym.qrtr_port_remove(arg1_00);
                    }
                    iVar1 = 0;
                    *(arg1_00 + 0x370) = iStack_4c;
                    *(arg1_00 + 0x60) = *(arg1_00 + 0x60) & 0xfffffffffffffeff;
                }
                else {
                    _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar3);
                }
            }
            release_sock(iVar4);
            goto code_r0x08004118;
        }
    }
    iVar1 = -0x16;
code_r0x08004118:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return iVar1;
    }
    auVar6 = __stack_chk_fail();
    piVar2 = auVar6._8_8_;
    arg1 = auVar6._0_8_;
    *extraout_x18 = sym.qrtr_connect;
    if ((param_3 < 0xc) || (*piVar2 != 0x2a)) {
        iVar1 = -0x16;
    }
    else {
        iVar4 = *(arg1 + 6);
        lock_sock_nested(iVar4,0);
        *(iVar4 + 0x12) = 7;
        *arg1 = 1;
        iVar1 = sym.qrtr_autobind(arg1);
        if (iVar1 == 0) {
            uVar3 = *piVar2;
            *(iVar4 + 0x37c) = *(piVar2 + 4);
            *(iVar4 + 0x374) = uVar3;
            *arg1 = 3;
            *(iVar4 + 0x12) = 1;
        }
        release_sock(iVar4);
    }
    return iVar1;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08001518 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t *piVar5;
    int *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t extraout_x8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t *unaff_x24;
    int64_t *piVar10;
    int64_t *unaff_x27;
    int64_t *unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uVar4 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
    uStack_88 = 0;
    iStack_80 = 0;
code_r0x08003bcc:
    do {
        piVar5 = radix_tree_next_chunk(obj.qrtr_nodes,&uStack_88,0);
        if (piVar5 == NULL) {
            _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar4);
            uVar7 = __list_del_entry_valid(param_1 + 0x70);
            if ((uVar7 & 1) != 0) {
                iVar9 = *(param_1 + 0x70);
                piVar5 = *(param_1 + 0x78);
                *(iVar9 + 8) = piVar5;
                *piVar5 = iVar9;
            }
            *(param_1 + 0x70) = 0xdead000000000100;
            *(param_1 + 0x78) = 0xdead000000000122;
            up_write(obj.qrtr_epts_lock);
            kthread_flush_worker(param_1 + 0x80);
            kthread_stop(*(param_1 + 0xb8));
            skb_queue_purge(param_1 + 0x58);
            wakeup_source_unregister(*(param_1 + 0x110));
            xa_destroy(param_1 + 0x120);
            mutex_lock(param_1 + 0x28);
            uStack_88 = 0;
            iStack_80 = 0;
            iVar9 = 0;
code_r0x08003cd0:
            do {
                piVar5 = radix_tree_next_chunk(param_1 + 0x18,&uStack_88,0);
                if (piVar5 == NULL) {
                    mutex_unlock(param_1 + 0x28);
                    kfree(param_1 + -0x38);
                    iVar8 = sp_el0;
                    if (*(iVar8 + 0x5e0) == iStack_68) {
                        return;
                    }
                    piVar6 = __stack_chk_fail();
                    iVar8 = extraout_x8;
                    piVar10 = unaff_x24;
                    unaff_x24 = unaff_x28;
                    goto code_r0x08003e1c;
                }
                do {
                    iVar9 = *piVar5;
                    unaff_x27 = iVar9 + 0x20;
                    unaff_x28 = *unaff_x27;
                    if (unaff_x28 != unaff_x27) {
                        do {
                            unaff_x24 = *unaff_x28;
                            uVar7 = __list_del_entry_valid(unaff_x28);
                            if ((uVar7 & 1) != 0) {
                                iVar8 = *unaff_x28;
                                piVar10 = unaff_x28[1];
                                *(iVar8 + 8) = piVar10;
                                *piVar10 = iVar8;
                            }
                            iVar8 = unaff_x28[2];
                            piVar6 = iVar8 + 0x80;
                            *unaff_x28 = -0x2152ffffffffff00;
                            unaff_x28[1] = -0x2152fffffffffede;
                            piVar10 = unaff_x28;
code_r0x08003e1c:
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
                            if (iVar1 == 1) {
                                DataMemoryBarrier(2,1);
                                sk_free(iVar8);
                            }
                            else if (iVar1 < 1) {
                                refcount_warn_saturate(piVar6,3);
                            }
                            kfree(piVar10);
                            unaff_x28 = unaff_x24;
                        } while (unaff_x24 != unaff_x27);
                    }
                    radix_tree_iter_delete(param_1 + 0x18,&uStack_88,piVar5);
                    kfree(iVar9);
                    iVar8 = ~uStack_88 + iStack_80;
                    do {
                        uVar7 = uStack_88 + 1;
                        if (iVar8 < 1) goto code_r0x08003cd0;
                        piVar5 = piVar5 + 1;
                        iVar8 = iVar8 + -1;
                        uStack_88 = uVar7;
                    } while (*piVar5 == 0);
                } while (piVar5 != NULL);
            } while( true );
        }
        do {
            if (*piVar5 == param_1 + -0x38) {
                radix_tree_iter_delete(obj.qrtr_nodes,&uStack_88,piVar5);
            }
            iVar9 = ~uStack_88 + iStack_80;
            do {
                uVar7 = uStack_88 + 1;
                if (iVar9 < 1) goto code_r0x08003bcc;
                piVar5 = piVar5 + 1;
                iVar9 = iVar9 + -1;
                uStack_88 = uVar7;
            } while (*piVar5 == 0);
        } while (piVar5 != NULL);
    } while( true );
}


// ===== sym.qrtr_release.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001520 (size 8) =====

ulong sym.qrtr_release.391ff6e3657b129d182c5f998852fdf4.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    code *pcVar6;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x18);
    if (arg1 != 0) {
        lock_sock_nested(arg1,0);
        if (*(arg1 + 0x370) == -2) {
            down_write(obj.qrtr_epts_lock);
            for (pcVar6 = _obj.qrtr_all_epts; pcVar6 != obj.qrtr_all_epts; pcVar6 = *pcVar6) {
                *(pcVar6 + -100) = 0;
                *(pcVar6 + -0x60) = 0;
            }
            up_write(obj.qrtr_epts_lock);
        }
        *(arg1 + 0x290) = 3;
        uVar5 = *(arg1 + 0x60);
        if ((uVar5 & 1) == 0) {
            pcVar6 = *(arg1 + 0x2d0);
            __cfi_slowpath_diag(0x644e8cc6b20381ce,pcVar6,0x8000800);
            (*pcVar6)(arg1);
            uVar5 = *(arg1 + 0x60);
        }
        *(arg1 + 0x60) = uVar5 | 1;
        _raw_write_lock_bh(arg1 + 0x240);
        *(arg1 + 0x2a0) = 0;
        *(arg1 + 0x118) = 0;
        *(arg1 + 0x60) = *(arg1 + 0x60) | 1;
        _raw_write_unlock_bh(arg1 + 0x240);
        *(param_1 + 0x18) = 0;
        if ((*(arg1 + 0x60) >> 8 & 1) == 0) {
            sym.qrtr_port_remove(arg1);
        }
        skb_queue_purge(arg1 + 0xd0);
        release_sock(arg1);
        piVar1 = arg1 + 0x80;
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
            sk_free(arg1);
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return 0;
}


// ===== sym.sock_no_socketpair.cfi_jt @ 0x08001528 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sock_no_socketpair.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qrtr_ioctl.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001530 (size 8) =====

uint sym.qrtr_ioctl.391ff6e3657b129d182c5f998852fdf4.cfi_jt(int64_t param_1,int param_2,uint32_t *param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    bool bVar4;
    int iVar5;
    ulong *extraout_x8;
    ulong *puVar6;
    int64_t *piVar7;
    uint32_t *extraout_x9;
    uint32_t extraout_w10;
    uint32_t uVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    int64_t iVar10;
    uint uVar11;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(param_1 + 0x18);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    lock_sock_nested(iVar10,0);
    uVar8 = param_2 - 0x890b;
    if (uVar8 < 0x12) {
        uVar11 = 0xffffffea;
        if ((1 << (uVar8 & 0x1f) & 0x3f803U) != 0) goto code_r0x080043f0;
        if (uVar8 == 10) {
            iVar5 = get_user_ifreq(&uStack_60,0,param_3);
            uVar11 = 0xfffffff2;
            if (iVar5 == 0) {
                uStack_50 = *(iVar10 + 0x368);
                uStack_48 = CONCAT44(uStack_48._4_4_,*(iVar10 + 0x370));
                iVar5 = put_user_ifreq(&uStack_60,param_3);
                uVar11 = 0;
                if (iVar5 != 0) {
                    uVar11 = 0xfffffff2;
                }
            }
            goto code_r0x080043f0;
        }
    }
    if (param_2 == 0x541b) {
        uVar8 = 0;
        piVar7 = *(iVar10 + 0xd0);
        if ((piVar7 != iVar10 + 0xd0) && (piVar7 != NULL)) {
            uVar8 = *(piVar7 + 0xe);
        }
        puVar6 = sp_el0;
        if (((*(puVar6 + 0x3e) >> 5 & 1) != 0) || (puVar9 = param_3, (*puVar6 >> 0x1a & 1) != 0)) {
            puVar9 = param_3 & (param_3 << 8) >> 8;
        }
        uVar11 = 0xfffffff2;
        bVar4 = 0xfffffffffffffffb < puVar9;
        puVar9 = puVar9 + 1;
        uVar2 = 0;
        if (!bVar4 || puVar9 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar9 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar9,~uVar2) && !CARRY8(puVar9 + ~uVar2,bVar4) || puVar9 == uVar2 + !bVar4) {
            if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                param_3 = NULL;
            }
            if ((_sock_no_accept >> 0x18 & 1) == 0) {
                uVar2 = daif;
                if ((uVar2 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar6[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar6[1];
                InstructionSynchronizationBarrier();
                daif = uVar2;
            }
            uVar11 = 0;
            *param_3 = uVar8;
            if ((_sock_no_accept >> 0x18 & 1) == 0) {
                uVar2 = daif;
                if ((uVar2 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar2;
            }
        }
    }
    else if (param_2 == 0x5411) {
        puVar6 = sp_el0;
        uVar2 = (param_3 << 8) >> 8;
        if (((*(puVar6 + 0x3e) >> 5 & 1) != 0) || (puVar9 = param_3, (*puVar6 >> 0x1a & 1) != 0)) {
            puVar9 = param_3 & uVar2;
        }
        uVar11 = 0xfffffff2;
        bVar4 = 0xfffffffffffffffb < puVar9;
        puVar9 = puVar9 + 1;
        uVar1 = 0;
        if (!bVar4 || puVar9 == NULL) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar9 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar9,~uVar1) && !CARRY8(puVar9 + ~uVar1,bVar4) || puVar9 == uVar1 + !bVar4) {
            uVar8 = (*(iVar10 + 0x14c) - *(iVar10 + 0x154)) + 1;
            if ((param_3 & uVar2 & 0xffffff8000000000) != 0) {
                param_3 = NULL;
            }
            uVar8 = uVar8 & (uVar8 >> 0x1f ^ 0xffffffffU);
            goto code_r0x080046ac;
        }
    }
    else {
        uVar11 = 0xfffffdfd;
    }
code_r0x080043f0:
    while( true ) {
        release_sock(iVar10);
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        puVar6 = extraout_x8;
        param_3 = extraout_x9;
        uVar8 = extraout_w10;
code_r0x080046ac:
        if ((_sock_no_accept >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar6[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar6[1];
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        uVar11 = 0;
        *param_3 = uVar8;
        if ((_sock_no_accept >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
    }
    return uVar11;
}


// ===== sym.qrtr_create.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001538 (size 8) =====

ulong sym.qrtr_create.391ff6e3657b129d182c5f998852fdf4.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,uint param_4)

{
    uint uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 4) == 2) {
        iVar2 = sk_alloc(param_1,0x2a,0xcc0,obj.qrtr_proto,param_4);
        if (iVar2 == 0) {
            uVar3 = 0xfffffff4;
        }
        else {
            *(iVar2 + 0x60) = *(iVar2 + 0x60) | 0x100;
            sock_init_data(param_2,iVar2);
            uVar1 = _segment.ehdr;
            uVar3 = 0;
            *(param_2 + 0x20) = obj.qrtr_proto_ops;
            *(iVar2 + 0x368) = 0x2a;
            *(iVar2 + 0x370) = 0;
            *(iVar2 + 0x36c) = uVar1;
            *(iVar2 + 0x380) = 0xffffffff;
        }
    }
    else {
        uVar3 = 0xffffffa5;
    }
    return uVar3;
}


// ===== sym.qrtr_print_wakeup_reason.cfi_jt @ 0x08001540 (size 8) =====

char * sym.qrtr_print_wakeup_reason.cfi_jt(char *param_1)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_60 = 0;
    if (*param_1 == '\x03') {
        iVar5 = param_1[3] + 0x10;
        uVar6 = *(param_1 + 8);
        uVar7 = 0xfffffffe;
        if (*(param_1 + 10) != 0xfffe) {
            uVar7 = *(param_1 + 10);
        }
        uVar8 = *(param_1 + 0xc);
        uVar9 = 0xfffffffe;
        if (*(param_1 + 0xe) != 0xfffe) {
            uVar9 = *(param_1 + 0xe);
        }
        iVar4 = 4;
    }
    else {
        if (*param_1 != '\x01') goto code_r0x08001604;
        uVar6 = *(param_1 + 8);
        uVar7 = *(param_1 + 0xc);
        uVar8 = *(param_1 + 0x18);
        uVar9 = *(param_1 + 0x1c);
        iVar5 = 0x20;
        iVar4 = 0x14;
    }
    uVar1 = *(param_1 + iVar4);
    iVar2 = qrtr_get_service_id(uVar6,uVar7);
    if (iVar2 < 0) {
        iVar2 = qrtr_get_service_id(uVar8,uVar9);
    }
    if (7 < uVar1) {
        uVar1 = 8;
    }
    memcpy(&uStack_60,param_1 + iVar5,uVar1);
    param_1 = _printk(0x80009f4,"qrtr_print_wakeup_reason",uVar6,uVar7,uVar8,uVar9,uStack_60 & 0xffffffff,
                      uStack_60._4_4_,iVar2);
code_r0x08001604:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return param_1;
    }
    pcVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_peek_pkt_size;
    if (*pcVar3 == '\x01') {
        iVar2 = 0x20;
        iVar5 = 0x14;
    }
    else {
        if (*pcVar3 != '\x03') {
            _printk(0x8000a93);
            return 0xffffffea;
        }
        iVar5 = 4;
        iVar2 = pcVar3[3] + 0x10;
    }
    return (*(pcVar3 + iVar5) + 3U & 0xfffffffc) + iVar2;
}


// ===== sym.sock_no_sendpage.cfi_jt @ 0x08001548 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sock_no_sendpage.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sock_no_mmap.cfi_jt @ 0x08001550 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sock_no_mmap.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sock_no_accept.cfi_jt @ 0x08001558 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sock_no_accept.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qrtr_node_rx_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001560 (size 8) =====

void sym.qrtr_node_rx_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t arg2;
    ulong uVar7;
    code *pcVar8;
    int extraout_w11;
    ulong *in_x18;
    code *arg1;
    code *unaff_x22;
    code *unaff_x23;
    code *unaff_x25;
    code *pcVar9;
    code *unaff_x27;
    uint unaff_w28;
    ulong unaff_x30;
    int *piStack_b0;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    arg1 = param_1 + -0xf8;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (*(param_1 + 0x58) == 0) {
        snprintf(&uStack_88,0x20,"qrtr_%d",*(param_1 + -0xbc));
        uVar7 = ipc_log_context_create(100,&uStack_88,0);
        *(param_1 + 0x58) = uVar7;
    }
    iVar6 = skb_dequeue(param_1 + -0x68);
    if (iVar6 == 0) goto code_r0x080023cc;
    piStack_b0 = param_1 + -0xb0;
    unaff_x27 = segment.ehdr;
    unaff_w28 = 0x2a;
    unaff_x23 = obj.qrtr_epts_lock;
    unaff_x22 = obj.qrtr_all_epts;
    pcVar8 = unaff_x25;
    do {
        cVar2 = '\x01';
        if (*(iVar6 + 0x38) == '\x01') {
code_r0x08002290:
            uVar1 = *(iVar6 + 0x30);
            if (uVar1 == *unaff_x27 || cVar2 != '\x01') {
                unaff_x25 = sym.qrtr_port_lookup(*(iVar6 + 0x34));
                if (unaff_x25 != NULL) break;
            }
            else {
code_r0x080022d8:
                uStack_94 = *(iVar6 + 0x28);
                uStack_90 = *(iVar6 + 0x2c);
                uStack_98 = unaff_w28;
                unaff_x25 = sym.qrtr_node_lookup(uVar1);
                if (unaff_x25 != NULL) {
                    sym.qrtr_node_enqueue(unaff_x25,iVar6,*(iVar6 + 0x38),&uStack_98);
                    sym.qrtr_node_release(unaff_x25);
                    goto code_r0x08002190;
                }
            }
            unaff_x25 = pcVar8;
            kfree_skb(iVar6);
        }
        else {
            down_read(unaff_x23);
            for (pcVar9 = *unaff_x22; pcVar9 != unaff_x22; pcVar9 = *pcVar9) {
                pcVar8 = pcVar9 + -0xa8;
                if (arg1 == NULL) {
code_r0x0800221c:
                    uStack_98 = unaff_w28;
                    arg2 = skb_clone(iVar6,0xcc0);
                    if (arg2 == 0) break;
                    uStack_94 = *(iVar6 + 0x28);
                    uStack_90 = *(iVar6 + 0x2c);
                    sym.qrtr_node_enqueue(pcVar8,arg2,*(iVar6 + 0x38),&uStack_98);
                }
                else {
                    uStack_98 = unaff_w28;
                    if ((((pcVar8 != NULL) && (*(iVar6 + 0x38) != '\x02')) && (*(iVar6 + 0x38) != '\a')) &&
                       ((pcVar8 != arg1 && (*(pcVar9 + -0x6c) != -1)))) {
                        iVar4 = *(pcVar9 + -0x68) - *(param_1 + -0xb8);
                        iVar5 = -iVar4;
                        if (-1 < iVar4) {
                            iVar5 = iVar4;
                        }
                        if (1 < iVar5) goto code_r0x0800221c;
                    }
                }
            }
            up_read(unaff_x23);
            cVar2 = *(iVar6 + 0x38);
            if (cVar2 != '\a') goto code_r0x08002290;
            uVar1 = *(iVar6 + 0x30);
            if (uVar1 != *unaff_x27) goto code_r0x080022d8;
            sym.qrtr_tx_resume(arg1,iVar6);
            unaff_x25 = pcVar8;
        }
code_r0x08002190:
        while (iVar6 = skb_dequeue(param_1 + -0x68), pcVar8 = unaff_x25, iVar6 == 0) {
code_r0x080023cc:
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_68) {
                return;
            }
            pcVar8 = __stack_chk_fail();
            iVar5 = extraout_w11;
code_r0x08002440:
            Hint_Prefetch(pcVar8,2,0,1);
            do {
                iVar4 = *pcVar8;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(pcVar8,0x10);
                if (bVar3) {
                    *pcVar8 = iVar4 - iVar5;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar4 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(unaff_x25);
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(pcVar8,3);
            }
        }
    } while( true );
    if (*(iVar6 + 0x38) == '\x02') {
        if (*piStack_b0 == 0) {
            Hint_Prefetch(piStack_b0,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piStack_b0,0x10);
                if (bVar3) {
                    *piStack_b0 = *piStack_b0 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            goto code_r0x08002334;
        }
    }
    else {
code_r0x08002334:
        iVar5 = sock_queue_rcv_skb(unaff_x25,iVar6);
        if (iVar5 == 0) goto code_r0x08002344;
        _printk(0x8000840,"qrtr_sock_queue_skb",*(iVar6 + 0x39),iVar5);
    }
    kfree_skb(iVar6);
code_r0x08002344:
    pcVar8 = unaff_x25 + 0x80;
    iVar5 = 1;
    goto code_r0x08002440;
}


// ===== sym.qrtr_hello_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001568 (size 8) =====

void sym.qrtr_hello_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt(int64_t param_1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint *puVar5;
    int *piVar6;
    int iVar7;
    int iVar8;
    int extraout_w9;
    ulong *in_x18;
    int64_t unaff_x19;
    ulong unaff_x30;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = *0x8000db8;
    uStack_40 = *0x8000dc0;
    iVar3 = sym.qrtr_port_lookup(0xfffffffe);
    if (iVar3 == 0) goto code_r0x080025d4;
    iVar4 = __alloc_skb(0x34,0xcc0,0,0xffffffff);
    if (iVar4 == 0) {
        piVar6 = iVar3 + 0x80;
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar7 = *piVar6;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
                *piVar6 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar7 != 1) goto code_r0x080025cc;
        DataMemoryBarrier(2,1);
        do {
            sk_free(iVar3);
            unaff_x19 = iVar3;
code_r0x080025d4:
            while( true ) {
                iVar3 = unaff_x19;
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) == iStack_38) {
                    return;
                }
                piVar6 = __stack_chk_fail();
                iVar8 = extraout_w9;
code_r0x08002614:
                Hint_Prefetch(piVar6,2,0,1);
                do {
                    iVar7 = *piVar6;
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar2) {
                        *piVar6 = iVar7 - iVar8;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                if (iVar7 == 1) break;
code_r0x080025cc:
                unaff_x19 = iVar3;
                if (iVar7 < 1) {
                    refcount_warn_saturate(piVar6,3);
                }
            }
            DataMemoryBarrier(2,1);
        } while( true );
    }
    *(iVar4 + 0xd8) = *(iVar4 + 0xd8) + 0x20;
    *(iVar4 + 200) = *(iVar4 + 200) + 0x20;
    puVar5 = skb_put(iVar4,0x14);
    *(puVar5 + 1) = 0;
    *(puVar5 + 3) = 0;
    *puVar5 = 2;
    uStack_48 = CONCAT44(_segment.ehdr,uStack_48);
    sym.qrtr_node_enqueue(param_1 + -0x120,iVar4,2,&uStack_48);
    piVar6 = iVar3 + 0x80;
    iVar8 = 1;
    goto code_r0x08002614;
}


// ===== sym.qrtr_recvmsg.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001570 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.qrtr_recvmsg.391ff6e3657b129d182c5f998852fdf4.cfi_jt
               (uchar param_1 [16],uchar param_2 [16],int64_t param_3,ulong *param_4,uint64_t param_5,
               uint32_t param_6)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint *puVar9;
    int64_t arg1;
    int64_t arg2;
    ulong uVar10;
    int *piVar11;
    ulong noname_0;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *puVar14;
    ulong unaff_x30;
    int aiStack_6c [3];
    uint uStack_60;
    uint uStack_58;
    uint32_t uStack_54;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    iVar12 = *(param_3 + 0x18);
    aiStack_6c[0] = 0;
    puVar14 = *param_4;
    if ((*(iVar12 + 0x60) >> 8 & 1) == 0) {
        iVar6 = skb_recv_datagram(iVar12,param_6 & 0xffffffbf,param_6 & 0x40,aiStack_6c);
        iVar5 = aiStack_6c[0];
        if (iVar6 != 0) {
            lock_sock_nested(iVar12,0);
            uVar13 = *(iVar6 + 0x70);
            if (param_5 < uVar13) {
                uVar13 = param_5 & 0xffffffff;
                *(param_4 + 10) = *(param_4 + 10) | 0x20;
            }
            aiStack_6c[0] = skb_copy_datagram_iter(iVar6,0,param_4 + 2,uVar13 & 0xffffffff);
            if ((-1 < aiStack_6c[0]) && (aiStack_6c[0] = uVar13, puVar14 != NULL)) {
                *puVar14 = 0;
                *(puVar14 + 1) = 0;
                *puVar14 = 0x2a;
                *(puVar14 + 4) = *(iVar6 + 0x28);
                *(puVar14 + 1) = *(iVar6 + 0x2c);
                *(param_4 + 1) = 0xc;
            }
            if (*(iVar6 + 0x39) != '\0') {
                uStack_54 = *(iVar6 + 0x28);
                uStack_50 = *(iVar6 + 0x2c);
                aiStack_6c[2] = *(iVar6 + 0x30);
                uStack_60 = *(iVar6 + 0x34);
                uStack_58 = 0x2a;
                aiStack_6c[1] = 0x2a;
                iVar7 = sym.qrtr_node_lookup(uStack_54);
                if (iVar7 != 0) {
                    iVar8 = __alloc_skb(0x34,0xcc0,0,0xffffffff);
                    if (iVar8 != 0) {
                        *(iVar8 + 0xd8) = *(iVar8 + 0xd8) + 0x20;
                        *(iVar8 + 200) = *(iVar8 + 200) + 0x20;
                        puVar9 = skb_put(iVar8,0x14);
                        *(puVar9 + 1) = 0;
                        *(puVar9 + 3) = 0;
                        *puVar9 = 7;
                        puVar9[1] = *(iVar6 + 0x30);
                        puVar9[2] = *(iVar6 + 0x34);
                        sym.qrtr_node_enqueue(iVar7,iVar8,7,aiStack_6c + 1);
                    }
                    sym.qrtr_node_release(iVar7);
                }
            }
            skb_free_datagram(iVar12,iVar6);
            release_sock(iVar12);
            iVar5 = aiStack_6c[0];
        }
    }
    else {
        iVar5 = -99;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_48) {
        iVar6 = __stack_chk_fail(iVar5);
        *extraout_x18 = sym.qrtr_port_remove;
        iVar12 = sp_el0;
        iVar7 = *(iVar12 + 0x5e0);
        iVar5 = *(iVar6 + 0x370);
        iVar12 = __alloc_skb(0x34,0xcc0,0,0xffffffff);
        if (iVar12 != 0) {
            *(iVar12 + 0xd8) = *(iVar12 + 0xd8) + 0x20;
            *(iVar12 + 200) = *(iVar12 + 200) + 0x20;
            puVar9 = skb_put(iVar12,0x14);
            *(puVar9 + 1) = 0;
            *(puVar9 + 3) = 0;
            iVar8 = iVar6 + 0x368;
            *puVar9 = 6;
            puVar9[1] = *(iVar6 + 0x36c);
            puVar9[2] = *(iVar6 + 0x370);
            skb_set_owner_w(iVar12,iVar6);
            uVar1 = *(iVar6 + 0x380);
            if (uVar1 == 0xfffffffe) {
                sym.qrtr_bcast_enqueue(noname_0,iVar12,6,iVar8);
            }
            else {
                uVar10 = noname_0;
                if ((-1 < uVar1) && (arg1 = sym.qrtr_node_lookup(uVar1), uVar10 = extraout_x8, arg1 != 0)) {
                    arg2 = skb_clone(iVar12,0xcc0);
                    if (arg2 != 0) {
                        skb_set_owner_w(arg2,iVar6);
                        sym.qrtr_node_enqueue(arg1,arg2,6,iVar8);
                    }
                    sym.qrtr_node_release(arg1);
                    uVar10 = extraout_x8_00;
                }
                sym.qrtr_local_enqueue(uVar10,iVar12,param_2,iVar8);
            }
        }
        piVar11 = iVar6 + 0x80;
        while( true ) {
            Hint_Prefetch(piVar11,2,0,1);
            do {
                iVar2 = *piVar11;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar4) {
                    *piVar11 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar11,4);
            }
            iVar2 = 0;
            if (iVar5 != -2) {
                iVar2 = iVar5;
            }
            uVar10 = _raw_spin_lock_irqsave(obj.qrtr_port_lock);
            xa_erase(obj.qrtr_ports,iVar2);
            _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar10);
            iVar12 = sp_el0;
            if (*(iVar12 + 0x5e0) == iVar7) break;
            piVar11 = __stack_chk_fail();
        }
        return;
    }
    return;
}


// ===== sym.sock_gettstamp.cfi_jt @ 0x08001578 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sock_gettstamp.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sock_no_shutdown.cfi_jt @ 0x08001580 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sock_no_shutdown.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sock_no_listen.cfi_jt @ 0x08001588 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sock_no_listen.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFiP9qrtr_nodeP7sk_buffiP13sockaddr_qrtrS4_jE_global_addr @ 0x08001590 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080033ac)

uint32_t sym.__typeid__ZTSFiP9qrtr_nodeP7sk_buffiP13sockaddr_qrtrS4_jE_global_addr
                   (int64_t param_1,int64_t param_2,uint32_t param_3,uint64_t param_4,int64_t param_5)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int64_t iVar8;
    uint32_t uVar9;
    int iVar10;
    uint *puVar11;
    ulong *in_x18;
    code *pcVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    iVar4 = *(param_2 + 0x70);
    mutex_lock();
    piVar1 = param_1 + 0x44;
    if (((param_3 == 2) || (*piVar1 != 0)) && ((param_3 != 2 || (*piVar1 == 0)))) {
        if (param_3 != 2) goto code_r0x08003060;
        if (*piVar1 != 0) goto code_r0x08003060;
        goto code_r0x080033b8;
    }
    kfree_skb(param_2);
    mutex_unlock(param_1);
    uVar9 = 0;
    do {
        while( true ) {
            iVar8 = sp_el0;
            if (*(iVar8 + 0x5e0) == iStack_68) {
                return uVar9;
            }
            __stack_chk_fail();
code_r0x080033b8:
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = *piVar1 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
code_r0x08003060:
            mutex_unlock(param_1);
            if (*(param_2 + 0x18) == 0) break;
            uVar9 = sym.qrtr_tx_wait(param_1,param_5,*(param_2 + 0x18),param_3);
            uVar13 = uVar9;
            if (-1 < uVar9) goto code_r0x08003098;
            kfree_skb(param_2);
        }
        uVar13 = *(param_2 + 0x39);
code_r0x08003098:
        puVar11 = skb_push(param_2,0x20);
        *puVar11 = 1;
        puVar11[1] = param_3;
        puVar11[2] = *(param_4 + 4);
        puVar11[3] = *(param_4 + 8);
        if (*(param_5 + 8) == -2) {
            puVar11[6] = *(param_1 + 0x3c);
            uVar5 = 0xfffffffe;
        }
        else {
            puVar11[6] = *(param_5 + 4);
            uVar5 = *(param_5 + 8);
        }
        puVar11[7] = uVar5;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        puVar11[4] = uVar13 != 0;
        puVar11[5] = iVar4;
        uStack_70 = 0;
        if ((param_2 != 0) && (puVar11 != NULL)) {
            uVar9 = puVar11[1];
            param_4 = uVar9;
            if (uVar9 == 1) {
                skb_copy_bits(param_2,0x20,&uStack_88,8);
                iVar8 = sp_el0;
                ipc_log_string(*(param_1 + 0x150),
                               "TX DATA: Len:0x%x CF:0x%x src[0x%x:0x%x] dst[0x%x:0x%x] [%08x %08x] [%s]\n",puVar11[5]
                               ,puVar11[4],puVar11[2],puVar11[3],puVar11[6],puVar11[7],uStack_88,
                               uStack_88 >> 0x20,iVar8 + 0x7a8);
            }
            else {
                skb_copy_bits(param_2,0x20,&uStack_80,0x14);
                uVar2 = uVar9 & 0xfffffffe;
                if (uVar2 == 2) {
                    ipc_log_string(*(param_1 + 0x150),"TX CTRL: cmd:0x%x node[0x%x]\n",param_4,puVar11[2]);
                    if ((puVar11[6] == 3) || (puVar11[6] == 0)) {
                        _printk(0x80009c0,param_4,puVar11[2]);
                    }
                }
                else if (uVar2 == 6) {
                    ipc_log_string(*(param_1 + 0x150),"TX CTRL: cmd:0x%x addr[0x%x:0x%x]\n",uVar9,uStack_80._4_4_,
                                   uStack_78 & 0xffffffff);
                }
                else if (uVar2 == 4) {
                    ipc_log_string(*(param_1 + 0x150),"TX CTRL: cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",param_4,
                                   uStack_80._4_4_,uStack_78 & 0xffffffff,uStack_78._4_4_,uStack_70);
                }
                else if (uVar9 == 0xd) {
                    ipc_log_string(*(param_1 + 0x150),"TX CTRL: cmd:0x%x node[0x%x]\n",0xd,uStack_78 & 0xffffffff);
                }
            }
        }
        if (*(param_2 + 0x74) == 0) {
            uVar9 = iVar4 + 0x23U & 0xfffffffc;
            iVar3 = uVar9 - *(param_2 + 0x70);
            if (uVar9 < *(param_2 + 0x70) || iVar3 == 0) goto code_r0x08003188;
            iVar10 = __skb_pad(param_2,iVar3,1);
            if (iVar10 == 0) {
                if (*(param_2 + 0x74) != 0) {
    //WARNING: Does not return
                    pcVar12 = SoftwareBreakpoint(0x800,0x80033d4);
                    (*pcVar12)();
                }
                *(param_2 + 200) = *(param_2 + 200) + iVar3;
                *(param_2 + 0x70) = *(param_2 + 0x70) + iVar3;
                goto code_r0x08003188;
            }
            uVar9 = 0xfffffff4;
            _printk(0x8000ad5,"qrtr_node_enqueue",*(param_2 + 0x70),*(param_2 + 0x70) + 3U & 0xfffffffc,0xfffffff4);
code_r0x080031e8:
            if (uVar13 != 0) {
                uVar13 = *(param_5 + 4);
                iVar3 = *(param_5 + 8);
                param_2 = param_1 + 0x60;
                mutex_lock(param_2);
                param_5 = radix_tree_lookup(param_1 + 0x50,iVar3 | uVar13 << 0x20);
                mutex_unlock(param_2);
                if (param_5 != 0) {
                    param_2 = param_5 + 0x30;
                    _raw_spin_lock_irq(param_2);
                    *(param_5 + 0x1c) = 1;
                    _raw_spin_unlock_irq(param_2);
                }
            }
        }
        else {
            sym.qrtr_pad_word_pskb(param_2);
code_r0x08003188:
            mutex_lock(param_1);
            if (*(param_1 + 0x30) == NULL) {
                kfree_skb(param_2);
                uVar9 = 0xffffffed;
            }
            else {
                pcVar12 = **(param_1 + 0x30);
                __cfi_slowpath_diag(0x27a79143e48b18f9,pcVar12,0x80007e0);
                uVar9 = (*pcVar12)(*(param_1 + 0x30),param_2);
            }
            mutex_unlock(param_1);
            if (uVar9 != 0) goto code_r0x080031e8;
        }
        if ((param_3 == 2) && (uVar9 != 0)) {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = *piVar1 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            kthread_queue_work(param_1 + 0xb8,param_1 + 0x120);
        }
    } while( true );
}


// ===== sym.qrtr_local_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x08001598 (size 8) =====

ulong sym.qrtr_local_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,int64_t param_4,int64_t param_5)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_2 + 0x18);
    iVar5 = sym.qrtr_port_lookup(*(param_5 + 8));
    if (iVar5 == 0) {
        if (*(param_5 + 8) != -2) goto code_r0x08002b7c;
    }
    else {
        if (iVar5 == *(param_2 + 0x18)) {
            piVar1 = iVar5 + 0x80;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar4 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(iVar5);
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
code_r0x08002b7c:
            kfree_skb(param_2);
            return 0xffffffed;
        }
        if ((iVar6 == 0) || (*(iVar6 + 0x248) != 0x66)) {
            *(param_2 + 0x28) = *(param_4 + 4);
            *(param_2 + 0x2c) = *(param_4 + 8);
            iVar4 = sock_queue_rcv_skb(iVar5,param_2);
            piVar1 = iVar5 + 0x80;
            if (iVar4 != 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar4 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = iVar4 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (iVar4 == 1) {
                    DataMemoryBarrier(2,1);
                    sk_free(iVar5);
                }
                else if (iVar4 < 1) {
                    refcount_warn_saturate(piVar1,3);
                }
                kfree_skb(param_2);
                return 0xffffffe4;
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar4 != 1) {
                if (0 < iVar4) {
                    return 0;
                }
                refcount_warn_saturate(piVar1,3);
                return 0;
            }
            DataMemoryBarrier(2,1);
            sk_free(iVar5);
            return 0;
        }
        *(iVar6 + 0x248) = 0x66;
        sk_error_report(iVar6);
        piVar1 = iVar5 + 0x80;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sk_free(iVar5);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    kfree_skb(param_2);
    return 0;
}


// ===== sym.qrtr_bcast_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt @ 0x080015a0 (size 8) =====

ulong sym.qrtr_bcast_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt
                (uchar param_1 [16],uchar param_2 [16],ulong param_3,int64_t param_4,uint32_t param_5,
                int64_t param_6)

{
    int64_t arg2;
    ulong noname_0;
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(obj.qrtr_epts_lock);
    for (pcVar1 = _obj.qrtr_all_epts; pcVar1 != obj.qrtr_all_epts; pcVar1 = *pcVar1) {
        if ((param_5 == 2) || (*(pcVar1 + -0x6c) != -1)) {
            arg2 = skb_clone(param_4,0xcc0);
            if (arg2 == 0) break;
            skb_set_owner_w(arg2,*(param_4 + 0x18));
            sym.qrtr_node_enqueue(pcVar1 + -0xa8,arg2,param_5,param_6);
        }
    }
    up_read(obj.qrtr_epts_lock);
    sym.qrtr_local_enqueue(noname_0,param_4,param_2,param_6);
    return 0;
}


// ===== sym.kthread_worker_fn.cfi_jt @ 0x080015a8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.kthread_worker_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qrtr_endpoint_register.cfi_jt @ 0x080015b0 (size 8) =====

uint64_t sym.qrtr_endpoint_register.cfi_jt(int64_t *param_1,uint32_t param_2,uint32_t param_3,code *param_4)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t arg2;
    ulong uVar9;
    code *pcVar10;
    int extraout_w11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *unaff_x19;
    code *arg1;
    int64_t unaff_x20;
    code *unaff_x21;
    code *unaff_x22;
    code *unaff_x23;
    int64_t unaff_x24;
    code *unaff_x25;
    code *pcVar11;
    code *unaff_x27;
    uint uVar12;
    code *unaff_x28;
    ulong unaff_x30;
    int *piStack_120;
    uint uStack_108;
    uint uStack_104;
    uint uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    int64_t *piStack_78;
    uint auStack_70 [2];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    auStack_70[0] = 1;
    if ((param_1 == NULL) || (unaff_x19 = param_1, *param_1 == 0)) {
        uVar7 = 0xffffffea;
    }
    else {
        unaff_x25 = param_3;
        unaff_x21 = param_2;
        iVar6 = kmem_cache_alloc_trace(_sock_no_sendpage,0xdc0,0x168);
        unaff_x23 = param_4;
        if (iVar6 == 0) {
            uVar7 = 0xfffffff4;
        }
        else {
            *(iVar6 + 0x38) = 1;
            __mutex_init(iVar6,"&node->ep_lock",obj.qrtr_nodes_lock);
            *(iVar6 + 0x30) = param_1;
            unaff_x24 = iVar6 + 0xb8;
            *(iVar6 + 0x98) = iVar6 + 0x90;
            *(iVar6 + 0xa0) = 0;
            unaff_x22 = iVar6 + 0x120;
            *(iVar6 + 0x90) = iVar6 + 0x90;
            *(iVar6 + 0x3c) = 0xffffffff;
            *(iVar6 + 0x44) = 0;
            *(iVar6 + 0x48) = 0;
            *(iVar6 + 0x110) = 0;
            *(iVar6 + 0x118) = 0;
            *(iVar6 + 0xf8) = iVar6 + 0xf8;
            *(iVar6 + 0x100) = iVar6 + 0xf8;
            *(iVar6 + 0x138) = 0;
            *(iVar6 + 0x140) = 0;
            *(iVar6 + 0x108) = sym.qrtr_node_rx_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
            *(iVar6 + 0x120) = unaff_x22;
            *(iVar6 + 0x128) = unaff_x22;
            *(iVar6 + 0x130) = sym.qrtr_hello_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
            __kthread_init_worker(unaff_x24,"(&node->kworker)->lock",obj.qrtr_nodes_lock);
            uVar7 = kthread_create_on_node(sym.kthread_worker_fn.cfi_jt,unaff_x24,0xffffffff,"qrtr_rx");
            unaff_x20 = iVar6;
            if (uVar7 < 0xfffffffffffff001) {
                wake_up_process(uVar7);
                *(iVar6 + 0xf0) = uVar7;
                if ((param_3 & 1) != 0) {
                    sched_setscheduler(uVar7,1,auStack_70);
                }
                *(iVar6 + 0x158) = 0;
                *(iVar6 + 0x160) = 0;
                if ((param_4 != NULL) && (unaff_x27 = *(param_4 + 8), unaff_x27 != NULL)) {
                    unaff_x28 = NULL;
                    unaff_x25 = iVar6 + 0x158;
                    do {
                        uVar12 = *(*param_4 + unaff_x28 * 4);
                        _raw_spin_lock(unaff_x25);
                        uVar4 = __xa_insert(unaff_x25,uVar12,iVar6,0xcc0);
                        uVar7 = uVar4;
                        _raw_spin_unlock(unaff_x25);
                        if (uVar4 != 0) {
                            kfree(iVar6);
                            goto code_r0x08001f98;
                        }
                        unaff_x28 = unaff_x28 + 1;
                    } while (unaff_x28 < unaff_x27);
                }
                *(iVar6 + 0x50) = 0xcc000000000;
                *(iVar6 + 0x58) = 0;
                __mutex_init(iVar6 + 0x60,"&node->qrtr_tx_lock",obj.qrtr_nodes_lock);
                *(iVar6 + 0x40) = param_2;
                down_write(obj.qrtr_epts_lock);
                unaff_x25 = _obj.qrtr_all_epts;
                unaff_x23 = iVar6 + 0xa8;
                unaff_x21 = obj.qrtr_all_epts;
                uVar7 = __list_add_valid(unaff_x23,obj.qrtr_all_epts,_obj.qrtr_all_epts);
                if ((uVar7 & 1) != 0) {
                    *(unaff_x25 + 8) = unaff_x23;
                    *(iVar6 + 0xa8) = unaff_x25;
                    *(iVar6 + 0xb0) = obj.qrtr_all_epts;
                    _obj.qrtr_all_epts = unaff_x23;
                }
                up_write(obj.qrtr_epts_lock);
                param_1[1] = iVar6;
                uVar9 = wakeup_source_register(0,"qrtr_ws");
                *(iVar6 + 0x148) = uVar9;
                kthread_queue_work(unaff_x24,unaff_x22);
                uVar7 = 0;
            }
            else {
                *(iVar6 + 0xf0) = uVar7;
                kfree(iVar6);
                uVar7 = 0xfffffff4;
            }
        }
    }
code_r0x08001f98:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_node_rx_work;
    pcStack_c8 = sym.qrtr_node_rx_work;
    iVar6 = sp_el0;
    arg1 = iVar8 + -0xf8;
    iStack_d8 = *(iVar6 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    pcStack_c0 = unaff_x28;
    pcStack_b8 = unaff_x27;
    uStack_b0 = uVar7;
    pcStack_a8 = unaff_x25;
    iStack_a0 = unaff_x24;
    pcStack_98 = unaff_x23;
    pcStack_90 = unaff_x22;
    pcStack_88 = unaff_x21;
    iStack_80 = unaff_x20;
    piStack_78 = unaff_x19;
    if (*(iVar8 + 0x58) == 0) {
        snprintf(&uStack_f8,0x20,"qrtr_%d",*(iVar8 + -0xbc));
        uVar9 = ipc_log_context_create(100,&uStack_f8,0);
        *(iVar8 + 0x58) = uVar9;
    }
    iVar6 = skb_dequeue(iVar8 + -0x68);
    if (iVar6 == 0) goto code_r0x080023cc;
    piStack_120 = iVar8 + -0xb0;
    unaff_x27 = segment.ehdr;
    unaff_x28 = 0x2a;
    unaff_x23 = obj.qrtr_epts_lock;
    unaff_x22 = obj.qrtr_all_epts;
    pcVar10 = unaff_x25;
    do {
        uVar12 = SUB84(unaff_x28,0);
        cVar1 = '\x01';
        if (*(iVar6 + 0x38) == '\x01') {
code_r0x08002290:
            uVar4 = *(iVar6 + 0x30);
            if (uVar4 == *unaff_x27 || cVar1 != '\x01') {
                unaff_x25 = sym.qrtr_port_lookup(*(iVar6 + 0x34));
                if (unaff_x25 != NULL) break;
            }
            else {
code_r0x080022d8:
                uStack_104 = *(iVar6 + 0x28);
                uStack_100 = *(iVar6 + 0x2c);
                uStack_108 = uVar12;
                unaff_x25 = sym.qrtr_node_lookup(uVar4);
                if (unaff_x25 != NULL) {
                    sym.qrtr_node_enqueue(unaff_x25,iVar6,*(iVar6 + 0x38),&uStack_108);
                    sym.qrtr_node_release(unaff_x25);
                    goto code_r0x08002190;
                }
            }
            unaff_x25 = pcVar10;
            kfree_skb(iVar6);
        }
        else {
            down_read(unaff_x23);
            for (pcVar11 = *unaff_x22; pcVar11 != unaff_x22; pcVar11 = *pcVar11) {
                pcVar10 = pcVar11 + -0xa8;
                if (arg1 == NULL) {
code_r0x0800221c:
                    uStack_108 = uVar12;
                    arg2 = skb_clone(iVar6,0xcc0);
                    if (arg2 == 0) break;
                    uStack_104 = *(iVar6 + 0x28);
                    uStack_100 = *(iVar6 + 0x2c);
                    sym.qrtr_node_enqueue(pcVar10,arg2,*(iVar6 + 0x38),&uStack_108);
                }
                else {
                    uStack_108 = uVar12;
                    if ((((pcVar10 != NULL) && (*(iVar6 + 0x38) != '\x02')) && (*(iVar6 + 0x38) != '\a')) &&
                       ((pcVar10 != arg1 && (*(pcVar11 + -0x6c) != -1)))) {
                        iVar3 = *(pcVar11 + -0x68) - *(iVar8 + -0xb8);
                        iVar5 = -iVar3;
                        if (-1 < iVar3) {
                            iVar5 = iVar3;
                        }
                        if (1 < iVar5) goto code_r0x0800221c;
                    }
                }
            }
            up_read(unaff_x23);
            cVar1 = *(iVar6 + 0x38);
            if (cVar1 != '\a') goto code_r0x08002290;
            uVar4 = *(iVar6 + 0x30);
            if (uVar4 != *unaff_x27) goto code_r0x080022d8;
            sym.qrtr_tx_resume(arg1,iVar6);
            unaff_x25 = pcVar10;
        }
code_r0x08002190:
        while (iVar6 = skb_dequeue(iVar8 + -0x68), pcVar10 = unaff_x25, iVar6 == 0) {
code_r0x080023cc:
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_d8) {
                return 0;
            }
            pcVar10 = __stack_chk_fail();
            iVar5 = extraout_w11;
code_r0x08002440:
            Hint_Prefetch(pcVar10,2,0,1);
            do {
                iVar3 = *pcVar10;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(pcVar10,0x10);
                if (bVar2) {
                    *pcVar10 = iVar3 - iVar5;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(unaff_x25);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(pcVar10,3);
            }
        }
    } while( true );
    if (*(iVar6 + 0x38) == '\x02') {
        if (*piStack_120 == 0) {
            Hint_Prefetch(piStack_120,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(piStack_120,0x10);
                if (bVar2) {
                    *piStack_120 = *piStack_120 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            goto code_r0x08002334;
        }
    }
    else {
code_r0x08002334:
        iVar5 = sock_queue_rcv_skb(unaff_x25,iVar6);
        if (iVar5 == 0) goto code_r0x08002344;
        _printk(0x8000840,"qrtr_sock_queue_skb",*(iVar6 + 0x39),iVar5);
    }
    kfree_skb(iVar6);
code_r0x08002344:
    pcVar10 = unaff_x25 + 0x80;
    iVar5 = 1;
    goto code_r0x08002440;
}


// ===== sym.qrtr_print_wakeup_reason @ 0x080015b8 (size 320) =====

int64_t sym.qrtr_print_wakeup_reason(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_60 = 0;
    if (*arg1 == '\x03') {
        iVar5 = *(arg1 + 3) + 0x10;
        uVar6 = *(arg1 + 8);
        uVar7 = 0xfffffffe;
        if (*(arg1 + 10) != 0xfffe) {
            uVar7 = *(arg1 + 10);
        }
        uVar8 = *(arg1 + 0xc);
        uVar9 = 0xfffffffe;
        if (*(arg1 + 0xe) != 0xfffe) {
            uVar9 = *(arg1 + 0xe);
        }
        iVar4 = 4;
    }
    else {
        if (*arg1 != '\x01') goto code_r0x08001604;
        uVar6 = *(arg1 + 8);
        uVar7 = *(arg1 + 0xc);
        uVar8 = *(arg1 + 0x18);
        uVar9 = *(arg1 + 0x1c);
        iVar5 = 0x20;
        iVar4 = 0x14;
    }
    uVar1 = *(arg1 + iVar4);
    iVar2 = qrtr_get_service_id(uVar6,uVar7);
    if (iVar2 < 0) {
        iVar2 = qrtr_get_service_id(uVar8,uVar9);
    }
    if (7 < uVar1) {
        uVar1 = 8;
    }
    memcpy(&uStack_60,arg1 + iVar5,uVar1);
    arg1 = _printk(0x80009f4,"qrtr_print_wakeup_reason",uVar6,uVar7,uVar8,uVar9,uStack_60 & 0xffffffff,
                   uStack_60._4_4_,iVar2);
code_r0x08001604:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return arg1;
    }
    pcVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_peek_pkt_size;
    if (*pcVar3 == '\x01') {
        iVar2 = 0x20;
        iVar5 = 0x14;
    }
    else {
        if (*pcVar3 != '\x03') {
            _printk(0x8000a93);
            return 0xffffffea;
        }
        iVar5 = 4;
        iVar2 = pcVar3[3] + 0x10;
    }
    return (*(pcVar3 + iVar5) + 3U & 0xfffffffc) + iVar2;
}


// ===== sym.qrtr_peek_pkt_size @ 0x080016f8 (size 112) =====

int sym.qrtr_peek_pkt_size(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg1 == '\x01') {
        iVar1 = 0x20;
        iVar2 = 0x14;
    }
    else {
        if (*arg1 != '\x03') {
            _printk(0x8000a93);
            return -0x16;
        }
        iVar2 = 4;
        iVar1 = *(arg1 + 3) + 0x10;
    }
    return (*(arg1 + iVar2) + 3U & 0xfffffffc) + iVar1;
}


// ===== sym.qrtr_endpoint_post @ 0x08001768 (size 1256) =====

void sym.qrtr_endpoint_post(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint uStack_7c;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    iVar13 = *(arg1 + 8);
    uVar6 = 0xffffffea;
    uStack_7c = 0;
    if ((arg3 == 0) || ((arg3 & 3U) != 0)) goto code_r0x08001ba4;
    iVar7 = alloc_skb_with_frags(0x20,arg3,0,&uStack_7c,0xa20);
    if (iVar7 == 0) {
        if (arg3 < 0x400) {
            pcVar8 = obj.qrtr_backup_lo;
code_r0x080017fc:
            iVar7 = skb_dequeue(pcVar8);
            if (iVar7 != 0) {
                queue_work_on(0x20,_datagram_poll,obj.qrtr_backup_work);
                goto code_r0x08001820;
            }
        }
        else if (arg3 >> 0xe == 0) {
            pcVar8 = obj.qrtr_backup_hi;
            goto code_r0x080017fc;
        }
        _printk(0x8000b55,arg3);
        uVar6 = 0xfffffff4;
        goto code_r0x08001ba4;
    }
code_r0x08001820:
    *(iVar7 + 0xd8) = *(iVar7 + 0xd8) + 0x20;
    *(iVar7 + 200) = *(iVar7 + 200) + 0x20;
    if (*arg2 == '\x03') {
        if (0xf < arg3) {
            uVar9 = *(arg2 + 1);
            uVar2 = *(arg2 + 3);
            *(iVar7 + 0x38) = *(arg2 + 1);
            iVar10 = uVar2 + 0x10;
            *(iVar7 + 0x39) = *(arg2 + 2) & 1;
            *(iVar7 + 0x28) = *(arg2 + 8);
            uVar3 = *(arg2 + 10);
            *(iVar7 + 0x2c) = uVar3;
            *(iVar7 + 0x30) = *(arg2 + 0xc);
            uVar11 = *(arg2 + 0xe);
            *(iVar7 + 0x34) = uVar11;
            if (uVar3 == 0xfffe) {
                *(iVar7 + 0x2c) = 0xfffffffe;
            }
            if (uVar11 != 0xfffe) {
                iVar12 = 4;
                goto code_r0x08001914;
            }
            uVar11 = 0xfffffffe;
            *(iVar7 + 0x34) = 0xfffffffe;
            uVar15 = *(arg2 + 4);
code_r0x0800192c:
            if ((uVar15 != 0) && ((uVar15 + 3 & 0x1fffffffc) + iVar10 == arg3)) {
                if (uVar11 != 0xfffffffe) {
                    if (((uVar9 & 0xff) != 7) && ((uVar9 & 0xff) != 1)) goto code_r0x08001b98;
                }
                *(iVar7 + 0x70) = uVar15;
                *(iVar7 + 0x74) = uVar15;
                skb_store_bits(iVar7,0,arg2 + iVar10,uVar15);
                iVar4 = *(iVar7 + 0x28);
                if ((iVar4 != -1) && (*(iVar13 + 0x3c) != iVar4)) {
                    uVar6 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
                    iVar12 = radix_tree_lookup(obj.qrtr_nodes,iVar4);
                    if (iVar12 == 0) {
                        radix_tree_insert(obj.qrtr_nodes,iVar4,iVar13);
                    }
                    if (*(iVar13 + 0x3c) == -1) {
                        *(iVar13 + 0x3c) = iVar4;
                    }
                    _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar6);
                }
                cVar1 = *(iVar7 + 0x38);
                if (cVar1 == '\x04') {
                    if (uVar15 < 0x14) goto code_r0x08001b98;
                    sym.qrtr_node_assign(iVar13,*(arg2 + iVar10 + 0xc));
                    cVar1 = *(iVar7 + 0x38);
                }
                uStack_60 = 0;
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_78 = 0;
                if (cVar1 == '\x01') {
                    skb_copy_bits(iVar7,0,&uStack_78,8);
                    ipc_log_string(*(iVar13 + 0x150),
                                   "RX DATA: Len:0x%x CF:0x%x src[0x%x:0x%x] dst[0x%x:0x%x] [%08x %08x]\n",
                                   *(iVar7 + 0x70),*(iVar7 + 0x39),*(iVar7 + 0x28),*(iVar7 + 0x2c),*(iVar7 + 0x30),
                                   *(iVar7 + 0x34),uStack_78,uStack_78 >> 0x20);
                }
                else {
                    skb_copy_bits(iVar7,0,&uStack_70,0x14);
                    uVar2 = *(iVar7 + 0x38);
                    if (uVar2 < 8) {
                        uVar9 = 1 << (uVar2 & 0x1f);
                        if ((uVar9 & 0xc) == 0) {
                            if ((uVar9 & 0x30) != 0) {
                                ipc_log_string(*(iVar13 + 0x150),"RX CTRL: cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",
                                               uVar2,uStack_70._4_4_,uStack_68 & 0xffffffff,uStack_68._4_4_,
                                               uStack_60);
                                return;
                            }
                            if ((1 << (uVar2 & 0x1f) & 0xc0U) != 0) {
                                ipc_log_string(*(iVar13 + 0x150),"RX CTRL: cmd:0x%x addr[0x%x:0x%x]\n",uVar2,
                                               uStack_70._4_4_,uStack_68 & 0xffffffff);
                            }
                        }
                        else {
                            ipc_log_string(*(iVar13 + 0x150),"RX CTRL: cmd:0x%x node[0x%x]\n",uVar2,*(iVar7 + 0x28));
                            if ((*(iVar7 + 0x28) == 3) || (*(iVar7 + 0x28) == 0)) {
                                _printk(0x80008fa,*(iVar7 + 0x38));
                            }
                        }
                    }
                }
                iVar4 = qrtr_get_service_id(*(iVar7 + 0x28),*(iVar7 + 0x2c));
                if ((*(iVar7 + 0x38) != '\x01') || (*(iVar7 + 0x30) != _segment.ehdr)) {
                    skb_queue_tail(iVar13 + 0x90,iVar7);
                    kthread_queue_work(iVar13 + 0xb8,iVar13 + 0xf8);
                    pm_wakeup_ws_event(*(iVar13 + 0x148),0,1);
                    uVar6 = 0;
                    goto code_r0x08001ba4;
                }
                iVar10 = sym.qrtr_port_lookup(*(iVar7 + 0x34));
                if (iVar10 == 0) {
                    kfree_skb(iVar7);
                    uVar6 = 0xffffffed;
                    goto code_r0x08001ba4;
                }
                iVar5 = sock_queue_rcv_skb(iVar10,iVar7);
                if (iVar5 == 0) {
                    iVar7 = xa_load(iVar13 + 0x158,iVar4);
                    if (iVar7 == 0) {
                        pm_wakeup_ws_event(*(iVar13 + 0x148),0,1);
                    }
                    sym.qrtr_port_put(iVar10);
                    uVar6 = 0;
                    goto code_r0x08001ba4;
                }
                sym.qrtr_port_put(iVar10);
            }
        }
    }
    else if (*arg2 == '\x01') {
        if (0x1f < arg3) {
            uVar9 = *(arg2 + 4);
            iVar12 = 0x14;
            *(iVar7 + 0x38) = uVar9;
            *(iVar7 + 0x28) = *(arg2 + 8);
            *(iVar7 + 0x2c) = *(arg2 + 0xc);
            *(iVar7 + 0x39) = *(arg2 + 0x10) != 0;
            *(iVar7 + 0x30) = *(arg2 + 0x18);
            iVar10 = 0x20;
            uVar11 = *(arg2 + 0x1c);
            *(iVar7 + 0x34) = uVar11;
code_r0x08001914:
            uVar15 = *(arg2 + iVar12);
            if (uVar11 == 0xffff) {
                uVar11 = 0xfffffffe;
                *(iVar7 + 0x34) = 0xfffffffe;
            }
            goto code_r0x0800192c;
        }
    }
    else {
        _printk(0x8000a93);
    }
code_r0x08001b98:
    kfree_skb(iVar7);
    uVar6 = 0xffffffea;
code_r0x08001ba4:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return;
    }
    auVar16 = __stack_chk_fail(uVar6);
    iVar13 = auVar16._0_8_;
    *extraout_x18 = sym.qrtr_node_assign;
    iVar4 = auVar16._8_4_;
    if (iVar4 != -1) {
        uVar14 = auVar16._8_8_ & 0xffffffff;
        if (*(iVar13 + 0x3c) != iVar4) {
            uVar6 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
            iVar7 = radix_tree_lookup(obj.qrtr_nodes,uVar14);
            if (iVar7 == 0) {
                radix_tree_insert(obj.qrtr_nodes,uVar14,iVar13);
            }
            if (*(iVar13 + 0x3c) == -1) {
                *(iVar13 + 0x3c) = iVar4;
            }
            _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar6);
        }
    }
    return;
}


// ===== sym.qrtr_node_assign @ 0x08001c50 (size 168) =====

void sym.qrtr_node_assign(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0xffffffff) && (*(arg1 + 0x3c) != arg2)) {
        uVar1 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
        iVar2 = radix_tree_lookup(obj.qrtr_nodes,arg2);
        if (iVar2 == 0) {
            radix_tree_insert(obj.qrtr_nodes,arg2,arg1);
        }
        if (*(arg1 + 0x3c) == -1) {
            *(arg1 + 0x3c) = arg2;
        }
        _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar1);
    }
    return;
}


// ===== sym.qrtr_port_lookup @ 0x08001cf8 (size 200) =====

int64_t sym.qrtr_port_lookup(uint32_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0;
    if (arg1 != 0xfffffffe) {
        uVar2 = arg1;
    }
    uVar5 = _raw_spin_lock_irqsave(obj.qrtr_port_lock);
    iVar6 = xa_load(obj.qrtr_ports,uVar2);
    if (iVar6 != 0) {
        puVar1 = iVar6 + 0x80;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08001d60;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x08001d60:
    _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar5);
    return iVar6;
}


// ===== sym.qrtr_port_put @ 0x08001dc0 (size 148) =====

void sym.qrtr_port_put(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x80;
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
        sk_free(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.qrtr_endpoint_register @ 0x08001e54 (size 688) =====

uint64_t sym.qrtr_endpoint_register(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t arg2_00;
    ulong uVar9;
    code *pcVar10;
    int extraout_w11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    code *arg1_00;
    int64_t unaff_x20;
    code *unaff_x21;
    code *unaff_x22;
    code *unaff_x23;
    int64_t unaff_x24;
    code *unaff_x25;
    code *pcVar11;
    code *unaff_x27;
    uint uVar12;
    code *unaff_x28;
    ulong unaff_x30;
    int *piStack_120;
    uint uStack_108;
    uint uStack_104;
    uint uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint auStack_70 [2];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    auStack_70[0] = 1;
    if ((arg1 == 0) || (unaff_x19 = arg1, *arg1 == 0)) {
        uVar7 = 0xffffffea;
    }
    else {
        unaff_x25 = arg3 & 0xffffffff;
        unaff_x21 = arg2 & 0xffffffff;
        iVar6 = kmem_cache_alloc_trace(_sock_no_sendpage,0xdc0,0x168);
        unaff_x23 = arg4;
        if (iVar6 == 0) {
            uVar7 = 0xfffffff4;
        }
        else {
            *(iVar6 + 0x38) = 1;
            __mutex_init(iVar6,"&node->ep_lock",obj.qrtr_nodes_lock);
            *(iVar6 + 0x30) = arg1;
            unaff_x24 = iVar6 + 0xb8;
            *(iVar6 + 0x98) = iVar6 + 0x90;
            *(iVar6 + 0xa0) = 0;
            unaff_x22 = iVar6 + 0x120;
            *(iVar6 + 0x90) = iVar6 + 0x90;
            *(iVar6 + 0x3c) = 0xffffffff;
            *(iVar6 + 0x44) = 0;
            *(iVar6 + 0x48) = 0;
            *(iVar6 + 0x110) = 0;
            *(iVar6 + 0x118) = 0;
            *(iVar6 + 0xf8) = iVar6 + 0xf8;
            *(iVar6 + 0x100) = iVar6 + 0xf8;
            *(iVar6 + 0x138) = 0;
            *(iVar6 + 0x140) = 0;
            *(iVar6 + 0x108) = sym.qrtr_node_rx_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
            *(iVar6 + 0x120) = unaff_x22;
            *(iVar6 + 0x128) = unaff_x22;
            *(iVar6 + 0x130) = sym.qrtr_hello_work.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
            __kthread_init_worker(unaff_x24,"(&node->kworker)->lock",obj.qrtr_nodes_lock);
            uVar7 = kthread_create_on_node(sym.kthread_worker_fn.cfi_jt,unaff_x24,0xffffffff,"qrtr_rx");
            unaff_x20 = iVar6;
            if (uVar7 < 0xfffffffffffff001) {
                wake_up_process(uVar7);
                *(iVar6 + 0xf0) = uVar7;
                if ((arg3 & 1U) != 0) {
                    sched_setscheduler(uVar7,1,auStack_70);
                }
                *(iVar6 + 0x158) = 0;
                *(iVar6 + 0x160) = 0;
                if ((arg4 != 0) && (unaff_x27 = *(arg4 + 8), unaff_x27 != NULL)) {
                    unaff_x28 = NULL;
                    unaff_x25 = iVar6 + 0x158;
                    do {
                        uVar12 = *(*arg4 + unaff_x28 * 4);
                        _raw_spin_lock(unaff_x25);
                        uVar4 = __xa_insert(unaff_x25,uVar12,iVar6,0xcc0);
                        uVar7 = uVar4;
                        _raw_spin_unlock(unaff_x25);
                        if (uVar4 != 0) {
                            kfree(iVar6);
                            goto code_r0x08001f98;
                        }
                        unaff_x28 = unaff_x28 + 1;
                    } while (unaff_x28 < unaff_x27);
                }
                *(iVar6 + 0x50) = 0xcc000000000;
                *(iVar6 + 0x58) = 0;
                __mutex_init(iVar6 + 0x60,"&node->qrtr_tx_lock",obj.qrtr_nodes_lock);
                *(iVar6 + 0x40) = arg2;
                down_write(obj.qrtr_epts_lock);
                unaff_x25 = _obj.qrtr_all_epts;
                unaff_x23 = iVar6 + 0xa8;
                unaff_x21 = obj.qrtr_all_epts;
                uVar7 = __list_add_valid(unaff_x23,obj.qrtr_all_epts,_obj.qrtr_all_epts);
                if ((uVar7 & 1) != 0) {
                    *(unaff_x25 + 8) = unaff_x23;
                    *(iVar6 + 0xa8) = unaff_x25;
                    *(iVar6 + 0xb0) = obj.qrtr_all_epts;
                    _obj.qrtr_all_epts = unaff_x23;
                }
                up_write(obj.qrtr_epts_lock);
                *(arg1 + 8) = iVar6;
                uVar9 = wakeup_source_register(0,"qrtr_ws");
                *(iVar6 + 0x148) = uVar9;
                kthread_queue_work(unaff_x24,unaff_x22);
                uVar7 = 0;
            }
            else {
                *(iVar6 + 0xf0) = uVar7;
                kfree(iVar6);
                uVar7 = 0xfffffff4;
            }
        }
    }
code_r0x08001f98:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_node_rx_work;
    pcStack_c8 = sym.qrtr_node_rx_work;
    iVar6 = sp_el0;
    arg1_00 = iVar8 + -0xf8;
    iStack_d8 = *(iVar6 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    pcStack_c0 = unaff_x28;
    pcStack_b8 = unaff_x27;
    uStack_b0 = uVar7;
    pcStack_a8 = unaff_x25;
    iStack_a0 = unaff_x24;
    pcStack_98 = unaff_x23;
    pcStack_90 = unaff_x22;
    pcStack_88 = unaff_x21;
    iStack_80 = unaff_x20;
    iStack_78 = unaff_x19;
    if (*(iVar8 + 0x58) == 0) {
        snprintf(&uStack_f8,0x20,"qrtr_%d",*(iVar8 + -0xbc));
        uVar9 = ipc_log_context_create(100,&uStack_f8,0);
        *(iVar8 + 0x58) = uVar9;
    }
    iVar6 = skb_dequeue(iVar8 + -0x68);
    if (iVar6 == 0) goto code_r0x080023cc;
    piStack_120 = iVar8 + -0xb0;
    unaff_x27 = segment.ehdr;
    unaff_x28 = 0x2a;
    unaff_x23 = obj.qrtr_epts_lock;
    unaff_x22 = obj.qrtr_all_epts;
    pcVar10 = unaff_x25;
    do {
        uVar12 = SUB84(unaff_x28,0);
        cVar1 = '\x01';
        if (*(iVar6 + 0x38) == '\x01') {
code_r0x08002290:
            uVar4 = *(iVar6 + 0x30);
            if (uVar4 == *unaff_x27 || cVar1 != '\x01') {
                unaff_x25 = sym.qrtr_port_lookup(*(iVar6 + 0x34));
                if (unaff_x25 != NULL) break;
            }
            else {
code_r0x080022d8:
                uStack_104 = *(iVar6 + 0x28);
                uStack_100 = *(iVar6 + 0x2c);
                uStack_108 = uVar12;
                unaff_x25 = sym.qrtr_node_lookup(uVar4);
                if (unaff_x25 != NULL) {
                    sym.qrtr_node_enqueue(unaff_x25,iVar6,*(iVar6 + 0x38),&uStack_108);
                    sym.qrtr_node_release(unaff_x25);
                    goto code_r0x08002190;
                }
            }
            unaff_x25 = pcVar10;
            kfree_skb(iVar6);
        }
        else {
            down_read(unaff_x23);
            for (pcVar11 = *unaff_x22; pcVar11 != unaff_x22; pcVar11 = *pcVar11) {
                pcVar10 = pcVar11 + -0xa8;
                if (arg1_00 == NULL) {
code_r0x0800221c:
                    uStack_108 = uVar12;
                    arg2_00 = skb_clone(iVar6,0xcc0);
                    if (arg2_00 == 0) break;
                    uStack_104 = *(iVar6 + 0x28);
                    uStack_100 = *(iVar6 + 0x2c);
                    sym.qrtr_node_enqueue(pcVar10,arg2_00,*(iVar6 + 0x38),&uStack_108);
                }
                else {
                    uStack_108 = uVar12;
                    if ((((pcVar10 != NULL) && (*(iVar6 + 0x38) != '\x02')) && (*(iVar6 + 0x38) != '\a')) &&
                       ((pcVar10 != arg1_00 && (*(pcVar11 + -0x6c) != -1)))) {
                        iVar3 = *(pcVar11 + -0x68) - *(iVar8 + -0xb8);
                        iVar5 = -iVar3;
                        if (-1 < iVar3) {
                            iVar5 = iVar3;
                        }
                        if (1 < iVar5) goto code_r0x0800221c;
                    }
                }
            }
            up_read(unaff_x23);
            cVar1 = *(iVar6 + 0x38);
            if (cVar1 != '\a') goto code_r0x08002290;
            uVar4 = *(iVar6 + 0x30);
            if (uVar4 != *unaff_x27) goto code_r0x080022d8;
            sym.qrtr_tx_resume(arg1_00,iVar6);
            unaff_x25 = pcVar10;
        }
code_r0x08002190:
        while (iVar6 = skb_dequeue(iVar8 + -0x68), pcVar10 = unaff_x25, iVar6 == 0) {
code_r0x080023cc:
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_d8) {
                return 0;
            }
            pcVar10 = __stack_chk_fail();
            iVar5 = extraout_w11;
code_r0x08002440:
            Hint_Prefetch(pcVar10,2,0,1);
            do {
                iVar3 = *pcVar10;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(pcVar10,0x10);
                if (bVar2) {
                    *pcVar10 = iVar3 - iVar5;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(unaff_x25);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(pcVar10,3);
            }
        }
    } while( true );
    if (*(iVar6 + 0x38) == '\x02') {
        if (*piStack_120 == 0) {
            Hint_Prefetch(piStack_120,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(piStack_120,0x10);
                if (bVar2) {
                    *piStack_120 = *piStack_120 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            goto code_r0x08002334;
        }
    }
    else {
code_r0x08002334:
        iVar5 = sock_queue_rcv_skb(unaff_x25,iVar6);
        if (iVar5 == 0) goto code_r0x08002344;
        _printk(0x8000840,"qrtr_sock_queue_skb",*(iVar6 + 0x39),iVar5);
    }
    kfree_skb(iVar6);
code_r0x08002344:
    pcVar10 = unaff_x25 + 0x80;
    iVar5 = 1;
    goto code_r0x08002440;
}


// ===== sym.qrtr_node_rx_work @ 0x08002104 (size 876) =====

void sym.qrtr_node_rx_work(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    int64_t arg2;
    ulong uVar7;
    code *pcVar8;
    int extraout_w11;
    ulong *in_x18;
    code *arg1_00;
    code *unaff_x22;
    code *unaff_x23;
    code *unaff_x25;
    code *pcVar9;
    code *unaff_x27;
    uint unaff_w28;
    ulong unaff_x30;
    int *piStack_b0;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    arg1_00 = arg1 + -0xf8;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (*(arg1 + 0x58) == 0) {
        snprintf(&uStack_88,0x20,"qrtr_%d",*(arg1 + -0xbc));
        uVar7 = ipc_log_context_create(100,&uStack_88,0);
        *(arg1 + 0x58) = uVar7;
    }
    iVar6 = skb_dequeue(arg1 + -0x68);
    if (iVar6 == 0) goto code_r0x080023cc;
    piStack_b0 = arg1 + -0xb0;
    unaff_x27 = segment.ehdr;
    unaff_w28 = 0x2a;
    unaff_x23 = obj.qrtr_epts_lock;
    unaff_x22 = obj.qrtr_all_epts;
    pcVar8 = unaff_x25;
    do {
        cVar2 = '\x01';
        if (*(iVar6 + 0x38) == '\x01') {
code_r0x08002290:
            uVar1 = *(iVar6 + 0x30);
            if (uVar1 == *unaff_x27 || cVar2 != '\x01') {
                unaff_x25 = sym.qrtr_port_lookup(*(iVar6 + 0x34));
                if (unaff_x25 != NULL) break;
            }
            else {
code_r0x080022d8:
                uStack_94 = *(iVar6 + 0x28);
                uStack_90 = *(iVar6 + 0x2c);
                uStack_98 = unaff_w28;
                unaff_x25 = sym.qrtr_node_lookup(uVar1);
                if (unaff_x25 != NULL) {
                    sym.qrtr_node_enqueue(unaff_x25,iVar6,*(iVar6 + 0x38),&uStack_98);
                    sym.qrtr_node_release(unaff_x25);
                    goto code_r0x08002190;
                }
            }
            unaff_x25 = pcVar8;
            kfree_skb(iVar6);
        }
        else {
            down_read(unaff_x23);
            for (pcVar9 = *unaff_x22; pcVar9 != unaff_x22; pcVar9 = *pcVar9) {
                pcVar8 = pcVar9 + -0xa8;
                if (arg1_00 == NULL) {
code_r0x0800221c:
                    uStack_98 = unaff_w28;
                    arg2 = skb_clone(iVar6,0xcc0);
                    if (arg2 == 0) break;
                    uStack_94 = *(iVar6 + 0x28);
                    uStack_90 = *(iVar6 + 0x2c);
                    sym.qrtr_node_enqueue(pcVar8,arg2,*(iVar6 + 0x38),&uStack_98);
                }
                else {
                    uStack_98 = unaff_w28;
                    if ((((pcVar8 != NULL) && (*(iVar6 + 0x38) != '\x02')) && (*(iVar6 + 0x38) != '\a')) &&
                       ((pcVar8 != arg1_00 && (*(pcVar9 + -0x6c) != -1)))) {
                        iVar4 = *(pcVar9 + -0x68) - *(arg1 + -0xb8);
                        iVar5 = -iVar4;
                        if (-1 < iVar4) {
                            iVar5 = iVar4;
                        }
                        if (1 < iVar5) goto code_r0x0800221c;
                    }
                }
            }
            up_read(unaff_x23);
            cVar2 = *(iVar6 + 0x38);
            if (cVar2 != '\a') goto code_r0x08002290;
            uVar1 = *(iVar6 + 0x30);
            if (uVar1 != *unaff_x27) goto code_r0x080022d8;
            sym.qrtr_tx_resume(arg1_00,iVar6);
            unaff_x25 = pcVar8;
        }
code_r0x08002190:
        while (iVar6 = skb_dequeue(arg1 + -0x68), pcVar8 = unaff_x25, iVar6 == 0) {
code_r0x080023cc:
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_68) {
                return;
            }
            pcVar8 = __stack_chk_fail();
            iVar5 = extraout_w11;
code_r0x08002440:
            Hint_Prefetch(pcVar8,2,0,1);
            do {
                iVar4 = *pcVar8;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(pcVar8,0x10);
                if (bVar3) {
                    *pcVar8 = iVar4 - iVar5;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar4 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(unaff_x25);
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(pcVar8,3);
            }
        }
    } while( true );
    if (*(iVar6 + 0x38) == '\x02') {
        if (*piStack_b0 == 0) {
            Hint_Prefetch(piStack_b0,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piStack_b0,0x10);
                if (bVar3) {
                    *piStack_b0 = *piStack_b0 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            goto code_r0x08002334;
        }
    }
    else {
code_r0x08002334:
        iVar5 = sock_queue_rcv_skb(unaff_x25,iVar6);
        if (iVar5 == 0) goto code_r0x08002344;
        _printk(0x8000840,"qrtr_sock_queue_skb",*(iVar6 + 0x39),iVar5);
    }
    kfree_skb(iVar6);
code_r0x08002344:
    pcVar8 = unaff_x25 + 0x80;
    iVar5 = 1;
    goto code_r0x08002440;
}


// ===== sym.qrtr_hello_work @ 0x08002470 (size 468) =====

void sym.qrtr_hello_work(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint *puVar5;
    int *piVar6;
    int iVar7;
    int iVar8;
    int extraout_w9;
    ulong *in_x18;
    int64_t unaff_x19;
    ulong unaff_x30;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = *0x8000db8;
    uStack_40 = *0x8000dc0;
    iVar3 = sym.qrtr_port_lookup(0xfffffffe);
    if (iVar3 == 0) goto code_r0x080025d4;
    iVar4 = __alloc_skb(0x34,0xcc0,0,0xffffffff);
    if (iVar4 == 0) {
        piVar6 = iVar3 + 0x80;
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar7 = *piVar6;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
                *piVar6 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar7 != 1) goto code_r0x080025cc;
        DataMemoryBarrier(2,1);
        do {
            sk_free(iVar3);
            unaff_x19 = iVar3;
code_r0x080025d4:
            while( true ) {
                iVar3 = unaff_x19;
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) == iStack_38) {
                    return;
                }
                piVar6 = __stack_chk_fail();
                iVar8 = extraout_w9;
code_r0x08002614:
                Hint_Prefetch(piVar6,2,0,1);
                do {
                    iVar7 = *piVar6;
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar2) {
                        *piVar6 = iVar7 - iVar8;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                if (iVar7 == 1) break;
code_r0x080025cc:
                unaff_x19 = iVar3;
                if (iVar7 < 1) {
                    refcount_warn_saturate(piVar6,3);
                }
            }
            DataMemoryBarrier(2,1);
        } while( true );
    }
    *(iVar4 + 0xd8) = *(iVar4 + 0xd8) + 0x20;
    *(iVar4 + 200) = *(iVar4 + 200) + 0x20;
    puVar5 = skb_put(iVar4,0x14);
    *(puVar5 + 1) = 0;
    *(puVar5 + 3) = 0;
    *puVar5 = 2;
    uStack_48 = CONCAT44(_segment.ehdr,uStack_48);
    sym.qrtr_node_enqueue(arg1 + -0x120,iVar4,2,&uStack_48);
    piVar6 = iVar3 + 0x80;
    iVar8 = 1;
    goto code_r0x08002614;
}


// ===== sym.qrtr_endpoint_unregister @ 0x08002644 (size 968) =====

ulong sym.qrtr_endpoint_unregister(int64_t arg1)

{
    int *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    uint *puVar11;
    int64_t extraout_x1;
    ulong *in_x3;
    ulong *in_x4;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    code *arg1_00;
    int64_t iVar14;
    code *pcVar15;
    code *arg1_01;
    ulong unaff_x30;
    uchar in_q1 [16];
    uint64_t uStack_c8;
    int64_t iStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    ulong uStack_88;
    uint uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    arg1_00 = *(arg1 + 8);
    uStack_90 = 0xfffffffe;
    uStack_a8 = 0x2a;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a4 = _segment.ehdr;
    uStack_a0 = 0xfffffffe;
    uStack_94 = *(arg1_00 + 0x3c);
    uStack_98 = 0x2a;
    mutex_lock(arg1_00);
    *(arg1_00 + 0x30) = 0;
    mutex_unlock(arg1_00);
    uVar8 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
    uStack_c8 = 0;
    iStack_c0 = 0;
code_r0x08002708:
    piVar9 = radix_tree_next_chunk(obj.qrtr_nodes,&uStack_c8,0);
    if (piVar9 != NULL) {
        do {
            if (*piVar9 == arg1_00) {
                in_x3 = 0xffffffff;
                uStack_94 = uStack_c8;
                iVar10 = __alloc_skb(0x34,0xa20,0);
                if (iVar10 != 0) {
                    *(iVar10 + 0xd8) = *(iVar10 + 0xd8) + 0x20;
                    *(iVar10 + 200) = *(iVar10 + 200) + 0x20;
                    puVar11 = skb_put(iVar10,0x14);
                    in_x3 = &uStack_98;
                    in_x4 = &uStack_a8;
                    *(puVar11 + 1) = 0;
                    *(puVar11 + 3) = 0;
                    *puVar11 = 3;
                    sym.qrtr_local_enqueue(3,iVar10,in_q1,in_x3);
                }
                _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar8);
                uVar6 = uStack_c8;
                uStack_78 = *0x8000db8;
                uStack_70 = *0x8000dc0;
                uStack_88 = *0x8000db8;
                uStack_80 = *0x8000dc0;
                down_read(obj.qrtr_epts_lock);
                if (_obj.qrtr_all_epts != obj.qrtr_all_epts) {
                    uVar2 = (uVar6 >> 0x10) + (uVar6 & 0xffff) + 0xe11e;
                    pcVar15 = _obj.qrtr_all_epts;
                    do {
                        arg1_01 = pcVar15 + -0xa8;
                        if (arg1_00 == NULL) {
code_r0x0800286c:
                            in_x3 = 0xffffffff;
                            iVar10 = __alloc_skb(0x34,0xcc0,0);
                            if (iVar10 == 0) goto code_r0x080028f0;
                            *(iVar10 + 0xd8) = *(iVar10 + 0xd8) + 0x20;
                            *(iVar10 + 200) = *(iVar10 + 200) + 0x20;
                            puVar11 = skb_put(iVar10,0x14);
                            *(puVar11 + 3) = 0;
                            *puVar11 = 0xd;
                            puVar11[2] = uVar6;
                            if (puVar11 == NULL) {
                                uVar12 = 0;
                            }
                            else {
                                uVar12 = uVar2;
                                if (0xffff < uVar2) {
                                    do {
                                        uVar12 = (uVar12 >> 0x10) + (uVar12 & 0xffff);
                                    } while (uVar12 >> 0x10 != 0);
                                }
                                uVar12 = uVar12 ^ 0xffff;
                            }
                            puVar11[1] = uVar12;
                            in_x3 = &uStack_78;
                            in_x4 = &uStack_88;
                            uStack_78 = CONCAT44(*(arg1_00 + 0x3c),uStack_78);
                            uStack_88 = CONCAT44(*(pcVar15 + -0x6c),uStack_88);
                            sym.qrtr_node_enqueue(arg1_01,iVar10,0xd,in_x3);
                        }
                        else if (((arg1_01 != NULL) && (arg1_00 != arg1_01)) && (*(pcVar15 + -0x6c) != -1)) {
                            iVar5 = *(pcVar15 + -0x68) - *(arg1_00 + 0x40);
                            iVar7 = -iVar5;
                            if (-1 < iVar5) {
                                iVar7 = iVar5;
                            }
                            if (1 < iVar7) goto code_r0x0800286c;
                        }
                        pcVar15 = *pcVar15;
                    } while (pcVar15 != obj.qrtr_all_epts);
                }
                up_read(obj.qrtr_epts_lock);
code_r0x080028f0:
                uVar8 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
            }
            iVar10 = ~uStack_c8 + iStack_c0;
            do {
                uVar13 = uStack_c8 + 1;
                if (iVar10 < 1) goto code_r0x08002708;
                piVar9 = piVar9 + 1;
                iVar10 = iVar10 + -1;
                uStack_c8 = uVar13;
            } while (*piVar9 == 0);
        } while (piVar9 != NULL);
        goto code_r0x08002708;
    }
    _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar8);
    mutex_lock(arg1_00 + 0x60);
    uStack_c8 = 0;
    iStack_c0 = 0;
code_r0x08002968:
    piVar9 = radix_tree_next_chunk(arg1_00 + 0x50,&uStack_c8,0);
    if (piVar9 != NULL) {
        do {
            in_x3 = NULL;
            __wake_up(*piVar9,1,0);
            iVar10 = ~uStack_c8 + iStack_c0;
            do {
                uVar13 = uStack_c8 + 1;
                if (iVar10 < 1) goto code_r0x08002968;
                piVar9 = piVar9 + 1;
                iVar10 = iVar10 + -1;
                uStack_c8 = uVar13;
            } while (*piVar9 == 0);
        } while (piVar9 != NULL);
        goto code_r0x08002968;
    }
    mutex_unlock(arg1_00 + 0x60);
    uVar8 = sym.qrtr_node_release(arg1_00);
    *(arg1 + 8) = 0;
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qrtr_local_enqueue;
    iVar14 = *(extraout_x1 + 0x18);
    iVar10 = sym.qrtr_port_lookup(*(in_x4 + 1));
    if (iVar10 == 0) {
        if (*(in_x4 + 1) != -2) goto code_r0x08002b7c;
    }
    else {
        if (iVar10 == *(extraout_x1 + 0x18)) {
            piVar1 = iVar10 + 0x80;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar7 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar7 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(iVar10);
            }
            else if (iVar7 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
code_r0x08002b7c:
            kfree_skb(extraout_x1);
            return 0xffffffed;
        }
        if ((iVar14 == 0) || (*(iVar14 + 0x248) != 0x66)) {
            *(extraout_x1 + 0x28) = *(in_x3 + 4);
            *(extraout_x1 + 0x2c) = *(in_x3 + 1);
            iVar7 = sock_queue_rcv_skb(iVar10,extraout_x1);
            piVar1 = iVar10 + 0x80;
            if (iVar7 != 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar7 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = iVar7 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (iVar7 == 1) {
                    DataMemoryBarrier(2,1);
                    sk_free(iVar10);
                }
                else if (iVar7 < 1) {
                    refcount_warn_saturate(piVar1,3);
                }
                kfree_skb(extraout_x1);
                return 0xffffffe4;
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar7 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar7 != 1) {
                if (0 < iVar7) {
                    return 0;
                }
                refcount_warn_saturate(piVar1,3);
                return 0;
            }
            DataMemoryBarrier(2,1);
            sk_free(iVar10);
            return 0;
        }
        *(iVar14 + 0x248) = 0x66;
        sk_error_report(iVar14);
        piVar1 = iVar10 + 0x80;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar7 == 1) {
            DataMemoryBarrier(2,1);
            sk_free(iVar10);
        }
        else if (iVar7 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    kfree_skb(extraout_x1);
    return 0;
}


// ===== sym.qrtr_local_enqueue @ 0x08002a0c (size 668) =====

ulong sym.qrtr_local_enqueue(ulong noname_0,int64_t arg1,uchar noname_2 [16],int64_t arg2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    int64_t in_x4;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x18);
    iVar5 = sym.qrtr_port_lookup(*(in_x4 + 8));
    if (iVar5 == 0) {
        if (*(in_x4 + 8) != -2) goto code_r0x08002b7c;
    }
    else {
        if (iVar5 == *(arg1 + 0x18)) {
            piVar1 = iVar5 + 0x80;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar4 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(iVar5);
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
code_r0x08002b7c:
            kfree_skb(arg1);
            return 0xffffffed;
        }
        if ((iVar6 == 0) || (*(iVar6 + 0x248) != 0x66)) {
            *(arg1 + 0x28) = *(arg2 + 4);
            *(arg1 + 0x2c) = *(arg2 + 8);
            iVar4 = sock_queue_rcv_skb(iVar5,arg1);
            piVar1 = iVar5 + 0x80;
            if (iVar4 != 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    iVar4 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = iVar4 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (iVar4 == 1) {
                    DataMemoryBarrier(2,1);
                    sk_free(iVar5);
                }
                else if (iVar4 < 1) {
                    refcount_warn_saturate(piVar1,3);
                }
                kfree_skb(arg1);
                return 0xffffffe4;
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = iVar4 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar4 != 1) {
                if (0 < iVar4) {
                    return 0;
                }
                refcount_warn_saturate(piVar1,3);
                return 0;
            }
            DataMemoryBarrier(2,1);
            sk_free(iVar5);
            return 0;
        }
        *(iVar6 + 0x248) = 0x66;
        sk_error_report(iVar6);
        piVar1 = iVar5 + 0x80;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sk_free(iVar5);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    kfree_skb(arg1);
    return 0;
}


// ===== sym.qrtr_node_release @ 0x08002ca8 (size 196) =====

void sym.qrtr_node_release(int64_t arg1)

{
    int *arg1_00;
    int iVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        arg1_00 = arg1 + 0x38;
        uVar4 = refcount_dec_not_one(arg1_00);
        if ((uVar4 & 1) == 0) {
            down_write(obj.qrtr_epts_lock);
            Hint_Prefetch(arg1_00,2,0,1);
            do {
                iVar1 = *arg1_00;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
                if (bVar3) {
                    *arg1_00 = iVar1 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar1 == 1) {
                DataMemoryBarrier(2,1);
                sym.__qrtr_node_release(arg1_00);
            }
            else {
                if (iVar1 < 1) {
                    refcount_warn_saturate(arg1_00,3);
                }
                up_write(obj.qrtr_epts_lock);
            }
        }
    }
    return;
}


// ===== sym.qrtr_tx_resume @ 0x08002d6c (size 520) =====

void sym.qrtr_tx_resume(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int *piVar6;
    int64_t extraout_x8;
    ulong *in_x18;
    int64_t *unaff_x21;
    int64_t unaff_x22;
    int64_t *unaff_x23;
    int64_t *piVar7;
    int64_t *unaff_x24;
    int64_t *piVar8;
    int64_t unaff_x25;
    int unaff_w26;
    ulong unaff_x30;
    uchar in_q1 [16];
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0x2a;
    skb_copy_bits(arg2,0,&uStack_70,0x14);
    if (uStack_70 != 7) goto code_r0x08002f20;
    unaff_x22 = arg1 + 0x60;
    uStack_7c = uStack_70._4_4_;
    uStack_78 = uStack_68;
    unaff_x21 = CONCAT44(uStack_70._4_4_,uStack_68);
    mutex_lock(unaff_x22);
    arg1 = radix_tree_lookup(arg1 + 0x50,unaff_x21);
    mutex_unlock(unaff_x22);
    if (arg1 == NULL) goto code_r0x08002f20;
    unaff_x21 = arg1 + 0x30;
    unaff_x22 = _raw_spin_lock_irqsave(unaff_x21);
    *(arg1 + 0x18) = 0;
    __wake_up(arg1,1,0,0);
    arg1 = arg1 + 0x20;
    unaff_x24 = *arg1;
    if (unaff_x24 == arg1) goto code_r0x08002f0c;
    unaff_w26 = 1;
    unaff_x25 = -0x2152ffffffffff00;
    unaff_x23 = unaff_x24;
    do {
        piVar8 = *unaff_x23;
        uVar4 = __list_del_entry_valid(unaff_x23);
        if ((uVar4 & 1) != 0) {
            iVar5 = *unaff_x23;
            piVar7 = unaff_x23[1];
            *(iVar5 + 8) = piVar7;
            *piVar7 = iVar5;
        }
        *unaff_x23 = unaff_x25;
        unaff_x23[1] = unaff_x25 + 0x22;
        iVar5 = __alloc_skb(0,0xa20,0,0xffffffff);
        if (iVar5 != 0) {
            sym.qrtr_local_enqueue(unaff_x23[2],iVar5,in_q1,&uStack_80);
        }
        iVar5 = unaff_x23[2];
        piVar6 = iVar5 + 0x80;
        piVar7 = unaff_x23;
        unaff_x23 = piVar8;
        while( true ) {
            Hint_Prefetch(piVar6,2,0,1);
            do {
                iVar1 = *piVar6;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar6,0x10);
                if (bVar3) {
                    *piVar6 = iVar1 - unaff_w26;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar1 == 1) {
                DataMemoryBarrier(2,1);
                sk_free(iVar5);
            }
            else if (iVar1 < 1) {
                refcount_warn_saturate(piVar6,3);
            }
            kfree(piVar7);
            unaff_x24 = unaff_x23;
            if (unaff_x23 != arg1) break;
code_r0x08002f0c:
            _raw_spin_unlock_irqrestore(unaff_x21,unaff_x22);
            consume_skb(arg2);
code_r0x08002f20:
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_58) {
                return;
            }
            piVar6 = __stack_chk_fail();
            iVar5 = extraout_x8;
            piVar7 = unaff_x23;
            unaff_x23 = unaff_x24;
        }
    } while( true );
}


// ===== sym.qrtr_node_enqueue @ 0x08002f74 (size 1180) =====

//WARNING: Removing unreachable block (ram,0x080033ac)

uint32_t sym.qrtr_node_enqueue(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    char cVar6;
    bool bVar7;
    int64_t iVar8;
    uint32_t arg4_00;
    uint32_t uVar9;
    int iVar10;
    uint *puVar11;
    int64_t in_x4;
    ulong *in_x18;
    code *pcVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    arg4_00 = arg3;
    iVar4 = *(arg2 + 0x70);
    mutex_lock();
    piVar1 = arg1 + 0x44;
    if (((arg4_00 == 2) || (*piVar1 != 0)) && ((arg4_00 != 2 || (*piVar1 == 0)))) {
        if (arg4_00 != 2) goto code_r0x08003060;
        if (*piVar1 != 0) goto code_r0x08003060;
        goto code_r0x080033b8;
    }
    kfree_skb(arg2);
    mutex_unlock(arg1);
    uVar9 = 0;
    do {
        while( true ) {
            iVar8 = sp_el0;
            if (*(iVar8 + 0x5e0) == iStack_68) {
                return uVar9;
            }
            __stack_chk_fail();
code_r0x080033b8:
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = *piVar1 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
code_r0x08003060:
            mutex_unlock(arg1);
            if (*(arg2 + 0x18) == 0) break;
            uVar9 = sym.qrtr_tx_wait(arg1,in_x4,*(arg2 + 0x18),arg4_00);
            uVar13 = uVar9;
            if (-1 < uVar9) goto code_r0x08003098;
            kfree_skb(arg2);
        }
        uVar13 = *(arg2 + 0x39);
code_r0x08003098:
        puVar11 = skb_push(arg2,0x20);
        *puVar11 = 1;
        puVar11[1] = arg4_00;
        puVar11[2] = *(arg4 + 4);
        puVar11[3] = *(arg4 + 8);
        if (*(in_x4 + 8) == -2) {
            puVar11[6] = *(arg1 + 0x3c);
            uVar5 = 0xfffffffe;
        }
        else {
            puVar11[6] = *(in_x4 + 4);
            uVar5 = *(in_x4 + 8);
        }
        puVar11[7] = uVar5;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        puVar11[4] = uVar13 != 0;
        puVar11[5] = iVar4;
        uStack_70 = 0;
        if ((arg2 != 0) && (puVar11 != NULL)) {
            uVar9 = puVar11[1];
            arg4 = uVar9;
            if (uVar9 == 1) {
                skb_copy_bits(arg2,0x20,&uStack_88,8);
                iVar8 = sp_el0;
                ipc_log_string(*(arg1 + 0x150),
                               "TX DATA: Len:0x%x CF:0x%x src[0x%x:0x%x] dst[0x%x:0x%x] [%08x %08x] [%s]\n",puVar11[5]
                               ,puVar11[4],puVar11[2],puVar11[3],puVar11[6],puVar11[7],uStack_88,
                               uStack_88 >> 0x20,iVar8 + 0x7a8);
            }
            else {
                skb_copy_bits(arg2,0x20,&uStack_80,0x14);
                uVar2 = uVar9 & 0xfffffffe;
                if (uVar2 == 2) {
                    ipc_log_string(*(arg1 + 0x150),"TX CTRL: cmd:0x%x node[0x%x]\n",arg4,puVar11[2]);
                    if ((puVar11[6] == 3) || (puVar11[6] == 0)) {
                        _printk(0x80009c0,arg4,puVar11[2]);
                    }
                }
                else if (uVar2 == 6) {
                    ipc_log_string(*(arg1 + 0x150),"TX CTRL: cmd:0x%x addr[0x%x:0x%x]\n",uVar9,uStack_80._4_4_,
                                   uStack_78 & 0xffffffff);
                }
                else if (uVar2 == 4) {
                    ipc_log_string(*(arg1 + 0x150),"TX CTRL: cmd:0x%x SVC[0x%x:0x%x] addr[0x%x:0x%x]\n",arg4,
                                   uStack_80._4_4_,uStack_78 & 0xffffffff,uStack_78._4_4_,uStack_70);
                }
                else if (uVar9 == 0xd) {
                    ipc_log_string(*(arg1 + 0x150),"TX CTRL: cmd:0x%x node[0x%x]\n",0xd,uStack_78 & 0xffffffff);
                }
            }
        }
        if (*(arg2 + 0x74) == 0) {
            uVar9 = iVar4 + 0x23U & 0xfffffffc;
            iVar3 = uVar9 - *(arg2 + 0x70);
            if (uVar9 < *(arg2 + 0x70) || iVar3 == 0) goto code_r0x08003188;
            iVar10 = __skb_pad(arg2,iVar3,1);
            if (iVar10 == 0) {
                if (*(arg2 + 0x74) != 0) {
    //WARNING: Does not return
                    pcVar12 = SoftwareBreakpoint(0x800,0x80033d4);
                    (*pcVar12)();
                }
                *(arg2 + 200) = *(arg2 + 200) + iVar3;
                *(arg2 + 0x70) = *(arg2 + 0x70) + iVar3;
                goto code_r0x08003188;
            }
            uVar9 = 0xfffffff4;
            _printk(0x8000ad5,"qrtr_node_enqueue",*(arg2 + 0x70),*(arg2 + 0x70) + 3U & 0xfffffffc,0xfffffff4);
code_r0x080031e8:
            if (uVar13 != 0) {
                uVar13 = *(in_x4 + 4);
                iVar3 = *(in_x4 + 8);
                arg2 = arg1 + 0x60;
                mutex_lock(arg2);
                in_x4 = radix_tree_lookup(arg1 + 0x50,iVar3 | uVar13 << 0x20);
                mutex_unlock(arg2);
                if (in_x4 != 0) {
                    arg2 = in_x4 + 0x30;
                    _raw_spin_lock_irq(arg2);
                    *(in_x4 + 0x1c) = 1;
                    _raw_spin_unlock_irq(arg2);
                }
            }
        }
        else {
            sym.qrtr_pad_word_pskb(arg2);
code_r0x08003188:
            mutex_lock(arg1);
            if (*(arg1 + 0x30) == NULL) {
                kfree_skb(arg2);
                uVar9 = 0xffffffed;
            }
            else {
                pcVar12 = **(arg1 + 0x30);
                __cfi_slowpath_diag(0x27a79143e48b18f9,pcVar12,0x80007e0);
                uVar9 = (*pcVar12)(*(arg1 + 0x30),arg2);
            }
            mutex_unlock(arg1);
            if (uVar9 != 0) goto code_r0x080031e8;
        }
        if ((arg4_00 == 2) && (uVar9 != 0)) {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar6 = '\x01';
                bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                    *piVar1 = *piVar1 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                }
            } while (cVar6 != '\0');
            kthread_queue_work(arg1 + 0xb8,arg1 + 0x120);
        }
    } while( true );
}


// ===== sym.qrtr_tx_wait @ 0x08003410 (size 984) =====

uint64_t sym.qrtr_tx_wait(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    ulong uVar8;
    uint32_t in_w4;
    int64_t iVar9;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x22;
    ulong *puVar10;
    int64_t *unaff_x24;
    int64_t *piVar11;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (arg4 != 1) {
        piVar11 = NULL;
        goto code_r0x080036e8;
    }
    uVar8 = CONCAT44(*(arg2 + 4),*(arg2 + 8));
    if ((in_w4 >> 6 & 1) == 0) {
        unaff_x24 = *(arg3 + 0x198);
    }
    else {
        unaff_x24 = NULL;
    }
    unaff_x21 = arg1 + 0x60;
    mutex_lock(unaff_x21);
    unaff_x22 = radix_tree_lookup(arg1 + 0x50,uVar8);
    iVar5 = unaff_x22;
    unaff_x19 = arg2;
    unaff_x20 = arg1;
    if (unaff_x22 == 0) {
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x38);
        if (iVar5 == 0) {
code_r0x08003560:
            mutex_unlock(unaff_x21);
            piVar11 = 0x1;
            goto code_r0x080036e8;
        }
        *(iVar5 + 0x20) = iVar5 + 0x20;
        *(iVar5 + 0x28) = iVar5 + 0x20;
        __init_waitqueue_head(iVar5,"&flow->resume_tx",obj.qrtr_port_lock);
        *(iVar5 + 0x30) = 0;
        iVar4 = radix_tree_insert(arg1 + 0x50,uVar8,iVar5);
        if (iVar4 != 0) {
            kfree(iVar5);
            unaff_x22 = iVar5;
            goto code_r0x08003560;
        }
    }
    mutex_unlock(unaff_x21);
    unaff_x21 = iVar5 + 0x30;
    _raw_spin_lock_irq(unaff_x21);
    piVar11 = unaff_x24;
    if ((*(iVar5 + 0x18) < 10) || (*(iVar5 + 0x1c) != 0)) {
        if (unaff_x24 != NULL) goto code_r0x080034c8;
        piVar11 = 0x1;
        iVar9 = *(arg1 + 0x30);
    }
    else {
        if (*(arg1 + 0x30) == 0 && unaff_x24 == NULL) {
            piVar11 = 0x1;
        }
        if ((*(arg1 + 0x30) != 0) && (piVar11 != NULL)) {
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            init_wait_entry(&uStack_80,0);
            piVar11 = prepare_to_wait_event(iVar5,&uStack_80,1);
            if (9 < *(iVar5 + 0x18)) {
                while (*(iVar5 + 0x1c) == 0) {
                    if (*(arg1 + 0x30) == 0 && unaff_x24 == NULL) {
                        unaff_x24 = 0x1;
                    }
                    if ((*(arg1 + 0x30) == 0) || (unaff_x24 == NULL)) goto code_r0x080035d8;
                    if (piVar11 != NULL) goto code_r0x080034c8;
                    _raw_spin_unlock_irq(unaff_x21);
                    unaff_x24 = schedule_timeout(unaff_x24);
                    _raw_spin_lock_irq(unaff_x21);
                    piVar11 = prepare_to_wait_event(iVar5,&uStack_80,1);
                    if (*(iVar5 + 0x18) < 10) break;
                }
            }
            if (unaff_x24 == NULL) {
                unaff_x24 = 0x1;
            }
code_r0x080035d8:
            finish_wait(iVar5,&uStack_80);
            piVar11 = unaff_x24;
        }
code_r0x080034c8:
        if (piVar11 < 0) goto code_r0x080036e0;
        iVar9 = *(arg1 + 0x30);
    }
    if (iVar9 == 0) {
        piVar11 = 0xffffffe0;
    }
    else if (*(iVar5 + 0x1c) == 0) {
        if ((piVar11 == NULL) && (9 < *(iVar5 + 0x18))) {
            unaff_x24 = iVar5 + 0x20;
            for (piVar11 = *unaff_x24; unaff_x22 = iVar5, piVar11 != unaff_x24; piVar11 = *piVar11) {
                if (piVar11[2] == arg3) {
                    _raw_spin_unlock_irq(unaff_x21);
                    piVar11 = 0xfffffff5;
                    goto code_r0x080036e8;
                }
            }
            iVar9 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar9 = 0x30;
            }
            piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xb20,0x18);
            if (piVar11 != NULL) {
                puVar7 = arg3 + 0x80;
                piVar11[2] = arg3;
                goto code_r0x080037bc;
            }
            _raw_spin_unlock_irq(unaff_x21);
            piVar11 = 0xfffffff4;
            goto code_r0x080036e8;
        }
        iVar4 = *(iVar5 + 0x18) + 1;
        piVar11 = iVar4 == 5;
        *(iVar5 + 0x18) = iVar4;
    }
    else {
        piVar11 = 0x1;
        *(iVar5 + 0x1c) = 0;
    }
code_r0x080036e0:
    do {
        _raw_spin_unlock_irq(unaff_x21);
        unaff_x19 = arg2;
        unaff_x20 = arg1;
        unaff_x22 = iVar5;
code_r0x080036e8:
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return piVar11 & 0xffffffff;
        }
        puVar7 = __stack_chk_fail();
        arg2 = unaff_x19;
        arg1 = unaff_x20;
        iVar5 = unaff_x22;
code_r0x080037bc:
        Hint_Prefetch(puVar7,2,0,1);
        do {
            uVar1 = *puVar7;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar7,0x10);
            if (bVar3) {
                *puVar7 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 0) {
            uVar8 = 2;
code_r0x080037c8:
            refcount_warn_saturate(puVar7,uVar8);
        }
        else if ((uVar1 + 1 | uVar1) < 0) {
            uVar8 = 1;
            goto code_r0x080037c8;
        }
        puVar10 = *(iVar5 + 0x28);
        uVar6 = __list_add_valid(piVar11,puVar10,unaff_x24);
        if ((uVar6 & 1) != 0) {
            *(iVar5 + 0x28) = piVar11;
            *piVar11 = unaff_x24;
            piVar11[1] = puVar10;
            *puVar10 = piVar11;
        }
        iVar9 = sp_el0;
        ipc_log_string(*(arg1 + 0x150),"new waiter %s[%d] for [0x%x:0x%x]\n",iVar9 + 0x7a8,*(iVar9 + 0x5d8),
                       *(arg2 + 4),*(arg2 + 8));
        piVar11 = 0xfffffff5;
    } while( true );
}


// ===== sym.qrtr_pad_word_pskb @ 0x080037e8 (size 620) =====

void sym.qrtr_pad_word_pskb(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    int iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *(arg1 + 0x70);
    uVar2 = uVar7 + 3 & 0xfffffffc;
    iVar11 = uVar2 - uVar7;
    if (iVar11 != 0) {
        uVar9 = *(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 2);
        if (uVar9 != 0) {
            iVar12 = 0;
            iVar5 = sp_el0;
            uVar8 = uVar7 - *(arg1 + 0x74);
            do {
                if (iVar12 == 0x120) {
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x8003a54);
                    (*pcVar6)();
                }
                iVar10 = *(arg1 + 0xd0) + *(arg1 + 0xcc) + iVar12;
                iVar3 = *(iVar10 + 0x50);
                uVar1 = iVar3 + uVar8;
                if (uVar7 <= uVar1) {
                    uVar4 = *(iVar10 + 0x54);
                    iVar10 = *(iVar10 + 0x48);
                    if (uVar1 < uVar2) {
                        if (iVar3 != 0) {
                            *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
                            iVar3 = iVar3 - (uVar7 - uVar8);
                            *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + 1;
                            memset(((iVar10 + (uVar4 >> 6 & 0x3ffffc0) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) +
                                   (uVar4 & 0xfff) + (uVar7 - uVar8),0,iVar3);
                            *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + -1;
                            iVar10 = *(iVar5 + 0x10) + -1;
                            *(iVar5 + 0x10) = iVar10;
                            if ((iVar10 == 0) || (*(iVar5 + 0x10) == 0)) {
                                preempt_schedule();
                            }
                            iVar11 = iVar11 - iVar3;
                            uVar7 = *(arg1 + 0x70) + iVar3;
                            *(arg1 + 0x70) = uVar7;
                            *(arg1 + 0x74) = *(arg1 + 0x74) + iVar11;
                            if (uVar7 == uVar2) {
                                return;
                            }
                            goto code_r0x08003860;
                        }
                    }
                    else if (iVar3 != 0) {
                        iVar5 = sp_el0;
                        *(iVar5 + 0x10) = *(iVar5 + 0x10) + 1;
                        *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + 1;
                        memset(((iVar10 + (uVar4 >> 6 & 0x3ffffc0) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) +
                               (uVar4 & 0xfff) + (uVar7 - uVar8),0,iVar11);
                        *(iVar5 + 0xad0) = *(iVar5 + 0xad0) + -1;
                        iVar12 = *(iVar5 + 0x10) + -1;
                        *(iVar5 + 0x10) = iVar12;
                        if ((iVar12 == 0) || (*(iVar5 + 0x10) == 0)) {
                            preempt_schedule();
                        }
                        *(arg1 + 0x70) = uVar2;
                        *(arg1 + 0x74) = *(arg1 + 0x74) + iVar11;
                        return;
                    }
                    uVar1 = uVar8;
                    if (uVar7 == uVar2) {
                        return;
                    }
                }
code_r0x08003860:
                uVar8 = uVar1;
                iVar12 = iVar12 + 0x10;
            } while (uVar9 * 0x10 - iVar12 != 0);
        }
        if (uVar7 != uVar2) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8003a44);
            (*pcVar6)();
        }
    }
    return;
}


// ===== sym.qrtr_node_lookup @ 0x08003a6c (size 220) =====

int64_t sym.qrtr_node_lookup(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(obj.qrtr_epts_lock);
    uVar5 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
    iVar6 = radix_tree_lookup(obj.qrtr_nodes,arg1 & 0xffffffff);
    if (iVar6 != 0) {
        puVar1 = iVar6 + 0x38;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08003adc;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x08003adc:
    _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar5);
    up_read(obj.qrtr_epts_lock);
    return iVar6;
}


// ===== sym.__qrtr_node_release @ 0x08003b48 (size 748) =====

void sym.__qrtr_node_release(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t *piVar5;
    int *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t extraout_x8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t *unaff_x24;
    int64_t *piVar10;
    int64_t *unaff_x27;
    int64_t *unaff_x28;
    ulong unaff_x30;
    uint64_t uStack_88;
    int64_t iStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uVar4 = _raw_spin_lock_irqsave(obj.qrtr_nodes_lock);
    uStack_88 = 0;
    iStack_80 = 0;
code_r0x08003bcc:
    do {
        piVar5 = radix_tree_next_chunk(obj.qrtr_nodes,&uStack_88,0);
        if (piVar5 == NULL) {
            _raw_spin_unlock_irqrestore(obj.qrtr_nodes_lock,uVar4);
            uVar7 = __list_del_entry_valid(arg1 + 0x70);
            if ((uVar7 & 1) != 0) {
                iVar9 = *(arg1 + 0x70);
                piVar5 = *(arg1 + 0x78);
                *(iVar9 + 8) = piVar5;
                *piVar5 = iVar9;
            }
            *(arg1 + 0x70) = 0xdead000000000100;
            *(arg1 + 0x78) = 0xdead000000000122;
            up_write(obj.qrtr_epts_lock);
            kthread_flush_worker(arg1 + 0x80);
            kthread_stop(*(arg1 + 0xb8));
            skb_queue_purge(arg1 + 0x58);
            wakeup_source_unregister(*(arg1 + 0x110));
            xa_destroy(arg1 + 0x120);
            mutex_lock(arg1 + 0x28);
            uStack_88 = 0;
            iStack_80 = 0;
            iVar9 = 0;
code_r0x08003cd0:
            do {
                piVar5 = radix_tree_next_chunk(arg1 + 0x18,&uStack_88,0);
                if (piVar5 == NULL) {
                    mutex_unlock(arg1 + 0x28);
                    kfree(arg1 + -0x38);
                    iVar8 = sp_el0;
                    if (*(iVar8 + 0x5e0) == iStack_68) {
                        return;
                    }
                    piVar6 = __stack_chk_fail();
                    iVar8 = extraout_x8;
                    piVar10 = unaff_x24;
                    unaff_x24 = unaff_x28;
                    goto code_r0x08003e1c;
                }
                do {
                    iVar9 = *piVar5;
                    unaff_x27 = iVar9 + 0x20;
                    unaff_x28 = *unaff_x27;
                    if (unaff_x28 != unaff_x27) {
                        do {
                            unaff_x24 = *unaff_x28;
                            uVar7 = __list_del_entry_valid(unaff_x28);
                            if ((uVar7 & 1) != 0) {
                                iVar8 = *unaff_x28;
                                piVar10 = unaff_x28[1];
                                *(iVar8 + 8) = piVar10;
                                *piVar10 = iVar8;
                            }
                            iVar8 = unaff_x28[2];
                            piVar6 = iVar8 + 0x80;
                            *unaff_x28 = -0x2152ffffffffff00;
                            unaff_x28[1] = -0x2152fffffffffede;
                            piVar10 = unaff_x28;
code_r0x08003e1c:
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
                            if (iVar1 == 1) {
                                DataMemoryBarrier(2,1);
                                sk_free(iVar8);
                            }
                            else if (iVar1 < 1) {
                                refcount_warn_saturate(piVar6,3);
                            }
                            kfree(piVar10);
                            unaff_x28 = unaff_x24;
                        } while (unaff_x24 != unaff_x27);
                    }
                    radix_tree_iter_delete(arg1 + 0x18,&uStack_88,piVar5);
                    kfree(iVar9);
                    iVar8 = ~uStack_88 + iStack_80;
                    do {
                        uVar7 = uStack_88 + 1;
                        if (iVar8 < 1) goto code_r0x08003cd0;
                        piVar5 = piVar5 + 1;
                        iVar8 = iVar8 + -1;
                        uStack_88 = uVar7;
                    } while (*piVar5 == 0);
                } while (piVar5 != NULL);
            } while( true );
        }
        do {
            if (*piVar5 == arg1 + -0x38) {
                radix_tree_iter_delete(obj.qrtr_nodes,&uStack_88,piVar5);
            }
            iVar9 = ~uStack_88 + iStack_80;
            do {
                uVar7 = uStack_88 + 1;
                if (iVar9 < 1) goto code_r0x08003bcc;
                piVar5 = piVar5 + 1;
                iVar9 = iVar9 + -1;
                uStack_88 = uVar7;
            } while (*piVar5 == 0);
        } while (piVar5 != NULL);
    } while( true );
}


// ===== sym.qrtr_create @ 0x08003e34 (size 184) =====

ulong sym.qrtr_create(ulong noname_0,int64_t arg1,uchar noname_2 [16],int64_t arg2)

{
    uint uVar1;
    ulong in_x0;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 4) == 2) {
        iVar2 = sk_alloc(in_x0,0x2a,0xcc0,obj.qrtr_proto,arg2 & 0xffffffff);
        if (iVar2 == 0) {
            uVar3 = 0xfffffff4;
        }
        else {
            *(iVar2 + 0x60) = *(iVar2 + 0x60) | 0x100;
            sock_init_data(arg1,iVar2);
            uVar1 = _segment.ehdr;
            uVar3 = 0;
            *(arg1 + 0x20) = obj.qrtr_proto_ops;
            *(iVar2 + 0x368) = 0x2a;
            *(iVar2 + 0x370) = 0;
            *(iVar2 + 0x36c) = uVar1;
            *(iVar2 + 0x380) = 0xffffffff;
        }
    }
    else {
        uVar3 = 0xffffffa5;
    }
    return uVar3;
}


// ===== sym.qrtr_release @ 0x08003eec (size 412) =====

ulong sym.qrtr_release(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    code *pcVar6;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x18);
    if (arg1_00 != 0) {
        lock_sock_nested(arg1_00,0);
        if (*(arg1_00 + 0x370) == -2) {
            down_write(obj.qrtr_epts_lock);
            for (pcVar6 = _obj.qrtr_all_epts; pcVar6 != obj.qrtr_all_epts; pcVar6 = *pcVar6) {
                *(pcVar6 + -100) = 0;
                *(pcVar6 + -0x60) = 0;
            }
            up_write(obj.qrtr_epts_lock);
        }
        *(arg1_00 + 0x290) = 3;
        uVar5 = *(arg1_00 + 0x60);
        if ((uVar5 & 1) == 0) {
            pcVar6 = *(arg1_00 + 0x2d0);
            __cfi_slowpath_diag(0x644e8cc6b20381ce,pcVar6,0x8000800);
            (*pcVar6)(arg1_00);
            uVar5 = *(arg1_00 + 0x60);
        }
        *(arg1_00 + 0x60) = uVar5 | 1;
        _raw_write_lock_bh(arg1_00 + 0x240);
        *(arg1_00 + 0x2a0) = 0;
        *(arg1_00 + 0x118) = 0;
        *(arg1_00 + 0x60) = *(arg1_00 + 0x60) | 1;
        _raw_write_unlock_bh(arg1_00 + 0x240);
        *(arg1 + 0x18) = 0;
        if ((*(arg1_00 + 0x60) >> 8 & 1) == 0) {
            sym.qrtr_port_remove(arg1_00);
        }
        skb_queue_purge(arg1_00 + 0xd0);
        release_sock(arg1_00);
        piVar1 = arg1_00 + 0x80;
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
            sk_free(arg1_00);
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return 0;
}


// ===== sym.qrtr_bind @ 0x08004088 (size 348) =====

int sym.qrtr_bind(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint *arg1_00;
    int16_t *piVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t arg1_01;
    uint32_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    if ((0xb < arg3) && (*arg2 == 0x2a)) {
        iVar4 = *(arg1 + 0x18);
        if (*(arg2 + 4) == *(iVar4 + 0x36c)) {
            lock_sock_nested(iVar4,0);
            arg1_01 = *(arg1 + 0x18);
            uVar5 = *(iVar4 + 0x60);
            if (((uVar5 >> 8 & 1) == 0) && (*(arg2 + 8) == *(arg1_01 + 0x370))) {
                iVar1 = 0;
            }
            else {
                uVar3 = _raw_spin_lock_irqsave(obj.qrtr_port_lock);
                iStack_4c = *(arg2 + 8);
                iVar1 = sym.qrtr_port_assign(arg1_01,&iStack_4c);
                if (iVar1 == 0) {
                    if (iStack_4c == -2) {
                        sym.qrtr_reset_ports();
                    }
                    _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar3);
                    if ((uVar5 >> 8 & 1) == 0) {
                        sym.qrtr_port_remove(arg1_01);
                    }
                    iVar1 = 0;
                    *(arg1_01 + 0x370) = iStack_4c;
                    *(arg1_01 + 0x60) = *(arg1_01 + 0x60) & 0xfffffffffffffeff;
                }
                else {
                    _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar3);
                }
            }
            release_sock(iVar4);
            goto code_r0x08004118;
        }
    }
    iVar1 = -0x16;
code_r0x08004118:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return iVar1;
    }
    auVar6 = __stack_chk_fail();
    piVar2 = auVar6._8_8_;
    arg1_00 = auVar6._0_8_;
    *extraout_x18 = sym.qrtr_connect;
    if ((arg3 < 0xc) || (*piVar2 != 0x2a)) {
        iVar1 = -0x16;
    }
    else {
        iVar4 = *(arg1_00 + 6);
        lock_sock_nested(iVar4,0);
        *(iVar4 + 0x12) = 7;
        *arg1_00 = 1;
        iVar1 = sym.qrtr_autobind(arg1_00);
        if (iVar1 == 0) {
            uVar3 = *piVar2;
            *(iVar4 + 0x37c) = *(piVar2 + 4);
            *(iVar4 + 0x374) = uVar3;
            *arg1_00 = 3;
            *(iVar4 + 0x12) = 1;
        }
        release_sock(iVar4);
    }
    return iVar1;
}


// ===== sym.qrtr_connect @ 0x080041e4 (size 184) =====

int sym.qrtr_connect(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg3 < 0xc) || (*arg2 != 0x2a)) {
        iVar1 = -0x16;
    }
    else {
        iVar3 = *(arg1 + 0x18);
        lock_sock_nested(iVar3,0);
        *(iVar3 + 0x12) = 7;
        *arg1 = 1;
        iVar1 = sym.qrtr_autobind(arg1);
        if (iVar1 == 0) {
            uVar2 = *arg2;
            *(iVar3 + 0x37c) = *(arg2 + 8);
            *(iVar3 + 0x374) = uVar2;
            *arg1 = 3;
            *(iVar3 + 0x12) = 1;
        }
        release_sock(iVar3);
    }
    return iVar1;
}


// ===== sym.qrtr_getname @ 0x0800429c (size 216) =====

uint sym.qrtr_getname(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ushort uVar3;
    bool bVar4;
    int iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *extraout_x8;
    ulong *puVar9;
    ulong uVar10;
    int64_t *piVar11;
    uint32_t *extraout_x9;
    uint32_t extraout_w10;
    uint32_t uVar12;
    uint32_t *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar14;
    uint uVar15;
    ulong unaff_x30;
    uchar auVar16 [12];
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    iVar14 = *(arg1 + 0x18);
    puVar6 = arg3;
    lock_sock_nested(iVar14,0);
    if (arg3 == 0) {
        iVar8 = 0x36a;
code_r0x080042f8:
        uVar10 = *(iVar14 + iVar8);
        uVar3 = *(iVar14 + iVar8 + 1);
        release_sock(iVar14);
        uVar15 = 0xc;
        *arg2 = 0x2a;
        *(arg2 + 2) = uVar10;
        *(arg2 + 10) = uVar3;
    }
    else {
        if (*(iVar14 + 0x12) == '\x01') {
            iVar8 = 0x376;
            goto code_r0x080042f8;
        }
        release_sock(iVar14);
        uVar15 = 0xffffff95;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iVar7) {
        return uVar15;
    }
    auVar16 = __stack_chk_fail(uVar15);
    iVar5 = auVar16._8_4_;
    *extraout_x18 = sym.qrtr_ioctl;
    pcStack_78 = sym.qrtr_ioctl;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    iVar7 = *(auVar16._0_8_ + 0x18);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    lock_sock_nested(iVar7,0);
    uVar12 = iVar5 - 0x890b;
    if (uVar12 < 0x12) {
        uVar15 = 0xffffffea;
        if ((1 << (uVar12 & 0x1f) & 0x3f803U) != 0) goto code_r0x080043f0;
        if (uVar12 == 10) {
            iVar5 = get_user_ifreq(&uStack_b0,0,puVar6);
            uVar15 = 0xfffffff2;
            if (iVar5 == 0) {
                uStack_a0 = *(iVar7 + 0x368);
                uStack_98 = CONCAT44(uStack_98._4_4_,*(iVar7 + 0x370));
                iVar5 = put_user_ifreq(&uStack_b0,puVar6);
                uVar15 = 0;
                if (iVar5 != 0) {
                    uVar15 = 0xfffffff2;
                }
            }
            goto code_r0x080043f0;
        }
    }
    if (iVar5 == 0x541b) {
        uVar12 = 0;
        piVar11 = *(iVar7 + 0xd0);
        if ((piVar11 != iVar7 + 0xd0) && (piVar11 != NULL)) {
            uVar12 = *(piVar11 + 0xe);
        }
        puVar9 = sp_el0;
        if (((*(puVar9 + 0x3e) >> 5 & 1) != 0) || (puVar13 = puVar6, (*puVar9 >> 0x1a & 1) != 0)) {
            puVar13 = puVar6 & (puVar6 << 8) >> 8;
        }
        uVar15 = 0xfffffff2;
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar2 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar2) && !CARRY8(puVar13 + ~uVar2,bVar4) || puVar13 == uVar2 + !bVar4) {
            if ((puVar6 & (puVar6 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar6 = NULL;
            }
            if ((_sock_no_accept >> 0x18 & 1) == 0) {
                uVar2 = daif;
                if ((uVar2 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar9[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar9[1];
                InstructionSynchronizationBarrier();
                daif = uVar2;
            }
            uVar15 = 0;
            *puVar6 = uVar12;
            if ((_sock_no_accept >> 0x18 & 1) == 0) {
                uVar2 = daif;
                if ((uVar2 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar2;
            }
        }
    }
    else if (iVar5 == 0x5411) {
        puVar9 = sp_el0;
        uVar2 = (puVar6 << 8) >> 8;
        if (((*(puVar9 + 0x3e) >> 5 & 1) != 0) || (puVar13 = puVar6, (*puVar9 >> 0x1a & 1) != 0)) {
            puVar13 = puVar6 & uVar2;
        }
        uVar15 = 0xfffffff2;
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar1 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar1) && !CARRY8(puVar13 + ~uVar1,bVar4) || puVar13 == uVar1 + !bVar4) {
            uVar12 = (*(iVar7 + 0x14c) - *(iVar7 + 0x154)) + 1;
            if ((puVar6 & uVar2 & 0xffffff8000000000) != 0) {
                puVar6 = NULL;
            }
            uVar12 = uVar12 & (uVar12 >> 0x1f ^ 0xffffffffU);
            goto code_r0x080046ac;
        }
    }
    else {
        uVar15 = 0xfffffdfd;
    }
code_r0x080043f0:
    while( true ) {
        release_sock(iVar7);
        iVar14 = sp_el0;
        if (*(iVar14 + 0x5e0) == iStack_88) break;
        __stack_chk_fail();
        puVar9 = extraout_x8;
        puVar6 = extraout_x9;
        uVar12 = extraout_w10;
code_r0x080046ac:
        if ((_sock_no_accept >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar9[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar9[1];
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        uVar15 = 0;
        *puVar6 = uVar12;
        if ((_sock_no_accept >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
    }
    return uVar15;
}


// ===== sym.qrtr_ioctl @ 0x08004374 (size 900) =====

uint sym.qrtr_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    bool bVar3;
    int iVar4;
    uint uVar5;
    ulong *extraout_x8;
    ulong *puVar6;
    int64_t *piVar7;
    uint32_t *extraout_x9;
    uint32_t extraout_w10;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    uint uVar12;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar4 = arg2;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x18);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    lock_sock_nested(iVar11,0);
    uVar8 = iVar4 - 0x890b;
    if (uVar8 < 0x12) {
        uVar12 = 0xffffffea;
        if ((1 << (uVar8 & 0x1f) & 0x3f803U) != 0) goto code_r0x080043f0;
        if (uVar8 == 10) {
            iVar4 = get_user_ifreq(&uStack_60,0,arg3);
            uVar12 = 0xfffffff2;
            if (iVar4 == 0) {
                uStack_50 = *(iVar11 + 0x368);
                uStack_48 = CONCAT44(uStack_48._4_4_,*(iVar11 + 0x370));
                iVar4 = put_user_ifreq(&uStack_60,arg3);
                uVar12 = 0;
                if (iVar4 != 0) {
                    uVar12 = 0xfffffff2;
                }
            }
            goto code_r0x080043f0;
        }
    }
    if (iVar4 == 0x541b) {
        uVar5 = 0;
        piVar7 = *(iVar11 + 0xd0);
        if ((piVar7 != iVar11 + 0xd0) && (piVar7 != NULL)) {
            uVar5 = *(piVar7 + 0xe);
        }
        puVar6 = sp_el0;
        if (((*(puVar6 + 0x3e) >> 5 & 1) != 0) || (uVar9 = arg3, (*puVar6 >> 0x1a & 1) != 0)) {
            uVar9 = arg3 & (arg3 << 8) >> 8;
        }
        uVar12 = 0xfffffff2;
        bVar3 = 0xfffffffffffffffb < uVar9;
        uVar9 = uVar9 + 4;
        uVar10 = 0;
        if (!bVar3 || uVar9 == 0) {
            uVar10 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar9 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar9,~uVar10) && !CARRY8(uVar9 + ~uVar10,bVar3) || uVar9 == uVar10 + !bVar3) {
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                arg3 = 0;
            }
            if ((_sock_no_accept >> 0x18 & 1) == 0) {
                uVar9 = daif;
                if ((uVar9 & 0x80) == 0) {
                    uVar10 = daif;
                    daif = uVar10 | 0xc0;
                }
                uVar10 = ttbr1_el1;
                ttbr1_el1 = puVar6[1] & 0xffff000000000000 | uVar10 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar6[1];
                InstructionSynchronizationBarrier();
                daif = uVar9;
            }
            uVar12 = 0;
            *arg3 = uVar5;
            if ((_sock_no_accept >> 0x18 & 1) == 0) {
                uVar9 = daif;
                if ((uVar9 & 0x80) == 0) {
                    uVar10 = daif;
                    daif = uVar10 | 0xc0;
                }
                uVar10 = ttbr1_el1;
                ttbr0_el1 = (uVar10 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar10 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar9;
            }
        }
    }
    else if (iVar4 == 0x5411) {
        puVar6 = sp_el0;
        uVar9 = (arg3 << 8) >> 8;
        if (((*(puVar6 + 0x3e) >> 5 & 1) != 0) || (uVar10 = arg3, (*puVar6 >> 0x1a & 1) != 0)) {
            uVar10 = arg3 & uVar9;
        }
        uVar12 = 0xfffffff2;
        bVar3 = 0xfffffffffffffffb < uVar10;
        uVar10 = uVar10 + 4;
        uVar1 = 0;
        if (!bVar3 || uVar10 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar10 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar3) || uVar10 == uVar1 + !bVar3) {
            uVar8 = (*(iVar11 + 0x14c) - *(iVar11 + 0x154)) + 1;
            if ((arg3 & uVar9 & 0xffffff8000000000) != 0) {
                arg3 = 0;
            }
            uVar8 = uVar8 & (uVar8 >> 0x1f ^ 0xffffffffU);
            goto code_r0x080046ac;
        }
    }
    else {
        uVar12 = 0xfffffdfd;
    }
code_r0x080043f0:
    while( true ) {
        release_sock(iVar11);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        puVar6 = extraout_x8;
        arg3 = extraout_x9;
        uVar8 = extraout_w10;
code_r0x080046ac:
        if ((_sock_no_accept >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr1_el1 = puVar6[1] & 0xffff000000000000 | uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar6[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        uVar12 = 0;
        *arg3 = uVar8;
        if ((_sock_no_accept >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr0_el1 = (uVar10 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
    }
    return uVar12;
}


// ===== sym.qrtr_sendmsg @ 0x08004774 (size 992) =====

uint64_t sym.qrtr_sendmsg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *puVar6;
    uint uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int16_t *piVar10;
    uint64_t arg1_00;
    code *unaff_x24;
    code *pcVar11;
    int64_t unaff_x25;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uint32_t uStack_74;
    ulong uStack_70;
    uint64_t uStack_68;
    uint uStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_5c = 1;
    piVar10 = *arg2;
    uStack_60 = 0;
    iVar9 = *(arg1 + 0x18);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_74 = 0;
    puVar6 = arg3;
    pcVar11 = unaff_x24;
    iVar5 = unaff_x25;
    if ((*(arg2 + 0x50) & 0xffffffbf) != 0) {
        arg1_00 = 0xffffffea;
        arg3 = unaff_x20;
        arg2 = unaff_x21;
        goto code_r0x08004acc;
    }
    if (arg3 >> 0x10 != 0) {
        arg1_00 = 0xffffffa6;
        arg2 = unaff_x21;
        goto code_r0x08004acc;
    }
    lock_sock_nested(iVar9,0);
    if (piVar10 == NULL) {
        if (*(iVar9 + 0x12) != '\x01') goto code_r0x080048a8;
        piVar10 = iVar9 + 0x374;
    }
    else {
        if ((*(arg2 + 8) < 0xc) || (*piVar10 != 0x2a)) {
            release_sock(iVar9);
            arg1_00 = 0xffffffea;
            goto code_r0x08004acc;
        }
        uStack_74 = sym.qrtr_autobind(arg1);
        if (uStack_74 != 0) {
            arg1_00 = uStack_74;
            release_sock(iVar9);
            goto code_r0x08004acc;
        }
    }
    uVar4 = *(piVar10 + 2);
    if (uVar4 == 0xffffffff) {
        arg1_00 = 0;
        unaff_x24 = sym.qrtr_bcast_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
        pcVar11 = sym.qrtr_bcast_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
        if ((*(piVar10 + 4) != -2) && (_segment.ehdr != -1)) {
code_r0x080048a8:
            release_sock(iVar9);
            arg1_00 = 0xffffff95;
            pcVar11 = unaff_x24;
            goto code_r0x08004acc;
        }
    }
    else if (uVar4 == *(iVar9 + 0x36c)) {
        arg1_00 = 0;
        pcVar11 = sym.qrtr_local_enqueue.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
    }
    else {
        arg1_00 = sym.qrtr_node_lookup(uVar4);
        if (arg1_00 == 0) {
            release_sock(iVar9);
            arg1_00 = 0xffffff98;
            goto code_r0x08004acc;
        }
        iVar1 = *(iVar9 + 0x380);
        if (iVar1 < 0) {
            if (iVar1 == -1) {
                uVar7 = *(arg1_00 + 0x3c);
                goto code_r0x080048fc;
            }
        }
        else if (iVar1 != *(arg1_00 + 0x3c)) {
            uVar7 = 0xfffffffe;
code_r0x080048fc:
            *(iVar9 + 0x380) = uVar7;
        }
        pcVar11 = sym.__typeid__ZTSFiP9qrtr_nodeP7sk_buffiP13sockaddr_qrtrS4_jE_global_addr;
    }
    uVar8 = arg3 + 3U & 0xfffffffffffffffc;
    uVar4 = uVar8 - 16000;
    if (uVar8 < 0x3e81) {
        uVar4 = 0;
    }
    unaff_x26 = uVar4;
    puVar6 = uVar8 - 0x2e81 & 0xfffff000;
    if (uVar8 < 0x3e81) {
        puVar6 = NULL;
    }
    iVar5 = sock_alloc_send_pskb(iVar9,(uVar8 - unaff_x26) + 0x20,puVar6,*(arg2 + 0x50) & 0x40,&uStack_74,3);
    if (iVar5 == 0) {
        iVar5 = unaff_x25;
        uStack_74 = 0xfffffff4;
        goto code_r0x08004ab8;
    }
    *(iVar5 + 0xd8) = *(iVar5 + 0xd8) + 0x20;
    *(iVar5 + 200) = *(iVar5 + 200) + 0x20;
    skb_put(iVar5,arg3 - uVar4);
    puVar6 = arg2 + 0x10;
    *(iVar5 + 0x70) = arg3;
    *(iVar5 + 0x74) = uVar4;
    uStack_74 = skb_copy_datagram_from_iter(iVar5,0,puVar6,arg3 & 0xffffffff);
    if (uStack_74 != 0) {
code_r0x0800499c:
        kfree_skb(iVar5);
        goto code_r0x08004ab8;
    }
    if ((*(iVar9 + 0x370) == -2) || (*(piVar10 + 4) == -2)) {
        if (arg3 < 4) {
            uStack_74 = 0xffffffea;
            goto code_r0x0800499c;
        }
        skb_copy_bits(iVar5,0,&uStack_5c,4);
        puVar6 = uStack_5c;
        if ((*(piVar10 + 4) != -2) || (uStack_5c != 4)) goto code_r0x08004a78;
        puVar6 = &uStack_70;
        *(iVar9 + 0x380) = 0xfffffffe;
        skb_copy_bits(iVar5,0,puVar6,0x14);
        unaff_x26 = sym.qrtr_node_lookup(uStack_68 >> 0x20);
        if (unaff_x26 != 0) {
            if (((arg1_00 == 0) || (arg1_00 == unaff_x26)) || (*(arg1_00 + 0x3c) == -1)) {
code_r0x08004b08:
                uStack_74 = 0;
                kfree_skb(iVar5);
                sym.qrtr_node_release(unaff_x26);
                goto code_r0x08004ab8;
            }
            iVar2 = *(arg1_00 + 0x40) - *(unaff_x26 + 0x40);
            iVar1 = -iVar2;
            if (-1 < iVar2) {
                iVar1 = iVar2;
            }
            if (iVar1 < 2) goto code_r0x08004b08;
        }
        sym.qrtr_node_release(unaff_x26);
        puVar6 = 0x4;
    }
    else {
        puVar6 = 0x1;
    }
code_r0x08004a78:
    uVar4 = puVar6;
    unaff_x26 = iVar9 + 0x368;
    if (2 < pcVar11 + -0x8001590 >> 3) goto code_r0x08004b24;
    while( true ) {
        uVar4 = (*pcVar11)(arg1_00,iVar5,puVar6,unaff_x26,piVar10,*(arg2 + 0x50));
        uStack_74 = arg3;
        if (uVar4 < 0) {
            uStack_74 = uVar4;
        }
code_r0x08004ab8:
        sym.qrtr_node_release(arg1_00);
        release_sock(iVar9);
        arg1_00 = uStack_74;
code_r0x08004acc:
        uVar4 = puVar6;
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
code_r0x08004b24:
        __cfi_slowpath_diag(0xba41232d86c0b643,pcVar11,0x8000820);
        puVar6 = uVar4;
    }
    return arg1_00;
}


// ===== sym.qrtr_recvmsg @ 0x08004b54 (size 480) =====

//WARNING: Type propagation algorithm not settling

void sym.qrtr_recvmsg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint *puVar9;
    int64_t arg1_00;
    int64_t arg2_00;
    ulong uVar10;
    int *piVar11;
    ulong noname_0;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *puVar14;
    ulong unaff_x30;
    uchar in_q1 [16];
    int aiStack_6c [3];
    uint uStack_60;
    uint uStack_58;
    uint32_t uStack_54;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1 + 0x18);
    aiStack_6c[0] = 0;
    puVar14 = *arg2;
    if ((*(iVar12 + 0x60) >> 8 & 1) == 0) {
        iVar6 = skb_recv_datagram(iVar12,arg4 & 0xffffffbf,arg4 & 0x40,aiStack_6c);
        iVar5 = aiStack_6c[0];
        if (iVar6 != 0) {
            lock_sock_nested(iVar12,0);
            uVar13 = *(iVar6 + 0x70);
            if (arg3 < uVar13) {
                uVar13 = arg3 & 0xffffffff;
                *(arg2 + 0x50) = *(arg2 + 0x50) | 0x20;
            }
            aiStack_6c[0] = skb_copy_datagram_iter(iVar6,0,arg2 + 0x10,uVar13 & 0xffffffff);
            if ((-1 < aiStack_6c[0]) && (aiStack_6c[0] = uVar13, puVar14 != NULL)) {
                *puVar14 = 0;
                *(puVar14 + 1) = 0;
                *puVar14 = 0x2a;
                *(puVar14 + 4) = *(iVar6 + 0x28);
                *(puVar14 + 1) = *(iVar6 + 0x2c);
                *(arg2 + 8) = 0xc;
            }
            if (*(iVar6 + 0x39) != '\0') {
                uStack_54 = *(iVar6 + 0x28);
                uStack_50 = *(iVar6 + 0x2c);
                aiStack_6c[2] = *(iVar6 + 0x30);
                uStack_60 = *(iVar6 + 0x34);
                uStack_58 = 0x2a;
                aiStack_6c[1] = 0x2a;
                iVar7 = sym.qrtr_node_lookup(uStack_54);
                if (iVar7 != 0) {
                    iVar8 = __alloc_skb(0x34,0xcc0,0,0xffffffff);
                    if (iVar8 != 0) {
                        *(iVar8 + 0xd8) = *(iVar8 + 0xd8) + 0x20;
                        *(iVar8 + 200) = *(iVar8 + 200) + 0x20;
                        puVar9 = skb_put(iVar8,0x14);
                        *(puVar9 + 1) = 0;
                        *(puVar9 + 3) = 0;
                        *puVar9 = 7;
                        puVar9[1] = *(iVar6 + 0x30);
                        puVar9[2] = *(iVar6 + 0x34);
                        sym.qrtr_node_enqueue(iVar7,iVar8,7,aiStack_6c + 1);
                    }
                    sym.qrtr_node_release(iVar7);
                }
            }
            skb_free_datagram(iVar12,iVar6);
            release_sock(iVar12);
            iVar5 = aiStack_6c[0];
        }
    }
    else {
        iVar5 = -99;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_48) {
        iVar6 = __stack_chk_fail(iVar5);
        *extraout_x18 = sym.qrtr_port_remove;
        iVar12 = sp_el0;
        iVar7 = *(iVar12 + 0x5e0);
        iVar5 = *(iVar6 + 0x370);
        iVar12 = __alloc_skb(0x34,0xcc0,0,0xffffffff);
        if (iVar12 != 0) {
            *(iVar12 + 0xd8) = *(iVar12 + 0xd8) + 0x20;
            *(iVar12 + 200) = *(iVar12 + 200) + 0x20;
            puVar9 = skb_put(iVar12,0x14);
            *(puVar9 + 1) = 0;
            *(puVar9 + 3) = 0;
            iVar8 = iVar6 + 0x368;
            *puVar9 = 6;
            puVar9[1] = *(iVar6 + 0x36c);
            puVar9[2] = *(iVar6 + 0x370);
            skb_set_owner_w(iVar12,iVar6);
            uVar1 = *(iVar6 + 0x380);
            if (uVar1 == 0xfffffffe) {
                sym.qrtr_bcast_enqueue(noname_0,iVar12,6,iVar8);
            }
            else {
                uVar10 = noname_0;
                if ((-1 < uVar1) && (arg1_00 = sym.qrtr_node_lookup(uVar1), uVar10 = extraout_x8, arg1_00 != 0)) {
                    arg2_00 = skb_clone(iVar12,0xcc0);
                    if (arg2_00 != 0) {
                        skb_set_owner_w(arg2_00,iVar6);
                        sym.qrtr_node_enqueue(arg1_00,arg2_00,6,iVar8);
                    }
                    sym.qrtr_node_release(arg1_00);
                    uVar10 = extraout_x8_00;
                }
                sym.qrtr_local_enqueue(uVar10,iVar12,in_q1,iVar8);
            }
        }
        piVar11 = iVar6 + 0x80;
        while( true ) {
            Hint_Prefetch(piVar11,2,0,1);
            do {
                iVar2 = *piVar11;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar4) {
                    *piVar11 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar11,4);
            }
            iVar2 = 0;
            if (iVar5 != -2) {
                iVar2 = iVar5;
            }
            uVar10 = _raw_spin_lock_irqsave(obj.qrtr_port_lock);
            xa_erase(obj.qrtr_ports,iVar2);
            _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar10);
            iVar12 = sp_el0;
            if (*(iVar12 + 0x5e0) == iVar7) break;
            piVar11 = __stack_chk_fail();
        }
        return;
    }
    return;
}


// ===== sym.qrtr_port_remove @ 0x08004d34 (size 512) =====

void sym.qrtr_port_remove(int64_t arg1)

{
    int64_t arg4;
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    uint *puVar7;
    int64_t arg1_00;
    int64_t arg2;
    ulong uVar8;
    int *piVar9;
    int64_t iVar10;
    ulong noname_0;
    ulong extraout_x8;
    ulong extraout_x8_00;
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q1 [16];
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar10 = *(iVar6 + 0x5e0);
    iVar1 = *(arg1 + 0x370);
    iVar6 = __alloc_skb(0x34,0xcc0,0,0xffffffff);
    if (iVar6 != 0) {
        *(iVar6 + 0xd8) = *(iVar6 + 0xd8) + 0x20;
        *(iVar6 + 200) = *(iVar6 + 200) + 0x20;
        puVar7 = skb_put(iVar6,0x14);
        *(puVar7 + 1) = 0;
        *(puVar7 + 3) = 0;
        arg4 = arg1 + 0x368;
        *puVar7 = 6;
        puVar7[1] = *(arg1 + 0x36c);
        puVar7[2] = *(arg1 + 0x370);
        skb_set_owner_w(iVar6,arg1);
        uVar2 = *(arg1 + 0x380);
        if (uVar2 == 0xfffffffe) {
            sym.qrtr_bcast_enqueue(noname_0,iVar6,6,arg4);
        }
        else {
            uVar8 = noname_0;
            if ((-1 < uVar2) && (arg1_00 = sym.qrtr_node_lookup(uVar2), uVar8 = extraout_x8, arg1_00 != 0)) {
                arg2 = skb_clone(iVar6,0xcc0);
                if (arg2 != 0) {
                    skb_set_owner_w(arg2,arg1);
                    sym.qrtr_node_enqueue(arg1_00,arg2,6,arg4);
                }
                sym.qrtr_node_release(arg1_00);
                uVar8 = extraout_x8_00;
            }
            sym.qrtr_local_enqueue(uVar8,iVar6,in_q1,arg4);
        }
    }
    piVar9 = arg1 + 0x80;
    while( true ) {
        Hint_Prefetch(piVar9,2,0,1);
        do {
            iVar3 = *piVar9;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar9,0x10);
            if (bVar5) {
                *piVar9 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (iVar3 < 2) {
            refcount_warn_saturate(piVar9,4);
        }
        iVar3 = 0;
        if (iVar1 != -2) {
            iVar3 = iVar1;
        }
        uVar8 = _raw_spin_lock_irqsave(obj.qrtr_port_lock);
        xa_erase(obj.qrtr_ports,iVar3);
        _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar8);
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iVar10) break;
        piVar9 = __stack_chk_fail();
    }
    return;
}


// ===== sym.qrtr_bcast_enqueue @ 0x08004f34 (size 248) =====

ulong sym.qrtr_bcast_enqueue(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    ulong noname_0_00;
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    uchar in_q1 [16];
    
    *in_x18 = unaff_x30;
    down_read(obj.qrtr_epts_lock);
    for (pcVar1 = _obj.qrtr_all_epts; pcVar1 != obj.qrtr_all_epts; pcVar1 = *pcVar1) {
        if ((arg2 == 2) || (*(pcVar1 + -0x6c) != -1)) {
            arg2_00 = skb_clone(arg1,0xcc0);
            if (arg2_00 == 0) break;
            skb_set_owner_w(arg2_00,*(arg1 + 0x18));
            sym.qrtr_node_enqueue(pcVar1 + -0xa8,arg2_00,arg2 & 0xffffffff,arg3);
        }
    }
    up_read(obj.qrtr_epts_lock);
    sym.qrtr_local_enqueue(noname_0_00,arg1,in_q1,arg3);
    return 0;
}


// ===== sym.qrtr_port_assign @ 0x0800502c (size 388) =====

int sym.qrtr_port_assign(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *arg2;
    if (iVar5 == 0) {
        _raw_spin_lock(obj.qrtr_ports);
        iVar5 = __xa_alloc_cyclic(obj.qrtr_ports,arg2,arg1,0x400000007fff,obj.qrtr_backup_lo,0xa20);
        goto code_r0x08005108;
    }
    if (iVar5 < 0x4000) {
        uVar6 = capable(0xc);
        if ((((uVar6 & 1) == 0) && (iVar5 = in_egroup_p(0xb5a), iVar5 == 0)) && (iVar5 = in_egroup_p(0), iVar5 == 0))
        {
            return -0xd;
        }
        iVar5 = *arg2;
        if (iVar5 != -2) goto code_r0x080050a8;
        _raw_spin_lock(obj.qrtr_ports);
        iVar7 = 0;
    }
    else {
code_r0x080050a8:
        iVar7 = iVar5;
        _raw_spin_lock(obj.qrtr_ports);
    }
    iVar5 = __xa_insert(obj.qrtr_ports,iVar7,arg1,0xcc0);
code_r0x08005108:
    _raw_spin_unlock(obj.qrtr_ports);
    if (iVar5 == -0x10) {
        return -0x62;
    }
    if (-1 < iVar5) {
        puVar1 = arg1 + 0x80;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar8 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) {
                return 0;
            }
            uVar8 = 1;
        }
        refcount_warn_saturate(puVar1,uVar8);
        return 0;
    }
    return iVar5;
}


// ===== sym.qrtr_reset_ports @ 0x080051b0 (size 412) =====

void sym.qrtr_reset_ports(void)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    code *unaff_x19;
    int64_t unaff_x20;
    uint32_t *unaff_x21;
    int unaff_w22;
    uint unaff_w23;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    __rcu_read_lock();
    uStack_50 = 1;
    iVar4 = xa_find(obj.qrtr_ports,&uStack_50,0xffffffffffffffff,8);
    if (iVar4 == 0) goto code_r0x080052e0;
    unaff_w22 = 1;
    unaff_w23 = 0x66;
    unaff_x19 = obj.qrtr_ports;
code_r0x08005244:
    unaff_x21 = iVar4 + 0x80;
    unaff_x20 = iVar4;
    do {
        Hint_Prefetch(unaff_x21,2,0,1);
        do {
            uVar1 = *unaff_x21;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x21,0x10);
            if (bVar3) {
                *unaff_x21 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 0) {
            uVar5 = 2;
code_r0x080052c0:
            refcount_warn_saturate(unaff_x21,uVar5);
        }
        else if ((uVar1 + 1 | uVar1) < 0) {
            uVar5 = 1;
            goto code_r0x080052c0;
        }
        *(unaff_x20 + 0x248) = unaff_w23;
        sk_error_report(unaff_x20);
        Hint_Prefetch(unaff_x21,2,0,1);
        do {
            uVar1 = *unaff_x21;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x21,0x10);
            if (bVar3) {
                *unaff_x21 = uVar1 - unaff_w22;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 1) {
            DataMemoryBarrier(2,1);
            sk_free(unaff_x20);
        }
        else if (uVar1 < 1) {
            refcount_warn_saturate(unaff_x21,3);
        }
        iVar4 = xa_find_after(unaff_x19,&uStack_50,0xffffffffffffffff,8);
        unaff_x20 = iVar4;
        if (iVar4 != 0) goto code_r0x08005244;
code_r0x080052e0:
        __rcu_read_unlock();
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.qrtr_autobind @ 0x0800534c (size 228) =====

uchar * sym.qrtr_autobind(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong uVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uchar *puVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uchar *puStack_50;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x18);
    if ((*(iVar7 + 0x60) >> 8 & 1) == 0) {
        puVar6 = NULL;
    }
    else {
        uVar4 = _raw_spin_lock_irqsave(obj.qrtr_port_lock);
        iStack_3c = 0;
        uVar3 = sym.qrtr_port_assign(iVar7,&iStack_3c);
        puVar6 = uVar3;
        if (uVar3 == 0) {
            if (iStack_3c == -2) {
                sym.qrtr_reset_ports();
            }
            _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar4);
            *(iVar7 + 0x370) = iStack_3c;
            *(iVar7 + 0x60) = *(iVar7 + 0x60) & 0xfffffffffffffeff;
        }
        else {
            _raw_spin_unlock_irqrestore(obj.qrtr_port_lock,uVar4);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return puVar6;
    }
    puVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qrtr_alloc_backup;
    pcStack_58 = sym.qrtr_alloc_backup;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_6c = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    puStack_50 = puVar6;
    uVar3 = _segment.ehdr;
    while (uVar1 = _segment.ehdr, uVar3 < 0x14) {
        iVar7 = alloc_skb_with_frags(0x20,0x400,0,&uStack_6c,0xcc0);
        puVar5 = NULL;
        uVar1 = _segment.ehdr;
        if (iVar7 == 0) break;
        puVar5 = skb_queue_tail(obj.qrtr_backup_lo,iVar7);
        uVar3 = *0x80005c0;
    }
    do {
        if (4 < uVar1) {
code_r0x080054f0:
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) != iStack_68) {
                auVar8 = __stack_chk_fail();
                puVar6 = auVar8._0_8_;
                *extraout_x18_00 = sym.__cfi_check_fail;
                if (puVar6 != NULL) {
                    switch(*puVar6) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        __ubsan_handle_cfi_check_fail_abort(puVar6,auVar8._8_8_,0);
                        break;
                    default:
                        return puVar6;
                    }
                }
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5502,0x8005578);
                (*pcVar2)();
            }
            return puVar5;
        }
        iVar7 = alloc_skb_with_frags(0x20,0x4000,0,&uStack_6c,0xcc0);
        puVar5 = NULL;
        if (iVar7 == 0) goto code_r0x080054f0;
        puVar5 = skb_queue_tail(obj.qrtr_backup_hi,iVar7);
        uVar1 = *0x80005d8;
    } while( true );
}


// ===== sym.qrtr_alloc_backup @ 0x08005430 (size 240) =====

void sym.qrtr_alloc_backup(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_2c = 0;
    uVar1 = _segment.ehdr;
    while (uVar2 = _segment.ehdr, uVar1 < 0x14) {
        iVar4 = alloc_skb_with_frags(0x20,0x400,0,&uStack_2c,0xcc0);
        arg1 = 0;
        uVar2 = _segment.ehdr;
        if (iVar4 == 0) break;
        arg1 = skb_queue_tail(obj.qrtr_backup_lo,iVar4);
        uVar1 = *0x80005c0;
    }
    do {
        if (4 < uVar2) {
code_r0x080054f0:
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) != iStack_28) {
                auVar6 = __stack_chk_fail(arg1);
                puVar5 = auVar6._0_8_;
                *extraout_x18 = sym.__cfi_check_fail;
                if (puVar5 != NULL) {
                    switch(*puVar5) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        __ubsan_handle_cfi_check_fail_abort(puVar5,auVar6._8_8_,0);
                        break;
                    default:
                        return;
                    }
                }
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5502,0x8005578);
                (*pcVar3)();
            }
            return;
        }
        iVar4 = alloc_skb_with_frags(0x20,0x4000,0,&uStack_2c,0xcc0);
        arg1 = 0;
        if (iVar4 == 0) goto code_r0x080054f0;
        arg1 = skb_queue_tail(obj.qrtr_backup_hi,iVar4);
        uVar2 = *0x80005d8;
    } while( true );
}


// ===== sym.__cfi_check_fail @ 0x08005520 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005564

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
    //switch table (4 cases) at 0x8000c56
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005578);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080055f4 (size 348) =====

uint64_t sym.init_module(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar5 = 0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_3c = 0;
    do {
        iVar5 = of_find_compatible_node(iVar5,0,"qcom,qrtr");
        if (iVar5 == 0) goto code_r0x08005670;
        iVar2 = of_property_read_variable_u32_array(iVar5,"qcom,node-id",&uStack_3c,1,0);
    } while (iVar2 < 0);
    _segment.ehdr = uStack_3c;
code_r0x08005670:
    uVar3 = proto_register(obj.qrtr_proto,1);
    uVar4 = uVar3;
    if (uVar3 == 0) {
        uVar3 = sock_register(obj.qrtr_family);
        uVar4 = uVar3;
        if (uVar3 == 0) {
            uVar3 = qrtr_ns_init();
            uVar4 = uVar3;
            if (uVar3 == 0) {
                _obj.qrtr_backup_lo = obj.qrtr_backup_lo;
                _obj.qrtr_epts_lock = obj.qrtr_backup_lo;
                *0x80005c0 = 0;
                _obj.qrtr_backup_work = 0xfffffffe0;
                _obj.qrtr_backup_hi = obj.qrtr_backup_hi;
                *0x80005d0 = obj.qrtr_backup_hi;
                *0x80005d8 = 0;
                *0x80005e8 = 0x80005e8;
                *0x80005f0 = 0x80005e8;
                _obj.qrtr_all_epts = sym.qrtr_alloc_backup.391ff6e3657b129d182c5f998852fdf4.cfi_jt;
                queue_work_on(0x20,_datagram_poll);
                goto code_r0x080056bc;
            }
            sock_unregister(0x2a);
        }
        proto_unregister(obj.qrtr_proto);
    }
code_r0x080056bc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cleanup_module;
    qrtr_ns_remove();
    sock_unregister(0x2a);
    proto_unregister(obj.qrtr_proto);
    cancel_work_sync(obj.qrtr_backup_work);
    skb_queue_purge(obj.qrtr_backup_lo);
    uVar4 = skb_queue_purge(obj.qrtr_backup_hi);
    return uVar4;
}


// ===== sym.cleanup_module @ 0x08005750 (size 92) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qrtr_ns_remove();
    sock_unregister(0x2a);
    proto_unregister(obj.qrtr_proto);
    cancel_work_sync(obj.qrtr_backup_work);
    skb_queue_purge(obj.qrtr_backup_lo);
    skb_queue_purge(obj.qrtr_backup_hi);
    return;
}

