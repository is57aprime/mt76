#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76s_read_pcr, "_gpl", "");
KSYMTAB_FUNC(mt76s_rr, "_gpl", "");
KSYMTAB_FUNC(mt76s_wr, "_gpl", "");
KSYMTAB_FUNC(mt76s_rmw, "_gpl", "");
KSYMTAB_FUNC(mt76s_write_copy, "_gpl", "");
KSYMTAB_FUNC(mt76s_read_copy, "_gpl", "");
KSYMTAB_FUNC(mt76s_wr_rp, "_gpl", "");
KSYMTAB_FUNC(mt76s_rd_rp, "_gpl", "");
KSYMTAB_FUNC(mt76s_hw_init, "_gpl", "");
KSYMTAB_FUNC(mt76s_alloc_rx_queue, "_gpl", "");
KSYMTAB_FUNC(mt76s_alloc_tx, "_gpl", "");
KSYMTAB_FUNC(mt76s_deinit, "_gpl", "");
KSYMTAB_FUNC(mt76s_init, "_gpl", "");
KSYMTAB_FUNC(mt76s_txrx_worker, "_gpl", "");
KSYMTAB_FUNC(mt76s_sdio_irq, "_gpl", "");
KSYMTAB_FUNC(mt76s_txqs_empty, "_gpl", "");

SYMBOL_CRC(mt76s_read_pcr, 0xa914451e, "_gpl");
SYMBOL_CRC(mt76s_rr, 0x99f8dc5d, "_gpl");
SYMBOL_CRC(mt76s_wr, 0xde954787, "_gpl");
SYMBOL_CRC(mt76s_rmw, 0x766ee612, "_gpl");
SYMBOL_CRC(mt76s_write_copy, 0x833a7dfe, "_gpl");
SYMBOL_CRC(mt76s_read_copy, 0x8143395f, "_gpl");
SYMBOL_CRC(mt76s_wr_rp, 0x13a18bc5, "_gpl");
SYMBOL_CRC(mt76s_rd_rp, 0x926035b2, "_gpl");
SYMBOL_CRC(mt76s_hw_init, 0x099cf2ef, "_gpl");
SYMBOL_CRC(mt76s_alloc_rx_queue, 0x6d98a0ae, "_gpl");
SYMBOL_CRC(mt76s_alloc_tx, 0x43981d2c, "_gpl");
SYMBOL_CRC(mt76s_deinit, 0xce85a814, "_gpl");
SYMBOL_CRC(mt76s_init, 0x30db4b76, "_gpl");
SYMBOL_CRC(mt76s_txrx_worker, 0xc3b098d0, "_gpl");
SYMBOL_CRC(mt76s_sdio_irq, 0x1406db9c, "_gpl");
SYMBOL_CRC(mt76s_txqs_empty, 0x3f3a50a0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x44decd6f, "devmap_managed_key" },
	{ 0x463c5e33, "sdio_release_host" },
	{ 0xbbfa4887, "sdio_disable_func" },
	{ 0x275cd6bd, "sdio_set_block_size" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0x457edffd, "skb_put" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x463c5e33, "sdio_claim_host" },
	{ 0x0d8b8609, "consume_skb" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xa53f4e29, "memcpy" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x16ab4215, "__wake_up" },
	{ 0xaa017f62, "sched_set_fifo_low" },
	{ 0xd272d446, "__fentry__" },
	{ 0x353fef8f, "mt76_tx_status_check" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xa1c35c7c, "__alloc_pages_noprof" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xbbfa4887, "sdio_release_irq" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x2bb73069, "__alloc_skb" },
	{ 0x7ec472ba, "numa_node" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0x44decd6f, "hugetlb_optimize_vmemmap_key" },
	{ 0x6d395ca8, "sdio_readsb" },
	{ 0x7444c00b, "_dev_err" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0xfc5f8088, "__SCK__tp_func_dev_irq" },
	{ 0x30a87ff8, "sdio_readl" },
	{ 0xbd03ed67, "phys_base" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x983be004, "__put_devmap_managed_folio_refs" },
	{ 0xd8248fc3, "kthread_stop" },
	{ 0x82fd7238, "__ubsan_handle_divrem_overflow" },
	{ 0x31b0304d, "sdio_writel" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xc09c3d54, "mt76_queue_tx_complete" },
	{ 0xc8f3567c, "kthread_create_on_node" },
	{ 0x9fa91036, "__tracepoint_dev_irq" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0xf8cfc1cc, "mt76_rx_poll_complete" },
	{ 0xdbb4076b, "__SCT__tp_func_dev_irq" },
	{ 0x578353fd, "__folio_put" },
	{ 0x97acb853, "ktime_get" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0xb86a39eb, "__mt76_worker_fn" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0xdbfcddaa, "sdio_claim_irq" },
	{ 0x6bb51a47, "mt76_skb_adjust_pad" },
	{ 0xbbfa4887, "sdio_enable_func" },
	{ 0x8f95ae42, "sdio_writesb" },
	{ 0x5465956b, "skb_add_rx_frag_netmem" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x44decd6f,
	0x463c5e33,
	0xbbfa4887,
	0x275cd6bd,
	0xbf9c33b7,
	0x457edffd,
	0xd272d446,
	0x463c5e33,
	0x0d8b8609,
	0x49733ad6,
	0xa53f4e29,
	0x5d3be6f8,
	0x0feb1e94,
	0x16ab4215,
	0xaa017f62,
	0xd272d446,
	0x353fef8f,
	0xbe0bf0cb,
	0x5a844b26,
	0xa1c35c7c,
	0xd272d446,
	0xbbfa4887,
	0xde338d9a,
	0x2bb73069,
	0x7ec472ba,
	0x90a48d82,
	0xbd03ed67,
	0x44decd6f,
	0x6d395ca8,
	0x7444c00b,
	0xd272d446,
	0xfc5f8088,
	0x30a87ff8,
	0xbd03ed67,
	0xb5c51982,
	0xfcc2e8f3,
	0x983be004,
	0xd8248fc3,
	0x82fd7238,
	0x31b0304d,
	0xd272d446,
	0xc09c3d54,
	0xc8f3567c,
	0x9fa91036,
	0xbd03ed67,
	0xf8cfc1cc,
	0xdbb4076b,
	0x578353fd,
	0x97acb853,
	0x2d88a3ab,
	0xb86a39eb,
	0xde338d9a,
	0xdbfcddaa,
	0x6bb51a47,
	0xbbfa4887,
	0x8f95ae42,
	0x5465956b,
	0xd272d446,
	0x7851be11,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"devmap_managed_key\0"
	"sdio_release_host\0"
	"sdio_disable_func\0"
	"sdio_set_block_size\0"
	"devm_kmalloc\0"
	"skb_put\0"
	"__rcu_read_lock\0"
	"sdio_claim_host\0"
	"consume_skb\0"
	"queue_work_on\0"
	"memcpy\0"
	"pcpu_hot\0"
	"usleep_range_state\0"
	"__wake_up\0"
	"sched_set_fifo_low\0"
	"__fentry__\0"
	"mt76_tx_status_check\0"
	"wake_up_process\0"
	"__x86_indirect_thunk_rax\0"
	"__alloc_pages_noprof\0"
	"__stack_chk_fail\0"
	"sdio_release_irq\0"
	"_raw_spin_unlock_bh\0"
	"__alloc_skb\0"
	"numa_node\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"hugetlb_optimize_vmemmap_key\0"
	"sdio_readsb\0"
	"_dev_err\0"
	"__rcu_read_unlock\0"
	"__SCK__tp_func_dev_irq\0"
	"sdio_readl\0"
	"phys_base\0"
	"__cpu_online_mask\0"
	"__local_bh_enable_ip\0"
	"__put_devmap_managed_folio_refs\0"
	"kthread_stop\0"
	"__ubsan_handle_divrem_overflow\0"
	"sdio_writel\0"
	"__x86_return_thunk\0"
	"mt76_queue_tx_complete\0"
	"kthread_create_on_node\0"
	"__tracepoint_dev_irq\0"
	"vmemmap_base\0"
	"mt76_rx_poll_complete\0"
	"__SCT__tp_func_dev_irq\0"
	"__folio_put\0"
	"ktime_get\0"
	"cancel_work_sync\0"
	"__mt76_worker_fn\0"
	"_raw_spin_lock_bh\0"
	"sdio_claim_irq\0"
	"mt76_skb_adjust_pad\0"
	"sdio_enable_func\0"
	"sdio_writesb\0"
	"skb_add_rx_frag_netmem\0"
	"__SCT__preempt_schedule_notrace\0"
	"__SCT__might_resched\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76");


MODULE_INFO(srcversion, "D056028279A72E493EE9240");
