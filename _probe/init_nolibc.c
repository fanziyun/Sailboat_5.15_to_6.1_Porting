/* Phase 1 init -- freestanding, no libc.
 *
 * Cross-compiled with:
 *   aarch64-linux-gnu-gcc -static -nostdlib -nostdinc -ffreestanding \
 *       -isystem ~/uapi/include -o init init.c
 *
 * Uses raw aarch64 syscalls so no libc or crt is needed. This keeps the
 * initramfs to a single object file plus the module.
 *
 * Sequence, in order:
 *   1. mount proc / sysfs / devtmpfs
 *   2. read + init_module() the CFI-instrumented probe
 *   3. print PHASE1 markers to stdout (fd 1 -> QEMU -serial)
 *   4. reboot(RB_POWER_OFF) so QEMU exits
 *
 * delete_module() is deliberately never called: on real hardware that path is
 * where a CFI mismatch panicked the kernel.
 */

#define SYS_mount        40
#define SYS_openat       56
#define SYS_read         63
#define SYS_write        64
#define SYS_close        57
#define SYS_lseek        62
#define SYS_reboot       142
#define SYS_init_module  105
#define SYS_sync         51
#define SYS_exit         93
#define SYS_faccessat    48

#define AT_FDCWD        -100
#define O_RDONLY        0
#define SEEK_SET        0
#define SEEK_END        2
#define RB_POWER_OFF    0x4321fedc
#define F_OK            0
#define MS_NOSUID       1
#define MS_NODEV        2
#define MS_NOEXEC       4

static long sys5(long n, long a, long b, long c, long d)
{
	register long x8 __asm__("x8") = n;
	register long x0 __asm__("x0") = a;
	register long x1 __asm__("x1") = b;
	register long x2 __asm__("x2") = c;
	register long x3 __asm__("x3") = d;
	__asm__ volatile("svc #0"
			 : "+r"(x0)
			 : "r"(x1), "r"(x2), "r"(x3), "r"(x8)
			 : "memory", "cc");
	return x0;
}

static long sys6(long n, long a, long b, long c, long d, long e)
{
	register long x8 __asm__("x8") = n;
	register long x0 __asm__("x0") = a;
	register long x1 __asm__("x1") = b;
	register long x2 __asm__("x2") = c;
	register long x3 __asm__("x3") = d;
	register long x4 __asm__("x4") = e;
	__asm__ volatile("svc #0"
			 : "+r"(x0)
			 : "r"(x1), "r"(x2), "r"(x3), "r"(x4), "r"(x8)
			 : "memory", "cc");
	return x0;
}

#define sys3(n, a, b, c) sys6(n, a, b, c, 0, 0)
#define sys4(n, a, b, c, d) sys6(n, a, b, c, d, 0)
#define sys5(n, a, b, c, d, e) sys6(n, a, b, c, d, e)

static long strlen_(const char *s)
{
	long n = 0;
	while (s[n])
		n++;
	return n;
}

static void puts_(const char *s)
{
	sys3(SYS_write, 1, (long)s, strlen_(s));
}

static void say(const char *tag, const char *msg)
{
	puts_("PHASE1-");
	puts_(tag);
	puts_(": ");
	puts_(msg);
	puts_("\n");
}

static int open_(const char *path, int flags)
{
	return (int)sys3(SYS_openat, AT_FDCWD, (long)path, flags);
}

static long read_(int fd, void *buf, long len)
{
	return sys3(SYS_read, fd, (long)buf, len);
}

static long lseek_(int fd, long off, int whence)
{
	return sys3(SYS_lseek, fd, off, whence);
}

static void puts_dec(long v)
{
	char b[24];
	int i = 23;
	b[i--] = '\0';
	if (v < 0) {
		puts_("-");
		v = -v;
	}
	if (v == 0)
		b[i--] = '0';
	while (v > 0 && i >= 0) {
		b[i--] = '0' + (char)(v % 10);
		v /= 10;
	}
	puts_(&b[i + 1]);
}

static const char *errname(long e)
{
	switch (e) {
	case -1:  return "EPERM";
	case -2:  return "ENOENT";
	case -5:  return "EIO";
	case -8:  return "ENOEXEC";
	case -12: return "ENOMEM";
	case -13: return "EACCES";
	case -16: return "EBUSY";
	case -17: return "EEXIST";
	case -19: return "ENODEV";
	case -22: return "EINVAL";
	case -38: return "ENOSYS";
	case -95: return "EOPNOTSUPP";
	default:  return "?";
	}
}

void _start(void)
{
	int fd;
	long sz;
	static char img[262144];
	static char buf[512];
	long rc;
	int n;

	say("INIT-START", "userspace reached");

	sys3(SYS_mount, (long)"proc", (long)"/proc", (long)"proc", 0, 0);
	sys3(SYS_mount, (long)"sysfs", (long)"/sys", (long)"sysfs", 0, 0);
	sys3(SYS_mount, (long)"dev", (long)"/dev", (long)"devtmpfs", 0, 0);

	/* report kernel release */
	fd = open_("/proc/sys/kernel/osrelease", O_RDONLY);
	if (fd >= 0) {
		n = (int)read_(fd, buf, sizeof(buf) - 1);
		if (n > 0) {
			buf[n] = '\0';
			for (int i = 0; i < n; i++)
				if (buf[i] == '\n')
					buf[i] = '\0';
			say("KERNEL", buf);
		}
		sys3(SYS_close, fd, 0, 0);
	}

	/* load the module */
	fd = open_("/probe.ko", O_RDONLY);
	if (fd < 0) {
		say("INSMOD-FAIL", "cannot open /probe.ko");
		goto fin;
	}
	sz = lseek_(fd, 0, SEEK_END);
	lseek_(fd, 0, SEEK_SET);
	if (sz <= 0 || sz > (long)sizeof(img)) {
		say("INSMOD-FAIL", "bad module size");
		sys3(SYS_close, fd, 0, 0);
		goto fin;
	}
	n = (int)read_(fd, img, sz);
	sys3(SYS_close, fd, 0, 0);
	if (n != sz) {
		say("INSMOD-FAIL", "short read");
		goto fin;
	}

	puts_("PHASE1-INSMOD-SIZE: ");
	puts_dec(sz);
	puts_(" bytes\n");

	rc = sys3(SYS_init_module, (long)img, sz, 0);
	if (rc == 0) {
		say("INSMOD-OK", "init_module returned 0");
	} else {
		puts_("PHASE1-INSMOD-RC: ");
		puts_dec(rc);
		puts_(" (");
		puts_(errname(rc));
		puts_(")\n");
		say("INSMOD-FAIL", "init_module nonzero");
	}

	/* module present in sysfs? */
	rc = sys3(SYS_faccessat, AT_FDCWD, (long)"/sys/module/cfiprobe", F_OK, 0);
	if (rc == 0)
		say("MODULE-SYSFS", "present");
	else
		say("MODULE-SYSFS", "NOT present");

	/* dump any CFI/Oops lines from kmsg */
	fd = open_("/dev/kmsg", O_RDONLY);
	if (fd >= 0) {
		for (int k = 0; k < 40; k++) {
			n = (int)read_(fd, buf, sizeof(buf) - 1);
			if (n <= 0)
				break;
			buf[n] = '\0';
			for (int i = 0; i < n - 3; i++) {
				if (buf[i] == 'c' || buf[i] == 'C') {
					if (buf[i + 1] == 'f' && buf[i + 2] == 'i') {
						puts_("  KMSG-cfi: ");
						puts_(buf);
						puts_("\n");
						break;
					}
					if (buf[i + 1] == 'F' && buf[i + 2] == 'I') {
						puts_("  KMSG-CFI: ");
						puts_(buf);
						puts_("\n");
						break;
					}
				}
				if (buf[i] == 'O' && buf[i + 1] == 'o' &&
				    buf[i + 2] == 'p' && buf[i + 3] == 's') {
					puts_("  KMSG-Oops: ");
					puts_(buf);
					puts_("\n");
					break;
				}
			}
		}
		sys3(SYS_close, fd, 0, 0);
	}

fin:
	say("INIT-DONE", "powering off -- no rmmod by design");
	sys3(SYS_sync, 0, 0, 0);
	sys3(SYS_reboot, RB_POWER_OFF, 0, 0);
	say("INIT-DONE", "poweroff failed, exiting");
	sys3(SYS_exit, 0, 0, 0);
	for (;;)
		;
}
