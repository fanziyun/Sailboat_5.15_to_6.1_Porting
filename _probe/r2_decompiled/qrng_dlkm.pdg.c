// decompiled from qrng_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 344) =====

//WARNING: Switch with 1 destination removed at 0x08001adc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x890743871a4a53) {
        if (arg1 == -0x69b3be4cde39b9a8) {
            pcVar2 = sym.qrng_get_random.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != -0x6204eaac9ba77693) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8001190 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08001a9c;
            }
            pcVar2 = sym.qrng_reset.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x7530fdcfaa9f417d) {
        if (arg1 == -0x890743871a4a53) {
            pcVar2 = sym.msm_rng_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001a9c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x7530fdcfaa9f417d) {
        pcVar2 = sym.msm_rng_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001a9c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001a9c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001af0);
    (*pcVar1)();
}


// ===== sym.msm_rng_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

int64_t sym.msm_rng_ioctl.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0x10001) {
        iVar1 = icc_set_bw(_segment.ehdr,0,0);
        if (iVar1 != 0) {
            _printk(0x80004fc,iVar1);
            return iVar1;
        }
    }
    else {
        _printk(0x800069c);
    }
    return 0;
}


// ===== sym.msm_rng_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001168 (size 8) =====

void sym.msm_rng_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.msm_rng_direct_read(*(param_1 + 0x30),param_2,param_3);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001170 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    crypto_unregister_rngs(reloc.qrng_get_random.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,1);
    platform_driver_unregister(reloc.msm_rng_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001178 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = 0;
    iVar1 = __platform_driver_register(reloc.msm_rng_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = crypto_register_rngs(reloc.qrng_get_random.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,1);
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8000571;
    }
    else {
        uVar2 = 0x8000596;
    }
    _printk(uVar2,"msm_rng_init",iVar1);
    return iVar1;
}


// ===== sym.qrng_get_random.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

uint sym.qrng_get_random.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    uint64_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t in_x3;
    uint32_t in_w4;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _printk(0x8000676,"qrng_get_random");
        uVar4 = 0xffffffed;
    }
    else if (in_x3 == 0) {
        _printk(0x800041c,"qrng_get_random");
        uVar4 = 0xffffffea;
    }
    else {
        puVar1 = sp_el0;
        if ((((*puVar1 >> 6 & 1) == 0) && ((*puVar1 & 1) == 0)) &&
           (iVar2 = mutex_lock_interruptible(obj.msm_rng_probe.__key), iVar2 == 0)) {
            uVar3 = sym.msm_rng_direct_read(_segment.ehdr,in_x3,in_w4);
            uVar4 = 0;
            if (uVar3 != in_w4) {
                uVar4 = 0xfffffff2;
            }
            mutex_unlock(obj.msm_rng_probe.__key);
        }
        else {
            _printk(0x8000658,"qrng_get_random");
            uVar4 = 0xfffffe00;
        }
    }
    return uVar4;
}


// ===== sym.qrng_reset.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.qrng_reset.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    return 0;
}


// ===== sym.msm_rng_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.msm_rng_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    __unregister_chrdev(0x100,0,0x100,"msm_rng");
    hwrng_unregister(obj.msm_rng);
    if (*(iVar1 + 0x10) != 0) {
        clk_put();
    }
    iounmap(*(iVar1 + 8));
    *(param_1 + 0xa8) = 0;
    if (*(iVar1 + 0x48) != 0) {
        icc_put();
    }
    kfree_sensitive(iVar1);
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.msm_rng_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

uint64_t sym.msm_rng_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = platform_get_resource(param_1,0x200,0);
    if (piVar5 == NULL) {
        _dev_err(param_1 + 0x10,"invalid address\n");
        piVar5 = 0xfffffff2;
        goto code_r0x080015c0;
    }
    piVar6 = kmem_cache_alloc_trace(_platform_get_resource,0xdc0,0x50);
    if (piVar6 == NULL) {
        piVar5 = 0xfffffff4;
        goto code_r0x080015c0;
    }
    uVar2 = 0x68000000000713;
    if (arm64_use_ng_mappings != 0x0) {
        uVar2 = 0x68000000000f13;
    }
    iVar7 = __ioremap(*piVar5,(piVar5[1] - *piVar5) + 1,uVar2);
    if (iVar7 == 0) {
        _dev_err(param_1 + 0x10,"ioremap failed\n");
        piVar5 = 0xfffffff4;
    }
    else {
        iVar9 = *(param_1 + 0x300);
        iVar1 = param_1 + 0x10;
        piVar6[1] = iVar7;
        if (iVar9 == 0) {
            if (piVar6[2] < 0xfffffffffffff001) goto code_r0x0800126c;
code_r0x08001474:
            _dev_err(iVar1,"failed to register clock source\n");
            piVar5 = 0xffffffed;
        }
        else {
            iVar7 = of_find_property(iVar9,"qcom,no-clock-support",0);
            if (iVar7 == 0) {
                uVar8 = clk_get(iVar1,"km_clk_src");
                piVar6[2] = uVar8;
                if (0xfffffffffffff000 < uVar8) goto code_r0x08001474;
            }
            else {
                piVar6[2] = 0;
            }
code_r0x0800126c:
            piVar10 = piVar6 + 2;
            iVar7 = *(param_1 + 0x300);
            *piVar6 = param_1;
            *(param_1 + 0xa8) = piVar6;
            if (iVar7 == 0) {
code_r0x080012bc:
                if ((piVar6[9] == 0) || (iVar3 = icc_set_bw(piVar6[9],0,30000), iVar3 == 0)) {
                    iVar7 = *piVar10;
                }
                else {
                    _printk(0x80004c5);
                    iVar7 = *piVar10;
                }
                if (iVar7 == 0) {
code_r0x080012f4:
                    uVar4 = sym.readl_relaxed(piVar6[1] + 0x104);
                    if ((uVar4 >> 1 & 1) == 0) {
                        uVar4 = sym.readl_relaxed(piVar6[1] + 0x100);
                        sym.writel_relaxed(uVar4 & 0xffff0000 | 0xdddd,piVar6[1] + 0x100);
                        DataSynchronizationBarrier(3,3,0);
                        uVar4 = sym.readl_relaxed(piVar6[1] + 0x104);
                        sym.writel_relaxed(uVar4 | 2,piVar6[1] + 0x104);
                        DataSynchronizationBarrier(3,3,0);
                    }
                    iVar7 = *piVar10;
                    if (iVar7 != 0) {
                        clk_disable(iVar7);
                        clk_unprepare(iVar7);
                    }
                    if ((piVar6[9] != 0) && (iVar3 = icc_set_bw(piVar6[9],0,0), iVar3 != 0)) {
                        _printk(0x80004c5);
                    }
code_r0x08001378:
                    __mutex_init(piVar6 + 3,"&msm_rng_dev->rng_lock",obj.msm_rng_probe.__key);
                    __mutex_init(obj.msm_rng_probe.__key,"&cached_rng_lock",obj.msm_rng_probe.__key);
                    *0x80003b0 = piVar6;
                    uVar4 = hwrng_register();
                    if (uVar4 == 0) {
                        uVar4 = __register_chrdev(0x100,0,0x100,"msm_rng",obj.msm_rng_fops);
                        if (uVar4 == 0) {
                            _segment.ehdr = __class_create(obj.__this_module,0x8000547,obj.msm_rng_probe.__key.16);
                            if (_segment.ehdr < 0xfffffffffffff001) {
                                piVar5 = device_create(_segment.ehdr,0,0x10000000,0,0x8000547);
                                if (piVar5 < 0xfffffffffffff001) {
                                    cdev_init(obj.msm_rng_cdev,obj.msm_rng_fops);
                                    piVar5 = NULL;
                                    _segment.ehdr = piVar6;
                                    goto code_r0x080015c0;
                                }
                                _printk(0x8000437);
                                class_destroy(_segment.ehdr);
                            }
                            else {
                                _printk(0x80004ae);
                                piVar5 = _segment.ehdr;
                            }
                            __unregister_chrdev(0x100,0,0x100,"msm_rng");
                        }
                        else {
                            piVar5 = uVar4;
                            _dev_err(iVar1,"failed to register chrdev\n");
                        }
                        hwrng_unregister(obj.msm_rng);
                    }
                    else {
                        piVar5 = uVar4;
                        _dev_err(iVar1,"failed to register hwrng\n");
                    }
                    if (piVar6[9] != 0) {
                        icc_put();
                    }
                }
                else {
                    iVar3 = clk_prepare(iVar7);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar7);
                        if (iVar3 == 0) goto code_r0x080012f4;
                        clk_unprepare(iVar7);
                    }
                    _dev_err(*piVar6 + 0x10,"failed to enable clock in probe\n");
                    piVar5 = 0xffffffff;
                }
            }
            else {
                piVar5 = of_icc_get(iVar1,"data_path");
                piVar6[9] = piVar5;
                _segment.ehdr = piVar5;
                if (piVar5 < 0xfffffffffffff001) {
                    if ((*(param_1 + 0x300) == 0) ||
                       (iVar7 = of_find_property(*(param_1 + 0x300),"qcom,no-qrng-config",0), iVar7 == 0))
                    goto code_r0x080012bc;
                    goto code_r0x08001378;
                }
                _dev_err(iVar1,"get icc path err %d\n",piVar5 & 0xffffffff);
                piVar5 = piVar5 & 0xffffffff;
            }
            if (*piVar10 != 0) {
                clk_put();
            }
        }
        iounmap(piVar6[1]);
    }
    kfree_sensitive(piVar6);
code_r0x080015c0:
    return piVar5 & 0xffffffff;
}


// ===== sym.msm_rng_probe @ 0x080011a0 (size 1104) =====

uint64_t sym.msm_rng_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = platform_get_resource(arg1,0x200,0);
    if (piVar5 == NULL) {
        _dev_err(arg1 + 0x10,"invalid address\n");
        piVar5 = 0xfffffff2;
        goto code_r0x080015c0;
    }
    piVar6 = kmem_cache_alloc_trace(_platform_get_resource,0xdc0,0x50);
    if (piVar6 == NULL) {
        piVar5 = 0xfffffff4;
        goto code_r0x080015c0;
    }
    uVar2 = 0x68000000000713;
    if (arm64_use_ng_mappings != 0x0) {
        uVar2 = 0x68000000000f13;
    }
    iVar7 = __ioremap(*piVar5,(piVar5[1] - *piVar5) + 1,uVar2);
    if (iVar7 == 0) {
        _dev_err(arg1 + 0x10,"ioremap failed\n");
        piVar5 = 0xfffffff4;
    }
    else {
        iVar9 = *(arg1 + 0x300);
        iVar1 = arg1 + 0x10;
        piVar6[1] = iVar7;
        if (iVar9 == 0) {
            if (piVar6[2] < 0xfffffffffffff001) goto code_r0x0800126c;
code_r0x08001474:
            _dev_err(iVar1,"failed to register clock source\n");
            piVar5 = 0xffffffed;
        }
        else {
            iVar7 = of_find_property(iVar9,"qcom,no-clock-support",0);
            if (iVar7 == 0) {
                uVar8 = clk_get(iVar1,"km_clk_src");
                piVar6[2] = uVar8;
                if (0xfffffffffffff000 < uVar8) goto code_r0x08001474;
            }
            else {
                piVar6[2] = 0;
            }
code_r0x0800126c:
            piVar10 = piVar6 + 2;
            iVar7 = *(arg1 + 0x300);
            *piVar6 = arg1;
            *(arg1 + 0xa8) = piVar6;
            if (iVar7 == 0) {
code_r0x080012bc:
                if ((piVar6[9] == 0) || (iVar3 = icc_set_bw(piVar6[9],0,30000), iVar3 == 0)) {
                    iVar7 = *piVar10;
                }
                else {
                    _printk(0x80004c5);
                    iVar7 = *piVar10;
                }
                if (iVar7 == 0) {
code_r0x080012f4:
                    uVar4 = sym.readl_relaxed(piVar6[1] + 0x104);
                    if ((uVar4 >> 1 & 1) == 0) {
                        uVar4 = sym.readl_relaxed(piVar6[1] + 0x100);
                        sym.writel_relaxed(uVar4 & 0xffff0000 | 0xdddd,piVar6[1] + 0x100);
                        DataSynchronizationBarrier(3,3,0);
                        uVar4 = sym.readl_relaxed(piVar6[1] + 0x104);
                        sym.writel_relaxed(uVar4 | 2,piVar6[1] + 0x104);
                        DataSynchronizationBarrier(3,3,0);
                    }
                    iVar7 = *piVar10;
                    if (iVar7 != 0) {
                        clk_disable(iVar7);
                        clk_unprepare(iVar7);
                    }
                    if ((piVar6[9] != 0) && (iVar3 = icc_set_bw(piVar6[9],0,0), iVar3 != 0)) {
                        _printk(0x80004c5);
                    }
code_r0x08001378:
                    __mutex_init(piVar6 + 3,"&msm_rng_dev->rng_lock",obj.msm_rng_probe.__key);
                    __mutex_init(obj.msm_rng_probe.__key,"&cached_rng_lock",obj.msm_rng_probe.__key);
                    *0x80003b0 = piVar6;
                    uVar4 = hwrng_register();
                    if (uVar4 == 0) {
                        uVar4 = __register_chrdev(0x100,0,0x100,"msm_rng",obj.msm_rng_fops);
                        if (uVar4 == 0) {
                            _segment.ehdr = __class_create(obj.__this_module,0x8000547,obj.msm_rng_probe.__key.16);
                            if (_segment.ehdr < 0xfffffffffffff001) {
                                piVar5 = device_create(_segment.ehdr,0,0x10000000,0,0x8000547);
                                if (piVar5 < 0xfffffffffffff001) {
                                    cdev_init(obj.msm_rng_cdev,obj.msm_rng_fops);
                                    piVar5 = NULL;
                                    _segment.ehdr = piVar6;
                                    goto code_r0x080015c0;
                                }
                                _printk(0x8000437);
                                class_destroy(_segment.ehdr);
                            }
                            else {
                                _printk(0x80004ae);
                                piVar5 = _segment.ehdr;
                            }
                            __unregister_chrdev(0x100,0,0x100,"msm_rng");
                        }
                        else {
                            piVar5 = uVar4;
                            _dev_err(iVar1,"failed to register chrdev\n");
                        }
                        hwrng_unregister(obj.msm_rng);
                    }
                    else {
                        piVar5 = uVar4;
                        _dev_err(iVar1,"failed to register hwrng\n");
                    }
                    if (piVar6[9] != 0) {
                        icc_put();
                    }
                }
                else {
                    iVar3 = clk_prepare(iVar7);
                    if (iVar3 == 0) {
                        iVar3 = clk_enable(iVar7);
                        if (iVar3 == 0) goto code_r0x080012f4;
                        clk_unprepare(iVar7);
                    }
                    _dev_err(*piVar6 + 0x10,"failed to enable clock in probe\n");
                    piVar5 = 0xffffffff;
                }
            }
            else {
                piVar5 = of_icc_get(iVar1,"data_path");
                piVar6[9] = piVar5;
                _segment.ehdr = piVar5;
                if (piVar5 < 0xfffffffffffff001) {
                    if ((*(arg1 + 0x300) == 0) ||
                       (iVar7 = of_find_property(*(arg1 + 0x300),"qcom,no-qrng-config",0), iVar7 == 0))
                    goto code_r0x080012bc;
                    goto code_r0x08001378;
                }
                _dev_err(iVar1,"get icc path err %d\n",piVar5 & 0xffffffff);
                piVar5 = piVar5 & 0xffffffff;
            }
            if (*piVar10 != 0) {
                clk_put();
            }
        }
        iounmap(piVar6[1]);
    }
    kfree_sensitive(piVar6);
code_r0x080015c0:
    return piVar5 & 0xffffffff;
}


// ===== sym.msm_rng_remove @ 0x080015f0 (size 140) =====

ulong sym.msm_rng_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    __unregister_chrdev(0x100,0,0x100,"msm_rng");
    hwrng_unregister(obj.msm_rng);
    if (*(iVar1 + 0x10) != 0) {
        clk_put();
    }
    iounmap(*(iVar1 + 8));
    *(arg1 + 0xa8) = 0;
    if (*(iVar1 + 0x48) != 0) {
        icc_put();
    }
    kfree_sensitive(iVar1);
    _segment.ehdr = 0;
    return 0;
}


// ===== sym.readl_relaxed @ 0x0800167c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001680);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80016b4);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x080016ec (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001708);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001730);
    return;
}


// ===== sym.msm_rng_read @ 0x08001764 (size 40) =====

void sym.msm_rng_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.msm_rng_direct_read(*(arg1 + 0x30),arg2,arg3);
    return;
}


// ===== sym.msm_rng_direct_read @ 0x0800178c (size 404) =====

uint64_t sym.msm_rng_direct_read(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    uVar4 = arg3;
    *in_x18 = unaff_x30;
    if (uVar4 < 4) {
        uVar5 = 0;
        goto code_r0x080018b4;
    }
    iVar7 = *(arg1 + 8);
    mutex_lock(arg1 + 0x18);
    if ((*(arg1 + 0x48) == 0) || (iVar1 = icc_set_bw(*(arg1 + 0x48),0,300000), iVar1 == 0)) {
        iVar6 = *(arg1 + 0x10);
        if (iVar6 == 0) {
code_r0x08001814:
            iVar1 = 0;
            uVar5 = 0;
            do {
                while (uVar3 = sym.readl_relaxed(iVar7 + 4), (uVar3 & 1) != 0) {
                    uVar2 = sym.readl_relaxed(iVar7);
                    uVar5 = uVar5 + 4;
                    *arg2 = uVar2;
                    if ((uVar4 - uVar5 < 4) || (arg2 = arg2 + 4, uVar4 <= uVar5)) goto code_r0x0800187c;
                }
                if (iVar1 == 5) {
                    if (uVar5 == 0) {
                        _printk(0x80005fb);
                        iVar7 = *(arg1 + 0x10);
                        if (iVar7 == 0) goto code_r0x08001894;
                        goto code_r0x08001884;
                    }
                    break;
                }
                iVar1 = iVar1 + 1;
                __const_udelay(0x1cd608);
            } while (uVar5 < uVar4);
code_r0x0800187c:
            iVar7 = *(arg1 + 0x10);
            if (iVar7 != 0) {
code_r0x08001884:
                clk_disable(iVar7);
                clk_unprepare(iVar7);
            }
        }
        else {
            iVar1 = clk_prepare(iVar6);
            if (iVar1 == 0) {
                iVar1 = clk_enable(iVar6);
                if (iVar1 == 0) goto code_r0x08001814;
                clk_unprepare(iVar6);
            }
            _printk(0x800044f);
            uVar5 = 0;
        }
code_r0x08001894:
        if ((*(arg1 + 0x48) != 0) && (iVar1 = icc_set_bw(*(arg1 + 0x48),0,0), iVar1 != 0)) goto code_r0x080018dc;
    }
    else {
        uVar5 = 0;
code_r0x080018dc:
        _printk(0x80004c5);
    }
    mutex_unlock(arg1 + 0x18);
code_r0x080018b4:
    return uVar5 & 0xffffffff;
}


// ===== sym.msm_rng_ioctl @ 0x08001920 (size 124) =====

int64_t sym.msm_rng_ioctl(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0x10001) {
        iVar1 = icc_set_bw(_segment.ehdr,0,0);
        if (iVar1 != 0) {
            _printk(0x80004fc,iVar1);
            return iVar1;
        }
    }
    else {
        _printk(0x800069c);
    }
    return 0;
}


// ===== sym.qrng_get_random @ 0x0800199c (size 236) =====

uint sym.qrng_get_random(int64_t arg1)

{
    uint64_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t in_w4;
    uint uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _printk(0x8000676,"qrng_get_random");
        uVar4 = 0xffffffed;
    }
    else if (arg1 == 0) {
        _printk(0x800041c,"qrng_get_random");
        uVar4 = 0xffffffea;
    }
    else {
        puVar1 = sp_el0;
        if ((((*puVar1 >> 6 & 1) == 0) && ((*puVar1 & 1) == 0)) &&
           (iVar2 = mutex_lock_interruptible(obj.msm_rng_probe.__key), iVar2 == 0)) {
            uVar3 = sym.msm_rng_direct_read(_segment.ehdr,arg1,in_w4);
            uVar4 = 0;
            if (uVar3 != in_w4) {
                uVar4 = 0xfffffff2;
            }
            mutex_unlock(obj.msm_rng_probe.__key);
        }
        else {
            _printk(0x8000658,"qrng_get_random");
            uVar4 = 0xfffffe00;
        }
    }
    return uVar4;
}


// ===== sym.qrng_reset @ 0x08001a88 (size 16) =====

ulong sym.qrng_reset(int64_t arg1)

{
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001a98 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001adc

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
    //switch table (4 cases) at 0x80003f8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001af0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001af4 (size 144) =====

int sym.init_module(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = 0;
    iVar1 = __platform_driver_register(reloc.msm_rng_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = crypto_register_rngs(reloc.qrng_get_random.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,1);
        if (iVar1 == 0) {
            return 0;
        }
        uVar2 = 0x8000571;
    }
    else {
        uVar2 = 0x8000596;
    }
    _printk(uVar2,"msm_rng_init",iVar1);
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001b84 (size 60) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    crypto_unregister_rngs(reloc.qrng_get_random.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,1);
    platform_driver_unregister(reloc.msm_rng_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

