#!/usr/bin/env python3
"""Create a vermagic-variant of the probe .ko by patching the .modinfo string.

The vermagic is a plain NUL-terminated string inside .modinfo, so rewriting it
is a byte-level substitution with no recompile. Length must not grow (the section
is fixed-size), so the replacement is padded with NULs.

Two variants make the device test decisive:

  probe.ko    5.15.220-g17730f38b70b  <- what AOSP android13-5.15-lts emits
  probe78.ko  5.15.78                 <- what the 293 vendor modules carry

Neither carries __versions CRCs (Module.symvers was absent at build time), so
check_version() takes the `versindex == 0` path and only the vermagic string is
actually compared. That isolates exactly the variable under test.
"""
import shutil
import sys

SRC = sys.argv[1] if len(sys.argv) > 1 else '/root/kt/probe.ko'
DST = sys.argv[2] if len(sys.argv) > 2 else '/root/kt/probe78.ko'
NEW = sys.argv[3] if len(sys.argv) > 3 else '5.15.78'

data = bytearray(open(SRC, 'rb').read())

marker = b'vermagic='
i = data.find(marker)
if i < 0:
    raise SystemExit('vermagic= not found in %s' % SRC)

start = i + len(marker)
end = data.find(b'\x00', start)
if end < 0:
    raise SystemExit('unterminated vermagic string')

old = bytes(data[start:end]).decode('latin1')
new = NEW
room = end - start
if len(new) > room:
    raise SystemExit('replacement %r (%d) longer than slot (%d)' % (new, len(new), room))

# overwrite and NUL-pad the remainder of the original slot
data[start:end] = new.encode('latin1') + b'\x00' * (room - len(new))

open(DST, 'wb').write(bytes(data))
print('src   : %s' % SRC)
print('dst   : %s' % DST)
print('old   : %r' % old)
print('new   : %r  (slot was %d bytes, padded %d)' % (new, room, room - len(new)))
