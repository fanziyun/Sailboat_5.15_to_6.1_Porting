// decompiled from mtdblock by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x080018c8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x582a7a5f67bc69b0) {
            pcVar2 = sym.mtdblock_remove_dev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0x4093708e319cc18b) {
                if (arg1 != -0x1edc2999085d41c0) goto code_r0x08001888;
                pcVar2 = sym.mtdblock_add_mtd.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x080010e4;
            }
            pcVar2 = sym.mtdblock_flush.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
code_r0x08001100:
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 == 0x1e2072b22e007509) {
                pcVar2 = sym.mtdblock_readsect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08001100;
            }
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001888;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x080010e4:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x08001888:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018dc);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001120 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    deregister_mtd_blktrans(obj.mtdblock_tr);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    register_mtd_blktrans(obj.mtdblock_tr);
    return;
}


// ===== sym.mtdblock_add_mtd.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001130 (size 8) =====

void sym.mtdblock_add_mtd.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    uint8_t uVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = kmem_cache_alloc_trace(_memcpy,0xdc0,0x108);
    if (puVar4 != NULL) {
        uVar5 = *(param_2 + 8);
        uVar1 = *(param_2 + 0x40);
        puVar4[3] = param_2;
        uVar2 = *(param_2 + 5);
        *puVar4 = param_1;
        *(puVar4 + 10) = uVar1;
        puVar4[0xb] = uVar5 >> 9;
        if ((uVar2 >> 2 & 1) == 0) {
            *(puVar4 + 0xc) = 1;
        }
        iVar3 = add_mtd_blktrans_dev(puVar4);
        if (iVar3 != 0) {
            kfree(puVar4);
        }
    }
    return;
}


// ===== sym.mtdblock_readsect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001138 (size 8) =====

uint64_t sym.mtdblock_readsect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar9;
    ulong uVar10;
    code *pcVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar9 = param_2 << 9;
    uVar2 = *(param_1 + 0x100);
    uVar13 = uVar2;
    uStack_60 = 0;
    uVar10 = *(param_1 + 0x18);
    if (uVar2 == 0) {
        uVar7 = 0x200;
        uVar5 = mtd_read(uVar10,uVar9,0x200,&uStack_60,param_3);
    }
    else {
        uVar15 = 0x200;
        do {
            uVar7 = 0;
            if (uVar13 != 0) {
                uVar7 = uVar9 / uVar13;
            }
            iVar8 = uVar9 - uVar7 * uVar13;
            uVar4 = uVar2 - iVar8;
            uVar1 = uVar15;
            if (uVar4 <= uVar15) {
                uVar1 = uVar4;
            }
            uVar12 = uVar1;
            uVar7 = uVar12;
            if ((*(param_1 + 0x104) == 0) || (*(param_1 + 0xf8) != uVar9 - iVar8)) {
                uVar5 = mtd_read(uVar10,uVar9,uVar12,&uStack_60,param_3);
                if (uVar5 != 0) goto code_r0x08001260;
                if (uStack_60 != uVar12) {
                    uVar5 = 0xfffffffb;
                    goto code_r0x08001260;
                }
            }
            else {
                memcpy(param_3,*(param_1 + 0xf0) + iVar8);
            }
            param_3 = param_3 + uVar12;
            uVar9 = uVar12 + uVar9;
            uVar15 = uVar15 - uVar1;
        } while (0 < uVar15);
        uVar5 = 0;
    }
code_r0x08001260:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    auVar16 = __stack_chk_fail(uVar5);
    iVar6 = auVar16._0_8_;
    *extraout_x18 = sym.mtdblock_writesect;
    pcStack_b8 = sym.mtdblock_writesect;
    iVar8 = sp_el0;
    iStack_c8 = *(iVar8 + 0x5e0);
    puStack_c0 = &stack0xffffffffffffffb0;
    if ((*(iVar6 + 0xf0) == 0) && (*(iVar6 + 0x100) != 0)) {
        iVar8 = vmalloc(*(*(iVar6 + 0x18) + 0x10));
        *(iVar6 + 0xf0) = iVar8;
        if (iVar8 == 0) {
            uVar9 = 0xfffffffc;
            goto code_r0x0800144c;
        }
    }
    uVar2 = *(iVar6 + 0x100);
    uVar9 = uVar2;
    uVar13 = auVar16._8_8_ << 9;
    iVar8 = *(iVar6 + 0x18);
    uStack_f0 = 0;
    if (uVar2 == 0) {
        uVar9 = mtd_write(iVar8,uVar13,0x200,&uStack_f0,uVar7);
        uVar9 = uVar9 & 0xffffffff;
    }
    else {
        uVar15 = 0x200;
        do {
            uVar5 = 0;
            if (uVar9 != 0) {
                uVar5 = uVar13 / uVar9;
            }
            iVar14 = uVar5 * uVar9;
            uVar4 = uVar2 - (uVar13 - iVar14);
            uVar1 = uVar15;
            if (uVar4 <= uVar15) {
                uVar1 = uVar4;
            }
            if (uVar1 == uVar2) {
                uStack_d0 = 0;
                uStack_e8 = 0;
                uStack_e0 = uVar13;
                uStack_d8 = uVar9;
                uVar4 = mtd_erase(iVar8,&uStack_e0);
                if (uVar4 != 0) {
                    uVar9 = uVar4;
                    _printk(0x80000fe,uVar13,uVar2,*(iVar8 + 0x38));
                    goto code_r0x0800144c;
                }
                uVar4 = mtd_write(iVar8,uVar13,uVar9,&uStack_e8,uVar7);
                if (uVar4 != 0) {
code_r0x08001448:
                    uVar9 = uVar4;
                    goto code_r0x0800144c;
                }
                uVar5 = uVar9;
                if (uStack_e8 != uVar9) {
code_r0x08001418:
                    uVar9 = 0xfffffffb;
                    goto code_r0x0800144c;
                }
            }
            else {
                iVar3 = *(iVar6 + 0x104);
                if (iVar3 == 2) {
                    if (*(iVar6 + 0xf8) != iVar14) {
                        uVar4 = sym.write_cached_data(iVar6);
                        if (uVar4 != 0) goto code_r0x08001448;
                        iVar3 = *(iVar6 + 0x104);
                        goto code_r0x080013dc;
                    }
                }
                else {
code_r0x080013dc:
                    if ((iVar3 == 0) || (*(iVar6 + 0xf8) != iVar14)) {
                        *(iVar6 + 0x104) = 0;
                        uVar4 = mtd_read(iVar8,iVar14,uVar9,&uStack_f0,*(iVar6 + 0xf0));
                        if (uVar4 != 0) goto code_r0x08001448;
                        if (uStack_f0 != uVar9) goto code_r0x08001418;
                        *(iVar6 + 0xf8) = iVar14;
                        *(iVar6 + 0x100) = uVar2;
                        *(iVar6 + 0x104) = 1;
                    }
                }
                memcpy(*(iVar6 + 0xf0) + (uVar13 - iVar14),uVar7,uVar1);
                *(iVar6 + 0x104) = 2;
                uVar5 = uVar1;
            }
            uVar7 = uVar7 + uVar5;
            uVar13 = uVar5 + uVar13;
            uVar15 = uVar15 - uVar1;
        } while (0 < uVar15);
        uVar9 = 0;
    }
code_r0x0800144c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_c8) {
        iVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.mtdblock_flush;
        mutex_lock(iVar8 + 0xc0);
        uVar9 = sym.write_cached_data(iVar8);
        mutex_unlock(iVar8 + 0xc0);
        iVar8 = *(iVar8 + 0x18);
        do {
            iVar6 = iVar8;
            iVar8 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        pcVar11 = *(iVar6 + 0xf0);
        if (pcVar11 != NULL) {
            __cfi_slowpath_diag(0xcda853bfdc928661,pcVar11,0x80000d0);
            (*pcVar11)(iVar6);
        }
        return uVar9 & 0xffffffff;
    }
    return uVar9;
}


// ===== sym.mtdblock_writesect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001140 (size 8) =====

int sym.mtdblock_writesect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    code *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if ((*(param_1 + 0xf0) == 0) && (*(param_1 + 0x100) != 0)) {
        iVar8 = vmalloc(*(*(param_1 + 0x18) + 0x10));
        *(param_1 + 0xf0) = iVar8;
        if (iVar8 == 0) {
            iVar4 = -4;
            goto code_r0x0800144c;
        }
    }
    uVar2 = *(param_1 + 0x100);
    uVar9 = uVar2;
    uVar6 = param_2 << 9;
    iVar8 = *(param_1 + 0x18);
    uStack_90 = 0;
    if (uVar2 == 0) {
        iVar4 = mtd_write(iVar8,uVar6,0x200,&uStack_90,param_3);
    }
    else {
        uVar11 = 0x200;
        do {
            uVar5 = 0;
            if (uVar9 != 0) {
                uVar5 = uVar6 / uVar9;
            }
            iVar10 = uVar5 * uVar9;
            uVar3 = uVar2 - (uVar6 - iVar10);
            uVar1 = uVar11;
            if (uVar3 <= uVar11) {
                uVar1 = uVar3;
            }
            if (uVar1 == uVar2) {
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = uVar6;
                uStack_78 = uVar9;
                iVar4 = mtd_erase(iVar8,&uStack_80);
                if (iVar4 != 0) {
                    _printk(0x80000fe,uVar6,uVar2,*(iVar8 + 0x38));
                    goto code_r0x0800144c;
                }
                iVar4 = mtd_write(iVar8,uVar6,uVar9,&uStack_88,param_3);
                if (iVar4 != 0) goto code_r0x0800144c;
                uVar5 = uVar9;
                if (uStack_88 != uVar9) {
code_r0x08001418:
                    iVar4 = -5;
                    goto code_r0x0800144c;
                }
            }
            else {
                iVar4 = *(param_1 + 0x104);
                if (iVar4 == 2) {
                    if (*(param_1 + 0xf8) != iVar10) {
                        iVar4 = sym.write_cached_data(param_1);
                        if (iVar4 == 0) {
                            iVar4 = *(param_1 + 0x104);
                            goto code_r0x080013dc;
                        }
                        goto code_r0x0800144c;
                    }
                }
                else {
code_r0x080013dc:
                    if ((iVar4 == 0) || (*(param_1 + 0xf8) != iVar10)) {
                        *(param_1 + 0x104) = 0;
                        iVar4 = mtd_read(iVar8,iVar10,uVar9,&uStack_90,*(param_1 + 0xf0));
                        if (iVar4 != 0) goto code_r0x0800144c;
                        if (uStack_90 != uVar9) goto code_r0x08001418;
                        *(param_1 + 0xf8) = iVar10;
                        *(param_1 + 0x100) = uVar2;
                        *(param_1 + 0x104) = 1;
                    }
                }
                memcpy(*(param_1 + 0xf0) + (uVar6 - iVar10),param_3,uVar1);
                *(param_1 + 0x104) = 2;
                uVar5 = uVar1;
            }
            param_3 = param_3 + uVar5;
            uVar6 = uVar5 + uVar6;
            uVar11 = uVar11 - uVar1;
        } while (0 < uVar11);
        iVar4 = 0;
    }
code_r0x0800144c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar4;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.mtdblock_flush;
    mutex_lock(iVar8 + 0xc0);
    iVar4 = sym.write_cached_data(iVar8);
    mutex_unlock(iVar8 + 0xc0);
    iVar8 = *(iVar8 + 0x18);
    do {
        iVar10 = iVar8;
        iVar8 = *(iVar10 + 0x568);
    } while (*(iVar10 + 0x568) != 0);
    pcVar7 = *(iVar10 + 0xf0);
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar7,0x80000d0);
        (*pcVar7)(iVar10);
    }
    return iVar4;
}


// ===== sym.mtdblock_remove_dev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001148 (size 8) =====

void sym.mtdblock_remove_dev.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    del_mtd_blktrans_dev();
    return;
}


// ===== sym.mtdblock_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001150 (size 8) =====

void sym.mtdblock_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0xc0);
    sym.write_cached_data(param_1);
    mutex_unlock(param_1 + 0xc0);
    iVar1 = *(param_1 + 0xb8) + -1;
    *(param_1 + 0xb8) = iVar1;
    if (iVar1 == 0) {
        if ((*(param_1 + 0xb0) >> 1 & 1) != 0) {
            iVar2 = *(param_1 + 0x18);
            do {
                iVar3 = iVar2;
                iVar2 = *(iVar3 + 0x568);
            } while (*(iVar3 + 0x568) != 0);
            pcVar4 = *(iVar3 + 0xf0);
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x80000d0);
                (*pcVar4)(iVar3);
            }
        }
        vfree(*(param_1 + 0xf0));
    }
    return;
}


// ===== sym.mtdblock_flush.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001158 (size 8) =====

uint sym.mtdblock_flush.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(param_1 + 0xc0);
    uVar2 = sym.write_cached_data(param_1);
    mutex_unlock(param_1 + 0xc0);
    iVar1 = *(param_1 + 0x18);
    do {
        iVar3 = iVar1;
        iVar1 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    pcVar4 = *(iVar3 + 0xf0);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x80000d0);
        (*pcVar4)(iVar3);
    }
    return uVar2;
}


// ===== sym.mtdblock_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.mtdblock_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong *param_1)

{
    int iVar1;
    char cVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x17) == 0) {
        cVar2 = *param_1[3];
        if (cVar2 == '\b' || cVar2 == '\x04') {
            _printk(0x8000138,**param_1,*(param_1[3] + 0x38));
        }
        *(param_1 + 0x17) = 1;
        __mutex_init(param_1 + 0x18,"&mtdblk->cache_mutex",obj.mtdblock_tr);
        *(param_1 + 0x104) = 0;
        if (((*(param_1[3] + 5) >> 4 & 1) == 0) && (iVar1 = *(param_1[3] + 0x10), iVar1 != 0)) {
            *(param_1 + 0x20) = iVar1;
            param_1[0x1e] = 0;
        }
    }
    else {
        *(param_1 + 0x17) = *(param_1 + 0x17) + 1;
    }
    return 0;
}


// ===== sym.mtdblock_readsect @ 0x08001168 (size 308) =====

uint64_t sym.mtdblock_readsect(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar9;
    ulong uVar10;
    code *pcVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar9 = arg2 << 9;
    uVar2 = *(arg1 + 0x100);
    uVar13 = uVar2;
    uStack_60 = 0;
    uVar10 = *(arg1 + 0x18);
    if (uVar2 == 0) {
        uVar7 = 0x200;
        uVar5 = mtd_read(uVar10,uVar9,0x200,&uStack_60,arg3);
    }
    else {
        uVar15 = 0x200;
        do {
            uVar7 = 0;
            if (uVar13 != 0) {
                uVar7 = uVar9 / uVar13;
            }
            iVar8 = uVar9 - uVar7 * uVar13;
            uVar4 = uVar2 - iVar8;
            uVar1 = uVar15;
            if (uVar4 <= uVar15) {
                uVar1 = uVar4;
            }
            uVar12 = uVar1;
            uVar7 = uVar12;
            if ((*(arg1 + 0x104) == 0) || (*(arg1 + 0xf8) != uVar9 - iVar8)) {
                uVar5 = mtd_read(uVar10,uVar9,uVar12,&uStack_60,arg3);
                if (uVar5 != 0) goto code_r0x08001260;
                if (uStack_60 != uVar12) {
                    uVar5 = 0xfffffffb;
                    goto code_r0x08001260;
                }
            }
            else {
                memcpy(arg3,*(arg1 + 0xf0) + iVar8);
            }
            arg3 = arg3 + uVar12;
            uVar9 = uVar12 + uVar9;
            uVar15 = uVar15 - uVar1;
        } while (0 < uVar15);
        uVar5 = 0;
    }
code_r0x08001260:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    auVar16 = __stack_chk_fail(uVar5);
    iVar6 = auVar16._0_8_;
    *extraout_x18 = sym.mtdblock_writesect;
    pcStack_b8 = sym.mtdblock_writesect;
    iVar8 = sp_el0;
    iStack_c8 = *(iVar8 + 0x5e0);
    puStack_c0 = &stack0xffffffffffffffb0;
    if ((*(iVar6 + 0xf0) == 0) && (*(iVar6 + 0x100) != 0)) {
        iVar8 = vmalloc(*(*(iVar6 + 0x18) + 0x10));
        *(iVar6 + 0xf0) = iVar8;
        if (iVar8 == 0) {
            uVar9 = 0xfffffffc;
            goto code_r0x0800144c;
        }
    }
    uVar2 = *(iVar6 + 0x100);
    uVar9 = uVar2;
    uVar13 = auVar16._8_8_ << 9;
    iVar8 = *(iVar6 + 0x18);
    uStack_f0 = 0;
    if (uVar2 == 0) {
        uVar9 = mtd_write(iVar8,uVar13,0x200,&uStack_f0,uVar7);
        uVar9 = uVar9 & 0xffffffff;
    }
    else {
        uVar15 = 0x200;
        do {
            uVar5 = 0;
            if (uVar9 != 0) {
                uVar5 = uVar13 / uVar9;
            }
            iVar14 = uVar5 * uVar9;
            uVar4 = uVar2 - (uVar13 - iVar14);
            uVar1 = uVar15;
            if (uVar4 <= uVar15) {
                uVar1 = uVar4;
            }
            if (uVar1 == uVar2) {
                uStack_d0 = 0;
                uStack_e8 = 0;
                uStack_e0 = uVar13;
                uStack_d8 = uVar9;
                uVar4 = mtd_erase(iVar8,&uStack_e0);
                if (uVar4 != 0) {
                    uVar9 = uVar4;
                    _printk(0x80000fe,uVar13,uVar2,*(iVar8 + 0x38));
                    goto code_r0x0800144c;
                }
                uVar4 = mtd_write(iVar8,uVar13,uVar9,&uStack_e8,uVar7);
                if (uVar4 != 0) {
code_r0x08001448:
                    uVar9 = uVar4;
                    goto code_r0x0800144c;
                }
                uVar5 = uVar9;
                if (uStack_e8 != uVar9) {
code_r0x08001418:
                    uVar9 = 0xfffffffb;
                    goto code_r0x0800144c;
                }
            }
            else {
                iVar3 = *(iVar6 + 0x104);
                if (iVar3 == 2) {
                    if (*(iVar6 + 0xf8) != iVar14) {
                        uVar4 = sym.write_cached_data(iVar6);
                        if (uVar4 != 0) goto code_r0x08001448;
                        iVar3 = *(iVar6 + 0x104);
                        goto code_r0x080013dc;
                    }
                }
                else {
code_r0x080013dc:
                    if ((iVar3 == 0) || (*(iVar6 + 0xf8) != iVar14)) {
                        *(iVar6 + 0x104) = 0;
                        uVar4 = mtd_read(iVar8,iVar14,uVar9,&uStack_f0,*(iVar6 + 0xf0));
                        if (uVar4 != 0) goto code_r0x08001448;
                        if (uStack_f0 != uVar9) goto code_r0x08001418;
                        *(iVar6 + 0xf8) = iVar14;
                        *(iVar6 + 0x100) = uVar2;
                        *(iVar6 + 0x104) = 1;
                    }
                }
                memcpy(*(iVar6 + 0xf0) + (uVar13 - iVar14),uVar7,uVar1);
                *(iVar6 + 0x104) = 2;
                uVar5 = uVar1;
            }
            uVar7 = uVar7 + uVar5;
            uVar13 = uVar5 + uVar13;
            uVar15 = uVar15 - uVar1;
        } while (0 < uVar15);
        uVar9 = 0;
    }
code_r0x0800144c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_c8) {
        iVar8 = __stack_chk_fail();
        *extraout_x18_00 = sym.mtdblock_flush;
        mutex_lock(iVar8 + 0xc0);
        uVar9 = sym.write_cached_data(iVar8);
        mutex_unlock(iVar8 + 0xc0);
        iVar8 = *(iVar8 + 0x18);
        do {
            iVar6 = iVar8;
            iVar8 = *(iVar6 + 0x568);
        } while (*(iVar6 + 0x568) != 0);
        pcVar11 = *(iVar6 + 0xf0);
        if (pcVar11 != NULL) {
            __cfi_slowpath_diag(0xcda853bfdc928661,pcVar11,0x80000d0);
            (*pcVar11)(iVar6);
        }
        return uVar9 & 0xffffffff;
    }
    return uVar9;
}


// ===== sym.mtdblock_writesect @ 0x0800129c (size 560) =====

int sym.mtdblock_writesect(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    code *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if ((*(arg1 + 0xf0) == 0) && (*(arg1 + 0x100) != 0)) {
        iVar8 = vmalloc(*(*(arg1 + 0x18) + 0x10));
        *(arg1 + 0xf0) = iVar8;
        if (iVar8 == 0) {
            iVar4 = -4;
            goto code_r0x0800144c;
        }
    }
    uVar2 = *(arg1 + 0x100);
    uVar9 = uVar2;
    uVar6 = arg2 << 9;
    iVar8 = *(arg1 + 0x18);
    uStack_90 = 0;
    if (uVar2 == 0) {
        iVar4 = mtd_write(iVar8,uVar6,0x200,&uStack_90,arg3);
    }
    else {
        uVar11 = 0x200;
        do {
            uVar5 = 0;
            if (uVar9 != 0) {
                uVar5 = uVar6 / uVar9;
            }
            iVar10 = uVar5 * uVar9;
            uVar3 = uVar2 - (uVar6 - iVar10);
            uVar1 = uVar11;
            if (uVar3 <= uVar11) {
                uVar1 = uVar3;
            }
            if (uVar1 == uVar2) {
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = uVar6;
                uStack_78 = uVar9;
                iVar4 = mtd_erase(iVar8,&uStack_80);
                if (iVar4 != 0) {
                    _printk(0x80000fe,uVar6,uVar2,*(iVar8 + 0x38));
                    goto code_r0x0800144c;
                }
                iVar4 = mtd_write(iVar8,uVar6,uVar9,&uStack_88,arg3);
                if (iVar4 != 0) goto code_r0x0800144c;
                uVar5 = uVar9;
                if (uStack_88 != uVar9) {
code_r0x08001418:
                    iVar4 = -5;
                    goto code_r0x0800144c;
                }
            }
            else {
                iVar4 = *(arg1 + 0x104);
                if (iVar4 == 2) {
                    if (*(arg1 + 0xf8) != iVar10) {
                        iVar4 = sym.write_cached_data(arg1);
                        if (iVar4 == 0) {
                            iVar4 = *(arg1 + 0x104);
                            goto code_r0x080013dc;
                        }
                        goto code_r0x0800144c;
                    }
                }
                else {
code_r0x080013dc:
                    if ((iVar4 == 0) || (*(arg1 + 0xf8) != iVar10)) {
                        *(arg1 + 0x104) = 0;
                        iVar4 = mtd_read(iVar8,iVar10,uVar9,&uStack_90,*(arg1 + 0xf0));
                        if (iVar4 != 0) goto code_r0x0800144c;
                        if (uStack_90 != uVar9) goto code_r0x08001418;
                        *(arg1 + 0xf8) = iVar10;
                        *(arg1 + 0x100) = uVar2;
                        *(arg1 + 0x104) = 1;
                    }
                }
                memcpy(*(arg1 + 0xf0) + (uVar6 - iVar10),arg3,uVar1);
                *(arg1 + 0x104) = 2;
                uVar5 = uVar1;
            }
            arg3 = arg3 + uVar5;
            uVar6 = uVar5 + uVar6;
            uVar11 = uVar11 - uVar1;
        } while (0 < uVar11);
        iVar4 = 0;
    }
code_r0x0800144c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar4;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.mtdblock_flush;
    mutex_lock(iVar8 + 0xc0);
    iVar4 = sym.write_cached_data(iVar8);
    mutex_unlock(iVar8 + 0xc0);
    iVar8 = *(iVar8 + 0x18);
    do {
        iVar10 = iVar8;
        iVar8 = *(iVar10 + 0x568);
    } while (*(iVar10 + 0x568) != 0);
    pcVar7 = *(iVar10 + 0xf0);
    if (pcVar7 != NULL) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar7,0x80000d0);
        (*pcVar7)(iVar10);
    }
    return iVar4;
}


// ===== sym.mtdblock_flush @ 0x080014cc (size 152) =====

uint sym.mtdblock_flush(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0xc0);
    uVar2 = sym.write_cached_data(arg1);
    mutex_unlock(arg1 + 0xc0);
    iVar1 = *(arg1 + 0x18);
    do {
        iVar3 = iVar1;
        iVar1 = *(iVar3 + 0x568);
    } while (*(iVar3 + 0x568) != 0);
    pcVar4 = *(iVar3 + 0xf0);
    if (pcVar4 != NULL) {
        __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x80000d0);
        (*pcVar4)(iVar3);
    }
    return uVar2;
}


// ===== sym.mtdblock_open @ 0x08001564 (size 180) =====

ulong sym.mtdblock_open(int64_t arg1)

{
    int iVar1;
    char cVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xb8) == 0) {
        cVar2 = **(arg1 + 0x18);
        if (cVar2 == '\b' || cVar2 == '\x04') {
            _printk(0x8000138,**arg1,*(*(arg1 + 0x18) + 0x38));
        }
        *(arg1 + 0xb8) = 1;
        __mutex_init(arg1 + 0xc0,"&mtdblk->cache_mutex",obj.mtdblock_tr);
        *(arg1 + 0x104) = 0;
        if (((*(*(arg1 + 0x18) + 5) >> 4 & 1) == 0) && (iVar1 = *(*(arg1 + 0x18) + 0x10), iVar1 != 0)) {
            *(arg1 + 0x100) = iVar1;
            *(arg1 + 0xf0) = 0;
        }
    }
    else {
        *(arg1 + 0xb8) = *(arg1 + 0xb8) + 1;
    }
    return 0;
}


// ===== sym.mtdblock_release @ 0x08001618 (size 176) =====

void sym.mtdblock_release(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0xc0);
    sym.write_cached_data(arg1);
    mutex_unlock(arg1 + 0xc0);
    iVar1 = *(arg1 + 0xb8) + -1;
    *(arg1 + 0xb8) = iVar1;
    if (iVar1 == 0) {
        if ((*(arg1 + 0xb0) >> 1 & 1) != 0) {
            iVar2 = *(arg1 + 0x18);
            do {
                iVar3 = iVar2;
                iVar2 = *(iVar3 + 0x568);
            } while (*(iVar3 + 0x568) != 0);
            pcVar4 = *(iVar3 + 0xf0);
            if (pcVar4 != NULL) {
                __cfi_slowpath_diag(0xcda853bfdc928661,pcVar4,0x80000d0);
                (*pcVar4)(iVar3);
            }
        }
        vfree(*(arg1 + 0xf0));
    }
    return;
}


// ===== sym.mtdblock_add_mtd @ 0x080016c8 (size 148) =====

void sym.mtdblock_add_mtd(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint8_t uVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = kmem_cache_alloc_trace(_memcpy,0xdc0,0x108);
    if (piVar4 != NULL) {
        uVar5 = *(arg2 + 8);
        uVar1 = *(arg2 + 0x40);
        piVar4[3] = arg2;
        uVar2 = *(arg2 + 5);
        *piVar4 = arg1;
        *(piVar4 + 10) = uVar1;
        piVar4[0xb] = uVar5 >> 9;
        if ((uVar2 >> 2 & 1) == 0) {
            *(piVar4 + 0xc) = 1;
        }
        iVar3 = add_mtd_blktrans_dev(piVar4);
        if (iVar3 != 0) {
            kfree(piVar4);
        }
    }
    return;
}


// ===== sym.mtdblock_remove_dev @ 0x0800175c (size 36) =====

void sym.mtdblock_remove_dev(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    del_mtd_blktrans_dev();
    return;
}


// ===== sym.write_cached_data @ 0x08001780 (size 260) =====

uchar * sym.write_cached_data(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint64_t uStack_68;
    ulong uStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    if (*(arg1 + 0x104) != 2) {
        puVar5 = NULL;
        goto code_r0x08001828;
    }
    iVar7 = *(arg1 + 0x18);
    uVar1 = *(arg1 + 0xf0);
    uVar2 = *(arg1 + 0xf8);
    uVar6 = *(arg1 + 0x100);
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_60 = uVar2;
    uStack_58 = uVar6;
    uVar4 = mtd_erase(iVar7,&uStack_60);
    if (uVar4 == 0) {
        uVar4 = mtd_write(iVar7,uVar2,uVar6,&uStack_68,uVar1);
        if (uVar4 != 0) goto code_r0x08001800;
        uVar4 = 0;
        if (uStack_68 != uVar6) {
            uVar4 = 0xfffffffb;
        }
        puVar5 = uVar4;
    }
    else {
        _printk(0x80000fe,uVar2,uVar6,*(iVar7 + 0x38));
code_r0x08001800:
        puVar5 = uVar4;
        if (uVar4 != 0xfffffffb) goto code_r0x08001828;
    }
    *(arg1 + 0x104) = 0;
code_r0x08001828:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        auVar8 = __stack_chk_fail();
        puVar5 = auVar8._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                break;
            default:
                return puVar5;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x80018dc);
        (*pcVar3)();
    }
    return puVar5;
}


// ===== sym.__cfi_check_fail @ 0x08001884 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018c8

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
    //switch table (4 cases) at 0x80000f0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018dc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080018e4 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    register_mtd_blktrans(obj.mtdblock_tr);
    return;
}


// ===== sym.cleanup_module @ 0x08001910 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    deregister_mtd_blktrans(obj.mtdblock_tr);
    return;
}

