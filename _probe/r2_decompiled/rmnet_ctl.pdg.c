// decompiled from rmnet_ctl by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 508) =====

//WARNING: Switch with 1 destination removed at 0x080019fc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 < -0xef4825473ba2583) {
            if (arg1 == -0x706726d5c2047ce2) {
                pcVar2 = sym.rmnet_ctl_get_stats.cfi_jt;
            }
            else {
                if (arg1 != -0x32fe2ce1eee055b4) goto code_r0x080019bc;
                pcVar2 = sym.rmnet_ctl_register_client.cfi_jt;
            }
        }
        else if (arg1 == -0xef4825473ba2583) {
            pcVar2 = sym.rmnet_ctl_dl_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x829c0b5a01bb075) goto code_r0x080019bc;
            pcVar2 = sym.rmnet_ctl_send_client.cfi_jt;
        }
    }
    else if (arg1 < 0x647f418bdef9e511) {
        if (arg1 == 0x4c550309df1cf4c1) {
            if ((pcVar1 + -0x8001238 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080019bc;
        }
        if (arg1 == 0x5c67a5415eccc455) {
            pcVar2 = sym.rmnet_ctl_log.cfi_jt;
        }
        else {
            if (arg1 != 0x641d19c7be126e92) goto code_r0x080019bc;
            pcVar2 = sym.rmnet_ctl_unregister_client.cfi_jt;
        }
    }
    else if (arg1 == 0x647f418bdef9e511) {
        pcVar2 = sym.rmnet_ctl_if.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7fddc6dd2dc8828e) goto code_r0x080019bc;
        pcVar2 = sym.__typeid__ZTSFiP13rmnet_ctl_devP7sk_buffE_global_addr;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080019bc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001a10);
    (*pcVar1)();
}


// ===== sym.rmnet_ctl_send_client.cfi_jt @ 0x08001208 (size 8) =====

int sym.rmnet_ctl_send_client.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong *puVar2;
    int iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == CONCAT71(*0x8000101,obj.ipc_log_lvl)) {
        if ((1 < obj.ipc_log_lvl) && (_segment.ehdr != 0)) {
            if ((*(param_2 + 0xd8) == 0) || (uVar1 = *(param_2 + 0x70), uVar1 == 0)) {
                ipc_log_string(_segment.ehdr,"%3s(%d): (null)\n",0x8000195,0);
            }
            else {
                if (0x1f < uVar1) {
                    uVar1 = 0x20;
                }
                ipc_log_string(_segment.ehdr,"%3s(%d): %*ph\n",0x8000195,0,uVar1);
            }
        }
        __rcu_read_lock();
        puVar2 = _obj.ctl_ep;
        if ((_obj.ctl_ep == NULL) || (pcVar4 = *_obj.ctl_ep, pcVar4 == NULL)) {
            kfree_skb(param_2);
            __rcu_read_unlock();
            iVar3 = -0x16;
        }
        else {
            if (pcVar4 != sym.__typeid__ZTSFiP13rmnet_ctl_devP7sk_buffE_global_addr) {
                __cfi_slowpath_diag(0x7fddc6dd2dc8828e,pcVar4,0x8000170);
            }
            iVar3 = (*pcVar4)(puVar2,param_2);
            __rcu_read_unlock();
            if (iVar3 == 0) {
                return 0;
            }
        }
        if ((obj.ipc_log_lvl != 0x0) && (_segment.ehdr != 0)) {
            ipc_log_string(_segment.ehdr,"%3s(%d): (null)\n",0x80002ba,iVar3);
        }
    }
    else {
        kfree_skb(param_2);
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.rmnet_ctl_unregister_client.cfi_jt @ 0x08001210 (size 8) =====

ulong sym.rmnet_ctl_unregister_client.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(reloc.rmnet_ctl_log.cfi_jt);
    if (_obj.ipc_log_lvl == param_1) {
        _obj.ipc_log_lvl = 0;
        _raw_spin_unlock(reloc.rmnet_ctl_log.cfi_jt);
        synchronize_rcu();
        kfree(param_1);
        debugfs_remove(_reloc.rmnet_ctl_register_client.cfi_jt);
        ipc_log_context_destroy(_reloc.rmnet_ctl_send_client.cfi_jt);
        uVar1 = 0;
        _reloc.rmnet_ctl_register_client.cfi_jt = 0;
        _reloc.rmnet_ctl_unregister_client.cfi_jt = 0;
        _reloc.rmnet_ctl_send_client.cfi_jt = 0;
    }
    else {
        _raw_spin_unlock(reloc.rmnet_ctl_log.cfi_jt);
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.rmnet_ctl_dl_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001218 (size 8) =====

void sym.rmnet_ctl_dl_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 8) = *(param_1 + 8) + 1;
    sym.rmnet_ctl_endpoint_post(param_2,0xffffffff);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001220 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.rmnet_ctl_ipa_registered == 0x1) {
        ipa_unregister_rmnet_ctl_cb();
        obj.rmnet_ctl_ipa_registered = 0x0;
    }
    return;
}


// ===== sym.rmnet_ctl_if.cfi_jt @ 0x08001228 (size 8) =====

code * sym.rmnet_ctl_if.cfi_jt(void)

{
    return reloc.rmnet_ctl_register_client.cfi_jt;
}


// ===== sym.init_module.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ipa_register_ipa_ready_cb(sym.rmnet_ctl_ipa_ready.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0);
    if (iVar1 != 0) {
        if (iVar1 == -0x11) {
            sym.rmnet_ctl_ipa_ready();
        }
        else {
            _printk(0x80002be,"rmnet_ctl_init",iVar1);
        }
    }
    return 0;
}


// ===== sym.rmnet_ctl_ipa_ready.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001238 (size 8) =====

void sym.rmnet_ctl_ipa_ready.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ipa_register_rmnet_ctl_cb
                      (sym.rmnet_ctl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.ctl_ipa_dev,
                       sym.rmnet_ctl_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.ctl_ipa_dev,
                       sym.rmnet_ctl_dl_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.ctl_ipa_dev);
    if (iVar1 == 0) {
        obj.rmnet_ctl_ipa_registered = 0x1;
    }
    else {
        _printk(0x80002be,"rmnet_ctl_ipa_ready",iVar1);
    }
    return;
}


// ===== sym.rmnet_ctl_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001240 (size 8) =====

void sym.rmnet_ctl_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.rmnet_ctl_endpoint_setdev(0);
    _printk(0x8000287);
    return;
}


// ===== sym.rmnet_ctl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001248 (size 8) =====

void sym.rmnet_ctl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000150 = 0;
    *0x8000158 = 0;
    *0x8000140 = 0;
    *0x8000148 = 0;
    *0x8000130 = 0;
    *0x8000138 = 0;
    _obj.ctl_ipa_dev = sym.__typeid__ZTSFiP13rmnet_ctl_devP7sk_buffE_global_addr;
    sym.rmnet_ctl_endpoint_setdev();
    _printk(0x80001ce);
    return;
}


// ===== sym.rmnet_ctl_log.cfi_jt @ 0x08001250 (size 8) =====

void sym.rmnet_ctl_log.cfi_jt(uint32_t param_1,ulong param_2,uint param_3,int64_t param_4,uint32_t param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 <= obj.ipc_log_lvl && _segment.ehdr != 0) {
        if ((param_4 == 0) || (param_5 == 0)) {
            ipc_log_string(_segment.ehdr,"%3s(%d): (null)\n",param_2,param_3);
        }
        else {
            if (0x1f < param_5) {
                param_5 = 0x20;
            }
            ipc_log_string(_segment.ehdr,"%3s(%d): %*ph\n",param_2,param_3,param_5);
        }
    }
    return;
}


// ===== sym.__typeid__ZTSFiP13rmnet_ctl_devP7sk_buffE_global_addr @ 0x08001258 (size 8) =====

int sym.__typeid__ZTSFiP13rmnet_ctl_devP7sk_buffE_global_addr(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(param_1 + 0x34);
    iVar2 = ipa_rmnet_ctl_xmit(param_2);
    iVar1 = 0x18;
    if (iVar2 != 0) {
        iVar1 = 0x20;
    }
    *(param_1 + iVar1) = *(param_1 + iVar1) + 1;
    _raw_spin_unlock_bh(param_1 + 0x34);
    return iVar2;
}


// ===== sym.rmnet_ctl_get_stats.cfi_jt @ 0x08001260 (size 8) =====

uint32_t sym.rmnet_ctl_get_stats.cfi_jt(ulong param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    if ((0 < param_2) && (_obj.ctl_ep != 0)) {
        if (4 < param_2) {
            param_2 = 5;
        }
        memcpy(param_1,_obj.ctl_ep + 8,param_2 << 3);
    }
    __rcu_read_unlock();
    return param_2;
}


// ===== sym.rmnet_ctl_register_client.cfi_jt @ 0x08001268 (size 8) =====

ulong * sym.rmnet_ctl_register_client.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != NULL) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        if (puVar2 == NULL) {
            return NULL;
        }
        *puVar2 = *param_1;
        _raw_spin_lock(reloc.rmnet_ctl_log.cfi_jt);
        if (_obj.ipc_log_lvl == NULL) {
            _obj.ipc_log_lvl = puVar2;
            _raw_spin_unlock(reloc.rmnet_ctl_log.cfi_jt);
            if ((_reloc.rmnet_ctl_register_client.cfi_jt == 0) ||
               (uVar3 = _reloc.rmnet_ctl_register_client.cfi_jt,
               0xfffffffffffff000 < _reloc.rmnet_ctl_register_client.cfi_jt)) {
                uVar3 = debugfs_create_dir("rmnet_ctl",0);
                _segment.ehdr = uVar3;
            }
            if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
                debugfs_create_u8("ipc_log_lvl",0x1a4,uVar3,obj.ipc_log_lvl);
            }
            if (_segment.ehdr != 0) {
                return puVar2;
            }
            _segment.ehdr = ipc_log_context_create(10,"rmnet_ctl",0);
            return puVar2;
        }
        _raw_spin_unlock(reloc.rmnet_ctl_log.cfi_jt);
        kfree(puVar2);
    }
    return NULL;
}


// ===== sym.rmnet_ctl_set_dbgfs @ 0x08001270 (size 196) =====

void sym.rmnet_ctl_set_dbgfs(uint64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 & 1) == 0) {
        debugfs_remove(_reloc.rmnet_ctl_register_client.cfi_jt);
        ipc_log_context_destroy(_reloc.rmnet_ctl_send_client.cfi_jt);
        _reloc.rmnet_ctl_register_client.cfi_jt = 0;
        _reloc.rmnet_ctl_unregister_client.cfi_jt = 0;
        _reloc.rmnet_ctl_send_client.cfi_jt = 0;
    }
    else {
        if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
            _segment.ehdr = debugfs_create_dir("rmnet_ctl",0);
        }
        if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
            debugfs_create_u8("ipc_log_lvl",0x1a4,_segment.ehdr,obj.ipc_log_lvl);
        }
        if (_segment.ehdr == 0) {
            _segment.ehdr = ipc_log_context_create(10,"rmnet_ctl",0);
        }
    }
    return;
}


// ===== sym.rmnet_ctl_endpoint_setdev @ 0x08001334 (size 24) =====

void sym.rmnet_ctl_endpoint_setdev(ulong param_1)

{
    _obj.ctl_ep = param_1;
    return;
}


// ===== sym.rmnet_ctl_endpoint_post @ 0x0800134c (size 512) =====

void sym.rmnet_ctl_endpoint_post(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    if (arg2 != 0) {
        if (arg2 == 0xffffffff) {
            if ((1 < obj.ipc_log_lvl) && (_segment.ehdr != 0)) {
                if ((*(arg1 + 0xd8) == 0) || (uVar4 = *(arg1 + 0x70), uVar4 == 0)) {
                    ipc_log_string(_segment.ehdr,"%3s(%d): (null)\n",0x80002a3,0);
                }
                else {
                    if (0x1f < uVar4) {
                        uVar4 = 0x20;
                    }
                    ipc_log_string(_segment.ehdr,"%3s(%d): %*ph\n",0x80002a3,0,uVar4);
                }
            }
            __rcu_read_lock();
            piVar1 = CONCAT71(*0x8000101,obj.ipc_log_lvl);
            if ((piVar1 == NULL) || (*piVar1 == 0)) {
                kfree(arg1);
            }
            else {
                *(arg1 + 0xb0) = 0xf900;
                pcVar5 = *piVar1;
                __cfi_slowpath_diag(0x68131453fce1715e,pcVar5,0x8000130);
                (*pcVar5)(arg1);
            }
        }
        else {
            uVar4 = arg2;
            if ((1 < obj.ipc_log_lvl) && (_segment.ehdr != 0)) {
                if (uVar4 == 0) {
                    ipc_log_string(_segment.ehdr,"%3s(%d): (null)\n",0x80002a3,0);
                }
                else {
                    if (0x1f < uVar4) {
                        uVar4 = 0x20;
                    }
                    ipc_log_string(_segment.ehdr,"%3s(%d): %*ph\n",0x80002a3,0,uVar4,arg1);
                }
            }
            __rcu_read_lock();
            piVar1 = CONCAT71(*0x8000101,obj.ipc_log_lvl);
            if (((piVar1 != NULL) && (*piVar1 != 0)) &&
               (iVar2 = __alloc_skb(arg2 & 0xffffffff,0xa20,0,0xffffffff), iVar2 != 0)) {
                uVar3 = skb_put(iVar2,arg2 & 0xffffffff);
                memcpy(uVar3,arg1,arg2 & 0xffffffff);
                *(iVar2 + 0xb0) = 0xf900;
                pcVar5 = *piVar1;
                __cfi_slowpath_diag(0x68131453fce1715e,pcVar5,0x8000150);
                (*pcVar5)(iVar2);
            }
        }
        __rcu_read_unlock();
        return;
    }
    return;
}


// ===== sym.rmnet_ctl_log @ 0x08001554 (size 124) =====

void sym.rmnet_ctl_log(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 <= obj.ipc_log_lvl && _segment.ehdr != 0) {
        if ((arg4 == 0) || (in_w4 == 0)) {
            ipc_log_string(_segment.ehdr,"%3s(%d): (null)\n",arg2,arg3 & 0xffffffffU);
        }
        else {
            if (0x1f < in_w4) {
                in_w4 = 0x20;
            }
            ipc_log_string(_segment.ehdr,"%3s(%d): %*ph\n",arg2,arg3 & 0xffffffffU,in_w4);
        }
    }
    return;
}


// ===== sym.rmnet_ctl_register_client @ 0x080015d0 (size 304) =====

ulong * sym.rmnet_ctl_register_client(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        if (puVar2 == NULL) {
            return NULL;
        }
        *puVar2 = *arg1;
        _raw_spin_lock(reloc.rmnet_ctl_log.cfi_jt);
        if (_obj.ipc_log_lvl == NULL) {
            _obj.ipc_log_lvl = puVar2;
            _raw_spin_unlock(reloc.rmnet_ctl_log.cfi_jt);
            if ((_reloc.rmnet_ctl_register_client.cfi_jt == 0) ||
               (uVar3 = _reloc.rmnet_ctl_register_client.cfi_jt,
               0xfffffffffffff000 < _reloc.rmnet_ctl_register_client.cfi_jt)) {
                uVar3 = debugfs_create_dir("rmnet_ctl",0);
                _segment.ehdr = uVar3;
            }
            if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
                debugfs_create_u8("ipc_log_lvl",0x1a4,uVar3,obj.ipc_log_lvl);
            }
            if (_segment.ehdr != 0) {
                return puVar2;
            }
            _segment.ehdr = ipc_log_context_create(10,"rmnet_ctl",0);
            return puVar2;
        }
        _raw_spin_unlock(reloc.rmnet_ctl_log.cfi_jt);
        kfree(puVar2);
    }
    return NULL;
}


// ===== sym.rmnet_ctl_unregister_client @ 0x08001704 (size 152) =====

ulong sym.rmnet_ctl_unregister_client(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(reloc.rmnet_ctl_log.cfi_jt);
    if (_obj.ipc_log_lvl == arg1) {
        _obj.ipc_log_lvl = 0;
        _raw_spin_unlock(reloc.rmnet_ctl_log.cfi_jt);
        synchronize_rcu();
        kfree(arg1);
        debugfs_remove(_reloc.rmnet_ctl_register_client.cfi_jt);
        ipc_log_context_destroy(_reloc.rmnet_ctl_send_client.cfi_jt);
        uVar1 = 0;
        _reloc.rmnet_ctl_register_client.cfi_jt = 0;
        _reloc.rmnet_ctl_unregister_client.cfi_jt = 0;
        _reloc.rmnet_ctl_send_client.cfi_jt = 0;
    }
    else {
        _raw_spin_unlock(reloc.rmnet_ctl_log.cfi_jt);
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.rmnet_ctl_send_client @ 0x080017a0 (size 392) =====

int sym.rmnet_ctl_send_client(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *puVar2;
    int iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == CONCAT71(*0x8000101,obj.ipc_log_lvl)) {
        if ((1 < obj.ipc_log_lvl) && (_segment.ehdr != 0)) {
            if ((*(arg2 + 0xd8) == 0) || (uVar1 = *(arg2 + 0x70), uVar1 == 0)) {
                ipc_log_string(_segment.ehdr,"%3s(%d): (null)\n",0x8000195,0);
            }
            else {
                if (0x1f < uVar1) {
                    uVar1 = 0x20;
                }
                ipc_log_string(_segment.ehdr,"%3s(%d): %*ph\n",0x8000195,0,uVar1);
            }
        }
        __rcu_read_lock();
        puVar2 = _obj.ctl_ep;
        if ((_obj.ctl_ep == NULL) || (pcVar4 = *_obj.ctl_ep, pcVar4 == NULL)) {
            kfree_skb(arg2);
            __rcu_read_unlock();
            iVar3 = -0x16;
        }
        else {
            if (pcVar4 != sym.__typeid__ZTSFiP13rmnet_ctl_devP7sk_buffE_global_addr) {
                __cfi_slowpath_diag(0x7fddc6dd2dc8828e,pcVar4,0x8000170);
            }
            iVar3 = (*pcVar4)(puVar2,arg2);
            __rcu_read_unlock();
            if (iVar3 == 0) {
                return 0;
            }
        }
        if ((obj.ipc_log_lvl != 0x0) && (_segment.ehdr != 0)) {
            ipc_log_string(_segment.ehdr,"%3s(%d): (null)\n",0x80002ba,iVar3);
        }
    }
    else {
        kfree_skb(arg2);
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.rmnet_ctl_if @ 0x08001930 (size 20) =====

code * sym.rmnet_ctl_if(void)

{
    return reloc.rmnet_ctl_register_client.cfi_jt;
}


// ===== sym.rmnet_ctl_get_stats @ 0x08001944 (size 112) =====

uint64_t sym.rmnet_ctl_get_stats(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg2 & 0xffffffff;
    __rcu_read_lock();
    uVar1 = arg2;
    if ((0 < uVar1) && (_obj.ctl_ep != 0)) {
        if (4 < uVar1) {
            uVar1 = 5;
        }
        uVar2 = uVar1;
        memcpy(arg1,_obj.ctl_ep + 8,uVar1 << 3);
    }
    __rcu_read_unlock();
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x080019b8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080019fc

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
    //switch table (4 cases) at 0x8000190
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001a10);
    (*pcVar1)();
}


// ===== sym.rmnet_ctl_ipa_ready @ 0x08001a10 (size 120) =====

void sym.rmnet_ctl_ipa_ready(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ipa_register_rmnet_ctl_cb
                      (sym.rmnet_ctl_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.ctl_ipa_dev,
                       sym.rmnet_ctl_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.ctl_ipa_dev,
                       sym.rmnet_ctl_dl_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.ctl_ipa_dev);
    if (iVar1 == 0) {
        obj.rmnet_ctl_ipa_registered = 0x1;
    }
    else {
        _printk(0x80002be,"rmnet_ctl_ipa_ready",iVar1);
    }
    return;
}


// ===== sym.rmnet_ctl_probe @ 0x08001a88 (size 80) =====

void sym.rmnet_ctl_probe(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000150 = 0;
    *0x8000158 = 0;
    *0x8000140 = 0;
    *0x8000148 = 0;
    *0x8000130 = 0;
    *0x8000138 = 0;
    _obj.ctl_ipa_dev = sym.__typeid__ZTSFiP13rmnet_ctl_devP7sk_buffE_global_addr;
    sym.rmnet_ctl_endpoint_setdev();
    _printk(0x80001ce);
    return;
}


// ===== sym.rmnet_ctl_remove @ 0x08001ad8 (size 52) =====

void sym.rmnet_ctl_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.rmnet_ctl_endpoint_setdev(0);
    _printk(0x8000287);
    return;
}


// ===== sym.rmnet_ctl_dl_callback @ 0x08001b0c (size 56) =====

void sym.rmnet_ctl_dl_callback(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 8) = *(arg1 + 8) + 1;
    sym.rmnet_ctl_endpoint_post(arg2,0xffffffff);
    return;
}


// ===== sym.rmnet_ctl_send_ipa @ 0x08001b44 (size 120) =====

int sym.rmnet_ctl_send_ipa(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(arg1 + 0x34);
    iVar2 = ipa_rmnet_ctl_xmit(arg2);
    iVar1 = 0x18;
    if (iVar2 != 0) {
        iVar1 = 0x20;
    }
    *(arg1 + iVar1) = *(arg1 + iVar1) + 1;
    _raw_spin_unlock_bh(arg1 + 0x34);
    return iVar2;
}


// ===== sym.init_module @ 0x08001c40 (size 96) =====

ulong sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ipa_register_ipa_ready_cb(sym.rmnet_ctl_ipa_ready.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0);
    if (iVar1 != 0) {
        if (iVar1 == -0x11) {
            sym.rmnet_ctl_ipa_ready();
        }
        else {
            _printk(0x80002be,"rmnet_ctl_init",iVar1);
        }
    }
    return 0;
}


// ===== sym.cleanup_module @ 0x08001ca0 (size 64) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.rmnet_ctl_ipa_registered == 0x1) {
        ipa_unregister_rmnet_ctl_cb();
        obj.rmnet_ctl_ipa_registered = 0x0;
    }
    return;
}

