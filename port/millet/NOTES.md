# millet 移植笔记

- 上游反编译源：`modko-main/decompiled/millet.pdg.c`（70(6模块) 函数）+ `millet.meta.json`（reloc/GOT/thunk 统计，结构体偏移交叉核对用）
- 计划阶段：**F4**（见 HOME_FEATURES_PLAN.md §3）
- 依赖状态（对照设备 5.15.220 kallsyms，2026-10-26 实测）：

```
通信：netlink 0x1E（__netlink_kernel_create(init_net,0x1e)）
接口：/proc/millet/{millet_stat(读统计+写1清零),version}
版本："1"（与上游一致，排除版本号不匹配）
```

## 还原要点

全家重建：core(32)+binder(12)+pkg(12)+sig(5)+hs(6)+oem_cgroup(3)
背景：设备 vermeer 版已载但 0 喂数（实测 send=0/uid_rec 空/无 netlink socket；
重启 millet_monitor+system_server 后消息恢复但 363 条全败 → 协议代差）
netlink family 上游同为 0x1e，不变；对齐握手与消息结构（newversion）
卫星经 register_millet_hook 注入 core → 全家统一重建避免两代 ABI 失配
关键导出：register_millet_hook/unregister_millet_hook/millet_sendto_user/millet_sendmsg/init_millet_subsystem

## 实现进度

- [ ] src/ 逐函数还原（pdg.c 行号映射在实现时逐条补进本文件）
- [ ] 结构体/常量与 meta.json reloc 交叉核对
- [ ] 构建（_shared/BUILD.md）+ 第 6 级加载验证
- [ ] 专项验收（脚本与判据见 HOME_FEATURES_PLAN.md §5）
