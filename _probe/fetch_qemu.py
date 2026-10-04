#!/usr/bin/env python3
"""Download QEMU + its shared-library deps from an Arch mirror, no root needed."""
import os
import re
import subprocess
import sys

MIRROR = "https://mirror.rackspace.com/archlinux/extra/os/x86_64"
DL = "/home/fanziyun/dl"
ROOT = "/home/fanziyun/qpkg"

NEED = [
    "capstone", "libpng", "pixman", "libjpeg-turbo", "snappy", "lzo",
    "numactl", "rdma-core", "vde2", "libslirp", "glib2", "zstd", "libaio",
    "liburing", "libusb", "pcre2", "libxkbcommon", "fuse3", "gnutls",
    "nettle", "libtasn1", "p11-kit", "libidn2", "libunistring", "libffi",
    "libgcrypt", "libseccomp", "libselinux", "libcbor", "libfido2",
    "libxml2", "liblzma", "freetype2", "fontconfig", "brotli", "expat",
    "libbsd", "zlib", "libcap", "attr", "libmd", "gmp", "libevent",
    "db", "systemd", "libsasl", "graphite", "harfbuzz", "libdatrie",
    "libthai", "libxau", "libxdmcp", "libxcb", "libx11", "libxext",
    "libxrender", "libxft", "wayland", "libepoxy", "libpng", "librsvg",
    "cairo", "pango", "shared-mime-info", "libice", "libsm",
]


def listing():
    h = subprocess.run(["curl", "-s", MIRROR + "/"], capture_output=True, text=True).stdout
    out = {}
    for m in re.finditer(r'([a-z0-9][a-z0-9._+-]*?)-([0-9][^\s"]*?)-x86_64\.pkg\.tar\.(?:zst|xz)', h):
        out.setdefault(m.group(1), m.group(0))
    return out


def main():
    os.makedirs(DL, exist_ok=True)
    avail = listing()
    print("mirror offers %d unique package names" % len(avail))
    if not avail:
        print("listing parse failed -- is the mirror reachable?")
        return 1

    todo = []
    missing = []
    for want in NEED:
        if want in avail:
            todo.append(avail[want])
            continue
        pref = [v for k, v in avail.items() if k.startswith(want)]
        if pref:
            todo.append(pref[0])
        else:
            missing.append(want)

    print("\nresolved %d packages" % len(todo))
    if missing:
        print("NOT in this mirror (may come from core/ or system libs): %s"
              % ", ".join(missing[:20]))

    # qemu itself lives in extra too
    if "qemu-system-aarch64" in avail:
        todo.append(avail["qemu-system-aarch64"])

    print("\ndownloading %d packages..." % len(todo))
    for name in todo:
        dst = os.path.join(DL, name)
        if os.path.exists(dst) and os.path.getsize(dst) > 4096:
            print("  have  %s" % name)
            continue
        subprocess.run(["curl", "-sO", MIRROR + "/" + name], cwd=DL, check=False)
        sz = os.path.getsize(dst) if os.path.exists(dst) else 0
        print("  %s  %s (%d bytes)" % ("got " if sz > 4096 else "BAD ", name, sz))

    print("\nextracting...")
    for name in todo:
        p = os.path.join(DL, name)
        if os.path.exists(p) and os.path.getsize(p) > 4096:
            subprocess.run(["tar", "-xf", p, "-C", ROOT], check=False)
    print("done -> %s/usr/bin/qemu-system-aarch64" % ROOT)


if __name__ == "__main__":
    sys.exit(main())
