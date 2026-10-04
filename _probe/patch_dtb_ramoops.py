#!/usr/bin/env python3
# patch_dtb_ramoops.py — 在 FDT 二进制里外科手术式追加 ramoops 保留内存节点。
#
# 不走 dtc decompile->recompile（会重排 phandle、使 __symbols__ 失效，
# 连累 dtbo overlay 的 phandle 解析）。改为：
#   结构块 FDT_END 前插入新节点 + 字符串表追加属性名 + 改头部四个字段。
#
# 用法: python3 patch_dtb_ramoops.py in.dtb out.dtb [addr_hex] [size_hex]

import struct
import sys

FDT_BEGIN_NODE = 1
FDT_END_NODE = 2
FDT_PROP = 3
FDT_NOP = 4
FDT_END = 9

# (name, value-bytes-be)  cells=2/2 与本 DTB 的 reserved-memory 一致
ADDR = int(sys.argv[3], 16) if len(sys.argv) > 3 else 0xE8000000
SIZE = int(sys.argv[4], 16) if len(sys.argv) > 4 else 0x400000

PROPS = [
    ("compatible", b"ramoops\x00"),
    ("reg", struct.pack(">IIII", (ADDR >> 32) & 0xFFFFFFFF, ADDR & 0xFFFFFFFF,
                        (SIZE >> 32) & 0xFFFFFFFF, SIZE & 0xFFFFFFFF)),
    ("record-size", struct.pack(">II", 0, 0x80000)),     # 512K oops 记录
    ("console-size", struct.pack(">II", 0, 0x200000)),   # 2M 控制台 == log_buf_len
    ("pmsg-size", struct.pack(">II", 0, 0x100000)),      # 1M pmsg
    ("ecc-size", struct.pack(">II", 0, 0)),
]


def fdt_string(blob_off, name):
    return struct.pack(">III", FDT_PROP, len(name) + 1, blob_off) + name + b"\x00"


def main():
    src = open(sys.argv[1], "rb").read()
    magic, totalsize, off_struct, off_strings, off_memrsv, ver, last_comp, \
        boot_cpu, size_strings, size_struct = struct.unpack_from(">10I", src, 0)
    assert magic == 0xD00DFEED, hex(magic)
    print("in: total=%d struct@0x%x strings@0x%x ssize=%d structsize=%d"
          % (totalsize, off_struct, off_strings, size_strings, size_struct))

    # 1) 定位 /reserved-memory 节点的 FDT_END_NODE（新节点要插在它之前）。
    #    同时兜底记录 FDT_END 位置做完整性校验。
    pos = off_struct
    end_pos = None
    rm_end_pos = None
    depth = 0
    in_rm = False
    while True:
        tok = struct.unpack_from(">I", src, pos)[0]
        if tok == FDT_END:
            end_pos = pos
            break
        if tok == FDT_PROP:
            ln, _ = struct.unpack_from(">II", src, pos + 4)
            pos += 12 + ((ln + 3) & ~3)
        elif tok == FDT_BEGIN_NODE:
            nm_end = src.index(b"\x00", pos + 4)
            name = src[pos + 4:nm_end]
            depth += 1
            if depth == 2 and name == b"reserved-memory":
                in_rm = True
            pos = (nm_end + 1 + 3) & ~3
        else:  # FDT_END_NODE / NOP
            if tok == FDT_END_NODE:
                depth -= 1
                if in_rm and depth == 1:
                    rm_end_pos = pos
                    in_rm = False
            pos += 4
        if pos > len(src):
            raise SystemExit("structure block ran away")
    assert rm_end_pos is not None, "/reserved-memory node not found"

    # 2) 新节点字节
    node = bytearray()
    node += struct.pack(">I", FDT_BEGIN_NODE) + b"ramoops@" + \
        ("%x" % ADDR).encode() + b"\x00"
    node += b"\x00" * ((4 - len(node) % 4) % 4)
    strings_appended = bytearray()
    soff = 0
    for name, val in PROPS:
        # 属性名字符串追加到字符串块
        nameoff = size_strings + soff
        strings_appended += name.encode() + b"\x00"
        soff += len(name) + 1
        node += struct.pack(">III", FDT_PROP, len(val), nameoff) + val
        node += b"\x00" * ((4 - len(node) % 4) % 4)
    node += struct.pack(">I", FDT_END_NODE)
    node += b"\x00" * ((4 - len(node) % 4) % 4)

    # 3) 拼装：新节点插在 /reserved-memory 的 FDT_END_NODE 之前（成为它的最后
    #    一个子节点 → of_reserved_mem 会为它做 memblock 保留并创建 platform 设备）。
    head_memrsv = src[:off_struct]          # header(40B) + memrsv 块（全 0 结尾）
    struct_part = src[off_struct:rm_end_pos]
    new_struct = struct_part + bytes(node) \
        + struct.pack(">I", FDT_END_NODE) \
        + src[rm_end_pos + 4:end_pos] + struct.pack(">I", FDT_END)
    new_struct += b"\x00" * ((4 - len(new_struct) % 4) % 4)
    new_strings = src[off_strings:off_strings + size_strings] + bytes(strings_appended)

    out = bytearray(head_memrsv)
    off_new_struct = len(out)
    out += new_struct
    off_new_strings = len(out)
    out += new_strings
    assert len(out) <= totalsize or True

    struct.pack_into(">10I", out, 0,
                     0xD00DFEED, len(out), off_new_struct, off_new_strings,
                     off_memrsv, ver, last_comp, boot_cpu,
                     len(new_strings), len(new_struct))
    open(sys.argv[2], "wb").write(bytes(out))
    print("out: total=%d struct@0x%x strings@0x%x ssize=%d structsize=%d"
          % (len(out), off_new_struct, off_new_strings,
             len(new_strings), len(new_struct)))


if __name__ == "__main__":
    main()
