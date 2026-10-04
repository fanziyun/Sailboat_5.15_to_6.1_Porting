// SPDX-License-Identifier: GPL-2.0
/*
 * Minimal Phase 1 init for an aarch64 QEMU rootfs.
 *
 * Cross-compile: aarch64-linux-gnu-gcc -static -o init init.c
 *
 * Why not busybox: an x86_64 busybox cannot run under an aarch64 kernel, and
 * there was no aarch64 toolchain available. This does the job with no deps.
 *
 * What it must do, in order:
 *   1. mount proc/sysfs/devtmpfs so insmod and /sys/module work
 *   2. probe the CFI-instrumented module via init_module()
 *   3. print distinctive markers to the serial console so the result is
 *      unambiguous in the QEMU log
 *   4. power off so QEMU exits instead of hanging
 *
 * It deliberately does NOT call delete_module(). On real hardware that path
 * is where a CFI mismatch panicked the kernel.
 */
#include <linux/kdev_t.h>
#include <linux/mount.h>
#include <sys/syscall.h>
#include <sys/mount.h>
#include <sys/reboot.h>
#include <sys/sysmacros.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#define MODPATH "/probe.ko"

static void say(const char *tag, const char *msg)
{
	/* stdout goes to the console, which QEMU -serial captures */
	printf("PHASE1-%s: %s\n", tag, msg);
	fflush(stdout);
}

static long do_init_module(void *img, unsigned long len, const char *args)
{
	return syscall(__NR_init_module, img, len, args);
}

int main(void)
{
	int fd;
	off_t sz;
	void *img;
	long rc;
	char buf[256];

	say("INIT-START", "userspace reached");

	/* 1. filesystems */
	if (mount("proc", "/proc", "proc", 0, NULL) != 0)
		printf("  mount proc: %s\n", strerror(errno));
	if (mount("sysfs", "/sys", "sysfs", 0, NULL) != 0)
		printf("  mount sysfs: %s\n", strerror(errno));
	if (mount("dev", "/dev", "devtmpfs", 0, NULL) != 0)
		printf("  mount devtmpfs: %s\n", strerror(errno));

	/* report the kernel this is running on */
	{
		int f = open("/proc/sys/kernel/osrelease", O_RDONLY);
		if (f >= 0) {
			int n = read(f, buf, sizeof(buf) - 1);
			if (n > 0) {
				buf[n] = '\0';
				char *nl = strchr(buf, '\n');
				if (nl)
					*nl = '\0';
				say("KERNEL", buf);
			}
			close(f);
		}
	}

	/* 2. load the CFI-instrumented module */
	fd = open(MODPATH, O_RDONLY);
	if (fd < 0) {
		say("INSMOD-FAIL", "cannot open " MODPATH);
		goto done;
	}
	sz = lseek(fd, 0, SEEK_END);
	lseek(fd, 0, SEEK_SET);
	img = malloc(sz);
	if (!img) {
		say("INSMOD-FAIL", "oom");
		close(fd);
		goto done;
	}
	if (read(fd, img, sz) != sz) {
		say("INSMOD-FAIL", "short read");
		close(fd);
		goto done;
	}
	close(fd);

	say("INSMOD-BEGIN", MODPATH);
	rc = do_init_module(img, sz, "");
	if (rc == 0) {
		say("INSMOD-OK", "init_module returned 0");
	} else {
		snprintf(buf, sizeof(buf), "init_module rc=%ld errno=%d (%s)",
			 rc, errno, strerror(errno));
		say("INSMOD-FAIL", buf);
	}

	/* 3. is it visible in sysfs, and did it init? */
	if (access("/sys/module/cfiprobe", F_OK) == 0) {
		say("MODULE-SYSFS", "/sys/module/cfiprobe exists");
		int f = open("/sys/module/cfiprobe/initstate", O_RDONLY);
		if (f >= 0) {
			int n = read(f, buf, sizeof(buf) - 1);
			if (n > 0) {
				buf[n] = '\0';
				say("MODULE-INITSTATE", buf);
			}
			close(f);
		}
	} else {
		say("MODULE-SYSFS", "NOT present -- load failed");
	}

	/* dump the kernel log so CFI failures would show up */
	{
		int k = open("/dev/kmsg", O_RDONLY | O_NONBLOCK);
		if (k >= 0) {
			int n;
			while ((n = read(k, buf, sizeof(buf) - 1)) > 0) {
				if (strstr(buf, "cfi") || strstr(buf, "CFI") ||
				    strstr(buf, "Oops") || strstr(buf, "disagrees"))
					printf("  KMSG: %s", buf);
			}
			close(k);
		}
	}

done:
	say("INIT-DONE", "powering off");
	sync();
	reboot(RB_POWER_OFF);
	say("INIT-DONE", "poweroff failed -- halting");
	return 0;
}
