// SPDX-License-Identifier: GPL-2.0
/*
 * Phase 1 probe.
 *
 * Built against a kernel with CONFIG_CFI_CLANG=y so it carries the
 * .text.__cfi_check section that the device's 293 vendor modules all have.
 *
 * The whole point: on the real device, a module WITHOUT this section panicked
 * the kernel with
 *     CFI failure (target: cleanup_module ...)
 * because an indirect call through the module's CFI jump table could not be
 * validated. This probe is built the way the vendor modules are built, so it
 * should load, initialise and unload cleanly on a 6.1 kernel.
 *
 * It also touches a sysfs file and a workqueue, which forces several indirect
 * calls -- those are the calls CFI checks.
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sysfs.h>
#include <linux/kobject.h>
#include <linux/workqueue.h>

static struct kobject *cfiprobe_kobj;

static void cfiprobe_work(struct work_struct *work)
{
	pr_info("cfiprobe: workqueue ran\n");
}
static DECLARE_WORK(cfiprobe_wq, cfiprobe_work);

static ssize_t cfiprobe_show(struct kobject *kobj,
			     struct kobj_attribute *attr, char *buf)
{
	/* indirect-call heavy: schedule_work, sysfs_emit */
	schedule_work(&cfiprobe_wq);
	return sysfs_emit(buf, "cfiprobe ok kernel=%s\n", UTS_RELEASE);
}
static struct kobj_attribute cfiprobe_attr = __ATTR(status, 0444, cfiprobe_show, NULL);

static int __init cfiprobe_init(void)
{
	int ret;

	cfiprobe_kobj = kobject_create_and_add("cfiprobe", kernel_kobj);
	if (!cfiprobe_kobj)
		return -ENOMEM;

	ret = sysfs_create_file(cfiprobe_kobj, &cfiprobe_attr.attr);
	if (ret) {
		kobject_put(cfiprobe_kobj);
		return ret;
	}

	pr_info("cfiprobe: loaded on %s (CFI-instrumented)\n", UTS_RELEASE);
	return 0;
}

static void __exit cfiprobe_exit(void)
{
	sysfs_remove_file(cfiprobe_kobj, &cfiprobe_attr.attr);
	kobject_put(cfiprobe_kobj);
	pr_info("cfiprobe: unloaded cleanly\n");
}

module_init(cfiprobe_init);
module_exit(cfiprobe_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Phase 1 CFI probe");
