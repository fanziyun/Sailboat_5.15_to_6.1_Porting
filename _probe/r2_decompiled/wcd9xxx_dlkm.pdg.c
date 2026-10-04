// decompiled from wcd9xxx_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 636) =====

//WARNING: Switch with 1 destination removed at 0x08003770

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x10f3eb507eaed226) {
        if (arg1 < -0x22b4abf473726dc3) {
            if (arg1 == -0x775edc59cd45f0aa) {
                pcVar2 = sym.wcdcal_get_fw_cal.cfi_jt;
            }
            else {
                if (arg1 != -0x6bb1686c91e790a0) {
                    if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x80022e8 >> 3 | pcVar1 << 0x3d) < 2)) {
                        return;
                    }
                    goto code_r0x08003730;
                }
                pcVar2 = sym.wcd_cls_h_init.cfi_jt;
            }
        }
        else if (arg1 == -0x22b4abf473726dc3) {
            pcVar2 = sym.of_clk_src_onecell_get.cfi_jt;
        }
        else {
            if (arg1 == -0x3377f916ca0c702) {
                pcVar2 = sym.audio_ext_clk_prepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt;
                goto code_r0x08002268;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08003730;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x12a6b7b7a3ba8ea4) {
        if (arg1 == 0x10f3eb507eaed226) {
            pcVar2 = sym.audio_ext_clk_get_parent.528b8d8d38456e23c5fbe17e42584de6.cfi_jt;
        }
        else if (arg1 == 0x114fceff069f5544) {
            pcVar2 = sym.wcd_cal_create_hwdep.cfi_jt;
        }
        else {
            if (arg1 != 0x129e179694a2de07) goto code_r0x08003730;
            pcVar2 = sym.wcd_clsh_set_hph_mode.cfi_jt;
        }
    }
    else if (arg1 < 0x6f56d4dab1c62b9f) {
        if (arg1 == 0x12a6b7b7a3ba8ea4) {
            if ((pcVar1 + -0x8002310 >> 3 | pcVar1 << 0x3d) < 9) {
                return;
            }
            goto code_r0x08003730;
        }
        if (arg1 != 0x41e60f4abb1a65a8) goto code_r0x08003730;
        pcVar2 = sym.wcd_cls_h_fsm.cfi_jt;
    }
    else {
        if (arg1 == 0x6f56d4dab1c62b9f) {
            pcVar2 = sym.audio_ext_clk_unprepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt;
code_r0x08002268:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08003730;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003730;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003730:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003784);
    (*pcVar1)();
}


// ===== sym.wcdcal_get_fw_cal.cfi_jt @ 0x08002288 (size 8) =====

ulong sym.wcdcal_get_fw_cal.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8000a0e,"wcdcal_get_fw_cal");
        uVar2 = 0;
    }
    else {
        uVar3 = param_2;
        if (param_2 < 4) {
            iVar1 = param_1 + 0x48;
            mutex_lock(iVar1);
            if ((*(param_1 + uVar3 * 8 + 0x28) >> 2 & 1) == 0) {
                _printk(0x800086a,"wcdcal_get_fw_cal",uVar3);
                mutex_unlock(iVar1);
                uVar2 = 0;
            }
            else {
                mutex_unlock(iVar1);
                uVar2 = *(param_1 + uVar3 * 8);
            }
        }
        else {
            _printk(0x80006b4,"wcdcal_get_fw_cal",uVar3);
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.wcd_cls_h_fsm.cfi_jt @ 0x08002290 (size 8) =====

void sym.wcd_cls_h_fsm.cfi_jt(int64_t param_1,uint8_t *param_2,char param_3,uint32_t param_4,uint64_t param_5)

{
    uint8_t uVar1;
    int64_t iVar2;
    char *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t arg1;
    ulong *in_x18;
    ulong uVar7;
    code *pcVar8;
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
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
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
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if (param_3 == '\x02') {
        uVar1 = *param_2;
        uVar5 = uVar1 & (param_4 ^ 0xffffffff);
        if (uVar5 < 0x20) {
            uVar4 = uVar1;
            if (((10 < uVar1) && (uVar4 != 0xc)) && (uVar4 != 0xe)) {
                uVar7 = *(param_1 + 0x18);
                sym.state_to_str(uVar1,&uStack_b8);
                pcVar3 = "%s:Invalid old state:%s\n";
                goto code_r0x080025d0;
            }
            if (uVar5 == uVar1) {
                uVar7 = *(param_1 + 0x18);
                arg1 = uVar4;
                goto code_r0x080025c4;
            }
            pcVar8 = *(obj.clsh_state_fp + uVar1 * 8);
            if (8 < (pcVar8 + -0x8002310 >> 3 | pcVar8 << 0x3d)) {
                __cfi_slowpath_diag(0x12a6b7b7a3ba8ea4,pcVar8,0x8000290);
                param_5 = param_5 & 0xffffffff;
            }
            (*pcVar8)(param_1,param_2,param_4,0,param_5);
            *param_2 = uVar5;
            if (((param_4 & 0xff) < 9) && ((1 << (param_4 & 0x1f) & 0x116U) != 0)) {
                uVar5 = (param_4 & 0xaaaaaaaa) >> 1 | (param_4 & 0x55555555) << 1;
                uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
                uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                uVar5 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
                if (3 < uVar5) goto code_r0x08002618;
                param_2 = param_2 + (uVar5 + 1) * 4 + 0xc;
                param_2[0] = 9;
                param_2[1] = 0;
                param_2[2] = 0;
                param_2[3] = 0;
            }
        }
    }
    else if (param_3 == '\x01') {
        arg1 = *param_2;
        uVar6 = *param_2;
        uVar4 = uVar6 | param_4;
        uVar5 = uVar6 | param_4 & 0xff;
        if (((uVar5 < 0xb) || (uVar5 == 0xc)) || (uVar5 == 0xe)) {
            if (uVar6 != (uVar6 | param_4 & 0xff)) {
                *param_2 = uVar4;
                if (((param_4 & 0xff) < 9) && ((1 << (param_4 & 0x1f) & 0x116U) != 0)) {
                    uVar5 = (param_4 & 0xaaaaaaaa) >> 1 | (param_4 & 0x55555555) << 1;
                    uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
                    uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
                    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                    uVar5 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
                    if (3 < uVar5) goto code_r0x08002618;
                    *(param_2 + (uVar5 + 1) * 4 + 0xc) = param_5;
                }
                pcVar8 = *(obj.clsh_state_fp + (uVar4 & 0xff) * 8);
                if (8 < (pcVar8 + -0x8002310 >> 3 | pcVar8 << 0x3d)) {
                    __cfi_slowpath_diag(0x12a6b7b7a3ba8ea4,pcVar8,0x8000270);
                    param_5 = param_5 & 0xffffffff;
                }
                (*pcVar8)(param_1,param_2,param_4,1,param_5);
                goto code_r0x080025e4;
            }
            uVar7 = *(param_1 + 0x18);
code_r0x080025c4:
            sym.state_to_str(arg1,&uStack_b8);
            pcVar3 = "%s: Class-H already in requested state: %s\n";
        }
        else {
            uVar7 = *(param_1 + 0x18);
            sym.state_to_str(uVar4,&uStack_b8);
            pcVar3 = "%s: Class-H not a valid new state: %s\n";
        }
code_r0x080025d0:
        _dev_err(uVar7,pcVar3,"wcd_cls_h_fsm",&uStack_b8);
    }
code_r0x080025e4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x08002618:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800261c);
    (*pcVar8)();
}


// ===== sym.wcd_cls_h_init.cfi_jt @ 0x08002298 (size 8) =====

void sym.wcd_cls_h_init.cfi_jt(uchar *param_1)

{
    *param_1 = 0;
    *0x8000110 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000118 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000120 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000128 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000130 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000138 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000140 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000148 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000150 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000158 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000160 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000168 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000170 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000178 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000180 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000188 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    _obj.clsh_state_fp = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000098 = sym.wcd_clsh_state_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000e0 = sym.wcd_clsh_state_hph_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000e8 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000f0 = sym.wcd_clsh_state_hph_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000f8 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000100 = sym.wcd_clsh_state_hph_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000108 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000d0 = sym.wcd_clsh_state_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000d8 = sym.wcd_clsh_state_ear_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000a0 = sym.wcd_clsh_state_hph_l.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000a8 = sym.wcd_clsh_state_hph_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    _reloc.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt =
         sym.wcd_clsh_state_hph_r.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    _reloc.audio_ref_clk_remove.528b8d8d38456e23c5fbe17e42584de6.cfi_jt =
         sym.wcd_clsh_state_hph_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000c0 = sym.__typeid__ZTSFvP17snd_soc_componentP17wcd_clsh_cdc_infohbiE_global_addr;
    *0x80000c8 = sym.wcd_clsh_state_hph_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *(param_1 + 0x10) = 0x900000009;
    *(param_1 + 0x18) = 0x900000009;
    *(param_1 + 4) = 0;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080022a0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x80002df,"wcd9xxx_soc_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080022a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt);
    return;
}


// ===== sym.wcd_clsh_set_hph_mode.cfi_jt @ 0x080022b0 (size 8) =====

void sym.wcd_clsh_set_hph_mode.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 < 9) {
        snd_soc_component_update_bits(param_1,0x3009,0xc,*(param_2 * 4 + 0x8001490));
    }
    else {
        _dev_err(*(param_1 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode");
    }
    return;
}


// ===== sym.wcd_cal_create_hwdep.cfi_jt @ 0x080022b8 (size 8) =====

ulong sym.wcd_cal_create_hwdep.cfi_jt(void)

{
    return 0;
}


// ===== sym.audio_ext_clk_unprepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x080022c0 (size 8) =====

void sym.audio_ext_clk_unprepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    int64_t arg2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + -0x20) != 0) && (iVar1 = pinctrl_select_state(*(param_1 + -0x20),*(param_1 + -0x18)), iVar1 != 0)
       ) {
        _printk(0x800094a,"audio_ext_clk_unprepare",iVar1);
        return;
    }
    if (*(param_1 + -0x48) - 2U < 0xf) {
        *(param_1 + -0x34) = 0;
        iVar1 = audio_prm_set_lpass_clk_cfg(param_1 + -0x30,0);
        __trace_bprintk(0x8003edc,*0x8004000,"audio_ext_clk_unprepare",*(param_1 + -0x30));
        if (((iVar1 < 0) &&
            (iVar2 = ___ratelimit(obj.audio_ext_clk_unprepare.rtl,"audio_ext_clk_unprepare"), iVar2 != 0)) &&
           (iVar2 = ___ratelimit(obj.audio_ext_clk_unprepare._rs,"audio_ext_clk_unprepare"), iVar2 != 0)) {
            _printk(0x80006dd,"audio_ext_clk_unprepare",iVar1);
            arg2 = *(param_1 + -8);
            goto joined_r0x08003f3c;
        }
    }
    arg2 = *(param_1 + -8);
joined_r0x08003f3c:
    if (arg2 != 0) {
        sym.writel(0,arg2);
    }
    return;
}


// ===== sym.lpass_hw_vote_unprepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x080022c8 (size 8) =====

void sym.lpass_hw_vote_unprepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + -0x48);
    if (iVar1 == 9) {
        iVar1 = audio_prm_set_lpass_hw_core_req(param_1 + -0x30,1,0);
        __trace_bprintk(0x8004228,*0x8004000,"lpass_hw_vote_unprepare",*(param_1 + -0x30));
        if (iVar1 < 0) {
            _printk(0x80004fb,"lpass_hw_vote_unprepare",iVar1);
        }
        iVar1 = *(param_1 + -0x48);
    }
    if (iVar1 == 0xb) {
        iVar1 = audio_prm_set_lpass_hw_core_req(param_1 + -0x30,2,0);
        __trace_bprintk(0x8004274,*0x8004000,"lpass_hw_vote_unprepare",*(param_1 + -0x30));
        if (iVar1 < 0) {
            _printk(0x80003c2,"lpass_hw_vote_unprepare",iVar1);
        }
    }
    return;
}


// ===== sym.audio_ext_clk_dummy_unprepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x080022d0 (size 8) =====

void sym.audio_ext_clk_dummy_unprepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(void)

{
    return;
}


// ===== sym.of_clk_src_onecell_get.cfi_jt @ 0x080022d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.of_clk_src_onecell_get.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.audio_ext_clk_get_parent.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x080022e0 (size 8) =====

int sym.audio_ext_clk_get_parent.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = clk_hw_get_num_parents();
    if ((*(param_1 + -0x48) == 0) && (iVar6 = *(param_1 + 0x20), iVar6 != 0)) {
        iVar4 = *(*(param_1 + 0x10) + 0x28) + 1;
        if (0 < iVar2) {
            uVar7 = 0;
            iVar8 = *(*(param_1 + 0x10) + 0x10);
            iVar5 = iVar4;
            do {
                iVar3 = strcmp(*(iVar8 + (uVar7 & 0xff) * 8),iVar6);
                iVar4 = uVar7;
                if (iVar3 != 0) {
                    iVar4 = iVar5;
                }
                uVar1 = uVar7 + 1;
                uVar7 = uVar1;
                iVar5 = iVar4;
            } while ((uVar1 & 0xff) < iVar2);
        }
    }
    else {
        iVar4 = 0;
    }
    return iVar4;
}


// ===== sym.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x080022e8 (size 8) =====

uint64_t sym.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t *puVar12;
    ulong uVar13;
    char *pcVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    ulong unaff_x30;
    int iStack_5c;
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar15 = param_1 + 0x10;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_50 = 0;
    uStack_58 = 0;
    iStack_5c = 0;
    iVar6 = devm_kmalloc(iVar15,0x80,0xdc0);
    if (iVar6 == 0) {
        uVar8 = 0xfffffff4;
        goto code_r0x08003cd8;
    }
    uVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,codec-ext-clk-src",&uStack_58,1,0);
    if (uVar4 < 0) {
        uVar8 = uVar4;
        _dev_err(iVar15,"%s: could not get clk source, ret = %d\n","audio_ref_clk_probe",uVar8);
        goto code_r0x08003cd8;
    }
    if (uStack_58 < 0x12) {
        iVar10 = (uStack_58 & 0xffffffff) * 0x40;
        uVar7 = *(param_1 + 0x300);
        *(iVar6 + 0x70) = 0;
        *(iVar6 + 8) = uStack_58;
        uVar1 = *(iVar10 + 0x8000d30);
        uVar13 = *(iVar10 + 0x8000d38);
        uVar2 = *(iVar10 + 0x8000d40);
        *(iVar6 + 0x50) = *(iVar10 + 0x8000d28);
        *(iVar6 + 0x58) = uVar1;
        uVar1 = *(obj.audio_clk_array + iVar10);
        uVar3 = *(iVar10 + 0x8000d10);
        *(iVar6 + 0x60) = uVar13;
        *(iVar6 + 0x68) = uVar2;
        uVar13 = *(iVar10 + 0x8000d18);
        uVar2 = *(iVar10 + 0x8000d20);
        *(iVar6 + 0x30) = uVar1;
        *(iVar6 + 0x38) = uVar3;
        *(iVar6 + 0x40) = uVar13;
        *(iVar6 + 0x48) = uVar2;
        *(iVar6 + 0xc) = 0x10a00000001;
        *(iVar6 + 0x14) = 9600000;
        *(iVar6 + 0x18) = 1;
        *(iVar6 + 0x20) = 0x927c000000010a;
        *(iVar6 + 0x28) = 1;
        iVar5 = of_property_read_variable_u32_array(uVar7,"qcom,codec-lpass-ext-clk-freq",&uStack_50,1,0);
        if (-1 < iVar5) {
            *(iVar6 + 0x14) = uStack_50;
            *(iVar6 + 0x24) = uStack_50;
        }
        iVar5 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,codec-lpass-clk-id",&uStack_58 + 4,1,0)
        ;
        if (-1 < iVar5) {
            *(iVar6 + 0x10) = uStack_58._4_4_;
            *(iVar6 + 0x20) = uStack_58._4_4_;
        }
        *(param_1 + 0xa8) = iVar6;
        of_property_read_string(*(param_1 + 0x300),"pmic-clock-names",iVar6 + 0x70);
        of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,use-pinctrl",&iStack_5c,1,0);
        if (iStack_5c == 0) goto code_r0x08003b04;
        iVar6 = *(param_1 + 0xa8);
        uStack_4c = 0;
        if (*(iVar6 + 0x30) == 0) {
            uVar8 = devm_pinctrl_get(iVar15);
            if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
                pcVar14 = "%s: Unable to get pinctrl handle\n";
                goto code_r0x08003c50;
            }
            *(iVar6 + 0x30) = uVar8;
            uVar9 = pinctrl_lookup_state(uVar8,"sleep");
            *(iVar6 + 0x38) = uVar9;
            if (uVar9 < 0xfffffffffffff001) {
                uVar8 = pinctrl_lookup_state(uVar8,"active");
                *(iVar6 + 0x40) = uVar8;
                if (0xfffffffffffff000 < uVar8) {
                    pcVar14 = "%s: could not get active pinstate\n";
                    goto code_r0x08003ca4;
                }
                iVar5 = pinctrl_select_state(*(iVar6 + 0x30),*(iVar6 + 0x38));
                if (iVar5 == 0) {
                    iVar5 = of_property_read_variable_u32_array
                                      (*(param_1 + 0x300),"qcom,mclk-clk-reg",&uStack_4c,1,0);
                    if (-1 < iVar5) {
                        uVar13 = 0x68000000000713;
                        if (arm64_use_ng_mappings != 0x0) {
                            uVar13 = 0x68000000000f13;
                        }
                        iVar10 = __ioremap(uStack_4c,4,uVar13);
                        *(iVar6 + 0x48) = iVar10;
                        if (iVar10 == 0) {
                            pcVar14 = "%s ioremap failed\n";
                            goto code_r0x08003ca4;
                        }
                    }
code_r0x08003b04:
                    iVar6 = *(param_1 + 0xa8);
                    piVar11 = devm_kmalloc(iVar15,0x10,0xdc0);
                    if (piVar11 == NULL) {
code_r0x08003ba4:
                        uVar8 = 0xfffffff4;
                    }
                    else {
                        *(piVar11 + 1) = 1;
                        puVar12 = devm_kmalloc(iVar15,8,0xdc0);
                        *piVar11 = puVar12;
                        if (puVar12 == NULL) goto code_r0x08003ba4;
                        uVar8 = devm_clk_register(iVar15,iVar6 + 0x50);
                        if (uVar8 < 0xfffffffffffff001) {
                            uVar13 = *(param_1 + 0x300);
                            *puVar12 = uVar8;
                            uVar9 = of_clk_add_provider(uVar13,sym.of_clk_src_onecell_get.cfi_jt,piVar11);
                            uVar8 = uVar9 & 0xffffffff;
                            if (uVar9 == 0) goto code_r0x08003cd8;
                            _dev_err(iVar15,"%s: clock add failed for clk_src = %d\n","audio_get_clk_data",
                                     *(iVar6 + 8));
                        }
                        else {
                            _dev_err(iVar15,"%s: clock register failed for clk_src = %d\\n","audio_get_clk_data",
                                     *(iVar6 + 8));
                            if (uVar8 == 0) goto code_r0x08003cd8;
                        }
                    }
                    _dev_err(param_1 + 0x10,"%s: clk_init is failed\n","audio_ref_clk_probe");
                    iVar15 = *(param_1 + 0xa8);
                    if (*(iVar15 + 0x30) != 0) {
                        devm_pinctrl_put();
                        *(iVar15 + 0x30) = 0;
                    }
                    goto code_r0x08003cd8;
                }
                _dev_err(iVar15,"%s: Disable TLMM pins failed with %d\n","audio_get_pinctrl",iVar5);
            }
            else {
                pcVar14 = "%s: could not get sleep pinstate\n";
code_r0x08003ca4:
                _dev_err(iVar15,pcVar14,"audio_get_pinctrl");
            }
            devm_pinctrl_put(*(iVar6 + 0x30));
        }
        else {
            pcVar14 = "%s: already requested before\n";
code_r0x08003c50:
            _dev_err(iVar15,pcVar14,"audio_get_pinctrl");
        }
        _dev_err(iVar15,"%s: Parsing PMI pinctrl failed\n","audio_ref_clk_probe");
    }
    else {
        _dev_err(iVar15,"%s: Invalid clk source = %d\n","audio_ref_clk_probe");
    }
    uVar8 = 0xffffffea;
code_r0x08003cd8:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_48) {
        iVar15 = __stack_chk_fail();
        *extraout_x18 = sym.audio_ref_clk_remove;
        iVar15 = *(iVar15 + 0xa8);
        if (*(iVar15 + 0x30) != 0) {
            devm_pinctrl_put();
            *(iVar15 + 0x30) = 0;
        }
        return 0;
    }
    return uVar8 & 0xffffffff;
}


// ===== sym.audio_ref_clk_remove.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x080022f0 (size 8) =====

ulong sym.audio_ref_clk_remove.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    if (*(iVar1 + 0x30) != 0) {
        devm_pinctrl_put();
        *(iVar1 + 0x30) = 0;
    }
    return 0;
}


// ===== sym.audio_ext_clk_prepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x080022f8 (size 8) =====

int sym.audio_ext_clk_prepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + -0x48) - 2U < 0xf) && (*(param_1 + -0x34) == 0)) {
        __trace_bprintk(0x8003dcc,*0x8004000,"audio_ext_clk_prepare",*(param_1 + -0x30));
        iVar1 = audio_prm_set_lpass_clk_cfg(param_1 + -0x30,1);
        if (iVar1 < 0) {
            iVar2 = ___ratelimit(obj.audio_ext_clk_prepare.rtl,"audio_ext_clk_prepare");
            if (iVar2 == 0) {
                return iVar1;
            }
            iVar2 = ___ratelimit(obj.audio_ext_clk_prepare._rs,"audio_ext_clk_prepare");
            if (iVar2 == 0) {
                return iVar1;
            }
            _printk(0x8000736,"audio_ext_clk_prepare");
            return iVar1;
        }
        *(param_1 + -0x34) = 1;
        iVar3 = *(param_1 + -0x20);
    }
    else {
        iVar3 = *(param_1 + -0x20);
    }
    if ((iVar3 == 0) || (iVar1 = pinctrl_select_state(iVar3,*(param_1 + -0x10)), iVar1 == 0)) {
        if (*(param_1 + -8) != 0) {
            sym.writel(1,*(param_1 + -8));
        }
        iVar1 = 0;
    }
    else {
        _printk(0x800094a,"audio_ext_clk_prepare",iVar1);
        iVar1 = -5;
    }
    return iVar1;
}


// ===== sym.lpass_hw_vote_prepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x08002300 (size 8) =====

int sym.lpass_hw_vote_prepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(int64_t param_1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + -0x48);
    if (iVar1 == 9) {
        iVar1 = audio_prm_set_lpass_hw_core_req(param_1 + -0x30,1,1);
        __trace_bprintk(0x8004114,*0x8004000,"lpass_hw_vote_prepare",*(param_1 + -0x30));
        if (-1 < iVar1) {
            iVar1 = *(param_1 + -0x48);
            goto code_r0x08004144;
        }
        uVar3 = 0x80004fb;
code_r0x080041d8:
        _printk(uVar3,"lpass_hw_vote_prepare",iVar1);
    }
    else {
code_r0x08004144:
        if (iVar1 == 0xb) {
            iVar1 = audio_prm_set_lpass_hw_core_req(param_1 + -0x30,2,1);
            __trace_bprintk(0x8004160,*0x8004000,"lpass_hw_vote_prepare",*(param_1 + -0x30));
            if (iVar1 < 0) {
                iVar2 = ___ratelimit(obj.lpass_hw_vote_prepare.rtl,"lpass_hw_vote_prepare");
                if (iVar2 == 0) {
                    return iVar1;
                }
                uVar3 = 0x800040e;
                goto code_r0x080041d8;
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.audio_ext_clk_dummy_prepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt @ 0x08002308 (size 8) =====

ulong sym.audio_ext_clk_dummy_prepare.528b8d8d38456e23c5fbe17e42584de6.cfi_jt(void)

{
    return 0;
}


// ===== sym.__typeid__ZTSFvP17snd_soc_componentP17wcd_clsh_cdc_infohbiE_global_addr @ 0x08002310 (size 8) =====

void sym.__typeid__ZTSFvP17snd_soc_componentP17wcd_clsh_cdc_infohbiE_global_addr(void)

{
    return;
}


// ===== sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt @ 0x08002318 (size 8) =====

void sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt
               (int64_t param_1,ulong param_2,uint64_t param_3,uint64_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t arg2;
    ulong uVar4;
    uint uVar5;
    char *pcVar6;
    ulong *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    uint32_t uVar10;
    uint uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
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
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uVar9 = *(param_1 + 0x18);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    pcVar6 = NULL;
    if ((param_4 & 1) == 0) {
        pcVar6 = "disable";
    }
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
    sym.state_to_str(param_3 & 0xffffffff,&uStack_a8);
    puVar7 = &uStack_a8;
    _dev_err(uVar9,"%s Wrong request for class H state machine requested to %s %s\n","wcd_clsh_state_err");
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    auVar12 = __stack_chk_fail();
    arg2 = auVar12._8_8_;
    iVar3 = auVar12._0_8_;
    *extraout_x18 = sym.wcd_clsh_state_ear;
    if ((pcVar6 & 1) == 0) {
        snd_soc_component_update_bits(iVar3,0x3009,0xc,0);
        iVar1 = *(arg2 + 4) + -1;
        *(arg2 + 4) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(iVar3,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(iVar3,0x3008,0x40,0);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(iVar3,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        iVar1 = *(arg2 + 8) + -1;
        *(arg2 + 8) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(iVar3,0x3008,0x80,0);
            usleep_range_state(500,0x1fe,2);
            snd_soc_component_update_bits(iVar3,0x3098,0xff,0x3a);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(iVar3,0x3138,0x20,0);
        snd_soc_component_update_bits(iVar3,0x30bf,0xf0,0x80);
        snd_soc_component_update_bits(iVar3,0x30d1,0xe,6);
        snd_soc_component_update_bits(iVar3,0x3008,4,0);
        snd_soc_component_update_bits(iVar3,0x30a8,0xf0,0x70);
        uVar9 = 0x3008;
        uVar4 = 8;
        uVar5 = 0;
    }
    else {
        snd_soc_component_update_bits(iVar3,0x3008,2,0);
        uVar10 = puVar7;
        uVar2 = uVar10 - 1;
        if (uVar2 < 8) {
            uVar8 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
            uVar5 = *(uVar8 + 0x8000b24);
            uVar11 = *(uVar8 + 0x8000b04);
        }
        else {
            uVar5 = 0;
            uVar11 = 0x70;
        }
        snd_soc_component_update_bits(iVar3,0x3008,4,uVar5);
        snd_soc_component_update_bits(iVar3,0x30a8,0xf0,uVar11);
        sym.wcd_clsh_force_iq_ctl(iVar3,puVar7 & 0xffffffff);
        iVar1 = *(arg2 + 4);
        *(arg2 + 4) = iVar1 + 1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(iVar3,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(iVar3,0x3008,0x40,0x40);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(iVar3,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(iVar3,0x30c7,0xf,10);
        snd_soc_component_update_bits(iVar3,0x30c7,0xf0,0xa0);
        usleep_range_state(100,0x6e,2);
        if (uVar2 < 8) {
            uVar5 = *(uVar2 * 4 + 0x8000ae4);
        }
        else {
            uVar5 = 0;
        }
        snd_soc_component_update_bits(iVar3,0x3008,8,uVar5);
        sym.wcd_clsh_buck_ctrl(iVar3,arg2,puVar7 & 0xffffffff);
        if (8 < uVar10) {
            _dev_err(*(iVar3 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode",puVar7 & 0xffffffff);
            return;
        }
        uVar9 = 0x3009;
        uVar4 = 0xc;
        uVar5 = *(uVar10 * 4 + 0x8001490);
    }
    snd_soc_component_update_bits(iVar3,uVar9,uVar4,uVar5);
    return;
}


// ===== sym.wcd_clsh_state_hph_r.150f285456b509dcfe93455f5c566f1b.cfi_jt @ 0x08002320 (size 8) =====

void sym.wcd_clsh_state_hph_r.150f285456b509dcfe93455f5c566f1b.cfi_jt
               (int64_t param_1,int64_t param_2,ulong param_3,uint64_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_5 != 0) {
        if ((param_4 & 1) == 0) {
            snd_soc_component_update_bits(param_1,0x3009,0xc,0);
            iVar1 = *(param_2 + 4) + -1;
            *(param_2 + 4) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(param_1,0x30a5,0xe0,0xe0);
                snd_soc_component_update_bits(param_1,0x3008,0x40,0);
                usleep_range_state(100,0x6e,2);
                snd_soc_component_update_bits(param_1,0x30af,0xe0,0xe0);
                usleep_range_state(500,0x226,2);
            }
            iVar1 = *(param_2 + 8) + -1;
            *(param_2 + 8) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(param_1,0x3008,0x80,0);
                usleep_range_state(500,0x1fe,2);
                snd_soc_component_update_bits(param_1,0x3098,0xff,0x3a);
                usleep_range_state(500,0x226,2);
            }
            snd_soc_component_update_bits(param_1,0x3138,0x20,0);
            snd_soc_component_update_bits(param_1,0x30bf,0xf0,0x80);
            snd_soc_component_update_bits(param_1,0x30d1,0xe,6);
            snd_soc_component_update_bits(param_1,0x3008,4,0);
            snd_soc_component_update_bits(param_1,0x30a8,0xf0,0x70);
            uVar3 = 0x3008;
            uVar4 = 8;
            uVar5 = 0;
        }
        else {
            snd_soc_component_update_bits(param_1,0x3008,2,0);
            uVar2 = param_5 - 1;
            if (uVar2 < 8) {
                uVar6 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
                uVar5 = *(uVar6 + 0x8000b24);
                uVar7 = *(uVar6 + 0x8000b04);
            }
            else {
                uVar5 = 0;
                uVar7 = 0x70;
            }
            snd_soc_component_update_bits(param_1,0x3008,4,uVar5);
            snd_soc_component_update_bits(param_1,0x30a8,0xf0,uVar7);
            sym.wcd_clsh_force_iq_ctl(param_1,param_5);
            iVar1 = *(param_2 + 4);
            *(param_2 + 4) = iVar1 + 1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(param_1,0x30a5,0xe0,0xe0);
                snd_soc_component_update_bits(param_1,0x3008,0x40,0x40);
                usleep_range_state(100,0x6e,2);
                snd_soc_component_update_bits(param_1,0x30af,0xe0,0xe0);
                usleep_range_state(500,0x226,2);
            }
            snd_soc_component_update_bits(param_1,0x30c7,0xf,10);
            snd_soc_component_update_bits(param_1,0x30c7,0xf0,0xa0);
            usleep_range_state(100,0x6e,2);
            if (uVar2 < 8) {
                uVar5 = *(uVar2 * 4 + 0x8000ae4);
            }
            else {
                uVar5 = 0;
            }
            snd_soc_component_update_bits(param_1,0x3008,8,uVar5);
            sym.wcd_clsh_buck_ctrl(param_1,param_2,param_5);
            if (7 < uVar2) {
                _dev_err(*(param_1 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode",param_5);
                return;
            }
            uVar3 = 0x3009;
            uVar4 = 0xc;
            uVar5 = *(uVar2 * 4 + 0x8000b44);
        }
        snd_soc_component_update_bits(param_1,uVar3,uVar4,uVar5);
    }
    return;
}


// ===== sym.wcd_clsh_state_ear_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt @ 0x08002328 (size 8) =====

void sym.wcd_clsh_state_ear_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt(void)

{
    return;
}


// ===== sym.wcd_clsh_state_hph_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt @ 0x08002330 (size 8) =====

void sym.wcd_clsh_state_hph_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt(void)

{
    return;
}


// ===== sym.wcd_clsh_state_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt @ 0x08002338 (size 8) =====

void sym.wcd_clsh_state_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt
               (int64_t param_1,int64_t param_2,ulong param_3,uint64_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_4 & 1) == 0) {
        sym.wcd_clsh_buck_ctrl(param_1,param_2,param_5);
        iVar1 = *(param_2 + 4) + -1;
        *(param_2 + 4) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(param_1,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(param_1,0x3008,0x40,0);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(param_1,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(param_1,0x3008,4,0);
        snd_soc_component_update_bits(param_1,0x30a8,0xf0,0x70);
        snd_soc_component_update_bits(param_1,0x3008,8,0);
    }
    else {
        uVar2 = param_5 - 1;
        if (uVar2 < 8) {
            uVar3 = *(uVar2 * 4 + 0x8000ae4);
        }
        else {
            uVar3 = 0;
        }
        snd_soc_component_update_bits(param_1,0x3008,8,uVar3);
        if (uVar2 < 8) {
            uVar4 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
            uVar3 = *(uVar4 + 0x8000b24);
            uVar5 = *(uVar4 + 0x8000b04);
        }
        else {
            uVar3 = 0;
            uVar5 = 0x70;
        }
        snd_soc_component_update_bits(param_1,0x3008,4,uVar3);
        snd_soc_component_update_bits(param_1,0x30a8,0xf0,uVar5);
        iVar1 = *(param_2 + 4);
        *(param_2 + 4) = iVar1 + 1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(param_1,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(param_1,0x3008,0x40,0x40);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(param_1,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(param_1,0x30c7,0xf,10);
        snd_soc_component_update_bits(param_1,0x30c7,0xf0,0xa0);
        usleep_range_state(100,0x6e,2);
        sym.wcd_clsh_buck_ctrl(param_1,param_2,param_5);
    }
    return;
}


// ===== sym.wcd_clsh_state_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt @ 0x08002340 (size 8) =====

void sym.wcd_clsh_state_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt
               (int64_t param_1,int64_t param_2,ulong param_3,uint64_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_4 & 1) == 0) {
        snd_soc_component_update_bits(param_1,0x3009,0xc,0);
        iVar1 = *(param_2 + 4) + -1;
        *(param_2 + 4) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(param_1,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(param_1,0x3008,0x40,0);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(param_1,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        iVar1 = *(param_2 + 8) + -1;
        *(param_2 + 8) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(param_1,0x3008,0x80,0);
            usleep_range_state(500,0x1fe,2);
            snd_soc_component_update_bits(param_1,0x3098,0xff,0x3a);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(param_1,0x3138,0x20,0);
        snd_soc_component_update_bits(param_1,0x30bf,0xf0,0x80);
        snd_soc_component_update_bits(param_1,0x30d1,0xe,6);
        snd_soc_component_update_bits(param_1,0x3008,4,0);
        snd_soc_component_update_bits(param_1,0x30a8,0xf0,0x70);
        uVar3 = 0x3008;
        uVar4 = 8;
        uVar5 = 0;
    }
    else {
        snd_soc_component_update_bits(param_1,0x3008,2,0);
        uVar2 = param_5 - 1;
        if (uVar2 < 8) {
            uVar6 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
            uVar5 = *(uVar6 + 0x8000b24);
            uVar7 = *(uVar6 + 0x8000b04);
        }
        else {
            uVar5 = 0;
            uVar7 = 0x70;
        }
        snd_soc_component_update_bits(param_1,0x3008,4,uVar5);
        snd_soc_component_update_bits(param_1,0x30a8,0xf0,uVar7);
        sym.wcd_clsh_force_iq_ctl(param_1,param_5);
        iVar1 = *(param_2 + 4);
        *(param_2 + 4) = iVar1 + 1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(param_1,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(param_1,0x3008,0x40,0x40);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(param_1,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(param_1,0x30c7,0xf,10);
        snd_soc_component_update_bits(param_1,0x30c7,0xf0,0xa0);
        usleep_range_state(100,0x6e,2);
        if (uVar2 < 8) {
            uVar5 = *(uVar2 * 4 + 0x8000ae4);
        }
        else {
            uVar5 = 0;
        }
        snd_soc_component_update_bits(param_1,0x3008,8,uVar5);
        sym.wcd_clsh_buck_ctrl(param_1,param_2,param_5);
        if (8 < param_5) {
            _dev_err(*(param_1 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode",param_5);
            return;
        }
        uVar3 = 0x3009;
        uVar4 = 0xc;
        uVar5 = *(param_5 * 4 + 0x8001490);
    }
    snd_soc_component_update_bits(param_1,uVar3,uVar4,uVar5);
    return;
}


// ===== sym.wcd_clsh_state_hph_l.150f285456b509dcfe93455f5c566f1b.cfi_jt @ 0x08002348 (size 8) =====

void sym.wcd_clsh_state_hph_l.150f285456b509dcfe93455f5c566f1b.cfi_jt
               (int64_t param_1,int64_t param_2,ulong param_3,uint64_t param_4,uint32_t param_5)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_5 != 0) {
        if ((param_4 & 1) == 0) {
            snd_soc_component_update_bits(param_1,0x3009,0xc,0);
            iVar1 = *(param_2 + 4) + -1;
            *(param_2 + 4) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(param_1,0x30a5,0xe0,0xe0);
                snd_soc_component_update_bits(param_1,0x3008,0x40,0);
                usleep_range_state(100,0x6e,2);
                snd_soc_component_update_bits(param_1,0x30af,0xe0,0xe0);
                usleep_range_state(500,0x226,2);
            }
            iVar1 = *(param_2 + 8) + -1;
            *(param_2 + 8) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(param_1,0x3008,0x80,0);
                usleep_range_state(500,0x1fe,2);
                snd_soc_component_update_bits(param_1,0x3098,0xff,0x3a);
                usleep_range_state(500,0x226,2);
            }
            snd_soc_component_update_bits(param_1,0x3138,0x20,0);
            snd_soc_component_update_bits(param_1,0x30bf,0xf0,0x80);
            snd_soc_component_update_bits(param_1,0x30d1,0xe,6);
            snd_soc_component_update_bits(param_1,0x3008,4,0);
            snd_soc_component_update_bits(param_1,0x30a8,0xf0,0x70);
            uVar3 = 0x3008;
            uVar4 = 8;
            uVar5 = 0;
        }
        else {
            snd_soc_component_update_bits(param_1,0x3008,2,0);
            uVar2 = param_5 - 1;
            if (uVar2 < 8) {
                uVar6 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
                uVar5 = *(uVar6 + 0x8000b24);
                uVar7 = *(uVar6 + 0x8000b04);
            }
            else {
                uVar5 = 0;
                uVar7 = 0x70;
            }
            snd_soc_component_update_bits(param_1,0x3008,4,uVar5);
            snd_soc_component_update_bits(param_1,0x30a8,0xf0,uVar7);
            sym.wcd_clsh_force_iq_ctl(param_1,param_5);
            iVar1 = *(param_2 + 4);
            *(param_2 + 4) = iVar1 + 1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(param_1,0x30a5,0xe0,0xe0);
                snd_soc_component_update_bits(param_1,0x3008,0x40,0x40);
                usleep_range_state(100,0x6e,2);
                snd_soc_component_update_bits(param_1,0x30af,0xe0,0xe0);
                usleep_range_state(500,0x226,2);
            }
            snd_soc_component_update_bits(param_1,0x30c7,0xf,10);
            snd_soc_component_update_bits(param_1,0x30c7,0xf0,0xa0);
            usleep_range_state(100,0x6e,2);
            if (uVar2 < 8) {
                uVar5 = *(uVar2 * 4 + 0x8000ae4);
            }
            else {
                uVar5 = 0;
            }
            snd_soc_component_update_bits(param_1,0x3008,8,uVar5);
            sym.wcd_clsh_buck_ctrl(param_1,param_2,param_5);
            if (7 < uVar2) {
                _dev_err(*(param_1 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode",param_5);
                return;
            }
            uVar3 = 0x3009;
            uVar4 = 0xc;
            uVar5 = *(uVar2 * 4 + 0x8000b44);
        }
        snd_soc_component_update_bits(param_1,uVar3,uVar4,uVar5);
    }
    return;
}


// ===== sym.wcd_clsh_state_hph_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt @ 0x08002350 (size 8) =====

void sym.wcd_clsh_state_hph_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt(void)

{
    return;
}


// ===== sym.wcd_clsh_set_hph_mode @ 0x08002358 (size 96) =====

void sym.wcd_clsh_set_hph_mode(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 9) {
        snd_soc_component_update_bits(arg1,0x3009,0xc,*(arg2 * 4 + 0x8001490));
    }
    else {
        _dev_err(*(arg1 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode");
    }
    return;
}


// ===== sym.wcd_cls_h_fsm @ 0x080023b8 (size 724) =====

void sym.wcd_cls_h_fsm(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint in_w4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t arg1_00;
    ulong *in_x18;
    ulong uVar8;
    code *pcVar9;
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
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar3 = arg4;
    iStack_38 = *(iVar2 + 0x5e0);
    uVar6 = arg3 & 0xff;
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
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    if (uVar6 == 2) {
        uVar1 = *arg2;
        uVar6 = uVar1 & (uVar3 ^ 0xffffffff);
        if (uVar6 < 0x20) {
            uVar5 = uVar1;
            if (((10 < uVar1) && (uVar5 != 0xc)) && (uVar5 != 0xe)) {
                uVar8 = *(arg1 + 0x18);
                sym.state_to_str(uVar1,&uStack_b8);
                pcVar4 = "%s:Invalid old state:%s\n";
                goto code_r0x080025d0;
            }
            if (uVar6 == uVar1) {
                uVar8 = *(arg1 + 0x18);
                arg1_00 = uVar5;
                goto code_r0x080025c4;
            }
            pcVar9 = *(obj.clsh_state_fp + uVar1 * 8);
            if (8 < (pcVar9 + -0x8002310 >> 3 | pcVar9 << 0x3d)) {
                __cfi_slowpath_diag(0x12a6b7b7a3ba8ea4,pcVar9,0x8000290);
            }
            (*pcVar9)(arg1,arg2,arg4 & 0xffffffff,0);
            *arg2 = uVar6;
            if (((uVar3 & 0xff) < 9) && ((1 << (uVar3 & 0x1f) & 0x116U) != 0)) {
                uVar6 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
                uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
                uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                uVar6 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
                if (3 < uVar6) goto code_r0x08002618;
                *(arg2 + (uVar6 + 1) * 4 + 0xc) = 9;
            }
        }
    }
    else if (uVar6 == 1) {
        arg1_00 = *arg2;
        uVar7 = *arg2;
        uVar5 = uVar7 | uVar3;
        uVar6 = uVar7 | uVar3 & 0xff;
        if (((uVar6 < 0xb) || (uVar6 == 0xc)) || (uVar6 == 0xe)) {
            if (uVar7 != (uVar7 | uVar3 & 0xff)) {
                *arg2 = uVar5;
                if (((uVar3 & 0xff) < 9) && ((1 << (uVar3 & 0x1f) & 0x116U) != 0)) {
                    uVar6 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
                    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
                    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
                    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                    uVar6 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
                    if (3 < uVar6) goto code_r0x08002618;
                    *(arg2 + (uVar6 + 1) * 4 + 0xc) = in_w4;
                }
                pcVar9 = *(obj.clsh_state_fp + (uVar5 & 0xff) * 8);
                if (8 < (pcVar9 + -0x8002310 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0x12a6b7b7a3ba8ea4,pcVar9,0x8000270);
                }
                (*pcVar9)(arg1,arg2,arg4 & 0xffffffff,1);
                goto code_r0x080025e4;
            }
            uVar8 = *(arg1 + 0x18);
code_r0x080025c4:
            sym.state_to_str(arg1_00,&uStack_b8);
            pcVar4 = "%s: Class-H already in requested state: %s\n";
        }
        else {
            uVar8 = *(arg1 + 0x18);
            sym.state_to_str(uVar5,&uStack_b8);
            pcVar4 = "%s: Class-H not a valid new state: %s\n";
        }
code_r0x080025d0:
        _dev_err(uVar8,pcVar4,"wcd_cls_h_fsm",&uStack_b8);
    }
code_r0x080025e4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x08002618:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x800261c);
    (*pcVar9)();
}


// ===== sym.state_to_str @ 0x0800268c (size 388) =====

int64_t sym.state_to_str(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg1 & 0xff;
    if ((arg1 & 0xffU) == 0) {
        uVar1 = CONCAT35(str._STATE_IDLE_._5_3_,str._STATE_IDLE_._0_5_);
        *(arg2 + 5) = CONCAT53(str._STATE_IDLE_._8_5_,str._STATE_IDLE_._5_3_);
        *arg2 = uVar1;
    }
    else {
        uVar5 = 0;
        *arg2 = 0;
        if ((arg1 & 1U) != 0) {
            uVar5 = snprintf(arg2,0x7f,"%s%s%s",arg2,0x8000366,"STATE_EAR");
        }
        uVar1 = 0x8000366;
        uVar2 = 0x8000974;
        if ((uVar3 >> 1 & 1) != 0) {
            uVar4 = uVar1;
            if (*arg2 != '\0') {
                uVar4 = uVar2;
            }
            uVar5 = snprintf(arg2,0x7f - uVar5,"%s%s%s",arg2,uVar4,"STATE_HPH_L");
        }
        if ((uVar3 >> 2 & 1) != 0) {
            uVar4 = uVar1;
            if (*arg2 != '\0') {
                uVar4 = uVar2;
            }
            uVar5 = snprintf(arg2,0x7f - uVar5,"%s%s%s",arg2,uVar4,"STATE_HPH_R");
        }
        if ((uVar3 >> 3 & 1) != 0) {
            if (*arg2 != '\0') {
                uVar1 = uVar2;
            }
            uVar5 = snprintf(arg2,0x7f - uVar5,"%s%s%s",arg2,uVar1,"STATE_AUX");
        }
        if (0 < uVar5) {
            strlcat(arg2 + uVar5,0x80005ca,0x80);
        }
    }
    uVar1 = str._STATE_UNKNOWN_._8_8_;
    if (*arg2 == '\0') {
        *arg2 = str._STATE_UNKNOWN_._0_8_;
        *(arg2 + 8) = uVar1;
    }
    return arg2;
}


// ===== sym.wcd_cls_h_init @ 0x08002810 (size 176) =====

void sym.wcd_cls_h_init(int64_t arg1)

{
    *arg1 = 0;
    *0x8000110 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000118 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000120 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000128 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000130 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000138 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000140 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000148 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000150 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000158 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000160 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000168 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000170 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000178 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000180 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000188 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    _obj.clsh_state_fp = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000098 = sym.wcd_clsh_state_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000e0 = sym.wcd_clsh_state_hph_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000e8 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000f0 = sym.wcd_clsh_state_hph_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000f8 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000100 = sym.wcd_clsh_state_hph_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x8000108 = sym.wcd_clsh_state_err.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000d0 = sym.wcd_clsh_state_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000d8 = sym.wcd_clsh_state_ear_aux.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000a0 = sym.wcd_clsh_state_hph_l.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000a8 = sym.wcd_clsh_state_hph_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    _reloc.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt =
         sym.wcd_clsh_state_hph_r.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    _reloc.audio_ref_clk_remove.528b8d8d38456e23c5fbe17e42584de6.cfi_jt =
         sym.wcd_clsh_state_hph_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *0x80000c0 = sym.__typeid__ZTSFvP17snd_soc_componentP17wcd_clsh_cdc_infohbiE_global_addr;
    *0x80000c8 = sym.wcd_clsh_state_hph_ear.150f285456b509dcfe93455f5c566f1b.cfi_jt;
    *(arg1 + 0x10) = 0x900000009;
    *(arg1 + 0x18) = 0x900000009;
    *(arg1 + 4) = 0;
    return;
}


// ===== sym.wcd_clsh_state_err @ 0x080028c0 (size 188) =====

void sym.wcd_clsh_state_err(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t arg2_00;
    ulong uVar4;
    uint uVar5;
    char *pcVar6;
    ulong *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    uint32_t uVar10;
    uint uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
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
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uVar9 = *(arg1 + 0x18);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    pcVar6 = NULL;
    if ((arg3 & 1) == 0) {
        pcVar6 = "disable";
    }
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
    sym.state_to_str(arg2 & 0xffffffff,&uStack_a8);
    puVar7 = &uStack_a8;
    _dev_err(uVar9,"%s Wrong request for class H state machine requested to %s %s\n","wcd_clsh_state_err");
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    auVar12 = __stack_chk_fail();
    arg2_00 = auVar12._8_8_;
    iVar3 = auVar12._0_8_;
    *extraout_x18 = sym.wcd_clsh_state_ear;
    if ((pcVar6 & 1) == 0) {
        snd_soc_component_update_bits(iVar3,0x3009,0xc,0);
        iVar1 = *(arg2_00 + 4) + -1;
        *(arg2_00 + 4) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(iVar3,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(iVar3,0x3008,0x40,0);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(iVar3,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        iVar1 = *(arg2_00 + 8) + -1;
        *(arg2_00 + 8) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(iVar3,0x3008,0x80,0);
            usleep_range_state(500,0x1fe,2);
            snd_soc_component_update_bits(iVar3,0x3098,0xff,0x3a);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(iVar3,0x3138,0x20,0);
        snd_soc_component_update_bits(iVar3,0x30bf,0xf0,0x80);
        snd_soc_component_update_bits(iVar3,0x30d1,0xe,6);
        snd_soc_component_update_bits(iVar3,0x3008,4,0);
        snd_soc_component_update_bits(iVar3,0x30a8,0xf0,0x70);
        uVar9 = 0x3008;
        uVar4 = 8;
        uVar5 = 0;
    }
    else {
        snd_soc_component_update_bits(iVar3,0x3008,2,0);
        uVar10 = puVar7;
        uVar2 = uVar10 - 1;
        if (uVar2 < 8) {
            uVar8 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
            uVar5 = *(uVar8 + 0x8000b24);
            uVar11 = *(uVar8 + 0x8000b04);
        }
        else {
            uVar5 = 0;
            uVar11 = 0x70;
        }
        snd_soc_component_update_bits(iVar3,0x3008,4,uVar5);
        snd_soc_component_update_bits(iVar3,0x30a8,0xf0,uVar11);
        sym.wcd_clsh_force_iq_ctl(iVar3,puVar7 & 0xffffffff);
        iVar1 = *(arg2_00 + 4);
        *(arg2_00 + 4) = iVar1 + 1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(iVar3,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(iVar3,0x3008,0x40,0x40);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(iVar3,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(iVar3,0x30c7,0xf,10);
        snd_soc_component_update_bits(iVar3,0x30c7,0xf0,0xa0);
        usleep_range_state(100,0x6e,2);
        if (uVar2 < 8) {
            uVar5 = *(uVar2 * 4 + 0x8000ae4);
        }
        else {
            uVar5 = 0;
        }
        snd_soc_component_update_bits(iVar3,0x3008,8,uVar5);
        sym.wcd_clsh_buck_ctrl(iVar3,arg2_00,puVar7 & 0xffffffff);
        if (8 < uVar10) {
            _dev_err(*(iVar3 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode",puVar7 & 0xffffffff);
            return;
        }
        uVar9 = 0x3009;
        uVar4 = 0xc;
        uVar5 = *(uVar10 * 4 + 0x8001490);
    }
    snd_soc_component_update_bits(iVar3,uVar9,uVar4,uVar5);
    return;
}


// ===== sym.wcd_clsh_state_ear @ 0x0800297c (size 824) =====

void sym.wcd_clsh_state_ear(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t in_x3;
    uint32_t in_w4;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x3 & 1) == 0) {
        snd_soc_component_update_bits(arg1,0x3009,0xc,0);
        iVar1 = *(arg2 + 4) + -1;
        *(arg2 + 4) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(arg1,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(arg1,0x3008,0x40,0);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(arg1,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        iVar1 = *(arg2 + 8) + -1;
        *(arg2 + 8) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(arg1,0x3008,0x80,0);
            usleep_range_state(500,0x1fe,2);
            snd_soc_component_update_bits(arg1,0x3098,0xff,0x3a);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(arg1,0x3138,0x20,0);
        snd_soc_component_update_bits(arg1,0x30bf,0xf0,0x80);
        snd_soc_component_update_bits(arg1,0x30d1,0xe,6);
        snd_soc_component_update_bits(arg1,0x3008,4,0);
        snd_soc_component_update_bits(arg1,0x30a8,0xf0,0x70);
        uVar3 = 0x3008;
        uVar4 = 8;
        uVar5 = 0;
    }
    else {
        snd_soc_component_update_bits(arg1,0x3008,2,0);
        uVar2 = in_w4 - 1;
        if (uVar2 < 8) {
            uVar6 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
            uVar5 = *(uVar6 + 0x8000b24);
            uVar7 = *(uVar6 + 0x8000b04);
        }
        else {
            uVar5 = 0;
            uVar7 = 0x70;
        }
        snd_soc_component_update_bits(arg1,0x3008,4,uVar5);
        snd_soc_component_update_bits(arg1,0x30a8,0xf0,uVar7);
        sym.wcd_clsh_force_iq_ctl(arg1,in_w4);
        iVar1 = *(arg2 + 4);
        *(arg2 + 4) = iVar1 + 1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(arg1,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(arg1,0x3008,0x40,0x40);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(arg1,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(arg1,0x30c7,0xf,10);
        snd_soc_component_update_bits(arg1,0x30c7,0xf0,0xa0);
        usleep_range_state(100,0x6e,2);
        if (uVar2 < 8) {
            uVar5 = *(uVar2 * 4 + 0x8000ae4);
        }
        else {
            uVar5 = 0;
        }
        snd_soc_component_update_bits(arg1,0x3008,8,uVar5);
        sym.wcd_clsh_buck_ctrl(arg1,arg2,in_w4);
        if (8 < in_w4) {
            _dev_err(*(arg1 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode",in_w4);
            return;
        }
        uVar3 = 0x3009;
        uVar4 = 0xc;
        uVar5 = *(in_w4 * 4 + 0x8001490);
    }
    snd_soc_component_update_bits(arg1,uVar3,uVar4,uVar5);
    return;
}


// ===== sym.wcd_clsh_state_hph_l @ 0x08002cb4 (size 828) =====

void sym.wcd_clsh_state_hph_l(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t in_x3;
    uint32_t in_w4;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_w4 != 0) {
        if ((in_x3 & 1) == 0) {
            snd_soc_component_update_bits(arg1,0x3009,0xc,0);
            iVar1 = *(arg2 + 4) + -1;
            *(arg2 + 4) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(arg1,0x30a5,0xe0,0xe0);
                snd_soc_component_update_bits(arg1,0x3008,0x40,0);
                usleep_range_state(100,0x6e,2);
                snd_soc_component_update_bits(arg1,0x30af,0xe0,0xe0);
                usleep_range_state(500,0x226,2);
            }
            iVar1 = *(arg2 + 8) + -1;
            *(arg2 + 8) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(arg1,0x3008,0x80,0);
                usleep_range_state(500,0x1fe,2);
                snd_soc_component_update_bits(arg1,0x3098,0xff,0x3a);
                usleep_range_state(500,0x226,2);
            }
            snd_soc_component_update_bits(arg1,0x3138,0x20,0);
            snd_soc_component_update_bits(arg1,0x30bf,0xf0,0x80);
            snd_soc_component_update_bits(arg1,0x30d1,0xe,6);
            snd_soc_component_update_bits(arg1,0x3008,4,0);
            snd_soc_component_update_bits(arg1,0x30a8,0xf0,0x70);
            uVar3 = 0x3008;
            uVar4 = 8;
            uVar5 = 0;
        }
        else {
            snd_soc_component_update_bits(arg1,0x3008,2,0);
            uVar2 = in_w4 - 1;
            if (uVar2 < 8) {
                uVar6 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
                uVar5 = *(uVar6 + 0x8000b24);
                uVar7 = *(uVar6 + 0x8000b04);
            }
            else {
                uVar5 = 0;
                uVar7 = 0x70;
            }
            snd_soc_component_update_bits(arg1,0x3008,4,uVar5);
            snd_soc_component_update_bits(arg1,0x30a8,0xf0,uVar7);
            sym.wcd_clsh_force_iq_ctl(arg1,in_w4);
            iVar1 = *(arg2 + 4);
            *(arg2 + 4) = iVar1 + 1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(arg1,0x30a5,0xe0,0xe0);
                snd_soc_component_update_bits(arg1,0x3008,0x40,0x40);
                usleep_range_state(100,0x6e,2);
                snd_soc_component_update_bits(arg1,0x30af,0xe0,0xe0);
                usleep_range_state(500,0x226,2);
            }
            snd_soc_component_update_bits(arg1,0x30c7,0xf,10);
            snd_soc_component_update_bits(arg1,0x30c7,0xf0,0xa0);
            usleep_range_state(100,0x6e,2);
            if (uVar2 < 8) {
                uVar5 = *(uVar2 * 4 + 0x8000ae4);
            }
            else {
                uVar5 = 0;
            }
            snd_soc_component_update_bits(arg1,0x3008,8,uVar5);
            sym.wcd_clsh_buck_ctrl(arg1,arg2,in_w4);
            if (7 < uVar2) {
                _dev_err(*(arg1 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode",in_w4);
                return;
            }
            uVar3 = 0x3009;
            uVar4 = 0xc;
            uVar5 = *(uVar2 * 4 + 0x8000b44);
        }
        snd_soc_component_update_bits(arg1,uVar3,uVar4,uVar5);
    }
    return;
}


// ===== sym.wcd_clsh_state_hph_r @ 0x08002ff0 (size 828) =====

void sym.wcd_clsh_state_hph_r(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t in_x3;
    uint32_t in_w4;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_w4 != 0) {
        if ((in_x3 & 1) == 0) {
            snd_soc_component_update_bits(arg1,0x3009,0xc,0);
            iVar1 = *(arg2 + 4) + -1;
            *(arg2 + 4) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(arg1,0x30a5,0xe0,0xe0);
                snd_soc_component_update_bits(arg1,0x3008,0x40,0);
                usleep_range_state(100,0x6e,2);
                snd_soc_component_update_bits(arg1,0x30af,0xe0,0xe0);
                usleep_range_state(500,0x226,2);
            }
            iVar1 = *(arg2 + 8) + -1;
            *(arg2 + 8) = iVar1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(arg1,0x3008,0x80,0);
                usleep_range_state(500,0x1fe,2);
                snd_soc_component_update_bits(arg1,0x3098,0xff,0x3a);
                usleep_range_state(500,0x226,2);
            }
            snd_soc_component_update_bits(arg1,0x3138,0x20,0);
            snd_soc_component_update_bits(arg1,0x30bf,0xf0,0x80);
            snd_soc_component_update_bits(arg1,0x30d1,0xe,6);
            snd_soc_component_update_bits(arg1,0x3008,4,0);
            snd_soc_component_update_bits(arg1,0x30a8,0xf0,0x70);
            uVar3 = 0x3008;
            uVar4 = 8;
            uVar5 = 0;
        }
        else {
            snd_soc_component_update_bits(arg1,0x3008,2,0);
            uVar2 = in_w4 - 1;
            if (uVar2 < 8) {
                uVar6 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
                uVar5 = *(uVar6 + 0x8000b24);
                uVar7 = *(uVar6 + 0x8000b04);
            }
            else {
                uVar5 = 0;
                uVar7 = 0x70;
            }
            snd_soc_component_update_bits(arg1,0x3008,4,uVar5);
            snd_soc_component_update_bits(arg1,0x30a8,0xf0,uVar7);
            sym.wcd_clsh_force_iq_ctl(arg1,in_w4);
            iVar1 = *(arg2 + 4);
            *(arg2 + 4) = iVar1 + 1;
            if (iVar1 == 0) {
                snd_soc_component_update_bits(arg1,0x30a5,0xe0,0xe0);
                snd_soc_component_update_bits(arg1,0x3008,0x40,0x40);
                usleep_range_state(100,0x6e,2);
                snd_soc_component_update_bits(arg1,0x30af,0xe0,0xe0);
                usleep_range_state(500,0x226,2);
            }
            snd_soc_component_update_bits(arg1,0x30c7,0xf,10);
            snd_soc_component_update_bits(arg1,0x30c7,0xf0,0xa0);
            usleep_range_state(100,0x6e,2);
            if (uVar2 < 8) {
                uVar5 = *(uVar2 * 4 + 0x8000ae4);
            }
            else {
                uVar5 = 0;
            }
            snd_soc_component_update_bits(arg1,0x3008,8,uVar5);
            sym.wcd_clsh_buck_ctrl(arg1,arg2,in_w4);
            if (7 < uVar2) {
                _dev_err(*(arg1 + 0x18),"%s:Invalid mode %d\n","wcd_clsh_set_hph_mode",in_w4);
                return;
            }
            uVar3 = 0x3009;
            uVar4 = 0xc;
            uVar5 = *(uVar2 * 4 + 0x8000b44);
        }
        snd_soc_component_update_bits(arg1,uVar3,uVar4,uVar5);
    }
    return;
}


// ===== sym.wcd_clsh_state_hph_st @ 0x0800332c (size 12) =====

void sym.wcd_clsh_state_hph_st(void)

{
    return;
}


// ===== sym.wcd_clsh_state_aux @ 0x08003338 (size 572) =====

void sym.wcd_clsh_state_aux(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint64_t in_x3;
    uint32_t in_w4;
    uint64_t uVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x3 & 1) == 0) {
        sym.wcd_clsh_buck_ctrl(arg1,arg2,in_w4);
        iVar1 = *(arg2 + 4) + -1;
        *(arg2 + 4) = iVar1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(arg1,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(arg1,0x3008,0x40,0);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(arg1,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(arg1,0x3008,4,0);
        snd_soc_component_update_bits(arg1,0x30a8,0xf0,0x70);
        snd_soc_component_update_bits(arg1,0x3008,8,0);
    }
    else {
        uVar2 = in_w4 - 1;
        if (uVar2 < 8) {
            uVar3 = *(uVar2 * 4 + 0x8000ae4);
        }
        else {
            uVar3 = 0;
        }
        snd_soc_component_update_bits(arg1,0x3008,8,uVar3);
        if (uVar2 < 8) {
            uVar4 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
            uVar3 = *(uVar4 + 0x8000b24);
            uVar5 = *(uVar4 + 0x8000b04);
        }
        else {
            uVar3 = 0;
            uVar5 = 0x70;
        }
        snd_soc_component_update_bits(arg1,0x3008,4,uVar3);
        snd_soc_component_update_bits(arg1,0x30a8,0xf0,uVar5);
        iVar1 = *(arg2 + 4);
        *(arg2 + 4) = iVar1 + 1;
        if (iVar1 == 0) {
            snd_soc_component_update_bits(arg1,0x30a5,0xe0,0xe0);
            snd_soc_component_update_bits(arg1,0x3008,0x40,0x40);
            usleep_range_state(100,0x6e,2);
            snd_soc_component_update_bits(arg1,0x30af,0xe0,0xe0);
            usleep_range_state(500,0x226,2);
        }
        snd_soc_component_update_bits(arg1,0x30c7,0xf,10);
        snd_soc_component_update_bits(arg1,0x30c7,0xf0,0xa0);
        usleep_range_state(100,0x6e,2);
        sym.wcd_clsh_buck_ctrl(arg1,arg2,in_w4);
    }
    return;
}


// ===== sym.wcd_clsh_state_hph_aux @ 0x08003574 (size 12) =====

void sym.wcd_clsh_state_hph_aux(void)

{
    return;
}


// ===== sym.wcd_clsh_state_ear_aux @ 0x08003580 (size 12) =====

void sym.wcd_clsh_state_ear_aux(void)

{
    return;
}


// ===== sym.wcd_clsh_state_hph_ear @ 0x0800358c (size 12) =====

void sym.wcd_clsh_state_hph_ear(void)

{
    return;
}


// ===== sym.wcd_clsh_force_iq_ctl @ 0x08003598 (size 196) =====

void sym.wcd_clsh_force_iq_ctl(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    snd_soc_component_update_bits(arg1,0x30af,0xe0,0xa0);
    usleep_range_state(100,0x6e,2);
    snd_soc_component_update_bits(arg1,0x3099,2,2);
    snd_soc_component_update_bits(arg1,0x3098,0xff,0x1c);
    if ((arg2 == 8) || (arg2 == 4)) {
        snd_soc_component_update_bits(arg1,0x3138,0x20,0x20);
        snd_soc_component_update_bits(arg1,0x30bf,0xf0,0xc0);
        snd_soc_component_update_bits(arg1,0x30d1,0xe,2);
    }
    return;
}


// ===== sym.wcd_clsh_buck_ctrl @ 0x0800365c (size 208) =====

void sym.wcd_clsh_buck_ctrl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t in_x3;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg2 + 8);
    if ((in_x3 & 1) == 0) {
        *(arg2 + 8) = iVar1 + -1;
        if (iVar1 + -1 != 0) {
            return;
        }
        uVar2 = 0;
    }
    else {
        *(arg2 + 8) = iVar1 + 1;
        if (iVar1 != 0) {
            return;
        }
        uVar2 = 0x80;
    }
    snd_soc_component_update_bits(arg1,0x3008,0x80,uVar2);
    usleep_range_state(500,0x1fe,2);
    if ((arg3 < 6) && ((1 << (arg3 & 0x1f) & 0x36U) != 0)) {
        snd_soc_component_update_bits(arg1,0x3099,2,0);
    }
    snd_soc_component_update_bits(arg1,0x3098,0xff,0x3a);
    usleep_range_state(500,0x226,2);
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800372c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003770

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
    //switch table (4 cases) at 0x80002b0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003784);
    (*pcVar1)();
}


// ===== sym.wcdcal_get_fw_cal @ 0x08003784 (size 208) =====

ulong sym.wcdcal_get_fw_cal(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar3 = arg2;
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000a0e,"wcdcal_get_fw_cal");
        uVar2 = 0;
    }
    else if (arg2 < 4) {
        iVar1 = arg1 + 0x48;
        mutex_lock(iVar1);
        if ((*(arg1 + uVar3 * 8 + 0x28) >> 2 & 1) == 0) {
            _printk(0x800086a,"wcdcal_get_fw_cal",uVar3);
            mutex_unlock(iVar1);
            uVar2 = 0;
        }
        else {
            mutex_unlock(iVar1);
            uVar2 = *(arg1 + uVar3 * 8);
        }
    }
    else {
        _printk(0x80006b4,"wcdcal_get_fw_cal",uVar3);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.wcd_cal_create_hwdep @ 0x08003854 (size 16) =====

ulong sym.wcd_cal_create_hwdep(int64_t arg1)

{
    return 0;
}


// ===== sym.audio_ref_clk_platform_init @ 0x08003864 (size 52) =====

void sym.audio_ref_clk_platform_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.audio_ref_clk_platform_exit @ 0x08003898 (size 44) =====

void sym.audio_ref_clk_platform_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt);
    return;
}


// ===== sym.audio_ref_clk_probe @ 0x080038c4 (size 1104) =====

uint64_t sym.audio_ref_clk_probe(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    uint64_t *puVar12;
    ulong uVar13;
    char *pcVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    ulong unaff_x30;
    int iStack_5c;
    ulong uStack_58;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar15 = arg1 + 0x10;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_50 = 0;
    uStack_58 = 0;
    iStack_5c = 0;
    iVar6 = devm_kmalloc(iVar15,0x80,0xdc0);
    if (iVar6 == 0) {
        uVar8 = 0xfffffff4;
        goto code_r0x08003cd8;
    }
    uVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,codec-ext-clk-src",&uStack_58,1,0);
    if (uVar4 < 0) {
        uVar8 = uVar4;
        _dev_err(iVar15,"%s: could not get clk source, ret = %d\n","audio_ref_clk_probe",uVar8);
        goto code_r0x08003cd8;
    }
    if (uStack_58 < 0x12) {
        iVar10 = (uStack_58 & 0xffffffff) * 0x40;
        uVar7 = *(arg1 + 0x300);
        *(iVar6 + 0x70) = 0;
        *(iVar6 + 8) = uStack_58;
        uVar1 = *(iVar10 + 0x8000d30);
        uVar13 = *(iVar10 + 0x8000d38);
        uVar2 = *(iVar10 + 0x8000d40);
        *(iVar6 + 0x50) = *(iVar10 + 0x8000d28);
        *(iVar6 + 0x58) = uVar1;
        uVar1 = *(obj.audio_clk_array + iVar10);
        uVar3 = *(iVar10 + 0x8000d10);
        *(iVar6 + 0x60) = uVar13;
        *(iVar6 + 0x68) = uVar2;
        uVar13 = *(iVar10 + 0x8000d18);
        uVar2 = *(iVar10 + 0x8000d20);
        *(iVar6 + 0x30) = uVar1;
        *(iVar6 + 0x38) = uVar3;
        *(iVar6 + 0x40) = uVar13;
        *(iVar6 + 0x48) = uVar2;
        *(iVar6 + 0xc) = 0x10a00000001;
        *(iVar6 + 0x14) = 9600000;
        *(iVar6 + 0x18) = 1;
        *(iVar6 + 0x20) = 0x927c000000010a;
        *(iVar6 + 0x28) = 1;
        iVar5 = of_property_read_variable_u32_array(uVar7,"qcom,codec-lpass-ext-clk-freq",&uStack_50,1,0);
        if (-1 < iVar5) {
            *(iVar6 + 0x14) = uStack_50;
            *(iVar6 + 0x24) = uStack_50;
        }
        iVar5 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,codec-lpass-clk-id",&uStack_58 + 4,1,0);
        if (-1 < iVar5) {
            *(iVar6 + 0x10) = uStack_58._4_4_;
            *(iVar6 + 0x20) = uStack_58._4_4_;
        }
        *(arg1 + 0xa8) = iVar6;
        of_property_read_string(*(arg1 + 0x300),"pmic-clock-names",iVar6 + 0x70);
        of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,use-pinctrl",&iStack_5c,1,0);
        if (iStack_5c == 0) goto code_r0x08003b04;
        iVar6 = *(arg1 + 0xa8);
        uStack_4c = 0;
        if (*(iVar6 + 0x30) == 0) {
            uVar8 = devm_pinctrl_get(iVar15);
            if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
                pcVar14 = "%s: Unable to get pinctrl handle\n";
                goto code_r0x08003c50;
            }
            *(iVar6 + 0x30) = uVar8;
            uVar9 = pinctrl_lookup_state(uVar8,"sleep");
            *(iVar6 + 0x38) = uVar9;
            if (uVar9 < 0xfffffffffffff001) {
                uVar8 = pinctrl_lookup_state(uVar8,"active");
                *(iVar6 + 0x40) = uVar8;
                if (0xfffffffffffff000 < uVar8) {
                    pcVar14 = "%s: could not get active pinstate\n";
                    goto code_r0x08003ca4;
                }
                iVar5 = pinctrl_select_state(*(iVar6 + 0x30),*(iVar6 + 0x38));
                if (iVar5 == 0) {
                    iVar5 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,mclk-clk-reg",&uStack_4c,1,0);
                    if (-1 < iVar5) {
                        uVar13 = 0x68000000000713;
                        if (arm64_use_ng_mappings != 0x0) {
                            uVar13 = 0x68000000000f13;
                        }
                        iVar10 = __ioremap(uStack_4c,4,uVar13);
                        *(iVar6 + 0x48) = iVar10;
                        if (iVar10 == 0) {
                            pcVar14 = "%s ioremap failed\n";
                            goto code_r0x08003ca4;
                        }
                    }
code_r0x08003b04:
                    iVar6 = *(arg1 + 0xa8);
                    piVar11 = devm_kmalloc(iVar15,0x10,0xdc0);
                    if (piVar11 == NULL) {
code_r0x08003ba4:
                        uVar8 = 0xfffffff4;
                    }
                    else {
                        *(piVar11 + 1) = 1;
                        puVar12 = devm_kmalloc(iVar15,8,0xdc0);
                        *piVar11 = puVar12;
                        if (puVar12 == NULL) goto code_r0x08003ba4;
                        uVar8 = devm_clk_register(iVar15,iVar6 + 0x50);
                        if (uVar8 < 0xfffffffffffff001) {
                            uVar13 = *(arg1 + 0x300);
                            *puVar12 = uVar8;
                            uVar9 = of_clk_add_provider(uVar13,sym.of_clk_src_onecell_get.cfi_jt,piVar11);
                            uVar8 = uVar9 & 0xffffffff;
                            if (uVar9 == 0) goto code_r0x08003cd8;
                            _dev_err(iVar15,"%s: clock add failed for clk_src = %d\n","audio_get_clk_data",
                                     *(iVar6 + 8));
                        }
                        else {
                            _dev_err(iVar15,"%s: clock register failed for clk_src = %d\\n","audio_get_clk_data",
                                     *(iVar6 + 8));
                            if (uVar8 == 0) goto code_r0x08003cd8;
                        }
                    }
                    _dev_err(arg1 + 0x10,"%s: clk_init is failed\n","audio_ref_clk_probe");
                    iVar15 = *(arg1 + 0xa8);
                    if (*(iVar15 + 0x30) != 0) {
                        devm_pinctrl_put();
                        *(iVar15 + 0x30) = 0;
                    }
                    goto code_r0x08003cd8;
                }
                _dev_err(iVar15,"%s: Disable TLMM pins failed with %d\n","audio_get_pinctrl",iVar5);
            }
            else {
                pcVar14 = "%s: could not get sleep pinstate\n";
code_r0x08003ca4:
                _dev_err(iVar15,pcVar14,"audio_get_pinctrl");
            }
            devm_pinctrl_put(*(iVar6 + 0x30));
        }
        else {
            pcVar14 = "%s: already requested before\n";
code_r0x08003c50:
            _dev_err(iVar15,pcVar14,"audio_get_pinctrl");
        }
        _dev_err(iVar15,"%s: Parsing PMI pinctrl failed\n","audio_ref_clk_probe");
    }
    else {
        _dev_err(iVar15,"%s: Invalid clk source = %d\n","audio_ref_clk_probe");
    }
    uVar8 = 0xffffffea;
code_r0x08003cd8:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_48) {
        iVar15 = __stack_chk_fail();
        *extraout_x18 = sym.audio_ref_clk_remove;
        iVar15 = *(iVar15 + 0xa8);
        if (*(iVar15 + 0x30) != 0) {
            devm_pinctrl_put();
            *(iVar15 + 0x30) = 0;
        }
        return 0;
    }
    return uVar8 & 0xffffffff;
}


// ===== sym.audio_ref_clk_remove @ 0x08003d14 (size 64) =====

ulong sym.audio_ref_clk_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    if (*(iVar1 + 0x30) != 0) {
        devm_pinctrl_put();
        *(iVar1 + 0x30) = 0;
    }
    return 0;
}


// ===== sym.audio_ext_clk_prepare @ 0x08003d54 (size 304) =====

int sym.audio_ext_clk_prepare(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + -0x48) - 2U < 0xf) && (*(arg1 + -0x34) == 0)) {
        __trace_bprintk(0x8003dcc,*0x8004000,"audio_ext_clk_prepare",*(arg1 + -0x30));
        iVar1 = audio_prm_set_lpass_clk_cfg(arg1 + -0x30,1);
        if (iVar1 < 0) {
            iVar2 = ___ratelimit(obj.audio_ext_clk_prepare.rtl,"audio_ext_clk_prepare");
            if (iVar2 == 0) {
                return iVar1;
            }
            iVar2 = ___ratelimit(obj.audio_ext_clk_prepare._rs,"audio_ext_clk_prepare");
            if (iVar2 == 0) {
                return iVar1;
            }
            _printk(0x8000736,"audio_ext_clk_prepare");
            return iVar1;
        }
        *(arg1 + -0x34) = 1;
        iVar3 = *(arg1 + -0x20);
    }
    else {
        iVar3 = *(arg1 + -0x20);
    }
    if ((iVar3 == 0) || (iVar1 = pinctrl_select_state(iVar3,*(arg1 + -0x10)), iVar1 == 0)) {
        if (*(arg1 + -8) != 0) {
            sym.writel(1,*(arg1 + -8));
        }
        iVar1 = 0;
    }
    else {
        _printk(0x800094a,"audio_ext_clk_prepare",iVar1);
        iVar1 = -5;
    }
    return iVar1;
}


// ===== sym.audio_ext_clk_unprepare @ 0x08003e84 (size 284) =====

void sym.audio_ext_clk_unprepare(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + -0x20) == 0) || (iVar1 = pinctrl_select_state(*(arg1 + -0x20),*(arg1 + -0x18)), iVar1 == 0)) {
        if (*(arg1 + -0x48) - 2U < 0xf) {
            *(arg1 + -0x34) = 0;
            audio_prm_set_lpass_clk_cfg(arg1 + -0x30,0);
            return;
        }
        if (*(arg1 + -8) != 0) {
            sym.writel(0,*(arg1 + -8));
        }
    }
    else {
        _printk(0x800094a,"audio_ext_clk_unprepare",iVar1);
    }
    return;
}


// ===== sym.audio_ext_clk_get_parent @ 0x08003fa0 (size 160) =====

int sym.audio_ext_clk_get_parent(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = clk_hw_get_num_parents();
    if ((*(arg1 + -0x48) == 0) && (iVar6 = *(arg1 + 0x20), iVar6 != 0)) {
        iVar4 = *(*(arg1 + 0x10) + 0x28) + 1;
        if (0 < iVar2) {
            uVar7 = 0;
            iVar8 = *(*(arg1 + 0x10) + 0x10);
            iVar5 = iVar4;
            do {
                iVar3 = strcmp(*(iVar8 + (uVar7 & 0xff) * 8),iVar6);
                iVar4 = uVar7;
                if (iVar3 != 0) {
                    iVar4 = iVar5;
                }
                uVar1 = uVar7 + 1;
                uVar7 = uVar1;
                iVar5 = iVar4;
            } while ((uVar1 & 0xff) < iVar2);
        }
    }
    else {
        iVar4 = 0;
    }
    return iVar4;
}


// ===== sym.writel @ 0x08004040 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800405c);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004088);
    return;
}


// ===== sym.audio_ext_clk_dummy_prepare @ 0x080040bc (size 16) =====

ulong sym.audio_ext_clk_dummy_prepare(int64_t arg1)

{
    return 0;
}


// ===== sym.audio_ext_clk_dummy_unprepare @ 0x080040cc (size 12) =====

void sym.audio_ext_clk_dummy_unprepare(void)

{
    return;
}


// ===== sym.lpass_hw_vote_prepare @ 0x080040d8 (size 276) =====

ulong sym.lpass_hw_vote_prepare(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x48) == 9) {
        uVar1 = audio_prm_set_lpass_hw_core_req(arg1 + -0x30,1,1);
        return uVar1;
    }
    if (*(arg1 + -0x48) == 0xb) {
        uVar1 = audio_prm_set_lpass_hw_core_req(arg1 + -0x30,2,1);
        return uVar1;
    }
    return 0;
}


// ===== sym.lpass_hw_vote_unprepare @ 0x080041ec (size 260) =====

void sym.lpass_hw_vote_unprepare(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x48) == 9) {
        audio_prm_set_lpass_hw_core_req(arg1 + -0x30,1,0);
        return;
    }
    if (*(arg1 + -0x48) == 0xb) {
        audio_prm_set_lpass_hw_core_req(arg1 + -0x30,2,0);
        return;
    }
    return;
}


// ===== sym.init_module @ 0x080044bc (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x80002df,"wcd9xxx_soc_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08004520 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.audio_ref_clk_probe.528b8d8d38456e23c5fbe17e42584de6.cfi_jt);
    return;
}

