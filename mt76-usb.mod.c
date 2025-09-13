#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(__mt76u_vendor_request, "_gpl", "");
KSYMTAB_FUNC(mt76u_vendor_request, "_gpl", "");
KSYMTAB_FUNC(___mt76u_rr, "_gpl", "");
KSYMTAB_FUNC(___mt76u_wr, "_gpl", "");
KSYMTAB_FUNC(mt76u_read_copy, "_gpl", "");
KSYMTAB_FUNC(mt76u_single_wr, "_gpl", "");
KSYMTAB_FUNC(mt76u_alloc_mcu_queue, "_gpl", "");
KSYMTAB_FUNC(mt76u_stop_rx, "_gpl", "");
KSYMTAB_FUNC(mt76u_resume_rx, "_gpl", "");
KSYMTAB_FUNC(mt76u_stop_tx, "_gpl", "");
KSYMTAB_FUNC(mt76u_queues_deinit, "_gpl", "");
KSYMTAB_FUNC(mt76u_alloc_queues, "_gpl", "");
KSYMTAB_FUNC(__mt76u_init, "_gpl", "");
KSYMTAB_FUNC(mt76u_init, "_gpl", "");

SYMBOL_CRC(__mt76u_vendor_request, 0x0df21906, "_gpl");
SYMBOL_CRC(mt76u_vendor_request, 0x0df21906, "_gpl");
SYMBOL_CRC(___mt76u_rr, 0xbc56a893, "_gpl");
SYMBOL_CRC(___mt76u_wr, 0x608776f9, "_gpl");
SYMBOL_CRC(mt76u_read_copy, 0xeb33d7f2, "_gpl");
SYMBOL_CRC(mt76u_single_wr, 0xce42dfb5, "_gpl");
SYMBOL_CRC(mt76u_alloc_mcu_queue, 0xe14f1aa3, "_gpl");
SYMBOL_CRC(mt76u_stop_rx, 0x49309e84, "_gpl");
SYMBOL_CRC(mt76u_resume_rx, 0xe14f1aa3, "_gpl");
SYMBOL_CRC(mt76u_stop_tx, 0x49309e84, "_gpl");
SYMBOL_CRC(mt76u_queues_deinit, 0x49309e84, "_gpl");
SYMBOL_CRC(mt76u_alloc_queues, 0xe14f1aa3, "_gpl");
SYMBOL_CRC(__mt76u_init, 0xa2b881fd, "_gpl");
SYMBOL_CRC(mt76u_init, 0xaf8471a9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc5ceac9d, "usb_free_urb" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0x457edffd, "skb_put" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xe24974bd, "trace_raw_output_prep" },
	{ 0x4fc539a3, "__trace_trigger_soft_disabled" },
	{ 0xc87f4bab, "finish_wait" },
	{ 0xcd43ac71, "trace_event_printf" },
	{ 0xbd03ed67, "this_cpu_off" },
	{ 0x27f56809, "trace_event_raw_init" },
	{ 0xa53f4e29, "memcpy" },
	{ 0x7b79fc00, "mt76_has_tx_pending" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x61196007, "bpf_trace_run2" },
	{ 0x0db8d68d, "prepare_to_wait_event" },
	{ 0x16ab4215, "__wake_up" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0xd8248fc3, "kthread_park" },
	{ 0xaa017f62, "sched_set_fifo_low" },
	{ 0xd272d446, "__fentry__" },
	{ 0x353fef8f, "mt76_tx_status_check" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x9f66d3bb, "trace_event_buffer_commit" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xa21e2f95, "page_frag_free" },
	{ 0xe37614eb, "___ratelimit" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x2bb73069, "__alloc_skb" },
	{ 0x00512d43, "usb_submit_urb" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xeafded1c, "kthread_unpark" },
	{ 0x44decd6f, "hugetlb_optimize_vmemmap_key" },
	{ 0x09e07c0a, "build_skb" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x98aacd62, "perf_trace_buf_alloc" },
	{ 0x60f01a84, "perf_trace_run_bpf_submit" },
	{ 0x7444c00b, "_dev_err" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x005b7b07, "usb_control_msg" },
	{ 0xc5ceac9d, "usb_poison_urb" },
	{ 0x08aebaba, "trace_event_reg" },
	{ 0xc609ff70, "strncpy" },
	{ 0xc5ceac9d, "usb_unpoison_urb" },
	{ 0x3c1b1a7c, "mt76_ac_to_hwq" },
	{ 0xbd03ed67, "phys_base" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0xd8248fc3, "kthread_stop" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xc09c3d54, "mt76_queue_tx_complete" },
	{ 0xc8f3567c, "kthread_create_on_node" },
	{ 0xdd77fc03, "bpf_trace_run3" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0xf8cfc1cc, "mt76_rx_poll_complete" },
	{ 0x351d89ad, "trace_event_buffer_reserve" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x73bebd3f, "param_ops_bool" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0xc5ceac9d, "usb_kill_urb" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x75738bed, "__warn_printk" },
	{ 0xb86a39eb, "__mt76_worker_fn" },
	{ 0xc5ceac9d, "usb_init_urb" },
	{ 0x5465956b, "skb_add_rx_frag_netmem" },
	{ 0xa06938d4, "page_frag_cache_drain" },
	{ 0xea3c5fcf, "__page_frag_alloc_align" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x955467e2, "trace_handle_return" },
	{ 0x2b274678, "skb_to_sgvec" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0x9cb91b7f, "sg_init_table" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xc5ceac9d,
	0xbf9c33b7,
	0x457edffd,
	0xd272d446,
	0xd710adbf,
	0x49733ad6,
	0xe24974bd,
	0x4fc539a3,
	0xc87f4bab,
	0xcd43ac71,
	0xbd03ed67,
	0x27f56809,
	0xa53f4e29,
	0x7b79fc00,
	0x5d3be6f8,
	0x0feb1e94,
	0x61196007,
	0x0db8d68d,
	0x16ab4215,
	0xe1e1f979,
	0xd8248fc3,
	0xaa017f62,
	0xd272d446,
	0x353fef8f,
	0xbe0bf0cb,
	0x9f66d3bb,
	0x5a844b26,
	0xa21e2f95,
	0xe37614eb,
	0x6ac784f4,
	0xd272d446,
	0x2bb73069,
	0x00512d43,
	0x90a48d82,
	0xbd03ed67,
	0xeafded1c,
	0x44decd6f,
	0x09e07c0a,
	0x7a5ffe84,
	0x98aacd62,
	0x60f01a84,
	0x7444c00b,
	0xd272d446,
	0xf46d5bf3,
	0x005b7b07,
	0xc5ceac9d,
	0x08aebaba,
	0xc609ff70,
	0xc5ceac9d,
	0x3c1b1a7c,
	0xbd03ed67,
	0xb5c51982,
	0xfcc2e8f3,
	0xd8248fc3,
	0xc1e6c71e,
	0x81a1a811,
	0xd272d446,
	0xc09c3d54,
	0xc8f3567c,
	0xdd77fc03,
	0xbd03ed67,
	0xf8cfc1cc,
	0x351d89ad,
	0xf46d5bf3,
	0x73bebd3f,
	0x5a844b26,
	0xc5ceac9d,
	0x2d88a3ab,
	0x75738bed,
	0xb86a39eb,
	0xc5ceac9d,
	0x5465956b,
	0xa06938d4,
	0xea3c5fcf,
	0xe4de56b4,
	0xd272d446,
	0x955467e2,
	0x2b274678,
	0x5a844b26,
	0x9cb91b7f,
	0x7851be11,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"usb_free_urb\0"
	"devm_kmalloc\0"
	"skb_put\0"
	"__rcu_read_lock\0"
	"__kmalloc_noprof\0"
	"queue_work_on\0"
	"trace_raw_output_prep\0"
	"__trace_trigger_soft_disabled\0"
	"finish_wait\0"
	"trace_event_printf\0"
	"this_cpu_off\0"
	"trace_event_raw_init\0"
	"memcpy\0"
	"mt76_has_tx_pending\0"
	"pcpu_hot\0"
	"usleep_range_state\0"
	"bpf_trace_run2\0"
	"prepare_to_wait_event\0"
	"__wake_up\0"
	"_raw_spin_lock_irqsave\0"
	"kthread_park\0"
	"sched_set_fifo_low\0"
	"__fentry__\0"
	"mt76_tx_status_check\0"
	"wake_up_process\0"
	"trace_event_buffer_commit\0"
	"__x86_indirect_thunk_rax\0"
	"page_frag_free\0"
	"___ratelimit\0"
	"schedule_timeout\0"
	"__stack_chk_fail\0"
	"__alloc_skb\0"
	"usb_submit_urb\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"kthread_unpark\0"
	"hugetlb_optimize_vmemmap_key\0"
	"build_skb\0"
	"init_wait_entry\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"_dev_err\0"
	"__rcu_read_unlock\0"
	"mutex_lock\0"
	"usb_control_msg\0"
	"usb_poison_urb\0"
	"trace_event_reg\0"
	"strncpy\0"
	"usb_unpoison_urb\0"
	"mt76_ac_to_hwq\0"
	"phys_base\0"
	"__cpu_online_mask\0"
	"__local_bh_enable_ip\0"
	"kthread_stop\0"
	"__mutex_init\0"
	"_raw_spin_unlock_irqrestore\0"
	"__x86_return_thunk\0"
	"mt76_queue_tx_complete\0"
	"kthread_create_on_node\0"
	"bpf_trace_run3\0"
	"vmemmap_base\0"
	"mt76_rx_poll_complete\0"
	"trace_event_buffer_reserve\0"
	"mutex_unlock\0"
	"param_ops_bool\0"
	"__x86_indirect_thunk_rcx\0"
	"usb_kill_urb\0"
	"cancel_work_sync\0"
	"__warn_printk\0"
	"__mt76_worker_fn\0"
	"usb_init_urb\0"
	"skb_add_rx_frag_netmem\0"
	"page_frag_cache_drain\0"
	"__page_frag_alloc_align\0"
	"__ubsan_handle_load_invalid_value\0"
	"__SCT__preempt_schedule_notrace\0"
	"trace_handle_return\0"
	"skb_to_sgvec\0"
	"__x86_indirect_thunk_r8\0"
	"sg_init_table\0"
	"__SCT__might_resched\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76");


MODULE_INFO(srcversion, "F173E65570C75585F35E891");
