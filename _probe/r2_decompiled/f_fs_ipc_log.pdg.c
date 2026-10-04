// decompiled from f_fs_ipc_log by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 212) =====

//WARNING: Switch with 1 destination removed at 0x08007fb4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 != -0x550b9e52359ac614) {
            if ((arg1 == -0x16ccd154cd488791) && ((pcVar1 + -0x80030f8 >> 3 | pcVar1 << 0x3d) < 0x2d)) {
                return;
            }
            goto code_r0x08007f74;
        }
        pcVar2 = sym.create_ipc_context_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08007f74;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08007f74:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007fc8);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x080030e0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = alloc_workqueue("ipc_wq",0xa0002,1);
    if (_segment.ehdr == 0) {
        _printk(0x8001cc8,"kretprobe_init");
        uVar2 = 0xfffffff4;
    }
    else {
        iVar4 = 0x20;
        pcVar3 = obj.ipc_wq;
        do {
            iVar1 = register_kretprobe(pcVar3);
            if (iVar1 < 0) {
                _printk(0x8001b6c,*(pcVar3 + 0x30),iVar1);
            }
            iVar4 = iVar4 + -1;
            pcVar3 = pcVar3 + 0xb0;
        } while (iVar4 != 0);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080030e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    destroy_workqueue(CONCAT44(*0x8000004,_segment.ehdr));
    if (0 < _segment.ehdr) {
        iVar3 = 0;
        pcVar1 = obj.ipc_log_s;
        iVar2 = _segment.ehdr;
        do {
            if (iVar3 == 9) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8008160);
                (*pcVar1)();
            }
            if (*(pcVar1 + 8) != 0) {
                ipc_log_context_destroy(*pcVar1);
                iVar2 = _segment.ehdr;
                *pcVar1 = 0;
            }
            iVar3 = iVar3 + 1;
            pcVar1 = pcVar1 + 0x40;
        } while (iVar3 < iVar2);
    }
    iVar3 = 0x20;
    pcVar1 = obj.ipc_wq;
    do {
        unregister_kretprobe(pcVar1);
        if (0 < *(pcVar1 + 0x94)) {
            _printk(0x8001f59,*(pcVar1 + 0x94),*(pcVar1 + 0x30));
        }
        iVar3 = iVar3 + -1;
        pcVar1 = pcVar1 + 0xb0;
    } while (iVar3 != 0);
    return;
}


// ===== sym.create_ipc_context_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080030f0 (size 8) =====

void sym.create_ipc_context_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    char acStack_70 [8];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = param_1 + 0x38;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    acStack_70[0] = str.usb_ffs_[0];
    acStack_70[1] = str.usb_ffs_[1];
    acStack_70[2] = str.usb_ffs_[2];
    acStack_70[3] = str.usb_ffs_[3];
    acStack_70[4] = str.usb_ffs_[4];
    acStack_70[5] = str.usb_ffs_[5];
    acStack_70[6] = str.usb_ffs_[6];
    acStack_70[7] = str.usb_ffs_[7];
    uStack_68 = 0;
    if ((_segment.ehdr < 1) || (*0x8000308 == '\0')) {
code_r0x08007e1c:
        if (uVar1 < 9) {
            strlcat(acStack_70,iVar5,0x32);
            uVar4 = ipc_log_context_create(10,acStack_70,0);
            if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
                _printk(0x8001eb1,"create_ipc_context_work",iVar5);
            }
            else {
                uVar6 = _segment.ehdr;
                if (8 < _segment.ehdr) {
code_r0x08007f6c:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8007f70);
                    (*pcVar2)();
                }
                *(obj.ipc_log_s + uVar6 * 0x40) = uVar4;
                if (0x240 < (uVar6 << 6 | 8)) goto code_r0x08007f68;
                *(uVar6 * 0x40 + 0x8000300) = *(param_1 + 0x30);
                strscpy(uVar6 * 0x40 + 0x8000308,iVar5,0x29);
                _segment.ehdr = _segment.ehdr + 1;
            }
        }
        else {
code_r0x08007f54:
            _printk(0x8001f2f);
        }
    }
    else {
        iVar3 = strcmp(0x8000308,iVar5);
        if (iVar3 != 0) {
            if ((uVar1 == 1) || (*0x8000348 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000348,iVar5);
            if (iVar3 == 0) {
                iVar5 = 1;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 2) || (*0x8000388 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000388,iVar5);
            if (iVar3 == 0) {
                iVar5 = 2;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 3) || (*0x80003c8 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x80003c8,iVar5);
            if (iVar3 == 0) {
                iVar5 = 3;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 4) || (*0x8000408 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000408,iVar5);
            if (iVar3 == 0) {
                iVar5 = 4;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 5) || (*0x8000448 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000448,iVar5);
            if (iVar3 == 0) {
                iVar5 = 5;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 6) || (*0x8000488 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000488,iVar5);
            if (iVar3 == 0) {
                iVar5 = 6;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 7) || (*0x80004c8 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x80004c8,iVar5);
            if (iVar3 == 0) {
                iVar5 = 7;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 8) || (*0x8000508 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000508,iVar5);
            if (iVar3 == 0) {
                iVar5 = 8;
                goto code_r0x08007f00;
            }
            if (uVar1 != 9) goto code_r0x08007f6c;
            goto code_r0x08007f54;
        }
        iVar5 = 0;
code_r0x08007f00:
        *(iVar5 * 0x40 + 0x8000300) = *(param_1 + 0x30);
    }
    kfree(param_1);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x08007f68:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x8007f6c);
    (*pcVar2)();
}


// ===== sym.entry_ffs_ep0_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080030f8 (size 8) =====

ulong sym.entry_ffs_ep0_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_2 + 8) + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08004f08:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08004f18;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08004f08;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08004f08;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08004f08;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08004f08;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08004f08;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08004f08;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08004f08;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08004f08;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004f5c);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08004f18:
    ipc_log_string(uVar2,"%s: state %d setup_state %d flags %lu opened %d",*(**(param_1 + 0x18) + 0x30),
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.exit_ffs_ep0_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003100 (size 8) =====

ulong sym.exit_ffs_ep0_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(param_1 + 0x30) + 0xd8);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08005260:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08005270;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08005260;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08005260;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08005260;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08005260;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08005260;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08005260;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08005260;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08005260;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80052b4);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005270:
    iVar3 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar3 = *param_2;
    }
    ipc_log_string(uVar2,"%s: exit: mask %u",*(**(param_1 + 0x18) + 0x30),iVar3);
    return 0;
}


// ===== sym.exit_functionfs_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003108 (size 8) =====

ulong sym.exit_functionfs_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(param_1 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x080064d0:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080064e0;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x080064d0;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x080064d0;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x080064d0;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x080064d0;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x080064d0;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x080064d0;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x080064d0;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x080064d0;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x800652c);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080064e0:
    iVar3 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar3 = *param_2;
    }
    ipc_log_string(uVar2,"%s: functionfs_bind returned %d",*(**(param_1 + 0x18) + 0x30),iVar3);
    return 0;
}


// ===== sym.entry_ffs_closed.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003110 (size 8) =====

ulong sym.entry_ffs_closed.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *param_2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08007c0c:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08007c1c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08007c0c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08007c0c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08007c0c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08007c0c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08007c0c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08007c0c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08007c0c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08007c0c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007c54);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08007c1c:
    *(param_1 + 0x30) = iVar4;
    ipc_log_string(uVar2,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.exit_ffs_func_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003118 (size 8) =====

ulong sym.exit_ffs_func_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x38);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x080076e4:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080076f4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x080076e4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x080076e4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x080076e4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x080076e4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x080076e4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x080076e4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x080076e4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x080076e4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007730);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080076f4:
    ipc_log_string(uVar2,"%s: exit: state %d setup_state %d flag %lu",*(**(param_1 + 0x18) + 0x30),*(iVar4 + 0x70),
                   *(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_ep0_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003120 (size 8) =====

ulong sym.exit_ffs_ep0_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x30) + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x080049ec:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080049fc;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x080049ec;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x080049ec;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x080049ec;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x080049ec;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x080049ec;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x080049ec;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x080049ec;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x080049ec;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004a50);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080049fc:
    iVar3 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar3 = *param_2;
    }
    ipc_log_string(uVar2,"%s: exit:ret %d state %d setup_state %d flags %lu",*(**(param_1 + 0x18) + 0x30),iVar3,
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_aio_cancel.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003128 (size 8) =====

ulong sym.entry_ffs_aio_cancel.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(**param_2 + 0xd8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x08005920:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08005930;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x08005920;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x08005920;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x08005920;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x08005920;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x08005920;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x08005920;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x08005920;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x08005920;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005974);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005930:
    *(param_1 + 0x30) = *param_2;
    iVar3 = *(iVar3 + 0x30);
    ipc_log_string(uVar2,"%s: enter:state %d setup_state %d flag %lu",*(**(param_1 + 0x18) + 0x30),*(iVar3 + 0x70),
                   *(iVar3 + 0x74),*(iVar3 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_func_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003130 (size 8) =====

ulong sym.exit_ffs_func_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int *param_2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x30);
    if (iVar2 == 0) {
        return 0;
    }
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
            iVar2 = 0;
code_r0x080069ec:
            uVar3 = *(obj.ipc_log_s + iVar2 * 0x40);
            goto joined_r0x08006974;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                iVar2 = 1;
                goto code_r0x080069ec;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                    iVar2 = 2;
                    goto code_r0x080069ec;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                        iVar2 = 3;
                        goto code_r0x080069ec;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                            iVar2 = 4;
                            goto code_r0x080069ec;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                                iVar2 = 5;
                                goto code_r0x080069ec;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                                    iVar2 = 6;
                                    goto code_r0x080069ec;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                                        iVar2 = 7;
                                        goto code_r0x080069ec;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                                            iVar2 = 8;
                                            goto code_r0x080069ec;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006a08);
                                            (*pcVar1)();
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
    uVar3 = 0;
joined_r0x08006974:
    if (*param_2 < 0) {
        ipc_log_string(uVar3,"%s: exit: ret %d",*(**(param_1 + 0x18) + 0x30));
    }
    return 0;
}


// ===== sym.exit_ffs_epfile_read_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003138 (size 8) =====

ulong sym.exit_ffs_epfile_read_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**(param_1 + 0x30) + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08003dcc:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08003ddc;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08003dcc;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08003dcc;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08003dcc;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08003dcc;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08003dcc;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08003dcc;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08003dcc;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08003dcc;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003e28);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08003ddc:
    iVar3 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar3 = *param_2;
    }
    ipc_log_string(uVar2,"%s: exit: ret %zd",*(**(param_1 + 0x18) + 0x30),iVar3);
    return 0;
}


// ===== sym.entry_ffs_user_copy_worker.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003140 (size 8) =====

ulong sym.entry_ffs_user_copy_worker.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    char *pcVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *param_2;
    iVar2 = *(*(iVar5 + 0x38) + 0x54);
    if (iVar2 == 0) {
        iVar2 = *(*(iVar5 + 0x38) + 0x58);
    }
    if (0 < _segment.ehdr) {
        iVar6 = *(iVar5 + 0x58);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
            iVar6 = 0;
code_r0x080033bc:
            uVar4 = *(obj.ipc_log_s + iVar6 * 0x40);
            goto code_r0x080033cc;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                iVar6 = 1;
                goto code_r0x080033bc;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                    iVar6 = 2;
                    goto code_r0x080033bc;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                        iVar6 = 3;
                        goto code_r0x080033bc;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                            iVar6 = 4;
                            goto code_r0x080033bc;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                iVar6 = 5;
                                goto code_r0x080033bc;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                    iVar6 = 6;
                                    goto code_r0x080033bc;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                        iVar6 = 7;
                                        goto code_r0x080033bc;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                            iVar6 = 8;
                                            goto code_r0x080033bc;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar3 = SoftwareBreakpoint(0x5512,0x8003420);
                                            (*pcVar3)();
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
    uVar4 = 0;
code_r0x080033cc:
    *(param_1 + 0x30) = iVar5;
    pcVar1 = "write";
    if (*(iVar5 + -0x4f) != '\0') {
        pcVar1 = "read";
    }
    ipc_log_string(uVar4,"%s: enter: ret %d for %s",*(**(param_1 + 0x18) + 0x30),iVar2,pcVar1);
    return 0;
}


// ===== sym.entry_ffs_ep0_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003148 (size 8) =====

ulong sym.entry_ffs_ep0_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*param_2 + 0x2d8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08004d60:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08004d70;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08004d60;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08004d60;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08004d60;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08004d60;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08004d60;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08004d60;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08004d60;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08004d60;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004db4);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08004d70:
    ipc_log_string(uVar2,"%s: state %d setup_state %d flags %lu opened %d",*(**(param_1 + 0x18) + 0x30),
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_data_closed.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003150 (size 8) =====

ulong sym.entry_ffs_data_closed.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *param_2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08006194:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080061a4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08006194;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08006194;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08006194;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08006194;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08006194;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08006194;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08006194;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08006194;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80061e8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080061a4:
    ipc_log_string(uVar2,"%s: state %d setup_state %d flag %lu opened %d",*(**(param_1 + 0x18) + 0x30),
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_epfile_async_io_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003158 (size 8) =====

ulong sym.entry_ffs_epfile_async_io_complete.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(*(param_2 + 8) + 0x38) + 0xa8);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x080038cc:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080038dc;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x080038cc;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x080038cc;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x080038cc;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x080038cc;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x080038cc;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x080038cc;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x080038cc;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x080038cc;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003910);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080038dc:
    ipc_log_string(uVar2,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry_ffs_data_opened.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003160 (size 8) =====

ulong sym.entry_ffs_data_opened.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *param_2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08005fe4:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08005ff4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08005fe4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08005fe4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08005fe4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08005fe4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08005fe4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08005fe4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08005fe4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08005fe4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006040);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005ff4:
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu opened %d ref %d",*(**(param_1 + 0x18) + 0x30),
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c),*(iVar4 + 0x68));
    return 0;
}


// ===== sym.entry_ffs_func_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003168 (size 8) =====

ulong sym.entry_ffs_func_set_alt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_2[2];
    if (0 < _segment.ehdr) {
        iVar4 = *(*param_2 + -0x28);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x08006ed8:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08006ee8;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x08006ed8;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x08006ed8;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x08006ed8;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x08006ed8;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x08006ed8;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x08006ed8;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x08006ed8;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x08006ed8;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006f24);
                                            (*pcVar1)();
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
    uVar3 = 0;
code_r0x08006ee8:
    *(param_1 + 0x30) = *param_2 + -0x38;
    ipc_log_string(uVar3,"%s: enter: alt %d",*(**(param_1 + 0x18) + 0x30),iVar2);
    return 0;
}


// ===== sym.entry_ffs_func_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003170 (size 8) =====

ulong sym.entry_ffs_func_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_2 + 8) + -0x28);
    iVar5 = *(*(param_2 + 8) + 200);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08007884:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08007894;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08007884;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08007884;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08007884;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08007884;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08007884;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08007884;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08007884;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08007884;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80078d8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08007894:
    *(param_1 + 0x38) = iVar4;
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu refcnt %u",*(**(param_1 + 0x18) + 0x30),
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar5 + 0xc0));
    return 0;
}


// ===== sym.entry_ffs_func_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003178 (size 8) =====

ulong sym.entry_ffs_func_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*param_2 + -0x28);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08007074:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08007084;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08007074;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08007074;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08007074;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08007074;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08007074;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08007074;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08007074;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08007074;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80070b8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08007084:
    ipc_log_string(uVar2,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry_ffs_func_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003180 (size 8) =====

ulong sym.entry_ffs_func_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*param_2 + -0x28);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x080073c0:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080073d0;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x080073c0;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x080073c0;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x080073c0;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x080073c0;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x080073c0;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x080073c0;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x080073c0;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x080073c0;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007404);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080073d0:
    ipc_log_string(uVar2,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.exit___ffs_ep0_queue_wait.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003188 (size 8) =====

ulong sym.exit___ffs_ep0_queue_wait.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x30);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x0800434c:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x0800435c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x0800434c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x0800434c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x0800434c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x0800434c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x0800434c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x0800434c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x0800434c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x0800434c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004398);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x0800435c:
    ipc_log_string(uVar2,"%s: exit: state %d setup_state %d flags %lu",*(**(param_1 + 0x18) + 0x30),*(iVar4 + 0x70),
                   *(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_epfile_write_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003190 (size 8) =====

ulong sym.exit_ffs_epfile_write_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**(param_1 + 0x30) + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08003a68:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08003a78;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08003a68;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08003a68;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08003a68;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08003a68;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08003a68;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08003a68;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08003a68;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08003a68;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003ad4);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08003a78:
    iVar3 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar3 = *param_2;
    }
    if ((iVar3 != -0x211) && (iVar3 != -0xc)) {
        ipc_log_string(uVar2,"%s: exit: ret %zd",*(**(param_1 + 0x18) + 0x30));
    }
    return 0;
}


// ===== sym.entry_ffs_ep0_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003198 (size 8) =====

ulong sym.entry_ffs_ep0_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*param_2 + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x080050b0:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080050c0;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x080050b0;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x080050b0;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x080050b0;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x080050b0;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x080050b0;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x080050b0;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x080050b0;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x080050b0;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005104);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080050c0:
    ipc_log_string(uVar2,"%s: state %d setup_state %d flags %lu opened %d",*(**(param_1 + 0x18) + 0x30),
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_epfile_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031a0 (size 8) =====

ulong sym.entry_ffs_epfile_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*param_2 + 0x2d8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x080055b4:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x080055c4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x080055b4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x080055b4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x080055b4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x080055b4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x080055b4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x080055b4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x080055b4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x080055b4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005610);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080055c4:
    iVar4 = *(iVar3 + 0x30);
    ipc_log_string(uVar2,"%s: %s: state %d setup_state %d flag %lu opened %u",*(**(param_1 + 0x18) + 0x30),
                   iVar3 + 0x50,*(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.exit_ffs_aio_cancel.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031a8 (size 8) =====

ulong sym.exit_ffs_aio_cancel.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**(param_1 + 0x30) + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08005774:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08005784;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08005774;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08005774;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08005774;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08005774;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08005774;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08005774;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08005774;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08005774;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80057c8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005784:
    iVar3 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar3 = *param_2;
    }
    ipc_log_string(uVar2,"%s: exit: mask %u",*(**(param_1 + 0x18) + 0x30),iVar3);
    return 0;
}


// ===== sym.entry_ffs_reset_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031b0 (size 8) =====

ulong sym.entry_ffs_reset_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *param_2 + -400;
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08006d40:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08006d50;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08006d40;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08006d40;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08006d40;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08006d40;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08006d40;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08006d40;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08006d40;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08006d40;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006d84);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08006d50:
    ipc_log_string(uVar2,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.exit_ffs_ep0_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031b8 (size 8) =====

ulong sym.exit_ffs_ep0_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x30) + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08004684:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08004694;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08004684;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08004684;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08004684;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08004684;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08004684;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08004684;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08004684;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08004684;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80046f8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08004694:
    iVar3 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar3 = *param_2;
    }
    if ((iVar3 != -0x2b) && (iVar3 != -0x16)) {
        ipc_log_string(uVar2,"%s: exit:ret %zd state %d setup_state %d flags %lu",*(**(param_1 + 0x18) + 0x30),iVar3
                       ,*(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0));
    }
    return 0;
}


// ===== sym.entry_ffs_func_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031c0 (size 8) =====

ulong sym.entry_ffs_func_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*param_2 + -0x28);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08007554:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08007564;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08007554;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08007554;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08007554;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08007554;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08007554;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08007554;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08007554;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08007554;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007598);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08007564:
    ipc_log_string(uVar2,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry___ffs_ep0_queue_wait.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031c8 (size 8) =====

ulong sym.entry___ffs_ep0_queue_wait.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *param_2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x080044e4:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080044f4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x080044e4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x080044e4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x080044e4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x080044e4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x080044e4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x080044e4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x080044e4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x080044e4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004534);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080044f4:
    *(param_1 + 0x30) = iVar4;
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flags %lu",*(**(param_1 + 0x18) + 0x30),*(iVar4 + 0x70)
                   ,*(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_epfile_io.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031d0 (size 8) =====

ulong sym.exit_ffs_epfile_io.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x30) + 0xd8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x0800357c:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x0800358c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x0800357c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x0800357c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x0800357c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x0800357c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x0800357c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x0800357c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x0800357c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x0800357c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80035d4);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x0800358c:
    iVar4 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar4 = *param_2;
    }
    ipc_log_string(uVar2,"%s: exit: %s ret %zd",*(**(param_1 + 0x18) + 0x30),iVar3 + 0x50,iVar4);
    return 0;
}


// ===== sym.entry_ffs_epfile_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031d8 (size 8) =====

ulong sym.entry_ffs_epfile_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*param_2 + 0x2d8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x08005ac8:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08005ad8;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x08005ac8;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x08005ac8;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x08005ac8;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x08005ac8;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x08005ac8;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x08005ac8;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x08005ac8;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x08005ac8;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005b24);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005ad8:
    iVar4 = *(iVar3 + 0x30);
    ipc_log_string(uVar2,"%s: %s: state %d setup_state %d flag %lu opened %u",*(**(param_1 + 0x18) + 0x30),
                   iVar3 + 0x50,*(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_epfile_write_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031e0 (size 8) =====

ulong sym.entry_ffs_epfile_write_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**param_2 + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08003c2c:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08003c3c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08003c2c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08003c2c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08003c2c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08003c2c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08003c2c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08003c2c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08003c2c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08003c2c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003c74);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08003c3c:
    *(param_1 + 0x30) = *param_2;
    ipc_log_string(uVar2,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry_ffs_func_eps_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031e8 (size 8) =====

ulong sym.entry_ffs_func_eps_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*param_2 + 0x10);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08006818:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08006828;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08006818;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08006818;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08006818;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08006818;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08006818;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08006818;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08006818;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08006818;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006868);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08006828:
    iVar3 = *(*param_2 + 0x10);
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu",*(**(param_1 + 0x18) + 0x30),*(iVar3 + 0x70),
                   *(iVar3 + 0x74),*(iVar3 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_ep0_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031f0 (size 8) =====

ulong sym.entry_ffs_ep0_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = param_2[2];
    iVar5 = *(*param_2 + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar4 = 0;
code_r0x0800484c:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x0800485c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar4 = 1;
                goto code_r0x0800484c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar4 = 2;
                    goto code_r0x0800484c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar4 = 3;
                        goto code_r0x0800484c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar4 = 4;
                            goto code_r0x0800484c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar4 = 5;
                                goto code_r0x0800484c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar4 = 6;
                                    goto code_r0x0800484c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar4 = 7;
                                        goto code_r0x0800484c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar4 = 8;
                                            goto code_r0x0800484c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x800489c);
                                            (*pcVar1)();
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
    uVar3 = 0;
code_r0x0800485c:
    *(param_1 + 0x30) = *param_2;
    ipc_log_string(uVar3,"%s: enter:len %zu state %d setup_state %d flags %lu",*(**(param_1 + 0x18) + 0x30),iVar2,
                   *(iVar5 + 0x70),*(iVar5 + 0x74),*(iVar5 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_epfile_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080031f8 (size 8) =====

ulong sym.exit_ffs_epfile_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x30) + 0xd8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x08005c84:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08005c94;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x08005c84;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x08005c84;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x08005c84;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x08005c84;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x08005c84;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x08005c84;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x08005c84;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x08005c84;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005cdc);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005c94:
    iVar4 = *param_2;
    if ((param_2[0x21] & 0x1fU) != 0x10) {
        iVar4 = *param_2;
    }
    ipc_log_string(uVar2,"%s: exit: %s: ret %d\n",*(**(param_1 + 0x18) + 0x30),iVar3 + 0x50,iVar4);
    return 0;
}


// ===== sym.entry_ffs_ep0_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003200 (size 8) =====

ulong sym.entry_ffs_ep0_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*param_2 + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08005404:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08005414;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08005404;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08005404;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08005404;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08005404;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08005404;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08005404;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08005404;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08005404;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x800545c);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005414:
    *(param_1 + 0x30) = *param_2;
    ipc_log_string(uVar2,"%s: state %d setup_state %d flags %lu opened %d",*(**(param_1 + 0x18) + 0x30),
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_ep0_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003208 (size 8) =====

ulong sym.entry_ffs_ep0_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = param_2[2];
    iVar5 = *(*param_2 + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar4 = 0;
code_r0x08004ba4:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08004bb4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar4 = 1;
                goto code_r0x08004ba4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar4 = 2;
                    goto code_r0x08004ba4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar4 = 3;
                        goto code_r0x08004ba4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar4 = 4;
                            goto code_r0x08004ba4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar4 = 5;
                                goto code_r0x08004ba4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar4 = 6;
                                    goto code_r0x08004ba4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar4 = 7;
                                        goto code_r0x08004ba4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar4 = 8;
                                            goto code_r0x08004ba4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004c10);
                                            (*pcVar1)();
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
    uVar3 = 0;
code_r0x08004bb4:
    *(param_1 + 0x30) = *param_2;
    uVar6 = uVar2 / 0xc;
    if (*(iVar5 + 0x7c) <= uVar6) {
        uVar6 = *(iVar5 + 0x7c);
    }
    ipc_log_string(uVar3,"%s: enter:len %zu state %d setup_state %d flags %lu n %zu",*(**(param_1 + 0x18) + 0x30),
                   uVar2,*(iVar5 + 0x70),*(iVar5 + 0x74),*(iVar5 + 0xa0),uVar6);
    return 0;
}


// ===== sym.entry_ffs_epfile_read_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003210 (size 8) =====

ulong sym.entry_ffs_epfile_read_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**param_2 + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08003f80:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08003f90;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08003f80;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08003f80;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08003f80;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08003f80;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08003f80;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08003f80;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08003f80;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08003f80;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003fc8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08003f90:
    *(param_1 + 0x30) = *param_2;
    ipc_log_string(uVar2,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry_functionfs_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003218 (size 8) =====

ulong sym.entry_functionfs_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *param_2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08006678:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08006688;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08006678;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08006678;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08006678;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08006678;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08006678;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08006678;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08006678;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08006678;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80066c8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08006688:
    *(param_1 + 0x30) = iVar4;
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu",*(**(param_1 + 0x18) + 0x30),*(iVar4 + 0x70),
                   *(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_closed.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003220 (size 8) =====

ulong sym.exit_ffs_closed.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    char *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x30);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
            iVar4 = 0;
code_r0x08007a6c:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            uVar5 = *(iVar6 + 0xa0);
            goto joined_r0x080079e4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                iVar4 = 1;
                goto code_r0x08007a6c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                    iVar4 = 2;
                    goto code_r0x08007a6c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                        iVar4 = 3;
                        goto code_r0x08007a6c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                            iVar4 = 4;
                            goto code_r0x08007a6c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                iVar4 = 5;
                                goto code_r0x08007a6c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                    iVar4 = 6;
                                    goto code_r0x08007a6c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                        iVar4 = 7;
                                        goto code_r0x08007a6c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                            iVar4 = 8;
                                            goto code_r0x08007a6c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007ab8);
                                            (*pcVar1)();
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
    uVar3 = 0;
    uVar5 = *(iVar6 + 0xa0);
joined_r0x080079e4:
    if ((uVar5 >> 1 & 1) == 0) {
        if ((((*(iVar6 + 0xd0) != 0) && (iVar6 = *(*(iVar6 + 0xd0) + 8), iVar6 != 0)) && (*(iVar6 + 0xc4) == '\0')) &&
           ((*(iVar6 + 0x30) != 0 && (*(iVar6 + 0x1c) != 0)))) {
            return 0;
        }
        iVar6 = **(param_1 + 0x18);
        pcVar2 = "%s: exit error";
    }
    else {
        iVar6 = **(param_1 + 0x18);
        pcVar2 = "%s: unreg gadget done";
    }
    ipc_log_string(uVar3,pcVar2,*(iVar6 + 0x30));
    return 0;
}


// ===== sym.entry_ffs_sb_fill.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003228 (size 8) =====

ulong sym.entry_ffs_sb_fill.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *puVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(*(param_2 + 8) + 0x40) + 0x20);
    puVar1 = kmem_cache_alloc_trace(_ipc_log_string,0xb20,0x68);
    if (puVar1 != NULL) {
        *puVar1 = 0xfffffffe0;
        puVar1[1] = puVar1 + 1;
        puVar1[2] = puVar1 + 1;
        puVar1[3] = sym.create_ipc_context_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        strscpy(puVar1 + 7,*(iVar2 + 200),0x29);
        puVar1[6] = iVar2;
        queue_work_on(0x20,_segment.ehdr,puVar1);
    }
    return 0;
}


// ===== sym.entry_ffs_func_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003230 (size 8) =====

ulong sym.entry_ffs_func_setup.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    uchar *puVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_2[1];
    iVar5 = *(*param_2 + -0x28);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar4 = 0;
code_r0x0800720c:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x0800721c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar4 = 1;
                goto code_r0x0800720c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar4 = 2;
                    goto code_r0x0800720c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar4 = 3;
                        goto code_r0x0800720c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar4 = 4;
                            goto code_r0x0800720c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar4 = 5;
                                goto code_r0x0800720c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar4 = 6;
                                    goto code_r0x0800720c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar4 = 7;
                                        goto code_r0x0800720c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar4 = 8;
                                            goto code_r0x0800720c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar2 = SoftwareBreakpoint(0x5512,0x8007270);
                                            (*pcVar2)();
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
    uVar3 = 0;
code_r0x0800721c:
    ipc_log_string(uVar3,"%s: enter: state %d reqtype=%02x req=%02x wv=%04x wi=%04x wl=%04x",
                   *(**(param_1 + 0x18) + 0x30),*(iVar5 + 0x70),*puVar1,puVar1[1],*(puVar1 + 2),*(puVar1 + 4),
                   *(puVar1 + 6));
    return 0;
}


// ===== sym.entry_ffs_data_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003238 (size 8) =====

ulong sym.entry_ffs_data_put.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *param_2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08004114:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08004124;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08004114;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08004114;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08004114;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08004114;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08004114;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08004114;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08004114;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08004114;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004160);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08004124:
    ipc_log_string(uVar2,"%s: ref %u",*(**(param_1 + 0x18) + 0x30),*(iVar4 + 0x68));
    return 0;
}


// ===== sym.entry_ffs_epfile_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003240 (size 8) =====

ulong sym.entry_ffs_epfile_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = param_2[2];
    iVar1 = param_2[1];
    iVar5 = *(*param_2 + 0xd8);
    if (0 < _segment.ehdr) {
        iVar6 = *(iVar5 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
            iVar6 = 0;
code_r0x08005e38:
            uVar4 = *(obj.ipc_log_s + iVar6 * 0x40);
            goto code_r0x08005e48;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                iVar6 = 1;
                goto code_r0x08005e38;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                    iVar6 = 2;
                    goto code_r0x08005e38;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                        iVar6 = 3;
                        goto code_r0x08005e38;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                            iVar6 = 4;
                            goto code_r0x08005e38;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                iVar6 = 5;
                                goto code_r0x08005e38;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                    iVar6 = 6;
                                    goto code_r0x08005e38;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                        iVar6 = 7;
                                        goto code_r0x08005e38;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                            iVar6 = 8;
                                            goto code_r0x08005e38;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar2 = SoftwareBreakpoint(0x5512,0x8005e98);
                                            (*pcVar2)();
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
    uVar4 = 0;
code_r0x08005e48:
    *(param_1 + 0x30) = *param_2;
    iVar6 = *(iVar5 + 0x30);
    ipc_log_string(uVar4,"%s: %s: code 0x%08x value %#lx state %d setup_state %d flag %lu",
                   *(**(param_1 + 0x18) + 0x30),iVar5 + 0x50,iVar1,iVar3,*(iVar6 + 0x70),*(iVar6 + 0x74),
                   *(iVar6 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_epfile_io.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003248 (size 8) =====

ulong sym.entry_ffs_epfile_io.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_2[1];
    iVar4 = *(*param_2 + 0xd8);
    if (0 < _segment.ehdr) {
        iVar5 = *(iVar4 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar5 = 0;
code_r0x08003728:
            uVar3 = *(obj.ipc_log_s + iVar5 * 0x40);
            goto code_r0x08003738;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar5 = 1;
                goto code_r0x08003728;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar5 = 2;
                    goto code_r0x08003728;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar5 = 3;
                        goto code_r0x08003728;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar5 = 4;
                            goto code_r0x08003728;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar5 = 5;
                                goto code_r0x08003728;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar5 = 6;
                                    goto code_r0x08003728;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar5 = 7;
                                        goto code_r0x08003728;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar5 = 8;
                                            goto code_r0x08003728;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar2 = SoftwareBreakpoint(0x5512,0x8003778);
                                            (*pcVar2)();
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
    uVar3 = 0;
code_r0x08003738:
    *(param_1 + 0x30) = *param_2;
    *(param_1 + 0x38) = iVar1;
    ipc_log_string(uVar3,"%s: enter: %s about to queue %zd bytes",*(**(param_1 + 0x18) + 0x30),iVar4 + 0x50,
                   *(iVar1 + 0x20));
    return 0;
}


// ===== sym.entry_ffs_func_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003250 (size 8) =====

ulong sym.entry_ffs_func_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = **(*(*(param_2 + 8) + 200) + 0xb8);
    if (iVar4 == 0) {
        return 0;
    }
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar2 = 0;
code_r0x08006b70:
            uVar3 = *(obj.ipc_log_s + iVar2 * 0x40);
            goto code_r0x08006b80;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar2 = 1;
                goto code_r0x08006b70;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar2 = 2;
                    goto code_r0x08006b70;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar2 = 3;
                        goto code_r0x08006b70;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar2 = 4;
                            goto code_r0x08006b70;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar2 = 5;
                                goto code_r0x08006b70;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar2 = 6;
                                    goto code_r0x08006b70;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar2 = 7;
                                        goto code_r0x08006b70;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar2 = 8;
                                            goto code_r0x08006b70;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006bec);
                                            (*pcVar1)();
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
    uVar3 = 0;
code_r0x08006b80:
    *(param_1 + 0x30) = iVar4;
    ipc_log_string(uVar3,"%s: enter",*(**(param_1 + 0x18) + 0x30));
    ipc_log_string(uVar3,"%s: _ffs_func_bind",*(**(param_1 + 0x18) + 0x30),"enter: state %d setup_state %d flag %lu"
                   ,*(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_data_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08003258 (size 8) =====

ulong sym.entry_ffs_data_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *param_2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08006338:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08006348;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08006338;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08006338;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08006338;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08006338;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08006338;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08006338;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08006338;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08006338;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006384);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08006348:
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu",*(**(param_1 + 0x18) + 0x30),*(iVar4 + 0x70),
                   *(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_user_copy_worker @ 0x08003260 (size 448) =====

ulong sym.entry_ffs_user_copy_worker(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    iVar2 = *(*(arg2 + 0x38) + 0x54);
    if (iVar2 == 0) {
        iVar2 = *(*(arg2 + 0x38) + 0x58);
    }
    if (0 < _segment.ehdr) {
        iVar5 = *(arg2 + 0x58);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar5 = 0;
code_r0x080033bc:
            uVar4 = *(obj.ipc_log_s + iVar5 * 0x40);
            goto code_r0x080033cc;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar5 = 1;
                goto code_r0x080033bc;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar5 = 2;
                    goto code_r0x080033bc;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar5 = 3;
                        goto code_r0x080033bc;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar5 = 4;
                            goto code_r0x080033bc;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar5 = 5;
                                goto code_r0x080033bc;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar5 = 6;
                                    goto code_r0x080033bc;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar5 = 7;
                                        goto code_r0x080033bc;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar5 = 8;
                                            goto code_r0x080033bc;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar3 = SoftwareBreakpoint(0x5512,0x8003420);
                                            (*pcVar3)();
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
    uVar4 = 0;
code_r0x080033cc:
    *(arg1 + 0x30) = arg2;
    pcVar1 = "write";
    if (*(arg2 + -0x4f) != '\0') {
        pcVar1 = "read";
    }
    ipc_log_string(uVar4,"%s: enter: ret %d for %s",*(**(arg1 + 0x18) + 0x30),iVar2,pcVar1);
    return 0;
}


// ===== sym.exit_ffs_epfile_io @ 0x08003424 (size 432) =====

ulong sym.exit_ffs_epfile_io(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x30) + 0xd8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x0800357c:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x0800358c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x0800357c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x0800357c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x0800357c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x0800357c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x0800357c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x0800357c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x0800357c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x0800357c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80035d4);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x0800358c:
    iVar4 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar4 = *arg2;
    }
    ipc_log_string(uVar2,"%s: exit: %s ret %zd",*(**(arg1 + 0x18) + 0x30),iVar3 + 0x50,iVar4);
    return 0;
}


// ===== sym.entry_ffs_epfile_io @ 0x080035d8 (size 416) =====

ulong sym.entry_ffs_epfile_io(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg2 + 8);
    iVar4 = *(*arg2 + 0xd8);
    if (0 < _segment.ehdr) {
        iVar5 = *(iVar4 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar5 = 0;
code_r0x08003728:
            uVar3 = *(obj.ipc_log_s + iVar5 * 0x40);
            goto code_r0x08003738;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar5 = 1;
                goto code_r0x08003728;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar5 = 2;
                    goto code_r0x08003728;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar5 = 3;
                        goto code_r0x08003728;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar5 = 4;
                            goto code_r0x08003728;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar5 = 5;
                                goto code_r0x08003728;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar5 = 6;
                                    goto code_r0x08003728;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar5 = 7;
                                        goto code_r0x08003728;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar5 = 8;
                                            goto code_r0x08003728;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar2 = SoftwareBreakpoint(0x5512,0x8003778);
                                            (*pcVar2)();
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
    uVar3 = 0;
code_r0x08003738:
    *(arg1 + 0x30) = *arg2;
    *(arg1 + 0x38) = iVar1;
    ipc_log_string(uVar3,"%s: enter: %s about to queue %zd bytes",*(**(arg1 + 0x18) + 0x30),iVar4 + 0x50,
                   *(iVar1 + 0x20));
    return 0;
}


// ===== sym.entry_ffs_epfile_async_io_complete @ 0x0800377c (size 404) =====

ulong sym.entry_ffs_epfile_async_io_complete(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(*(arg2 + 8) + 0x38) + 0xa8);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x080038cc:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080038dc;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x080038cc;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x080038cc;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x080038cc;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x080038cc;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x080038cc;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x080038cc;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x080038cc;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x080038cc;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003910);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080038dc:
    ipc_log_string(uVar2,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.exit_ffs_epfile_write_iter @ 0x08003914 (size 448) =====

ulong sym.exit_ffs_epfile_write_iter(int64_t arg1,int64_t arg2,uchar noname_2 [16],uint32_t arg3)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**(arg1 + 0x30) + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08003a68:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08003a78;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08003a68;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08003a68;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08003a68;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08003a68;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08003a68;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08003a68;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08003a68;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08003a68;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003ad4);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08003a78:
    iVar3 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar3 = *arg2;
    }
    if ((iVar3 != -0x211) && (iVar3 != -0xc)) {
        ipc_log_string(uVar2,"%s: exit: ret %zd",*(**(arg1 + 0x18) + 0x30));
    }
    return 0;
}


// ===== sym.entry_ffs_epfile_write_iter @ 0x08003ad8 (size 412) =====

ulong sym.entry_ffs_epfile_write_iter(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**arg2 + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08003c2c:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08003c3c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08003c2c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08003c2c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08003c2c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08003c2c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08003c2c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08003c2c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08003c2c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08003c2c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003c74);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08003c3c:
    *(arg1 + 0x30) = *arg2;
    ipc_log_string(uVar2,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.exit_ffs_epfile_read_iter @ 0x08003c78 (size 432) =====

ulong sym.exit_ffs_epfile_read_iter(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**(arg1 + 0x30) + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08003dcc:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08003ddc;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08003dcc;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08003dcc;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08003dcc;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08003dcc;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08003dcc;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08003dcc;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08003dcc;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08003dcc;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003e28);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08003ddc:
    iVar3 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar3 = *arg2;
    }
    ipc_log_string(uVar2,"%s: exit: ret %zd",*(**(arg1 + 0x18) + 0x30),iVar3);
    return 0;
}


// ===== sym.entry_ffs_epfile_read_iter @ 0x08003e2c (size 412) =====

ulong sym.entry_ffs_epfile_read_iter(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**arg2 + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08003f80:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08003f90;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08003f80;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08003f80;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08003f80;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08003f80;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08003f80;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08003f80;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08003f80;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08003f80;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8003fc8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08003f90:
    *(arg1 + 0x30) = *arg2;
    ipc_log_string(uVar2,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry_ffs_data_put @ 0x08003fcc (size 404) =====

ulong sym.entry_ffs_data_put(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
            iVar3 = 0;
code_r0x08004114:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08004124;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                iVar3 = 1;
                goto code_r0x08004114;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                    iVar3 = 2;
                    goto code_r0x08004114;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                        iVar3 = 3;
                        goto code_r0x08004114;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                            iVar3 = 4;
                            goto code_r0x08004114;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                iVar3 = 5;
                                goto code_r0x08004114;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                    iVar3 = 6;
                                    goto code_r0x08004114;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                        iVar3 = 7;
                                        goto code_r0x08004114;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                            iVar3 = 8;
                                            goto code_r0x08004114;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004160);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08004124:
    ipc_log_string(uVar2,"%s: ref %u",*(**(arg1 + 0x18) + 0x30),*(arg2 + 0x68));
    return 0;
}


// ===== sym.entry_ffs_sb_fill @ 0x08004168 (size 156) =====

ulong sym.entry_ffs_sb_fill(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(*(arg1 + 8) + 0x40) + 0x20);
    puVar1 = kmem_cache_alloc_trace(_ipc_log_string,0xb20,0x68);
    if (puVar1 != NULL) {
        *puVar1 = 0xfffffffe0;
        puVar1[1] = puVar1 + 1;
        puVar1[2] = puVar1 + 1;
        puVar1[3] = sym.create_ipc_context_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        strscpy(puVar1 + 7,*(iVar2 + 200),0x29);
        puVar1[6] = iVar2;
        queue_work_on(0x20,_segment.ehdr,puVar1);
    }
    return 0;
}


// ===== sym.exit___ffs_ep0_queue_wait @ 0x08004204 (size 404) =====

ulong sym.exit___ffs_ep0_queue_wait(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x30);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x0800434c:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x0800435c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x0800434c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x0800434c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x0800434c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x0800434c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x0800434c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x0800434c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x0800434c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x0800434c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004398);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x0800435c:
    ipc_log_string(uVar2,"%s: exit: state %d setup_state %d flags %lu",*(**(arg1 + 0x18) + 0x30),*(iVar4 + 0x70),
                   *(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.entry___ffs_ep0_queue_wait @ 0x0800439c (size 408) =====

ulong sym.entry___ffs_ep0_queue_wait(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
            iVar3 = 0;
code_r0x080044e4:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080044f4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                iVar3 = 1;
                goto code_r0x080044e4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                    iVar3 = 2;
                    goto code_r0x080044e4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                        iVar3 = 3;
                        goto code_r0x080044e4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                            iVar3 = 4;
                            goto code_r0x080044e4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                iVar3 = 5;
                                goto code_r0x080044e4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                    iVar3 = 6;
                                    goto code_r0x080044e4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                        iVar3 = 7;
                                        goto code_r0x080044e4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                            iVar3 = 8;
                                            goto code_r0x080044e4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004534);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080044f4:
    *(arg1 + 0x30) = arg2;
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flags %lu",*(**(arg1 + 0x18) + 0x30),*(arg2 + 0x70),
                   *(arg2 + 0x74),*(arg2 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_ep0_write @ 0x08004538 (size 448) =====

ulong sym.exit_ffs_ep0_write(int64_t arg1,int64_t arg2,uchar noname_2 [16],uint32_t arg3)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x30) + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08004684:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08004694;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08004684;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08004684;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08004684;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08004684;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08004684;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08004684;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08004684;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08004684;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80046f8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08004694:
    iVar3 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar3 = *arg2;
    }
    if ((iVar3 != -0x2b) && (iVar3 != -0x16)) {
        ipc_log_string(uVar2,"%s: exit:ret %zd state %d setup_state %d flags %lu",*(**(arg1 + 0x18) + 0x30),iVar3,
                       *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0));
    }
    return 0;
}


// ===== sym.entry_ffs_ep0_write @ 0x080046fc (size 416) =====

ulong sym.entry_ffs_ep0_write(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0x10);
    iVar5 = *(*arg2 + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar4 = 0;
code_r0x0800484c:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x0800485c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar4 = 1;
                goto code_r0x0800484c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar4 = 2;
                    goto code_r0x0800484c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar4 = 3;
                        goto code_r0x0800484c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar4 = 4;
                            goto code_r0x0800484c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar4 = 5;
                                goto code_r0x0800484c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar4 = 6;
                                    goto code_r0x0800484c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar4 = 7;
                                        goto code_r0x0800484c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar4 = 8;
                                            goto code_r0x0800484c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x800489c);
                                            (*pcVar1)();
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
    uVar3 = 0;
code_r0x0800485c:
    *(arg1 + 0x30) = *arg2;
    ipc_log_string(uVar3,"%s: enter:len %zu state %d setup_state %d flags %lu",*(**(arg1 + 0x18) + 0x30),uVar2,
                   *(iVar5 + 0x70),*(iVar5 + 0x74),*(iVar5 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_ep0_read @ 0x080048a0 (size 432) =====

ulong sym.exit_ffs_ep0_read(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg1 + 0x30) + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x080049ec:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080049fc;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x080049ec;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x080049ec;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x080049ec;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x080049ec;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x080049ec;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x080049ec;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x080049ec;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x080049ec;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004a50);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080049fc:
    iVar3 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar3 = *arg2;
    }
    ipc_log_string(uVar2,"%s: exit:ret %d state %d setup_state %d flags %lu",*(**(arg1 + 0x18) + 0x30),iVar3,
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_ep0_read @ 0x08004a54 (size 444) =====

ulong sym.entry_ffs_ep0_read(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0x10);
    iVar5 = *(*arg2 + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar4 = 0;
code_r0x08004ba4:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08004bb4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar4 = 1;
                goto code_r0x08004ba4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar4 = 2;
                    goto code_r0x08004ba4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar4 = 3;
                        goto code_r0x08004ba4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar4 = 4;
                            goto code_r0x08004ba4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar4 = 5;
                                goto code_r0x08004ba4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar4 = 6;
                                    goto code_r0x08004ba4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar4 = 7;
                                        goto code_r0x08004ba4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar4 = 8;
                                            goto code_r0x08004ba4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004c10);
                                            (*pcVar1)();
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
    uVar3 = 0;
code_r0x08004bb4:
    *(arg1 + 0x30) = *arg2;
    uVar6 = uVar2 / 0xc;
    if (*(iVar5 + 0x7c) <= uVar6) {
        uVar6 = *(iVar5 + 0x7c);
    }
    ipc_log_string(uVar3,"%s: enter:len %zu state %d setup_state %d flags %lu n %zu",*(**(arg1 + 0x18) + 0x30),uVar2
                   ,*(iVar5 + 0x70),*(iVar5 + 0x74),*(iVar5 + 0xa0),uVar6);
    return 0;
}


// ===== sym.entry_ffs_ep0_open @ 0x08004c14 (size 416) =====

ulong sym.entry_ffs_ep0_open(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*arg2 + 0x2d8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08004d60:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08004d70;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08004d60;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08004d60;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08004d60;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08004d60;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08004d60;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08004d60;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08004d60;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08004d60;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004db4);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08004d70:
    ipc_log_string(uVar2,"%s: state %d setup_state %d flags %lu opened %d",*(**(arg1 + 0x18) + 0x30),*(iVar4 + 0x70)
                   ,*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_ep0_release @ 0x08004dbc (size 416) =====

ulong sym.entry_ffs_ep0_release(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg2 + 8) + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08004f08:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08004f18;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08004f08;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08004f08;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08004f08;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08004f08;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08004f08;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08004f08;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08004f08;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08004f08;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8004f5c);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08004f18:
    ipc_log_string(uVar2,"%s: state %d setup_state %d flags %lu opened %d",*(**(arg1 + 0x18) + 0x30),*(iVar4 + 0x70)
                   ,*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_ep0_ioctl @ 0x08004f64 (size 416) =====

ulong sym.entry_ffs_ep0_ioctl(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*arg2 + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x080050b0:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080050c0;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x080050b0;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x080050b0;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x080050b0;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x080050b0;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x080050b0;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x080050b0;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x080050b0;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x080050b0;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005104);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080050c0:
    ipc_log_string(uVar2,"%s: state %d setup_state %d flags %lu opened %d",*(**(arg1 + 0x18) + 0x30),*(iVar4 + 0x70)
                   ,*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.exit_ffs_ep0_poll @ 0x0800510c (size 424) =====

ulong sym.exit_ffs_ep0_poll(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(arg1 + 0x30) + 0xd8);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08005260:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08005270;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08005260;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08005260;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08005260;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08005260;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08005260;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08005260;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08005260;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08005260;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80052b4);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005270:
    iVar3 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar3 = *arg2;
    }
    ipc_log_string(uVar2,"%s: exit: mask %u",*(**(arg1 + 0x18) + 0x30),iVar3);
    return 0;
}


// ===== sym.entry_ffs_ep0_poll @ 0x080052b8 (size 420) =====

ulong sym.entry_ffs_ep0_poll(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*arg2 + 0xd8);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08005404:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08005414;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08005404;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08005404;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08005404;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08005404;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08005404;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08005404;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08005404;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08005404;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x800545c);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005414:
    *(arg1 + 0x30) = *arg2;
    ipc_log_string(uVar2,"%s: state %d setup_state %d flags %lu opened %d",*(**(arg1 + 0x18) + 0x30),*(iVar4 + 0x70)
                   ,*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_epfile_open @ 0x08005464 (size 428) =====

ulong sym.entry_ffs_epfile_open(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*arg2 + 0x2d8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x080055b4:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x080055c4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x080055b4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x080055b4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x080055b4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x080055b4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x080055b4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x080055b4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x080055b4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x080055b4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005610);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080055c4:
    iVar4 = *(iVar3 + 0x30);
    ipc_log_string(uVar2,"%s: %s: state %d setup_state %d flag %lu opened %u",*(**(arg1 + 0x18) + 0x30),iVar3 + 0x50
                   ,*(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.exit_ffs_aio_cancel @ 0x08005618 (size 432) =====

ulong sym.exit_ffs_aio_cancel(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*(**(arg1 + 0x30) + 0xd8) + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08005774:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08005784;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08005774;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08005774;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08005774;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08005774;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08005774;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08005774;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08005774;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08005774;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80057c8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005784:
    iVar3 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar3 = *arg2;
    }
    ipc_log_string(uVar2,"%s: exit: mask %u",*(**(arg1 + 0x18) + 0x30),iVar3);
    return 0;
}


// ===== sym.entry_ffs_aio_cancel @ 0x080057cc (size 424) =====

ulong sym.entry_ffs_aio_cancel(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(**arg2 + 0xd8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x08005920:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08005930;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x08005920;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x08005920;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x08005920;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x08005920;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x08005920;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x08005920;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x08005920;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x08005920;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005974);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005930:
    *(arg1 + 0x30) = *arg2;
    iVar3 = *(iVar3 + 0x30);
    ipc_log_string(uVar2,"%s: enter:state %d setup_state %d flag %lu",*(**(arg1 + 0x18) + 0x30),*(iVar3 + 0x70),
                   *(iVar3 + 0x74),*(iVar3 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_epfile_release @ 0x08005978 (size 428) =====

ulong sym.entry_ffs_epfile_release(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*arg2 + 0x2d8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x08005ac8:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08005ad8;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x08005ac8;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x08005ac8;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x08005ac8;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x08005ac8;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x08005ac8;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x08005ac8;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x08005ac8;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x08005ac8;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005b24);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005ad8:
    iVar4 = *(iVar3 + 0x30);
    ipc_log_string(uVar2,"%s: %s: state %d setup_state %d flag %lu opened %u",*(**(arg1 + 0x18) + 0x30),iVar3 + 0x50
                   ,*(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar4 + 0x6c));
    return 0;
}


// ===== sym.exit_ffs_epfile_ioctl @ 0x08005b2c (size 432) =====

ulong sym.exit_ffs_epfile_ioctl(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x30) + 0xd8);
    if (0 < _segment.ehdr) {
        iVar4 = *(iVar3 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x08005c84:
            uVar2 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08005c94;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x08005c84;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x08005c84;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x08005c84;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x08005c84;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x08005c84;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x08005c84;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x08005c84;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x08005c84;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8005cdc);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005c94:
    iVar4 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar4 = *arg2;
    }
    ipc_log_string(uVar2,"%s: exit: %s: ret %d\n",*(**(arg1 + 0x18) + 0x30),iVar3 + 0x50,iVar4);
    return 0;
}


// ===== sym.entry_ffs_epfile_ioctl @ 0x08005ce0 (size 440) =====

ulong sym.entry_ffs_epfile_ioctl(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg2 + 0x10);
    uVar1 = *(arg2 + 8);
    iVar5 = *(*arg2 + 0xd8);
    if (0 < _segment.ehdr) {
        iVar6 = *(iVar5 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
            iVar6 = 0;
code_r0x08005e38:
            uVar4 = *(obj.ipc_log_s + iVar6 * 0x40);
            goto code_r0x08005e48;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                iVar6 = 1;
                goto code_r0x08005e38;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                    iVar6 = 2;
                    goto code_r0x08005e38;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                        iVar6 = 3;
                        goto code_r0x08005e38;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                            iVar6 = 4;
                            goto code_r0x08005e38;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                iVar6 = 5;
                                goto code_r0x08005e38;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                    iVar6 = 6;
                                    goto code_r0x08005e38;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                        iVar6 = 7;
                                        goto code_r0x08005e38;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                            iVar6 = 8;
                                            goto code_r0x08005e38;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar2 = SoftwareBreakpoint(0x5512,0x8005e98);
                                            (*pcVar2)();
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
    uVar4 = 0;
code_r0x08005e48:
    *(arg1 + 0x30) = *arg2;
    iVar6 = *(iVar5 + 0x30);
    ipc_log_string(uVar4,"%s: %s: code 0x%08x value %#lx state %d setup_state %d flag %lu",*(**(arg1 + 0x18) + 0x30),
                   iVar5 + 0x50,uVar1,uVar3,*(iVar6 + 0x70),*(iVar6 + 0x74),*(iVar6 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_data_opened @ 0x08005e9c (size 420) =====

ulong sym.entry_ffs_data_opened(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
            iVar3 = 0;
code_r0x08005fe4:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08005ff4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                iVar3 = 1;
                goto code_r0x08005fe4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                    iVar3 = 2;
                    goto code_r0x08005fe4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                        iVar3 = 3;
                        goto code_r0x08005fe4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                            iVar3 = 4;
                            goto code_r0x08005fe4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                iVar3 = 5;
                                goto code_r0x08005fe4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                    iVar3 = 6;
                                    goto code_r0x08005fe4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                        iVar3 = 7;
                                        goto code_r0x08005fe4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                            iVar3 = 8;
                                            goto code_r0x08005fe4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006040);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08005ff4:
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu opened %d ref %d",*(**(arg1 + 0x18) + 0x30),
                   *(arg2 + 0x70),*(arg2 + 0x74),*(arg2 + 0xa0),*(arg2 + 0x6c),*(arg2 + 0x68));
    return 0;
}


// ===== sym.entry_ffs_data_closed @ 0x0800604c (size 412) =====

ulong sym.entry_ffs_data_closed(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
            iVar3 = 0;
code_r0x08006194:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080061a4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                iVar3 = 1;
                goto code_r0x08006194;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                    iVar3 = 2;
                    goto code_r0x08006194;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                        iVar3 = 3;
                        goto code_r0x08006194;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                            iVar3 = 4;
                            goto code_r0x08006194;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                iVar3 = 5;
                                goto code_r0x08006194;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                    iVar3 = 6;
                                    goto code_r0x08006194;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                        iVar3 = 7;
                                        goto code_r0x08006194;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                            iVar3 = 8;
                                            goto code_r0x08006194;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80061e8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080061a4:
    ipc_log_string(uVar2,"%s: state %d setup_state %d flag %lu opened %d",*(**(arg1 + 0x18) + 0x30),*(arg2 + 0x70),
                   *(arg2 + 0x74),*(arg2 + 0xa0),*(arg2 + 0x6c));
    return 0;
}


// ===== sym.entry_ffs_data_clear @ 0x080061f0 (size 404) =====

ulong sym.entry_ffs_data_clear(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
            iVar3 = 0;
code_r0x08006338:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08006348;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                iVar3 = 1;
                goto code_r0x08006338;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                    iVar3 = 2;
                    goto code_r0x08006338;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                        iVar3 = 3;
                        goto code_r0x08006338;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                            iVar3 = 4;
                            goto code_r0x08006338;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                iVar3 = 5;
                                goto code_r0x08006338;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                    iVar3 = 6;
                                    goto code_r0x08006338;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                        iVar3 = 7;
                                        goto code_r0x08006338;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                            iVar3 = 8;
                                            goto code_r0x08006338;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006384);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08006348:
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu",*(**(arg1 + 0x18) + 0x30),*(arg2 + 0x70),
                   *(arg2 + 0x74),*(arg2 + 0xa0));
    return 0;
}


// ===== sym.exit_functionfs_bind @ 0x08006388 (size 420) =====

ulong sym.exit_functionfs_bind(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(arg1 + 0x30);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x080064d0:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080064e0;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x080064d0;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x080064d0;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x080064d0;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x080064d0;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x080064d0;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x080064d0;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x080064d0;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x080064d0;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x800652c);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080064e0:
    iVar3 = *arg2;
    if ((*(arg2 + 0x108) & 0x1f) != 0x10) {
        iVar3 = *arg2;
    }
    ipc_log_string(uVar2,"%s: functionfs_bind returned %d",*(**(arg1 + 0x18) + 0x30),iVar3);
    return 0;
}


// ===== sym.entry_functionfs_bind @ 0x08006530 (size 408) =====

ulong sym.entry_functionfs_bind(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
            iVar3 = 0;
code_r0x08006678:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08006688;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                iVar3 = 1;
                goto code_r0x08006678;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                    iVar3 = 2;
                    goto code_r0x08006678;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                        iVar3 = 3;
                        goto code_r0x08006678;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                            iVar3 = 4;
                            goto code_r0x08006678;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                iVar3 = 5;
                                goto code_r0x08006678;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                    iVar3 = 6;
                                    goto code_r0x08006678;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                        iVar3 = 7;
                                        goto code_r0x08006678;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                            iVar3 = 8;
                                            goto code_r0x08006678;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80066c8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08006688:
    *(arg1 + 0x30) = arg2;
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu",*(**(arg1 + 0x18) + 0x30),*(arg2 + 0x70),
                   *(arg2 + 0x74),*(arg2 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_func_eps_disable @ 0x080066cc (size 412) =====

ulong sym.entry_ffs_func_eps_disable(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*arg2 + 0x10);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08006818:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08006828;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08006818;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08006818;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08006818;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08006818;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08006818;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08006818;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08006818;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08006818;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006868);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08006828:
    iVar3 = *(*arg2 + 0x10);
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu",*(**(arg1 + 0x18) + 0x30),*(iVar3 + 0x70),
                   *(iVar3 + 0x74),*(iVar3 + 0xa0));
    return 0;
}


// ===== sym.exit_ffs_func_bind @ 0x0800686c (size 412) =====

ulong sym.exit_ffs_func_bind(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x30);
    if (iVar2 == 0) {
        return 0;
    }
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
            iVar2 = 0;
code_r0x080069ec:
            uVar3 = *(obj.ipc_log_s + iVar2 * 0x40);
            goto joined_r0x08006974;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                iVar2 = 1;
                goto code_r0x080069ec;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                    iVar2 = 2;
                    goto code_r0x080069ec;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                        iVar2 = 3;
                        goto code_r0x080069ec;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                            iVar2 = 4;
                            goto code_r0x080069ec;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                                iVar2 = 5;
                                goto code_r0x080069ec;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                                    iVar2 = 6;
                                    goto code_r0x080069ec;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                                        iVar2 = 7;
                                        goto code_r0x080069ec;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar2) {
                                            iVar2 = 8;
                                            goto code_r0x080069ec;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006a08);
                                            (*pcVar1)();
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
    uVar3 = 0;
joined_r0x08006974:
    if (*arg2 < 0) {
        ipc_log_string(uVar3,"%s: exit: ret %d",*(**(arg1 + 0x18) + 0x30));
    }
    return 0;
}


// ===== sym.entry_ffs_func_bind @ 0x08006a0c (size 480) =====

ulong sym.entry_ffs_func_bind(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = **(*(*(arg2 + 8) + 200) + 0xb8);
    if (iVar4 == 0) {
        return 0;
    }
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar2 = 0;
code_r0x08006b70:
            uVar3 = *(obj.ipc_log_s + iVar2 * 0x40);
            goto code_r0x08006b80;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar2 = 1;
                goto code_r0x08006b70;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar2 = 2;
                    goto code_r0x08006b70;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar2 = 3;
                        goto code_r0x08006b70;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar2 = 4;
                            goto code_r0x08006b70;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar2 = 5;
                                goto code_r0x08006b70;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar2 = 6;
                                    goto code_r0x08006b70;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar2 = 7;
                                        goto code_r0x08006b70;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar2 = 8;
                                            goto code_r0x08006b70;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006bec);
                                            (*pcVar1)();
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
    uVar3 = 0;
code_r0x08006b80:
    *(arg1 + 0x30) = iVar4;
    ipc_log_string(uVar3,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    ipc_log_string(uVar3,"%s: _ffs_func_bind",*(**(arg1 + 0x18) + 0x30),"enter: state %d setup_state %d flag %lu",
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_reset_work @ 0x08006bf4 (size 400) =====

ulong sym.entry_ffs_reset_work(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *arg2 + -400;
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08006d40:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08006d50;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08006d40;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08006d40;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08006d40;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08006d40;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08006d40;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08006d40;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08006d40;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08006d40;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006d84);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08006d50:
    ipc_log_string(uVar2,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry_ffs_func_set_alt @ 0x08006d88 (size 412) =====

ulong sym.entry_ffs_func_set_alt(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0x10);
    if (0 < _segment.ehdr) {
        iVar4 = *(*arg2 + -0x28);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar4 = 0;
code_r0x08006ed8:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x08006ee8;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar4 = 1;
                goto code_r0x08006ed8;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar4 = 2;
                    goto code_r0x08006ed8;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar4 = 3;
                        goto code_r0x08006ed8;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar4 = 4;
                            goto code_r0x08006ed8;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar4 = 5;
                                goto code_r0x08006ed8;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar4 = 6;
                                    goto code_r0x08006ed8;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar4 = 7;
                                        goto code_r0x08006ed8;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar4 = 8;
                                            goto code_r0x08006ed8;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8006f24);
                                            (*pcVar1)();
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
    uVar3 = 0;
code_r0x08006ee8:
    *(arg1 + 0x30) = *arg2 + -0x38;
    ipc_log_string(uVar3,"%s: enter: alt %d",*(**(arg1 + 0x18) + 0x30),uVar2);
    return 0;
}


// ===== sym.entry_ffs_func_disable @ 0x08006f28 (size 400) =====

ulong sym.entry_ffs_func_disable(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*arg2 + -0x28);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08007074:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08007084;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08007074;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08007074;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08007074;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08007074;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08007074;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08007074;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08007074;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08007074;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80070b8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08007084:
    ipc_log_string(uVar2,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry_ffs_func_setup @ 0x080070bc (size 436) =====

ulong sym.entry_ffs_func_setup(int64_t arg1,int64_t arg2)

{
    uchar *puVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg2 + 8);
    iVar5 = *(*arg2 + -0x28);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
            iVar4 = 0;
code_r0x0800720c:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            goto code_r0x0800721c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                iVar4 = 1;
                goto code_r0x0800720c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                    iVar4 = 2;
                    goto code_r0x0800720c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                        iVar4 = 3;
                        goto code_r0x0800720c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                            iVar4 = 4;
                            goto code_r0x0800720c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                iVar4 = 5;
                                goto code_r0x0800720c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                    iVar4 = 6;
                                    goto code_r0x0800720c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                        iVar4 = 7;
                                        goto code_r0x0800720c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar5) {
                                            iVar4 = 8;
                                            goto code_r0x0800720c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar2 = SoftwareBreakpoint(0x5512,0x8007270);
                                            (*pcVar2)();
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
    uVar3 = 0;
code_r0x0800721c:
    ipc_log_string(uVar3,"%s: enter: state %d reqtype=%02x req=%02x wv=%04x wi=%04x wl=%04x",*(**(arg1 + 0x18) + 0x30)
                   ,*(iVar5 + 0x70),*puVar1,puVar1[1],*(puVar1 + 2),*(puVar1 + 4),*(puVar1 + 6));
    return 0;
}


// ===== sym.entry_ffs_func_suspend @ 0x08007274 (size 400) =====

ulong sym.entry_ffs_func_suspend(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*arg2 + -0x28);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x080073c0:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080073d0;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x080073c0;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x080073c0;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x080073c0;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x080073c0;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x080073c0;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x080073c0;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x080073c0;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x080073c0;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007404);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080073d0:
    ipc_log_string(uVar2,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.entry_ffs_func_resume @ 0x08007408 (size 400) =====

ulong sym.entry_ffs_func_resume(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < _segment.ehdr) {
        iVar3 = *(*arg2 + -0x28);
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
            iVar3 = 0;
code_r0x08007554:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08007564;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                iVar3 = 1;
                goto code_r0x08007554;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                    iVar3 = 2;
                    goto code_r0x08007554;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                        iVar3 = 3;
                        goto code_r0x08007554;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                            iVar3 = 4;
                            goto code_r0x08007554;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                iVar3 = 5;
                                goto code_r0x08007554;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                    iVar3 = 6;
                                    goto code_r0x08007554;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                        iVar3 = 7;
                                        goto code_r0x08007554;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar3) {
                                            iVar3 = 8;
                                            goto code_r0x08007554;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007598);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08007564:
    ipc_log_string(uVar2,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.exit_ffs_func_unbind @ 0x0800759c (size 404) =====

ulong sym.exit_ffs_func_unbind(int64_t arg1)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x38);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x080076e4:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x080076f4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x080076e4;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x080076e4;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x080076e4;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x080076e4;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x080076e4;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x080076e4;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x080076e4;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x080076e4;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007730);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x080076f4:
    ipc_log_string(uVar2,"%s: exit: state %d setup_state %d flag %lu",*(**(arg1 + 0x18) + 0x30),*(iVar4 + 0x70),
                   *(iVar4 + 0x74),*(iVar4 + 0xa0));
    return 0;
}


// ===== sym.entry_ffs_func_unbind @ 0x08007734 (size 420) =====

ulong sym.entry_ffs_func_unbind(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(arg2 + 8) + -0x28);
    iVar5 = *(*(arg2 + 8) + 200);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
            iVar3 = 0;
code_r0x08007884:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08007894;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                iVar3 = 1;
                goto code_r0x08007884;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                    iVar3 = 2;
                    goto code_r0x08007884;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                        iVar3 = 3;
                        goto code_r0x08007884;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                            iVar3 = 4;
                            goto code_r0x08007884;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                iVar3 = 5;
                                goto code_r0x08007884;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                    iVar3 = 6;
                                    goto code_r0x08007884;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                        iVar3 = 7;
                                        goto code_r0x08007884;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar4) {
                                            iVar3 = 8;
                                            goto code_r0x08007884;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x80078d8);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08007894:
    *(arg1 + 0x38) = iVar4;
    ipc_log_string(uVar2,"%s: enter: state %d setup_state %d flag %lu refcnt %u",*(**(arg1 + 0x18) + 0x30),
                   *(iVar4 + 0x70),*(iVar4 + 0x74),*(iVar4 + 0xa0),*(iVar5 + 0xc0));
    return 0;
}


// ===== sym.exit_ffs_closed @ 0x080078dc (size 476) =====

ulong sym.exit_ffs_closed(int64_t arg1)

{
    code *pcVar1;
    char *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x30);
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
            iVar4 = 0;
code_r0x08007a6c:
            uVar3 = *(obj.ipc_log_s + iVar4 * 0x40);
            uVar5 = *(iVar6 + 0xa0);
            goto joined_r0x080079e4;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                iVar4 = 1;
                goto code_r0x08007a6c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                    iVar4 = 2;
                    goto code_r0x08007a6c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                        iVar4 = 3;
                        goto code_r0x08007a6c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                            iVar4 = 4;
                            goto code_r0x08007a6c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                iVar4 = 5;
                                goto code_r0x08007a6c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                    iVar4 = 6;
                                    goto code_r0x08007a6c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                        iVar4 = 7;
                                        goto code_r0x08007a6c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == iVar6) {
                                            iVar4 = 8;
                                            goto code_r0x08007a6c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007ab8);
                                            (*pcVar1)();
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
    uVar3 = 0;
    uVar5 = *(iVar6 + 0xa0);
joined_r0x080079e4:
    if ((uVar5 >> 1 & 1) == 0) {
        if ((((*(iVar6 + 0xd0) != 0) && (iVar6 = *(*(iVar6 + 0xd0) + 8), iVar6 != 0)) && (*(iVar6 + 0xc4) == '\0')) &&
           ((*(iVar6 + 0x30) != 0 && (*(iVar6 + 0x1c) != 0)))) {
            return 0;
        }
        iVar6 = **(arg1 + 0x18);
        pcVar2 = "%s: exit error";
    }
    else {
        iVar6 = **(arg1 + 0x18);
        pcVar2 = "%s: unreg gadget done";
    }
    ipc_log_string(uVar3,pcVar2,*(iVar6 + 0x30));
    return 0;
}


// ===== sym.entry_ffs_closed @ 0x08007ac4 (size 400) =====

ulong sym.entry_ffs_closed(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *arg2;
    if (0 < _segment.ehdr) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
            iVar3 = 0;
code_r0x08007c0c:
            uVar2 = *(obj.ipc_log_s + iVar3 * 0x40);
            goto code_r0x08007c1c;
        }
        if (_segment.ehdr != 1) {
            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                iVar3 = 1;
                goto code_r0x08007c0c;
            }
            if (_segment.ehdr != 2) {
                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                    iVar3 = 2;
                    goto code_r0x08007c0c;
                }
                if (_segment.ehdr != 3) {
                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                        iVar3 = 3;
                        goto code_r0x08007c0c;
                    }
                    if (_segment.ehdr != 4) {
                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                            iVar3 = 4;
                            goto code_r0x08007c0c;
                        }
                        if (_segment.ehdr != 5) {
                            if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                iVar3 = 5;
                                goto code_r0x08007c0c;
                            }
                            if (_segment.ehdr != 6) {
                                if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                    iVar3 = 6;
                                    goto code_r0x08007c0c;
                                }
                                if (_segment.ehdr != 7) {
                                    if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                        iVar3 = 7;
                                        goto code_r0x08007c0c;
                                    }
                                    if (_segment.ehdr != 8) {
                                        if (CONCAT44(*0x8000004,_segment.ehdr) == arg2) {
                                            iVar3 = 8;
                                            goto code_r0x08007c0c;
                                        }
                                        if (_segment.ehdr != 9) {
    //WARNING: Does not return
                                            pcVar1 = SoftwareBreakpoint(0x5512,0x8007c54);
                                            (*pcVar1)();
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
    uVar2 = 0;
code_r0x08007c1c:
    *(arg1 + 0x30) = arg2;
    ipc_log_string(uVar2,"%s: enter",*(**(arg1 + 0x18) + 0x30));
    return 0;
}


// ===== sym.create_ipc_context_work @ 0x08007c58 (size 792) =====

void sym.create_ipc_context_work(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    char acStack_70 [8];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = arg1 + 0x38;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    acStack_70[0] = str.usb_ffs_[0];
    acStack_70[1] = str.usb_ffs_[1];
    acStack_70[2] = str.usb_ffs_[2];
    acStack_70[3] = str.usb_ffs_[3];
    acStack_70[4] = str.usb_ffs_[4];
    acStack_70[5] = str.usb_ffs_[5];
    acStack_70[6] = str.usb_ffs_[6];
    acStack_70[7] = str.usb_ffs_[7];
    uStack_68 = 0;
    if ((_segment.ehdr < 1) || (*0x8000308 == '\0')) {
code_r0x08007e1c:
        if (uVar1 < 9) {
            strlcat(acStack_70,iVar5,0x32);
            uVar4 = ipc_log_context_create(10,acStack_70,0);
            if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
                _printk(0x8001eb1,"create_ipc_context_work",iVar5);
            }
            else {
                uVar6 = _segment.ehdr;
                if (8 < _segment.ehdr) {
code_r0x08007f6c:
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8007f70);
                    (*pcVar2)();
                }
                *(obj.ipc_log_s + uVar6 * 0x40) = uVar4;
                if (0x240 < (uVar6 << 6 | 8)) goto code_r0x08007f68;
                *(uVar6 * 0x40 + 0x8000300) = *(arg1 + 0x30);
                strscpy(uVar6 * 0x40 + 0x8000308,iVar5,0x29);
                _segment.ehdr = _segment.ehdr + 1;
            }
        }
        else {
code_r0x08007f54:
            _printk(0x8001f2f);
        }
    }
    else {
        iVar3 = strcmp(0x8000308,iVar5);
        if (iVar3 != 0) {
            if ((uVar1 == 1) || (*0x8000348 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000348,iVar5);
            if (iVar3 == 0) {
                iVar5 = 1;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 2) || (*0x8000388 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000388,iVar5);
            if (iVar3 == 0) {
                iVar5 = 2;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 3) || (*0x80003c8 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x80003c8,iVar5);
            if (iVar3 == 0) {
                iVar5 = 3;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 4) || (*0x8000408 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000408,iVar5);
            if (iVar3 == 0) {
                iVar5 = 4;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 5) || (*0x8000448 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000448,iVar5);
            if (iVar3 == 0) {
                iVar5 = 5;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 6) || (*0x8000488 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000488,iVar5);
            if (iVar3 == 0) {
                iVar5 = 6;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 7) || (*0x80004c8 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x80004c8,iVar5);
            if (iVar3 == 0) {
                iVar5 = 7;
                goto code_r0x08007f00;
            }
            if ((uVar1 == 8) || (*0x8000508 == '\0')) goto code_r0x08007e1c;
            iVar3 = strcmp(0x8000508,iVar5);
            if (iVar3 == 0) {
                iVar5 = 8;
                goto code_r0x08007f00;
            }
            if (uVar1 != 9) goto code_r0x08007f6c;
            goto code_r0x08007f54;
        }
        iVar5 = 0;
code_r0x08007f00:
        *(iVar5 * 0x40 + 0x8000300) = *(arg1 + 0x30);
    }
    kfree(arg1);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
code_r0x08007f68:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x8007f6c);
    (*pcVar2)();
}


// ===== sym.__cfi_check_fail @ 0x08007f70 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08007fb4

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
    //switch table (4 cases) at 0x80018f0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8007fc8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08007fd4 (size 184) =====

ulong sym.init_module(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = alloc_workqueue("ipc_wq",0xa0002,1);
    if (_segment.ehdr == 0) {
        _printk(0x8001cc8,"kretprobe_init");
        uVar2 = 0xfffffff4;
    }
    else {
        iVar4 = 0x20;
        pcVar3 = obj.ipc_wq;
        do {
            iVar1 = register_kretprobe(pcVar3);
            if (iVar1 < 0) {
                _printk(0x8001b6c,*(pcVar3 + 0x30),iVar1);
            }
            iVar4 = iVar4 + -1;
            pcVar3 = pcVar3 + 0xb0;
        } while (iVar4 != 0);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.cleanup_module @ 0x0800808c (size 212) =====

void sym.cleanup_module(void)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    destroy_workqueue(CONCAT44(*0x8000004,_segment.ehdr));
    if (0 < _segment.ehdr) {
        iVar3 = 0;
        pcVar1 = obj.ipc_log_s;
        iVar2 = _segment.ehdr;
        do {
            if (iVar3 == 9) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8008160);
                (*pcVar1)();
            }
            if (*(pcVar1 + 8) != 0) {
                ipc_log_context_destroy(*pcVar1);
                iVar2 = _segment.ehdr;
                *pcVar1 = 0;
            }
            iVar3 = iVar3 + 1;
            pcVar1 = pcVar1 + 0x40;
        } while (iVar3 < iVar2);
    }
    iVar3 = 0x20;
    pcVar1 = obj.ipc_wq;
    do {
        unregister_kretprobe(pcVar1);
        if (0 < *(pcVar1 + 0x94)) {
            _printk(0x8001f59,*(pcVar1 + 0x94),*(pcVar1 + 0x30));
        }
        iVar3 = iVar3 + -1;
        pcVar1 = pcVar1 + 0xb0;
    } while (iVar3 != 0);
    return;
}

