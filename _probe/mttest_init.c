/* mtdoops QEMU test init -- freestanding, no libc (reuses init_nolibc syscall style).
 *
 * Mode comes from the kernel cmdline: "mtdtest=panic" or "mtdtest=read".
 *
 * panic mode: print canary lines to the console, sync, enable sysrq, then
 *   echo c > /proc/sysrq-trigger  ->  kernel panic  ->  kmsg_dump -> mtdoops
 *   writes the console into /dev/mtd0 (block2mtd of the virtio disk).
 *   QEMU runs with -no-reboot so the VM exits on the panic.
 *
 * read mode: open /dev/mtd0, scan for the canary, print verdict, power off.
 */

#define SYS_mount        40
#define SYS_openat       56
#define SYS_read         63
#define SYS_write        64
#define SYS_close        57
#define SYS_sync         51
#define SYS_reboot       142
#define SYS_exit         93
#define SYS_nanosleep    101

#define AT_FDCWD        -100
#define O_RDONLY        0
#define O_WRONLY        1
#define O_RDWR          2
#define SEEK_SET        0
#define RB_POWER_OFF    0x4321fedc

static long sys4(long n, long a, long b, long c)
{
	register long x8 __asm__("x8") = n;
	register long x0 __asm__("x0") = a;
	register long x1 __asm__("x1") = b;
	register long x2 __asm__("x2") = c;
	__asm__ volatile("svc #0" : "+r"(x0) : "r"(x1), "r"(x2), "r"(x8) : "memory", "cc");
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
	__asm__ volatile("svc #0" : "+r"(x0) : "r"(x1), "r"(x2), "r"(x3), "r"(x4), "r"(x8) : "memory", "cc");
	return x0;
}

static int streq(const char *a, const char *b)
{
	while (*a && *a == *b) { a++; b++; }
	return *a == *b;
}

static void puts(const char *s)
{
	const char *p = s;
	while (*p) p++;
	sys4(SYS_write, 1, (long)s, p - s);
}

static void sleep_s(long s)
{
	struct { long s, ns; } t = { s, 0 };
	sys6(SYS_nanosleep, (long)&t, 0, 0, 0, 0);
}

static void mount_all(void)
{
	sys6(SYS_mount, (long)"proc", (long)"/proc", (long)"proc", 0, 0);
	sys6(SYS_mount, (long)"sysfs", (long)"/sys", (long)"sysfs", 0, 0);
	sys6(SYS_mount, (long)"devtmpfs", (long)"/dev", (long)"devtmpfs", 0, 0);
}

/* read whole file into buf, return length (or negative) */
static long slurp(const char *path, char *buf, long cap)
{
	long fd = sys6(SYS_openat, AT_FDCWD, (long)path, O_RDONLY, 0, 0);
	if (fd < 0) return fd;
	long n = sys4(SYS_read, fd, (long)buf, cap - 1);
	sys4(SYS_close, fd, 0, 0);
	if (n >= 0) buf[n] = 0;
	return n;
}

__asm__(
	".global _start\n"
	"_start:\n"
	"	bl main1\n"
	"	b .\n"
);

void main1(void)
{
	char buf[4096];
	long n;
	int read_mode = 0;

	mount_all();

	n = slurp("/proc/cmdline", buf, sizeof(buf));
	if (n > 0) {
		/* crude scan for mtdtest=read */
		for (long i = 0; i + 12 < n; i++)
			if (buf[i] == 'm' && buf[i+1] == 't' && buf[i+2] == 'd' &&
			    buf[i+3] == 't' && buf[i+4] == 'e' && buf[i+5] == 's' &&
			    buf[i+6] == 't' && buf[i+7] == '=' && buf[i+8] == 'r')
				read_mode = 1;
	}

	puts("\n== MTDOOPS-TEST mode: ");
	puts(read_mode ? "read ==\n" : "panic ==\n");

	n = slurp("/proc/mtd", buf, sizeof(buf));
	if (n > 0) { puts("/proc/mtd:\n"); puts(buf); puts("\n"); }
	else puts("/proc/mtd read failed\n");

	if (!read_mode) {
		puts("MTDOOPS-CANARY-sailboat-777\n");
		puts("MTDOOPS-CANARY-second-line\n");
		sys4(SYS_sync, 0, 0, 0);
		/* enable all sysrq */
		{
			long fd = sys6(SYS_openat, AT_FDCWD, (long)"/proc/sys/kernel/sysrq", O_WRONLY, 0, 0);
			if (fd >= 0) { sys4(SYS_write, fd, (long)"1", 1); sys4(SYS_close, fd, 0, 0); }
		}
		sleep_s(2);
		{
			long fd = sys6(SYS_openat, AT_FDCWD, (long)"/proc/sysrq-trigger", O_WRONLY, 0, 0);
			if (fd >= 0) {
				sys4(SYS_write, fd, (long)"c", 1);
				sys4(SYS_close, fd, 0, 0);
			} else {
				puts("sysrq-trigger open failed\n");
			}
		}
		/* if we get here, no panic happened */
		puts("MTDOOPS-TEST-NO-PANIC\n");
	} else {
		/* read /dev/mtd0 raw and scan for canary */
		static char big[16 * 1024 * 1024]; /* BSS, up to 16MB */
		long fd = sys6(SYS_openat, AT_FDCWD, (long)"/dev/mtd0", O_RDONLY, 0, 0);
		if (fd < 0) {
			puts("MTDOOPS-TEST-FAIL open /dev/mtd0\n");
		} else {
			long off = 0, found = -1;
			while (1) {
				long r = sys4(SYS_read, fd, (long)big, (long)sizeof(big));
				if (r <= 0) break;
				for (long i = 0; i + 25 <= r; i++)
					if (big[i] == 'M' && big[i+1] == 'T' && big[i+2] == 'D' &&
					    big[i+3] == 'O' && big[i+4] == 'O' && big[i+5] == 'P' &&
					    big[i+6] == 'S' && big[i+7] == '-') {
						found = off + i;
						break;
					}
				off += r;
				if (found >= 0) break;
			}
			sys4(SYS_close, fd, 0, 0);
			if (found >= 0) {
				puts("MTDOOPS-TEST-PASS canary at byte ");
				/* print found as decimal */
				char num[24]; int k = 23; num[k--] = 0;
				long v = found;
				if (v == 0) num[k--] = '0';
				while (v > 0) { num[k--] = '0' + (v % 10); v /= 10; }
				puts(&num[k+1]);
				puts("\n");
			} else {
				puts("MTDOOPS-TEST-FAIL canary not found in mtd0\n");
			}
		}
	}

	sys4(SYS_sync, 0, 0, 0);
	sleep_s(1);
	sys6(SYS_reboot, RB_POWER_OFF, 0, 0, 0, 0);
	sys4(SYS_exit, 0, 0, 0);
}
