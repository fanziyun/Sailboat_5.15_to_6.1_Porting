// decompiled from socinfo by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 920) =====

//WARNING: Switch with 1 destination removed at 0x0800849c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x8dc801903aca538) {
        if (arg1 < -0x476f9bde2aa68eb4) {
            if (arg1 < -0x5f96a39c4f74776d) {
                if (arg1 != -0x7f478ca7407d4fba) {
                    if ((arg1 == -0x66d421a09845f9f8) && ((pcVar1 + -0x80044e8 >> 3 | pcVar1 << 0x3d) < 0x2e)) {
                        return;
                    }
                    goto code_r0x0800845c;
                }
                pcVar2 = sym.socinfo_get_partinfo_part_name.cfi_jt;
            }
            else if (arg1 == -0x5f96a39c4f74776d) {
                pcVar2 = sym.socinfo_get_id_string.cfi_jt;
            }
            else {
                if (arg1 != -0x59416fad0ff26bd2) goto code_r0x0800845c;
                pcVar2 = sym.socinfo_get_part_count.cfi_jt;
            }
        }
        else if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x476f9bde2aa68eb4) {
                pcVar2 = sym.socinfo_get_cluster_info.cfi_jt;
            }
            else {
                if (arg1 != -0x3db7f943f28066d7) goto code_r0x0800845c;
                pcVar2 = sym.soc_info_attribute.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.qcom_socinfo_probe.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt;
                goto code_r0x08004318;
            }
            if (arg1 == -0x13b6d53c10de995b) {
                pcVar2 = sym.socinfo_get_part_info.cfi_jt;
            }
            else {
                if (arg1 != -0xdcac3ab0f71f8e8) goto code_r0x0800845c;
                pcVar2 = sym.socinfo_get_subpart_info.cfi_jt;
            }
        }
    }
    else {
        if (arg1 < 0x321969b888d4949e) {
            if (arg1 < 0x7ff5a213d37b1a6) {
                if (arg1 == -0x8dc801903aca538) {
                    if ((pcVar1 + -0x8004498 >> 3 | pcVar1 << 0x3d) < 9) {
                        return;
                    }
                    goto code_r0x0800845c;
                }
                if (arg1 != 0x2b3a43e29242445) goto code_r0x0800845c;
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 == 0x7ff5a213d37b1a6) {
                    pcVar2 = sym.seq_read.cfi_jt;
                    goto code_r0x08004388;
                }
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x0800845c;
                pcVar2 = sym.msm_set_image_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x0800845c;
        }
        if (0x6e9810b85546f85d < arg1) {
            if (arg1 == 0x6e9810b85546f85e) {
                pcVar2 = sym.socinfo_get_serial_number.cfi_jt;
            }
            else {
                if (arg1 != 0x77c30cb837e57aa5) {
                    if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800845c;
                    pcVar2 = sym.cleanup_module.cfi_jt;
                    goto code_r0x08004388;
                }
                pcVar2 = sym.socinfo_get_partinfo_chip_id.cfi_jt;
            }
code_r0x08004318:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800845c;
        }
        if (arg1 != 0x321969b888d4949e) {
            if ((arg1 == 0x5233d5bc7887ae44) && ((pcVar1 + -0x8004430 >> 3 | pcVar1 << 0x3d) < 8)) {
                return;
            }
            goto code_r0x0800845c;
        }
        pcVar2 = sym.seq_lseek.cfi_jt;
    }
code_r0x08004388:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800845c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80084b0);
    (*pcVar1)();
}


// ===== sym.socinfo_get_part_count.cfi_jt @ 0x080043a0 (size 8) =====

ulong sym.socinfo_get_part_count.cfi_jt(int param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (0xffffffef < param_1 - 0x11U) {
        return 1;
    }
    *in_x18 = unaff_x30;
    _printk(0x8000a57);
    return 0xffffffea;
}


// ===== sym.seq_lseek.cfi_jt @ 0x080043a8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.socinfo_get_cluster_info.cfi_jt @ 0x080043b0 (size 8) =====

uint sym.socinfo_get_cluster_info.cfi_jt(int param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar1 != 0 && 0xd < _segment.ehdr) && (*(iVar1 + 0x9c) != 0 && *(iVar1 + 0xa0) != 0)) {
            return *(iVar1 + *(iVar1 + 0xa0));
        }
    }
    else {
        _printk(0x8000a48);
    }
    return 0xffffffea;
}


// ===== sym.seq_read.cfi_jt @ 0x080043b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.socinfo_get_partinfo_chip_id.cfi_jt @ 0x080043c0 (size 8) =====

uint32_t sym.socinfo_get_partinfo_chip_id.cfi_jt(uint32_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = _segment.ehdr;
    if (param_1 != 1) {
        uVar1 = 0;
    }
    uVar2 = 0;
    if (0xf < _segment.ehdr && param_1 < 0x11) {
        uVar2 = uVar1;
    }
    return uVar2;
}


// ===== sym.socinfo_get_partinfo_vulkan_id.cfi_jt @ 0x080043c8 (size 8) =====

uint32_t sym.socinfo_get_partinfo_vulkan_id.cfi_jt(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if (0xf < _segment.ehdr && param_1 == 1) {
        uVar1 = _segment.ehdr;
    }
    return uVar1;
}


// ===== sym.socinfo_get_id_string.cfi_jt @ 0x080043d0 (size 8) =====

ulong sym.socinfo_get_id_string.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    
    iVar1 = 0;
    if (_segment.ehdr != 0) {
        iVar1 = *(_segment.ehdr + 4);
    }
    iVar2 = 0;
    do {
        if (*(obj.soc_id + iVar2) == iVar1) {
            return *(iVar2 + 0x80026c8);
        }
        iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0x980);
    return 0;
}


// ===== sym.socinfo_get_part_info.cfi_jt @ 0x080043d8 (size 8) =====

uint32_t sym.socinfo_get_part_info.cfi_jt(uint64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 < 0x11) {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar5 = 0xffffffea;
        if (iVar1 != 0 && 0xd < _segment.ehdr) {
            uVar3 = *(iVar1 + 0xa4);
            if (uVar3 != 0 && *(iVar1 + 0xa8) != 0) {
                puVar7 = iVar1 + *(iVar1 + 0xa8);
                if (1 < uVar3) {
                    uVar6 = uVar3 & 0xfffffffe;
                    uVar5 = 0;
                    uVar9 = 0;
                    uVar8 = 0;
                    do {
                        iVar1 = uVar5 * 4;
                        uVar2 = uVar5 + 1;
                        uVar4 = uVar5 & 0x3f;
                        uVar5 = uVar5 + 2;
                        uVar9 = -(*(puVar7 + iVar1) & 1) & 1L << uVar4 | uVar9;
                        uVar8 = -(*(puVar7 + iVar1 + 4) & 1) & 1L << (uVar2 & 0x3f) | uVar8;
                    } while (uVar5 != uVar6);
                    uVar8 = uVar8 | uVar9;
                    puVar7 = puVar7 + uVar6 * 4;
                    goto joined_r0x08004780;
                }
                uVar6 = 0;
                uVar8 = 0;
                do {
                    uVar5 = uVar6 & 0x3f;
                    uVar6 = uVar6 + 1;
                    uVar8 = -(*puVar7 & 1) & 1L << uVar5 | uVar8;
                    puVar7 = puVar7 + 4;
joined_r0x08004780:
                } while (uVar6 != uVar3);
                uVar5 = uVar8;
            }
        }
        uVar3 = uVar5 >> (param_1 & 0x3f) & 1;
    }
    else {
        _printk(0x8000a57);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080043e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_socinfo_probe.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt);
    return;
}


// ===== sym.socinfo_get_serial_number.cfi_jt @ 0x080043e8 (size 8) =====

uint sym.socinfo_get_serial_number.cfi_jt(void)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x60);
    }
    return 0;
}


// ===== sym.socinfo_get_id.cfi_jt @ 0x080043f0 (size 8) =====

uint sym.socinfo_get_id.cfi_jt(void)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 4);
    }
    return 0;
}


// ===== sym.qcom_socinfo_probe.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080043f8 (size 8) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.qcom_socinfo_probe.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint uVar9;
    uint32_t uVar10;
    uint uVar11;
    ulong uVar12;
    int iVar13;
    ulong uVar14;
    uint uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    ulong *in_x18;
    uint *puVar29;
    ulong unaff_x30;
    uint64_t auStack_80 [4];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    auStack_80[2] = *(iVar7 + 0x5e0);
    auStack_80[0] = 0;
    puVar5 = qcom_smem_get(0xffffffff,0x89,auStack_80);
    if (puVar5 < 0xfffffffffffff001) {
        iVar7 = param_1 + 0x10;
        _segment.ehdr = puVar5;
        puVar6 = devm_kmalloc(iVar7,0xe0,0xdc0);
        if (puVar6 == NULL) {
            puVar5 = 0xfffffff4;
        }
        else {
            iVar17 = 0;
            puVar6[2] = "Snapdragon";
            do {
                if (*(obj.soc_id + iVar17) == *(puVar5 + 4)) {
                    uVar18 = *(iVar17 + 0x80026c8);
                    goto code_r0x08004d60;
                }
                iVar17 = iVar17 + 0x10;
            } while (iVar17 != 0x980);
            uVar18 = 0;
code_r0x08004d60:
            puVar6[1] = uVar18;
            uVar18 = devm_kasprintf(iVar7,0xcc0,0x8000976,*(puVar5 + 4));
            puVar6[5] = uVar18;
            uVar18 = devm_kasprintf(iVar7,0xcc0,"%u.%u",puVar5[1] >> 0x10,puVar5[1] & 0xffff);
            puVar1 = _segment.ehdr;
            puVar6[3] = uVar18;
            if (puVar1 == NULL) {
                uVar9 = 0;
            }
            else {
                uVar9 = *(puVar1 + 4);
            }
            uVar18 = kasprintf(0xcc0,0x800081f,uVar9);
            puVar6[5] = uVar18;
            if (0x5f < auStack_80[0]) {
                if ((_segment.ehdr == NULL) || (_segment.ehdr < 0xd)) {
                    uVar20 = 0;
                    uVar18 = 0;
                    if (_segment.ehdr != NULL) goto code_r0x08004e04;
                }
                else {
                    uVar20 = _segment.ehdr[0xf] << 0x20;
code_r0x08004e04:
                    uVar18 = uVar20 | _segment.ehdr[0xc];
                }
                uVar18 = kasprintf(0xcc0,"0x%016llx",uVar18);
                puVar6[4] = uVar18;
            }
            if (0xf < _segment.ehdr) {
                sym.socinfo_enumerate_partinfo_details();
                iVar17 = 0;
                do {
                    if (*(obj.soc_id + iVar17) == *(puVar5 + 4)) {
                        uVar12 = *(iVar17 + 0x80026c8);
                        goto code_r0x08004e60;
                    }
                    iVar17 = iVar17 + 0x10;
                } while (iVar17 != 0x980);
                uVar12 = 0;
code_r0x08004e60:
                uVar14 = 0;
                iVar13 = 0x7fffffff;
                if ((_segment.ehdr != NULL) && (0xf < _segment.ehdr)) {
                    uVar19 = 0;
                    if (0xfffffeff < _segment.ehdr[0x16] - 0x101) {
                        uVar19 = _segment.ehdr[0x16];
                    }
                    if (uVar19 - 1 < 8) {
                        uVar18 = 0x48;
                        pcVar2 = obj.hw_platform_feature_code;
code_r0x08004ebc:
                        if (uVar18 <= uVar19 * 8) goto code_r0x08005ed4;
                        uVar14 = *(pcVar2 + uVar19 * 8);
                    }
                    else {
                        bVar3 = 0xf0 < uVar19;
                        uVar19 = uVar19 - 0xf1;
                        if (bVar3) {
                            uVar18 = 0x80;
                            pcVar2 = obj.hw_platform_ifeature_code;
                            goto code_r0x08004ebc;
                        }
                        uVar14 = 0;
                    }
                    iVar13 = 0;
                    if (0x80000001 < *(_segment.ehdr + 0xb4) + 0x80000001U) {
                        iVar13 = *(_segment.ehdr + 0xb4);
                    }
                }
                devm_kasprintf(iVar7,0xcc0,"%s-%u-%s",uVar12,iVar13,uVar14);
            }
            _segment.ehdr = puVar6;
            __init_rwsem(puVar6 + 9,"&qs->current_image_rwsem",obj.qcom_socinfo_probe.__key);
            uVar22 = 0;
            uVar23 = 0;
            uVar16 = 0;
            uVar24 = 0;
            uVar21 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0;
            uVar4 = 0;
            uVar8 = 0;
            uVar10 = 0;
            uVar19 = 0;
            switch(_segment.ehdr) {
            case 1:
                break;
            case 0x11:
            case 0x12:
            case 0x13:
                uVar22 = 2;
                _obj.qcom_socinfo_probe.__key = obj.dev_attr_platform_oem_variant_id;
                _obj.dev_attr_modem = obj.dev_attr_platform_oem_variant;
            case 0x10:
                uVar23 = uVar22 + 3;
                *(obj.qcom_socinfo_probe.__key + uVar22 * 8) = obj.dev_attr_sku;
                *(obj.qcom_socinfo_probe.__key + (uVar22 | 1) * 8) = obj.dev_attr_feature_code;
                *(obj.qcom_socinfo_probe.__key + (uVar22 + 2) * 8) = obj.dev_attr_pcode;
            case 0xf:
                uVar16 = uVar23 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar23 * 8) = obj.dev_attr_nmodem_supported;
            case 0xe:
                uVar24 = uVar16 + 0x14;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 1) * 8) = obj.dev_attr_ncluster_array_offset;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 2) * 8) = obj.dev_attr_num_subset_parts;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 3) * 8) = obj.dev_attr_nsubset_parts_array_offset;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 4) * 8) = obj.dev_attr_subset_cores;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 5) * 8) = obj.dev_attr_subset_parts;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 6) * 8) = obj.dev_attr_gpu;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 7) * 8) = obj.dev_attr_video;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 8) * 8) = obj.dev_attr_camera;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 9) * 8) = obj.dev_attr_display;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 10) * 8) = obj.dev_attr_audio;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xb) * 8) = obj.dev_attr_modem;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xc) * 8) = obj.dev_attr_wlan;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xd) * 8) = obj.dev_attr_comp;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xe) * 8) = obj.dev_attr_sensors;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xf) * 8) = obj.dev_attr_npu;
                *(obj.qcom_socinfo_probe.__key + (uVar16 | 0x10) * 8) = obj.dev_attr_spss;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0x11) * 8) = obj.dev_attr_nav;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0x12) * 8) = obj.dev_attr_comp1;
                *(obj.qcom_socinfo_probe.__key + uVar16 * 8) = obj.dev_attr_num_clusters;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0x13) * 8) = obj.dev_attr_display1;
            case 0xd:
                uVar21 = uVar24 + 2;
                *(obj.qcom_socinfo_probe.__key + uVar24 * 8) = obj.dev_attr_nproduct_id;
                *(obj.qcom_socinfo_probe.__key + (uVar24 + 1) * 8) = obj.dev_attr_chip_id;
            case 0xc:
                uVar25 = uVar21 + 3;
                *(obj.qcom_socinfo_probe.__key + uVar21 * 8) = obj.dev_attr_chip_family;
                *(obj.qcom_socinfo_probe.__key + (uVar21 + 1) * 8) = obj.dev_attr_raw_device_family;
                *(obj.qcom_socinfo_probe.__key + (uVar21 + 2) * 8) = obj.dev_attr_raw_device_number;
            case 9:
            case 10:
            case 0xb:
                uVar26 = uVar25 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar25 * 8) = obj.dev_attr_foundry_id;
            case 7:
            case 8:
                uVar27 = uVar26 + 2;
                *(obj.qcom_socinfo_probe.__key + uVar26 * 8) = obj.dev_attr_pmic_model;
                *(obj.qcom_socinfo_probe.__key + (uVar26 + 1) * 8) = obj.dev_attr_pmic_die_revision;
            case 6:
                uVar28 = uVar27 + 2;
                *(obj.qcom_socinfo_probe.__key + uVar27 * 8) = obj.dev_attr_platform_subtype_id;
                *(obj.qcom_socinfo_probe.__key + (uVar27 + 1) * 8) = obj.dev_attr_platform_subtype;
            case 5:
                uVar4 = uVar28 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar28 * 8) = obj.dev_attr_accessory_chip;
            case 4:
                uVar8 = uVar4 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar4 * 8) = obj.dev_attr_platform_version;
            case 3:
                uVar10 = uVar8 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar8 * 8) = obj.dev_attr_hw_platform;
            case 2:
                uVar19 = uVar10 + 2;
                *(obj.qcom_socinfo_probe.__key + uVar10 * 8) = obj.dev_attr_raw_id;
                *(obj.qcom_socinfo_probe.__key + (uVar10 + 1) * 8) = obj.dev_attr_raw_version;
                break;
            default:
                _printk(0x80015be,_segment.ehdr >> 0x10,_segment.ehdr & 0xffff);
                uVar19 = 0;
            }
            *(obj.qcom_socinfo_probe.__key + uVar19 * 8) = obj.image_version;
            *(obj.qcom_socinfo_probe.__key + (uVar19 + 1) * 8) = obj.image_variant;
            *(obj.qcom_socinfo_probe.__key + (uVar19 + 2) * 8) = obj.image_crm_version;
            *(obj.qcom_socinfo_probe.__key + (uVar19 + 3) * 8) = obj.select_image;
            if ((0x28 < uVar19) || (*(obj.qcom_socinfo_probe.__key + (uVar19 + 4) * 8) = obj.images, uVar19 == 0x28)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8005ed0);
                (*pcVar2)();
            }
            uVar21 = _segment.ehdr;
            uVar24 = _segment.ehdr >> 0x10;
            uVar23 = _segment.ehdr & 0xffff;
            uVar16 = _segment.ehdr - 1;
            *(obj.qcom_socinfo_probe.__key + (uVar19 + 5) * 8) = 0;
            puVar6[7] = obj.custom_soc_attr_group;
            if (uVar16 < 0x13) {
                uVar16 = _segment.ehdr[1] >> 0x10;
                uVar19 = _segment.ehdr[1] & 0xffff;
                switch(uVar21) {
                case 1:
                    _printk(0x8001df9,uVar24,uVar23,*(_segment.ehdr + 4),uVar16,uVar19);
                    goto code_r0x080059fc;
                case 2:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x80008e3;
                    break;
                case 3:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x8001b67;
                    break;
                case 4:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x80012c5;
                    break;
                case 5:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x800174f;
                    break;
                case 6:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x800164b;
                    break;
                default:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x80021ac;
                    break;
                case 9:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8002603;
                    break;
                case 10:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x80024e3;
                    break;
                case 0xb:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8000dd5;
                    break;
                case 0xc:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8001314;
                    break;
                case 0xd:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8001814;
                    break;
                case 0xe:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8001f48;
                    break;
                case 0xf:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x80019b0;
                    break;
                case 0x10:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x8001be1;
                    break;
                case 0x11:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x8000ac9;
                    break;
                case 0x12:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x80022b6;
                    break;
                case 0x13:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x8000e9d;
                }
                _printk(uVar12,uVar24,uVar23,uVar11,uVar16,uVar19,uVar9,uVar15);
            }
            else {
                _printk(0x8001455,uVar24,uVar23);
            }
code_r0x080059fc:
            uVar20 = soc_device_register(puVar6 + 1);
            uVar18 = auStack_80[0];
            *puVar6 = uVar20;
            if (uVar20 < 0xfffffffffffff001) {
                auStack_80[1] = 0;
                uVar20 = debugfs_create_dir(0x8000c94,0);
                puVar6[0x11] = uVar20;
                puVar29 = puVar6 + 0xb4;
                *puVar29 = *puVar5;
                debugfs_create_x32("info_fmt",0x124,uVar20,puVar29);
                switch(*puVar29) {
                case 0x11:
                case 0x12:
                case 0x13:
                    *(puVar6 + 0x1b) = puVar5[0x18];
                    debugfs_create_u32("hardware_platform_oem_variant",0x124,puVar6[0x11]);
                case 0x10:
                    uVar9 = 0;
                    if (0xf < _segment.ehdr) {
                        uVar9 = *0x800014c;
                    }
                    *(puVar6 + 0x1a) = uVar9;
                    debugfs_create_u32("gpu_chip_id",0x124,puVar6[0x11]);
                    uVar9 = 0;
                    if (0xf < _segment.ehdr) {
                        uVar9 = *0x8000150;
                    }
                    *(puVar6 + 0xd4) = uVar9;
                    debugfs_create_u32("gpu_vulkan_id",0x124,puVar6[0x11]);
                case 0xf:
                    *(puVar6 + 0xcc) = *(puVar5 + 0xac);
                    debugfs_create_u32("nmodem_supported",0x124,puVar6[0x11]);
                case 0xe:
                    *(puVar6 + 0xbc) = *(puVar5 + 0x9c);
                    *(puVar6 + 0x18) = puVar5[0x14];
                    *(puVar6 + 0xc4) = *(puVar5 + 0xa4);
                    *(puVar6 + 0x19) = puVar5[0x15];
                    debugfs_create_u32("num_clusters",0x124,puVar6[0x11]);
                    debugfs_create_u32("ncluster_array_offset",0x124,puVar6[0x11],puVar6 + 0x18);
                    debugfs_create_u32("num_subset_parts",0x124,puVar6[0x11],puVar6 + 0xc4);
                    debugfs_create_u32("nsubset_parts_array_offset",0x124,puVar6[0x11],puVar6 + 0x19);
                case 0xd:
                    *(puVar6 + 0x17) = puVar5[0xf];
                    debugfs_create_u32("nproduct_id",0x124,puVar6[0x11],puVar6 + 0x17);
                    debugfs_create_file("chip_id",0x124,puVar6[0x11],puVar5,obj.qcom_chip_id_ops);
                case 0xc:
                    *(puVar6 + 0x14) = *(puVar5 + 0x6c);
                    *(puVar6 + 0x12) = puVar5[0xe];
                    *(puVar6 + 0x9c) = *(puVar5 + 0x74);
                    debugfs_create_x32("chip_family",0x124,puVar6[0x11]);
                    debugfs_create_x32("raw_device_family",0x124,puVar6[0x11],puVar6 + 0x12);
                    debugfs_create_x32("raw_device_number",0x124,puVar6[0x11],puVar6 + 0x9c);
                case 0xb:
                    if (puVar5[0xd] + (*(puVar5 + 100) << 1) * 4 <= uVar18) {
                        debugfs_create_file("pmic_model_array",0x124,puVar6[0x11],puVar5,
                                            obj.qcom_pmic_model_array_ops);
                    }
                case 9:
                case 10:
                    *(puVar6 + 0xa4) = *(puVar5 + 0x5c);
                    debugfs_create_u32("foundry_id",0x124,puVar6[0x11]);
                case 7:
                case 8:
                    debugfs_create_file("pmic_model",0x124,puVar6[0x11],puVar5,obj.qcom_pmic_model_ops);
                    debugfs_create_file("pmic_die_rev",0x124,puVar6[0x11],puVar5,obj.qcom_pmic_die_rev_ops);
                case 6:
                    *(puVar6 + 0x94) = puVar5[8];
                    debugfs_create_u32("hardware_platform_subtype",0x124,puVar6[0x11]);
                case 5:
                    *(puVar6 + 0x13) = *(puVar5 + 0x3c);
                    debugfs_create_u32("accessory_chip",0x124,puVar6[0x11]);
                case 4:
                    *(puVar6 + 0x15) = puVar5[7];
                    debugfs_create_u32("platform_version",0x124,puVar6[0x11]);
                case 3:
                    *(puVar6 + 0x16) = *(puVar5 + 0x34);
                    debugfs_create_u32("hardware_platform",0x124,puVar6[0x11]);
                case 2:
                    *(puVar6 + 0xac) = puVar5[6];
                    debugfs_create_u32("raw_version",0x124,puVar6[0x11]);
                case 1:
                    debugfs_create_file("build_id",0x124,puVar6[0x11],puVar5,obj.qcom_build_id_ops);
                default:
                    iVar7 = qcom_smem_get(0xffffffff,0x1d5,auStack_80 + 1);
                    uVar18 = 0;
                    do {
                        if ((0x3f4UL >> (uVar18 & 0x3f) & 1) == 0) {
                            uVar12 = debugfs_create_dir(*(obj.socinfo_image_names + uVar18 * 8),puVar6[0x11]);
                            debugfs_create_file("name",0x124,uVar12,iVar7,obj.qcom_image_name_ops);
                            debugfs_create_file("variant",0x124,uVar12,iVar7,obj.qcom_image_variant_ops);
                            debugfs_create_file(0x800125b,0x124,uVar12,iVar7,obj.qcom_image_oem_ops);
                        }
                        uVar18 = uVar18 + 1;
                        iVar7 = iVar7 + 0x81;
                    } while (uVar18 != 0xf);
                    add_device_randomness(puVar5,auStack_80[0] & 0xffffffff);
                    puVar5 = NULL;
                    *(param_1 + 0xa8) = puVar6;
                }
            }
            else {
                puVar5 = uVar20 & 0xffffffff;
            }
        }
    }
    else {
        _dev_err(param_1 + 0x10,"Couldn\'t find socinfo\n");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == auStack_80[2]) {
        return puVar5 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08005ed4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x8005ed8);
    (*pcVar2)();
}


// ===== sym.qcom_socinfo_remove.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004400 (size 8) =====

ulong sym.qcom_socinfo_remove.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xa8);
    soc_device_unregister(*puVar1);
    debugfs_remove(puVar1[0x11]);
    return 0;
}


// ===== sym.msm_set_image_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004408 (size 8) =====

char * sym.msm_set_image_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                 (ulong param_1,ulong param_2,char *param_3,char *param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    char acStack_140 [8];
    int64_t iStack_138;
    ulong **ppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    char *pcStack_110;
    char *pcStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    ulong **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    char *pcStack_d0;
    char *pcStack_c8;
    char acStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    char *pcStack_90;
    char *pcStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    char *pcStack_50;
    char *pcStack_48;
    char acStack_40 [8];
    int64_t iStack_38;
    
    pcVar4 = acStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar10 = 0x8000000;
    iStack_38 = *(iVar11 + 0x5e0);
    pcVar5 = param_3;
    pcVar8 = param_4;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_40[0] = '\0';
        acStack_40[1] = '\0';
        acStack_40[2] = '\0';
        acStack_40[3] = '\0';
        acStack_40[4] = '\0';
        acStack_40[5] = '\0';
        acStack_40[6] = '\0';
        acStack_40[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _printk(0x8001501);
            pcVar5 = pcVar4;
            goto code_r0x08007954;
        }
        iVar10 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar5 = "%-.75s";
        pcVar8 = param_3;
        scnprintf(iVar10,0x4b);
    }
    else {
code_r0x08007954:
        up_read(_segment.ehdr + 0x48);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_get_image_variant;
    pcStack_68 = sym.msm_get_image_variant;
    iVar11 = sp_el0;
    iStack_78 = *(iVar11 + 0x5e0);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar10;
    pcStack_50 = param_3;
    pcStack_48 = param_4;
    pcVar4 = qcom_smem_get(0xffffffff,0x1d5,&uStack_80);
    if ((pcVar4 == NULL) || (param_3 = pcVar4, 0xfffffffffffff000 < pcVar4)) {
        _printk(0x8001501);
        pcVar4 = "Unknown";
        iVar2 = scnprintf(pcVar5,0x14);
    }
    else {
        iVar10 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        param_3 = pcVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar8 = param_3 + 0x4b;
        pcVar4 = "%-.20s\n";
        iVar2 = scnprintf(pcVar5,0x14);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_78) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar7 = acStack_c0;
    *extraout_x18_00 = sym.msm_set_image_variant;
    pcStack_a8 = sym.msm_set_image_variant;
    iVar1 = sp_el0;
    iVar11 = 0x8000000;
    iStack_b8 = *(iVar1 + 0x5e0);
    pcVar6 = pcVar4;
    pcVar9 = pcVar8;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar10;
    pcStack_90 = param_3;
    pcStack_88 = pcVar5;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_c0[0] = '\0';
        acStack_c0[1] = '\0';
        acStack_c0[2] = '\0';
        acStack_c0[3] = '\0';
        acStack_c0[4] = '\0';
        acStack_c0[5] = '\0';
        acStack_c0[6] = '\0';
        acStack_c0[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _printk(0x8001501);
            pcVar6 = pcVar7;
            goto code_r0x08007b34;
        }
        iVar11 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar6 = "%-.20s";
        pcVar9 = pcVar4;
        scnprintf(iVar11 + 0x4b,0x14);
    }
    else {
code_r0x08007b34:
        up_read(_segment.ehdr + 0x48);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_b8) {
        return pcVar8;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.msm_get_image_crm_version;
    pcStack_e8 = sym.msm_get_image_crm_version;
    iVar10 = sp_el0;
    iStack_f8 = *(iVar10 + 0x5e0);
    uStack_100 = 0;
    ppuStack_f0 = &ppuStack_b0;
    iStack_e0 = iVar11;
    pcStack_d0 = pcVar4;
    pcStack_c8 = pcVar8;
    pcVar5 = qcom_smem_get(0xffffffff,0x1d5,&uStack_100);
    if ((pcVar5 == NULL) || (pcVar4 = pcVar5, 0xfffffffffffff000 < pcVar5)) {
        _printk(0x8001501);
        pcVar5 = "Unknown";
        iVar2 = scnprintf(pcVar6,0x21);
    }
    else {
        iVar11 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        pcVar4 = pcVar5 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar9 = pcVar4 + 0x5f;
        pcVar5 = "%-.33s\n";
        iVar2 = scnprintf(pcVar6,0x21);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_f8) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar7 = acStack_140;
    *extraout_x18_02 = sym.msm_set_image_crm_version;
    pcStack_128 = sym.msm_set_image_crm_version;
    iVar10 = sp_el0;
    iStack_138 = *(iVar10 + 0x5e0);
    pcVar8 = pcVar5;
    ppuStack_130 = &ppuStack_f0;
    iStack_120 = iVar11;
    pcStack_110 = pcVar4;
    pcStack_108 = pcVar6;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_140[0] = '\0';
        acStack_140[1] = '\0';
        acStack_140[2] = '\0';
        acStack_140[3] = '\0';
        acStack_140[4] = '\0';
        acStack_140[5] = '\0';
        acStack_140[6] = '\0';
        acStack_140[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_140);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar8 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar5);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar8 = pcVar7;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_138) {
        return pcVar9;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar8,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_select_image.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004410 (size 8) =====

uint64_t sym.msm_select_image.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                   (ulong param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    int64_t extraout_x1;
    uint32_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar7;
    ulong unaff_x30;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    puVar6 = &uStack_2c;
    uStack_2c = 0;
    iVar3 = kstrtoint(param_3,10);
    if (iVar3 == 0) {
        down_write(_segment.ehdr + 0x48);
        uVar2 = uStack_2c;
        if (0x1f < uStack_2c) {
            uVar2 = 0;
        }
        iVar1 = _segment.ehdr + 0x48;
        *(_segment.ehdr + 0x40) = uVar2;
        up_write(iVar1);
    }
    else {
        param_4 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_get_images;
    pcStack_88 = sym.msm_get_images;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    pcVar5 = qcom_smem_get(0xffffffff,0x1d5,&uStack_a0);
    if ((pcVar5 == NULL) || (0xfffffffffffff000 < pcVar5)) {
        iVar3 = scnprintf(puVar6,0x1000,"Unavailable\n");
    }
    else {
        iVar7 = 0;
        iVar3 = 0;
        *puVar6 = 0;
        do {
            if (*pcVar5 != '\0') {
                iVar4 = scnprintf(puVar6 + iVar3,0x1000 - iVar3,"%d:\n",iVar7);
                iVar4 = iVar4 + iVar3;
                iVar3 = scnprintf(puVar6 + iVar4,0x1000 - iVar4,"\tCRM:\t\t%-.75s\n",pcVar5);
                iVar4 = iVar4 + iVar3;
                iVar3 = scnprintf(puVar6 + iVar4,0x1000 - iVar4,"\tVariant:\t%-.20s\n",pcVar5 + 0x4b);
                iVar4 = iVar4 + iVar3;
                iVar3 = scnprintf(puVar6 + iVar4,0x1000 - iVar4,"\tVersion:\t%-.33s\n",pcVar5 + 0x5f);
                iVar3 = iVar4 + iVar3;
            }
            pcVar5 = pcVar5 + 0x80;
            iVar7 = iVar7 + 1;
        } while (iVar7 != 0x20);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return iVar3;
    }
    __stack_chk_fail();
    return *(extraout_x1 + 8);
}


// ===== sym.msm_set_image_crm_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004418 (size 8) =====

int64_t sym.msm_set_image_crm_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,char *param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char acStack_40 [8];
    int64_t iStack_38;
    
    pcVar5 = acStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar4 = param_3;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_40[0] = '\0';
        acStack_40[1] = '\0';
        acStack_40[2] = '\0';
        acStack_40[3] = '\0';
        acStack_40[4] = '\0';
        acStack_40[5] = '\0';
        acStack_40[6] = '\0';
        acStack_40[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_40);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar4 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",param_3);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar4 = pcVar5;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar4,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_set_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004420 (size 8) =====

char * sym.msm_set_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                 (ulong param_1,ulong param_2,char *param_3,char *param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar9;
    ulong unaff_x30;
    char acStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    char *pcStack_90;
    char *pcStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    char *pcStack_50;
    char *pcStack_48;
    char acStack_40 [8];
    int64_t iStack_38;
    
    pcVar4 = acStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar9 = 0x8000000;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar5 = param_3;
    pcVar8 = param_4;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_40[0] = '\0';
        acStack_40[1] = '\0';
        acStack_40[2] = '\0';
        acStack_40[3] = '\0';
        acStack_40[4] = '\0';
        acStack_40[5] = '\0';
        acStack_40[6] = '\0';
        acStack_40[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _printk(0x8001501);
            pcVar5 = pcVar4;
            goto code_r0x08007b34;
        }
        iVar9 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar5 = "%-.20s";
        pcVar8 = param_3;
        scnprintf(iVar9 + 0x4b,0x14);
    }
    else {
code_r0x08007b34:
        up_read(_segment.ehdr + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_get_image_crm_version;
    pcStack_68 = sym.msm_get_image_crm_version;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar9;
    pcStack_50 = param_3;
    pcStack_48 = param_4;
    pcVar4 = qcom_smem_get(0xffffffff,0x1d5,&uStack_80);
    if ((pcVar4 == NULL) || (param_3 = pcVar4, 0xfffffffffffff000 < pcVar4)) {
        _printk(0x8001501);
        pcVar4 = "Unknown";
        iVar2 = scnprintf(pcVar5,0x21);
    }
    else {
        iVar9 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        param_3 = pcVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar8 = param_3 + 0x5f;
        pcVar4 = "%-.33s\n";
        iVar2 = scnprintf(pcVar5,0x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar7 = acStack_c0;
    *extraout_x18_00 = sym.msm_set_image_crm_version;
    pcStack_a8 = sym.msm_set_image_crm_version;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    pcVar6 = pcVar4;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar9;
    pcStack_90 = param_3;
    pcStack_88 = pcVar5;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_c0[0] = '\0';
        acStack_c0[1] = '\0';
        acStack_c0[2] = '\0';
        acStack_c0[3] = '\0';
        acStack_c0[4] = '\0';
        acStack_c0[5] = '\0';
        acStack_c0[6] = '\0';
        acStack_c0[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_c0);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar6 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar4);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar6 = pcVar7;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return pcVar8;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar6,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.soc_info_attribute.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004428 (size 8) =====

ushort sym.soc_info_attribute.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,int64_t param_2)

{
    return *(param_2 + 8);
}


// ===== sym.qcom_show_pmic_die_revision.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004430 (size 8) =====

ulong sym.qcom_show_pmic_die_revision.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0x80) + 0x48);
    seq_printf(param_1,"%u.%u\n",uVar1 >> 0x10,uVar1 & 0xffff);
    return 0;
}


// ===== sym.qcom_show_build_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004438 (size 8) =====

ulong sym.qcom_show_build_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,0x80024cd,*(param_1 + 0x80) + 0xc);
    return 0;
}


// ===== sym.show_image_oem.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004440 (size 8) =====

ulong sym.show_image_oem.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x80) + 0x60) != '\0') {
        seq_printf(param_1,0x80024cd);
    }
    return 0;
}


// ===== sym.qcom_show_chip_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004448 (size 8) =====

ulong sym.qcom_show_chip_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,0x80024cd,*(param_1 + 0x80) + 0x7c);
    return 0;
}


// ===== sym.qcom_show_pmic_model_array.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004450 (size 8) =====

ulong sym.qcom_show_pmic_model_array.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int iVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x80);
    iVar4 = *(iVar3 + 100);
    if (iVar4 != 0) {
        iVar5 = 1;
        iVar3 = iVar3 + *(iVar3 + 0x68);
        do {
            uVar2 = *(iVar3 + (-(iVar5 - 1U >> 0x1f) & 0xfffffffc00000000 | iVar5 - 1U << 2));
            if ((uVar2 < 0x25) && ((0xc30000000U >> (uVar2 & 0x3f) & 1) == 0)) {
                uVar1 = *(iVar3 + iVar5 * 4);
                seq_printf(param_1,"%s %u.%u\n",*(obj.pmic_models + uVar2 * 8),uVar1 >> 0x10,uVar1 & 0xffff);
            }
            else {
                seq_printf(param_1,"unknown (%d)\n");
            }
            iVar4 = iVar4 + -1;
            iVar5 = iVar5 + 2;
        } while (iVar4 != 0);
    }
    return 0;
}


// ===== sym.show_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004458 (size 8) =====

ulong sym.show_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x80) + 0x4b) != '\0') {
        seq_printf(param_1,0x80024cd);
    }
    return 0;
}


// ===== sym.show_image_name.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004460 (size 8) =====

ulong sym.show_image_name.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (**(param_1 + 0x80) != '\0') {
        seq_printf(param_1,0x80024cd);
    }
    return 0;
}


// ===== sym.qcom_show_pmic_model.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004468 (size 8) =====

ulong sym.qcom_show_pmic_model.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1)

{
    uint16_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0x80) + 0x44);
    if ((uVar1 < 0x25) && ((0xc30000000U >> (uVar1 & 0x3f) & 1) == 0)) {
        seq_printf(param_1,0x80024cd,*(obj.pmic_models + uVar1 * 8));
    }
    else {
        seq_printf(param_1,"unknown (%d)\n");
    }
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08004470 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_socinfo_probe.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.socinfo_get_feature_code.cfi_jt @ 0x08004478 (size 8) =====

int sym.socinfo_get_feature_code.cfi_jt(void)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0x10) {
        _printk(0x80010c6);
        iVar2 = -0x16;
    }
    else if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        iVar2 = 0;
    }
    else {
        iVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xb0);
        iVar2 = 0;
        if (0xfffffeff < iVar1 - 0x101U) {
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


// ===== sym.socinfo_get_pcode.cfi_jt @ 0x08004480 (size 8) =====

int sym.socinfo_get_pcode.cfi_jt(void)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0x10) {
        _printk(0x8001544);
        iVar2 = -0x16;
    }
    else if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        iVar2 = 0x7fffffff;
    }
    else {
        iVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xb4);
        iVar2 = 0;
        if (0x80000001 < iVar1 + 0x80000001U) {
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


// ===== sym.socinfo_get_oem_variant_id.cfi_jt @ 0x08004488 (size 8) =====

uint sym.socinfo_get_oem_variant_id.cfi_jt(void)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0x11) {
        _printk(0x8001576);
        uVar1 = 0xffffffea;
    }
    else if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xc0);
    }
    return uVar1;
}


// ===== sym.socinfo_get_partinfo_part_name.cfi_jt @ 0x08004490 (size 8) =====

ulong sym.socinfo_get_partinfo_part_name.cfi_jt(uint32_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    
    uVar1 = 0x8000154;
    if (param_1 != 1) {
        uVar1 = 0;
    }
    uVar2 = 0;
    if (0xf < _segment.ehdr && param_1 < 0x11) {
        uVar2 = uVar1;
    }
    return uVar2;
}


// ===== sym.open_image_oem.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004498 (size 8) =====

void sym.open_image_oem.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.show_image_oem.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.single_release.cfi_jt @ 0x080044a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.open_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044a8 (size 8) =====

void sym.open_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.show_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.qcom_open_build_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044b0 (size 8) =====

void sym.qcom_open_build_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.qcom_show_build_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.open_image_name.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044b8 (size 8) =====

void sym.open_image_name.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.show_image_name.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.qcom_open_pmic_model_array.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044c0 (size 8) =====

void sym.qcom_open_pmic_model_array.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.qcom_show_pmic_model_array.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.qcom_open_pmic_die_rev.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044c8 (size 8) =====

void sym.qcom_open_pmic_die_rev.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.qcom_show_pmic_die_revision.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.qcom_open_pmic_model.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044d0 (size 8) =====

void sym.qcom_open_pmic_model.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.qcom_show_pmic_model.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.qcom_open_chip_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044d8 (size 8) =====

void sym.qcom_open_chip_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.qcom_show_chip_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.socinfo_get_subpart_info.cfi_jt @ 0x080044e0 (size 8) =====

uint sym.socinfo_get_subpart_info.cfi_jt(uint32_t param_1,uint *param_2,int param_3)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 - 0x11 < 0xfffffff0) {
        _printk(0x8000a57);
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar2 = 0xffffffea;
        if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (uVar2 = 0xffffffea, *(iVar1 + 0xa4) != 0)) &&
           (*(iVar1 + 0xa8) != 0)) {
            if (param_3 == 0) {
                uVar2 = 0;
            }
            else {
                uVar2 = 0;
                *param_2 = *(iVar1 + *(iVar1 + 0xa8) + param_1 * 4);
            }
        }
    }
    return uVar2;
}


// ===== sym.msm_get_wlan.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044e8 (size 8) =====

int64_t sym.msm_get_wlan.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x1c);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_pmic_model.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044f0 (size 8) =====

int64_t sym.msm_get_pmic_model.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 7) {
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x44);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_raw_device_number.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080044f8 (size 8) =====

int64_t sym.msm_get_raw_device_number.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xc) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x74);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_nmodem_supported.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004500 (size 8) =====

int64_t sym.msm_get_nmodem_supported.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xf) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xac);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_platform_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004508 (size 8) =====

int64_t sym.msm_get_platform_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 4) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x38);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_nsubset_parts_array_offset.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004510 (size 8) =====

int64_t sym.msm_get_nsubset_parts_array_offset.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xe) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xa8);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_sensors.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004518 (size 8) =====

int64_t sym.msm_get_sensors.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x24);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_comp.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004520 (size 8) =====

int64_t sym.msm_get_comp.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x20);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_image_number.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004528 (size 8) =====

int64_t sym.msm_get_image_number.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(_segment.ehdr + 0x48);
    iVar1 = scnprintf(param_3,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar1;
}


// ===== sym.msm_get_platform_subtype.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004530 (size 8) =====

int64_t sym.msm_get_platform_subtype.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar1 == 0 || _segment.ehdr < 6) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(iVar1 + 0x40);
    }
    if ((iVar1 == 0 || _segment.ehdr < 3) || (*(iVar1 + 0x34) != 0xb)) {
        if (3 < uVar3) {
            _printk(0x80017eb);
            uVar3 = 4;
        }
        pcVar4 = obj.hw_platform_subtype;
    }
    else {
        if (5 < uVar3) {
            _printk(0x8001222);
            uVar3 = 6;
        }
        pcVar4 = obj.qrd_hw_platform_subtype;
    }
    iVar2 = scnprintf(param_3,0x1000,"%-.32s\n",*(pcVar4 + uVar3 * 8));
    return iVar2;
}


// ===== sym.msm_get_pmic_die_revision.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004538 (size 8) =====

int64_t sym.msm_get_pmic_die_revision.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 7) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x48);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_sku.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004540 (size 8) =====

int64_t sym.msm_get_sku.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    char *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "Unknown";
    if (_segment.ehdr != NULL) {
        pcVar1 = _segment.ehdr;
    }
    iVar2 = sysfs_emit(param_3,0x80024cd,pcVar1);
    return iVar2;
}


// ===== sym.msm_get_feature_code.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004548 (size 8) =====

int64_t sym.msm_get_feature_code.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    char *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    char *pcVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0x10) {
code_r0x08006064:
        pcVar7 = NULL;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xb0);
        uVar3 = 0;
        if (0xfffffeff < uVar2 - 0x101) {
            uVar3 = uVar2;
        }
        if (uVar3 - 1 < 8) {
            uVar8 = 0x48;
            pcVar4 = obj.hw_platform_feature_code;
        }
        else {
            bVar5 = uVar3 < 0xf1;
            uVar3 = uVar3 - 0xf1;
            if (bVar5) goto code_r0x08006064;
            uVar8 = 0x80;
            pcVar4 = obj.hw_platform_ifeature_code;
        }
        if (uVar8 <= uVar3 * 8) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x80060f8);
            (*pcVar4)();
        }
        pcVar7 = *(pcVar4 + uVar3 * 8);
    }
    pcVar1 = "Unknown";
    if (pcVar7 != NULL) {
        pcVar1 = pcVar7;
    }
    iVar6 = sysfs_emit(param_3,0x80024cd,pcVar1);
    return iVar6;
}


// ===== sym.msm_get_chip_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004550 (size 8) =====

int64_t sym.msm_get_chip_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr) + 0x7c;
    if (_segment.ehdr < 0xd) {
        iVar1 = 0x8001144;
    }
    iVar2 = 0x8001144;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        iVar2 = iVar1;
    }
    iVar3 = scnprintf(param_3,0x1000,"%-.32s\n",iVar2);
    return iVar3;
}


// ===== sym.msm_get_num_clusters.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004558 (size 8) =====

int64_t sym.msm_get_num_clusters.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xe) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x9c);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_video.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004560 (size 8) =====

int64_t sym.msm_get_video.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 8);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_foundry_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004568 (size 8) =====

int64_t sym.msm_get_foundry_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 9) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x5c);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_platform_oem_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004570 (size 8) =====

int64_t sym.msm_get_platform_oem_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0x11) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xc0) != 0;
    }
    iVar1 = scnprintf(param_3,0x1000,"%-.32s\n",*(obj.hw_platform_oem_variant + uVar2 * 8));
    return iVar1;
}


// ===== sym.msm_get_raw_device_family.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004578 (size 8) =====

int64_t sym.msm_get_raw_device_family.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xc) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x70);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_image_crm_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004580 (size 8) =====

int64_t sym.msm_get_image_crm_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x20;
    ulong unaff_x21;
    ulong unaff_x30;
    char acStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_60;
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_40);
    if ((uVar3 == 0) || (unaff_x20 = uVar3, 0xfffffffffffff000 < uVar3)) {
        _printk(0x8001501);
        pcVar4 = "Unknown";
        iVar2 = scnprintf(param_3,0x21);
    }
    else {
        unaff_x21 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        unaff_x20 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        param_4 = unaff_x20 + 0x5f;
        pcVar4 = "%-.33s\n";
        iVar2 = scnprintf(param_3,0x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar6 = acStack_80;
    *extraout_x18 = sym.msm_set_image_crm_version;
    pcStack_68 = sym.msm_set_image_crm_version;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    pcVar5 = pcVar4;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    uStack_50 = unaff_x20;
    uStack_48 = param_3;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_80[0] = '\0';
        acStack_80[1] = '\0';
        acStack_80[2] = '\0';
        acStack_80[3] = '\0';
        acStack_80[4] = '\0';
        acStack_80[5] = '\0';
        acStack_80[6] = '\0';
        acStack_80[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_80);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar5 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar4);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar5 = pcVar6;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar5,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_get_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004588 (size 8) =====

char * sym.msm_get_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                 (ulong param_1,ulong param_2,ulong param_3,char *param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t unaff_x20;
    ulong unaff_x21;
    int64_t iVar10;
    ulong unaff_x30;
    char acStack_100 [8];
    int64_t iStack_f8;
    ulong **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    char *pcStack_d0;
    char *pcStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    char *pcStack_90;
    char *pcStack_88;
    char acStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_60;
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uStack_40 = 0;
    uVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_40);
    if ((uVar3 == 0) || (unaff_x20 = uVar3, 0xfffffffffffff000 < uVar3)) {
        _printk(0x8001501);
        pcVar5 = "Unknown";
        iVar2 = scnprintf(param_3,0x14);
    }
    else {
        unaff_x21 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        unaff_x20 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        param_4 = unaff_x20 + 0x4b;
        pcVar5 = "%-.20s\n";
        iVar2 = scnprintf(param_3,0x14);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar4 = acStack_80;
    *extraout_x18 = sym.msm_set_image_variant;
    pcStack_68 = sym.msm_set_image_variant;
    iVar1 = sp_el0;
    iVar10 = 0x8000000;
    iStack_78 = *(iVar1 + 0x5e0);
    pcVar6 = pcVar5;
    pcVar9 = param_4;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    uStack_50 = unaff_x20;
    uStack_48 = param_3;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_80[0] = '\0';
        acStack_80[1] = '\0';
        acStack_80[2] = '\0';
        acStack_80[3] = '\0';
        acStack_80[4] = '\0';
        acStack_80[5] = '\0';
        acStack_80[6] = '\0';
        acStack_80[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _printk(0x8001501);
            pcVar6 = pcVar4;
            goto code_r0x08007b34;
        }
        iVar10 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar6 = "%-.20s";
        pcVar9 = pcVar5;
        scnprintf(iVar10 + 0x4b,0x14);
    }
    else {
code_r0x08007b34:
        up_read(_segment.ehdr + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.msm_get_image_crm_version;
    pcStack_a8 = sym.msm_get_image_crm_version;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    uStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar10;
    pcStack_90 = pcVar5;
    pcStack_88 = param_4;
    pcVar4 = qcom_smem_get(0xffffffff,0x1d5,&uStack_c0);
    if ((pcVar4 == NULL) || (pcVar5 = pcVar4, 0xfffffffffffff000 < pcVar4)) {
        _printk(0x8001501);
        pcVar4 = "Unknown";
        iVar2 = scnprintf(pcVar6,0x21);
    }
    else {
        iVar10 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        pcVar5 = pcVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar9 = pcVar5 + 0x5f;
        pcVar4 = "%-.33s\n";
        iVar2 = scnprintf(pcVar6,0x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar8 = acStack_100;
    *extraout_x18_01 = sym.msm_set_image_crm_version;
    pcStack_e8 = sym.msm_set_image_crm_version;
    iVar1 = sp_el0;
    iStack_f8 = *(iVar1 + 0x5e0);
    pcVar7 = pcVar4;
    ppuStack_f0 = &ppuStack_b0;
    iStack_e0 = iVar10;
    pcStack_d0 = pcVar5;
    pcStack_c8 = pcVar6;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_100[0] = '\0';
        acStack_100[1] = '\0';
        acStack_100[2] = '\0';
        acStack_100[3] = '\0';
        acStack_100[4] = '\0';
        acStack_100[5] = '\0';
        acStack_100[6] = '\0';
        acStack_100[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_100);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar7 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar4);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar7 = pcVar8;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_f8) {
        return pcVar9;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar7,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_get_raw_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004590 (size 8) =====

int64_t sym.msm_get_raw_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 2) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_images.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004598 (size 8) =====

uint64_t sym.msm_get_images.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,uchar *param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    int64_t extraout_x1;
    ulong *in_x18;
    int iVar5;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    pcVar4 = qcom_smem_get(0xffffffff,0x1d5,&uStack_70);
    if ((pcVar4 == NULL) || (0xfffffffffffff000 < pcVar4)) {
        iVar3 = scnprintf(param_3,0x1000,"Unavailable\n");
    }
    else {
        iVar5 = 0;
        iVar3 = 0;
        *param_3 = 0;
        do {
            if (*pcVar4 != '\0') {
                iVar2 = scnprintf(param_3 + iVar3,0x1000 - iVar3,"%d:\n",iVar5);
                iVar2 = iVar2 + iVar3;
                iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"\tCRM:\t\t%-.75s\n",pcVar4);
                iVar2 = iVar2 + iVar3;
                iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"\tVariant:\t%-.20s\n",pcVar4 + 0x4b);
                iVar2 = iVar2 + iVar3;
                iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"\tVersion:\t%-.33s\n",pcVar4 + 0x5f);
                iVar3 = iVar2 + iVar3;
            }
            pcVar4 = pcVar4 + 0x80;
            iVar5 = iVar5 + 1;
        } while (iVar5 != 0x20);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    __stack_chk_fail();
    return *(extraout_x1 + 8);
}


// ===== sym.msm_get_display.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045a0 (size 8) =====

int64_t sym.msm_get_display.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x10);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_display1.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045a8 (size 8) =====

int64_t sym.msm_get_display1.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x38);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_npu.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045b0 (size 8) =====

int64_t sym.msm_get_npu.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x28);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_platform_subtype_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045b8 (size 8) =====

int64_t sym.msm_get_platform_subtype_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 6) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x40);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_camera.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045c0 (size 8) =====

int64_t sym.msm_get_camera.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0xc);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_chip_family.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045c8 (size 8) =====

int64_t sym.msm_get_chip_family.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xc) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x6c);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_subset_parts.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045d0 (size 8) =====

int64_t sym.msm_get_subset_parts.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t *puVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint8_t *puVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar1 != 0 && 0xd < _segment.ehdr) {
        uVar9 = *(iVar1 + 0xa4);
        uVar4 = uVar9;
        if (uVar9 != 0 && *(iVar1 + 0xa8) != 0) {
            puVar3 = iVar1 + *(iVar1 + 0xa8);
            if (uVar9 < 2) {
                uVar7 = 0;
                uVar10 = 0;
                puVar8 = puVar3;
            }
            else {
                uVar7 = uVar4 & 0xfffffffe;
                uVar11 = 0;
                uVar9 = 0;
                uVar10 = 0;
                puVar8 = puVar3 + uVar7 * 4;
                do {
                    iVar1 = uVar11 * 4;
                    uVar2 = uVar11 + 1;
                    uVar5 = uVar11 & 0x3f;
                    uVar11 = uVar11 + 2;
                    uVar9 = -(*(puVar3 + iVar1) & 1) & 1L << uVar5 | uVar9;
                    uVar10 = -(*(puVar3 + iVar1 + 4) & 1) & 1L << (uVar2 & 0x3f) | uVar10;
                } while (uVar11 != uVar7);
                uVar10 = uVar10 | uVar9;
                if (uVar7 == uVar4) goto code_r0x08006404;
            }
            do {
                uVar11 = uVar7 & 0x3f;
                uVar7 = uVar7 + 1;
                uVar10 = -(*puVar8 & 1) & 1L << uVar11 | uVar10;
                puVar8 = puVar8 + 4;
            } while (uVar4 != uVar7);
            goto code_r0x08006404;
        }
    }
    uVar10 = 0xffffffea;
code_r0x08006404:
    iVar6 = scnprintf(param_3,0x1000,0x8001ea9,uVar10);
    return iVar6;
}


// ===== sym.msm_get_platform_oem_variant_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045d8 (size 8) =====

int64_t sym.msm_get_platform_oem_variant_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0x11) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xc0);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_raw_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045e0 (size 8) =====

int64_t sym.msm_get_raw_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 2) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x30);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_comp1.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045e8 (size 8) =====

int64_t sym.msm_get_comp1.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x34);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_accessory_chip.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045f0 (size 8) =====

int64_t sym.msm_get_accessory_chip.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 5) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c);
    }
    iVar1 = scnprintf(param_3,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_num_subset_parts.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x080045f8 (size 8) =====

int64_t sym.msm_get_num_subset_parts.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xe) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xa4);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_nav.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004600 (size 8) =====

int64_t sym.msm_get_nav.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x30);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_subset_cores.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004608 (size 8) =====

int64_t sym.msm_get_subset_cores.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((iVar1 == 0 || _segment.ehdr < 0xe) || (*(iVar1 + 0x9c) == 0 || *(iVar1 + 0xa0) == 0)) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = *(iVar1 + *(iVar1 + 0xa0));
    }
    iVar2 = scnprintf(param_3,0x1000,0x8001ea9,uVar3);
    return iVar2;
}


// ===== sym.msm_get_gpu.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004610 (size 8) =====

int64_t sym.msm_get_gpu.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 4);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_modem.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004618 (size 8) =====

int64_t sym.msm_get_modem.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x18);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_audio.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004620 (size 8) =====

int64_t sym.msm_get_audio.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x14);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_pcode.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004628 (size 8) =====

int64_t sym.msm_get_pcode.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0x10) {
        iVar2 = 0x7fffffff;
    }
    else {
        iVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xb4);
        iVar2 = 0;
        if (0x80000001 < iVar1 + 0x80000001U) {
            iVar2 = iVar1;
        }
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",iVar2);
    return iVar1;
}


// ===== sym.msm_get_image_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004630 (size 8) =====

char * sym.msm_get_image_version.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                 (ulong param_1,ulong param_2,ulong param_3,char *param_4)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    uint64_t uVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    char *unaff_x20;
    ulong unaff_x21;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    char acStack_180 [8];
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    char *pcStack_150;
    char *pcStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    ulong **ppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    char *pcStack_110;
    char *pcStack_108;
    char acStack_100 [8];
    int64_t iStack_f8;
    ulong **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    char *pcStack_d0;
    char *pcStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    char *pcStack_90;
    char *pcStack_88;
    char acStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_60;
    char *pcStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_40 = 0;
    pcVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_40);
    if ((pcVar3 == NULL) || (unaff_x20 = pcVar3, 0xfffffffffffff000 < pcVar3)) {
        _printk(0x8001501);
        pcVar3 = "Unknown";
        iVar2 = scnprintf(param_3,0x4b);
    }
    else {
        unaff_x21 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        unaff_x20 = pcVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar3 = "%-.75s\n";
        param_4 = unaff_x20;
        iVar2 = scnprintf(param_3,0x4b);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar5 = acStack_80;
    *extraout_x18 = sym.msm_set_image_version;
    pcStack_68 = sym.msm_set_image_version;
    iVar12 = sp_el0;
    iVar11 = 0x8000000;
    iStack_78 = *(iVar12 + 0x5e0);
    pcVar6 = pcVar3;
    pcVar9 = param_4;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    pcStack_50 = unaff_x20;
    uStack_48 = param_3;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_80[0] = '\0';
        acStack_80[1] = '\0';
        acStack_80[2] = '\0';
        acStack_80[3] = '\0';
        acStack_80[4] = '\0';
        acStack_80[5] = '\0';
        acStack_80[6] = '\0';
        acStack_80[7] = '\0';
        uVar4 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
            _printk(0x8001501);
            pcVar6 = pcVar5;
            goto code_r0x08007954;
        }
        iVar11 = uVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar6 = "%-.75s";
        pcVar9 = pcVar3;
        scnprintf(iVar11,0x4b);
    }
    else {
code_r0x08007954:
        up_read(_segment.ehdr + 0x48);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_78) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.msm_get_image_variant;
    pcStack_a8 = sym.msm_get_image_variant;
    iVar12 = sp_el0;
    iStack_b8 = *(iVar12 + 0x5e0);
    uStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar11;
    pcStack_90 = pcVar3;
    pcStack_88 = param_4;
    pcVar5 = qcom_smem_get(0xffffffff,0x1d5,&uStack_c0);
    if ((pcVar5 == NULL) || (pcVar3 = pcVar5, 0xfffffffffffff000 < pcVar5)) {
        _printk(0x8001501);
        pcVar5 = "Unknown";
        iVar2 = scnprintf(pcVar6,0x14);
    }
    else {
        iVar11 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        pcVar3 = pcVar5 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar9 = pcVar3 + 0x4b;
        pcVar5 = "%-.20s\n";
        iVar2 = scnprintf(pcVar6,0x14);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_b8) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar8 = acStack_100;
    *extraout_x18_01 = sym.msm_set_image_variant;
    pcStack_e8 = sym.msm_set_image_variant;
    iVar1 = sp_el0;
    iVar12 = 0x8000000;
    iStack_f8 = *(iVar1 + 0x5e0);
    pcVar7 = pcVar5;
    pcVar10 = pcVar9;
    ppuStack_f0 = &ppuStack_b0;
    iStack_e0 = iVar11;
    pcStack_d0 = pcVar3;
    pcStack_c8 = pcVar6;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_100[0] = '\0';
        acStack_100[1] = '\0';
        acStack_100[2] = '\0';
        acStack_100[3] = '\0';
        acStack_100[4] = '\0';
        acStack_100[5] = '\0';
        acStack_100[6] = '\0';
        acStack_100[7] = '\0';
        uVar4 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
            _printk(0x8001501);
            pcVar7 = pcVar8;
            goto code_r0x08007b34;
        }
        iVar12 = uVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar7 = "%-.20s";
        pcVar10 = pcVar5;
        scnprintf(iVar12 + 0x4b,0x14);
    }
    else {
code_r0x08007b34:
        up_read(_segment.ehdr + 0x48);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f8) {
        return pcVar9;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.msm_get_image_crm_version;
    pcStack_128 = sym.msm_get_image_crm_version;
    iVar11 = sp_el0;
    iStack_138 = *(iVar11 + 0x5e0);
    uStack_140 = 0;
    ppuStack_130 = &ppuStack_f0;
    iStack_120 = iVar12;
    pcStack_110 = pcVar5;
    pcStack_108 = pcVar9;
    pcVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_140);
    if ((pcVar3 == NULL) || (pcVar5 = pcVar3, 0xfffffffffffff000 < pcVar3)) {
        _printk(0x8001501);
        pcVar3 = "Unknown";
        iVar2 = scnprintf(pcVar7,0x21);
    }
    else {
        iVar12 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        pcVar5 = pcVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar10 = pcVar5 + 0x5f;
        pcVar3 = "%-.33s\n";
        iVar2 = scnprintf(pcVar7,0x21);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_138) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar9 = acStack_180;
    *extraout_x18_03 = sym.msm_set_image_crm_version;
    pcStack_168 = sym.msm_set_image_crm_version;
    iVar11 = sp_el0;
    iStack_178 = *(iVar11 + 0x5e0);
    pcVar6 = pcVar3;
    ppuStack_170 = &ppuStack_130;
    iStack_160 = iVar12;
    pcStack_150 = pcVar5;
    pcStack_148 = pcVar7;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_180[0] = '\0';
        acStack_180[1] = '\0';
        acStack_180[2] = '\0';
        acStack_180[3] = '\0';
        acStack_180[4] = '\0';
        acStack_180[5] = '\0';
        acStack_180[6] = '\0';
        acStack_180[7] = '\0';
        uVar4 = qcom_smem_get(0xffffffff,0x1d5,acStack_180);
        if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar6 = "%-.33s";
            scnprintf(uVar4 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar3);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar6 = pcVar9;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_178) {
        return pcVar10;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar6,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_get_nproduct_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004638 (size 8) =====

int64_t sym.msm_get_nproduct_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xd) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x78);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_ncluster_array_offset.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004640 (size 8) =====

int64_t sym.msm_get_ncluster_array_offset.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xe) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xa0);
    }
    iVar1 = scnprintf(param_3,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_spss.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004648 (size 8) =====

int64_t sym.msm_get_spss.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x2c);
    }
    iVar2 = scnprintf(param_3,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_hw_platform.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt @ 0x08004650 (size 8) =====

int64_t sym.msm_get_hw_platform.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 3) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x34);
        if (0x27 < uVar3) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80076f4);
            (*pcVar1)();
        }
    }
    iVar2 = scnprintf(param_3,0x1000,"%-.32s\n",*(obj.hw_platform + uVar3 * 8));
    return iVar2;
}


// ===== sym.socinfo_get_cluster_info @ 0x08004658 (size 104) =====

uint sym.socinfo_get_cluster_info(int param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        if ((iVar1 != 0 && 0xd < _segment.ehdr) && (*(iVar1 + 0x9c) != 0 && *(iVar1 + 0xa0) != 0)) {
            return *(iVar1 + *(iVar1 + 0xa0));
        }
    }
    else {
        _printk(0x8000a48);
    }
    return 0xffffffea;
}


// ===== sym.socinfo_get_part_info @ 0x080046c0 (size 280) =====

uint32_t sym.socinfo_get_part_info(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 0x11) {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar5 = 0xffffffea;
        if (iVar1 != 0 && 0xd < _segment.ehdr) {
            uVar3 = *(iVar1 + 0xa4);
            if (uVar3 != 0 && *(iVar1 + 0xa8) != 0) {
                puVar7 = iVar1 + *(iVar1 + 0xa8);
                if (1 < uVar3) {
                    uVar6 = uVar3 & 0xfffffffe;
                    uVar5 = 0;
                    uVar9 = 0;
                    uVar8 = 0;
                    do {
                        iVar1 = uVar5 * 4;
                        uVar2 = uVar5 + 1;
                        uVar4 = uVar5 & 0x3f;
                        uVar5 = uVar5 + 2;
                        uVar9 = -(*(puVar7 + iVar1) & 1) & 1L << uVar4 | uVar9;
                        uVar8 = -(*(puVar7 + iVar1 + 4) & 1) & 1L << (uVar2 & 0x3f) | uVar8;
                    } while (uVar5 != uVar6);
                    uVar8 = uVar8 | uVar9;
                    puVar7 = puVar7 + uVar6 * 4;
                    goto joined_r0x08004780;
                }
                uVar6 = 0;
                uVar8 = 0;
                do {
                    uVar5 = uVar6 & 0x3f;
                    uVar6 = uVar6 + 1;
                    uVar8 = -(*puVar7 & 1) & 1L << uVar5 | uVar8;
                    puVar7 = puVar7 + 4;
joined_r0x08004780:
                } while (uVar6 != uVar3);
                uVar5 = uVar8;
            }
        }
        uVar3 = uVar5 >> (arg1 & 0x3f) & 1;
    }
    else {
        _printk(0x8000a57);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.socinfo_get_part_count @ 0x080047d8 (size 72) =====

ulong sym.socinfo_get_part_count(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (0xffffffef < arg1 - 0x11U) {
        return 1;
    }
    *in_x18 = unaff_x30;
    _printk(0x8000a57);
    return 0xffffffea;
}


// ===== sym.socinfo_get_subpart_info @ 0x08004820 (size 148) =====

uint sym.socinfo_get_subpart_info(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int in_w2;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 - 0x11U < 0xfffffff0) {
        _printk(0x8000a57);
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar2 = 0xffffffea;
        if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (uVar2 = 0xffffffea, *(iVar1 + 0xa4) != 0)) &&
           (*(iVar1 + 0xa8) != 0)) {
            if (in_w2 == 0) {
                uVar2 = 0;
            }
            else {
                uVar2 = 0;
                *arg2 = *(iVar1 + *(iVar1 + 0xa8) + (arg1 & 0xffffffffU) * 4);
            }
        }
    }
    return uVar2;
}


// ===== sym.socinfo_get_id @ 0x080048b4 (size 40) =====

uint sym.socinfo_get_id(int64_t arg1)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 4);
    }
    return 0;
}


// ===== sym.socinfo_get_id_string @ 0x080048dc (size 84) =====

ulong sym.socinfo_get_id_string(void)

{
    int iVar1;
    int64_t iVar2;
    
    iVar1 = 0;
    if (_segment.ehdr != 0) {
        iVar1 = *(_segment.ehdr + 4);
    }
    iVar2 = 0;
    do {
        if (*(obj.soc_id + iVar2) == iVar1) {
            return *(iVar2 + 0x80026c8);
        }
        iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0x980);
    return 0;
}


// ===== sym.socinfo_get_serial_number @ 0x08004930 (size 40) =====

uint sym.socinfo_get_serial_number(int64_t arg1)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x60);
    }
    return 0;
}


// ===== sym.socinfo_get_feature_code @ 0x08004958 (size 104) =====

int sym.socinfo_get_feature_code(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0x10) {
        _printk(0x80010c6);
        iVar2 = -0x16;
    }
    else if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        iVar2 = 0;
    }
    else {
        iVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xb0);
        iVar2 = 0;
        if (0xfffffeff < iVar1 - 0x101U) {
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


// ===== sym.socinfo_get_pcode @ 0x080049c0 (size 116) =====

int sym.socinfo_get_pcode(void)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0x10) {
        _printk(0x8001544);
        iVar2 = -0x16;
    }
    else if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        iVar2 = 0x7fffffff;
    }
    else {
        iVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xb4);
        iVar2 = 0;
        if (0x80000001 < iVar1 + 0x80000001U) {
            iVar2 = iVar1;
        }
    }
    return iVar2;
}


// ===== sym.socinfo_get_partinfo_part_name @ 0x08004a34 (size 48) =====

ulong sym.socinfo_get_partinfo_part_name(uint32_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    
    uVar1 = 0x8000154;
    if (arg1 != 1) {
        uVar1 = 0;
    }
    uVar2 = 0;
    if (0xf < _segment.ehdr && arg1 < 0x11) {
        uVar2 = uVar1;
    }
    return uVar2;
}


// ===== sym.socinfo_get_partinfo_chip_id @ 0x08004a64 (size 48) =====

uint32_t sym.socinfo_get_partinfo_chip_id(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = _segment.ehdr;
    if (arg1 != 1) {
        uVar1 = 0;
    }
    uVar2 = 0;
    if (0xf < _segment.ehdr && arg1 < 0x11) {
        uVar2 = uVar1;
    }
    return uVar2;
}


// ===== sym.socinfo_get_partinfo_vulkan_id @ 0x08004a94 (size 40) =====

uint32_t sym.socinfo_get_partinfo_vulkan_id(uint32_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if (0xf < _segment.ehdr && arg1 == 1) {
        uVar1 = _segment.ehdr;
    }
    return uVar1;
}


// ===== sym.socinfo_get_oem_variant_id @ 0x08004abc (size 92) =====

uint sym.socinfo_get_oem_variant_id(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0x11) {
        _printk(0x8001576);
        uVar1 = 0xffffffea;
    }
    else if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xc0);
    }
    return uVar1;
}


// ===== sym.socinfo_enumerate_partinfo_details @ 0x08004b18 (size 212) =====

void sym.socinfo_enumerate_partinfo_details(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    uint32_t uVar4;
    uint32_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0xf < _segment.ehdr) {
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        uVar4 = *(iVar2 + 0xbc);
        if (uVar4 < 0x12) {
            if (uVar4 != 0) {
                puVar5 = iVar2 + *(iVar2 + 0xb8);
                do {
                    uVar1 = *puVar5;
                    if (0x11 < uVar1) {
                        _printk(0x800126d);
code_r0x08004be8:
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x8004bec);
                        (*pcVar3)();
                    }
                    if (0x10 < uVar1) goto code_r0x08004be8;
                    iVar2 = uVar1 * 0x2c;
                    *(obj.partinfo + iVar2) = uVar1;
                    *(iVar2 + 0x8000120) = puVar5[1];
                    *(iVar2 + 0x8000124) = puVar5[2];
                    strscpy(iVar2 + 0x8000128,puVar5 + 3,0x20);
                    uVar4 = uVar4 - 1;
                    puVar5 = puVar5 + 0xb;
                } while (uVar4 != 0);
            }
        }
        else {
            _printk(0x80016d7);
        }
    }
    return;
}


// ===== sym.socinfo_get_64bit_serial_number @ 0x08004bec (size 76) =====

uint64_t sym.socinfo_get_64bit_serial_number(void)

{
    uint64_t uVar1;
    
    if (_segment.ehdr == 0 || _segment.ehdr < 0xd) {
        uVar1 = 0;
        if (_segment.ehdr == 0) {
            return 0;
        }
    }
    else {
        uVar1 = *(_segment.ehdr + 0x78) << 0x20;
    }
    return uVar1 | *(_segment.ehdr + 0x60);
}


// ===== sym.qcom_socinfo_probe @ 0x08004c38 (size 4768) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym.qcom_socinfo_probe(int64_t arg1)

{
    uint64_t *puVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint uVar9;
    uint32_t uVar10;
    uint uVar11;
    ulong uVar12;
    int iVar13;
    ulong uVar14;
    uint uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    ulong *in_x18;
    uint *puVar29;
    ulong unaff_x30;
    uint64_t auStack_80 [4];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    auStack_80[2] = *(iVar7 + 0x5e0);
    auStack_80[0] = 0;
    puVar5 = qcom_smem_get(0xffffffff,0x89,auStack_80);
    if (puVar5 < 0xfffffffffffff001) {
        iVar7 = arg1 + 0x10;
        _segment.ehdr = puVar5;
        puVar6 = devm_kmalloc(iVar7,0xe0,0xdc0);
        if (puVar6 == NULL) {
            puVar5 = 0xfffffff4;
        }
        else {
            iVar17 = 0;
            puVar6[2] = "Snapdragon";
            do {
                if (*(obj.soc_id + iVar17) == *(puVar5 + 4)) {
                    uVar18 = *(iVar17 + 0x80026c8);
                    goto code_r0x08004d60;
                }
                iVar17 = iVar17 + 0x10;
            } while (iVar17 != 0x980);
            uVar18 = 0;
code_r0x08004d60:
            puVar6[1] = uVar18;
            uVar18 = devm_kasprintf(iVar7,0xcc0,0x8000976,*(puVar5 + 4));
            puVar6[5] = uVar18;
            uVar18 = devm_kasprintf(iVar7,0xcc0,"%u.%u",puVar5[1] >> 0x10,puVar5[1] & 0xffff);
            puVar1 = _segment.ehdr;
            puVar6[3] = uVar18;
            if (puVar1 == NULL) {
                uVar9 = 0;
            }
            else {
                uVar9 = *(puVar1 + 4);
            }
            uVar18 = kasprintf(0xcc0,0x800081f,uVar9);
            puVar6[5] = uVar18;
            if (0x5f < auStack_80[0]) {
                if ((_segment.ehdr == NULL) || (_segment.ehdr < 0xd)) {
                    uVar20 = 0;
                    uVar18 = 0;
                    if (_segment.ehdr != NULL) goto code_r0x08004e04;
                }
                else {
                    uVar20 = _segment.ehdr[0xf] << 0x20;
code_r0x08004e04:
                    uVar18 = uVar20 | _segment.ehdr[0xc];
                }
                uVar18 = kasprintf(0xcc0,"0x%016llx",uVar18);
                puVar6[4] = uVar18;
            }
            if (0xf < _segment.ehdr) {
                sym.socinfo_enumerate_partinfo_details();
                iVar17 = 0;
                do {
                    if (*(obj.soc_id + iVar17) == *(puVar5 + 4)) {
                        uVar12 = *(iVar17 + 0x80026c8);
                        goto code_r0x08004e60;
                    }
                    iVar17 = iVar17 + 0x10;
                } while (iVar17 != 0x980);
                uVar12 = 0;
code_r0x08004e60:
                uVar14 = 0;
                iVar13 = 0x7fffffff;
                if ((_segment.ehdr != NULL) && (0xf < _segment.ehdr)) {
                    uVar19 = 0;
                    if (0xfffffeff < _segment.ehdr[0x16] - 0x101) {
                        uVar19 = _segment.ehdr[0x16];
                    }
                    if (uVar19 - 1 < 8) {
                        uVar18 = 0x48;
                        pcVar2 = obj.hw_platform_feature_code;
code_r0x08004ebc:
                        if (uVar18 <= uVar19 * 8) goto code_r0x08005ed4;
                        uVar14 = *(pcVar2 + uVar19 * 8);
                    }
                    else {
                        bVar3 = 0xf0 < uVar19;
                        uVar19 = uVar19 - 0xf1;
                        if (bVar3) {
                            uVar18 = 0x80;
                            pcVar2 = obj.hw_platform_ifeature_code;
                            goto code_r0x08004ebc;
                        }
                        uVar14 = 0;
                    }
                    iVar13 = 0;
                    if (0x80000001 < *(_segment.ehdr + 0xb4) + 0x80000001U) {
                        iVar13 = *(_segment.ehdr + 0xb4);
                    }
                }
                devm_kasprintf(iVar7,0xcc0,"%s-%u-%s",uVar12,iVar13,uVar14);
            }
            _segment.ehdr = puVar6;
            __init_rwsem(puVar6 + 9,"&qs->current_image_rwsem",obj.qcom_socinfo_probe.__key);
            uVar22 = 0;
            uVar23 = 0;
            uVar16 = 0;
            uVar24 = 0;
            uVar21 = 0;
            uVar25 = 0;
    //switch table (19 cases) at 0x80007c0
            uVar26 = 0;
            uVar27 = 0;
            uVar28 = 0;
            uVar4 = 0;
            uVar8 = 0;
            uVar10 = 0;
            uVar19 = 0;
            switch(_segment.ehdr) {
            case 1:
                break;
            case 0x11:
            case 0x12:
            case 0x13:
                uVar22 = 2;
                _obj.qcom_socinfo_probe.__key = obj.dev_attr_platform_oem_variant_id;
                _obj.dev_attr_modem = obj.dev_attr_platform_oem_variant;
            case 0x10:
                uVar23 = uVar22 + 3;
                *(obj.qcom_socinfo_probe.__key + uVar22 * 8) = obj.dev_attr_sku;
                *(obj.qcom_socinfo_probe.__key + (uVar22 | 1) * 8) = obj.dev_attr_feature_code;
                *(obj.qcom_socinfo_probe.__key + (uVar22 + 2) * 8) = obj.dev_attr_pcode;
            case 0xf:
                uVar16 = uVar23 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar23 * 8) = obj.dev_attr_nmodem_supported;
            case 0xe:
                uVar24 = uVar16 + 0x14;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 1) * 8) = obj.dev_attr_ncluster_array_offset;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 2) * 8) = obj.dev_attr_num_subset_parts;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 3) * 8) = obj.dev_attr_nsubset_parts_array_offset;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 4) * 8) = obj.dev_attr_subset_cores;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 5) * 8) = obj.dev_attr_subset_parts;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 6) * 8) = obj.dev_attr_gpu;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 7) * 8) = obj.dev_attr_video;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 8) * 8) = obj.dev_attr_camera;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 9) * 8) = obj.dev_attr_display;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 10) * 8) = obj.dev_attr_audio;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xb) * 8) = obj.dev_attr_modem;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xc) * 8) = obj.dev_attr_wlan;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xd) * 8) = obj.dev_attr_comp;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xe) * 8) = obj.dev_attr_sensors;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0xf) * 8) = obj.dev_attr_npu;
                *(obj.qcom_socinfo_probe.__key + (uVar16 | 0x10) * 8) = obj.dev_attr_spss;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0x11) * 8) = obj.dev_attr_nav;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0x12) * 8) = obj.dev_attr_comp1;
                *(obj.qcom_socinfo_probe.__key + uVar16 * 8) = obj.dev_attr_num_clusters;
                *(obj.qcom_socinfo_probe.__key + (uVar16 + 0x13) * 8) = obj.dev_attr_display1;
            case 0xd:
                uVar21 = uVar24 + 2;
                *(obj.qcom_socinfo_probe.__key + uVar24 * 8) = obj.dev_attr_nproduct_id;
                *(obj.qcom_socinfo_probe.__key + (uVar24 + 1) * 8) = obj.dev_attr_chip_id;
            case 0xc:
                uVar25 = uVar21 + 3;
                *(obj.qcom_socinfo_probe.__key + uVar21 * 8) = obj.dev_attr_chip_family;
                *(obj.qcom_socinfo_probe.__key + (uVar21 + 1) * 8) = obj.dev_attr_raw_device_family;
                *(obj.qcom_socinfo_probe.__key + (uVar21 + 2) * 8) = obj.dev_attr_raw_device_number;
            case 9:
            case 10:
            case 0xb:
                uVar26 = uVar25 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar25 * 8) = obj.dev_attr_foundry_id;
            case 7:
            case 8:
                uVar27 = uVar26 + 2;
                *(obj.qcom_socinfo_probe.__key + uVar26 * 8) = obj.dev_attr_pmic_model;
                *(obj.qcom_socinfo_probe.__key + (uVar26 + 1) * 8) = obj.dev_attr_pmic_die_revision;
            case 6:
                uVar28 = uVar27 + 2;
                *(obj.qcom_socinfo_probe.__key + uVar27 * 8) = obj.dev_attr_platform_subtype_id;
                *(obj.qcom_socinfo_probe.__key + (uVar27 + 1) * 8) = obj.dev_attr_platform_subtype;
            case 5:
                uVar4 = uVar28 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar28 * 8) = obj.dev_attr_accessory_chip;
            case 4:
                uVar8 = uVar4 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar4 * 8) = obj.dev_attr_platform_version;
            case 3:
                uVar10 = uVar8 + 1;
                *(obj.qcom_socinfo_probe.__key + uVar8 * 8) = obj.dev_attr_hw_platform;
            case 2:
                uVar19 = uVar10 + 2;
                *(obj.qcom_socinfo_probe.__key + uVar10 * 8) = obj.dev_attr_raw_id;
                *(obj.qcom_socinfo_probe.__key + (uVar10 + 1) * 8) = obj.dev_attr_raw_version;
                break;
            default:
                _printk(0x80015be,_segment.ehdr >> 0x10,_segment.ehdr & 0xffff);
                uVar19 = 0;
            }
            *(obj.qcom_socinfo_probe.__key + uVar19 * 8) = obj.image_version;
            *(obj.qcom_socinfo_probe.__key + (uVar19 + 1) * 8) = obj.image_variant;
            *(obj.qcom_socinfo_probe.__key + (uVar19 + 2) * 8) = obj.image_crm_version;
            *(obj.qcom_socinfo_probe.__key + (uVar19 + 3) * 8) = obj.select_image;
            if ((0x28 < uVar19) || (*(obj.qcom_socinfo_probe.__key + (uVar19 + 4) * 8) = obj.images, uVar19 == 0x28)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8005ed0);
                (*pcVar2)();
            }
            uVar21 = _segment.ehdr;
            uVar24 = _segment.ehdr >> 0x10;
            uVar23 = _segment.ehdr & 0xffff;
            uVar16 = _segment.ehdr - 1;
            *(obj.qcom_socinfo_probe.__key + (uVar19 + 5) * 8) = 0;
            puVar6[7] = obj.custom_soc_attr_group;
            if (uVar16 < 0x13) {
                uVar16 = _segment.ehdr[1] >> 0x10;
                uVar19 = _segment.ehdr[1] & 0xffff;
    //switch table (19 cases) at 0x80007d4
                switch(uVar21) {
                case 1:
                    _printk(0x8001df9,uVar24,uVar23,*(_segment.ehdr + 4),uVar16,uVar19);
                    goto code_r0x080059fc;
                case 2:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x80008e3;
                    break;
                case 3:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x8001b67;
                    break;
                case 4:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x80012c5;
                    break;
                case 5:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x800174f;
                    break;
                case 6:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x800164b;
                    break;
                default:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x80021ac;
                    break;
                case 9:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8002603;
                    break;
                case 10:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x80024e3;
                    break;
                case 0xb:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8000dd5;
                    break;
                case 0xc:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8001314;
                    break;
                case 0xd:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8001814;
                    break;
                case 0xe:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x8001f48;
                    break;
                case 0xf:
                    uVar11 = *(_segment.ehdr + 4);
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar12 = 0x80019b0;
                    break;
                case 0x10:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x8001be1;
                    break;
                case 0x11:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x8000ac9;
                    break;
                case 0x12:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x80022b6;
                    break;
                case 0x13:
                    uVar9 = *(_segment.ehdr + 0x2c);
                    uVar15 = _segment.ehdr[6];
                    uVar11 = *(_segment.ehdr + 4);
                    uVar12 = 0x8000e9d;
                }
                _printk(uVar12,uVar24,uVar23,uVar11,uVar16,uVar19,uVar9,uVar15);
            }
            else {
                _printk(0x8001455,uVar24,uVar23);
            }
code_r0x080059fc:
            uVar20 = soc_device_register(puVar6 + 1);
            uVar18 = auStack_80[0];
            *puVar6 = uVar20;
            if (uVar20 < 0xfffffffffffff001) {
                auStack_80[1] = 0;
                uVar20 = debugfs_create_dir(0x8000c94,0);
                puVar6[0x11] = uVar20;
                puVar29 = puVar6 + 0xb4;
                *puVar29 = *puVar5;
                debugfs_create_x32("info_fmt",0x124,uVar20,puVar29);
    //switch table (19 cases) at 0x80007fa
                switch(*puVar29) {
                case 0x11:
                case 0x12:
                case 0x13:
                    *(puVar6 + 0x1b) = puVar5[0x18];
                    debugfs_create_u32("hardware_platform_oem_variant",0x124,puVar6[0x11]);
                case 0x10:
                    uVar9 = 0;
                    if (0xf < _segment.ehdr) {
                        uVar9 = *0x800014c;
                    }
                    *(puVar6 + 0x1a) = uVar9;
                    debugfs_create_u32("gpu_chip_id",0x124,puVar6[0x11]);
                    uVar9 = 0;
                    if (0xf < _segment.ehdr) {
                        uVar9 = *0x8000150;
                    }
                    *(puVar6 + 0xd4) = uVar9;
                    debugfs_create_u32("gpu_vulkan_id",0x124,puVar6[0x11]);
                case 0xf:
                    *(puVar6 + 0xcc) = *(puVar5 + 0xac);
                    debugfs_create_u32("nmodem_supported",0x124,puVar6[0x11]);
                case 0xe:
                    *(puVar6 + 0xbc) = *(puVar5 + 0x9c);
                    *(puVar6 + 0x18) = puVar5[0x14];
                    *(puVar6 + 0xc4) = *(puVar5 + 0xa4);
                    *(puVar6 + 0x19) = puVar5[0x15];
                    debugfs_create_u32("num_clusters",0x124,puVar6[0x11]);
                    debugfs_create_u32("ncluster_array_offset",0x124,puVar6[0x11],puVar6 + 0x18);
                    debugfs_create_u32("num_subset_parts",0x124,puVar6[0x11],puVar6 + 0xc4);
                    debugfs_create_u32("nsubset_parts_array_offset",0x124,puVar6[0x11],puVar6 + 0x19);
                case 0xd:
                    *(puVar6 + 0x17) = puVar5[0xf];
                    debugfs_create_u32("nproduct_id",0x124,puVar6[0x11],puVar6 + 0x17);
                    debugfs_create_file("chip_id",0x124,puVar6[0x11],puVar5,obj.qcom_chip_id_ops);
                case 0xc:
                    *(puVar6 + 0x14) = *(puVar5 + 0x6c);
                    *(puVar6 + 0x12) = puVar5[0xe];
                    *(puVar6 + 0x9c) = *(puVar5 + 0x74);
                    debugfs_create_x32("chip_family",0x124,puVar6[0x11]);
                    debugfs_create_x32("raw_device_family",0x124,puVar6[0x11],puVar6 + 0x12);
                    debugfs_create_x32("raw_device_number",0x124,puVar6[0x11],puVar6 + 0x9c);
                case 0xb:
                    if (puVar5[0xd] + (*(puVar5 + 100) << 1) * 4 <= uVar18) {
                        debugfs_create_file("pmic_model_array",0x124,puVar6[0x11],puVar5,
                                            obj.qcom_pmic_model_array_ops);
                    }
                case 9:
                case 10:
                    *(puVar6 + 0xa4) = *(puVar5 + 0x5c);
                    debugfs_create_u32("foundry_id",0x124,puVar6[0x11]);
                case 7:
                case 8:
                    debugfs_create_file("pmic_model",0x124,puVar6[0x11],puVar5,obj.qcom_pmic_model_ops);
                    debugfs_create_file("pmic_die_rev",0x124,puVar6[0x11],puVar5,obj.qcom_pmic_die_rev_ops);
                case 6:
                    *(puVar6 + 0x94) = puVar5[8];
                    debugfs_create_u32("hardware_platform_subtype",0x124,puVar6[0x11]);
                case 5:
                    *(puVar6 + 0x13) = *(puVar5 + 0x3c);
                    debugfs_create_u32("accessory_chip",0x124,puVar6[0x11]);
                case 4:
                    *(puVar6 + 0x15) = puVar5[7];
                    debugfs_create_u32("platform_version",0x124,puVar6[0x11]);
                case 3:
                    *(puVar6 + 0x16) = *(puVar5 + 0x34);
                    debugfs_create_u32("hardware_platform",0x124,puVar6[0x11]);
                case 2:
                    *(puVar6 + 0xac) = puVar5[6];
                    debugfs_create_u32("raw_version",0x124,puVar6[0x11]);
                case 1:
                    debugfs_create_file("build_id",0x124,puVar6[0x11],puVar5,obj.qcom_build_id_ops);
                default:
                    iVar7 = qcom_smem_get(0xffffffff,0x1d5,auStack_80 + 1);
                    uVar18 = 0;
                    do {
                        if ((0x3f4UL >> (uVar18 & 0x3f) & 1) == 0) {
                            uVar12 = debugfs_create_dir(*(obj.socinfo_image_names + uVar18 * 8),puVar6[0x11]);
                            debugfs_create_file("name",0x124,uVar12,iVar7,obj.qcom_image_name_ops);
                            debugfs_create_file("variant",0x124,uVar12,iVar7,obj.qcom_image_variant_ops);
                            debugfs_create_file(0x800125b,0x124,uVar12,iVar7,obj.qcom_image_oem_ops);
                        }
                        uVar18 = uVar18 + 1;
                        iVar7 = iVar7 + 0x81;
                    } while (uVar18 != 0xf);
                    add_device_randomness(puVar5,auStack_80[0] & 0xffffffff);
                    puVar5 = NULL;
                    *(arg1 + 0xa8) = puVar6;
                }
            }
            else {
                puVar5 = uVar20 & 0xffffffff;
            }
        }
    }
    else {
        _dev_err(arg1 + 0x10,"Couldn\'t find socinfo\n");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == auStack_80[2]) {
        return puVar5 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08005ed4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x8005ed8);
    (*pcVar2)();
}


// ===== sym.qcom_socinfo_remove @ 0x08005ed8 (size 64) =====

ulong sym.qcom_socinfo_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xa8);
    soc_device_unregister(*puVar1);
    debugfs_remove(puVar1[0x11]);
    return 0;
}


// ===== sym.msm_get_platform_oem_variant_id @ 0x08005f18 (size 96) =====

int64_t sym.msm_get_platform_oem_variant_id(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0x11) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xc0);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_platform_oem_variant @ 0x08005f78 (size 116) =====

int64_t sym.msm_get_platform_oem_variant(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0x11) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xc0) != 0;
    }
    iVar1 = scnprintf(arg1,0x1000,"%-.32s\n",*(obj.hw_platform_oem_variant + uVar2 * 8));
    return iVar1;
}


// ===== sym.msm_get_sku @ 0x08005fec (size 76) =====

int64_t sym.msm_get_sku(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "Unknown";
    if (_segment.ehdr != NULL) {
        pcVar1 = _segment.ehdr;
    }
    iVar2 = sysfs_emit(arg1,0x80024cd,pcVar1);
    return iVar2;
}


// ===== sym.msm_get_feature_code @ 0x08006038 (size 192) =====

int64_t sym.msm_get_feature_code(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    char *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    char *pcVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0x10) {
code_r0x08006064:
        pcVar7 = NULL;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xb0);
        uVar3 = 0;
        if (0xfffffeff < uVar2 - 0x101) {
            uVar3 = uVar2;
        }
        if (uVar3 - 1 < 8) {
            uVar8 = 0x48;
            pcVar4 = obj.hw_platform_feature_code;
        }
        else {
            bVar5 = uVar3 < 0xf1;
            uVar3 = uVar3 - 0xf1;
            if (bVar5) goto code_r0x08006064;
            uVar8 = 0x80;
            pcVar4 = obj.hw_platform_ifeature_code;
        }
        if (uVar8 <= uVar3 * 8) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(1,0x80060f8);
            (*pcVar4)();
        }
        pcVar7 = *(pcVar4 + uVar3 * 8);
    }
    pcVar1 = "Unknown";
    if (pcVar7 != NULL) {
        pcVar1 = pcVar7;
    }
    iVar6 = sysfs_emit(arg1,0x80024cd,pcVar1);
    return iVar6;
}


// ===== sym.msm_get_pcode @ 0x080060f8 (size 120) =====

int64_t sym.msm_get_pcode(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0x10) {
        iVar2 = 0x7fffffff;
    }
    else {
        iVar1 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xb4);
        iVar2 = 0;
        if (0x80000001 < iVar1 + 0x80000001U) {
            iVar2 = iVar1;
        }
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",iVar2);
    return iVar1;
}


// ===== sym.msm_get_nmodem_supported @ 0x08006170 (size 96) =====

int64_t sym.msm_get_nmodem_supported(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xf) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xac);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_num_clusters @ 0x080061d0 (size 96) =====

int64_t sym.msm_get_num_clusters(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xe) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x9c);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_ncluster_array_offset @ 0x08006230 (size 96) =====

int64_t sym.msm_get_ncluster_array_offset(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xe) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xa0);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_num_subset_parts @ 0x08006290 (size 96) =====

int64_t sym.msm_get_num_subset_parts(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xe) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xa4);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_nsubset_parts_array_offset @ 0x080062f0 (size 96) =====

int64_t sym.msm_get_nsubset_parts_array_offset(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xe) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0xa8);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_subset_cores @ 0x08006350 (size 112) =====

int64_t sym.msm_get_subset_cores(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((iVar1 == 0 || _segment.ehdr < 0xe) || (*(iVar1 + 0x9c) == 0 || *(iVar1 + 0xa0) == 0)) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = *(iVar1 + *(iVar1 + 0xa0));
    }
    iVar2 = scnprintf(arg1,0x1000,0x8001ea9,uVar3);
    return iVar2;
}


// ===== sym.msm_get_subset_parts @ 0x080063c0 (size 268) =====

int64_t sym.msm_get_subset_parts(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t *puVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint8_t *puVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar1 != 0 && 0xd < _segment.ehdr) {
        uVar9 = *(iVar1 + 0xa4);
        uVar4 = uVar9;
        if (uVar9 != 0 && *(iVar1 + 0xa8) != 0) {
            puVar3 = iVar1 + *(iVar1 + 0xa8);
            if (uVar9 < 2) {
                uVar7 = 0;
                uVar10 = 0;
                puVar8 = puVar3;
            }
            else {
                uVar7 = uVar4 & 0xfffffffe;
                uVar11 = 0;
                uVar9 = 0;
                uVar10 = 0;
                puVar8 = puVar3 + uVar7 * 4;
                do {
                    iVar1 = uVar11 * 4;
                    uVar2 = uVar11 + 1;
                    uVar5 = uVar11 & 0x3f;
                    uVar11 = uVar11 + 2;
                    uVar9 = -(*(puVar3 + iVar1) & 1) & 1L << uVar5 | uVar9;
                    uVar10 = -(*(puVar3 + iVar1 + 4) & 1) & 1L << (uVar2 & 0x3f) | uVar10;
                } while (uVar11 != uVar7);
                uVar10 = uVar10 | uVar9;
                if (uVar7 == uVar4) goto code_r0x08006404;
            }
            do {
                uVar11 = uVar7 & 0x3f;
                uVar7 = uVar7 + 1;
                uVar10 = -(*puVar8 & 1) & 1L << uVar11 | uVar10;
                puVar8 = puVar8 + 4;
            } while (uVar4 != uVar7);
            goto code_r0x08006404;
        }
    }
    uVar10 = 0xffffffea;
code_r0x08006404:
    iVar6 = scnprintf(arg1,0x1000,0x8001ea9,uVar10);
    return iVar6;
}


// ===== sym.msm_get_gpu @ 0x080064cc (size 232) =====

int64_t sym.msm_get_gpu(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 4);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_video @ 0x080065b4 (size 232) =====

int64_t sym.msm_get_video(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 8);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_camera @ 0x0800669c (size 232) =====

int64_t sym.msm_get_camera(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0xc);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_display @ 0x08006784 (size 232) =====

int64_t sym.msm_get_display(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x10);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_audio @ 0x0800686c (size 232) =====

int64_t sym.msm_get_audio(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x14);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_modem @ 0x08006954 (size 232) =====

int64_t sym.msm_get_modem(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x18);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_wlan @ 0x08006a3c (size 232) =====

int64_t sym.msm_get_wlan(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x1c);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_comp @ 0x08006b24 (size 232) =====

int64_t sym.msm_get_comp(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x20);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_sensors @ 0x08006c0c (size 232) =====

int64_t sym.msm_get_sensors(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x24);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_npu @ 0x08006cf4 (size 232) =====

int64_t sym.msm_get_npu(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x28);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_spss @ 0x08006ddc (size 232) =====

int64_t sym.msm_get_spss(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x2c);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_nav @ 0x08006ec4 (size 232) =====

int64_t sym.msm_get_nav(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x30);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_comp1 @ 0x08006fac (size 232) =====

int64_t sym.msm_get_comp1(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x34);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_display1 @ 0x08007094 (size 232) =====

int64_t sym.msm_get_display1(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,4);
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if ((((iVar1 != 0) && (0xd < _segment.ehdr)) && (*(iVar1 + 0xa4) != 0)) && (*(iVar1 + 0xa8) != 0)) {
        *puVar4 = *(*(iVar1 + 0xa8) + iVar1 + 0x38);
    }
    iVar2 = scnprintf(arg1,0x1000,"0x%x",*puVar4);
    iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,0x8001dbf);
    kfree(puVar4);
    return iVar3 + iVar2;
}


// ===== sym.msm_get_nproduct_id @ 0x0800717c (size 96) =====

int64_t sym.msm_get_nproduct_id(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xd) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x78);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_chip_id @ 0x080071dc (size 100) =====

int64_t sym.msm_get_chip_id(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr) + 0x7c;
    if (_segment.ehdr < 0xd) {
        iVar1 = 0x8001144;
    }
    iVar2 = 0x8001144;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        iVar2 = iVar1;
    }
    iVar3 = scnprintf(arg1,0x1000,"%-.32s\n",iVar2);
    return iVar3;
}


// ===== sym.msm_get_chip_family @ 0x08007240 (size 96) =====

int64_t sym.msm_get_chip_family(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xc) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x6c);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_raw_device_family @ 0x080072a0 (size 96) =====

int64_t sym.msm_get_raw_device_family(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xc) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x70);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_raw_device_number @ 0x08007300 (size 96) =====

int64_t sym.msm_get_raw_device_number(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 0xc) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x74);
    }
    iVar1 = scnprintf(arg1,0x1000,"0x%x\n",uVar2);
    return iVar1;
}


// ===== sym.msm_get_foundry_id @ 0x08007360 (size 96) =====

int64_t sym.msm_get_foundry_id(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 9) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x5c);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_pmic_model @ 0x080073c0 (size 96) =====

int64_t sym.msm_get_pmic_model(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 7) {
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x44);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_pmic_die_revision @ 0x08007420 (size 96) =====

int64_t sym.msm_get_pmic_die_revision(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 7) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x48);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_platform_subtype_id @ 0x08007480 (size 96) =====

int64_t sym.msm_get_platform_subtype_id(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 6) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x40);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_platform_subtype @ 0x080074e0 (size 216) =====

int64_t sym.msm_get_platform_subtype(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar1 == 0 || _segment.ehdr < 6) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(iVar1 + 0x40);
    }
    if ((iVar1 == 0 || _segment.ehdr < 3) || (*(iVar1 + 0x34) != 0xb)) {
        if (3 < uVar3) {
            noname_1 = _printk(0x80017eb);
            uVar3 = 4;
        }
        pcVar4 = obj.hw_platform_subtype;
    }
    else {
        if (5 < uVar3) {
            noname_1 = _printk(0x8001222);
            uVar3 = 6;
        }
        pcVar4 = obj.qrd_hw_platform_subtype;
    }
    iVar2 = scnprintf(noname_1,arg2,0x1000,"%-.32s\n",*(pcVar4 + uVar3 * 8));
    return iVar2;
}


// ===== sym.msm_get_accessory_chip @ 0x080075b8 (size 96) =====

int64_t sym.msm_get_accessory_chip(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 5) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_platform_version @ 0x08007618 (size 96) =====

int64_t sym.msm_get_platform_version(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 4) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x38);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_hw_platform @ 0x08007678 (size 124) =====

int64_t sym.msm_get_hw_platform(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 3) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x34);
        if (0x27 < uVar3) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80076f4);
            (*pcVar1)();
        }
    }
    iVar2 = scnprintf(arg2,0x1000,"%-.32s\n",*(obj.hw_platform + uVar3 * 8));
    return iVar2;
}


// ===== sym.msm_get_raw_id @ 0x080076f4 (size 96) =====

int64_t sym.msm_get_raw_id(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 2) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_raw_version @ 0x08007754 (size 96) =====

int64_t sym.msm_get_raw_version(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0 || _segment.ehdr < 2) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x30);
    }
    iVar1 = scnprintf(arg1,0x1000,0x8000dc4,uVar2);
    return iVar1;
}


// ===== sym.msm_get_image_version @ 0x080077b4 (size 236) =====

char * sym.msm_get_image_version(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    uint64_t uVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    char *in_x3;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    char *unaff_x20;
    ulong unaff_x21;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    char acStack_180 [8];
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    char *pcStack_150;
    char *pcStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    ulong **ppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    char *pcStack_110;
    char *pcStack_108;
    char acStack_100 [8];
    int64_t iStack_f8;
    ulong **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    char *pcStack_d0;
    char *pcStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    char *pcStack_90;
    char *pcStack_88;
    char acStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_60;
    char *pcStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_40 = 0;
    pcVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_40);
    if ((pcVar3 == NULL) || (unaff_x20 = pcVar3, 0xfffffffffffff000 < pcVar3)) {
        _printk(0x8001501);
        pcVar3 = "Unknown";
        iVar2 = scnprintf(arg1,0x4b);
    }
    else {
        unaff_x21 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        unaff_x20 = pcVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar3 = "%-.75s\n";
        in_x3 = unaff_x20;
        iVar2 = scnprintf(arg1,0x4b);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar5 = acStack_80;
    *extraout_x18 = sym.msm_set_image_version;
    pcStack_68 = sym.msm_set_image_version;
    iVar12 = sp_el0;
    iVar11 = 0x8000000;
    iStack_78 = *(iVar12 + 0x5e0);
    pcVar6 = pcVar3;
    pcVar9 = in_x3;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    pcStack_50 = unaff_x20;
    iStack_48 = arg1;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_80[0] = '\0';
        acStack_80[1] = '\0';
        acStack_80[2] = '\0';
        acStack_80[3] = '\0';
        acStack_80[4] = '\0';
        acStack_80[5] = '\0';
        acStack_80[6] = '\0';
        acStack_80[7] = '\0';
        uVar4 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
            _printk(0x8001501);
            pcVar6 = pcVar5;
            goto code_r0x08007954;
        }
        iVar11 = uVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar6 = "%-.75s";
        pcVar9 = pcVar3;
        scnprintf(iVar11,0x4b);
    }
    else {
code_r0x08007954:
        up_read(_segment.ehdr + 0x48);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_78) {
        return in_x3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.msm_get_image_variant;
    pcStack_a8 = sym.msm_get_image_variant;
    iVar12 = sp_el0;
    iStack_b8 = *(iVar12 + 0x5e0);
    uStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar11;
    pcStack_90 = pcVar3;
    pcStack_88 = in_x3;
    pcVar5 = qcom_smem_get(0xffffffff,0x1d5,&uStack_c0);
    if ((pcVar5 == NULL) || (pcVar3 = pcVar5, 0xfffffffffffff000 < pcVar5)) {
        _printk(0x8001501);
        pcVar5 = "Unknown";
        iVar2 = scnprintf(pcVar6,0x14);
    }
    else {
        iVar11 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        pcVar3 = pcVar5 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar9 = pcVar3 + 0x4b;
        pcVar5 = "%-.20s\n";
        iVar2 = scnprintf(pcVar6,0x14);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_b8) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar8 = acStack_100;
    *extraout_x18_01 = sym.msm_set_image_variant;
    pcStack_e8 = sym.msm_set_image_variant;
    iVar1 = sp_el0;
    iVar12 = 0x8000000;
    iStack_f8 = *(iVar1 + 0x5e0);
    pcVar7 = pcVar5;
    pcVar10 = pcVar9;
    ppuStack_f0 = &ppuStack_b0;
    iStack_e0 = iVar11;
    pcStack_d0 = pcVar3;
    pcStack_c8 = pcVar6;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_100[0] = '\0';
        acStack_100[1] = '\0';
        acStack_100[2] = '\0';
        acStack_100[3] = '\0';
        acStack_100[4] = '\0';
        acStack_100[5] = '\0';
        acStack_100[6] = '\0';
        acStack_100[7] = '\0';
        uVar4 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
            _printk(0x8001501);
            pcVar7 = pcVar8;
            goto code_r0x08007b34;
        }
        iVar12 = uVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar7 = "%-.20s";
        pcVar10 = pcVar5;
        scnprintf(iVar12 + 0x4b,0x14);
    }
    else {
code_r0x08007b34:
        up_read(_segment.ehdr + 0x48);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f8) {
        return pcVar9;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.msm_get_image_crm_version;
    pcStack_128 = sym.msm_get_image_crm_version;
    iVar11 = sp_el0;
    iStack_138 = *(iVar11 + 0x5e0);
    uStack_140 = 0;
    ppuStack_130 = &ppuStack_f0;
    iStack_120 = iVar12;
    pcStack_110 = pcVar5;
    pcStack_108 = pcVar9;
    pcVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_140);
    if ((pcVar3 == NULL) || (pcVar5 = pcVar3, 0xfffffffffffff000 < pcVar3)) {
        _printk(0x8001501);
        pcVar3 = "Unknown";
        iVar2 = scnprintf(pcVar7,0x21);
    }
    else {
        iVar12 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        pcVar5 = pcVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar10 = pcVar5 + 0x5f;
        pcVar3 = "%-.33s\n";
        iVar2 = scnprintf(pcVar7,0x21);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_138) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar9 = acStack_180;
    *extraout_x18_03 = sym.msm_set_image_crm_version;
    pcStack_168 = sym.msm_set_image_crm_version;
    iVar11 = sp_el0;
    iStack_178 = *(iVar11 + 0x5e0);
    pcVar6 = pcVar3;
    ppuStack_170 = &ppuStack_130;
    iStack_160 = iVar12;
    pcStack_150 = pcVar5;
    pcStack_148 = pcVar7;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_180[0] = '\0';
        acStack_180[1] = '\0';
        acStack_180[2] = '\0';
        acStack_180[3] = '\0';
        acStack_180[4] = '\0';
        acStack_180[5] = '\0';
        acStack_180[6] = '\0';
        acStack_180[7] = '\0';
        uVar4 = qcom_smem_get(0xffffffff,0x1d5,acStack_180);
        if ((uVar4 != 0) && (uVar4 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar6 = "%-.33s";
            scnprintf(uVar4 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar3);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar6 = pcVar9;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_178) {
        return pcVar10;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar6,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_set_image_version @ 0x080078a0 (size 244) =====

char * sym.msm_set_image_version(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    char acStack_140 [8];
    int64_t iStack_138;
    ulong **ppuStack_130;
    code *pcStack_128;
    int64_t iStack_120;
    char *pcStack_110;
    char *pcStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    ulong **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    char *pcStack_d0;
    char *pcStack_c8;
    char acStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_90;
    char *pcStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    char acStack_40 [8];
    int64_t iStack_38;
    
    pcVar5 = acStack_40;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar10 = 0x8000000;
    iStack_38 = *(iVar11 + 0x5e0);
    pcVar4 = arg1;
    pcVar8 = arg2;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_40[0] = '\0';
        acStack_40[1] = '\0';
        acStack_40[2] = '\0';
        acStack_40[3] = '\0';
        acStack_40[4] = '\0';
        acStack_40[5] = '\0';
        acStack_40[6] = '\0';
        acStack_40[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _printk(0x8001501);
            pcVar4 = pcVar5;
            goto code_r0x08007954;
        }
        iVar10 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar4 = "%-.75s";
        pcVar8 = arg1;
        scnprintf(iVar10,0x4b);
    }
    else {
code_r0x08007954:
        up_read(_segment.ehdr + 0x48);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_get_image_variant;
    pcStack_68 = sym.msm_get_image_variant;
    iVar11 = sp_el0;
    iStack_78 = *(iVar11 + 0x5e0);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar10;
    iStack_50 = arg1;
    iStack_48 = arg2;
    uVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_80);
    if ((uVar3 == 0) || (arg1 = uVar3, 0xfffffffffffff000 < uVar3)) {
        _printk(0x8001501);
        pcVar5 = "Unknown";
        iVar2 = scnprintf(pcVar4,0x14);
    }
    else {
        iVar10 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        arg1 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar8 = arg1 + 0x4b;
        pcVar5 = "%-.20s\n";
        iVar2 = scnprintf(pcVar4,0x14);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_78) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar7 = acStack_c0;
    *extraout_x18_00 = sym.msm_set_image_variant;
    pcStack_a8 = sym.msm_set_image_variant;
    iVar1 = sp_el0;
    iVar11 = 0x8000000;
    iStack_b8 = *(iVar1 + 0x5e0);
    pcVar6 = pcVar5;
    pcVar9 = pcVar8;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar10;
    uStack_90 = arg1;
    pcStack_88 = pcVar4;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_c0[0] = '\0';
        acStack_c0[1] = '\0';
        acStack_c0[2] = '\0';
        acStack_c0[3] = '\0';
        acStack_c0[4] = '\0';
        acStack_c0[5] = '\0';
        acStack_c0[6] = '\0';
        acStack_c0[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _printk(0x8001501);
            pcVar6 = pcVar7;
            goto code_r0x08007b34;
        }
        iVar11 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar6 = "%-.20s";
        pcVar9 = pcVar5;
        scnprintf(iVar11 + 0x4b,0x14);
    }
    else {
code_r0x08007b34:
        up_read(_segment.ehdr + 0x48);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_b8) {
        return pcVar8;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.msm_get_image_crm_version;
    pcStack_e8 = sym.msm_get_image_crm_version;
    iVar10 = sp_el0;
    iStack_f8 = *(iVar10 + 0x5e0);
    uStack_100 = 0;
    ppuStack_f0 = &ppuStack_b0;
    iStack_e0 = iVar11;
    pcStack_d0 = pcVar5;
    pcStack_c8 = pcVar8;
    pcVar4 = qcom_smem_get(0xffffffff,0x1d5,&uStack_100);
    if ((pcVar4 == NULL) || (pcVar5 = pcVar4, 0xfffffffffffff000 < pcVar4)) {
        _printk(0x8001501);
        pcVar4 = "Unknown";
        iVar2 = scnprintf(pcVar6,0x21);
    }
    else {
        iVar11 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        pcVar5 = pcVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar9 = pcVar5 + 0x5f;
        pcVar4 = "%-.33s\n";
        iVar2 = scnprintf(pcVar6,0x21);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_f8) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar7 = acStack_140;
    *extraout_x18_02 = sym.msm_set_image_crm_version;
    pcStack_128 = sym.msm_set_image_crm_version;
    iVar10 = sp_el0;
    iStack_138 = *(iVar10 + 0x5e0);
    pcVar8 = pcVar4;
    ppuStack_130 = &ppuStack_f0;
    iStack_120 = iVar11;
    pcStack_110 = pcVar5;
    pcStack_108 = pcVar6;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_140[0] = '\0';
        acStack_140[1] = '\0';
        acStack_140[2] = '\0';
        acStack_140[3] = '\0';
        acStack_140[4] = '\0';
        acStack_140[5] = '\0';
        acStack_140[6] = '\0';
        acStack_140[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_140);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar8 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar4);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar8 = pcVar7;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_138) {
        return pcVar9;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar8,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_get_image_variant @ 0x08007994 (size 236) =====

char * sym.msm_get_image_variant(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *in_x3;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t unaff_x20;
    ulong unaff_x21;
    int64_t iVar10;
    ulong unaff_x30;
    char acStack_100 [8];
    int64_t iStack_f8;
    ulong **ppuStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    char *pcStack_d0;
    char *pcStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    char *pcStack_90;
    char *pcStack_88;
    char acStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uStack_40 = 0;
    uVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_40);
    if ((uVar3 == 0) || (unaff_x20 = uVar3, 0xfffffffffffff000 < uVar3)) {
        _printk(0x8001501);
        pcVar5 = "Unknown";
        iVar2 = scnprintf(arg1,0x14);
    }
    else {
        unaff_x21 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        unaff_x20 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        in_x3 = unaff_x20 + 0x4b;
        pcVar5 = "%-.20s\n";
        iVar2 = scnprintf(arg1,0x14);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar4 = acStack_80;
    *extraout_x18 = sym.msm_set_image_variant;
    pcStack_68 = sym.msm_set_image_variant;
    iVar1 = sp_el0;
    iVar10 = 0x8000000;
    iStack_78 = *(iVar1 + 0x5e0);
    pcVar6 = pcVar5;
    pcVar9 = in_x3;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    uStack_50 = unaff_x20;
    iStack_48 = arg1;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_80[0] = '\0';
        acStack_80[1] = '\0';
        acStack_80[2] = '\0';
        acStack_80[3] = '\0';
        acStack_80[4] = '\0';
        acStack_80[5] = '\0';
        acStack_80[6] = '\0';
        acStack_80[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _printk(0x8001501);
            pcVar6 = pcVar4;
            goto code_r0x08007b34;
        }
        iVar10 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar6 = "%-.20s";
        pcVar9 = pcVar5;
        scnprintf(iVar10 + 0x4b,0x14);
    }
    else {
code_r0x08007b34:
        up_read(_segment.ehdr + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return in_x3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.msm_get_image_crm_version;
    pcStack_a8 = sym.msm_get_image_crm_version;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    uStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar10;
    pcStack_90 = pcVar5;
    pcStack_88 = in_x3;
    pcVar4 = qcom_smem_get(0xffffffff,0x1d5,&uStack_c0);
    if ((pcVar4 == NULL) || (pcVar5 = pcVar4, 0xfffffffffffff000 < pcVar4)) {
        _printk(0x8001501);
        pcVar4 = "Unknown";
        iVar2 = scnprintf(pcVar6,0x21);
    }
    else {
        iVar10 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        pcVar5 = pcVar4 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar9 = pcVar5 + 0x5f;
        pcVar4 = "%-.33s\n";
        iVar2 = scnprintf(pcVar6,0x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar8 = acStack_100;
    *extraout_x18_01 = sym.msm_set_image_crm_version;
    pcStack_e8 = sym.msm_set_image_crm_version;
    iVar1 = sp_el0;
    iStack_f8 = *(iVar1 + 0x5e0);
    pcVar7 = pcVar4;
    ppuStack_f0 = &ppuStack_b0;
    iStack_e0 = iVar10;
    pcStack_d0 = pcVar5;
    pcStack_c8 = pcVar6;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_100[0] = '\0';
        acStack_100[1] = '\0';
        acStack_100[2] = '\0';
        acStack_100[3] = '\0';
        acStack_100[4] = '\0';
        acStack_100[5] = '\0';
        acStack_100[6] = '\0';
        acStack_100[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_100);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar7 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar4);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar7 = pcVar8;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_f8) {
        return pcVar9;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar7,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_set_image_variant @ 0x08007a80 (size 244) =====

int64_t sym.msm_set_image_variant(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar9;
    ulong unaff_x30;
    char acStack_c0 [8];
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_90;
    char *pcStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    char acStack_40 [8];
    int64_t iStack_38;
    
    pcVar5 = acStack_40;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar9 = 0x8000000;
    iStack_38 = *(iVar8 + 0x5e0);
    pcVar4 = arg1;
    iVar8 = arg2;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_40[0] = '\0';
        acStack_40[1] = '\0';
        acStack_40[2] = '\0';
        acStack_40[3] = '\0';
        acStack_40[4] = '\0';
        acStack_40[5] = '\0';
        acStack_40[6] = '\0';
        acStack_40[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5);
        if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
            _printk(0x8001501);
            pcVar4 = pcVar5;
            goto code_r0x08007b34;
        }
        iVar9 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        pcVar4 = "%-.20s";
        iVar8 = arg1;
        scnprintf(iVar9 + 0x4b,0x14);
    }
    else {
code_r0x08007b34:
        up_read(_segment.ehdr + 0x48);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_get_image_crm_version;
    pcStack_68 = sym.msm_get_image_crm_version;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar9;
    iStack_50 = arg1;
    iStack_48 = arg2;
    uVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_80);
    if ((uVar3 == 0) || (arg1 = uVar3, 0xfffffffffffff000 < uVar3)) {
        _printk(0x8001501);
        pcVar5 = "Unknown";
        iVar2 = scnprintf(pcVar4,0x21);
    }
    else {
        iVar9 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        arg1 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        iVar8 = arg1 + 0x5f;
        pcVar5 = "%-.33s\n";
        iVar2 = scnprintf(pcVar4,0x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar7 = acStack_c0;
    *extraout_x18_00 = sym.msm_set_image_crm_version;
    pcStack_a8 = sym.msm_set_image_crm_version;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    pcVar6 = pcVar5;
    ppuStack_b0 = &puStack_70;
    iStack_a0 = iVar9;
    uStack_90 = arg1;
    pcStack_88 = pcVar4;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_c0[0] = '\0';
        acStack_c0[1] = '\0';
        acStack_c0[2] = '\0';
        acStack_c0[3] = '\0';
        acStack_c0[4] = '\0';
        acStack_c0[5] = '\0';
        acStack_c0[6] = '\0';
        acStack_c0[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_c0);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar6 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar5);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar6 = pcVar7;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_b8) {
        return iVar8;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar6,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_get_image_crm_version @ 0x08007b74 (size 236) =====

int64_t sym.msm_get_image_crm_version(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x20;
    ulong unaff_x21;
    ulong unaff_x30;
    char acStack_80 [8];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uVar3 = qcom_smem_get(0xffffffff,0x1d5,&uStack_40);
    if ((uVar3 == 0) || (unaff_x20 = uVar3, 0xfffffffffffff000 < uVar3)) {
        _printk(0x8001501);
        pcVar4 = "Unknown";
        iVar2 = scnprintf(arg1,0x21);
    }
    else {
        unaff_x21 = 0x8000000;
        down_read(_segment.ehdr + 0x48);
        unaff_x20 = uVar3 + (*(_segment.ehdr + 0x40) << 7);
        up_read(_segment.ehdr + 0x48);
        in_x3 = unaff_x20 + 0x5f;
        pcVar4 = "%-.33s\n";
        iVar2 = scnprintf(arg1,0x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    pcVar6 = acStack_80;
    *extraout_x18 = sym.msm_set_image_crm_version;
    pcStack_68 = sym.msm_set_image_crm_version;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    pcVar5 = pcVar4;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    uStack_50 = unaff_x20;
    iStack_48 = arg1;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_80[0] = '\0';
        acStack_80[1] = '\0';
        acStack_80[2] = '\0';
        acStack_80[3] = '\0';
        acStack_80[4] = '\0';
        acStack_80[5] = '\0';
        acStack_80[6] = '\0';
        acStack_80[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_80);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar5 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",pcVar4);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar5 = pcVar6;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return in_x3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar5,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_set_image_crm_version @ 0x08007c60 (size 244) =====

int64_t sym.msm_set_image_crm_version(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    char *pcVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char acStack_40 [8];
    int64_t iStack_38;
    
    pcVar5 = acStack_40;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcVar4 = arg1;
    down_read(_segment.ehdr + 0x48);
    if (*(_segment.ehdr + 0x40) == 10) {
        acStack_40[0] = '\0';
        acStack_40[1] = '\0';
        acStack_40[2] = '\0';
        acStack_40[3] = '\0';
        acStack_40[4] = '\0';
        acStack_40[5] = '\0';
        acStack_40[6] = '\0';
        acStack_40[7] = '\0';
        uVar3 = qcom_smem_get(0xffffffff,0x1d5,acStack_40);
        if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
            iVar2 = *(_segment.ehdr + 0x40);
            up_read(_segment.ehdr + 0x48);
            pcVar4 = "%-.33s";
            scnprintf(uVar3 + (iVar2 << 7) + 0x5f,0x21,"%-.33s",arg1);
            goto code_r0x08007d1c;
        }
        _printk(0x8001501);
        pcVar4 = pcVar5;
    }
    up_read(_segment.ehdr + 0x48);
code_r0x08007d1c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_get_image_number;
    down_read(_segment.ehdr + 0x48);
    iVar2 = scnprintf(pcVar4,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar2;
}


// ===== sym.msm_get_image_number @ 0x08007d54 (size 108) =====

int64_t sym.msm_get_image_number(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    down_read(_segment.ehdr + 0x48);
    iVar1 = scnprintf(arg1,0x1000,0x800174b,*(_segment.ehdr + 0x40));
    up_read(_segment.ehdr + 0x48);
    return iVar1;
}


// ===== sym.msm_select_image @ 0x08007dc0 (size 168) =====

uint64_t sym.msm_select_image(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    char *pcVar5;
    int64_t extraout_x1;
    uint32_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar7;
    ulong unaff_x30;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    puVar6 = &uStack_2c;
    uStack_2c = 0;
    iVar3 = kstrtoint(arg1,10);
    if (iVar3 == 0) {
        down_write(_segment.ehdr + 0x48);
        uVar2 = uStack_2c;
        if (0x1f < uStack_2c) {
            uVar2 = 0;
        }
        iVar1 = _segment.ehdr + 0x48;
        *(_segment.ehdr + 0x40) = uVar2;
        up_write(iVar1);
    }
    else {
        arg2 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_get_images;
    pcStack_88 = sym.msm_get_images;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    pcVar5 = qcom_smem_get(0xffffffff,0x1d5,&uStack_a0);
    if ((pcVar5 == NULL) || (0xfffffffffffff000 < pcVar5)) {
        iVar3 = scnprintf(puVar6,0x1000,"Unavailable\n");
    }
    else {
        iVar7 = 0;
        iVar3 = 0;
        *puVar6 = 0;
        do {
            if (*pcVar5 != '\0') {
                iVar4 = scnprintf(puVar6 + iVar3,0x1000 - iVar3,"%d:\n",iVar7);
                iVar4 = iVar4 + iVar3;
                iVar3 = scnprintf(puVar6 + iVar4,0x1000 - iVar4,"\tCRM:\t\t%-.75s\n",pcVar5);
                iVar4 = iVar4 + iVar3;
                iVar3 = scnprintf(puVar6 + iVar4,0x1000 - iVar4,"\tVariant:\t%-.20s\n",pcVar5 + 0x4b);
                iVar4 = iVar4 + iVar3;
                iVar3 = scnprintf(puVar6 + iVar4,0x1000 - iVar4,"\tVersion:\t%-.33s\n",pcVar5 + 0x5f);
                iVar3 = iVar4 + iVar3;
            }
            pcVar5 = pcVar5 + 0x80;
            iVar7 = iVar7 + 1;
        } while (iVar7 != 0x20);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return iVar3;
    }
    __stack_chk_fail();
    return *(extraout_x1 + 8);
}


// ===== sym.msm_get_images @ 0x08007e68 (size 376) =====

uint64_t sym.msm_get_images(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    int64_t extraout_x1;
    ulong *in_x18;
    int iVar5;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    pcVar4 = qcom_smem_get(0xffffffff,0x1d5,&uStack_70);
    if ((pcVar4 == NULL) || (0xfffffffffffff000 < pcVar4)) {
        iVar3 = scnprintf(arg1,0x1000,"Unavailable\n");
    }
    else {
        iVar5 = 0;
        iVar3 = 0;
        *arg1 = 0;
        do {
            if (*pcVar4 != '\0') {
                iVar2 = scnprintf(arg1 + iVar3,0x1000 - iVar3,"%d:\n",iVar5);
                iVar2 = iVar2 + iVar3;
                iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,"\tCRM:\t\t%-.75s\n",pcVar4);
                iVar2 = iVar2 + iVar3;
                iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,"\tVariant:\t%-.20s\n",pcVar4 + 0x4b);
                iVar2 = iVar2 + iVar3;
                iVar3 = scnprintf(arg1 + iVar2,0x1000 - iVar2,"\tVersion:\t%-.33s\n",pcVar4 + 0x5f);
                iVar3 = iVar2 + iVar3;
            }
            pcVar4 = pcVar4 + 0x80;
            iVar5 = iVar5 + 1;
        } while (iVar5 != 0x20);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    __stack_chk_fail();
    return *(extraout_x1 + 8);
}


// ===== sym.soc_info_attribute @ 0x08007fe0 (size 16) =====

ushort sym.soc_info_attribute(ulong noname_0,int64_t arg1)

{
    return *(arg1 + 8);
}


// ===== sym.qcom_open_chip_id @ 0x08007ff0 (size 56) =====

void sym.qcom_open_chip_id(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.qcom_show_chip_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.qcom_show_chip_id @ 0x08008028 (size 56) =====

ulong sym.qcom_show_chip_id(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(arg1,0x80024cd,*(arg1 + 0x80) + 0x7c);
    return 0;
}


// ===== sym.qcom_open_pmic_model_array @ 0x08008060 (size 56) =====

void sym.qcom_open_pmic_model_array(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.qcom_show_pmic_model_array.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.qcom_show_pmic_model_array @ 0x08008098 (size 216) =====

ulong sym.qcom_show_pmic_model_array(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int iVar4;
    int iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x80);
    iVar4 = *(iVar3 + 100);
    if (iVar4 != 0) {
        iVar5 = 1;
        iVar3 = iVar3 + *(iVar3 + 0x68);
        do {
            uVar2 = *(iVar3 + (-(iVar5 - 1U >> 0x1f) & 0xfffffffc00000000 | iVar5 - 1U << 2));
            if ((uVar2 < 0x25) && ((0xc30000000U >> (uVar2 & 0x3f) & 1) == 0)) {
                uVar1 = *(iVar3 + iVar5 * 4);
                seq_printf(arg1,"%s %u.%u\n",*(obj.pmic_models + uVar2 * 8),uVar1 >> 0x10,uVar1 & 0xffff);
            }
            else {
                seq_printf(arg1,"unknown (%d)\n");
            }
            iVar4 = iVar4 + -1;
            iVar5 = iVar5 + 2;
        } while (iVar4 != 0);
    }
    return 0;
}


// ===== sym.qcom_open_pmic_model @ 0x08008170 (size 56) =====

void sym.qcom_open_pmic_model(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.qcom_show_pmic_model.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.qcom_show_pmic_model @ 0x080081a8 (size 108) =====

ulong sym.qcom_show_pmic_model(int64_t arg1)

{
    uint16_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x80) + 0x44);
    if ((uVar1 < 0x25) && ((0xc30000000U >> (uVar1 & 0x3f) & 1) == 0)) {
        seq_printf(arg1,0x80024cd,*(obj.pmic_models + uVar1 * 8));
    }
    else {
        seq_printf(arg1,"unknown (%d)\n");
    }
    return 0;
}


// ===== sym.qcom_open_pmic_die_rev @ 0x08008214 (size 56) =====

void sym.qcom_open_pmic_die_rev(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.qcom_show_pmic_die_revision.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.qcom_show_pmic_die_revision @ 0x0800824c (size 64) =====

ulong sym.qcom_show_pmic_die_revision(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x80) + 0x48);
    seq_printf(arg1,"%u.%u\n",uVar1 >> 0x10,uVar1 & 0xffff);
    return 0;
}


// ===== sym.qcom_open_build_id @ 0x0800828c (size 56) =====

void sym.qcom_open_build_id(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.qcom_show_build_id.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.qcom_show_build_id @ 0x080082c4 (size 56) =====

ulong sym.qcom_show_build_id(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(arg1,0x80024cd,*(arg1 + 0x80) + 0xc);
    return 0;
}


// ===== sym.open_image_name @ 0x080082fc (size 56) =====

void sym.open_image_name(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.show_image_name.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.show_image_name @ 0x08008334 (size 60) =====

ulong sym.show_image_name(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (**(arg1 + 0x80) != '\0') {
        seq_printf(arg1,0x80024cd);
    }
    return 0;
}


// ===== sym.open_image_variant @ 0x08008370 (size 56) =====

void sym.open_image_variant(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.show_image_variant.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.show_image_variant @ 0x080083a8 (size 60) =====

ulong sym.show_image_variant(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x80) + 0x4b) != '\0') {
        seq_printf(arg1,0x80024cd);
    }
    return 0;
}


// ===== sym.open_image_oem @ 0x080083e4 (size 56) =====

void sym.open_image_oem(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.show_image_oem.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.show_image_oem @ 0x0800841c (size 60) =====

ulong sym.show_image_oem(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x80) + 0x60) != '\0') {
        seq_printf(arg1,0x80024cd);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08008458 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800849c

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
    //switch table (4 cases) at 0x800080d
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80084b0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080085f4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_socinfo_probe.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08008628 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_socinfo_probe.0e084c5dbf7c5e3ec6144a757525691e.cfi_jt);
    return;
}

