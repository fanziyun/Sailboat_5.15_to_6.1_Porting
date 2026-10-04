// decompiled from crypto-qti-common by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x08001bac

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x5dac70aeb2c2f53c) {
        if (arg1 == -0x686df4c2ac369e2b) {
            pcVar2 = sym.crypto_qti_keyslot_evict.cfi_jt;
        }
        else if (arg1 == -0x2969cde9f0ceb5b3) {
            pcVar2 = sym.crypto_qti_derive_raw_secret.cfi_jt;
        }
        else {
            if (arg1 != -0x22f6417dd537eb23) goto code_r0x08001b6c;
            pcVar2 = sym.crypto_qti_debug.cfi_jt;
        }
    }
    else if (arg1 == 0x5dac70aeb2c2f53c) {
        pcVar2 = sym.crypto_qti_keyslot_program.cfi_jt;
    }
    else {
        if (arg1 == 0x641d19c7be126e92) {
            if ((pcVar1 + -0x8001140 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001b6c;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001b6c;
        pcVar2 = sym.crypto_qti_disable.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001b6c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001bc0);
    (*pcVar1)();
}


// ===== sym.crypto_qti_disable.cfi_jt @ 0x08001120 (size 8) =====

void sym.crypto_qti_disable.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    crypto_qti_disable_platform();
    return;
}


// ===== sym.crypto_qti_keyslot_program.cfi_jt @ 0x08001128 (size 8) =====

int sym.crypto_qti_keyslot_program.cfi_jt(ulong param_1,ulong param_2,uint param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = crypto_qti_program_key();
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        _printk(0x800085e,"crypto_qti_keyslot_program",iVar1);
        iVar1 = crypto_qti_invalidate_key(param_1,param_3);
        if (iVar1 != 0) {
            _printk(0x8000337,"crypto_qti_keyslot_program",iVar1);
        }
    }
    return iVar1;
}


// ===== sym.crypto_qti_debug.cfi_jt @ 0x08001130 (size 8) =====

ulong sym.crypto_qti_debug.cfi_jt(int64_t *param_1)

{
    uint uVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t arg1;
    int iVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_1;
    uVar1 = sym.readl_relaxed(arg1);
    uVar2 = sym.readl_relaxed(arg1 + 4);
    _printk(0x800029f,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 8);
    uVar2 = sym.readl_relaxed(arg1 + 0x10);
    _printk(0x80008b5,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x14);
    uVar2 = sym.readl_relaxed(arg1 + 0x18);
    _printk(0x8000307,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1c);
    uVar2 = sym.readl_relaxed(arg1 + 0x20);
    _printk(0x800079a,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x24);
    uVar2 = sym.readl_relaxed(arg1 + 0x40);
    _printk(0x8000560,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x44);
    uVar2 = sym.readl_relaxed(arg1 + 0x48);
    _printk(0x800052e,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x30);
    _printk(0x8000835,uVar1);
    uVar1 = sym.readl_relaxed(arg1 + 0x70);
    uVar2 = sym.readl_relaxed(arg1 + 0x74);
    _printk(0x80005a9,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1000);
    uVar2 = sym.readl_relaxed(arg1 + 0x1004);
    _printk(0x800073d,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x50);
    uVar2 = sym.readl_relaxed(arg1 + 0x54);
    _printk(0x80005df,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x58);
    uVar2 = sym.readl_relaxed(arg1 + 0x5c);
    _printk(0x800010e,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1100);
    uVar2 = sym.readl_relaxed(arg1 + 0x1104);
    _printk(0x8000362,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1108);
    uVar2 = sym.readl_relaxed(arg1 + 0x110c);
    _printk(0x80001e8,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1200);
    uVar2 = sym.readl_relaxed(arg1 + 0x1204);
    _printk(0x8000225,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1208);
    uVar2 = sym.readl_relaxed(arg1 + 0x120c);
    _printk(0x800014d,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1110);
    uVar2 = sym.readl_relaxed(arg1 + 0x1114);
    _printk(0x80006e5,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1118);
    uVar2 = sym.readl_relaxed(arg1 + 0x111c);
    _printk(0x80000d1,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1120);
    uVar2 = sym.readl_relaxed(arg1 + 0x1124);
    _printk(0x800039f,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1128);
    uVar2 = sym.readl_relaxed(arg1 + 0x112c);
    _printk(0x80003dc,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1130);
    uVar2 = sym.readl_relaxed(arg1 + 0x1134);
    _printk(0x80002ca,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1210);
    uVar2 = sym.readl_relaxed(arg1 + 0x1214);
    _printk(0x8000438,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1218);
    uVar2 = sym.readl_relaxed(arg1 + 0x121c);
    _printk(0x800066b,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1220);
    uVar2 = sym.readl_relaxed(arg1 + 0x1224);
    _printk(0x80007ca,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1228);
    uVar2 = sym.readl_relaxed(arg1 + 0x122c);
    _printk(0x8000262,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1230);
    uVar2 = sym.readl_relaxed(arg1 + 0x1234);
    _printk(0x800018a,uVar1,uVar2);
    _printk(0x80004dd);
    iVar3 = 0x10;
    uVar4 = 1;
    do {
        if (iVar3 != 3) {
            sym.writel_relaxed(uVar4,arg1 + 0x1010);
            DataSynchronizationBarrier(3,2,0);
            uVar1 = sym.readl_relaxed(arg1 + 0x1014);
            _printk(0x80004f3,uVar4,uVar1);
        }
        iVar3 = iVar3 + -1;
        uVar4 = uVar4 + 0x10000000;
    } while (iVar3 != 0);
    _printk(0x80004a7);
    uVar4 = 0;
    do {
        sym.writel_relaxed(uVar4 | 0xd0000001,arg1 + 0x1010);
        DataSynchronizationBarrier(3,2,0);
        uVar1 = sym.readl_relaxed(arg1 + 0x1014);
        _printk(0x80004f3,uVar4 | 0xd0000001,uVar1);
        uVar4 = uVar4 + 0x10000;
    } while (uVar4 != 0x100000);
    return 0;
}


// ===== sym.crypto_qti_derive_raw_secret.cfi_jt @ 0x08001138 (size 8) =====

ulong sym.crypto_qti_derive_raw_secret.cfi_jt(ulong *param_1,uint32_t param_2,ulong *param_3,uint32_t param_4)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 < 0x21) {
        uVar3 = 0x800061e;
    }
    else {
        if (param_4 == 0x20) {
            if (0x40 < param_2) {
                uVar3 = crypto_qti_derive_raw_secret_platform(param_1,param_2,param_3,0x20);
                return uVar3;
            }
            uVar1 = param_1[3];
            uVar3 = *param_1;
            uVar2 = param_1[1];
            param_3[2] = param_1[2];
            param_3[3] = uVar1;
            *param_3 = uVar3;
            param_3[1] = uVar2;
            return 0;
        }
        uVar3 = 0x8000419;
        param_2 = param_4;
    }
    _printk(uVar3,"crypto_qti_derive_raw_secret",param_2);
    return 0xffffffea;
}


// ===== sym.crypto_qti_init_crypto.cfi_jt @ 0x08001140 (size 8) =====

uint sym.crypto_qti_init_crypto.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(param_1 + 8);
    uVar4 = uVar1 >> 0x18 & 0xff;
    if (uVar4 < 3) {
        _printk(0x8000886,"ice_check_version",param_1,uVar4,uVar1 >> 0x10 & 0xff,uVar1 & 0xffff);
        uVar2 = 0x80006c1;
        uVar3 = 0xffffffed;
        uVar5 = 0xffffffed;
    }
    else {
        uVar1 = sym.readl_relaxed(param_1 + 8);
        if ((((uVar1 >> 0x18 & 0xff) == 3) && ((uVar1 & 0xfe0000) != 0)) ||
           (uVar1 = sym.readl_relaxed(param_1 + 0x10), (uVar1 & 7) == 0)) {
            return 0;
        }
        _printk(0x8000807,"ice_check_fuse_setting");
        uVar2 = 0x80001c7;
        uVar3 = 0xffffffff;
        uVar5 = 0xffffffff;
    }
    _printk(uVar2,"crypto_qti_init_crypto",uVar3);
    return uVar5;
}


// ===== sym.crypto_qti_resume.cfi_jt @ 0x08001148 (size 8) =====

ulong sym.crypto_qti_resume.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 100;
    do {
        uVar1 = sym.readl_relaxed(param_1 + 0x70);
        if ((uVar1 >> 0x1c & 0xf) == 0) {
            if (uVar1 == 0) {
                return 0;
            }
            break;
        }
        __const_udelay(0x346de);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    _printk(0x8000773,"ice_wait_bist_status",uVar1 & 0xffffffff);
    return 0xffffff92;
}


// ===== sym.crypto_qti_enable.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.crypto_qti_enable.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(param_1 + 0x1000);
    sym.writel_relaxed(uVar1 | 0xd807100,param_1 + 0x1000);
    DataSynchronizationBarrier(3,2,0);
    iVar3 = 100;
    do {
        uVar2 = sym.readl_relaxed(param_1 + 0x70);
        if ((uVar2 >> 0x1c & 0xf) == 0) {
            if (uVar2 == 0) {
                return 0;
            }
            break;
        }
        __const_udelay(0x346de);
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    _printk(0x8000773,"ice_wait_bist_status",uVar2 & 0xffffffff);
    return 0xffffff92;
}


// ===== sym.crypto_qti_keyslot_evict.cfi_jt @ 0x08001158 (size 8) =====

int sym.crypto_qti_keyslot_evict.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = crypto_qti_invalidate_key();
    if (iVar1 != 0) {
        _printk(0x8000337,"crypto_qti_keyslot_evict",iVar1);
    }
    return iVar1;
}


// ===== sym.crypto_qti_init_crypto @ 0x08001160 (size 232) =====

uint sym.crypto_qti_init_crypto(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(arg1 + 8);
    uVar4 = uVar1 >> 0x18 & 0xff;
    if (uVar4 < 3) {
        _printk(0x8000886,"ice_check_version",arg1,uVar4,uVar1 >> 0x10 & 0xff,uVar1 & 0xffff);
        uVar2 = 0x80006c1;
        uVar3 = 0xffffffed;
        uVar5 = 0xffffffed;
    }
    else {
        uVar1 = sym.readl_relaxed(arg1 + 8);
        if ((((uVar1 >> 0x18 & 0xff) == 3) && ((uVar1 & 0xfe0000) != 0)) ||
           (uVar1 = sym.readl_relaxed(arg1 + 0x10), (uVar1 & 7) == 0)) {
            return 0;
        }
        _printk(0x8000807,"ice_check_fuse_setting");
        uVar2 = 0x80001c7;
        uVar3 = 0xffffffff;
        uVar5 = 0xffffffff;
    }
    _printk(uVar2,"crypto_qti_init_crypto",uVar3);
    return uVar5;
}


// ===== sym.crypto_qti_enable @ 0x08001248 (size 180) =====

ulong sym.crypto_qti_enable(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(arg1 + 0x1000);
    sym.writel_relaxed(uVar1 | 0xd807100,arg1 + 0x1000);
    DataSynchronizationBarrier(3,2,0);
    iVar3 = 100;
    do {
        uVar2 = sym.readl_relaxed(arg1 + 0x70);
        if ((uVar2 >> 0x1c & 0xf) == 0) {
            if (uVar2 == 0) {
                return 0;
            }
            break;
        }
        __const_udelay(0x346de);
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    _printk(0x8000773,"ice_wait_bist_status",uVar2 & 0xffffffff);
    return 0xffffff92;
}


// ===== sym.crypto_qti_disable @ 0x080012fc (size 36) =====

void sym.crypto_qti_disable(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    crypto_qti_disable_platform();
    return;
}


// ===== sym.crypto_qti_resume @ 0x08001320 (size 140) =====

ulong sym.crypto_qti_resume(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    int iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 100;
    do {
        uVar1 = sym.readl_relaxed(arg1 + 0x70);
        if ((uVar1 >> 0x1c & 0xf) == 0) {
            if (uVar1 == 0) {
                return 0;
            }
            break;
        }
        __const_udelay(0x346de);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    _printk(0x8000773,"ice_wait_bist_status",uVar1 & 0xffffffff);
    return 0xffffff92;
}


// ===== sym.crypto_qti_debug @ 0x080013ac (size 1364) =====

ulong sym.crypto_qti_debug(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    ulong *in_x18;
    int iVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *arg1;
    uVar1 = sym.readl_relaxed(arg1);
    uVar2 = sym.readl_relaxed(arg1 + 4);
    _printk(0x800029f,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 8);
    uVar2 = sym.readl_relaxed(arg1 + 0x10);
    _printk(0x80008b5,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x14);
    uVar2 = sym.readl_relaxed(arg1 + 0x18);
    _printk(0x8000307,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1c);
    uVar2 = sym.readl_relaxed(arg1 + 0x20);
    _printk(0x800079a,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x24);
    uVar2 = sym.readl_relaxed(arg1 + 0x40);
    _printk(0x8000560,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x44);
    uVar2 = sym.readl_relaxed(arg1 + 0x48);
    _printk(0x800052e,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x30);
    _printk(0x8000835,uVar1);
    uVar1 = sym.readl_relaxed(arg1 + 0x70);
    uVar2 = sym.readl_relaxed(arg1 + 0x74);
    _printk(0x80005a9,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1000);
    uVar2 = sym.readl_relaxed(arg1 + 0x1004);
    _printk(0x800073d,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x50);
    uVar2 = sym.readl_relaxed(arg1 + 0x54);
    _printk(0x80005df,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x58);
    uVar2 = sym.readl_relaxed(arg1 + 0x5c);
    _printk(0x800010e,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1100);
    uVar2 = sym.readl_relaxed(arg1 + 0x1104);
    _printk(0x8000362,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1108);
    uVar2 = sym.readl_relaxed(arg1 + 0x110c);
    _printk(0x80001e8,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1200);
    uVar2 = sym.readl_relaxed(arg1 + 0x1204);
    _printk(0x8000225,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1208);
    uVar2 = sym.readl_relaxed(arg1 + 0x120c);
    _printk(0x800014d,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1110);
    uVar2 = sym.readl_relaxed(arg1 + 0x1114);
    _printk(0x80006e5,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1118);
    uVar2 = sym.readl_relaxed(arg1 + 0x111c);
    _printk(0x80000d1,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1120);
    uVar2 = sym.readl_relaxed(arg1 + 0x1124);
    _printk(0x800039f,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1128);
    uVar2 = sym.readl_relaxed(arg1 + 0x112c);
    _printk(0x80003dc,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1130);
    uVar2 = sym.readl_relaxed(arg1 + 0x1134);
    _printk(0x80002ca,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1210);
    uVar2 = sym.readl_relaxed(arg1 + 0x1214);
    _printk(0x8000438,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1218);
    uVar2 = sym.readl_relaxed(arg1 + 0x121c);
    _printk(0x800066b,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1220);
    uVar2 = sym.readl_relaxed(arg1 + 0x1224);
    _printk(0x80007ca,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1228);
    uVar2 = sym.readl_relaxed(arg1 + 0x122c);
    _printk(0x8000262,uVar1,uVar2);
    uVar1 = sym.readl_relaxed(arg1 + 0x1230);
    uVar2 = sym.readl_relaxed(arg1 + 0x1234);
    _printk(0x800018a,uVar1,uVar2);
    _printk(0x80004dd);
    iVar3 = 0x10;
    uVar4 = 1;
    do {
        if (iVar3 != 3) {
            sym.writel_relaxed(uVar4,arg1 + 0x1010);
            DataSynchronizationBarrier(3,2,0);
            uVar1 = sym.readl_relaxed(arg1 + 0x1014);
            _printk(0x80004f3,uVar4,uVar1);
        }
        iVar3 = iVar3 + -1;
        uVar4 = uVar4 + 0x10000000;
    } while (iVar3 != 0);
    _printk(0x80004a7);
    uVar4 = 0;
    do {
        sym.writel_relaxed(uVar4 | 0xd0000001,arg1 + 0x1010);
        DataSynchronizationBarrier(3,2,0);
        uVar1 = sym.readl_relaxed(arg1 + 0x1014);
        _printk(0x80004f3,uVar4 | 0xd0000001,uVar1);
        uVar4 = uVar4 + 0x10000;
    } while (uVar4 != 0x100000);
    return 0;
}


// ===== sym.readl_relaxed @ 0x08001900 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001904);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001938);
    return uVar1;
}


// ===== sym.crypto_qti_keyslot_program @ 0x08001970 (size 140) =====

int sym.crypto_qti_keyslot_program(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = crypto_qti_program_key();
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        _printk(0x800085e,"crypto_qti_keyslot_program",iVar1);
        iVar1 = crypto_qti_invalidate_key(arg1,arg2 & 0xffffffff);
        if (iVar1 != 0) {
            _printk(0x8000337,"crypto_qti_keyslot_program",iVar1);
        }
    }
    return iVar1;
}


// ===== sym.crypto_qti_keyslot_evict @ 0x080019fc (size 84) =====

int sym.crypto_qti_keyslot_evict(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = crypto_qti_invalidate_key();
    if (iVar1 != 0) {
        _printk(0x8000337,"crypto_qti_keyslot_evict",iVar1);
    }
    return iVar1;
}


// ===== sym.crypto_qti_derive_raw_secret @ 0x08001a50 (size 160) =====

ulong sym.crypto_qti_derive_raw_secret(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 0x21) {
        uVar3 = 0x800061e;
        arg4 = arg2;
    }
    else {
        if (arg4 == 0x20) {
            if (0x40 < arg2) {
                uVar3 = crypto_qti_derive_raw_secret_platform(arg1,arg2,arg3,0x20);
                return uVar3;
            }
            uVar1 = *(arg1 + 0x18);
            uVar3 = *arg1;
            uVar2 = *(arg1 + 8);
            *(arg3 + 0x10) = *(arg1 + 0x10);
            *(arg3 + 0x18) = uVar1;
            *arg3 = uVar3;
            *(arg3 + 8) = uVar2;
            return 0;
        }
        uVar3 = 0x8000419;
    }
    _printk(uVar3,"crypto_qti_derive_raw_secret",arg4);
    return 0xffffffea;
}


// ===== sym.writel_relaxed @ 0x08001af0 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001b0c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001b34);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001b68 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001bac

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
    //switch table (4 cases) at 0x80000cc
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001bc0);
    (*pcVar1)();
}

