// decompiled from hwid by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 260) =====

//WARNING: Switch with 1 destination removed at 0x080013f8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 != -0x5f96a39c4f74776d) {
            if ((arg1 == -0xec78b8726b9c1e8) && ((pcVar1 + -0x8001168 >> 3 | pcVar1 << 0x3d) < 4)) {
                return;
            }
            goto code_r0x080013b8;
        }
        pcVar2 = sym.product_name_get.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x6e9810b85546f85e) {
            if ((pcVar1 + -0x8001128 >> 3 | pcVar1 << 0x3d) < 8) {
                return;
            }
            goto code_r0x080013b8;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080013b8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080013b8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800140c);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001110 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.hwid_value);
        kobject_del(_segment.ehdr);
    }
    _printk(0x80002cd);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001118 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kobject_create_and_add("hwid",0);
    if (_segment.ehdr == 0) {
        _printk(0x800029d);
        iVar1 = -0xc;
    }
    else {
        iVar1 = sysfs_create_group(_segment.ehdr,obj.hwid_value);
        if (iVar1 != 0) {
            _printk(0x80001f3);
        }
        kobject_del(_segment.ehdr);
    }
    return iVar1;
}


// ===== sym.product_name_get.cfi_jt @ 0x08001120 (size 8) =====

char * sym.product_name_get.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = socinfo_get_id();
    if (iVar1 == 0x1c9) {
        if (0xb < _segment.ehdr - 1U) goto code_r0x080011fc;
        iVar2 = 0x8000340;
    }
    else {
        if ((iVar1 != 0x207) || (7 < _segment.ehdr - 1U)) {
code_r0x080011fc:
            return "unknown";
        }
        iVar2 = 0x8000300;
    }
    return *(iVar2 + (_segment.ehdr + -1) * 8);
}


// ===== sym.get_hw_id_value.cfi_jt @ 0x08001128 (size 8) =====

uint sym.get_hw_id_value.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_country_version.cfi_jt @ 0x08001130 (size 8) =====

uint32_t sym.get_hw_country_version.cfi_jt(void)

{
    return _segment.ehdr >> 0x14;
}


// ===== sym.get_hw_version_major.cfi_jt @ 0x08001138 (size 8) =====

ushort sym.get_hw_version_major.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_version_minor.cfi_jt @ 0x08001140 (size 8) =====

ushort sym.get_hw_version_minor.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_project_adc.cfi_jt @ 0x08001148 (size 8) =====

uint sym.get_hw_project_adc.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_version_platform.cfi_jt @ 0x08001150 (size 8) =====

uint sym.get_hw_version_platform.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_build_adc.cfi_jt @ 0x08001158 (size 8) =====

uint sym.get_hw_build_adc.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_version_build.cfi_jt @ 0x08001160 (size 8) =====

uint16_t sym.get_hw_version_build.cfi_jt(void)

{
    return _segment.ehdr & 0xf;
}


// ===== sym.hwid_project_show.abf5ad15fb2e6c59f40a491beb73def2.cfi_jt @ 0x08001168 (size 8) =====

int64_t sym.hwid_project_show.abf5ad15fb2e6c59f40a491beb73def2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"0x%x\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.hwid_build_adc_show.abf5ad15fb2e6c59f40a491beb73def2.cfi_jt @ 0x08001170 (size 8) =====

int64_t sym.hwid_build_adc_show.abf5ad15fb2e6c59f40a491beb73def2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x800023e,_segment.ehdr);
    return iVar1;
}


// ===== sym.hwid_value_show.abf5ad15fb2e6c59f40a491beb73def2.cfi_jt @ 0x08001178 (size 8) =====

int64_t sym.hwid_value_show.abf5ad15fb2e6c59f40a491beb73def2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"0x%x\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.hwid_project_adc_show.abf5ad15fb2e6c59f40a491beb73def2.cfi_jt @ 0x08001180 (size 8) =====

int64_t sym.hwid_project_adc_show.abf5ad15fb2e6c59f40a491beb73def2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,0x800023e,_segment.ehdr);
    return iVar1;
}


// ===== sym.product_name_get @ 0x08001188 (size 132) =====

char * sym.product_name_get(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = socinfo_get_id();
    if (iVar1 == 0x1c9) {
        if (0xb < _segment.ehdr - 1U) goto code_r0x080011fc;
        iVar2 = 0x8000340;
    }
    else {
        if ((iVar1 != 0x207) || (7 < _segment.ehdr - 1U)) {
code_r0x080011fc:
            return "unknown";
        }
        iVar2 = 0x8000300;
    }
    return *(iVar2 + (_segment.ehdr + -1) * 8);
}


// ===== sym.get_hw_project_adc @ 0x0800120c (size 20) =====

uint sym.get_hw_project_adc(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_build_adc @ 0x08001220 (size 20) =====

uint sym.get_hw_build_adc(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_version_platform @ 0x08001234 (size 20) =====

uint sym.get_hw_version_platform(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_id_value @ 0x08001248 (size 20) =====

uint sym.get_hw_id_value(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_country_version @ 0x0800125c (size 24) =====

uint32_t sym.get_hw_country_version(void)

{
    return _segment.ehdr >> 0x14;
}


// ===== sym.get_hw_version_major @ 0x08001274 (size 20) =====

ushort sym.get_hw_version_major(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_version_minor @ 0x08001288 (size 20) =====

ushort sym.get_hw_version_minor(void)

{
    return _segment.ehdr;
}


// ===== sym.get_hw_version_build @ 0x0800129c (size 24) =====

uint16_t sym.get_hw_version_build(void)

{
    return _segment.ehdr & 0xf;
}


// ===== sym.hwid_project_show @ 0x080012b4 (size 64) =====

int64_t sym.hwid_project_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,"0x%x\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.hwid_value_show @ 0x080012f4 (size 64) =====

int64_t sym.hwid_value_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,"0x%x\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.hwid_project_adc_show @ 0x08001334 (size 64) =====

int64_t sym.hwid_project_adc_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800023e,_segment.ehdr);
    return iVar1;
}


// ===== sym.hwid_build_adc_show @ 0x08001374 (size 64) =====

int64_t sym.hwid_build_adc_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,0x800023e,_segment.ehdr);
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x080013b4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080013f8

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x800140c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080014c8 (size 136) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kobject_create_and_add("hwid",0);
    if (_segment.ehdr == 0) {
        _printk(0x800029d);
        iVar1 = -0xc;
    }
    else {
        iVar1 = sysfs_create_group(_segment.ehdr,obj.hwid_value);
        if (iVar1 != 0) {
            _printk(0x80001f3);
        }
        kobject_del(_segment.ehdr);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001550 (size 84) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.hwid_value);
        kobject_del(_segment.ehdr);
    }
    _printk(0x80002cd);
    return;
}

