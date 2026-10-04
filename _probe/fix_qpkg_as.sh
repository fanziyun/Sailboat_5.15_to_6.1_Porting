#!/usr/bin/env bash
# qpkg's cross-gcc has an empty exec-prefix: it searches PATH for plain "as"/"ld"
# and finds the host (x86) ones. Symlink the aarch64 variants to the plain names
# inside qpkg so PATH=$HOME/qpkg/usr/bin:$PATH makes it pick the right ones.
cd "$HOME/qpkg/usr/bin" || exit 1
for t in as ld ar ranlib strip objcopy objdump; do
    if [ -x "aarch64-linux-gnu-$t" ] && [ ! -e "$t" ]; then
        ln -s "aarch64-linux-gnu-$t" "$t"
        echo "linked $t -> aarch64-linux-gnu-$t"
    fi
done
export PATH="$HOME/qpkg/usr/bin:$PATH"
printf 'int _start(void){return 0;}\n' > /tmp/t.c
aarch64-linux-gnu-gcc -static -nostdlib -c /tmp/t.c -o /tmp/t.o && echo COMPILE_OK
