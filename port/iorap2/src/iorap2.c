// SPDX-License-Identifier: GPL-2.0
/*
 * iorap2 — 上游 launch_boost 移植（还原自 modko-main/decompiled/iorap2.pdg.c，版本 3.0.0）
 *
 * 链路：官方 /system_ext/bin/iorapd（persist.sys.stability.PrereadEnable=true 拉起）
 *   ioctl(/dev/iorap_dev, _IOWR('L',1,…), {pkg}) 开始采集
 *   → android_vh_filemap_read / filemap_map_pages 记录 (file,pgoff) 页序
 *   → _IOWR('L',5,…) 结束采集（wake 等待队列）
 *   → iorapd 重启该应用时 _IOWR('L',7/8,…) 触发预读重放
 * 调试视图：/proc/iorap_node/collect
 * 逐函数映射见 ../NOTES.md。
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/mm.h>
#include <linux/magic.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <linux/uaccess.h>
#include <linux/miscdevice.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/wait.h>
#include <linux/workqueue.h>
#include <linux/pagemap.h>
#include <linux/sched/signal.h>
#include <linux/cred.h>
#include <trace/hooks/mm.h>

#define LB_VERSION_MAJOR 3
#define LB_VERSION_MINOR 0
#define LB_VERSION_REV   0

#define LB_MAX_FILES   0x800u                 /* 文件表容量（对齐上游 2048） */
#define LB_MAX_PAGES   (0x2b * 1024)          /* 页序主/备表容量（对齐上游 43*1024） */
#define LB_PKG_LEN     240                    /* 包名字段容量（结构 0x108 布局内） */

/* ioctl 用户结构（0x108=264B）：头部 8B + 包名 + 尾部 */
struct lb_ioctl_collect {
	__u64 head;
	char  pkg[LB_PKG_LEN];
	__u8  tail[16];
} __packed;

/* 0x118=280B：preread size 查询（in/out 同构） */
struct lb_ioctl_preread {
	__u64 head;
	char  pkg[LB_PKG_LEN];
	__u8  tail[25];
} __packed;

/* 文件表项：file / 去重键（inode 号） / 记录序号 */
struct lb_file_ent {
	struct file *file;
	unsigned long ino;
	u32 seq;
};

/* 页序表项：file / pgoff */
struct lb_page_ent {
	struct file *file;
	pgoff_t off;
};

struct lb_app {
	char pkg[LB_PKG_LEN];
	u32  uid;
	u32  timing_mode;              /* 0=file sequential, 1=real timing（is_real_timing_package） */
	bool active;
	struct file *files[LB_MAX_FILES];
	u32  file_num;
	struct lb_page_ent *pages;     /* 主表 */
	u32  page_num;
	struct lb_page_ent *pages2;    /* 备表（主表满后轮转，对齐上游 0xd098） */
	u32  page_num2;
	unsigned long mem_bytes;
	struct work_struct finish_work;
	wait_queue_head_t waitq;
};

static struct lb_app *g_app;                /* 采集中的 app（单活跃，对齐上游） */
static DEFINE_SPINLOCK(g_lock);
static bool enable_collect_trace;           /* hook 回调开关（采集窗口内为 true） */

/* 目标进程白名单（对齐上游 0x801be50 表：128 项；模式 0=pid 匹配 1=uid 匹配，
 * 上游按 task->*(0x718/0x71c) 比较——5.15 对应 tgid 与 fsuid） */
#define LB_MATCH_MAX 128
static u32 g_match_ids[LB_MATCH_MAX];
static u32 g_match_num;
static u32 g_match_mode;                    /* 0=pid, 1=uid */
static bool g_collect_active;               /* 原子级采集窗口（回调热路径读） */

static void lb_finish_work(struct work_struct *w);
static u64 g_total_mem;
static u32 g_app_num_file_seq, g_app_num_real_timing;

static struct proc_dir_entry *g_proc_node;

static bool pkg_is_ext234(struct file *file)
{
	struct super_block *sb;

	if (!file || !file_inode(file))
		return false;
	sb = file_inode(file)->i_sb;
	if (!sb)
		return false;
	return sb->s_magic == EXT4_SUPER_MAGIC ||
	       sb->s_magic == F2FS_SUPER_MAGIC ||
	       sb->s_magic == EROFS_SUPER_MAGIC_V1;
}

/* is_real_timing_package：上游按包名白名单判定 real-timing（相机/图库类低延迟应用）。
 * 语料未含白名单本体（用户态 property 下发），本移植以 0=file-sequential 兜底，
 * 后续可由 iorapd 写入的属性表扩展。 */
static int is_real_timing_package(const char *pkg)
{
	return 0;
}

/* 目标进程白名单命中判定（对齐 mi_lb_pagecache_collect 入口：模式1=uid / 模式0=pid） */
static bool lb_match_current(void)
{
	bool hit = false;
	u32 i, id;

	if (!g_collect_active)
		return false;
	if (g_match_mode == 1)
		id = __kuid_val(current_uid());   /* init-ns 数字，与 iorapd 下发的 uid 同一语义 */
	else
		id = current->tgid;
	for (i = 0; i < g_match_num; i++) {
		if (g_match_ids[i] == id) {
			hit = true;
			break;
		}
	}
	return hit;
}

/* ---- 页序登记（对齐 mi_lb_pagecache_collect：主表满→备表→丢弃） ---- */
static void lb_pagecache_collect(struct file *file, pgoff_t off, pgoff_t end)
{
	struct lb_app *app;
	struct lb_page_ent *tbl;
	u32 *cnt, i;
	unsigned long flags;

	if (!pkg_is_ext234(file))
		return;
	if (!lb_match_current())
		return;

	spin_lock_irqsave(&g_lock, flags);
	app = g_app;
	if (!app || !app->active)
		goto out;

	/* 文件表去重/登记（容量 0x800） */
	for (i = 0; i < app->file_num; i++) {
		if (app->files[i] == file)
			goto found;
	}
	if (app->file_num >= LB_MAX_FILES)
		goto out;
	app->files[app->file_num] = file;
	app->file_num++;
found:
	/* 页序逐页记录 */
	for (; off <= end && app->page_num + app->page_num2 < 2 * LB_MAX_PAGES; off++) {
		if (app->page_num < LB_MAX_PAGES) {
			tbl = app->pages;  cnt = &app->page_num;
		} else {
			tbl = app->pages2; cnt = &app->page_num2;
		}
		tbl[*cnt].file = file;
		tbl[*cnt].off  = off;
		(*cnt)++;
	}
out:
	spin_unlock_irqrestore(&g_lock, flags);
}

/* ---- vendor hook 回调 ---- */
static void lb_on_readfile(void *data, struct file *file, loff_t pos, size_t size)
{
	/* 对齐 mi_lb_page_collect_on_readfile：登记读窗口 [pos>>PAGE_SHIFT, +size] */
	if (enable_collect_trace && size)
		lb_pagecache_collect(file, pos >> PAGE_SHIFT,
				     (pos + size - 1) >> PAGE_SHIFT);
}

static void lb_on_pagefault(void *data, struct file *file, pgoff_t first,
			    pgoff_t last, vm_fault_t ret)
{
	/* 对齐 mi_lb_page_collect_on_pagefault：last!=first 时登记 [first,last] */
	if (enable_collect_trace && last != first)
		lb_pagecache_collect(file, first, last);
}

/* ---- ioctl 命令处理 ---- */

/* 按 uid 枚举全部进程 tgid 填白名单（对齐上游目标进程表；cap 128） */
static void lb_fill_match_table(u32 uid)
{
	struct task_struct *p;

	g_match_num = 0;
	rcu_read_lock();
	for_each_process(p) {
		if (g_match_num >= LB_MATCH_MAX)
			break;
		if (from_kuid_munged(current_user_ns(), task_uid(p)) == uid &&
		    uid_eq(task_uid(p), task_uid(p->group_leader)))
			g_match_ids[g_match_num++] = p->tgid;
	}
	rcu_read_unlock();
}

static void lb_collect_start(const struct lb_ioctl_collect *uc, int *ret)
{
	struct lb_app *app;
	unsigned long flags;

	spin_lock_irqsave(&g_lock, flags);
	if (g_app && g_app->active) {
		spin_unlock_irqrestore(&g_lock, flags);
		*ret = -EBUSY;
		return;
	}
	spin_unlock_irqrestore(&g_lock, flags);

	app = kzalloc(sizeof(*app), GFP_KERNEL);
	if (!app) {
		*ret = -ENOMEM;
		return;
	}
	strscpy(app->pkg, uc->pkg, sizeof(app->pkg));
	app->uid = uc->head;                     /* iorapd 在 head 里传目标 uid（实测 QQ=1000） */
	app->timing_mode = is_real_timing_package(app->pkg);
	app->pages  = kcalloc(LB_MAX_PAGES, sizeof(*app->pages), GFP_KERNEL);
	app->pages2 = kcalloc(LB_MAX_PAGES, sizeof(*app->pages2), GFP_KERNEL);
	if (!app->pages || !app->pages2) {
		kfree(app->pages);
		kfree(app->pages2);
		kfree(app);
		*ret = -ENOMEM;
		return;
	}
	init_waitqueue_head(&app->waitq);
	INIT_WORK(&app->finish_work, lb_finish_work);
	app->active = true;

	/* 目标进程白名单：模式1=uid 匹配（上游 0x801be4c 标志位），表项=该 uid 全部 tgid */
	g_match_mode = 1;
	lb_fill_match_table(app->uid);

	spin_lock_irqsave(&g_lock, flags);
	g_app = app;
	spin_unlock_irqrestore(&g_lock, flags);
	g_collect_active = true;
	enable_collect_trace = true;
	g_app_num_file_seq++;
	*ret = 0;
	pr_info("iorap2: collect start pkg=%s uid=%u mode=%u match_n=%u\n",
		app->pkg, app->uid, app->timing_mode, g_match_num);
}

static void lb_collect_end(const struct lb_ioctl_collect *uc, int *ret)
{
	struct lb_app *app;
	unsigned long flags;

	spin_lock_irqsave(&g_lock, flags);
	app = g_app;
	if (!app || !app->active || strcmp(app->pkg, uc->pkg)) {
		spin_unlock_irqrestore(&g_lock, flags);
		/* 对齐上游：包名不匹配仅记录，不视为错误 */
		*ret = 0;
		return;
	}
	spin_unlock_irqrestore(&g_lock, flags);

	g_collect_active = false;
	enable_collect_trace = false;
	schedule_work(&app->finish_work);   /* 对齐 cancel_delayed_work+wake_up 的收尾 */
	*ret = 0;
	pr_info("iorap2: collect end pkg=%s files=%u pages=%u+%u\n",
		app->pkg, app->file_num, app->page_num, app->page_num2);
}

static void lb_clear(const struct lb_ioctl_collect *uc)
{
	struct lb_app *app;
	unsigned long flags;

	spin_lock_irqsave(&g_lock, flags);
	app = g_app;
	spin_unlock_irqrestore(&g_lock, flags);
	if (!app)
		return;
	/* 对齐 mi_lb_dealwith_clear_cmd：清该包名记录（活动采集则一并终止） */
	if (strcmp(app->pkg, uc->pkg) == 0) {
		g_collect_active = false;
		enable_collect_trace = false;
		app->file_num = 0;
		app->page_num = 0;
		app->page_num2 = 0;
	}
}

/* ---- char 设备 ---- */
static int lb_open(struct inode *inode, struct file *filp)
{
	return 0;
}

static long lb_unlocked_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	struct lb_ioctl_collect uc;
	struct lb_ioctl_preread up;
	int ret = 0;
	u32 ver;

	switch (cmd) {
	case _IOWR('L', 1, struct lb_ioctl_collect):     /* collect start */
		if (copy_from_user(&uc, (void __user *)arg, sizeof(uc)))
			return -EFAULT;
		lb_collect_start(&uc, &ret);
		break;
	case _IOWR('L', 3, struct lb_ioctl_collect):     /* clear */
		if (copy_from_user(&uc, (void __user *)arg, sizeof(uc)))
			return -EFAULT;
		lb_clear(&uc);
		break;
	case _IOWR('L', 5, struct lb_ioctl_collect):     /* collect end */
		if (copy_from_user(&uc, (void __user *)arg, sizeof(uc)))
			return -EFAULT;
		lb_collect_end(&uc, &ret);
		break;
	case _IOWR('L', 7, struct lb_ioctl_preread):     /* preread size query */
		if (copy_from_user(&up, (void __user *)arg, sizeof(up)))
			return -EFAULT;
		/* 第一批：无预存记录 → 上游语义返回 -1 表示"该包无数据" */
		ret = -1;
		break;
	case _IOWR('L', 8, struct lb_ioctl_collect):     /* preread data import (变长) */
		ret = -ENODATA;                          /* 第二批实现 */
		break;
	case _IOR('L', 20, u32):                          /* version */
		ver = (LB_VERSION_MAJOR << 16) | (LB_VERSION_MINOR << 8) | LB_VERSION_REV;
		if (copy_to_user((void __user *)arg, &ver, sizeof(ver)))
			return -EFAULT;
		break;
	default:
		pr_info("iorap2: unknown cmd 0x%x\n", cmd);
		ret = -ENOTTY;
	}
	return ret;
}

static const struct file_operations lb_fops = {
	.open = lb_open,
	.unlocked_ioctl = lb_unlocked_ioctl,
	.compat_ioctl = compat_ptr_ioctl,
};

static struct miscdevice lb_misc = {
	.minor = MISC_DYNAMIC_MINOR,
	.name  = "iorap_dev",
	.fops  = &lb_fops,
	.mode  = 0666,
};

/* ---- /proc/iorap_node/collect（对齐 lb_collect_show 输出格式） ---- */
static int lb_collect_show(struct seq_file *m, void *v)
{
	struct lb_app *app;
	unsigned long flags;
	u32 i;

	seq_printf(m, "iorap version: %u.%u.%u\n", LB_VERSION_MAJOR, LB_VERSION_MINOR, LB_VERSION_REV);
	seq_printf(m, "total memory size %lu app_num: %u\n",
		   g_total_mem, g_app_num_file_seq + g_app_num_real_timing);

	spin_lock_irqsave(&g_lock, flags);
	app = g_app;
	if (!app || !app->file_num) {
		seq_write(m, "file sequential collect app is empty\n", 37);
	} else {
		seq_printf(m, "file sequential mode aps[%u] list:\n", g_app_num_file_seq);
		seq_printf(m, "[0] app:%s, uid:%u, file num: %u, mm size: %lu\n",
			   app->pkg, app->uid, app->file_num, app->mem_bytes >> 10);
		for (i = 0; i < app->file_num && i < 16; i++) {
			const char *nm = "?";
			if (app->files[i] && app->files[i]->f_path.dentry)
				nm = (const char *)app->files[i]->f_path.dentry->d_name.name;
			seq_printf(m, "  [%u] %s\n", i, nm);
		}
	}
	seq_printf(m, "real timing mode apps[%u] list:\n", g_app_num_real_timing);
	spin_unlock_irqrestore(&g_lock, flags);
	return 0;
}

static int lb_collect_open(struct inode *inode, struct file *file)
{
	return single_open(file, lb_collect_show, NULL);
}

static const struct proc_ops lb_collect_pops = {
	.proc_open = lb_collect_open,
	.proc_read = seq_read,
	.proc_lseek = seq_lseek,
	.proc_release = single_release,
};

/* ---- 采集收尾（work 回调：对齐 cancel_delayed_work+wake_up） ---- */
static void lb_finish_work(struct work_struct *w)
{
	struct lb_app *app = container_of(w, struct lb_app, finish_work);

	wake_up_all(&app->waitq);
}

/* ---- 模块生命周期 ---- */
static bool trace_registered;

static int __init iorap2_init(void)
{
	int ret;

	g_total_mem = totalram_pages() << PAGE_SHIFT;
	ret = misc_register(&lb_misc);
	if (ret) {
		pr_err("iorap2: misc_register failed %d\n", ret);
		return ret;
	}
	g_proc_node = proc_mkdir("iorap_node", NULL);
	if (!g_proc_node || !proc_create("collect", 0444, g_proc_node, &lb_collect_pops)) {
		misc_deregister(&lb_misc);
		remove_proc_entry("iorap_node", NULL);
		return -ENOMEM;
	}
	trace_registered = false;
	ret = tracepoint_probe_register(&__tracepoint_android_vh_filemap_read,
					lb_on_readfile, NULL);
	if (ret)
		goto err_proc;
	ret = tracepoint_probe_register(&__tracepoint_android_vh_filemap_map_pages,
					lb_on_pagefault, NULL);
	if (ret)
		goto err_unreg;
	pr_info("iorap2: %u.%u.%u loaded (dev=/dev/iorap_dev proc=/proc/iorap_node)\n",
		LB_VERSION_MAJOR, LB_VERSION_MINOR, LB_VERSION_REV);
	return 0;
err_unreg:
	tracepoint_probe_unregister(&__tracepoint_android_vh_filemap_read,
				    lb_on_readfile, NULL);
err_proc:
	proc_remove(g_proc_node);
	misc_deregister(&lb_misc);
	return ret;
}

static void __exit iorap2_exit(void)
{
	tracepoint_probe_unregister(&__tracepoint_android_vh_filemap_map_pages,
				    lb_on_pagefault, NULL);
	tracepoint_probe_unregister(&__tracepoint_android_vh_filemap_read,
				    lb_on_readfile, NULL);
	remove_proc_subtree("iorap_node", NULL);
	misc_deregister(&lb_misc);
}

module_init(iorap2_init);
module_exit(iorap2_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("iorap2 launch boost (homeport from upstream, ver 3.0.0)");
