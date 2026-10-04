// decompiled from audio_prm_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x08001d98

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0xa97bb5b83a5679b) {
        if (arg1 < -0x734b09deb920018a) {
            if (arg1 == -0x7a1aa6da8fe5e465) {
                pcVar2 = sym.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt;
code_r0x080011a4:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001d58;
            }
            if (arg1 != -0x7946ee14de9d94fb) goto code_r0x08001d58;
            pcVar2 = sym.audio_prm_set_lpi_logging_status.cfi_jt;
        }
        else if (arg1 == -0x734b09deb920018a) {
            pcVar2 = sym.audio_prm_set_vote_against_sleep.cfi_jt;
        }
        else if (arg1 == -0x6d2e3f8228d7372e) {
            pcVar2 = sym.audio_prm_set_lpass_clk_cfg.cfi_jt;
        }
        else {
            if (arg1 != -0x47737acd2985eb5e) goto code_r0x08001d58;
            pcVar2 = sym.audio_prm_set_cdc_earpa_duty_cycling_req.cfi_jt;
        }
    }
    else if (arg1 < 0x2b3a43e29242445) {
        if (arg1 != -0xa97bb5b83a5679b) {
            if (arg1 != -0x7db7c0dc03c20df) goto code_r0x08001d58;
            pcVar2 = sym.audio_prm_set_lpass_hw_core_req.cfi_jt;
            goto code_r0x080011a4;
        }
        pcVar2 = sym.audio_prm_callback.4eeae74fa2707048b587ba5e833cc386.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.audio_prm_service_cb.4eeae74fa2707048b587ba5e833cc386.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001d58;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001d58:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001dac);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpr_driver_unregister(reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011e8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __gpr_driver_register(reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x80001f4,"audio_prm_module_init",iVar1);
    }
    __mutex_init(0x80000d8,"&g_prm.lock",obj.audio_prm_module_init.__key);
    return iVar1;
}


// ===== sym.audio_prm_service_cb.4eeae74fa2707048b587ba5e833cc386.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.audio_prm_service_cb.4eeae74fa2707048b587ba5e833cc386.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80003e8,"audio_prm_service_cb",param_2);
    if (param_2 == 1) {
        mutex_lock(0x80000d8);
        *0x8000118 = 1;
    }
    else {
        if (param_2 != 0) {
            return 1;
        }
        mutex_lock(0x80000d8);
        *0x8000118 = 0;
        obj.is_apm_ready_check_done = 0x0;
    }
    mutex_unlock();
    return 1;
}


// ===== sym.audio_prm_set_cdc_earpa_duty_cycling_req.cfi_jt @ 0x080011f8 (size 8) =====

uint sym.audio_prm_set_cdc_earpa_duty_cycling_req.cfi_jt(uint *param_1,int param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint *arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = kmem_cache_alloc_trace(_android_kmalloc_64_create,0xdc0,0x7c);
    if (arg1 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        uVar3 = 0x100100f;
        *arg1 = 0x7c60;
        if (param_2 == 0) {
            uVar3 = 0x1001010;
        }
        *(arg1 + 1) = 0x302;
        arg1[4] = 0;
        arg1[5] = uVar3;
        *(arg1 + 2) = 0x200000007;
        *(arg1 + 10) = 0x800131b00000002;
        *(arg1 + 0xc) = 0x44;
        uVar3 = *param_1;
        uVar1 = param_1[1];
        *(arg1 + 6) = 0;
        *(arg1 + 8) = 0x5400000000;
        arg1[0x10] = 0;
        arg1[0x11] = uVar3;
        *(arg1 + 0xe) = 0x100000002;
        *(arg1 + 0x12) = 0x100000002;
        *(arg1 + 0x14) = 0x200000034;
        uVar3 = param_1[2];
        uVar2 = param_1[3];
        *(arg1 + 0x16) = 0x200000024;
        arg1[0x18] = 0;
        arg1[0x19] = uVar1;
        arg1[0x1e] = uVar2;
        *(arg1 + 0x1a) = 0x300000002;
        arg1[0x1c] = uVar3;
        arg1[0x1d] = 4;
        uVar3 = sym.prm_gpr_send_pkt(arg1);
        kfree(arg1);
    }
    return uVar3;
}


// ===== sym.audio_prm_set_vote_against_sleep.cfi_jt @ 0x08001200 (size 8) =====

int sym.audio_prm_set_vote_against_sleep.cfi_jt(char param_1)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    uint *arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x3c);
    if (arg1 == NULL) {
        iVar3 = -0xc;
    }
    else {
        *arg1 = 0x3c60;
        uVar2 = 0x100100f;
        *(arg1 + 2) = 0x200000007;
        if (param_1 == '\0') {
            uVar2 = 0x1001010;
        }
        *(arg1 + 1) = 0x302;
        arg1[4] = 0;
        arg1[5] = uVar2;
        *(arg1 + 6) = 0;
        *(arg1 + 8) = 0x1400000000;
        *(arg1 + 10) = 0x800103200000002;
        *(arg1 + 0xc) = 4;
        arg1[0xe] = 1;
        iVar3 = sym.prm_gpr_send_pkt(arg1);
        if (iVar3 < 0) {
            _printk(0x8000346,"audio_prm_set_vote_against_sleep",iVar3);
        }
        kfree(arg1);
    }
    return iVar3;
}


// ===== sym.audio_prm_set_lpi_logging_status.cfi_jt @ 0x08001208 (size 8) =====

void sym.audio_prm_set_lpi_logging_status.cfi_jt(uint param_1)

{
    _segment.ehdr = param_1;
    return;
}


// ===== sym.audio_prm_set_lpass_clk_cfg.cfi_jt @ 0x08001210 (size 8) =====

uint sym.audio_prm_set_lpass_clk_cfg.cfi_jt(int *param_1,char param_2)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint uVar6;
    uint *arg1;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == '\0') {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x40);
        if (arg1 == NULL) {
            return 0xfffffff4;
        }
        iVar2 = *param_1;
        *arg1 = 0x4060;
        *(arg1 + 2) = 0x200000007;
        *(arg1 + 1) = 0x302;
        arg1[4] = 0;
        arg1[5] = 0x1001010;
        *(arg1 + 6) = 0;
        *(arg1 + 8) = 0x1800000000;
        *(arg1 + 10) = 0x800102c00000002;
        *(arg1 + 0xc) = 8;
        arg1[0xe] = 1;
        arg1[0xf] = iVar2;
    }
    else {
        arg1 = kmem_cache_alloc_trace(CONCAT71(android_kmalloc_64_create,android_kmalloc_64_create),0xdc0,0x4c);
        if (arg1 == NULL) {
            return 0xfffffff4;
        }
        iVar2 = *param_1;
        iVar3 = param_1[1];
        *arg1 = 0x4c60;
        iVar7 = _segment.ehdr;
        iVar4 = param_1[2];
        *(arg1 + 1) = 0x302;
        *(arg1 + 2) = 0x200000007;
        *(arg1 + 4) = 0x100100f00000000;
        if (((iVar7 == 0) || (uVar5 = iVar2 - 0x30cU >> 1, 5 < (uVar5 | iVar2 << 0x1f))) ||
           ((0x39U >> (uVar5 & 0x1f) & 1) == 0)) {
            iVar7 = param_1[3];
        }
        else {
            iVar7 = 2;
        }
        *(arg1 + 6) = 0;
        *(arg1 + 8) = 0x2400000000;
        arg1[0x10] = iVar3;
        arg1[0x11] = iVar4;
        *(arg1 + 10) = 0x800102c00000002;
        *(arg1 + 0xc) = 0x14;
        arg1[0xe] = 1;
        arg1[0xf] = iVar2;
        arg1[0x12] = iVar7;
    }
    uVar6 = sym.prm_gpr_send_pkt(arg1);
    kfree(arg1);
    return uVar6;
}


// ===== sym.audio_prm_callback.4eeae74fa2707048b587ba5e833cc386.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.audio_prm_callback.4eeae74fa2707048b587ba5e833cc386.cfi_jt(ulong param_1,uint32_t *param_2)

{
    int *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_2 + (*param_2 >> 2 & 0x3c);
    if (param_2[5] + 0xfdffeffe < 2) {
        if (piVar1[1] != 0) {
            _segment.ehdr = piVar1[1];
            _printk(0x80002c2,"audio_prm_callback",*piVar1,piVar1[1]);
        }
        *0x8000108 = '\x01';
        if (*piVar1 + 0xf7ffefd5U < 8 && (1 << (*piVar1 + 0xf7ffefd5U & 0x1f) & 0x83U) != 0) {
            if (piVar1[1] == 0) {
                _segment.ehdr = 0;
            }
            else {
                _printk(0x800029a,"audio_prm_callback");
                _segment.ehdr = piVar1[1];
            }
        }
        else {
            _printk(0x80003b4,"audio_prm_callback");
        }
    }
    else if (param_2[5] == 0x2001005) {
        _printk(0x800027b,"audio_prm_callback");
        *0x8000110 = piVar1[1];
        *0x8000108 = '\x01';
        goto code_r0x08001c04;
    }
    if (*0x8000108 == '\0') {
        return 0;
    }
code_r0x08001c04:
    __wake_up(reloc.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt,3,1,0);
    return 0;
}


// ===== sym.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt @ 0x08001220 (size 8) =====

int sym.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = audio_notifier_probe_status();
    if ((uVar2 & 1) == 0) {
        _printk(0x800023c,"audio_prm_probe");
        iVar1 = -0x205;
    }
    else {
        iVar1 = audio_notifier_register
                          ("audio_prm",0,reloc.audio_prm_service_cb.4eeae74fa2707048b587ba5e833cc386.cfi_jt);
        if (iVar1 < 0) {
            if (iVar1 != -0x205) {
                _printk(0x80002fb,"audio_prm_probe",iVar1);
            }
        }
        else {
            *(param_1 + 0x98) = reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt;
            _reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt = param_1;
            __init_waitqueue_head
                      (reloc.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt,"&g_prm.wait",
                       obj.audio_prm_module_init.__key);
            *0x8000118 = 1;
            _printk(0x8000414,"audio_prm_probe");
        }
    }
    return iVar1;
}


// ===== sym.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    audio_notifier_deregister("audio_prm");
    mutex_lock(0x80000d8);
    *0x8000118 = 0;
    _reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt = 0;
    mutex_unlock(0x80000d8);
    return 0;
}


// ===== sym.audio_prm_set_lpass_hw_core_req.cfi_jt @ 0x08001230 (size 8) =====

uint sym.audio_prm_set_lpass_hw_core_req.cfi_jt(ulong param_1,uint param_2,char param_3)

{
    int64_t iVar1;
    uint uVar2;
    uint *arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x3c);
    if (arg1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        *arg1 = 0x3c60;
        uVar2 = 0x100100f;
        *(arg1 + 1) = 0x302;
        if (param_3 == '\0') {
            uVar2 = 0x1001010;
        }
        *(arg1 + 2) = 0x200000007;
        arg1[0xe] = param_2;
        arg1[4] = 0;
        arg1[5] = uVar2;
        *(arg1 + 6) = 0;
        *(arg1 + 8) = 0x1400000000;
        *(arg1 + 10) = 0x800103200000002;
        *(arg1 + 0xc) = 4;
        uVar2 = sym.prm_gpr_send_pkt(arg1);
        kfree(arg1);
    }
    return uVar2;
}


// ===== sym.audio_prm_set_lpass_core_clk_req.cfi_jt @ 0x08001238 (size 8) =====

uint sym.audio_prm_set_lpass_core_clk_req.cfi_jt(ulong param_1,uint param_2,char param_3)

{
    int64_t iVar1;
    uint uVar2;
    uint *arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x3c);
    if (arg1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        *arg1 = 0x3c60;
        uVar2 = 0x100100f;
        *(arg1 + 1) = 0x302;
        if (param_3 == '\0') {
            uVar2 = 0x1001010;
        }
        *(arg1 + 2) = 0x200000007;
        arg1[0xe] = param_2;
        arg1[4] = 0;
        arg1[5] = uVar2;
        *(arg1 + 6) = 0;
        *(arg1 + 8) = 0x1400000000;
        *(arg1 + 10) = 0x800102b00000002;
        *(arg1 + 0xc) = 4;
        uVar2 = sym.prm_gpr_send_pkt(arg1);
        kfree(arg1);
    }
    return uVar2;
}


// ===== sym.audio_prm_set_lpi_logging_status @ 0x08001240 (size 20) =====

void sym.audio_prm_set_lpi_logging_status(int64_t arg1)

{
    _segment.ehdr = arg1;
    return;
}


// ===== sym.audio_prm_set_lpass_hw_core_req @ 0x08001254 (size 220) =====

uint sym.audio_prm_set_lpass_hw_core_req(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    uint *arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x3c);
    if (arg1_00 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        *arg1_00 = 0x3c60;
        uVar2 = 0x100100f;
        *(arg1_00 + 1) = 0x302;
        if ((arg2 & 0xffU) == 0) {
            uVar2 = 0x1001010;
        }
        *(arg1_00 + 2) = 0x200000007;
        arg1_00[0xe] = arg1;
        arg1_00[4] = 0;
        arg1_00[5] = uVar2;
        *(arg1_00 + 6) = 0;
        *(arg1_00 + 8) = 0x1400000000;
        *(arg1_00 + 10) = 0x800103200000002;
        *(arg1_00 + 0xc) = 4;
        uVar2 = sym.prm_gpr_send_pkt(arg1_00);
        kfree(arg1_00);
    }
    return uVar2;
}


// ===== sym.prm_gpr_send_pkt @ 0x08001330 (size 632) =====

int sym.prm_gpr_send_pkt(int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint *arg1_00;
    uint extraout_w1;
    uint *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    mutex_lock(0x80000d8);
    *0x800010c = 1;
    *0x8000110 = 0;
    if (_reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt == 0) {
        _printk(0x800042d,"prm_gpr_send_pkt");
        iVar3 = -0x13;
    }
    else {
        if ((((obj.is_apm_ready_check_done & 1) == 0) && (*0x8000118 != '\0')) &&
           (iVar3 = gpr_get_q6_state(), iVar3 == 2)) {
            _printk(0x8000379,"prm_gpr_send_pkt");
            uVar4 = spf_core_is_apm_ready();
            if ((uVar4 & 1) == 0) {
                msleep(2);
                uVar4 = spf_core_is_apm_ready();
                if ((uVar4 & 1) == 0) {
                    msleep(2);
                    uVar4 = spf_core_is_apm_ready();
                    if ((uVar4 & 1) == 0) {
                        msleep(2);
                        spf_core_is_apm_ready();
                    }
                }
            }
            obj.is_apm_ready_check_done = 0x1;
            _printk(0x800032a,"prm_gpr_send_pkt");
        }
        *0x8000108 = '\0';
        iVar3 = gpr_send_pkt(_reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt,arg1);
        if (iVar3 < 0) {
            _printk(0x80001d3,"prm_gpr_send_pkt",iVar3);
        }
        else {
            if (*0x8000108 == '\0') {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_60 = 0;
                init_wait_entry(&stack0xffffffffffffffa0,0);
                prepare_to_wait_event
                          (reloc.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt,&stack0xffffffffffffffa0,2);
                if (*0x8000108 == '\0') {
                    iVar5 = 0xfa;
                    do {
                        iVar5 = schedule_timeout(iVar5);
                        prepare_to_wait_event
                                  (reloc.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt,
                                   &stack0xffffffffffffffa0,2);
                        if (iVar5 == 0 && *0x8000108 != '\0') {
                            iVar5 = 1;
                        }
                    } while ((*0x8000108 == '\0') && (iVar5 != 0));
                    finish_wait(reloc.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt,&stack0xffffffffffffffa0
                               );
                    if (iVar5 == 0) {
                        _printk(0x80001af,"prm_gpr_send_pkt");
                        iVar3 = -0x6e;
                        goto code_r0x08001474;
                    }
                }
                else {
                    finish_wait(reloc.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt,&stack0xffffffffffffffa0
                               );
                }
            }
            if (*0x8000110 < 1) {
                iVar3 = 0;
            }
            else {
                _printk(0x80003cb,"prm_gpr_send_pkt",CONCAT44(*0x8000114,*0x8000110));
                iVar3 = -0x16;
            }
        }
    }
code_r0x08001474:
    mutex_unlock(0x80000d8);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    __stack_chk_fail();
    uVar2 = *CONCAT44(extraout_x8 >> 0x20,*extraout_x8);
    *extraout_x18 = 0x80015a0;
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x3c);
    if (arg1_00 == NULL) {
        iVar3 = -0xc;
    }
    else {
        *arg1_00 = 0x3c60;
        uVar1 = 0x100100f;
        *(arg1_00 + 1) = 0x302;
        if ((uVar2 & 0xff) == 0) {
            uVar1 = 0x1001010;
        }
        *(arg1_00 + 2) = 0x200000007;
        arg1_00[0xe] = extraout_w1;
        arg1_00[4] = 0;
        arg1_00[5] = uVar1;
        *(arg1_00 + 6) = 0;
        *(arg1_00 + 8) = 0x1400000000;
        *(arg1_00 + 10) = 0x800102b00000002;
        *(arg1_00 + 0xc) = 4;
        iVar3 = sym.prm_gpr_send_pkt(arg1_00);
        kfree(arg1_00);
    }
    return iVar3;
}


// ===== sym.audio_prm_set_lpass_core_clk_req @ 0x080015a8 (size 220) =====

uint sym.audio_prm_set_lpass_core_clk_req(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    uint *arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x3c);
    if (arg1_00 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        *arg1_00 = 0x3c60;
        uVar2 = 0x100100f;
        *(arg1_00 + 1) = 0x302;
        if ((arg2 & 0xffU) == 0) {
            uVar2 = 0x1001010;
        }
        *(arg1_00 + 2) = 0x200000007;
        arg1_00[0xe] = arg1;
        arg1_00[4] = 0;
        arg1_00[5] = uVar2;
        *(arg1_00 + 6) = 0;
        *(arg1_00 + 8) = 0x1400000000;
        *(arg1_00 + 10) = 0x800102b00000002;
        *(arg1_00 + 0xc) = 4;
        uVar2 = sym.prm_gpr_send_pkt(arg1_00);
        kfree(arg1_00);
    }
    return uVar2;
}


// ===== sym.audio_prm_set_cdc_earpa_duty_cycling_req @ 0x08001684 (size 264) =====

uint sym.audio_prm_set_cdc_earpa_duty_cycling_req(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint *arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = kmem_cache_alloc_trace(_android_kmalloc_64_create,0xdc0,0x7c);
    if (arg1_00 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        uVar3 = 0x100100f;
        *arg1_00 = 0x7c60;
        if (arg2 == 0) {
            uVar3 = 0x1001010;
        }
        *(arg1_00 + 1) = 0x302;
        arg1_00[4] = 0;
        arg1_00[5] = uVar3;
        *(arg1_00 + 2) = 0x200000007;
        *(arg1_00 + 10) = 0x800131b00000002;
        *(arg1_00 + 0xc) = 0x44;
        uVar3 = *arg1;
        uVar1 = *(arg1 + 4);
        *(arg1_00 + 6) = 0;
        *(arg1_00 + 8) = 0x5400000000;
        arg1_00[0x10] = 0;
        arg1_00[0x11] = uVar3;
        *(arg1_00 + 0xe) = 0x100000002;
        *(arg1_00 + 0x12) = 0x100000002;
        *(arg1_00 + 0x14) = 0x200000034;
        uVar3 = *(arg1 + 8);
        uVar2 = *(arg1 + 0xc);
        *(arg1_00 + 0x16) = 0x200000024;
        arg1_00[0x18] = 0;
        arg1_00[0x19] = uVar1;
        arg1_00[0x1e] = uVar2;
        *(arg1_00 + 0x1a) = 0x300000002;
        arg1_00[0x1c] = uVar3;
        arg1_00[0x1d] = 4;
        uVar3 = sym.prm_gpr_send_pkt(arg1_00);
        kfree(arg1_00);
    }
    return uVar3;
}


// ===== sym.audio_prm_set_vote_against_sleep @ 0x0800178c (size 248) =====

int sym.audio_prm_set_vote_against_sleep(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    uint *arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x3c);
    if (arg1_00 == NULL) {
        iVar3 = -0xc;
    }
    else {
        *arg1_00 = 0x3c60;
        uVar2 = 0x100100f;
        *(arg1_00 + 2) = 0x200000007;
        if ((arg1 & 0xffU) == 0) {
            uVar2 = 0x1001010;
        }
        *(arg1_00 + 1) = 0x302;
        arg1_00[4] = 0;
        arg1_00[5] = uVar2;
        *(arg1_00 + 6) = 0;
        *(arg1_00 + 8) = 0x1400000000;
        *(arg1_00 + 10) = 0x800103200000002;
        *(arg1_00 + 0xc) = 4;
        arg1_00[0xe] = 1;
        iVar3 = sym.prm_gpr_send_pkt(arg1_00);
        if (iVar3 < 0) {
            _printk(0x8000346,"audio_prm_set_vote_against_sleep",iVar3);
        }
        kfree(arg1_00);
    }
    return iVar3;
}


// ===== sym.audio_prm_set_lpass_clk_cfg @ 0x08001884 (size 396) =====

uint sym.audio_prm_set_lpass_clk_cfg(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    uint uVar6;
    uint *arg1_00;
    uint uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 & 0xff) == 0) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x40);
        if (arg1_00 == NULL) {
            return 0xfffffff4;
        }
        uVar6 = *arg1;
        *arg1_00 = 0x4060;
        *(arg1_00 + 2) = 0x200000007;
        *(arg1_00 + 1) = 0x302;
        arg1_00[4] = 0;
        arg1_00[5] = 0x1001010;
        *(arg1_00 + 6) = 0;
        *(arg1_00 + 8) = 0x1800000000;
        *(arg1_00 + 10) = 0x800102c00000002;
        *(arg1_00 + 0xc) = 8;
        arg1_00[0xe] = 1;
        arg1_00[0xf] = uVar6;
    }
    else {
        arg1_00 = kmem_cache_alloc_trace(CONCAT71(android_kmalloc_64_create,android_kmalloc_64_create),0xdc0,0x4c);
        if (arg1_00 == NULL) {
            return 0xfffffff4;
        }
        iVar2 = *arg1;
        uVar6 = *(arg1 + 4);
        *arg1_00 = 0x4c60;
        iVar5 = _segment.ehdr;
        uVar3 = *(arg1 + 8);
        *(arg1_00 + 1) = 0x302;
        *(arg1_00 + 2) = 0x200000007;
        *(arg1_00 + 4) = 0x100100f00000000;
        if (((iVar5 == 0) || (uVar4 = iVar2 - 0x30cU >> 1, 5 < (uVar4 | iVar2 << 0x1f))) ||
           ((0x39U >> (uVar4 & 0x1f) & 1) == 0)) {
            uVar7 = *(arg1 + 0xc);
        }
        else {
            uVar7 = 2;
        }
        *(arg1_00 + 6) = 0;
        *(arg1_00 + 8) = 0x2400000000;
        arg1_00[0x10] = uVar6;
        arg1_00[0x11] = uVar3;
        *(arg1_00 + 10) = 0x800102c00000002;
        *(arg1_00 + 0xc) = 0x14;
        arg1_00[0xe] = 1;
        arg1_00[0xf] = iVar2;
        arg1_00[0x12] = uVar7;
    }
    uVar6 = sym.prm_gpr_send_pkt(arg1_00);
    kfree(arg1_00);
    return uVar6;
}


// ===== sym.audio_prm_probe @ 0x08001a10 (size 232) =====

int sym.audio_prm_probe(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = audio_notifier_probe_status();
    if ((uVar2 & 1) == 0) {
        _printk(0x800023c,"audio_prm_probe");
        iVar1 = -0x205;
    }
    else {
        iVar1 = audio_notifier_register
                          ("audio_prm",0,reloc.audio_prm_service_cb.4eeae74fa2707048b587ba5e833cc386.cfi_jt);
        if (iVar1 < 0) {
            if (iVar1 != -0x205) {
                _printk(0x80002fb,"audio_prm_probe",iVar1);
            }
        }
        else {
            *(arg1 + 0x98) = reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt;
            _reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt = arg1;
            __init_waitqueue_head
                      (reloc.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt,"&g_prm.wait",
                       obj.audio_prm_module_init.__key);
            *0x8000118 = 1;
            _printk(0x8000414,"audio_prm_probe");
        }
    }
    return iVar1;
}


// ===== sym.audio_prm_remove @ 0x08001af8 (size 92) =====

ulong sym.audio_prm_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    audio_notifier_deregister("audio_prm");
    mutex_lock(0x80000d8);
    *0x8000118 = 0;
    _reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt = 0;
    mutex_unlock(0x80000d8);
    return 0;
}


// ===== sym.audio_prm_callback @ 0x08001b54 (size 368) =====

ulong sym.audio_prm_callback(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + (*arg1 >> 2 & 0x3c);
    if (*(arg1 + 0x14) + 0xfdffeffeU < 2) {
        if (piVar1[1] != 0) {
            _segment.ehdr = piVar1[1];
            _printk(0x80002c2,"audio_prm_callback",*piVar1,piVar1[1]);
        }
        *0x8000108 = '\x01';
        if (*piVar1 + 0xf7ffefd5U < 8 && (1 << (*piVar1 + 0xf7ffefd5U & 0x1f) & 0x83U) != 0) {
            if (piVar1[1] == 0) {
                _segment.ehdr = 0;
            }
            else {
                _printk(0x800029a,"audio_prm_callback");
                _segment.ehdr = piVar1[1];
            }
        }
        else {
            _printk(0x80003b4,"audio_prm_callback");
        }
    }
    else if (*(arg1 + 0x14) == 0x2001005) {
        _printk(0x800027b,"audio_prm_callback");
        *0x8000110 = piVar1[1];
        *0x8000108 = '\x01';
        goto code_r0x08001c04;
    }
    if (*0x8000108 == '\0') {
        return 0;
    }
code_r0x08001c04:
    __wake_up(reloc.audio_prm_remove.4eeae74fa2707048b587ba5e833cc386.cfi_jt,3,1,0);
    return 0;
}


// ===== sym.audio_prm_service_cb @ 0x08001cc4 (size 144) =====

ulong sym.audio_prm_service_cb(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80003e8,"audio_prm_service_cb",arg1);
    if (arg1 == 1) {
        mutex_lock(0x80000d8);
        *0x8000118 = 1;
    }
    else {
        if (arg1 != 0) {
            return 1;
        }
        mutex_lock(0x80000d8);
        *0x8000118 = 0;
        obj.is_apm_ready_check_done = 0x0;
    }
    mutex_unlock();
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x08001d54 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001d98

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
    //switch table (4 cases) at 0x80001a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001dac);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001e7c (size 128) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __gpr_driver_register(reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x80001f4,"audio_prm_module_init",iVar1);
    }
    __mutex_init(0x80000d8,"&g_prm.lock",obj.audio_prm_module_init.__key);
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001efc (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpr_driver_unregister(reloc.audio_prm_probe.4eeae74fa2707048b587ba5e833cc386.cfi_jt);
    return;
}

