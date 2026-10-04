#!/usr/bin/env python3
"""Size-neutral rebuild of vendor_boot_a: move the verified ramoops node from
vendor_boot_a_p1.img's DTB[2] into the stock vendor_boot_a's DTB[2] so that
DTB[2] keeps its EXACT original size (510,596 bytes). All other DTBs stay at
their original offsets; the vendor_boot header is untouched (dtb_size stays
3,885,131). Result differs from stock only inside the DTB[2] region."""
import struct, sys

ORIG = '_probe/backup/vendor_boot_a.img'
P1   = '_probe/vendor_boot_a_p1.img'
OUT  = '_probe/vendor_boot_a_fixed.img'
DTB2_OFF = 0x1E616B3
DTB2_LEN = 510596          # original DTB[2] totalsize, must not change
DTB2_LEN_P1 = 510811       # DTB[2] size in p1 (grown by +215)

FDT_BEGIN_NODE, FDT_END_NODE, FDT_PROP, FDT_NOP, FDT_END = 1, 2, 3, 4, 9

def parse_fdt(blob):
    (magic, totalsize, off_struct, off_strings, off_rsv, ver, lastc,
     cpuid, size_strings, size_struct) = struct.unpack('>10I', blob[:40])
    assert magic == 0xd00dfeed, 'bad magic'
    hdr = dict(totalsize=totalsize, off_struct=off_struct, off_strings=off_strings,
               off_rsv=off_rsv, ver=ver, lastc=lastc, cpuid=cpuid,
               size_strings=size_strings, size_struct=size_struct)
    struct_blk = blob[off_struct:off_struct+size_struct]
    strings = blob[off_strings:off_strings+size_strings]
    return hdr, struct_blk, strings

def walk(struct_blk, strings):
    """Yield events: ('node', name, pos_after_begin, pos_before_end) and
    ('endnode', pos) with flat positions in the structure block."""
    pos = 0
    stack = []
    events = []
    while pos < len(struct_blk):
        tok = struct.unpack('>I', struct_blk[pos:pos+4])[0]
        if tok == FDT_BEGIN_NODE:
            end = struct_blk.index(b'\0', pos+4)
            name = struct_blk[pos+4:end].decode()
            events.append(('begin', name, pos, end))
            stack.append(name)
            pos = (end + 4) & ~3
        elif tok == FDT_END_NODE:
            events.append(('endnode', stack.pop(), pos, pos+4))
            pos += 4
        elif tok == FDT_PROP:
            plen, nameoff = struct.unpack('>II', struct_blk[pos+4:pos+12])
            vend = (pos+12+plen+3) & ~3
            pname = strings[nameoff:strings.index(b'\0', nameoff)].decode()
            events.append(('prop', pname, pos, vend, plen, nameoff,
                           struct_blk[pos+12:pos+12+plen]))
            pos = vend
        elif tok == FDT_NOP:
            pos += 4
        elif tok == FDT_END:
            events.append(('fdtend', None, pos, pos+4))
            break
        else:
            raise RuntimeError('bad token %d @%d' % (tok, pos))
    return events

orig = open(ORIG, 'rb').read()
p1   = open(P1, 'rb').read()

od2 = orig[DTB2_OFF:DTB2_OFF+DTB2_LEN]
pd2 = p1[DTB2_OFF:DTB2_OFF+DTB2_LEN_P1]

oh, ost, ostr = parse_fdt(od2)
ph, pst, pstr = parse_fdt(pd2)
print('orig hdr:', oh)
print('p1   hdr:', ph)

def walk2(struct_blk):
    pos = 0
    out = []
    depth = 0
    while pos < len(struct_blk):
        tok = struct.unpack('>I', struct_blk[pos:pos+4])[0]
        if tok == FDT_BEGIN_NODE:
            end = struct_blk.index(b'\0', pos+4)
            out.append(('begin', struct_blk[pos+4:end].decode(), pos, (end+4)&~3, depth))
            depth += 1
            pos = (end + 4) & ~3
        elif tok == FDT_END_NODE:
            depth -= 1
            out.append(('endnode', None, pos, pos+4, depth))
            pos += 4
        elif tok == FDT_PROP:
            plen, nameoff = struct.unpack('>II', struct_blk[pos+4:pos+12])
            vend = (pos+12+plen+3) & ~3
            out.append(('prop', nameoff, pos, vend, plen, pos+12, depth))
            pos = vend
        elif tok == FDT_NOP:
            pos += 4
        elif tok == FDT_END:
            out.append(('fdtend', None, pos, pos+4, depth))
            break
        else:
            raise RuntimeError('bad token %d @%d' % (tok, pos))
    return out

pev = walk2(pst)
pstart = pend = None
for ev in pev:
    if ev[0] == 'begin' and ev[1] == 'ramoops@e8000000':
        pstart = ev[2]
    if ev[0] == 'endnode' and pstart is not None and ev[4] == 1 and ev[2] > pstart:
        pend = ev[3]
        break
assert pstart is not None and pend is not None
node_block = pst[pstart:pend]
print('ramoops node block: %d bytes' % len(node_block))

# props of that node: nameoffs used
node_props = [ev for ev in pev if ev[0] == 'prop' and pstart <= ev[2] < pend]
used = []
for ev in node_props:
    nameoff = ev[1]
    name = pstr[nameoff:pstr.index(b'\0', nameoff)]
    used.append((nameoff, name))
print('props:', [(n.decode(), o) for o, n in used])

# 2. find /reserved-memory END_NODE insertion point in ORIG structure
oev = walk2(ost)
rm_start = rm_end = None
for ev in oev:
    if ev[0] == 'begin' and ev[1] == 'reserved-memory':
        rm_start = ev[2]
    if ev[0] == 'endnode' and rm_start is not None and ev[4] == 1 and ev[2] > rm_start:
        rm_end = ev[3]
        break
assert rm_start is not None and rm_end is not None, 'reserved-memory not found'
print('reserved-memory body in orig struct: [%d, %d)' % (rm_start, rm_end))

# 3. remap prop nameoffs: names already in orig strings keep offset; else append
new_strings_extra = bytearray()
new_nameoff = {}
for nameoff, name in used:
    if nameoff < oh['size_strings']:
        assert ostr[nameoff:nameoff+len(name)+1] == name + b'\0', 'string mismatch'
        new_nameoff[nameoff] = nameoff      # unchanged
    else:
        # find or append
        idx = ostr.find(name + b'\0')
        if idx >= 0 and idx < oh['size_strings']:
            new_nameoff[nameoff] = idx
        elif name + b'\0' in bytes(new_strings_extra):
            off = bytes(new_strings_extra).index(name + b'\0')
            new_nameoff[nameoff] = oh['size_strings'] + off
        else:
            new_nameoff[nameoff] = oh['size_strings'] + len(new_strings_extra)
            new_strings_extra += name + b'\0'

# rewrite nameoffs inside the node block
fixed = bytearray(node_block)
i = 0
while i < len(fixed):
    tok = struct.unpack('>I', fixed[i:i+4])[0]
    if tok == FDT_PROP:
        plen = struct.unpack('>I', fixed[i+4:i+8])[0]
        old_nameoff = struct.unpack('>I', fixed[i+8:i+12])[0]
        struct.pack_into('>I', fixed, i+8, new_nameoff[old_nameoff])
        i = (i+12+plen+3) & ~3
    elif tok in (FDT_BEGIN_NODE, FDT_END_NODE, FDT_NOP):
        i += 4
    elif tok == FDT_END:
        break
    else:
        raise RuntimeError('bad token in node block @%d' % i)

# 4. build new structure/strings, tight packing
new_struct = ost[:rm_end] + bytes(fixed) + ost[rm_end:]
new_strings = ostr + bytes(new_strings_extra)
new_off_struct = oh['off_struct']
new_size_struct = len(new_struct)
new_off_strings = new_off_struct + new_size_struct
new_size_strings = len(new_strings)
total_needed = new_off_strings + new_size_strings
print('needed=%d budget=%d' % (total_needed, DTB2_LEN))
assert total_needed <= DTB2_LEN, 'does not fit!'

newhdr = struct.pack('>10I', 0xd00dfeed, DTB2_LEN, new_off_struct,
                     new_off_strings, oh['off_rsv'], oh['ver'], oh['lastc'],
                     oh['cpuid'], new_size_strings, new_size_struct)
body = bytearray(DTB2_LEN)
body[0:40] = newhdr
body[new_off_struct:new_off_struct+new_size_struct] = new_struct
body[new_off_strings:new_off_strings+new_size_strings] = new_strings
nd2 = bytes(body)
assert len(nd2) == DTB2_LEN

# 5. sanity: rewalk and confirm node + all orig nodes/props preserved
nh, nst, nstr = parse_fdt(nd2)
nev = walk2(nst)
names_new = [ev[1] for ev in nev if ev[0] == 'begin']
names_old = [ev[1] for ev in oev if ev[0] == 'begin']
assert 'ramoops@e8000000' in names_new
assert sorted(names_old) == sorted([n for n in names_new if n != 'ramoops@e8000000'])
def props_of(events, nodename, strings):
    span = []
    grab = False
    for ev in events:
        if ev[0] == 'begin' and ev[1] == nodename: grab = True
        elif ev[0] == 'endnode' and grab:
            return span
        elif grab and ev[0] == 'prop':
            name = strings[ev[1]:strings.index(b'\0', ev[1])]
            span.append((name.decode(), ev[5]))
    return span
pn = props_of(nev, 'ramoops@e8000000', nstr)
pp = props_of(pev, 'ramoops@e8000000', pstr)
assert pn == pp, (pn, pp)
print('new node props:', [(n.decode(), v.hex()) for n, v in pn])

# 6. splice into full image
out = orig[:DTB2_OFF] + nd2 + orig[DTB2_OFF+DTB2_LEN:]
assert len(out) == len(orig)
d = [i for i in range(len(out)) if out[i] != orig[i]]
print('image byte diffs vs stock: %d bytes, range 0x%x..0x%x'
      % (len(d), d[0], d[-1]))
assert d[0] >= DTB2_OFF and d[-1] < DTB2_OFF+DTB2_LEN, 'diff outside DTB[2]!'
open(OUT, 'wb').write(out)
open('_probe/dtb2_fixed.dtb', 'wb').write(nd2)
open('_probe/dtb2_orig.dtb', 'wb').write(od2)
print('WROTE', OUT)
