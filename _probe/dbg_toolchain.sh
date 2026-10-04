#!/usr/bin/env bash
export PATH="$HOME/qpkg/usr/bin:$PATH"
echo "which as: $(which aarch64-linux-gnu-as)"
echo "gcc resolves as -> $(aarch64-linux-gnu-gcc -print-prog-name=as)"
ls "$HOME/qpkg/usr/bin" | grep -E '^(aarch64-)?(as|ld)$|as$' | head
echo "--- test compile ---"
printf 'int _start(void){return 0;}\n' > /tmp/t.c
~/qpkg/usr/bin/aarch64-linux-gnu-gcc -static -nostdlib -c /tmp/t.c -o /tmp/t.o && echo COMPILE_OK
