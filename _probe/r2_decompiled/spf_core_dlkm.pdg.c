// decompiled from spf_core_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x08001d3c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xa97bb5b83a5679b) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 == -0x7a1aa6da8fe5e465) {
                pcVar2 = sym.spf_core_exit.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
code_r0x080011a4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001cfc;
            }
            if (arg1 != -0x75d71f204640a587) goto code_r0x08001cfc;
            pcVar2 = sym.digital_cdc_rsc_mgr_hw_vote_disable.cfi_jt;
        }
        else if (arg1 == -0x550b9e52359ac614) {
            pcVar2 = sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.spf_core_platform_driver_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
                goto code_r0x080011a4;
            }
            if (arg1 != -0x125adddaa2b29736) goto code_r0x08001cfc;
            pcVar2 = sym.digital_cdc_rsc_mgr_hw_vote_enable.cfi_jt;
        }
    }
    else if (arg1 < 0x270b42dd5889ee8d) {
        if (arg1 == -0xa97bb5b83a5679b) {
            pcVar2 = sym.spf_core_callback.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001cfc;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x270b42dd5889ee8d) {
        pcVar2 = sym.digital_cdc_rsc_mgr_hw_vote_reset.cfi_jt;
    }
    else {
        if (arg1 != 0x741b966c574d47b1) {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001cfc;
            pcVar2 = sym.cleanup_module.cfi_jt;
            goto code_r0x080011a4;
        }
        pcVar2 = sym.spf_core_is_apm_ready.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001cfc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d50);
    (*pcVar1)();
}


// ===== sym.spf_core_callback.0c5488c044b5a7318a5127066f606c6c.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.spf_core_callback.0c5488c044b5a7318a5127066f606c6c.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    int *piVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    iVar4 = ___ratelimit(obj.spf_core_callback._rs,"spf_core_callback");
    if (iVar4 != 0) {
        _dev_info(param_1,"%s: Payload %x","spf_core_callback",param_2[5]);
    }
    if (param_2[5] == 0x2001007) {
        uVar2 = *param_2;
        iVar4 = ___ratelimit(obj.spf_core_callback._rs.29,"spf_core_callback");
        if (iVar4 != 0) {
            _dev_info(param_1,"%s: sucess response received","spf_core_callback");
        }
        uVar3 = *(param_2 + (uVar2 >> 2 & 0x3c));
        *(iVar5 + 0x50) = 1;
        *(iVar5 + 0x54) = uVar3;
    }
    else if (param_2[5] == 0x2001005) {
        piVar1 = param_2 + (*param_2 >> 2 & 0x3c);
        iVar4 = ___ratelimit(obj.spf_core_callback._rs.25,"spf_core_callback");
        if (iVar4 != 0) {
            _dev_info(param_1,"%s: op %x status %d","spf_core_callback",*piVar1,piVar1[1]);
        }
        if (*piVar1 == 0x1001013) {
            *(iVar5 + 0x54) = piVar1[1];
        }
        else {
            iVar4 = ___ratelimit(obj.spf_core_callback._rs.27,"spf_core_callback");
            if (iVar4 != 0) {
                _dev_err(param_1,"%s: Failed response received","spf_core_callback");
            }
        }
        *(iVar5 + 0x50) = 1;
    }
    else {
        iVar4 = ___ratelimit(obj.spf_core_callback._rs.31,"spf_core_callback");
        if (iVar4 != 0) {
            _dev_err(param_1,"Message ID from apm: 0x%x\n",param_2[5]);
        }
    }
    if (*(iVar5 + 0x50) != '\0') {
        __wake_up(iVar5 + 8,3,1,0);
    }
    return 0;
}


// ===== sym.digital_cdc_rsc_mgr_hw_vote_enable.cfi_jt @ 0x080011e8 (size 8) =====

int sym.digital_cdc_rsc_mgr_hw_vote_enable.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || ((obj.spf_core_platform_driver_probe.__key & 1) == 0)) {
        iVar1 = ___ratelimit(obj.digital_cdc_rsc_mgr_hw_vote_enable._rs,"digital_cdc_rsc_mgr_hw_vote_enable");
        if (iVar1 != 0) {
            _printk(0x8000538,"digital_cdc_rsc_mgr_hw_vote_enable");
        }
        iVar1 = -0x16;
    }
    else {
        mutex_lock(obj.hw_vote_lock);
        iVar1 = clk_prepare(param_1);
        if (iVar1 == 0) {
            iVar1 = clk_enable(param_1);
            if (iVar1 != 0) {
                clk_unprepare(param_1);
            }
        }
        mutex_unlock(obj.hw_vote_lock);
        __trace_bprintk(0x8001db8,*0x8002000,"digital_cdc_rsc_mgr_hw_vote_enable",iVar1);
    }
    return iVar1;
}


// ===== sym.init_module.cfi_jt @ 0x080011f0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.spf_core_platform_driver_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spf_core_platform_driver_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt);
    return;
}


// ===== sym.spf_core_apm_close_all.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.spf_core_apm_close_all.cfi_jt(ulong param_1)

{
    ulong *puVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar8;
    ulong *puVar9;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    ushort uStack_5c;
    ushort uStack_5a;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_5c = 0;
    uStack_5a = 0;
    uStack_58 = 0;
    if (_segment.ehdr == NULL) goto code_r0x08001720;
    mutex_lock(_segment.ehdr + 1);
    puVar9 = _segment.ehdr[7];
    if (puVar9 != NULL) {
        mutex_lock(puVar9 + 4);
        uVar8 = *puVar9;
        uStack_60 = 0x1860;
        uStack_58 = 3;
        uStack_54 = 1;
        uStack_5c = 0x302;
        uStack_4c = 0x1001013;
        iVar3 = ___ratelimit(obj.spf_core_priv,"spf_core_apm_close_all");
        if (iVar3 != 0) {
            _dev_info(*_segment.ehdr,"%s: send_command \n","spf_core_apm_close_all");
        }
        iVar3 = gpr_send_pkt(uVar8,&uStack_60);
        if (iVar3 < 0) {
            iVar4 = ___ratelimit(obj.spf_core_apm_close_all._rs.1,"spf_core_apm_close_all");
            if (iVar4 != 0) {
                pcVar7 = "%s: send_pkt_failed %d\n";
code_r0x080016a0:
                _dev_err(*_segment.ehdr,pcVar7,"spf_core_apm_close_all",iVar3);
            }
        }
        else {
            if (*(puVar9 + 10) == '\0') {
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_88 = 0;
                init_wait_entry(&uStack_88,0);
                puVar1 = puVar9 + 1;
                prepare_to_wait_event(puVar1,&uStack_88,2);
                if (*(puVar9 + 10) == '\0') {
                    iVar5 = 0x4e2;
                    do {
                        iVar5 = schedule_timeout(iVar5);
                        prepare_to_wait_event(puVar1,&uStack_88,2);
                        if (iVar5 == 0 && *(puVar9 + 10) != '\0') {
                            iVar5 = 1;
                        }
                    } while ((*(puVar9 + 10) == '\0') && (iVar5 != 0));
                }
                else {
                    iVar5 = 0x4e2;
                }
                iVar3 = iVar5;
                finish_wait(puVar1,&uStack_88);
            }
            else {
                iVar3 = 0x4e2;
            }
            iVar4 = ___ratelimit(obj.spf_core_apm_close_all._rs.3,"spf_core_apm_close_all");
            if (iVar4 != 0) {
                _dev_info(*_segment.ehdr,"%s: wait event unblocked \n","spf_core_apm_close_all");
            }
            if ((iVar3 < 1) || (*(puVar9 + 10) == '\0')) {
                iVar3 = ___ratelimit(obj.spf_core_apm_close_all._rs.7,"spf_core_apm_close_all");
                if (iVar3 != 0) {
                    _dev_err(*_segment.ehdr,"%s: command timedout, ret\n","spf_core_apm_close_all");
                }
            }
            else if ((*(puVar9 + 0x54) != 0) &&
                    (iVar3 = ___ratelimit(obj.spf_core_apm_close_all._rs.5,"spf_core_apm_close_all"), iVar3 != 0)) {
                iVar3 = *(puVar9 + 0x54);
                pcVar7 = "%s, cmd failed status %d";
                goto code_r0x080016a0;
            }
        }
        *(puVar9 + 10) = 0;
        mutex_unlock(puVar9 + 4);
    }
    param_1 = mutex_unlock(_segment.ehdr + 1);
code_r0x08001720:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.spf_core_platform_driver_probe;
        _printk(0x800055f,"spf_core_platform_driver_probe");
        _segment.ehdr = devm_kmalloc(iVar5 + 0x10,0x78,0xdc0);
        if (_segment.ehdr == NULL) {
            uVar8 = 0xfffffff4;
        }
        else {
            piVar6 = _segment.ehdr + 1;
            *_segment.ehdr = iVar5 + 0x10;
            __mutex_init(piVar6,"&spf_core_priv->lock",obj.spf_core_platform_driver_probe.__key);
            piVar2 = _segment.ehdr;
            piVar6 = _segment.ehdr + 10;
            _segment.ehdr[9] = 0xfffffffe0;
            piVar2[10] = piVar6;
            piVar2[0xb] = piVar6;
            piVar2[0xc] = sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
            *(piVar2 + 8) = 1;
            iVar3 = __gpr_driver_register
                              (reloc.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt,obj.__this_module);
            if (iVar3 != 0) {
                _printk(0x800069f,"spf_core_platform_driver_probe",iVar3);
            }
            __mutex_init(obj.hw_vote_lock,"&hw_vote_lock",obj.digital_cdc_rsc_mgr_init.__key.llvm.10300384068280124075
                        );
            uVar8 = 0;
            obj.spf_core_platform_driver_probe.__key = 0x1;
        }
        return uVar8;
    }
    return param_1;
}


// ===== sym.spf_core_exit.0c5488c044b5a7318a5127066f606c6c.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.spf_core_exit.0c5488c044b5a7318a5127066f606c6c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _printk(0x8000652,"spf_core_exit");
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = *(param_1 + 0x98);
        mutex_lock(_segment.ehdr + 8);
        *(_segment.ehdr + 0x38) = 0;
        kfree(uVar1);
        mutex_unlock(_segment.ehdr + 8);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt @ 0x08001210 (size 8) =====

ulong sym.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800055f,"spf_core_probe");
    if (_segment.ehdr == 0) {
        _printk(0x8000652,"spf_core_probe");
        uVar3 = 0xfffffdfb;
    }
    else {
        mutex_lock(_segment.ehdr + 8);
        piVar2 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x58);
        if (piVar2 == NULL) {
            mutex_unlock(_segment.ehdr + 8);
            uVar3 = 0xfffffff4;
        }
        else {
            *(param_1 + 0x98) = piVar2;
            __mutex_init(piVar2 + 4,"&core->lock",obj.spf_core_platform_driver_probe.__key);
            *piVar2 = param_1;
            __init_waitqueue_head(piVar2 + 1,"&core->wait",obj.spf_core_platform_driver_probe.__key);
            iVar4 = _segment.ehdr;
            pcVar1 = _segment.ehdr + 0x40;
            *(_segment.ehdr + 0x38) = piVar2;
            if (*pcVar1 != '\0') {
                queue_work_on(0x20,_gpr_send_pkt,iVar4 + 0x48);
                iVar4 = _segment.ehdr;
            }
            mutex_unlock(iVar4 + 8);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt @ 0x08001218 (size 8) =====

void sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt(void)

{
    int iVar1;
    int64_t arg1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _printk(0x80004db,"spf_core_add_child_devices");
    uVar2 = sym.spf_core_is_apm_ready(arg1);
    if ((uVar2 & 1) == 0) {
        _dev_err(*_segment.ehdr,"%s: apm is not up\n","spf_core_add_child_devices");
    }
    else {
        _dev_err(*_segment.ehdr,"%s: apm is up\n","spf_core_add_child_devices");
        iVar1 = of_platform_populate(*(*_segment.ehdr + 0x2f0),0,0);
        if (iVar1 != 0) {
            _dev_err(*_segment.ehdr,"%s: failed to add child nodes, ret=%d\n","spf_core_add_child_devices",iVar1);
        }
        *(_segment.ehdr + 8) = 0;
    }
    return;
}


// ===== sym.digital_cdc_rsc_mgr_hw_vote_disable.cfi_jt @ 0x08001220 (size 8) =====

void sym.digital_cdc_rsc_mgr_hw_vote_disable.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || ((obj.spf_core_platform_driver_probe.__key & 1) == 0)) {
        iVar1 = ___ratelimit(obj.digital_cdc_rsc_mgr_hw_vote_disable._rs,"digital_cdc_rsc_mgr_hw_vote_disable");
        if (iVar1 != 0) {
            _printk(0x8000538,"digital_cdc_rsc_mgr_hw_vote_disable");
        }
    }
    else {
        mutex_lock(obj.hw_vote_lock);
        clk_disable(param_1);
        clk_unprepare(param_1);
        mutex_unlock(obj.hw_vote_lock);
        __trace_bprintk(0x8001e7c,*0x8002000,"digital_cdc_rsc_mgr_hw_vote_disable");
    }
    return;
}


// ===== sym.digital_cdc_rsc_mgr_hw_vote_reset.cfi_jt @ 0x08001228 (size 8) =====

void sym.digital_cdc_rsc_mgr_hw_vote_reset.cfi_jt(int64_t param_1)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || ((obj.spf_core_platform_driver_probe.__key & 1) == 0)) {
        iVar3 = ___ratelimit(obj.digital_cdc_rsc_mgr_hw_vote_reset._rs,"digital_cdc_rsc_mgr_hw_vote_reset");
        if (iVar3 != 0) {
            _printk(0x8000538,"digital_cdc_rsc_mgr_hw_vote_reset");
        }
    }
    else {
        mutex_lock(obj.hw_vote_lock);
        uVar4 = __clk_is_enabled(param_1);
        if ((uVar4 & 1) == 0) {
            __trace_bprintk(0x8001f48,*0x8002000,"digital_cdc_rsc_mgr_hw_vote_reset",0);
        }
        else {
            iVar3 = 0;
            do {
                clk_disable(param_1);
                clk_unprepare(param_1);
                uVar4 = __clk_is_enabled(param_1);
                iVar3 = iVar3 + -1;
            } while ((uVar4 & 1) != 0);
            __trace_bprintk(0x8001f48,*0x8002000,"digital_cdc_rsc_mgr_hw_vote_reset",-iVar3);
            if (iVar3 != 0) {
                do {
                    iVar2 = clk_prepare(param_1);
                    if ((iVar2 == 0) && (iVar2 = clk_enable(param_1), iVar2 != 0)) {
                        clk_unprepare(param_1);
                    }
                    bVar1 = iVar3 != -1;
                    iVar3 = iVar3 + 1;
                } while (bVar1);
            }
        }
        mutex_unlock(obj.hw_vote_lock);
    }
    return;
}


// ===== sym.spf_core_is_apm_ready.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.spf_core_is_apm_ready.cfi_jt(void)

{
    ulong *puVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar9;
    code *unaff_x21;
    char *unaff_x22;
    int64_t unaff_x23;
    ulong uVar10;
    ulong *puVar11;
    ulong unaff_x30;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint uStack_110;
    ushort uStack_10c;
    ushort uStack_10a;
    uint uStack_108;
    uint uStack_104;
    uint uStack_100;
    uint uStack_fc;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    char *pcStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong *puStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint uStack_80;
    ushort uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar9 = 0x8000000;
    iStack_68 = *(iVar6 + 0x5e0);
    if (_segment.ehdr == NULL) {
        uVar10 = 0;
    }
    else {
        mutex_lock(_segment.ehdr + 1);
        iVar6 = _mutex_lock;
        puVar11 = _segment.ehdr[7];
        if (puVar11 == NULL) {
            uVar10 = 0;
        }
        else {
            puStack_b0 = puVar11 + 4;
            mutex_lock();
            puVar1 = puVar11 + 1;
            unaff_x23 = -0x9c4 - iVar6;
            uVar9 = 0x302;
            unaff_x21 = obj.__spf_core_is_apm_ready._rs;
            unaff_x22 = "__spf_core_is_apm_ready";
            do {
                uVar10 = *puVar11;
                *(&uStack_80 | 4) = 0;
                (&uStack_80 | 4)[1] = 0;
                uStack_80 = 0x1860;
                uStack_7c = 0x302;
                uStack_6c = 0x1001021;
                uStack_78 = 3;
                uStack_74 = 1;
                iVar3 = ___ratelimit(obj.__spf_core_is_apm_ready._rs,"__spf_core_is_apm_ready");
                if (iVar3 != 0) {
                    _dev_err(*_segment.ehdr,"%s: send_command ret\n","__spf_core_is_apm_ready");
                }
                iVar3 = gpr_send_pkt(uVar10,&uStack_80);
                if (iVar3 < 0) {
code_r0x080012fc:
                    *(puVar11 + 10) = 0;
                }
                else {
                    if (*(puVar11 + 10) == '\0') {
                        uStack_90 = 0;
                        uStack_88 = 0;
                        uStack_a0 = 0;
                        uStack_98 = 0;
                        uStack_a8 = 0;
                        init_wait_entry(&uStack_a8,0);
                        prepare_to_wait_event(puVar1,&uStack_a8,2);
                        if (*(puVar11 + 10) == '\0') {
                            iVar6 = 0xfa;
                            do {
                                iVar6 = schedule_timeout(iVar6);
                                prepare_to_wait_event(puVar1,&uStack_a8,2);
                                if (iVar6 == 0 && *(puVar11 + 10) != '\0') {
                                    iVar6 = 1;
                                }
                            } while ((*(puVar11 + 10) == '\0') && (iVar6 != 0));
                            finish_wait(puVar1,&uStack_a8);
                            if (0 < iVar6) goto code_r0x080013f4;
                        }
                        else {
                            finish_wait(puVar1,&uStack_a8);
code_r0x080013f4:
                            if (*(puVar11 + 10) != '\0') goto code_r0x080013fc;
                        }
                        iVar3 = ___ratelimit(obj.__spf_core_is_apm_ready._rs.10,"__spf_core_is_apm_ready");
                        if (iVar3 != 0) {
                            _dev_err(*_segment.ehdr,"%s: command timedout, ret\n","__spf_core_is_apm_ready");
                        }
                        goto code_r0x080012fc;
                    }
code_r0x080013fc:
                    *(puVar11 + 10) = 0;
                    if (*(puVar11 + 0x54) != 0) {
                        uVar10 = 1;
                        goto code_r0x08001468;
                    }
                }
                usleep_range_state(50000,0xc382,2);
            } while (unaff_x23 + _mutex_lock < 0);
            uVar10 = 0;
code_r0x08001468:
            mutex_unlock(puStack_b0);
        }
        mutex_unlock(_segment.ehdr + 1);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.spf_core_apm_close_all;
    pcStack_e8 = sym.spf_core_apm_close_all;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 0;
    uStack_10a = 0;
    uStack_108 = 0;
    puStack_f0 = &stack0xffffffffffffffa0;
    iStack_e0 = unaff_x23;
    pcStack_d0 = unaff_x22;
    pcStack_c8 = unaff_x21;
    uStack_c0 = uVar10;
    uStack_b8 = uVar9;
    if (_segment.ehdr == NULL) goto code_r0x08001720;
    mutex_lock(_segment.ehdr + 1);
    puVar11 = _segment.ehdr[7];
    if (puVar11 != NULL) {
        mutex_lock(puVar11 + 4);
        uVar9 = *puVar11;
        uStack_110 = 0x1860;
        uStack_108 = 3;
        uStack_104 = 1;
        uStack_10c = 0x302;
        uStack_fc = 0x1001013;
        iVar3 = ___ratelimit(obj.spf_core_priv,"spf_core_apm_close_all");
        if (iVar3 != 0) {
            _dev_info(*_segment.ehdr,"%s: send_command \n","spf_core_apm_close_all");
        }
        iVar3 = gpr_send_pkt(uVar9,&uStack_110);
        if (iVar3 < 0) {
            iVar4 = ___ratelimit(obj.spf_core_apm_close_all._rs.1,"spf_core_apm_close_all");
            if (iVar4 != 0) {
                pcVar8 = "%s: send_pkt_failed %d\n";
code_r0x080016a0:
                _dev_err(*_segment.ehdr,pcVar8,"spf_core_apm_close_all",iVar3);
            }
        }
        else {
            if (*(puVar11 + 10) == '\0') {
                uStack_120 = 0;
                uStack_118 = 0;
                uStack_130 = 0;
                uStack_128 = 0;
                uStack_138 = 0;
                init_wait_entry(&uStack_138,0);
                puVar1 = puVar11 + 1;
                prepare_to_wait_event(puVar1,&uStack_138,2);
                if (*(puVar11 + 10) == '\0') {
                    iVar6 = 0x4e2;
                    do {
                        iVar6 = schedule_timeout(iVar6);
                        prepare_to_wait_event(puVar1,&uStack_138,2);
                        if (iVar6 == 0 && *(puVar11 + 10) != '\0') {
                            iVar6 = 1;
                        }
                    } while ((*(puVar11 + 10) == '\0') && (iVar6 != 0));
                }
                else {
                    iVar6 = 0x4e2;
                }
                iVar3 = iVar6;
                finish_wait(puVar1,&uStack_138);
            }
            else {
                iVar3 = 0x4e2;
            }
            iVar4 = ___ratelimit(obj.spf_core_apm_close_all._rs.3,"spf_core_apm_close_all");
            if (iVar4 != 0) {
                _dev_info(*_segment.ehdr,"%s: wait event unblocked \n","spf_core_apm_close_all");
            }
            if ((iVar3 < 1) || (*(puVar11 + 10) == '\0')) {
                iVar3 = ___ratelimit(obj.spf_core_apm_close_all._rs.7,"spf_core_apm_close_all");
                if (iVar3 != 0) {
                    _dev_err(*_segment.ehdr,"%s: command timedout, ret\n","spf_core_apm_close_all");
                }
            }
            else if ((*(puVar11 + 0x54) != 0) &&
                    (iVar3 = ___ratelimit(obj.spf_core_apm_close_all._rs.5,"spf_core_apm_close_all"), iVar3 != 0)) {
                iVar3 = *(puVar11 + 0x54);
                pcVar8 = "%s, cmd failed status %d";
                goto code_r0x080016a0;
            }
        }
        *(puVar11 + 10) = 0;
        mutex_unlock(puVar11 + 4);
    }
    uVar5 = mutex_unlock(_segment.ehdr + 1);
code_r0x08001720:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_f8) {
        iVar6 = __stack_chk_fail();
        *extraout_x18_00 = sym.spf_core_platform_driver_probe;
        _printk(0x800055f,"spf_core_platform_driver_probe");
        _segment.ehdr = devm_kmalloc(iVar6 + 0x10,0x78,0xdc0);
        if (_segment.ehdr == NULL) {
            uVar9 = 0xfffffff4;
        }
        else {
            piVar7 = _segment.ehdr + 1;
            *_segment.ehdr = iVar6 + 0x10;
            __mutex_init(piVar7,"&spf_core_priv->lock",obj.spf_core_platform_driver_probe.__key);
            piVar2 = _segment.ehdr;
            piVar7 = _segment.ehdr + 10;
            _segment.ehdr[9] = 0xfffffffe0;
            piVar2[10] = piVar7;
            piVar2[0xb] = piVar7;
            piVar2[0xc] = sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
            *(piVar2 + 8) = 1;
            iVar3 = __gpr_driver_register
                              (reloc.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt,obj.__this_module);
            if (iVar3 != 0) {
                _printk(0x800069f,"spf_core_platform_driver_probe",iVar3);
            }
            __mutex_init(obj.hw_vote_lock,"&hw_vote_lock",obj.digital_cdc_rsc_mgr_init.__key.llvm.10300384068280124075
                        );
            uVar9 = 0;
            obj.spf_core_platform_driver_probe.__key = 0x1;
        }
        return uVar9;
    }
    return uVar5;
}


// ===== sym.spf_core_platform_driver_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.spf_core_platform_driver_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t *piVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800055f,"spf_core_platform_driver_probe");
    _segment.ehdr = devm_kmalloc(param_1 + 0x10,0x78,0xdc0);
    if (_segment.ehdr == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        piVar3 = _segment.ehdr + 1;
        *_segment.ehdr = param_1 + 0x10;
        __mutex_init(piVar3,"&spf_core_priv->lock",obj.spf_core_platform_driver_probe.__key);
        piVar1 = _segment.ehdr;
        piVar3 = _segment.ehdr + 10;
        _segment.ehdr[9] = 0xfffffffe0;
        piVar1[10] = piVar3;
        piVar1[0xb] = piVar3;
        piVar1[0xc] = sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
        *(piVar1 + 8) = 1;
        iVar2 = __gpr_driver_register(reloc.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt,obj.__this_module);
        if (iVar2 != 0) {
            _printk(0x800069f,"spf_core_platform_driver_probe",iVar2);
        }
        __mutex_init(obj.hw_vote_lock,"&hw_vote_lock",obj.digital_cdc_rsc_mgr_init.__key.llvm.10300384068280124075);
        uVar4 = 0;
        obj.spf_core_platform_driver_probe.__key = 0x1;
    }
    return uVar4;
}


// ===== sym.spf_core_platform_driver_remove.0c5488c044b5a7318a5127066f606c6c.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.spf_core_platform_driver_remove.0c5488c044b5a7318a5127066f606c6c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpr_driver_unregister(reloc.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt);
    _segment.ehdr = 0;
    obj.spf_core_platform_driver_probe.__key = 0x0;
    return 0;
}


// ===== sym.spf_core_is_apm_ready @ 0x08001248 (size 636) =====

ulong sym.spf_core_is_apm_ready(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar9;
    code *unaff_x21;
    char *unaff_x22;
    int64_t unaff_x23;
    ulong uVar10;
    ulong *puVar11;
    ulong unaff_x30;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint uStack_110;
    ushort uStack_10c;
    ushort uStack_10a;
    uint uStack_108;
    uint uStack_104;
    uint uStack_100;
    uint uStack_fc;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    char *pcStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong *puStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint uStack_80;
    ushort uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar9 = 0x8000000;
    iStack_68 = *(iVar6 + 0x5e0);
    if (_segment.ehdr == NULL) {
        uVar10 = 0;
    }
    else {
        mutex_lock(_segment.ehdr + 1);
        iVar6 = _mutex_lock;
        puVar11 = _segment.ehdr[7];
        if (puVar11 == NULL) {
            uVar10 = 0;
        }
        else {
            puStack_b0 = puVar11 + 4;
            mutex_lock();
            puVar1 = puVar11 + 1;
            unaff_x23 = -0x9c4 - iVar6;
            uVar9 = 0x302;
            unaff_x21 = obj.__spf_core_is_apm_ready._rs;
            unaff_x22 = "__spf_core_is_apm_ready";
            do {
                uVar10 = *puVar11;
                *(&uStack_80 | 4) = 0;
                (&uStack_80 | 4)[1] = 0;
                uStack_80 = 0x1860;
                uStack_7c = 0x302;
                uStack_6c = 0x1001021;
                uStack_78 = 3;
                uStack_74 = 1;
                iVar3 = ___ratelimit(obj.__spf_core_is_apm_ready._rs,"__spf_core_is_apm_ready");
                if (iVar3 != 0) {
                    _dev_err(*_segment.ehdr,"%s: send_command ret\n","__spf_core_is_apm_ready");
                }
                iVar3 = gpr_send_pkt(uVar10,&uStack_80);
                if (iVar3 < 0) {
code_r0x080012fc:
                    *(puVar11 + 10) = 0;
                }
                else {
                    if (*(puVar11 + 10) == '\0') {
                        uStack_90 = 0;
                        uStack_88 = 0;
                        uStack_a0 = 0;
                        uStack_98 = 0;
                        uStack_a8 = 0;
                        init_wait_entry(&uStack_a8,0);
                        prepare_to_wait_event(puVar1,&uStack_a8,2);
                        if (*(puVar11 + 10) == '\0') {
                            iVar6 = 0xfa;
                            do {
                                iVar6 = schedule_timeout(iVar6);
                                prepare_to_wait_event(puVar1,&uStack_a8,2);
                                if (iVar6 == 0 && *(puVar11 + 10) != '\0') {
                                    iVar6 = 1;
                                }
                            } while ((*(puVar11 + 10) == '\0') && (iVar6 != 0));
                            finish_wait(puVar1,&uStack_a8);
                            if (0 < iVar6) goto code_r0x080013f4;
                        }
                        else {
                            finish_wait(puVar1,&uStack_a8);
code_r0x080013f4:
                            if (*(puVar11 + 10) != '\0') goto code_r0x080013fc;
                        }
                        iVar3 = ___ratelimit(obj.__spf_core_is_apm_ready._rs.10,"__spf_core_is_apm_ready");
                        if (iVar3 != 0) {
                            _dev_err(*_segment.ehdr,"%s: command timedout, ret\n","__spf_core_is_apm_ready");
                        }
                        goto code_r0x080012fc;
                    }
code_r0x080013fc:
                    *(puVar11 + 10) = 0;
                    if (*(puVar11 + 0x54) != 0) {
                        uVar10 = 1;
                        goto code_r0x08001468;
                    }
                }
                usleep_range_state(50000,0xc382,2);
            } while (unaff_x23 + _mutex_lock < 0);
            uVar10 = 0;
code_r0x08001468:
            mutex_unlock(puStack_b0);
        }
        arg1 = mutex_unlock(_segment.ehdr + 1);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    uVar5 = __stack_chk_fail(arg1);
    *extraout_x18 = sym.spf_core_apm_close_all;
    pcStack_e8 = sym.spf_core_apm_close_all;
    iVar6 = sp_el0;
    iStack_f8 = *(iVar6 + 0x5e0);
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 0;
    uStack_10a = 0;
    uStack_108 = 0;
    puStack_f0 = &stack0xffffffffffffffa0;
    iStack_e0 = unaff_x23;
    pcStack_d0 = unaff_x22;
    pcStack_c8 = unaff_x21;
    uStack_c0 = uVar10;
    uStack_b8 = uVar9;
    if (_segment.ehdr == NULL) goto code_r0x08001720;
    mutex_lock(_segment.ehdr + 1);
    puVar11 = _segment.ehdr[7];
    if (puVar11 != NULL) {
        mutex_lock(puVar11 + 4);
        uVar9 = *puVar11;
        uStack_110 = 0x1860;
        uStack_108 = 3;
        uStack_104 = 1;
        uStack_10c = 0x302;
        uStack_fc = 0x1001013;
        iVar3 = ___ratelimit(obj.spf_core_priv,"spf_core_apm_close_all");
        if (iVar3 != 0) {
            _dev_info(*_segment.ehdr,"%s: send_command \n","spf_core_apm_close_all");
        }
        iVar3 = gpr_send_pkt(uVar9,&uStack_110);
        if (iVar3 < 0) {
            iVar4 = ___ratelimit(obj.spf_core_apm_close_all._rs.1,"spf_core_apm_close_all");
            if (iVar4 != 0) {
                pcVar8 = "%s: send_pkt_failed %d\n";
code_r0x080016a0:
                _dev_err(*_segment.ehdr,pcVar8,"spf_core_apm_close_all",iVar3);
            }
        }
        else {
            if (*(puVar11 + 10) == '\0') {
                uStack_120 = 0;
                uStack_118 = 0;
                uStack_130 = 0;
                uStack_128 = 0;
                uStack_138 = 0;
                init_wait_entry(&uStack_138,0);
                puVar1 = puVar11 + 1;
                prepare_to_wait_event(puVar1,&uStack_138,2);
                if (*(puVar11 + 10) == '\0') {
                    iVar6 = 0x4e2;
                    do {
                        iVar6 = schedule_timeout(iVar6);
                        prepare_to_wait_event(puVar1,&uStack_138,2);
                        if (iVar6 == 0 && *(puVar11 + 10) != '\0') {
                            iVar6 = 1;
                        }
                    } while ((*(puVar11 + 10) == '\0') && (iVar6 != 0));
                }
                else {
                    iVar6 = 0x4e2;
                }
                iVar3 = iVar6;
                finish_wait(puVar1,&uStack_138);
            }
            else {
                iVar3 = 0x4e2;
            }
            iVar4 = ___ratelimit(obj.spf_core_apm_close_all._rs.3,"spf_core_apm_close_all");
            if (iVar4 != 0) {
                _dev_info(*_segment.ehdr,"%s: wait event unblocked \n","spf_core_apm_close_all");
            }
            if ((iVar3 < 1) || (*(puVar11 + 10) == '\0')) {
                iVar3 = ___ratelimit(obj.spf_core_apm_close_all._rs.7,"spf_core_apm_close_all");
                if (iVar3 != 0) {
                    _dev_err(*_segment.ehdr,"%s: command timedout, ret\n","spf_core_apm_close_all");
                }
            }
            else if ((*(puVar11 + 0x54) != 0) &&
                    (iVar3 = ___ratelimit(obj.spf_core_apm_close_all._rs.5,"spf_core_apm_close_all"), iVar3 != 0)) {
                iVar3 = *(puVar11 + 0x54);
                pcVar8 = "%s, cmd failed status %d";
                goto code_r0x080016a0;
            }
        }
        *(puVar11 + 10) = 0;
        mutex_unlock(puVar11 + 4);
    }
    uVar5 = mutex_unlock(_segment.ehdr + 1);
code_r0x08001720:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_f8) {
        iVar6 = __stack_chk_fail();
        *extraout_x18_00 = sym.spf_core_platform_driver_probe;
        _printk(0x800055f,"spf_core_platform_driver_probe");
        _segment.ehdr = devm_kmalloc(iVar6 + 0x10,0x78,0xdc0);
        if (_segment.ehdr == NULL) {
            uVar9 = 0xfffffff4;
        }
        else {
            piVar7 = _segment.ehdr + 1;
            *_segment.ehdr = iVar6 + 0x10;
            __mutex_init(piVar7,"&spf_core_priv->lock",obj.spf_core_platform_driver_probe.__key);
            piVar2 = _segment.ehdr;
            piVar7 = _segment.ehdr + 10;
            _segment.ehdr[9] = 0xfffffffe0;
            piVar2[10] = piVar7;
            piVar2[0xb] = piVar7;
            piVar2[0xc] = sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
            *(piVar2 + 8) = 1;
            iVar3 = __gpr_driver_register
                              (reloc.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt,obj.__this_module);
            if (iVar3 != 0) {
                _printk(0x800069f,"spf_core_platform_driver_probe",iVar3);
            }
            __mutex_init(obj.hw_vote_lock,"&hw_vote_lock",obj.digital_cdc_rsc_mgr_init.__key.llvm.10300384068280124075
                        );
            uVar9 = 0;
            obj.spf_core_platform_driver_probe.__key = 0x1;
        }
        return uVar9;
    }
    return uVar5;
}


// ===== sym.spf_core_apm_close_all @ 0x080014c4 (size 692) =====

ulong sym.spf_core_apm_close_all(ulong param_1)

{
    ulong *puVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar8;
    ulong *puVar9;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    ushort uStack_5c;
    ushort uStack_5a;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_5c = 0;
    uStack_5a = 0;
    uStack_58 = 0;
    if (_segment.ehdr == NULL) goto code_r0x08001720;
    mutex_lock(_segment.ehdr + 1);
    puVar9 = _segment.ehdr[7];
    if (puVar9 != NULL) {
        mutex_lock(puVar9 + 4);
        uVar8 = *puVar9;
        uStack_60 = 0x1860;
        uStack_58 = 3;
        uStack_54 = 1;
        uStack_5c = 0x302;
        uStack_4c = 0x1001013;
        iVar3 = ___ratelimit(obj.spf_core_priv,"spf_core_apm_close_all");
        if (iVar3 != 0) {
            _dev_info(*_segment.ehdr,"%s: send_command \n","spf_core_apm_close_all");
        }
        iVar3 = gpr_send_pkt(uVar8,&uStack_60);
        if (iVar3 < 0) {
            iVar4 = ___ratelimit(obj.spf_core_apm_close_all._rs.1,"spf_core_apm_close_all");
            if (iVar4 != 0) {
                pcVar7 = "%s: send_pkt_failed %d\n";
code_r0x080016a0:
                _dev_err(*_segment.ehdr,pcVar7,"spf_core_apm_close_all",iVar3);
            }
        }
        else {
            if (*(puVar9 + 10) == '\0') {
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_88 = 0;
                init_wait_entry(&uStack_88,0);
                puVar1 = puVar9 + 1;
                prepare_to_wait_event(puVar1,&uStack_88,2);
                if (*(puVar9 + 10) == '\0') {
                    iVar5 = 0x4e2;
                    do {
                        iVar5 = schedule_timeout(iVar5);
                        prepare_to_wait_event(puVar1,&uStack_88,2);
                        if (iVar5 == 0 && *(puVar9 + 10) != '\0') {
                            iVar5 = 1;
                        }
                    } while ((*(puVar9 + 10) == '\0') && (iVar5 != 0));
                }
                else {
                    iVar5 = 0x4e2;
                }
                iVar3 = iVar5;
                finish_wait(puVar1,&uStack_88);
            }
            else {
                iVar3 = 0x4e2;
            }
            iVar4 = ___ratelimit(obj.spf_core_apm_close_all._rs.3,"spf_core_apm_close_all");
            if (iVar4 != 0) {
                _dev_info(*_segment.ehdr,"%s: wait event unblocked \n","spf_core_apm_close_all");
            }
            if ((iVar3 < 1) || (*(puVar9 + 10) == '\0')) {
                iVar3 = ___ratelimit(obj.spf_core_apm_close_all._rs.7,"spf_core_apm_close_all");
                if (iVar3 != 0) {
                    _dev_err(*_segment.ehdr,"%s: command timedout, ret\n","spf_core_apm_close_all");
                }
            }
            else if ((*(puVar9 + 0x54) != 0) &&
                    (iVar3 = ___ratelimit(obj.spf_core_apm_close_all._rs.5,"spf_core_apm_close_all"), iVar3 != 0)) {
                iVar3 = *(puVar9 + 0x54);
                pcVar7 = "%s, cmd failed status %d";
                goto code_r0x080016a0;
            }
        }
        *(puVar9 + 10) = 0;
        mutex_unlock(puVar9 + 4);
    }
    param_1 = mutex_unlock(_segment.ehdr + 1);
code_r0x08001720:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        iVar5 = __stack_chk_fail();
        *extraout_x18 = sym.spf_core_platform_driver_probe;
        _printk(0x800055f,"spf_core_platform_driver_probe");
        _segment.ehdr = devm_kmalloc(iVar5 + 0x10,0x78,0xdc0);
        if (_segment.ehdr == NULL) {
            uVar8 = 0xfffffff4;
        }
        else {
            piVar6 = _segment.ehdr + 1;
            *_segment.ehdr = iVar5 + 0x10;
            __mutex_init(piVar6,"&spf_core_priv->lock",obj.spf_core_platform_driver_probe.__key);
            piVar2 = _segment.ehdr;
            piVar6 = _segment.ehdr + 10;
            _segment.ehdr[9] = 0xfffffffe0;
            piVar2[10] = piVar6;
            piVar2[0xb] = piVar6;
            piVar2[0xc] = sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
            *(piVar2 + 8) = 1;
            iVar3 = __gpr_driver_register
                              (reloc.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt,obj.__this_module);
            if (iVar3 != 0) {
                _printk(0x800069f,"spf_core_platform_driver_probe",iVar3);
            }
            __mutex_init(obj.hw_vote_lock,"&hw_vote_lock",obj.digital_cdc_rsc_mgr_init.__key.llvm.10300384068280124075
                        );
            uVar8 = 0;
            obj.spf_core_platform_driver_probe.__key = 0x1;
        }
        return uVar8;
    }
    return param_1;
}


// ===== sym.spf_core_platform_driver_probe @ 0x08001778 (size 264) =====

ulong sym.spf_core_platform_driver_probe(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t *piVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800055f,"spf_core_platform_driver_probe");
    _segment.ehdr = devm_kmalloc(arg1 + 0x10,0x78,0xdc0);
    if (_segment.ehdr == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        piVar3 = _segment.ehdr + 1;
        *_segment.ehdr = arg1 + 0x10;
        __mutex_init(piVar3,"&spf_core_priv->lock",obj.spf_core_platform_driver_probe.__key);
        piVar1 = _segment.ehdr;
        piVar3 = _segment.ehdr + 10;
        _segment.ehdr[9] = 0xfffffffe0;
        piVar1[10] = piVar3;
        piVar1[0xb] = piVar3;
        piVar1[0xc] = sym.spf_core_add_child_devices.0c5488c044b5a7318a5127066f606c6c.cfi_jt;
        *(piVar1 + 8) = 1;
        iVar2 = __gpr_driver_register(reloc.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt,obj.__this_module);
        if (iVar2 != 0) {
            _printk(0x800069f,"spf_core_platform_driver_probe",iVar2);
        }
        __mutex_init(obj.hw_vote_lock,"&hw_vote_lock",obj.digital_cdc_rsc_mgr_init.__key.llvm.10300384068280124075);
        uVar4 = 0;
        obj.spf_core_platform_driver_probe.__key = 0x1;
    }
    return uVar4;
}


// ===== sym.spf_core_platform_driver_remove @ 0x08001880 (size 64) =====

ulong sym.spf_core_platform_driver_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpr_driver_unregister(reloc.spf_core_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt);
    _segment.ehdr = 0;
    obj.spf_core_platform_driver_probe.__key = 0x0;
    return 0;
}


// ===== sym.spf_core_add_child_devices @ 0x080018c0 (size 200) =====

void sym.spf_core_add_child_devices(void)

{
    int iVar1;
    int64_t arg1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _printk(0x80004db,"spf_core_add_child_devices");
    uVar2 = sym.spf_core_is_apm_ready(arg1);
    if ((uVar2 & 1) == 0) {
        _dev_err(*_segment.ehdr,"%s: apm is not up\n","spf_core_add_child_devices");
    }
    else {
        _dev_err(*_segment.ehdr,"%s: apm is up\n","spf_core_add_child_devices");
        iVar1 = of_platform_populate(*(*_segment.ehdr + 0x2f0),0,0);
        if (iVar1 != 0) {
            _dev_err(*_segment.ehdr,"%s: failed to add child nodes, ret=%d\n","spf_core_add_child_devices",iVar1);
        }
        *(_segment.ehdr + 8) = 0;
    }
    return;
}


// ===== sym.spf_core_probe @ 0x08001988 (size 276) =====

ulong sym.spf_core_probe(int64_t arg1)

{
    char *pcVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800055f,"spf_core_probe");
    if (_segment.ehdr == 0) {
        _printk(0x8000652,"spf_core_probe");
        uVar3 = 0xfffffdfb;
    }
    else {
        mutex_lock(_segment.ehdr + 8);
        piVar2 = kmem_cache_alloc_trace(____ratelimit,0xdc0,0x58);
        if (piVar2 == NULL) {
            mutex_unlock(_segment.ehdr + 8);
            uVar3 = 0xfffffff4;
        }
        else {
            *(arg1 + 0x98) = piVar2;
            __mutex_init(piVar2 + 4,"&core->lock",obj.spf_core_platform_driver_probe.__key);
            *piVar2 = arg1;
            __init_waitqueue_head(piVar2 + 1,"&core->wait",obj.spf_core_platform_driver_probe.__key);
            iVar4 = _segment.ehdr;
            pcVar1 = _segment.ehdr + 0x40;
            *(_segment.ehdr + 0x38) = piVar2;
            if (*pcVar1 != '\0') {
                queue_work_on(0x20,_gpr_send_pkt,iVar4 + 0x48);
                iVar4 = _segment.ehdr;
            }
            mutex_unlock(iVar4 + 8);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.spf_core_exit @ 0x08001a9c (size 124) =====

ulong sym.spf_core_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _printk(0x8000652,"spf_core_exit");
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = *(arg1 + 0x98);
        mutex_lock(_segment.ehdr + 8);
        *(_segment.ehdr + 0x38) = 0;
        kfree(uVar1);
        mutex_unlock(_segment.ehdr + 8);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.spf_core_callback @ 0x08001b18 (size 480) =====

ulong sym.spf_core_callback(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    iVar4 = ___ratelimit(obj.spf_core_callback._rs,"spf_core_callback");
    if (iVar4 != 0) {
        _dev_info(arg1,"%s: Payload %x","spf_core_callback",*(arg2 + 0x14));
    }
    if (*(arg2 + 0x14) == 0x2001007) {
        uVar2 = *arg2;
        iVar4 = ___ratelimit(obj.spf_core_callback._rs.29,"spf_core_callback");
        if (iVar4 != 0) {
            _dev_info(arg1,"%s: sucess response received","spf_core_callback");
        }
        uVar3 = *(arg2 + (uVar2 >> 2 & 0x3c));
        *(iVar5 + 0x50) = 1;
        *(iVar5 + 0x54) = uVar3;
    }
    else if (*(arg2 + 0x14) == 0x2001005) {
        piVar1 = arg2 + (*arg2 >> 2 & 0x3c);
        iVar4 = ___ratelimit(obj.spf_core_callback._rs.25,"spf_core_callback");
        if (iVar4 != 0) {
            _dev_info(arg1,"%s: op %x status %d","spf_core_callback",*piVar1,piVar1[1]);
        }
        if (*piVar1 == 0x1001013) {
            *(iVar5 + 0x54) = piVar1[1];
        }
        else {
            iVar4 = ___ratelimit(obj.spf_core_callback._rs.27,"spf_core_callback");
            if (iVar4 != 0) {
                _dev_err(arg1,"%s: Failed response received","spf_core_callback");
            }
        }
        *(iVar5 + 0x50) = 1;
    }
    else {
        iVar4 = ___ratelimit(obj.spf_core_callback._rs.31,"spf_core_callback");
        if (iVar4 != 0) {
            _dev_err(arg1,"Message ID from apm: 0x%x\n",*(arg2 + 0x14));
        }
    }
    if (*(iVar5 + 0x50) != '\0') {
        __wake_up(iVar5 + 8,3,1,0);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001cf8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001d3c

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
    //switch table (4 cases) at 0x80004a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d50);
    (*pcVar1)();
}


// ===== sym.digital_cdc_rsc_mgr_hw_vote_enable @ 0x08001d50 (size 220) =====

ulong sym.digital_cdc_rsc_mgr_hw_vote_enable(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && ((obj.spf_core_platform_driver_probe.__key & 1) != 0)) {
        mutex_lock(obj.hw_vote_lock);
        iVar1 = clk_prepare(arg1);
        if ((iVar1 == 0) && (iVar1 = clk_enable(arg1), iVar1 != 0)) {
            clk_unprepare(arg1);
        }
        uVar2 = mutex_unlock(obj.hw_vote_lock);
        return uVar2;
    }
    iVar1 = ___ratelimit(obj.digital_cdc_rsc_mgr_hw_vote_enable._rs,"digital_cdc_rsc_mgr_hw_vote_enable");
    if (iVar1 != 0) {
        _printk(0x8000538,"digital_cdc_rsc_mgr_hw_vote_enable");
    }
    return 0xffffffea;
}


// ===== sym.digital_cdc_rsc_mgr_hw_vote_disable @ 0x08001e2c (size 184) =====

void sym.digital_cdc_rsc_mgr_hw_vote_disable(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && ((obj.spf_core_platform_driver_probe.__key & 1) != 0)) {
        mutex_lock(obj.hw_vote_lock);
        clk_disable(arg1);
        clk_unprepare(arg1);
        mutex_unlock(obj.hw_vote_lock);
        return;
    }
    iVar1 = ___ratelimit(obj.digital_cdc_rsc_mgr_hw_vote_disable._rs,"digital_cdc_rsc_mgr_hw_vote_disable");
    if (iVar1 != 0) {
        _printk(0x8000538,"digital_cdc_rsc_mgr_hw_vote_disable");
    }
    return;
}


// ===== sym.digital_cdc_rsc_mgr_hw_vote_reset @ 0x08001ee4 (size 300) =====

void sym.digital_cdc_rsc_mgr_hw_vote_reset(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || ((obj.spf_core_platform_driver_probe.__key & 1) == 0)) {
        iVar3 = ___ratelimit(obj.digital_cdc_rsc_mgr_hw_vote_reset._rs,"digital_cdc_rsc_mgr_hw_vote_reset");
        if (iVar3 != 0) {
            _printk(0x8000538,"digital_cdc_rsc_mgr_hw_vote_reset");
        }
    }
    else {
        mutex_lock(obj.hw_vote_lock);
        uVar4 = __clk_is_enabled(arg1);
        if ((uVar4 & 1) == 0) {
            __trace_bprintk(0x8001f48,*0x8002000,"digital_cdc_rsc_mgr_hw_vote_reset",0);
        }
        else {
            iVar3 = 0;
            do {
                clk_disable(arg1);
                clk_unprepare(arg1);
                uVar4 = __clk_is_enabled(arg1);
                iVar3 = iVar3 + -1;
            } while ((uVar4 & 1) != 0);
            __trace_bprintk(0x8001f48,*0x8002000,"digital_cdc_rsc_mgr_hw_vote_reset",-iVar3);
            if (iVar3 != 0) {
                do {
                    iVar2 = clk_prepare(arg1);
                    if ((iVar2 == 0) && (iVar2 = clk_enable(arg1), iVar2 != 0)) {
                        clk_unprepare(arg1);
                    }
                    bVar1 = iVar3 != -1;
                    iVar3 = iVar3 + 1;
                } while (bVar1);
            }
        }
        mutex_unlock(obj.hw_vote_lock);
    }
    return;
}


// ===== sym.digital_cdc_rsc_mgr_init @ 0x08002010 (size 72) =====

void sym.digital_cdc_rsc_mgr_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(obj.hw_vote_lock,"&hw_vote_lock",obj.digital_cdc_rsc_mgr_init.__key.llvm.10300384068280124075);
    obj.spf_core_platform_driver_probe.__key = 0x1;
    return;
}


// ===== sym.digital_cdc_rsc_mgr_exit @ 0x08002058 (size 20) =====

void sym.digital_cdc_rsc_mgr_exit(int64_t arg1)

{
    obj.spf_core_platform_driver_probe.__key = 0x0;
    return;
}


// ===== sym.init_module @ 0x0800210c (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.spf_core_platform_driver_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002140 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.spf_core_platform_driver_probe.0c5488c044b5a7318a5127066f606c6c.cfi_jt);
    return;
}

