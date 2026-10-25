// SPDX-License-Identifier: GPL-2.0
/*
 * dynamic_readahead — 上游模块移植（还原自 modko-main/decompiled/dynamic_readahead.pdg.c）
 * 功能：
 *   1) background 线程读文件时，预读窗口减半（ra_tuning_max_page / tune_mmap_readaround）
 *   2) 大页预读关闭（page_cache_ra_order_bypass；5.15 无该路径，回调保留为防御性）
 *   3) fault_around 动态位图（should_fault_around + fault_around 参数 set/get）
 * 见 ../NOTES.md 的逐函数映射与歧义记录。
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/mm.h>
#include <linux/pagemap.h>
#include <linux/sched.h>
#include <linux/string.h>
#include <linux/magic.h>
#include <linux/init.h>
#include <trace/hooks/mm.h>

static bool enable = true;
module_param(enable, bool, 0644);
MODULE_PARM_DESC(enable, "master switch (default on)");

static bool ra_close_large_folio_enable = true;
module_param(ra_close_large_folio_enable, bool, 0644);
MODULE_PARM_DESC(ra_close_large_folio_enable, "close large-folio readahead on ext4/f2fs/erofs");

#define FA_KEYS 512
static unsigned long fault_around_bitmap[BITS_TO_LONGS(FA_KEYS)];
static bool dynamic_fault_around_inited;
static unsigned long total_pages;

static bool is_background(void)
{
	/* 上游按当前线程名 "background" 判定（MIUI 后台线程池命名） */
	return !strncmp(current->comm, "background", 11);
}

/* android_vh_ra_tuning_max_page(ractl, max_page)：后台线程把 max_page 压到 ra_pages/2 */
static void adjust_readahead(void *data, struct readahead_control *ractl,
			     unsigned long *max_page)
{
	unsigned long half;

	if (!enable || !ractl || !ractl->file || !is_background())
		return;
	half = ractl->file->f_ra.ra_pages >> 1;
	if (*max_page > half)
		*max_page = half;
}

/* android_vh_tune_mmap_readaround(ra_pages, pgoff, start, size, async_size)：后台线程缩小窗口 */
static void adjust_readaround(void *data, unsigned int ra_pages, pgoff_t pgoff,
			      pgoff_t *start, unsigned int *size,
			      unsigned int *async_size)
{
	if (!enable || !is_background())
		return;
	*start = pgoff > (ra_pages >> 2) ? pgoff - (ra_pages >> 2) : 0;
	*size = ra_pages >> 1;
	*async_size = ra_pages >> 3;
}

/*
 * android_vh_page_cache_ra_order_bypass(file, ra, bypass)：
 * 上游在 ext4/f2fs/erofs 上关闭大页预读（ra->order=0 + bypass=1）。
 * 5.15 没有 page_cache_ra_order 路径，此回调不会被触发；逻辑保留以对齐上游。
 */
static void ra_close_lf_page_cache_ra_order_bypass(void *data, struct file *file,
						   struct file_ra_state *ra,
						   bool *bypass)
{
	struct super_block *sb;

	if (!file || !ra_close_large_folio_enable || !file_inode(file))
		return;
	sb = file_inode(file)->i_sb;
	if (!sb)
		return;
	if (sb->s_magic == EXT4_SUPER_MAGIC ||
	    sb->s_magic == F2FS_SUPER_MAGIC ||
	    sb->s_magic == EROFS_SUPER_MAGIC_V1)
		*bypass = true;
}

/* android_vh_should_fault_around(vmf, should_around)：key<512 查位图，其余放行（key 语义见 NOTES） */
static void should_fault_around_cb(void *data, struct vm_fault *vmf,
				   bool *should_around)
{
	unsigned int v = current->pid;

	if (v < FA_KEYS)
		*should_around = test_bit(v, fault_around_bitmap);
	else
		*should_around = true;
}

/* fault_around 参数写：0=清空全部；<512=置位；其余 -EINVAL / -ENOSPC（对齐上游返回码） */
static int fault_around_set(const char *buf, const struct kernel_param *kp)
{
	unsigned int val;
	int ret;

	ret = kstrtouint(buf, 10, &val);
	if (ret)
		return ret;
	if ((val >> 4) >= 625)		/* val >= 10000，对齐上游判定 */
		return -EINVAL;
	val %= 10000;
	if (val >= FA_KEYS)
		return -ENOSPC;
	if (val == 0)
		bitmap_zero(fault_around_bitmap, FA_KEYS);
	else
		set_bit(val, fault_around_bitmap);
	return 0;
}

/* fault_around 参数读：打印置位项（对齐上游：显示值 = 10000+idx） */
static int fault_around_get(char *buf, const struct kernel_param *kp)
{
	int len = 0, i;

	for (i = 0; i < FA_KEYS; i++) {
		if (test_bit(i, fault_around_bitmap))
			len += scnprintf(buf + len, PAGE_SIZE - len, "%u ", 10000 + i);
	}
	return len;
}

static const struct kernel_param_ops fault_around_ops = {
	.set = fault_around_set,
	.get = fault_around_get,
};
module_param_cb(fault_around, &fault_around_ops, NULL, 0644);
MODULE_PARM_DESC(fault_around, "write 0 to clear all, <512 to set bit; read shows 10000+idx");

static int __init dynamic_readahead_init(void)
{
	int ret;

	ret = tracepoint_probe_register(&__tracepoint_android_vh_ra_tuning_max_page,
					adjust_readahead, NULL);
	if (ret) {
		pr_err("dynamic_readahead: register ra_tuning_max_page failed %d\n", ret);
		return ret;
	}
	ret = tracepoint_probe_register(&__tracepoint_android_vh_tune_mmap_readaround,
					adjust_readaround, NULL);
	if (ret)
		goto un_ra;
	/* 防御式注册：page_cache_ra_order_bypass 在 5.15 Sailboat 原厂内核不存在
	 * （kci515 内核补齐后生效），缺失时降级继续而非失败 */
	ret = tracepoint_probe_register(&__tracepoint_android_vh_page_cache_ra_order_bypass,
					ra_close_lf_page_cache_ra_order_bypass, NULL);
	if (ret)
		pr_warn("dynamic_readahead: ra_order_bypass hook absent (%d), skip\n", ret);
	ret = tracepoint_probe_register(&__tracepoint_android_vh_should_fault_around,
					should_fault_around_cb, NULL);
	if (ret)
		goto un_around;
	dynamic_fault_around_inited = true;

	/* 上游逐 zone 累加页数仅用于诊断日志；GKI 不导出 pgdat 遍历符号，等价取 totalram */
	total_pages = totalram_pages();
	pr_info("dynamic_readahead: loaded, total_pages=%lu\n", total_pages);
	return 0;

un_bypass:
	tracepoint_probe_unregister(&__tracepoint_android_vh_page_cache_ra_order_bypass,
				     ra_close_lf_page_cache_ra_order_bypass, NULL);
un_around:
	tracepoint_probe_unregister(&__tracepoint_android_vh_tune_mmap_readaround,
				     adjust_readaround, NULL);
un_ra:
	tracepoint_probe_unregister(&__tracepoint_android_vh_ra_tuning_max_page,
				     adjust_readahead, NULL);
	return ret;
}

static void __exit dynamic_readahead_exit(void)
{
	if (dynamic_fault_around_inited)
		tracepoint_probe_unregister(&__tracepoint_android_vh_should_fault_around,
					     should_fault_around_cb, NULL);
	tracepoint_probe_unregister(&__tracepoint_android_vh_page_cache_ra_order_bypass,
				     ra_close_lf_page_cache_ra_order_bypass, NULL);
	tracepoint_probe_unregister(&__tracepoint_android_vh_tune_mmap_readaround,
				     adjust_readaround, NULL);
	tracepoint_probe_unregister(&__tracepoint_android_vh_ra_tuning_max_page,
				     adjust_readahead, NULL);
}

module_init(dynamic_readahead_init);
module_exit(dynamic_readahead_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("dynamic pagecache readahead (homeport from upstream)");
