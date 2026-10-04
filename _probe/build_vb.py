#!/usr/bin/env python3
# build_vb.py — 生成测试用 vendor_boot 镜像（DTB ramoops 补丁 + 可选 modules.load 编辑）
#
# 输入: 原厂 vendor_boot 镜像(任意槽) + 补丁后的 DTB[2]
# 输出: 新 vendor_boot 镜像。lz4 ramdisk 区只变不长(编辑只删行)，DTB 区原样
#       重排(8 个 DTB 紧密相连，DTB[2] 尺寸变化只影响其后 DTB 的绝对位置，
#       ABL 顺序遍历 FDT 头，头部只更新 +0x834 dtb_size)。
#
# 用法:
#   python3 build_vb.py <src_vb.img> <dtb2_patched.dtb> <out.img> \
#       [--exclude boot_stats.ko ...] [--keep a.ko,b.ko] [--keep-list]

import struct
import sys

import lz4.block

RAMDISK_OFF = 0x1000
VRSIZE_OFF = 0x18
DTB_OFF = 0x1D83000
DTBSIZE_OFF = 0x834
LZ4_MAGIC = 0x184C2102
BLOCK_UNC = 8 * 1024 * 1024


def decompress_legacy(blob):
    assert struct.unpack_from("<I", blob, 0)[0] == LZ4_MAGIC
    pos, out = 4, bytearray()
    while pos + 4 <= len(blob):
        comp = struct.unpack_from("<I", blob, pos)[0]
        if comp == 0 or comp > 20 * 1024 * 1024:
            break
        out += lz4.block.decompress(blob[pos + 4:pos + 4 + comp],
                                    uncompressed_size=BLOCK_UNC)
        pos += 4 + comp
    return bytes(out)


def compress_legacy(data):
    stream = bytearray(struct.pack("<I", LZ4_MAGIC))
    for i in range(0, len(data), BLOCK_UNC):
        blk = lz4.block.compress(data[i:i + BLOCK_UNC], mode="high_compression",
                                 compression=12, store_size=False)
        stream += struct.pack("<I", len(blk)) + blk
    return bytes(stream)


def find_entry(cpio, name):
    name_b = name.encode()
    i = cpio.find(name_b + b"\x00")
    assert i >= 0, name
    hdr = i - 110
    assert cpio[hdr:hdr + 6] == b"070701"
    filesize = int(cpio[hdr + 54:hdr + 62], 16)      # field 6
    namesize = int(cpio[hdr + 94:hdr + 102], 16)     # field 11 (不是 86!)
    assert namesize == len(name_b) + 1, (namesize, len(name_b))
    data_off = (i + namesize + 3) & ~3
    return data_off, filesize


def edit_list(cpio, name, excludes, keep):
    off, size = find_entry(cpio, name)
    rows = cpio[off:off + size].rstrip(b"\n").split(b"\n")
    exb = [e.encode() for e in excludes or []]
    kpb = [k.encode() for k in keep] if keep else None
    newrows = [r.strip() for r in rows
               if r.strip() and not (exb and any(r.strip().endswith(e) for e in exb))
               and not (kpb and not any(r.strip().endswith(k) for k in kpb))]
    new = b"\n".join(newrows) + b"\n"
    assert len(new) <= size
    new += b"\n" * (size - len(new))
    print("  %s: %d -> %d modules" % (name, len(rows), len(newrows)))
    return cpio[:off] + new + cpio[off + size:]


def main():
    src, dtb_new_path, dst = sys.argv[1], sys.argv[2], sys.argv[3]
    excludes, keep = [], None
    args = sys.argv[4:]
    i = 0
    while i < len(args):
        if args[i] == "--exclude":
            excludes.append(args[i + 1]); i += 2
        elif args[i] == "--keep":
            keep = args[i + 1].split(","); i += 2
        elif args[i] == "--keep-list":
            keep = [l.strip() for l in open(args[i + 1]) if l.strip()]; i += 2
        else:
            raise SystemExit("bad arg " + args[i])

    raw = open(src, "rb").read()
    vrsz = struct.unpack_from("<I", raw, VRSIZE_OFF)[0]
    dtbsz = struct.unpack_from("<I", raw, DTBSIZE_OFF)[0]

    # --- ramdisk: 解压 -> (可选)编辑 modules.load*. -> 重压
    cpio = decompress_legacy(raw[RAMDISK_OFF:RAMDISK_OFF + vrsz])
    if excludes or keep:
        for name in ("lib/modules/modules.load", "lib/modules/modules.load.recovery"):
            cpio = edit_list(cpio, name, excludes, keep)
    stream = compress_legacy(cpio)
    rt = decompress_legacy(stream)
    assert rt == cpio, "ramdisk roundtrip mismatch"
    assert RAMDISK_OFF + len(stream) <= DTB_OFF, "ramdisk overruns DTB offset"
    print("ramdisk: %d -> %d lz4 bytes (cpio %d)" % (vrsz, len(stream), len(cpio)))

    # --- DTB 区: 替换 DTB[2] 为补丁版，其余原样重排
    dtb_new = open(dtb_new_path, "rb").read()
    off = DTB_OFF
    dts = []
    while off < DTB_OFF + dtbsz:
        assert raw[off:off + 4] == b"\xd0\x0d\xfe\xed", hex(off)
        total = struct.unpack_from(">I", raw, off + 4)[0]
        dts.append((off, total))
        off += total
    assert len(dts) == 8, len(dts)
    o2, s2 = dts[2]
    new_dtb_region = raw[DTB_OFF:o2] + dtb_new + raw[o2 + s2:DTB_OFF + dtbsz]
    new_dtbsz = len(new_dtb_region)
    print("dtb region: %d -> %d bytes (DTB[2] %d -> %d)" %
          (dtbsz, new_dtbsz, s2, len(dtb_new)))

    # --- 组装: 头(+0x18/+0x834 更新) + ramdisk + 补零到 DTB 偏移 + DTB 区 + 其余原样
    hdr = bytearray(raw[:RAMDISK_OFF])
    struct.pack_into("<I", hdr, VRSIZE_OFF, len(stream))
    out = bytes(hdr) + stream
    out += b"\x00" * (DTB_OFF - len(out))
    out += new_dtb_region
    tail = raw[DTB_OFF + dtbsz:]
    # DTB 区可能增大 → 从尾部零填充里截掉等量字节，保持分区镜像大小不变
    assert len(tail) >= new_dtbsz - dtbsz and set(tail[:new_dtbsz - dtbsz]) <= {0}
    out += tail[new_dtbsz - dtbsz:]
    out = bytearray(out)
    struct.pack_into("<I", out, DTBSIZE_OFF, new_dtbsz)
    assert len(out) == len(raw), (len(out), len(raw))
    open(dst, "wb").write(bytes(out))
    print("written %s (%d bytes)" % (dst, len(out)))


if __name__ == "__main__":
    main()
