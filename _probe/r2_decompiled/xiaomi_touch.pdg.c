// decompiled from xiaomi_touch by radare2+r2ghidra (pdg)

// ===== sym.proc_open @ 0x08006b58 (size 364) =====

ulong sym.proc_open(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    code *pcVar3;
    uint8_t *puVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = PDE_DATA();
    uVar2 = *puVar4;
    uVar8 = uVar2;
    if (uVar8 < 3) {
        iVar1 = *(arg1 + 0x18) + 0x38;
        mutex_lock(obj.tp_proc_mutex + uVar8 * 0x30);
        *(arg1 + 0xd8) = puVar4;
        uVar5 = strncmp("",iVar1,0xc);
        if (uVar5 == 0) {
            func_0x08004988(uVar5,"","");
            iVar6 = func_0x08004c78(0x3000,3);
            if (1 < uVar2) goto code_r0x08006cbc;
            if (0x10 < uVar8 * 8) goto code_r0x08006cc0;
            *(obj.tp_proc_result_buf + uVar8 * 8) = iVar6;
            if (iVar6 != 0) goto code_r0x08006c58;
            pcVar7 = "";
        }
        else {
            func_0x08004988(0,"","");
            iVar6 = func_0x08004c78(0x100,3);
            if (1 < uVar2) goto code_r0x08006cbc;
            if (0x10 < uVar8 * 8) {
code_r0x08006cc0:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x8006cc4);
                (*pcVar3)();
            }
            *(obj.tp_proc_result_buf + uVar8 * 8) = iVar6;
            if (iVar6 != 0) {
code_r0x08006c58:
                *(obj.tp_proc_result_length + uVar8 * 8) = 0;
                func_0x08004988(0,"","",iVar1);
                return 0;
            }
            pcVar7 = "";
        }
        func_0x08004988(2,pcVar7,"");
        return 0xffffffff;
    }
code_r0x08006cbc:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8006cc0);
    (*pcVar3)();
}


// ===== sym.proc_tp_read @ 0x08006cc4 (size 1372) =====

int64_t sym.proc_tp_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    uint *puVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint8_t *puVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    puVar11 = *(arg1 + 0xd8);
    iStack_6c = 0;
    iVar8 = *(arg1 + 0x18);
    if (puVar11 == NULL) {
code_r0x08007190:
        iVar8 = -0xe;
    }
    else {
        uVar1 = *puVar11;
        iVar9 = uVar1;
        uVar10 = uVar1;
        func_0x08004988(0,"","",*arg4);
        if (*arg4 == 0) {
            iVar8 = iVar8 + 0x38;
            func_0x08004988(0,"","",iVar8);
            uVar5 = strncmp("",iVar8,10);
            if (uVar5 == 0) {
                func_0x08004988(uVar5,"","");
                pcVar2 = *(puVar11 + 0x130);
                if (pcVar2 != NULL) {
                    __cfi_slowpath_diag(0xf8ea10d0b8f3433,pcVar2,0x8000c10);
                    (*pcVar2)(puVar11 + 0xd7);
                }
                if (1 < uVar1) goto code_r0x0800721c;
                uVar7 = iVar9 * 8;
                if (0x10 < uVar7) goto code_r0x08007204;
                iVar3 = snprintf(*(obj.tp_proc_result_buf + uVar7),0x100,"",puVar11 + 0xd7);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(obj.tp_proc_result_buf + uVar7) + iStack_6c,0x100 - iStack_6c,"",puVar11 + 0x97);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(obj.tp_proc_result_buf + uVar7) + iStack_6c,0x100 - iStack_6c,"",puVar11 + 1);
                iStack_6c = iStack_6c + iVar3;
                iVar3 = snprintf(*(obj.tp_proc_result_buf + uVar7) + iStack_6c,0x100 - iStack_6c,"","");
                iStack_6c = iStack_6c + iVar3;
                *(obj.tp_proc_result_length + uVar7) = iStack_6c;
            }
            else {
                uVar5 = strncmp("",iVar8,0x10);
                if (uVar5 == 0) {
                    func_0x08004988(uVar5,"","");
                    pcVar2 = *(puVar11 + 0x128);
                    if (pcVar2 == NULL) {
                        if (1 < uVar1) goto code_r0x0800721c;
                        iStack_6c = 4;
                        puVar6 = *(obj.tp_proc_result_buf + uVar10 * 8);
                        *(puVar6 + 1) = 0;
                        *puVar6 = 0x6c6c756e;
                    }
                    else {
                        __cfi_slowpath_diag(0x913123bfd37872b,pcVar2,0x8000c30);
                        (*pcVar2)(puVar11 + 0x4f);
                        if (1 < uVar1) goto code_r0x0800721c;
                        iStack_6c = snprintf(*(obj.tp_proc_result_buf + uVar10 * 8),0x100,"",puVar11[0x4f],
                                             puVar11[0x50],puVar11[0x51],puVar11[0x52],puVar11[0x53],puVar11[0x54],
                                             puVar11[0x55],puVar11[0x56]);
                    }
                    *(obj.tp_proc_result_length + uVar10 * 8) = iStack_6c;
                }
                else {
                    iVar3 = strncmp("",iVar8,0xb);
                    if (iVar3 == 0) {
                        if (1 < uVar1) goto code_r0x0800721c;
                        if (8 < iVar9 * 4) goto code_r0x08007204;
                        func_0x08004988(0,"","",*(obj.self_test_result + iVar9 * 4));
                        uVar7 = iVar9 * 8;
                        if (0x10 < uVar7) goto code_r0x08007204;
                        iStack_6c = snprintf(*(obj.tp_proc_result_buf + uVar7),0x100,0x800216a,
                                             *(obj.self_test_result + iVar9 * 4));
                        *(obj.tp_proc_result_length + uVar7) = iStack_6c;
                    }
                    else {
                        uVar5 = strncmp("",iVar8,0xc);
                        if (uVar5 == 0) {
                            func_0x08004988(uVar5,"","");
                            pcVar2 = *(puVar11 + 0x120);
                            if (pcVar2 == NULL) {
                                if (1 < uVar1) goto code_r0x0800721c;
                                *(obj.tp_proc_result_length + uVar10 * 8) = 0;
                            }
                            else {
                                __cfi_slowpath_diag(0x420a964126e89b4e,pcVar2,0x8000c50);
                                if (1 < uVar1) goto code_r0x0800721c;
                                (*pcVar2)(*(obj.tp_proc_result_buf + uVar1 * 8),&iStack_6c);
                                *(obj.tp_proc_result_length + uVar1 * 8) = iStack_6c;
                            }
                        }
                        else {
                            if (1 < uVar1) goto code_r0x0800721c;
                            uVar10 = uVar1;
                        }
                    }
                }
            }
joined_r0x08007030:
            if ((uVar10 == 2) || (0x10 < uVar10 * 8)) {
code_r0x08007204:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8007208);
                (*pcVar2)();
            }
            uVar7 = *(obj.tp_proc_result_length + uVar10 * 8) - *arg4;
            if (arg3 <= uVar7) {
                uVar7 = arg3;
            }
            func_0x08004988(0,"","",*(obj.tp_proc_result_length + uVar10 * 8),uVar7 & 0xffffffff,arg3);
            iVar3 = uVar7;
            if (iVar3 != 0) {
                if (0x7fffffff00000000 < uVar7 << 0x20) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8007210);
                    (*pcVar2)();
                }
                noname_1 = __check_object_size(*(obj.tp_proc_result_buf + uVar10 * 8) + *arg4,iVar3,1);
                iVar4 = sym._copy_to_user(arg2,noname_1,iVar3);
                if (iVar4 != 0) {
                    func_0x08004988(2,"","");
                    goto code_r0x08007190;
                }
            }
            iVar8 = iVar3;
            *arg4 = *arg4 + iVar8;
        }
        else {
            if (1 < uVar1) goto code_r0x0800721c;
            if (*arg4 < *(obj.tp_proc_result_length + uVar10 * 8)) goto joined_r0x08007030;
            iVar8 = 0;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x0800721c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8007220);
    (*pcVar2)();
}


// ===== sym.proc_tp_write @ 0x08007220 (size 644) =====

int64_t sym.proc_tp_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    uint8_t *arg1_00;
    uint8_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = *(arg1 + 0xd8);
    if (puVar5 != NULL) {
        iVar4 = *(arg1 + 0x18) + 0x38;
        func_0x08004988(0,"","",iVar4);
        iVar1 = strncmp("",iVar4,10);
        if (iVar1 == 0) {
            arg1_00 = puVar5 + 1;
            arg1_00[0] = 0;
            arg1_00[1] = 0;
            arg1_00[2] = 0;
            arg1_00[3] = 0;
            arg1_00[4] = 0;
            arg1_00[5] = 0;
            arg1_00[6] = 0;
            arg1_00[7] = 0;
            puVar5[0x31] = 0;
            puVar5[0x32] = 0;
            puVar5[0x33] = 0;
            puVar5[0x34] = 0;
            puVar5[0x35] = 0;
            puVar5[0x36] = 0;
            puVar5[0x37] = 0;
            puVar5[0x38] = 0;
            puVar5[0x39] = 0;
            puVar5[0x3a] = 0;
            puVar5[0x3b] = 0;
            puVar5[0x3c] = 0;
            puVar5[0x3d] = 0;
            puVar5[0x3e] = 0;
            puVar5[0x3f] = 0;
            puVar5[0x40] = 0;
            puVar5[0x21] = 0;
            puVar5[0x22] = 0;
            puVar5[0x23] = 0;
            puVar5[0x24] = 0;
            puVar5[0x25] = 0;
            puVar5[0x26] = 0;
            puVar5[0x27] = 0;
            puVar5[0x28] = 0;
            puVar5[0x29] = 0;
            puVar5[0x2a] = 0;
            puVar5[0x2b] = 0;
            puVar5[0x2c] = 0;
            puVar5[0x2d] = 0;
            puVar5[0x2e] = 0;
            puVar5[0x2f] = 0;
            puVar5[0x30] = 0;
            puVar5[0x11] = 0;
            puVar5[0x12] = 0;
            puVar5[0x13] = 0;
            puVar5[0x14] = 0;
            puVar5[0x15] = 0;
            puVar5[0x16] = 0;
            puVar5[0x17] = 0;
            puVar5[0x18] = 0;
            puVar5[0x19] = 0;
            puVar5[0x1a] = 0;
            puVar5[0x1b] = 0;
            puVar5[0x1c] = 0;
            puVar5[0x1d] = 0;
            puVar5[0x1e] = 0;
            puVar5[0x1f] = 0;
            puVar5[0x20] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            puVar5[0xb] = 0;
            puVar5[0xc] = 0;
            puVar5[0xd] = 0;
            puVar5[0xe] = 0;
            puVar5[0xf] = 0;
            puVar5[0x10] = 0;
            iVar4 = arg3;
            if (0x3f < arg3) {
                func_0x08004988(2,"","",arg3);
                iVar4 = 0x3f;
            }
            __check_object_size(arg1_00,iVar4,0);
            iVar4 = sym._copy_from_user(arg1_00,arg2,iVar4);
            if (iVar4 == 0) {
                func_0x08004988(1,"","",arg1_00);
                func_0x08004988(1,"","",puVar5 + 0xd7);
                func_0x08004988(1,"","",puVar5 + 0x97);
                func_0x08004988(1,"","","");
                return arg3;
            }
            pcVar2 = "";
        }
        else {
            iVar1 = strncmp("",iVar4,0xb);
            if (iVar1 != 0) {
                return arg3;
            }
            *0x8006778 = 0;
            *0x8006780 = 0;
            *0x8006768 = 0;
            *0x8006770 = 0;
            *0x8006758 = 0;
            *0x8006760 = 0;
            _obj.proc_tp_write.self_test_cmd = 0;
            *0x8006750 = 0;
            iVar4 = arg3;
            if (0x3f < arg3) {
                func_0x08004988(2,"","",arg3);
                iVar4 = 0x3f;
            }
            __check_object_size(obj.proc_tp_write.self_test_cmd,iVar4,0);
            iVar4 = sym._copy_from_user(0x8006748,arg2,iVar4);
            if (iVar4 == 0) {
                pcVar3 = *(puVar5 + 0x118);
                if (pcVar3 != NULL) {
                    __cfi_slowpath_diag(0x420a964126e89b4e,pcVar3,0x8000c70);
                    if (2 < *puVar5) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x80074a4);
                        (*pcVar3)();
                    }
                    (*pcVar3)(obj.proc_tp_write.self_test_cmd,obj.self_test_result + *puVar5 * 4);
                }
                func_0x08004988(2,"","",obj.proc_tp_write.self_test_cmd);
                return arg3;
            }
            pcVar2 = "";
        }
        func_0x08004988(2,pcVar2,"");
    }
    return -0xe;
}


// ===== sym.proc_release @ 0x080074a4 (size 204) =====

ulong sym.proc_release(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = **(arg2 + 0xd8);
    if (1 < uVar2) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800756c);
        (*pcVar1)();
    }
    uVar3 = uVar2 * 8;
    if (uVar3 < 0x11) {
        iVar4 = *(arg2 + 0x18);
        if (*(obj.tp_proc_result_buf + uVar2 * 8) != 0) {
            func_0x08004988(0,"","");
            kvfree(*(obj.tp_proc_result_buf + uVar3));
            *(obj.tp_proc_result_buf + uVar3) = 0;
        }
        *(obj.tp_proc_result_length + uVar2 * 8) = 0;
        func_0x08004988(0,"","",iVar4 + 0x38);
        mutex_unlock(obj.tp_proc_mutex + uVar2 * 0x30);
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(1,0x8007570);
    (*pcVar1)();
}


// ===== sym._copy_to_user @ 0x08007570 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym._copy_to_user_1 @ 0x080076e4 (size 312) =====

int64_t sym._copy_to_user_1(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym._copy_from_user @ 0x08007858 (size 376) =====

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
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user_1 @ 0x08007a0c (size 364) =====

int64_t sym._copy_from_user_1(int64_t arg1,int64_t arg2)

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
    bVar4 = 0xfffffffffffffdf7 < uVar6;
    uVar6 = uVar6 + 0x208;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 0x208;
    }
    else {
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,0x208);
        if ((_netlink_unicast >> 0x18 & 1) == 0) {
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
        if (iVar5 == 0) {
            return 0;
        }
    }
    memset((arg1 - iVar5) + 0x208,0,iVar5);
    return iVar5;
}


// ===== sym.xiaomi_touch_operation_init @ 0x08007bb4 (size 140) =====

int sym.xiaomi_touch_operation_init(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        func_0x08004988(2,"","");
        iVar1 = -1;
    }
    else {
        iVar1 = misc_register(obj.misc_dev.llvm.16834981253627934478);
        *0x8003000 = arg1;
        if (iVar1 != 0) {
            func_0x08004988(2,"","",iVar1);
        }
    }
    return iVar1;
}


// ===== sym.xiaomi_touch_operation_remove @ 0x08007c40 (size 48) =====

ulong sym.xiaomi_touch_operation_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    misc_deregister(obj.misc_dev.llvm.16834981253627934478);
    return 0;
}


// ===== sym.xiaomi_touch_dev_read @ 0x08007c70 (size 488) =====

ulong sym.xiaomi_touch_dev_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0xd8);
    iVar6 = func_0x08004cf4(*(iVar8 + 0x11));
    if (iVar6 == 0) {
        uVar7 = 0;
    }
    else if (arg3 == 0x208) {
        mutex_lock(iVar6 + 0x14a8);
        piVar1 = iVar8 + 0x30;
        func_0x08004988(0,"","",*piVar1,*(iVar6 + 0x54));
        if (*piVar1 == *(iVar6 + 0x54)) {
            func_0x08004988(0,"","");
            uVar7 = 0;
        }
        else {
            noname_1 = func_0x08004988(0,"","",0x208);
            if (10 < *piVar1) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8007e1c);
                (*pcVar4)();
            }
            iVar5 = sym._copy_to_user_1(arg2,noname_1,0x208);
            if (iVar5 == 0) {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                        *piVar1 = *piVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                uVar7 = 0x208;
                if (9 < *piVar1) {
                    *piVar1 = 0;
                }
            }
            else {
                func_0x08004988(2,"","");
                uVar7 = 0xffffffffffffffff;
            }
        }
        func_0x08004988(0,"","",uVar7);
        mutex_unlock(iVar6 + 0x14a8);
    }
    else {
        func_0x08004988(2,"","",arg3,0x208);
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.xiaomi_touch_dev_write @ 0x08007e58 (size 16) =====

int64_t sym.xiaomi_touch_dev_write(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    return arg1;
}


// ===== sym.xiaomi_touch_dev_poll @ 0x08007e68 (size 272) =====

uint32_t sym.xiaomi_touch_dev_poll(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xd8);
    iVar1 = func_0x08004cf4(*(iVar5 + 0x11));
    uVar3 = 0;
    if (iVar1 != 0) {
        if (((arg2 != 0) && (iVar5 + 0x18 != 0)) && (pcVar4 = *arg2, pcVar4 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000c90);
            (*pcVar4)(arg1,iVar5 + 0x18,arg2);
        }
        uVar2 = *(iVar5 + 0x30) != *(iVar1 + 0x54);
        uVar3 = uVar2 << 6;
        if (*(iVar5 + 0x34) != *(iVar1 + 4)) {
            uVar3 = uVar2 << 6 | 2;
        }
        if (*(iVar5 + 0x38) != *(iVar1 + 0x20)) {
            uVar3 = uVar3 | 0x80;
        }
        func_0x08004988(0,"","",uVar3);
    }
    return uVar3;
}


// ===== sym.xiaomi_touch_dev_ioctl @ 0x08007f90 (size 1968) =====

//WARNING: Switch with 1 destination removed at 0x08008024

ulong sym.xiaomi_touch_dev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int *extraout_x8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar5 = arg2;
    iVar6 = *(iVar6 + 0x5e0);
    if ((uVar5 & 0xff00) == 0x5400) {
        uVar1 = uVar5 & 0xff;
        uVar5 = uVar5 >> 0x10 & 0x3fff;
        func_0x08004988(0,"","",uVar1,uVar5,0x54);
        if (uVar1 < 6) {
            do {
    //WARNING: Do nothing block with infinite loop
    //switch table (5 cases) at 0x80032a8
            } while( true );
        }
        func_0x08004988(2,"","",0x54,uVar1,uVar5);
    }
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iVar6) {
        iVar4 = __stack_chk_fail();
        Hint_Prefetch(extraout_x8,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(extraout_x8,0x10);
            if (bVar3) {
                *extraout_x8 = *extraout_x8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (*(iVar4 + 0xc) <= *extraout_x8) {
            *extraout_x8 = 0;
        }
        func_0x08004988(0,"","",0xffffffea);
    }
    return 0xffffffffffffffea;
}


// ===== sym.xiaomi_touch_dev_mmap @ 0x08008770 (size 364) =====

ulong sym.xiaomi_touch_dev_mmap(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0xd8);
    iVar1 = *arg2;
    iVar6 = *(arg2 + 8);
    iVar7 = *(arg2 + 0x98);
    iVar3 = func_0x08004cf4(*(iVar8 + 0x11));
    if (iVar3 == 0) {
        pcVar4 = "";
        goto code_r0x08008884;
    }
    func_0x08004988(1,"","",*(iVar8 + 0x10));
    if (*(iVar8 + 0x10) == '\x02') {
        func_0x08004988(1,"","");
        uVar5 = *(iVar3 + 0x38);
joined_r0x080087fc:
        if (uVar5 != 0) {
            uVar5 = iVar7 + (uVar5 >> 0xc);
            iVar6 = iVar6 - iVar1;
            iVar2 = remap_pfn_range(arg2,iVar1,uVar5 & 0xfffffffffffff,iVar6,0x68000000000fc3);
            if (iVar2 != 0) {
                func_0x08004988(2,"","",uVar5 & 0xffffffff,iVar6);
                return 0xffffffff;
            }
            func_0x08004988(1,"","",uVar5 & 0xffffffff,iVar6);
            return 0;
        }
    }
    else if (*(iVar8 + 0x10) == '\x01') {
        func_0x08004988(1,"","");
        uVar5 = *(iVar3 + 0x18);
        goto joined_r0x080087fc;
    }
    pcVar4 = "";
code_r0x08008884:
    func_0x08004988(2,pcVar4,"");
    return 0xffffffff;
}


// ===== sym.xiaomi_touch_dev_open @ 0x080088dc (size 200) =====

ulong sym.xiaomi_touch_dev_open(ulong noname_0,int64_t arg1)

{
    int16_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = func_0x08004c00(0x40,3);
    if (iVar2 == 0) {
        func_0x08004988(2,"","");
        uVar3 = 0xffffffff;
    }
    else {
        **0x8003000 = **0x8003000 + 1;
        *(iVar2 + 0x11) = 0xff;
        __init_waitqueue_head(iVar2 + 0x18,"",obj.xiaomi_touch_dev_open.__key);
        piVar1 = *0x8003000;
        *(arg1 + 0xd8) = iVar2;
        func_0x08004988(0,"","",iVar2,*piVar1);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.xiaomi_touch_dev_release @ 0x080089a4 (size 180) =====

ulong sym.xiaomi_touch_dev_release(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int16_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(arg1 + 0xd8);
    iVar4 = func_0x08004cf4(*(piVar6 + 0x11));
    if (iVar4 != 0) {
        _raw_spin_lock(iVar4 + 0x50);
        uVar5 = __list_del_entry_valid(piVar6);
        if ((uVar5 & 1) != 0) {
            iVar1 = *piVar6;
            piVar2 = piVar6[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        piVar6[1] = -0x2152fffffffffede;
        _raw_spin_unlock(iVar4 + 0x50);
        synchronize_rcu();
    }
    iVar3 = **0x8003000;
    **0x8003000 = iVar3 + -1;
    func_0x08004988(0,"","",piVar6,iVar3 + -1);
    kfree(piVar6);
    return 0;
}


// ===== sym.list_add_tail_rcu @ 0x08008a58 (size 88) =====

void sym.list_add_tail_rcu(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg2 + 8);
    uVar1 = __list_add_valid(arg1,piVar2,arg2);
    if ((uVar1 & 1) != 0) {
        *arg1 = arg2;
        *(arg1 + 8) = piVar2;
        *piVar2 = arg1;
        *(arg2 + 8) = arg1;
    }
    return;
}


// ===== sym.update_fod_press_status @ 0x08008ab0 (size 144) =====

ulong sym.update_fod_press_status(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1;
    mutex_lock(obj.fod_press_status_mutex);
    if (*0x8006000 != iVar1) {
        func_0x08004988(1,"","",arg1 & 0xffffffff);
        *0x8006000 = iVar1;
        sysfs_notify(CONCAT44(*0x8006004,iVar1),0,"");
    }
    mutex_unlock(obj.fod_press_status_mutex);
    return 0;
}


// ===== sym.update_palm_sensor_value @ 0x08008b40 (size 144) =====

ulong sym.update_palm_sensor_value(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1;
    mutex_lock(obj.palm_mutex);
    if (*0x8006000 != iVar1) {
        func_0x08004988(2,"","",arg1 & 0xffffffff);
        *0x8006000 = iVar1;
        sysfs_notify(CONCAT44(*0x8006004,iVar1),0,"");
    }
    mutex_unlock(obj.palm_mutex);
    return 0;
}


// ===== sym.get_xiaomi_touch_class @ 0x08008bd0 (size 20) =====

ulong sym.get_xiaomi_touch_class(void)

{
    return *0x8006000;
}


// ===== sym.update_get_ic_current_value @ 0x08008be4 (size 52) =====

void sym.update_get_ic_current_value(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    memcpy(obj.thp_ic_cmd_data_common_data.llvm.16959356077441606656,arg1,0x208);
    return;
}


// ===== sym.xiaomi_touch_sys_init @ 0x08008c18 (size 248) =====

int sym.xiaomi_touch_sys_init(void)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    func_0x08004988(2,"","");
    *0x8006000 = __class_create(obj.__this_module,"",obj.xiaomi_touch_sys_init.__key);
    if (*0x8006000 == 0) {
        pcVar2 = "";
    }
    else {
        *0x8006000 = device_create(*0x8006000,0,0x54,0,"");
        if (*0x8006000 != 0) {
            *0x80069c8 = obj.touch_attr_group;
            iVar1 = sysfs_create_group();
            if (iVar1 == 0) {
                return 0;
            }
            func_0x08004988(2,"","",iVar1);
            return iVar1;
        }
        pcVar2 = "";
    }
    *0x8006000 = 0;
    func_0x08004988(2,pcVar2,"");
    return -1;
}


// ===== sym.xiaomi_touch_sys_remove @ 0x08008d10 (size 104) =====

ulong sym.xiaomi_touch_sys_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8006000 != 0) {
        sysfs_remove_group(*0x8006000,obj.xiaomi_touch_sys_init.__key);
        device_destroy(*0x8006000,0x54);
        *0x8006000 = 0;
    }
    if (*0x8006000 != 0) {
        class_destroy();
        *0x8006000 = 0;
    }
    return 0;
}


// ===== sym.show_fod_press_status @ 0x08008d78 (size 64) =====

int64_t sym.show_fod_press_status(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_fod_press_status @ 0x08008db8 (size 16) =====

int64_t sym.store_fod_press_status(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_panel_vendor @ 0x08008dc8 (size 124) =====

ulong sym.show_panel_vendor(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = func_0x08004d78(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x170);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000d90);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            *(arg2 + 1) = 0;
            *arg2 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.store_panel_vendor @ 0x08008e44 (size 16) =====

int64_t sym.store_panel_vendor(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_panel_color @ 0x08008e54 (size 124) =====

ulong sym.show_panel_color(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = func_0x08004d78(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x178);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000db0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            *(arg2 + 1) = 0;
            *arg2 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.store_panel_color @ 0x08008ed0 (size 16) =====

int64_t sym.store_panel_color(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_panel_display @ 0x08008ee0 (size 124) =====

ulong sym.show_panel_display(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = func_0x08004d78(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x180);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x605e5176d60dacab,pcVar4,0x8000dd0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            *(arg2 + 1) = 0;
            *arg2 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.store_panel_display @ 0x08008f5c (size 16) =====

int64_t sym.store_panel_display(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_touch_vendor @ 0x08008f6c (size 124) =====

ulong sym.show_touch_vendor(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = func_0x08004d78(0);
    uVar3 = 0;
    if (iVar2 != 0) {
        pcVar4 = *(iVar2 + 0x188);
        if (pcVar4 == NULL) {
            uVar3 = 0;
        }
        else {
            __cfi_slowpath_diag(0x301b554b3b72517f,pcVar4,0x8000df0);
            uVar1 = (*pcVar4)();
            uVar3 = 1;
            *(arg2 + 1) = 0;
            *arg2 = uVar1;
        }
    }
    return uVar3;
}


// ===== sym.store_touch_vendor @ 0x08008fe8 (size 16) =====

int64_t sym.store_touch_vendor(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_touch_doze_analysis @ 0x08008ff8 (size 64) =====

int64_t sym.show_touch_doze_analysis(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_touch_doze_analysis @ 0x08009038 (size 268) =====

int64_t sym.store_touch_doze_analysis(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = func_0x08004d78(0);
    uStack_3c = 0;
    iVar2 = sscanf(arg2,0x8000ef2,&uStack_3c);
    if (-1 < iVar2) {
        if (pcVar3 == NULL) goto code_r0x080090c4;
        pcVar3 = *(pcVar3 + 0x198);
        if (pcVar3 == NULL) goto code_r0x080090c4;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x08009120;
        while( true ) {
            *0x8006000 = (*pcVar3)(uStack_3c);
code_r0x080090c4:
            func_0x08004988(1,"","",uStack_3c);
code_r0x080090e8:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x08009120:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e10);
        }
        return arg3;
    }
    arg3 = -0x16;
    goto code_r0x080090e8;
}


// ===== sym.show_touch_ic_buffer @ 0x08009144 (size 220) =====

int64_t sym.show_touch_ic_buffer(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = func_0x08004d78(0);
    func_0x08004988(1,"","",*0x8006000);
    if ((iVar2 == 0) || (*(iVar2 + 400) == 0)) {
        iVar2 = 0;
    }
    else {
        uVar3 = func_0x08004c00(0x1000,3);
        pcVar4 = *(iVar2 + 400);
        __cfi_slowpath_diag(0x815e38a849dd56af,pcVar4,0x8000e30);
        (*pcVar4)(*0x8006000,uVar3);
        iVar1 = snprintf(arg2,0x1000,0x8001461,uVar3);
        kfree(uVar3);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.store_touch_ic_buffer @ 0x08009220 (size 128) =====

int64_t sym.store_touch_ic_buffer(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sscanf(arg1,"",obj.ic_buffer_addr);
    pcVar1 = "";
    if (-1 < iVar3) {
        pcVar1 = "";
    }
    iVar2 = -0x16;
    if (-1 < iVar3) {
        iVar2 = arg2;
    }
    func_0x08004988(1,pcVar1,"",_obj.ic_buffer_addr);
    return iVar2;
}


// ===== sym.show_resolution_factor @ 0x080092a0 (size 92) =====

int64_t sym.show_resolution_factor(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uchar uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = func_0x08004d78(0);
    if (iVar2 == 0) {
        uVar3 = 1;
    }
    else {
        uVar3 = *(iVar2 + 0x4a);
    }
    iVar1 = snprintf(arg2,0x1000,0x8000ef2,uVar3);
    return iVar1;
}


// ===== sym.store_resolution_factor @ 0x080092fc (size 16) =====

int64_t sym.store_resolution_factor(int64_t arg1)

{
    return arg1;
}


// ===== sym.show_abnormal_event @ 0x0800930c (size 280) =====

ulong sym.show_abnormal_event(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    bool bVar1;
    uint uVar2;
    char cVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.abnormal_event_mutex);
    if ((_sym.xiaomi_touch_remove_proc == _obj.abnormal_event_buf) && (*0x80069e0 == '\0')) {
        func_0x08004988(2,"","");
        uVar5 = 0xffffffffffffffff;
    }
    else {
        if (10 < _sym.xiaomi_touch_remove_proc) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8009424);
            (*pcVar4)();
        }
        uVar2 = *(_sym.xiaomi_touch_remove_proc * 6 + 0x80069e2);
        *(arg1 + 4) = *(_sym.xiaomi_touch_remove_proc * 6 + 0x80069e6);
        *arg1 = uVar2;
        cVar3 = *0x80069e0;
        _sym.xiaomi_touch_remove_proc = _sym.xiaomi_touch_remove_proc + 1;
        bVar1 = _sym.xiaomi_touch_remove_proc < 10;
        if (!bVar1) {
            *0x80069e0 = '\0';
            _sym.xiaomi_touch_remove_proc = 0;
        }
        if ((_sym.xiaomi_touch_remove_proc < *0x8006000) || (bVar1 && cVar3 != '\0')) {
            sysfs_notify(CONCAT44(*0x8006004,*0x8006000),0,"");
        }
        uVar5 = 6;
    }
    mutex_unlock(obj.abnormal_event_mutex);
    return uVar5;
}


// ===== sym.store_abnormal_event @ 0x08009424 (size 220) =====

ulong sym.store_abnormal_event(ulong noname_0,uchar noname_1 [16],int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    code *pcVar2;
    bool bVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 6) {
        mutex_lock(obj.abnormal_event_mutex);
        uVar5 = *0x8006000;
        if (10 < *0x8006000) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8009500);
            (*pcVar2)();
        }
        uVar1 = *arg1;
        _obj.abnormal_event_buf = *0x8006000 + 1;
        bVar3 = 8 < *0x8006000;
        *(uVar5 * 6 + 0x80069e6) = *(arg1 + 4);
        *(uVar5 * 6 + 0x80069e2) = uVar1;
        if (bVar3) {
            _obj.abnormal_event_buf = 0;
            *0x80069e0 = 1;
        }
        mutex_unlock(obj.abnormal_event_mutex);
        sysfs_notify(CONCAT44(*0x8006004,*0x8006000),0,"");
        uVar4 = 6;
    }
    else {
        func_0x08004988(2,"","",arg2,6);
        uVar4 = 0xffffffffffffffed;
    }
    return uVar4;
}


// ===== sym.show_enable_touch_raw @ 0x08009500 (size 64) =====

int64_t sym.show_enable_touch_raw(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_enable_touch_raw @ 0x08009540 (size 272) =====

int64_t sym.store_enable_touch_raw(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = func_0x08004d78(0);
    uStack_3c = 0;
    iVar2 = sscanf(arg2,0x8000ef2,&uStack_3c);
    if (-1 < iVar2) {
        func_0x08004988(2,"","",uStack_3c);
        if (pcVar3 == NULL) goto code_r0x080095e0;
        pcVar3 = *(pcVar3 + 0x168);
        if (pcVar3 == NULL) goto code_r0x080095e0;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x0800962c;
        while( true ) {
            (*pcVar3)(uStack_3c);
code_r0x080095e0:
            *0x8006000 = uStack_3c;
code_r0x080095f4:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x0800962c:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e50);
        }
        return arg3;
    }
    arg3 = -0x16;
    goto code_r0x080095f4;
}


// ===== sym.show_palm_sensor @ 0x08009650 (size 64) =====

int64_t sym.show_palm_sensor(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_palm_sensor @ 0x08009690 (size 292) =====

int64_t sym.store_palm_sensor(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar3 = func_0x08004d78(0);
    iStack_3c = 0;
    iVar2 = sscanf(arg2,0x8000ef2,&iStack_3c);
    if (-1 < iVar2) {
        if (pcVar3 == NULL) goto code_r0x0800971c;
        pcVar3 = *(pcVar3 + 0x160);
        if (pcVar3 == NULL) goto code_r0x0800971c;
        if (1 < (pcVar3 + -0x8004630 >> 3 | pcVar3 << 0x3d)) goto code_r0x08009790;
        while( true ) {
            (*pcVar3)(iStack_3c != 0);
code_r0x0800971c:
            func_0x08004e88(0,0,0x1a,1,&iStack_3c);
            func_0x08004988(1,"","",iStack_3c);
code_r0x08009758:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x08009790:
            __cfi_slowpath_diag(0x47ce015a85343a42,pcVar3,0x8000e70);
        }
        return arg3;
    }
    arg3 = -0x16;
    goto code_r0x08009758;
}


// ===== sym.show_touch_thp_ic_cmd_data @ 0x080097b4 (size 1160) =====

int64_t sym.show_touch_thp_ic_cmd_data(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *puVar11;
    ulong *in_x18;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *0x80067aa;
    func_0x08004988(1,"","",*0x80067aa,*0x80067a9);
    mutex_lock(obj.thp_ic_read_data_mutex);
    if (*0x80067a9 == '\t') {
        uVar10 = *0x8006000;
        if (*0x8006000 != 0) {
            uVar13 = 0;
            do {
                if (uVar13 == 0x200) goto code_r0x08009c38;
                func_0x08004988(1,"","",uVar13 & 0xffffffff,*(uVar13 + 0x80067b0));
                uVar10 = *0x80067ac;
                uVar13 = uVar13 + 1;
            } while (uVar13 < uVar10);
        }
        if (uVar2 < 0xbb9) {
            memcpy(arg1,0x80067b0,uVar10);
            uVar12 = *0x80067ac;
        }
        else if (uVar2 == 0xbea) {
            iVar9 = func_0x08004cf4(0);
            if (arg1 == 0) {
                uVar12 = 0xffffffff;
            }
            else {
                memset(arg1,0,0x1000);
                puVar11 = *(iVar9 + 0x14d8);
                *puVar11 = *0x80067b0;
                uVar4 = *0x80067c0;
                uVar3 = *0x80067b8;
                uVar1 = CONCAT17(*0x80067cf,*0x80067c8);
                *(puVar11 + 0x1f) = CONCAT71(*0x80067d0,*0x80067cf);
                puVar11[2] = uVar4;
                puVar11[3] = uVar1;
                puVar11[1] = uVar3;
                iVar6 = snprintf(arg1,0x1000,"",**(iVar9 + 0x14d8));
                iVar7 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 2));
                iVar8 = snprintf(arg1 + (iVar7 + iVar6),0x1000,"",*(*(iVar9 + 0x14d8) + 4));
                iVar8 = iVar8 + iVar7 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"",*(*(iVar9 + 0x14d8) + 6));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 8));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"",*(*(iVar9 + 0x14d8) + 10));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 0xc));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"",*(*(iVar9 + 0x14d8) + 0xd));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 0xe));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"",*(*(iVar9 + 0x14d8) + 0xf));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 0x10));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"",*(*(iVar9 + 0x14d8) + 0x12));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 0x14));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"",*(*(iVar9 + 0x14d8) + 0x16));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 0x18));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"",*(*(iVar9 + 0x14d8) + 0x20));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 0x21));
                iVar8 = iVar8 + iVar6;
                iVar6 = snprintf(arg1 + iVar8,0x1000,"",*(*(iVar9 + 0x14d8) + 0x23));
                iVar6 = iVar6 + iVar8;
                iVar8 = snprintf(arg1 + iVar6,0x1000,"",*(*(iVar9 + 0x14d8) + 0x25));
                uVar12 = iVar8 + iVar6;
            }
        }
        else {
            if (uVar10 == 0) {
                iVar8 = 0;
            }
            else {
                uVar10 = 0;
                iVar8 = 0;
                do {
                    if (uVar10 == 0x200) {
code_r0x08009c38:
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(1,0x8009c3c);
                        (*pcVar5)();
                    }
                    iVar6 = snprintf(arg1 + iVar8,0x1000 - iVar8,0x80027b1,*(uVar10 + 0x80067b0));
                    iVar8 = iVar6 + iVar8;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < *0x80067ac);
            }
            iVar6 = snprintf(arg1 + iVar8,0x1000 - iVar8,0x800275a);
            uVar12 = iVar6 + iVar8;
        }
        mutex_unlock(obj.thp_ic_read_data_mutex);
        iVar9 = uVar12;
    }
    else {
        func_0x08004988(2,"","");
        mutex_unlock(obj.thp_ic_read_data_mutex);
        iVar9 = 0;
    }
    return iVar9;
}


// ===== sym.store_touch_thp_ic_cmd_data @ 0x08009c3c (size 148) =====

uint32_t sym.store_touch_thp_ic_cmd_data(ulong noname_0,uchar noname_1 [16],int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 0x209) {
        mutex_lock(obj.thp_ic_write_data_mutex);
        memcpy(obj.thp_ic_cmd_data_common_data.llvm.16959356077441606656,arg1,arg2);
        mutex_unlock(obj.thp_ic_write_data_mutex);
    }
    else {
        func_0x08004988(2,"","","",arg2);
    }
    return arg2;
}


// ===== sym.show_touch_thp_ic_cmd @ 0x08009cd0 (size 16) =====

ulong sym.show_touch_thp_ic_cmd(void)

{
    return 0;
}


// ===== sym.store_touch_thp_ic_cmd @ 0x08009ce0 (size 596) =====

int64_t sym.store_touch_thp_ic_cmd(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    int iVar4;
    char *pcVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint8_t *puVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar11;
    ulong unaff_x30;
    uint32_t auStack_248 [128];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    mutex_lock(obj.thp_ic_mutex);
    memset(auStack_248,0,0x200);
    uVar1 = *arg1;
    if (uVar1 == 0) {
        func_0x08004988(1,"","",0,0,0,0);
code_r0x08009e34:
        pcVar5 = "";
    }
    else {
        uVar11 = 0;
        uVar7 = 0;
        uVar10 = 0;
        puVar8 = arg1 + 1;
        do {
            uVar9 = uVar1;
            if (uVar9 - 0x30 < 10) {
                if (0x7f < uVar7) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8009f30);
                    (*pcVar3)();
                }
                uVar11 = uVar11 + (~uVar10 & 1);
                auStack_248[uVar7] = (uVar9 + auStack_248[uVar7] * 10) - 0x30;
            }
            else {
                if ((uVar9 != 0x2c) && (uVar9 != 0x20)) break;
                uVar7 = uVar7 + uVar10;
            }
            uVar1 = *puVar8;
            uVar10 = uVar9 - 0x30 < 10;
            puVar8 = puVar8 + 1;
        } while (uVar1 != 0);
        pcVar6 = "";
        func_0x08004988(1,"","",auStack_248[0],auStack_248[1],auStack_248[2],auStack_248[3]);
        if ((auStack_248[0] & 0xfffffffe) != 8) goto code_r0x08009e34;
        if (uVar11 - 0x81 < 0xffffff83) {
            pcVar5 = "";
        }
        else {
            uVar10 = uVar11 - 3;
            if ((auStack_248[1] < 0) || (auStack_248[1] == 0xbe5)) {
                if ((auStack_248[0] != 8) || (auStack_248[1] != 0xbe5)) goto code_r0x08009e50;
                if (uVar10 == auStack_248[uVar11 - 1]) {
                    pcVar6 = 0xbe5;
                    func_0x08004e88(0,8,0xbe5,uVar10,auStack_248 + 2);
                    goto code_r0x08009e50;
                }
                pcVar5 = "";
            }
            else {
                if (((uVar11 < 5) && (uVar10 != auStack_248[uVar11 - 1])) && (auStack_248[3] == 2)) {
                    pcVar6 = auStack_248[1];
                    func_0x08004e88(0,auStack_248[0],pcVar6,2,auStack_248 + 2);
                    goto code_r0x08009e50;
                }
                pcVar5 = "";
            }
        }
    }
    pcVar6 = "";
    func_0x08004988(2,pcVar5,"");
    arg2 = -1;
code_r0x08009e50:
    mutex_unlock(obj.thp_ic_mutex);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.show_touch_finger_status;
    iVar4 = snprintf(pcVar6,0x1000,0x800216a,*0x8006000);
    return iVar4;
}


// ===== sym.show_touch_finger_status @ 0x08009f34 (size 64) =====

int64_t sym.show_touch_finger_status(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800216a,*0x8006000);
    return iVar1;
}


// ===== sym.store_touch_finger_status @ 0x08009f74 (size 176) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.store_touch_finger_status(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_2c = 0;
    iVar2 = sscanf(arg1,0x8000ef2,&iStack_2c);
    if (iVar2 < 0) {
        arg2 = -0x16;
    }
    else if (*0x8006000 != iStack_2c) {
        *0x8006000 = iStack_2c;
        sysfs_notify(CONCAT44(*0x8006004,iStack_2c),0,"");
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x0800a178 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800a1ac (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.xiaomi_touch_probe.c75ca9bdde7c09fd6e53abbae75ed65e.cfi_jt);
    return;
}

