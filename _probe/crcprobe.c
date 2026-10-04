// SPDX-License-Identifier: GPL-2.0
/*
 * CRC-precision probe.
 *
 * imports module_layout and __printk, so the module carries a __versions
 * section with the CRCs this tree computes. The test then corrupts those CRCs
 * to (a) the vendor modules' CRC and (b) an arbitrary wrong CRC, to see which
 * ones the running kernel accepts.
 *
 * module_layout is present in all 293 vendor modules with crc 0222dd63.
 */
#include <linux/init.h>
#include <linux/module.h>

extern int vprintk_emit(int facility, int level, const char *dict, size_t dictlen,
			const char *fmt, va_list args);

static int __init abk_crc_probe_init(void)
{
	pr_info("abk_crc_probe: loaded OK\n");
	return 0;
}

static void __exit abk_crc_probe_exit(void)
{
	pr_info("abk_crc_probe: unloaded\n");
}

module_init(abk_crc_probe_init);
module_exit(abk_crc_probe_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ABK CRC precision probe");
