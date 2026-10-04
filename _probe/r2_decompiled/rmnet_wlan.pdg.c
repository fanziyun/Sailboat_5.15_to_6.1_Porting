// decompiled from rmnet_wlan by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 504) =====

//WARNING: Switch with 1 destination removed at 0x08004ee0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x39e63916c3db07da) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 != -0x550b9e52359ac614) {
                if ((arg1 == -0x4d7e2f04b135d45c) && ((pcVar1 + -0x8002258 >> 3 | pcVar1 << 0x3d) < 0xe)) {
                    return;
                }
                goto code_r0x08004ea0;
            }
            pcVar2 = sym.DATARMNETad2b7fd8f5.335a71be0cf44b08c7825d2b9c9871dd.cfi_jt;
        }
        else if (arg1 == -0x2ee0710dce68437c) {
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else {
            if (arg1 == -0x269f0ca40a294141) {
                pcVar2 = sym.__typeid__ZTSFiP7sk_buffE_global_addr;
                goto code_r0x08002190;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08004ea0;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x68131453fce1715e) {
        if (arg1 != 0x39e63916c3db07da) {
            if (arg1 != 0x57065a75b1881cde) goto code_r0x08004ea0;
            pcVar2 = sym.DATARMNET68fe094884.4993905e98a9149b69a23285a6033439.cfi_jt;
code_r0x08002190:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08004ea0;
        }
        pcVar2 = sym.DATARMNET299a8a08b5.4993905e98a9149b69a23285a6033439.cfi_jt;
    }
    else if (arg1 == 0x68131453fce1715e) {
        pcVar2 = sym.DATARMNET6f73df41cd.cfi_jt;
    }
    else {
        if (arg1 == 0x7d57972cd3914fb1) {
            if ((pcVar1 + -0x8002220 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08004ea0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004ea0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004ea0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004ef4);
    (*pcVar1)();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08002200 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002208 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80009e2,"DATARMNET7a381832d5");
    iVar1 = sym.DATARMNETf56cbaa2b1();
    if (iVar1 != 0) {
        _printk(0x8000952,"DATARMNET7a381832d5",iVar1);
    }
    sym.DATARMNETbb4efa5b3d.llvm.8155310952281713815();
    iVar1 = genl_unregister_family(obj.DATARMNET61e8f41aae);
    if (iVar1 != 0) {
        _printk(0x8000750,"DATARMNET7a381832d5",iVar1);
    }
    _android_kmalloc_64_create = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNETd0b5ecd937.llvm.1624286943187993109,1);
    synchronize_rcu();
    _printk(0x800092c,"DATARMNET7a381832d5");
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002210 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800090b,"");
    iVar1 = genl_register_family(obj.DATARMNET61e8f41aae);
    if (iVar1 == 0) {
        iVar1 = sym.DATARMNET9f106ed933();
        if (iVar1 == 0) {
            iVar1 = sym.DATARMNET49c2c17e77();
            if (iVar1 == 0) {
                _rmnet_wlan_ll_tuple_hook = sym.DATARMNET6f73df41cd.cfi_jt;
                rmnet_module_hook_register(obj.DATARMNETd0b5ecd937.llvm.1624286943187993109,1);
                _printk(0x80007d8,"");
                return 0;
            }
            _printk(0x80007fa,"",iVar1);
            sym.DATARMNETf56cbaa2b1();
        }
        else {
            _printk(0x80007a9,"",iVar1);
        }
        genl_unregister_family(obj.DATARMNET61e8f41aae);
    }
    else {
        _printk(0x8000a12,"",iVar1);
    }
    return iVar1;
}


// ===== sym.DATARMNET299a8a08b5.4993905e98a9149b69a23285a6033439.cfi_jt @ 0x08002218 (size 8) =====

ulong sym.DATARMNET299a8a08b5.4993905e98a9149b69a23285a6033439.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(obj.DATARMNET820642743b);
    piVar2 = *(param_1 + -0x18);
    if (piVar2 != NULL) {
        iVar3 = *(param_1 + -0x20);
        *piVar2 = iVar3;
        if (iVar3 != 0) {
            *(iVar3 + 8) = piVar2;
        }
        *(param_1 + -0x18) = 0;
    }
    if (param_1 + -0x20 != NULL) {
        kvfree_call_rcu(param_1 + -0x10,0x10);
    }
    _raw_spin_unlock_irqrestore(obj.DATARMNET820642743b,uVar1);
    return 0;
}


// ===== sym.DATARMNET6512527d9c.6ab8982d6a7a8b3332a60d957676828e.cfi_jt @ 0x08002220 (size 8) =====

ulong sym.DATARMNET6512527d9c.6ab8982d6a7a8b3332a60d957676828e.cfi_jt(ulong param_1,int64_t param_2,ulong *param_3)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *param_3;
    if (pcVar2 == NULL) {
        return 0;
    }
    if (*pcVar2 != obj.DATARMNET755f0f0df8.llvm.8155310952281713815) {
        return 0;
    }
    if (pcVar2[1] != 0x0) {
        if (pcVar2[1] != *0x800052d) {
            return 0;
        }
        if (pcVar2[2] != 0x0) {
            if (pcVar2[2] != *0x800052e) {
                return 0;
            }
            if (pcVar2[3] != 0x0) {
                if (pcVar2[3] != *0x800052f) {
                    return 0;
                }
                if (pcVar2[4] != 0x0) {
                    if (pcVar2[4] != *0x8000530) {
                        return 0;
                    }
                    if (pcVar2[5] != 0x0) {
                        if (pcVar2[5] != *0x8000531) {
                            return 0;
                        }
                        if (pcVar2[6] != 0x0) {
                            if (pcVar2[6] != *0x8000532) {
                                return 0;
                            }
                            if (pcVar2[7] != 0x0) {
                                if (pcVar2[7] != *0x8000533) {
                                    return 0;
                                }
                                if (pcVar2[8] != 0x0) {
                                    if (pcVar2[8] != *0x8000534) {
                                        return 0;
                                    }
                                    if (pcVar2[9] != 0x0) {
                                        if (pcVar2[9] != *0x8000535) {
                                            return 0;
                                        }
                                        if (pcVar2[10] != 0x0) {
                                            if (pcVar2[10] != *0x8000536) {
                                                return 0;
                                            }
                                            if (pcVar2[0xb] != 0x0) {
                                                if (pcVar2[0xb] != *0x8000537) {
                                                    return 0;
                                                }
                                                if (pcVar2[0xc] != 0x0) {
                                                    if (pcVar2[0xc] != *0x8000538) {
                                                        return 0;
                                                    }
                                                    if (pcVar2[0xd] != 0x0) {
                                                        if (pcVar2[0xd] != *0x8000539) {
                                                            return 0;
                                                        }
                                                        if (pcVar2[0xe] != 0x0) {
                                                            if (pcVar2[0xe] != *0x800053a) {
                                                                return 0;
                                                            }
                                                            if ((pcVar2[0xf] != 0x0) && (pcVar2[0xf] != *0x800053b)) {
                                                                return 0;
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
                    }
                }
            }
        }
    }
    if (param_2 == 5) {
        iVar1 = netdev_rx_handler_register(pcVar2,sym.DATARMNET37a92021f9.6ab8982d6a7a8b3332a60d957676828e.cfi_jt,0);
        if (iVar1 != 0) {
            _printk(0x8000b23,"DATARMNET6512527d9c");
        }
    }
    else if (param_2 == 6) {
        netdev_rx_handler_unregister();
    }
    return 0;
}


// ===== sym.DATARMNET81ab4de243.4993905e98a9149b69a23285a6033439.cfi_jt @ 0x08002228 (size 8) =====

ulong sym.DATARMNET81ab4de243.4993905e98a9149b69a23285a6033439.cfi_jt(ulong param_1,int64_t param_2,int64_t *param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_3;
    if ((arg1 != 0) && (iVar1 = sym.DATARMNETaba2beb199(arg1,0x8000b02,0xc), iVar1 == 0)) {
        if (param_2 == 5) {
            iVar1 = netdev_rx_handler_register(arg1,sym.DATARMNET68fe094884.4993905e98a9149b69a23285a6033439.cfi_jt,0)
            ;
            if (iVar1 != 0) {
                _printk(0x8000a39,"DATARMNET81ab4de243",arg1);
            }
        }
        else if (param_2 == 6) {
            netdev_rx_handler_unregister(arg1);
            __rcu_read_lock();
            iVar2 = 0;
            do {
                for (piVar3 = *(obj.DATARMNET5413d6f8ec + iVar2 * 8); piVar3 != NULL; piVar3 = *piVar3) {
                    if (piVar3[0x12] == arg1) {
                        hrtimer_cancel(piVar3 + 4);
                    }
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0x10);
            __rcu_read_unlock();
        }
    }
    return 0;
}


// ===== sym.DATARMNETe98553a8fc.6ab8982d6a7a8b3332a60d957676828e.cfi_jt @ 0x08002230 (size 8) =====

ulong sym.DATARMNETe98553a8fc.6ab8982d6a7a8b3332a60d957676828e.cfi_jt(int64_t param_1,int64_t param_2,ulong *param_3)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar6 = *param_3;
    if (((pcVar6 != NULL) && (*pcVar6 == *(param_1 + 0x18))) &&
       ((pcVar6[1] == '\0' ||
        ((pcVar6[1] == *(param_1 + 0x19) &&
         ((pcVar6[2] == '\0' ||
          ((pcVar6[2] == *(param_1 + 0x1a) &&
           ((pcVar6[3] == '\0' ||
            ((pcVar6[3] == *(param_1 + 0x1b) &&
             ((pcVar6[4] == '\0' ||
              ((pcVar6[4] == *(param_1 + 0x1c) &&
               ((pcVar6[5] == '\0' ||
                ((pcVar6[5] == *(param_1 + 0x1d) &&
                 ((pcVar6[6] == '\0' ||
                  ((pcVar6[6] == *(param_1 + 0x1e) &&
                   ((pcVar6[7] == '\0' ||
                    ((pcVar6[7] == *(param_1 + 0x1f) &&
                     ((pcVar6[8] == '\0' ||
                      ((pcVar6[8] == *(param_1 + 0x20) &&
                       ((pcVar6[9] == '\0' ||
                        ((pcVar6[9] == *(param_1 + 0x21) &&
                         ((pcVar6[10] == '\0' ||
                          ((pcVar6[10] == *(param_1 + 0x22) &&
                           ((pcVar6[0xb] == '\0' ||
                            ((pcVar6[0xb] == *(param_1 + 0x23) &&
                             ((pcVar6[0xc] == '\0' ||
                              ((pcVar6[0xc] == *(param_1 + 0x24) &&
                               ((pcVar6[0xd] == '\0' ||
                                ((pcVar6[0xd] == *(param_1 + 0x25) &&
                                 ((pcVar6[0xe] == '\0' ||
                                  ((pcVar6[0xe] == *(param_1 + 0x26) &&
                                   ((pcVar6[0xf] == '\0' || (pcVar6[0xf] == *(param_1 + 0x27))))))))))))))))))))))))))))
                       ))))))))))))))))))))))))))))))))) {
        if (param_2 == 5) {
            if (*(param_1 + 0x28) == 0) {
                iVar7 = sp_el0;
                piVar1 = iVar7 + 0x10;
                *(iVar7 + 0x10) = *piVar1 + 1;
                iVar8 = tpidr_el1;
                piVar2 = iVar8 + *(pcVar6 + 0x4d0);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                        *piVar2 = *piVar2 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                iVar8 = *piVar1;
                *(iVar7 + 0x10) = iVar8 + -1;
                if ((iVar8 + -1 == 0) || (*piVar1 == 0)) {
                    preempt_schedule_notrace();
                }
                *(param_1 + 0x28) = pcVar6;
            }
        }
        else if ((param_2 == 6) && (iVar7 = *(param_1 + 0x28), iVar7 != 0)) {
            iVar8 = sp_el0;
            piVar1 = iVar8 + 0x10;
            *(iVar8 + 0x10) = *piVar1 + 1;
            iVar5 = tpidr_el1;
            piVar2 = iVar5 + *(iVar7 + 0x4d0);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                    *piVar2 = *piVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar7 = *piVar1;
            *(iVar8 + 0x10) = iVar7 + -1;
            if ((iVar7 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
            *(param_1 + 0x28) = 0;
        }
    }
    return 0;
}


// ===== sym.DATARMNET0ed065ddb7.6ab8982d6a7a8b3332a60d957676828e.cfi_jt @ 0x08002238 (size 8) =====

ulong sym.DATARMNET0ed065ddb7.6ab8982d6a7a8b3332a60d957676828e.cfi_jt(ulong param_1,int64_t param_2,ulong *param_3)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *param_3;
    if (pcVar2 == NULL) {
        return 0;
    }
    if (*pcVar2 != obj.DATARMNET30500ba48c.llvm.8155310952281713815) {
        return 0;
    }
    if (pcVar2[1] != 0x0) {
        if (pcVar2[1] != *0x800051d) {
            return 0;
        }
        if (pcVar2[2] != 0x0) {
            if (pcVar2[2] != *0x800051e) {
                return 0;
            }
            if (pcVar2[3] != 0x0) {
                if (pcVar2[3] != *0x800051f) {
                    return 0;
                }
                if (pcVar2[4] != 0x0) {
                    if (pcVar2[4] != obj.DATARMNET61e8f41aae) {
                        return 0;
                    }
                    if (pcVar2[5] != 0x0) {
                        if (pcVar2[5] != *0x8000521) {
                            return 0;
                        }
                        if (pcVar2[6] != 0x0) {
                            if (pcVar2[6] != *0x8000522) {
                                return 0;
                            }
                            if (pcVar2[7] != 0x0) {
                                if (pcVar2[7] != *0x8000523) {
                                    return 0;
                                }
                                if (pcVar2[8] != 0x0) {
                                    if (pcVar2[8] != *0x8000524) {
                                        return 0;
                                    }
                                    if (pcVar2[9] != 0x0) {
                                        if (pcVar2[9] != *0x8000525) {
                                            return 0;
                                        }
                                        if (pcVar2[10] != 0x0) {
                                            if (pcVar2[10] != *0x8000526) {
                                                return 0;
                                            }
                                            if (pcVar2[0xb] != 0x0) {
                                                if (pcVar2[0xb] != *0x8000527) {
                                                    return 0;
                                                }
                                                if (pcVar2[0xc] != 0x0) {
                                                    if (pcVar2[0xc] != str.RMNET_WLAN[0]) {
                                                        return 0;
                                                    }
                                                    if (pcVar2[0xd] != 0x0) {
                                                        if (pcVar2[0xd] != str.RMNET_WLAN[1]) {
                                                            return 0;
                                                        }
                                                        if (pcVar2[0xe] != 0x0) {
                                                            if (pcVar2[0xe] != str.RMNET_WLAN[2]) {
                                                                return 0;
                                                            }
                                                            if ((pcVar2[0xf] != 0x0) &&
                                                               (pcVar2[0xf] != str.RMNET_WLAN[3])) {
                                                                return 0;
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
                    }
                }
            }
        }
    }
    if (param_2 == 5) {
        iVar1 = netdev_rx_handler_register(pcVar2,sym.DATARMNET37a92021f9.6ab8982d6a7a8b3332a60d957676828e.cfi_jt,0);
        if (iVar1 != 0) {
            _printk(0x8000b23,"DATARMNET0ed065ddb7");
        }
    }
    else if (param_2 == 6) {
        netdev_rx_handler_unregister();
    }
    return 0;
}


// ===== sym.__typeid__ZTSFiP7sk_buffE_global_addr @ 0x08002240 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFiP7sk_buffE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.netif_rx.cfi_jt @ 0x08002248 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.netif_rx.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.DATARMNET6f73df41cd.cfi_jt @ 0x08002250 (size 8) =====

void sym.DATARMNET6f73df41cd.cfi_jt(int64_t param_1)

{
    int16_t *piVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    uint8_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    piVar4 = _obj.DATARMNETcde6e442f5;
    iVar3 = sp_el0;
    iStack_18 = *(iVar3 + 0x5e0);
    if (_obj.DATARMNETcde6e442f5 == NULL) goto code_r0x08006ba0;
    if (*(param_1 + 0xb0) == -0x227a) {
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        uStack_40 = 0;
        if (*(param_1 + 0x70) - *(param_1 + 0x74) < 0x28) {
            if (param_1 == 0) goto code_r0x08006ba0;
            iVar5 = skb_copy_bits(param_1,0,&uStack_40,0x28);
            puVar6 = &uStack_40;
            if (iVar5 < 0) goto code_r0x08006ba0;
        }
        else {
            puVar6 = *(param_1 + 0xd8);
            if (puVar6 == NULL) goto code_r0x08006ba0;
        }
        if (((*(piVar4 + 0x24) != *puVar6 >> 4) && (*(puVar6 + 8) != *piVar4 || *(puVar6 + 0x10) != piVar4[1])) &&
           (*(puVar6 + 0x18) != piVar4[2] || *(puVar6 + 0x20) != piVar4[3])) goto code_r0x08006ba0;
        uVar2 = puVar6[6];
    }
    else {
        if (*(param_1 + 0xb0) != 8) goto code_r0x08006ba0;
        uStack_30 = uStack_30 & 0xffffffff00000000;
        uStack_40 = 0;
        uStack_38 = 0;
        if (*(param_1 + 0x70) - *(param_1 + 0x74) < 0x14) {
            if (param_1 == 0) goto code_r0x08006ba0;
            iVar5 = skb_copy_bits(param_1,0,&uStack_40,0x14);
            puVar6 = &uStack_40;
            if (iVar5 < 0) goto code_r0x08006ba0;
        }
        else {
            puVar6 = *(param_1 + 0xd8);
            if (puVar6 == NULL) goto code_r0x08006ba0;
        }
        if (((*(piVar4 + 0x24) != *puVar6 >> 4) && (*(puVar6 + 0xc) != *piVar4)) && (*(puVar6 + 0x10) != piVar4[2]))
        goto code_r0x08006ba0;
        uVar2 = puVar6[9];
    }
    if (((uVar2 == 0x11) && (piVar1 = *(param_1 + 0xd0) + *(param_1 + 0xb2), *piVar1 == piVar4[4])) &&
       (piVar1[1] == *(piVar4 + 0x22))) {
        *(param_1 + 0x8c) = 0x9b6d0100;
        sym.DATARMNET5ca94dbc3c(0x15);
    }
code_r0x08006ba0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8006c24;
    _rmnet_wlan_ll_tuple_hook = sym.DATARMNET6f73df41cd.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNETd0b5ecd937.llvm.1624286943187993109,1);
    return;
}


// ===== sym.DATARMNET425149b729.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002258 (size 8) =====

ulong sym.DATARMNET425149b729.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET56fde5181e();
    return 0;
}


// ===== sym.DATARMNET6a53c4576d.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002260 (size 8) =====

ulong sym.DATARMNET6a53c4576d.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    uchar uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar5;
    ulong *puVar6;
    uint16_t *puVar7;
    uint16_t *puVar8;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(param_2 + 0x20);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    puVar7 = *(iVar4 + 0x38);
    if ((((puVar7 == NULL) || (*(iVar4 + 0x40) == 0)) || (*(iVar4 + 0x48) == 0)) || (*(iVar4 + 0x50) == 0)) {
        puVar6 = *(param_2 + 0x40);
        pcVar5 = "Must specify FWD device and address";
    }
    else {
        puVar8 = puVar7 + 2;
        iVar4 = strchr(puVar8,0x3a);
        if (iVar4 == 0) {
            iVar1 = in4_pton(puVar8,*puVar7 - 4,&uStack_60,0xffffffff,0);
            if (iVar1 == 1) {
                uVar3 = 4;
                goto code_r0x08005bc0;
            }
            puVar6 = *(param_2 + 0x40);
            pcVar5 = "SRC address is invalid in IPv4";
        }
        else {
            iVar1 = in6_pton(puVar8,*puVar7 - 4,&uStack_60,0xffffffff,0);
            if (iVar1 == 1) {
                uVar3 = 6;
code_r0x08005bc0:
                uStack_40._0_5_ = CONCAT14(uVar3,uStack_40);
                puVar8 = *(*(param_2 + 0x20) + 0x40);
                puVar7 = puVar8 + 2;
                iVar4 = strchr(puVar7,0x3a);
                iVar1 = *puVar8 - 4;
                if (iVar4 == 0) {
                    iVar1 = in4_pton(puVar7,iVar1,&uStack_50,0xffffffff,0);
                    if (iVar1 == 1) goto code_r0x08005c50;
                    puVar6 = *(param_2 + 0x40);
                    pcVar5 = "DST address is invalid in IPv4";
                }
                else {
                    iVar1 = in6_pton(puVar7,iVar1,&uStack_50,0xffffffff,0);
                    if (iVar1 == 1) {
code_r0x08005c50:
                        uStack_40._0_4_ =
                             CONCAT22(*(*(*(param_2 + 0x20) + 0x50) + 4),*(*(*(param_2 + 0x20) + 0x48) + 4));
                        sym.DATARMNET4c1c11d8a5(&uStack_60);
                        uVar2 = 0;
                        goto code_r0x08005b74;
                    }
                    puVar6 = *(param_2 + 0x40);
                    pcVar5 = "DST address is invalid in IPv6";
                }
            }
            else {
                puVar6 = *(param_2 + 0x40);
                pcVar5 = "SRC address is invalid in IPv6";
            }
        }
    }
    do_trace_netlink_extack(pcVar5);
    if (puVar6 == NULL) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0xffffffea;
        *puVar6 = pcVar5;
    }
code_r0x08005b74:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    __stack_chk_fail(uVar2);
    *extraout_x18 = sym.DATARMNET425149b729;
    sym.DATARMNET56fde5181e();
    return 0;
}


// ===== sym.DATARMNETc175a08219.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002268 (size 8) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.DATARMNETc175a08219.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    uint16_t *puVar1;
    int64_t *piVar2;
    int *piVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t arg2;
    uchar uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int *extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar12;
    ulong *puVar13;
    uint16_t *puVar14;
    ulong unaff_x30;
    int64_t aiStack_58 [3];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(param_2 + 0x20);
    aiStack_58[2] = 0;
    iStack_40 = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    if (((*(iVar10 + 0x18) == 0) || (*(iVar10 + 0x20) == 0)) || (*(iVar10 + 0x30) == 0)) {
        puVar13 = *(param_2 + 0x40);
        pcVar12 = obj.DATARMNETc175a08219.__msg;
    }
    else {
        iStack_40 = *(*(iVar10 + 0x30) + 4) << 8;
        puVar14 = *(iVar10 + 0x18);
        puVar1 = puVar14 + 2;
        iVar10 = strchr(puVar1,0x3a);
        iVar7 = *puVar14 - 4;
        if (iVar10 == 0) {
            iVar7 = in4_pton(puVar1,iVar7,aiStack_58 + 1,0xffffffff,0);
            if (iVar7 == 1) {
                uVar9 = 4;
                goto code_r0x0800582c;
            }
            puVar13 = *(param_2 + 0x40);
            pcVar12 = "FWD address is invalid in IPv4";
        }
        else {
            iVar7 = in6_pton(puVar1,iVar7,aiStack_58 + 1,0xffffffff,0);
            if (iVar7 == 1) {
                uVar9 = 6;
code_r0x0800582c:
                iStack_40 = CONCAT71(iStack_40._1_7_,uVar9);
                aiStack_58[0] = dev_get_by_name(*(param_2 + 0x28),*(*(param_2 + 0x20) + 0x20) + 4);
                if (aiStack_58[0] != 0) {
                    uVar8 = sym.DATARMNETb8b35fdc18(aiStack_58,param_2);
                    uVar8 = uVar8 & 0xffffffff;
                    if (aiStack_58[0] != 0) {
                        iVar10 = sp_el0;
                        piVar2 = iVar10 + 0x10;
                        *(iVar10 + 0x10) = *piVar2 + 1;
                        iVar11 = tpidr_el1;
                        piVar3 = iVar11 + *(aiStack_58[0] + 0x4d0);
                        do {
                            cVar4 = '\x01';
                            bVar5 = ExclusiveMonitorPass(piVar3,0x10);
                            if (bVar5) {
                                *piVar3 = *piVar3 + -1;
                                cVar4 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar4 != '\0');
                        iVar11 = *piVar2;
                        *(iVar10 + 0x10) = iVar11 + -1;
                        if ((iVar11 + -1 == 0) || (*piVar2 == 0)) {
                            preempt_schedule_notrace();
                        }
                    }
                    goto code_r0x080057dc;
                }
                puVar13 = *(param_2 + 0x40);
                pcVar12 = "Invalid FWD device name";
            }
            else {
                puVar13 = *(param_2 + 0x40);
                pcVar12 = "FWD address is invalid in IPv6";
            }
        }
    }
    do_trace_netlink_extack(pcVar12);
    if (puVar13 == NULL) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0xffffffea;
        *puVar13 = pcVar12;
    }
code_r0x080057dc:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    __stack_chk_fail();
    uVar6 = tpidr_el2;
    *extraout_x9 = *extraout_x9 + uVar6;
    *extraout_x18 = 0x80058e8;
    iVar10 = *(*(arg2 + 0x20) + 0x28);
    if (iVar10 == 0) {
        puVar13 = *(arg2 + 0x40);
        do_trace_netlink_extack(obj.DATARMNETc5f6c112ec.__msg);
        uVar8 = 0xffffffea;
        if (puVar13 != NULL) {
            *puVar13 = obj.DATARMNETc5f6c112ec.__msg;
        }
    }
    else {
        uVar8 = sym.DATARMNET8d5a5a7047(*(iVar10 + 4),arg2);
    }
    return uVar8;
}


// ===== sym.DATARMNET41dd9b14ab.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002270 (size 8) =====

uint64_t sym.DATARMNET41dd9b14ab.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    char *pcVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t arg2;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar11;
    ulong *puVar12;
    ulong unaff_x30;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    iStack_60 = 0;
    puVar9 = *(*(param_2 + 0x20) + 8);
    if (puVar9 == NULL) {
        puVar12 = *(param_2 + 0x40);
        pcVar1 = "Must supply tuple info";
        do_trace_netlink_extack("Must supply tuple info");
        uVar10 = 0xffffffea;
    }
    else {
        if (*puVar9 < 8) {
            uVar6 = 0;
        }
        else {
            uVar6 = 0;
            uVar7 = *puVar9 - 4;
            puVar9 = puVar9 + 2;
            do {
                uVar3 = *puVar9;
                if (uVar3 < 4 || uVar7 < uVar3) break;
                uVar6 = uVar6 + 1;
                uVar10 = uVar3 + 3 & 0x1fffc;
                uVar7 = uVar7 - uVar10;
                puVar9 = puVar9 + uVar10;
            } while (3 < uVar7);
        }
        iVar5 = __kmalloc(uVar6 << 3,0xdc0);
        if (iVar5 != 0) {
            puVar9 = *(*(param_2 + 0x20) + 8);
            uVar3 = *puVar9;
            if (uVar3 < 8) {
                uVar6 = 0;
            }
            else {
                uVar6 = 0;
                uVar7 = uVar3 - 4;
                puVar9 = puVar9 + 2;
                while (uVar3 = *puVar9, 3 < uVar3 && uVar3 <= uVar7) {
                    puVar12 = *(param_2 + 0x40);
                    if (-1 < puVar9[1]) {
                        do_trace_netlink_extack("NLA_F_NESTED is missing");
                        uVar10 = 0xffffffea;
                        if (puVar12 != NULL) {
                            *puVar12 = "NLA_F_NESTED is missing";
                            puVar12[1] = puVar9;
                            puVar12[2] = 0;
                        }
                        goto code_r0x08005324;
                    }
                    uVar4 = __nla_parse(&uStack_68,1,puVar9 + 2,uVar3 - 4,obj.DATARMNET19c5fce390,0x1f,puVar12);
                    if (uVar4 != 0) goto code_r0x08005320;
                    if (iStack_60 == 0) {
                        puVar12 = *(param_2 + 0x40);
                        do_trace_netlink_extack("Must specify tuple entry");
                        uVar10 = 0xffffffea;
                        if (puVar12 != NULL) {
                            *puVar12 = "Must specify tuple entry";
                        }
                        goto code_r0x08005324;
                    }
                    *(iVar5 + uVar6 * 8) = *(iStack_60 + 4);
                    uVar6 = uVar6 + 1;
                    uVar10 = *puVar9 + 3 & 0x1fffc;
                    uVar7 = uVar7 - uVar10;
                    puVar9 = puVar9 + uVar10;
                    if (uVar7 < 4) break;
                }
            }
            uVar4 = sym.DATARMNET07f6485c9b(iVar5,uVar6,param_2);
code_r0x08005320:
            uVar10 = uVar4;
code_r0x08005324:
            kfree(iVar5);
            goto code_r0x0800532c;
        }
        puVar12 = *(param_2 + 0x40);
        pcVar1 = "Kernel OOM";
        do_trace_netlink_extack("Kernel OOM");
        uVar10 = 0xfffffff4;
    }
    if (puVar12 != NULL) {
        *puVar12 = pcVar1;
    }
code_r0x0800532c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.DATARMNETf1fa473089;
    iVar5 = *(*(arg2 + 0x20) + 0x10);
    if ((iVar5 == 0) || (iVar8 = *(*(arg2 + 0x20) + 0x30), iVar8 == 0)) {
        puVar12 = *(arg2 + 0x40);
        pcVar11 = "Must specify device and network info";
    }
    else {
        uVar2 = *(iVar8 + 4);
        if (uVar2 < 3) {
            iVar5 = iVar5 + 4;
            if (uVar2 != 1) {
                uVar10 = sym.DATARMNET97b2388e63(iVar5,arg2);
                return uVar10;
            }
            uVar10 = sym.DATARMNET92e5468fc5(iVar5,arg2);
            return uVar10;
        }
        puVar12 = *(arg2 + 0x40);
        pcVar11 = obj.DATARMNETf1fa473089.__msg.14;
    }
    do_trace_netlink_extack(pcVar11);
    if (puVar12 != NULL) {
        *puVar12 = pcVar11;
    }
    return 0xffffffea;
}


// ===== sym.DATARMNETc5f6c112ec.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002278 (size 8) =====

ulong sym.DATARMNETc5f6c112ec.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_2 + 0x20) + 0x28);
    if (iVar2 == 0) {
        puVar3 = *(param_2 + 0x40);
        do_trace_netlink_extack(obj.DATARMNETc5f6c112ec.__msg);
        uVar1 = 0xffffffea;
        if (puVar3 != NULL) {
            *puVar3 = obj.DATARMNETc5f6c112ec.__msg;
        }
    }
    else {
        uVar1 = sym.DATARMNET8d5a5a7047(*(iVar2 + 4),param_2);
    }
    return uVar1;
}


// ===== sym.DATARMNETb318ed4796.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002280 (size 8) =====

ulong sym.DATARMNETb318ed4796.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_2 + 0x20) + 0x28);
    if (iVar2 == 0) {
        puVar3 = *(param_2 + 0x40);
        do_trace_netlink_extack("Must specify encap port");
        uVar1 = 0xffffffea;
        if (puVar3 != NULL) {
            *puVar3 = "Must specify encap port";
        }
    }
    else {
        uVar1 = sym.DATARMNET0b12e969c5(*(iVar2 + 4),param_2);
    }
    return uVar1;
}


// ===== sym.DATARMNET72501635c8.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002288 (size 8) =====

uint64_t sym.DATARMNET72501635c8.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,char *param_2)

{
    char *pcVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t arg3;
    int64_t arg2;
    uint32_t uVar8;
    int64_t iVar9;
    uint16_t *puVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *unaff_x21;
    code *unaff_x22;
    code *pcVar12;
    ulong *unaff_x24;
    ulong *puVar13;
    uint16_t *unaff_x25;
    uint64_t unaff_x26;
    ulong unaff_x30;
    ulong uStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint16_t *puStack_b8;
    ulong *puStack_b0;
    uint64_t uStack_a8;
    code *pcStack_a0;
    ulong *puStack_98;
    code *pcStack_90;
    code *pcStack_88;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_78 = 0;
    iStack_70 = 0;
    puVar10 = *(*(param_2 + 0x20) + 8);
    if (puVar10 == NULL) {
        param_2 = *(param_2 + 0x40);
        pcVar6 = obj.DATARMNET72501635c8.__msg;
        do_trace_netlink_extack(obj.DATARMNET72501635c8.__msg);
        uVar11 = 0xffffffea;
joined_r0x08004f9c:
        if (param_2 != NULL) {
            *param_2 = pcVar6;
        }
    }
    else {
        if (*puVar10 < 8) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0;
            uVar8 = *puVar10 - 4;
            puVar10 = puVar10 + 2;
            do {
                uVar3 = *puVar10;
                if (uVar3 < 4 || uVar8 < uVar3) break;
                uVar4 = uVar4 + 1;
                uVar11 = uVar3 + 3 & 0x1fffc;
                uVar8 = uVar8 - uVar11;
                puVar10 = puVar10 + uVar11;
            } while (3 < uVar8);
        }
        pcVar6 = __kmalloc(uVar4 << 3,0xdc0);
        if (pcVar6 == NULL) {
            param_2 = *(param_2 + 0x40);
            pcVar6 = obj.DATARMNET72501635c8.__msg.7;
            do_trace_netlink_extack(obj.DATARMNET72501635c8.__msg.7);
            uVar11 = 0xfffffff4;
            goto joined_r0x08004f9c;
        }
        uVar3 = **(*(param_2 + 0x20) + 8);
        if (uVar3 < 8) {
            unaff_x21 = NULL;
        }
        else {
            unaff_x21 = NULL;
            unaff_x26 = uVar3 - 4;
            unaff_x25 = *(*(param_2 + 0x20) + 8) + 2;
            unaff_x22 = obj.DATARMNET19c5fce390;
            pcVar12 = obj.DATARMNET19c5fce390;
            while( true ) {
                uVar3 = *unaff_x25;
                if (uVar3 < 4 || unaff_x26 < uVar3) break;
                unaff_x24 = *(param_2 + 0x40);
                if (-1 < unaff_x25[1]) {
                    param_2 = "NLA_F_NESTED is missing";
                    do_trace_netlink_extack("NLA_F_NESTED is missing");
                    uVar11 = 0xffffffea;
                    if (unaff_x24 != NULL) {
                        *unaff_x24 = "NLA_F_NESTED is missing";
                        unaff_x24[1] = unaff_x25;
                        unaff_x24[2] = 0;
                    }
                    goto code_r0x080050cc;
                }
                uVar4 = __nla_parse(&uStack_78,1,unaff_x25 + 2,uVar3 - 4,obj.DATARMNET19c5fce390,0x1f,unaff_x24);
                if (uVar4 != 0) goto code_r0x080050c8;
                if (iStack_70 == 0) {
                    unaff_x21 = *(param_2 + 0x40);
                    param_2 = obj.DATARMNET72501635c8.__msg.8;
code_r0x08005164:
                    do_trace_netlink_extack(param_2);
                    pcVar12 = unaff_x22;
                    if (unaff_x21 == NULL) {
                        uVar11 = 0;
                    }
                    else {
                        uVar11 = 0;
                        *unaff_x21 = param_2;
                    }
                    goto code_r0x080050cc;
                }
                if ((*(iStack_70 + 8) | 2) != 6) {
                    unaff_x21 = *(param_2 + 0x40);
                    param_2 = "Invalid IP protocol";
                    goto code_r0x08005164;
                }
                if ((0x32 < *(iStack_70 + 9)) || ((1L << (*(iStack_70 + 9) & 0x3f) & 0x4000000020040U) == 0)) {
                    unaff_x21 = *(param_2 + 0x40);
                    param_2 = "Invalid transport protocol";
                    goto code_r0x08005164;
                }
                *(pcVar6 + unaff_x21 * 8) = *(iStack_70 + 4);
                unaff_x21 = unaff_x21 + 1;
                uVar11 = *unaff_x25 + 3 & 0x1fffc;
                uVar4 = unaff_x26 - uVar11;
                unaff_x26 = uVar4;
                unaff_x25 = unaff_x25 + uVar11;
                if (uVar4 < 4) break;
            }
        }
        uVar4 = sym.DATARMNET53f12a0f7d(pcVar6,unaff_x21,param_2);
code_r0x080050c8:
        uVar11 = uVar4;
        pcVar12 = unaff_x22;
code_r0x080050cc:
        kfree(pcVar6);
        unaff_x22 = pcVar12;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.DATARMNET41dd9b14ab;
    pcStack_c8 = sym.DATARMNET41dd9b14ab;
    iVar7 = sp_el0;
    iStack_d8 = *(iVar7 + 0x5e0);
    uStack_e8 = 0;
    iStack_e0 = 0;
    puVar10 = *(*(arg3 + 0x20) + 8);
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x26;
    puStack_b8 = unaff_x25;
    puStack_b0 = unaff_x24;
    uStack_a8 = uVar11;
    pcStack_a0 = unaff_x22;
    puStack_98 = unaff_x21;
    pcStack_90 = param_2;
    pcStack_88 = pcVar6;
    if (puVar10 == NULL) {
        puVar13 = *(arg3 + 0x40);
        pcVar1 = "Must supply tuple info";
        do_trace_netlink_extack("Must supply tuple info");
        uVar11 = 0xffffffea;
    }
    else {
        if (*puVar10 < 8) {
            uVar4 = 0;
        }
        else {
            uVar4 = 0;
            uVar8 = *puVar10 - 4;
            puVar10 = puVar10 + 2;
            do {
                uVar3 = *puVar10;
                if (uVar3 < 4 || uVar8 < uVar3) break;
                uVar4 = uVar4 + 1;
                uVar11 = uVar3 + 3 & 0x1fffc;
                uVar8 = uVar8 - uVar11;
                puVar10 = puVar10 + uVar11;
            } while (3 < uVar8);
        }
        iVar7 = __kmalloc(uVar4 << 3,0xdc0);
        if (iVar7 != 0) {
            puVar10 = *(*(arg3 + 0x20) + 8);
            uVar3 = *puVar10;
            if (uVar3 < 8) {
                uVar4 = 0;
            }
            else {
                uVar4 = 0;
                uVar8 = uVar3 - 4;
                puVar10 = puVar10 + 2;
                while (uVar3 = *puVar10, 3 < uVar3 && uVar3 <= uVar8) {
                    puVar13 = *(arg3 + 0x40);
                    if (-1 < puVar10[1]) {
                        do_trace_netlink_extack("NLA_F_NESTED is missing");
                        uVar11 = 0xffffffea;
                        if (puVar13 != NULL) {
                            *puVar13 = "NLA_F_NESTED is missing";
                            puVar13[1] = puVar10;
                            puVar13[2] = 0;
                        }
                        goto code_r0x08005324;
                    }
                    uVar5 = __nla_parse(&uStack_e8,1,puVar10 + 2,uVar3 - 4,obj.DATARMNET19c5fce390,0x1f,puVar13);
                    if (uVar5 != 0) goto code_r0x08005320;
                    if (iStack_e0 == 0) {
                        puVar13 = *(arg3 + 0x40);
                        do_trace_netlink_extack("Must specify tuple entry");
                        uVar11 = 0xffffffea;
                        if (puVar13 != NULL) {
                            *puVar13 = "Must specify tuple entry";
                        }
                        goto code_r0x08005324;
                    }
                    *(iVar7 + uVar4 * 8) = *(iStack_e0 + 4);
                    uVar4 = uVar4 + 1;
                    uVar11 = *puVar10 + 3 & 0x1fffc;
                    uVar8 = uVar8 - uVar11;
                    puVar10 = puVar10 + uVar11;
                    if (uVar8 < 4) break;
                }
            }
            uVar5 = sym.DATARMNET07f6485c9b(iVar7,uVar4,arg3);
code_r0x08005320:
            uVar11 = uVar5;
code_r0x08005324:
            kfree(iVar7);
            goto code_r0x0800532c;
        }
        puVar13 = *(arg3 + 0x40);
        pcVar1 = "Kernel OOM";
        do_trace_netlink_extack("Kernel OOM");
        uVar11 = 0xfffffff4;
    }
    if (puVar13 != NULL) {
        *puVar13 = pcVar1;
    }
code_r0x0800532c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_d8) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.DATARMNETf1fa473089;
    iVar7 = *(*(arg2 + 0x20) + 0x10);
    if ((iVar7 == 0) || (iVar9 = *(*(arg2 + 0x20) + 0x30), iVar9 == 0)) {
        puVar13 = *(arg2 + 0x40);
        pcVar6 = "Must specify device and network info";
    }
    else {
        uVar2 = *(iVar9 + 4);
        if (uVar2 < 3) {
            iVar7 = iVar7 + 4;
            if (uVar2 != 1) {
                uVar11 = sym.DATARMNET97b2388e63(iVar7,arg2);
                return uVar11;
            }
            uVar11 = sym.DATARMNET92e5468fc5(iVar7,arg2);
            return uVar11;
        }
        puVar13 = *(arg2 + 0x40);
        pcVar6 = obj.DATARMNETf1fa473089.__msg.14;
    }
    do_trace_netlink_extack(pcVar6);
    if (puVar13 != NULL) {
        *puVar13 = pcVar6;
    }
    return 0xffffffea;
}


// ===== sym.DATARMNETc0cc5d08ba.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002290 (size 8) =====

void sym.DATARMNETc0cc5d08ba.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    uVar3 = sym.DATARMNETe14c875532(&iStack_30,0x8000520,param_2);
    if (uVar3 == 0) {
        if (iStack_30 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            netlink_unicast(*(*(param_2 + 0x28) + 0x118),iStack_30,*(param_2 + 4),0x40);
            uVar3 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    uVar2 = __stack_chk_fail(uVar3);
    if (uVar2 < 0x17) {
        *(obj.DATARMNET24d235c444 + uVar2 * 8) = *(obj.DATARMNET24d235c444 + uVar2 * 8) + 1;
    }
    return;
}


// ===== sym.DATARMNETa6aec23397.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002298 (size 8) =====

ulong sym.DATARMNETa6aec23397.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_2 + 0x20) + 0x28);
    if (iVar2 == 0) {
        puVar3 = *(param_2 + 0x40);
        do_trace_netlink_extack(obj.DATARMNETa6aec23397.__msg);
        uVar1 = 0xffffffea;
        if (puVar3 != NULL) {
            *puVar3 = obj.DATARMNETa6aec23397.__msg;
        }
    }
    else {
        uVar1 = sym.DATARMNETc97c6a4265(*(iVar2 + 4),param_2);
    }
    return uVar1;
}


// ===== sym.DATARMNET16add73734.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022a0 (size 8) =====

ulong sym.DATARMNET16add73734.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_2 + 0x20) + 0x28);
    if (iVar2 == 0) {
        puVar3 = *(param_2 + 0x40);
        do_trace_netlink_extack(obj.DATARMNET16add73734.__msg);
        uVar1 = 0xffffffea;
        if (puVar3 != NULL) {
            *puVar3 = obj.DATARMNET16add73734.__msg;
        }
    }
    else {
        uVar1 = sym.DATARMNET59b8376224(*(iVar2 + 4));
    }
    return uVar1;
}


// ===== sym.DATARMNETb86993aefb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022a8 (size 8) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.DATARMNETb86993aefb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t arg2;
    int64_t arg2_00;
    uchar uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int *extraout_x9;
    int *extraout_x9_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar11;
    char *pcVar12;
    ulong *puVar13;
    uint16_t *puVar14;
    uint16_t *puVar15;
    ulong unaff_x30;
    int64_t aiStack_b8 [3];
    int64_t iStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    uint16_t *puStack_80;
    code *pcStack_70;
    uint64_t uStack_68;
    int64_t aiStack_58 [3];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    iVar9 = *(param_2 + 0x20);
    aiStack_58[2] = 0;
    iStack_40 = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    if (((*(iVar9 + 0x18) == 0) || (*(iVar9 + 0x20) == 0)) || (*(iVar9 + 0x30) == 0)) {
        puVar14 = *(param_2 + 0x40);
        pcVar11 = "Must specify FWD device, address, and network";
code_r0x080055cc:
        do_trace_netlink_extack(pcVar11);
        if (puVar14 == NULL) {
            uVar7 = 0xffffffea;
        }
        else {
            uVar7 = 0xffffffea;
            *puVar14 = pcVar11;
        }
    }
    else {
        iStack_40 = *(*(iVar9 + 0x30) + 4) << 8;
        puVar14 = *(iVar9 + 0x18);
        pcVar11 = puVar14 + 2;
        iVar9 = strchr(pcVar11,0x3a);
        if (iVar9 == 0) {
            iVar6 = in4_pton(pcVar11,*puVar14 - 4,aiStack_58 + 1,0xffffffff,0);
            if (iVar6 == 1) {
                uVar8 = 4;
                goto code_r0x08005638;
            }
            puVar14 = *(param_2 + 0x40);
            pcVar11 = obj.DATARMNETb86993aefb.__msg.18;
            goto code_r0x080055cc;
        }
        iVar6 = in6_pton(pcVar11,*puVar14 - 4,aiStack_58 + 1,0xffffffff,0);
        if (iVar6 != 1) {
            puVar14 = *(param_2 + 0x40);
            pcVar11 = obj.DATARMNETb86993aefb.__msg.17;
            goto code_r0x080055cc;
        }
        uVar8 = 6;
code_r0x08005638:
        iStack_40 = CONCAT71(iStack_40._1_7_,uVar8);
        aiStack_58[0] = dev_get_by_name(*(param_2 + 0x28),*(*(param_2 + 0x20) + 0x20) + 4);
        if (aiStack_58[0] == 0) {
            puVar14 = *(param_2 + 0x40);
            pcVar11 = obj.DATARMNETb86993aefb.__msg.19;
            goto code_r0x080055cc;
        }
        uVar7 = sym.DATARMNET947eb110d2(aiStack_58,param_2);
        uVar7 = uVar7 & 0xffffffff;
        if (aiStack_58[0] != 0) {
            iVar9 = sp_el0;
            piVar1 = iVar9 + 0x10;
            *(iVar9 + 0x10) = *piVar1 + 1;
            iVar10 = tpidr_el1;
            piVar2 = iVar10 + *(aiStack_58[0] + 0x4d0);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                    *piVar2 = *piVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar10 = *piVar1;
            *(iVar9 + 0x10) = iVar10 + -1;
            if ((iVar10 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x9 = *extraout_x9 + uVar5;
    *extraout_x18 = 0x80056f4;
    uStack_88 = 0x80056f4;
    iVar9 = sp_el0;
    iStack_98 = *(iVar9 + 0x5e0);
    iVar9 = *(arg2 + 0x20);
    aiStack_b8[2] = 0;
    iStack_a0 = 0;
    aiStack_b8[0] = 0;
    aiStack_b8[1] = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    puStack_80 = puVar14;
    pcStack_70 = pcVar11;
    uStack_68 = uVar7;
    if (((*(iVar9 + 0x18) == 0) || (*(iVar9 + 0x20) == 0)) || (*(iVar9 + 0x30) == 0)) {
        puVar13 = *(arg2 + 0x40);
        pcVar12 = obj.DATARMNETc175a08219.__msg;
    }
    else {
        iStack_a0 = *(*(iVar9 + 0x30) + 4) << 8;
        puVar15 = *(iVar9 + 0x18);
        puVar14 = puVar15 + 2;
        iVar9 = strchr(puVar14,0x3a);
        iVar6 = *puVar15 - 4;
        if (iVar9 == 0) {
            iVar6 = in4_pton(puVar14,iVar6,aiStack_b8 + 1,0xffffffff,0);
            if (iVar6 == 1) {
                uVar8 = 4;
                goto code_r0x0800582c;
            }
            puVar13 = *(arg2 + 0x40);
            pcVar12 = "FWD address is invalid in IPv4";
        }
        else {
            iVar6 = in6_pton(puVar14,iVar6,aiStack_b8 + 1,0xffffffff,0);
            if (iVar6 == 1) {
                uVar8 = 6;
code_r0x0800582c:
                iStack_a0 = CONCAT71(iStack_a0._1_7_,uVar8);
                aiStack_b8[0] = dev_get_by_name(*(arg2 + 0x28),*(*(arg2 + 0x20) + 0x20) + 4);
                if (aiStack_b8[0] != 0) {
                    uVar7 = sym.DATARMNETb8b35fdc18(aiStack_b8,arg2);
                    uVar7 = uVar7 & 0xffffffff;
                    if (aiStack_b8[0] != 0) {
                        iVar9 = sp_el0;
                        piVar1 = iVar9 + 0x10;
                        *(iVar9 + 0x10) = *piVar1 + 1;
                        iVar10 = tpidr_el1;
                        piVar2 = iVar10 + *(aiStack_b8[0] + 0x4d0);
                        do {
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar4) {
                                *piVar2 = *piVar2 + -1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        iVar10 = *piVar1;
                        *(iVar9 + 0x10) = iVar10 + -1;
                        if ((iVar10 + -1 == 0) || (*piVar1 == 0)) {
                            preempt_schedule_notrace();
                        }
                    }
                    goto code_r0x080057dc;
                }
                puVar13 = *(arg2 + 0x40);
                pcVar12 = "Invalid FWD device name";
            }
            else {
                puVar13 = *(arg2 + 0x40);
                pcVar12 = "FWD address is invalid in IPv6";
            }
        }
    }
    do_trace_netlink_extack(pcVar12);
    if (puVar13 == NULL) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0xffffffea;
        *puVar13 = pcVar12;
    }
code_r0x080057dc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_98) {
        return uVar7;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x9_00 = *extraout_x9_00 + uVar5;
    *extraout_x18_00 = 0x80058e8;
    iVar9 = *(*(arg2_00 + 0x20) + 0x28);
    if (iVar9 == 0) {
        puVar13 = *(arg2_00 + 0x40);
        do_trace_netlink_extack(obj.DATARMNETc5f6c112ec.__msg);
        uVar7 = 0xffffffea;
        if (puVar13 != NULL) {
            *puVar13 = obj.DATARMNETc5f6c112ec.__msg;
        }
    }
    else {
        uVar7 = sym.DATARMNET8d5a5a7047(*(iVar9 + 4),arg2_00);
    }
    return uVar7;
}


// ===== sym.DATARMNETa4773cb837.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022b0 (size 8) =====

ulong sym.DATARMNETa4773cb837.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETbb4efa5b3d.llvm.8155310952281713815();
    return 0;
}


// ===== sym.DATARMNETcd9478470c.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022b8 (size 8) =====

int sym.DATARMNETcd9478470c.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    char *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_2 + 0x20) + 0x10);
    if ((iVar3 == 0) || (iVar4 = *(*(param_2 + 0x20) + 0x30), iVar4 == 0)) {
        puVar6 = *(param_2 + 0x40);
        pcVar5 = obj.DATARMNETcd9478470c.__msg;
    }
    else {
        uVar1 = *(iVar4 + 4);
        if (uVar1 < 3) {
            iVar3 = iVar3 + 4;
            if (uVar1 == 1) {
                iVar2 = sym.DATARMNET9d7bb9a63d(iVar3);
            }
            else {
                iVar2 = sym.DATARMNETa903cd5994(iVar3);
            }
            if (iVar2 == 0) {
                return 0;
            }
            puVar6 = *(param_2 + 0x40);
            pcVar5 = "Kernel error, unregistering notifier failed";
            do_trace_netlink_extack("Kernel error, unregistering notifier failed");
            goto joined_r0x080054b4;
        }
        puVar6 = *(param_2 + 0x40);
        pcVar5 = "Network type not supported!";
    }
    do_trace_netlink_extack(pcVar5);
    iVar2 = -0x16;
joined_r0x080054b4:
    if (puVar6 != NULL) {
        *puVar6 = pcVar5;
    }
    return iVar2;
}


// ===== sym.DATARMNETf1fa473089.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022c0 (size 8) =====

ulong sym.DATARMNETf1fa473089.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    uint8_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_2 + 0x20) + 0x10);
    if ((iVar3 == 0) || (iVar4 = *(*(param_2 + 0x20) + 0x30), iVar4 == 0)) {
        puVar6 = *(param_2 + 0x40);
        pcVar5 = "Must specify device and network info";
    }
    else {
        uVar1 = *(iVar4 + 4);
        if (uVar1 < 3) {
            iVar3 = iVar3 + 4;
            if (uVar1 != 1) {
                uVar2 = sym.DATARMNET97b2388e63(iVar3,param_2);
                return uVar2;
            }
            uVar2 = sym.DATARMNET92e5468fc5(iVar3,param_2);
            return uVar2;
        }
        puVar6 = *(param_2 + 0x40);
        pcVar5 = obj.DATARMNETf1fa473089.__msg.14;
    }
    do_trace_netlink_extack(pcVar5);
    if (puVar6 != NULL) {
        *puVar6 = pcVar5;
    }
    return 0xffffffea;
}


// ===== sym.DATARMNETad2b7fd8f5.335a71be0cf44b08c7825d2b9c9871dd.cfi_jt @ 0x080022c8 (size 8) =====

void sym.DATARMNETad2b7fd8f5.335a71be0cf44b08c7825d2b9c9871dd.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int iVar6;
    uint32_t arg1;
    ulong uVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t *arg1_00;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(obj.DATARMNET531b038fcd);
    iVar5 = ___rcu_read_lock;
    cVar3 = *(param_1 + 0x88);
    iVar12 = 0;
    do {
        piVar14 = *(obj.DATARMNET6e79f38051 + iVar12 * 8);
        while (piVar4 = piVar14, piVar4 != NULL) {
            piVar14 = *piVar4;
            if ((piVar4[0xf] == '\0') && ((cVar3 != '\0' || (0x19 < iVar5 - piVar4[0xe])))) {
                piVar10 = piVar4[1];
                *(piVar4 + 0xf) = 1;
                if (piVar10 != NULL) {
                    *piVar10 = piVar14;
                    if (piVar14 != NULL) {
                        piVar14[1] = piVar10;
                    }
                    piVar4[1] = 0;
                }
                uVar11 = piVar4[0xd];
                uVar8 = _raw_spin_lock_irqsave(piVar4 + 2);
                piVar10 = piVar4 + 3;
                if (piVar10 != *piVar10) {
                    arg1_00 = *piVar10;
                    do {
                        piVar13 = *arg1_00;
                        uVar9 = __list_del_entry_valid(arg1_00);
                        if ((uVar9 & 1) != 0) {
                            iVar1 = *arg1_00;
                            piVar2 = arg1_00[1];
                            *(iVar1 + 8) = piVar2;
                            *piVar2 = iVar1;
                        }
                        *arg1_00 = 0;
                        arg1_00[1] = 0;
                        if (uVar11 == 0 || 0xfffffffffffff000 < uVar11) {
                            netif_rx(arg1_00);
                        }
                        else {
                            iVar6 = sym.DATARMNET4899053671(arg1_00);
                            if (iVar6 == 0) {
                                arg1 = 6;
                            }
                            else {
                                netif_rx(arg1_00);
                                arg1 = 7;
                            }
                            sym.DATARMNET5ca94dbc3c(arg1);
                        }
                        arg1_00 = piVar13;
                    } while (piVar10 != piVar13);
                }
                _raw_spin_unlock_irqrestore(piVar4 + 2,uVar8);
                kvfree_call_rcu(piVar4 + 5,0x28);
                sym.DATARMNET5ca94dbc3c(9);
                _segment.ehdr = _segment.ehdr + -1;
            }
        }
        iVar12 = iVar12 + 1;
    } while (iVar12 != 0x10);
    if (_segment.ehdr != 0) {
        queue_delayed_work_on(0x20,_netif_rx,param_1,0xd);
    }
    _raw_spin_unlock_irqrestore(obj.DATARMNET531b038fcd,uVar7);
    return;
}


// ===== sym.DATARMNET68fe094884.4993905e98a9149b69a23285a6033439.cfi_jt @ 0x080022d0 (size 8) =====

ulong sym.DATARMNET68fe094884.4993905e98a9149b69a23285a6033439.cfi_jt(int64_t *param_1)

{
    code *pcVar1;
    uint8_t uVar2;
    bool bVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint32_t arg2;
    ulong *puVar9;
    char cVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    char acStack_d0 [4];
    int16_t aiStack_cc [2];
    ulong uStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iVar8 = *param_1;
    uStack_60 = 0;
    uStack_70 = 0;
    iStack_68 = 0;
    uStack_80 = 0;
    iStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if ((iVar8 == 0) || ((*(iVar8 + 0x80) & 7) == 5)) {
        uVar5 = 3;
        goto code_r0x0800723c;
    }
    if (*(iVar8 + 0xb0) == -0x227a) {
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_c8 = 0;
        if (*(iVar8 + 0x70) - *(iVar8 + 0x74) < 0x28) {
            puVar9 = &uStack_c8;
            iVar4 = skb_copy_bits(iVar8,0,&uStack_c8,0x28);
            if (-1 < iVar4) goto code_r0x08006f30;
            goto code_r0x0800722c;
        }
        puVar9 = *(iVar8 + 0xd8);
        if (puVar9 == NULL) goto code_r0x0800722c;
code_r0x08006f30:
        uStack_98 = puVar9[1];
        uStack_90 = puVar9[2];
        uStack_88 = CONCAT71(uStack_88._1_7_,6);
code_r0x08006f40:
        __rcu_read_lock();
        iVar7 = sym.DATARMNETcc0a01df2a(&uStack_a0);
        __rcu_read_unlock();
        if (iVar7 == 0) goto code_r0x0800722c;
        uVar2 = *(iVar7 + 0x61);
        arg2 = uVar2;
        if (uVar2 != 3) {
            if ((*(iVar8 + 0x10) != 0) && (uVar2 == 2)) {
                *(iVar8 + 0x68) = 7;
                *(iVar8 + 0x82) = *(iVar8 + 0x82) | 0x8000;
            }
            if (*(iVar8 + 0xb0) == -0x227a) {
                uStack_b0 = 0;
                uStack_a8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0;
                uStack_c8 = 0;
                aiStack_cc[0] = 0;
                iVar7 = sym.skb_header_pointer_1(iVar8,0x28,&uStack_c8);
                if (iVar7 != 0) {
                    acStack_d0[0] = *(iVar7 + 6);
                    iVar4 = ipv6_skip_exthdr(iVar8,0x28,acStack_d0,aiStack_cc);
                    if ((-1 < iVar4) && ((aiStack_cc[0] == 0 || (acStack_d0[0] != ',')))) {
                        if (acStack_d0[0] == '\x06') goto code_r0x080071e0;
                        if (acStack_d0[0] == ':') {
                            uVar11 = *(iVar7 + 8);
                            iStack_78 = *(iVar7 + 0x10);
                            bVar3 = false;
                            uVar12 = *(iVar7 + 0x18);
                            iStack_68 = *(iVar7 + 0x20);
                            cVar10 = '\x06';
                            uStack_80 = uVar11;
                            uStack_70 = uVar12;
                            goto code_r0x0800706c;
                        }
                    }
                }
            }
            else if (*(iVar8 + 0xb0) == 8) {
                uStack_b8 = uStack_b8 & 0xffffffff00000000;
                uStack_c8 = 0;
                uStack_c0 = 0;
                iVar7 = sym.skb_header_pointer_1(iVar8,0x14,&uStack_c8);
                if (iVar7 != 0) {
                    if (*(iVar7 + 9) == '\x06') {
code_r0x080071e0:
                        sym.DATARMNET7ca470d54b(iVar8,0x200);
                    }
                    else if (*(iVar7 + 9) == '\x01') {
                        uVar11 = *(iVar7 + 0xc);
                        uVar12 = *(iVar7 + 0x10);
                        cVar10 = '\x04';
                        bVar3 = true;
                        uStack_80 = CONCAT44(uStack_80._4_4_,*(iVar7 + 0xc));
                        uStack_70 = CONCAT44(uStack_70._4_4_,*(iVar7 + 0x10));
code_r0x0800706c:
                        uStack_60 = CONCAT31(uStack_60._1_3_,cVar10);
                        __rcu_read_lock();
                        pcVar1 = obj.DATARMNET5413d6f8ec + (uVar12 * 0x61c88647 >> 0x1c) * 8;
                        for (piVar6 = *pcVar1; piVar6 != NULL; piVar6 = *piVar6) {
                            if (*(piVar6 + 0x11) == cVar10) {
                                if (bVar3) {
                                    if ((*(piVar6 + 0xd) == uVar11) && (*(piVar6 + 0xf) == uVar12)) {
code_r0x080071b4:
                                        if ((*(piVar6 + 0xb) & 1) != 0) {
                                            hrtimer_start_range_ns(piVar6 + 4,2000000000,0,1);
                                        }
                                        __rcu_read_unlock();
                                        goto code_r0x08007230;
                                    }
                                }
                                else if ((piVar6[0xd] == uStack_80 && piVar6[0xe] == iStack_78) &&
                                        (piVar6[0xf] == uStack_70 && piVar6[0x10] == iStack_68)) goto code_r0x080071b4;
                            }
                        }
                        __rcu_read_unlock();
                        uVar5 = _raw_spin_lock_irqsave(obj.DATARMNET820642743b);
                        piVar6 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0xb0);
                        if (piVar6 != NULL) {
                            *piVar6 = 0;
                            piVar6[1] = 0;
                            piVar6[0xf] = uStack_70;
                            piVar6[0x10] = iStack_68;
                            *(piVar6 + 0x11) = uStack_60;
                            piVar6[0xd] = uStack_80;
                            piVar6[0xe] = iStack_78;
                            piVar6[0x12] = *(iVar8 + 0x10);
                            hrtimer_init(piVar6 + 4,1,1);
                            piVar6[9] = sym.DATARMNET299a8a08b5.4993905e98a9149b69a23285a6033439.cfi_jt;
                            hrtimer_start_range_ns(piVar6 + 4,2000000000,0,1);
                            iVar7 = *pcVar1;
                            *piVar6 = iVar7;
                            piVar6[1] = pcVar1;
                            *pcVar1 = piVar6;
                            if (iVar7 != 0) {
                                *(iVar7 + 8) = piVar6;
                            }
                        }
                        _raw_spin_unlock_irqrestore(obj.DATARMNET820642743b,uVar5);
                    }
                }
            }
        }
    }
    else {
        if (*(iVar8 + 0xb0) == 8) {
            uStack_b8 = uStack_b8 & 0xffffffff00000000;
            uStack_c8 = 0;
            uStack_c0 = 0;
            if (*(iVar8 + 0x70) - *(iVar8 + 0x74) < 0x14) {
                puVar9 = &uStack_c8;
                iVar4 = skb_copy_bits(iVar8,0,&uStack_c8,0x14);
                if (-1 < iVar4) goto code_r0x08006ef8;
            }
            else {
                puVar9 = *(iVar8 + 0xd8);
                if (puVar9 != NULL) {
code_r0x08006ef8:
                    uStack_98 = CONCAT44(uStack_98._4_4_,*(puVar9 + 0xc));
                    uStack_88 = CONCAT71(uStack_88._1_7_,4);
                    goto code_r0x08006f40;
                }
            }
        }
code_r0x0800722c:
        arg2 = 3;
    }
code_r0x08007230:
    uVar5 = sym.DATARMNETc9ed97754a(iVar8,arg2);
code_r0x0800723c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    iVar8 = __stack_chk_fail(uVar5);
    *extraout_x18 = 0x8007278;
    uVar5 = _raw_spin_lock_irqsave(in_tmp_ldXn,obj.DATARMNET820642743b);
    piVar6 = *(iVar8 + -0x18);
    if (piVar6 != NULL) {
        iVar7 = *(iVar8 + -0x20);
        *piVar6 = iVar7;
        if (iVar7 != 0) {
            *(iVar7 + 8) = piVar6;
        }
        *(iVar8 + -0x18) = 0;
    }
    if (iVar8 + -0x20 != NULL) {
        kvfree_call_rcu(iVar8 + -0x10,0x10);
    }
    _raw_spin_unlock_irqrestore(obj.DATARMNET820642743b,uVar5);
    return 0;
}


// ===== sym.DATARMNET37a92021f9.6ab8982d6a7a8b3332a60d957676828e.cfi_jt @ 0x080022d8 (size 8) =====

uint sym.DATARMNET37a92021f9.6ab8982d6a7a8b3332a60d957676828e.cfi_jt(int64_t *param_1,ulong param_2,uint8_t *param_3)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    ulong uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint *puVar9;
    int64_t iVar10;
    code *pcVar11;
    int64_t extraout_x1;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    ulong unaff_x30;
    uint64_t uStack_78;
    uint8_t auStack_6c [4];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_38 = *(iVar13 + 0x5e0);
    iVar13 = *param_1;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    if ((iVar13 == 0) || ((*(iVar13 + 0x80) & 7) == 5)) {
        uVar12 = 3;
        goto code_r0x080048c4;
    }
    __rcu_read_lock();
    sym.DATARMNET5ca94dbc3c(2);
    if (*(iVar13 + 0xb0) == -0x227a) {
        uStack_78 = uStack_78 & 0xffffffffffff0000;
        param_3 = auStack_6c;
        iVar10 = *(iVar13 + 0xd0) + *(iVar13 + 0xb4);
        auStack_6c[0] = *(iVar10 + 6);
        uVar5 = ipv6_skip_exthdr(iVar13,0x28,param_3,&uStack_78);
        if (-1 < uVar5) {
            if (auStack_6c[0] == 0x3a) {
                uStack_60 = *(iVar10 + 0x18);
                uStack_58 = *(iVar10 + 0x20);
                uStack_50 = *(iVar10 + 8);
                uStack_48 = *(iVar10 + 0x10);
                uStack_40 = CONCAT31(uStack_40._1_3_,6);
                piVar7 = sym.DATARMNET07f0e0f286(&uStack_60);
                if (piVar7 != NULL) goto code_r0x080047f8;
            }
            uVar4 = uStack_68;
            for (piVar7 = *(obj.DATARMNET78ed39f13b + (*(iVar10 + 0x18) * 0x61c88647 >> 0x1c) * 8); piVar7 != NULL;
                piVar7 = *piVar7) {
                if ((*(piVar7 + 0xc) == '\x06') && (*(iVar10 + 0x18) == piVar7[10])) {
                    piVar7 = piVar7 + 9;
                    uStack_68._0_5_ = CONCAT14(6,uStack_68);
                    uStack_68._6_2_ = SUB82(uVar4,6);
                    uStack_68._0_6_ = CONCAT15(auStack_6c[0],uStack_68);
                    uVar2 = auStack_6c[0];
                    if (uStack_78 == 0) goto code_r0x080048f8;
                    param_3 = &uStack_68;
                    iVar6 = sym.DATARMNETaca8ca54ed(iVar13,uVar5,param_3,piVar7);
                    goto code_r0x080048a4;
                }
            }
        }
code_r0x080048bc:
        uVar12 = 3;
    }
    else {
        if (*(iVar13 + 0xb0) != 8) goto code_r0x080048bc;
        puVar1 = *(iVar13 + 0xd0) + *(iVar13 + 0xb4);
        if (puVar1[9] != 1) {
code_r0x08004704:
            uVar4 = uStack_68;
            piVar7 = *(obj.DATARMNET78ed39f13b + (*(puVar1 + 0x10) * 0x61c88647 >> 0x1c) * 8);
joined_r0x08004728:
            if (piVar7 == NULL) goto code_r0x080048bc;
            if ((*(piVar7 + 0xc) != '\x04') || (*(piVar7 + 10) != *(puVar1 + 0x10))) goto code_r0x08004730;
            piVar7 = piVar7 + 9;
            uStack_68._0_5_ = CONCAT14(4,uStack_68);
            uStack_68._6_2_ = SUB82(uVar4,6);
            uStack_68._0_6_ = CONCAT15(puVar1[9],uStack_68);
            uVar5 = (*puVar1 & 0xf) << 2;
            uVar2 = puVar1[9];
            if ((*(puVar1 + 6) & 0xff3f) != 0) {
                param_3 = &uStack_68;
                iVar6 = sym.DATARMNET579f75aa50(iVar13,uVar5,param_3);
code_r0x080048a4:
                uVar12 = 0;
                if (iVar6 != 0) {
                    uVar12 = 3;
                }
                goto code_r0x080048c0;
            }
code_r0x080048f8:
            if (uVar2 == 6) {
code_r0x08004910:
                param_3 = uVar5;
                uVar3 = *(*(iVar13 + 0xd8) + uVar5 + 2);
                uStack_68 = CONCAT62(uStack_68._2_6_,uVar3);
                uVar8 = sym.DATARMNETa8b2566e6a(iVar13,&uStack_68,param_3);
                if ((uVar8 & 1) == 0) {
code_r0x08004998:
                    uVar8 = sym.DATARMNET4eafcdee07(&uStack_68);
                    if ((uVar8 & 1) != 0) goto code_r0x080047f8;
                    if (*(iVar13 + 0xa4) != 0x20002) goto code_r0x080048bc;
                    iVar10 = dev_get_by_name_rcu(init_net,"dummy0");
                    if (iVar10 == 0) {
                        uVar5 = 0x16;
                        goto code_r0x080048b8;
                    }
                    uVar12 = 3;
                    *(iVar13 + 0x10) = iVar10;
                    *(iVar13 + 0xa4) = 0;
                    goto code_r0x080048c0;
                }
                for (piVar7 = *(obj.DATARMNET665d2f133f + (uVar3 * 0x61c88647 >> 0x1c) * 8); piVar7 != NULL;
                    piVar7 = *piVar7) {
                    if (*(piVar7 + 4) == uVar3) {
                        kfree_skb(iVar13);
                        uVar5 = 0x12;
                        goto code_r0x0800481c;
                    }
                }
                uVar5 = 10;
            }
            else {
                if (uVar2 != 0x32) {
                    if (uVar2 != 0x11) goto code_r0x080048bc;
                    goto code_r0x08004910;
                }
                param_3 = 0x8;
                uStack_78 = 0;
                puVar9 = sym.skb_header_pointer(iVar13,uVar5,8,&uStack_78);
                if (puVar9 != NULL) {
                    uStack_68 = CONCAT44(uStack_68._4_4_,*puVar9);
                    goto code_r0x08004998;
                }
                uVar5 = 0x14;
            }
code_r0x080048b8:
            sym.DATARMNET5ca94dbc3c(uVar5);
            goto code_r0x080048bc;
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,*(puVar1 + 0x10));
        uStack_40 = CONCAT31(uStack_40._1_3_,4);
        uStack_50 = CONCAT44(uStack_50._4_4_,*(puVar1 + 0xc));
        piVar7 = sym.DATARMNET07f0e0f286(&uStack_60);
        if (piVar7 == NULL) goto code_r0x08004704;
code_r0x080047f8:
        iVar10 = *piVar7;
        if (iVar10 == 0) {
            uVar5 = 4;
            goto code_r0x080048b8;
        }
        sym.DATARMNET7ca470d54b(iVar13,0x1200);
        *(iVar13 + 0x10) = iVar10;
        dev_queue_xmit(iVar13);
        uVar5 = 3;
code_r0x0800481c:
        sym.DATARMNET5ca94dbc3c(uVar5);
        uVar12 = 0;
    }
code_r0x080048c0:
    __rcu_read_unlock();
code_r0x080048c4:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = 0x8004a00;
        pcVar11 = *param_3;
        if (((pcVar11 != NULL) && (*pcVar11 == obj.DATARMNET755f0f0df8.llvm.8155310952281713815)) &&
           ((pcVar11[1] == 0x0 ||
            ((pcVar11[1] == *0x800052d &&
             ((pcVar11[2] == 0x0 ||
              ((pcVar11[2] == *0x800052e &&
               ((pcVar11[3] == 0x0 ||
                ((pcVar11[3] == *0x800052f &&
                 ((pcVar11[4] == 0x0 ||
                  ((pcVar11[4] == *0x8000530 &&
                   ((pcVar11[5] == 0x0 ||
                    ((pcVar11[5] == *0x8000531 &&
                     ((pcVar11[6] == 0x0 ||
                      ((pcVar11[6] == *0x8000532 &&
                       ((pcVar11[7] == 0x0 ||
                        ((pcVar11[7] == *0x8000533 &&
                         ((pcVar11[8] == 0x0 ||
                          ((pcVar11[8] == *0x8000534 &&
                           ((pcVar11[9] == 0x0 ||
                            ((pcVar11[9] == *0x8000535 &&
                             ((pcVar11[10] == 0x0 ||
                              ((pcVar11[10] == *0x8000536 &&
                               ((pcVar11[0xb] == 0x0 ||
                                ((pcVar11[0xb] == *0x8000537 &&
                                 ((pcVar11[0xc] == 0x0 ||
                                  ((pcVar11[0xc] == *0x8000538 &&
                                   ((pcVar11[0xd] == 0x0 ||
                                    ((pcVar11[0xd] == *0x8000539 &&
                                     ((pcVar11[0xe] == 0x0 ||
                                      ((pcVar11[0xe] == *0x800053a &&
                                       ((pcVar11[0xf] == 0x0 || (pcVar11[0xf] == *0x800053b)))))))))))))))))))))))))))))
                          ))))))))))))))))))))))))))))))) {
            if (extraout_x1 == 5) {
                iVar6 = netdev_rx_handler_register
                                  (pcVar11,sym.DATARMNET37a92021f9.6ab8982d6a7a8b3332a60d957676828e.cfi_jt,0);
                if (iVar6 != 0) {
                    _printk(0x8000b23,"DATARMNET6512527d9c");
                }
            }
            else if (extraout_x1 == 6) {
                netdev_rx_handler_unregister();
            }
        }
        return 0;
    }
    return uVar12;
code_r0x08004730:
    piVar7 = *piVar7;
    goto joined_r0x08004728;
}


// ===== sym.DATARMNETcc0a01df2a @ 0x080022e0 (size 124) =====

void sym.DATARMNETcc0a01df2a(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = *(obj.DATARMNET78ed39f13b + (*(arg1 + 8) * 0x61c88647 >> 0x1c) * 8);
    do {
        if (piVar1 == NULL) {
            return;
        }
        if (*(piVar1 + 0xc) == *(arg1 + 0x18)) {
            if (*(piVar1 + 0xc) == '\x04') {
                if (*(piVar1 + 10) == *(arg1 + 8)) {
                    return;
                }
            }
            else if (*(arg1 + 8) == piVar1[10]) {
                return;
            }
        }
        piVar1 = *piVar1;
    } while( true );
}


// ===== sym.DATARMNET59b8376224 @ 0x08002364 (size 144) =====

ulong sym.DATARMNET59b8376224(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(obj.DATARMNET665d2f133f + ((arg1 & 0xffff) * 0x61c88647 >> 0x1c) * 8);
    while( true ) {
        if (piVar1 == NULL) {
            return 0;
        }
        if (*(piVar1 + 4) == (arg1 & 0xffff)) break;
        piVar1 = *piVar1;
    }
    piVar2 = piVar1[1];
    if (piVar2 != NULL) {
        iVar3 = *piVar1;
        *piVar2 = iVar3;
        if (iVar3 != 0) {
            *(iVar3 + 8) = piVar2;
        }
        piVar1[1] = 0;
    }
    kvfree_call_rcu(piVar1 + 2,0x10);
    sym.DATARMNET5ca94dbc3c(0x11);
    return 0;
}


// ===== sym.DATARMNET0b12e969c5 @ 0x080023f4 (size 288) =====

ulong sym.DATARMNET0b12e969c5(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    pcVar4 = obj.DATARMNET665d2f133f + ((arg1 & 0xffff) * 0x61c88647 >> 0x1c) * 8;
    piVar2 = *pcVar4;
    do {
        if (piVar2 == NULL) {
            __rcu_read_unlock();
            iVar3 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar3 = 0x30;
            }
            piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x28);
            if (piVar2 == NULL) {
                puVar5 = *(arg2 + 0x40);
                pcVar4 = obj.DATARMNET0b12e969c5.__msg.1;
                do_trace_netlink_extack(obj.DATARMNET0b12e969c5.__msg.1);
                uVar1 = 0xfffffff4;
                if (puVar5 != NULL) {
code_r0x080024f8:
                    *puVar5 = pcVar4;
                }
            }
            else {
                iVar3 = *pcVar4;
                *(piVar2 + 4) = arg1;
                *piVar2 = iVar3;
                piVar2[1] = pcVar4;
                *pcVar4 = piVar2;
                if (iVar3 != 0) {
                    *(iVar3 + 8) = piVar2;
                }
                sym.DATARMNET5ca94dbc3c(0x10);
                uVar1 = 0;
            }
            return uVar1;
        }
        if (*(piVar2 + 4) == (arg1 & 0xffff)) {
            __rcu_read_unlock();
            puVar5 = *(arg2 + 0x40);
            pcVar4 = obj.DATARMNET0b12e969c5.__msg;
            do_trace_netlink_extack(obj.DATARMNET0b12e969c5.__msg);
            uVar1 = 0xffffffef;
            if (puVar5 == NULL) {
                return 0xffffffef;
            }
            goto code_r0x080024f8;
        }
        piVar2 = *piVar2;
    } while( true );
}


// ===== sym.DATARMNET7ca470d54b @ 0x0800251c (size 1316) =====

uchar * sym.DATARMNET7ca470d54b(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    int16_t iVar5;
    uint32_t uVar6;
    int iVar7;
    uchar *puVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    int in_w2;
    uchar *in_x3;
    uint32_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    ushort uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    uint8_t *puVar15;
    uchar *puVar16;
    ulong unaff_x30;
    uchar in_q1 [16];
    uchar auVar17 [16];
    char acStack_c8 [4];
    ushort auStack_c4 [2];
    uint8_t auStack_c0 [16];
    uint64_t uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    iVar5 = *(arg1 + 0xb0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    if (iVar5 == 8) {
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        auStack_c0[0] = 0;
        auStack_c0[1] = 0;
        auStack_c0[2] = 0;
        auStack_c0[3] = 0;
        auStack_c0[4] = 0;
        auStack_c0[5] = 0;
        auStack_c0[6] = 0;
        auStack_c0[7] = 0;
        auStack_c0[8] = 0;
        auStack_c0[9] = 0;
        auStack_c0[10] = 0;
        auStack_c0[0xb] = 0;
        auStack_c0[0xc] = 0;
        auStack_c0[0xd] = 0;
        auStack_c0[0xe] = 0;
        auStack_c0[0xf] = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
            if (arg1 != 0) {
                puVar8 = &stack0xffffffffffffff40;
                in_x3 = 0x14;
                puVar15 = &stack0xffffffffffffff40;
                iVar7 = skb_copy_bits(arg1,0,puVar8,0x14);
                in_w2 = puVar8;
                if (-1 < iVar7) goto code_r0x08002594;
            }
        }
        else {
            puVar15 = *(arg1 + 0xd8);
            if (puVar15 != NULL) {
code_r0x08002594:
                if (puVar15[9] != 6) {
code_r0x0800279c:
                    uVar11 = 0xc;
                    goto code_r0x080027d4;
                }
                uVar6 = (*puVar15 & 0xf) << 2;
code_r0x08002610:
                uVar2 = uVar6 & 0xffff;
                if (*(arg1 + 0x70) - (uVar2 + *(arg1 + 0x74)) < 0x14) {
                    if (arg1 != 0) {
                        puVar16 = &stack0xffffffffffffff68;
                        in_x3 = 0x14;
                        puVar8 = &stack0xffffffffffffff68;
                        iVar7 = skb_copy_bits(arg1,uVar2,puVar16,0x14);
                        in_w2 = puVar16;
                        if (-1 < iVar7) goto code_r0x08002634;
                    }
                }
                else {
                    puVar8 = *(arg1 + 0xd8) + uVar2;
                    if (puVar8 != NULL) {
code_r0x08002634:
                        if ((*(puVar8 + 0xc) & arg2) == 0) goto code_r0x0800279c;
                        uVar3 = *(puVar8 + 0xc) >> 2 & 0x3c;
                        uVar1 = uVar2 + uVar3;
                        uVar11 = *(arg1 + 0x70) - *(arg1 + 0x74);
                        iVar7 = uVar1 - uVar11;
                        if ((uVar1 < uVar11 || iVar7 == 0) ||
                           ((uVar1 <= *(arg1 + 0x70) && (iVar10 = __pskb_pull_tail(arg1,iVar7), iVar10 != 0)))) {
                            if (((*(arg1 + 0x7e) & 1) != 0) &&
                               (((*(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 0x20) & 0xffff) != 1 &&
                                ((((*(arg1 + 0x7e) & 1) != 0 &&
                                  (uVar11 = *(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 0x20),
                                  (uVar11 & 0xffff) - (uVar11 >> 0x10) != 1)) ||
                                 (*(arg1 + 0x7a) < uVar1 + (*(arg1 + 0xd8) - *(arg1 + 0xd0)))))))) {
                                in_w2 = 0;
                                in_x3 = 0xa20;
                                iVar7 = pskb_expand_head(arg1,0,0,0xa20);
                                if (iVar7 != 0) goto code_r0x080027d0;
                            }
                            if (*(arg1 + 0x70) - (uVar2 + *(arg1 + 0x74)) < uVar3) {
                                if (arg1 != 0) {
                                    puVar16 = &stack0xffffffffffffff68;
                                    in_x3 = uVar3;
                                    puVar8 = &stack0xffffffffffffff68;
                                    iVar7 = skb_copy_bits(arg1,uVar2,puVar16,in_x3);
                                    in_w2 = puVar16;
                                    if (-1 < iVar7) goto code_r0x08002704;
                                }
                            }
                            else {
                                puVar8 = *(arg1 + 0xd8) + uVar2;
                                if (puVar8 != NULL) {
code_r0x08002704:
                                    if (0x14 < uVar3) {
                                        uVar13 = 0x14;
                                        do {
                                            iVar7 = uVar13;
                                            if (puVar8[uVar13] == 2) {
                                                uVar13 = uVar13 + 1;
                                                if (puVar8[uVar13] == '\x04') {
                                                    if (*(puVar8 + (iVar7 + 2U)) < 0x7405) goto code_r0x0800279c;
                                                    if ((~*(arg1 + 0x80) & 0x60) != 0) {
                                                        uVar6 = (~*(puVar8 + 0x10) - *(puVar8 + (iVar7 + 2U))) + 0x7404;
                                                        *(puVar8 + 0x10) =
                                                             (uVar6 >> 0x10 | uVar6 * 0x10000) + uVar6 >> 0x10 ^ 0xffff;
                                                    }
                                                    uVar11 = 0xb;
                                                    *(puVar8 + (iVar7 + 2U)) = 0x7404;
                                                    goto code_r0x080027d4;
                                                }
code_r0x08002728:
                                                uVar11 = puVar8[uVar13];
                                                if (uVar11 == 0) {
                                                    uVar11 = 1;
                                                }
                                            }
                                            else {
                                                if (1 < puVar8[uVar13]) {
                                                    uVar13 = iVar7 + 1;
                                                    goto code_r0x08002728;
                                                }
                                                uVar11 = 1;
                                            }
                                            uVar13 = uVar11 + iVar7;
                                        } while (uVar11 + iVar7 < uVar3);
                                    }
                                    uVar12 = *(arg1 + 0x70);
                                    uVar11 = 0xc;
                                    if ((uVar1 < uVar12) || (uVar3 == 0x3c)) goto code_r0x080027d4;
                                    if (*(arg1 + 0x74) == 0) {
                                        if (*(arg1 + 0xcc) - *(arg1 + 200) < 4) {
                                            in_w2 = (*(arg1 + 200) - *(arg1 + 0xcc)) + 4;
                                            goto code_r0x080027bc;
                                        }
code_r0x08002830:
                                        uVar12 = uVar12 - uVar6;
                                        puVar16 = puVar8 + 0x10;
                                        sym.DATARMNETc03853e26d
                                                  (puVar16,arg1,
                                                   ((uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8) & 0xffff,
                                                   ((uVar12 + 4 & 0xff00ff00) >> 8 | (uVar12 + 4 & 0xff00ff) << 8) &
                                                   0xffff);
                                        puVar9 = skb_put(arg1,4);
                                        uVar14 = 0x1802;
                                        if (iVar5 != 8) {
                                            uVar14 = 0x7404;
                                        }
                                        *puVar9 = 0x402;
                                        *(puVar9 + 2) = uVar14;
                                        sym.DATARMNET9a8d756527(puVar16,arg1,in_q1,*puVar9);
                                        in_w2 = *(puVar8 + 0xc);
                                        *(puVar8 + 0xc) = in_w2 + 0x10 & 0xf0 | in_w2 & 0xff0f;
                                        in_x3 = *(puVar8 + 0xc);
                                        sym.DATARMNET9a8d756527(puVar16,arg1,in_q1,*(puVar8 + 0xc));
                                        iVar10 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
                                        if (iVar5 == 8) {
                                            uVar11 = 0xb;
                                            uVar2 = *(arg1 + 0x70) >> 8 | (*(arg1 + 0x70) & 0xff00ff) << 8;
                                            uVar6 = (*(iVar10 + 10) ^ 0xffff) + (*(iVar10 + 2) ^ 0xffff);
                                            uVar6 = uVar6 + uVar2 + (uVar6 >> 0x10);
                                            uVar4 = uVar6;
                                            if ((uVar6 & 0xffff) < uVar2) {
                                                uVar4 = uVar4 + 1;
                                            }
                                            *(iVar10 + 10) = ~uVar4;
                                            *(iVar10 + 2) = *(arg1 + 0x70) >> 8 | *(arg1 + 0x70) << 8;
                                        }
                                        else {
                                            uVar11 = 0xb;
                                            uVar6 = (*(iVar10 + 4) >> 8 | (*(iVar10 + 4) & 0xff00ff) << 8) + 4;
                                            *(iVar10 + 4) = uVar6 >> 8 & 0xff | (uVar6 & 0xff00ff) << 8;
                                        }
                                        goto code_r0x080027d4;
                                    }
                                    in_w2 = 4;
code_r0x080027bc:
                                    in_x3 = 0xa20;
                                    iVar7 = pskb_expand_head(arg1,0,in_w2,0xa20);
                                    if (iVar7 == 0) {
                                        in_x3 = &stack0xffffffffffffff68;
                                        uVar13 = uVar3;
                                        puVar8 = sym.skb_header_pointer(arg1,uVar2,uVar13,in_x3);
                                        in_w2 = uVar13;
                                        if (puVar8 != NULL) {
                                            uVar12 = *(arg1 + 0x70);
                                            goto code_r0x08002830;
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
    else if (iVar5 == -0x227a) {
        uStack_a8 = 0;
        uStack_a0 = 0;
        auStack_c0[8] = 0;
        auStack_c0[9] = 0;
        auStack_c0[10] = 0;
        auStack_c0[0xb] = 0;
        auStack_c0[0xc] = 0;
        auStack_c0[0xd] = 0;
        auStack_c0[0xe] = 0;
        auStack_c0[0xf] = 0;
        uStack_b0 = 0;
        auStack_c0[0] = 0;
        auStack_c0[1] = 0;
        auStack_c0[2] = 0;
        auStack_c0[3] = 0;
        auStack_c0[4] = 0;
        auStack_c0[5] = 0;
        auStack_c0[6] = 0;
        auStack_c0[7] = 0;
        auStack_c4[0] = 0;
        acStack_c8[0] = '\0';
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
            if (arg1 != 0) {
                puVar8 = &stack0xffffffffffffff40;
                in_x3 = 0x28;
                puVar16 = &stack0xffffffffffffff40;
                iVar7 = skb_copy_bits(arg1,0,puVar8,0x28);
                in_w2 = puVar8;
                if (-1 < iVar7) goto code_r0x080025e4;
            }
        }
        else {
            puVar16 = *(arg1 + 0xd8);
            if (puVar16 != NULL) {
code_r0x080025e4:
                acStack_c8[0] = puVar16[6];
                puVar8 = &stack0xffffffffffffff38;
                in_x3 = &stack0xffffffffffffff3c;
                uVar6 = ipv6_skip_exthdr(arg1,0x28,puVar8,in_x3);
                in_w2 = puVar8;
                if (acStack_c8[0] == '\x06') goto code_r0x08002610;
                goto code_r0x0800279c;
            }
        }
    }
code_r0x080027d0:
    uVar11 = 0xd;
code_r0x080027d4:
    puVar8 = sym.DATARMNET5ca94dbc3c(uVar11);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_58) {
        auVar17 = __stack_chk_fail();
        iVar10 = auVar17._0_8_;
        *extraout_x18 = 0x8002a38;
        if (*(iVar10 + 0x70) - (*(iVar10 + 0x74) + auVar17._8_4_) < in_w2) {
            puVar8 = NULL;
            if (iVar10 != 0) {
                iVar7 = skb_copy_bits(iVar10,auVar17._8_8_,in_x3,in_w2);
                puVar8 = NULL;
                if (-1 < iVar7) {
                    puVar8 = in_x3;
                }
            }
        }
        else {
            puVar8 = *(iVar10 + 0xd8) + auVar17._8_4_;
        }
        return puVar8;
    }
    return puVar8;
}


// ===== sym.skb_header_pointer @ 0x08002a40 (size 100) =====

int64_t sym.skb_header_pointer(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    iVar1 = arg2;
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x70) - (*(arg1 + 0x74) + iVar1) < arg3) {
        iVar2 = 0;
        if (arg1 != 0) {
            iVar1 = skb_copy_bits(arg1,iVar1,arg4,arg3 & 0xffffffff);
            iVar2 = 0;
            if (-1 < iVar1) {
                iVar2 = arg4;
            }
        }
    }
    else {
        iVar2 = *(arg1 + 0xd8) + iVar1;
    }
    return iVar2;
}


// ===== sym.skb_header_pointer_1 @ 0x08002aa4 (size 92) =====

int64_t sym.skb_header_pointer_1(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x70) - *(arg1 + 0x74) < arg2) {
        iVar2 = 0;
        if (arg1 != 0) {
            iVar1 = skb_copy_bits(arg1,0,arg3,arg2 & 0xffffffff);
            iVar2 = 0;
            if (-1 < iVar1) {
                iVar2 = arg3;
            }
        }
    }
    else {
        iVar2 = *(arg1 + 0xd8);
    }
    return iVar2;
}


// ===== sym.DATARMNETc03853e26d @ 0x08002b00 (size 188) =====

void sym.DATARMNETc03853e26d(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    uVar2 = arg3 & 0xffff;
    uVar3 = arg4 & 0xffff;
    uVar4 = *arg1;
    if ((~*(arg2 + 0x80) & 0x60) == 0) {
        uVar1 = uVar4 + ~uVar2 + uVar3;
        if (CARRY4(uVar4,~uVar2)) {
            uVar1 = uVar1 + 1;
        }
        if (uVar1 < uVar3) {
            uVar1 = uVar1 + 1;
        }
        *arg1 = (uVar1 >> 0x10 | uVar1 << 0x10) + uVar1 >> 0x10;
    }
    else {
        uVar1 = (uVar3 - uVar2) + ~uVar4;
        if (uVar1 < uVar3) {
            uVar1 = (uVar3 - uVar2) - uVar4;
        }
        *arg1 = (uVar1 >> 0x10 | uVar1 << 0x10) + uVar1 >> 0x10 ^ 0xffff;
        if ((*(arg2 + 0x80) & 0x60) == 0x40) {
            uVar1 = ~*(arg2 + 0x88) + ~uVar2 + uVar3;
            if (CARRY4(~*(arg2 + 0x88),~uVar2)) {
                uVar1 = uVar1 + 1;
            }
            if (uVar1 < uVar3) {
                uVar1 = uVar1 + 1;
            }
            *(arg2 + 0x88) = ~uVar1;
            return;
        }
    }
    return;
}


// ===== sym.DATARMNET9a8d756527 @ 0x08002bbc (size 80) =====

void sym.DATARMNET9a8d756527(int64_t arg1,int64_t arg2,uchar noname_2 [16],uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t in_w2;
    
    if ((~*(arg2 + 0x80) & 0x60) != 0) {
        uVar1 = ~*arg1 + ~in_w2 + arg3;
        if (CARRY4(~*arg1,~in_w2)) {
            uVar1 = uVar1 + 1;
        }
        if (uVar1 < arg3) {
            uVar1 = uVar1 + 1;
        }
        *arg1 = (uVar1 >> 0x10 | uVar1 << 0x10) + uVar1 >> 0x10 ^ 0xffff;
    }
    return;
}


// ===== sym.DATARMNET4899053671 @ 0x08002c0c (size 100) =====

uint sym.DATARMNET4899053671(int64_t arg1)

{
    uint32_t arg1_00;
    int64_t *in_x1;
    ulong *in_x18;
    uint uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *in_x1;
    if (iVar2 == 0) {
        uVar1 = 0xffffffed;
        arg1_00 = 4;
    }
    else {
        sym.DATARMNET7ca470d54b(arg1,0x1200);
        *(arg1 + 0x10) = iVar2;
        dev_queue_xmit(arg1);
        uVar1 = 0;
        arg1_00 = 3;
    }
    sym.DATARMNET5ca94dbc3c(arg1_00);
    return uVar1;
}


// ===== sym.DATARMNET4eafcdee07 @ 0x08002c74 (size 148) =====

ulong sym.DATARMNET4eafcdee07(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = *(obj.DATARMNET1903907456 + (*arg1 * 0x61c88647 >> 0x1c) * 8);
    do {
        if (piVar1 == NULL) {
            return 0;
        }
        if ((*(piVar1 + 0x24) == *(arg1 + 4)) && (*(piVar1 + 0x25) == *(arg1 + 5))) {
            if (*(piVar1 + 0x24) == '2') {
                if (*(piVar1 + 4) == *arg1) {
                    return 1;
                }
            }
            else if (*(piVar1 + 4) == *arg1) {
                return 1;
            }
        }
        piVar1 = *piVar1;
    } while( true );
}


// ===== sym.DATARMNET53f12a0f7d @ 0x08002d10 (size 512) =====

uint sym.DATARMNET53f12a0f7d(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint16_t *puVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET63a2b7773e);
    if (arg2 != 0) {
        uVar7 = 0;
        do {
            puVar2 = arg1 + uVar7 * 8;
            __rcu_read_lock();
            piVar3 = *(obj.DATARMNET1903907456 + (*puVar2 * 0x61c88647 >> 0x1c) * 8);
            if (piVar3 != NULL) {
                do {
                    if ((*(piVar3 + 0x24) == puVar2[2]) && (*(piVar3 + 0x25) == *(puVar2 + 5))) {
                        if (*(piVar3 + 0x24) == '2') {
                            if (piVar3[4] == *puVar2) {
code_r0x08002e80:
                                __rcu_read_unlock();
                                puVar6 = *(arg3 + 0x40);
                                do_trace_netlink_extack("Tuple already present");
                                if (puVar6 != NULL) {
                                    *puVar6 = "Tuple already present";
                                }
                                goto code_r0x08002d98;
                            }
                        }
                        else if (*(piVar3 + 4) == *puVar2) goto code_r0x08002e80;
                    }
                    piVar3 = *piVar3;
                } while (piVar3 != NULL);
            }
            __rcu_read_unlock();
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x28);
            if (piVar3 == NULL) {
                puVar6 = *(arg3 + 0x40);
                do_trace_netlink_extack("Cannot allocate tuple memory");
                uVar5 = 0xfffffff4;
                if (puVar6 != NULL) {
                    *puVar6 = "Cannot allocate tuple memory";
                }
                goto code_r0x08002ed8;
            }
            iVar4 = *puVar2;
            piVar3[4] = iVar4;
            pcVar1 = obj.DATARMNET1903907456 + ((iVar4 & 0xffff) * 0x61c88647 >> 0x1c) * 8;
            iVar4 = *pcVar1;
            *piVar3 = iVar4;
            piVar3[1] = pcVar1;
            *pcVar1 = piVar3;
            if (iVar4 != 0) {
                *(iVar4 + 8) = piVar3;
            }
            sym.DATARMNET5ca94dbc3c(0);
            _segment.ehdr = _segment.ehdr + 1;
code_r0x08002d98:
            uVar7 = uVar7 + 1;
        } while (uVar7 != (arg2 & 0xffffffffU));
    }
    uVar5 = 0;
code_r0x08002ed8:
    mutex_unlock(obj.DATARMNET63a2b7773e);
    return uVar5;
}


// ===== sym.DATARMNET07f6485c9b @ 0x08002f18 (size 364) =====

ulong sym.DATARMNET07f6485c9b(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t *puVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET63a2b7773e);
    if (arg2 != 0) {
        uVar5 = 0;
        do {
            puVar1 = arg1 + uVar5 * 8;
            if (*(obj.DATARMNET1903907456 + (*puVar1 * 0x61c88647 >> 0x1c) * 8) != NULL) {
                piVar2 = *(obj.DATARMNET1903907456 + (*puVar1 * 0x61c88647 >> 0x1c) * 8);
                do {
                    piVar3 = *piVar2;
                    if ((*(piVar2 + 0x24) == puVar1[2]) && (*(piVar2 + 0x25) == *(puVar1 + 5))) {
                        if (puVar1[2] == '2') {
                            if (piVar2[4] != *puVar1) goto code_r0x08002fe4;
                        }
                        else if (*(piVar2 + 4) != *puVar1) goto code_r0x08002fe4;
                        piVar4 = piVar2[1];
                        if (piVar4 != NULL) {
                            *piVar4 = piVar3;
                            if (piVar3 != NULL) {
                                piVar3[1] = piVar4;
                            }
                            piVar2[1] = 0;
                        }
                        kvfree_call_rcu(piVar2 + 2,0x10);
                        sym.DATARMNET5ca94dbc3c(1);
                        _segment.ehdr = _segment.ehdr + -1;
                        goto code_r0x08002fa4;
                    }
code_r0x08002fe4:
                    piVar2 = piVar3;
                } while (piVar3 != NULL);
            }
            puVar6 = *(arg3 + 0x40);
            do_trace_netlink_extack("No such tuple");
            if (puVar6 != NULL) {
                *puVar6 = "No such tuple";
            }
code_r0x08002fa4:
            uVar5 = uVar5 + 1;
        } while (uVar5 != (arg2 & 0xffffffffU));
    }
    mutex_unlock(obj.DATARMNET63a2b7773e);
    return 0;
}


// ===== sym.DATARMNET97b2388e63 @ 0x08003084 (size 604) =====

int sym.DATARMNET97b2388e63(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.DATARMNET30500ba48c.llvm.8155310952281713815 == *arg1) &&
       ((*0x800051d == '\0' ||
        ((*0x800051d == *(arg1 + 1) &&
         ((*0x800051e == '\0' ||
          ((*0x800051e == *(arg1 + 2) &&
           ((*0x800051f == '\0' ||
            ((*0x800051f == *(arg1 + 3) &&
             ((obj.DATARMNET61e8f41aae == 0x0 ||
              ((obj.DATARMNET61e8f41aae == *(arg1 + 4) &&
               ((*0x8000521 == '\0' ||
                ((*0x8000521 == *(arg1 + 5) &&
                 ((*0x8000522 == '\0' ||
                  ((*0x8000522 == *(arg1 + 6) &&
                   ((*0x8000523 == '\0' ||
                    ((*0x8000523 == *(arg1 + 7) &&
                     ((*0x8000524 == '\0' ||
                      ((*0x8000524 == *(arg1 + 8) &&
                       ((*0x8000525 == '\0' ||
                        ((*0x8000525 == *(arg1 + 9) &&
                         ((*0x8000526 == '\0' ||
                          ((*0x8000526 == *(arg1 + 10) &&
                           ((*0x8000527 == '\0' ||
                            ((*0x8000527 == *(arg1 + 0xb) &&
                             ((str.RMNET_WLAN[0] == '\0' ||
                              ((str.RMNET_WLAN[0] == *(arg1 + 0xc) &&
                               ((str.RMNET_WLAN[1] == '\0' ||
                                ((str.RMNET_WLAN[1] == *(arg1 + 0xd) &&
                                 ((str.RMNET_WLAN[2] == '\0' ||
                                  ((str.RMNET_WLAN[2] == *(arg1 + 0xe) &&
                                   ((str.RMNET_WLAN[3] == '\0' || (str.RMNET_WLAN[3] == *(arg1 + 0xf))))))))))))))))))))
                           ))))))))))))))))))))))))))))))))))))))))) {
        puVar3 = *(arg2 + 0x40);
        pcVar1 = obj.DATARMNET97b2388e63.__msg;
        do_trace_netlink_extack(obj.DATARMNET97b2388e63.__msg);
        iVar2 = 0;
joined_r0x0800326c:
        if (puVar3 != NULL) {
            *puVar3 = pcVar1;
        }
    }
    else {
        if (obj.DATARMNET30500ba48c.llvm.8155310952281713815 != 0x0) {
            iVar2 = unregister_netdevice_notifier(reloc.DATARMNET0ed065ddb7.6ab8982d6a7a8b3332a60d957676828e.cfi_jt);
            if (iVar2 != 0) {
                puVar3 = *(arg2 + 0x40);
                pcVar1 = obj.DATARMNET97b2388e63.__msg.2;
                do_trace_netlink_extack(obj.DATARMNET97b2388e63.__msg.2);
                goto joined_r0x0800326c;
            }
            obj.DATARMNET30500ba48c.llvm.8155310952281713815 = 0x0;
        }
        strlcpy(obj.DATARMNET30500ba48c.llvm.8155310952281713815,arg1,0x10);
        iVar2 = register_netdevice_notifier(reloc.DATARMNET0ed065ddb7.6ab8982d6a7a8b3332a60d957676828e.cfi_jt);
        if (iVar2 != 0) {
            puVar3 = *(arg2 + 0x40);
            do_trace_netlink_extack(obj.DATARMNET97b2388e63.__msg.3);
            if (puVar3 != NULL) {
                *puVar3 = obj.DATARMNET97b2388e63.__msg.3;
            }
            obj.DATARMNET30500ba48c.llvm.8155310952281713815 = 0x0;
        }
    }
    return iVar2;
}


// ===== sym.DATARMNETaba2beb199 @ 0x080032e0 (size 56) =====

int sym.DATARMNETaba2beb199(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char *pcVar2;
    
    pcVar2 = arg1 + 1;
    while( true ) {
        if (arg3 == 0) {
            return 0;
        }
        if (pcVar2[-1] - *arg2 != 0) break;
        cVar1 = *pcVar2;
        arg2 = arg2 + 1;
        arg3 = arg3 + -1;
        pcVar2 = pcVar2 + 1;
        if (cVar1 == '\0') {
            return 0;
        }
    }
    return pcVar2[-1] - *arg2;
}


// ===== sym.DATARMNET92e5468fc5 @ 0x08003318 (size 604) =====

int sym.DATARMNET92e5468fc5(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.DATARMNET755f0f0df8.llvm.8155310952281713815 == *arg1) &&
       ((*0x800052d == '\0' ||
        ((*0x800052d == *(arg1 + 1) &&
         ((*0x800052e == '\0' ||
          ((*0x800052e == *(arg1 + 2) &&
           ((*0x800052f == '\0' ||
            ((*0x800052f == *(arg1 + 3) &&
             ((*0x8000530 == '\0' ||
              ((*0x8000530 == *(arg1 + 4) &&
               ((*0x8000531 == '\0' ||
                ((*0x8000531 == *(arg1 + 5) &&
                 ((*0x8000532 == '\0' ||
                  ((*0x8000532 == *(arg1 + 6) &&
                   ((*0x8000533 == '\0' ||
                    ((*0x8000533 == *(arg1 + 7) &&
                     ((*0x8000534 == '\0' ||
                      ((*0x8000534 == *(arg1 + 8) &&
                       ((*0x8000535 == '\0' ||
                        ((*0x8000535 == *(arg1 + 9) &&
                         ((*0x8000536 == '\0' ||
                          ((*0x8000536 == *(arg1 + 10) &&
                           ((*0x8000537 == '\0' ||
                            ((*0x8000537 == *(arg1 + 0xb) &&
                             ((*0x8000538 == '\0' ||
                              ((*0x8000538 == *(arg1 + 0xc) &&
                               ((*0x8000539 == '\0' ||
                                ((*0x8000539 == *(arg1 + 0xd) &&
                                 ((*0x800053a == '\0' ||
                                  ((*0x800053a == *(arg1 + 0xe) &&
                                   ((*0x800053b == '\0' || (*0x800053b == *(arg1 + 0xf))))))))))))))))))))))))))))))))))
                    ))))))))))))))))))))))))))) {
        puVar3 = *(arg2 + 0x40);
        pcVar1 = "Device is already set";
        do_trace_netlink_extack("Device is already set");
        iVar2 = 0;
joined_r0x08003500:
        if (puVar3 != NULL) {
            *puVar3 = pcVar1;
        }
    }
    else {
        if (obj.DATARMNET755f0f0df8.llvm.8155310952281713815 != 0x0) {
            iVar2 = unregister_netdevice_notifier(reloc.DATARMNET6512527d9c.6ab8982d6a7a8b3332a60d957676828e.cfi_jt);
            if (iVar2 != 0) {
                puVar3 = *(arg2 + 0x40);
                pcVar1 = "Kernel error, notifier unregister failed";
                do_trace_netlink_extack("Kernel error, notifier unregister failed");
                goto joined_r0x08003500;
            }
            obj.DATARMNET755f0f0df8.llvm.8155310952281713815 = 0x0;
        }
        strlcpy(obj.DATARMNET755f0f0df8.llvm.8155310952281713815,arg1,0x10);
        iVar2 = register_netdevice_notifier(reloc.DATARMNET6512527d9c.6ab8982d6a7a8b3332a60d957676828e.cfi_jt);
        if (iVar2 != 0) {
            puVar3 = *(arg2 + 0x40);
            do_trace_netlink_extack("Kernel error, notifier failed");
            if (puVar3 != NULL) {
                *puVar3 = "Kernel error, notifier failed";
            }
            obj.DATARMNET755f0f0df8.llvm.8155310952281713815 = 0x0;
        }
    }
    return iVar2;
}


// ===== sym.DATARMNETa903cd5994 @ 0x08003574 (size 80) =====

ulong sym.DATARMNETa903cd5994(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.DATARMNET30500ba48c.llvm.8155310952281713815 == 0x0) {
        uVar1 = 0;
    }
    else {
        uVar1 = unregister_netdevice_notifier(reloc.DATARMNET0ed065ddb7.6ab8982d6a7a8b3332a60d957676828e.cfi_jt);
        if (uVar1 == 0) {
            obj.DATARMNET30500ba48c.llvm.8155310952281713815 = 0x0;
        }
    }
    return uVar1;
}


// ===== sym.DATARMNET9d7bb9a63d @ 0x080035c4 (size 80) =====

ulong sym.DATARMNET9d7bb9a63d(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.DATARMNET755f0f0df8.llvm.8155310952281713815 == 0x0) {
        uVar1 = 0;
    }
    else {
        uVar1 = unregister_netdevice_notifier(reloc.DATARMNET6512527d9c.6ab8982d6a7a8b3332a60d957676828e.cfi_jt);
        if (uVar1 == 0) {
            obj.DATARMNET755f0f0df8.llvm.8155310952281713815 = 0x0;
        }
    }
    return uVar1;
}


// ===== sym.DATARMNET947eb110d2 @ 0x08003614 (size 452) =====

int sym.DATARMNET947eb110d2(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNETf46fb02ac6);
    __rcu_read_lock();
    piVar5 = *(obj.DATARMNET78ed39f13b + (*(arg1 + 8) * 0x61c88647 >> 0x1c) * 8);
    do {
        if (piVar5 == NULL) {
            __rcu_read_unlock();
            piVar5 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xdc0,0x68);
            if (piVar5 == NULL) {
                puVar7 = *(arg2 + 0x40);
                do_trace_netlink_extack("Cannot allocate FWD context");
                iVar4 = -0xc;
                if (puVar7 != NULL) {
                    *puVar7 = "Cannot allocate FWD context";
                }
            }
            else {
                iVar6 = *(arg1 + 0x18);
                uVar2 = *arg1;
                iVar3 = *(arg1 + 8);
                piVar5[0xb] = *(arg1 + 0x10);
                piVar5[0xc] = iVar6;
                piVar5[9] = 0;
                piVar5[10] = iVar3;
                strlcpy(piVar5 + 7,uVar2,0x10);
                piVar5[4] = sym.DATARMNETe98553a8fc.6ab8982d6a7a8b3332a60d957676828e.cfi_jt;
                iVar4 = register_netdevice_notifier();
                if (iVar4 == 0) {
                    iVar4 = 0;
                    pcVar1 = obj.DATARMNET78ed39f13b + (*(arg1 + 8) * 0x61c88647 >> 0x1c) * 8;
                    iVar6 = *pcVar1;
                    *piVar5 = iVar6;
                    piVar5[1] = pcVar1;
                    *pcVar1 = piVar5;
                    if (iVar6 != 0) {
                        *(iVar6 + 8) = piVar5;
                    }
                }
                else {
                    puVar7 = *(arg2 + 0x40);
                    do_trace_netlink_extack("Registering FWD notifier failed");
                    if (puVar7 != NULL) {
                        *puVar7 = "Registering FWD notifier failed";
                    }
                    kfree(piVar5);
                }
            }
code_r0x080037ac:
            mutex_unlock(obj.DATARMNETf46fb02ac6);
            return iVar4;
        }
        if (*(piVar5 + 0xc) == *(arg1 + 0x18)) {
            if (*(piVar5 + 0xc) == '\x04') {
                if (*(piVar5 + 10) == *(arg1 + 8)) {
code_r0x08003734:
                    puVar7 = *(arg2 + 0x40);
                    do_trace_netlink_extack("FWD information already present");
                    if (puVar7 != NULL) {
                        *puVar7 = "FWD information already present";
                    }
                    __rcu_read_unlock();
                    iVar4 = -0x11;
                    goto code_r0x080037ac;
                }
            }
            else if (*(arg1 + 8) == piVar5[10]) goto code_r0x08003734;
        }
        piVar5 = *piVar5;
    } while( true );
}


// ===== sym.DATARMNETb8b35fdc18 @ 0x080037e0 (size 684) =====

int sym.DATARMNETb8b35fdc18(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNETf46fb02ac6);
    __rcu_read_lock();
    piVar5 = *(obj.DATARMNET78ed39f13b + (*(arg1 + 8) * 0x61c88647 >> 0x1c) * 8);
    do {
        if (piVar5 == NULL) {
            __rcu_read_unlock();
            puVar6 = *(arg2 + 0x40);
            pcVar2 = "No such FWD information";
            do_trace_netlink_extack("No such FWD information");
            iVar1 = -3;
joined_r0x08003854:
            if (puVar6 != NULL) {
                *puVar6 = pcVar2;
            }
code_r0x0800385c:
            mutex_unlock(obj.DATARMNETf46fb02ac6);
            return iVar1;
        }
        if (*(piVar5 + 0xc) == *(arg1 + 0x18)) {
            if (*(piVar5 + 0xc) == '\x04') {
                if (*(piVar5 + 10) == *(arg1 + 8)) {
code_r0x080038c4:
                    __rcu_read_unlock();
                    pcVar2 = *arg1;
                    if ((*(piVar5 + 7) != *pcVar2) ||
                       ((*(piVar5 + 0x39) != '\0' &&
                        ((*(piVar5 + 0x39) != pcVar2[1] ||
                         ((*(piVar5 + 0x3a) != '\0' &&
                          ((*(piVar5 + 0x3a) != pcVar2[2] ||
                           ((*(piVar5 + 0x3b) != '\0' &&
                            ((*(piVar5 + 0x3b) != pcVar2[3] ||
                             ((*(piVar5 + 0x3c) != '\0' &&
                              ((*(piVar5 + 0x3c) != pcVar2[4] ||
                               ((*(piVar5 + 0x3d) != '\0' &&
                                ((*(piVar5 + 0x3d) != pcVar2[5] ||
                                 ((*(piVar5 + 0x3e) != '\0' &&
                                  ((*(piVar5 + 0x3e) != pcVar2[6] ||
                                   ((*(piVar5 + 0x3f) != '\0' &&
                                    ((*(piVar5 + 0x3f) != pcVar2[7] ||
                                     ((*(piVar5 + 8) != '\0' &&
                                      ((*(piVar5 + 8) != pcVar2[8] ||
                                       ((*(piVar5 + 0x41) != '\0' &&
                                        ((*(piVar5 + 0x41) != pcVar2[9] ||
                                         ((*(piVar5 + 0x42) != '\0' &&
                                          ((*(piVar5 + 0x42) != pcVar2[10] ||
                                           ((*(piVar5 + 0x43) != '\0' &&
                                            ((*(piVar5 + 0x43) != pcVar2[0xb] ||
                                             ((*(piVar5 + 0x44) != '\0' &&
                                              ((*(piVar5 + 0x44) != pcVar2[0xc] ||
                                               ((*(piVar5 + 0x45) != '\0' &&
                                                ((*(piVar5 + 0x45) != pcVar2[0xd] ||
                                                 ((*(piVar5 + 0x46) != '\0' &&
                                                  ((*(piVar5 + 0x46) != pcVar2[0xe] ||
                                                   ((*(piVar5 + 0x47) != '\0' && (*(piVar5 + 0x47) != pcVar2[0xf])))))))
                                                 ))))))))))))))))))))))))))))))))))))))))))))))))))))) {
                        puVar6 = *(arg2 + 0x40);
                        pcVar2 = "Incorrect FWD device";
                        do_trace_netlink_extack("Incorrect FWD device");
                        iVar1 = -0x13;
                        goto joined_r0x08003854;
                    }
                    iVar1 = unregister_netdevice_notifier(piVar5 + 4);
                    if (iVar1 != 0) {
                        puVar6 = *(arg2 + 0x40);
                        pcVar2 = "Unregistering notifier failed";
                        do_trace_netlink_extack("Unregistering notifier failed");
                        goto joined_r0x08003854;
                    }
                    piVar3 = piVar5[1];
                    if (piVar3 != NULL) {
                        iVar4 = *piVar5;
                        *piVar3 = iVar4;
                        if (iVar4 != 0) {
                            *(iVar4 + 8) = piVar3;
                        }
                        piVar5[1] = 0;
                    }
                    sym.DATARMNETedae8262e1(piVar5 + 9);
                    kvfree_call_rcu(piVar5 + 2,0x10);
                    iVar1 = 0;
                    goto code_r0x0800385c;
                }
            }
            else if (*(arg1 + 8) == piVar5[10]) goto code_r0x080038c4;
        }
        piVar5 = *piVar5;
    } while( true );
}


// ===== sym.DATARMNET8d5a5a7047 @ 0x08003a94 (size 316) =====

uint sym.DATARMNET8d5a5a7047(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint uVar4;
    char *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET954bef55d0);
    __rcu_read_lock();
    pcVar1 = obj.DATARMNET133502ca0e + ((arg1 & 0xffff) * 0x61c88647 >> 0x1c) * 8;
    piVar2 = *pcVar1;
    do {
        if (piVar2 == NULL) {
            __rcu_read_unlock();
            iVar3 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar3 = 0x30;
            }
            piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x28);
            if (piVar2 == NULL) {
                puVar6 = *(arg2 + 0x40);
                pcVar5 = "Cannot allocate encap port memory";
                do_trace_netlink_extack("Cannot allocate encap port memory");
                uVar4 = 0xfffffff4;
                if (puVar6 != NULL) {
code_r0x08003ba4:
                    *puVar6 = pcVar5;
                }
            }
            else {
                iVar3 = *pcVar1;
                *(piVar2 + 4) = arg1;
                *piVar2 = iVar3;
                piVar2[1] = pcVar1;
                *pcVar1 = piVar2;
                if (iVar3 != 0) {
                    *(iVar3 + 8) = piVar2;
                }
                sym.DATARMNET5ca94dbc3c(0xe);
                uVar4 = 0;
            }
code_r0x08003ba8:
            mutex_unlock(obj.DATARMNET954bef55d0);
            return uVar4;
        }
        if (*(piVar2 + 4) == (arg1 & 0xffff)) {
            __rcu_read_unlock();
            puVar6 = *(arg2 + 0x40);
            pcVar5 = "Encap port already present";
            do_trace_netlink_extack("Encap port already present");
            uVar4 = 0xffffffef;
            if (puVar6 == NULL) goto code_r0x08003ba8;
            goto code_r0x08003ba4;
        }
        piVar2 = *piVar2;
    } while( true );
}


// ===== sym.DATARMNETc97c6a4265 @ 0x08003bd8 (size 228) =====

uint sym.DATARMNETc97c6a4265(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET954bef55d0);
    piVar1 = *(obj.DATARMNET133502ca0e + ((arg1 & 0xffff) * 0x61c88647 >> 0x1c) * 8);
    do {
        if (piVar1 == NULL) {
            puVar5 = *(arg2 + 0x40);
            do_trace_netlink_extack("No such port value");
            uVar4 = 0xfffffffd;
            if (puVar5 != NULL) {
                *puVar5 = "No such port value";
            }
code_r0x08003c94:
            mutex_unlock(obj.DATARMNET954bef55d0);
            return uVar4;
        }
        if (*(piVar1 + 4) == (arg1 & 0xffff)) {
            piVar2 = piVar1[1];
            if (piVar2 != NULL) {
                iVar3 = *piVar1;
                *piVar2 = iVar3;
                if (iVar3 != 0) {
                    *(iVar3 + 8) = piVar2;
                }
                piVar1[1] = 0;
            }
            kvfree_call_rcu(piVar1 + 2,0x10);
            sym.DATARMNET5ca94dbc3c(0xf);
            uVar4 = 0;
            goto code_r0x08003c94;
        }
        piVar1 = *piVar1;
    } while( true );
}


// ===== sym.DATARMNETa8b2566e6a @ 0x08003cbc (size 360) =====

bool sym.DATARMNETa8b2566e6a(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    uint16_t *puVar5;
    uint32_t uVar6;
    int *piVar7;
    int64_t *piVar8;
    int16_t *piVar9;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_24;
    int16_t aiStack_20 [4];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    bVar2 = false;
    iStack_18 = *(iVar1 + 0x5e0);
    aiStack_20[0] = 0;
    aiStack_20[1] = 0;
    aiStack_20[2] = 0;
    aiStack_20[3] = 0;
    iStack_24 = 0;
    if (*(arg2 + 5) == '\x11') {
        piVar8 = *(obj.DATARMNET133502ca0e + (*arg2 * 0x61c88647 >> 0x1c) * 8);
        if (piVar8 != NULL) {
            iVar4 = arg3;
            do {
                if (*(piVar8 + 4) == *arg2) {
                    if (*(arg1 + 0x70) - (*(arg1 + 0x74) + iVar4) < 8) {
                        if (arg1 == 0) break;
                        iVar3 = skb_copy_bits(arg1,arg3 & 0xffffffff,aiStack_20,8);
                        piVar9 = aiStack_20;
                        if (iVar3 < 0) break;
                    }
                    else {
                        piVar9 = *(arg1 + 0xd8) + iVar4;
                        if (piVar9 == NULL) break;
                    }
                    if (*piVar9 == -0xbff) break;
                    if ((*(arg1 + 0x70) - (*(arg1 + 0x74) + iVar4)) + -8 < 4) {
                        if (arg1 == 0) break;
                        iVar4 = skb_copy_bits(arg1,iVar4 + 8,&iStack_24,4);
                        piVar7 = &iStack_24;
                        if (iVar4 < 0) break;
                    }
                    else {
                        piVar7 = *(arg1 + 0xd8) + iVar4 + 8;
                        if (piVar7 == NULL) break;
                    }
                    bVar2 = *piVar7 != 0;
                    goto code_r0x08003dec;
                }
                piVar8 = *piVar8;
            } while (piVar8 != NULL);
        }
        bVar2 = false;
    }
code_r0x08003dec:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return bVar2;
    }
    puVar5 = __stack_chk_fail();
    uVar6 = *puVar5;
    piVar8 = *(obj.DATARMNET665d2f133f + (uVar6 * 0x61c88647 >> 0x1c) * 8);
    if (piVar8 != NULL) {
        do {
            bVar2 = *(piVar8 + 4) == uVar6;
            if (*(piVar8 + 4) == uVar6) {
                return bVar2;
            }
            piVar8 = *piVar8;
        } while (piVar8 != NULL);
        return bVar2;
    }
    return false;
}


// ===== sym.DATARMNET0a4704e5e0 @ 0x08003e24 (size 88) =====

bool sym.DATARMNET0a4704e5e0(int64_t arg1)

{
    bool bVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    
    uVar2 = *arg1;
    piVar3 = *(obj.DATARMNET665d2f133f + (uVar2 * 0x61c88647 >> 0x1c) * 8);
    if (piVar3 == NULL) {
        return false;
    }
    do {
        bVar1 = *(piVar3 + 4) == uVar2;
        if (*(piVar3 + 4) == uVar2) {
            return bVar1;
        }
        piVar3 = *piVar3;
    } while (piVar3 != NULL);
    return bVar1;
}


// ===== sym.DATARMNET4c1c11d8a5 @ 0x08003e84 (size 232) =====

ulong sym.DATARMNET4c1c11d8a5(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *puVar3;
    ulong *puVar4;
    ulong uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET38726379d1);
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
    if (puVar4 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        uVar5 = *(arg1 + 0x18);
        uVar6 = *(arg1 + 0x20);
        puVar4[2] = *(arg1 + 0x10);
        puVar4[3] = uVar5;
        uVar5 = *arg1;
        uVar2 = *(arg1 + 8);
        puVar4[4] = uVar6;
        *puVar4 = uVar5;
        puVar4[1] = uVar2;
        uVar5 = _raw_spin_lock_irqsave(obj.DATARMNETe6ee7c273e);
        puVar3 = _obj.DATARMNETcde6e442f5;
        _obj.DATARMNETcde6e442f5 = puVar4;
        _raw_spin_unlock_irqrestore(obj.DATARMNETe6ee7c273e,uVar5);
        synchronize_rcu();
        uVar5 = 0;
        if (puVar3 != NULL) {
            kfree(puVar3);
            uVar5 = 0;
        }
    }
    mutex_unlock(obj.DATARMNET38726379d1);
    return uVar5;
}


// ===== sym.DATARMNET56fde5181e @ 0x08003f6c (size 124) =====

ulong sym.DATARMNET56fde5181e(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET38726379d1);
    uVar2 = _raw_spin_lock_irqsave(obj.DATARMNETe6ee7c273e);
    iVar1 = _segment.ehdr;
    _segment.ehdr = 0;
    _raw_spin_unlock_irqrestore(obj.DATARMNETe6ee7c273e,uVar2);
    synchronize_rcu();
    if (iVar1 != 0) {
        kfree(iVar1);
    }
    mutex_unlock(obj.DATARMNET38726379d1);
    return 0;
}


// ===== sym.DATARMNETe14c875532 @ 0x08003fe8 (size 488) =====

ulong sym.DATARMNETe14c875532(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    int16_t *piVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.DATARMNET63a2b7773e);
    iVar6 = __alloc_skb(_segment.ehdr * 0xc + 0x18,0xcc0,0,0xffffffff);
    if (iVar6 == 0) {
        uVar8 = 0xfffffff4;
    }
    else {
        iVar7 = genlmsg_put(iVar6,*(arg3 + 4),*arg3,arg2,0,0xe);
        if (iVar7 != 0) {
            iVar9 = *(iVar6 + 0xd0);
            uVar3 = *(iVar6 + 200);
            iVar5 = nla_put(iVar6,0x8001,0,0);
            if ((-1 < iVar5) && (piVar1 = iVar9 + uVar3, piVar1 != NULL)) {
                iVar9 = 0;
                do {
                    for (piVar10 = *(obj.DATARMNET1903907456 + iVar9 * 8); piVar10 != NULL; piVar10 = *piVar10) {
                        iVar11 = *(iVar6 + 0xd0);
                        uVar3 = *(iVar6 + 200);
                        iVar5 = nla_put(iVar6,0x8001,0,0);
                        if ((-1 < iVar5) && (piVar2 = iVar11 + uVar3, piVar2 != NULL)) {
                            iVar5 = nla_put(iVar6,1,8,piVar10 + 4);
                            if (iVar5 == 0) {
                                *piVar2 = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - piVar2;
                            }
                            else {
                                if (piVar2 < *(iVar6 + 0xd8)) {
    //WARNING: Does not return
                                    pcVar4 = SoftwareBreakpoint(0x800,0x800414c);
                                    (*pcVar4)();
                                }
                                skb_trim(iVar6,piVar2 - *(iVar6 + 0xd8));
                            }
                        }
                    }
                    iVar9 = iVar9 + 1;
                } while (iVar9 != 0x10);
                *piVar1 = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - piVar1;
                *(iVar7 + -0x14) = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - (iVar7 + -0x14);
                *arg1 = iVar6;
                mutex_unlock(obj.DATARMNET63a2b7773e);
                return 0;
            }
        }
        kfree(iVar6);
        uVar8 = 0xffffffea;
    }
    return uVar8;
}


// ===== sym.DATARMNET078f6bd384 @ 0x080041d0 (size 40) =====

ulong sym.DATARMNET078f6bd384(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETbb4efa5b3d.llvm.8155310952281713815();
    return 0;
}


// ===== sym.DATARMNETbb4efa5b3d.llvm.8155310952281713815 @ 0x080041f8 (size 536) =====

void sym.DATARMNETbb4efa5b3d.llvm.8155310952281713815(void)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.DATARMNET30500ba48c.llvm.8155310952281713815 != 0x0) &&
       (iVar3 = unregister_netdevice_notifier(reloc.DATARMNET0ed065ddb7.6ab8982d6a7a8b3332a60d957676828e.cfi_jt),
       iVar3 == 0)) {
        obj.DATARMNET30500ba48c.llvm.8155310952281713815 = 0x0;
    }
    mutex_lock(obj.DATARMNET954bef55d0);
    iVar7 = 0;
    do {
        piVar8 = *(obj.DATARMNET133502ca0e + iVar7 * 8);
        while (piVar8 != NULL) {
            piVar1 = *piVar8;
            piVar5 = piVar8[1];
            if (piVar5 != NULL) {
                *piVar5 = piVar1;
                if (piVar1 != NULL) {
                    piVar1[1] = piVar5;
                }
                piVar8[1] = 0;
            }
            kvfree_call_rcu(piVar8 + 2,0x10);
            piVar8 = piVar1;
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x10);
    mutex_unlock(obj.DATARMNET954bef55d0);
    sym.DATARMNET8c0e010dfb();
    mutex_lock(obj.DATARMNETf46fb02ac6);
    iVar7 = 0;
    do {
        piVar8 = *(obj.DATARMNET78ed39f13b + iVar7 * 8);
        while (piVar1 = piVar8, piVar1 != NULL) {
            piVar8 = *piVar1;
            iVar3 = unregister_netdevice_notifier(piVar1 + 4);
            if (iVar3 == 0) {
                piVar5 = piVar1[1];
                if (piVar5 != NULL) {
                    iVar6 = *piVar1;
                    *piVar5 = iVar6;
                    if (iVar6 != 0) {
                        *(iVar6 + 8) = piVar5;
                    }
                    piVar1[1] = 0;
                }
                sym.DATARMNETedae8262e1(piVar1 + 9);
                kvfree_call_rcu(piVar1 + 2,0x10);
            }
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x10);
    mutex_unlock(obj.DATARMNETf46fb02ac6);
    mutex_lock(obj.DATARMNET63a2b7773e);
    iVar7 = 0;
    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    do {
        piVar8 = *(obj.DATARMNET1903907456 + iVar7 * 8);
        while (piVar8 != NULL) {
            piVar1 = *piVar8;
            piVar5 = piVar8[1];
            if (piVar5 != NULL) {
                *piVar5 = piVar1;
                if (piVar1 != NULL) {
                    piVar1[1] = piVar5;
                }
                piVar8[1] = 0;
            }
            kvfree_call_rcu(piVar8 + 2,0x10);
            piVar8 = piVar1;
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 != 0x10);
    mutex_unlock(obj.DATARMNET63a2b7773e);
    mutex_lock(obj.DATARMNET38726379d1);
    uVar4 = _raw_spin_lock_irqsave(obj.DATARMNETe6ee7c273e);
    uVar2 = _segment.ehdr;
    _segment.ehdr = 0;
    _raw_spin_unlock_irqrestore(obj.DATARMNETe6ee7c273e,uVar4);
    synchronize_rcu();
    if (uVar2 != 0) {
        kfree(uVar2);
    }
    mutex_unlock(obj.DATARMNET38726379d1);
    return;
}


// ===== sym.DATARMNETfae36afa03 @ 0x08004410 (size 36) =====

void sym.DATARMNETfae36afa03(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETbb4efa5b3d.llvm.8155310952281713815();
    return;
}


// ===== sym.DATARMNET934406764d @ 0x08004434 (size 20) =====

code * sym.DATARMNET934406764d(void)

{
    return obj.DATARMNET30500ba48c.llvm.8155310952281713815;
}


// ===== sym.DATARMNETe447822105 @ 0x08004448 (size 20) =====

code * sym.DATARMNETe447822105(void)

{
    return obj.DATARMNET755f0f0df8.llvm.8155310952281713815;
}


// ===== sym.DATARMNET0ed065ddb7 @ 0x0800445c (size 492) =====

ulong sym.DATARMNET0ed065ddb7(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *arg2;
    if (pcVar2 == NULL) {
        return 0;
    }
    if (*pcVar2 != obj.DATARMNET30500ba48c.llvm.8155310952281713815) {
        return 0;
    }
    if (pcVar2[1] != 0x0) {
        if (pcVar2[1] != *0x800051d) {
            return 0;
        }
        if (pcVar2[2] != 0x0) {
            if (pcVar2[2] != *0x800051e) {
                return 0;
            }
            if (pcVar2[3] != 0x0) {
                if (pcVar2[3] != *0x800051f) {
                    return 0;
                }
                if (pcVar2[4] != 0x0) {
                    if (pcVar2[4] != obj.DATARMNET61e8f41aae) {
                        return 0;
                    }
                    if (pcVar2[5] != 0x0) {
                        if (pcVar2[5] != *0x8000521) {
                            return 0;
                        }
                        if (pcVar2[6] != 0x0) {
                            if (pcVar2[6] != *0x8000522) {
                                return 0;
                            }
                            if (pcVar2[7] != 0x0) {
                                if (pcVar2[7] != *0x8000523) {
                                    return 0;
                                }
                                if (pcVar2[8] != 0x0) {
                                    if (pcVar2[8] != *0x8000524) {
                                        return 0;
                                    }
                                    if (pcVar2[9] != 0x0) {
                                        if (pcVar2[9] != *0x8000525) {
                                            return 0;
                                        }
                                        if (pcVar2[10] != 0x0) {
                                            if (pcVar2[10] != *0x8000526) {
                                                return 0;
                                            }
                                            if (pcVar2[0xb] != 0x0) {
                                                if (pcVar2[0xb] != *0x8000527) {
                                                    return 0;
                                                }
                                                if (pcVar2[0xc] != 0x0) {
                                                    if (pcVar2[0xc] != str.RMNET_WLAN[0]) {
                                                        return 0;
                                                    }
                                                    if (pcVar2[0xd] != 0x0) {
                                                        if (pcVar2[0xd] != str.RMNET_WLAN[1]) {
                                                            return 0;
                                                        }
                                                        if (pcVar2[0xe] != 0x0) {
                                                            if (pcVar2[0xe] != str.RMNET_WLAN[2]) {
                                                                return 0;
                                                            }
                                                            if ((pcVar2[0xf] != 0x0) &&
                                                               (pcVar2[0xf] != str.RMNET_WLAN[3])) {
                                                                return 0;
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
                    }
                }
            }
        }
    }
    if (arg1 == 5) {
        iVar1 = netdev_rx_handler_register(pcVar2,sym.DATARMNET37a92021f9.6ab8982d6a7a8b3332a60d957676828e.cfi_jt,0);
        if (iVar1 != 0) {
            _printk(0x8000b23,"DATARMNET0ed065ddb7");
        }
    }
    else if (arg1 == 6) {
        netdev_rx_handler_unregister();
    }
    return 0;
}


// ===== sym.DATARMNET37a92021f9 @ 0x08004648 (size 980) =====

uint sym.DATARMNET37a92021f9(int64_t arg1)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    ulong uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint *puVar9;
    int64_t iVar10;
    code *pcVar11;
    int64_t extraout_x1;
    ulong *in_x2;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t uStack_78;
    uint8_t auStack_6c [4];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    arg1 = *arg1;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    if ((arg1 == 0) || ((*(arg1 + 0x80) & 7) == 5)) {
        uVar12 = 3;
        goto code_r0x080048c4;
    }
    __rcu_read_lock();
    sym.DATARMNET5ca94dbc3c(2);
    if (*(arg1 + 0xb0) == -0x227a) {
        uStack_78 = uStack_78 & 0xffffffffffff0000;
        in_x2 = &stack0xffffffffffffff94;
        iVar10 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
        auStack_6c[0] = *(iVar10 + 6);
        uVar5 = ipv6_skip_exthdr(arg1,0x28,in_x2,&stack0xffffffffffffff88);
        if (-1 < uVar5) {
            if (auStack_6c[0] == 0x3a) {
                uStack_60 = *(iVar10 + 0x18);
                uStack_58 = *(iVar10 + 0x20);
                uStack_50 = *(iVar10 + 8);
                uStack_48 = *(iVar10 + 0x10);
                uStack_40 = CONCAT31(uStack_40._1_3_,6);
                piVar7 = sym.DATARMNET07f0e0f286(&stack0xffffffffffffffa0);
                if (piVar7 != NULL) goto code_r0x080047f8;
            }
            uVar4 = uStack_68;
            for (piVar7 = *(obj.DATARMNET78ed39f13b + (*(iVar10 + 0x18) * 0x61c88647 >> 0x1c) * 8); piVar7 != NULL;
                piVar7 = *piVar7) {
                if ((*(piVar7 + 0xc) == '\x06') && (*(iVar10 + 0x18) == piVar7[10])) {
                    piVar7 = piVar7 + 9;
                    uStack_68._0_5_ = CONCAT14(6,uStack_68);
                    uStack_68._6_2_ = SUB82(uVar4,6);
                    uStack_68._0_6_ = CONCAT15(auStack_6c[0],uStack_68);
                    uVar2 = auStack_6c[0];
                    if (uStack_78 == 0) goto code_r0x080048f8;
                    in_x2 = &stack0xffffffffffffff98;
                    iVar6 = sym.DATARMNETaca8ca54ed(arg1,uVar5,in_x2,piVar7);
                    goto code_r0x080048a4;
                }
            }
        }
code_r0x080048bc:
        uVar12 = 3;
    }
    else {
        if (*(arg1 + 0xb0) != 8) goto code_r0x080048bc;
        puVar1 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
        if (puVar1[9] != 1) {
code_r0x08004704:
            uVar4 = uStack_68;
            piVar7 = *(obj.DATARMNET78ed39f13b + (*(puVar1 + 0x10) * 0x61c88647 >> 0x1c) * 8);
joined_r0x08004728:
            if (piVar7 == NULL) goto code_r0x080048bc;
            if ((*(piVar7 + 0xc) != '\x04') || (*(piVar7 + 10) != *(puVar1 + 0x10))) goto code_r0x08004730;
            piVar7 = piVar7 + 9;
            uStack_68._0_5_ = CONCAT14(4,uStack_68);
            uStack_68._6_2_ = SUB82(uVar4,6);
            uStack_68._0_6_ = CONCAT15(puVar1[9],uStack_68);
            uVar5 = (*puVar1 & 0xf) << 2;
            uVar2 = puVar1[9];
            if ((*(puVar1 + 6) & 0xff3f) != 0) {
                in_x2 = &stack0xffffffffffffff98;
                iVar6 = sym.DATARMNET579f75aa50(arg1,uVar5,in_x2);
code_r0x080048a4:
                uVar12 = 0;
                if (iVar6 != 0) {
                    uVar12 = 3;
                }
                goto code_r0x080048c0;
            }
code_r0x080048f8:
            if (uVar2 == 6) {
code_r0x08004910:
                in_x2 = uVar5;
                uVar3 = *(*(arg1 + 0xd8) + uVar5 + 2);
                uStack_68 = CONCAT62(uStack_68._2_6_,uVar3);
                uVar8 = sym.DATARMNETa8b2566e6a(arg1,&stack0xffffffffffffff98,in_x2);
                if ((uVar8 & 1) == 0) {
code_r0x08004998:
                    uVar8 = sym.DATARMNET4eafcdee07(&stack0xffffffffffffff98);
                    if ((uVar8 & 1) != 0) goto code_r0x080047f8;
                    if (*(arg1 + 0xa4) != 0x20002) goto code_r0x080048bc;
                    iVar10 = dev_get_by_name_rcu(init_net,"dummy0");
                    if (iVar10 == 0) {
                        uVar5 = 0x16;
                        goto code_r0x080048b8;
                    }
                    uVar12 = 3;
                    *(arg1 + 0x10) = iVar10;
                    *(arg1 + 0xa4) = 0;
                    goto code_r0x080048c0;
                }
                for (piVar7 = *(obj.DATARMNET665d2f133f + (uVar3 * 0x61c88647 >> 0x1c) * 8); piVar7 != NULL;
                    piVar7 = *piVar7) {
                    if (*(piVar7 + 4) == uVar3) {
                        kfree_skb(arg1);
                        uVar5 = 0x12;
                        goto code_r0x0800481c;
                    }
                }
                uVar5 = 10;
            }
            else {
                if (uVar2 != 0x32) {
                    if (uVar2 != 0x11) goto code_r0x080048bc;
                    goto code_r0x08004910;
                }
                in_x2 = 0x8;
                uStack_78 = 0;
                puVar9 = sym.skb_header_pointer(arg1,uVar5,8,&stack0xffffffffffffff88);
                if (puVar9 != NULL) {
                    uStack_68 = CONCAT44(uStack_68._4_4_,*puVar9);
                    goto code_r0x08004998;
                }
                uVar5 = 0x14;
            }
code_r0x080048b8:
            sym.DATARMNET5ca94dbc3c(uVar5);
            goto code_r0x080048bc;
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,*(puVar1 + 0x10));
        uStack_40 = CONCAT31(uStack_40._1_3_,4);
        uStack_50 = CONCAT44(uStack_50._4_4_,*(puVar1 + 0xc));
        piVar7 = sym.DATARMNET07f0e0f286(&stack0xffffffffffffffa0);
        if (piVar7 == NULL) goto code_r0x08004704;
code_r0x080047f8:
        iVar10 = *piVar7;
        if (iVar10 == 0) {
            uVar5 = 4;
            goto code_r0x080048b8;
        }
        sym.DATARMNET7ca470d54b(arg1,0x1200);
        *(arg1 + 0x10) = iVar10;
        dev_queue_xmit(arg1);
        uVar5 = 3;
code_r0x0800481c:
        sym.DATARMNET5ca94dbc3c(uVar5);
        uVar12 = 0;
    }
code_r0x080048c0:
    __rcu_read_unlock();
code_r0x080048c4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = 0x8004a00;
        pcVar11 = *in_x2;
        if (((pcVar11 != NULL) && (*pcVar11 == obj.DATARMNET755f0f0df8.llvm.8155310952281713815)) &&
           ((pcVar11[1] == 0x0 ||
            ((pcVar11[1] == *0x800052d &&
             ((pcVar11[2] == 0x0 ||
              ((pcVar11[2] == *0x800052e &&
               ((pcVar11[3] == 0x0 ||
                ((pcVar11[3] == *0x800052f &&
                 ((pcVar11[4] == 0x0 ||
                  ((pcVar11[4] == *0x8000530 &&
                   ((pcVar11[5] == 0x0 ||
                    ((pcVar11[5] == *0x8000531 &&
                     ((pcVar11[6] == 0x0 ||
                      ((pcVar11[6] == *0x8000532 &&
                       ((pcVar11[7] == 0x0 ||
                        ((pcVar11[7] == *0x8000533 &&
                         ((pcVar11[8] == 0x0 ||
                          ((pcVar11[8] == *0x8000534 &&
                           ((pcVar11[9] == 0x0 ||
                            ((pcVar11[9] == *0x8000535 &&
                             ((pcVar11[10] == 0x0 ||
                              ((pcVar11[10] == *0x8000536 &&
                               ((pcVar11[0xb] == 0x0 ||
                                ((pcVar11[0xb] == *0x8000537 &&
                                 ((pcVar11[0xc] == 0x0 ||
                                  ((pcVar11[0xc] == *0x8000538 &&
                                   ((pcVar11[0xd] == 0x0 ||
                                    ((pcVar11[0xd] == *0x8000539 &&
                                     ((pcVar11[0xe] == 0x0 ||
                                      ((pcVar11[0xe] == *0x800053a &&
                                       ((pcVar11[0xf] == 0x0 || (pcVar11[0xf] == *0x800053b)))))))))))))))))))))))))))))
                          ))))))))))))))))))))))))))))))) {
            if (extraout_x1 == 5) {
                iVar6 = netdev_rx_handler_register
                                  (pcVar11,sym.DATARMNET37a92021f9.6ab8982d6a7a8b3332a60d957676828e.cfi_jt,0);
                if (iVar6 != 0) {
                    _printk(0x8000b23,"DATARMNET6512527d9c");
                }
            }
            else if (extraout_x1 == 6) {
                netdev_rx_handler_unregister();
            }
        }
        return 0;
    }
    return uVar12;
code_r0x08004730:
    piVar7 = *piVar7;
    goto joined_r0x08004728;
}


// ===== sym.DATARMNET6512527d9c @ 0x08004a1c (size 492) =====

ulong sym.DATARMNET6512527d9c(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *arg2;
    if (pcVar2 == NULL) {
        return 0;
    }
    if (*pcVar2 != obj.DATARMNET755f0f0df8.llvm.8155310952281713815) {
        return 0;
    }
    if (pcVar2[1] != 0x0) {
        if (pcVar2[1] != *0x800052d) {
            return 0;
        }
        if (pcVar2[2] != 0x0) {
            if (pcVar2[2] != *0x800052e) {
                return 0;
            }
            if (pcVar2[3] != 0x0) {
                if (pcVar2[3] != *0x800052f) {
                    return 0;
                }
                if (pcVar2[4] != 0x0) {
                    if (pcVar2[4] != *0x8000530) {
                        return 0;
                    }
                    if (pcVar2[5] != 0x0) {
                        if (pcVar2[5] != *0x8000531) {
                            return 0;
                        }
                        if (pcVar2[6] != 0x0) {
                            if (pcVar2[6] != *0x8000532) {
                                return 0;
                            }
                            if (pcVar2[7] != 0x0) {
                                if (pcVar2[7] != *0x8000533) {
                                    return 0;
                                }
                                if (pcVar2[8] != 0x0) {
                                    if (pcVar2[8] != *0x8000534) {
                                        return 0;
                                    }
                                    if (pcVar2[9] != 0x0) {
                                        if (pcVar2[9] != *0x8000535) {
                                            return 0;
                                        }
                                        if (pcVar2[10] != 0x0) {
                                            if (pcVar2[10] != *0x8000536) {
                                                return 0;
                                            }
                                            if (pcVar2[0xb] != 0x0) {
                                                if (pcVar2[0xb] != *0x8000537) {
                                                    return 0;
                                                }
                                                if (pcVar2[0xc] != 0x0) {
                                                    if (pcVar2[0xc] != *0x8000538) {
                                                        return 0;
                                                    }
                                                    if (pcVar2[0xd] != 0x0) {
                                                        if (pcVar2[0xd] != *0x8000539) {
                                                            return 0;
                                                        }
                                                        if (pcVar2[0xe] != 0x0) {
                                                            if (pcVar2[0xe] != *0x800053a) {
                                                                return 0;
                                                            }
                                                            if ((pcVar2[0xf] != 0x0) && (pcVar2[0xf] != *0x800053b)) {
                                                                return 0;
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
                    }
                }
            }
        }
    }
    if (arg1 == 5) {
        iVar1 = netdev_rx_handler_register(pcVar2,sym.DATARMNET37a92021f9.6ab8982d6a7a8b3332a60d957676828e.cfi_jt,0);
        if (iVar1 != 0) {
            _printk(0x8000b23,"DATARMNET6512527d9c");
        }
    }
    else if (arg1 == 6) {
        netdev_rx_handler_unregister();
    }
    return 0;
}


// ===== sym.DATARMNETe98553a8fc @ 0x08004c08 (size 596) =====

ulong sym.DATARMNETe98553a8fc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar6 = *arg3;
    if (((pcVar6 != NULL) && (*pcVar6 == *(arg1 + 0x18))) &&
       ((pcVar6[1] == '\0' ||
        ((pcVar6[1] == *(arg1 + 0x19) &&
         ((pcVar6[2] == '\0' ||
          ((pcVar6[2] == *(arg1 + 0x1a) &&
           ((pcVar6[3] == '\0' ||
            ((pcVar6[3] == *(arg1 + 0x1b) &&
             ((pcVar6[4] == '\0' ||
              ((pcVar6[4] == *(arg1 + 0x1c) &&
               ((pcVar6[5] == '\0' ||
                ((pcVar6[5] == *(arg1 + 0x1d) &&
                 ((pcVar6[6] == '\0' ||
                  ((pcVar6[6] == *(arg1 + 0x1e) &&
                   ((pcVar6[7] == '\0' ||
                    ((pcVar6[7] == *(arg1 + 0x1f) &&
                     ((pcVar6[8] == '\0' ||
                      ((pcVar6[8] == *(arg1 + 0x20) &&
                       ((pcVar6[9] == '\0' ||
                        ((pcVar6[9] == *(arg1 + 0x21) &&
                         ((pcVar6[10] == '\0' ||
                          ((pcVar6[10] == *(arg1 + 0x22) &&
                           ((pcVar6[0xb] == '\0' ||
                            ((pcVar6[0xb] == *(arg1 + 0x23) &&
                             ((pcVar6[0xc] == '\0' ||
                              ((pcVar6[0xc] == *(arg1 + 0x24) &&
                               ((pcVar6[0xd] == '\0' ||
                                ((pcVar6[0xd] == *(arg1 + 0x25) &&
                                 ((pcVar6[0xe] == '\0' ||
                                  ((pcVar6[0xe] == *(arg1 + 0x26) &&
                                   ((pcVar6[0xf] == '\0' || (pcVar6[0xf] == *(arg1 + 0x27)))))))))))))))))))))))))))))))
                     )))))))))))))))))))))))))))))) {
        if (arg2 == 5) {
            if (*(arg1 + 0x28) == 0) {
                iVar7 = sp_el0;
                piVar1 = iVar7 + 0x10;
                *(iVar7 + 0x10) = *piVar1 + 1;
                iVar8 = tpidr_el1;
                piVar2 = iVar8 + *(pcVar6 + 0x4d0);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                        *piVar2 = *piVar2 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                iVar8 = *piVar1;
                *(iVar7 + 0x10) = iVar8 + -1;
                if ((iVar8 + -1 == 0) || (*piVar1 == 0)) {
                    preempt_schedule_notrace();
                }
                *(arg1 + 0x28) = pcVar6;
            }
        }
        else if ((arg2 == 6) && (iVar7 = *(arg1 + 0x28), iVar7 != 0)) {
            iVar8 = sp_el0;
            piVar1 = iVar8 + 0x10;
            *(iVar8 + 0x10) = *piVar1 + 1;
            iVar5 = tpidr_el1;
            piVar2 = iVar5 + *(iVar7 + 0x4d0);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                    *piVar2 = *piVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar7 = *piVar1;
            *(iVar8 + 0x10) = iVar7 + -1;
            if ((iVar7 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
            *(arg1 + 0x28) = 0;
        }
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08004e9c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004ee0

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
    //switch table (4 cases) at 0x8000b81
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004ef4);
    (*pcVar1)();
}


// ===== sym.DATARMNET72501635c8 @ 0x08004ef4 (size 660) =====

uint64_t sym.DATARMNET72501635c8(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t arg3;
    int64_t arg2_00;
    uint32_t uVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    char *pcVar11;
    ulong *unaff_x21;
    code *unaff_x22;
    code *pcVar12;
    ulong *unaff_x24;
    ulong *puVar13;
    uint16_t *unaff_x25;
    uint64_t unaff_x26;
    ulong unaff_x30;
    ulong uStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint16_t *puStack_b8;
    ulong *puStack_b0;
    uint64_t uStack_a8;
    code *pcStack_a0;
    ulong *puStack_98;
    code *pcStack_90;
    code *pcStack_88;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    iStack_70 = 0;
    puVar9 = *(*(arg2 + 0x20) + 8);
    if (puVar9 == NULL) {
        arg2 = *(arg2 + 0x40);
        pcVar5 = obj.DATARMNET72501635c8.__msg;
        do_trace_netlink_extack(obj.DATARMNET72501635c8.__msg);
        uVar10 = 0xffffffea;
joined_r0x08004f9c:
        if (arg2 != NULL) {
            *arg2 = pcVar5;
        }
    }
    else {
        if (*puVar9 < 8) {
            uVar3 = 0;
        }
        else {
            uVar3 = 0;
            uVar7 = *puVar9 - 4;
            puVar9 = puVar9 + 2;
            do {
                uVar2 = *puVar9;
                if (uVar2 < 4 || uVar7 < uVar2) break;
                uVar3 = uVar3 + 1;
                uVar10 = uVar2 + 3 & 0x1fffc;
                uVar7 = uVar7 - uVar10;
                puVar9 = puVar9 + uVar10;
            } while (3 < uVar7);
        }
        pcVar5 = __kmalloc(uVar3 << 3,0xdc0);
        if (pcVar5 == NULL) {
            arg2 = *(arg2 + 0x40);
            pcVar5 = obj.DATARMNET72501635c8.__msg.7;
            do_trace_netlink_extack(obj.DATARMNET72501635c8.__msg.7);
            uVar10 = 0xfffffff4;
            goto joined_r0x08004f9c;
        }
        puVar9 = *(*(arg2 + 0x20) + 8);
        uVar2 = *puVar9;
        if (uVar2 < 8) {
            unaff_x21 = NULL;
        }
        else {
            unaff_x21 = NULL;
            unaff_x26 = uVar2 - 4;
            unaff_x25 = puVar9 + 2;
            unaff_x22 = obj.DATARMNET19c5fce390;
            pcVar12 = obj.DATARMNET19c5fce390;
            while( true ) {
                uVar2 = *unaff_x25;
                if (uVar2 < 4 || unaff_x26 < uVar2) break;
                unaff_x24 = *(arg2 + 0x40);
                if (-1 < unaff_x25[1]) {
                    do_trace_netlink_extack("NLA_F_NESTED is missing");
                    uVar10 = 0xffffffea;
                    arg2 = "NLA_F_NESTED is missing";
                    if (unaff_x24 != NULL) {
                        *unaff_x24 = "NLA_F_NESTED is missing";
                        unaff_x24[1] = unaff_x25;
                        unaff_x24[2] = 0;
                    }
                    goto code_r0x080050cc;
                }
                uVar3 = __nla_parse(&uStack_78,1,unaff_x25 + 2,uVar2 - 4,obj.DATARMNET19c5fce390,0x1f,unaff_x24);
                if (uVar3 != 0) goto code_r0x080050c8;
                if (iStack_70 == 0) {
                    unaff_x21 = *(arg2 + 0x40);
                    pcVar11 = obj.DATARMNET72501635c8.__msg.8;
code_r0x08005164:
                    do_trace_netlink_extack(pcVar11);
                    arg2 = pcVar11;
                    pcVar12 = unaff_x22;
                    if (unaff_x21 == NULL) {
                        uVar10 = 0;
                    }
                    else {
                        uVar10 = 0;
                        *unaff_x21 = pcVar11;
                    }
                    goto code_r0x080050cc;
                }
                if ((*(iStack_70 + 8) | 2) != 6) {
                    unaff_x21 = *(arg2 + 0x40);
                    pcVar11 = "Invalid IP protocol";
                    goto code_r0x08005164;
                }
                if ((0x32 < *(iStack_70 + 9)) || ((1L << (*(iStack_70 + 9) & 0x3f) & 0x4000000020040U) == 0)) {
                    unaff_x21 = *(arg2 + 0x40);
                    pcVar11 = "Invalid transport protocol";
                    goto code_r0x08005164;
                }
                *(pcVar5 + unaff_x21 * 8) = *(iStack_70 + 4);
                unaff_x21 = unaff_x21 + 1;
                uVar10 = *unaff_x25 + 3 & 0x1fffc;
                uVar3 = unaff_x26 - uVar10;
                unaff_x26 = uVar3;
                unaff_x25 = unaff_x25 + uVar10;
                if (uVar3 < 4) break;
            }
        }
        uVar3 = sym.DATARMNET53f12a0f7d(pcVar5,unaff_x21,arg2);
code_r0x080050c8:
        uVar10 = uVar3;
        pcVar12 = unaff_x22;
code_r0x080050cc:
        kfree(pcVar5);
        unaff_x22 = pcVar12;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.DATARMNET41dd9b14ab;
    pcStack_c8 = sym.DATARMNET41dd9b14ab;
    iVar6 = sp_el0;
    iStack_d8 = *(iVar6 + 0x5e0);
    uStack_e8 = 0;
    iStack_e0 = 0;
    puVar9 = *(*(arg3 + 0x20) + 8);
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x26;
    puStack_b8 = unaff_x25;
    puStack_b0 = unaff_x24;
    uStack_a8 = uVar10;
    pcStack_a0 = unaff_x22;
    puStack_98 = unaff_x21;
    pcStack_90 = arg2;
    pcStack_88 = pcVar5;
    if (puVar9 == NULL) {
        puVar13 = *(arg3 + 0x40);
        pcVar11 = "Must supply tuple info";
        do_trace_netlink_extack("Must supply tuple info");
        uVar10 = 0xffffffea;
    }
    else {
        if (*puVar9 < 8) {
            uVar3 = 0;
        }
        else {
            uVar3 = 0;
            uVar7 = *puVar9 - 4;
            puVar9 = puVar9 + 2;
            do {
                uVar2 = *puVar9;
                if (uVar2 < 4 || uVar7 < uVar2) break;
                uVar3 = uVar3 + 1;
                uVar10 = uVar2 + 3 & 0x1fffc;
                uVar7 = uVar7 - uVar10;
                puVar9 = puVar9 + uVar10;
            } while (3 < uVar7);
        }
        iVar6 = __kmalloc(uVar3 << 3,0xdc0);
        if (iVar6 != 0) {
            puVar9 = *(*(arg3 + 0x20) + 8);
            uVar2 = *puVar9;
            if (uVar2 < 8) {
                uVar3 = 0;
            }
            else {
                uVar3 = 0;
                uVar7 = uVar2 - 4;
                puVar9 = puVar9 + 2;
                while (uVar2 = *puVar9, 3 < uVar2 && uVar2 <= uVar7) {
                    puVar13 = *(arg3 + 0x40);
                    if (-1 < puVar9[1]) {
                        do_trace_netlink_extack("NLA_F_NESTED is missing");
                        uVar10 = 0xffffffea;
                        if (puVar13 != NULL) {
                            *puVar13 = "NLA_F_NESTED is missing";
                            puVar13[1] = puVar9;
                            puVar13[2] = 0;
                        }
                        goto code_r0x08005324;
                    }
                    uVar4 = __nla_parse(&uStack_e8,1,puVar9 + 2,uVar2 - 4,obj.DATARMNET19c5fce390,0x1f,puVar13);
                    if (uVar4 != 0) goto code_r0x08005320;
                    if (iStack_e0 == 0) {
                        puVar13 = *(arg3 + 0x40);
                        do_trace_netlink_extack("Must specify tuple entry");
                        uVar10 = 0xffffffea;
                        if (puVar13 != NULL) {
                            *puVar13 = "Must specify tuple entry";
                        }
                        goto code_r0x08005324;
                    }
                    *(iVar6 + uVar3 * 8) = *(iStack_e0 + 4);
                    uVar3 = uVar3 + 1;
                    uVar10 = *puVar9 + 3 & 0x1fffc;
                    uVar7 = uVar7 - uVar10;
                    puVar9 = puVar9 + uVar10;
                    if (uVar7 < 4) break;
                }
            }
            uVar4 = sym.DATARMNET07f6485c9b(iVar6,uVar3,arg3);
code_r0x08005320:
            uVar10 = uVar4;
code_r0x08005324:
            kfree(iVar6);
            goto code_r0x0800532c;
        }
        puVar13 = *(arg3 + 0x40);
        pcVar11 = "Kernel OOM";
        do_trace_netlink_extack("Kernel OOM");
        uVar10 = 0xfffffff4;
    }
    if (puVar13 != NULL) {
        *puVar13 = pcVar11;
    }
code_r0x0800532c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_d8) {
        return uVar10;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.DATARMNETf1fa473089;
    iVar6 = *(*(arg2_00 + 0x20) + 0x10);
    if ((iVar6 == 0) || (iVar8 = *(*(arg2_00 + 0x20) + 0x30), iVar8 == 0)) {
        puVar13 = *(arg2_00 + 0x40);
        pcVar5 = "Must specify device and network info";
    }
    else {
        uVar1 = *(iVar8 + 4);
        if (uVar1 < 3) {
            iVar6 = iVar6 + 4;
            if (uVar1 != 1) {
                uVar10 = sym.DATARMNET97b2388e63(iVar6,arg2_00);
                return uVar10;
            }
            uVar10 = sym.DATARMNET92e5468fc5(iVar6,arg2_00);
            return uVar10;
        }
        puVar13 = *(arg2_00 + 0x40);
        pcVar5 = obj.DATARMNETf1fa473089.__msg.14;
    }
    do_trace_netlink_extack(pcVar5);
    if (puVar13 != NULL) {
        *puVar13 = pcVar5;
    }
    return 0xffffffea;
}


// ===== sym.DATARMNET41dd9b14ab @ 0x08005188 (size 556) =====

uint64_t sym.DATARMNET41dd9b14ab(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t arg2_00;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar11;
    ulong *puVar12;
    ulong unaff_x30;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    iStack_60 = 0;
    puVar9 = *(*(arg2 + 0x20) + 8);
    if (puVar9 == NULL) {
        puVar12 = *(arg2 + 0x40);
        pcVar1 = "Must supply tuple info";
        do_trace_netlink_extack("Must supply tuple info");
        uVar10 = 0xffffffea;
    }
    else {
        if (*puVar9 < 8) {
            uVar6 = 0;
        }
        else {
            uVar6 = 0;
            uVar7 = *puVar9 - 4;
            puVar9 = puVar9 + 2;
            do {
                uVar3 = *puVar9;
                if (uVar3 < 4 || uVar7 < uVar3) break;
                uVar6 = uVar6 + 1;
                uVar10 = uVar3 + 3 & 0x1fffc;
                uVar7 = uVar7 - uVar10;
                puVar9 = puVar9 + uVar10;
            } while (3 < uVar7);
        }
        iVar5 = __kmalloc(uVar6 << 3,0xdc0);
        if (iVar5 != 0) {
            puVar9 = *(*(arg2 + 0x20) + 8);
            uVar3 = *puVar9;
            if (uVar3 < 8) {
                uVar6 = 0;
            }
            else {
                uVar6 = 0;
                uVar7 = uVar3 - 4;
                puVar9 = puVar9 + 2;
                while (uVar3 = *puVar9, 3 < uVar3 && uVar3 <= uVar7) {
                    puVar12 = *(arg2 + 0x40);
                    if (-1 < puVar9[1]) {
                        do_trace_netlink_extack("NLA_F_NESTED is missing");
                        uVar10 = 0xffffffea;
                        if (puVar12 != NULL) {
                            *puVar12 = "NLA_F_NESTED is missing";
                            puVar12[1] = puVar9;
                            puVar12[2] = 0;
                        }
                        goto code_r0x08005324;
                    }
                    uVar4 = __nla_parse(&uStack_68,1,puVar9 + 2,uVar3 - 4,obj.DATARMNET19c5fce390,0x1f,puVar12);
                    if (uVar4 != 0) goto code_r0x08005320;
                    if (iStack_60 == 0) {
                        puVar12 = *(arg2 + 0x40);
                        do_trace_netlink_extack("Must specify tuple entry");
                        uVar10 = 0xffffffea;
                        if (puVar12 != NULL) {
                            *puVar12 = "Must specify tuple entry";
                        }
                        goto code_r0x08005324;
                    }
                    *(iVar5 + uVar6 * 8) = *(iStack_60 + 4);
                    uVar6 = uVar6 + 1;
                    uVar10 = *puVar9 + 3 & 0x1fffc;
                    uVar7 = uVar7 - uVar10;
                    puVar9 = puVar9 + uVar10;
                    if (uVar7 < 4) break;
                }
            }
            uVar4 = sym.DATARMNET07f6485c9b(iVar5,uVar6,arg2);
code_r0x08005320:
            uVar10 = uVar4;
code_r0x08005324:
            kfree(iVar5);
            goto code_r0x0800532c;
        }
        puVar12 = *(arg2 + 0x40);
        pcVar1 = "Kernel OOM";
        do_trace_netlink_extack("Kernel OOM");
        uVar10 = 0xfffffff4;
    }
    if (puVar12 != NULL) {
        *puVar12 = pcVar1;
    }
code_r0x0800532c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.DATARMNETf1fa473089;
    iVar5 = *(*(arg2_00 + 0x20) + 0x10);
    if ((iVar5 == 0) || (iVar8 = *(*(arg2_00 + 0x20) + 0x30), iVar8 == 0)) {
        puVar12 = *(arg2_00 + 0x40);
        pcVar11 = "Must specify device and network info";
    }
    else {
        uVar2 = *(iVar8 + 4);
        if (uVar2 < 3) {
            iVar5 = iVar5 + 4;
            if (uVar2 != 1) {
                uVar10 = sym.DATARMNET97b2388e63(iVar5,arg2_00);
                return uVar10;
            }
            uVar10 = sym.DATARMNET92e5468fc5(iVar5,arg2_00);
            return uVar10;
        }
        puVar12 = *(arg2_00 + 0x40);
        pcVar11 = obj.DATARMNETf1fa473089.__msg.14;
    }
    do_trace_netlink_extack(pcVar11);
    if (puVar12 != NULL) {
        *puVar12 = pcVar11;
    }
    return 0xffffffea;
}


// ===== sym.DATARMNETf1fa473089 @ 0x080053b4 (size 156) =====

ulong sym.DATARMNETf1fa473089(ulong noname_0,int64_t arg1)

{
    uint8_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x20) + 0x10);
    if ((iVar3 == 0) || (iVar4 = *(*(arg1 + 0x20) + 0x30), iVar4 == 0)) {
        puVar6 = *(arg1 + 0x40);
        pcVar5 = "Must specify device and network info";
    }
    else {
        uVar1 = *(iVar4 + 4);
        if (uVar1 < 3) {
            iVar3 = iVar3 + 4;
            if (uVar1 != 1) {
                uVar2 = sym.DATARMNET97b2388e63(iVar3,arg1);
                return uVar2;
            }
            uVar2 = sym.DATARMNET92e5468fc5(iVar3,arg1);
            return uVar2;
        }
        puVar6 = *(arg1 + 0x40);
        pcVar5 = obj.DATARMNETf1fa473089.__msg.14;
    }
    do_trace_netlink_extack(pcVar5);
    if (puVar6 != NULL) {
        *puVar6 = pcVar5;
    }
    return 0xffffffea;
}


// ===== sym.DATARMNETcd9478470c @ 0x08005450 (size 208) =====

int sym.DATARMNETcd9478470c(ulong noname_0,int64_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    char *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x20) + 0x10);
    if ((iVar3 == 0) || (iVar4 = *(*(arg1 + 0x20) + 0x30), iVar4 == 0)) {
        puVar6 = *(arg1 + 0x40);
        pcVar5 = obj.DATARMNETcd9478470c.__msg;
    }
    else {
        uVar1 = *(iVar4 + 4);
        if (uVar1 < 3) {
            iVar3 = iVar3 + 4;
            if (uVar1 == 1) {
                iVar2 = sym.DATARMNET9d7bb9a63d(iVar3);
            }
            else {
                iVar2 = sym.DATARMNETa903cd5994(iVar3);
            }
            if (iVar2 == 0) {
                return 0;
            }
            puVar6 = *(arg1 + 0x40);
            pcVar5 = "Kernel error, unregistering notifier failed";
            do_trace_netlink_extack("Kernel error, unregistering notifier failed");
            goto joined_r0x080054b4;
        }
        puVar6 = *(arg1 + 0x40);
        pcVar5 = "Network type not supported!";
    }
    do_trace_netlink_extack(pcVar5);
    iVar2 = -0x16;
joined_r0x080054b4:
    if (puVar6 != NULL) {
        *puVar6 = pcVar5;
    }
    return iVar2;
}


// ===== sym.DATARMNETb86993aefb @ 0x08005520 (size 500) =====

uint64_t sym.DATARMNETb86993aefb(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t arg2;
    int64_t arg2_00;
    uchar uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int *extraout_x9;
    int *extraout_x9_00;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar11;
    char *pcVar12;
    ulong *puVar13;
    uint16_t *puVar14;
    uint16_t *puVar15;
    ulong unaff_x30;
    int64_t iStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    uint16_t *puStack_80;
    code *pcStack_70;
    uint64_t uStack_68;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 0x20);
    uStack_48 = 0;
    iStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    if (((*(iVar9 + 0x18) == 0) || (*(iVar9 + 0x20) == 0)) || (*(iVar9 + 0x30) == 0)) {
        puVar14 = *(arg1 + 0x40);
        pcVar11 = "Must specify FWD device, address, and network";
code_r0x080055cc:
        do_trace_netlink_extack(pcVar11);
        if (puVar14 == NULL) {
            uVar7 = 0xffffffea;
        }
        else {
            uVar7 = 0xffffffea;
            *puVar14 = pcVar11;
        }
    }
    else {
        iStack_40 = *(*(iVar9 + 0x30) + 4) << 8;
        puVar14 = *(iVar9 + 0x18);
        pcVar11 = puVar14 + 2;
        iVar9 = strchr(pcVar11,0x3a);
        if (iVar9 == 0) {
            iVar6 = in4_pton(pcVar11,*puVar14 - 4,&stack0xffffffffffffffb0,0xffffffff,0);
            if (iVar6 == 1) {
                uVar8 = 4;
                goto code_r0x08005638;
            }
            puVar14 = *(arg1 + 0x40);
            pcVar11 = obj.DATARMNETb86993aefb.__msg.18;
            goto code_r0x080055cc;
        }
        iVar6 = in6_pton(pcVar11,*puVar14 - 4,&stack0xffffffffffffffb0,0xffffffff,0);
        if (iVar6 != 1) {
            puVar14 = *(arg1 + 0x40);
            pcVar11 = obj.DATARMNETb86993aefb.__msg.17;
            goto code_r0x080055cc;
        }
        uVar8 = 6;
code_r0x08005638:
        iStack_40 = CONCAT71(iStack_40._1_7_,uVar8);
        iStack_58 = dev_get_by_name(*(arg1 + 0x28),*(*(arg1 + 0x20) + 0x20) + 4);
        if (iStack_58 == 0) {
            puVar14 = *(arg1 + 0x40);
            pcVar11 = obj.DATARMNETb86993aefb.__msg.19;
            goto code_r0x080055cc;
        }
        uVar7 = sym.DATARMNET947eb110d2(&stack0xffffffffffffffa8,arg1);
        uVar7 = uVar7 & 0xffffffff;
        if (iStack_58 != 0) {
            iVar9 = sp_el0;
            piVar1 = iVar9 + 0x10;
            *(iVar9 + 0x10) = *piVar1 + 1;
            iVar10 = tpidr_el1;
            piVar2 = iVar10 + *(iStack_58 + 0x4d0);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                    *piVar2 = *piVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            iVar10 = *piVar1;
            *(iVar9 + 0x10) = iVar10 + -1;
            if ((iVar10 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x9 = *extraout_x9 + uVar5;
    *extraout_x18 = 0x80056f4;
    uStack_88 = 0x80056f4;
    iVar9 = sp_el0;
    iStack_98 = *(iVar9 + 0x5e0);
    iVar9 = *(arg2 + 0x20);
    uStack_a8 = 0;
    iStack_a0 = 0;
    iStack_b8 = 0;
    uStack_b0 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    puStack_80 = puVar14;
    pcStack_70 = pcVar11;
    uStack_68 = uVar7;
    if (((*(iVar9 + 0x18) == 0) || (*(iVar9 + 0x20) == 0)) || (*(iVar9 + 0x30) == 0)) {
        puVar13 = *(arg2 + 0x40);
        pcVar12 = obj.DATARMNETc175a08219.__msg;
    }
    else {
        iStack_a0 = *(*(iVar9 + 0x30) + 4) << 8;
        puVar15 = *(iVar9 + 0x18);
        puVar14 = puVar15 + 2;
        iVar9 = strchr(puVar14,0x3a);
        iVar6 = *puVar15 - 4;
        if (iVar9 == 0) {
            iVar6 = in4_pton(puVar14,iVar6,&stack0xffffffffffffff50,0xffffffff,0);
            if (iVar6 == 1) {
                uVar8 = 4;
                goto code_r0x0800582c;
            }
            puVar13 = *(arg2 + 0x40);
            pcVar12 = "FWD address is invalid in IPv4";
        }
        else {
            iVar6 = in6_pton(puVar14,iVar6,&stack0xffffffffffffff50,0xffffffff,0);
            if (iVar6 == 1) {
                uVar8 = 6;
code_r0x0800582c:
                iStack_a0 = CONCAT71(iStack_a0._1_7_,uVar8);
                iStack_b8 = dev_get_by_name(*(arg2 + 0x28),*(*(arg2 + 0x20) + 0x20) + 4);
                if (iStack_b8 != 0) {
                    uVar7 = sym.DATARMNETb8b35fdc18(&stack0xffffffffffffff48,arg2);
                    uVar7 = uVar7 & 0xffffffff;
                    if (iStack_b8 != 0) {
                        iVar9 = sp_el0;
                        piVar1 = iVar9 + 0x10;
                        *(iVar9 + 0x10) = *piVar1 + 1;
                        iVar10 = tpidr_el1;
                        piVar2 = iVar10 + *(iStack_b8 + 0x4d0);
                        do {
                            cVar3 = '\x01';
                            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar4) {
                                *piVar2 = *piVar2 + -1;
                                cVar3 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar3 != '\0');
                        iVar10 = *piVar1;
                        *(iVar9 + 0x10) = iVar10 + -1;
                        if ((iVar10 + -1 == 0) || (*piVar1 == 0)) {
                            preempt_schedule_notrace();
                        }
                    }
                    goto code_r0x080057dc;
                }
                puVar13 = *(arg2 + 0x40);
                pcVar12 = "Invalid FWD device name";
            }
            else {
                puVar13 = *(arg2 + 0x40);
                pcVar12 = "FWD address is invalid in IPv6";
            }
        }
    }
    do_trace_netlink_extack(pcVar12);
    if (puVar13 == NULL) {
        uVar7 = 0xffffffea;
    }
    else {
        uVar7 = 0xffffffea;
        *puVar13 = pcVar12;
    }
code_r0x080057dc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_98) {
        return uVar7;
    }
    __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x9_00 = *extraout_x9_00 + uVar5;
    *extraout_x18_00 = 0x80058e8;
    iVar9 = *(*(arg2_00 + 0x20) + 0x28);
    if (iVar9 == 0) {
        puVar13 = *(arg2_00 + 0x40);
        do_trace_netlink_extack(obj.DATARMNETc5f6c112ec.__msg);
        uVar7 = 0xffffffea;
        if (puVar13 != NULL) {
            *puVar13 = obj.DATARMNETc5f6c112ec.__msg;
        }
    }
    else {
        uVar7 = sym.DATARMNET8d5a5a7047(*(iVar9 + 4),arg2_00);
    }
    return uVar7;
}


// ===== sym.DATARMNETc175a08219 @ 0x08005714 (size 500) =====

uint64_t sym.DATARMNETc175a08219(ulong noname_0,int64_t arg1)

{
    uint16_t *puVar1;
    int64_t *piVar2;
    int *piVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t arg2;
    uchar uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int *extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar12;
    ulong *puVar13;
    uint16_t *puVar14;
    ulong unaff_x30;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(arg1 + 0x20);
    uStack_48 = 0;
    iStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    if (((*(iVar10 + 0x18) == 0) || (*(iVar10 + 0x20) == 0)) || (*(iVar10 + 0x30) == 0)) {
        puVar13 = *(arg1 + 0x40);
        pcVar12 = obj.DATARMNETc175a08219.__msg;
    }
    else {
        iStack_40 = *(*(iVar10 + 0x30) + 4) << 8;
        puVar14 = *(iVar10 + 0x18);
        puVar1 = puVar14 + 2;
        iVar10 = strchr(puVar1,0x3a);
        iVar7 = *puVar14 - 4;
        if (iVar10 == 0) {
            iVar7 = in4_pton(puVar1,iVar7,&stack0xffffffffffffffb0,0xffffffff,0);
            if (iVar7 == 1) {
                uVar9 = 4;
                goto code_r0x0800582c;
            }
            puVar13 = *(arg1 + 0x40);
            pcVar12 = "FWD address is invalid in IPv4";
        }
        else {
            iVar7 = in6_pton(puVar1,iVar7,&stack0xffffffffffffffb0,0xffffffff,0);
            if (iVar7 == 1) {
                uVar9 = 6;
code_r0x0800582c:
                iStack_40 = CONCAT71(iStack_40._1_7_,uVar9);
                iStack_58 = dev_get_by_name(*(arg1 + 0x28),*(*(arg1 + 0x20) + 0x20) + 4);
                if (iStack_58 != 0) {
                    uVar8 = sym.DATARMNETb8b35fdc18(&stack0xffffffffffffffa8,arg1);
                    uVar8 = uVar8 & 0xffffffff;
                    if (iStack_58 != 0) {
                        iVar10 = sp_el0;
                        piVar2 = iVar10 + 0x10;
                        *(iVar10 + 0x10) = *piVar2 + 1;
                        iVar11 = tpidr_el1;
                        piVar3 = iVar11 + *(iStack_58 + 0x4d0);
                        do {
                            cVar4 = '\x01';
                            bVar5 = ExclusiveMonitorPass(piVar3,0x10);
                            if (bVar5) {
                                *piVar3 = *piVar3 + -1;
                                cVar4 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar4 != '\0');
                        iVar11 = *piVar2;
                        *(iVar10 + 0x10) = iVar11 + -1;
                        if ((iVar11 + -1 == 0) || (*piVar2 == 0)) {
                            preempt_schedule_notrace();
                        }
                    }
                    goto code_r0x080057dc;
                }
                puVar13 = *(arg1 + 0x40);
                pcVar12 = "Invalid FWD device name";
            }
            else {
                puVar13 = *(arg1 + 0x40);
                pcVar12 = "FWD address is invalid in IPv6";
            }
        }
    }
    do_trace_netlink_extack(pcVar12);
    if (puVar13 == NULL) {
        uVar8 = 0xffffffea;
    }
    else {
        uVar8 = 0xffffffea;
        *puVar13 = pcVar12;
    }
code_r0x080057dc:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    __stack_chk_fail();
    uVar6 = tpidr_el2;
    *extraout_x9 = *extraout_x9 + uVar6;
    *extraout_x18 = 0x80058e8;
    iVar10 = *(*(arg2 + 0x20) + 0x28);
    if (iVar10 == 0) {
        puVar13 = *(arg2 + 0x40);
        do_trace_netlink_extack(obj.DATARMNETc5f6c112ec.__msg);
        uVar8 = 0xffffffea;
        if (puVar13 != NULL) {
            *puVar13 = obj.DATARMNETc5f6c112ec.__msg;
        }
    }
    else {
        uVar8 = sym.DATARMNET8d5a5a7047(*(iVar10 + 4),arg2);
    }
    return uVar8;
}


// ===== sym.DATARMNETc5f6c112ec @ 0x08005908 (size 96) =====

ulong sym.DATARMNETc5f6c112ec(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x20) + 0x28);
    if (iVar2 == 0) {
        puVar3 = *(arg1 + 0x40);
        do_trace_netlink_extack(obj.DATARMNETc5f6c112ec.__msg);
        uVar1 = 0xffffffea;
        if (puVar3 != NULL) {
            *puVar3 = obj.DATARMNETc5f6c112ec.__msg;
        }
    }
    else {
        uVar1 = sym.DATARMNET8d5a5a7047(*(iVar2 + 4),arg1);
    }
    return uVar1;
}


// ===== sym.DATARMNETa6aec23397 @ 0x08005968 (size 96) =====

ulong sym.DATARMNETa6aec23397(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x20) + 0x28);
    if (iVar2 == 0) {
        puVar3 = *(arg1 + 0x40);
        do_trace_netlink_extack(obj.DATARMNETa6aec23397.__msg);
        uVar1 = 0xffffffea;
        if (puVar3 != NULL) {
            *puVar3 = obj.DATARMNETa6aec23397.__msg;
        }
    }
    else {
        uVar1 = sym.DATARMNETc97c6a4265(*(iVar2 + 4),arg1);
    }
    return uVar1;
}


// ===== sym.DATARMNETa4773cb837 @ 0x080059c8 (size 40) =====

ulong sym.DATARMNETa4773cb837(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETbb4efa5b3d.llvm.8155310952281713815();
    return 0;
}


// ===== sym.DATARMNET16add73734 @ 0x080059f0 (size 96) =====

ulong sym.DATARMNET16add73734(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x20) + 0x28);
    if (iVar2 == 0) {
        puVar3 = *(arg1 + 0x40);
        do_trace_netlink_extack(obj.DATARMNET16add73734.__msg);
        uVar1 = 0xffffffea;
        if (puVar3 != NULL) {
            *puVar3 = obj.DATARMNET16add73734.__msg;
        }
    }
    else {
        uVar1 = sym.DATARMNET59b8376224(*(iVar2 + 4));
    }
    return uVar1;
}


// ===== sym.DATARMNETb318ed4796 @ 0x08005a50 (size 96) =====

ulong sym.DATARMNETb318ed4796(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(arg1 + 0x20) + 0x28);
    if (iVar2 == 0) {
        puVar3 = *(arg1 + 0x40);
        do_trace_netlink_extack("Must specify encap port");
        uVar1 = 0xffffffea;
        if (puVar3 != NULL) {
            *puVar3 = "Must specify encap port";
        }
    }
    else {
        uVar1 = sym.DATARMNET0b12e969c5(*(iVar2 + 4),arg1);
    }
    return uVar1;
}


// ===== sym.DATARMNET6a53c4576d @ 0x08005ab0 (size 480) =====

ulong sym.DATARMNET6a53c4576d(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    uchar uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar5;
    ulong *puVar6;
    uint16_t *puVar7;
    uint16_t *puVar8;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x20);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    puVar7 = *(iVar4 + 0x38);
    if ((((puVar7 == NULL) || (*(iVar4 + 0x40) == 0)) || (*(iVar4 + 0x48) == 0)) || (*(iVar4 + 0x50) == 0)) {
        puVar6 = *(arg1 + 0x40);
        pcVar5 = "Must specify FWD device and address";
    }
    else {
        puVar8 = puVar7 + 2;
        iVar4 = strchr(puVar8,0x3a);
        if (iVar4 == 0) {
            iVar1 = in4_pton(puVar8,*puVar7 - 4,&uStack_60,0xffffffff,0);
            if (iVar1 == 1) {
                uVar3 = 4;
                goto code_r0x08005bc0;
            }
            puVar6 = *(arg1 + 0x40);
            pcVar5 = "SRC address is invalid in IPv4";
        }
        else {
            iVar1 = in6_pton(puVar8,*puVar7 - 4,&uStack_60,0xffffffff,0);
            if (iVar1 == 1) {
                uVar3 = 6;
code_r0x08005bc0:
                uStack_40._0_5_ = CONCAT14(uVar3,uStack_40);
                puVar8 = *(*(arg1 + 0x20) + 0x40);
                puVar7 = puVar8 + 2;
                iVar4 = strchr(puVar7,0x3a);
                iVar1 = *puVar8 - 4;
                if (iVar4 == 0) {
                    iVar1 = in4_pton(puVar7,iVar1,&uStack_50,0xffffffff,0);
                    if (iVar1 == 1) goto code_r0x08005c50;
                    puVar6 = *(arg1 + 0x40);
                    pcVar5 = "DST address is invalid in IPv4";
                }
                else {
                    iVar1 = in6_pton(puVar7,iVar1,&uStack_50,0xffffffff,0);
                    if (iVar1 == 1) {
code_r0x08005c50:
                        uStack_40._0_4_ = CONCAT22(*(*(*(arg1 + 0x20) + 0x50) + 4),*(*(*(arg1 + 0x20) + 0x48) + 4));
                        sym.DATARMNET4c1c11d8a5(&uStack_60);
                        uVar2 = 0;
                        goto code_r0x08005b74;
                    }
                    puVar6 = *(arg1 + 0x40);
                    pcVar5 = "DST address is invalid in IPv6";
                }
            }
            else {
                puVar6 = *(arg1 + 0x40);
                pcVar5 = "SRC address is invalid in IPv6";
            }
        }
    }
    do_trace_netlink_extack(pcVar5);
    if (puVar6 == NULL) {
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0xffffffea;
        *puVar6 = pcVar5;
    }
code_r0x08005b74:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    __stack_chk_fail(uVar2);
    *extraout_x18 = sym.DATARMNET425149b729;
    sym.DATARMNET56fde5181e();
    return 0;
}


// ===== sym.DATARMNET425149b729 @ 0x08005c90 (size 40) =====

ulong sym.DATARMNET425149b729(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET56fde5181e();
    return 0;
}


// ===== sym.DATARMNETc0cc5d08ba @ 0x08005cb8 (size 156) =====

void sym.DATARMNETc0cc5d08ba(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    uVar3 = sym.DATARMNETe14c875532(&iStack_30,0x8000520,arg1);
    if (uVar3 == 0) {
        if (iStack_30 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            netlink_unicast(*(*(arg1 + 0x28) + 0x118),iStack_30,*(arg1 + 4),0x40);
            uVar3 = 0;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    uVar2 = __stack_chk_fail(uVar3);
    if (uVar2 < 0x17) {
        *(obj.DATARMNET24d235c444 + uVar2 * 8) = *(obj.DATARMNET24d235c444 + uVar2 * 8) + 1;
    }
    return;
}


// ===== sym.DATARMNET5ca94dbc3c @ 0x08005d54 (size 52) =====

void sym.DATARMNET5ca94dbc3c(uint32_t arg1)

{
    if (arg1 < 0x17) {
        *(obj.DATARMNET24d235c444 + arg1 * 8) = *(obj.DATARMNET24d235c444 + arg1 * 8) + 1;
    }
    return;
}


// ===== sym.DATARMNET17f6bc1be5 @ 0x08005d88 (size 52) =====

void sym.DATARMNET17f6bc1be5(uint32_t arg1)

{
    if (arg1 < 0x2b) {
        *(obj.DATARMNET9f5801b25f + arg1 * 8) = *(obj.DATARMNET9f5801b25f + arg1 * 8) + 1;
    }
    return;
}


// ===== sym.DATARMNET579f75aa50 @ 0x08005dbc (size 240) =====

uint32_t sym.DATARMNET579f75aa50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint *arg2_00;
    int64_t *piVar12;
    int64_t in_x3;
    int64_t iVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar15;
    ulong *puVar16;
    int64_t *piVar17;
    int64_t *piVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    uint uStack_48;
    ulong uStack_44;
    int64_t iStack_3c;
    ulong uStack_34;
    int64_t iStack_2c;
    ulong uStack_24;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uVar6 = 0xffffffff;
    uStack_24 = 0;
    iStack_2c = 0;
    uStack_34 = 0;
    iStack_3c = 0;
    uStack_44 = 0;
    piVar12 = arg3;
    if ((*(arg3 + 5) < 0x33) && ((1L << (*(arg3 + 5) & 0x3f) & 0x4000000020040U) != 0)) {
        piVar12 = &uStack_48;
        iVar2 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
        uStack_48 = *(iVar2 + 0xc);
        iStack_3c = *(iVar2 + 0x10) << 0x20;
        iStack_2c = ((*(iVar2 + 4) & 0xff00ff | (*(iVar2 + 4) >> 8) << 8) << 0x10) << 0x20;
        uStack_24._0_4_ = CONCAT22(*(iVar2 + 6) >> 8 | (*(iVar2 + 6) & 0x1f) << 8,arg2);
        uStack_24 = CONCAT14(4,uStack_24);
        uVar6 = sym.DATARMNET9d6ad3b16f(arg1,arg3,piVar12,in_x3);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return uVar6;
    }
    auVar19 = __stack_chk_fail();
    arg2_00 = auVar19._8_8_;
    piVar17 = auVar19._0_8_;
    *extraout_x18 = sym.DATARMNET9d6ad3b16f;
    sym.DATARMNET5ca94dbc3c(5);
    uVar9 = _raw_spin_lock_irqsave(obj.DATARMNET531b038fcd);
    for (piVar15 = *(obj.DATARMNET6e79f38051 + (piVar12[4] * 0x61c88647 >> 0x1c) * 8); piVar15 != NULL;
        piVar15 = *piVar15) {
        if (((*(piVar15 + 0xf) == '\0') && (piVar12[5] == *(piVar15 + 0xc))) && (piVar12[4] == *(piVar15 + 0xb))) {
            if (piVar12[5] == '\x04') {
                if ((*piVar12 == *(piVar15 + 7)) && (piVar12[2] == *(piVar15 + 9))) goto code_r0x08005fc4;
            }
            else if ((*piVar12 == piVar15[7] && piVar12[1] == piVar15[8]) &&
                    (piVar12[2] == piVar15[9] && piVar12[3] == piVar15[10])) goto code_r0x08005fc4;
        }
    }
    piVar15 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0x80);
    if (piVar15 == NULL) {
        _raw_spin_unlock_irqrestore(obj.DATARMNET531b038fcd,uVar9);
        return 0xffffffff;
    }
    *(piVar15 + 2) = 0;
    piVar15[3] = piVar15 + 3;
    piVar15[4] = piVar15 + 3;
    iVar5 = piVar12[4];
    iVar2 = piVar12[3];
    iVar14 = piVar12[4];
    piVar15[9] = piVar12[2];
    piVar15[10] = iVar2;
    pcVar1 = obj.DATARMNET6e79f38051 + (iVar5 * 0x61c88647 >> 0x1c) * 8;
    iVar13 = piVar12[5];
    iVar2 = *piVar12;
    iVar5 = piVar12[1];
    piVar15[0xb] = iVar14;
    *(piVar15 + 0xc) = iVar13;
    iVar13 = *pcVar1;
    piVar15[7] = iVar2;
    piVar15[8] = iVar5;
    *piVar15 = iVar13;
    piVar15[1] = pcVar1;
    *pcVar1 = piVar15;
    if (iVar13 != 0) {
        *(iVar13 + 8) = piVar15;
    }
    if (_segment.ehdr == 0) {
        queue_delayed_work_on(0x20,_netif_rx,obj.DATARMNETa41953a37b,0xd);
    }
    _segment.ehdr = _segment.ehdr + 1;
code_r0x08005fc4:
    _raw_spin_unlock_irqrestore(obj.DATARMNET531b038fcd,uVar9);
    if (piVar15 == NULL) {
        return 0xffffffff;
    }
    piVar15[0xe] = ___rcu_read_lock;
    if (piVar15[0xd] != 0) {
        if (0xfffffffffffff000 < piVar15[0xd]) {
            return 1;
        }
        iVar7 = sym.DATARMNET4899053671(piVar17);
        if (iVar7 != 0) {
            sym.DATARMNET5ca94dbc3c(7);
            return 1;
        }
        uVar6 = 6;
        goto code_r0x0800616c;
    }
    if (*(piVar12 + 0x26) != 0) {
        uVar9 = _raw_spin_lock_irqsave(piVar15 + 2);
        puVar16 = piVar15[4];
        uVar10 = __list_add_valid(piVar17,puVar16,piVar15 + 3);
        if ((uVar10 & 1) != 0) {
            piVar15[4] = piVar17;
            *piVar17 = piVar15 + 3;
            piVar17[1] = puVar16;
            *puVar16 = piVar17;
        }
        _raw_spin_unlock_irqrestore(piVar15 + 2,uVar9);
        uVar6 = 8;
        goto code_r0x0800616c;
    }
    cVar4 = *(arg2_00 + 5);
    if (cVar4 == '\x06') {
code_r0x08006124:
        *arg2_00 = *(piVar17[0x1b] + *(piVar12 + 0x24) + 2);
        uVar10 = sym.DATARMNETa8b2566e6a(piVar17,arg2_00,*(piVar12 + 0x24));
        if ((uVar10 & 1) != 0) {
            uVar10 = sym.DATARMNET0a4704e5e0(arg2_00);
            if ((uVar10 & 1) != 0) {
                kfree_skb(piVar17);
                uVar6 = 0x12;
code_r0x0800616c:
                sym.DATARMNET5ca94dbc3c(uVar6);
                return 0;
            }
            sym.DATARMNET5ca94dbc3c(10);
            goto code_r0x0800626c;
        }
    }
    else if (cVar4 == '2') {
        *arg2_00 = *(piVar17[0x1b] + *(piVar12 + 0x24));
    }
    else if (cVar4 == '\x11') goto code_r0x08006124;
    uVar10 = sym.DATARMNET4eafcdee07(arg2_00);
    if ((uVar10 & 1) != 0) {
        piVar15[0xd] = in_x3;
        iVar7 = sym.DATARMNET4899053671(piVar17);
        uVar6 = 6;
        if (iVar7 != 0) {
            uVar6 = 7;
        }
        sym.DATARMNET5ca94dbc3c(uVar6);
        uVar10 = piVar15[0xd];
        uVar9 = _raw_spin_lock_irqsave(piVar15 + 2);
        piVar12 = piVar15 + 3;
        if (piVar12 != *piVar12) {
            piVar17 = *piVar12;
            do {
                piVar18 = *piVar17;
                uVar11 = __list_del_entry_valid(piVar17);
                if ((uVar11 & 1) != 0) {
                    iVar2 = *piVar17;
                    piVar3 = piVar17[1];
                    *(iVar2 + 8) = piVar3;
                    *piVar3 = iVar2;
                }
                *piVar17 = 0;
                piVar17[1] = 0;
                if (uVar10 == 0 || 0xfffffffffffff000 < uVar10) {
                    netif_receive_skb(piVar17);
                }
                else {
                    iVar8 = sym.DATARMNET4899053671(piVar17);
                    if (iVar8 == 0) {
                        uVar6 = 6;
                    }
                    else {
                        netif_receive_skb(piVar17);
                        uVar6 = 7;
                    }
                    sym.DATARMNET5ca94dbc3c(uVar6);
                }
                piVar17 = piVar18;
            } while (piVar12 != piVar18);
        }
        _raw_spin_unlock_irqrestore(piVar15 + 2,uVar9);
        return iVar7 != 0;
    }
code_r0x0800626c:
    piVar15[0xd] = -0x16;
    uVar9 = _raw_spin_lock_irqsave(piVar15 + 2);
    piVar12 = piVar15[3];
    while (piVar15 + 3 != piVar12) {
        piVar17 = *piVar12;
        uVar10 = __list_del_entry_valid(piVar12);
        if ((uVar10 & 1) != 0) {
            iVar2 = *piVar12;
            piVar18 = piVar12[1];
            *(iVar2 + 8) = piVar18;
            *piVar18 = iVar2;
        }
        *piVar12 = 0;
        piVar12[1] = 0;
        netif_receive_skb(piVar12);
        piVar12 = piVar17;
    }
    _raw_spin_unlock_irqrestore(piVar15 + 2,uVar9);
    return 1;
}


// ===== sym.DATARMNET9d6ad3b16f @ 0x08005eac (size 1104) =====

uint32_t sym.DATARMNET9d6ad3b16f(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint uVar5;
    char cVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t *piVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET5ca94dbc3c(5);
    uVar9 = _raw_spin_lock_irqsave(obj.DATARMNET531b038fcd);
    for (piVar14 = *(obj.DATARMNET6e79f38051 + (*(arg3 + 0x20) * 0x61c88647 >> 0x1c) * 8); piVar14 != NULL;
        piVar14 = *piVar14) {
        if (((*(piVar14 + 0xf) == '\0') && (*(arg3 + 0x28) == *(piVar14 + 0xc))) && (*(arg3 + 0x20) == *(piVar14 + 0xb))
           ) {
            if (*(arg3 + 0x28) == '\x04') {
                if ((*arg3 == *(piVar14 + 7)) && (*(arg3 + 0x10) == *(piVar14 + 9))) goto code_r0x08005fc4;
            }
            else if ((*arg3 == piVar14[7] && *(arg3 + 8) == piVar14[8]) &&
                    (*(arg3 + 0x10) == piVar14[9] && *(arg3 + 0x18) == piVar14[10])) goto code_r0x08005fc4;
        }
    }
    piVar14 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0x80);
    if (piVar14 == NULL) {
        _raw_spin_unlock_irqrestore(obj.DATARMNET531b038fcd,uVar9);
        return 0xffffffff;
    }
    *(piVar14 + 2) = 0;
    piVar14[3] = piVar14 + 3;
    piVar14[4] = piVar14 + 3;
    iVar7 = *(arg3 + 0x20);
    iVar2 = *(arg3 + 0x18);
    iVar13 = *(arg3 + 0x20);
    piVar14[9] = *(arg3 + 0x10);
    piVar14[10] = iVar2;
    pcVar1 = obj.DATARMNET6e79f38051 + (iVar7 * 0x61c88647 >> 0x1c) * 8;
    uVar5 = *(arg3 + 0x28);
    iVar2 = *arg3;
    iVar3 = *(arg3 + 8);
    piVar14[0xb] = iVar13;
    *(piVar14 + 0xc) = uVar5;
    iVar13 = *pcVar1;
    piVar14[7] = iVar2;
    piVar14[8] = iVar3;
    *piVar14 = iVar13;
    piVar14[1] = pcVar1;
    *pcVar1 = piVar14;
    if (iVar13 != 0) {
        *(iVar13 + 8) = piVar14;
    }
    if (_segment.ehdr == 0) {
        queue_delayed_work_on(0x20,_netif_rx,obj.DATARMNETa41953a37b,0xd);
    }
    _segment.ehdr = _segment.ehdr + 1;
code_r0x08005fc4:
    _raw_spin_unlock_irqrestore(obj.DATARMNET531b038fcd,uVar9);
    if (piVar14 == NULL) {
        return 0xffffffff;
    }
    piVar14[0xe] = ___rcu_read_lock;
    if (piVar14[0xd] != 0) {
        if (0xfffffffffffff000 < piVar14[0xd]) {
            return 1;
        }
        iVar7 = sym.DATARMNET4899053671(arg1);
        if (iVar7 != 0) {
            sym.DATARMNET5ca94dbc3c(7);
            return 1;
        }
        uVar12 = 6;
        goto code_r0x0800616c;
    }
    if (*(arg3 + 0x26) != 0) {
        uVar9 = _raw_spin_lock_irqsave(piVar14 + 2);
        piVar15 = piVar14[4];
        uVar10 = __list_add_valid(arg1,piVar15,piVar14 + 3);
        if ((uVar10 & 1) != 0) {
            piVar14[4] = arg1;
            *arg1 = piVar14 + 3;
            *(arg1 + 8) = piVar15;
            *piVar15 = arg1;
        }
        _raw_spin_unlock_irqrestore(piVar14 + 2,uVar9);
        uVar12 = 8;
        goto code_r0x0800616c;
    }
    cVar6 = *(arg2 + 5);
    if (cVar6 == '\x06') {
code_r0x08006124:
        *arg2 = *(*(arg1 + 0xd8) + *(arg3 + 0x24) + 2);
        uVar10 = sym.DATARMNETa8b2566e6a(arg1,arg2,*(arg3 + 0x24));
        if ((uVar10 & 1) != 0) {
            uVar10 = sym.DATARMNET0a4704e5e0(arg2);
            if ((uVar10 & 1) != 0) {
                kfree_skb(arg1);
                uVar12 = 0x12;
code_r0x0800616c:
                sym.DATARMNET5ca94dbc3c(uVar12);
                return 0;
            }
            sym.DATARMNET5ca94dbc3c(10);
            goto code_r0x0800626c;
        }
    }
    else if (cVar6 == '2') {
        *arg2 = *(*(arg1 + 0xd8) + *(arg3 + 0x24));
    }
    else if (cVar6 == '\x11') goto code_r0x08006124;
    uVar10 = sym.DATARMNET4eafcdee07(arg2);
    if ((uVar10 & 1) != 0) {
        piVar14[0xd] = arg4;
        iVar7 = sym.DATARMNET4899053671(arg1);
        uVar12 = 6;
        if (iVar7 != 0) {
            uVar12 = 7;
        }
        sym.DATARMNET5ca94dbc3c(uVar12);
        uVar10 = piVar14[0xd];
        uVar9 = _raw_spin_lock_irqsave(piVar14 + 2);
        piVar15 = piVar14 + 3;
        if (piVar15 != *piVar15) {
            piVar16 = *piVar15;
            do {
                piVar17 = *piVar16;
                uVar11 = __list_del_entry_valid(piVar16);
                if ((uVar11 & 1) != 0) {
                    iVar2 = *piVar16;
                    piVar4 = piVar16[1];
                    *(iVar2 + 8) = piVar4;
                    *piVar4 = iVar2;
                }
                *piVar16 = 0;
                piVar16[1] = 0;
                if (uVar10 == 0 || 0xfffffffffffff000 < uVar10) {
                    netif_receive_skb(piVar16);
                }
                else {
                    iVar8 = sym.DATARMNET4899053671(piVar16);
                    if (iVar8 == 0) {
                        uVar12 = 6;
                    }
                    else {
                        netif_receive_skb(piVar16);
                        uVar12 = 7;
                    }
                    sym.DATARMNET5ca94dbc3c(uVar12);
                }
                piVar16 = piVar17;
            } while (piVar15 != piVar17);
        }
        _raw_spin_unlock_irqrestore(piVar14 + 2,uVar9);
        return iVar7 != 0;
    }
code_r0x0800626c:
    piVar14[0xd] = -0x16;
    uVar9 = _raw_spin_lock_irqsave(piVar14 + 2);
    piVar15 = piVar14[3];
    while (piVar14 + 3 != piVar15) {
        piVar16 = *piVar15;
        uVar10 = __list_del_entry_valid(piVar15);
        if ((uVar10 & 1) != 0) {
            iVar2 = *piVar15;
            piVar17 = piVar15[1];
            *(iVar2 + 8) = piVar17;
            *piVar17 = iVar2;
        }
        *piVar15 = 0;
        piVar15[1] = 0;
        netif_receive_skb(piVar15);
        piVar15 = piVar16;
    }
    _raw_spin_unlock_irqrestore(piVar14 + 2,uVar9);
    return 1;
}


// ===== sym.DATARMNETaca8ca54ed @ 0x08006304 (size 708) =====

ulong sym.DATARMNETaca8ca54ed(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    uint16_t uVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar10;
    uint32_t *puVar11;
    char *pcVar12;
    ulong unaff_x30;
    uint32_t uStack_a0;
    ushort auStack_9c [2];
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint uStack_78;
    int16_t iStack_74;
    uint16_t uStack_72;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uVar7 = 0xffffffff;
    uStack_70 = 0;
    if ((*(arg3 + 5) < 0x33) && ((1L << (*(arg3 + 5) & 0x3f) & 0x4100000020040U) != 0)) {
        iVar1 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
        cVar2 = *(iVar1 + 6);
        iVar6 = iVar1 - *(arg1 + 0xd8);
        uVar10 = iVar6 + 0x28;
        auStack_9c[0] = 0;
        bVar4 = cVar2 == ',';
        uVar8 = ipv6_ext_hdr(cVar2);
        if ((cVar2 != ';') && ((uVar8 & 1) != 0)) {
            iVar6 = -0x28 - iVar6;
            do {
                if ((*(arg1 + 0x70) + iVar6) - *(arg1 + 0x74) < 2) {
                    if (arg1 == 0) goto code_r0x08006584;
                    pcVar12 = auStack_9c;
                    iVar5 = skb_copy_bits(arg1,uVar10,auStack_9c,2);
                    if (iVar5 < 0) goto code_r0x08006584;
                }
                else {
                    pcVar12 = *(arg1 + 0xd8) + uVar10;
                    if (pcVar12 == NULL) goto code_r0x08006584;
                }
                if (cVar2 == '3') {
                    iVar9 = 2;
code_r0x0800642c:
                    iVar6 = (pcVar12[1] << iVar9) + 8;
                }
                else {
                    if (cVar2 != ',') {
                        if (cVar2 == '+') {
                            uStack_a0 = 0;
                            if ((*(arg1 + 0x70) + iVar6) - *(arg1 + 0x74) < 4) {
                                if ((arg1 == 0) || (iVar6 = skb_copy_bits(arg1,uVar10,&uStack_a0,4), iVar6 < 0))
                                goto code_r0x08006584;
                            }
                            else if (*(arg1 + 0xd8) + uVar10 == 0) goto code_r0x08006584;
                        }
                        iVar9 = 3;
                        goto code_r0x0800642c;
                    }
                    uStack_a0 = uStack_a0 & 0xffff0000;
                    if (((iVar6 + *(arg1 + 0x70)) - *(arg1 + 0x74)) + -2 < 2) {
                        if ((arg1 == 0) ||
                           (iVar6 = skb_copy_bits(arg1,uVar10 + 2,&uStack_a0,2), puVar11 = &uStack_a0, iVar6 < 0))
                        goto code_r0x08006584;
                    }
                    else {
                        puVar11 = *(arg1 + 0xd8) + uVar10 + 2;
                        if (puVar11 == NULL) goto code_r0x08006584;
                    }
                    if ((*puVar11 & 0xf8ff) != 0) goto code_r0x08006518;
                    iVar6 = 8;
                }
                if (bVar4) goto code_r0x08006518;
                cVar2 = *pcVar12;
                uVar10 = iVar6 + uVar10;
                auStack_9c[0] = 0;
                bVar4 = cVar2 == ',';
                uVar8 = ipv6_ext_hdr(cVar2);
            } while ((cVar2 != ';') && (iVar6 = -uVar10, (uVar8 & 1) != 0));
        }
        if (bVar4) {
code_r0x08006518:
            uStack_98 = *(iVar1 + 8);
            uStack_90 = *(iVar1 + 0x10);
            iStack_74 = arg2;
            iVar9 = *(arg1 + 0xd8) + uVar10;
            uStack_70 = CONCAT31(uStack_70._1_3_,6);
            uVar3 = *(iVar9 + 2);
            uStack_88 = *(iVar1 + 0x18);
            uStack_80 = *(iVar1 + 0x20);
            uStack_72 = uVar3 >> 8 & 0xf8 | uVar3 << 8;
            uStack_78 = *(iVar9 + 4);
            if (*(arg3 + 5) == ',') {
                iStack_74 = iStack_74 + 8;
            }
            uVar7 = sym.DATARMNET9d6ad3b16f(arg1,arg3,&uStack_98,arg4);
        }
        else {
code_r0x08006584:
            uVar7 = 0xffffffff;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18 = sym.DATARMNET49c2c17e77;
    _obj.DATARMNETa41953a37b = 0xfffffffe0;
    *0x80007e8 = 0x80007e8;
    *0x80007f0 = 0x80007e8;
    *0x80007f8 = sym.DATARMNETad2b7fd8f5.335a71be0cf44b08c7825d2b9c9871dd.cfi_jt;
    init_timer_key(0x8000810,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    return 0;
}


// ===== sym.DATARMNET49c2c17e77 @ 0x080065c8 (size 104) =====

ulong sym.DATARMNET49c2c17e77(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.DATARMNETa41953a37b = 0xfffffffe0;
    *0x80007e8 = 0x80007e8;
    *0x80007f0 = 0x80007e8;
    *0x80007f8 = sym.DATARMNETad2b7fd8f5.335a71be0cf44b08c7825d2b9c9871dd.cfi_jt;
    init_timer_key(0x8000810,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    return 0;
}


// ===== sym.DATARMNETad2b7fd8f5 @ 0x08006630 (size 500) =====

void sym.DATARMNETad2b7fd8f5(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int iVar6;
    uint32_t arg1_00;
    ulong uVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t *arg1_01;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(obj.DATARMNET531b038fcd);
    iVar5 = ___rcu_read_lock;
    cVar3 = *(arg1 + 0x88);
    iVar12 = 0;
    do {
        piVar14 = *(obj.DATARMNET6e79f38051 + iVar12 * 8);
        while (piVar4 = piVar14, piVar4 != NULL) {
            piVar14 = *piVar4;
            if ((piVar4[0xf] == '\0') && ((cVar3 != '\0' || (0x19 < iVar5 - piVar4[0xe])))) {
                piVar10 = piVar4[1];
                *(piVar4 + 0xf) = 1;
                if (piVar10 != NULL) {
                    *piVar10 = piVar14;
                    if (piVar14 != NULL) {
                        piVar14[1] = piVar10;
                    }
                    piVar4[1] = 0;
                }
                uVar11 = piVar4[0xd];
                uVar8 = _raw_spin_lock_irqsave(piVar4 + 2);
                piVar10 = piVar4 + 3;
                if (piVar10 != *piVar10) {
                    arg1_01 = *piVar10;
                    do {
                        piVar13 = *arg1_01;
                        uVar9 = __list_del_entry_valid(arg1_01);
                        if ((uVar9 & 1) != 0) {
                            iVar1 = *arg1_01;
                            piVar2 = arg1_01[1];
                            *(iVar1 + 8) = piVar2;
                            *piVar2 = iVar1;
                        }
                        *arg1_01 = 0;
                        arg1_01[1] = 0;
                        if (uVar11 == 0 || 0xfffffffffffff000 < uVar11) {
                            netif_rx(arg1_01);
                        }
                        else {
                            iVar6 = sym.DATARMNET4899053671(arg1_01);
                            if (iVar6 == 0) {
                                arg1_00 = 6;
                            }
                            else {
                                netif_rx(arg1_01);
                                arg1_00 = 7;
                            }
                            sym.DATARMNET5ca94dbc3c(arg1_00);
                        }
                        arg1_01 = piVar13;
                    } while (piVar10 != piVar13);
                }
                _raw_spin_unlock_irqrestore(piVar4 + 2,uVar8);
                kvfree_call_rcu(piVar4 + 5,0x28);
                sym.DATARMNET5ca94dbc3c(9);
                _segment.ehdr = _segment.ehdr + -1;
            }
        }
        iVar12 = iVar12 + 1;
    } while (iVar12 != 0x10);
    if (_segment.ehdr != 0) {
        queue_delayed_work_on(0x20,_netif_rx,arg1,0xd);
    }
    _raw_spin_unlock_irqrestore(obj.DATARMNET531b038fcd,uVar7);
    return;
}


// ===== sym.DATARMNET8c0e010dfb @ 0x08006824 (size 96) =====

void sym.DATARMNET8c0e010dfb(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cancel_delayed_work_sync(obj.DATARMNETa41953a37b);
    *0x8000868 = 1;
    queue_delayed_work_on(0x20,_netif_rx,obj.DATARMNETa41953a37b,0);
    cancel_delayed_work_sync(obj.DATARMNETa41953a37b);
    return;
}


// ===== sym.DATARMNETedae8262e1 @ 0x08006884 (size 128) =====

void sym.DATARMNETedae8262e1(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    iVar1 = 0;
    do {
        for (piVar2 = *(obj.DATARMNET6e79f38051 + iVar1 * 8); piVar2 != NULL; piVar2 = *piVar2) {
            if (piVar2[0xd] == arg1) {
                piVar2[0xd] = 0xffffffffffffffea;
            }
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != 0x10);
    __rcu_read_unlock();
    return;
}


// ===== sym.DATARMNET07f0e0f286 @ 0x0800690c (size 184) =====

int64_t sym.DATARMNET07f0e0f286(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = *(obj.DATARMNET5413d6f8ec + (*(arg1 + 0x10) * 0x61c88647 >> 0x1c) * 8);
    do {
        if (piVar1 == NULL) {
            return 0;
        }
        if (*(piVar1 + 0x11) == *(arg1 + 0x20)) {
            if (*(piVar1 + 0x11) == '\x04') {
                if ((*(piVar1 + 0xd) == *arg1) && (*(piVar1 + 0xf) == *(arg1 + 0x10))) {
code_r0x080069b8:
                    return piVar1 + 0x12;
                }
            }
            else if ((piVar1[0xd] == *arg1 && piVar1[0xe] == *(arg1 + 8)) &&
                    (piVar1[0xf] == *(arg1 + 0x10) && piVar1[0x10] == *(arg1 + 0x18))) goto code_r0x080069b8;
        }
        piVar1 = *piVar1;
    } while( true );
}


// ===== sym.DATARMNETf4e1a29dbc @ 0x080069cc (size 116) =====

void sym.DATARMNETf4e1a29dbc(void)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    iVar1 = 0;
    do {
        for (piVar2 = *(obj.DATARMNET5413d6f8ec + iVar1 * 8); piVar2 != NULL; piVar2 = *piVar2) {
            hrtimer_cancel(piVar2 + 4);
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != 0x10);
    __rcu_read_unlock();
    return;
}


// ===== sym.DATARMNET6f73df41cd @ 0x08006a48 (size 480) =====

void sym.DATARMNET6f73df41cd(int64_t arg1)

{
    int16_t *piVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    uint8_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    piVar4 = _obj.DATARMNETcde6e442f5;
    iVar3 = sp_el0;
    iStack_18 = *(iVar3 + 0x5e0);
    if (_obj.DATARMNETcde6e442f5 == NULL) goto code_r0x08006ba0;
    if (*(arg1 + 0xb0) == -0x227a) {
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        uStack_40 = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
            if (arg1 == 0) goto code_r0x08006ba0;
            iVar5 = skb_copy_bits(arg1,0,&stack0xffffffffffffffc0,0x28);
            puVar6 = &stack0xffffffffffffffc0;
            if (iVar5 < 0) goto code_r0x08006ba0;
        }
        else {
            puVar6 = *(arg1 + 0xd8);
            if (puVar6 == NULL) goto code_r0x08006ba0;
        }
        if (((*(piVar4 + 0x24) != *puVar6 >> 4) && (*(puVar6 + 8) != *piVar4 || *(puVar6 + 0x10) != piVar4[1])) &&
           (*(puVar6 + 0x18) != piVar4[2] || *(puVar6 + 0x20) != piVar4[3])) goto code_r0x08006ba0;
        uVar2 = puVar6[6];
    }
    else {
        if (*(arg1 + 0xb0) != 8) goto code_r0x08006ba0;
        uStack_30 = uStack_30 & 0xffffffff00000000;
        uStack_40 = 0;
        uStack_38 = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
            if (arg1 == 0) goto code_r0x08006ba0;
            iVar5 = skb_copy_bits(arg1,0,&stack0xffffffffffffffc0,0x14);
            puVar6 = &stack0xffffffffffffffc0;
            if (iVar5 < 0) goto code_r0x08006ba0;
        }
        else {
            puVar6 = *(arg1 + 0xd8);
            if (puVar6 == NULL) goto code_r0x08006ba0;
        }
        if (((*(piVar4 + 0x24) != *puVar6 >> 4) && (*(puVar6 + 0xc) != *piVar4)) && (*(puVar6 + 0x10) != piVar4[2]))
        goto code_r0x08006ba0;
        uVar2 = puVar6[9];
    }
    if (((uVar2 == 0x11) && (piVar1 = *(arg1 + 0xd0) + *(arg1 + 0xb2), *piVar1 == piVar4[4])) &&
       (piVar1[1] == *(piVar4 + 0x22))) {
        *(arg1 + 0x8c) = 0x9b6d0100;
        sym.DATARMNET5ca94dbc3c(0x15);
    }
code_r0x08006ba0:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8006c24;
    _rmnet_wlan_ll_tuple_hook = sym.DATARMNET6f73df41cd.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNETd0b5ecd937.llvm.1624286943187993109,1);
    return;
}


// ===== sym.DATARMNET333c107558 @ 0x08006c28 (size 68) =====

void sym.DATARMNET333c107558(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _rmnet_wlan_ll_tuple_hook = sym.DATARMNET6f73df41cd.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNETd0b5ecd937.llvm.1624286943187993109,1);
    return;
}


// ===== sym.DATARMNET4c08c7210c @ 0x08006c6c (size 60) =====

void sym.DATARMNET4c08c7210c(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _android_kmalloc_64_create = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNETd0b5ecd937.llvm.1624286943187993109,1);
    synchronize_rcu();
    return;
}


// ===== sym.DATARMNET9f106ed933 @ 0x08006ca8 (size 88) =====

int sym.DATARMNET9f106ed933(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = register_netdevice_notifier(reloc.DATARMNET81ab4de243.4993905e98a9149b69a23285a6033439.cfi_jt);
    if (iVar1 != 0) {
        _printk(0x8000ae0,"");
    }
    return iVar1;
}


// ===== sym.DATARMNETf56cbaa2b1 @ 0x08006d00 (size 88) =====

int sym.DATARMNETf56cbaa2b1(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = unregister_netdevice_notifier(reloc.DATARMNET81ab4de243.4993905e98a9149b69a23285a6033439.cfi_jt);
    if (iVar1 != 0) {
        _printk(0x800077f,"DATARMNETf56cbaa2b1");
    }
    return iVar1;
}


// ===== sym.DATARMNET81ab4de243 @ 0x08006d58 (size 252) =====

ulong sym.DATARMNET81ab4de243(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *arg3;
    if ((arg3 != 0) && (iVar1 = sym.DATARMNETaba2beb199(arg3,0x8000b02,0xc), iVar1 == 0)) {
        if (arg2 == 5) {
            iVar1 = netdev_rx_handler_register(arg3,sym.DATARMNET68fe094884.4993905e98a9149b69a23285a6033439.cfi_jt,0)
            ;
            if (iVar1 != 0) {
                _printk(0x8000a39,"DATARMNET81ab4de243",arg3);
            }
        }
        else if (arg2 == 6) {
            netdev_rx_handler_unregister(arg3);
            __rcu_read_lock();
            iVar2 = 0;
            do {
                for (piVar3 = *(obj.DATARMNET5413d6f8ec + iVar2 * 8); piVar3 != NULL; piVar3 = *piVar3) {
                    if (piVar3[0x12] == arg3) {
                        hrtimer_cancel(piVar3 + 4);
                    }
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0x10);
            __rcu_read_unlock();
        }
    }
    return 0;
}


// ===== sym.DATARMNET68fe094884 @ 0x08006e5c (size 1064) =====

ulong sym.DATARMNET68fe094884(int64_t arg1)

{
    code *pcVar1;
    uint8_t uVar2;
    bool bVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t arg2;
    uchar *puVar9;
    char cVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    char acStack_d0 [4];
    int16_t aiStack_cc [2];
    ulong uStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    arg1 = *arg1;
    uStack_60 = 0;
    uStack_70 = 0;
    iStack_68 = 0;
    uStack_80 = 0;
    iStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if ((arg1 == 0) || ((*(arg1 + 0x80) & 7) == 5)) {
        uVar5 = 3;
        goto code_r0x0800723c;
    }
    if (*(arg1 + 0xb0) == -0x227a) {
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_c8 = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
            puVar9 = &stack0xffffffffffffff38;
            iVar4 = skb_copy_bits(arg1,0,&stack0xffffffffffffff38,0x28);
            if (-1 < iVar4) goto code_r0x08006f30;
            goto code_r0x0800722c;
        }
        puVar9 = *(arg1 + 0xd8);
        if (puVar9 == NULL) goto code_r0x0800722c;
code_r0x08006f30:
        uStack_98 = *(puVar9 + 8);
        uStack_90 = *(puVar9 + 0x10);
        uStack_88 = CONCAT71(uStack_88._1_7_,6);
code_r0x08006f40:
        __rcu_read_lock();
        iVar6 = sym.DATARMNETcc0a01df2a(&stack0xffffffffffffff60);
        __rcu_read_unlock();
        if (iVar6 == 0) goto code_r0x0800722c;
        uVar2 = *(iVar6 + 0x61);
        arg2 = uVar2;
        if (uVar2 != 3) {
            if ((*(arg1 + 0x10) != 0) && (uVar2 == 2)) {
                *(arg1 + 0x68) = 7;
                *(arg1 + 0x82) = *(arg1 + 0x82) | 0x8000;
            }
            if (*(arg1 + 0xb0) == -0x227a) {
                uStack_b0 = 0;
                uStack_a8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0;
                uStack_c8 = 0;
                aiStack_cc[0] = 0;
                iVar6 = sym.skb_header_pointer_1(arg1,0x28,&stack0xffffffffffffff38);
                if (iVar6 != 0) {
                    acStack_d0[0] = *(iVar6 + 6);
                    iVar4 = ipv6_skip_exthdr(arg1,0x28,&stack0xffffffffffffff30,&stack0xffffffffffffff34);
                    if ((-1 < iVar4) && ((aiStack_cc[0] == 0 || (acStack_d0[0] != ',')))) {
                        if (acStack_d0[0] == '\x06') goto code_r0x080071e0;
                        if (acStack_d0[0] == ':') {
                            uVar11 = *(iVar6 + 8);
                            iStack_78 = *(iVar6 + 0x10);
                            bVar3 = false;
                            uVar12 = *(iVar6 + 0x18);
                            iStack_68 = *(iVar6 + 0x20);
                            cVar10 = '\x06';
                            uStack_80 = uVar11;
                            uStack_70 = uVar12;
                            goto code_r0x0800706c;
                        }
                    }
                }
            }
            else if (*(arg1 + 0xb0) == 8) {
                uStack_b8 = uStack_b8 & 0xffffffff00000000;
                uStack_c8 = 0;
                uStack_c0 = 0;
                iVar6 = sym.skb_header_pointer_1(arg1,0x14,&stack0xffffffffffffff38);
                if (iVar6 != 0) {
                    if (*(iVar6 + 9) == '\x06') {
code_r0x080071e0:
                        sym.DATARMNET7ca470d54b(arg1,0x200);
                    }
                    else if (*(iVar6 + 9) == '\x01') {
                        uVar11 = *(iVar6 + 0xc);
                        uVar12 = *(iVar6 + 0x10);
                        cVar10 = '\x04';
                        bVar3 = true;
                        uStack_80 = CONCAT44(uStack_80._4_4_,*(iVar6 + 0xc));
                        uStack_70 = CONCAT44(uStack_70._4_4_,*(iVar6 + 0x10));
code_r0x0800706c:
                        uStack_60 = CONCAT31(uStack_60._1_3_,cVar10);
                        __rcu_read_lock();
                        pcVar1 = obj.DATARMNET5413d6f8ec + (uVar12 * 0x61c88647 >> 0x1c) * 8;
                        for (piVar7 = *pcVar1; piVar7 != NULL; piVar7 = *piVar7) {
                            if (*(piVar7 + 0x11) == cVar10) {
                                if (bVar3) {
                                    if ((*(piVar7 + 0xd) == uVar11) && (*(piVar7 + 0xf) == uVar12)) {
code_r0x080071b4:
                                        if ((*(piVar7 + 0xb) & 1) != 0) {
                                            hrtimer_start_range_ns(piVar7 + 4,2000000000,0,1);
                                        }
                                        __rcu_read_unlock();
                                        goto code_r0x08007230;
                                    }
                                }
                                else if ((piVar7[0xd] == uStack_80 && piVar7[0xe] == iStack_78) &&
                                        (piVar7[0xf] == uStack_70 && piVar7[0x10] == iStack_68)) goto code_r0x080071b4;
                            }
                        }
                        __rcu_read_unlock();
                        uVar5 = _raw_spin_lock_irqsave(obj.DATARMNET820642743b);
                        piVar7 = kmem_cache_alloc_trace(_delayed_work_timer_fn,0xb20,0xb0);
                        if (piVar7 != NULL) {
                            *piVar7 = 0;
                            piVar7[1] = 0;
                            piVar7[0xf] = uStack_70;
                            piVar7[0x10] = iStack_68;
                            *(piVar7 + 0x11) = uStack_60;
                            piVar7[0xd] = uStack_80;
                            piVar7[0xe] = iStack_78;
                            piVar7[0x12] = *(arg1 + 0x10);
                            hrtimer_init(piVar7 + 4,1,1);
                            piVar7[9] = sym.DATARMNET299a8a08b5.4993905e98a9149b69a23285a6033439.cfi_jt;
                            hrtimer_start_range_ns(piVar7 + 4,2000000000,0,1);
                            iVar6 = *pcVar1;
                            *piVar7 = iVar6;
                            piVar7[1] = pcVar1;
                            *pcVar1 = piVar7;
                            if (iVar6 != 0) {
                                *(iVar6 + 8) = piVar7;
                            }
                        }
                        _raw_spin_unlock_irqrestore(obj.DATARMNET820642743b,uVar5);
                    }
                }
            }
        }
    }
    else {
        if (*(arg1 + 0xb0) == 8) {
            uStack_b8 = uStack_b8 & 0xffffffff00000000;
            uStack_c8 = 0;
            uStack_c0 = 0;
            if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
                puVar9 = &stack0xffffffffffffff38;
                iVar4 = skb_copy_bits(arg1,0,&stack0xffffffffffffff38,0x14);
                if (-1 < iVar4) goto code_r0x08006ef8;
            }
            else {
                puVar9 = *(arg1 + 0xd8);
                if (puVar9 != NULL) {
code_r0x08006ef8:
                    uStack_98 = CONCAT44(uStack_98._4_4_,*(puVar9 + 0xc));
                    uStack_88 = CONCAT71(uStack_88._1_7_,4);
                    goto code_r0x08006f40;
                }
            }
        }
code_r0x0800722c:
        arg2 = 3;
    }
code_r0x08007230:
    uVar5 = sym.DATARMNETc9ed97754a(arg1,arg2);
code_r0x0800723c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail(uVar5);
    *extraout_x18 = 0x8007278;
    uVar5 = _raw_spin_lock_irqsave(in_tmp_ldXn,obj.DATARMNET820642743b);
    piVar7 = *(iVar6 + -0x18);
    if (piVar7 != NULL) {
        iVar8 = *(iVar6 + -0x20);
        *piVar7 = iVar8;
        if (iVar8 != 0) {
            *(iVar8 + 8) = piVar7;
        }
        *(iVar6 + -0x18) = 0;
    }
    if (iVar6 + -0x20 != NULL) {
        kvfree_call_rcu(iVar6 + -0x10,0x10);
    }
    _raw_spin_unlock_irqrestore(obj.DATARMNET820642743b,uVar5);
    return 0;
}


// ===== sym.DATARMNET299a8a08b5 @ 0x08007284 (size 128) =====

ulong sym.DATARMNET299a8a08b5(int64_t arg1)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(obj.DATARMNET820642743b);
    piVar2 = *(arg1 + -0x18);
    if (piVar2 != NULL) {
        iVar3 = *(arg1 + -0x20);
        *piVar2 = iVar3;
        if (iVar3 != 0) {
            *(iVar3 + 8) = piVar2;
        }
        *(arg1 + -0x18) = 0;
    }
    if (arg1 + -0x20 != NULL) {
        kvfree_call_rcu(arg1 + -0x10,0x10);
    }
    _raw_spin_unlock_irqrestore(obj.DATARMNET820642743b,uVar1);
    return 0;
}


// ===== sym.DATARMNETc9ed97754a @ 0x08007304 (size 2884) =====

void sym.DATARMNETc9ed97754a(int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    code *pcVar8;
    uint32_t uVar9;
    ulong *in_x18;
    uint64_t unaff_x19;
    code *unaff_x20;
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
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if (*(arg1 + 0x10) == 0) {
        uVar7 = 3;
        goto code_r0x08007d58;
    }
    iVar1 = *(arg1 + 0xb0);
    if (((arg2 & 0xff) != 2) || (iVar1 != 8)) {
        if (((arg2 & 0xff) != 2) || (iVar1 != -0x227a)) {
            unaff_x19 = arg1;
            if (((arg2 & 0xff) != 1) || (iVar1 != 8)) {
                if (((arg2 & 0xff) != 1) || (iVar1 != -0x227a)) {
                    if (((arg2 & 0xff) != 0) || (iVar1 != 8)) {
                        uVar7 = 3;
                        if ((arg2 & 0xff) != 0) goto code_r0x08007d58;
                        if (iVar1 != -0x227a) goto code_r0x08007d58;
                        uStack_48 = 0;
                        uStack_40 = 0;
                        uStack_58 = 0;
                        uStack_50 = 0;
                        uStack_60 = 0;
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
                        uStack_b8 = 0;
                        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
                            if (arg1 != 0) {
                                unaff_x20 = &uStack_60;
                                iVar4 = skb_copy_bits(arg1,0,&uStack_60,0x28);
                                pcVar8 = unaff_x20;
                                if (-1 < iVar4) goto code_r0x080079ac;
                            }
                        }
                        else {
                            unaff_x20 = NULL;
                            pcVar8 = *(arg1 + 0xd8);
                            if (*(arg1 + 0xd8) != NULL) {
code_r0x080079ac:
                                uStack_80 = *(pcVar8 + 8);
                                uStack_78 = *(pcVar8 + 0x10);
                                uStack_90 = *(pcVar8 + 0x18);
                                uStack_88 = *(pcVar8 + 0x20);
                                unaff_x20 = *(_kmem_cache_alloc_trace + 0x10);
                                __cfi_slowpath_diag(0xb12cbe025ec82eb,unaff_x20,0x80006d0);
                                uVar6 = (*unaff_x20)(init_net,0,&uStack_b8,0);
                                if (0xfffffffffffff000 < uVar6) {
                                    sym.DATARMNET17f6bc1be5(0xf);
                                    iVar5 = dev_get_by_name_rcu(init_net,"dummy0");
                                    if (iVar5 == 0) {
                                        uVar9 = 0x16;
                                        goto code_r0x08007d48;
                                    }
                                    unaff_x20 = *(_kmem_cache_alloc_trace + 0x10);
                                    uStack_b8 = CONCAT44(uStack_b8._4_4_,*(iVar5 + 0xd0));
                                    uStack_b0 = CONCAT17(2,uStack_b0);
                                    __cfi_slowpath_diag(0xb12cbe025ec82eb,unaff_x20,0x80006f0);
                                    uVar6 = (*unaff_x20)(init_net,0,&uStack_b8,0);
                                    if (0xfffffffffffff000 < uVar6) {
                                        uVar9 = 0x17;
                                        goto code_r0x08007a8c;
                                    }
                                }
                                uVar6 = xfrm_lookup(init_net,uVar6,&uStack_b8,0,0);
                                if (uVar6 < 0xfffffffffffff001) {
                                    *(arg1 + 0x58) = uVar6;
                                    *(arg1 + 0x82) =
                                         *(arg1 + 0x82) & 0x7fff | (uVar6 != 0 | *(arg1 + 0x82) >> 0xf) << 0xf;
                                    sym.dst_output(arg1);
                                    sym.DATARMNET17f6bc1be5(0x11);
                                    goto code_r0x08007d54;
                                }
                                uVar9 = 0x10;
                                goto code_r0x08007d48;
                            }
                        }
                        uVar9 = 0xe;
                        goto code_r0x08007d48;
                    }
                    uStack_50 = uStack_50._4_4_ << 0x20;
                    uStack_60 = 0;
                    uStack_58 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_b8 = 0;
                    if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
                        if (arg1 != 0) {
                            unaff_x20 = &uStack_60;
                            iVar4 = skb_copy_bits(arg1,0,&uStack_60,0x14);
                            if (-1 < iVar4) goto code_r0x080077d0;
                        }
                    }
                    else {
                        unaff_x20 = *(arg1 + 0xd8);
                        if (unaff_x20 != NULL) {
code_r0x080077d0:
                            iVar5 = dev_get_by_name_rcu(init_net,obj.DATARMNET30500ba48c.llvm.8155310952281713815);
                            if (iVar5 == 0) {
                                uVar9 = 0x2a;
                            }
                            else {
                                uStack_b8 = CONCAT44(uStack_b8._4_4_,*(iVar5 + 0xd0));
                                uStack_90 = CONCAT44(*(unaff_x20 + 0x10),uStack_90);
                                uStack_b0 = CONCAT17(2,uStack_b0);
                                uVar6 = ip_route_output_flow(init_net,&uStack_b8,0);
                                if (0xfffffffffffff000 < uVar6) {
                                    sym.DATARMNET17f6bc1be5(0x13);
                                    iVar5 = dev_get_by_name_rcu(init_net,"dummy0");
                                    if (iVar5 == 0) {
                                        uVar9 = 0x18;
                                        goto code_r0x08007d48;
                                    }
                                    uStack_b8 = CONCAT44(uStack_b8._4_4_,*(iVar5 + 0xd0));
                                    uStack_b0 = CONCAT17(2,uStack_b0);
                                    uVar6 = ip_route_output_flow(init_net,&uStack_b8,0);
                                    if (0xfffffffffffff000 < uVar6) {
                                        uVar9 = 0x19;
                                        goto code_r0x08007a8c;
                                    }
                                }
                                uStack_90 = CONCAT44(uStack_90._4_4_,*(unaff_x20 + 0xc));
                                uVar6 = xfrm_lookup(init_net,uVar6,&uStack_b8,0,0);
                                if (uVar6 < 0xfffffffffffff001) {
                                    *(arg1 + 0x58) = uVar6;
                                    *(arg1 + 0x82) =
                                         *(arg1 + 0x82) & 0x7fff | (uVar6 != 0 | *(arg1 + 0x82) >> 0xf) << 0xf;
                                    sym.dst_output(arg1);
                                    sym.DATARMNET17f6bc1be5(0x15);
                                    goto code_r0x08007d54;
                                }
                                uVar9 = 0x14;
                            }
                            goto code_r0x08007d48;
                        }
                    }
                    goto code_r0x08007ccc;
                }
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_60 = 0;
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
                uStack_b8 = 0;
                if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
                    if (arg1 != 0) {
                        unaff_x20 = &uStack_60;
                        iVar4 = skb_copy_bits(arg1,0,&uStack_60,0x28);
                        pcVar8 = unaff_x20;
                        if (-1 < iVar4) goto code_r0x0800760c;
                    }
                }
                else {
                    unaff_x20 = NULL;
                    pcVar8 = *(arg1 + 0xd8);
                    if (*(arg1 + 0xd8) != NULL) {
code_r0x0800760c:
                        uStack_80 = *(pcVar8 + 8);
                        uStack_78 = *(pcVar8 + 0x10);
                        uStack_90 = *(pcVar8 + 0x18);
                        uStack_88 = *(pcVar8 + 0x20);
                        unaff_x20 = *(_kmem_cache_alloc_trace + 0x10);
                        __cfi_slowpath_diag(0xb12cbe025ec82eb,unaff_x20,0x8000690);
                        uVar6 = (*unaff_x20)(init_net,0,&uStack_b8,0);
                        if (0xfffffffffffff000 < uVar6) {
                            sym.DATARMNET17f6bc1be5(0x1b);
                            iVar5 = dev_get_by_name_rcu(init_net,"dummy0");
                            if (iVar5 == 0) {
                                uVar9 = 0x1e;
                                goto code_r0x08007d48;
                            }
                            unaff_x20 = *(_kmem_cache_alloc_trace + 0x10);
                            uStack_b8 = CONCAT44(uStack_b8._4_4_,*(iVar5 + 0xd0));
                            uStack_b0 = CONCAT17(2,uStack_b0);
                            __cfi_slowpath_diag(0xb12cbe025ec82eb,unaff_x20,0x80006b0);
                            uVar6 = (*unaff_x20)(init_net,0,&uStack_b8,0);
                            if (0xfffffffffffff000 < uVar6) {
                                uVar9 = 0x1f;
                                goto code_r0x08007a8c;
                            }
                        }
                        uVar6 = xfrm_lookup(init_net,uVar6,&uStack_b8,0,0);
                        if (uVar6 < 0xfffffffffffff001) {
                            *(arg1 + 0x58) = uVar6;
                            *(arg1 + 0x82) = *(arg1 + 0x82) & 0x7fff | (uVar6 != 0 | *(arg1 + 0x82) >> 0xf) << 0xf;
                            unaff_x20 = *((uVar6 & 0xfffffffffffffffe) + 0x30);
                            __cfi_slowpath_diag(0x7fbf3eec1d6e801c,unaff_x20,0x8000730);
                            (*unaff_x20)(init_net,0,arg1);
                            sym.DATARMNET17f6bc1be5(0x1d);
                            goto code_r0x08007d54;
                        }
                        uVar9 = 0x1c;
                        goto code_r0x08007d48;
                    }
                }
                uVar9 = 0x1a;
                goto code_r0x08007d48;
            }
            uStack_50 = uStack_50._4_4_ << 0x20;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            uStack_b8 = 0;
            if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
                if (arg1 != 0) {
                    unaff_x20 = &uStack_60;
                    iVar4 = skb_copy_bits(arg1,0,&uStack_60,0x14);
                    if (-1 < iVar4) goto code_r0x08007514;
                }
            }
            else {
                unaff_x20 = *(arg1 + 0xd8);
                if (unaff_x20 != NULL) {
code_r0x08007514:
                    iVar5 = dev_get_by_name_rcu(init_net,obj.DATARMNET755f0f0df8.llvm.8155310952281713815);
                    if (iVar5 == 0) {
                        uVar9 = 0x26;
                    }
                    else {
                        uStack_b8 = CONCAT44(uStack_b8._4_4_,*(iVar5 + 0xd0));
                        uStack_90 = CONCAT44(*(unaff_x20 + 0x10),uStack_90);
                        uStack_b0 = CONCAT17(2,uStack_b0);
                        uVar6 = ip_route_output_flow(init_net,&uStack_b8,0);
                        if (0xfffffffffffff000 < uVar6) {
                            sym.DATARMNET17f6bc1be5(0x28);
                            iVar5 = dev_get_by_name_rcu(init_net,"dummy0");
                            if (iVar5 == 0) {
                                uVar9 = 0x24;
                                goto code_r0x08007d48;
                            }
                            uStack_b8 = CONCAT44(uStack_b8._4_4_,*(iVar5 + 0xd0));
                            uStack_b0 = CONCAT17(2,uStack_b0);
                            uVar6 = ip_route_output_flow(init_net,&uStack_b8,0);
                            if (0xfffffffffffff000 < uVar6) {
                                uVar9 = 0x25;
code_r0x08007a8c:
                                sym.DATARMNET17f6bc1be5(uVar9);
                                uVar7 = 3;
                                goto code_r0x08007d58;
                            }
                        }
                        uStack_90 = CONCAT44(uStack_90._4_4_,*(unaff_x20 + 0xc));
                        uVar6 = xfrm_lookup(init_net,uVar6,&uStack_b8,0,0);
                        if (uVar6 < 0xfffffffffffff001) {
                            *(arg1 + 0x58) = uVar6;
                            *(arg1 + 0x82) = *(arg1 + 0x82) & 0x7fff | (uVar6 != 0 | *(arg1 + 0x82) >> 0xf) << 0xf;
                            sym.dst_output(arg1);
                            sym.DATARMNET17f6bc1be5(0x23);
                            goto code_r0x08007d54;
                        }
                        uVar9 = 0x22;
                    }
                    goto code_r0x08007d48;
                }
            }
            uVar9 = 0x29;
            goto code_r0x08007d48;
        }
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_60 = 0;
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
        uStack_b8 = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
            if (arg1 != 0) {
                unaff_x20 = &uStack_60;
                iVar4 = skb_copy_bits(arg1,0,&uStack_60,0x28);
                if (-1 < iVar4) goto code_r0x0800743c;
            }
        }
        else {
            unaff_x20 = *(arg1 + 0xd8);
            if (unaff_x20 != NULL) {
code_r0x0800743c:
                iVar5 = dev_get_by_name_rcu(init_net,obj.DATARMNET30500ba48c.llvm.8155310952281713815);
                if (iVar5 == 0) {
                    uVar9 = 10;
                }
                else {
                    *(arg1 + 0x10) = iVar5;
                    uStack_80 = *(unaff_x20 + 8);
                    uStack_78 = *(unaff_x20 + 0x10);
                    uStack_90 = *(unaff_x20 + 0x18);
                    uStack_88 = *(unaff_x20 + 0x20);
                    uStack_b8 = CONCAT44(uStack_b8._4_4_,*(iVar5 + 0xd0));
                    unaff_x20 = *(_kmem_cache_alloc_trace + 0x10);
                    uStack_b0 = CONCAT17(2,uStack_b0);
                    __cfi_slowpath_diag(0xb12cbe025ec82eb,unaff_x20,0x8000670);
                    uVar6 = (*unaff_x20)(init_net,0,&uStack_b8,0);
                    if (uVar6 < 0xfffffffffffff001) {
                        pcVar8 = *(*(uVar6 + 8) + 0x68);
                        __cfi_slowpath_diag(0xaeb85a2ea453237c,pcVar8,0x8000710);
                        unaff_x20 = (*pcVar8)(uVar6,0,&uStack_90);
                        dst_release(uVar6);
                        if ((unaff_x20 < 0xfffffffffffff001) && (unaff_x20 != NULL)) {
                            if ((*(unaff_x20 + 0x168) == *(arg1 + 0x10)) && (*(*(unaff_x20 + 0x168) + 0x220) != 0)) {
                                uVar6 = neigh_resolve_output(unaff_x20,arg1);
                                arg1 = uVar6 & 0xffffffff;
                                sym.neigh_release(unaff_x20);
                                uVar9 = 3;
                                if ((uVar6 & 0xfffffffd) == 0) {
                                    uVar9 = 1;
                                }
                                sym.DATARMNET17f6bc1be5(uVar9);
                                goto code_r0x08007d54;
                            }
                            sym.DATARMNET17f6bc1be5(0xd);
                            pcVar8 = unaff_x20 + 0x30;
                            Hint_Prefetch(pcVar8,2,0,1);
                            do {
                                iVar4 = *pcVar8;
                                cVar2 = '\x01';
                                bVar3 = ExclusiveMonitorPass(pcVar8,0x10);
                                if (bVar3) {
                                    *pcVar8 = iVar4 + -1;
                                    cVar2 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar2 != '\0');
                            if (iVar4 != 1) goto code_r0x08007e04;
                            DataMemoryBarrier(2,1);
                            goto code_r0x08007914;
                        }
                        uVar9 = 0xc;
                    }
                    else {
                        uVar9 = 0xb;
                    }
                }
                goto code_r0x08007d48;
            }
        }
        uVar9 = 9;
        goto code_r0x08007d48;
    }
    uStack_50 = uStack_50._4_4_ << 0x20;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
        if (arg1 != 0) {
            unaff_x20 = &uStack_60;
            iVar4 = skb_copy_bits(arg1,0,&uStack_60,0x14);
            if (-1 < iVar4) goto code_r0x08007380;
        }
    }
    else {
        unaff_x20 = *(arg1 + 0xd8);
        if (unaff_x20 != NULL) {
code_r0x08007380:
            iVar5 = dev_get_by_name_rcu(init_net,obj.DATARMNET30500ba48c.llvm.8155310952281713815);
            if (iVar5 == 0) {
                uVar9 = 5;
            }
            else {
                *(arg1 + 0x10) = iVar5;
                uStack_90 = *(unaff_x20 + 0xc);
                unaff_x20 = &uStack_b8;
                uStack_b8 = CONCAT44(uStack_b8._4_4_,*(iVar5 + 0xd0));
                uStack_b0 = CONCAT17(2,uStack_b0);
                uVar6 = ip_route_output_flow(init_net,&uStack_b8,0);
                if (uVar6 < 0xfffffffffffff001) {
                    pcVar8 = *(*(uVar6 + 8) + 0x68);
                    __cfi_slowpath_diag(0xaeb85a2ea453237c,pcVar8,0x8000710);
                    unaff_x20 = (*pcVar8)(uVar6,0,&uStack_90 + 4);
                    dst_release(uVar6);
                    if ((unaff_x20 < 0xfffffffffffff001) && (unaff_x20 != NULL)) {
                        if ((*(unaff_x20 + 0x168) == *(arg1 + 0x10)) && (*(*(unaff_x20 + 0x168) + 0x220) != 0)) {
                            uVar6 = neigh_resolve_output(unaff_x20,arg1);
                            arg1 = uVar6 & 0xffffffff;
                            sym.neigh_release(unaff_x20);
                            sym.DATARMNET17f6bc1be5(((uVar6 & 0xfffffffd) != 0) << 1);
                            goto code_r0x08007d54;
                        }
                        sym.DATARMNET17f6bc1be5(8);
                        pcVar8 = unaff_x20 + 0x30;
                        goto code_r0x08007ddc;
                    }
                    uVar9 = 7;
                }
                else {
                    uVar9 = 6;
                }
            }
            goto code_r0x08007d48;
        }
    }
code_r0x08007ccc:
    uVar9 = 0x12;
code_r0x08007d48:
    sym.DATARMNET17f6bc1be5(uVar9);
    while( true ) {
        kfree_skb(arg1);
code_r0x08007d54:
        uVar7 = 0;
        unaff_x19 = arg1;
code_r0x08007d58:
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_38) break;
        pcVar8 = __stack_chk_fail(uVar7);
        arg1 = unaff_x19;
code_r0x08007ddc:
        Hint_Prefetch(pcVar8,2,0,1);
        do {
            iVar4 = *pcVar8;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar3) {
                *pcVar8 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
code_r0x08007914:
            neigh_destroy(unaff_x20);
        }
        else {
code_r0x08007e04:
            if (iVar4 < 1) {
                refcount_warn_saturate(pcVar8,3);
            }
        }
    }
    return;
}


// ===== sym.neigh_release @ 0x08007e48 (size 148) =====

void sym.neigh_release(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x30;
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
        neigh_destroy(arg1);
    }
    else if (iVar2 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.dst_output @ 0x08007edc (size 108) =====

void sym.dst_output(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *((*(arg1 + 0x58) & 0xfffffffffffffffe) + 0x30);
    __cfi_slowpath_diag(0x7fbf3eec1d6e801c,pcVar1,0x8000730);
    (*pcVar1)(init_net,0,arg1);
    return;
}


// ===== sym.init_module @ 0x080080f4 (size 264) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800090b,"");
    iVar1 = genl_register_family(obj.DATARMNET61e8f41aae);
    if (iVar1 == 0) {
        iVar1 = sym.DATARMNET9f106ed933();
        if (iVar1 == 0) {
            iVar1 = sym.DATARMNET49c2c17e77();
            if (iVar1 == 0) {
                _rmnet_wlan_ll_tuple_hook = sym.DATARMNET6f73df41cd.cfi_jt;
                rmnet_module_hook_register(obj.DATARMNETd0b5ecd937.llvm.1624286943187993109,1);
                _printk(0x80007d8,"");
                return 0;
            }
            _printk(0x80007fa,"",iVar1);
            sym.DATARMNETf56cbaa2b1();
        }
        else {
            _printk(0x80007a9,"",iVar1);
        }
        genl_unregister_family(obj.DATARMNET61e8f41aae);
    }
    else {
        _printk(0x8000a12,"",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x080081fc (size 176) =====

void sym.cleanup_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80009e2,"DATARMNET7a381832d5");
    iVar1 = sym.DATARMNETf56cbaa2b1();
    if (iVar1 != 0) {
        _printk(0x8000952,"DATARMNET7a381832d5",iVar1);
    }
    sym.DATARMNETbb4efa5b3d.llvm.8155310952281713815();
    iVar1 = genl_unregister_family(obj.DATARMNET61e8f41aae);
    if (iVar1 != 0) {
        _printk(0x8000750,"DATARMNET7a381832d5",iVar1);
    }
    _android_kmalloc_64_create = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNETd0b5ecd937.llvm.1624286943187993109,1);
    synchronize_rcu();
    _printk(0x800092c,"DATARMNET7a381832d5");
    return;
}

