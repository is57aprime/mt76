#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x44114c51, "mt76x02u_tx_complete_skb" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xbf9c33b7, "devm_kmalloc" },
	{ 0x444a6fe8, "mt76x0_set_sar_specs" },
	{ 0xef078812, "firmware_request_nowarn" },
	{ 0xbfa333f2, "mt76x02_set_key" },
	{ 0x26923678, "mt76_release_buffered_frames" },
	{ 0xf6efb7a9, "request_firmware" },
	{ 0x8134d220, "usb_register_driver" },
	{ 0x9b40f8ea, "mt76_get_txpower" },
	{ 0x38562629, "mt76_wake_tx_queue" },
	{ 0xc7594be5, "mt76_get_antenna" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x7375e7c1, "mt76x02_sta_ps" },
	{ 0xe14f1aa3, "mt76u_resume_rx" },
	{ 0xc031cef0, "mt76x02_sta_rate_tbl_update" },
	{ 0x26cf0a68, "__dynamic_dev_dbg" },
	{ 0xd272d446, "__fentry__" },
	{ 0x9afa6563, "mt76_alloc_device" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x1da2ef36, "usb_put_dev" },
	{ 0xf388472a, "usb_reset_device" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xb0a500a7, "mt76x02_update_channel" },
	{ 0x62798cf5, "usb_get_dev" },
	{ 0x7444c00b, "_dev_info" },
	{ 0x2088b784, "mt76x02_configure_filter" },
	{ 0x92cef2e6, "mt76_free_device" },
	{ 0x74dbf07d, "mt76x0_chip_onoff" },
	{ 0x71e24504, "mt76x02_queue_rx_skb" },
	{ 0x49309e84, "mt76u_queues_deinit" },
	{ 0xab0e9602, "ieee80211_queue_delayed_work" },
	{ 0x595a67b6, "mt76x0_config" },
	{ 0xa84c96b3, "mt76x0_register_device" },
	{ 0x7444c00b, "_dev_err" },
	{ 0x4c28f930, "mt76x02u_mcu_fw_reset" },
	{ 0x7c9cd166, "mt76x0_phy_calibrate" },
	{ 0xedf842a7, "mt76_set_tim" },
	{ 0x9b421662, "mt76x02_sw_scan_complete" },
	{ 0xe86dc867, "__mt76_poll_msec" },
	{ 0xca708229, "mt76x02_tx" },
	{ 0x01f20d7f, "mt76x02_sta_remove" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x056c43c7, "usb_deregister" },
	{ 0x22ded06e, "mt76x02_tx_status_data" },
	{ 0x876763b3, "mt76x02_sta_add" },
	{ 0x4c28f930, "mt76x0_mac_stop" },
	{ 0xbe88cf54, "mt76x02u_mcu_fw_send_data" },
	{ 0xaf8471a9, "mt76u_init" },
	{ 0x27ec0604, "mt76_get_survey" },
	{ 0x7444c00b, "_dev_warn" },
	{ 0x4c10fec5, "mt76x02u_init_mcu" },
	{ 0x1138550a, "mt76x02u_tx_prepare_skb" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x386e4ba3, "kmemdup_noprof" },
	{ 0xfb825c75, "mt76x02_set_rts_threshold" },
	{ 0xffc2758f, "mt76_sta_state" },
	{ 0xa84c96b3, "mt76x0_init_hardware" },
	{ 0xa84c96b3, "mt76x02u_mac_start" },
	{ 0xeba799da, "mt76x02_bss_info_changed" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0xe14f1aa3, "mt76u_alloc_queues" },
	{ 0x49309e84, "mt76u_stop_tx" },
	{ 0x4c28f930, "mt76x02u_init_beacon_config" },
	{ 0x185931d9, "ieee80211_unregister_hw" },
	{ 0x0df21906, "mt76u_vendor_request" },
	{ 0x63e83916, "mt76x02_add_interface" },
	{ 0x4c28f930, "mt76x02u_exit_beacon_config" },
	{ 0x49309e84, "mt76u_stop_rx" },
	{ 0x430d3af8, "mt76x02_ampdu_action" },
	{ 0x882af149, "mt76x02_conf_tx" },
	{ 0xfc9f408f, "mt76_sw_scan" },
	{ 0x79e6084c, "mt76_sta_pre_rcu_remove" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xe86dc867, "__mt76_poll" },
	{ 0x9b421662, "mt76x02_remove_interface" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x44114c51,
	0x1abc7887,
	0xbf9c33b7,
	0x444a6fe8,
	0xef078812,
	0xbfa333f2,
	0x26923678,
	0xf6efb7a9,
	0x8134d220,
	0x9b40f8ea,
	0x38562629,
	0xc7594be5,
	0xcb8b6ec6,
	0x0feb1e94,
	0x7375e7c1,
	0xe14f1aa3,
	0xc031cef0,
	0x26cf0a68,
	0xd272d446,
	0x9afa6563,
	0x5a844b26,
	0x1da2ef36,
	0xf388472a,
	0xd272d446,
	0xb0a500a7,
	0x62798cf5,
	0x7444c00b,
	0x2088b784,
	0x92cef2e6,
	0x74dbf07d,
	0x71e24504,
	0x49309e84,
	0xab0e9602,
	0x595a67b6,
	0xa84c96b3,
	0x7444c00b,
	0x4c28f930,
	0x7c9cd166,
	0xedf842a7,
	0x9b421662,
	0xe86dc867,
	0xca708229,
	0x01f20d7f,
	0xc1e6c71e,
	0x056c43c7,
	0x22ded06e,
	0x876763b3,
	0x4c28f930,
	0xbe88cf54,
	0xaf8471a9,
	0x27ec0604,
	0x7444c00b,
	0x4c10fec5,
	0x1138550a,
	0xd272d446,
	0x386e4ba3,
	0xfb825c75,
	0xffc2758f,
	0xa84c96b3,
	0xa84c96b3,
	0xeba799da,
	0x85acaba2,
	0xe14f1aa3,
	0x49309e84,
	0x4c28f930,
	0x185931d9,
	0x0df21906,
	0x63e83916,
	0x4c28f930,
	0x49309e84,
	0x430d3af8,
	0x882af149,
	0xfc9f408f,
	0x79e6084c,
	0xe4de56b4,
	0xe86dc867,
	0x9b421662,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt76x02u_tx_complete_skb\0"
	"release_firmware\0"
	"devm_kmalloc\0"
	"mt76x0_set_sar_specs\0"
	"firmware_request_nowarn\0"
	"mt76x02_set_key\0"
	"mt76_release_buffered_frames\0"
	"request_firmware\0"
	"usb_register_driver\0"
	"mt76_get_txpower\0"
	"mt76_wake_tx_queue\0"
	"mt76_get_antenna\0"
	"kfree\0"
	"usleep_range_state\0"
	"mt76x02_sta_ps\0"
	"mt76u_resume_rx\0"
	"mt76x02_sta_rate_tbl_update\0"
	"__dynamic_dev_dbg\0"
	"__fentry__\0"
	"mt76_alloc_device\0"
	"__x86_indirect_thunk_rax\0"
	"usb_put_dev\0"
	"usb_reset_device\0"
	"__stack_chk_fail\0"
	"mt76x02_update_channel\0"
	"usb_get_dev\0"
	"_dev_info\0"
	"mt76x02_configure_filter\0"
	"mt76_free_device\0"
	"mt76x0_chip_onoff\0"
	"mt76x02_queue_rx_skb\0"
	"mt76u_queues_deinit\0"
	"ieee80211_queue_delayed_work\0"
	"mt76x0_config\0"
	"mt76x0_register_device\0"
	"_dev_err\0"
	"mt76x02u_mcu_fw_reset\0"
	"mt76x0_phy_calibrate\0"
	"mt76_set_tim\0"
	"mt76x02_sw_scan_complete\0"
	"__mt76_poll_msec\0"
	"mt76x02_tx\0"
	"mt76x02_sta_remove\0"
	"__mutex_init\0"
	"usb_deregister\0"
	"mt76x02_tx_status_data\0"
	"mt76x02_sta_add\0"
	"mt76x0_mac_stop\0"
	"mt76x02u_mcu_fw_send_data\0"
	"mt76u_init\0"
	"mt76_get_survey\0"
	"_dev_warn\0"
	"mt76x02u_init_mcu\0"
	"mt76x02u_tx_prepare_skb\0"
	"__x86_return_thunk\0"
	"kmemdup_noprof\0"
	"mt76x02_set_rts_threshold\0"
	"mt76_sta_state\0"
	"mt76x0_init_hardware\0"
	"mt76x02u_mac_start\0"
	"mt76x02_bss_info_changed\0"
	"cancel_delayed_work_sync\0"
	"mt76u_alloc_queues\0"
	"mt76u_stop_tx\0"
	"mt76x02u_init_beacon_config\0"
	"ieee80211_unregister_hw\0"
	"mt76u_vendor_request\0"
	"mt76x02_add_interface\0"
	"mt76x02u_exit_beacon_config\0"
	"mt76u_stop_rx\0"
	"mt76x02_ampdu_action\0"
	"mt76x02_conf_tx\0"
	"mt76_sw_scan\0"
	"mt76_sta_pre_rcu_remove\0"
	"__ubsan_handle_load_invalid_value\0"
	"__mt76_poll\0"
	"mt76x02_remove_interface\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt76x02-usb,mt76x0-common,mt76x02-lib,mt76,mt76-usb,mac80211");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "F907775CD544432F4B7B18B");
