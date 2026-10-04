// decompiled from sla by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 556) =====

//WARNING: Switch with 1 destination removed at 0x08002ee0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 != -0x76e7814a8afd6df4) {
                if (arg1 != -0x73fe26196dddb6ca) goto code_r0x08002ea0;
                pcVar2 = sym.sla_ipv4_in.845d66b70732310f8ef58d9942856ab3.cfi_jt;
                goto code_r0x080011f4;
            }
            pcVar2 = sym.procfs_u64_get.845d66b70732310f8ef58d9942856ab3.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8001260 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x08002ea0;
            }
            if (arg1 != 0x2b3a43e29242445) {
                if ((arg1 == 0x7ff5a213d37b1a6) && ((pcVar1 + -0x80012c0 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08002ea0;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.config_file_write.845d66b70732310f8ef58d9942856ab3.cfi_jt;
code_r0x080011f4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002ea0;
        }
        if (arg1 == 0x321969b888d4949e) {
            if ((pcVar1 + -0x8001290 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08002ea0;
        }
        if (arg1 != 0x379d36f049eb9a81) goto code_r0x08002ea0;
        pcVar2 = sym.stats_map.845d66b70732310f8ef58d9942856ab3.cfi_jt;
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.sla_voip_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt;
            goto code_r0x080011f4;
        }
        if (arg1 == 0x6b141b54612cf75f) {
            pcVar2 = sym.procfs_u64_set.845d66b70732310f8ef58d9942856ab3.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002ea0;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002ea0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002ef4);
    (*pcVar1)();
}


// ===== sym.procfs_u64_set.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.procfs_u64_set.845d66b70732310f8ef58d9942856ab3.cfi_jt(ulong *param_1,ulong param_2)

{
    *param_1 = param_2;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001240 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("");
    nf_unregister_net_hooks(init_net,reloc.sla_ipv4_in.845d66b70732310f8ef58d9942856ab3.cfi_jt,2);
    sym.sla_stats_disable();
    proc_remove(_segment.ehdr);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001248 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("","");
    iVar1 = nf_register_net_hooks(init_net,reloc.sla_ipv4_in.845d66b70732310f8ef58d9942856ab3.cfi_jt,2);
    if (iVar1 < 0) {
        uVar3 = 0x80006d0;
    }
    else {
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        iVar2 = proc_mkdir(0x800047f,0);
        if (iVar2 == 0) {
            iVar1 = 1;
            uVar3 = 0x80007fe;
            _segment.ehdr = 0;
        }
        else {
            _segment.ehdr = iVar2;
            memset(reloc.simple_attr_read.cfi_jt,0,0x10c);
            reloc.simple_attr_read.cfi_jt = 0x1bb0050;
            *0x8000ad0 = 0x51000;
            _segment.ehdr = proc_create_data("",0x1a4,iVar2,obj.config_fops,reloc.simple_attr_read.cfi_jt);
            if (_segment.ehdr == 0) {
                iVar1 = 1;
                uVar3 = 0x8000492;
                _segment.ehdr = 0;
            }
            else {
                _obj.voip_state = 0;
                _segment.ehdr = proc_create_data("",0x1a4,_segment.ehdr,obj.sla_voip_fops);
                if (_segment.ehdr != 0) {
                    return 0;
                }
                iVar1 = 1;
                uVar3 = 0x80001ef;
                _segment.ehdr = 0;
            }
        }
    }
    _printk(uVar3,"");
    return iVar1;
}


// ===== sym.sla_ipv4_in.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.sla_ipv4_in.845d66b70732310f8ef58d9942856ab3.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint16_t uVar5;
    int iVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint32_t *puVar11;
    ulong *in_x18;
    ulong uVar12;
    int64_t *piVar13;
    code *pcVar14;
    ulong unaff_x30;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint64_t uVar10;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    iStack_68 = 0;
    iStack_60 = 0;
    if (((reloc.simple_attr_read.cfi_jt != 0x0) && (reloc.simple_attr_read.cfi_jt != '\0')) &&
       (uVar7 = sym.sla_pkt_valid(param_2,2), (uVar7 & 1) != 0)) {
        uVar8 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
        if (_obj.sla_iface_list != obj.sla_iface_list) {
            uVar12 = *(param_3 + 8);
            pcVar14 = _obj.sla_iface_list;
            do {
                iVar6 = strcmp(uVar12,pcVar14 + 0x30);
                if (iVar6 == 0) {
                    if (pcVar14 != NULL) {
                        iVar3 = *(pcVar14 + 0x28);
                        *(pcVar14 + 0x20) = *(pcVar14 + 0x20) + *(param_2 + 0x70);
                        ktime_get_real_ts64(&iStack_68);
                        uVar9 = *(iVar3 + 8);
                        if (0x4ff < uVar9) goto code_r0x08001648;
                        iVar2 = iVar3 + uVar9 * 0x10;
                        *(iVar2 + 0x1e) = 2;
                        *(iVar2 + 0x10) = iStack_60 / 1000000 + iStack_68 * 1000;
                        *(iVar2 + 0x18) = *(param_2 + 0x70) + 0xe;
                        uVar5 = *(*(param_2 + 0xd0) + *(param_2 + 0xb2) + 2);
                        *(iVar2 + 0x1c) = uVar5 >> 8 | uVar5 << 8;
                        uVar12 = _raw_spin_lock_irqsave(obj.pkt_spin_lock);
                        piVar13 = *(obj.sla_iface_list + (*(iVar2 + 0x1c) * 0x61c88647 >> 0x18) * 8);
                        goto joined_r0x080014ac;
                    }
                    break;
                }
                pcVar14 = *pcVar14;
            } while (pcVar14 != obj.sla_iface_list);
        }
        goto code_r0x080015f8;
    }
code_r0x08001608:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return 1;
    }
    __stack_chk_fail();
code_r0x08001648:
    //WARNING: Does not return
    pcVar14 = SoftwareBreakpoint(0x5512,0x800164c);
    (*pcVar14)();
joined_r0x080014ac:
    if (piVar13 == NULL) goto code_r0x080014c4;
    if (*(piVar13 + 2) == *(iVar2 + 0x1c)) {
        _raw_spin_lock(obj.list_spin_lock);
        _segment.ehdr = _segment.ehdr + 1;
        iVar2 = *piVar13;
        piVar4 = piVar13[1];
        *piVar4 = iVar2;
        if (iVar2 != 0) {
            *(iVar2 + 8) = piVar4;
        }
        piVar13[1] = -0x2152fffffffffede;
        _raw_spin_unlock(obj.list_spin_lock);
        kfree(piVar13);
        *(iVar3 + uVar9 * 0x10 + 0x1f) = 1;
        goto code_r0x080015d4;
    }
    piVar13 = *piVar13;
    goto joined_r0x080014ac;
code_r0x080014c4:
    uVar9 = *(iVar3 + 8);
    uVar7 = uVar9;
    *(iVar2 + 0x1f) = 0;
    if (0x4ff < uVar9) goto code_r0x08001648;
    if (uVar9 == 0) {
        uVar9 = *(iVar3 + 4);
    }
    uVar10 = uVar9 - 1;
    if (0x4fe < uVar9 - 1) goto code_r0x08001648;
    if (((*(iVar3 + uVar10 * 0x10 + 0x1f) == '\0') &&
        (iVar1 = iVar3 + 0x10, *(iVar1 + uVar10 * 0x10 + 0xc) == *(iVar1 + uVar7 * 0x10 + 0xc))) &&
       (*(iVar1 + uVar7 * 0x10) <= *(iVar1 + uVar10 * 0x10) + (_segment.ehdr & 0xffff))) {
        puVar11 = iVar3 + 0x10 + uVar10 * 0x10 + 8;
        uVar9 = *(iVar3 + 0x10 + uVar7 * 0x10 + 8) + *puVar11;
        if (uVar9 <= _segment.ehdr) {
            *puVar11 = uVar9;
            _raw_spin_unlock_irqrestore(obj.pkt_spin_lock,uVar12);
            *(iVar2 + 0x10) = 0;
            *(iVar2 + 0x18) = 0;
            goto code_r0x080015f8;
        }
    }
code_r0x080015d4:
    _raw_spin_unlock_irqrestore(obj.pkt_spin_lock,uVar12);
    iVar6 = 0;
    if (*(iVar3 + 8) + 1U < *(iVar3 + 4)) {
        iVar6 = *(iVar3 + 8) + 1;
    }
    *(iVar3 + 8) = iVar6;
code_r0x080015f8:
    _raw_spin_unlock_irqrestore(obj.stats_spin_lock,uVar8);
    goto code_r0x08001608;
}


// ===== sym.sla_ipv4_out.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x08001258 (size 8) =====

ulong sym.sla_ipv4_out.845d66b70732310f8ef58d9942856ab3.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    int16_t iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iStack_58 = 0;
    iStack_50 = 0;
    if (((reloc.simple_attr_read.cfi_jt == 0x0) || (*0x8000ad4 == '\0')) || (*0x8000ad8 == 0)) {
code_r0x0800171c:
        if (((reloc.simple_attr_read.cfi_jt != 0x0) && (reloc.simple_attr_read.cfi_jt != '\0')) &&
           (uVar9 = sym.sla_pkt_valid(param_2,1), (uVar9 & 1) != 0)) {
            uVar6 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
            if (_obj.sla_iface_list != obj.sla_iface_list) {
                uVar10 = *(param_3 + 0x10);
                pcVar4 = _obj.sla_iface_list;
                do {
                    iVar5 = strcmp(uVar10,pcVar4 + 0x30);
                    if (iVar5 == 0) {
                        if (pcVar4 != NULL) {
                            iVar11 = *(pcVar4 + 0x28);
                            ktime_get_real_ts64(&iStack_58);
                            uVar2 = *(*(param_2 + 0xd0) + *(param_2 + 0xb2));
                            uVar3 = uVar2 >> 8 | (uVar2 & 0xff00ff) << 8;
                            pcVar4 = obj.sla_iface_list + (uVar3 * 0x61c88647 >> 0x18) * 8;
                            piVar7 = *pcVar4;
                            goto joined_r0x080017c8;
                        }
                        break;
                    }
                    pcVar4 = *pcVar4;
                } while (pcVar4 != obj.sla_iface_list);
            }
            goto code_r0x080018e0;
        }
    }
    else {
        iVar11 = *(param_2 + 0xd0) + *(param_2 + 0xb4);
        if (((*(iVar11 + 9) != '\x11') || (uVar9 = *(param_2 + 0x18), uVar9 == 0)) || (0xfffffffffffff000 < uVar9))
        goto code_r0x0800171c;
        if (((*0x8000ad8 == *(uVar9 + 600)) && (_segment.ehdr == 0)) &&
           (iVar1 = *(*(param_2 + 0xd0) + *(param_2 + 0xb2) + 2), iVar1 != 0x3500)) {
            _obj.voip_state = *(iVar11 + 0x10);
            *0x8000aec = iVar1;
        }
    }
    goto code_r0x080018f0;
joined_r0x080017c8:
    if (piVar7 == NULL) goto code_r0x080017e0;
    if (*(piVar7 + 2) == uVar3) goto code_r0x0800185c;
    piVar7 = *piVar7;
    goto joined_r0x080017c8;
code_r0x080017e0:
    iVar8 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar8 = 0x30;
    }
    piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xb20,0x18);
    if (piVar7 != NULL) {
        *(piVar7 + 2) = uVar3;
        _raw_spin_lock(obj.list_spin_lock);
        iVar8 = *pcVar4;
        *piVar7 = iVar8;
        _segment.ehdr = _segment.ehdr + 1;
        piVar7[1] = pcVar4;
        *pcVar4 = piVar7;
        if (iVar8 != 0) {
            *(iVar8 + 8) = piVar7;
        }
        _raw_spin_unlock(obj.list_spin_lock);
    }
code_r0x0800185c:
    uVar3 = *(iVar11 + 8);
    if (0x4ff < uVar3) goto code_r0x0800192c;
    iVar8 = iVar11 + uVar3 * 0x10;
    *(iVar8 + 0x1e) = 1;
    *(iVar8 + 0x10) = iStack_50 / 1000000 + iStack_58 * 1000;
    *(iVar8 + 0x18) = *(param_2 + 0x70) + 0xe;
    uVar2 = *(*(param_2 + 0xd0) + *(param_2 + 0xb2));
    *(iVar8 + 0x1f) = 1;
    iVar5 = 0;
    if (uVar3 + 1 < *(iVar11 + 4)) {
        iVar5 = uVar3 + 1;
    }
    *(iVar8 + 0x1c) = uVar2 >> 8 | uVar2 << 8;
    *(iVar11 + 8) = iVar5;
code_r0x080018e0:
    _raw_spin_unlock_irqrestore(obj.stats_spin_lock,uVar6);
code_r0x080018f0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return 1;
    }
    __stack_chk_fail();
code_r0x0800192c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8001930);
    (*pcVar4)();
}


// ===== sym.config_file_open.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x08001260 (size 8) =====

void sym.config_file_open.845d66b70732310f8ef58d9942856ab3.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(param_2,sym.config_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt,uVar1);
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08001268 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.stats_open.cfi_jt @ 0x08001270 (size 8) =====

void sym.stats_open.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    *(param_1 + 0x2d8) = uVar1;
    simple_open(param_1,param_2);
    return;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08001278 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.fops_u64_open.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x08001280 (size 8) =====

void sym.fops_u64_open.845d66b70732310f8ef58d9942856ab3.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    *(param_1 + 0x2d8) = uVar1;
    simple_attr_open(param_1,param_2,sym.procfs_u64_get.845d66b70732310f8ef58d9942856ab3.cfi_jt,
                     sym.procfs_u64_set.845d66b70732310f8ef58d9942856ab3.cfi_jt,"");
    return;
}


// ===== sym.sla_voip_file_open.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x08001288 (size 8) =====

void sym.sla_voip_file_open.845d66b70732310f8ef58d9942856ab3.cfi_jt(ulong param_1,ulong param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(param_2,sym.sla_voip_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt,uVar1);
    return;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08001290 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.default_llseek.cfi_jt @ 0x08001298 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.default_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.generic_file_llseek.cfi_jt @ 0x080012a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.generic_file_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sla_voip_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x080012a8 (size 8) =====

ulong sym.sla_voip_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,"",_obj.voip_state);
    seq_printf(param_1,"",*0x8000aec);
    return 0;
}


// ===== sym.config_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x080012b0 (size 8) =====

ulong sym.config_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uchar *puVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0x80);
    seq_printf(param_1,"",*puVar1);
    seq_printf(param_1,"",puVar1[1]);
    seq_puts(param_1,"");
    if (*(puVar1 + 2) != 0) {
        seq_printf(param_1,0x80001dd);
        iVar2 = 4;
        do {
            if (*(puVar1 + iVar2) == 0) break;
            seq_printf(param_1,0x8000376);
            iVar2 = iVar2 + 2;
        } while (iVar2 != 0x100);
    }
    seq_printf(param_1,0x800060e);
    seq_printf(param_1,"",*(puVar1 + 0x100));
    seq_printf(param_1,"",*(puVar1 + 0x102));
    seq_printf(param_1,"",puVar1[0x104]);
    seq_printf(param_1,"",*(puVar1 + 0x108));
    return 0;
}


// ===== sym.procfs_u64_get.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x080012b8 (size 8) =====

ulong sym.procfs_u64_get.845d66b70732310f8ef58d9942856ab3.cfi_jt(ulong *param_1,ulong *param_2)

{
    *param_2 = *param_1;
    return 0;
}


// ===== sym.simple_attr_read.cfi_jt @ 0x080012c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sla_voip_file_read.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x080012c8 (size 8) =====

ulong sym.sla_voip_file_read.845d66b70732310f8ef58d9942856ab3.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_50;
    unkbyte5 Stack_48;
    unkbyte3 Stack_43;
    unkbyte5 Stack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    Stack_40 = 0;
    uStack_50 = 0;
    Stack_48 = 0;
    Stack_43 = 0;
    sprintf(&uStack_50,"",_obj.voip_state & 0xffffffff,*0x8000aec);
    _printk("",&uStack_50);
    _obj.voip_state = 0;
    uVar2 = strlen(&uStack_50);
    uVar2 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_50,uVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    uVar2 = __stack_chk_fail();
    *extraout_x18 = sym.sla_voip_file_show;
    seq_printf(uVar2,"",_obj.voip_state & 0xffffffff);
    seq_printf(uVar2,"",*0x8000aec);
    return 0;
}


// ===== sym.seq_read.cfi_jt @ 0x080012d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.stats_read.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x080012d8 (size 8) =====

void sym.stats_read.845d66b70732310f8ef58d9942856ab3.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_read_from_buffer(param_2,param_3,param_4,*(param_1 + 0xd8),0x5000);
    return;
}


// ===== sym.stats_map.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x080012e0 (size 8) =====

int sym.stats_map.845d66b70732310f8ef58d9942856ab3.cfi_jt(int64_t param_1,int64_t *param_2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xd8) == 0) {
        iVar4 = -1;
    }
    else {
        iVar3 = (*(param_1 + 0xd8) << 8) >> 8;
        uVar1 = iVar3 + 0x8000000000;
        uVar2 = _seq_lseek + uVar1;
        if (uVar1 >> 0x26 != 0) {
            uVar2 = iVar3 - _generic_file_llseek;
        }
        iVar4 = remap_pfn_range(param_2,*param_2,uVar2 >> 0xc,param_2[1] - *param_2,0x68000000000fc3);
        iVar4 = -(iVar4 != 0);
    }
    return iVar4;
}


// ===== sym.config_file_write.845d66b70732310f8ef58d9942856ab3.cfi_jt @ 0x080012e8 (size 8) =====

uint64_t sym.config_file_write.845d66b70732310f8ef58d9942856ab3.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar *puStack_370;
    uchar uStack_365;
    uint uStack_364;
    int16_t iStack_360;
    uchar uStack_35e;
    char cStack_35d;
    char cStack_35c;
    char cStack_35b;
    uchar uStack_35a;
    uchar uStack_359;
    char cStack_358;
    char cStack_357;
    uint8_t uStack_356;
    char cStack_355;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    memset(&uStack_364,0,0x30c);
    puStack_370 = NULL;
    if (param_3 < 0x30d) {
        __check_object_size(&uStack_364,param_3,0);
        iVar3 = sym._copy_from_user(&uStack_364,param_2,param_3);
        if (iVar3 != 0) goto code_r0x08001b4c;
        if (0x30b < param_3 - 1) goto code_r0x08002194;
        (&uStack_365)[param_3] = 0;
        if (uStack_364 == 0x63616669 && iStack_360 == 0x3d65) {
            _printk("","",&uStack_35e);
            uVar6 = strlen(&uStack_35e);
            if (uVar6 < 0x10) {
                sym.sla_interface_start(&uStack_35e);
            }
            else {
                _printk(0x80002cb,"",&uStack_35e);
            }
        }
        else if (uStack_364 == 0x62616e65 && CONCAT13(uStack_35e,CONCAT21(iStack_360,uStack_364._3_1_)) == 0x3d656c62)
        {
            _printk("","",cStack_35d);
            if ((cStack_35d == '1') && (cStack_35c == '\0')) {
                if (reloc.simple_attr_read.cfi_jt == 0x0) {
                    memset(obj.sla_iface_list,0,0x800);
                    _segment.ehdr = CONCAT62(*0x8000002,0x101);
                }
                else {
                    _printk("","");
                }
            }
            else if ((cStack_35d == '0') && (cStack_35c == '\0')) {
                sym.sla_stats_disable();
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x3d6e6f5f65746172) {
            _printk("","",cStack_35c);
            if ((cStack_35c == '1') && (cStack_35b == '\0')) {
                reloc.simple_attr_read.cfi_jt = 1;
            }
            else if ((cStack_35c == '0') && (cStack_35b == '\0')) {
                reloc.simple_attr_read.cfi_jt = 0;
            }
        }
        else if (uStack_364 == 0x74726f70 && iStack_360 == 0x3d73) {
            _printk("","",&uStack_35e);
            puStack_370 = &uStack_35e;
            iVar3 = strsep(&puStack_370,0x8000355);
            if (iVar3 != 0) {
                uVar7 = 0;
                do {
                    iVar3 = simple_strtoul(iVar3,0,10);
                    if (iVar3 - 1U < 0xffff) {
                        if (0x7e < uVar7) goto code_r0x08002194;
                        *(reloc.simple_attr_read.cfi_jt + uVar7 * 2 + 2) = iVar3;
                        _printk("","");
                        if (uVar7 == 0x7e) break;
                        uVar7 = uVar7 + 1;
                    }
                    iVar3 = strsep(&puStack_370,0x8000355);
                } while (iVar3 != 0);
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x72745f7465736572 &&
                 CONCAT17(cStack_357,
                          CONCAT16(cStack_358,
                                   CONCAT15(uStack_359,
                                            CONCAT14(uStack_35a,
                                                     CONCAT13(cStack_35b,
                                                              CONCAT12(cStack_35c,CONCAT11(cStack_35d,uStack_35e))))))
                         ) == 0x3d63696666617274) {
            if ((uStack_356 == 0x31) && (cStack_355 == '\0')) {
                uVar4 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
                for (pcVar1 = _obj.sla_iface_list; pcVar1 != obj.sla_iface_list; pcVar1 = *pcVar1) {
                    *(pcVar1 + 0x20) = 0;
                }
                _raw_spin_unlock_irqrestore(obj.stats_spin_lock,uVar4);
                uVar7 = uStack_356;
                pcVar5 = "";
                goto code_r0x08002118;
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x6972705f68736168 &&
                 CONCAT11(cStack_35b,cStack_35c) == 0x746e) {
            _printk("","",_segment.ehdr,_segment.ehdr);
            sym.pkt_hlist_print();
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x656c635f68736168 &&
                 CONCAT11(cStack_35b,cStack_35c) == 0x7261) {
            _printk("","");
            sym.pkt_hlist_deinit();
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x657a69735f78616d &&
                 cStack_35c == '=') {
            uVar6 = simple_strtoul(&cStack_35b,0,10);
            if (uVar6 < 0x1000) {
                _printk(0x800038a,"",uVar6,0x1000);
            }
            else {
                uVar7 = uVar6 & 0xffff;
                pcVar5 = "";
                _segment.ehdr = CONCAT62(*0x8000002,uVar6);
code_r0x08002118:
                _printk(pcVar5,"",uVar7);
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x69745f74696d696c &&
                 CONCAT17(uStack_35a,
                          CONCAT16(cStack_35b,
                                   CONCAT15(cStack_35c,
                                            CONCAT14(cStack_35d,
                                                     CONCAT13(uStack_35e,CONCAT21(iStack_360,uStack_364._3_1_)))))) ==
                 0x3d656d69745f7469) {
            uVar6 = simple_strtoul(&uStack_359,0,10);
            if (4 < uVar6) {
                uVar7 = uVar6 & 0xffff;
                pcVar5 = "";
                _segment.ehdr = CONCAT62(*0x8000002,uVar6);
                goto code_r0x08002118;
            }
            _printk(0x80007c4,"",uVar6,5);
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x616e655f70696f76 &&
                 CONCAT13(uStack_359,CONCAT12(uStack_35a,CONCAT11(cStack_35b,cStack_35c))) == 0x3d656c62) {
            _printk("","",&cStack_358);
            iVar3 = _segment.ehdr;
            if ((cStack_358 == '1') && (cStack_357 == '\0')) {
                _segment.ehdr = 0;
                if (iVar3 == 0) {
                    _printk(0x8000628,"");
                    param_3 = 1;
                }
                else {
                    *0x8000ad4 = 1;
                }
            }
            else if ((cStack_358 == '0') && (cStack_357 == '\0')) {
                *0x8000ad4 = 0;
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x6469755f70696f76 &&
                 cStack_35c == '=') {
            _printk("","",&cStack_35b);
            uVar2 = simple_strtoul(&cStack_35b,0,10);
            _segment.ehdr = CONCAT44(*0x8000004,uVar2);
        }
    }
    else {
code_r0x08001b4c:
        param_3 = 0xfffffffffffffff2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return param_3;
    }
    __stack_chk_fail();
code_r0x08002194:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002198);
    (*pcVar1)();
}


// ===== sym.simple_attr_write.cfi_jt @ 0x080012f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.stats_open @ 0x080012f8 (size 68) =====

void sym.stats_open(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    *(arg1 + 0x2d8) = uVar1;
    simple_open(arg1,arg2);
    return;
}


// ===== sym.sla_ipv4_in @ 0x0800133c (size 784) =====

ulong sym.sla_ipv4_in(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint16_t uVar5;
    int iVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    uint32_t *puVar11;
    ulong *in_x18;
    ulong uVar12;
    int64_t *piVar13;
    code *pcVar14;
    ulong unaff_x30;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint64_t uVar10;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    iStack_68 = 0;
    iStack_60 = 0;
    if (((reloc.simple_attr_read.cfi_jt != 0x0) && (reloc.simple_attr_read.cfi_jt != '\0')) &&
       (uVar7 = sym.sla_pkt_valid(arg1,2), (uVar7 & 1) != 0)) {
        uVar8 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
        if (_obj.sla_iface_list != obj.sla_iface_list) {
            uVar12 = *(arg2 + 8);
            pcVar14 = _obj.sla_iface_list;
            do {
                iVar6 = strcmp(uVar12,pcVar14 + 0x30);
                if (iVar6 == 0) {
                    if (pcVar14 != NULL) {
                        iVar3 = *(pcVar14 + 0x28);
                        *(pcVar14 + 0x20) = *(pcVar14 + 0x20) + *(arg1 + 0x70);
                        ktime_get_real_ts64(&iStack_68);
                        uVar9 = *(iVar3 + 8);
                        if (0x4ff < uVar9) goto code_r0x08001648;
                        iVar2 = iVar3 + uVar9 * 0x10;
                        *(iVar2 + 0x1e) = 2;
                        *(iVar2 + 0x10) = iStack_60 / 1000000 + iStack_68 * 1000;
                        *(iVar2 + 0x18) = *(arg1 + 0x70) + 0xe;
                        uVar5 = *(*(arg1 + 0xd0) + *(arg1 + 0xb2) + 2);
                        *(iVar2 + 0x1c) = uVar5 >> 8 | uVar5 << 8;
                        uVar12 = _raw_spin_lock_irqsave(obj.pkt_spin_lock);
                        piVar13 = *(obj.sla_iface_list + (*(iVar2 + 0x1c) * 0x61c88647 >> 0x18) * 8);
                        goto joined_r0x080014ac;
                    }
                    break;
                }
                pcVar14 = *pcVar14;
            } while (pcVar14 != obj.sla_iface_list);
        }
        goto code_r0x080015f8;
    }
code_r0x08001608:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return 1;
    }
    __stack_chk_fail();
code_r0x08001648:
    //WARNING: Does not return
    pcVar14 = SoftwareBreakpoint(0x5512,0x800164c);
    (*pcVar14)();
joined_r0x080014ac:
    if (piVar13 == NULL) goto code_r0x080014c4;
    if (*(piVar13 + 2) == *(iVar2 + 0x1c)) {
        _raw_spin_lock(obj.list_spin_lock);
        _segment.ehdr = _segment.ehdr + 1;
        iVar2 = *piVar13;
        piVar4 = piVar13[1];
        *piVar4 = iVar2;
        if (iVar2 != 0) {
            *(iVar2 + 8) = piVar4;
        }
        piVar13[1] = -0x2152fffffffffede;
        _raw_spin_unlock(obj.list_spin_lock);
        kfree(piVar13);
        *(iVar3 + uVar9 * 0x10 + 0x1f) = 1;
        goto code_r0x080015d4;
    }
    piVar13 = *piVar13;
    goto joined_r0x080014ac;
code_r0x080014c4:
    uVar9 = *(iVar3 + 8);
    uVar7 = uVar9;
    *(iVar2 + 0x1f) = 0;
    if (0x4ff < uVar9) goto code_r0x08001648;
    if (uVar9 == 0) {
        uVar9 = *(iVar3 + 4);
    }
    uVar10 = uVar9 - 1;
    if (0x4fe < uVar9 - 1) goto code_r0x08001648;
    if (((*(iVar3 + uVar10 * 0x10 + 0x1f) == '\0') &&
        (iVar1 = iVar3 + 0x10, *(iVar1 + uVar10 * 0x10 + 0xc) == *(iVar1 + uVar7 * 0x10 + 0xc))) &&
       (*(iVar1 + uVar7 * 0x10) <= *(iVar1 + uVar10 * 0x10) + (_segment.ehdr & 0xffff))) {
        puVar11 = iVar3 + 0x10 + uVar10 * 0x10 + 8;
        uVar9 = *(iVar3 + 0x10 + uVar7 * 0x10 + 8) + *puVar11;
        if (uVar9 <= _segment.ehdr) {
            *puVar11 = uVar9;
            _raw_spin_unlock_irqrestore(obj.pkt_spin_lock,uVar12);
            *(iVar2 + 0x10) = 0;
            *(iVar2 + 0x18) = 0;
            goto code_r0x080015f8;
        }
    }
code_r0x080015d4:
    _raw_spin_unlock_irqrestore(obj.pkt_spin_lock,uVar12);
    iVar6 = 0;
    if (*(iVar3 + 8) + 1U < *(iVar3 + 4)) {
        iVar6 = *(iVar3 + 8) + 1;
    }
    *(iVar3 + 8) = iVar6;
code_r0x080015f8:
    _raw_spin_unlock_irqrestore(obj.stats_spin_lock,uVar8);
    goto code_r0x08001608;
}


// ===== sym.sla_ipv4_out @ 0x08001654 (size 732) =====

ulong sym.sla_ipv4_out(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iStack_58 = 0;
    iStack_50 = 0;
    if (((reloc.simple_attr_read.cfi_jt == 0x0) || (*0x8000ad4 == '\0')) || (*0x8000ad8 == 0)) {
code_r0x0800171c:
        if (((reloc.simple_attr_read.cfi_jt != 0x0) && (reloc.simple_attr_read.cfi_jt != '\0')) &&
           (uVar9 = sym.sla_pkt_valid(arg1,1), (uVar9 & 1) != 0)) {
            uVar6 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
            if (_obj.sla_iface_list != obj.sla_iface_list) {
                uVar10 = *(arg2 + 0x10);
                pcVar4 = _obj.sla_iface_list;
                do {
                    iVar5 = strcmp(uVar10,pcVar4 + 0x30);
                    if (iVar5 == 0) {
                        if (pcVar4 != NULL) {
                            iVar11 = *(pcVar4 + 0x28);
                            ktime_get_real_ts64(&iStack_58);
                            uVar2 = *(*(arg1 + 0xd0) + *(arg1 + 0xb2));
                            uVar3 = uVar2 >> 8 | (uVar2 & 0xff00ff) << 8;
                            pcVar4 = obj.sla_iface_list + (uVar3 * 0x61c88647 >> 0x18) * 8;
                            piVar7 = *pcVar4;
                            goto joined_r0x080017c8;
                        }
                        break;
                    }
                    pcVar4 = *pcVar4;
                } while (pcVar4 != obj.sla_iface_list);
            }
            goto code_r0x080018e0;
        }
    }
    else {
        iVar11 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
        if (((*(iVar11 + 9) != '\x11') || (uVar9 = *(arg1 + 0x18), uVar9 == 0)) || (0xfffffffffffff000 < uVar9))
        goto code_r0x0800171c;
        if (((*0x8000ad8 == *(uVar9 + 600)) && (_segment.ehdr == 0)) &&
           (iVar1 = *(*(arg1 + 0xd0) + *(arg1 + 0xb2) + 2), iVar1 != 0x3500)) {
            _obj.voip_state = *(iVar11 + 0x10);
            *0x8000aec = iVar1;
        }
    }
    goto code_r0x080018f0;
joined_r0x080017c8:
    if (piVar7 == NULL) goto code_r0x080017e0;
    if (*(piVar7 + 2) == uVar3) goto code_r0x0800185c;
    piVar7 = *piVar7;
    goto joined_r0x080017c8;
code_r0x080017e0:
    iVar8 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar8 = 0x30;
    }
    piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xb20,0x18);
    if (piVar7 != NULL) {
        *(piVar7 + 2) = uVar3;
        _raw_spin_lock(obj.list_spin_lock);
        iVar8 = *pcVar4;
        *piVar7 = iVar8;
        _segment.ehdr = _segment.ehdr + 1;
        piVar7[1] = pcVar4;
        *pcVar4 = piVar7;
        if (iVar8 != 0) {
            *(iVar8 + 8) = piVar7;
        }
        _raw_spin_unlock(obj.list_spin_lock);
    }
code_r0x0800185c:
    uVar3 = *(iVar11 + 8);
    if (0x4ff < uVar3) goto code_r0x0800192c;
    iVar8 = iVar11 + uVar3 * 0x10;
    *(iVar8 + 0x1e) = 1;
    *(iVar8 + 0x10) = iStack_50 / 1000000 + iStack_58 * 1000;
    *(iVar8 + 0x18) = *(arg1 + 0x70) + 0xe;
    uVar2 = *(*(arg1 + 0xd0) + *(arg1 + 0xb2));
    *(iVar8 + 0x1f) = 1;
    iVar5 = 0;
    if (uVar3 + 1 < *(iVar11 + 4)) {
        iVar5 = uVar3 + 1;
    }
    *(iVar8 + 0x1c) = uVar2 >> 8 | uVar2 << 8;
    *(iVar11 + 8) = iVar5;
code_r0x080018e0:
    _raw_spin_unlock_irqrestore(obj.stats_spin_lock,uVar6);
code_r0x080018f0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return 1;
    }
    __stack_chk_fail();
code_r0x0800192c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8001930);
    (*pcVar4)();
}


// ===== sym.sla_pkt_valid @ 0x08001938 (size 336) =====

ulong sym.sla_pkt_valid(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
    if (puVar1[9] == 6) {
        iVar2 = *(arg1 + 0xd0) + *(arg1 + 0xb2);
        uVar4 = *(iVar2 + 0xc);
        if ((uVar4 >> 2 & 0x3c) + (*puVar1 & 0xf) * 4 != (*(puVar1 + 2) >> 8 | *(puVar1 + 2) << 8)) {
            return 1;
        }
        if ((uVar4 & 0x500) != 0) {
            uVar4 = *(iVar2 + ((arg2 & 0xff) != 1) * 2);
            uVar5 = uVar4 >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar6 = _raw_spin_lock_irqsave(obj.pkt_spin_lock);
            for (piVar7 = *(obj.sla_iface_list + (uVar5 * 0x61c88647 >> 0x18) * 8); piVar7 != NULL; piVar7 = *piVar7) {
                if (*(piVar7 + 2) == uVar5) {
                    _raw_spin_lock(obj.list_spin_lock);
                    _segment.ehdr = _segment.ehdr + 1;
                    iVar2 = *piVar7;
                    piVar3 = piVar7[1];
                    *piVar3 = iVar2;
                    if (iVar2 != 0) {
                        *(iVar2 + 8) = piVar3;
                    }
                    piVar7[1] = -0x2152fffffffffede;
                    _raw_spin_unlock(obj.list_spin_lock);
                    kfree(piVar7);
                    break;
                }
            }
            _raw_spin_unlock_irqrestore(obj.pkt_spin_lock,uVar6);
        }
    }
    return 0;
}


// ===== sym.config_file_open @ 0x08001a90 (size 68) =====

void sym.config_file_open(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(arg1,sym.config_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt,uVar1);
    return;
}


// ===== sym.config_file_write @ 0x08001ad4 (size 1732) =====

int64_t sym.config_file_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar *puStack_370;
    uchar uStack_365;
    uint uStack_364;
    int16_t iStack_360;
    uchar uStack_35e;
    char cStack_35d;
    char cStack_35c;
    char cStack_35b;
    uchar uStack_35a;
    uchar uStack_359;
    char cStack_358;
    char cStack_357;
    uint8_t uStack_356;
    char cStack_355;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    memset(&uStack_364,0,0x30c);
    puStack_370 = NULL;
    if (arg2 < 0x30d) {
        __check_object_size(&uStack_364,arg2,0);
        iVar3 = sym._copy_from_user(&uStack_364,arg1,arg2);
        if (iVar3 != 0) goto code_r0x08001b4c;
        if (0x30b < arg2 - 1U) goto code_r0x08002194;
        (&uStack_365)[arg2] = 0;
        if (uStack_364 == 0x63616669 && iStack_360 == 0x3d65) {
            _printk("","",&uStack_35e);
            uVar6 = strlen(&uStack_35e);
            if (uVar6 < 0x10) {
                sym.sla_interface_start(&uStack_35e);
            }
            else {
                _printk(0x80002cb,"",&uStack_35e);
            }
        }
        else if (uStack_364 == 0x62616e65 && CONCAT13(uStack_35e,CONCAT21(iStack_360,uStack_364._3_1_)) == 0x3d656c62)
        {
            _printk("","",cStack_35d);
            if ((cStack_35d == '1') && (cStack_35c == '\0')) {
                if (reloc.simple_attr_read.cfi_jt == 0x0) {
                    memset(obj.sla_iface_list,0,0x800);
                    _segment.ehdr = CONCAT62(*0x8000002,0x101);
                }
                else {
                    _printk("","");
                }
            }
            else if ((cStack_35d == '0') && (cStack_35c == '\0')) {
                sym.sla_stats_disable();
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x3d6e6f5f65746172) {
            _printk("","",cStack_35c);
            if ((cStack_35c == '1') && (cStack_35b == '\0')) {
                reloc.simple_attr_read.cfi_jt = 1;
            }
            else if ((cStack_35c == '0') && (cStack_35b == '\0')) {
                reloc.simple_attr_read.cfi_jt = 0;
            }
        }
        else if (uStack_364 == 0x74726f70 && iStack_360 == 0x3d73) {
            _printk("","",&uStack_35e);
            puStack_370 = &uStack_35e;
            iVar3 = strsep(&puStack_370,0x8000355);
            if (iVar3 != 0) {
                uVar7 = 0;
                do {
                    iVar3 = simple_strtoul(iVar3,0,10);
                    if (iVar3 - 1U < 0xffff) {
                        if (0x7e < uVar7) goto code_r0x08002194;
                        *(reloc.simple_attr_read.cfi_jt + uVar7 * 2 + 2) = iVar3;
                        _printk("","");
                        if (uVar7 == 0x7e) break;
                        uVar7 = uVar7 + 1;
                    }
                    iVar3 = strsep(&puStack_370,0x8000355);
                } while (iVar3 != 0);
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x72745f7465736572 &&
                 CONCAT17(cStack_357,
                          CONCAT16(cStack_358,
                                   CONCAT15(uStack_359,
                                            CONCAT14(uStack_35a,
                                                     CONCAT13(cStack_35b,
                                                              CONCAT12(cStack_35c,CONCAT11(cStack_35d,uStack_35e))))))
                         ) == 0x3d63696666617274) {
            if ((uStack_356 == 0x31) && (cStack_355 == '\0')) {
                uVar4 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
                for (pcVar1 = _obj.sla_iface_list; pcVar1 != obj.sla_iface_list; pcVar1 = *pcVar1) {
                    *(pcVar1 + 0x20) = 0;
                }
                _raw_spin_unlock_irqrestore(obj.stats_spin_lock,uVar4);
                uVar7 = uStack_356;
                pcVar5 = "";
                goto code_r0x08002118;
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x6972705f68736168 &&
                 CONCAT11(cStack_35b,cStack_35c) == 0x746e) {
            _printk("","",_segment.ehdr,_segment.ehdr);
            sym.pkt_hlist_print();
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x656c635f68736168 &&
                 CONCAT11(cStack_35b,cStack_35c) == 0x7261) {
            _printk("","");
            sym.pkt_hlist_deinit();
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x657a69735f78616d &&
                 cStack_35c == '=') {
            uVar6 = simple_strtoul(&cStack_35b,0,10);
            if (uVar6 < 0x1000) {
                _printk(0x800038a,"",uVar6,0x1000);
            }
            else {
                uVar7 = uVar6 & 0xffff;
                pcVar5 = "";
                _segment.ehdr = CONCAT62(*0x8000002,uVar6);
code_r0x08002118:
                _printk(pcVar5,"",uVar7);
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x69745f74696d696c &&
                 CONCAT17(uStack_35a,
                          CONCAT16(cStack_35b,
                                   CONCAT15(cStack_35c,
                                            CONCAT14(cStack_35d,
                                                     CONCAT13(uStack_35e,CONCAT21(iStack_360,uStack_364._3_1_)))))) ==
                 0x3d656d69745f7469) {
            uVar6 = simple_strtoul(&uStack_359,0,10);
            if (4 < uVar6) {
                uVar7 = uVar6 & 0xffff;
                pcVar5 = "";
                _segment.ehdr = CONCAT62(*0x8000002,uVar6);
                goto code_r0x08002118;
            }
            _printk(0x80007c4,"",uVar6,5);
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x616e655f70696f76 &&
                 CONCAT13(uStack_359,CONCAT12(uStack_35a,CONCAT11(cStack_35b,cStack_35c))) == 0x3d656c62) {
            _printk("","",&cStack_358);
            iVar3 = _segment.ehdr;
            if ((cStack_358 == '1') && (cStack_357 == '\0')) {
                _segment.ehdr = 0;
                if (iVar3 == 0) {
                    _printk(0x8000628,"");
                    arg2 = 1;
                }
                else {
                    *0x8000ad4 = 1;
                }
            }
            else if ((cStack_358 == '0') && (cStack_357 == '\0')) {
                *0x8000ad4 = 0;
            }
        }
        else if (CONCAT17(cStack_35d,CONCAT16(uStack_35e,CONCAT24(iStack_360,uStack_364))) == 0x6469755f70696f76 &&
                 cStack_35c == '=') {
            _printk("","",&cStack_35b);
            uVar2 = simple_strtoul(&cStack_35b,0,10);
            _segment.ehdr = CONCAT44(*0x8000004,uVar2);
        }
    }
    else {
code_r0x08001b4c:
        arg2 = -0xe;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return arg2;
    }
    __stack_chk_fail();
code_r0x08002194:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002198);
    (*pcVar1)();
}


// ===== sym.config_file_show @ 0x08002198 (size 276) =====

ulong sym.config_file_show(int64_t arg1)

{
    ulong *in_x18;
    uchar *puVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0x80);
    seq_printf(arg1,"",*puVar1);
    seq_printf(arg1,"",puVar1[1]);
    seq_puts(arg1,"");
    if (*(puVar1 + 2) != 0) {
        seq_printf(arg1,0x80001dd);
        iVar2 = 4;
        do {
            if (*(puVar1 + iVar2) == 0) break;
            seq_printf(arg1,0x8000376);
            iVar2 = iVar2 + 2;
        } while (iVar2 != 0x100);
    }
    seq_printf(arg1,0x800060e);
    seq_printf(arg1,"",*(puVar1 + 0x100));
    seq_printf(arg1,"",*(puVar1 + 0x102));
    seq_printf(arg1,"",puVar1[0x104]);
    seq_printf(arg1,"",*(puVar1 + 0x108));
    return 0;
}


// ===== sym.sla_interface_start @ 0x080022ac (size 952) =====

void sym.sla_interface_start(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint64_t extraout_x8;
    int64_t extraout_x9;
    int64_t iVar9;
    int64_t extraout_x10;
    uint64_t *extraout_x11;
    uint64_t *puVar10;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t *unaff_x20;
    code *unaff_x21;
    code *pcVar11;
    ulong *puVar12;
    ulong unaff_x30;
    ulong uStack_78;
    unkbyte6 Stack_70;
    ushort uStack_6a;
    unkbyte6 Stack_68;
    ulong uStack_60;
    unkbyte5 Stack_58;
    unkbyte3 Stack_53;
    unkbyte5 Stack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    Stack_50 = 0;
    uStack_60 = 0;
    Stack_58 = 0;
    Stack_53 = 0;
    Stack_68 = 0;
    uStack_78 = 0;
    Stack_70 = 0;
    uStack_6a = 0;
    if (arg1 == 0) {
        _printk(0x8000846,"");
        arg1 = unaff_x19;
    }
    else {
        piVar5 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
        unaff_x21 = obj.sla_iface_list;
        for (pcVar11 = _obj.sla_iface_list; pcVar11 != obj.sla_iface_list; pcVar11 = *pcVar11) {
            iVar4 = strcmp(arg1,pcVar11 + 0x30);
            if (iVar4 == 0) {
                if (pcVar11 != NULL) {
                    _raw_spin_unlock_irqrestore(obj.stats_spin_lock,piVar5);
                    uVar7 = 0x8000444;
                    goto code_r0x080023f0;
                }
                break;
            }
        }
        _raw_spin_unlock_irqrestore(obj.stats_spin_lock,piVar5);
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xa20,0x40);
        if (unaff_x20 != NULL) {
            piVar5 = unaff_x20 + 6;
            iVar6 = strscpy(piVar5,arg1,0x10);
            if (0x10 < iVar6) {
                _printk(0x8000668,"",arg1);
                goto code_r0x080025a8;
            }
            _printk(0x8000703,"",arg1);
            strscpy(&uStack_60,piVar5,0x15);
            strlcat(&uStack_60,"",0x15);
            strscpy(&uStack_78,piVar5,0x16);
            strlcat(&uStack_78,"",0x16);
            puVar12 = kmalloc_order_trace(0x5000,0xa20,3);
            unaff_x20[5] = puVar12;
            if (puVar12 != NULL) {
                memset(puVar12 + 2,0,0x4ff0);
                uVar8 = 0;
                iVar6 = 0x8000000000;
                iVar9 = -0x200000000;
                *puVar12 = 0x4ff686a7379;
                puVar12[1] = 0;
                goto code_r0x080024c4;
            }
            _printk(0x80004f3,"");
            goto code_r0x080025a8;
        }
        uVar7 = 0x8000357;
code_r0x080023f0:
        _printk(uVar7,"",arg1);
        unaff_x20 = piVar5;
    }
    do {
        while( true ) {
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_48) {
                return;
            }
            __stack_chk_fail();
            uVar8 = extraout_x8;
            iVar6 = extraout_x9;
            iVar9 = extraout_x10;
            puVar10 = extraout_x11;
            while( true ) {
                Hint_Prefetch(puVar10,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(puVar10,0x10);
                    if (bVar3) {
                        *puVar10 = *puVar10 | 0x1000;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                uVar1 = uVar8 + 0x1000;
                uVar8 = uVar1;
                if (4 < uVar1 >> 0xc) break;
                puVar12 = unaff_x20[5];
code_r0x080024c4:
                puVar10 = (iVar6 + ((uVar8 + puVar12) * 0x100 >> 8) >> 6 & 0x3ffffffffffffc0) + iVar9;
            }
            iVar6 = proc_create_data(&uStack_60,0x1a4,_segment.ehdr,obj.stats_fops,unaff_x20[5]);
            unaff_x20[2] = iVar6;
            uVar7 = _segment.ehdr;
            if (iVar6 != 0) break;
            _printk(0x8000521,"",arg1);
code_r0x080025a0:
            kfree(unaff_x20[5]);
code_r0x080025a8:
            kfree(unaff_x20);
        }
        unaff_x20[4] = 0;
        iVar6 = proc_create_data(&uStack_78,0x1a4,uVar7,obj.fops_u64,unaff_x20 + 4);
        unaff_x20[3] = iVar6;
        if (iVar6 == 0) {
            _printk(0x80002ed,"",arg1);
            proc_remove(unaff_x20[2]);
            goto code_r0x080025a0;
        }
        uVar7 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
        iVar6 = *unaff_x21;
        uVar8 = __list_add_valid(unaff_x20,unaff_x21,iVar6);
        if ((uVar8 & 1) != 0) {
            *(iVar6 + 8) = unaff_x20;
            *unaff_x20 = iVar6;
            unaff_x20[1] = unaff_x21;
            *unaff_x21 = unaff_x20;
        }
        _raw_spin_unlock_irqrestore(obj.stats_spin_lock,uVar7);
        _printk(0x8000588,"",arg1,unaff_x20);
    } while( true );
}


// ===== sym.sla_stats_disable @ 0x08002664 (size 544) =====

void sym.sla_stats_disable(void)

{
    uint32_t uVar1;
    code *pcVar2;
    uint64_t *puVar3;
    int64_t *piVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    code *pcVar10;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.simple_attr_read.cfi_jt == 0x0) {
        _printk("","");
    }
    else {
        _segment.ehdr = 0;
        uVar7 = _raw_spin_lock_irqsave(obj.stats_spin_lock);
        pcVar10 = _obj.sla_iface_list;
        if (_obj.sla_iface_list != obj.sla_iface_list) {
            do {
                pcVar2 = pcVar10 + 0x30;
                pcVar11 = *pcVar10;
                _printk(0x800074b,"",pcVar2);
                *(pcVar10 + 0x20) = 0;
                if (*(pcVar10 + 0x28) == 0) {
                    if (*(pcVar10 + 0x10) == 0) goto code_r0x080027b4;
code_r0x0800285c:
                    proc_remove();
                    iVar8 = *(pcVar10 + 0x18);
                }
                else {
                    memset(*(pcVar10 + 0x28),0,0x5000);
                    uVar9 = 0;
                    do {
                        puVar3 = (((uVar9 + *(pcVar10 + 0x28)) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) -
                                 0x200000000;
                        Hint_Prefetch(puVar3,2,0,1);
                        do {
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(puVar3,0x10);
                            if (bVar6) {
                                *puVar3 = *puVar3 & 0xffffffffffffefff;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        uVar1 = uVar9 + 0x1000;
                        uVar9 = uVar1;
                    } while (uVar1 < 0x5000);
                    kfree(*(pcVar10 + 0x28));
                    *(pcVar10 + 0x28) = 0;
                    if (*(pcVar10 + 0x10) != 0) goto code_r0x0800285c;
code_r0x080027b4:
                    iVar8 = *(pcVar10 + 0x18);
                }
                if (iVar8 != 0) {
                    proc_remove();
                }
                _printk(0x80003da,"",pcVar2);
                uVar9 = __list_del_entry_valid(pcVar10);
                if ((uVar9 & 1) != 0) {
                    iVar8 = *pcVar10;
                    piVar4 = *(pcVar10 + 8);
                    *(iVar8 + 8) = piVar4;
                    *piVar4 = iVar8;
                }
                *pcVar10 = -0x2152ffffffffff00;
                *(pcVar10 + 8) = -0x2152fffffffffede;
                _printk(0x80005e2,"",pcVar2,pcVar10);
                kfree(pcVar10);
                pcVar10 = pcVar11;
            } while (pcVar11 != obj.sla_iface_list);
        }
        _raw_spin_unlock_irqrestore(obj.stats_spin_lock,uVar7);
        _printk(0x80003fa,"");
        sym.pkt_hlist_deinit();
    }
    return;
}


// ===== sym.pkt_hlist_print @ 0x08002884 (size 144) =====

void sym.pkt_hlist_print(void)

{
    ulong *in_x18;
    uint64_t uVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    do {
        for (piVar2 = *(obj.sla_iface_list + uVar1 * 8); piVar2 != NULL; piVar2 = *piVar2) {
            _printk("","",uVar1 & 0xffffffff,*(piVar2 + 2));
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 != 0x100);
    return;
}


// ===== sym.pkt_hlist_deinit @ 0x0800291c (size 272) =====

void sym.pkt_hlist_deinit(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = 0;
    do {
        if (*(obj.sla_iface_list + iVar5 * 8) != NULL) {
            piVar2 = *(obj.sla_iface_list + iVar5 * 8);
            piVar4 = NULL;
            do {
                piVar3 = piVar2;
                if (piVar4 != NULL) {
                    _raw_spin_lock(obj.list_spin_lock);
                    _segment.ehdr = _segment.ehdr + 1;
                    iVar1 = *piVar4;
                    piVar2 = piVar4[1];
                    *piVar2 = iVar1;
                    if (iVar1 != 0) {
                        *(iVar1 + 8) = piVar2;
                    }
                    piVar4[1] = -0x2152fffffffffede;
                    _raw_spin_unlock(obj.list_spin_lock);
                    kfree(piVar4);
                }
                piVar2 = *piVar3;
                piVar4 = piVar3;
            } while (*piVar3 != NULL);
            _raw_spin_lock(obj.list_spin_lock);
            _segment.ehdr = _segment.ehdr + 1;
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *piVar2 = iVar1;
            if (iVar1 != 0) {
                *(iVar1 + 8) = piVar2;
            }
            piVar3[1] = -0x2152fffffffffede;
            _raw_spin_unlock(obj.list_spin_lock);
            kfree(piVar3);
        }
        iVar5 = iVar5 + 1;
    } while (iVar5 != 0x100);
    return;
}


// ===== sym._copy_from_user @ 0x08002a34 (size 376) =====

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
        if ((_single_release >> 0x18 & 1) == 0) {
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
        if ((_single_release >> 0x18 & 1) == 0) {
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


// ===== sym.stats_read @ 0x08002be8 (size 60) =====

void sym.stats_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_read_from_buffer(arg2,arg3,arg4,*(arg1 + 0xd8),0x5000);
    return;
}


// ===== sym.stats_map @ 0x08002c24 (size 136) =====

int sym.stats_map(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd8) == 0) {
        iVar4 = -1;
    }
    else {
        iVar3 = (*(arg1 + 0xd8) << 8) >> 8;
        uVar1 = iVar3 + 0x8000000000;
        uVar2 = _seq_lseek + uVar1;
        if (uVar1 >> 0x26 != 0) {
            uVar2 = iVar3 - _generic_file_llseek;
        }
        iVar4 = remap_pfn_range(arg2,*arg2,uVar2 >> 0xc,*(arg2 + 8) - *arg2,0x68000000000fc3);
        iVar4 = -(iVar4 != 0);
    }
    return iVar4;
}


// ===== sym.fops_u64_open @ 0x08002cac (size 92) =====

void sym.fops_u64_open(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    *(arg1 + 0x2d8) = uVar1;
    simple_attr_open(arg1,arg2,sym.procfs_u64_get.845d66b70732310f8ef58d9942856ab3.cfi_jt,
                     sym.procfs_u64_set.845d66b70732310f8ef58d9942856ab3.cfi_jt,"");
    return;
}


// ===== sym.procfs_u64_get @ 0x08002d08 (size 24) =====

ulong sym.procfs_u64_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *arg1;
    return 0;
}


// ===== sym.procfs_u64_set @ 0x08002d20 (size 24) =====

ulong sym.procfs_u64_set(int64_t arg1,int64_t arg2)

{
    *arg1 = arg2;
    return 0;
}


// ===== sym.sla_voip_file_open @ 0x08002d38 (size 68) =====

void sym.sla_voip_file_open(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = PDE_DATA();
    single_open(arg1,sym.sla_voip_file_show.845d66b70732310f8ef58d9942856ab3.cfi_jt,uVar1);
    return;
}


// ===== sym.sla_voip_file_read @ 0x08002d7c (size 196) =====

ulong sym.sla_voip_file_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_50;
    unkbyte5 Stack_48;
    unkbyte3 Stack_43;
    unkbyte5 Stack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    Stack_40 = 0;
    uStack_50 = 0;
    Stack_48 = 0;
    Stack_43 = 0;
    sprintf(&uStack_50,"",_obj.voip_state & 0xffffffff,*0x8000aec);
    _printk("",&uStack_50);
    _obj.voip_state = 0;
    uVar2 = strlen(&uStack_50);
    uVar2 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_50,uVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    uVar2 = __stack_chk_fail();
    *extraout_x18 = sym.sla_voip_file_show;
    seq_printf(uVar2,"",_obj.voip_state & 0xffffffff);
    seq_printf(uVar2,"",*0x8000aec);
    return 0;
}


// ===== sym.sla_voip_file_show @ 0x08002e40 (size 92) =====

ulong sym.sla_voip_file_show(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(arg1,"",_obj.voip_state);
    seq_printf(arg1,"",*0x8000aec);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002e9c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002ee0

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
    //switch table (4 cases) at 0x80001d8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002ef4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002f04 (size 380) =====

int sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("","");
    iVar1 = nf_register_net_hooks(init_net,reloc.sla_ipv4_in.845d66b70732310f8ef58d9942856ab3.cfi_jt,2);
    if (iVar1 < 0) {
        uVar3 = 0x80006d0;
    }
    else {
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        iVar2 = proc_mkdir(0x800047f,0);
        if (iVar2 == 0) {
            iVar1 = 1;
            uVar3 = 0x80007fe;
            _segment.ehdr = 0;
        }
        else {
            _segment.ehdr = iVar2;
            memset(reloc.simple_attr_read.cfi_jt,0,0x10c);
            reloc.simple_attr_read.cfi_jt = 0x1bb0050;
            *0x8000ad0 = 0x51000;
            _segment.ehdr = proc_create_data("",0x1a4,iVar2,obj.config_fops,reloc.simple_attr_read.cfi_jt);
            if (_segment.ehdr == 0) {
                iVar1 = 1;
                uVar3 = 0x8000492;
                _segment.ehdr = 0;
            }
            else {
                _obj.voip_state = 0;
                _segment.ehdr = proc_create_data("",0x1a4,_segment.ehdr,obj.sla_voip_fops);
                if (_segment.ehdr != 0) {
                    return 0;
                }
                iVar1 = 1;
                uVar3 = 0x80001ef;
                _segment.ehdr = 0;
            }
        }
    }
    _printk(uVar3,"");
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08003080 (size 84) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("");
    nf_unregister_net_hooks(init_net,reloc.sla_ipv4_in.845d66b70732310f8ef58d9942856ab3.cfi_jt,2);
    sym.sla_stats_disable();
    proc_remove(_segment.ehdr);
    return;
}

