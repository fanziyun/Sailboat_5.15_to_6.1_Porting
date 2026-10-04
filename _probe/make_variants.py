#!/usr/bin/env python3
"""Make exact-string vermagic variants of the probe .ko.

The first attempt padded "5.15.78" into a 65-byte slot, which dropped the
" SMP preempt mod_unload modversions aarch64" tail. that makes the test
ambiguous: a mismatch could be the version OR the missing flags.

These variants control for that:

  probe_220.ko  5.15.220-g17730f38b70b SMP preempt mod_unload modversions aarch64
  probe_78f.ko  5.15.78 SMP preempt mod_unload modversions aarch64     <- byte-identical to vendor
  probe_v78.ko  5.15.78-g17730f38b70b SMP preempt mod_unload modversions aarch64
                <- only the leading version number changed

probe_78f vs the vendor string rules out the flags. probe_v78 isolates the
version number alone. If probe_78f loads and probe_v78 does not, the kernel
compares the whole string including the flags, and the version alone is not
what matters -- which would mean the vendor modules are NOT passing a plain
string compare and something else is going on.
"""
import sys

SRC = '/root/kt/probe.ko'

FULL = 'SMP preempt mod_unload modversions aarch64'

VARIANTS = {
    'probe_220.ko': '5.15.220-g17730f38b70b ' + FULL,
    'probe_78f.ko': '5.15.78 ' + FULL,
    'probe_v78.ko': '5.15.78-g17730f38b70b ' + FULL,
}

base = bytearray(open(SRC, 'rb').read())
marker = b'vermagic='
i = base.find(marker)
if i < 0:
    raise SystemExit('no vermagic= in %s' % SRC)
start = i + len(marker)
end = base.find(b'\x00', start)
room = end - start
orig = bytes(base[start:end]).decode('latin1')
print('slot size : %d' % room)
print('original  : %r' % orig)

for name, new in VARIANTS.items():
    if len(new) > room:
        raise SystemExit('%s: %d bytes > %d slot' % (name, len(new), room))
    data = bytearray(base)
    data[start:end] = new.encode('latin1') + b'\x00' * (room - len(new))
    out = '/root/kt/' + name
    open(out, 'wb').write(bytes(data))
    print('%-14s %-58r (pad %d)' % (name, new, room - len(new)))
