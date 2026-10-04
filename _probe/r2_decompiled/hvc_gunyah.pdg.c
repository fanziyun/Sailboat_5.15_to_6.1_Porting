// decompiled from hvc_gunyah by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 424) =====

//WARNING: Switch with 1 destination removed at 0x0800192c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x158dac47227bc661) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x76dcee3d5289268d) {
                uVar2 = 0x80011c8;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) goto code_r0x080018ec;
                uVar2 = 0x80011e8;
            }
        }
        else if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x80011c0;
        }
        else {
            if (arg1 != 0x3236203519f56f4) goto code_r0x080018ec;
            uVar2 = 0x80011d8;
        }
    }
    else if (arg1 < 0x77fb77e58e7a44ef) {
        if (arg1 == 0x158dac47227bc661) {
            uVar2 = 0x80011d0;
        }
        else {
            if (arg1 != 0x4d9b659d4ffea3d6) goto code_r0x080018ec;
            uVar2 = 0x80011e0;
        }
    }
    else if (arg1 == 0x77fb77e58e7a44ef) {
        uVar2 = 0x80011f0;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        uVar2 = 0x80011b0;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080018ec;
        uVar2 = 0x80011b8;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080018ec:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001940);
    (*pcVar1)();
}


// ===== sym.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011b0 (size 8) =====

void sym.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (ulong param_1,int64_t param_2,ushort *param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uVar6 = 0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_3c = 0;
    if (param_2 == 0x56100080) {
        iVar3 = gh_rm_get_vm_name(*param_3,&uStack_3c);
        if (iVar3 == 0) {
            uVar6 = _raw_spin_lock_irqsave(obj.fifo_lock);
            if (4 < uStack_3c) goto code_r0x080018e4;
            uVar5 = __kfifo_in(uStack_3c * 0x870 + 0x8000050,param_3 + 2,param_3[1]);
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar6);
            if (uVar5 < 0) {
                iVar3 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.6,"gh_hvc_notify_console_chars");
                if (iVar3 != 0) {
                    _printk(0x8000172,param_3[1],uStack_3c,uVar5);
                }
            }
            else if ((uVar5 < param_3[1]) &&
                    (iVar3 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.8,"gh_hvc_notify_console_chars"),
                    iVar3 != 0)) {
                _printk(0x800024b,param_3[1] - uVar5,uStack_3c);
            }
            if (4 < uStack_3c) goto code_r0x080018e4;
            iVar3 = hvc_poll(*(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt +
                              uStack_3c * 0x870));
            if (iVar3 != 0) {
                hvc_kick();
            }
        }
        else {
            iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs,"gh_hvc_notify_console_chars");
            if (iVar4 != 0) {
                _printk(0x8000221,*param_3,iVar3);
            }
        }
        uVar6 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar6);
code_r0x080018e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80018e8);
    (*pcVar2)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011b8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gh_rm_unregister_notifier(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    iVar1 = -0x2a30;
    do {
        if (*(obj.fifo_lock + iVar1) != 0) {
            hvc_remove();
            *(obj.fifo_lock + iVar1) = 0;
        }
        iVar1 = iVar1 + 0x870;
    } while (iVar1 != 0);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011c0 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    puVar3 = 0x8000898;
    do {
        puVar3[-3] = 0xfffffffe0;
        puVar3[-0x107] = puVar3 + -0x106;
        puVar3[-0x84] = puVar3 + -0x83;
        *(puVar3 + -0x10a) = iVar2;
        puVar3[-0x109] = 0;
        puVar3[-0x108] = 0x1000003ff;
        puVar3[-0x86] = 0;
        iVar2 = iVar2 + 1;
        puVar3[-0x85] = 0x1000003ff;
        puVar3[-2] = puVar3 + -2;
        puVar3[-1] = puVar3 + -2;
        *puVar3 = sym.gh_hvc_put_work_fn.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3 = puVar3 + 0x10e;
    } while (iVar2 != 5);
    pcVar6 = reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uVar4 = 0;
    do {
        uVar1 = hvc_alloc(uVar4 + 0x474e5948,uVar4 & 0xffffffff,
                          reloc.gh_hvc_get_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x100);
        *pcVar6 = uVar1;
        if (0xfffffffffffff000 < uVar1 && uVar1 != 0) {
            if (0 < uVar4) goto code_r0x08001a60;
            goto code_r0x08001a90;
        }
        uVar4 = uVar4 + 1;
        pcVar6 = pcVar6 + 0x870;
    } while (uVar4 != 5);
    uVar4 = gh_rm_register_notifier(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    uVar1 = uVar4 & 0xffffffff;
    if (uVar4 != 0) {
        uVar4 = 5;
code_r0x08001a60:
        uVar5 = uVar4 & 0xffffffff;
        pcVar6 = reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt + (uVar4 - 1) * 0x870;
        do {
            if (4 < uVar4 - 1) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8001ab4);
                (*pcVar6)();
            }
            uVar5 = uVar5 - 1;
            hvc_remove(*pcVar6);
            *pcVar6 = 0;
            pcVar6 = pcVar6 + -0x870;
        } while (uVar5 != 0);
    }
code_r0x08001a90:
    return uVar1 & 0xffffffff;
}


// ===== sym.gh_hvc_notify_del.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011c8 (size 8) =====

void sym.gh_hvc_notify_del.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,uint32_t param_2,ushort *param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ushort *puVar8;
    ulong unaff_x30;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ushort auStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    auStack_3c[0] = 0;
    if (param_2 < 5) {
        puVar8 = param_2;
        iVar1 = param_2 * 0x870 + 0x8000880;
        uVar6 = cancel_work_sync(iVar1);
        if ((uVar6 & 1) != 0) {
            sym.gh_hvc_put_work_fn(iVar1);
        }
        iVar3 = gh_rm_get_vmid(puVar8,auStack_3c);
        if (iVar3 == 0) {
            iVar3 = gh_rm_console_close(auStack_3c[0]);
            if (iVar3 != 0) {
                param_3 = puVar8;
                _printk(0x8000294,"gh_hvc_notify_del",puVar8,iVar3);
            }
            *(puVar8 * 0x870 + 0x8000050) = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.gh_hvc_notify_console_chars;
    pcStack_68 = sym.gh_hvc_notify_console_chars;
    iVar1 = sp_el0;
    uVar7 = 0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    if (extraout_x1 == 0x56100080) {
        iVar3 = gh_rm_get_vm_name(*param_3,&uStack_7c);
        if (iVar3 == 0) {
            uVar7 = _raw_spin_lock_irqsave(obj.fifo_lock);
            if (4 < uStack_7c) goto code_r0x080018e4;
            uVar5 = __kfifo_in(uStack_7c * 0x870 + 0x8000050,param_3 + 2,param_3[1]);
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar7);
            if (uVar5 < 0) {
                iVar3 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.6,"gh_hvc_notify_console_chars");
                if (iVar3 != 0) {
                    _printk(0x8000172,param_3[1],uStack_7c,uVar5);
                }
            }
            else if ((uVar5 < param_3[1]) &&
                    (iVar3 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.8,"gh_hvc_notify_console_chars"),
                    iVar3 != 0)) {
                _printk(0x800024b,param_3[1] - uVar5,uStack_7c);
            }
            if (4 < uStack_7c) goto code_r0x080018e4;
            iVar3 = hvc_poll(*(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt +
                              uStack_7c * 0x870));
            if (iVar3 != 0) {
                hvc_kick();
            }
        }
        else {
            iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs,"gh_hvc_notify_console_chars");
            if (iVar4 != 0) {
                _printk(0x8000221,*param_3,iVar3);
            }
        }
        uVar7 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x080018e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80018e8);
    (*pcVar2)();
}


// ===== sym.gh_hvc_put_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d0 (size 8) =====

int sym.gh_hvc_put_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int param_1,ulong param_2,uint param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = param_1 + 0xb8b1a6b8;
    if (uVar1 < 5) {
        uVar3 = _raw_spin_lock_irqsave(obj.fifo_lock);
        iVar2 = __kfifo_in(uVar1 * 0x870 + 0x8000468,param_2,param_3);
        _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar3);
        if (0 < iVar2) {
            queue_work_on(0x20,_gh_rm_get_vmid,uVar1 * 0x870 + 0x8000880);
        }
    }
    else {
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.gh_hvc_flush.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d8 (size 8) =====

uint64_t sym.gh_hvc_flush.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int param_1,uint64_t param_2,ushort *param_3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t extraout_x1;
    int64_t extraout_x1_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ushort *puVar8;
    ushort *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint32_t uStack_dc;
    int64_t iStack_d8;
    ulong **ppuStack_d0;
    code *pcStack_c8;
    ushort auStack_9c [2];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    ushort auStack_5c [2];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ushort auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar6 = 0;
    auStack_2c[0] = 0;
    if ((param_2 & 1) != 0) {
        uVar3 = param_1 + 0xb8b1a6b8;
        if (uVar3 < 5) {
            uVar6 = gh_rm_get_vmid(uVar3,auStack_2c);
            if (uVar6 == 0) {
                iVar1 = uVar3 * 0x870 + 0x8000880;
                uVar6 = cancel_work_sync(iVar1);
                if ((uVar6 & 1) != 0) {
                    sym.gh_hvc_put_work_fn(iVar1);
                }
                uVar6 = gh_rm_console_flush(auStack_2c[0]);
            }
        }
        else {
            uVar6 = 0xffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
    *extraout_x18 = sym.gh_hvc_notify_add;
    pcStack_48 = sym.gh_hvc_notify_add;
    iVar1 = sp_el0;
    puVar9 = extraout_x1 & 0xffffffff;
    iStack_58 = *(iVar1 + 0x5e0);
    auStack_5c[0] = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uVar3 = gh_rm_get_vmid(puVar9,auStack_5c);
    if (uVar3 == 0) {
        uVar6 = gh_rm_console_open(auStack_5c[0]);
        uVar6 = uVar6 & 0xffffffff;
        puVar9 = param_3;
    }
    else {
        uVar6 = uVar3;
        _printk(0x80001db,"gh_hvc_notify_add",puVar9,uVar6);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    auVar10 = __stack_chk_fail();
    uVar6 = auVar10._0_8_;
    *extraout_x18_00 = sym.gh_hvc_notify_del;
    pcStack_88 = sym.gh_hvc_notify_del;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    auStack_9c[0] = 0;
    ppuStack_90 = &puStack_50;
    if (auVar10._8_4_ < 5) {
        puVar8 = auVar10._8_8_ & 0xffffffff;
        iVar1 = (auVar10._8_8_ & 0xffffffff) * 0x870 + 0x8000880;
        uVar6 = cancel_work_sync(iVar1);
        if ((uVar6 & 1) != 0) {
            sym.gh_hvc_put_work_fn(iVar1);
        }
        uVar6 = gh_rm_get_vmid(puVar8,auStack_9c);
        if (uVar6 == 0) {
            uVar6 = gh_rm_console_close(auStack_9c[0]);
            if (uVar6 != 0) {
                puVar9 = puVar8;
                uVar6 = _printk(0x8000294,"gh_hvc_notify_del",puVar8,uVar6 & 0xffffffff);
            }
            *(puVar8 * 0x870 + 0x8000050) = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.gh_hvc_notify_console_chars;
    pcStack_c8 = sym.gh_hvc_notify_console_chars;
    iVar1 = sp_el0;
    uVar6 = 0;
    iStack_d8 = *(iVar1 + 0x5e0);
    uStack_dc = 0;
    ppuStack_d0 = &ppuStack_90;
    if (extraout_x1_00 == 0x56100080) {
        iVar4 = gh_rm_get_vm_name(*puVar9,&uStack_dc);
        if (iVar4 == 0) {
            uVar7 = _raw_spin_lock_irqsave(obj.fifo_lock);
            if (4 < uStack_dc) goto code_r0x080018e4;
            uVar3 = __kfifo_in(uStack_dc * 0x870 + 0x8000050,puVar9 + 2,puVar9[1]);
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar7);
            if (uVar3 < 0) {
                iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.6,"gh_hvc_notify_console_chars");
                if (iVar4 != 0) {
                    _printk(0x8000172,puVar9[1],uStack_dc,uVar3);
                }
            }
            else if ((uVar3 < puVar9[1]) &&
                    (iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.8,"gh_hvc_notify_console_chars"),
                    iVar4 != 0)) {
                _printk(0x800024b,puVar9[1] - uVar3,uStack_dc);
            }
            if (4 < uStack_dc) goto code_r0x080018e4;
            iVar4 = hvc_poll(*(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt +
                              uStack_dc * 0x870));
            if (iVar4 != 0) {
                hvc_kick();
            }
        }
        else {
            iVar5 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs,"gh_hvc_notify_console_chars");
            if (iVar5 != 0) {
                _printk(0x8000221,*puVar9,iVar4);
            }
        }
        uVar6 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_d8) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
code_r0x080018e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80018e8);
    (*pcVar2)();
}


// ===== sym.gh_hvc_get_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e0 (size 8) =====

uint sym.gh_hvc_get_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int param_1,ulong param_2,uint param_3)

{
    uint uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 + 0xb8b1a6b8U < 5) {
        uVar2 = _raw_spin_lock_irqsave(obj.fifo_lock);
        uVar1 = __kfifo_out((param_1 + 0xb8b1a6b8U) * 0x870 + 0x8000050,param_2,param_3);
        _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar2);
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_hvc_put_work_fn.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e8 (size 8) =====

uint64_t sym.gh_hvc_put_work_fn.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,uint64_t param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar7;
    uint32_t *puVar8;
    ulong unaff_x30;
    ushort auStack_134 [2];
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
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
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    puVar8 = param_1 + -0x838;
    iStack_48 = *(iVar2 + 0x5e0);
    auStack_134[0] = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uVar4 = gh_rm_get_vmid(*puVar8,auStack_134);
    if (uVar4 == 0) {
        piVar7 = param_1 + -0x418;
        if (*piVar7 != *(param_1 + -0x414)) {
            do {
                uVar6 = _raw_spin_lock_irqsave(obj.fifo_lock);
                param_3 = 0xe4;
                uVar5 = __kfifo_out(piVar7,&uStack_130,0xe4);
                uVar4 = _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar6);
                if (0 < uVar5) {
                    param_3 = uVar5 & 0xffffffff;
                    uVar4 = gh_rm_console_write(auStack_134[0],&uStack_130,param_3);
                    if (uVar4 != 0) {
                        if ((obj.gh_hvc_put_work_fn.__already_done.1 & 1) == 0) {
                            uVar1 = *puVar8;
                            uVar6 = 0x8000128;
                            obj.gh_hvc_put_work_fn.__already_done.1 = 0x1;
                            goto code_r0x080012a4;
                        }
                        break;
                    }
                }
            } while (*piVar7 != *(param_1 + -0x414));
        }
    }
    else if ((obj.gh_hvc_put_work_fn.__already_done & 1) == 0) {
        uVar1 = *puVar8;
        uVar6 = 0x80001a7;
        obj.gh_hvc_put_work_fn.__already_done = 0x1;
code_r0x080012a4:
        param_3 = uVar1;
        uVar4 = _printk(uVar6,"gh_hvc_put_work_fn",param_3,uVar4 & 0xffffffff);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_48) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = sym.gh_hvc_get_chars;
        if (iVar3 + 0xb8b1a6b8U < 5) {
            uVar6 = _raw_spin_lock_irqsave(obj.fifo_lock);
            uVar4 = __kfifo_out((iVar3 + 0xb8b1a6b8U) * 0x870 + 0x8000050,extraout_x1,param_3 & 0xffffffff);
            uVar4 = uVar4 & 0xffffffff;
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar6);
        }
        else {
            uVar4 = 0xffffffea;
        }
        return uVar4;
    }
    return uVar4;
}


// ===== sym.gh_hvc_notify_add.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011f0 (size 8) =====

uint64_t sym.gh_hvc_notify_add.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,uint64_t param_2,ushort *param_3)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ushort *puVar8;
    ushort *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    ushort auStack_6c [2];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ushort auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    puVar9 = param_2 & 0xffffffff;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0;
    uVar3 = gh_rm_get_vmid(puVar9,auStack_2c);
    if (uVar3 == 0) {
        uVar6 = gh_rm_console_open(auStack_2c[0]);
        uVar6 = uVar6 & 0xffffffff;
        puVar9 = param_3;
    }
    else {
        uVar6 = uVar3;
        _printk(0x80001db,"gh_hvc_notify_add",puVar9,uVar6);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    auVar10 = __stack_chk_fail();
    uVar6 = auVar10._0_8_;
    *extraout_x18 = sym.gh_hvc_notify_del;
    pcStack_58 = sym.gh_hvc_notify_del;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    auStack_6c[0] = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    if (auVar10._8_4_ < 5) {
        puVar8 = auVar10._8_8_ & 0xffffffff;
        iVar1 = (auVar10._8_8_ & 0xffffffff) * 0x870 + 0x8000880;
        uVar6 = cancel_work_sync(iVar1);
        if ((uVar6 & 1) != 0) {
            sym.gh_hvc_put_work_fn(iVar1);
        }
        uVar6 = gh_rm_get_vmid(puVar8,auStack_6c);
        if (uVar6 == 0) {
            uVar6 = gh_rm_console_close(auStack_6c[0]);
            if (uVar6 != 0) {
                puVar9 = puVar8;
                uVar6 = _printk(0x8000294,"gh_hvc_notify_del",puVar8,uVar6 & 0xffffffff);
            }
            *(puVar8 * 0x870 + 0x8000050) = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.gh_hvc_notify_console_chars;
    pcStack_98 = sym.gh_hvc_notify_console_chars;
    iVar1 = sp_el0;
    uVar6 = 0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_ac = 0;
    ppuStack_a0 = &puStack_60;
    if (extraout_x1 == 0x56100080) {
        iVar4 = gh_rm_get_vm_name(*puVar9,&uStack_ac);
        if (iVar4 == 0) {
            uVar7 = _raw_spin_lock_irqsave(obj.fifo_lock);
            if (4 < uStack_ac) goto code_r0x080018e4;
            uVar3 = __kfifo_in(uStack_ac * 0x870 + 0x8000050,puVar9 + 2,puVar9[1]);
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar7);
            if (uVar3 < 0) {
                iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.6,"gh_hvc_notify_console_chars");
                if (iVar4 != 0) {
                    _printk(0x8000172,puVar9[1],uStack_ac,uVar3);
                }
            }
            else if ((uVar3 < puVar9[1]) &&
                    (iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.8,"gh_hvc_notify_console_chars"),
                    iVar4 != 0)) {
                _printk(0x800024b,puVar9[1] - uVar3,uStack_ac);
            }
            if (4 < uStack_ac) goto code_r0x080018e4;
            iVar4 = hvc_poll(*(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt +
                              uStack_ac * 0x870));
            if (iVar4 != 0) {
                hvc_kick();
            }
        }
        else {
            iVar5 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs,"gh_hvc_notify_console_chars");
            if (iVar5 != 0) {
                _printk(0x8000221,*puVar9,iVar4);
            }
        }
        uVar6 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
code_r0x080018e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80018e8);
    (*pcVar2)();
}


// ===== sym.gh_hvc_put_work_fn @ 0x080011f8 (size 404) =====

uint64_t sym.gh_hvc_put_work_fn(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong extraout_x1;
    uint64_t in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar7;
    uint32_t *puVar8;
    ulong unaff_x30;
    ushort auStack_134 [2];
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
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
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    puVar8 = arg1 + -0x838;
    iStack_48 = *(iVar2 + 0x5e0);
    auStack_134[0] = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uVar4 = gh_rm_get_vmid(*puVar8,auStack_134);
    if (uVar4 == 0) {
        piVar7 = arg1 + -0x418;
        if (*piVar7 != *(arg1 + -0x414)) {
            do {
                uVar6 = _raw_spin_lock_irqsave(obj.fifo_lock);
                in_x2 = 0xe4;
                uVar5 = __kfifo_out(piVar7,&uStack_130,0xe4);
                uVar4 = _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar6);
                if (0 < uVar5) {
                    in_x2 = uVar5 & 0xffffffff;
                    uVar4 = gh_rm_console_write(auStack_134[0],&uStack_130,in_x2);
                    if (uVar4 != 0) {
                        if ((obj.gh_hvc_put_work_fn.__already_done.1 & 1) == 0) {
                            uVar1 = *puVar8;
                            uVar6 = 0x8000128;
                            obj.gh_hvc_put_work_fn.__already_done.1 = 0x1;
                            goto code_r0x080012a4;
                        }
                        break;
                    }
                }
            } while (*piVar7 != *(arg1 + -0x414));
        }
    }
    else if ((obj.gh_hvc_put_work_fn.__already_done & 1) == 0) {
        uVar1 = *puVar8;
        uVar6 = 0x80001a7;
        obj.gh_hvc_put_work_fn.__already_done = 0x1;
code_r0x080012a4:
        in_x2 = uVar1;
        uVar4 = _printk(uVar6,"gh_hvc_put_work_fn",in_x2,uVar4 & 0xffffffff);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_48) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = sym.gh_hvc_get_chars;
        if (iVar3 + 0xb8b1a6b8U < 5) {
            uVar6 = _raw_spin_lock_irqsave(obj.fifo_lock);
            uVar4 = __kfifo_out((iVar3 + 0xb8b1a6b8U) * 0x870 + 0x8000050,extraout_x1,in_x2 & 0xffffffff);
            uVar4 = uVar4 & 0xffffffff;
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar6);
        }
        else {
            uVar4 = 0xffffffea;
        }
        return uVar4;
    }
    return uVar4;
}


// ===== sym.gh_hvc_get_chars @ 0x0800138c (size 164) =====

uint sym.gh_hvc_get_chars(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 + 0xb8b1a6b8;
    if (uVar1 < 5) {
        uVar3 = _raw_spin_lock_irqsave(obj.fifo_lock);
        uVar2 = __kfifo_out(uVar1 * 0x870 + 0x8000050,arg2,arg3 & 0xffffffff);
        _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar3);
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.gh_hvc_put_chars @ 0x08001430 (size 200) =====

int sym.gh_hvc_put_chars(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 + 0xb8b1a6b8;
    if (uVar1 < 5) {
        uVar3 = _raw_spin_lock_irqsave(obj.fifo_lock);
        iVar2 = __kfifo_in(uVar1 * 0x870 + 0x8000468,arg2,arg3 & 0xffffffff);
        _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar3);
        if (0 < iVar2) {
            queue_work_on(0x20,_gh_rm_get_vmid,uVar1 * 0x870 + 0x8000880);
        }
    }
    else {
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.gh_hvc_flush @ 0x080014f8 (size 192) =====

uint64_t sym.gh_hvc_flush(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t in_x1;
    uint64_t extraout_x1;
    int64_t extraout_x1_00;
    ushort *in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ushort *puVar8;
    ushort *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint32_t uStack_dc;
    int64_t iStack_d8;
    ulong **ppuStack_d0;
    code *pcStack_c8;
    ushort auStack_9c [2];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    ushort auStack_5c [2];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ushort auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar6 = 0;
    auStack_2c[0] = 0;
    if ((in_x1 & 1) != 0) {
        uVar3 = arg1 + 0xb8b1a6b8;
        if (uVar3 < 5) {
            uVar6 = gh_rm_get_vmid(uVar3,auStack_2c);
            if (uVar6 == 0) {
                iVar1 = uVar3 * 0x870 + 0x8000880;
                uVar6 = cancel_work_sync(iVar1);
                if ((uVar6 & 1) != 0) {
                    sym.gh_hvc_put_work_fn(iVar1);
                }
                uVar6 = gh_rm_console_flush(auStack_2c[0]);
            }
        }
        else {
            uVar6 = 0xffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
    *extraout_x18 = sym.gh_hvc_notify_add;
    pcStack_48 = sym.gh_hvc_notify_add;
    iVar1 = sp_el0;
    puVar9 = extraout_x1 & 0xffffffff;
    iStack_58 = *(iVar1 + 0x5e0);
    auStack_5c[0] = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    uVar3 = gh_rm_get_vmid(puVar9,auStack_5c);
    if (uVar3 == 0) {
        uVar6 = gh_rm_console_open(auStack_5c[0]);
        uVar6 = uVar6 & 0xffffffff;
        puVar9 = in_x2;
    }
    else {
        uVar6 = uVar3;
        _printk(0x80001db,"gh_hvc_notify_add",puVar9,uVar6);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    auVar10 = __stack_chk_fail();
    uVar6 = auVar10._0_8_;
    *extraout_x18_00 = sym.gh_hvc_notify_del;
    pcStack_88 = sym.gh_hvc_notify_del;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    auStack_9c[0] = 0;
    ppuStack_90 = &puStack_50;
    if (auVar10._8_4_ < 5) {
        puVar8 = auVar10._8_8_ & 0xffffffff;
        iVar1 = (auVar10._8_8_ & 0xffffffff) * 0x870 + 0x8000880;
        uVar6 = cancel_work_sync(iVar1);
        if ((uVar6 & 1) != 0) {
            sym.gh_hvc_put_work_fn(iVar1);
        }
        uVar6 = gh_rm_get_vmid(puVar8,auStack_9c);
        if (uVar6 == 0) {
            uVar6 = gh_rm_console_close(auStack_9c[0]);
            if (uVar6 != 0) {
                puVar9 = puVar8;
                uVar6 = _printk(0x8000294,"gh_hvc_notify_del",puVar8,uVar6 & 0xffffffff);
            }
            *(puVar8 * 0x870 + 0x8000050) = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.gh_hvc_notify_console_chars;
    pcStack_c8 = sym.gh_hvc_notify_console_chars;
    iVar1 = sp_el0;
    uVar6 = 0;
    iStack_d8 = *(iVar1 + 0x5e0);
    uStack_dc = 0;
    ppuStack_d0 = &ppuStack_90;
    if (extraout_x1_00 == 0x56100080) {
        iVar4 = gh_rm_get_vm_name(*puVar9,&uStack_dc);
        if (iVar4 == 0) {
            uVar7 = _raw_spin_lock_irqsave(obj.fifo_lock);
            if (4 < uStack_dc) goto code_r0x080018e4;
            uVar3 = __kfifo_in(uStack_dc * 0x870 + 0x8000050,puVar9 + 2,puVar9[1]);
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar7);
            if (uVar3 < 0) {
                iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.6,"gh_hvc_notify_console_chars");
                if (iVar4 != 0) {
                    _printk(0x8000172,puVar9[1],uStack_dc,uVar3);
                }
            }
            else if ((uVar3 < puVar9[1]) &&
                    (iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.8,"gh_hvc_notify_console_chars"),
                    iVar4 != 0)) {
                _printk(0x800024b,puVar9[1] - uVar3,uStack_dc);
            }
            if (4 < uStack_dc) goto code_r0x080018e4;
            iVar4 = hvc_poll(*(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt +
                              uStack_dc * 0x870));
            if (iVar4 != 0) {
                hvc_kick();
            }
        }
        else {
            iVar5 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs,"gh_hvc_notify_console_chars");
            if (iVar5 != 0) {
                _printk(0x8000221,*puVar9,iVar4);
            }
        }
        uVar6 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_d8) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
code_r0x080018e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80018e8);
    (*pcVar2)();
}


// ===== sym.gh_hvc_notify_add @ 0x080015b8 (size 160) =====

uint64_t sym.gh_hvc_notify_add(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t extraout_x1;
    ushort *in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ushort *puVar8;
    ushort *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    ushort auStack_6c [2];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ushort auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    puVar9 = arg1 & 0xffffffff;
    iStack_28 = *(iVar1 + 0x5e0);
    auStack_2c[0] = 0;
    uVar3 = gh_rm_get_vmid(puVar9,auStack_2c);
    if (uVar3 == 0) {
        uVar6 = gh_rm_console_open(auStack_2c[0]);
        uVar6 = uVar6 & 0xffffffff;
        puVar9 = in_x2;
    }
    else {
        uVar6 = uVar3;
        _printk(0x80001db,"gh_hvc_notify_add",puVar9,uVar6);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    auVar10 = __stack_chk_fail();
    uVar6 = auVar10._0_8_;
    *extraout_x18 = sym.gh_hvc_notify_del;
    pcStack_58 = sym.gh_hvc_notify_del;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    auStack_6c[0] = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    if (auVar10._8_4_ < 5) {
        puVar8 = auVar10._8_8_ & 0xffffffff;
        iVar1 = (auVar10._8_8_ & 0xffffffff) * 0x870 + 0x8000880;
        uVar6 = cancel_work_sync(iVar1);
        if ((uVar6 & 1) != 0) {
            sym.gh_hvc_put_work_fn(iVar1);
        }
        uVar6 = gh_rm_get_vmid(puVar8,auStack_6c);
        if (uVar6 == 0) {
            uVar6 = gh_rm_console_close(auStack_6c[0]);
            if (uVar6 != 0) {
                puVar9 = puVar8;
                uVar6 = _printk(0x8000294,"gh_hvc_notify_del",puVar8,uVar6 & 0xffffffff);
            }
            *(puVar8 * 0x870 + 0x8000050) = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.gh_hvc_notify_console_chars;
    pcStack_98 = sym.gh_hvc_notify_console_chars;
    iVar1 = sp_el0;
    uVar6 = 0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uStack_ac = 0;
    ppuStack_a0 = &puStack_60;
    if (extraout_x1 == 0x56100080) {
        iVar4 = gh_rm_get_vm_name(*puVar9,&uStack_ac);
        if (iVar4 == 0) {
            uVar7 = _raw_spin_lock_irqsave(obj.fifo_lock);
            if (4 < uStack_ac) goto code_r0x080018e4;
            uVar3 = __kfifo_in(uStack_ac * 0x870 + 0x8000050,puVar9 + 2,puVar9[1]);
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar7);
            if (uVar3 < 0) {
                iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.6,"gh_hvc_notify_console_chars");
                if (iVar4 != 0) {
                    _printk(0x8000172,puVar9[1],uStack_ac,uVar3);
                }
            }
            else if ((uVar3 < puVar9[1]) &&
                    (iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.8,"gh_hvc_notify_console_chars"),
                    iVar4 != 0)) {
                _printk(0x800024b,puVar9[1] - uVar3,uStack_ac);
            }
            if (4 < uStack_ac) goto code_r0x080018e4;
            iVar4 = hvc_poll(*(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt +
                              uStack_ac * 0x870));
            if (iVar4 != 0) {
                hvc_kick();
            }
        }
        else {
            iVar5 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs,"gh_hvc_notify_console_chars");
            if (iVar5 != 0) {
                _printk(0x8000221,*puVar9,iVar4);
            }
        }
        uVar6 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
code_r0x080018e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80018e8);
    (*pcVar2)();
}


// ===== sym.gh_hvc_notify_del @ 0x08001658 (size 224) =====

void sym.gh_hvc_notify_del(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ushort *puVar8;
    int64_t extraout_x1;
    ushort *in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ushort auStack_3c [2];
    int64_t iStack_38;
    
    puVar8 = arg2;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    auStack_3c[0] = 0;
    if (arg2 < 5) {
        iVar1 = arg2 * 0x870 + 0x8000880;
        uVar6 = cancel_work_sync(iVar1);
        if ((uVar6 & 1) != 0) {
            sym.gh_hvc_put_work_fn(iVar1);
        }
        arg1 = gh_rm_get_vmid(puVar8,auStack_3c);
        if (arg1 == 0) {
            arg1 = gh_rm_console_close(auStack_3c[0]);
            if (arg1 != 0) {
                in_x2 = puVar8;
                arg1 = _printk(0x8000294,"gh_hvc_notify_del",puVar8,arg1 & 0xffffffff);
            }
            *(puVar8 * 0x870 + 0x8000050) = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(arg1);
    *extraout_x18 = sym.gh_hvc_notify_console_chars;
    pcStack_68 = sym.gh_hvc_notify_console_chars;
    iVar1 = sp_el0;
    uVar7 = 0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    if (extraout_x1 == 0x56100080) {
        iVar3 = gh_rm_get_vm_name(*in_x2,&uStack_7c);
        if (iVar3 == 0) {
            uVar7 = _raw_spin_lock_irqsave(obj.fifo_lock);
            if (4 < uStack_7c) goto code_r0x080018e4;
            uVar5 = __kfifo_in(uStack_7c * 0x870 + 0x8000050,in_x2 + 2,in_x2[1]);
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar7);
            if (uVar5 < 0) {
                iVar3 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.6,"gh_hvc_notify_console_chars");
                if (iVar3 != 0) {
                    _printk(0x8000172,in_x2[1],uStack_7c,uVar5);
                }
            }
            else if ((uVar5 < in_x2[1]) &&
                    (iVar3 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.8,"gh_hvc_notify_console_chars"),
                    iVar3 != 0)) {
                _printk(0x800024b,in_x2[1] - uVar5,uStack_7c);
            }
            if (4 < uStack_7c) goto code_r0x080018e4;
            iVar3 = hvc_poll(*(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt +
                              uStack_7c * 0x870));
            if (iVar3 != 0) {
                hvc_kick();
            }
        }
        else {
            iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs,"gh_hvc_notify_console_chars");
            if (iVar4 != 0) {
                _printk(0x8000221,*in_x2,iVar3);
            }
        }
        uVar7 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return;
    }
    __stack_chk_fail(uVar7);
code_r0x080018e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80018e8);
    (*pcVar2)();
}


// ===== sym.gh_hvc_notify_console_chars @ 0x08001738 (size 432) =====

void sym.gh_hvc_notify_console_chars(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uVar6 = 0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_3c = 0;
    if (arg2 == 0x56100080) {
        iVar3 = gh_rm_get_vm_name(*arg3,&uStack_3c);
        if (iVar3 == 0) {
            uVar6 = _raw_spin_lock_irqsave(obj.fifo_lock);
            if (4 < uStack_3c) goto code_r0x080018e4;
            uVar5 = __kfifo_in(uStack_3c * 0x870 + 0x8000050,arg3 + 4,*(arg3 + 2));
            _raw_spin_unlock_irqrestore(obj.fifo_lock,uVar6);
            if (uVar5 < 0) {
                iVar3 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.6,"gh_hvc_notify_console_chars");
                if (iVar3 != 0) {
                    _printk(0x8000172,*(arg3 + 2),uStack_3c,uVar5);
                }
            }
            else if ((uVar5 < *(arg3 + 2)) &&
                    (iVar3 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs.8,"gh_hvc_notify_console_chars"),
                    iVar3 != 0)) {
                _printk(0x800024b,*(arg3 + 2) - uVar5,uStack_3c);
            }
            if (4 < uStack_3c) goto code_r0x080018e4;
            iVar3 = hvc_poll(*(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt +
                              uStack_3c * 0x870));
            if (iVar3 != 0) {
                hvc_kick();
            }
        }
        else {
            iVar4 = ___ratelimit(obj.gh_hvc_notify_console_chars._rs,"gh_hvc_notify_console_chars");
            if (iVar4 != 0) {
                _printk(0x8000221,*arg3,iVar3);
            }
        }
        uVar6 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar6);
code_r0x080018e4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80018e8);
    (*pcVar2)();
}


// ===== sym.__cfi_check_fail @ 0x080018e8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800192c

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
    //switch table (4 cases) at 0x80000d8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001940);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001944 (size 368) =====

uint64_t sym.init_module(void)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *in_x18;
    uint64_t uVar4;
    uint64_t uVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    puVar3 = 0x8000898;
    do {
        puVar3[-3] = 0xfffffffe0;
        puVar3[-0x107] = puVar3 + -0x106;
        puVar3[-0x84] = puVar3 + -0x83;
        *(puVar3 + -0x10a) = iVar2;
        puVar3[-0x109] = 0;
        puVar3[-0x108] = 0x1000003ff;
        puVar3[-0x86] = 0;
        iVar2 = iVar2 + 1;
        puVar3[-0x85] = 0x1000003ff;
        puVar3[-2] = puVar3 + -2;
        puVar3[-1] = puVar3 + -2;
        *puVar3 = sym.gh_hvc_put_work_fn.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        puVar3 = puVar3 + 0x10e;
    } while (iVar2 != 5);
    pcVar6 = reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    uVar4 = 0;
    do {
        uVar1 = hvc_alloc(uVar4 + 0x474e5948,uVar4 & 0xffffffff,
                          reloc.gh_hvc_get_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x100);
        *pcVar6 = uVar1;
        if (0xfffffffffffff000 < uVar1 && uVar1 != 0) {
            if (0 < uVar4) goto code_r0x08001a60;
            goto code_r0x08001a90;
        }
        uVar4 = uVar4 + 1;
        pcVar6 = pcVar6 + 0x870;
    } while (uVar4 != 5);
    uVar4 = gh_rm_register_notifier(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    uVar1 = uVar4 & 0xffffffff;
    if (uVar4 != 0) {
        uVar4 = 5;
code_r0x08001a60:
        uVar5 = uVar4 & 0xffffffff;
        pcVar6 = reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt + (uVar4 - 1) * 0x870;
        do {
            if (4 < uVar4 - 1) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x8001ab4);
                (*pcVar6)();
            }
            uVar5 = uVar5 - 1;
            hvc_remove(*pcVar6);
            *pcVar6 = 0;
            pcVar6 = pcVar6 + -0x870;
        } while (uVar5 != 0);
    }
code_r0x08001a90:
    return uVar1 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x08001ab4 (size 100) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gh_rm_unregister_notifier(reloc.gh_hvc_notify_console_chars.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    iVar1 = -0x2a30;
    do {
        if (*(obj.fifo_lock + iVar1) != 0) {
            hvc_remove();
            *(obj.fifo_lock + iVar1) = 0;
        }
        iVar1 = iVar1 + 0x870;
    } while (iVar1 != 0);
    return;
}

