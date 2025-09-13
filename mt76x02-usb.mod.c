#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76x02u_mcu_fw_reset, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_mcu_fw_send_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_init_mcu, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_mac_start, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_init_beacon_config, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_exit_beacon_config, "_gpl", "");

SYMBOL_CRC(mt76x02u_mcu_fw_reset, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02u_mcu_fw_send_data, 0xbe88cf54, "_gpl");
SYMBOL_CRC(mt76x02u_init_mcu, 0x4c10fec5, "_gpl");
SYMBOL_CRC(mt76x02u_tx_complete_skb, 0x44114c51, "_gpl");
SYMBOL_CRC(mt76x02u_mac_start, 0xa84c96b3, "_gpl");
SYMBOL_CRC(mt76x02u_tx_prepare_skb, 0x1138550a, "_gpl");
SYMBOL_CRC(mt76x02u_init_beacon_config, 0x4c28f930, "_gpl");
SYMBOL_CRC(mt76x02u_exit_beacon_config, 0x4c28f930, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x82057247, "mt76x02_update_beacon_iter" },
	{ 0x56ba2d9e, "ieee80211_iterate_interfaces" },
	{ 0xa2b37555, "mt76x02_enqueue_buffered_bc" },
	{ 0x61c3386c, "mt76x02_remove_hdr_pad" },
	{ 0x457edffd, "skb_put" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x0d8b8609, "consume_skb" },
	{ 0xa53f4e29, "memmove" },
	{ 0x4c28f930, "mt76x02_resync_beacon_timer" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x7e8b5a27, "mt76_mcu_msg_alloc" },
	{ 0x9f8671cb, "mt76x02_mcu_parse_response" },
	{ 0xc36345fa, "__sw_hweight32" },
	{ 0x92cef2e6, "mt76_csa_check" },
	{ 0x316f0153, "mt76_tx_status_skb_add" },
	{ 0x535f4f5f, "hrtimer_init" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xce42dfb5, "mt76u_single_wr" },
	{ 0x4b4ef2ab, "__mt76_tx_complete_skb" },
	{ 0x357b42e6, "mt76x02_mac_reset_counters" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x6794f592, "ieee80211_get_hdrlen_from_skb" },
	{ 0xaef1f20d, "system_highpri_wq" },
	{ 0x26cf0a68, "__dynamic_dev_dbg" },
	{ 0xd272d446, "__fentry__" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x85e718bf, "usb_bulk_msg" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x92cef2e6, "mt76_csa_finish" },
	{ 0x2bb73069, "__alloc_skb" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x07d50c57, "idr_remove" },
	{ 0x7444c00b, "_dev_err" },
	{ 0x457edffd, "skb_pull" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x457edffd, "skb_push" },
	{ 0x4c28f930, "mt76x02_init_beacon_config" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xb2f66f9f, "mt76x02_mac_write_txwi" },
	{ 0x5fa07cc0, "hrtimer_start_range_ns" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x0df21906, "mt76u_vendor_request" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x6bb51a47, "mt76_skb_adjust_pad" },
	{ 0x36a36ab1, "hrtimer_cancel" },
	{ 0xa778a839, "mt76x02_mac_set_beacon" },
	{ 0x42244bac, "hrtimer_active" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x82057247,
	0x56ba2d9e,
	0xa2b37555,
	0x61c3386c,
	0x457edffd,
	0xd710adbf,
	0x0d8b8609,
	0xa53f4e29,
	0x4c28f930,
	0x49733ad6,
	0x7e8b5a27,
	0x9f8671cb,
	0xc36345fa,
	0x92cef2e6,
	0x316f0153,
	0x535f4f5f,
	0xa53f4e29,
	0xcb8b6ec6,
	0xce42dfb5,
	0x4b4ef2ab,
	0x357b42e6,
	0x0feb1e94,
	0x6794f592,
	0xaef1f20d,
	0x26cf0a68,
	0xd272d446,
	0x5a844b26,
	0x85e718bf,
	0xd272d446,
	0x92cef2e6,
	0x2bb73069,
	0x90a48d82,
	0x07d50c57,
	0x7444c00b,
	0x457edffd,
	0xf46d5bf3,
	0x457edffd,
	0x4c28f930,
	0x5a844b26,
	0xe54e0a6b,
	0xb2f66f9f,
	0x5fa07cc0,
	0xd272d446,
	0x82fd7238,
	0xf46d5bf3,
	0x0df21906,
	0x2d88a3ab,
	0x6bb51a47,
	0x36a36ab1,
	0xa778a839,
	0x42244bac,
	0xe4de56b4,
	0xe86dc867,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt76x02_update_beacon_iter\0"
	"ieee80211_iterate_interfaces\0"
	"mt76x02_enqueue_buffered_bc\0"
	"mt76x02_remove_hdr_pad\0"
	"skb_put\0"
	"__kmalloc_noprof\0"
	"consume_skb\0"
	"memmove\0"
	"mt76x02_resync_beacon_timer\0"
	"queue_work_on\0"
	"mt76_mcu_msg_alloc\0"
	"mt76x02_mcu_parse_response\0"
	"__sw_hweight32\0"
	"mt76_csa_check\0"
	"mt76_tx_status_skb_add\0"
	"hrtimer_init\0"
	"memcpy\0"
	"kfree\0"
	"mt76u_single_wr\0"
	"__mt76_tx_complete_skb\0"
	"mt76x02_mac_reset_counters\0"
	"usleep_range_state\0"
	"ieee80211_get_hdrlen_from_skb\0"
	"system_highpri_wq\0"
	"__dynamic_dev_dbg\0"
	"__fentry__\0"
	"__x86_indirect_thunk_rax\0"
	"usb_bulk_msg\0"
	"__stack_chk_fail\0"
	"mt76_csa_finish\0"
	"__alloc_skb\0"
	"__ubsan_handle_out_of_bounds\0"
	"idr_remove\0"
	"_dev_err\0"
	"skb_pull\0"
	"mutex_lock\0"
	"skb_push\0"
	"mt76x02_init_beacon_config\0"
	"__x86_indirect_thunk_r13\0"
	"__fortify_panic\0"
	"mt76x02_mac_write_txwi\0"
	"hrtimer_start_range_ns\0"
	"__x86_return_thunk\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"mutex_unlock\0"
	"mt76u_vendor_request\0"
	"cancel_work_sync\0"
	"mt76_skb_adjust_pad\0"
	"hrtimer_cancel\0"
	"mt76x02_mac_set_beacon\0"
	"hrtimer_active\0"
	"__ubsan_handle_load_invalid_value\0"
	"__mt76_poll\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76x02-lib,mac80211,mt76,mt76-usb,cfg80211");


MODULE_INFO(srcversion, "4DAC7789A1B9837C9709B51");
