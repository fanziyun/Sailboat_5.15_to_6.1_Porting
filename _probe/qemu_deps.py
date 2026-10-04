#!/usr/bin/env python3
"""Find QEMU's missing shared-library packages in an Arch mirror listing."""
import re
import subprocess
import sys

MIRROR = "https://mirror.rackspace.com/archlinux/extra/os/x86_64"

need = {
    "capstone": "libcapstone.so.5",
    "libpng": "libpng16.so.16",
    "pixman": "libpixman-1.so.0",
    "libjpeg-turbo": "libjpeg.so.8",
    "snappy": "libsnappy.so.1",
    "lzo": "liblzo2.so.2",
    "numactl": "libnuma.so.1",
    "rdma-core": "librdmacm.so.1",
    "vde2": "libvdeplug.so.3",
    "libslirp": "libslirp.so.4",
    "glib2": "libglib-2.0.so.0",
    "zstd": "libzstd.so.1",
    "libaio": "libaio.so.1",
    "liburing": "liburing.so.2",
    "libusb": "libusb-1.0.so.0",
    "pcre2": "libpcre2-8.so.0",
    "libxkbcommon": "libxkbcommon.so.0",
    "fuse3": "libfuse3.so.3",
    "gnutls": "libgnutls.so.30",
    "nettle": "libnettle.so.8",
    "libtasn1": "libtasn1.so.6",
    "p11-kit": "libp11-kit.so.0",
    "libidn2": "libidn2.so.0",
    "libunistring": "libunistring.so.5",
    "libffi": "libffi.so.8",
    "libgcrypt": "libgcrypt.so.20",
    "libseccomp": "libseccomp.so.2",
    "libselinux": "libselinux.so.1",
    "libcbor": "libcbor.so.0",
    "libfido2": "libfido2.so.1",
    "libxml2": "libxml2.so.2",
    "liblzma": "liblzma.so.5",
    "freetype2": "libfreetype.so.6",
    "fontconfig": "libfontconfig.so.1",
    "brotli": "libbrotlidec.so.1",
    "expat": "libexpat.so.1",
    "libbsd": "libbsd.so.0",
    "zlib": "libz.so.1",
    "libcap": "libcap.so.2",
    "attr": "libattr.so.1",
    "libmd": "libmd.so.0",
    "db": "libdb-5.3.so",
    "gmp": "libgmp.so.10",
    "libevent": "libevent-2.1.so.7",
    "systemd": "libsystemd.so.0",
    "libsasl": "libsasl2.so.3",
}

h = subprocess.run(["curl", "-s", MIRROR + "/"], capture_output=True, text=True).stdout
avail = {}
for m in re.finditer(r'>([a-z0-9][a-z0-9._+-]*?)-([0-9][^\s"_<]*?)-x86_64\.pkg\.tar\.(?:zst|xz)<', h):
    avail[m.group(1)] = m.group(0)[1:-1]

print("mirror lists %d packages" % len(avail))
todo = []
for pkg in sorted(need):
    if pkg in avail:
        todo.append(avail[pkg])
    else:
        # try prefixed variants (libfoo / libfoo-*)
        cands = [v for k, v in avail.items() if k.startswith(pkg)]
        if cands:
            todo.append(cands[0])
print("\nwill download %d:" % len(todo))
for t in todo:
    print("  " + t)
open("~/dl/list.txt", "w").write("\n".join(todo))
